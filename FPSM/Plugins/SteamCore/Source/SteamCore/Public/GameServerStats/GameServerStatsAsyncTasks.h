/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServerStats
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "GameServerStatsTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS : public FOnlineAsyncTaskSteamCore
{
public:
	FOnServerRequestUserStats OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS(class USteamCoreSubsystem* subsystem, FOnServerRequestUserStats callback, FSteamID steamIDUser)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, SteamIDUser(steamIDUser)
	{}
private:
	FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS() = delete;
protected:
	GSStatsReceived_t CallbackResults;
	FSteamID SteamIDUser;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats : public FOnlineAsyncTaskSteamCore
{
public:
	FOnServerStoreUserStats OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats(class USteamCoreSubsystem* subsystem, FOnServerStoreUserStats callback, FSteamID steamIDUser)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, SteamIDUser(steamIDUser)
	{}
private:
	FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats() = delete;
protected:
	GSStatsStored_t CallbackResults;
	FSteamID SteamIDUser;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats bWasSuccessful: %d"), WasSuccessful()); }
};