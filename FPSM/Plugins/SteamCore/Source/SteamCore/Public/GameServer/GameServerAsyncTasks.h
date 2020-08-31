/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServer
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "GameServerTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAssociateWithClan OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan(class USteamCoreSubsystem* subsystem, FOnAssociateWithClan callback, FSteamID steamIDClan)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, SteamIDClan(steamIDClan)
	{}
private:
	FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan() = delete;
protected:
	AssociateWithClanResult_t CallbackResults;
	FSteamID SteamIDClan;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility : public FOnlineAsyncTaskSteamCore
{
public:
	FOnComputeNewPlayerCompatibility OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility(class USteamCoreSubsystem* subsystem, FOnComputeNewPlayerCompatibility callback, FSteamID steamIDNewPlayer)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, SteamIDNewPlayer(steamIDNewPlayer)
	{}
private:
	FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility() = delete;
protected:
	ComputeNewPlayerCompatibilityResult_t CallbackResults;
	FSteamID SteamIDNewPlayer;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility bWasSuccessful: %d"), WasSuccessful()); }
};