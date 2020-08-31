/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#include "UGC/UGC.h"
#include "SteamCore/Steam.h"
#include "UGC/UGCAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"
#include <string>
#include <sstream>

void UUGC::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnDownloadItemResultCallback.Register(this, &UUGC::OnDownloadItemResult);
	OnItemInstalledCallback.Register(this, &UUGC::OnItemInstalled);

	if (IsRunningDedicatedServer())
	{
		OnDownloadItemResultCallback.SetGameserverFlag();
		OnItemInstalledCallback.SetGameserverFlag();
	}
}

void UUGC::Deinitialize()
{
	OnDownloadItemResultCallback.Unregister();
	OnItemInstalledCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUGC::AddAppDependency(const FOnAddAppDependencyResult& callback, FPublishedFileID publishedFileID, int32 appID)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCAddAppDependency* m_Task = new FOnlineAsyncTaskSteamCoreUGCAddAppDependency(this, callback, publishedFileID, appID);
		QueueAsyncTask(m_Task);
	}
}

void UUGC::AddDependency(const FOnAddUGCDependencyResult& callback, FPublishedFileID publishedFileID, FPublishedFileID childPublishedFileID)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCAddUGCDependency* m_Task = new FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(this, callback, publishedFileID, childPublishedFileID);
		QueueAsyncTask(m_Task);
	}
}

bool UUGC::AddExcludedTag(FUGCQueryHandle handle, FString tagName)
{
	return GetUGC() ? GetUGC()->AddExcludedTag(handle, TCHAR_TO_UTF8(*tagName)) : false;
}

bool UUGC::AddItemKeyValueTag(FUGCUpdateHandle handle, FString key, FString Value)
{
	return GetUGC() ? GetUGC()->AddItemKeyValueTag(handle, TCHAR_TO_UTF8(*key), TCHAR_TO_UTF8(*Value)) : false;
}

bool UUGC::AddItemPreviewFile(FUGCUpdateHandle handle, FString previewFile, ESteamItemPreviewType type)
{
	return GetUGC() ? GetUGC()->AddItemPreviewFile(handle, TCHAR_TO_UTF8(*previewFile), static_cast<EItemPreviewType>(type)) : false;
}

bool UUGC::AddItemPreviewVideo(FUGCUpdateHandle handle, FString videoID)
{
	return GetUGC() ? GetUGC()->AddItemPreviewVideo(handle, TCHAR_TO_UTF8(*videoID)) : false;
}

void UUGC::AddItemToFavorites(const FOnAddItemToFavorites& callback, int32 appID, FPublishedFileID publishedFileID)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites* m_Task = new FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(this, callback, appID, publishedFileID);
		QueueAsyncTask(m_Task);
	}
}

bool UUGC::AddRequiredKeyValueTag(FUGCQueryHandle handle, FString key, FString value)
{
	return GetUGC() ? GetUGC()->AddRequiredKeyValueTag(handle, TCHAR_TO_UTF8(*key), TCHAR_TO_UTF8(*value)) : false;
}

bool UUGC::AddRequiredTag(FUGCQueryHandle handle, FString tagName)
{
	return GetUGC() ? GetUGC()->AddRequiredTag(handle, TCHAR_TO_UTF8(*tagName)) : false;
}

bool UUGC::BInitWorkshopForGameServer(int32 workshopDepotID, FString folder)
{
	return GetUGC() ? GetUGC()->BInitWorkshopForGameServer(workshopDepotID, TCHAR_TO_UTF8(*folder)) : false;
}

void UUGC::CreateItem(const FOnCreateItem& callback, int32 consumerAppID, ESteamWorkshopFileType fileType)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCCreateItem* m_Task = new FOnlineAsyncTaskSteamCoreUGCCreateItem(this, callback, consumerAppID, fileType);
		QueueAsyncTask(m_Task);
	}
}

