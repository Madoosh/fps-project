/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "OnlineSubsystemSteamCore.h"
#include "Interfaces/OnlineIdentityInterfaceSteamCore.h"
#include "Interfaces/OnlineSessionInterfaceSteamCore.h"
#include "OnlineSubsystemPrivateSteamCorePCH.h"

/**
 * Callback function into Steam error messaging system
 * @param Severity - error level
 * @param Message - message from Steam
 */
static void __cdecl SteamworksWarningMessageHook(int Severity, const char *Message)
{
	const TCHAR *MessageType;
	switch (Severity)
	{
	case 0: MessageType = TEXT("message"); break;
	case 1: MessageType = TEXT("warning"); break;
	default: MessageType = TEXT("notification"); break;  // Unknown severity; new SDK?
	}
	UE_LOG_ONLINE(Warning, TEXT("Steamworks SDK %s: %s"), MessageType, UTF8_TO_TCHAR(Message));
}

class FScopeSandboxContext
{
private:
	/** Previous state of sandbox enable */
	bool bSandboxWasEnabled;

	FScopeSandboxContext() {}

public:
	FScopeSandboxContext(bool bSandboxEnabled)
	{
		bSandboxWasEnabled = IFileManager::Get().IsSandboxEnabled();
		IFileManager::Get().SetSandboxEnabled(bSandboxEnabled);
	}

	~FScopeSandboxContext()
	{
		IFileManager::Get().SetSandboxEnabled(bSandboxWasEnabled);
	}
};

inline FString GetSteamAppIdFilename()
{
	return FString::Printf(TEXT("%s%s"), FPlatformProcess::BaseDir(), STEAMCOREAPPIDFILENAME);
}

#if !UE_BUILD_SHIPPING && !UE_BUILD_SHIPPING_WITH_EDITOR
/**
 * Write out the steam app id to the steam_appid.txt file before initializing the API
 * @param SteamAppId id assigned to the application by Steam
 */
static bool WriteSteamAppIdToDisk(int32 SteamAppId)
{
	if (SteamAppId > 0)
	{
		// Turn off sandbox temporarily to make sure file is where it's always expected
		FScopeSandboxContext ScopedSandbox(false);

		// Access the physical file writer directly so that we still write next to the executable in CotF builds.
		FString SteamAppIdFilename = GetSteamAppIdFilename();
		IFileHandle* Handle = IPlatformFile::GetPlatformPhysical().OpenWrite(*SteamAppIdFilename, false, false);
		if (!Handle)
		{
			UE_LOG_ONLINE(Error, TEXT("Failed to create file: %s"), *SteamAppIdFilename);
			return false;
		}
		else
		{
			FString AppId = FString::Printf(TEXT("%d"), SteamAppId);

			FBufferArchive Archive;
			Archive.Serialize((void*)TCHAR_TO_ANSI(*AppId), AppId.Len());

			Handle->Write(Archive.GetData(), Archive.Num());
			delete Handle;
			Handle = nullptr;

			return true;
		}
	}

	UE_LOG_ONLINE(Warning, TEXT("Steam App Id provided (%d) is invalid, must be greater than 0!"), SteamAppId);
	return false;
}

/**
 * Deletes the app id file from disk
 */
static void DeleteSteamAppIdFromDisk()
{
	const FString SteamAppIdFilename = GetSteamAppIdFilename();
	// Turn off sandbox temporarily to make sure file is where it's always expected
	FScopeSandboxContext ScopedSandbox(false);
	if (FPaths::FileExists(*SteamAppIdFilename))
	{
		bool bSuccessfullyDeleted = IFileManager::Get().Delete(*SteamAppIdFilename);
	}
}

#endif // !UE_BUILD_SHIPPING && !UE_BUILD_SHIPPING_WITH_EDITOR

/**
 * Configure various dev options before initializing Steam
 *
 * @param RequireRelaunch enforce the Steam client running precondition
 * @param RelaunchAppId appid to launch when the Steam client is loaded
 *
 * @return if this sequence completed without any serious errors
 */
