/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemotePlay
*/

#include "RemotePlay/RemotePlay.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void URemotePlay::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

#if STEAM_VERSION > 142

	OnSteamRemotePlaySessionConnectedCallback.Register(this, &URemotePlay::OnSteamRemotePlaySessionConnected);
	OnSteamRemotePlaySessionDisconnectedCallback.Register(this, &URemotePlay::OnSteamRemotePlaySessionDisconnected);

	if (IsRunningDedicatedServer())
	{
		OnSteamRemotePlaySessionConnectedCallback.SetGameserverFlag();
		OnSteamRemotePlaySessionDisconnectedCallback.SetGameserverFlag();
	}
#endif
}

void URemotePlay::Deinitialize()
{
#if STEAM_VERSION > 142
	OnSteamRemotePlaySessionConnectedCallback.Unregister();
	OnSteamRemotePlaySessionDisconnectedCallback.Unregister();
#endif

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

int32 URemotePlay::GetSessionCount()
{
#if STEAM_VERSION > 142
	return SteamRemotePlay() ? SteamRemotePlay()->GetSessionCount() : 0;
#else
	return 0;
#endif
}

int32 URemotePlay::GetSessionID(int32 sessionIndex)
{
#if STEAM_VERSION > 142
	return SteamRemotePlay() ? SteamRemotePlay()->GetSessionID(sessionIndex) : 0;
#else
	return 0;
#endif
}

FSteamID URemotePlay::GetSessionSteamID(int32 sessionID)
{
#if STEAM_VERSION > 142
	return SteamRemotePlay() ? FSteamID(SteamRemotePlay()->GetSessionSteamID(sessionID)): FSteamID();
#else
	return FSteamID();
#endif
}

FString URemotePlay::GetSessionClientName(int32 sessionID)
{
#if STEAM_VERSION > 142
	return SteamRemotePlay() ? TCHAR_TO_UTF8(SteamRemotePlay()->GetSessionClientName(sessionID)) : "";
#else
	return "";
#endif
}

ESteamCoreDeviceFormFactor URemotePlay::GetSessionClientFormFactor(int32 sessionID)
{
#if STEAM_VERSION > 142
	return SteamRemotePlay() ? static_cast<ESteamCoreDeviceFormFactor>(SteamRemotePlay()->GetSessionClientFormFactor(sessionID)) : ESteamCoreDeviceFormFactor::Unknown;
#else
	return ESteamCoreDeviceFormFactor::Unknown;
#endif
}

bool URemotePlay::BGetSessionClientResolution(int32 sessionID, int32& resolutionX, int32& resolutionY)
{
#if STEAM_VERSION > 142
	return SteamRemotePlay() ? SteamRemotePlay()->BGetSessionClientResolution(sessionID, &resolutionX, &resolutionY) : false;
#else
	return false;
#endif
}

bool URemotePlay::BSendRemotePlayTogetherInvite(FSteamID steamIDFriend)
{
#if STEAM_VERSION > 146
	return SteamRemotePlay() ? SteamRemotePlay()->BSendRemotePlayTogetherInvite(steamIDFriend) : false;
#else
	return false;
#endif
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if STEAM_VERSION > 142
void URemotePlay::OnSteamRemotePlaySessionConnected(SteamRemotePlaySessionConnected_t* pParam)
{
	const FSteamRemotePlaySessionConnected m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				SteamRemotePlaySessionConnected.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamRemotePlaySessionConnected.Broadcast(m_Data);
	}
}

void URemotePlay::OnSteamRemotePlaySessionDisconnected(SteamRemotePlaySessionDisconnected_t* pParam)
{
	const FSteamRemotePlaySessionDisconnected m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				SteamRemotePlaySessionDisconnected.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamRemotePlaySessionDisconnected.Broadcast(m_Data);
	}
}
#endif