FUGCQueryHandle UUGC::CreateQueryAllUGCRequest(ESteamUGCQuery queryType, ESteamUGCMatchingUGCType fileType, int32 creatorAppID, int32 consumerAppID, int32 page)
{
	return GetUGC() ? FUGCQueryHandle(GetUGC()->CreateQueryAllUGCRequest(static_cast<EUGCQuery>(queryType), (fileType == ESteamUGCMatchingUGCType::All ? EUGCMatchingUGCType::k_EUGCMatchingUGCType_All : static_cast<EUGCMatchingUGCType>(fileType)), creatorAppID, consumerAppID, page)) : FUGCQueryHandle();
}

FUGCQueryHandle UUGC::CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> publishedFileIDs)
{
	if (GetUGC())
	{
		int32 m_Size = publishedFileIDs.Num();
		PublishedFileId_t* m_Array = new PublishedFileId_t[m_Size];

		for (int32 i = 0; i < m_Size; i++)
			m_Array[i] = publishedFileIDs[i];

		FUGCQueryHandle m_Handle = GetUGC()->CreateQueryUGCDetailsRequest(m_Array, m_Size);

		delete[] m_Array;
		return m_Handle;
	}

	return FUGCQueryHandle();
}

FUGCQueryHandle UUGC::CreateQueryUserUGCRequest(FSteamID steamID, ESteamUserUGCList listType, ESteamUGCMatchingUGCType matchingUGCType, ESteamUserUGCListSortOrder sortOrder, int32 creatorAppID, int32 consumerAppID, int32 page)
{
	return GetUGC() ? FUGCQueryHandle(GetUGC()->CreateQueryUserUGCRequest(steamID, static_cast<EUserUGCList>(listType), (matchingUGCType == ESteamUGCMatchingUGCType::All ? EUGCMatchingUGCType::k_EUGCMatchingUGCType_All : static_cast<EUGCMatchingUGCType>(matchingUGCType)), static_cast<EUserUGCListSortOrder>(sortOrder), creatorAppID, consumerAppID, page)) : FUGCQueryHandle();
}

void UUGC::DeleteItem(const FOnDeleteItemResult& callback, FPublishedFileID publishedFileID)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCDeleteItem* m_Task = new FOnlineAsyncTaskSteamCoreUGCDeleteItem(this, callback, publishedFileID);
		QueueAsyncTask(m_Task);
	}
}

bool UUGC::DownloadItem(FPublishedFileID publishedFileID, bool bHighPriority)
{
	return GetUGC() ? GetUGC()->DownloadItem(publishedFileID, bHighPriority) : false;
}

void UUGC::GetAppDependencies(const FOnGetAppDependenciesResult& callback, FPublishedFileID publishedFileID)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCGetAppDependencies* m_Task = new FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(this, callback, publishedFileID);
		QueueAsyncTask(m_Task);
	}
}

bool UUGC::GetItemDownloadInfo(FPublishedFileID publishedFileID, int32& bytesDownloaded, int32& bytesTotal)
{
	if (GetUGC())
	{
		if (GetUGC()->GetItemDownloadInfo(publishedFileID, reinterpret_cast<uint64*>(&bytesDownloaded), reinterpret_cast<uint64*>(&bytesTotal)))
		{
			return true;
		}
	}

	return false;
}

bool UUGC::GetItemInstallInfo(FPublishedFileID publishedFileID, int32& sizeOnDisk, FString& folder, int32& timeStamp)
{
	if (GetUGC())
	{
		char m_Path[1024];

		if (GetUGC()->GetItemInstallInfo(publishedFileID, reinterpret_cast<uint64*>(&sizeOnDisk), m_Path, 1024, (uint32*)&timeStamp))
		{
			folder = UTF8_TO_TCHAR(m_Path);

			return true;
		}
	}

	return false;
}

int32 UUGC::GetItemState(FPublishedFileID publishedFileID)
{
	return GetUGC() ? GetUGC()->GetItemState(publishedFileID) : 0;
}

ESteamItemUpdateStatus UUGC::GetItemUpdateProgress(FUGCUpdateHandle handle, int32& bytesProcessed, int32& bytesTotal)
{
	return GetUGC() ? static_cast<ESteamItemUpdateStatus>(GetUGC()->GetItemUpdateProgress(handle, reinterpret_cast<uint64*>(&bytesProcessed), reinterpret_cast<uint64*>(&bytesTotal))) : ESteamItemUpdateStatus::Invalid;
}

