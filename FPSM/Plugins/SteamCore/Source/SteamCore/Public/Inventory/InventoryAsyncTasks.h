/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "InventoryTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestEligiblePromoItemDefinitionsIDs OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs(class USteamCoreSubsystem* subsystem, FOnRequestEligiblePromoItemDefinitionsIDs callback, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, SteamID(steamID)
	{}
	FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, SteamID(steamID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs() = delete;
protected:
	SteamInventoryEligiblePromoItemDefIDs_t CallbackResults;
	FSteamID SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSteamInventoryRequestPricesResult OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult(class USteamCoreSubsystem* subsystem, FOnSteamInventoryRequestPricesResult callback)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
	{}
	FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult() = delete;
protected:
	SteamInventoryRequestPricesResult_t CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult bWasSuccessful: %d"), WasSuccessful()); }
};