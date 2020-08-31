// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/UGC/UGC.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGC() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UUGC_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UUGC();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAddAppDependencyResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAddUGCDependencyResult__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCQueryHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCUpdateHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemPreviewType();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAddItemToFavorites__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateItem__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUGCQuery();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserUGCListSortOrder();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserUGCList();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDeleteItemResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetAppDependenciesResult__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemUpdateStatus();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCDetails();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamItemStatistic();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetUserItemVote__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoveAppDependencyResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoveUGCDependencyResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoveItemFromFavorites__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSendQueryUGCRequest__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetUserItemVote__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStartPlaytimeTracking__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTracking__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTrackingForAllItems__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSubmitItemUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSubscribeItem__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUnsubscribeItem__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadItemResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnItemInstalled__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UUGC::execUpdateItemPreviewVideo)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FStrProperty,Z_Param_previewVideo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::UpdateItemPreviewVideo(Z_Param_handle,Z_Param_index,Z_Param_previewVideo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execUpdateItemPreviewFile)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FStrProperty,Z_Param_previewFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::UpdateItemPreviewFile(Z_Param_handle,Z_Param_index,Z_Param_previewFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execUnsubscribeItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsubscribeItem(FOnUnsubscribeItem(Z_Param_Out_callback),Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSuspendDownloads)
	{
		P_GET_UBOOL(Z_Param_bSuspend);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUGC::SuspendDownloads(Z_Param_bSuspend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSubscribeItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribeItem(FOnSubscribeItem(Z_Param_Out_callback),Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSubmitItemUpdate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_changeNote);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubmitItemUpdate(FOnSubmitItemUpdate(Z_Param_Out_callback),Z_Param_handle,Z_Param_changeNote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execStopPlaytimeTrackingForAllItems)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPlaytimeTrackingForAllItems(FOnStopPlaytimeTrackingForAllItems(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execStopPlaytimeTracking)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_TARRAY(FPublishedFileID,Z_Param_publishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPlaytimeTracking(FOnStopPlaytimeTracking(Z_Param_Out_callback),Z_Param_publishedFileIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execStartPlaytimeTracking)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_TARRAY(FPublishedFileID,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPlaytimeTracking(FOnStartPlaytimeTracking(Z_Param_Out_callback),Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execStartItemUpdate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_consumerAppID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCUpdateHandle*)Z_Param__Result=UUGC::StartItemUpdate(Z_Param_consumerAppID,Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetUserItemVote)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_GET_UBOOL(Z_Param_bVoteUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserItemVote(FOnSetUserItemVote(Z_Param_Out_callback),Z_Param_publishedFileID,Z_Param_bVoteUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetSearchText)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_searchText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetSearchText(Z_Param_handle,Z_Param_searchText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnTotalOnly)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnTotalOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnTotalOnly(Z_Param_handle,Z_Param_bReturnTotalOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnPlaytimeStats)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_days);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnPlaytimeStats(Z_Param_handle,Z_Param_days);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnOnlyIDs)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnOnlyIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnOnlyIDs(Z_Param_handle,Z_Param_bReturnOnlyIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnMetadata)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnMetadata(Z_Param_handle,Z_Param_bReturnMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnLongDescription)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnLongDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnLongDescription(Z_Param_handle,Z_Param_bReturnLongDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnKeyValueTags)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnKeyValueTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnKeyValueTags(Z_Param_handle,Z_Param_bReturnKeyValueTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnChildren)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnChildren(Z_Param_handle,Z_Param_bReturnChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetReturnAdditionalPreviews)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bReturnAdditionalPreviews);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetReturnAdditionalPreviews(Z_Param_handle,Z_Param_bReturnAdditionalPreviews);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetRankedByTrendDays)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_days);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetRankedByTrendDays(Z_Param_handle,Z_Param_days);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetMatchAnyTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bMatchAnyTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetMatchAnyTag(Z_Param_handle,Z_Param_bMatchAnyTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetLanguage)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetLanguage(Z_Param_handle,Z_Param_language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemVisibility)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_ENUM(ESteamRemoteStoragePublishedFileVisibility,Z_Param_visibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemVisibility(Z_Param_handle,ESteamRemoteStoragePublishedFileVisibility(Z_Param_visibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemUpdateLanguage)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemUpdateLanguage(Z_Param_handle,Z_Param_language);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemTitle)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_title);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemTitle(Z_Param_handle,Z_Param_title);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemTags)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_TARRAY(FString,Z_Param_tags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemTags(Z_Param_handle,Z_Param_tags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemPreview)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_previewFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemPreview(Z_Param_handle,Z_Param_previewFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemMetadata)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_metaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemMetadata(Z_Param_handle,Z_Param_metaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemDescription)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_description);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemDescription(Z_Param_handle,Z_Param_description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetItemContent)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_contentFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetItemContent(Z_Param_handle,Z_Param_contentFolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetCloudFileNameFilter)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_matchCloudFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetCloudFileNameFilter(Z_Param_handle,Z_Param_matchCloudFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetAllowLegacyUpload)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_UBOOL(Z_Param_bAllowLegacyUpload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAllowLegacyUpload(Z_Param_handle,Z_Param_bAllowLegacyUpload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSetAllowCachedResponse)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxAgeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::SetAllowCachedResponse(Z_Param_handle,Z_Param_maxAgeSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execSendQueryUGCRequest)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendQueryUGCRequest(FOnSendQueryUGCRequest(Z_Param_Out_callback),Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveItemPreview)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::RemoveItemPreview(Z_Param_handle,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveItemKeyValueTags)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::RemoveItemKeyValueTags(Z_Param_handle,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveItemFromFavorites)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItemFromFavorites(FOnRemoveItemFromFavorites(Z_Param_Out_callback),Z_Param_appID,Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveDependency)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_parentPublishedFileID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_childPublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDependency(FOnRemoveUGCDependencyResult(Z_Param_Out_callback),Z_Param_parentPublishedFileID,Z_Param_childPublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execRemoveAppDependency)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAppDependency(FOnRemoveAppDependencyResult(Z_Param_Out_callback),Z_Param_publishedFileID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execReleaseQueryUGCRequest)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::ReleaseQueryUGCRequest(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetUserItemVote)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUserItemVote(FOnGetUserItemVote(Z_Param_Out_callback),Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetSubscribedItems)
	{
		P_GET_TARRAY_REF(FPublishedFileID,Z_Param_Out_publishedFileIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxEntries);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetSubscribedItems(Z_Param_Out_publishedFileIDs,Z_Param_maxEntries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCStatistic)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_ENUM(ESteamItemStatistic,Z_Param_statType);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_statValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCStatistic(Z_Param_handle,Z_Param_index,ESteamItemStatistic(Z_Param_statType),Z_Param_Out_statValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCResult)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_STRUCT_REF(FSteamUGCDetails,Z_Param_Out_details);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCResult(Z_Param_handle,Z_Param_index,Z_Param_Out_details);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCPreviewURL)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCPreviewURL(Z_Param_handle,Z_Param_index,Z_Param_Out_url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCNumKeyValueTags)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetQueryUGCNumKeyValueTags(Z_Param_handle,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCNumAdditionalPreviews)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetQueryUGCNumAdditionalPreviews(Z_Param_handle,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCMetadata)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_metaData);
		P_GET_PROPERTY(FIntProperty,Z_Param_metadataSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCMetadata(Z_Param_handle,Z_Param_index,Z_Param_Out_metaData,Z_Param_metadataSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCKeyValueTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_keyValueTagIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCKeyValueTag(Z_Param_handle,Z_Param_index,Z_Param_keyValueTagIndex,Z_Param_Out_key,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCChildren)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_TARRAY_REF(FPublishedFileID,Z_Param_Out_publishedFileIDs);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxEntries);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCChildren(Z_Param_handle,Z_Param_index,Z_Param_Out_publishedFileIDs,Z_Param_maxEntries);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetQueryUGCAdditionalPreview)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_previewIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_urlOrVideoID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_originalFileName);
		P_GET_ENUM_REF(ESteamItemPreviewType,Z_Param_Out_previewType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetQueryUGCAdditionalPreview(Z_Param_handle,Z_Param_index,Z_Param_previewIndex,Z_Param_Out_urlOrVideoID,Z_Param_Out_originalFileName,(ESteamItemPreviewType&)(Z_Param_Out_previewType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetNumSubscribedItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetNumSubscribedItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetItemUpdateProgress)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bytesProcessed);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bytesTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamItemUpdateStatus*)Z_Param__Result=UUGC::GetItemUpdateProgress(Z_Param_handle,Z_Param_Out_bytesProcessed,Z_Param_Out_bytesTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetItemState)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUGC::GetItemState(Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetItemInstallInfo)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_sizeOnDisk);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_folder);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_timeStamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetItemInstallInfo(Z_Param_publishedFileID,Z_Param_Out_sizeOnDisk,Z_Param_Out_folder,Z_Param_Out_timeStamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetItemDownloadInfo)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bytesDownloaded);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bytesTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::GetItemDownloadInfo(Z_Param_publishedFileID,Z_Param_Out_bytesDownloaded,Z_Param_Out_bytesTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execGetAppDependencies)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAppDependencies(FOnGetAppDependenciesResult(Z_Param_Out_callback),Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execDownloadItem)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_GET_UBOOL(Z_Param_bHighPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::DownloadItem(Z_Param_publishedFileID,Z_Param_bHighPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execDeleteItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteItem(FOnDeleteItemResult(Z_Param_Out_callback),Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execCreateQueryUserUGCRequest)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_GET_ENUM(ESteamUserUGCList,Z_Param_listType);
		P_GET_ENUM(ESteamUGCMatchingUGCType,Z_Param_matchingUGCType);
		P_GET_ENUM(ESteamUserUGCListSortOrder,Z_Param_sortOrder);
		P_GET_PROPERTY(FIntProperty,Z_Param_creatorAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_consumerAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_page);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCQueryHandle*)Z_Param__Result=UUGC::CreateQueryUserUGCRequest(Z_Param_steamID,ESteamUserUGCList(Z_Param_listType),ESteamUGCMatchingUGCType(Z_Param_matchingUGCType),ESteamUserUGCListSortOrder(Z_Param_sortOrder),Z_Param_creatorAppID,Z_Param_consumerAppID,Z_Param_page);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execCreateQueryUGCDetailsRequest)
	{
		P_GET_TARRAY(FPublishedFileID,Z_Param_publishedFileIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCQueryHandle*)Z_Param__Result=UUGC::CreateQueryUGCDetailsRequest(Z_Param_publishedFileIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execCreateQueryAllUGCRequest)
	{
		P_GET_ENUM(ESteamUGCQuery,Z_Param_queryType);
		P_GET_ENUM(ESteamUGCMatchingUGCType,Z_Param_fileType);
		P_GET_PROPERTY(FIntProperty,Z_Param_creatorAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_consumerAppID);
		P_GET_PROPERTY(FIntProperty,Z_Param_page);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCQueryHandle*)Z_Param__Result=UUGC::CreateQueryAllUGCRequest(ESteamUGCQuery(Z_Param_queryType),ESteamUGCMatchingUGCType(Z_Param_fileType),Z_Param_creatorAppID,Z_Param_consumerAppID,Z_Param_page);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execCreateItem)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_consumerAppID);
		P_GET_ENUM(ESteamWorkshopFileType,Z_Param_fileType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateItem(FOnCreateItem(Z_Param_Out_callback),Z_Param_consumerAppID,ESteamWorkshopFileType(Z_Param_fileType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execBInitWorkshopForGameServer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_workshopDepotID);
		P_GET_PROPERTY(FStrProperty,Z_Param_folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::BInitWorkshopForGameServer(Z_Param_workshopDepotID,Z_Param_folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddRequiredTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_tagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddRequiredTag(Z_Param_handle,Z_Param_tagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddRequiredKeyValueTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddRequiredKeyValueTag(Z_Param_handle,Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddItemToFavorites)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToFavorites(FOnAddItemToFavorites(Z_Param_Out_callback),Z_Param_appID,Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddItemPreviewVideo)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_videoID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddItemPreviewVideo(Z_Param_handle,Z_Param_videoID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddItemPreviewFile)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_previewFile);
		P_GET_ENUM(ESteamItemPreviewType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddItemPreviewFile(Z_Param_handle,Z_Param_previewFile,ESteamItemPreviewType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddItemKeyValueTag)
	{
		P_GET_STRUCT(FUGCUpdateHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddItemKeyValueTag(Z_Param_handle,Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddExcludedTag)
	{
		P_GET_STRUCT(FUGCQueryHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_tagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUGC::AddExcludedTag(Z_Param_handle,Z_Param_tagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddDependency)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_GET_STRUCT(FPublishedFileID,Z_Param_childPublishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDependency(FOnAddUGCDependencyResult(Z_Param_Out_callback),Z_Param_publishedFileID,Z_Param_childPublishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGC::execAddAppDependency)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAppDependency(FOnAddAppDependencyResult(Z_Param_Out_callback),Z_Param_publishedFileID,Z_Param_appID);
		P_NATIVE_END;
	}
	void UUGC::StaticRegisterNativesUUGC()
	{
		UClass* Class = UUGC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAppDependency", &UUGC::execAddAppDependency },
			{ "AddDependency", &UUGC::execAddDependency },
			{ "AddExcludedTag", &UUGC::execAddExcludedTag },
			{ "AddItemKeyValueTag", &UUGC::execAddItemKeyValueTag },
			{ "AddItemPreviewFile", &UUGC::execAddItemPreviewFile },
			{ "AddItemPreviewVideo", &UUGC::execAddItemPreviewVideo },
			{ "AddItemToFavorites", &UUGC::execAddItemToFavorites },
			{ "AddRequiredKeyValueTag", &UUGC::execAddRequiredKeyValueTag },
			{ "AddRequiredTag", &UUGC::execAddRequiredTag },
			{ "BInitWorkshopForGameServer", &UUGC::execBInitWorkshopForGameServer },
			{ "CreateItem", &UUGC::execCreateItem },
			{ "CreateQueryAllUGCRequest", &UUGC::execCreateQueryAllUGCRequest },
			{ "CreateQueryUGCDetailsRequest", &UUGC::execCreateQueryUGCDetailsRequest },
			{ "CreateQueryUserUGCRequest", &UUGC::execCreateQueryUserUGCRequest },
			{ "DeleteItem", &UUGC::execDeleteItem },
			{ "DownloadItem", &UUGC::execDownloadItem },
			{ "GetAppDependencies", &UUGC::execGetAppDependencies },
			{ "GetItemDownloadInfo", &UUGC::execGetItemDownloadInfo },
			{ "GetItemInstallInfo", &UUGC::execGetItemInstallInfo },
			{ "GetItemState", &UUGC::execGetItemState },
			{ "GetItemUpdateProgress", &UUGC::execGetItemUpdateProgress },
			{ "GetNumSubscribedItems", &UUGC::execGetNumSubscribedItems },
			{ "GetQueryUGCAdditionalPreview", &UUGC::execGetQueryUGCAdditionalPreview },
			{ "GetQueryUGCChildren", &UUGC::execGetQueryUGCChildren },
			{ "GetQueryUGCKeyValueTag", &UUGC::execGetQueryUGCKeyValueTag },
			{ "GetQueryUGCMetadata", &UUGC::execGetQueryUGCMetadata },
			{ "GetQueryUGCNumAdditionalPreviews", &UUGC::execGetQueryUGCNumAdditionalPreviews },
			{ "GetQueryUGCNumKeyValueTags", &UUGC::execGetQueryUGCNumKeyValueTags },
			{ "GetQueryUGCPreviewURL", &UUGC::execGetQueryUGCPreviewURL },
			{ "GetQueryUGCResult", &UUGC::execGetQueryUGCResult },
			{ "GetQueryUGCStatistic", &UUGC::execGetQueryUGCStatistic },
			{ "GetSubscribedItems", &UUGC::execGetSubscribedItems },
			{ "GetUserItemVote", &UUGC::execGetUserItemVote },
			{ "ReleaseQueryUGCRequest", &UUGC::execReleaseQueryUGCRequest },
			{ "RemoveAppDependency", &UUGC::execRemoveAppDependency },
			{ "RemoveDependency", &UUGC::execRemoveDependency },
			{ "RemoveItemFromFavorites", &UUGC::execRemoveItemFromFavorites },
			{ "RemoveItemKeyValueTags", &UUGC::execRemoveItemKeyValueTags },
			{ "RemoveItemPreview", &UUGC::execRemoveItemPreview },
			{ "SendQueryUGCRequest", &UUGC::execSendQueryUGCRequest },
			{ "SetAllowCachedResponse", &UUGC::execSetAllowCachedResponse },
			{ "SetAllowLegacyUpload", &UUGC::execSetAllowLegacyUpload },
			{ "SetCloudFileNameFilter", &UUGC::execSetCloudFileNameFilter },
			{ "SetItemContent", &UUGC::execSetItemContent },
			{ "SetItemDescription", &UUGC::execSetItemDescription },
			{ "SetItemMetadata", &UUGC::execSetItemMetadata },
			{ "SetItemPreview", &UUGC::execSetItemPreview },
			{ "SetItemTags", &UUGC::execSetItemTags },
			{ "SetItemTitle", &UUGC::execSetItemTitle },
			{ "SetItemUpdateLanguage", &UUGC::execSetItemUpdateLanguage },
			{ "SetItemVisibility", &UUGC::execSetItemVisibility },
			{ "SetLanguage", &UUGC::execSetLanguage },
			{ "SetMatchAnyTag", &UUGC::execSetMatchAnyTag },
			{ "SetRankedByTrendDays", &UUGC::execSetRankedByTrendDays },
			{ "SetReturnAdditionalPreviews", &UUGC::execSetReturnAdditionalPreviews },
			{ "SetReturnChildren", &UUGC::execSetReturnChildren },
			{ "SetReturnKeyValueTags", &UUGC::execSetReturnKeyValueTags },
			{ "SetReturnLongDescription", &UUGC::execSetReturnLongDescription },
			{ "SetReturnMetadata", &UUGC::execSetReturnMetadata },
			{ "SetReturnOnlyIDs", &UUGC::execSetReturnOnlyIDs },
			{ "SetReturnPlaytimeStats", &UUGC::execSetReturnPlaytimeStats },
			{ "SetReturnTotalOnly", &UUGC::execSetReturnTotalOnly },
			{ "SetSearchText", &UUGC::execSetSearchText },
			{ "SetUserItemVote", &UUGC::execSetUserItemVote },
			{ "StartItemUpdate", &UUGC::execStartItemUpdate },
			{ "StartPlaytimeTracking", &UUGC::execStartPlaytimeTracking },
			{ "StopPlaytimeTracking", &UUGC::execStopPlaytimeTracking },
			{ "StopPlaytimeTrackingForAllItems", &UUGC::execStopPlaytimeTrackingForAllItems },
			{ "SubmitItemUpdate", &UUGC::execSubmitItemUpdate },
			{ "SubscribeItem", &UUGC::execSubscribeItem },
			{ "SuspendDownloads", &UUGC::execSuspendDownloads },
			{ "UnsubscribeItem", &UUGC::execUnsubscribeItem },
			{ "UpdateItemPreviewFile", &UUGC::execUpdateItemPreviewFile },
			{ "UpdateItemPreviewVideo", &UUGC::execUpdateItemPreviewVideo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUGC_AddAppDependency_Statics
	{
		struct UGC_eventAddAppDependency_Parms
		{
			FScriptDelegate callback;
			FPublishedFileID publishedFileID;
			int32 appID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddAppDependency_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddAppDependency_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddAppDependency_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnAddAppDependencyResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddAppDependency_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddAppDependency_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a dependency between the given item and the appid. \n\x09*\n\x09* This list of dependencies can be retrieved by calling GetAppDependencies. \n\x09* This is a soft-dependency that is displayed on the web. \n\x09* It is up to the application to determine whether the item can actually be used or not.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The item.\n\x09* @param\x09""appID\x09\x09\x09\x09The required app/dlc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Adds a dependency between the given item and the appid.\n\nThis list of dependencies can be retrieved by calling GetAppDependencies.\nThis is a soft-dependency that is displayed on the web.\nIt is up to the application to determine whether the item can actually be used or not.\n\n@param        publishedFileID         The item.\n@param        appID                           The required app/dlc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddAppDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddAppDependency", nullptr, nullptr, sizeof(UGC_eventAddAppDependency_Parms), Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddAppDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddAppDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddAppDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddDependency_Statics
	{
		struct UGC_eventAddDependency_Parms
		{
			FScriptDelegate callback;
			FPublishedFileID publishedFileID;
			FPublishedFileID childPublishedFileID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_childPublishedFileID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_childPublishedFileID = { "childPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddDependency_Parms, childPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddDependency_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddDependency_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnAddUGCDependencyResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_childPublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddDependency_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddDependency_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a workshop item as a dependency to the specified item. \n\x09*\n\x09* If the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection. \n\x09* Otherwise, the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC \n\x09* API using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09\x09The workshop item to add a dependency to.\n\x09* @param\x09""childPublishedFileID\x09The dependency to add to the parent.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Adds a workshop item as a dependency to the specified item.\n\nIf the nParentPublishedFileID item is of type k_EWorkshopFileTypeCollection, than the nChildPublishedFileID is simply added to that collection.\nOtherwise, the dependency is a soft one that is displayed on the web and can be retrieved via the ISteamUGC\nAPI using a combination of the m_unNumChildren member variable of the SteamUGCDetails_t struct and GetQueryUGCChildren.\n\n@param        publishedFileID                 The workshop item to add a dependency to.\n@param        childPublishedFileID    The dependency to add to the parent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddDependency", nullptr, nullptr, sizeof(UGC_eventAddDependency_Parms), Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddExcludedTag_Statics
	{
		struct UGC_eventAddExcludedTag_Parms
		{
			FUGCQueryHandle handle;
			FString tagName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tagName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddExcludedTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddExcludedTag_Parms), &Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_tagName = { "tagName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddExcludedTag_Parms, tagName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddExcludedTag_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_tagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a excluded tag to a pending UGC Query. This will only return UGC without the specified tag.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09handle\x09\x09The UGC query handle to customize.\n\x09* @param\x09tagName\x09\x09The tag that must NOT be attached to the UGC to receive it.\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Adds a excluded tag to a pending UGC Query. This will only return UGC without the specified tag.\n\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle          The UGC query handle to customize.\n@param        tagName         The tag that must NOT be attached to the UGC to receive it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddExcludedTag", nullptr, nullptr, sizeof(UGC_eventAddExcludedTag_Parms), Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddExcludedTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddExcludedTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics
	{
		struct UGC_eventAddItemKeyValueTag_Parms
		{
			FUGCUpdateHandle handle;
			FString key;
			FString value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddItemKeyValueTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddItemKeyValueTag_Parms), &Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemKeyValueTag_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemKeyValueTag_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemKeyValueTag_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a key-value tag pair to an item. Keys can map to multiple different values (1-to-many relationship).\n\x09*\n\x09* Key names are restricted to alpha-numeric characters and the '_' character.\n\x09* Both keys and values cannot exceed 255 characters in length.\n\x09* Key-value tags are searchable by exact match only.\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The workshop item update handle to customize.\n\x09* @param\x09key\x09\x09\x09\x09The key to set on the item.\n\x09* @param\x09value\x09\x09\x09""A value to map to the key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Adds a key-value tag pair to an item. Keys can map to multiple different values (1-to-many relationship).\n\nKey names are restricted to alpha-numeric characters and the '_' character.\nBoth keys and values cannot exceed 255 characters in length.\nKey-value tags are searchable by exact match only.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle                  The workshop item update handle to customize.\n@param        key                             The key to set on the item.\n@param        value                   A value to map to the key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemKeyValueTag", nullptr, nullptr, sizeof(UGC_eventAddItemKeyValueTag_Parms), Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddItemKeyValueTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddItemKeyValueTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics
	{
		struct UGC_eventAddItemPreviewFile_Parms
		{
			FUGCUpdateHandle handle;
			FString previewFile;
			ESteamItemPreviewType type;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_previewFile;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddItemPreviewFile_Parms), &Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewFile_Parms, type), Z_Construct_UEnum_SteamCore_ESteamItemPreviewType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_previewFile = { "previewFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewFile_Parms, previewFile), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewFile_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_previewFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds an additional preview file for the item.\n\x09*\n\x09* Then the format of the image should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\n\x09* NOTE: Using k_EItemPreviewType_YouTubeVideo or k_EItemPreviewType_Sketchfab are not currently supported with this API. For YouTube videos you should use AddItemPreviewVideo.\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The workshop item update handle to customize.\n\x09* @param\x09previewFile\x09\x09""Absolute path to the local image.\n\x09* @param\x09type\x09\x09\x09The type of this preview.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Adds an additional preview file for the item.\n\nThen the format of the image should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\nNOTE: Using k_EItemPreviewType_YouTubeVideo or k_EItemPreviewType_Sketchfab are not currently supported with this API. For YouTube videos you should use AddItemPreviewVideo.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle                  The workshop item update handle to customize.\n@param        previewFile             Absolute path to the local image.\n@param        type                    The type of this preview." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemPreviewFile", nullptr, nullptr, sizeof(UGC_eventAddItemPreviewFile_Parms), Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddItemPreviewFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddItemPreviewFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics
	{
		struct UGC_eventAddItemPreviewVideo_Parms
		{
			FUGCUpdateHandle handle;
			FString videoID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_videoID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddItemPreviewVideo_Parms), &Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_videoID = { "videoID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewVideo_Parms, videoID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemPreviewVideo_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_videoID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds an additional video preview from YouTube for the item.\n\x09*\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\x09\n\x09* @param\x09handle\x09\x09\x09The workshop item update handle to customize.\n\x09* @param\x09videoID\x09\x09\x09The YouTube video ID to add. (e.g. \"jHgZh4GV9G0\")\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Adds an additional video preview from YouTube for the item.\n\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle                  The workshop item update handle to customize.\n@param        videoID                 The YouTube video ID to add. (e.g. \"jHgZh4GV9G0\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemPreviewVideo", nullptr, nullptr, sizeof(UGC_eventAddItemPreviewVideo_Parms), Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddItemPreviewVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddItemPreviewVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics
	{
		struct UGC_eventAddItemToFavorites_Parms
		{
			FScriptDelegate callback;
			int32 appID;
			FPublishedFileID publishedFileID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemToFavorites_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemToFavorites_Parms, appID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddItemToFavorites_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnAddItemToFavorites__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a workshop item to the users favorites list.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09\x09The app ID that this item belongs to.\n\x09* @param\x09publishedFileID\x09\x09The workshop item to add to the users favorites list.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Adds a workshop item to the users favorites list.\n\n@param        appID                           The app ID that this item belongs to.\n@param        publishedFileID         The workshop item to add to the users favorites list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddItemToFavorites", nullptr, nullptr, sizeof(UGC_eventAddItemToFavorites_Parms), Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddItemToFavorites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddItemToFavorites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics
	{
		struct UGC_eventAddRequiredKeyValueTag_Parms
		{
			FUGCQueryHandle handle;
			FString key;
			FString value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddRequiredKeyValueTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddRequiredKeyValueTag_Parms), &Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddRequiredKeyValueTag_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddRequiredKeyValueTag_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddRequiredKeyValueTag_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a required key-value tag to a pending UGC Query. This will only return workshop items that have a key = pKey and a value = pValue.\n\x09*\n\x09* @param\x09handle\x09\x09The UGC query handle to customize.\n\x09* @param\x09key\x09\x09\x09The key-value key that must be attached to the UGC to receive it.\n\x09* @param\x09value\x09\x09The key-value value associated with pKey that must be attached to the UGC to receive it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Adds a required key-value tag to a pending UGC Query. This will only return workshop items that have a key = pKey and a value = pValue.\n\n@param        handle          The UGC query handle to customize.\n@param        key                     The key-value key that must be attached to the UGC to receive it.\n@param        value           The key-value value associated with pKey that must be attached to the UGC to receive it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddRequiredKeyValueTag", nullptr, nullptr, sizeof(UGC_eventAddRequiredKeyValueTag_Parms), Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_AddRequiredTag_Statics
	{
		struct UGC_eventAddRequiredTag_Parms
		{
			FUGCQueryHandle handle;
			FString tagName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tagName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventAddRequiredTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventAddRequiredTag_Parms), &Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_tagName = { "tagName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddRequiredTag_Parms, tagName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventAddRequiredTag_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_tagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Adds a required tag to a pending UGC Query. This will only return UGC with the specified tag.\n\x09*\x09\n\x09* @param\x09handle\x09\x09The UGC query handle to customize.\n\x09* @param\x09tagName\x09\x09The tag that must be attached to the UGC to receive it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Adds a required tag to a pending UGC Query. This will only return UGC with the specified tag.\n\n@param        handle          The UGC query handle to customize.\n@param        tagName         The tag that must be attached to the UGC to receive it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "AddRequiredTag", nullptr, nullptr, sizeof(UGC_eventAddRequiredTag_Parms), Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_AddRequiredTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_AddRequiredTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics
	{
		struct UGC_eventBInitWorkshopForGameServer_Parms
		{
			int32 workshopDepotID;
			FString folder;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_folder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_workshopDepotID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventBInitWorkshopForGameServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventBInitWorkshopForGameServer_Parms), &Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_folder = { "folder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventBInitWorkshopForGameServer_Parms, folder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_workshopDepotID = { "workshopDepotID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventBInitWorkshopForGameServer_Parms, workshopDepotID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_folder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::NewProp_workshopDepotID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Lets game servers set a specific workshop folder before issuing any UGC commands.\n\x09*\n\x09* This is helpful if you want to support multiple game servers running out of the same install folder.\n\x09*\n\x09* @param\x09workshopDepotID\x09\x09The depot ID of the game server.\n\x09* @param\x09""folder\x09\x09\x09\x09The absolute path to store the workshop content.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Lets game servers set a specific workshop folder before issuing any UGC commands.\n\nThis is helpful if you want to support multiple game servers running out of the same install folder.\n\n@param        workshopDepotID         The depot ID of the game server.\n@param        folder                          The absolute path to store the workshop content." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "BInitWorkshopForGameServer", nullptr, nullptr, sizeof(UGC_eventBInitWorkshopForGameServer_Parms), Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_CreateItem_Statics
	{
		struct UGC_eventCreateItem_Parms
		{
			FScriptDelegate callback;
			int32 consumerAppID;
			ESteamWorkshopFileType fileType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_fileType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_fileType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_consumerAppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateItem_Parms, fileType), Z_Construct_UEnum_SteamCore_ESteamWorkshopFileType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_fileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_consumerAppID = { "consumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateItem_Parms, consumerAppID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateItem_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnCreateItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_fileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_fileType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_consumerAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateItem_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateItem_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Creates a new workshop item with no content attached yet.\n\x09*\n\x09* @param\x09""consumerAppID\x09\x09The App ID that will be using this item.\n\x09* @param\x09""fileType\x09\x09\x09The type of UGC to create.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Creates a new workshop item with no content attached yet.\n\n@param        consumerAppID           The App ID that will be using this item.\n@param        fileType                        The type of UGC to create." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateItem", nullptr, nullptr, sizeof(UGC_eventCreateItem_Parms), Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_CreateItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_CreateItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics
	{
		struct UGC_eventCreateQueryAllUGCRequest_Parms
		{
			ESteamUGCQuery queryType;
			ESteamUGCMatchingUGCType fileType;
			int32 creatorAppID;
			int32 consumerAppID;
			int32 page;
			FUGCQueryHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_page;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_consumerAppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_creatorAppID;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_fileType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_fileType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_queryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_queryType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_page = { "page", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, page), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_consumerAppID = { "consumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, consumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_creatorAppID = { "creatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, creatorAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_fileType = { "fileType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, fileType), Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_fileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_queryType = { "queryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryAllUGCRequest_Parms, queryType), Z_Construct_UEnum_SteamCore_ESteamUGCQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_queryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_page,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_consumerAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_creatorAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_fileType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_fileType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_queryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::NewProp_queryType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Query for all matching UGC. You can use this to list all of the available UGC for your app.\n\x09*\n\x09* This will return up to 50 results as declared by kNumUGCResultsPerPage. \n\x09* You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\n\x09* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09* NOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09* To query for the UGC associated with a single user you can use CreateQueryUserUGCRequest instead.\n\x09*\n\x09*\n\x09* @param\x09queryType\x09\x09\x09Used to specify the sorting and filtering for this call.\n\x09* @param\x09""fileType\x09\x09\x09Used to specify the type of UGC queried for.\n\x09* @param\x09""creatorAppID\x09\x09This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n\x09* @param\x09""consumerAppID\x09\x09This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n\x09* @param\x09page\x09\x09\x09\x09The page number of the results to receive. This should start at 1 on the first call.\n\x09*/" },
		{ "CPP_Default_page", "1" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Query for all matching UGC. You can use this to list all of the available UGC for your app.\n\nThis will return up to 50 results as declared by kNumUGCResultsPerPage.\nYou can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query for the UGC associated with a single user you can use CreateQueryUserUGCRequest instead.\n\n\n@param        queryType                       Used to specify the sorting and filtering for this call.\n@param        fileType                        Used to specify the type of UGC queried for.\n@param        creatorAppID            This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n@param        consumerAppID           This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n@param        page                            The page number of the results to receive. This should start at 1 on the first call." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateQueryAllUGCRequest", nullptr, nullptr, sizeof(UGC_eventCreateQueryAllUGCRequest_Parms), Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics
	{
		struct UGC_eventCreateQueryUGCDetailsRequest_Parms
		{
			TArray<FPublishedFileID> publishedFileIDs;
			FUGCQueryHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_publishedFileIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUGCDetailsRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_publishedFileIDs = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUGCDetailsRequest_Parms, publishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_publishedFileIDs_Inner = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_publishedFileIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::NewProp_publishedFileIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Query for the details of specific workshop items.\n\x09*\n\x09* This will return up to 50 results as declared by kNumUGCResultsPerPage.\n\x09* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09* NOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09* To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\x09*\n\x09* @param\x09publishedFileIDs\x09\x09The list of workshop items to get the details for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Query for the details of specific workshop items.\n\nThis will return up to 50 results as declared by kNumUGCResultsPerPage.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\n@param        publishedFileIDs                The list of workshop items to get the details for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateQueryUGCDetailsRequest", nullptr, nullptr, sizeof(UGC_eventCreateQueryUGCDetailsRequest_Parms), Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics
	{
		struct UGC_eventCreateQueryUserUGCRequest_Parms
		{
			FSteamID steamID;
			ESteamUserUGCList listType;
			ESteamUGCMatchingUGCType matchingUGCType;
			ESteamUserUGCListSortOrder sortOrder;
			int32 creatorAppID;
			int32 consumerAppID;
			int32 page;
			FUGCQueryHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_page;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_consumerAppID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_creatorAppID;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sortOrder;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sortOrder_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_matchingUGCType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_matchingUGCType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_listType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_listType_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_page = { "page", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, page), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_consumerAppID = { "consumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, consumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_creatorAppID = { "creatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, creatorAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_sortOrder = { "sortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, sortOrder), Z_Construct_UEnum_SteamCore_ESteamUserUGCListSortOrder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_sortOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_matchingUGCType = { "matchingUGCType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, matchingUGCType), Z_Construct_UEnum_SteamCore_ESteamUGCMatchingUGCType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_matchingUGCType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_listType = { "listType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, listType), Z_Construct_UEnum_SteamCore_ESteamUserUGCList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_listType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventCreateQueryUserUGCRequest_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_page,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_consumerAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_creatorAppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_sortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_sortOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_matchingUGCType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_matchingUGCType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_listType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_listType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Query UGC associated with a user. You can use this to list the UGC the user is subscribed to amongst other things.\n\x09*\n\x09* This will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\n\x09* NOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\n\x09* NOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\n\x09* To query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\x09*\n\x09* @param\x09steamID\x09\x09\x09\x09The Account ID to query the UGC for. You can use CSteamID.GetAccountID to get the Account ID from a Steam ID.\n\x09* @param\x09listType\x09\x09\x09Used to specify the type of list to get. If the currently logged in user is different than the user specified in unAccountID, then some options are not be allowed. (k_EUserUGCList_VotedOn, k_EUserUGCList_VotedUp, k_EUserUGCList_VotedDown, k_EUserUGCList_WillVoteLater, k_EUserUGCList_Subscribed)\n\x09* @param\x09matchingUGCType\x09\x09Used to specify the type of UGC queried for.\n\x09* @param\x09sortOrder\x09\x09\x09Used to specify the order that the list will be sorted in.\n\x09* @param\x09""creatorAppID\x09\x09This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n\x09* @param\x09""consumerAppID\x09\x09This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n\x09* @param\x09page\x09\x09\x09\x09The page number of the results to receive. This should start at 1 on the first call.\n\x09*/" },
		{ "CPP_Default_page", "1" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Query UGC associated with a user. You can use this to list the UGC the user is subscribed to amongst other things.\n\nThis will return up to 50 results as declared by kNumUGCResultsPerPage. You can make subsequent calls to this function, increasing the unPage each time to get the next set of results.\nNOTE: Either nConsumerAppID or nCreatorAppID must have a valid AppID!\nNOTE: You must release the handle returned by this function by calling ReleaseQueryUGCRequest when you are done with it!\nTo query all the UGC for your app you can use CreateQueryAllUGCRequest instead.\n\n@param        steamID                         The Account ID to query the UGC for. You can use CSteamID.GetAccountID to get the Account ID from a Steam ID.\n@param        listType                        Used to specify the type of list to get. If the currently logged in user is different than the user specified in unAccountID, then some options are not be allowed. (k_EUserUGCList_VotedOn, k_EUserUGCList_VotedUp, k_EUserUGCList_VotedDown, k_EUserUGCList_WillVoteLater, k_EUserUGCList_Subscribed)\n@param        matchingUGCType         Used to specify the type of UGC queried for.\n@param        sortOrder                       Used to specify the order that the list will be sorted in.\n@param        creatorAppID            This should contain the App ID of the app where the item was created. This may be different than nConsumerAppID if your item creation tool is a seperate App ID.\n@param        consumerAppID           This should contain the App ID for the current game or application. Do not pass the App ID of the workshop item creation tool if that is a separate App ID!\n@param        page                            The page number of the results to receive. This should start at 1 on the first call." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "CreateQueryUserUGCRequest", nullptr, nullptr, sizeof(UGC_eventCreateQueryUserUGCRequest_Parms), Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_DeleteItem_Statics
	{
		struct UGC_eventDeleteItem_Parms
		{
			FScriptDelegate callback;
			FPublishedFileID publishedFileID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventDeleteItem_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventDeleteItem_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnDeleteItemResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DeleteItem_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_DeleteItem_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Deletes the item without prompting the user.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The item to delete.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Deletes the item without prompting the user.\n\n@param        publishedFileID         The item to delete." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_DeleteItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "DeleteItem", nullptr, nullptr, sizeof(UGC_eventDeleteItem_Parms), Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DeleteItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_DeleteItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DeleteItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_DeleteItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_DeleteItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_DownloadItem_Statics
	{
		struct UGC_eventDownloadItem_Parms
		{
			FPublishedFileID publishedFileID;
			bool bHighPriority;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bHighPriority_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighPriority;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventDownloadItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventDownloadItem_Parms), &Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority_SetBit(void* Obj)
	{
		((UGC_eventDownloadItem_Parms*)Obj)->bHighPriority = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority = { "bHighPriority", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventDownloadItem_Parms), &Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventDownloadItem_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_bHighPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_DownloadItem_Statics::NewProp_publishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_DownloadItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Download or update a workshop item.\n\x09*\n\x09* If the return value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.\n\x09* If the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.\n\x09* If the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update. \n\x09* Do not access the workshop item on disk until the Callback DownloadItemResult_t is called.\n\x09* The DownloadItemResult_t callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the handler \n\x09* will be called for all item downloads regardless of the running application.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The workshop item to download.\n\x09* @param\x09""bHighPriority\x09\x09Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Download or update a workshop item.\n\nIf the return value is true then register and wait for the Callback DownloadItemResult_t before calling GetItemInstallInfo or accessing the workshop item on disk.\nIf the user is not subscribed to the item (e.g. a Game Server using anonymous login), the workshop item will be downloaded and cached temporarily.\nIf the workshop item has an item state of k_EItemStateNeedsUpdate, then this function can be called to initiate the update.\nDo not access the workshop item on disk until the Callback DownloadItemResult_t is called.\nThe DownloadItemResult_t callback contains the app ID associated with the workshop item. It should be compared against the running app ID as the handler\nwill be called for all item downloads regardless of the running application.\n\n@param        publishedFileID         The workshop item to download.\n@param        bHighPriority           Start the download in high priority mode, pausing any existing in-progress Steam downloads and immediately begin downloading this workshop item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_DownloadItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "DownloadItem", nullptr, nullptr, sizeof(UGC_eventDownloadItem_Parms), Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DownloadItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_DownloadItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_DownloadItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_DownloadItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_DownloadItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetAppDependencies_Statics
	{
		struct UGC_eventGetAppDependencies_Parms
		{
			FScriptDelegate callback;
			FPublishedFileID publishedFileID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetAppDependencies_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetAppDependencies_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnGetAppDependenciesResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Get the app dependencies associated with the given PublishedFileId_t. \n\x09*\n\x09* These are \"soft\" dependencies that are shown on the web. \n\x09* It is up to the application to determine whether an item can be used or not.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The workshop item to get app dependencies for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Get the app dependencies associated with the given PublishedFileId_t.\n\nThese are \"soft\" dependencies that are shown on the web.\nIt is up to the application to determine whether an item can be used or not.\n\n@param        publishedFileID         The workshop item to get app dependencies for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetAppDependencies", nullptr, nullptr, sizeof(UGC_eventGetAppDependencies_Parms), Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetAppDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetAppDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics
	{
		struct UGC_eventGetItemDownloadInfo_Parms
		{
			FPublishedFileID publishedFileID;
			int32 bytesDownloaded;
			int32 bytesTotal;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bytesTotal;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bytesDownloaded;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetItemDownloadInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetItemDownloadInfo_Parms), &Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_bytesTotal = { "bytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemDownloadInfo_Parms, bytesTotal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_bytesDownloaded = { "bytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemDownloadInfo_Parms, bytesDownloaded), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemDownloadInfo_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_bytesTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_bytesDownloaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::NewProp_publishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Get info about a pending download of a workshop item that has k_EItemStateNeedsUpdate set.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The workshop item to get the download info for.\n\x09* @param\x09""bytesDownloaded\x09\x09Returns the current bytes downloaded.\n\x09* @param\x09""bytesTotal\x09\x09\x09Returns the total bytes. This is only valid after the download has started.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Get info about a pending download of a workshop item that has k_EItemStateNeedsUpdate set.\n\n@param        publishedFileID         The workshop item to get the download info for.\n@param        bytesDownloaded         Returns the current bytes downloaded.\n@param        bytesTotal                      Returns the total bytes. This is only valid after the download has started." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemDownloadInfo", nullptr, nullptr, sizeof(UGC_eventGetItemDownloadInfo_Parms), Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetItemDownloadInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetItemDownloadInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics
	{
		struct UGC_eventGetItemInstallInfo_Parms
		{
			FPublishedFileID publishedFileID;
			int32 sizeOnDisk;
			FString folder;
			int32 timeStamp;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeStamp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_folder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sizeOnDisk;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetItemInstallInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetItemInstallInfo_Parms), &Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_timeStamp = { "timeStamp", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, timeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_folder = { "folder", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, folder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_sizeOnDisk = { "sizeOnDisk", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, sizeOnDisk), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemInstallInfo_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_timeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_folder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_sizeOnDisk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::NewProp_publishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Gets info about currently installed content on the disc for workshop items that have k_EItemStateInstalled set.\n\x09*\n\x09* Calling this sets the \"used\" flag on the workshop item for the current player and adds it to their k_EUserUGCList_UsedOrPlayed list.\n\x09* If k_EItemStateLegacyItem is set then pchFolder contains the path to the legacy file itself, not a folder.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The workshop item to get the install info for.\n\x09* @param\x09sizeOnDisk\x09\x09\x09Returns the size of the workshop item in bytes.\n\x09* @param\x09""folder\x09\x09\x09\x09Returns the absolute path to the folder containing the content by copying it.\n\x09* @param\x09timeStamp\x09\x09\x09Returns the time when the workshop item was last updated.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Gets info about currently installed content on the disc for workshop items that have k_EItemStateInstalled set.\n\nCalling this sets the \"used\" flag on the workshop item for the current player and adds it to their k_EUserUGCList_UsedOrPlayed list.\nIf k_EItemStateLegacyItem is set then pchFolder contains the path to the legacy file itself, not a folder.\n\n@param        publishedFileID         The workshop item to get the install info for.\n@param        sizeOnDisk                      Returns the size of the workshop item in bytes.\n@param        folder                          Returns the absolute path to the folder containing the content by copying it.\n@param        timeStamp                       Returns the time when the workshop item was last updated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemInstallInfo", nullptr, nullptr, sizeof(UGC_eventGetItemInstallInfo_Parms), Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetItemInstallInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetItemInstallInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetItemState_Statics
	{
		struct UGC_eventGetItemState_Parms
		{
			FPublishedFileID publishedFileID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemState_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemState_Statics::NewProp_publishedFileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetItemState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Gets the current state of a workshop item on this client.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The workshop item to get the state for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Gets the current state of a workshop item on this client.\n\n@param        publishedFileID         The workshop item to get the state for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemState", nullptr, nullptr, sizeof(UGC_eventGetItemState_Parms), Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics
	{
		struct UGC_eventGetItemUpdateProgress_Parms
		{
			FUGCUpdateHandle handle;
			int32 bytesProcessed;
			int32 bytesTotal;
			ESteamItemUpdateStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bytesTotal;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bytesProcessed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamItemUpdateStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_bytesTotal = { "bytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, bytesTotal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_bytesProcessed = { "bytesProcessed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, bytesProcessed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetItemUpdateProgress_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_bytesTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_bytesProcessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Gets the progress of an item update.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The update handle to get the progress for.\n\x09* @param\x09""bytesProcessed\x09\x09Returns the current number of bytes uploaded.\n\x09* @param\x09""bytesTotal\x09\x09\x09Returns the total number of bytes that will be uploaded.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Gets the progress of an item update.\n\n@param        handle                          The update handle to get the progress for.\n@param        bytesProcessed          Returns the current number of bytes uploaded.\n@param        bytesTotal                      Returns the total number of bytes that will be uploaded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetItemUpdateProgress", nullptr, nullptr, sizeof(UGC_eventGetItemUpdateProgress_Parms), Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetItemUpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetItemUpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics
	{
		struct UGC_eventGetNumSubscribedItems_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetNumSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Gets the total number of items the current user is subscribed to for the game or application.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Gets the total number of items the current user is subscribed to for the game or application." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetNumSubscribedItems", nullptr, nullptr, sizeof(UGC_eventGetNumSubscribedItems_Parms), Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetNumSubscribedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetNumSubscribedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics
	{
		struct UGC_eventGetQueryUGCAdditionalPreview_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			int32 previewIndex;
			FString urlOrVideoID;
			FString originalFileName;
			ESteamItemPreviewType previewType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_previewType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_previewType_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_originalFileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_urlOrVideoID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_previewIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCAdditionalPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCAdditionalPreview_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_previewType = { "previewType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, previewType), Z_Construct_UEnum_SteamCore_ESteamItemPreviewType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_previewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_originalFileName = { "originalFileName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, originalFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_urlOrVideoID = { "urlOrVideoID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, urlOrVideoID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_previewIndex = { "previewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, previewIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCAdditionalPreview_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_previewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_previewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_originalFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_urlOrVideoID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_previewIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the details of an additional preview associated with an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* Before calling this you should call GetQueryUGCNumAdditionalPreviews to get number of additional previews.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The UGC query handle to get the results from.\n\x09* @param\x09index\x09\x09\x09\x09The index of the item to get the details of.\n\x09* @param\x09previewIndex\x09\x09The index of the additional preview to get the details of.\n\x09* @param\x09urlOrVideoID\x09\x09Returns a URL or Video ID by copying it into this string.\n\x09* @param\x09originalFileName\x09Returns the original file name. May be set to NULL to not receive this.\n\x09* @param\x09previewType\x09\x09\x09The type of preview that was returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Retrieve the details of an additional preview associated with an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\nBefore calling this you should call GetQueryUGCNumAdditionalPreviews to get number of additional previews.\n\n@param        handle                          The UGC query handle to get the results from.\n@param        index                           The index of the item to get the details of.\n@param        previewIndex            The index of the additional preview to get the details of.\n@param        urlOrVideoID            Returns a URL or Video ID by copying it into this string.\n@param        originalFileName        Returns the original file name. May be set to NULL to not receive this.\n@param        previewType                     The type of preview that was returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCAdditionalPreview", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCAdditionalPreview_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics
	{
		struct UGC_eventGetQueryUGCChildren_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			TArray<FPublishedFileID> publishedFileIDs;
			int32 maxEntries;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxEntries;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_publishedFileIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileIDs_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCChildren_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_maxEntries = { "maxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, maxEntries), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_publishedFileIDs = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, publishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_publishedFileIDs_Inner = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCChildren_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_maxEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_publishedFileIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_publishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the ids of any child items of an individual workshop item after receiving a querying UGC call result. \n\x09*\n\x09* These items can either be a part of a collection or some other dependency (see AddDependency).\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* You should create pvecPublishedFileID with m_unNumChildren provided in SteamUGCDetails_t after getting the UGC details with GetQueryUGCResult.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The UGC query handle to get the results from.\n\x09* @param\x09index\x09\x09\x09\x09The index of the item to get the details of.\n\x09* @param\x09publishedFileIDs\x09Returns the UGC children by setting this array.\n\x09* @param\x09maxEntries\x09\x09\x09The length of publishedFileIDs.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Retrieve the ids of any child items of an individual workshop item after receiving a querying UGC call result.\n\nThese items can either be a part of a collection or some other dependency (see AddDependency).\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou should create pvecPublishedFileID with m_unNumChildren provided in SteamUGCDetails_t after getting the UGC details with GetQueryUGCResult.\n\n@param        handle                          The UGC query handle to get the results from.\n@param        index                           The index of the item to get the details of.\n@param        publishedFileIDs        Returns the UGC children by setting this array.\n@param        maxEntries                      The length of publishedFileIDs." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCChildren", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCChildren_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics
	{
		struct UGC_eventGetQueryUGCKeyValueTag_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			int32 keyValueTagIndex;
			FString key;
			FString value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_keyValueTagIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCKeyValueTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCKeyValueTag_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_keyValueTagIndex = { "keyValueTagIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, keyValueTagIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCKeyValueTag_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_keyValueTagIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the details of a key-value tag associated with an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* Before calling this you should call GetQueryUGCNumKeyValueTags to get number of tags.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The UGC query handle to get the results from.\n\x09* @param\x09index\x09\x09\x09\x09The index of the item to get the details of.\n\x09* @param\x09keyValueTagIndex\x09The index of the tag to get the details of.\n\x09* @param\x09key\x09\x09\x09\x09\x09Returns the key by copying it into this string.\n\x09* @param\x09value\x09\x09\x09\x09Returns the value by copying it into this string.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Retrieve the details of a key-value tag associated with an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\nBefore calling this you should call GetQueryUGCNumKeyValueTags to get number of tags.\n\n@param        handle                          The UGC query handle to get the results from.\n@param        index                           The index of the item to get the details of.\n@param        keyValueTagIndex        The index of the tag to get the details of.\n@param        key                                     Returns the key by copying it into this string.\n@param        value                           Returns the value by copying it into this string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCKeyValueTag", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCKeyValueTag_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics
	{
		struct UGC_eventGetQueryUGCMetadata_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			FString metaData;
			int32 metadataSize;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_metadataSize;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_metaData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCMetadata_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_metadataSize = { "metadataSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, metadataSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_metaData = { "metaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, metaData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCMetadata_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_metadataSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_metaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the developer set metadata of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The UGC query handle to get the results from.\n\x09* @param\x09index\x09\x09\x09The index of the item to get the details of.\n\x09* @param\x09metaData\x09\x09Returns the url by copying it into this string.\n\x09* @param\x09metadataSize\x09The size of pchMetadata in bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Retrieve the developer set metadata of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param        handle                  The UGC query handle to get the results from.\n@param        index                   The index of the item to get the details of.\n@param        metaData                Returns the url by copying it into this string.\n@param        metadataSize    The size of pchMetadata in bytes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCMetadata", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCMetadata_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics
	{
		struct UGC_eventGetQueryUGCNumAdditionalPreviews_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the number of additional previews of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* You can then call GetQueryUGCAdditionalPreview to get the details of each additional preview.\n\x09*\n\x09* @param\x09handle\x09\x09The UGC query handle to get the results from.\n\x09* @param\x09index\x09\x09The index of the item to get the details of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Retrieve the number of additional previews of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can then call GetQueryUGCAdditionalPreview to get the details of each additional preview.\n\n@param        handle          The UGC query handle to get the results from.\n@param        index           The index of the item to get the details of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCNumAdditionalPreviews", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCNumAdditionalPreviews_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics
	{
		struct UGC_eventGetQueryUGCNumKeyValueTags_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumKeyValueTags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumKeyValueTags_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCNumKeyValueTags_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the number of key-value tags of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* You can then call GetQueryUGCKeyValueTag to get the details of each tag.\n\x09*\n\x09* @param\x09handle\x09\x09The UGC query handle to get the results from.\n\x09* @param\x09index\x09\x09The index of the item to get the details of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Retrieve the number of key-value tags of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can then call GetQueryUGCKeyValueTag to get the details of each tag.\n\n@param        handle          The UGC query handle to get the results from.\n@param        index           The index of the item to get the details of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCNumKeyValueTags", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCNumKeyValueTags_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics
	{
		struct UGC_eventGetQueryUGCPreviewURL_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			FString url;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCPreviewURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCPreviewURL_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCPreviewURL_Parms, url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCPreviewURL_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCPreviewURL_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the URL to the preview image of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09* You can use this URL to download and display the preview image instead of having to download it using the m_hPreviewFile in the ISteamUGC::SteamUGCDetails_t struct.\n\x09* \n\x09* @param\x09handle\x09\x09The UGC query handle to get the results from.\n\x09* @param\x09index\x09\x09The index of the item to get the details of.\n\x09* @param\x09url\x09\x09\x09Returns the url by copying it into this string.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Retrieve the URL to the preview image of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\nYou can use this URL to download and display the preview image instead of having to download it using the m_hPreviewFile in the ISteamUGC::SteamUGCDetails_t struct.\n\n@param        handle          The UGC query handle to get the results from.\n@param        index           The index of the item to get the details of.\n@param        url                     Returns the url by copying it into this string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCPreviewURL", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCPreviewURL_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics
	{
		struct UGC_eventGetQueryUGCResult_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			FSteamUGCDetails details;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_details;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCResult_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_details = { "details", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCResult_Parms, details), Z_Construct_UScriptStruct_FSteamUGCDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCResult_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCResult_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve the details of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09*\n\x09* @param\x09handle\x09\x09The UGC query handle to get the results from.\n\x09* @param\x09index\x09\x09The index of the item to get the details of.\n\x09* @param\x09""details\x09\x09Returns the the UGC details.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Retrieve the details of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param        handle          The UGC query handle to get the results from.\n@param        index           The index of the item to get the details of.\n@param        details         Returns the the UGC details." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCResult", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCResult_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics
	{
		struct UGC_eventGetQueryUGCStatistic_Parms
		{
			FUGCQueryHandle handle;
			int32 index;
			ESteamItemStatistic statType;
			FString statValue;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_statValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_statType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_statType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventGetQueryUGCStatistic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventGetQueryUGCStatistic_Parms), &Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_statValue = { "statValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, statValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_statType = { "statType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, statType), Z_Construct_UEnum_SteamCore_ESteamItemStatistic, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_statType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetQueryUGCStatistic_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_statValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_statType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_statType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Retrieve various statistics of an individual workshop item after receiving a querying UGC call result.\n\x09*\n\x09* You should call this in a loop to get the details of all the workshop items returned.\n\x09* NOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\x09*\n\x09* @param\x09handle\x09\x09The UGC query handle to get the results from.\n\x09* @param\x09index\x09\x09The index of the item to get the details of.\n\x09* @param\x09statType\x09The statistic to retrieve.\n\x09* @param\x09statValue\x09Returns the value associated with the specified statistic.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Retrieve various statistics of an individual workshop item after receiving a querying UGC call result.\n\nYou should call this in a loop to get the details of all the workshop items returned.\nNOTE: This must only be called with the handle obtained from a successful SteamUGCQueryCompleted_t call result.\n\n@param        handle          The UGC query handle to get the results from.\n@param        index           The index of the item to get the details of.\n@param        statType        The statistic to retrieve.\n@param        statValue       Returns the value associated with the specified statistic." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetQueryUGCStatistic", nullptr, nullptr, sizeof(UGC_eventGetQueryUGCStatistic_Parms), Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetQueryUGCStatistic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetQueryUGCStatistic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics
	{
		struct UGC_eventGetSubscribedItems_Parms
		{
			TArray<FPublishedFileID> publishedFileIDs;
			int32 maxEntries;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxEntries;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_publishedFileIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_maxEntries = { "maxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetSubscribedItems_Parms, maxEntries), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_publishedFileIDs = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetSubscribedItems_Parms, publishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_publishedFileIDs_Inner = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_maxEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_publishedFileIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::NewProp_publishedFileIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Gets a list of all of the items the current user is subscribed to for the current game.\n\x09*\n\x09* You create an array with the size provided by GetNumSubscribedItems before calling this.\n\x09*\n\x09* @param\x09publishedFileIDs\x09The array where the item ids will be copied into.\n\x09* @param\x09maxEntries\x09\x09\x09\x09The maximum number of items to return. This should typically be the same as GetNumSubscribedItems and the same size as pvecPublishedFileID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Gets a list of all of the items the current user is subscribed to for the current game.\n\nYou create an array with the size provided by GetNumSubscribedItems before calling this.\n\n@param        publishedFileIDs        The array where the item ids will be copied into.\n@param        maxEntries                              The maximum number of items to return. This should typically be the same as GetNumSubscribedItems and the same size as pvecPublishedFileID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetSubscribedItems", nullptr, nullptr, sizeof(UGC_eventGetSubscribedItems_Parms), Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetSubscribedItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetSubscribedItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_GetUserItemVote_Statics
	{
		struct UGC_eventGetUserItemVote_Parms
		{
			FScriptDelegate callback;
			FPublishedFileID publishedFileID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetUserItemVote_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventGetUserItemVote_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnGetUserItemVote__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Gets the users vote status on a workshop item.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The workshop item ID to get the users vote.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Gets the users vote status on a workshop item.\n\n@param        publishedFileID         The workshop item ID to get the users vote." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "GetUserItemVote", nullptr, nullptr, sizeof(UGC_eventGetUserItemVote_Parms), Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_GetUserItemVote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_GetUserItemVote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics
	{
		struct UGC_eventReleaseQueryUGCRequest_Parms
		{
			FUGCQueryHandle handle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventReleaseQueryUGCRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventReleaseQueryUGCRequest_Parms), &Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventReleaseQueryUGCRequest_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Releases a UGC query handle when you are done with it to free up memory.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The UGC query handle to release.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Releases a UGC query handle when you are done with it to free up memory.\n\n@param        handle                  The UGC query handle to release." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "ReleaseQueryUGCRequest", nullptr, nullptr, sizeof(UGC_eventReleaseQueryUGCRequest_Parms), Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics
	{
		struct UGC_eventRemoveAppDependency_Parms
		{
			FScriptDelegate callback;
			FPublishedFileID publishedFileID;
			int32 appID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveAppDependency_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveAppDependency_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveAppDependency_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveAppDependencyResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The item.\n\x09* @param\x09""appID\x09\x09\x09\x09The app/dlc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Removes the dependency between the given item and the appid. This list of dependencies can be retrieved by calling GetAppDependencies.\n\n@param        publishedFileID         The item.\n@param        appID                           The app/dlc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveAppDependency", nullptr, nullptr, sizeof(UGC_eventRemoveAppDependency_Parms), Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveAppDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_RemoveAppDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveDependency_Statics
	{
		struct UGC_eventRemoveDependency_Parms
		{
			FScriptDelegate callback;
			FPublishedFileID parentPublishedFileID;
			FPublishedFileID childPublishedFileID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_childPublishedFileID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_parentPublishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_childPublishedFileID = { "childPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveDependency_Parms, childPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_parentPublishedFileID = { "parentPublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveDependency_Parms, parentPublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveDependency_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveUGCDependencyResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_childPublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_parentPublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveDependency_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Removes a workshop item as a dependency from the specified item.\n\x09*\n\x09* @param\x09parentPublishedFileID\x09\x09The workshop item to remove a dependency from.\n\x09* @param\x09""childPublishedFileID\x09\x09The dependency to remove from the parent.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Removes a workshop item as a dependency from the specified item.\n\n@param        parentPublishedFileID           The workshop item to remove a dependency from.\n@param        childPublishedFileID            The dependency to remove from the parent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveDependency", nullptr, nullptr, sizeof(UGC_eventRemoveDependency_Parms), Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_RemoveDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics
	{
		struct UGC_eventRemoveItemFromFavorites_Parms
		{
			FScriptDelegate callback;
			int32 appID;
			FPublishedFileID publishedFileID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemFromFavorites_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemFromFavorites_Parms, appID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemFromFavorites_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnRemoveItemFromFavorites__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Removes a workshop item from the users favorites list.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The app ID that this item belongs to.\n\x09* @param\x09publishedFileID\x09\x09\x09The workshop item to remove from the users favorites list.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Removes a workshop item from the users favorites list.\n\n@param        appID                                   The app ID that this item belongs to.\n@param        publishedFileID                 The workshop item to remove from the users favorites list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveItemFromFavorites", nullptr, nullptr, sizeof(UGC_eventRemoveItemFromFavorites_Parms), Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveItemFromFavorites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_RemoveItemFromFavorites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics
	{
		struct UGC_eventRemoveItemKeyValueTags_Parms
		{
			FUGCUpdateHandle handle;
			FString key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventRemoveItemKeyValueTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventRemoveItemKeyValueTags_Parms), &Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemKeyValueTags_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemKeyValueTags_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Removes an existing key value tag from an item.\n\x09*\n\x09* You can only call this up to 100 times per item update. If you need remove more tags than that you'll need to make subsequent item updates.\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09The workshop item update handle to customize.\n\x09* @param\x09key\x09\x09\x09The key to remove from the item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Removes an existing key value tag from an item.\n\nYou can only call this up to 100 times per item update. If you need remove more tags than that you'll need to make subsequent item updates.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle          The workshop item update handle to customize.\n@param        key                     The key to remove from the item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveItemKeyValueTags", nullptr, nullptr, sizeof(UGC_eventRemoveItemKeyValueTags_Parms), Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics
	{
		struct UGC_eventRemoveItemPreview_Parms
		{
			FUGCUpdateHandle handle;
			int32 index;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventRemoveItemPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventRemoveItemPreview_Parms), &Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemPreview_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventRemoveItemPreview_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* RemoveItemPreview\n\x09*\n\x09* @param\x09handle\x09\x09The workshop item update handle to customize.\n\x09* @param\x09index\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "RemoveItemPreview\n\n@param        handle          The workshop item update handle to customize.\n@param        index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "RemoveItemPreview", nullptr, nullptr, sizeof(UGC_eventRemoveItemPreview_Parms), Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_RemoveItemPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_RemoveItemPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics
	{
		struct UGC_eventSendQueryUGCRequest_Parms
		{
			FScriptDelegate callback;
			FUGCQueryHandle handle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSendQueryUGCRequest_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSendQueryUGCRequest_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnSendQueryUGCRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Send a UGC query to Steam.\n\x09*\n\x09* This must be called with a handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should use one or more of the following APIs to customize your query:\n\x09* AddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage, SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag\n\x09*\n\x09* @param\x09handle\x09\x09The UGC query request handle to send.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Send a UGC query to Steam.\n\nThis must be called with a handle obtained from CreateQueryUserUGCRequest, CreateQueryAllUGCRequest, or CreateQueryUGCDetailsRequest to actually send the request to Steam. Before calling this you should use one or more of the following APIs to customize your query:\nAddRequiredTag, AddExcludedTag, SetReturnOnlyIDs, SetReturnKeyValueTags, SetReturnLongDescription, SetReturnMetadata, SetReturnChildren, SetReturnAdditionalPreviews, SetReturnTotalOnly, SetLanguage, SetAllowCachedResponse, SetCloudFileNameFilter, SetMatchAnyTag, SetSearchText, SetRankedByTrendDays, AddRequiredKeyValueTag\n\n@param        handle          The UGC query request handle to send." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SendQueryUGCRequest", nullptr, nullptr, sizeof(UGC_eventSendQueryUGCRequest_Parms), Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SendQueryUGCRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SendQueryUGCRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics
	{
		struct UGC_eventSetAllowCachedResponse_Parms
		{
			FUGCQueryHandle handle;
			int32 maxAgeSeconds;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxAgeSeconds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetAllowCachedResponse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetAllowCachedResponse_Parms), &Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_maxAgeSeconds = { "maxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetAllowCachedResponse_Parms, maxAgeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetAllowCachedResponse_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_maxAgeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether results will be returned from the cache for the specific period of time on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09maxAgeSeconds\x09\x09The maximum amount of time that an item can be returned without a cache invalidation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets whether results will be returned from the cache for the specific period of time on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                          The UGC query handle to customize.\n@param        maxAgeSeconds           The maximum amount of time that an item can be returned without a cache invalidation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetAllowCachedResponse", nullptr, nullptr, sizeof(UGC_eventSetAllowCachedResponse_Parms), Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetAllowCachedResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetAllowCachedResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics
	{
		struct UGC_eventSetAllowLegacyUpload_Parms
		{
			FUGCUpdateHandle handle;
			bool bAllowLegacyUpload;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAllowLegacyUpload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowLegacyUpload;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetAllowLegacyUpload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetAllowLegacyUpload_Parms), &Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload_SetBit(void* Obj)
	{
		((UGC_eventSetAllowLegacyUpload_Parms*)Obj)->bAllowLegacyUpload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload = { "bAllowLegacyUpload", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetAllowLegacyUpload_Parms), &Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetAllowLegacyUpload_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_bAllowLegacyUpload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Use legacy upload for a single small file (SDK 1.43+ Only)\n\x09*\n\x09* The parameter to SetItemContent() should either be a directory with one file or the full path to the file.  The file must also be less than 10MB in size.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09""bAllowLegacyUpload\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Use legacy upload for a single small file (SDK 1.43+ Only)\n\nThe parameter to SetItemContent() should either be a directory with one file or the full path to the file.  The file must also be less than 10MB in size.\n\n@param        handle                          The UGC query handle to customize.\n@param        bAllowLegacyUpload" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetAllowLegacyUpload", nullptr, nullptr, sizeof(UGC_eventSetAllowLegacyUpload_Parms), Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetAllowLegacyUpload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetAllowLegacyUpload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics
	{
		struct UGC_eventSetCloudFileNameFilter_Parms
		{
			FUGCQueryHandle handle;
			FString matchCloudFileName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_matchCloudFileName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetCloudFileNameFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetCloudFileNameFilter_Parms), &Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_matchCloudFileName = { "matchCloudFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetCloudFileNameFilter_Parms, matchCloudFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetCloudFileNameFilter_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_matchCloudFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets to only return items that have a specific filename on a pending UGC Query.\n\x09*\n\x09* NOTE: This can only be used with CreateQueryUserUGCRequest!\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09matchCloudFileName\x09\x09The filename to match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets to only return items that have a specific filename on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryUserUGCRequest!\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                                  The UGC query handle to customize.\n@param        matchCloudFileName              The filename to match." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetCloudFileNameFilter", nullptr, nullptr, sizeof(UGC_eventSetCloudFileNameFilter_Parms), Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetCloudFileNameFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetCloudFileNameFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemContent_Statics
	{
		struct UGC_eventSetItemContent_Parms
		{
			FUGCUpdateHandle handle;
			FString contentFolder;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_contentFolder;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemContent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemContent_Parms), &Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_contentFolder = { "contentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemContent_Parms, contentFolder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemContent_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_contentFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemContent_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets the folder that will be stored as the content for an item.\n\x09*\n\x09* For efficient upload and download, files should not be merged or compressed into single files (e.g. zip files).\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The workshop item update handle to customize.\n\x09* @param\x09""contentFolder\x09The absolute path to a local folder containing the content for the item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets the folder that will be stored as the content for an item.\n\nFor efficient upload and download, files should not be merged or compressed into single files (e.g. zip files).\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle                  The workshop item update handle to customize.\n@param        contentFolder   The absolute path to a local folder containing the content for the item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemContent", nullptr, nullptr, sizeof(UGC_eventSetItemContent_Parms), Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemDescription_Statics
	{
		struct UGC_eventSetItemDescription_Parms
		{
			FUGCUpdateHandle handle;
			FString description;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_description;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemDescription_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemDescription_Parms), &Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemDescription_Parms, description), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemDescription_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemDescription_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets a new description for an item.\n\x09*\n\x09* The description must be limited to the length defined by k_cchPublishedDocumentDescriptionMax.\n\x09* You can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The workshop item update handle to customize.\n\x09* @param\x09""description\x09\x09The new description of the item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets a new description for an item.\n\nThe description must be limited to the length defined by k_cchPublishedDocumentDescriptionMax.\nYou can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle                  The workshop item update handle to customize.\n@param        description             The new description of the item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemDescription", nullptr, nullptr, sizeof(UGC_eventSetItemDescription_Parms), Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemMetadata_Statics
	{
		struct UGC_eventSetItemMetadata_Parms
		{
			FUGCUpdateHandle handle;
			FString metaData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_metaData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemMetadata_Parms), &Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_metaData = { "metaData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemMetadata_Parms, metaData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemMetadata_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_metaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets arbitrary metadata for an item. This metadata can be returned from queries without having to download and install the actual content.\n\x09*\n\x09* The metadata must be limited to the size defined by k_cchDeveloperMetadataMax.\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The workshop item update handle to customize.\n\x09* @param\x09metaData\x09\x09The new metadata for this item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets arbitrary metadata for an item. This metadata can be returned from queries without having to download and install the actual content.\n\nThe metadata must be limited to the size defined by k_cchDeveloperMetadataMax.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle                  The workshop item update handle to customize.\n@param        metaData                The new metadata for this item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemMetadata", nullptr, nullptr, sizeof(UGC_eventSetItemMetadata_Parms), Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemPreview_Statics
	{
		struct UGC_eventSetItemPreview_Parms
		{
			FUGCUpdateHandle handle;
			FString previewFile;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_previewFile;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemPreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemPreview_Parms), &Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_previewFile = { "previewFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemPreview_Parms, previewFile), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemPreview_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_previewFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemPreview_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemPreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets the primary preview image for the item.\n\x09*\n\x09* The format should be one that both the web and the application (if necessary) can render. Suggested formats include JPG, PNG and GIF.\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The workshop item update handle to customize.\n\x09* @param\x09previewFile\x09\x09The absolute path to a local preview image file for the item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets the primary preview image for the item.\n\nThe format should be one that both the web and the application (if necessary) can render. Suggested formats include JPG, PNG and GIF.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle                  The workshop item update handle to customize.\n@param        previewFile             The absolute path to a local preview image file for the item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemPreview", nullptr, nullptr, sizeof(UGC_eventSetItemPreview_Parms), Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemTags_Statics
	{
		struct UGC_eventSetItemTags_Parms
		{
			FUGCUpdateHandle handle;
			TArray<FString> tags;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tags_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemTags_Parms), &Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_tags = { "tags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemTags_Parms, tags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_tags_Inner = { "tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemTags_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTags_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets arbitrary developer specified tags on an item.\n\x09*\n\x09* Each tag must be limited to 255 characters. Tag names can only include printable characters, excluding ','. For reference on what characters are allowed, refer to http://en.cppreference.com/w/c/string/byte/isprint\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09The workshop item update handle to customize.\n\x09* @param\x09tags\x09\x09The list of tags to set on this item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets arbitrary developer specified tags on an item.\n\nEach tag must be limited to 255 characters. Tag names can only include printable characters, excluding ','. For reference on what characters are allowed, refer to http://en.cppreference.com/w/c/string/byte/isprint\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle          The workshop item update handle to customize.\n@param        tags            The list of tags to set on this item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemTags", nullptr, nullptr, sizeof(UGC_eventSetItemTags_Parms), Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemTitle_Statics
	{
		struct UGC_eventSetItemTitle_Parms
		{
			FUGCUpdateHandle handle;
			FString title;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_title;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemTitle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemTitle_Parms), &Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemTitle_Parms, title), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemTitle_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemTitle_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets a new title for an item.\n\x09*\n\x09* The title must be limited to the size defined by k_cchPublishedDocumentTitleMax.\n\x09* You can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09The workshop item update handle to customize.\n\x09* @param\x09title\x09\x09The new title of the item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets a new title for an item.\n\nThe title must be limited to the size defined by k_cchPublishedDocumentTitleMax.\nYou can set what language this is for by using SetItemUpdateLanguage, if no language is set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle          The workshop item update handle to customize.\n@param        title           The new title of the item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemTitle", nullptr, nullptr, sizeof(UGC_eventSetItemTitle_Parms), Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics
	{
		struct UGC_eventSetItemUpdateLanguage_Parms
		{
			FUGCUpdateHandle handle;
			FString language;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemUpdateLanguage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemUpdateLanguage_Parms), &Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemUpdateLanguage_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemUpdateLanguage_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets the language of the title and description that will be set in this item update.\n\x09*\n\x09* This must be in the format of the API language code.\n\x09* If this is not set then \"english\" is assumed.\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The workshop item update handle to customize.\n\x09* @param\x09language\x09\x09The language of the title and description that will be set in this update.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets the language of the title and description that will be set in this item update.\n\nThis must be in the format of the API language code.\nIf this is not set then \"english\" is assumed.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle                  The workshop item update handle to customize.\n@param        language                The language of the title and description that will be set in this update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemUpdateLanguage", nullptr, nullptr, sizeof(UGC_eventSetItemUpdateLanguage_Parms), Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemUpdateLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemUpdateLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetItemVisibility_Statics
	{
		struct UGC_eventSetItemVisibility_Parms
		{
			FUGCUpdateHandle handle;
			ESteamRemoteStoragePublishedFileVisibility visibility;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_visibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_visibility_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetItemVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetItemVisibility_Parms), &Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_visibility = { "visibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemVisibility_Parms, visibility), Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePublishedFileVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetItemVisibility_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_visibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_visibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets the visibility of an item.\n\x09*\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The workshop item update handle to customize.\n\x09* @param\x09visibility\x09\x09The visibility to set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets the visibility of an item.\n\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle                  The workshop item update handle to customize.\n@param        visibility              The visibility to set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetItemVisibility", nullptr, nullptr, sizeof(UGC_eventSetItemVisibility_Parms), Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetItemVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetItemVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetLanguage_Statics
	{
		struct UGC_eventSetLanguage_Parms
		{
			FUGCQueryHandle handle;
			FString language;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_language;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetLanguage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetLanguage_Parms), &Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetLanguage_Parms, language), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetLanguage_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetLanguage_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets the language to return the title and description in for the items on a pending UGC Query.\n\x09*\n\x09* This must be in the format of the API Language code.\n\x09* If this is not set then \"english\" is assumed.\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09language\x09\x09The language to return.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets the language to return the title and description in for the items on a pending UGC Query.\n\nThis must be in the format of the API Language code.\nIf this is not set then \"english\" is assumed.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                  The UGC query handle to customize.\n@param        language                The language to return." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetLanguage", nullptr, nullptr, sizeof(UGC_eventSetLanguage_Parms), Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics
	{
		struct UGC_eventSetMatchAnyTag_Parms
		{
			FUGCQueryHandle handle;
			bool bMatchAnyTag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bMatchAnyTag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMatchAnyTag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetMatchAnyTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit(void* Obj)
	{
		((UGC_eventSetMatchAnyTag_Parms*)Obj)->bMatchAnyTag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag = { "bMatchAnyTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetMatchAnyTag_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether workshop items will be returned if they have one or more matching tag, or if all tags need to match on a pending UGC Query.\n\x09*\n\x09* NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09""bMatchAnyTag\x09Should the item just need to have one required tag (true), or all of them? (false)\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets whether workshop items will be returned if they have one or more matching tag, or if all tags need to match on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                  The UGC query handle to customize.\n@param        bMatchAnyTag    Should the item just need to have one required tag (true), or all of them? (false)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetMatchAnyTag", nullptr, nullptr, sizeof(UGC_eventSetMatchAnyTag_Parms), Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetMatchAnyTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetMatchAnyTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics
	{
		struct UGC_eventSetRankedByTrendDays_Parms
		{
			FUGCQueryHandle handle;
			int32 days;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_days;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetRankedByTrendDays_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetRankedByTrendDays_Parms), &Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_days = { "days", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetRankedByTrendDays_Parms, days), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetRankedByTrendDays_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_days,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether the order of the results will be updated based on the rank of items over a number of days on a pending UGC Query.\n\x09*\n\x09* NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09handle\x09\x09The UGC query handle to customize.\n\x09* @param\x09""days\x09\x09Sets the number of days to rank items over. Valid values are 1-365 inclusive.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets whether the order of the results will be updated based on the rank of items over a number of days on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle          The UGC query handle to customize.\n@param        days            Sets the number of days to rank items over. Valid values are 1-365 inclusive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetRankedByTrendDays", nullptr, nullptr, sizeof(UGC_eventSetRankedByTrendDays_Parms), Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetRankedByTrendDays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetRankedByTrendDays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics
	{
		struct UGC_eventSetReturnAdditionalPreviews_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnAdditionalPreviews;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bReturnAdditionalPreviews_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnAdditionalPreviews;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnAdditionalPreviews_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit(void* Obj)
	{
		((UGC_eventSetReturnAdditionalPreviews_Parms*)Obj)->bReturnAdditionalPreviews = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews = { "bReturnAdditionalPreviews", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnAdditionalPreviews_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to return any additional images/videos attached to the items on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09*\x09\n\x09* @param\x09handle\x09\x09\x09\x09\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09""bReturnAdditionalPreviews\x09\x09Return the additional previews for the items?\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets whether to return any additional images/videos attached to the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                                                  The UGC query handle to customize.\n@param        bReturnAdditionalPreviews               Return the additional previews for the items?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnAdditionalPreviews", nullptr, nullptr, sizeof(UGC_eventSetReturnAdditionalPreviews_Parms), Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnChildren_Statics
	{
		struct UGC_eventSetReturnChildren_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnChildren;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bReturnChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnChildren;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnChildren_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnChildren_Parms), &Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit(void* Obj)
	{
		((UGC_eventSetReturnChildren_Parms*)Obj)->bReturnChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren = { "bReturnChildren", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnChildren_Parms), &Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnChildren_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_bReturnChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to return the IDs of the child items of the items on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09* \n\x09* @param\x09handle\x09\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09""bReturnChildren\x09\x09Return the IDs of children of the items?\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets whether to return the IDs of the child items of the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                          The UGC query handle to customize.\n@param        bReturnChildren         Return the IDs of children of the items?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnChildren", nullptr, nullptr, sizeof(UGC_eventSetReturnChildren_Parms), Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics
	{
		struct UGC_eventSetReturnKeyValueTags_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnKeyValueTags;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bReturnKeyValueTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnKeyValueTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnKeyValueTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit(void* Obj)
	{
		((UGC_eventSetReturnKeyValueTags_Parms*)Obj)->bReturnKeyValueTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags = { "bReturnKeyValueTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnKeyValueTags_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to return any key-value tags for the items on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09* \n\x09* @param\x09handle\x09\x09\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09""bReturnKeyValueTags\x09\x09Return any key-value tags for the items?\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets whether to return any key-value tags for the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                                  The UGC query handle to customize.\n@param        bReturnKeyValueTags             Return any key-value tags for the items?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnKeyValueTags", nullptr, nullptr, sizeof(UGC_eventSetReturnKeyValueTags_Parms), Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnKeyValueTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnKeyValueTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics
	{
		struct UGC_eventSetReturnLongDescription_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnLongDescription;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bReturnLongDescription_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnLongDescription;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnLongDescription_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit(void* Obj)
	{
		((UGC_eventSetReturnLongDescription_Parms*)Obj)->bReturnLongDescription = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription = { "bReturnLongDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnLongDescription_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to return the full description for the items on a pending UGC Query.\n\x09*\n\x09* If you don't set this then you only receive the summary which is the description truncated at 255 bytes.\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09""bReturnLongDescription\x09\x09Return the long description for the items?\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets whether to return the full description for the items on a pending UGC Query.\n\nIf you don't set this then you only receive the summary which is the description truncated at 255 bytes.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                                          The UGC query handle to customize.\n@param        bReturnLongDescription          Return the long description for the items?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnLongDescription", nullptr, nullptr, sizeof(UGC_eventSetReturnLongDescription_Parms), Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnLongDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnLongDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics
	{
		struct UGC_eventSetReturnMetadata_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnMetadata;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bReturnMetadata_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnMetadata;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit(void* Obj)
	{
		((UGC_eventSetReturnMetadata_Parms*)Obj)->bReturnMetadata = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata = { "bReturnMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnMetadata_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_bReturnMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to return the developer specified metadata for the items on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09""bReturnMetadata\x09\x09Return the metadata for the items? \n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets whether to return the developer specified metadata for the items on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                          The UGC query handle to customize.\n@param        bReturnMetadata         Return the metadata for the items?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnMetadata", nullptr, nullptr, sizeof(UGC_eventSetReturnMetadata_Parms), Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics
	{
		struct UGC_eventSetReturnOnlyIDs_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnOnlyIDs;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bReturnOnlyIDs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnOnlyIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnOnlyIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit(void* Obj)
	{
		((UGC_eventSetReturnOnlyIDs_Parms*)Obj)->bReturnOnlyIDs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs = { "bReturnOnlyIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnOnlyIDs_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/** \n\x09* Sets whether to only return IDs instead of all the details on a pending UGC Query.\n\x09*\n\x09* This is useful for when you don't need all the information (e.g. you just want to get the IDs of the items a user has in their favorites list.)\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09""bReturnOnlyIDs\x09\x09Return only the IDs of items?\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets whether to only return IDs instead of all the details on a pending UGC Query.\n\nThis is useful for when you don't need all the information (e.g. you just want to get the IDs of the items a user has in their favorites list.)\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                          The UGC query handle to customize.\n@param        bReturnOnlyIDs          Return only the IDs of items?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnOnlyIDs", nullptr, nullptr, sizeof(UGC_eventSetReturnOnlyIDs_Parms), Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnOnlyIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnOnlyIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics
	{
		struct UGC_eventSetReturnPlaytimeStats_Parms
		{
			FUGCQueryHandle handle;
			int32 days;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_days;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnPlaytimeStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnPlaytimeStats_Parms), &Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_days = { "days", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnPlaytimeStats_Parms, days), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnPlaytimeStats_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_days,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to return the the playtime stats on a pending UGC Query.\n\x09*\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09""days\x09\x09\x09The number of days worth of playtime stats to return.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets whether to return the the playtime stats on a pending UGC Query.\n\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                  The UGC query handle to customize.\n@param        days                    The number of days worth of playtime stats to return." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnPlaytimeStats", nullptr, nullptr, sizeof(UGC_eventSetReturnPlaytimeStats_Parms), Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics
	{
		struct UGC_eventSetReturnTotalOnly_Parms
		{
			FUGCQueryHandle handle;
			bool bReturnTotalOnly;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bReturnTotalOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReturnTotalOnly;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetReturnTotalOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit(void* Obj)
	{
		((UGC_eventSetReturnTotalOnly_Parms*)Obj)->bReturnTotalOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly = { "bReturnTotalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetReturnTotalOnly_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets whether to only return the the total number of matching items on a pending UGC Query.\n\x09*\n\x09* The actual items will not be returned when SteamUGCQueryCompleted_t is called.\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09""bReturnTotalOnly\x09Only return the total number of items?\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets whether to only return the the total number of matching items on a pending UGC Query.\n\nThe actual items will not be returned when SteamUGCQueryCompleted_t is called.\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                          The UGC query handle to customize.\n@param        bReturnTotalOnly        Only return the total number of items?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetReturnTotalOnly", nullptr, nullptr, sizeof(UGC_eventSetReturnTotalOnly_Parms), Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetReturnTotalOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetReturnTotalOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetSearchText_Statics
	{
		struct UGC_eventSetSearchText_Parms
		{
			FUGCQueryHandle handle;
			FString searchText;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_searchText;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventSetSearchText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetSearchText_Parms), &Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_searchText = { "searchText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetSearchText_Parms, searchText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetSearchText_Parms, handle), Z_Construct_UScriptStruct_FUGCQueryHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_searchText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetSearchText_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetSearchText_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Sets a string to that items need to match in either the title or the description on a pending UGC Query.\n\x09*\n\x09* NOTE: This can only be used with CreateQueryAllUGCRequest!\n\x09* NOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\x09* \n\x09* @param\x09handle\x09\x09\x09The UGC query handle to customize.\n\x09* @param\x09searchText\x09\x09The text to be searched for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Sets a string to that items need to match in either the title or the description on a pending UGC Query.\n\nNOTE: This can only be used with CreateQueryAllUGCRequest!\nNOTE: This must be set before you send a UGC Query handle using SendQueryUGCRequest.\n\n@param        handle                  The UGC query handle to customize.\n@param        searchText              The text to be searched for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetSearchText", nullptr, nullptr, sizeof(UGC_eventSetSearchText_Parms), Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetSearchText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetSearchText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetSearchText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SetUserItemVote_Statics
	{
		struct UGC_eventSetUserItemVote_Parms
		{
			FScriptDelegate callback;
			FPublishedFileID publishedFileID;
			bool bVoteUp;
		};
		static void NewProp_bVoteUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVoteUp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit(void* Obj)
	{
		((UGC_eventSetUserItemVote_Parms*)Obj)->bVoteUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp = { "bVoteUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSetUserItemVote_Parms), &Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetUserItemVote_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSetUserItemVote_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnSetUserItemVote__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_bVoteUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Allows the user to rate a workshop item up or down.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The workshop item ID to vote on.\n\x09* @param\x09""bVoteUp\x09\x09\x09\x09Vote up (true) or down (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Allows the user to rate a workshop item up or down.\n\n@param        publishedFileID         The workshop item ID to vote on.\n@param        bVoteUp                         Vote up (true) or down (false)?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SetUserItemVote", nullptr, nullptr, sizeof(UGC_eventSetUserItemVote_Parms), Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SetUserItemVote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SetUserItemVote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_StartItemUpdate_Statics
	{
		struct UGC_eventStartItemUpdate_Parms
		{
			int32 consumerAppID;
			FPublishedFileID publishedFileID;
			FUGCUpdateHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_consumerAppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStartItemUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStartItemUpdate_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_consumerAppID = { "consumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStartItemUpdate_Parms, consumerAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::NewProp_consumerAppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Starts the item update process.\n\x09*\n\x09* This gets you a handle that you can use to modify the item before finally sending off the update to the server with SubmitItemUpdate.\n\x09*\n\x09* @param\x09""consumerAppID\x09\x09The App ID that will be using this item.\n\x09* @param\x09publishedFileID\x09\x09The item to update.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Starts the item update process.\n\nThis gets you a handle that you can use to modify the item before finally sending off the update to the server with SubmitItemUpdate.\n\n@param        consumerAppID           The App ID that will be using this item.\n@param        publishedFileID         The item to update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StartItemUpdate", nullptr, nullptr, sizeof(UGC_eventStartItemUpdate_Parms), Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_StartItemUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_StartItemUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics
	{
		struct UGC_eventStartPlaytimeTracking_Parms
		{
			FScriptDelegate callback;
			TArray<FPublishedFileID> publishedFileID;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStartPlaytimeTracking_Parms, publishedFileID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_publishedFileID_Inner = { "publishedFileID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStartPlaytimeTracking_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnStartPlaytimeTracking__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_publishedFileID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Start tracking playtime on a set of workshop items.\n\x09*\n\x09* When your app shuts down, playtime tracking will automatically stop.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The array of workshop items you want to start tracking. (Maximum of 100 items.)\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Start tracking playtime on a set of workshop items.\n\nWhen your app shuts down, playtime tracking will automatically stop.\n\n@param        publishedFileID         The array of workshop items you want to start tracking. (Maximum of 100 items.)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StartPlaytimeTracking", nullptr, nullptr, sizeof(UGC_eventStartPlaytimeTracking_Parms), Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_StartPlaytimeTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_StartPlaytimeTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics
	{
		struct UGC_eventStopPlaytimeTracking_Parms
		{
			FScriptDelegate callback;
			TArray<FPublishedFileID> publishedFileIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_publishedFileIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_publishedFileIDs = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStopPlaytimeTracking_Parms, publishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_publishedFileIDs_Inner = { "publishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStopPlaytimeTracking_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTracking__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_publishedFileIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_publishedFileIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Stop tracking playtime on a set of workshop items.\n\x09*\n\x09* When your app shuts down, playtime tracking will automatically stop.\n\x09*\n\x09* @param\x09publishedFileIDs\x09The array of workshop items you want to stop tracking. (Maximum of 100 items.)\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Stop tracking playtime on a set of workshop items.\n\nWhen your app shuts down, playtime tracking will automatically stop.\n\n@param        publishedFileIDs        The array of workshop items you want to stop tracking. (Maximum of 100 items.)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StopPlaytimeTracking", nullptr, nullptr, sizeof(UGC_eventStopPlaytimeTracking_Parms), Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_StopPlaytimeTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_StopPlaytimeTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics
	{
		struct UGC_eventStopPlaytimeTrackingForAllItems_Parms
		{
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventStopPlaytimeTrackingForAllItems_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnStopPlaytimeTrackingForAllItems__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Stop tracking playtime of all workshop items.\n\x09*\n\x09* When your app shuts down, playtime tracking will automatically stop.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Stop tracking playtime of all workshop items.\n\nWhen your app shuts down, playtime tracking will automatically stop." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "StopPlaytimeTrackingForAllItems", nullptr, nullptr, sizeof(UGC_eventStopPlaytimeTrackingForAllItems_Parms), Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics
	{
		struct UGC_eventSubmitItemUpdate_Parms
		{
			FScriptDelegate callback;
			FUGCUpdateHandle handle;
			FString changeNote;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_changeNote;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_changeNote = { "changeNote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSubmitItemUpdate_Parms, changeNote), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSubmitItemUpdate_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSubmitItemUpdate_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnSubmitItemUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_changeNote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Uploads the changes made to an item to the Steam Workshop.\n\x09*\n\x09* You can track the progress of an item update with GetItemUpdateProgress.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The update handle to submit.\n\x09* @param\x09""changeNote\x09\x09""A brief description of the changes made. (Optional, set to NULL for no change note)\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Uploads the changes made to an item to the Steam Workshop.\n\nYou can track the progress of an item update with GetItemUpdateProgress.\n\n@param        handle                  The update handle to submit.\n@param        changeNote              A brief description of the changes made. (Optional, set to NULL for no change note)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SubmitItemUpdate", nullptr, nullptr, sizeof(UGC_eventSubmitItemUpdate_Parms), Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SubmitItemUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SubmitItemUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SubscribeItem_Statics
	{
		struct UGC_eventSubscribeItem_Parms
		{
			FScriptDelegate callback;
			FPublishedFileID publishedFileID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSubscribeItem_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventSubscribeItem_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnSubscribeItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SubscribeItem_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SubscribeItem_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Subscribe to a workshop item. It will be downloaded and installed as soon as possible.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The workshop item to subscribe to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Subscribe to a workshop item. It will be downloaded and installed as soon as possible.\n\n@param        publishedFileID         The workshop item to subscribe to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SubscribeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SubscribeItem", nullptr, nullptr, sizeof(UGC_eventSubscribeItem_Parms), Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SubscribeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SubscribeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SubscribeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_SuspendDownloads_Statics
	{
		struct UGC_eventSuspendDownloads_Parms
		{
			bool bSuspend;
		};
		static void NewProp_bSuspend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuspend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend_SetBit(void* Obj)
	{
		((UGC_eventSuspendDownloads_Parms*)Obj)->bSuspend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend = { "bSuspend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventSuspendDownloads_Parms), &Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::NewProp_bSuspend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Suspends and resumes all workshop downloads.\n\x09*\n\x09* If you call this with bSuspend set to true then downloads will be suspended until you resume them by setting bSuspend to false or when the game ends.\n\x09*\n\x09* @param\x09""bSuspend\x09Suspend (true) or Resume (false) workshop downloads?\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Suspends and resumes all workshop downloads.\n\nIf you call this with bSuspend set to true then downloads will be suspended until you resume them by setting bSuspend to false or when the game ends.\n\n@param        bSuspend        Suspend (true) or Resume (false) workshop downloads?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "SuspendDownloads", nullptr, nullptr, sizeof(UGC_eventSuspendDownloads_Parms), Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_SuspendDownloads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_SuspendDownloads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics
	{
		struct UGC_eventUnsubscribeItem_Parms
		{
			FScriptDelegate callback;
			FPublishedFileID publishedFileID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUnsubscribeItem_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUnsubscribeItem_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnUnsubscribeItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Unsubscribe from a workshop item. This will result in the item being removed after the game quits.\n\x09*\n\x09* @param\x09publishedFileID\x09\x09The workshop item to unsubscribe from.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Unsubscribe from a workshop item. This will result in the item being removed after the game quits.\n\n@param        publishedFileID         The workshop item to unsubscribe from." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "UnsubscribeItem", nullptr, nullptr, sizeof(UGC_eventUnsubscribeItem_Parms), Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_UnsubscribeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_UnsubscribeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics
	{
		struct UGC_eventUpdateItemPreviewFile_Parms
		{
			FUGCUpdateHandle handle;
			int32 index;
			FString previewFile;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_previewFile;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventUpdateItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventUpdateItemPreviewFile_Parms), &Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_previewFile = { "previewFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewFile_Parms, previewFile), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewFile_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewFile_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_previewFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Updates an existing additional preview file for the item.\n\x09*\n\x09* If the preview type is an image then the format should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The workshop item update handle to customize.\n\x09* @param\x09index\x09\x09\x09The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n\x09* @param\x09previewFile\x09\x09""Absolute path to the local image.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Updates an existing additional preview file for the item.\n\nIf the preview type is an image then the format should be one that both the web and the application (if necessary) can render, and must be under 1MB. Suggested formats include JPG, PNG and GIF.\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle                  The workshop item update handle to customize.\n@param        index                   The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n@param        previewFile             Absolute path to the local image." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "UpdateItemPreviewFile", nullptr, nullptr, sizeof(UGC_eventUpdateItemPreviewFile_Parms), Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_UpdateItemPreviewFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_UpdateItemPreviewFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics
	{
		struct UGC_eventUpdateItemPreviewVideo_Parms
		{
			FUGCUpdateHandle handle;
			int32 index;
			FString previewVideo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_previewVideo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGC_eventUpdateItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGC_eventUpdateItemPreviewVideo_Parms), &Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_previewVideo = { "previewVideo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewVideo_Parms, previewVideo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewVideo_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGC_eventUpdateItemPreviewVideo_Parms, handle), Z_Construct_UScriptStruct_FUGCUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_previewVideo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UGC" },
		{ "Comment", "/**\n\x09* Updates an additional video preview from YouTube for the item.\n\x09*\n\x09* NOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The workshop item update handle to customize.\n\x09* @param\x09index\x09\x09\x09\x09The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n\x09* @param\x09previewVideo\x09\x09The YouTube video to add. (e.g. \"jHgZh4GV9G0\")\n\x09*/" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
		{ "ToolTip", "Updates an additional video preview from YouTube for the item.\n\nNOTE: This must be set before you submit the UGC update handle using SubmitItemUpdate.\n\n@param        handle                          The workshop item update handle to customize.\n@param        index                           The index of the preview file from 0 to GetQueryUGCNumAdditionalPreviews.\n@param        previewVideo            The YouTube video to add. (e.g. \"jHgZh4GV9G0\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGC, nullptr, "UpdateItemPreviewVideo", nullptr, nullptr, sizeof(UGC_eventUpdateItemPreviewVideo_Parms), Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUGC_NoRegister()
	{
		return UUGC::StaticClass();
	}
	struct Z_Construct_UClass_UUGC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadItemResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DownloadItemResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInstalled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ItemInstalled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUGC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGC_AddAppDependency, "AddAppDependency" }, // 2244471351
		{ &Z_Construct_UFunction_UUGC_AddDependency, "AddDependency" }, // 2638629737
		{ &Z_Construct_UFunction_UUGC_AddExcludedTag, "AddExcludedTag" }, // 2999967562
		{ &Z_Construct_UFunction_UUGC_AddItemKeyValueTag, "AddItemKeyValueTag" }, // 2215113610
		{ &Z_Construct_UFunction_UUGC_AddItemPreviewFile, "AddItemPreviewFile" }, // 1043209592
		{ &Z_Construct_UFunction_UUGC_AddItemPreviewVideo, "AddItemPreviewVideo" }, // 4206079514
		{ &Z_Construct_UFunction_UUGC_AddItemToFavorites, "AddItemToFavorites" }, // 3967235983
		{ &Z_Construct_UFunction_UUGC_AddRequiredKeyValueTag, "AddRequiredKeyValueTag" }, // 3874745230
		{ &Z_Construct_UFunction_UUGC_AddRequiredTag, "AddRequiredTag" }, // 4143604481
		{ &Z_Construct_UFunction_UUGC_BInitWorkshopForGameServer, "BInitWorkshopForGameServer" }, // 103544806
		{ &Z_Construct_UFunction_UUGC_CreateItem, "CreateItem" }, // 3957905537
		{ &Z_Construct_UFunction_UUGC_CreateQueryAllUGCRequest, "CreateQueryAllUGCRequest" }, // 3351697422
		{ &Z_Construct_UFunction_UUGC_CreateQueryUGCDetailsRequest, "CreateQueryUGCDetailsRequest" }, // 566769160
		{ &Z_Construct_UFunction_UUGC_CreateQueryUserUGCRequest, "CreateQueryUserUGCRequest" }, // 3424259926
		{ &Z_Construct_UFunction_UUGC_DeleteItem, "DeleteItem" }, // 4226916793
		{ &Z_Construct_UFunction_UUGC_DownloadItem, "DownloadItem" }, // 83047017
		{ &Z_Construct_UFunction_UUGC_GetAppDependencies, "GetAppDependencies" }, // 3248801156
		{ &Z_Construct_UFunction_UUGC_GetItemDownloadInfo, "GetItemDownloadInfo" }, // 889809885
		{ &Z_Construct_UFunction_UUGC_GetItemInstallInfo, "GetItemInstallInfo" }, // 2184592437
		{ &Z_Construct_UFunction_UUGC_GetItemState, "GetItemState" }, // 2145399043
		{ &Z_Construct_UFunction_UUGC_GetItemUpdateProgress, "GetItemUpdateProgress" }, // 155869091
		{ &Z_Construct_UFunction_UUGC_GetNumSubscribedItems, "GetNumSubscribedItems" }, // 1232534680
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCAdditionalPreview, "GetQueryUGCAdditionalPreview" }, // 1459861835
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCChildren, "GetQueryUGCChildren" }, // 3427973989
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCKeyValueTag, "GetQueryUGCKeyValueTag" }, // 3911300771
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCMetadata, "GetQueryUGCMetadata" }, // 1515373484
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCNumAdditionalPreviews, "GetQueryUGCNumAdditionalPreviews" }, // 2663928390
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCNumKeyValueTags, "GetQueryUGCNumKeyValueTags" }, // 181708186
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCPreviewURL, "GetQueryUGCPreviewURL" }, // 3126755729
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCResult, "GetQueryUGCResult" }, // 3101015401
		{ &Z_Construct_UFunction_UUGC_GetQueryUGCStatistic, "GetQueryUGCStatistic" }, // 3962150055
		{ &Z_Construct_UFunction_UUGC_GetSubscribedItems, "GetSubscribedItems" }, // 4036896817
		{ &Z_Construct_UFunction_UUGC_GetUserItemVote, "GetUserItemVote" }, // 122021481
		{ &Z_Construct_UFunction_UUGC_ReleaseQueryUGCRequest, "ReleaseQueryUGCRequest" }, // 1078932632
		{ &Z_Construct_UFunction_UUGC_RemoveAppDependency, "RemoveAppDependency" }, // 1828551325
		{ &Z_Construct_UFunction_UUGC_RemoveDependency, "RemoveDependency" }, // 740962539
		{ &Z_Construct_UFunction_UUGC_RemoveItemFromFavorites, "RemoveItemFromFavorites" }, // 767924700
		{ &Z_Construct_UFunction_UUGC_RemoveItemKeyValueTags, "RemoveItemKeyValueTags" }, // 497843945
		{ &Z_Construct_UFunction_UUGC_RemoveItemPreview, "RemoveItemPreview" }, // 1890668759
		{ &Z_Construct_UFunction_UUGC_SendQueryUGCRequest, "SendQueryUGCRequest" }, // 3058028568
		{ &Z_Construct_UFunction_UUGC_SetAllowCachedResponse, "SetAllowCachedResponse" }, // 2338659169
		{ &Z_Construct_UFunction_UUGC_SetAllowLegacyUpload, "SetAllowLegacyUpload" }, // 2068139880
		{ &Z_Construct_UFunction_UUGC_SetCloudFileNameFilter, "SetCloudFileNameFilter" }, // 794514783
		{ &Z_Construct_UFunction_UUGC_SetItemContent, "SetItemContent" }, // 2714444590
		{ &Z_Construct_UFunction_UUGC_SetItemDescription, "SetItemDescription" }, // 2872805154
		{ &Z_Construct_UFunction_UUGC_SetItemMetadata, "SetItemMetadata" }, // 4263436861
		{ &Z_Construct_UFunction_UUGC_SetItemPreview, "SetItemPreview" }, // 1888307525
		{ &Z_Construct_UFunction_UUGC_SetItemTags, "SetItemTags" }, // 50422333
		{ &Z_Construct_UFunction_UUGC_SetItemTitle, "SetItemTitle" }, // 540645116
		{ &Z_Construct_UFunction_UUGC_SetItemUpdateLanguage, "SetItemUpdateLanguage" }, // 3005279263
		{ &Z_Construct_UFunction_UUGC_SetItemVisibility, "SetItemVisibility" }, // 531449742
		{ &Z_Construct_UFunction_UUGC_SetLanguage, "SetLanguage" }, // 179419443
		{ &Z_Construct_UFunction_UUGC_SetMatchAnyTag, "SetMatchAnyTag" }, // 3335133098
		{ &Z_Construct_UFunction_UUGC_SetRankedByTrendDays, "SetRankedByTrendDays" }, // 2494364351
		{ &Z_Construct_UFunction_UUGC_SetReturnAdditionalPreviews, "SetReturnAdditionalPreviews" }, // 3845243927
		{ &Z_Construct_UFunction_UUGC_SetReturnChildren, "SetReturnChildren" }, // 3235337422
		{ &Z_Construct_UFunction_UUGC_SetReturnKeyValueTags, "SetReturnKeyValueTags" }, // 2933272331
		{ &Z_Construct_UFunction_UUGC_SetReturnLongDescription, "SetReturnLongDescription" }, // 2189306864
		{ &Z_Construct_UFunction_UUGC_SetReturnMetadata, "SetReturnMetadata" }, // 829988567
		{ &Z_Construct_UFunction_UUGC_SetReturnOnlyIDs, "SetReturnOnlyIDs" }, // 1400529
		{ &Z_Construct_UFunction_UUGC_SetReturnPlaytimeStats, "SetReturnPlaytimeStats" }, // 1993345507
		{ &Z_Construct_UFunction_UUGC_SetReturnTotalOnly, "SetReturnTotalOnly" }, // 3304559364
		{ &Z_Construct_UFunction_UUGC_SetSearchText, "SetSearchText" }, // 1277439255
		{ &Z_Construct_UFunction_UUGC_SetUserItemVote, "SetUserItemVote" }, // 4027852524
		{ &Z_Construct_UFunction_UUGC_StartItemUpdate, "StartItemUpdate" }, // 389755391
		{ &Z_Construct_UFunction_UUGC_StartPlaytimeTracking, "StartPlaytimeTracking" }, // 4240028006
		{ &Z_Construct_UFunction_UUGC_StopPlaytimeTracking, "StopPlaytimeTracking" }, // 801620221
		{ &Z_Construct_UFunction_UUGC_StopPlaytimeTrackingForAllItems, "StopPlaytimeTrackingForAllItems" }, // 1215711298
		{ &Z_Construct_UFunction_UUGC_SubmitItemUpdate, "SubmitItemUpdate" }, // 714599050
		{ &Z_Construct_UFunction_UUGC_SubscribeItem, "SubscribeItem" }, // 2016988395
		{ &Z_Construct_UFunction_UUGC_SuspendDownloads, "SuspendDownloads" }, // 1206377012
		{ &Z_Construct_UFunction_UUGC_UnsubscribeItem, "UnsubscribeItem" }, // 3051729505
		{ &Z_Construct_UFunction_UUGC_UpdateItemPreviewFile, "UpdateItemPreviewFile" }, // 3593239176
		{ &Z_Construct_UFunction_UUGC_UpdateItemPreviewVideo, "UpdateItemPreviewVideo" }, // 618452660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UGC/UGC.h" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult_MetaData[] = {
		{ "Category", "SteamCore|UGC|Delegates" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult = { "DownloadItemResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGC, DownloadItemResult), Z_Construct_UDelegateFunction_SteamCore_OnDownloadItemResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled_MetaData[] = {
		{ "Category", "SteamCore|UGC|Delegates" },
		{ "ModuleRelativePath", "Public/UGC/UGC.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled = { "ItemInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGC, ItemInstalled), Z_Construct_UDelegateFunction_SteamCore_OnItemInstalled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_Statics::NewProp_DownloadItemResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGC_Statics::NewProp_ItemInstalled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUGC_Statics::ClassParams = {
		&UUGC::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUGC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUGC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUGC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUGC, 59094257);
	template<> STEAMCORE_API UClass* StaticClass<UUGC>()
	{
		return UUGC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUGC(Z_Construct_UClass_UUGC, &UUGC::StaticClass, TEXT("/Script/SteamCore"), TEXT("UUGC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