int32 UUGC::GetNumSubscribedItems()
{
	return GetUGC() ? GetUGC()->GetNumSubscribedItems() : 0;
}

bool UUGC::GetQueryUGCAdditionalPreview(FUGCQueryHandle handle, int32 index, int32 previewIndex, FString& urlOrVideoID, FString& originalFileName, ESteamItemPreviewType& previewType)
{
	bool bResult = false;

	if (GetUGC())
	{
		char* m_URLOrVideoID = new char[512];
		char* m_OriginalFileName = new char[512];

		bResult = GetUGC()->GetQueryUGCAdditionalPreview(handle, index, previewIndex, m_URLOrVideoID, 512, m_OriginalFileName, 512, reinterpret_cast<EItemPreviewType*>(&previewType));

		if (bResult)
		{
			urlOrVideoID = UTF8_TO_TCHAR(m_URLOrVideoID);
			originalFileName = UTF8_TO_TCHAR(m_OriginalFileName);
		}

		delete[] m_URLOrVideoID;
		delete[] m_OriginalFileName;
	}

	return bResult;
}

bool UUGC::GetQueryUGCChildren(FUGCQueryHandle handle, int32 index, TArray<FPublishedFileID>& publishedFileIDs, int32 maxEntries)
{
	bool bResult = false;
	
	if (GetUGC())
	{
		PublishedFileId_t* m_Array = new PublishedFileId_t[maxEntries];

		bResult = GetUGC()->GetQueryUGCChildren(handle, index, m_Array, maxEntries);

		if (bResult)
		{
			for (int32 i = 0; i < maxEntries; i++)
				publishedFileIDs.Add(m_Array[i]);
		}

		delete[] m_Array;
	}

	return bResult;
}

bool UUGC::GetQueryUGCKeyValueTag(FUGCQueryHandle handle, int32 index, int32 keyValueTagIndex, FString& key, FString& value)
{
	bool bResult = false;
	
	if (GetUGC())
	{
		char* m_Key = new char[512];
		char* m_Value = new char[512];

		bResult = GetUGC()->GetQueryUGCKeyValueTag(handle, index, keyValueTagIndex, m_Key, 512, m_Value, 512);

		if (bResult)
		{
			key = UTF8_TO_TCHAR(m_Key);
			value = UTF8_TO_TCHAR(m_Value);
		}

		delete[] m_Key;
		delete[] m_Value;
	}

	return bResult;
}

bool UUGC::GetQueryUGCMetadata(FUGCQueryHandle handle, int32 index, FString& metaData, int32 metadataSize)
{
	bool bResult = false;
	
	if (GetUGC())
	{
		char* m_CharArray = new char[metadataSize];

		bResult = GetUGC()->GetQueryUGCMetadata(handle, index, m_CharArray, metadataSize);

		if (bResult)
		{
			metaData = UTF8_TO_TCHAR(m_CharArray);
		}

		delete[] m_CharArray;
	}
	
	return bResult;
}

int32 UUGC::GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle handle, int32 index)
{
	return GetUGC() ? GetUGC()->GetQueryUGCNumAdditionalPreviews(handle, index) : 0;
}

int32 UUGC::GetQueryUGCNumKeyValueTags(FUGCQueryHandle handle, int32 index)
{
	return GetUGC() ? GetUGC()->GetQueryUGCNumKeyValueTags(handle, index) : 0;
}

bool UUGC::GetQueryUGCPreviewURL(FUGCQueryHandle handle, int32 index, FString& url)
{
	bool bResult = false;

	if (GetUGC())
	{
		char* m_CharArray = new char[1024];

		bResult = GetUGC()->GetQueryUGCPreviewURL(handle, index, m_CharArray, 1024);

		if (bResult)
		{
			url = UTF8_TO_TCHAR(m_CharArray);
		}

		delete[] m_CharArray;
	}
	
	return bResult;
}

bool UUGC::GetQueryUGCResult(FUGCQueryHandle handle, int32 index, FSteamUGCDetails& details)
{
	SteamUGCDetails_t m_Data;

	if (GetUGC()->GetQueryUGCResult(handle, index, &m_Data))
	{
		details = m_Data;
		return true;
	}

	return false;
}

