/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Interfaces/OnlineSessionInterfaceSteamCore.h"
#include "OnlineSubsystemSteamCore.h"
#include "OnlineSubsystemPrivateSteamCorePCH.h"

FOnlineSubsystemSteamCore* FOnlineSessionSteamCore::Subsystem = nullptr;

FOnlineSessionSteamCore::FOnlineSessionSteamCore(FOnlineSubsystemSteamCore* subsystem)
{
	Subsystem = subsystem;
}

FOnlineSessionSteamCore::~FOnlineSessionSteamCore()
{
}

void FOnlineSessionSteamCore::Tick(float DeltaTime)
{

}

TSharedPtr<const FUniqueNetId> FOnlineSessionSteamCore::CreateSessionIdFromString(const FString& SessionIdStr)
{
	return nullptr;
}

bool FOnlineSessionSteamCore::CreateSession(int32 HostingPlayerNum, FName SessionName, const FOnlineSessionSettings& NewSessionSettings)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));

	return false;
}

bool FOnlineSessionSteamCore::CreateSession(const FUniqueNetId& HostingPlayerId, FName SessionName, const FOnlineSessionSettings& NewSessionSettings)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::StartSession(FName SessionName)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::UpdateSession(FName SessionName, FOnlineSessionSettings& UpdatedSessionSettings, bool bShouldRefreshOnlineData /*= true*/)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::EndSession(FName SessionName)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::DestroySession(FName SessionName, const FOnDestroySessionCompleteDelegate& CompletionDelegate /*= FOnDestroySessionCompleteDelegate()*/)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::IsPlayerInSession(FName SessionName, const FUniqueNetId& UniqueId)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::StartMatchmaking(const TArray< TSharedRef<const FUniqueNetId> >& LocalPlayers, FName SessionName, const FOnlineSessionSettings& NewSessionSettings, TSharedRef<FOnlineSessionSearch>& SearchSettings)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::CancelMatchmaking(int32 SearchingPlayerNum, FName SessionName)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::CancelMatchmaking(const FUniqueNetId& SearchingPlayerId, FName SessionName)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::FindSessions(int32 SearchingPlayerNum, const TSharedRef<FOnlineSessionSearch>& SearchSettings)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::FindSessions(const FUniqueNetId& SearchingPlayerId, const TSharedRef<FOnlineSessionSearch>& SearchSettings)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::FindSessionById(const FUniqueNetId& SearchingUserId, const FUniqueNetId& SessionId, const FUniqueNetId& FriendId, const FOnSingleSessionResultCompleteDelegate& CompletionDelegate)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::CancelFindSessions()
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::PingSearchResults(const FOnlineSessionSearchResult& SearchResult)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::JoinSession(int32 PlayerNum, FName SessionName, const FOnlineSessionSearchResult& DesiredSession)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::JoinSession(const FUniqueNetId& PlayerId, FName SessionName, const FOnlineSessionSearchResult& DesiredSession)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::FindFriendSession(int32 LocalUserNum, const FUniqueNetId& Friend)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::FindFriendSession(const FUniqueNetId& LocalUserId, const FUniqueNetId& Friend)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::FindFriendSession(const FUniqueNetId& LocalUserId, const TArray<TSharedRef<const FUniqueNetId>>& FriendList)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::SendSessionInviteToFriend(int32 LocalUserNum, FName SessionName, const FUniqueNetId& Friend)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::SendSessionInviteToFriend(const FUniqueNetId& LocalUserId, FName SessionName, const FUniqueNetId& Friend)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::SendSessionInviteToFriends(int32 LocalUserNum, FName SessionName, const TArray< TSharedRef<const FUniqueNetId> >& Friends)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::SendSessionInviteToFriends(const FUniqueNetId& LocalUserId, FName SessionName, const TArray< TSharedRef<const FUniqueNetId> >& Friends)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::GetResolvedConnectString(FName SessionName, FString& ConnectInfo, FName PortType)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::GetResolvedConnectString(const FOnlineSessionSearchResult& SearchResult, FName PortType, FString& ConnectInfo)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

FOnlineSessionSettings* FOnlineSessionSteamCore::GetSessionSettings(FName SessionName)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return nullptr;
}

bool FOnlineSessionSteamCore::RegisterPlayer(FName SessionName, const FUniqueNetId& PlayerId, bool bWasInvited)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::RegisterPlayers(FName SessionName, const TArray< TSharedRef<const FUniqueNetId> >& Players, bool bWasInvited /*= false*/)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::UnregisterPlayer(FName SessionName, const FUniqueNetId& PlayerId)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

bool FOnlineSessionSteamCore::UnregisterPlayers(FName SessionName, const TArray< TSharedRef<const FUniqueNetId> >& Players)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return false;
}

void FOnlineSessionSteamCore::RegisterLocalPlayer(const FUniqueNetId& PlayerId, FName SessionName, const FOnRegisterLocalPlayerCompleteDelegate& Delegate)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
}

void FOnlineSessionSteamCore::UnregisterLocalPlayer(const FUniqueNetId& PlayerId, FName SessionName, const FOnUnregisterLocalPlayerCompleteDelegate& Delegate)
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
}

int32 FOnlineSessionSteamCore::GetNumSessions()
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
	return 0;
}

void FOnlineSessionSteamCore::DumpSessionState()
{
	UE_LOG(LogSteamCoreSubsystem, Verbose, TEXT("[%s]"), *FString(__FUNCTION__));
}