bool ConfigureSteamCoreInitDevOptions(bool& RequireRelaunch, int32& RelaunchAppId)
{
#if !UE_BUILD_SHIPPING && !UE_BUILD_SHIPPING_WITH_EDITOR
	// Write out the steam_appid.txt file before launching
	if (!GConfig->GetInt(TEXT("OnlineSubsystemSteamCore"), TEXT("SteamDevAppId"), RelaunchAppId, GEngineIni))
	{
		UE_LOG_ONLINE(Warning, TEXT("Missing SteamDevAppId key in OnlineSubsystemSteam of DefaultEngine.ini"));
		return false;
	}
	else
	{
		if (!WriteSteamAppIdToDisk(RelaunchAppId))
		{
			UE_LOG_ONLINE(Warning, TEXT("Could not create/update the steam_appid.txt file! Make sure the directory is writable and there isn't another instance using this file"));
			return false;
		}
	}

	// Should the game force a relaunch in Steam if the client isn't already loaded
	if (!GConfig->GetBool(TEXT("OnlineSubsystemSteamCore"), TEXT("bRelaunchInSteam"), RequireRelaunch, GEngineIni))
	{
		UE_LOG_ONLINE(Warning, TEXT("Missing bRelaunchInSteam key in OnlineSubsystemSteam of DefaultEngine.ini"));
	}

#else
	// Always check against the Steam client when shipping
	RequireRelaunch = true;
	RelaunchAppId = UE4_PROJECT_STEAMSHIPPINGID;
#endif

	return true;
}

FOnlineSubsystemSteamCore::FOnlineSubsystemSteamCore(FName InInstanceName)
	: FOnlineSubsystemImpl(STEAMCORE_SUBSYSTEM, InInstanceName)
	, bSteamworksClientInitialized(false)
	, bSteamworksGameServerInitialized(false)
	, SteamAppID(0)
	, GameServerSteamPort(0)
	, GameServerGamePort(0)
	, GameServerQueryPort(0)
	, SteamAPIClientHandle(nullptr)
	, SteamAPIServerHandle(nullptr)
{}

void FOnlineSubsystemSteamCore::ReInit()
{
	StartTicker();
}

bool FOnlineSubsystemSteamCore::Tick(float DeltaTime)
{
	if (!FOnlineSubsystemImpl::Tick(DeltaTime))
	{
		return false;
	}

	if (SessionInterface)
	{
		SessionInterface->Tick(DeltaTime);
	}

	return true;
}

FString FOnlineSubsystemSteamCore::GetAppId() const
{
	return FString::Printf(TEXT("%d"), GetSteamAppId());
}

bool FOnlineSubsystemSteamCore::Init()
{
	bool bRelaunchInSteam = false;
	int RelaunchAppId = 0;

	if (!ConfigureSteamCoreInitDevOptions(bRelaunchInSteam, RelaunchAppId))
	{
		UE_LOG_ONLINE(Warning, TEXT("Could not set up the steam environment! Falling back to another OSS."));
		return false;
	}

	const bool bIsServer = IsRunningDedicatedServer();
	bool bAttemptServerInit = true;

	/*
	#if !UE_BUILD_SHIPPING
		// Add a bypass for NetcodeUnitTest, to allow running a Steam server + client from same machine, by disabling server init on client.
		// This is an unapproved/unsupported method for using OnlineSubsystemSteam.
		bAttemptServerInit = bIsServer || !!OSSConsoleVariables::CVarSteamInitServerOnClient.GetValueOnGameThread();
	#endif*/

	// Don't initialize the Steam Client API if we are launching as a server
	bool bClientInitSuccess = !bIsServer ? InitSteamworksClient(bRelaunchInSteam, RelaunchAppId) : true;

	// Initialize the Steam Server API if this is a dedicated server or
	//  the Client API was successfully initialized
	bool bServerInitSuccess = bClientInitSuccess ? (!bAttemptServerInit || InitSteamworksServer()) : false;

	if (bClientInitSuccess && bServerInitSuccess)
	{
		// Create the online async task thread
		/*OnlineAsyncTaskThreadRunnable = new FOnlineAsyncTaskManagerSteam(this);
		check(OnlineAsyncTaskThreadRunnable);
		OnlineAsyncTaskThread = FRunnableThread::Create(OnlineAsyncTaskThreadRunnable, *FString::Printf(TEXT("OnlineAsyncTaskThreadSteam %s"), *InstanceName.ToString()), 128 * 1024, TPri_Normal);
		check(OnlineAsyncTaskThread);*/

		//UE_LOG_ONLINE(Verbose, TEXT("Created thread (ID:%d)."), OnlineAsyncTaskThread->GetThreadID());

		/*SessionInterface = MakeShareable(new FOnlineSessionSteam(this));
		SessionInterface->CheckPendingSessionInvite();

		IdentityInterface = MakeShareable(new FOnlineIdentitySteam(this));

		PresenceInterface = MakeShareable(new FOnlinePresenceSteam(this));

		AuthInterfaceUtils = MakeShareable(new FOnlineAuthUtilsSteam());
		AuthInterface = MakeShareable(new FOnlineAuthSteam(this, AuthInterfaceUtils));*/

		if (!SessionInterface)
			SessionInterface = MakeShareable(new FOnlineSessionSteamCore(this));

		if (!IdentityInterface)
			IdentityInterface = MakeShareable(new FOnlineIdentitySteamCore(this));

		if (!bIsServer)
		{
			/*FriendInterface = MakeShareable(new FOnlineFriendsSteam(this));
			UserCloudInterface = MakeShareable(new FOnlineUserCloudSteam(this));
			SharedCloudInterface = MakeShareable(new FOnlineSharedCloudSteam(this));
			LeaderboardsInterface = MakeShareable(new FOnlineLeaderboardsSteam(this));
			VoiceInterface = MakeShareable(new FOnlineVoiceSteam(this));
			ExternalUIInterface = MakeShareable(new FOnlineExternalUISteam(this));
			AchievementsInterface = MakeShareable(new FOnlineAchievementsSteam(this));
			EncryptedAppTicketInterface = MakeShareable(new FOnlineEncryptedAppTicketSteam(this));

			// Kick off a download/cache of the current user's stats
			LeaderboardsInterface->CacheCurrentUsersStats();*/
		}
		else
		{
			// Need a voice interface here to serialize packets but NOT add to VoiceData.RemotePackets
			//VoiceInterface = MakeShareable(new FOnlineVoiceSteam(this));
		}
	}
	else
	{
		// If the client succeeded, but the server didn't, this could be because there's a server and client running on the same machine - inform the user
		if (bClientInitSuccess)
		{
			UE_LOG_ONLINE(Warning, TEXT("Failed to initialize Steam, this could be due to a Steam server and client running on the same machine. Try running with -NOSTEAM on the cmdline to disable."));
		}

		Shutdown();
	}

	return bClientInitSuccess && bServerInitSuccess;
}