bool UUGC::GetQueryUGCStatistic(FUGCQueryHandle handle, int32 index, ESteamItemStatistic statType, FString& statValue)
{
	uint64 m_Temp = 0;

	if (GetUGC()->GetQueryUGCStatistic(handle, index, static_cast<EItemStatistic>(statType), &m_Temp))
	{
		statValue = LexToString(m_Temp);

		return true;
	}

	return false;
}

int32 UUGC::GetSubscribedItems(TArray<FPublishedFileID>& publishedFileIDs, int32 maxEntries)
{
	int32 m_Result = 0;

	if (GetUGC())
	{
		PublishedFileId_t* m_Array = new PublishedFileId_t[maxEntries];
		m_Result = GetUGC()->GetSubscribedItems(m_Array, maxEntries);

		for (int32 i = 0; i < maxEntries; i++)
			publishedFileIDs.Add(m_Array[i]);

		delete[] m_Array;
	}

	return m_Result;
}

void UUGC::GetUserItemVote(const FOnGetUserItemVote& callback, FPublishedFileID publishedFileID)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCGetUserItemVote* m_Task = new FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(this, callback, publishedFileID);
		QueueAsyncTask(m_Task);
	}
}

bool UUGC::ReleaseQueryUGCRequest(FUGCQueryHandle handle)
{
	return GetUGC() ? GetUGC()->ReleaseQueryUGCRequest(handle) : false;
}

void UUGC::RemoveAppDependency(const FOnRemoveAppDependencyResult& callback, FPublishedFileID publishedFileID, int32 appID)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency* m_Task = new FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(this, callback, publishedFileID, appID);
		QueueAsyncTask(m_Task);
	}
}

void UUGC::RemoveDependency(const FOnRemoveUGCDependencyResult& callback, FPublishedFileID parentPublishedFileID, FPublishedFileID childPublishedFileID)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency* m_Task = new FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(this, callback, parentPublishedFileID, childPublishedFileID);
		QueueAsyncTask(m_Task);
	}
}

void UUGC::RemoveItemFromFavorites(const FOnRemoveItemFromFavorites& callback, int32 appID, FPublishedFileID publishedFileID)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites* m_Task = new FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(this, callback, appID, publishedFileID);
		QueueAsyncTask(m_Task);
	}
}

bool UUGC::RemoveItemKeyValueTags(FUGCUpdateHandle handle, FString key)
{
	return GetUGC() ? GetUGC()->RemoveItemKeyValueTags(handle, TCHAR_TO_UTF8(*key)) : false;
}

bool UUGC::RemoveItemPreview(FUGCUpdateHandle handle, int32 index)
{
	return GetUGC() ? GetUGC()->RemoveItemPreview(handle, index) : false;
}

void UUGC::SendQueryUGCRequest(const FOnSendQueryUGCRequest& callback, FUGCQueryHandle handle)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest* m_Data = new FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(this, callback, handle);
		QueueAsyncTask(m_Data);
	}
}

bool UUGC::SetAllowCachedResponse(FUGCQueryHandle handle, int32 maxAgeSeconds)
{
	return GetUGC() ? GetUGC()->SetAllowCachedResponse(handle, maxAgeSeconds) : false;
}

bool UUGC::SetAllowLegacyUpload(FUGCUpdateHandle handle, bool bAllowLegacyUpload)
{
#if STEAM_VERSION > 142
	return GetUGC() ? GetUGC()->SetAllowLegacyUpload(handle, bAllowLegacyUpload) : false;
#else
	return false;
#endif
}

bool UUGC::SetCloudFileNameFilter(FUGCQueryHandle handle, FString matchCloudFileName)
{
	return GetUGC() ? GetUGC()->SetCloudFileNameFilter(handle, TCHAR_TO_UTF8(*matchCloudFileName)) : false;
}

bool UUGC::SetItemContent(FUGCUpdateHandle handle, FString contentFolder)
{
	return GetUGC() ? GetUGC()->SetItemContent(handle, TCHAR_TO_UTF8(*contentFolder)) : false;
}

