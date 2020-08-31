/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "OnlineIdentityInterfaceSteamCore.h"
#include "OnlineSubsystemSteamCore.h"
#include "Network/SteamCoreUniqueNetId.h"
#include "OnlineSubsystemPrivateSteamCorePCH.h"

FOnlineSubsystemSteamCore* FOnlineIdentitySteamCore::Subsystem = nullptr;

FOnlineIdentitySteamCore::FOnlineIdentitySteamCore(FOnlineSubsystemSteamCore* subsystem)
{
	Subsystem = subsystem;
}

bool FOnlineIdentitySteamCore::Login(int32 LocalUserNum, const FOnlineAccountCredentials& AccountCredentials)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	FString ErrorStr;
	if (LocalUserNum < MAX_LOCAL_PLAYERS)
	{
		// Double check they are properly logged in
		if (SteamUser() != NULL && SteamUser()->BLoggedOn())
		{
			// Login changed delegate
			TriggerOnLoginChangedDelegates(LocalUserNum);
			// Login completion delegate
			TriggerOnLoginCompleteDelegates(LocalUserNum, true, FUniqueNetIdSteamCore(SteamUser()->GetSteamID()), TEXT(""));
			return true;
		}
		else
		{
			// User is not currently logged into Steam
			ErrorStr = TEXT("Not logged in or no connection.");
		}
	}
	else
	{
		// Requesting a local user is always invalid
		ErrorStr = FString::Printf(TEXT("Invalid user %d"), LocalUserNum);
	}

	if (!ErrorStr.IsEmpty())
	{
		UE_LOG_ONLINE_IDENTITY(Warning, TEXT("Failed Steam login. %s"), *ErrorStr);
		TriggerOnLoginCompleteDelegates(LocalUserNum, false, FUniqueNetIdSteamCore(0), ErrorStr);
	}

	return false;
}

bool FOnlineIdentitySteamCore::Logout(int32 LocalUserNum)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	TriggerOnLogoutCompleteDelegates(LocalUserNum, false);
	return false;
}

bool FOnlineIdentitySteamCore::AutoLogin(int32 LocalUserNum)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	if (!IsRunningDedicatedServer())
	{
		// Double check they are properly logged in
		if (SteamUser() != NULL && SteamUser()->BLoggedOn())
		{
			// Login changed delegate
			TriggerOnLoginChangedDelegates(LocalUserNum);
			// Login completion delegate
			FString AuthToken = GetAuthToken(LocalUserNum);
			TriggerOnLoginCompleteDelegates(LocalUserNum, true, FUniqueNetIdSteamCore(SteamUser()->GetSteamID()), TEXT(""));
			return true;
		}
		TriggerOnLoginCompleteDelegates(0, false, FUniqueNetIdSteamCore(0), TEXT("AutoLogin failed. Not logged in or no connection."));
		return false;
	}
	else
	{
		// Autologin for dedicated servers happens via session creation in the GameServerAPI LogOnAnonymous()
		return false;
	}
}

TSharedPtr<FUserOnlineAccount> FOnlineIdentitySteamCore::GetUserAccount(const FUniqueNetId& UserId) const
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return nullptr;
}

TArray<TSharedPtr<FUserOnlineAccount>> FOnlineIdentitySteamCore::GetAllUserAccounts() const
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	TArray<TSharedPtr<FUserOnlineAccount>> m_Accounts;

	return m_Accounts;
}

TSharedPtr<const FUniqueNetId> FOnlineIdentitySteamCore::GetUniquePlayerId(int32 LocalUserNum) const
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	
	if (LocalUserNum < MAX_LOCAL_PLAYERS && SteamUser() != NULL)
	{
		return MakeShareable(new FUniqueNetIdSteamCore(SteamUser()->GetSteamID()));
	}

	return NULL;
}

TSharedPtr<const FUniqueNetId> FOnlineIdentitySteamCore::CreateUniquePlayerId(uint8* Bytes, int32 Size)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	if (Bytes && Size == sizeof(uint64))
	{
		uint64* RawUniqueId = (uint64*)Bytes;
		CSteamID SteamId(*RawUniqueId);

		if (SteamId.IsValid())
		{
			return MakeShareable(new FUniqueNetIdSteamCore(SteamId));
		}
	}

	return NULL;
}

