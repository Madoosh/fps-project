/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "UGCTypes.h"
#include "UGC.generated.h"

UCLASS()
class STEAMCORE_API UUGC : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UUGC() {SubsystemType = ESubsystem::UGC;}
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UGC|Delegates")
		FOnItemInstalled ItemInstalled;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UGC|Delegates")
		FOnDownloadItemResult DownloadItemResult;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Adds a dependency between the given item and the appid. 
	*
	* This list of dependencies can be retrieved by calling GetAppDependencies. 
	* This is a soft-dependency that is displayed on the web. 
	* It is up to the application to determine whether the item can actually be used or not.
	*
	* @param	publishedFileID		The item.
	* @param	appID				The required app/dlc.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void AddAppDependency(const FOnAddAppDependencyResult& callback, FPublishedFileID publishedFileID, int32 appID);

	/**
	* Adds a workshop item as a dependency to the specified item. 
	*
	* If the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection. 
	* Otherwise, the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC 
	* API using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.
	*
	* @param	publishedFileID			The workshop item to add a dependency to.
	* @param	childPublishedFileID	The dependency to add to the parent.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void AddDependency(const FOnAddUGCDependencyResult& callback, FPublishedFileID publishedFileID, FPublishedFileID childPublishedFileID);

	/**
	* Adds a excluded tag to a pending UGC Query. This will only return UGC without the specified tag.
	*
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	*
	* @param	handle		The UGC query handle to customize.
	* @param	tagName		The tag that must NOT be attached to the UGC to receive it.	
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool AddExcludedTag(FUGCQueryHandle handle, FString tagName);

	/**
	* Adds a key-value tag pair to an item. Keys can map to multiple different values (1-to-many relationship).
	*
	* Key names are restricted to alpha-numeric characters and the '_' character.
	* Both keys and values cannot exceed 255 characters in length.
	* Key-value tags are searchable by exact match only.
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle			The workshop item update handle to customize.
	* @param	key				The key to set on the item.
	* @param	value			A value to map to the key.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool AddItemKeyValueTag(FUGCUpdateHandle handle, FString key, FString value);

	/**
	* Adds an additional preview file for the item.
	*
	* Then the format of the image should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.
	* NOTE: Using k_EItemPreviewType_YouTubeVideo or k_EItemPreviewType_Sketchfab are not currently supported with this API. For YouTube videos you should use AddItemPreviewVideo.
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle			The workshop item update handle to customize.
	* @param	previewFile		Absolute path to the local image.
	* @param	type			The type of this preview.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool AddItemPreviewFile(FUGCUpdateHandle handle, FString previewFile, ESteamItemPreviewType type);

	/**
	* Adds an additional video preview from YouTube for the item.
	*
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*	
	* @param	handle			The workshop item update handle to customize.
	* @param	videoID			The YouTube video ID to add. (e.g. "jHgZh4GV9G0")
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool AddItemPreviewVideo(FUGCUpdateHandle handle, FString videoID);

	/**
	* Adds a workshop item to the users favorites list.
	*
	* @param	appID				The app ID that this item belongs to.
	* @param	publishedFileID		The workshop item to add to the users favorites list.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void AddItemToFavorites(const FOnAddItemToFavorites& callback, int32 appID, FPublishedFileID publishedFileID);

	/**
	* Adds a required key-value tag to a pending UGC Query. This will only return workshop items that have a key = pKey and a value = pValue.
	*
	* @param	handle		The UGC query handle to customize.
	* @param	key			The key-value key that must be attached to the UGC to receive it.
	* @param	value		The key-value value associated with pKey that must be attached to the UGC to receive it.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool AddRequiredKeyValueTag(FUGCQueryHandle handle, FString key, FString value);

	/**
	* Adds a required tag to a pending UGC Query. This will only return UGC with the specified tag.
	*	
	* @param	handle		The UGC query handle to customize.
	* @param	tagName		The tag that must be attached to the UGC to receive it.
	*/	
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool AddRequiredTag(FUGCQueryHandle handle, FString tagName);

	/**
	* Lets game servers set a specific workshop folder before issuing any UGC commands.
	*
	* This is helpful if you want to support multiple game servers running out of the same install folder.
	*
	* @param	workshopDepotID		The depot ID of the game server.
	* @param	folder				The absolute path to store the workshop content.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool BInitWorkshopForGameServer(int32 workshopDepotID, FString folder);

	/**
	* Creates a new workshop item with no content attached yet.
	*
	* @param	consumerAppID		The App ID that will be using this item.
	* @param	fileType			The type of UGC to create.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void CreateItem(const FOnCreateItem& callback, int32 consumerAppID, ESteamWorkshopFileType fileType);

	/**
	* Query for all matching UGC. You can use this to list all of the available UGC for your app.
	*
	* This will return up to 50 results as declared by kNumUGCResultsPerPage. 
	* You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.
	* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!
	* NOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!
	* To query for the UGC associated with a single user you can use CreateQueryUserUGCRequest instead.
	*
	*
	* @param	queryType			Used to specify the sorting and filtering for this call.
	* @param	fileType			Used to specify the type of UGC queried for.
	* @param	creatorAppID		This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.
	* @param	consumerAppID		This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!
	* @param	page				The page number of the results to receive. This should start at 1 on the first call.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static FUGCQueryHandle CreateQueryAllUGCRequest(ESteamUGCQuery queryType, ESteamUGCMatchingUGCType fileType, int32 creatorAppID, int32 consumerAppID, int32 page = 1);

	/**
	* Query for the details of specific workshop items.
	*
	* This will return up to 50 results as declared by kNumUGCResultsPerPage.
	* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!
	* NOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!
	* To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.
	*
	* @param	publishedFileIDs		The list of workshop items to get the details for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static FUGCQueryHandle CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> publishedFileIDs);

	/**
	* Query UGC associated with a user. You can use this to list the UGC the user is subscribed to amongst other things.
	*
	* This will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.
	* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!
	* NOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!
	* To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.
	*
	* @param	steamID				The Account ID to query the UGC for. You can use CSteamID.GetAccountID to get the Account ID from a Steam ID.
	* @param	listType			Used to specify the type of list to get. If the currently logged in user is different than the user specified in unAccountID, then some options are not be allowed. (k_EUserUGCList_VotedOn, k_EUserUGCList_VotedUp, k_EUserUGCList_VotedDown, k_EUserUGCList_WillVoteLater, k_EUserUGCList_Subscribed)
	* @param	matchingUGCType		Used to specify the type of UGC queried for.
	* @param	sortOrder			Used to specify the order that the list will be sorted in.
	* @param	creatorAppID		This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.
	* @param	consumerAppID		This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!
	* @param	page				The page number of the results to receive. This should start at 1 on the first call.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static FUGCQueryHandle CreateQueryUserUGCRequest(FSteamID steamID, ESteamUserUGCList listType, ESteamUGCMatchingUGCType matchingUGCType, ESteamUserUGCListSortOrder sortOrder, int32 creatorAppID, int32 consumerAppID, int32 page = 1);

	/**
	* Deletes the item without prompting the user.
	*
	* @param	publishedFileID		The item to delete.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void DeleteItem(const FOnDeleteItemResult& callback, FPublishedFileID publishedFileID);

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
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool DownloadItem(FPublishedFileID publishedFileID, bool bHighPriority);

	/**
	* Get the app dependencies associated with the given PublishedFileId_t. 
	*
	* These are "soft" dependencies that are shown on the web. 
	* It is up to the application to determine whether an item can be used or not.
	*
	* @param	publishedFileID		The workshop item to get app dependencies for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void GetAppDependencies(const FOnGetAppDependenciesResult& callback, FPublishedFileID publishedFileID);

	/**
	* Get info about a pending download of a workshop item that has k_EItemStateNeedsUpdate set.
	*
	* @param	publishedFileID		The workshop item to get the download info for.
	* @param	bytesDownloaded		Returns the current bytes downloaded.
	* @param	bytesTotal			Returns the total bytes. This is only valid after the download has started.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool GetItemDownloadInfo(FPublishedFileID publishedFileID, int32& bytesDownloaded, int32& bytesTotal);

	/**
	* Gets info about currently installed content on the disc for workshop items that have k_EItemStateInstalled set.
	*
	* Calling this sets the "used" flag on the workshop item for the current player and adds it to their k_EUserUGCList_UsedOrPlayed list.
	* If k_EItemStateLegacyItem is set then pchFolder contains the path to the legacy file itself, not a folder.
	*
	* @param	publishedFileID		The workshop item to get the install info for.
	* @param	sizeOnDisk			Returns the size of the workshop item in bytes.
	* @param	folder				Returns the absolute path to the folder containing the content by copying it.
	* @param	timeStamp			Returns the time when the workshop item was last updated.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool GetItemInstallInfo(FPublishedFileID publishedFileID, int32& sizeOnDisk, FString& folder, int32& timeStamp);

	/**
	* Gets the current state of a workshop item on this client.
	*
	* @param	publishedFileID		The workshop item to get the state for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static int32 GetItemState(FPublishedFileID publishedFileID);

	/**
	* Gets the progress of an item update.
	*
	* @param	handle				The update handle to get the progress for.
	* @param	bytesProcessed		Returns the current number of bytes uploaded.
	* @param	bytesTotal			Returns the total number of bytes that will be uploaded.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static ESteamItemUpdateStatus GetItemUpdateProgress(FUGCUpdateHandle handle, int32& bytesProcessed, int32& bytesTotal);

	/**
	* Gets the total number of items the current user is subscribed to for the game or application.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static int32 GetNumSubscribedItems();

	/**
	* Retrieve the details of an additional preview associated with an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.
	* Before calling this you should call GetQueryUGCNumAdditionalPreviews to get number of additional previews.
	*
	* @param	handle				The UGC query handle to get the results from.
	* @param	index				The index of the item to get the details of.
	* @param	previewIndex		The index of the additional preview to get the details of.
	* @param	urlOrVideoID		Returns a URL or Video ID by copying it into this string.
	* @param	originalFileName	Returns the original file name. May be set to NULL to not receive this.
	* @param	previewType			The type of preview that was returned.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool GetQueryUGCAdditionalPreview(FUGCQueryHandle handle, int32 index, int32 previewIndex, FString& urlOrVideoID, FString& originalFileName, ESteamItemPreviewType& previewType);

	/**
	* Retrieve the ids of any child items of an individual workshop item after receiving a querying UGC call result. 
	*
	* These items can either be a part of a collection or some other dependency (see AddDependency).
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.
	* You should create pvecPublishedFileID with m_unNumChildren provided in SteamUGCDetails_t after getting the UGC details with GetQueryUGCResult.
	*
	* @param	handle				The UGC query handle to get the results from.
	* @param	index				The index of the item to get the details of.
	* @param	publishedFileIDs	Returns the UGC children by setting this array.
	* @param	maxEntries			The length of publishedFileIDs.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool GetQueryUGCChildren(FUGCQueryHandle handle, int32 index, TArray<FPublishedFileID>& publishedFileIDs, int32 maxEntries);

	/**
	* Retrieve the details of a key-value tag associated with an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.
	* Before calling this you should call GetQueryUGCNumKeyValueTags to get number of tags.
	*
	* @param	handle				The UGC query handle to get the results from.
	* @param	index				The index of the item to get the details of.
	* @param	keyValueTagIndex	The index of the tag to get the details of.
	* @param	key					Returns the key by copying it into this string.
	* @param	value				Returns the value by copying it into this string.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool GetQueryUGCKeyValueTag(FUGCQueryHandle handle, int32 index, int32 keyValueTagIndex, FString& key, FString& value);

	/**
	* Retrieve the developer set metadata of an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.
	*
	* @param	handle			The UGC query handle to get the results from.
	* @param	index			The index of the item to get the details of.
	* @param	metaData		Returns the url by copying it into this string.
	* @param	metadataSize	The size of pchMetadata in bytes.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool GetQueryUGCMetadata(FUGCQueryHandle handle, int32 index, FString& metaData, int32 metadataSize);
	
	/**
	* Retrieve the number of additional previews of an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.
	* You can then call GetQueryUGCAdditionalPreview to get the details of each additional preview.
	*
	* @param	handle		The UGC query handle to get the results from.
	* @param	index		The index of the item to get the details of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static int32 GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle handle, int32 index);

	/**
	* Retrieve the number of key-value tags of an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.
	* You can then call GetQueryUGCKeyValueTag to get the details of each tag.
	*
	* @param	handle		The UGC query handle to get the results from.
	* @param	index		The index of the item to get the details of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static int32 GetQueryUGCNumKeyValueTags(FUGCQueryHandle handle, int32 index);

	/**
	* Retrieve the URL to the preview image of an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.
	* You can use this URL to download and display the preview image instead of having to download it using the m_hPreviewFile in the ISteamUGC::SteamUGCDetails_t struct.
	* 
	* @param	handle		The UGC query handle to get the results from.
	* @param	index		The index of the item to get the details of.
	* @param	url			Returns the url by copying it into this string.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool GetQueryUGCPreviewURL(FUGCQueryHandle handle, int32 index, FString& url);

	/**
	* Retrieve the details of an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.
	*
	* @param	handle		The UGC query handle to get the results from.
	* @param	index		The index of the item to get the details of.
	* @param	details		Returns the the UGC details.
	*/	
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool GetQueryUGCResult(FUGCQueryHandle handle, int32 index, FSteamUGCDetails& details);

	/**
	* Retrieve various statistics of an individual workshop item after receiving a querying UGC call result.
	*
	* You should call this in a loop to get the details of all the workshop items returned.
	* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.
	*
	* @param	handle		The UGC query handle to get the results from.
	* @param	index		The index of the item to get the details of.
	* @param	statType	The statistic to retrieve.
	* @param	statValue	Returns the value associated with the specified statistic.
	*/	
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool GetQueryUGCStatistic(FUGCQueryHandle handle, int32 index, ESteamItemStatistic statType, FString& statValue);

	/**
	* Gets a list of all of the items the current user is subscribed to for the current game.
	*
	* You create an array with the size provided by GetNumSubscribedItems before calling this.
	*
	* @param	publishedFileIDs	The array where the item ids will be copied into.
	* @param	maxEntries				The maximum number of items to return. This should typically be the same as GetNumSubscribedItems and the same size as pvecPublishedFileID.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static int32 GetSubscribedItems(TArray<FPublishedFileID>& publishedFileIDs, int32 maxEntries);

	/**
	* Gets the users vote status on a workshop item.
	*
	* @param	publishedFileID		The workshop item ID to get the users vote.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void GetUserItemVote(const FOnGetUserItemVote& callback, FPublishedFileID publishedFileID);

	/**
	* Releases a UGC query handle when you are done with it to free up memory.
	*
	* @param	handle			The UGC query handle to release.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool ReleaseQueryUGCRequest(FUGCQueryHandle handle);

	/**
	* Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.
	*
	* @param	publishedFileID		The item.
	* @param	appID				The app/dlc.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void RemoveAppDependency(const FOnRemoveAppDependencyResult& callback, FPublishedFileID publishedFileID, int32 appID);

	/**
	* Removes a workshop item as a dependency from the specified item.
	*
	* @param	parentPublishedFileID		The workshop item to remove a dependency from.
	* @param	childPublishedFileID		The dependency to remove from the parent.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		void RemoveDependency(const FOnRemoveUGCDependencyResult& callback, FPublishedFileID parentPublishedFileID, FPublishedFileID childPublishedFileID);

	/**
	* Removes a workshop item from the users favorites list.
	*
	* @param	appID					The app ID that this item belongs to.
	* @param	publishedFileID			The workshop item to remove from the users favorites list.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void RemoveItemFromFavorites(const FOnRemoveItemFromFavorites& callback, int32 appID, FPublishedFileID publishedFileID);

	/**
	* Removes an existing key value tag from an item.
	*
	* You can only call this up to 100 times per item update. If you need remove more tags than that you'll need to make subsequent item updates.
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle		The workshop item update handle to customize.
	* @param	key			The key to remove from the item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool RemoveItemKeyValueTags(FUGCUpdateHandle handle, FString key);

	/**
	* RemoveItemPreview
	*
	* @param	handle		The workshop item update handle to customize.
	* @param	index
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool RemoveItemPreview(FUGCUpdateHandle handle, int32 index);

	/**
	* Send a UGC query to Steam.
	*
	* This must be called with a handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should use one or more of the following APIs to customize your query:
	* AddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage, SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag
	*
	* @param	handle		The UGC query request handle to send.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void SendQueryUGCRequest(const FOnSendQueryUGCRequest& callback, FUGCQueryHandle handle);

	/**
	* Sets whether results will be returned from the cache for the specific period of time on a pending UGC Query.
	*
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	*
	* @param	handle				The UGC query handle to customize.
	* @param	maxAgeSeconds		The maximum amount of time that an item can be returned without a cache invalidation.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetAllowCachedResponse(FUGCQueryHandle handle, int32 maxAgeSeconds);

	/**
	* Use legacy upload for a single small file (SDK 1.43+ Only)
	*
	* The parameter to SetItemContent() should either be a directory with one file or the full path to the file.  The file must also be less than 10MB in size.
	*
	* @param	handle				The UGC query handle to customize.
	* @param	bAllowLegacyUpload	
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		bool SetAllowLegacyUpload(FUGCUpdateHandle handle, bool bAllowLegacyUpload);

	/**
	* Sets to only return items that have a specific filename on a pending UGC Query.
	*
	* NOTE: This can only be used with CreateQueryUserUGCRequest!
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	*
	* @param	handle					The UGC query handle to customize.
	* @param	matchCloudFileName		The filename to match.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetCloudFileNameFilter(FUGCQueryHandle handle, FString matchCloudFileName);

	/**
	* Sets the folder that will be stored as the content for an item.
	*
	* For efficient upload and download, files should not be merged or compressed into single files (e.g. zip files).
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle			The workshop item update handle to customize.
	* @param	contentFolder	The absolute path to a local folder containing the content for the item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetItemContent(FUGCUpdateHandle handle, FString contentFolder);

	/**
	* Sets a new description for an item.
	*
	* The description must be limited to the length defined by k_cchPublishedDocumentDescriptionMax.
	* You can set what language this is for by using SetItemUpdateLanguage, if no language is set then "english" is assumed.
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle			The workshop item update handle to customize.
	* @param	description		The new description of the item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetItemDescription(FUGCUpdateHandle handle, FString description);

	/**
	* Sets arbitrary metadata for an item. This metadata can be returned from queries without having to download and install the actual content.
	*
	* The metadata must be limited to the size defined by k_cchDeveloperMetadataMax.
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle			The workshop item update handle to customize.
	* @param	metaData		The new metadata for this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetItemMetadata(FUGCUpdateHandle handle, FString metaData);

	/**
	* Sets the primary preview image for the item.
	*
	* The format should be one that both the web and the application (if necessary) can render. Suggested formats include JPG, PNG and GIF.
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle			The workshop item update handle to customize.
	* @param	previewFile		The absolute path to a local preview image file for the item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetItemPreview(FUGCUpdateHandle handle, FString previewFile);

	/**
	* Sets arbitrary developer specified tags on an item.
	*
	* Each tag must be limited to 255 characters. Tag names can only include printable characters, excluding ','. For reference on what characters are allowed, refer to http://en.cppreference.com/w/c/string/byte/isprint
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle		The workshop item update handle to customize.
	* @param	tags		The list of tags to set on this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetItemTags(FUGCUpdateHandle handle, TArray<FString> tags);

	/**
	* Sets a new title for an item.
	*
	* The title must be limited to the size defined by k_cchPublishedDocumentTitleMax.
	* You can set what language this is for by using SetItemUpdateLanguage, if no language is set then "english" is assumed.
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle		The workshop item update handle to customize.
	* @param	title		The new title of the item.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetItemTitle(FUGCUpdateHandle handle, FString title);

	/**
	* Sets the language of the title and description that will be set in this item update.
	*
	* This must be in the format of the API language code.
	* If this is not set then "english" is assumed.
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle			The workshop item update handle to customize.
	* @param	language		The language of the title and description that will be set in this update.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetItemUpdateLanguage(FUGCUpdateHandle handle, FString language);

	/**
	* Sets the visibility of an item.
	*
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle			The workshop item update handle to customize.
	* @param	visibility		The visibility to set.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetItemVisibility(FUGCUpdateHandle handle, ESteamRemoteStoragePublishedFileVisibility visibility);

	/**
	* Sets the language to return the title and description in for the items on a pending UGC Query.
	*
	* This must be in the format of the API Language code.
	* If this is not set then "english" is assumed.
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	*
	* @param	handle			The UGC query handle to customize.
	* @param	language		The language to return.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetLanguage(FUGCQueryHandle handle, FString language);

	/**
	* Sets whether workshop items will be returned if they have one or more matching tag, or if all tags need to match on a pending UGC Query.
	*
	* NOTE: This can only be used with CreateQueryAllUGCRequest!
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	*
	* @param	handle			The UGC query handle to customize.
	* @param	bMatchAnyTag	Should the item just need to have one required tag (true), or all of them? (false)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetMatchAnyTag(FUGCQueryHandle handle, bool bMatchAnyTag);

	/**
	* Sets whether the order of the results will be updated based on the rank of items over a number of days on a pending UGC Query.
	*
	* NOTE: This can only be used with CreateQueryAllUGCRequest!
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	*
	* @param	handle		The UGC query handle to customize.
	* @param	days		Sets the number of days to rank items over. Valid values are 1-365 inclusive.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetRankedByTrendDays(FUGCQueryHandle handle, int32 days);

	/**
	* Sets whether to return any additional images/videos attached to the items on a pending UGC Query.
	*
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	*	
	* @param	handle							The UGC query handle to customize.
	* @param	bReturnAdditionalPreviews		Return the additional previews for the items?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetReturnAdditionalPreviews(FUGCQueryHandle handle, bool bReturnAdditionalPreviews);

	/**
	* Sets whether to return the IDs of the child items of the items on a pending UGC Query.
	*
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	* 
	* @param	handle				The UGC query handle to customize.
	* @param	bReturnChildren		Return the IDs of children of the items?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetReturnChildren(FUGCQueryHandle handle, bool bReturnChildren);

	/**
	* Sets whether to return any key-value tags for the items on a pending UGC Query.
	*
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	* 
	* @param	handle					The UGC query handle to customize.
	* @param	bReturnKeyValueTags		Return any key-value tags for the items?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetReturnKeyValueTags(FUGCQueryHandle handle, bool bReturnKeyValueTags);

	/**
	* Sets whether to return the full description for the items on a pending UGC Query.
	*
	* If you don't set this then you only receive the summary which is the description truncated at 255 bytes.
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	*
	* @param	handle						The UGC query handle to customize.
	* @param	bReturnLongDescription		Return the long description for the items?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetReturnLongDescription(FUGCQueryHandle handle, bool bReturnLongDescription);

	/**
	* Sets whether to return the developer specified metadata for the items on a pending UGC Query.
	*
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	*
	* @param	handle				The UGC query handle to customize.
	* @param	bReturnMetadata		Return the metadata for the items? 
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetReturnMetadata(FUGCQueryHandle handle, bool bReturnMetadata);

	/** 
	* Sets whether to only return IDs instead of all the details on a pending UGC Query.
	*
	* This is useful for when you don't need all the information (e.g. you just want to get the IDs of the items a user has in their favorites list.)
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	*
	* @param	handle				The UGC query handle to customize.
	* @param	bReturnOnlyIDs		Return only the IDs of items?
	*/	
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetReturnOnlyIDs(FUGCQueryHandle handle, bool bReturnOnlyIDs);

	/**
	* Sets whether to return the the playtime stats on a pending UGC Query.
	*
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	*
	* @param	handle			The UGC query handle to customize.
	* @param	days			The number of days worth of playtime stats to return.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetReturnPlaytimeStats(FUGCQueryHandle handle, int32 days);

	/**
	* Sets whether to only return the the total number of matching items on a pending UGC Query.
	*
	* The actual items will not be returned when SteamUGCQueryCompleted_t is called.
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	*
	* @param	handle				The UGC query handle to customize.
	* @param	bReturnTotalOnly	Only return the total number of items?
	*/ 
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetReturnTotalOnly(FUGCQueryHandle handle, bool bReturnTotalOnly);

	/**
	* Sets a string to that items need to match in either the title or the description on a pending UGC Query.
	*
	* NOTE: This can only be used with CreateQueryAllUGCRequest!
	* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.
	* 
	* @param	handle			The UGC query handle to customize.
	* @param	searchText		The text to be searched for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool SetSearchText(FUGCQueryHandle handle, FString searchText);

	/**
	* Allows the user to rate a workshop item up or down.
	*
	* @param	publishedFileID		The workshop item ID to vote on.
	* @param	bVoteUp				Vote up (true) or down (false)?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void SetUserItemVote(const FOnSetUserItemVote& callback, FPublishedFileID publishedFileID, bool bVoteUp);

	/**
	* Starts the item update process.
	*
	* This gets you a handle that you can use to modify the item before finally sending off the update to the server with SubmitItemUpdate.
	*
	* @param	consumerAppID		The App ID that will be using this item.
	* @param	publishedFileID		The item to update.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static FUGCUpdateHandle StartItemUpdate(int32 consumerAppID, FPublishedFileID publishedFileID);

	/**
	* Start tracking playtime on a set of workshop items.
	*
	* When your app shuts down, playtime tracking will automatically stop.
	*
	* @param	publishedFileID		The array of workshop items you want to start tracking. (Maximum of 100 items.)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void StartPlaytimeTracking(const FOnStartPlaytimeTracking& callback, TArray<FPublishedFileID> publishedFileID);

	/**
	* Stop tracking playtime on a set of workshop items.
	*
	* When your app shuts down, playtime tracking will automatically stop.
	*
	* @param	publishedFileIDs	The array of workshop items you want to stop tracking. (Maximum of 100 items.)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void StopPlaytimeTracking(const FOnStopPlaytimeTracking& callback, TArray<FPublishedFileID> publishedFileIDs);

	/**
	* Stop tracking playtime of all workshop items.
	*
	* When your app shuts down, playtime tracking will automatically stop.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void StopPlaytimeTrackingForAllItems(const FOnStopPlaytimeTrackingForAllItems& callback);

	/**
	* Uploads the changes made to an item to the Steam Workshop.
	*
	* You can track the progress of an item update with GetItemUpdateProgress.
	*
	* @param	handle			The update handle to submit.
	* @param	changeNote		A brief description of the changes made. (Optional, set to NULL for no change note)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void SubmitItemUpdate(const FOnSubmitItemUpdate& callback, FUGCUpdateHandle handle, FString changeNote);

	/**
	* Subscribe to a workshop item. It will be downloaded and installed as soon as possible.
	*
	* @param	publishedFileID		The workshop item to subscribe to.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void SubscribeItem(const FOnSubscribeItem& callback, FPublishedFileID publishedFileID);

	/**
	* Suspends and resumes all workshop downloads.
	*
	* If you call this with bSuspend set to true then downloads will be suspended until you resume them by setting bSuspend to false or when the game ends.
	*
	* @param	bSuspend	Suspend (true) or Resume (false) workshop downloads?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static void SuspendDownloads(bool bSuspend);

	/**
	* Unsubscribe from a workshop item. This will result in the item being removed after the game quits.
	*
	* @param	publishedFileID		The workshop item to unsubscribe from.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC", meta = (AutoCreateRefTerm = "callback"))
		void UnsubscribeItem(const FOnUnsubscribeItem& callback, FPublishedFileID publishedFileID);

	/**
	* Updates an existing additional preview file for the item.
	*
	* If the preview type is an image then the format should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle			The workshop item update handle to customize.
	* @param	index			The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.
	* @param	previewFile		Absolute path to the local image.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool UpdateItemPreviewFile(FUGCUpdateHandle handle, int32 index, FString previewFile);

	/**
	* Updates an additional video preview from YouTube for the item.
	*
	* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.
	*
	* @param	handle				The workshop item update handle to customize.
	* @param	index				The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.
	* @param	previewVideo		The YouTube video to add. (e.g. "jHgZh4GV9G0")
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UGC")
		static bool UpdateItemPreviewVideo(FUGCUpdateHandle handle, int32 index, FString previewVideo);

protected:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	STEAM_CALLBACK_MANUAL(UUGC, OnDownloadItemResult, DownloadItemResult_t, OnDownloadItemResultCallback);
	STEAM_CALLBACK_MANUAL(UUGC, OnItemInstalled, ItemInstalled_t, OnItemInstalledCallback);
};