bool FOnlineSubsystemSteamCore::Shutdown()
{
	FOnlineSubsystemImpl::Shutdown();

#define DESTRUCT_INTERFACE(Interface) \
	if (Interface.IsValid()) \
	{ \
		ensure(Interface.IsUnique()); \
		Interface = nullptr; \
	}

	// Destruct the interfaces
	DESTRUCT_INTERFACE(IdentityInterface);
	DESTRUCT_INTERFACE(SessionInterface);

#undef DESTRUCT_INTERFACE

	return true;
}


FText FOnlineSubsystemSteamCore::GetOnlineServiceName() const
{
	return NSLOCTEXT("OnlineSubsystemSteamCore", "OnlineServiceName", "STEAMCORE");
}

bool FOnlineSubsystemSteamCore::IsEnabled() const
{
	if (bSteamworksClientInitialized || bSteamworksGameServerInitialized)
	{
		return true;
	}

	// Check the ini for disabling Steam
	bool bEnableSteam = FOnlineSubsystemImpl::IsEnabled();

	if (bEnableSteam)
	{
		// Steam doesn't support running both the server and client on the same machine
		bEnableSteam = !FParse::Param(FCommandLine::Get(), TEXT("MultiprocessOSS"));
/*
#if UE_EDITOR
		if (bEnableSteam)
		{
			bEnableSteam = IsRunningDedicatedServer() || IsRunningGame();
		}
#endif*/

	}
	return bEnableSteam;
}

	IOnlineAchievementsPtr FOnlineSubsystemSteamCore::GetAchievementsInterface() const
	{
		return nullptr;
	}

	IOnlineFriendsPtr FOnlineSubsystemSteamCore::GetFriendsInterface() const
	{
		return nullptr;
	}

	IOnlineIdentityPtr FOnlineSubsystemSteamCore::GetIdentityInterface() const
	{
		return nullptr;
	}

	IOnlinePresencePtr FOnlineSubsystemSteamCore::GetPresenceInterface() const
	{
		return nullptr;
	}

	IOnlineSessionPtr FOnlineSubsystemSteamCore::GetSessionInterface() const
	{
		return SessionInterface;
	}

	IOnlineUserPtr FOnlineSubsystemSteamCore::GetUserInterface() const
	{
		return nullptr;
	}

	bool FOnlineSubsystemSteamCore::InitSteamworksClient(bool bRelaunchInSteam, int32 SteamAppId)
	{
		bSteamworksClientInitialized = false;

		// If the game was not launched from within Steam, but is supposed to, trigger a Steam launch and exit
		if (bRelaunchInSteam && SteamAppId != 0 && SteamAPI_RestartAppIfNecessary(SteamAppId))
		{
			if (FPlatformProperties::IsGameOnly() || FPlatformProperties::IsServerOnly())
			{
				UE_LOG_ONLINE(Log, TEXT("Game restarting within Steam client, exiting"));
				FPlatformMisc::RequestExit(false);
			}

			return bSteamworksClientInitialized;
		}
		// Otherwise initialize as normal
		else
		{
			SteamAPIClientHandle = FSteamSharedModule::Get().ObtainSteamClientInstanceHandle();
			// Steamworks needs to initialize as close to start as possible, so it can hook its overlay into Direct3D, etc.
			bSteamworksClientInitialized = (SteamAPIClientHandle.IsValid() ? true : false);

			// Test all the Steam interfaces
#define GET_STEAMWORKS_INTERFACE(Interface) \
		if (Interface() == nullptr) \
		{ \
			UE_LOG_ONLINE(Warning, TEXT("Steamworks: %s() failed!"), TEXT(#Interface)); \
			bSteamworksClientInitialized = false; \
		} \

		// GSteamUtils
			GET_STEAMWORKS_INTERFACE(SteamUtils);
			// GSteamUser
			GET_STEAMWORKS_INTERFACE(SteamUser);
			// GSteamFriends
			GET_STEAMWORKS_INTERFACE(SteamFriends);
			// GSteamRemoteStorage
			GET_STEAMWORKS_INTERFACE(SteamRemoteStorage);
			// GSteamUserStats
			GET_STEAMWORKS_INTERFACE(SteamUserStats);
			// GSteamMatchmakingServers
			GET_STEAMWORKS_INTERFACE(SteamMatchmakingServers);
			// GSteamApps
			GET_STEAMWORKS_INTERFACE(SteamApps);
			// GSteamNetworking
			GET_STEAMWORKS_INTERFACE(SteamNetworking);
			// GSteamMatchmaking
			GET_STEAMWORKS_INTERFACE(SteamMatchmaking);

#undef GET_STEAMWORKS_INTERFACE
		}

		if (bSteamworksClientInitialized)
		{
			bool bIsSubscribed = true;
			if (FPlatformProperties::IsGameOnly() || FPlatformProperties::IsServerOnly())
			{
				bIsSubscribed = SteamApps()->BIsSubscribed();
			}

			// Make sure the Steam user has valid access to the game
			if (bIsSubscribed)
			{
				UE_LOG_ONLINE(Log, TEXT("Steam User is subscribed %i"), bSteamworksClientInitialized);
				if (SteamUtils())
				{
					SteamAppID = SteamUtils()->GetAppID();
					SteamUtils()->SetWarningMessageHook(SteamworksWarningMessageHook);
				}
			}
			else
			{
				UE_LOG_ONLINE(Error, TEXT("Steam User is NOT subscribed, exiting."));
				bSteamworksClientInitialized = false;
				FPlatformMisc::RequestExit(false);
			}
		}

		UE_LOG_ONLINE(Log, TEXT("[AppId: %d] Client API initialized %i"), GetSteamAppId(), bSteamworksClientInitialized);
		return bSteamworksClientInitialized;
	}

	bool FOnlineSubsystemSteamCore::InitSteamworksServer()
	{
		SteamAPIServerHandle = FSteamSharedModule::Get().ObtainSteamServerInstanceHandle();
		bSteamworksGameServerInitialized = (SteamAPIServerHandle.IsValid());

		if (bSteamworksGameServerInitialized)
		{
			// Grab the port values so that we save them.
			GameServerGamePort = SteamAPIServerHandle->GetGamePort();
			GameServerSteamPort = SteamAPIServerHandle->GetSteamPort();
			GameServerQueryPort = SteamAPIServerHandle->GetQueryPort();

			// Test all the Steam interfaces
#define GET_STEAMWORKS_INTERFACE(Interface) \
		if (Interface() == nullptr) \
		{ \
			UE_LOG_ONLINE(Warning, TEXT("Steamworks: %s() failed!"), TEXT(#Interface)); \
			bSteamworksGameServerInitialized = false; \
		} \

		// NOTE: It's not possible for >some< of the interfaces to initialize, and others fail; it's all or none
			GET_STEAMWORKS_INTERFACE(SteamGameServer);
			GET_STEAMWORKS_INTERFACE(SteamGameServerStats);
			GET_STEAMWORKS_INTERFACE(SteamGameServerNetworking);
			GET_STEAMWORKS_INTERFACE(SteamGameServerUtils);

#undef GET_STEAMWORKS_INTERFACE
		}

		if (SteamGameServerUtils() != nullptr)
		{
			SteamAppID = SteamGameServerUtils()->GetAppID();
			SteamGameServerUtils()->SetWarningMessageHook(SteamworksWarningMessageHook);
		}

		UE_LOG_ONLINE(Log, TEXT("[AppId: %d] Game Server API initialized %i"), GetSteamAppId(), bSteamworksGameServerInitialized);
		return bSteamworksGameServerInitialized;
	}
