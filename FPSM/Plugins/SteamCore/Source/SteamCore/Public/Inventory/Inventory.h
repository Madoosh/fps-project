/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "InventoryTypes.h"
#include "Inventory.generated.h"

UCLASS()
class STEAMCORE_API UInventory : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UInventory() {SubsystemType = ESubsystem::Inventory;}
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Inventory|Delegates")
		FOnSteamInventoryResultReady SteamInventoryResultReady;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Inventory|Delegates")
		FOnSteamInventoryDefinitionUpdate SteamInventoryDefinitionUpdate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Inventory|Delegates")
		FOnSteamInventoryFullUpdate SteamInventoryFullUpdate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Inventory|Delegates")
		FOnSteamInventoryStartPurchaseResult SteamInventoryStartPurchaseResult;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Inventory|Delegates")
		FOnSteamInventoryRequestPricesResultDelegate SteamInventoryRequestPricesResultDelegate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Inventory|Delegates")
		FOnSteamInventoryEligiblePromoItemDefIDs SteamInventoryEligiblePromoItemDefIDs;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Grant a specific one-time promotional item to the current user.
	*
	* This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to 
	* grant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.
	* Any items that can be granted MUST have a "promo" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. 
	* This version will grant all items that have promo attributes specified for them in the configured item definitions. 
	* This allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.
	*
	* @param	handle				Returns a new inventory result handle.
	* @param	itemDef		The ItemDef to grant the player.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool AddPromoItem(FSteamInventoryResult& handle, FSteamItemDef itemDef);

	/**
	* Grant a specific one-time promotional item to the current user.
	*
	* This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to
	* grant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.
	* Any items that can be granted MUST have a "promo" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.
	* This version will grant all items that have promo attributes specified for them in the configured item definitions.
	* This allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.
	*
	* @param	handle					Returns a new inventory result handle.
	* @param	itemDefs			The list of items to grant the user.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool AddPromoItems(FSteamInventoryResult& handle, TArray<FSteamItemDef> itemDefs);

	/**
	* Checks whether an inventory result handle belongs to the specified Steam ID.
	*
	* This is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.
	*
	* @param	handle		The inventory result handle to check the Steam ID on.
	* @param	steamID		The Steam ID to verify.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool CheckResultSteamID(FSteamInventoryResult handle, FSteamID steamIDExpected);

	/**
	* Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.
	*
	* Once an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended. 
	* ConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic "my brother borrowed my laptop and deleted all of my rare items".
	*
	* @param	handle				Returns a new inventory result handle.
	* @param	itemConsume			The item instance id to consume.
	* @param	quantity		The number of items in that stack to consume.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool ConsumeItem(FSteamInventoryResult& handle, FSteamItemInstanceID itemConsume, int32 quantity);

	/**
	* Deserializes a result set and verifies the signature bytes.
	*
	* This call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode. 
	* The "expired" result could indicate that the data may be out of date - not just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated. 
	* You could compare the timestamp from GetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the "expired" result code and continue as normal, 
	* or you could request the player with expired data to send an updated result set.
	* You should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.
	*
	* @param	handle					Returns a new inventory result handle.
	* @param	buffer					The buffer to deserialize.
	* @param	bReservedMustBeFalse	This must be false!
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool DeserializeResult(FSteamInventoryResult& handle, TArray<uint8> buffer, bool bReservedMustBeFalse);

	/**
	* Destroys a result handle and frees all associated memory.
	*
	* @param	handle		The inventory result handle to destroy.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static void DestroyResult(FSteamInventoryResult handle);

	/**
	* Grant one item in exchange for a set of other items.
	*
	* This can be used to implement crafting recipes or transmutations, or items which unpack themselves into other items (e.g., a chest).
	* The caller of this API passes in the requested item and an array of existing items and quantities to exchange for it. 
	* The API currently takes an array of items to generate but at this time the size of that array must be 1 and the quantity of the new item must be 1.
	* Any items that can be granted MUST have an exchange attribute in their itemdef. The exchange attribute specifies a set of recipes that are valid exchanges for this item. 
	* Exchange recipes are evaluated atomically by the Inventory Service; if the supplied components do not match the recipe, or do not contain sufficient quantity, the exchange will fail.
	*
	* @param	handle							Returns a new inventory result handle.
	* @param	arrayGenerate					The list of items that will be created by this call. Currently can only be 1 item!
	* @param	arrayGenerateQuantity			The quantity of each item in pArrayGenerate to create. Currently can only be 1 item and it must be set to 1!
	* @param	arrayDestroy					The list of items that will be destroyed by this call.
	* @param	arrayDestroyQuantity			The quantity of each item in pArrayDestroy to destroy.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool ExchangeItems(FSteamInventoryResult& handle, TArray<FSteamItemDef> arrayGenerate, TArray<int32> arrayGenerateQuantity, TArray<FSteamItemInstanceID> arrayDestroy, TArray<int32> arrayDestroyQuantity);

	/**
	* Grants specific items to the current user, for developers only.
	*
	* This API is only intended for prototyping - it is only usable by Steam accounts that belong to the publisher group for your game.
	* You can pass in an array of items, identified by their SteamItemDef_t and optionally a second array of corresponding quantities for each item. The length of these arrays MUST match!
	*
	* @param	handle			Returns a new inventory result handle.
	* @param	itemDefs		The list of items to grant the user.
	* @param	quantity		The quantity of each item in pArrayItemDefs to grant. This is optional, pass in NULL to specify 1 of each item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool GenerateItems(FSteamInventoryResult& handle, TArray<FSteamItemDef> itemDefs, TArray<int32> quantity);
	
	/**
	* Start retrieving all items in the current users inventory.
	*
	* Calls to this function are subject to rate limits and may return cached results if called too frequently. 
	* It is suggested that you call this function only when you are about to display the user's full inventory, or if you expect that the inventory may have changed.
	* 
	* @param	handle		Returns a new inventory result handle.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool GetAllItems(FSteamInventoryResult& handle);

	/**
	* Get the list of item definition ids that a user can be granted.
	*
	* You should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.
	*
	* @param	steamID		The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.
	* @param	itemDefs	Returns the item definition ids by copying them into this array.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool GetEligiblePromoItemDefinitionIDs(FSteamID steamID, TArray<FSteamItemDef>& itemDefs);

	/**
	* Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.
	*
	* These item definitions may not necessarily be contiguous integers.
	* This should be called in response to a SteamInventoryDefinitionUpdate_t callback. 
	* There is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.
	*
	* @param	itemDefs	Returns the item definitions by copying them into this array.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool GetItemDefinitionIDs(TArray<FSteamItemDef>& itemDefs);

	/**
	* Gets a string property from the specified item definition.
	*
	* Gets a property value for a specific item definition.
	* Note that some properties (for example, "name") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.
	* Pass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.
	*
	* @param	itemDef				The item definition to get the properties for.
	* @param	propertyName		The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.
	* @param	value				Returns the value associated with pchPropertyName.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool GetItemDefinitionProperty(FSteamItemDef itemDef, FString propertyName, FString& value);

	/**
	* Gets the state of a subset of the current user's inventory.
	*
	* The subset is specified by an array of item instance IDs.
	* The results from this call can be serialized using SerializeResult and passed to other players to "prove" that the current user owns specific items, without exposing the user's entire inventory. For example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.
	* 
	* @param	handle			Returns a new inventory result handle.
	* @param	instanceIDs		A list of the item instance ids to update the state of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool GetItemsByID(FSteamInventoryResult& handle, TArray<FSteamItemInstanceID> instanceIDs);

	/**
	* After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.
	*
	* @param	itemDef		The item definition id to retrieve the price for
	* @param	price		The price pointer to populate. Prices are rendered in the user's local currency.
	* @param	basePrice	(Steam SDK 1.46 only)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool GetItemPrice(FSteamItemDef itemDef, int32& price, int32& basePrice);

	/**
	* After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.
	*
	* @param	itemDef		The array of item definition ids to populate
	* @param	price		The array of prices for each corresponding item definition id in pArrayItemDefs. Prices are rendered in the user's local currency.
	* @param	basePrices	(Steam SDK 1.46 only)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool GetItemsWithPrices(TArray<FSteamItemDef>& itemDefs, TArray<int32>& prices, TArray<int32>& basePrices);

	/**
	* After a successful call to RequestPrices, this will return the number of item definitions with valid pricing.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static int32 GetNumItemsWithPrices();

	/**
	* Gets the dynamic properties from an item in an inventory result set.
	*
	* Property names are always composed of ASCII letters, numbers, and/or underscores.
	* If the results do not fit in the given buffer, partial results may be copied.
	*
	* @param	handle			The result handle containing the item to get the properties of.
	* @param	itemIndex	
	* @param	propertyName	The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.
	* @param	valueBuffer		Returns the value associated with pchPropertyName.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool GetResultItemProperty(FSteamInventoryResult handle, int32 itemIndex, FString propertyName, FString& valueBuffer);

	/**
	* Get the items associated with an inventory result handle.
	*
	* @param	handle		The inventory result handle to get the items for.
	* @param	items		The details are returned by copying them into this array.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool GetResultItems(FSteamInventoryResult handle, TArray<FSteamItemDetails>& items);

	/**
	* Find out the status of an asynchronous inventory result handle.
	*
	* This is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.
	*
	* @param	handle		The inventory result handle to get the status for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static ESteamResult GetResultStatus(FSteamInventoryResult handle);

	/**
	* Gets the server time at which the result was generated.
	*	
	* @param	handle	The inventory result handle to get the timestamp for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static int32 GetResultTimestamp(FSteamInventoryResult handle);

	/**
	* Grant all potential one-time promotional items to the current user.
	*
	* This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. 
	* One of the primary scenarios for this call is to grant an item to users who also own a specific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.
	* Any items that can be granted MUST have a "promo" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. 
	* This version will grant all items that have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. 
	* For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.
	*
	* @param	handle		Returns a new inventory result handle.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool GrantPromoItems(FSteamInventoryResult& handle);

	/**
	* Triggers an asynchronous load and refresh of item definitions.
	*
	* Item definitions are a mapping of "definition IDs" (integers between 1 and 999999999) to a set of string properties. 
	* Some of these properties are required to display items on the Steam community web site. Other properties can be defined by applications. 
	* There is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool LoadItemDefinitions();

	/**
	* Request the list of "eligible" promo items that can be manually granted to the given user.
	*
	* These are promo items of type "manual" that won't be granted automatically. An example usage of this is an item that becomes available every week.
	* After calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.
	*
	* @param	steamID		The Steam ID of the user to request the eligible promo items for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory", meta = (AutoCreateRefTerm = "callback"))
		void RequestEligiblePromoItemDefinitionsIDs(const FOnRequestEligiblePromoItemDefinitionsIDs& callback, FSteamID steamID);

	/**
	* Request prices for all item definitions that can be purchased in the user's local currency. 
	*
	* A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code. 
	* After that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory", meta = (AutoCreateRefTerm = "callback"))
		void RequestPrices(const FOnSteamInventoryRequestPricesResult& callback);

	/**
	* Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.
	*
	* A result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players. 
	* This is a secure way of preventing hackers from lying about posessing rare/high-value items. Serializes a result set with signature bytes to an output buffer. 
	* The size of a serialized result depends on the number items which are being serialized. When securely transmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.
	* Results have a built-in timestamp which will be considered "expired" after an hour has elapsed. See DeserializeResult for expiration handling.
	* If this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.
	*
	* @param	handle		The inventory result handle to serialize.
	* @param	buffer		The buffer that the serialized result will be copied into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool SerializeResult(FSteamInventoryResult handle, TArray<uint8>& buffer);

	/**
	* Starts the purchase process for the user, given a "shopping cart" of item definitions that the user would like to buy. 
	*
	* The user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.
	* If the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.
	* If the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired. 
	* NOTE: You must call DestroyResult on the inventory result for when you are done with it.
	*
	* @param	itemDefs		The array of item definition ids that the user wants to purchase.
	* @param	quantity		The array of quantities of each item definition that the user wants to purchase.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static void StartPurchase(const TArray<FSteamItemDef> itemDefs, const TArray<int32> quantity);

	/**
	* Transfer items between stacks within a user's inventory.
	*
	* This can be used to stack, split, and moving items. The source and destination items must have the same itemdef id. 
	* To move items onto a destination stack specify the source, the quantity to move, and the destination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.
	*
	* @param	handle				Returns a new inventory result handle.
	* @param	itemIdSource		The source item to transfer.
	* @param	quantity			The quantity of the item that will be transfered from itemIdSource to itemIdDest.
	* @param	itemIdDest			The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool TransferItemQuantity(FSteamInventoryResult& handle, FSteamItemInstanceID itemIDSource, int32 quantity, FSteamItemInstanceID itemIDDest);


	/**
	* Trigger an item drop if the user has played a long enough period of time.
	*
	* This period can be customized in two places:
	* At the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all "playtimegenerator" items that do not specify any overrides.
	* In an individual "playtimegenerator" item definition. The settings would take precedence over any application-level settings.
	* Only item definitions which are marked as "playtime item generators" can be spawned.
	* Typically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur. 
	* The granularity of the playtime generator settings is in minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client. 
	* The Steam servers will perform playtime accounting to prevent too-frequent drops. The servers will also manage adding the item to the players inventory.
	*
	* @param	handle				Returns a new inventory result handle.
	* @param	listDefinition		This must refer to an itemdefid of the type "playtimegenerator". See the inventory schema for more details.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool TriggerItemDrop(FSteamInventoryResult& handle, FSteamItemDef listDefinition);


	/**
	* Starts a transaction request to update dynamic properties on items for the current user. 
	*
	* This call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).
	* After calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers. 
	* A SteamInventoryResultReady_t callback will be fired with the results of the operation.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static void StartUpdateProperties();

	/**
	* Starts a transaction request to update dynamic properties on items for the current user.
	*
	* This call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).
	* After calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.
	* A SteamInventoryResultReady_t callback will be fired with the results of the operation.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool SubmitUpdateProperties(FSteamInventoryUpdateHandle handle, FSteamInventoryResult& resultHandle);

	/**
	* Removes a dynamic property for the given item.
	*
	* @param	handle			The update handle corresponding to the transaction request, returned from StartUpdateProperties.
	* @param	itemID			ID of the item being modified.
	* @param	propertyName	The dynamic property being removed.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool RemoveProperty(FSteamInventoryUpdateHandle handle, FSteamItemInstanceID itemID, FString propertyName);

	/**
	* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.
	*
	* @param	handle				The update handle corresponding to the transaction request, returned from StartUpdateProperties.
	* @param	itemID				ID of the item being modified.
	* @param	propertyName		The dynamic property being added or updated.
	* @param	value				The string value being set.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool SetPropertyString(FSteamInventoryUpdateHandle handle, FSteamItemInstanceID itemID, FString propertyName, FString value);

	/**
	* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.
	*
	* @param	handle				The update handle corresponding to the transaction request, returned from StartUpdateProperties.
	* @param	itemID				ID of the item being modified.
	* @param	propertyName		The dynamic property being added or updated.
	* @param	value				The string value being set.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool SetPropertyBool(FSteamInventoryUpdateHandle handle, FSteamItemInstanceID itemID, FString propertyName, bool value);

	/**
	* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.
	*
	* @param	handle				The update handle corresponding to the transaction request, returned from StartUpdateProperties.
	* @param	itemID				ID of the item being modified.
	* @param	propertyName		The dynamic property being added or updated.
	* @param	value				The string value being set.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool SetPropertyInt(FSteamInventoryUpdateHandle handle, FSteamItemInstanceID itemID, FString propertyName, int32 value);

	/**
	* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.
	*
	* @param	handle				The update handle corresponding to the transaction request, returned from StartUpdateProperties.
	* @param	itemID				ID of the item being modified.
	* @param	propertyName		The dynamic property being added or updated.
	* @param	value				The string value being set.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Inventory")
		static bool SetPropertyFloat(FSteamInventoryUpdateHandle handle, FSteamItemInstanceID itemID, FString propertyName, float value);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	STEAM_CALLBACK_MANUAL(UInventory, OnSteamInventoryDefinitionUpdate, SteamInventoryDefinitionUpdate_t, OnSteamInventoryDefinitionUpdateCallback);
	STEAM_CALLBACK_MANUAL(UInventory, OnSteamInventoryEligiblePromoItemDefIDs, SteamInventoryEligiblePromoItemDefIDs_t, OnSteamInventoryEligiblePromoItemDefIDsCallback);
	STEAM_CALLBACK_MANUAL(UInventory, OnSteamInventoryResultReady, SteamInventoryResultReady_t, OnSteamInventoryResultReadyCallback);
	STEAM_CALLBACK_MANUAL(UInventory, OnSteamInventoryFullUpdate, SteamInventoryFullUpdate_t, OnSteamInventoryFullUpdateCallback);
	STEAM_CALLBACK_MANUAL(UInventory, OnSteamInventoryStartPurchaseResult, SteamInventoryStartPurchaseResult_t, OnSteamInventoryStartPurchaseResultCallback);
	STEAM_CALLBACK_MANUAL(UInventory, OnSteamInventoryRequestPricesResult, SteamInventoryRequestPricesResult_t, OnSteamInventoryRequestPricesResultCallback);
};