bool UUGC::SetItemDescription(FUGCUpdateHandle handle, FString description)
{
	return GetUGC() ? GetUGC()->SetItemDescription(handle, TCHAR_TO_UTF8(*description)) : false;
}

bool UUGC::SetItemMetadata(FUGCUpdateHandle handle, FString metaData)
{
	return GetUGC() ? GetUGC()->SetItemMetadata(handle, TCHAR_TO_UTF8(*metaData)) : false;
}

bool UUGC::SetItemPreview(FUGCUpdateHandle handle, FString previewFile)
{
	return GetUGC() ? GetUGC()->SetItemPreview(handle, TCHAR_TO_UTF8(*previewFile)) : false;
}

bool UUGC::SetItemTags(FUGCUpdateHandle handle, TArray<FString> tags)
{
	bool bResult = false;

	if (GetUGC())
	{
		int32 m_Size = tags.Num();
		SteamParamStringArray_t* m_SteamParamStringArray = new SteamParamStringArray_t();
		m_SteamParamStringArray->m_ppStrings = new const char*[m_Size];

		for (int i = 0; i < m_Size; i++)
		{
			m_SteamParamStringArray->m_ppStrings[i] = TCHAR_TO_UTF8(*tags[i]);
		}

		m_SteamParamStringArray->m_nNumStrings = m_Size;

		bResult = GetUGC()->SetItemTags(handle, m_SteamParamStringArray);
		
		delete[] m_SteamParamStringArray->m_ppStrings;
		delete m_SteamParamStringArray;
	}

	return bResult;
}

bool UUGC::SetItemTitle(FUGCUpdateHandle handle, FString title)
{
	return GetUGC() ? GetUGC()->SetItemTitle(handle, TCHAR_TO_UTF8(*title)) : false;
}

bool UUGC::SetItemUpdateLanguage(FUGCUpdateHandle handle, FString language)
{
	return GetUGC() ? GetUGC()->SetItemUpdateLanguage(handle, TCHAR_TO_UTF8(*language)) : false;
}

bool UUGC::SetItemVisibility(FUGCUpdateHandle handle, ESteamRemoteStoragePublishedFileVisibility visibility)
{
	return GetUGC() ? GetUGC()->SetItemVisibility(handle, static_cast<ERemoteStoragePublishedFileVisibility>(visibility)) : false;
}

bool UUGC::SetLanguage(FUGCQueryHandle handle, FString language)
{
	return GetUGC() ? GetUGC()->SetLanguage(handle, TCHAR_TO_UTF8(*language)) : false;
}

bool UUGC::SetMatchAnyTag(FUGCQueryHandle handle, bool bMatchAnyTag)
{
	return GetUGC() ? GetUGC()->SetMatchAnyTag(handle, bMatchAnyTag) : false;
}

bool UUGC::SetRankedByTrendDays(FUGCQueryHandle handle, int32 days)
{
	return GetUGC() ? GetUGC()->SetRankedByTrendDays(handle, days) : false;
}

bool UUGC::SetReturnAdditionalPreviews(FUGCQueryHandle handle, bool bReturnAdditionalPreviews)
{
	return GetUGC() ? GetUGC()->SetReturnAdditionalPreviews(handle, bReturnAdditionalPreviews) : false;
}

bool UUGC::SetReturnChildren(FUGCQueryHandle handle, bool bReturnChildren)
{
	return GetUGC() ? GetUGC()->SetReturnChildren(handle, bReturnChildren) : false;
}

bool UUGC::SetReturnKeyValueTags(FUGCQueryHandle handle, bool bReturnKeyValueTags)
{
	return GetUGC() ? GetUGC()->SetReturnKeyValueTags(handle, bReturnKeyValueTags) : false;
}

bool UUGC::SetReturnLongDescription(FUGCQueryHandle handle, bool bReturnLongDescription)
{
	return GetUGC() ? GetUGC()->SetReturnLongDescription(handle, bReturnLongDescription) : false;
}

bool UUGC::SetReturnMetadata(FUGCQueryHandle handle, bool bReturnMetadata)
{
	return GetUGC() ? GetUGC()->SetReturnMetadata(handle, bReturnMetadata) : false;
}

