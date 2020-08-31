// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/UserStats/UserStats.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserStats() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UUserStats_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UUserStats();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UUserStats::execUploadLeaderboardScore)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_steamLeaderboard);
		P_GET_ENUM(ESteamLeaderboardUploadScoreMethod,Z_Param_uploadScoreMethod);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_GET_TARRAY(int32,Z_Param_scoreDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UploadLeaderboardScore(FOnUploadLeaderboardScore(Z_Param_Out_callback),Z_Param_steamLeaderboard,ESteamLeaderboardUploadScoreMethod(Z_Param_uploadScoreMethod),Z_Param_score,Z_Param_scoreDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execUpdateAvgRateStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_countThisSession);
		P_GET_PROPERTY(FFloatProperty,Z_Param_sessionLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::UpdateAvgRateStat(Z_Param_name,Z_Param_countThisSession,Z_Param_sessionLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execStoreStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::StoreStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execSetStatFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::SetStatFloat(Z_Param_name,Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execSetStatInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FIntProperty,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::SetStatInt(Z_Param_name,Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execSetAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::SetAchievement(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execResetAllStats)
	{
		P_GET_UBOOL(Z_Param_bAchievementsToo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::ResetAllStats(Z_Param_bAchievementsToo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execRequestUserStats)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestUserStats(FOnRequestUserStats(Z_Param_Out_callback),Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execRequestGlobalStats)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_historyDays);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestGlobalStats(FOnRequestGlobalStats(Z_Param_Out_callback),Z_Param_historyDays);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execRequestGlobalAchievementPercentages)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestGlobalAchievementPercentages(FOnRequestGlobalAchievementPercentages(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execRequestCurrentStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::RequestCurrentStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execIndicateAchievementProgress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FIntProperty,Z_Param_currentProgress);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::IndicateAchievementProgress(Z_Param_name,Z_Param_currentProgress,Z_Param_maxProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetStatFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetStatFloat(Z_Param_name,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetStatInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetStatInt(Z_Param_name,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetUserAchievementAndUnlockTime)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_unlockTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetUserAchievementAndUnlockTime(Z_Param_steamIDUser,Z_Param_name,Z_Param_Out_bAchieved,Z_Param_Out_unlockTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetUserAchievement)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetUserAchievement(Z_Param_steamIDUser,Z_Param_name,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetUserStatFloat)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetUserStatFloat(Z_Param_steamIDUser,Z_Param_name,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetUserStatInteger)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetUserStatInteger(Z_Param_steamIDUser,Z_Param_name,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetNumberOfCurrentPlayers)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNumberOfCurrentPlayers(FOnGetNumberOfCurrentPlayers(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetNumAchievements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUserStats::GetNumAchievements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetNextMostAchievedAchievementInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_iteratorPrevious);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_percent);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUserStats::GetNextMostAchievedAchievementInfo(Z_Param_iteratorPrevious,Z_Param_Out_name,Z_Param_Out_percent,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetMostAchievedAchievementInfo)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_percent);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUserStats::GetMostAchievedAchievementInfo(Z_Param_Out_name,Z_Param_Out_percent,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetLeaderboardSortMethod)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_steamLeaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamLeaderboardSortMethod*)Z_Param__Result=UUserStats::GetLeaderboardSortMethod(Z_Param_steamLeaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetLeaderboardName)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_steamLeaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUserStats::GetLeaderboardName(Z_Param_steamLeaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetLeaderboardEntryCount)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_steamLeaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUserStats::GetLeaderboardEntryCount(Z_Param_steamLeaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetLeaderboardDisplayType)
	{
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_steamLeaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamLeaderboardDisplayType*)Z_Param__Result=UUserStats::GetLeaderboardDisplayType(Z_Param_steamLeaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetGlobalStatHistoryFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_statName);
		P_GET_PROPERTY(FIntProperty,Z_Param_historyDays);
		P_GET_TARRAY_REF(float,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUserStats::GetGlobalStatHistoryFloat(Z_Param_statName,Z_Param_historyDays,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetGlobalStatHistoryInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_statName);
		P_GET_PROPERTY(FIntProperty,Z_Param_historyDays);
		P_GET_TARRAY_REF(int32,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUserStats::GetGlobalStatHistoryInt(Z_Param_statName,Z_Param_historyDays,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetGlobalStatFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_statName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetGlobalStatFloat(Z_Param_statName,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetGlobalStatInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_statName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetGlobalStatInt(Z_Param_statName,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetDownloadedLeaderboardEntry)
	{
		P_GET_STRUCT(FSteamLeaderboardEntries,Z_Param_leaderboardEntries);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_STRUCT_REF(FSteamLeaderboardEntry,Z_Param_Out_leaderboardEntry);
		P_GET_TARRAY(int32,Z_Param_details);
		P_GET_TARRAY_REF(int32,Z_Param_Out_outDetails);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetDownloadedLeaderboardEntry(Z_Param_leaderboardEntries,Z_Param_index,Z_Param_Out_leaderboardEntry,Z_Param_details,Z_Param_Out_outDetails);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievementName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_achievement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUserStats::GetAchievementName(Z_Param_achievement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievementIcon)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UUserStats::GetAchievementIcon(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievementDisplayAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUserStats::GetAchievementDisplayAttribute(Z_Param_name,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievementAndUnlockTime)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_unlockTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetAchievementAndUnlockTime(Z_Param_name,Z_Param_Out_bAchieved,Z_Param_Out_unlockTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievementAchievedPercent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_percent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetAchievementAchievedPercent(Z_Param_name,Z_Param_Out_percent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execGetAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::GetAchievement(Z_Param_name,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execFindOrCreateLeaderboard)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardName);
		P_GET_ENUM(ESteamLeaderboardSortMethod,Z_Param_sortMethod);
		P_GET_ENUM(ESteamLeaderboardDisplayType,Z_Param_displayType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindOrCreateLeaderboard(FOnFindOrCreateLeaderboard(Z_Param_Out_callback),Z_Param_leaderboardName,ESteamLeaderboardSortMethod(Z_Param_sortMethod),ESteamLeaderboardDisplayType(Z_Param_displayType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execFindLeaderboard)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_leaderboardName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindLeaderboard(FOnFindLeaderboard(Z_Param_Out_callback),Z_Param_leaderboardName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execDownloadLeaderboardEntriesForUsers)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_steamLeaderboard);
		P_GET_TARRAY(FSteamID,Z_Param_users);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadLeaderboardEntriesForUsers(FOnDownloadLeaderboardEntriesForUsers(Z_Param_Out_callback),Z_Param_steamLeaderboard,Z_Param_users);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execDownloadLeaderboardEntries)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_steamLeaderboard);
		P_GET_ENUM(ESteamLeaderboardDataRequest,Z_Param_dataRequest);
		P_GET_PROPERTY(FIntProperty,Z_Param_rangeStart);
		P_GET_PROPERTY(FIntProperty,Z_Param_rangeEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadLeaderboardEntries(FOnDownloadLeaderboardEntries(Z_Param_Out_callback),Z_Param_steamLeaderboard,ESteamLeaderboardDataRequest(Z_Param_dataRequest),Z_Param_rangeStart,Z_Param_rangeEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execClearAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUserStats::ClearAchievement(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserStats::execAttachLeaderboardUGC)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamLeaderboard,Z_Param_steamLeaderboard);
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachLeaderboardUGC(FOnAttachLeaderboardUGC(Z_Param_Out_callback),Z_Param_steamLeaderboard,Z_Param_handle);
		P_NATIVE_END;
	}
	void UUserStats::StaticRegisterNativesUUserStats()
	{
		UClass* Class = UUserStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachLeaderboardUGC", &UUserStats::execAttachLeaderboardUGC },
			{ "ClearAchievement", &UUserStats::execClearAchievement },
			{ "DownloadLeaderboardEntries", &UUserStats::execDownloadLeaderboardEntries },
			{ "DownloadLeaderboardEntriesForUsers", &UUserStats::execDownloadLeaderboardEntriesForUsers },
			{ "FindLeaderboard", &UUserStats::execFindLeaderboard },
			{ "FindOrCreateLeaderboard", &UUserStats::execFindOrCreateLeaderboard },
			{ "GetAchievement", &UUserStats::execGetAchievement },
			{ "GetAchievementAchievedPercent", &UUserStats::execGetAchievementAchievedPercent },
			{ "GetAchievementAndUnlockTime", &UUserStats::execGetAchievementAndUnlockTime },
			{ "GetAchievementDisplayAttribute", &UUserStats::execGetAchievementDisplayAttribute },
			{ "GetAchievementIcon", &UUserStats::execGetAchievementIcon },
			{ "GetAchievementName", &UUserStats::execGetAchievementName },
			{ "GetDownloadedLeaderboardEntry", &UUserStats::execGetDownloadedLeaderboardEntry },
			{ "GetGlobalStatFloat", &UUserStats::execGetGlobalStatFloat },
			{ "GetGlobalStatHistoryFloat", &UUserStats::execGetGlobalStatHistoryFloat },
			{ "GetGlobalStatHistoryInt", &UUserStats::execGetGlobalStatHistoryInt },
			{ "GetGlobalStatInt", &UUserStats::execGetGlobalStatInt },
			{ "GetLeaderboardDisplayType", &UUserStats::execGetLeaderboardDisplayType },
			{ "GetLeaderboardEntryCount", &UUserStats::execGetLeaderboardEntryCount },
			{ "GetLeaderboardName", &UUserStats::execGetLeaderboardName },
			{ "GetLeaderboardSortMethod", &UUserStats::execGetLeaderboardSortMethod },
			{ "GetMostAchievedAchievementInfo", &UUserStats::execGetMostAchievedAchievementInfo },
			{ "GetNextMostAchievedAchievementInfo", &UUserStats::execGetNextMostAchievedAchievementInfo },
			{ "GetNumAchievements", &UUserStats::execGetNumAchievements },
			{ "GetNumberOfCurrentPlayers", &UUserStats::execGetNumberOfCurrentPlayers },
			{ "GetStatFloat", &UUserStats::execGetStatFloat },
			{ "GetStatInt", &UUserStats::execGetStatInt },
			{ "GetUserAchievement", &UUserStats::execGetUserAchievement },
			{ "GetUserAchievementAndUnlockTime", &UUserStats::execGetUserAchievementAndUnlockTime },
			{ "GetUserStatFloat", &UUserStats::execGetUserStatFloat },
			{ "GetUserStatInteger", &UUserStats::execGetUserStatInteger },
			{ "IndicateAchievementProgress", &UUserStats::execIndicateAchievementProgress },
			{ "RequestCurrentStats", &UUserStats::execRequestCurrentStats },
			{ "RequestGlobalAchievementPercentages", &UUserStats::execRequestGlobalAchievementPercentages },
			{ "RequestGlobalStats", &UUserStats::execRequestGlobalStats },
			{ "RequestUserStats", &UUserStats::execRequestUserStats },
			{ "ResetAllStats", &UUserStats::execResetAllStats },
			{ "SetAchievement", &UUserStats::execSetAchievement },
			{ "SetStatFloat", &UUserStats::execSetStatFloat },
			{ "SetStatInt", &UUserStats::execSetStatInt },
			{ "StoreStats", &UUserStats::execStoreStats },
			{ "UpdateAvgRateStat", &UUserStats::execUpdateAvgRateStat },
			{ "UploadLeaderboardScore", &UUserStats::execUploadLeaderboardScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics
	{
		struct UserStats_eventAttachLeaderboardUGC_Parms
		{
			FScriptDelegate callback;
			FSteamLeaderboard steamLeaderboard;
			FSteamUGCHandle handle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamLeaderboard;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventAttachLeaderboardUGC_Parms, handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_steamLeaderboard = { "steamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventAttachLeaderboardUGC_Parms, steamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventAttachLeaderboardUGC_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_steamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Attaches a piece of user generated content the current user's entry on a leaderboard.\n\x09*\n\x09* This content could be a replay of the user achieving the score or a ghost to race against. The attached handle will be available when the entry is retrieved and can be accessed by other users using GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.\n\x09* Once attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.\n\x09* You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\x09*\n\x09* @param\x09steamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09* @param\x09handle\x09\x09\x09\x09Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Attaches a piece of user generated content the current user's entry on a leaderboard.\n\nThis content could be a replay of the user achieving the score or a ghost to race against. The attached handle will be available when the entry is retrieved and can be accessed by other users using GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.\nOnce attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.\nYou must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\n@param        steamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param        handle                          Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "AttachLeaderboardUGC", nullptr, nullptr, sizeof(UserStats_eventAttachLeaderboardUGC_Parms), Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_ClearAchievement_Statics
	{
		struct UserStats_eventClearAchievement_Parms
		{
			FString name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventClearAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventClearAchievement_Parms), &Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventClearAchievement_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Resets the unlock status of an achievement.\n\x09*\n\x09* This is primarily only ever used for testing.\n\x09* ou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state so it is quite cheap. \n\x09* To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\x09*\n\x09* @param\x09name\x09The 'API Name' of the Achievement to reset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Resets the unlock status of an achievement.\n\nThis is primarily only ever used for testing.\nou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state so it is quite cheap.\nTo send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\n@param        name    The 'API Name' of the Achievement to reset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "ClearAchievement", nullptr, nullptr, sizeof(UserStats_eventClearAchievement_Parms), Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_ClearAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_ClearAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics
	{
		struct UserStats_eventDownloadLeaderboardEntries_Parms
		{
			FScriptDelegate callback;
			FSteamLeaderboard steamLeaderboard;
			ESteamLeaderboardDataRequest dataRequest;
			int32 rangeStart;
			int32 rangeEnd;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rangeEnd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rangeStart;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_dataRequest;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_dataRequest_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamLeaderboard;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_rangeEnd = { "rangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntries_Parms, rangeEnd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_rangeStart = { "rangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntries_Parms, rangeStart), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_dataRequest = { "dataRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntries_Parms, dataRequest), Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_dataRequest_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_steamLeaderboard = { "steamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntries_Parms, steamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntries_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_rangeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_rangeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_dataRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_dataRequest_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_steamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Fetches a series of leaderboard entries for a specified leaderboard.\n\x09*\n\x09* You can ask for more entries than exist, then this will return as many as do exist.\n\x09* If you want to download entries for an arbitrary set of users, such as all of \n\x09* the users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.\n\x09*\n\x09* @param\x09steamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09* @param\x09""dataRequest\x09\x09\x09The type of data request to make.\n\x09* @param\x09rangeStart\x09\x09\x09The index to start downloading entries relative to eLeaderboardDataRequest.\n\x09* @param\x09rangeEnd\x09\x09\x09The last index to retrieve entries for relative to eLeaderboardDataRequest.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Fetches a series of leaderboard entries for a specified leaderboard.\n\nYou can ask for more entries than exist, then this will return as many as do exist.\nIf you want to download entries for an arbitrary set of users, such as all of\nthe users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.\n\n@param        steamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param        dataRequest                     The type of data request to make.\n@param        rangeStart                      The index to start downloading entries relative to eLeaderboardDataRequest.\n@param        rangeEnd                        The last index to retrieve entries for relative to eLeaderboardDataRequest." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "DownloadLeaderboardEntries", nullptr, nullptr, sizeof(UserStats_eventDownloadLeaderboardEntries_Parms), Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics
	{
		struct UserStats_eventDownloadLeaderboardEntriesForUsers_Parms
		{
			FScriptDelegate callback;
			FSteamLeaderboard steamLeaderboard;
			TArray<FSteamID> users;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_users;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_users_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamLeaderboard;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_users = { "users", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntriesForUsers_Parms, users), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_users_Inner = { "users", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_steamLeaderboard = { "steamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntriesForUsers_Parms, steamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventDownloadLeaderboardEntriesForUsers_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_users,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_users_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_steamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Fetches leaderboard entries for an arbitrary set of users on a specified leaderboard.\n\x09*\n\x09* A maximum of 100 users can be downloaded at a time, with only one outstanding call at a time. If a user doesn't have an entry on the specified leaderboard, they won't be included in the result.\n\x09* If you want to download entries based on their ranking or friends of the current user then you should use DownloadLeaderboardEntries.\n\x09* You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\x09*\n\x09* @param\x09steamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09* @param\x09users\x09\x09\x09\x09""An array of Steam IDs to get the leaderboard entries for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Fetches leaderboard entries for an arbitrary set of users on a specified leaderboard.\n\nA maximum of 100 users can be downloaded at a time, with only one outstanding call at a time. If a user doesn't have an entry on the specified leaderboard, they won't be included in the result.\nIf you want to download entries based on their ranking or friends of the current user then you should use DownloadLeaderboardEntries.\nYou must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\n@param        steamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param        users                           An array of Steam IDs to get the leaderboard entries for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "DownloadLeaderboardEntriesForUsers", nullptr, nullptr, sizeof(UserStats_eventDownloadLeaderboardEntriesForUsers_Parms), Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics
	{
		struct UserStats_eventFindLeaderboard_Parms
		{
			FScriptDelegate callback;
			FString leaderboardName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardName;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_leaderboardName = { "leaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventFindLeaderboard_Parms, leaderboardName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventFindLeaderboard_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_leaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets a leaderboard by name.\n\x09*\n\x09* You must call either this or FindOrCreateLeaderboard to obtain the leaderboard handle which is valid for the game session for\n\x09* each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\x09*\n\x09* @param\x09leaderboardName\x09\x09The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets a leaderboard by name.\n\nYou must call either this or FindOrCreateLeaderboard to obtain the leaderboard handle which is valid for the game session for\neach leaderboard you wish to access prior to calling any other Leaderboard functions.\n\n@param        leaderboardName         The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "FindLeaderboard", nullptr, nullptr, sizeof(UserStats_eventFindLeaderboard_Parms), Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_FindLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_FindLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics
	{
		struct UserStats_eventFindOrCreateLeaderboard_Parms
		{
			FScriptDelegate callback;
			FString leaderboardName;
			ESteamLeaderboardSortMethod sortMethod;
			ESteamLeaderboardDisplayType displayType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_displayType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_displayType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sortMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sortMethod_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_leaderboardName;
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_displayType = { "displayType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventFindOrCreateLeaderboard_Parms, displayType), Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_displayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_sortMethod = { "sortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventFindOrCreateLeaderboard_Parms, sortMethod), Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_sortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_leaderboardName = { "leaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventFindOrCreateLeaderboard_Parms, leaderboardName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventFindOrCreateLeaderboard_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_displayType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_displayType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_sortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_sortMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_leaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets a leaderboard by name, it will create it if it's not yet created.\n\x09*\n\x09* You must call either this or FindLeaderboard to obtain the leaderboard handle which is valid for the\n\x09* game session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\x09* Leaderboards created with this function will not automatically show up in the Steam Community.\n\x09* You must manually set the Community Name field in the App Admin panel of the Steamworks website.\n\x09* As such it's generally recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks\n\x09* website and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.\n\x09* You should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone\n\x09* for eLeaderboardDisplayType as this is undefined behavior.\n\x09*\n\x09* @param\x09leaderboardName\x09\x09The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.\n\x09* @param\x09sortMethod\x09\x09\x09The sort order of the new leaderboard if it's created.\n\x09* @param\x09""displayType\x09\x09\x09The display type (used by the Steam Community web site) of the new leaderboard if it's created.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets a leaderboard by name, it will create it if it's not yet created.\n\nYou must call either this or FindLeaderboard to obtain the leaderboard handle which is valid for the\ngame session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\nLeaderboards created with this function will not automatically show up in the Steam Community.\nYou must manually set the Community Name field in the App Admin panel of the Steamworks website.\nAs such it's generally recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks\nwebsite and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.\nYou should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone\nfor eLeaderboardDisplayType as this is undefined behavior.\n\n@param        leaderboardName         The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.\n@param        sortMethod                      The sort order of the new leaderboard if it's created.\n@param        displayType                     The display type (used by the Steam Community web site) of the new leaderboard if it's created." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "FindOrCreateLeaderboard", nullptr, nullptr, sizeof(UserStats_eventFindOrCreateLeaderboard_Parms), Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievement_Statics
	{
		struct UserStats_eventGetAchievement_Parms
		{
			FString name;
			bool bAchieved;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetAchievement_Parms), &Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((UserStats_eventGetAchievement_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetAchievement_Parms), &Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievement_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievement_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the unlock status of the Achievement.\n\x09*\n\x09* The equivalent function for other users is GetUserAchievement.\n\x09*\n\x09* @param\x09name\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09""bAchieved\x09Returns the unlock status of the achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the unlock status of the Achievement.\n\nThe equivalent function for other users is GetUserAchievement.\n\n@param        name            The 'API Name' of the achievement.\n@param        bAchieved       Returns the unlock status of the achievement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievement", nullptr, nullptr, sizeof(UserStats_eventGetAchievement_Parms), Z_Construct_UFunction_UUserStats_GetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics
	{
		struct UserStats_eventGetAchievementAchievedPercent_Parms
		{
			FString name;
			float percent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetAchievementAchievedPercent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetAchievementAchievedPercent_Parms), &Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementAchievedPercent_Parms, percent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementAchievedPercent_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_percent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Returns the percentage of users who have unlocked the specified achievement.\n\x09*\n\x09* You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.\n\x09*\n\x09* @param\x09name\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09percent\x09\x09Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Returns the percentage of users who have unlocked the specified achievement.\n\nYou must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.\n\n@param        name            The 'API Name' of the achievement.\n@param        percent         Variable to return the percentage of people that have unlocked this achievement from 0 to 100." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievementAchievedPercent", nullptr, nullptr, sizeof(UserStats_eventGetAchievementAchievedPercent_Parms), Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics
	{
		struct UserStats_eventGetAchievementAndUnlockTime_Parms
		{
			FString name;
			bool bAchieved;
			int32 unlockTime;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_unlockTime;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetAchievementAndUnlockTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_unlockTime = { "unlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementAndUnlockTime_Parms, unlockTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((UserStats_eventGetAchievementAndUnlockTime_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementAndUnlockTime_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_unlockTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the achievement status, and the time it was unlocked if unlocked.\n\x09*\n\x09* If the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\n\x09* The equivalent function for other users is GetUserAchievementAndUnlockTime.\n\x09*\n\x09* @param\x09name\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09""bAchieved\x09Returns whether the current user has unlocked the achievement.\n\x09* @param\x09unlockTime\x09Returns the time that the unchievement was unlocked; if pbAchieved is true.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the achievement status, and the time it was unlocked if unlocked.\n\nIf the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\nThe equivalent function for other users is GetUserAchievementAndUnlockTime.\n\n@param        name            The 'API Name' of the achievement.\n@param        bAchieved       Returns whether the current user has unlocked the achievement.\n@param        unlockTime      Returns the time that the unchievement was unlocked; if pbAchieved is true." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievementAndUnlockTime", nullptr, nullptr, sizeof(UserStats_eventGetAchievementAndUnlockTime_Parms), Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics
	{
		struct UserStats_eventGetAchievementDisplayAttribute_Parms
		{
			FString name;
			FString key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementDisplayAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementDisplayAttribute_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementDisplayAttribute_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Get general attributes for an achievement. Currently provides: Name, Description, and Hidden status.\n\x09*\n\x09* This receives the value from a dictionary/map keyvalue store, so you must provide one of the following keys.\n\x09*\n\x09* This localization is provided based on the games language if it's set, otherwise it checks if a localization is avilable for the users Steam UI Language. If that fails too, then it falls back to english.\n\x09*\n\x09* @param\x09name\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09key\x09\x09\x09The 'key' to get a value for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Get general attributes for an achievement. Currently provides: Name, Description, and Hidden status.\n\nThis receives the value from a dictionary/map keyvalue store, so you must provide one of the following keys.\n\nThis localization is provided based on the games language if it's set, otherwise it checks if a localization is avilable for the users Steam UI Language. If that fails too, then it falls back to english.\n\n@param        name            The 'API Name' of the achievement.\n@param        key                     The 'key' to get a value for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievementDisplayAttribute", nullptr, nullptr, sizeof(UserStats_eventGetAchievementDisplayAttribute_Parms), Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics
	{
		struct UserStats_eventGetAchievementIcon_Parms
		{
			FString name;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementIcon_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the icon for an achievement.\n\x09*\n\x09* @param\x09name\x09The 'API Name' of the achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the icon for an achievement.\n\n@param        name    The 'API Name' of the achievement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievementIcon", nullptr, nullptr, sizeof(UserStats_eventGetAchievementIcon_Parms), Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievementIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievementIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetAchievementName_Statics
	{
		struct UserStats_eventGetAchievementName_Parms
		{
			int32 achievement;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_achievement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::NewProp_achievement = { "achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetAchievementName_Parms, achievement), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::NewProp_achievement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the 'API name' for an achievement index between 0 and GetNumAchievements.\n\x09*\n\x09* This function must be used in cojunction with GetNumAchievements to loop over the list of achievements.\n\x09* In general games should not need these functions as they should have the list of achievements compiled into them.\n\x09*\n\x09* @param\x09""achievement\x09\x09\x09index of the achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the 'API name' for an achievement index between 0 and GetNumAchievements.\n\nThis function must be used in cojunction with GetNumAchievements to loop over the list of achievements.\nIn general games should not need these functions as they should have the list of achievements compiled into them.\n\n@param        achievement                     index of the achievement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetAchievementName", nullptr, nullptr, sizeof(UserStats_eventGetAchievementName_Parms), Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetAchievementName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetAchievementName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics
	{
		struct UserStats_eventGetDownloadedLeaderboardEntry_Parms
		{
			FSteamLeaderboardEntries leaderboardEntries;
			int32 index;
			FSteamLeaderboardEntry leaderboardEntry;
			TArray<int32> details;
			TArray<int32> outDetails;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outDetails;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outDetails_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_details;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_details_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leaderboardEntry;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leaderboardEntries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetDownloadedLeaderboardEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetDownloadedLeaderboardEntry_Parms), &Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails = { "outDetails", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetDownloadedLeaderboardEntry_Parms, outDetails), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails_Inner = { "outDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_details = { "details", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetDownloadedLeaderboardEntry_Parms, details), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_details_Inner = { "details", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_leaderboardEntry = { "leaderboardEntry", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetDownloadedLeaderboardEntry_Parms, leaderboardEntry), Z_Construct_UScriptStruct_FSteamLeaderboardEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetDownloadedLeaderboardEntry_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_leaderboardEntries = { "leaderboardEntries", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetDownloadedLeaderboardEntry_Parms, leaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_details_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_leaderboardEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_leaderboardEntries,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "details" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Retrieves the data for a single leaderboard entry.\n\x09*\n\x09* You should use a for loop from 0 to LeaderboardScoresDownloaded_t.m_cEntryCount to get all the downloaded entries.\n\x09* Once you've accessed all the entries, the data will be freed, and the SteamLeaderboardEntries_t handle will become invalid.\n\x09* Optionally details may be returned for the entry via the pDetails. If this is NULL then cDetailsMax MUST be 0.\n\x09*\n\x09* @param\x09leaderboardEntries\x09\x09""A leaderboard entries handle obtained from the most recently received LeaderboardScoresDownloaded_t call result.\n\x09* @param\x09index\x09\x09\x09\x09\x09The index of the leaderboard entry to receive, must be between 0 and LeaderboardScoresDownloaded_t.m_cEntryCount.\n\x09* @param\x09leaderboardEntry\x09\x09Variable where the entry will be returned to.\n\x09* @param\x09""details\x09\x09\x09\x09\x09""A preallocated array where the details of this entry get returned into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Retrieves the data for a single leaderboard entry.\n\nYou should use a for loop from 0 to LeaderboardScoresDownloaded_t.m_cEntryCount to get all the downloaded entries.\nOnce you've accessed all the entries, the data will be freed, and the SteamLeaderboardEntries_t handle will become invalid.\nOptionally details may be returned for the entry via the pDetails. If this is NULL then cDetailsMax MUST be 0.\n\n@param        leaderboardEntries              A leaderboard entries handle obtained from the most recently received LeaderboardScoresDownloaded_t call result.\n@param        index                                   The index of the leaderboard entry to receive, must be between 0 and LeaderboardScoresDownloaded_t.m_cEntryCount.\n@param        leaderboardEntry                Variable where the entry will be returned to.\n@param        details                                 A preallocated array where the details of this entry get returned into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetDownloadedLeaderboardEntry", nullptr, nullptr, sizeof(UserStats_eventGetDownloadedLeaderboardEntry_Parms), Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics
	{
		struct UserStats_eventGetGlobalStatFloat_Parms
		{
			FString statName;
			float data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_statName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetGlobalStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetGlobalStatFloat_Parms), &Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatFloat_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_statName = { "statName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatFloat_Parms, statName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::NewProp_statName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the lifetime totals for an aggregated stat.\n\x09*\n\x09* You must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\x09*\n\x09* @param\x09statName\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""data\x09\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the lifetime totals for an aggregated stat.\n\nYou must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\n@param        statName        The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        data            The variable to return the stat value into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetGlobalStatFloat", nullptr, nullptr, sizeof(UserStats_eventGetGlobalStatFloat_Parms), Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetGlobalStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetGlobalStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics
	{
		struct UserStats_eventGetGlobalStatHistoryFloat_Parms
		{
			FString statName;
			int32 historyDays;
			TArray<float> data;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_historyDays;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_statName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryFloat_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_historyDays = { "historyDays", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryFloat_Parms, historyDays), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_statName = { "statName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryFloat_Parms, statName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_historyDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_statName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the daily history for an aggregated stat.\n\x09*\n\x09* pData will be filled with daily values, starting with today.\n\x09* So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\n\x09* You must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\x09*\n\x09* @param\x09statName\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09historyDays\x09\x09The total size in bytes of the pData array.\n\x09* @param\x09""data\x09\x09\x09""Array that the daily history will be returned into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the daily history for an aggregated stat.\n\npData will be filled with daily values, starting with today.\nSo when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\nYou must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\n@param        statName                The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        historyDays             The total size in bytes of the pData array.\n@param        data                    Array that the daily history will be returned into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetGlobalStatHistoryFloat", nullptr, nullptr, sizeof(UserStats_eventGetGlobalStatHistoryFloat_Parms), Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics
	{
		struct UserStats_eventGetGlobalStatHistoryInt_Parms
		{
			FString statName;
			int32 historyDays;
			TArray<int32> data;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_historyDays;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_statName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryInt_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_historyDays = { "historyDays", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryInt_Parms, historyDays), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_statName = { "statName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatHistoryInt_Parms, statName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_historyDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::NewProp_statName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the daily history for an aggregated stat.\n\x09*\n\x09* pData will be filled with daily values, starting with today.\n\x09* So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\n\x09* You must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\x09*\n\x09* @param\x09statName\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09historyDays\x09\x09The total size in bytes of the pData array.\n\x09* @param\x09""data\x09\x09\x09""Array that the daily history will be returned into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the daily history for an aggregated stat.\n\npData will be filled with daily values, starting with today.\nSo when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\nYou must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\n@param        statName                The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        historyDays             The total size in bytes of the pData array.\n@param        data                    Array that the daily history will be returned into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetGlobalStatHistoryInt", nullptr, nullptr, sizeof(UserStats_eventGetGlobalStatHistoryInt_Parms), Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics
	{
		struct UserStats_eventGetGlobalStatInt_Parms
		{
			FString statName;
			int32 data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_statName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetGlobalStatInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetGlobalStatInt_Parms), &Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatInt_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_statName = { "statName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetGlobalStatInt_Parms, statName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::NewProp_statName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the lifetime totals for an aggregated stat.\n\x09*\n\x09* You must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\x09*\n\x09* @param\x09statName\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""data\x09\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the lifetime totals for an aggregated stat.\n\nYou must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.\n\n@param        statName        The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        data            The variable to return the stat value into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetGlobalStatInt", nullptr, nullptr, sizeof(UserStats_eventGetGlobalStatInt_Parms), Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetGlobalStatInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetGlobalStatInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics
	{
		struct UserStats_eventGetLeaderboardDisplayType_Parms
		{
			FSteamLeaderboard steamLeaderboard;
			ESteamLeaderboardDisplayType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamLeaderboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardDisplayType_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::NewProp_steamLeaderboard = { "steamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardDisplayType_Parms, steamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::NewProp_steamLeaderboard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Returns the display type of a leaderboard handle.\n\x09*\n\x09* @param\x09steamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Returns the display type of a leaderboard handle.\n\n@param        steamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetLeaderboardDisplayType", nullptr, nullptr, sizeof(UserStats_eventGetLeaderboardDisplayType_Parms), Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics
	{
		struct UserStats_eventGetLeaderboardEntryCount_Parms
		{
			FSteamLeaderboard steamLeaderboard;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamLeaderboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardEntryCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::NewProp_steamLeaderboard = { "steamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardEntryCount_Parms, steamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::NewProp_steamLeaderboard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Returns the total number of entries in a leaderboard.\n\x09*\n\x09* @param\x09steamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Returns the total number of entries in a leaderboard.\n\n@param        steamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetLeaderboardEntryCount", nullptr, nullptr, sizeof(UserStats_eventGetLeaderboardEntryCount_Parms), Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics
	{
		struct UserStats_eventGetLeaderboardName_Parms
		{
			FSteamLeaderboard steamLeaderboard;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamLeaderboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::NewProp_steamLeaderboard = { "steamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardName_Parms, steamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::NewProp_steamLeaderboard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Returns the name of a leaderboard handle.\n\x09*\n\x09* @param\x09steamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Returns the name of a leaderboard handle.\n\n@param        steamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetLeaderboardName", nullptr, nullptr, sizeof(UserStats_eventGetLeaderboardName_Parms), Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetLeaderboardName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetLeaderboardName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics
	{
		struct UserStats_eventGetLeaderboardSortMethod_Parms
		{
			FSteamLeaderboard steamLeaderboard;
			ESteamLeaderboardSortMethod ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamLeaderboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardSortMethod_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::NewProp_steamLeaderboard = { "steamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetLeaderboardSortMethod_Parms, steamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::NewProp_steamLeaderboard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Returns the sort order of a leaderboard handle.\n\x09*\n\x09* @param\x09steamLeaderboard\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Returns the sort order of a leaderboard handle.\n\n@param        steamLeaderboard        A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetLeaderboardSortMethod", nullptr, nullptr, sizeof(UserStats_eventGetLeaderboardSortMethod_Parms), Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics
	{
		struct UserStats_eventGetMostAchievedAchievementInfo_Parms
		{
			FString name;
			float percent;
			bool bAchieved;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetMostAchievedAchievementInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((UserStats_eventGetMostAchievedAchievementInfo_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetMostAchievedAchievementInfo_Parms), &Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetMostAchievedAchievementInfo_Parms, percent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetMostAchievedAchievementInfo_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_percent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the info on the most achieved achievement for the game.\n\x09*\n\x09* You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.\n\x09*\n\x09* @param\x09name\x09\x09\x09String buffer to return the 'API Name' of the achievement into.\n\x09* @param\x09percent\x09\x09\x09Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n\x09* @param\x09""bAchieved\x09\x09Variable to return whether the current user has unlocked this achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the info on the most achieved achievement for the game.\n\nYou must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.\n\n@param        name                    String buffer to return the 'API Name' of the achievement into.\n@param        percent                 Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n@param        bAchieved               Variable to return whether the current user has unlocked this achievement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetMostAchievedAchievementInfo", nullptr, nullptr, sizeof(UserStats_eventGetMostAchievedAchievementInfo_Parms), Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics
	{
		struct UserStats_eventGetNextMostAchievedAchievementInfo_Parms
		{
			int32 iteratorPrevious;
			FString name;
			float percent;
			bool bAchieved;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iteratorPrevious;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetNextMostAchievedAchievementInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((UserStats_eventGetNextMostAchievedAchievementInfo_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetNextMostAchievedAchievementInfo_Parms), &Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_percent = { "percent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetNextMostAchievedAchievementInfo_Parms, percent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetNextMostAchievedAchievementInfo_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_iteratorPrevious = { "iteratorPrevious", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetNextMostAchievedAchievementInfo_Parms, iteratorPrevious), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_percent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_iteratorPrevious,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the info on the next most achieved achievement for the game.\n\x09*\n\x09* You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.\n\x09*\n\x09* @param\x09name\x09\x09\x09String buffer to return the 'API Name' of the achievement into.\n\x09* @param\x09percent\x09\x09\x09Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n\x09* @param\x09""bAchieved\x09\x09Variable to return whether the current user has unlocked this achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the info on the next most achieved achievement for the game.\n\nYou must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.\n\n@param        name                    String buffer to return the 'API Name' of the achievement into.\n@param        percent                 Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n@param        bAchieved               Variable to return whether the current user has unlocked this achievement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetNextMostAchievedAchievementInfo", nullptr, nullptr, sizeof(UserStats_eventGetNextMostAchievedAchievementInfo_Parms), Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics
	{
		struct UserStats_eventGetNumAchievements_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetNumAchievements_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Get the number of achievements defined in the App Admin panel of the Steamworks website.\n\x09*\n\x09* This is used for iterating through all of the achievements with GetAchievementName.\n\x09* In general games should not need these functions because they should have a list of existing achievements compiled into them.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Get the number of achievements defined in the App Admin panel of the Steamworks website.\n\nThis is used for iterating through all of the achievements with GetAchievementName.\nIn general games should not need these functions because they should have a list of existing achievements compiled into them." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetNumAchievements", nullptr, nullptr, sizeof(UserStats_eventGetNumAchievements_Parms), Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetNumAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetNumAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics
	{
		struct UserStats_eventGetNumberOfCurrentPlayers_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetNumberOfCurrentPlayers_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetNumberOfCurrentPlayers", nullptr, nullptr, sizeof(UserStats_eventGetNumberOfCurrentPlayers_Parms), Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetStatFloat_Statics
	{
		struct UserStats_eventGetStatFloat_Parms
		{
			FString name;
			float data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetStatFloat_Parms), &Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetStatFloat_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetStatFloat_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the current user.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\x09* To receive stats for other users use GetUserStat.\n\x09*\n\x09* @param\x09name\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""data\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param        name    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        data    The variable to return the stat value into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetStatFloat", nullptr, nullptr, sizeof(UserStats_eventGetStatFloat_Parms), Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetStatInt_Statics
	{
		struct UserStats_eventGetStatInt_Parms
		{
			FString name;
			int32 data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetStatInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetStatInt_Parms), &Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetStatInt_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetStatInt_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetStatInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetStatInt_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetStatInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the current user.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\x09* To receive stats for other users use GetUserStat.\n\x09*\n\x09* @param\x09name\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""data\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param        name    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        data    The variable to return the stat value into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetStatInt", nullptr, nullptr, sizeof(UserStats_eventGetStatInt_Parms), Z_Construct_UFunction_UUserStats_GetStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetStatInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetStatInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetStatInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetStatInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetStatInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics
	{
		struct UserStats_eventGetUserAchievement_Parms
		{
			FSteamID steamIDUser;
			FString name;
			bool bAchieved;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((UserStats_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserAchievement_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserAchievement_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the unlock status of the Achievement.\n\x09*\n\x09* The equivalent function for the local user is GetAchievement, the equivalent function for game servers is ISteamGameServerStats::GetUserAchievement.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the user to get the achievement for.\n\x09* @param\x09name\x09\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09""bAchieved\x09\x09Returns the unlock status of the achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the unlock status of the Achievement.\n\nThe equivalent function for the local user is GetAchievement, the equivalent function for game servers is ISteamGameServerStats::GetUserAchievement.\n\n@param        steamIDUser             The Steam ID of the user to get the achievement for.\n@param        name                    The 'API Name' of the achievement.\n@param        bAchieved               Returns the unlock status of the achievement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetUserAchievement", nullptr, nullptr, sizeof(UserStats_eventGetUserAchievement_Parms), Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics
	{
		struct UserStats_eventGetUserAchievementAndUnlockTime_Parms
		{
			FSteamID steamIDUser;
			FString name;
			bool bAchieved;
			int32 unlockTime;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_unlockTime;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetUserAchievementAndUnlockTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetUserAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_unlockTime = { "unlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserAchievementAndUnlockTime_Parms, unlockTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((UserStats_eventGetUserAchievementAndUnlockTime_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetUserAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserAchievementAndUnlockTime_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserAchievementAndUnlockTime_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_unlockTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the achievement status, and the time it was unlocked if unlocked.\n\x09*\n\x09* If the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\n\x09* The equivalent function for the local user is GetAchievementAndUnlockTime.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the user to get the achievement for.\n\x09* @param\x09name\x09\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09""bAchieved\x09\x09Returns the unlock status of the achievement.\n\x09* @param\x09unlockTime\x09\x09Returns the time that the unchievement was unlocked; if pbAchieved is true.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the achievement status, and the time it was unlocked if unlocked.\n\nIf the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\nThe equivalent function for the local user is GetAchievementAndUnlockTime.\n\n@param        steamIDUser             The Steam ID of the user to get the achievement for.\n@param        name                    The 'API Name' of the achievement.\n@param        bAchieved               Returns the unlock status of the achievement.\n@param        unlockTime              Returns the time that the unchievement was unlocked; if pbAchieved is true." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetUserAchievementAndUnlockTime", nullptr, nullptr, sizeof(UserStats_eventGetUserAchievementAndUnlockTime_Parms), Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics
	{
		struct UserStats_eventGetUserStatFloat_Parms
		{
			FSteamID steamIDUser;
			FString name;
			float data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetUserStatFloat_Parms), &Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserStatFloat_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserStatFloat_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserStatFloat_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the current user.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\x09* To receive stats for other users use GetUserStat.\n\x09*\n\x09* @param\x09steamIDUser\x09The Steam ID of the user to get the stat for.\n\x09* @param\x09name\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""data\x09\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param        steamIDUser     The Steam ID of the user to get the stat for.\n@param        name            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        data            The variable to return the stat value into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetUserStatFloat", nullptr, nullptr, sizeof(UserStats_eventGetUserStatFloat_Parms), Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetUserStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetUserStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics
	{
		struct UserStats_eventGetUserStatInteger_Parms
		{
			FSteamID steamIDUser;
			FString name;
			int32 data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventGetUserStatInteger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventGetUserStatInteger_Parms), &Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserStatInteger_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserStatInteger_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventGetUserStatInteger_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the current user.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\x09* To receive stats for other users use GetUserStat.\n\x09*\n\x09* @param\x09steamIDUser\x09The Steam ID of the user to get the stat for.\n\x09* @param\x09name\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""data\x09\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param        steamIDUser     The Steam ID of the user to get the stat for.\n@param        name            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        data            The variable to return the stat value into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "GetUserStatInteger", nullptr, nullptr, sizeof(UserStats_eventGetUserStatInteger_Parms), Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_GetUserStatInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_GetUserStatInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics
	{
		struct UserStats_eventIndicateAchievementProgress_Parms
		{
			FString name;
			int32 currentProgress;
			int32 maxProgress;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxProgress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentProgress;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventIndicateAchievementProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventIndicateAchievementProgress_Parms), &Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_maxProgress = { "maxProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventIndicateAchievementProgress_Parms, maxProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_currentProgress = { "currentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventIndicateAchievementProgress_Parms, currentProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventIndicateAchievementProgress_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_maxProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_currentProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Shows the user a pop-up notification with the current progress of an achievement.\n\x09*\n\x09* Calling this function will NOT set the progress or unlock the achievement, the game must do that manually by calling SetStat!\n\x09*\n\x09* @param\x09The 'API Name' of the achievement.\n\x09* @param\x09The current progress.\n\x09* @param\x09The progress required to unlock the achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Shows the user a pop-up notification with the current progress of an achievement.\n\nCalling this function will NOT set the progress or unlock the achievement, the game must do that manually by calling SetStat!\n\n@param        The 'API Name' of the achievement.\n@param        The current progress.\n@param        The progress required to unlock the achievement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "IndicateAchievementProgress", nullptr, nullptr, sizeof(UserStats_eventIndicateAchievementProgress_Parms), Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_IndicateAchievementProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_IndicateAchievementProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics
	{
		struct UserStats_eventRequestCurrentStats_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventRequestCurrentStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventRequestCurrentStats_Parms), &Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Asynchronously request the user's current stats and achievements from the server.\n\x09*\n\x09* You must always call this first to get the initial status of stats and achievements.\n\x09* Only after the resulting callback comes back can you start calling the rest of the stats and achievement functions for the current user.\n\x09* The equivalent function for other users is RequestUserStats.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Asynchronously request the user's current stats and achievements from the server.\n\nYou must always call this first to get the initial status of stats and achievements.\nOnly after the resulting callback comes back can you start calling the rest of the stats and achievement functions for the current user.\nThe equivalent function for other users is RequestUserStats." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "RequestCurrentStats", nullptr, nullptr, sizeof(UserStats_eventRequestCurrentStats_Parms), Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_RequestCurrentStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_RequestCurrentStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics
	{
		struct UserStats_eventRequestGlobalAchievementPercentages_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventRequestGlobalAchievementPercentages_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Asynchronously fetch the data for the percentage of players who have received each achievement for the current game globally.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Asynchronously fetch the data for the percentage of players who have received each achievement for the current game globally.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "RequestGlobalAchievementPercentages", nullptr, nullptr, sizeof(UserStats_eventRequestGlobalAchievementPercentages_Parms), Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics
	{
		struct UserStats_eventRequestGlobalStats_Parms
		{
			FScriptDelegate callback;
			int32 historyDays;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_historyDays;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_historyDays = { "historyDays", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventRequestGlobalStats_Parms, historyDays), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventRequestGlobalStats_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_historyDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Asynchronously fetches global stats data, which is available for stats marked as \"aggregated\" in the App Admin panel of the Steamworks website.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\x09*\n\x09* @param\x09historyDays\x09\x09How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Asynchronously fetches global stats data, which is available for stats marked as \"aggregated\" in the App Admin panel of the Steamworks website.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.\n\n@param        historyDays             How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "RequestGlobalStats", nullptr, nullptr, sizeof(UserStats_eventRequestGlobalStats_Parms), Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_RequestGlobalStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_RequestGlobalStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_RequestUserStats_Statics
	{
		struct UserStats_eventRequestUserStats_Parms
		{
			FScriptDelegate callback;
			FSteamID steamID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventRequestUserStats_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventRequestUserStats_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Asynchronously downloads stats and achievements for the specified user from the server.\n\x09*\n\x09* These stats are not automatically updated; you'll need to call this function again to refresh any data that may have change.\n\x09* To keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a\n\x09* UserStatsUnloaded_t callback is sent. After receiving this callback the user's stats will be unavailable until this function is called again.\n\x09* The equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.\n\x09*\n\x09* @param\x09steamID\x09\x09The Steam ID of the user to request stats for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Asynchronously downloads stats and achievements for the specified user from the server.\n\nThese stats are not automatically updated; you'll need to call this function again to refresh any data that may have change.\nTo keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a\nUserStatsUnloaded_t callback is sent. After receiving this callback the user's stats will be unavailable until this function is called again.\nThe equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.\n\n@param        steamID         The Steam ID of the user to request stats for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "RequestUserStats", nullptr, nullptr, sizeof(UserStats_eventRequestUserStats_Parms), Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_RequestUserStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_RequestUserStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_ResetAllStats_Statics
	{
		struct UserStats_eventResetAllStats_Parms
		{
			bool bAchievementsToo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAchievementsToo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchievementsToo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventResetAllStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventResetAllStats_Parms), &Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo_SetBit(void* Obj)
	{
		((UserStats_eventResetAllStats_Parms*)Obj)->bAchievementsToo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo = { "bAchievementsToo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventResetAllStats_Parms), &Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Resets the current users stats and, optionally achievements.\n\x09*\n\x09* This automatically calls StoreStats to persist the changes to the server.\n\x09* This should typically only be used for testing purposes during development.\n\x09* Ensure that you sync up your stats with the new default values provided by Steam after calling this by calling RequestCurrentStats.\n\x09*\n\x09* @param\x09""bAchievementsToo\x09""Also reset the user's achievements?\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Resets the current users stats and, optionally achievements.\n\nThis automatically calls StoreStats to persist the changes to the server.\nThis should typically only be used for testing purposes during development.\nEnsure that you sync up your stats with the new default values provided by Steam after calling this by calling RequestCurrentStats.\n\n@param        bAchievementsToo        Also reset the user's achievements?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "ResetAllStats", nullptr, nullptr, sizeof(UserStats_eventResetAllStats_Parms), Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_ResetAllStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_ResetAllStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_SetAchievement_Statics
	{
		struct UserStats_eventSetAchievement_Parms
		{
			FString name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventSetAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventSetAchievement_Parms), &Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventSetAchievement_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_SetAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetAchievement_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_SetAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Unlocks an achievement.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09* You can unlock an achievement multiple times so you don't need to worry about only setting achievements that aren't already set.\n\x09* This call only modifies Steam's in-memory state so it is quite cheap. To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\x09*\n\x09* @param\x09name\x09The 'API Name' of the Achievement to unlock.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Unlocks an achievement.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\nYou can unlock an achievement multiple times so you don't need to worry about only setting achievements that aren't already set.\nThis call only modifies Steam's in-memory state so it is quite cheap. To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\n@param        name    The 'API Name' of the Achievement to unlock." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_SetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "SetAchievement", nullptr, nullptr, sizeof(UserStats_eventSetAchievement_Parms), Z_Construct_UFunction_UUserStats_SetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_SetAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_SetAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_SetAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_SetStatFloat_Statics
	{
		struct UserStats_eventSetStatFloat_Parms
		{
			FString name;
			float data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventSetStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventSetStatFloat_Parms), &Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventSetStatFloat_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventSetStatFloat_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Sets / updates the value of a given stat for the current user.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\n\x09* To submit the stats to the server you must call StoreStats.\n\x09* If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\x09*\n\x09* @param\x09name\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""data\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Sets / updates the value of a given stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\nTo submit the stats to the server you must call StoreStats.\nIf this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\n@param        name    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        data    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "SetStatFloat", nullptr, nullptr, sizeof(UserStats_eventSetStatFloat_Parms), Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_SetStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_SetStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_SetStatInt_Statics
	{
		struct UserStats_eventSetStatInt_Parms
		{
			FString name;
			int32 data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventSetStatInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventSetStatInt_Parms), &Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventSetStatInt_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventSetStatInt_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_SetStatInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_SetStatInt_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_SetStatInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Sets / updates the value of a given stat for the current user.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\n\x09* To submit the stats to the server you must call StoreStats.\n\x09* If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\x09*\n\x09* @param\x09name\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""data\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Sets / updates the value of a given stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\nTo submit the stats to the server you must call StoreStats.\nIf this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\n@param        name    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        data    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_SetStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "SetStatInt", nullptr, nullptr, sizeof(UserStats_eventSetStatInt_Parms), Z_Construct_UFunction_UUserStats_SetStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetStatInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_SetStatInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_SetStatInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_SetStatInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_SetStatInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_StoreStats_Statics
	{
		struct UserStats_eventStoreStats_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_StoreStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventStoreStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_StoreStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventStoreStats_Parms), &Z_Construct_UFunction_UUserStats_StoreStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_StoreStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_StoreStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_StoreStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Send the changed stats and achievements data to the server for permanent storage.\n\x09*\n\x09* If this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\n\x09* This call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.\n\x09* You should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\n\x09* This call is required to display the achievement unlock notification dialog though, so if you have called SetAchievement then it's advisable to call this soon after that.\n\x09* If you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process ends then this function will automatically be called.\n\x09*\n\x09* You can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Send the changed stats and achievements data to the server for permanent storage.\n\nIf this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\nThis call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.\nYou should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\nThis call is required to display the achievement unlock notification dialog though, so if you have called SetAchievement then it's advisable to call this soon after that.\nIf you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process ends then this function will automatically be called.\n\nYou can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_StoreStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "StoreStats", nullptr, nullptr, sizeof(UserStats_eventStoreStats_Parms), Z_Construct_UFunction_UUserStats_StoreStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_StoreStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_StoreStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_StoreStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_StoreStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_StoreStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics
	{
		struct UserStats_eventUpdateAvgRateStat_Parms
		{
			FString name;
			float countThisSession;
			float sessionLength;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sessionLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_countThisSession;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserStats_eventUpdateAvgRateStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UserStats_eventUpdateAvgRateStat_Parms), &Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_sessionLength = { "sessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUpdateAvgRateStat_Parms, sessionLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_countThisSession = { "countThisSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUpdateAvgRateStat_Parms, countThisSession), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUpdateAvgRateStat_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_sessionLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_countThisSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Updates an AVGRATE stat with new values.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\n\x09* To submit the stats to the server you must call StoreStats.\n\x09* If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\x09*\n\x09* @param\x09name\x09\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""countThisSession\x09The value accumulation since the last call to this function.\n\x09* @param\x09sessionLength\x09\x09The amount of time in seconds since the last call to this function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Updates an AVGRATE stat with new values.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\nTo submit the stats to the server you must call StoreStats.\nIf this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\n@param        name                            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        countThisSession        The value accumulation since the last call to this function.\n@param        sessionLength           The amount of time in seconds since the last call to this function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "UpdateAvgRateStat", nullptr, nullptr, sizeof(UserStats_eventUpdateAvgRateStat_Parms), Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_UpdateAvgRateStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_UpdateAvgRateStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics
	{
		struct UserStats_eventUploadLeaderboardScore_Parms
		{
			FScriptDelegate callback;
			FSteamLeaderboard steamLeaderboard;
			ESteamLeaderboardUploadScoreMethod uploadScoreMethod;
			int32 score;
			TArray<int32> scoreDetails;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_scoreDetails;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_scoreDetails_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_uploadScoreMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_uploadScoreMethod_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamLeaderboard;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_scoreDetails = { "scoreDetails", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUploadLeaderboardScore_Parms, scoreDetails), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_scoreDetails_Inner = { "scoreDetails", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUploadLeaderboardScore_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_uploadScoreMethod = { "uploadScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUploadLeaderboardScore_Parms, uploadScoreMethod), Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_uploadScoreMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_steamLeaderboard = { "steamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUploadLeaderboardScore_Parms, steamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UserStats_eventUploadLeaderboardScore_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_scoreDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_scoreDetails_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_uploadScoreMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_uploadScoreMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_steamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Uploads a user score to a specified leaderboard.\n\x09*\n\x09* Details are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard \n\x09* you could store the timestamps when the player hits each checkpoint. If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.\n\x09* Uploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.\n\x09*\n\x09* @param\x09steamLeaderboard\x09\x09""A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09* @param\x09uploadScoreMethod\x09\x09""Do you want to force the score to change, or keep the previous score if it was better?\n\x09* @param\x09score\x09\x09\x09\x09\x09The score to upload.\n\x09* @param\x09scoreDetails\x09\x09\x09Optional: Array containing the details surrounding the unlocking of this score.\n\x09*/" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
		{ "ToolTip", "Uploads a user score to a specified leaderboard.\n\nDetails are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard\nyou could store the timestamps when the player hits each checkpoint. If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.\nUploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.\n\n@param        steamLeaderboard                A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param        uploadScoreMethod               Do you want to force the score to change, or keep the previous score if it was better?\n@param        score                                   The score to upload.\n@param        scoreDetails                    Optional: Array containing the details surrounding the unlocking of this score." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserStats, nullptr, "UploadLeaderboardScore", nullptr, nullptr, sizeof(UserStats_eventUploadLeaderboardScore_Parms), Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserStats_UploadLeaderboardScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserStats_UploadLeaderboardScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUserStats_NoRegister()
	{
		return UUserStats::StaticClass();
	}
	struct Z_Construct_UClass_UUserStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserStatsUnloaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserStatsUnloaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserStatsStored_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserStatsStored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserStatsReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserStatsReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserAchievementStored_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserAchievementStored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserAchievementIconFetched_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserAchievementIconFetched;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserStats_AttachLeaderboardUGC, "AttachLeaderboardUGC" }, // 3547702116
		{ &Z_Construct_UFunction_UUserStats_ClearAchievement, "ClearAchievement" }, // 2702783662
		{ &Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntries, "DownloadLeaderboardEntries" }, // 4188106790
		{ &Z_Construct_UFunction_UUserStats_DownloadLeaderboardEntriesForUsers, "DownloadLeaderboardEntriesForUsers" }, // 390448715
		{ &Z_Construct_UFunction_UUserStats_FindLeaderboard, "FindLeaderboard" }, // 4197564719
		{ &Z_Construct_UFunction_UUserStats_FindOrCreateLeaderboard, "FindOrCreateLeaderboard" }, // 1675494410
		{ &Z_Construct_UFunction_UUserStats_GetAchievement, "GetAchievement" }, // 2251981853
		{ &Z_Construct_UFunction_UUserStats_GetAchievementAchievedPercent, "GetAchievementAchievedPercent" }, // 3659701574
		{ &Z_Construct_UFunction_UUserStats_GetAchievementAndUnlockTime, "GetAchievementAndUnlockTime" }, // 3737518096
		{ &Z_Construct_UFunction_UUserStats_GetAchievementDisplayAttribute, "GetAchievementDisplayAttribute" }, // 9447689
		{ &Z_Construct_UFunction_UUserStats_GetAchievementIcon, "GetAchievementIcon" }, // 4118231981
		{ &Z_Construct_UFunction_UUserStats_GetAchievementName, "GetAchievementName" }, // 2197952590
		{ &Z_Construct_UFunction_UUserStats_GetDownloadedLeaderboardEntry, "GetDownloadedLeaderboardEntry" }, // 3558326772
		{ &Z_Construct_UFunction_UUserStats_GetGlobalStatFloat, "GetGlobalStatFloat" }, // 3642745199
		{ &Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryFloat, "GetGlobalStatHistoryFloat" }, // 3237179829
		{ &Z_Construct_UFunction_UUserStats_GetGlobalStatHistoryInt, "GetGlobalStatHistoryInt" }, // 2153644316
		{ &Z_Construct_UFunction_UUserStats_GetGlobalStatInt, "GetGlobalStatInt" }, // 375518614
		{ &Z_Construct_UFunction_UUserStats_GetLeaderboardDisplayType, "GetLeaderboardDisplayType" }, // 1927321233
		{ &Z_Construct_UFunction_UUserStats_GetLeaderboardEntryCount, "GetLeaderboardEntryCount" }, // 247518222
		{ &Z_Construct_UFunction_UUserStats_GetLeaderboardName, "GetLeaderboardName" }, // 2472061427
		{ &Z_Construct_UFunction_UUserStats_GetLeaderboardSortMethod, "GetLeaderboardSortMethod" }, // 3974307504
		{ &Z_Construct_UFunction_UUserStats_GetMostAchievedAchievementInfo, "GetMostAchievedAchievementInfo" }, // 3963122184
		{ &Z_Construct_UFunction_UUserStats_GetNextMostAchievedAchievementInfo, "GetNextMostAchievedAchievementInfo" }, // 564522261
		{ &Z_Construct_UFunction_UUserStats_GetNumAchievements, "GetNumAchievements" }, // 1836038899
		{ &Z_Construct_UFunction_UUserStats_GetNumberOfCurrentPlayers, "GetNumberOfCurrentPlayers" }, // 2166277076
		{ &Z_Construct_UFunction_UUserStats_GetStatFloat, "GetStatFloat" }, // 3684916523
		{ &Z_Construct_UFunction_UUserStats_GetStatInt, "GetStatInt" }, // 3437058413
		{ &Z_Construct_UFunction_UUserStats_GetUserAchievement, "GetUserAchievement" }, // 3247217670
		{ &Z_Construct_UFunction_UUserStats_GetUserAchievementAndUnlockTime, "GetUserAchievementAndUnlockTime" }, // 3862944021
		{ &Z_Construct_UFunction_UUserStats_GetUserStatFloat, "GetUserStatFloat" }, // 3760486400
		{ &Z_Construct_UFunction_UUserStats_GetUserStatInteger, "GetUserStatInteger" }, // 3480689868
		{ &Z_Construct_UFunction_UUserStats_IndicateAchievementProgress, "IndicateAchievementProgress" }, // 1614617274
		{ &Z_Construct_UFunction_UUserStats_RequestCurrentStats, "RequestCurrentStats" }, // 3171945006
		{ &Z_Construct_UFunction_UUserStats_RequestGlobalAchievementPercentages, "RequestGlobalAchievementPercentages" }, // 2358481781
		{ &Z_Construct_UFunction_UUserStats_RequestGlobalStats, "RequestGlobalStats" }, // 310470701
		{ &Z_Construct_UFunction_UUserStats_RequestUserStats, "RequestUserStats" }, // 1152003072
		{ &Z_Construct_UFunction_UUserStats_ResetAllStats, "ResetAllStats" }, // 4119937672
		{ &Z_Construct_UFunction_UUserStats_SetAchievement, "SetAchievement" }, // 2237631218
		{ &Z_Construct_UFunction_UUserStats_SetStatFloat, "SetStatFloat" }, // 1785252114
		{ &Z_Construct_UFunction_UUserStats_SetStatInt, "SetStatInt" }, // 1704525108
		{ &Z_Construct_UFunction_UUserStats_StoreStats, "StoreStats" }, // 3177856615
		{ &Z_Construct_UFunction_UUserStats_UpdateAvgRateStat, "UpdateAvgRateStat" }, // 594364298
		{ &Z_Construct_UFunction_UUserStats_UploadLeaderboardScore, "UploadLeaderboardScore" }, // 334226750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UserStats/UserStats.h" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsUnloaded_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsUnloaded = { "UserStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserStats, UserStatsUnloaded), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsUnloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsUnloaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsStored_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsStored = { "UserStatsStored", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserStats, UserStatsStored), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsStored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsReceived_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsReceived = { "UserStatsReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserStats, UserStatsReceived), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementStored_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementStored = { "UserAchievementStored", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserStats, UserAchievementStored), Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementStored_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementStored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementIconFetched_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/UserStats/UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementIconFetched = { "UserAchievementIconFetched", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserStats, UserAchievementIconFetched), Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementIconFetched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementIconFetched_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsUnloaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsStored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserStats_Statics::NewProp_UserStatsReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementStored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserStats_Statics::NewProp_UserAchievementIconFetched,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserStats_Statics::ClassParams = {
		&UUserStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUserStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserStats, 907571272);
	template<> STEAMCORE_API UClass* StaticClass<UUserStats>()
	{
		return UUserStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserStats(Z_Construct_UClass_UUserStats, &UUserStats::StaticClass, TEXT("/Script/SteamCore"), TEXT("UUserStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
