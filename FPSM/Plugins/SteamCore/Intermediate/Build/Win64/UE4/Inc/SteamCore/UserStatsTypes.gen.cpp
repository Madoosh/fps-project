// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/UserStats/UserStatsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserStatsTypes() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalStatsReceived();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardFindResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAttachLeaderboardUGCData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRequestUserStatsData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserStatsUnloaded();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserStatsStored();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserStatsReceived();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementStored();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementIconFetched();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestGlobalStats_Parms
		{
			FGlobalStatsReceived data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestGlobalStats_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestGlobalStats_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestGlobalStats_Parms, data), Z_Construct_UScriptStruct_FGlobalStatsReceived, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestGlobalStats__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnRequestGlobalStats_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalStats__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms
		{
			FGlobalAchievementPercentagesReady data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms, data), Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestGlobalAchievementPercentages__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnRequestGlobalAchievementPercentages_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms
		{
			FNumberOfCurrentPlayers data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms, data), Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGetNumberOfCurrentPlayers__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnGetNumberOfCurrentPlayers_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms
		{
			FFindOrCreateLeaderboardData data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms, data), Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFindOrCreateLeaderboard__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnFindOrCreateLeaderboard_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFindOrCreateLeaderboard__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFindLeaderboard_Parms
		{
			FLeaderboardFindResult data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFindLeaderboard_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFindLeaderboard_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFindLeaderboard_Parms, data), Z_Construct_UScriptStruct_FLeaderboardFindResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFindLeaderboard__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnFindLeaderboard_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFindLeaderboard__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnAttachLeaderboardUGC_Parms
		{
			FAttachLeaderboardUGCData data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms, data), Z_Construct_UScriptStruct_FAttachLeaderboardUGCData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnAttachLeaderboardUGC__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnAttachLeaderboardUGC_Parms), Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnAttachLeaderboardUGC__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUploadLeaderboardScore_Parms
		{
			FLeaderboardScoreUploaded data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnUploadLeaderboardScore_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnUploadLeaderboardScore_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUploadLeaderboardScore_Parms, data), Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUploadLeaderboardScore__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnUploadLeaderboardScore_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUploadLeaderboardScore__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestUserStats_Parms
		{
			FRequestUserStatsData data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestUserStats_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestUserStats_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestUserStats_Parms, data), Z_Construct_UScriptStruct_FRequestUserStatsData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestUserStats__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnRequestUserStats_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestUserStats__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms
		{
			FLeaderboardScoresDownloadedForUsers data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms, data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnDownloadLeaderboardEntriesForUsers__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnDownloadLeaderboardEntriesForUsers_Parms), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms
		{
			FLeaderboardScoresDownloaded data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms, data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnDownloadLeaderboardEntries__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnDownloadLeaderboardEntries_Parms), Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnDownloadLeaderboardEntries__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUserStatsUnloaded_Parms
		{
			FUserStatsUnloaded data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUserStatsUnloaded_Parms, data), Z_Construct_UScriptStruct_FUserStatsUnloaded, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserStatsUnloaded__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnUserStatsUnloaded_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserStatsUnloaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUserStatsStored_Parms
		{
			FUserStatsStored data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUserStatsStored_Parms, data), Z_Construct_UScriptStruct_FUserStatsStored, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserStatsStored__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnUserStatsStored_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserStatsStored__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUserStatsReceived_Parms
		{
			FUserStatsReceived data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUserStatsReceived_Parms, data), Z_Construct_UScriptStruct_FUserStatsReceived, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserStatsReceived__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnUserStatsReceived_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserStatsReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUserAchievementStored_Parms
		{
			FUserAchievementStored data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUserAchievementStored_Parms, data), Z_Construct_UScriptStruct_FUserAchievementStored, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserAchievementStored__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnUserAchievementStored_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementStored__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnUserAchievementIconFetched_Parms
		{
			FUserAchievementIconFetched data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnUserAchievementIconFetched_Parms, data), Z_Construct_UScriptStruct_FUserAchievementIconFetched, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnUserAchievementIconFetched__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnUserAchievementIconFetched_Parms), Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnUserAchievementIconFetched__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ESteamLeaderboardUploadScoreMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardUploadScoreMethod"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardUploadScoreMethod>()
	{
		return ESteamLeaderboardUploadScoreMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLeaderboardUploadScoreMethod(ESteamLeaderboardUploadScoreMethod_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLeaderboardUploadScoreMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Hash() { return 236817123U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLeaderboardUploadScoreMethod"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardUploadScoreMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLeaderboardUploadScoreMethod::None", (int64)ESteamLeaderboardUploadScoreMethod::None },
				{ "ESteamLeaderboardUploadScoreMethod::KeepBest", (int64)ESteamLeaderboardUploadScoreMethod::KeepBest },
				{ "ESteamLeaderboardUploadScoreMethod::ForceUpdate", (int64)ESteamLeaderboardUploadScoreMethod::ForceUpdate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ForceUpdate.Name", "ESteamLeaderboardUploadScoreMethod::ForceUpdate" },
				{ "KeepBest.Name", "ESteamLeaderboardUploadScoreMethod::KeepBest" },
				{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
				{ "None.Name", "ESteamLeaderboardUploadScoreMethod::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLeaderboardUploadScoreMethod",
				"ESteamLeaderboardUploadScoreMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamLeaderboardDisplayType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardDisplayType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardDisplayType>()
	{
		return ESteamLeaderboardDisplayType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLeaderboardDisplayType(ESteamLeaderboardDisplayType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLeaderboardDisplayType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Hash() { return 457683168U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLeaderboardDisplayType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardDisplayType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLeaderboardDisplayType::None", (int64)ESteamLeaderboardDisplayType::None },
				{ "ESteamLeaderboardDisplayType::Numeric", (int64)ESteamLeaderboardDisplayType::Numeric },
				{ "ESteamLeaderboardDisplayType::TimeSeconds", (int64)ESteamLeaderboardDisplayType::TimeSeconds },
				{ "ESteamLeaderboardDisplayType::TimeMilliSeconds", (int64)ESteamLeaderboardDisplayType::TimeMilliSeconds },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
				{ "None.Name", "ESteamLeaderboardDisplayType::None" },
				{ "Numeric.Name", "ESteamLeaderboardDisplayType::Numeric" },
				{ "TimeMilliSeconds.Name", "ESteamLeaderboardDisplayType::TimeMilliSeconds" },
				{ "TimeSeconds.Name", "ESteamLeaderboardDisplayType::TimeSeconds" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLeaderboardDisplayType",
				"ESteamLeaderboardDisplayType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamLeaderboardSortMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardSortMethod"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardSortMethod>()
	{
		return ESteamLeaderboardSortMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLeaderboardSortMethod(ESteamLeaderboardSortMethod_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLeaderboardSortMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Hash() { return 717823845U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLeaderboardSortMethod"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardSortMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLeaderboardSortMethod::None", (int64)ESteamLeaderboardSortMethod::None },
				{ "ESteamLeaderboardSortMethod::Ascending", (int64)ESteamLeaderboardSortMethod::Ascending },
				{ "ESteamLeaderboardSortMethod::Descending", (int64)ESteamLeaderboardSortMethod::Descending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ascending.Name", "ESteamLeaderboardSortMethod::Ascending" },
				{ "BlueprintType", "true" },
				{ "Descending.Name", "ESteamLeaderboardSortMethod::Descending" },
				{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
				{ "None.Name", "ESteamLeaderboardSortMethod::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLeaderboardSortMethod",
				"ESteamLeaderboardSortMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamLeaderboardDataRequest_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLeaderboardDataRequest"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLeaderboardDataRequest>()
	{
		return ESteamLeaderboardDataRequest_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLeaderboardDataRequest(ESteamLeaderboardDataRequest_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLeaderboardDataRequest"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Hash() { return 783690332U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLeaderboardDataRequest"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLeaderboardDataRequest_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLeaderboardDataRequest::Global", (int64)ESteamLeaderboardDataRequest::Global },
				{ "ESteamLeaderboardDataRequest::GlobalAroundUser", (int64)ESteamLeaderboardDataRequest::GlobalAroundUser },
				{ "ESteamLeaderboardDataRequest::Friends", (int64)ESteamLeaderboardDataRequest::Friends },
				{ "ESteamLeaderboardDataRequest::Users", (int64)ESteamLeaderboardDataRequest::Users },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
				{ "Friends.Name", "ESteamLeaderboardDataRequest::Friends" },
				{ "Global.Name", "ESteamLeaderboardDataRequest::Global" },
				{ "GlobalAroundUser.Name", "ESteamLeaderboardDataRequest::GlobalAroundUser" },
				{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
				{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
				{ "Users.Name", "ESteamLeaderboardDataRequest::Users" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLeaderboardDataRequest",
				"ESteamLeaderboardDataRequest",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGlobalStatsReceived::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGlobalStatsReceived_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalStatsReceived, Z_Construct_UPackage__Script_SteamCore(), TEXT("GlobalStatsReceived"), sizeof(FGlobalStatsReceived), Get_Z_Construct_UScriptStruct_FGlobalStatsReceived_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGlobalStatsReceived>()
{
	return FGlobalStatsReceived::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalStatsReceived(FGlobalStatsReceived::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GlobalStatsReceived"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGlobalStatsReceived
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGlobalStatsReceived()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GlobalStatsReceived")),new UScriptStruct::TCppStructOps<FGlobalStatsReceived>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGlobalStatsReceived;
	struct Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalStatsReceived>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalStatsReceived, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalStatsReceived, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GlobalStatsReceived",
		sizeof(FGlobalStatsReceived),
		alignof(FGlobalStatsReceived),
		Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalStatsReceived()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalStatsReceived_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalStatsReceived"), sizeof(FGlobalStatsReceived), Get_Z_Construct_UScriptStruct_FGlobalStatsReceived_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalStatsReceived_Hash() { return 486224466U; }
class UScriptStruct* FGlobalAchievementPercentagesReady::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, Z_Construct_UPackage__Script_SteamCore(), TEXT("GlobalAchievementPercentagesReady"), sizeof(FGlobalAchievementPercentagesReady), Get_Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGlobalAchievementPercentagesReady>()
{
	return FGlobalAchievementPercentagesReady::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalAchievementPercentagesReady(FGlobalAchievementPercentagesReady::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GlobalAchievementPercentagesReady"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGlobalAchievementPercentagesReady
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGlobalAchievementPercentagesReady()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GlobalAchievementPercentagesReady")),new UScriptStruct::TCppStructOps<FGlobalAchievementPercentagesReady>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGlobalAchievementPercentagesReady;
	struct Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalAchievementPercentagesReady>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalAchievementPercentagesReady, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalAchievementPercentagesReady, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GlobalAchievementPercentagesReady",
		sizeof(FGlobalAchievementPercentagesReady),
		alignof(FGlobalAchievementPercentagesReady),
		Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalAchievementPercentagesReady"), sizeof(FGlobalAchievementPercentagesReady), Get_Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Hash() { return 1137550891U; }
class UScriptStruct* FNumberOfCurrentPlayers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, Z_Construct_UPackage__Script_SteamCore(), TEXT("NumberOfCurrentPlayers"), sizeof(FNumberOfCurrentPlayers), Get_Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FNumberOfCurrentPlayers>()
{
	return FNumberOfCurrentPlayers::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNumberOfCurrentPlayers(FNumberOfCurrentPlayers::StaticStruct, TEXT("/Script/SteamCore"), TEXT("NumberOfCurrentPlayers"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFNumberOfCurrentPlayers
{
	FScriptStruct_SteamCore_StaticRegisterNativesFNumberOfCurrentPlayers()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NumberOfCurrentPlayers")),new UScriptStruct::TCppStructOps<FNumberOfCurrentPlayers>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFNumberOfCurrentPlayers;
	struct Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Players;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNumberOfCurrentPlayers>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNumberOfCurrentPlayers, Players), METADATA_PARAMS(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FNumberOfCurrentPlayers*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNumberOfCurrentPlayers), &Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"NumberOfCurrentPlayers",
		sizeof(FNumberOfCurrentPlayers),
		alignof(FNumberOfCurrentPlayers),
		Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NumberOfCurrentPlayers"), sizeof(FNumberOfCurrentPlayers), Get_Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Hash() { return 2230942214U; }
class UScriptStruct* FFindOrCreateLeaderboardData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, Z_Construct_UPackage__Script_SteamCore(), TEXT("FindOrCreateLeaderboardData"), sizeof(FFindOrCreateLeaderboardData), Get_Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FFindOrCreateLeaderboardData>()
{
	return FFindOrCreateLeaderboardData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFindOrCreateLeaderboardData(FFindOrCreateLeaderboardData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("FindOrCreateLeaderboardData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFFindOrCreateLeaderboardData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFFindOrCreateLeaderboardData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FindOrCreateLeaderboardData")),new UScriptStruct::TCppStructOps<FFindOrCreateLeaderboardData>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFFindOrCreateLeaderboardData;
	struct Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeaderboardFound_MetaData[];
#endif
		static void NewProp_bLeaderboardFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeaderboardFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFindOrCreateLeaderboardData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_SetBit(void* Obj)
	{
		((FFindOrCreateLeaderboardData*)Obj)->bLeaderboardFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound = { "bLeaderboardFound", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFindOrCreateLeaderboardData), &Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFindOrCreateLeaderboardData, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"FindOrCreateLeaderboardData",
		sizeof(FFindOrCreateLeaderboardData),
		alignof(FFindOrCreateLeaderboardData),
		Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FindOrCreateLeaderboardData"), sizeof(FFindOrCreateLeaderboardData), Get_Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Hash() { return 230362872U; }
class UScriptStruct* FLeaderboardFindResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLeaderboardFindResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardFindResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardFindResult"), sizeof(FLeaderboardFindResult), Get_Z_Construct_UScriptStruct_FLeaderboardFindResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLeaderboardFindResult>()
{
	return FLeaderboardFindResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeaderboardFindResult(FLeaderboardFindResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LeaderboardFindResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardFindResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardFindResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeaderboardFindResult")),new UScriptStruct::TCppStructOps<FLeaderboardFindResult>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardFindResult;
	struct Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeaderboardFound_MetaData[];
#endif
		static void NewProp_bLeaderboardFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeaderboardFound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardFindResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_SetBit(void* Obj)
	{
		((FLeaderboardFindResult*)Obj)->bLeaderboardFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound = { "bLeaderboardFound", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeaderboardFindResult), &Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardFindResult, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LeaderboardFindResult",
		sizeof(FLeaderboardFindResult),
		alignof(FLeaderboardFindResult),
		Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardFindResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeaderboardFindResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeaderboardFindResult"), sizeof(FLeaderboardFindResult), Get_Z_Construct_UScriptStruct_FLeaderboardFindResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeaderboardFindResult_Hash() { return 3079051493U; }
class UScriptStruct* FAttachLeaderboardUGCData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData, Z_Construct_UPackage__Script_SteamCore(), TEXT("AttachLeaderboardUGCData"), sizeof(FAttachLeaderboardUGCData), Get_Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FAttachLeaderboardUGCData>()
{
	return FAttachLeaderboardUGCData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttachLeaderboardUGCData(FAttachLeaderboardUGCData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("AttachLeaderboardUGCData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFAttachLeaderboardUGCData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFAttachLeaderboardUGCData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttachLeaderboardUGCData")),new UScriptStruct::TCppStructOps<FAttachLeaderboardUGCData>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFAttachLeaderboardUGCData;
	struct Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttachLeaderboardUGCData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachLeaderboardUGCData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttachLeaderboardUGCData, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"AttachLeaderboardUGCData",
		sizeof(FAttachLeaderboardUGCData),
		alignof(FAttachLeaderboardUGCData),
		Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttachLeaderboardUGCData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttachLeaderboardUGCData"), sizeof(FAttachLeaderboardUGCData), Get_Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Hash() { return 16237180U; }
class UScriptStruct* FLeaderboardScoreUploaded::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardScoreUploaded"), sizeof(FLeaderboardScoreUploaded), Get_Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLeaderboardScoreUploaded>()
{
	return FLeaderboardScoreUploaded::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeaderboardScoreUploaded(FLeaderboardScoreUploaded::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LeaderboardScoreUploaded"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoreUploaded
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoreUploaded()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeaderboardScoreUploaded")),new UScriptStruct::TCppStructOps<FLeaderboardScoreUploaded>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoreUploaded;
	struct Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalRankPrevious_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GlobalRankPrevious;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalRankNew_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GlobalRankNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScoreChanged_MetaData[];
#endif
		static void NewProp_bScoreChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScoreChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoreUploaded>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious = { "GlobalRankPrevious", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, GlobalRankPrevious), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew = { "GlobalRankNew", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, GlobalRankNew), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_SetBit(void* Obj)
	{
		((FLeaderboardScoreUploaded*)Obj)->bScoreChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged = { "bScoreChanged", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeaderboardScoreUploaded), &Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FLeaderboardScoreUploaded*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLeaderboardScoreUploaded), &Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LeaderboardScoreUploaded",
		sizeof(FLeaderboardScoreUploaded),
		alignof(FLeaderboardScoreUploaded),
		Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeaderboardScoreUploaded"), sizeof(FLeaderboardScoreUploaded), Get_Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Hash() { return 2099832271U; }
class UScriptStruct* FRequestUserStatsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRequestUserStatsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestUserStatsData, Z_Construct_UPackage__Script_SteamCore(), TEXT("RequestUserStatsData"), sizeof(FRequestUserStatsData), Get_Z_Construct_UScriptStruct_FRequestUserStatsData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRequestUserStatsData>()
{
	return FRequestUserStatsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRequestUserStatsData(FRequestUserStatsData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RequestUserStatsData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRequestUserStatsData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRequestUserStatsData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RequestUserStatsData")),new UScriptStruct::TCppStructOps<FRequestUserStatsData>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRequestUserStatsData;
	struct Z_Construct_UScriptStruct_FRequestUserStatsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestUserStatsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestUserStatsData, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestUserStatsData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRequestUserStatsData, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RequestUserStatsData",
		sizeof(FRequestUserStatsData),
		alignof(FRequestUserStatsData),
		Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequestUserStatsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRequestUserStatsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RequestUserStatsData"), sizeof(FRequestUserStatsData), Get_Z_Construct_UScriptStruct_FRequestUserStatsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRequestUserStatsData_Hash() { return 3410140421U; }
class UScriptStruct* FLeaderboardScoresDownloadedForUsers::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardScoresDownloadedForUsers"), sizeof(FLeaderboardScoresDownloadedForUsers), Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLeaderboardScoresDownloadedForUsers>()
{
	return FLeaderboardScoresDownloadedForUsers::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeaderboardScoresDownloadedForUsers(FLeaderboardScoresDownloadedForUsers::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LeaderboardScoresDownloadedForUsers"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoresDownloadedForUsers
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoresDownloadedForUsers()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeaderboardScoresDownloadedForUsers")),new UScriptStruct::TCppStructOps<FLeaderboardScoresDownloadedForUsers>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoresDownloadedForUsers;
	struct Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntryCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboardEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboardEntries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoresDownloadedForUsers>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, EntryCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries = { "SteamLeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, SteamLeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LeaderboardScoresDownloadedForUsers",
		sizeof(FLeaderboardScoresDownloadedForUsers),
		alignof(FLeaderboardScoresDownloadedForUsers),
		Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeaderboardScoresDownloadedForUsers"), sizeof(FLeaderboardScoresDownloadedForUsers), Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Hash() { return 3390437783U; }
class UScriptStruct* FLeaderboardScoresDownloaded::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, Z_Construct_UPackage__Script_SteamCore(), TEXT("LeaderboardScoresDownloaded"), sizeof(FLeaderboardScoresDownloaded), Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLeaderboardScoresDownloaded>()
{
	return FLeaderboardScoresDownloaded::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeaderboardScoresDownloaded(FLeaderboardScoresDownloaded::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LeaderboardScoresDownloaded"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoresDownloaded
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoresDownloaded()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeaderboardScoresDownloaded")),new UScriptStruct::TCppStructOps<FLeaderboardScoresDownloaded>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLeaderboardScoresDownloaded;
	struct Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntryCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboardEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboardEntries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoresDownloaded>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoresDownloaded, EntryCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries = { "SteamLeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoresDownloaded, SteamLeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardScoresDownloaded, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LeaderboardScoresDownloaded",
		sizeof(FLeaderboardScoresDownloaded),
		alignof(FLeaderboardScoresDownloaded),
		Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeaderboardScoresDownloaded"), sizeof(FLeaderboardScoresDownloaded), Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Hash() { return 2198732602U; }
class UScriptStruct* FUserStatsUnloaded::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FUserStatsUnloaded_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsUnloaded, Z_Construct_UPackage__Script_SteamCore(), TEXT("UserStatsUnloaded"), sizeof(FUserStatsUnloaded), Get_Z_Construct_UScriptStruct_FUserStatsUnloaded_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserStatsUnloaded>()
{
	return FUserStatsUnloaded::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserStatsUnloaded(FUserStatsUnloaded::StaticStruct, TEXT("/Script/SteamCore"), TEXT("UserStatsUnloaded"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFUserStatsUnloaded
{
	FScriptStruct_SteamCore_StaticRegisterNativesFUserStatsUnloaded()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserStatsUnloaded")),new UScriptStruct::TCppStructOps<FUserStatsUnloaded>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFUserStatsUnloaded;
	struct Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsUnloaded>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserStatsUnloaded, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserStatsUnloaded",
		sizeof(FUserStatsUnloaded),
		alignof(FUserStatsUnloaded),
		Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserStatsUnloaded()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserStatsUnloaded_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserStatsUnloaded"), sizeof(FUserStatsUnloaded), Get_Z_Construct_UScriptStruct_FUserStatsUnloaded_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserStatsUnloaded_Hash() { return 3323145857U; }
class UScriptStruct* FUserStatsStored::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FUserStatsStored_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsStored, Z_Construct_UPackage__Script_SteamCore(), TEXT("UserStatsStored"), sizeof(FUserStatsStored), Get_Z_Construct_UScriptStruct_FUserStatsStored_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserStatsStored>()
{
	return FUserStatsStored::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserStatsStored(FUserStatsStored::StaticStruct, TEXT("/Script/SteamCore"), TEXT("UserStatsStored"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFUserStatsStored
{
	FScriptStruct_SteamCore_StaticRegisterNativesFUserStatsStored()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserStatsStored")),new UScriptStruct::TCppStructOps<FUserStatsStored>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFUserStatsStored;
	struct Z_Construct_UScriptStruct_FUserStatsStored_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsStored_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsStored>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserStatsStored, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserStatsStored, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserStatsStored",
		sizeof(FUserStatsStored),
		alignof(FUserStatsStored),
		Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsStored_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserStatsStored()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserStatsStored_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserStatsStored"), sizeof(FUserStatsStored), Get_Z_Construct_UScriptStruct_FUserStatsStored_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserStatsStored_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserStatsStored_Hash() { return 496820932U; }
class UScriptStruct* FUserStatsReceived::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FUserStatsReceived_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsReceived, Z_Construct_UPackage__Script_SteamCore(), TEXT("UserStatsReceived"), sizeof(FUserStatsReceived), Get_Z_Construct_UScriptStruct_FUserStatsReceived_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserStatsReceived>()
{
	return FUserStatsReceived::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserStatsReceived(FUserStatsReceived::StaticStruct, TEXT("/Script/SteamCore"), TEXT("UserStatsReceived"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFUserStatsReceived
{
	FScriptStruct_SteamCore_StaticRegisterNativesFUserStatsReceived()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserStatsReceived")),new UScriptStruct::TCppStructOps<FUserStatsReceived>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFUserStatsReceived;
	struct Z_Construct_UScriptStruct_FUserStatsReceived_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsReceived>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserStatsReceived, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserStatsReceived, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserStatsReceived, GameID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserStatsReceived",
		sizeof(FUserStatsReceived),
		alignof(FUserStatsReceived),
		Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserStatsReceived()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserStatsReceived_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserStatsReceived"), sizeof(FUserStatsReceived), Get_Z_Construct_UScriptStruct_FUserStatsReceived_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserStatsReceived_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserStatsReceived_Hash() { return 2051801069U; }
class UScriptStruct* FUserAchievementStored::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FUserAchievementStored_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserAchievementStored, Z_Construct_UPackage__Script_SteamCore(), TEXT("UserAchievementStored"), sizeof(FUserAchievementStored), Get_Z_Construct_UScriptStruct_FUserAchievementStored_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserAchievementStored>()
{
	return FUserAchievementStored::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserAchievementStored(FUserAchievementStored::StaticStruct, TEXT("/Script/SteamCore"), TEXT("UserAchievementStored"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFUserAchievementStored
{
	FScriptStruct_SteamCore_StaticRegisterNativesFUserAchievementStored()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserAchievementStored")),new UScriptStruct::TCppStructOps<FUserAchievementStored>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFUserAchievementStored;
	struct Z_Construct_UScriptStruct_FUserAchievementStored_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGroupAchievement_MetaData[];
#endif
		static void NewProp_bGroupAchievement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGroupAchievement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserAchievementStored>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementStored, MaxProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementStored, CurrentProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementStored, AchievementName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_SetBit(void* Obj)
	{
		((FUserAchievementStored*)Obj)->bGroupAchievement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement = { "bGroupAchievement", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserAchievementStored), &Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementStored, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserAchievementStored",
		sizeof(FUserAchievementStored),
		alignof(FUserAchievementStored),
		Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementStored()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserAchievementStored_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserAchievementStored"), sizeof(FUserAchievementStored), Get_Z_Construct_UScriptStruct_FUserAchievementStored_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserAchievementStored_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserAchievementStored_Hash() { return 3308734169U; }
class UScriptStruct* FUserAchievementIconFetched::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FUserAchievementIconFetched_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserAchievementIconFetched, Z_Construct_UPackage__Script_SteamCore(), TEXT("UserAchievementIconFetched"), sizeof(FUserAchievementIconFetched), Get_Z_Construct_UScriptStruct_FUserAchievementIconFetched_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUserAchievementIconFetched>()
{
	return FUserAchievementIconFetched::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserAchievementIconFetched(FUserAchievementIconFetched::StaticStruct, TEXT("/Script/SteamCore"), TEXT("UserAchievementIconFetched"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFUserAchievementIconFetched
{
	FScriptStruct_SteamCore_StaticRegisterNativesFUserAchievementIconFetched()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UserAchievementIconFetched")),new UScriptStruct::TCppStructOps<FUserAchievementIconFetched>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFUserAchievementIconFetched;
	struct Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAchieved_MetaData[];
#endif
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserAchievementIconFetched>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementIconFetched, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((FUserAchievementIconFetched*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUserAchievementIconFetched), &Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementIconFetched, AchievementName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserAchievementIconFetched, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UserAchievementIconFetched",
		sizeof(FUserAchievementIconFetched),
		alignof(FUserAchievementIconFetched),
		Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementIconFetched()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserAchievementIconFetched_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserAchievementIconFetched"), sizeof(FUserAchievementIconFetched), Get_Z_Construct_UScriptStruct_FUserAchievementIconFetched_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserAchievementIconFetched_Hash() { return 2216729467U; }
class UScriptStruct* FSteamLeaderboard::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboard_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboard, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamLeaderboard"), sizeof(FSteamLeaderboard), Get_Z_Construct_UScriptStruct_FSteamLeaderboard_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamLeaderboard>()
{
	return FSteamLeaderboard::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamLeaderboard(FSteamLeaderboard::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamLeaderboard"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboard
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboard()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamLeaderboard")),new UScriptStruct::TCppStructOps<FSteamLeaderboard>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboard;
	struct Z_Construct_UScriptStruct_FSteamLeaderboard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboard>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamLeaderboard",
		sizeof(FSteamLeaderboard),
		alignof(FSteamLeaderboard),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboard_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamLeaderboard"), sizeof(FSteamLeaderboard), Get_Z_Construct_UScriptStruct_FSteamLeaderboard_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboard_Hash() { return 4016322512U; }
class UScriptStruct* FSteamLeaderboardEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboardEntry, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamLeaderboardEntry"), sizeof(FSteamLeaderboardEntry), Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamLeaderboardEntry>()
{
	return FSteamLeaderboardEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamLeaderboardEntry(FSteamLeaderboardEntry::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamLeaderboardEntry"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboardEntry
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboardEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamLeaderboardEntry")),new UScriptStruct::TCppStructOps<FSteamLeaderboardEntry>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboardEntry;
	struct Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGCHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GlobalRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboardEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, UGCHandle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, Details), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank = { "GlobalRank", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, GlobalRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamLeaderboardEntry",
		sizeof(FSteamLeaderboardEntry),
		alignof(FSteamLeaderboardEntry),
		Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamLeaderboardEntry"), sizeof(FSteamLeaderboardEntry), Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Hash() { return 3925206156U; }
class UScriptStruct* FSteamLeaderboardEntries::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboardEntries, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamLeaderboardEntries"), sizeof(FSteamLeaderboardEntries), Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamLeaderboardEntries>()
{
	return FSteamLeaderboardEntries::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamLeaderboardEntries(FSteamLeaderboardEntries::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamLeaderboardEntries"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboardEntries
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboardEntries()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamLeaderboardEntries")),new UScriptStruct::TCppStructOps<FSteamLeaderboardEntries>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamLeaderboardEntries;
	struct Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/UserStats/UserStatsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboardEntries>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamLeaderboardEntries",
		sizeof(FSteamLeaderboardEntries),
		alignof(FSteamLeaderboardEntries),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamLeaderboardEntries"), sizeof(FSteamLeaderboardEntries), Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Hash() { return 2251367979U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