bool UUGC::SetReturnOnlyIDs(FUGCQueryHandle handle, bool bReturnOnlyIDs)
{
	return GetUGC() ? GetUGC()->SetReturnOnlyIDs(handle, bReturnOnlyIDs) : false;
}

bool UUGC::SetReturnPlaytimeStats(FUGCQueryHandle handle, int32 days)
{
	return GetUGC() ? GetUGC()->SetReturnPlaytimeStats(handle, days) : false;
}

bool UUGC::SetReturnTotalOnly(FUGCQueryHandle handle, bool bReturnTotalOnly)
{
	return GetUGC() ? GetUGC()->SetReturnTotalOnly(handle, bReturnTotalOnly) : false;
}

bool UUGC::SetSearchText(FUGCQueryHandle handle, FString searchText)
{
	return GetUGC() ? GetUGC()->SetSearchText(handle, TCHAR_TO_UTF8(*searchText)) : false;
}

void UUGC::SetUserItemVote(const FOnSetUserItemVote& callback, FPublishedFileID publishedFileID, bool bVoteUp)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSetUserItemVote* m_Task = new FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(this, callback, bVoteUp, publishedFileID);
		QueueAsyncTask(m_Task);
	}
}

FUGCUpdateHandle UUGC::StartItemUpdate(int32 consumerAppID, FPublishedFileID publishedFileID)
{
	return GetUGC() ? FUGCUpdateHandle(GetUGC()->StartItemUpdate(consumerAppID, publishedFileID)) : FUGCUpdateHandle();
}

void UUGC::StartPlaytimeTracking(const FOnStartPlaytimeTracking& callback, TArray<FPublishedFileID> publishedFileID)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking* m_Task = new FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(this, callback, publishedFileID);
		QueueAsyncTask(m_Task);
	}
}

void UUGC::StopPlaytimeTracking(const FOnStopPlaytimeTracking& callback, TArray<FPublishedFileID> publishedFileIDs)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking* m_Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(this, callback, publishedFileIDs);
		QueueAsyncTask(m_Task);
	}
}

void UUGC::StopPlaytimeTrackingForAllItems(const FOnStopPlaytimeTrackingForAllItems& callback)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems* m_Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(this, callback);
		QueueAsyncTask(m_Task);
	}
}

void UUGC::SubmitItemUpdate(const FOnSubmitItemUpdate& callback, FUGCUpdateHandle handle, FString changeNote)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate* m_Task = new FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(this, callback, handle, changeNote);
		QueueAsyncTask(m_Task);
	}
}

void UUGC::SubscribeItem(const FOnSubscribeItem& callback, FPublishedFileID publishedFileID)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCSubscribeItem* m_Task = new FOnlineAsyncTaskSteamCoreUGCSubscribeItem(this, callback, publishedFileID);
		QueueAsyncTask(m_Task);
	}
}

void UUGC::SuspendDownloads(bool bSuspend)
{
	if (GetUGC())
	{
		GetUGC()->SuspendDownloads(bSuspend);
	}
}

void UUGC::UnsubscribeItem(const FOnUnsubscribeItem& callback, FPublishedFileID publishedFileID)
{
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem* m_Task = new FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(this, callback, publishedFileID);
		QueueAsyncTask(m_Task);
	}
}

bool UUGC::UpdateItemPreviewFile(FUGCUpdateHandle handle, int32 index, FString previewFile)
{
	return GetUGC() ? GetUGC()->UpdateItemPreviewFile(handle, index, TCHAR_TO_UTF8(*previewFile)) : false;
}

bool UUGC::UpdateItemPreviewVideo(FUGCUpdateHandle handle, int32 index, FString previewVideo)
{
	return GetUGC() ? GetUGC()->UpdateItemPreviewVideo(handle, index, TCHAR_TO_UTF8(*previewVideo)) : false;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUGC::OnItemInstalled(ItemInstalled_t* pParam)
{
	const FItemInstalled m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				ItemInstalled.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		ItemInstalled.Broadcast(m_Data);
	}
}

void UUGC::OnDownloadItemResult(DownloadItemResult_t* pParam)
{
	const FDownloadItemResult m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				DownloadItemResult.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		DownloadItemResult.Broadcast(m_Data);
	}
}