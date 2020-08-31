/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "MatchmakingTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby : public FOnlineAsyncTaskSteamCore
{
public:
	FOnCreateLobby OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby(USteamCoreSubsystem* subsystem, FOnCreateLobby callback, ELobbyType lobbyType, int32 maxLobbyMembers)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, LobbyType(lobbyType)
		, MaxLobbyMembers(maxLobbyMembers)
	{}
	FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, ELobbyType lobbyType, int32 maxLobbyMembers)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, LobbyType(lobbyType)
		, MaxLobbyMembers(maxLobbyMembers)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby() = delete;
protected:
	LobbyCreated_t CallbackResults;
	ELobbyType LobbyType;
	int32 MaxLobbyMembers;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRequestLobbyList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreRequestLobbyList : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestLobbyList OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRequestLobbyList(USteamCoreSubsystem* subsystem, FOnRequestLobbyList callback)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
	{}
	FOnlineAsyncTaskSteamCoreRequestLobbyList(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreRequestLobbyList() = delete;
protected:
	LobbyMatchList_t CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRequestLobbyList bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreJoinLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreJoinLobby : public FOnlineAsyncTaskSteamCore
{
public:
	FOnJoinLobby OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreJoinLobby(class USteamCoreSubsystem* subsystem, FOnJoinLobby callback, FSteamID steamIDLobby)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, SteamIDLobby(steamIDLobby)
	{}
	FOnlineAsyncTaskSteamCoreJoinLobby(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamIDLobby)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, SteamIDLobby(steamIDLobby)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreJoinLobby() = delete;
protected:
	LobbyEnter_t CallbackResults;
	FSteamID SteamIDLobby;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreJoinLobby bWasSuccessful: %d"), WasSuccessful()); }
};