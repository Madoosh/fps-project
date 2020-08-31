/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#pragma once

#include "InventoryTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "InventoryAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate, const FSteamInventoryEligiblePromoItemDefIDs&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamInventoryRequestPricesResultAsyncDelegate, const FSteamInventoryRequestPricesResult&, data);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate OnSuccess;
public:
	/**
	* Request the list of "eligible" promo items that can be manually granted to the given user.
	* These are promo items of type "manual" that won't be granted automatically. An example usage of this is an item that becomes available every week.
	* After calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.
	*
	* @param	steamID		The Steam ID of the user to request the eligible promo items for.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request Eligible Promo Item Definitions IDs"), Category = "SteamCore|Inventory|Async")
		static USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* RequestEligiblePromoItemDefinitionsIDsAsync(UObject* WorldContextObject, FSteamID steamID);
private:
	UFUNCTION()
		void HandleCallback(const FSteamInventoryEligiblePromoItemDefIDs& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreInventoryAsyncActionRequestPricesResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreInventoryAsyncActionRequestPricesResult : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSteamInventoryRequestPricesResultAsyncDelegate OnSuccess;
public:
	/**
	* Request prices for all item definitions that can be purchased in the user's local currency.
	* A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.
	* After that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request Prices"), Category = "SteamCore|Inventory|Async")
		static USteamCoreInventoryAsyncActionRequestPricesResult* RequestPricesAsync(UObject* WorldContextObject);
private:
	UFUNCTION()
		void HandleCallback(const FSteamInventoryRequestPricesResult& data, bool bWasSuccessful);
};