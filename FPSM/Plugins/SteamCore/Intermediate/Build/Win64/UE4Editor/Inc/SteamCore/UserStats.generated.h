// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamLeaderboard;
enum class ESteamLeaderboardUploadScoreMethod : uint8;
struct FSteamID;
enum class ESteamLeaderboardSortMethod : uint8;
enum class ESteamLeaderboardDisplayType : uint8;
struct FSteamLeaderboardEntries;
struct FSteamLeaderboardEntry;
class UTexture2D;
enum class ESteamLeaderboardDataRequest : uint8;
struct FSteamUGCHandle;
#ifdef STEAMCORE_UserStats_generated_h
#error "UserStats.generated.h already included, missing '#pragma once' in UserStats.h"
#endif
#define STEAMCORE_UserStats_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUploadLeaderboardScore); \
	DECLARE_FUNCTION(execUpdateAvgRateStat); \
	DECLARE_FUNCTION(execStoreStats); \
	DECLARE_FUNCTION(execSetStatFloat); \
	DECLARE_FUNCTION(execSetStatInt); \
	DECLARE_FUNCTION(execSetAchievement); \
	DECLARE_FUNCTION(execResetAllStats); \
	DECLARE_FUNCTION(execRequestUserStats); \
	DECLARE_FUNCTION(execRequestGlobalStats); \
	DECLARE_FUNCTION(execRequestGlobalAchievementPercentages); \
	DECLARE_FUNCTION(execRequestCurrentStats); \
	DECLARE_FUNCTION(execIndicateAchievementProgress); \
	DECLARE_FUNCTION(execGetStatFloat); \
	DECLARE_FUNCTION(execGetStatInt); \
	DECLARE_FUNCTION(execGetUserAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserStatInteger); \
	DECLARE_FUNCTION(execGetNumberOfCurrentPlayers); \
	DECLARE_FUNCTION(execGetNumAchievements); \
	DECLARE_FUNCTION(execGetNextMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetLeaderboardSortMethod); \
	DECLARE_FUNCTION(execGetLeaderboardName); \
	DECLARE_FUNCTION(execGetLeaderboardEntryCount); \
	DECLARE_FUNCTION(execGetLeaderboardDisplayType); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryFloat); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryInt); \
	DECLARE_FUNCTION(execGetGlobalStatFloat); \
	DECLARE_FUNCTION(execGetGlobalStatInt); \
	DECLARE_FUNCTION(execGetDownloadedLeaderboardEntry); \
	DECLARE_FUNCTION(execGetAchievementName); \
	DECLARE_FUNCTION(execGetAchievementIcon); \
	DECLARE_FUNCTION(execGetAchievementDisplayAttribute); \
	DECLARE_FUNCTION(execGetAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetAchievementAchievedPercent); \
	DECLARE_FUNCTION(execGetAchievement); \
	DECLARE_FUNCTION(execFindOrCreateLeaderboard); \
	DECLARE_FUNCTION(execFindLeaderboard); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntriesForUsers); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntries); \
	DECLARE_FUNCTION(execClearAchievement); \
	DECLARE_FUNCTION(execAttachLeaderboardUGC);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUploadLeaderboardScore); \
	DECLARE_FUNCTION(execUpdateAvgRateStat); \
	DECLARE_FUNCTION(execStoreStats); \
	DECLARE_FUNCTION(execSetStatFloat); \
	DECLARE_FUNCTION(execSetStatInt); \
	DECLARE_FUNCTION(execSetAchievement); \
	DECLARE_FUNCTION(execResetAllStats); \
	DECLARE_FUNCTION(execRequestUserStats); \
	DECLARE_FUNCTION(execRequestGlobalStats); \
	DECLARE_FUNCTION(execRequestGlobalAchievementPercentages); \
	DECLARE_FUNCTION(execRequestCurrentStats); \
	DECLARE_FUNCTION(execIndicateAchievementProgress); \
	DECLARE_FUNCTION(execGetStatFloat); \
	DECLARE_FUNCTION(execGetStatInt); \
	DECLARE_FUNCTION(execGetUserAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetUserAchievement); \
	DECLARE_FUNCTION(execGetUserStatFloat); \
	DECLARE_FUNCTION(execGetUserStatInteger); \
	DECLARE_FUNCTION(execGetNumberOfCurrentPlayers); \
	DECLARE_FUNCTION(execGetNumAchievements); \
	DECLARE_FUNCTION(execGetNextMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetMostAchievedAchievementInfo); \
	DECLARE_FUNCTION(execGetLeaderboardSortMethod); \
	DECLARE_FUNCTION(execGetLeaderboardName); \
	DECLARE_FUNCTION(execGetLeaderboardEntryCount); \
	DECLARE_FUNCTION(execGetLeaderboardDisplayType); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryFloat); \
	DECLARE_FUNCTION(execGetGlobalStatHistoryInt); \
	DECLARE_FUNCTION(execGetGlobalStatFloat); \
	DECLARE_FUNCTION(execGetGlobalStatInt); \
	DECLARE_FUNCTION(execGetDownloadedLeaderboardEntry); \
	DECLARE_FUNCTION(execGetAchievementName); \
	DECLARE_FUNCTION(execGetAchievementIcon); \
	DECLARE_FUNCTION(execGetAchievementDisplayAttribute); \
	DECLARE_FUNCTION(execGetAchievementAndUnlockTime); \
	DECLARE_FUNCTION(execGetAchievementAchievedPercent); \
	DECLARE_FUNCTION(execGetAchievement); \
	DECLARE_FUNCTION(execFindOrCreateLeaderboard); \
	DECLARE_FUNCTION(execFindLeaderboard); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntriesForUsers); \
	DECLARE_FUNCTION(execDownloadLeaderboardEntries); \
	DECLARE_FUNCTION(execClearAchievement); \
	DECLARE_FUNCTION(execAttachLeaderboardUGC);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserStats(); \
	friend struct Z_Construct_UClass_UUserStats_Statics; \
public: \
	DECLARE_CLASS(UUserStats, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUserStats)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUserStats(); \
	friend struct Z_Construct_UClass_UUserStats_Statics; \
public: \
	DECLARE_CLASS(UUserStats, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUserStats)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserStats(UUserStats&&); \
	NO_API UUserStats(const UUserStats&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserStats(UUserStats&&); \
	NO_API UUserStats(const UUserStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUserStats)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_14_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UUserStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_UserStats_UserStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
