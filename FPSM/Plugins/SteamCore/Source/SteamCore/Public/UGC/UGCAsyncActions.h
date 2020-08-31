/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#pragma once

#include "UGCTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "UGCAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddItemToFavoritesAsyncDelegate, const FUserFavoriteItemsListChanged&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateItemAsyncDelegate, const FCreateItemResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetUserItemVoteAsyncDelegate, const FSetUserItemVoteResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetUserItemVoteAsyncDelegate, const FGetUserItemVoteResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoveItemFromFavoritesAsyncDelegate, const FUserFavoriteItemsListChanged&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubscribeItemAsyncDelegate, const FRemoteStorageSubscribePublishedFileResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSendQueryUGCRequestAsyncDelegate, const FSteamUGCQueryCompleted&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddAppDependencyResultAsyncDelegate, const FAddAppDependencyResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoveAppDependencyResultAsyncDelegate, const FRemoveAppDependencyResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddUGCDependencyResultAsyncDelegate, const FAddUGCDependencyResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoveUGCDependencyResultAsyncDelegate, const FRemoveUGCDependencyResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeleteItemResultAsyncDelegate, const FDeleteItemResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetAppDependenciesResultAsyncDelegate, const FGetAppDependenciesResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubmitItemUpdateAsyncDelegate, const FSubmitItemUpdateResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartPlaytimeTrackingAsyncDelegate, const FStartPlaytimeTrackingResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStopPlaytimeTrackingAsyncDelegate, const FStopPlaytimeTrackingResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStopPlaytimeTrackingForAllItemsAsyncDelegate, const FStopPlaytimeTrackingResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnsubscribeItemAsyncDelegate, const FRemoteStorageSubscribePublishedFileResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDownloadItemResultDelegate, const FDownloadItemResult&, data);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnStopPlaytimeTrackingForAllItemsAsyncDelegate OnSuccess;
public:
	/**
	* Stop tracking playtime of all workshop items.
	* When your app shuts down, playtime tracking will automatically stop.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Stop Playtime Tracking For All Items"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* StopPlaytimeTrackingForAllItemsAsync(UObject* WorldContextObject);
private:
	UFUNCTION()
		void HandleCallback(const FStopPlaytimeTrackingResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStopPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionStopPlaytimeTracking : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnStopPlaytimeTrackingAsyncDelegate OnSuccess;
public:
	/**
	* Stop tracking playtime on a set of workshop items.
	* When your app shuts down, playtime tracking will automatically stop.
	*
	* @param	publishedFileIDs	The array of workshop items you want to stop tracking. (Maximum of 100 items.)
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Stop Playtime Tracking"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionStopPlaytimeTracking* StopPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> publishedFileIDs);
private:
	UFUNCTION()
		void HandleCallback(const FStopPlaytimeTrackingResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStartPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionStartPlaytimeTracking : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnStartPlaytimeTrackingAsyncDelegate OnSuccess;
public:
	/**
	* Start tracking playtime on a set of workshop items.
	* When your app shuts down, playtime tracking will automatically stop.
	*
	* @param	publishedFileID		The array of workshop items you want to start tracking. (Maximum of 100 items.)
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Start Playtime Tracking"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionStartPlaytimeTracking* StartPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> publishedFileIDs);
private:
	UFUNCTION()
		void HandleCallback(const FStartPlaytimeTrackingResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionUnsubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionUnsubscribeItem : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnUnsubscribeItemAsyncDelegate OnSuccess;
public:
	/**
	* Unsubscribe from a workshop item. This will result in the item being removed after the game quits.
	*
	* @param	publishedFileID		The workshop item to unsubscribe from.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Unsubscribe Item"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionUnsubscribeItem* UnsubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileIDs);
private:
	UFUNCTION()
		void HandleCallback(const FRemoteStorageSubscribePublishedFileResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionSubscribeItem : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSubscribeItemAsyncDelegate OnSuccess;
public:
	/**
	* Subscribe to a workshop item. It will be downloaded and installed as soon as possible.
	*
	* @param	publishedFileID		The workshop item to subscribe to.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Subscribe Item"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionSubscribeItem* SubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileIDs);
private:
	UFUNCTION()
		void HandleCallback(const FRemoteStorageSubscribePublishedFileResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionRemoveItemFromFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionRemoveItemFromFavorites : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnRemoveItemFromFavoritesAsyncDelegate OnSuccess;
public:
	/**
	* Removes a workshop item from the users favorites list.
	*
	* @param	appID					The app ID that this item belongs to.
	* @param	publishedFileID			The workshop item to remove from the users favorites list.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Remove Item from Favorites"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionRemoveItemFromFavorites* RemoveItemFromFavoritesAsync(UObject* WorldContextObject, int32 appID, FPublishedFileID publishedFileID);
private:
	UFUNCTION()
		void HandleCallback(const FUserFavoriteItemsListChanged& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionAddItemToFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionAddItemToFavorites : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnAddItemToFavoritesAsyncDelegate OnSuccess;
public:
	/**
	* Adds a workshop item to the users favorites list.
	*
	* @param	appID				The app ID that this item belongs to.
	* @param	publishedFileID		The workshop item to add to the users favorites list.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Add Item to Favorites"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionAddItemToFavorites* AddItemToFavoritesAsync(UObject* WorldContextObject, int32 appID, FPublishedFileID publishedFileID);
private:
	UFUNCTION()
		void HandleCallback(const FUserFavoriteItemsListChanged& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionGetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionGetUserItemVote : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnGetUserItemVoteAsyncDelegate OnSuccess;
public:
	/**
	* Gets the users vote status on a workshop item.
	*
	* @param	publishedFileID		The workshop item ID to get the users vote.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Get User Item Vote"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionGetUserItemVote* GetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID);
private:
	UFUNCTION()
		void HandleCallback(const FGetUserItemVoteResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionSetUserItemVote : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSetUserItemVoteAsyncDelegate OnSuccess;
public:
	/**
	* Allows the user to rate a workshop item up or down.
	*
	* @param	publishedFileID		The workshop item ID to vote on.
	* @param	bVoteUp				Vote up (true) or down (false)?
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Set User Item Vote"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionSetUserItemVote* SetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, bool bVoteUp);
private:
	UFUNCTION()
		void HandleCallback(const FSetUserItemVoteResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSubmitItemUpdate
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionSubmitItemUpdate : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSubmitItemUpdateAsyncDelegate OnSuccess;
public:
	/**
	* Uploads the changes made to an item to the Steam Workshop.
	* You can track the progress of an item update with GetItemUpdateProgress.
	*
	* @param	handle			The update handle to submit.
	* @param	changeNote		A brief description of the changes made. (Optional, set to NULL for no change note)
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Submit Item Update"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionSubmitItemUpdate* SubmitItemUpdateAsync(UObject* WorldContextObject, FUGCUpdateHandle handle, FString changeNote);
private:
	UFUNCTION()
		void HandleCallback(const FSubmitItemUpdateResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionCreateItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionCreateItem : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnCreateItemAsyncDelegate OnSuccess;
public:
	/**
	* Creates a new workshop item with no content attached yet.
	*
	* @param	consumerAppID		The App ID that will be using this item.
	* @param	fileType			The type of UGC to create.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Create Item"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionCreateItem* CreateItemAsync(UObject* WorldContextObject, int32 consumerAppID, ESteamWorkshopFileType fileType);
private:
	UFUNCTION()
		void HandleCallback(const FCreateItemResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSendQueryUGCRequest
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionSendQueryUGCRequest : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSendQueryUGCRequestAsyncDelegate OnSuccess;
public:
	/**
	* Send a UGC query to Steam.
	* This must be called with a handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should use one or more of the following APIs to customize your query:
	* AddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage, SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag
	*
	* @param	handle		The UGC query request handle to send.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Send Query UGC Request"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionSendQueryUGCRequest* SendQueryUGCRequestAsync(UObject* WorldContextObject, FUGCQueryHandle handle);
private:
	UFUNCTION()
		void HandleCallback(const FSteamUGCQueryCompleted& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionAddAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionAddAppDependency : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnAddAppDependencyResultAsyncDelegate OnSuccess;
public:
	/**
	* Adds a dependency between the given item and the appid.
	* This list of dependencies can be retrieved by calling GetAppDependencies.
	* This is a soft-dependency that is displayed on the web.
	* It is up to the application to determine whether the item can actually be used or not.
	*
	* @param	publishedFileID		The item.
	* @param	appID				The required app/dlc.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Add App Dependency"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionAddAppDependency* AddAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, int32 appID);
private:
	UFUNCTION()
		void HandleCallback(const FAddAppDependencyResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionRemoveAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionRemoveAppDependency : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnRemoveAppDependencyResultAsyncDelegate OnSuccess;
public:
	/**
	* Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.
	*
	* @param	publishedFileID		The item.
	* @param	appID				The app/dlc.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Remove App Dependency"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionRemoveAppDependency* RemoveAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, int32 appID);
private:
	UFUNCTION()
		void HandleCallback(const FRemoveAppDependencyResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionAddUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionAddUGCDependency : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnAddUGCDependencyResultAsyncDelegate OnSuccess;
public:
	/**
	* Adds a workshop item as a dependency to the specified item.
	* If the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection.
	* Otherwise, the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC
	* API using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.
	*
	* @param	publishedFileID			The workshop item to add a dependency to.
	* @param	childPublishedFileID	The dependency to add to the parent.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Add Dependency"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionAddUGCDependency* AddDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, FPublishedFileID childPublishedFileID);
private:
	UFUNCTION()
		void HandleCallback(const FAddUGCDependencyResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionRemoveUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionRemoveUGCDependency : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnRemoveUGCDependencyResultAsyncDelegate OnSuccess;
public:
	/**
	* Removes a workshop item as a dependency from the specified item.
	*
	* @param	parentPublishedFileID		The workshop item to remove a dependency from.
	* @param	childPublishedFileID		The dependency to remove from the parent.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Add Dependency"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionRemoveUGCDependency* RemoveDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, FPublishedFileID childPublishedFileID);
private:
	UFUNCTION()
		void HandleCallback(const FRemoveUGCDependencyResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionDeleteItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionDeleteItem : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnDeleteItemResultAsyncDelegate OnSuccess;
public:
	/**
	* Deletes the item without prompting the user.
	*
	* @param	publishedFileID		The item to delete.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Delete Item"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionDeleteItem* DeleteItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID);
private:
	UFUNCTION()
		void HandleCallback(const FDeleteItemResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionGetAppDependencies
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionGetAppDependencies : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnGetAppDependenciesResultAsyncDelegate OnSuccess;
public:
	/**
	* Get the app dependencies associated with the given PublishedFileId_t.
	* These are "soft" dependencies that are shown on the web.
	* It is up to the application to determine whether an item can be used or not.
	*
	* @param	publishedFileID		The workshop item to get app dependencies for.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Get App Dependencies"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionGetAppDependencies* GetAppDependenciesAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID);
private:
	UFUNCTION()
		void HandleCallback(const FGetAppDependenciesResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionDownloadItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUGCAsyncActionDownloadItem : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnDownloadItemResultDelegate OnSuccess;
public:
	/**
	* Download or update a workshop item.
	*
	* If the return value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.
	* If the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.
	* If the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update.
	* Do not access the workshop item on disk until the Callback DownloadItemResult_t is called.
	* The DownloadItemResult_t callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the handler
	* will be called for all item downloads regardless of the running application.
	*
	* @param	publishedFileID		The workshop item to download.
	* @param	bHighPriority		Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Download Item"), Category = "SteamCore|UGC|Async")
		static USteamCoreUGCAsyncActionDownloadItem* DownloadItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, bool bHighPriority);
private:
	UFUNCTION()
		void HandleCallback(const FDownloadItemResult& data, bool bWasSuccessful);
};