TSharedPtr<const FUniqueNetId> FOnlineIdentitySteamCore::CreateUniquePlayerId(const FString& Str)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	return MakeShareable(new FUniqueNetIdSteamCore(Str));
}

ELoginStatus::Type FOnlineIdentitySteamCore::GetLoginStatus(int32 LocalUserNum) const
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	if (LocalUserNum < MAX_LOCAL_PLAYERS &&
		SteamUser() != NULL)
	{
		return SteamUser()->BLoggedOn() ? ELoginStatus::LoggedIn : ELoginStatus::NotLoggedIn;
	}

	return ELoginStatus::NotLoggedIn;
}

ELoginStatus::Type FOnlineIdentitySteamCore::GetLoginStatus(const FUniqueNetId& UserId) const
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	return GetLoginStatus(0);
}

FString FOnlineIdentitySteamCore::GetPlayerNickname(int32 LocalUserNum) const
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	if (LocalUserNum < MAX_LOCAL_PLAYERS &&	SteamFriends() != NULL)
	{
		const char* PersonaName = SteamFriends()->GetPersonaName();
		return FString(UTF8_TO_TCHAR(PersonaName));
	}

	return FString(TEXT(""));
}

FString FOnlineIdentitySteamCore::GetPlayerNickname(const FUniqueNetId& UserId) const
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	if (SteamFriends() != NULL)
	{
		const char* PersonaName = SteamFriends()->GetPersonaName();
		return FString(UTF8_TO_TCHAR(PersonaName));
	}
	return FString(TEXT(""));
}

FString FOnlineIdentitySteamCore::GetAuthToken(int32 LocalUserNum) const
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	FString ResultToken;
	if (LocalUserNum < MAX_LOCAL_PLAYERS)
	{
		// Double check they are properly logged in
		if (SteamUser() != NULL &&
			SteamUser()->BLoggedOn())
		{
			uint8 AuthToken[1024];
			uint32 AuthTokenSize = 0;
			if (SteamUser()->GetAuthSessionTicket(AuthToken, UE_ARRAY_COUNT(AuthToken), &AuthTokenSize) != k_HAuthTicketInvalid &&
				AuthTokenSize > 0)
			{
				ResultToken = BytesToHex(AuthToken, AuthTokenSize);
				UE_LOG_ONLINE_IDENTITY(Log, TEXT("Obtained steam authticket"));
				// In release builds our code checks the authTicket faster than Steam's login server can save it
				// Added a small amount of sleep here so the ResultToken is valid by the time this call returns
				FPlatformProcess::Sleep(0.1f);
			}
			else
			{
				UE_LOG_ONLINE_IDENTITY(Warning, TEXT("Failed to acquire Steam auth session ticket for %d"),
					LocalUserNum);
			}
		}
	}
	return ResultToken;
}

void FOnlineIdentitySteamCore::RevokeAuthToken(const FUniqueNetId& LocalUserId, const FOnRevokeAuthTokenCompleteDelegate& Delegate)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	TSharedRef<const FUniqueNetId> UserIdRef(LocalUserId.AsShared());

	Subsystem->ExecuteNextTick([UserIdRef, Delegate]()
	{
		Delegate.ExecuteIfBound(*UserIdRef, FOnlineError(FString(TEXT("RevokeAuthToken not implemented"))));
	});
}

void FOnlineIdentitySteamCore::GetUserPrivilege(const FUniqueNetId& LocalUserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	Delegate.ExecuteIfBound(LocalUserId, Privilege, (uint32)EPrivilegeResults::NoFailures);
}

FPlatformUserId FOnlineIdentitySteamCore::GetPlatformUserIdFromUniqueNetId(const FUniqueNetId& UniqueNetId) const
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	for (int i = 0; i < MAX_LOCAL_PLAYERS; ++i)
	{
		auto CurrentUniqueId = GetUniquePlayerId(i);
		if (CurrentUniqueId.IsValid() && (*CurrentUniqueId == UniqueNetId))
		{
			return i;
		}
	}

	return PLATFORMUSERID_NONE;
}

FString FOnlineIdentitySteamCore::GetAuthType() const
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	return TEXT("");
}

