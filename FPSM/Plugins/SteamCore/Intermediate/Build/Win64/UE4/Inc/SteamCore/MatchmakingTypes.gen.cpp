// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Matchmaking/MatchmakingTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakingTypes() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbyData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyMatchList();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyKickedData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyGameCreated();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyEnterData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyDataUpdate();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatUpdate();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatMsg();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListChanged();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyComparison();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamSessionFindType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFindSessions_Parms
		{
			TArray<FBlueprintSessionResult> data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFindSessions_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFindSessions_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFindSessions_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::NewProp_data_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFindSessions__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnFindSessions_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFindSessions__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnJoinLobby_Parms
		{
			FJoinLobbyData data;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnJoinLobby_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnJoinLobby_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnJoinLobby_Parms, data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnJoinLobby__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnJoinLobby_Parms), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnCreateLobby_Parms
		{
			FCreateLobbyData data;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnCreateLobby_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnCreateLobby_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnCreateLobby_Parms, data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCreateLobby__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnCreateLobby_Parms), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestLobbyList_Parms
		{
			FLobbyMatchList data;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestLobbyList_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestLobbyList_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestLobbyList_Parms, data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestLobbyList__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnRequestLobbyList_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyKicked_Parms
		{
			FLobbyKickedData data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyKicked_Parms, data), Z_Construct_UScriptStruct_FLobbyKickedData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyKicked__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnLobbyKicked_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyInvite_Parms
		{
			FLobbyInviteData data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyInvite_Parms, data), Z_Construct_UScriptStruct_FLobbyInviteData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyInvite__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnLobbyInvite_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyGameCreated_Parms
		{
			FLobbyGameCreated data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyGameCreated_Parms, data), Z_Construct_UScriptStruct_FLobbyGameCreated, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyGameCreated__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnLobbyGameCreated_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyEnter_Parms
		{
			FLobbyEnterData data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyEnter_Parms, data), Z_Construct_UScriptStruct_FLobbyEnterData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyEnter__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnLobbyEnter_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyDataUpdate_Parms
		{
			FLobbyDataUpdate data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyDataUpdate_Parms, data), Z_Construct_UScriptStruct_FLobbyDataUpdate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyDataUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnLobbyDataUpdate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyChatUpdate_Parms
		{
			FLobbyChatUpdate data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyChatUpdate_Parms, data), Z_Construct_UScriptStruct_FLobbyChatUpdate, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyChatUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnLobbyChatUpdate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLobbyChatMsg_Parms
		{
			FLobbyChatMsg data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLobbyChatMsg_Parms, data), Z_Construct_UScriptStruct_FLobbyChatMsg, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLobbyChatMsg__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnLobbyChatMsg_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFavoritesListChanged_Parms
		{
			FFavoritesListChanged data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFavoritesListChanged_Parms, data), Z_Construct_UScriptStruct_FFavoritesListChanged, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFavoritesListChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnFavoritesListChanged_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms
		{
			FFavoritesListAccountsUpdated data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms, data), Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFavoritesListAccountsUpdated__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ESteamFavoriteFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamFavoriteFlags"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamFavoriteFlags>()
	{
		return ESteamFavoriteFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamFavoriteFlags(ESteamFavoriteFlags_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamFavoriteFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Hash() { return 2599315034U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamFavoriteFlags"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamFavoriteFlags::None", (int64)ESteamFavoriteFlags::None },
				{ "ESteamFavoriteFlags::Favorite", (int64)ESteamFavoriteFlags::Favorite },
				{ "ESteamFavoriteFlags::History", (int64)ESteamFavoriteFlags::History },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Favorite.Name", "ESteamFavoriteFlags::Favorite" },
				{ "History.Name", "ESteamFavoriteFlags::History" },
				{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
				{ "None.Name", "ESteamFavoriteFlags::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamFavoriteFlags",
				"ESteamFavoriteFlags",
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
	static UEnum* ESteamChatMemberStateChange_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamChatMemberStateChange"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatMemberStateChange>()
	{
		return ESteamChatMemberStateChange_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamChatMemberStateChange(ESteamChatMemberStateChange_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamChatMemberStateChange"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Hash() { return 1526460359U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamChatMemberStateChange"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamChatMemberStateChange::None", (int64)ESteamChatMemberStateChange::None },
				{ "ESteamChatMemberStateChange::Entered", (int64)ESteamChatMemberStateChange::Entered },
				{ "ESteamChatMemberStateChange::Left", (int64)ESteamChatMemberStateChange::Left },
				{ "ESteamChatMemberStateChange::Disconnected", (int64)ESteamChatMemberStateChange::Disconnected },
				{ "ESteamChatMemberStateChange::Kicked", (int64)ESteamChatMemberStateChange::Kicked },
				{ "ESteamChatMemberStateChange::Banned", (int64)ESteamChatMemberStateChange::Banned },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Banned.Name", "ESteamChatMemberStateChange::Banned" },
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Disconnected.Name", "ESteamChatMemberStateChange::Disconnected" },
				{ "Entered.Name", "ESteamChatMemberStateChange::Entered" },
				{ "Kicked.Name", "ESteamChatMemberStateChange::Kicked" },
				{ "Left.Name", "ESteamChatMemberStateChange::Left" },
				{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
				{ "None.Name", "ESteamChatMemberStateChange::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamChatMemberStateChange",
				"ESteamChatMemberStateChange",
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
	static UEnum* ESteamLobbyDistanceFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLobbyDistanceFilter"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyDistanceFilter>()
	{
		return ESteamLobbyDistanceFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLobbyDistanceFilter(ESteamLobbyDistanceFilter_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLobbyDistanceFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Hash() { return 206509306U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLobbyDistanceFilter"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLobbyDistanceFilter::Close", (int64)ESteamLobbyDistanceFilter::Close },
				{ "ESteamLobbyDistanceFilter::Default", (int64)ESteamLobbyDistanceFilter::Default },
				{ "ESteamLobbyDistanceFilter::Far", (int64)ESteamLobbyDistanceFilter::Far },
				{ "ESteamLobbyDistanceFilter::Worldwide", (int64)ESteamLobbyDistanceFilter::Worldwide },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Close.Name", "ESteamLobbyDistanceFilter::Close" },
				{ "Comment", "// lobby search distance. Lobby results are sorted from closest to farthest.\n" },
				{ "Default.Name", "ESteamLobbyDistanceFilter::Default" },
				{ "Far.Name", "ESteamLobbyDistanceFilter::Far" },
				{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
				{ "ToolTip", "lobby search distance. Lobby results are sorted from closest to farthest." },
				{ "Worldwide.Name", "ESteamLobbyDistanceFilter::Worldwide" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLobbyDistanceFilter",
				"ESteamLobbyDistanceFilter",
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
	static UEnum* ESteamLobbyComparison_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLobbyComparison, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLobbyComparison"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyComparison>()
	{
		return ESteamLobbyComparison_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLobbyComparison(ESteamLobbyComparison_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLobbyComparison"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Hash() { return 1151805493U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyComparison()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLobbyComparison"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLobbyComparison_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLobbyComparison::EqualToOrLessThan", (int64)ESteamLobbyComparison::EqualToOrLessThan },
				{ "ESteamLobbyComparison::LessThan", (int64)ESteamLobbyComparison::LessThan },
				{ "ESteamLobbyComparison::Equal", (int64)ESteamLobbyComparison::Equal },
				{ "ESteamLobbyComparison::GreaterThan", (int64)ESteamLobbyComparison::GreaterThan },
				{ "ESteamLobbyComparison::EqualToOrGreaterThan", (int64)ESteamLobbyComparison::EqualToOrGreaterThan },
				{ "ESteamLobbyComparison::NotEqual", (int64)ESteamLobbyComparison::NotEqual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// lobby search filter tools\n" },
				{ "Equal.Name", "ESteamLobbyComparison::Equal" },
				{ "EqualToOrGreaterThan.Name", "ESteamLobbyComparison::EqualToOrGreaterThan" },
				{ "EqualToOrLessThan.Name", "ESteamLobbyComparison::EqualToOrLessThan" },
				{ "GreaterThan.Name", "ESteamLobbyComparison::GreaterThan" },
				{ "LessThan.Name", "ESteamLobbyComparison::LessThan" },
				{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
				{ "NotEqual.Name", "ESteamLobbyComparison::NotEqual" },
				{ "ToolTip", "lobby search filter tools" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLobbyComparison",
				"ESteamLobbyComparison",
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
	static UEnum* ESteamLobbyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamLobbyType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamLobbyType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyType>()
	{
		return ESteamLobbyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamLobbyType(ESteamLobbyType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamLobbyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamLobbyType_Hash() { return 1974457817U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamLobbyType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamLobbyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamLobbyType::Private", (int64)ESteamLobbyType::Private },
				{ "ESteamLobbyType::FriendsOnly", (int64)ESteamLobbyType::FriendsOnly },
				{ "ESteamLobbyType::Public", (int64)ESteamLobbyType::Public },
				{ "ESteamLobbyType::Invisible", (int64)ESteamLobbyType::Invisible },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FriendsOnly.Name", "ESteamLobbyType::FriendsOnly" },
				{ "Invisible.Name", "ESteamLobbyType::Invisible" },
				{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
				{ "Private.Name", "ESteamLobbyType::Private" },
				{ "Public.Name", "ESteamLobbyType::Public" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamLobbyType",
				"ESteamLobbyType",
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
	static UEnum* ESteamSessionFindType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamSessionFindType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamSessionFindType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamSessionFindType>()
	{
		return ESteamSessionFindType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamSessionFindType(ESteamSessionFindType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamSessionFindType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Hash() { return 3052845367U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamSessionFindType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamSessionFindType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamSessionFindType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamSessionFindType::Listen", (int64)ESteamSessionFindType::Listen },
				{ "ESteamSessionFindType::Dedicated", (int64)ESteamSessionFindType::Dedicated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
				{ "Dedicated.Name", "ESteamSessionFindType::Dedicated" },
				{ "Listen.Name", "ESteamSessionFindType::Listen" },
				{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
				{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamSessionFindType",
				"ESteamSessionFindType",
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
class UScriptStruct* FJoinLobbyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FJoinLobbyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoinLobbyData, Z_Construct_UPackage__Script_SteamCore(), TEXT("JoinLobbyData"), sizeof(FJoinLobbyData), Get_Z_Construct_UScriptStruct_FJoinLobbyData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FJoinLobbyData>()
{
	return FJoinLobbyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJoinLobbyData(FJoinLobbyData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("JoinLobbyData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFJoinLobbyData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFJoinLobbyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("JoinLobbyData")),new UScriptStruct::TCppStructOps<FJoinLobbyData>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFJoinLobbyData;
	struct Z_Construct_UScriptStruct_FJoinLobbyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatRoomEnterResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChatRoomEnterResponse;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoinLobbyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoinLobbyData, ChatRoomEnterResponse), Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((FJoinLobbyData*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJoinLobbyData), &Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoinLobbyData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_ChatRoomEnterResponse_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_bLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinLobbyData_Statics::NewProp_SteamIDLobby,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoinLobbyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"JoinLobbyData",
		sizeof(FJoinLobbyData),
		alignof(FJoinLobbyData),
		Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinLobbyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJoinLobbyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JoinLobbyData"), sizeof(FJoinLobbyData), Get_Z_Construct_UScriptStruct_FJoinLobbyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJoinLobbyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJoinLobbyData_Hash() { return 3118450839U; }
class UScriptStruct* FCreateLobbyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FCreateLobbyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateLobbyData, Z_Construct_UPackage__Script_SteamCore(), TEXT("CreateLobbyData"), sizeof(FCreateLobbyData), Get_Z_Construct_UScriptStruct_FCreateLobbyData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FCreateLobbyData>()
{
	return FCreateLobbyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCreateLobbyData(FCreateLobbyData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("CreateLobbyData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFCreateLobbyData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFCreateLobbyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CreateLobbyData")),new UScriptStruct::TCppStructOps<FCreateLobbyData>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFCreateLobbyData;
	struct Z_Construct_UScriptStruct_FCreateLobbyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateLobbyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateLobbyData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreateLobbyData, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateLobbyData_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateLobbyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"CreateLobbyData",
		sizeof(FCreateLobbyData),
		alignof(FCreateLobbyData),
		Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateLobbyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCreateLobbyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CreateLobbyData"), sizeof(FCreateLobbyData), Get_Z_Construct_UScriptStruct_FCreateLobbyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCreateLobbyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCreateLobbyData_Hash() { return 3633218516U; }
class UScriptStruct* FLobbyMatchList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyMatchList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyMatchList, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyMatchList"), sizeof(FLobbyMatchList), Get_Z_Construct_UScriptStruct_FLobbyMatchList_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyMatchList>()
{
	return FLobbyMatchList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyMatchList(FLobbyMatchList::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyMatchList"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyMatchList
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyMatchList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyMatchList")),new UScriptStruct::TCppStructOps<FLobbyMatchList>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyMatchList;
	struct Z_Construct_UScriptStruct_FLobbyMatchList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbiesMatching_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LobbiesMatching;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyMatchList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyMatchList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching = { "LobbiesMatching", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyMatchList, LobbiesMatching), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyMatchList_Statics::NewProp_LobbiesMatching,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyMatchList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyMatchList",
		sizeof(FLobbyMatchList),
		alignof(FLobbyMatchList),
		Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyMatchList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyMatchList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyMatchList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyMatchList"), sizeof(FLobbyMatchList), Get_Z_Construct_UScriptStruct_FLobbyMatchList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyMatchList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyMatchList_Hash() { return 3207631091U; }
class UScriptStruct* FLobbyKickedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyKickedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyKickedData, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyKickedData"), sizeof(FLobbyKickedData), Get_Z_Construct_UScriptStruct_FLobbyKickedData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyKickedData>()
{
	return FLobbyKickedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyKickedData(FLobbyKickedData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyKickedData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyKickedData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyKickedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyKickedData")),new UScriptStruct::TCppStructOps<FLobbyKickedData>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyKickedData;
	struct Z_Construct_UScriptStruct_FLobbyKickedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKickedDueToDisconnect_MetaData[];
#endif
		static void NewProp_bKickedDueToDisconnect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKickedDueToDisconnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDAdmin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDAdmin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyKickedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_SetBit(void* Obj)
	{
		((FLobbyKickedData*)Obj)->bKickedDueToDisconnect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect = { "bKickedDueToDisconnect", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLobbyKickedData), &Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin = { "SteamIDAdmin", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyKickedData, SteamIDAdmin), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyKickedData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_bKickedDueToDisconnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDAdmin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyKickedData_Statics::NewProp_SteamIDLobby,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyKickedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyKickedData",
		sizeof(FLobbyKickedData),
		alignof(FLobbyKickedData),
		Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyKickedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyKickedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyKickedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyKickedData"), sizeof(FLobbyKickedData), Get_Z_Construct_UScriptStruct_FLobbyKickedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyKickedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyKickedData_Hash() { return 3022253851U; }
class UScriptStruct* FLobbyInviteData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyInviteData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyInviteData, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyInviteData"), sizeof(FLobbyInviteData), Get_Z_Construct_UScriptStruct_FLobbyInviteData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyInviteData>()
{
	return FLobbyInviteData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyInviteData(FLobbyInviteData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyInviteData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyInviteData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyInviteData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyInviteData")),new UScriptStruct::TCppStructOps<FLobbyInviteData>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyInviteData;
	struct Z_Construct_UScriptStruct_FLobbyInviteData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyInviteData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInviteData, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInviteData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyInviteData, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_GameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyInviteData_Statics::NewProp_SteamIDUser,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyInviteData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyInviteData",
		sizeof(FLobbyInviteData),
		alignof(FLobbyInviteData),
		Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyInviteData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyInviteData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyInviteData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyInviteData"), sizeof(FLobbyInviteData), Get_Z_Construct_UScriptStruct_FLobbyInviteData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyInviteData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyInviteData_Hash() { return 2508365111U; }
class UScriptStruct* FLobbyGameCreated::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyGameCreated_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyGameCreated, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyGameCreated"), sizeof(FLobbyGameCreated), Get_Z_Construct_UScriptStruct_FLobbyGameCreated_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyGameCreated>()
{
	return FLobbyGameCreated::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyGameCreated(FLobbyGameCreated::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyGameCreated"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyGameCreated
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyGameCreated()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyGameCreated")),new UScriptStruct::TCppStructOps<FLobbyGameCreated>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyGameCreated;
	struct Z_Construct_UScriptStruct_FLobbyGameCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDGameServer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyGameCreated>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyGameCreated, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyGameCreated, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyGameCreated, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyGameCreated, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_IP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDGameServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::NewProp_SteamIDLobby,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyGameCreated",
		sizeof(FLobbyGameCreated),
		alignof(FLobbyGameCreated),
		Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyGameCreated()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyGameCreated_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyGameCreated"), sizeof(FLobbyGameCreated), Get_Z_Construct_UScriptStruct_FLobbyGameCreated_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyGameCreated_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyGameCreated_Hash() { return 3331638613U; }
class UScriptStruct* FLobbyEnterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyEnterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyEnterData, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyEnterData"), sizeof(FLobbyEnterData), Get_Z_Construct_UScriptStruct_FLobbyEnterData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyEnterData>()
{
	return FLobbyEnterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyEnterData(FLobbyEnterData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyEnterData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyEnterData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyEnterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyEnterData")),new UScriptStruct::TCppStructOps<FLobbyEnterData>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyEnterData;
	struct Z_Construct_UScriptStruct_FLobbyEnterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatRoomEnterResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChatRoomEnterResponse;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyEnterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyEnterData, ChatRoomEnterResponse), Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((FLobbyEnterData*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLobbyEnterData), &Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyEnterData, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_ChatRoomEnterResponse_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_bLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyEnterData_Statics::NewProp_SteamIDLobby,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyEnterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyEnterData",
		sizeof(FLobbyEnterData),
		alignof(FLobbyEnterData),
		Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyEnterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyEnterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyEnterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyEnterData"), sizeof(FLobbyEnterData), Get_Z_Construct_UScriptStruct_FLobbyEnterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyEnterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyEnterData_Hash() { return 2317342959U; }
class UScriptStruct* FLobbyDataUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyDataUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyDataUpdate, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyDataUpdate"), sizeof(FLobbyDataUpdate), Get_Z_Construct_UScriptStruct_FLobbyDataUpdate_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyDataUpdate>()
{
	return FLobbyDataUpdate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyDataUpdate(FLobbyDataUpdate::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyDataUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyDataUpdate
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyDataUpdate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyDataUpdate")),new UScriptStruct::TCppStructOps<FLobbyDataUpdate>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyDataUpdate;
	struct Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyDataUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FLobbyDataUpdate*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLobbyDataUpdate), &Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember = { "SteamIDMember", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyDataUpdate, SteamIDMember), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyDataUpdate, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::NewProp_SteamIDLobby,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyDataUpdate",
		sizeof(FLobbyDataUpdate),
		alignof(FLobbyDataUpdate),
		Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyDataUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyDataUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyDataUpdate"), sizeof(FLobbyDataUpdate), Get_Z_Construct_UScriptStruct_FLobbyDataUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyDataUpdate_Hash() { return 2997899302U; }
class UScriptStruct* FLobbyChatUpdate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyChatUpdate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyChatUpdate, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyChatUpdate"), sizeof(FLobbyChatUpdate), Get_Z_Construct_UScriptStruct_FLobbyChatUpdate_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyChatUpdate>()
{
	return FLobbyChatUpdate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyChatUpdate(FLobbyChatUpdate::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyChatUpdate"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyChatUpdate
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyChatUpdate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyChatUpdate")),new UScriptStruct::TCppStructOps<FLobbyChatUpdate>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyChatUpdate;
	struct Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatMemberStateChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChatMemberStateChange;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChatMemberStateChange_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChatMemberStateChange_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDMakingChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDMakingChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUserChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUserChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyChatUpdate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatUpdate, ChatMemberStateChange), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner = { "ChatMemberStateChange", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamChatMemberStateChange, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange = { "SteamIDMakingChange", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDMakingChange), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged = { "SteamIDUserChanged", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDUserChanged), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatUpdate, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_ChatMemberStateChange_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDMakingChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDUserChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::NewProp_SteamIDLobby,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyChatUpdate",
		sizeof(FLobbyChatUpdate),
		alignof(FLobbyChatUpdate),
		Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatUpdate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyChatUpdate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyChatUpdate"), sizeof(FLobbyChatUpdate), Get_Z_Construct_UScriptStruct_FLobbyChatUpdate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyChatUpdate_Hash() { return 3097226302U; }
class UScriptStruct* FLobbyChatMsg::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLobbyChatMsg_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLobbyChatMsg, Z_Construct_UPackage__Script_SteamCore(), TEXT("LobbyChatMsg"), sizeof(FLobbyChatMsg), Get_Z_Construct_UScriptStruct_FLobbyChatMsg_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLobbyChatMsg>()
{
	return FLobbyChatMsg::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLobbyChatMsg(FLobbyChatMsg::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LobbyChatMsg"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLobbyChatMsg
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLobbyChatMsg()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LobbyChatMsg")),new UScriptStruct::TCppStructOps<FLobbyChatMsg>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLobbyChatMsg;
	struct Z_Construct_UScriptStruct_FLobbyChatMsg_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChatID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatEntryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChatEntryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChatEntryType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLobbyChatMsg>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID = { "ChatID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatMsg, ChatID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType = { "ChatEntryType", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatMsg, ChatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatMsg, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLobbyChatMsg, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_ChatEntryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::NewProp_SteamIDLobby,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LobbyChatMsg",
		sizeof(FLobbyChatMsg),
		alignof(FLobbyChatMsg),
		Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatMsg()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLobbyChatMsg_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LobbyChatMsg"), sizeof(FLobbyChatMsg), Get_Z_Construct_UScriptStruct_FLobbyChatMsg_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLobbyChatMsg_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLobbyChatMsg_Hash() { return 2469687449U; }
class UScriptStruct* FFavoritesListChanged::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FFavoritesListChanged_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFavoritesListChanged, Z_Construct_UPackage__Script_SteamCore(), TEXT("FavoritesListChanged"), sizeof(FFavoritesListChanged), Get_Z_Construct_UScriptStruct_FFavoritesListChanged_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FFavoritesListChanged>()
{
	return FFavoritesListChanged::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFavoritesListChanged(FFavoritesListChanged::StaticStruct, TEXT("/Script/SteamCore"), TEXT("FavoritesListChanged"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFFavoritesListChanged
{
	FScriptStruct_SteamCore_StaticRegisterNativesFFavoritesListChanged()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FavoritesListChanged")),new UScriptStruct::TCppStructOps<FFavoritesListChanged>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFFavoritesListChanged;
	struct Z_Construct_UScriptStruct_FFavoritesListChanged_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdd_MetaData[];
#endif
		static void NewProp_bAdd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFavoritesListChanged>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListChanged, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_SetBit(void* Obj)
	{
		((FFavoritesListChanged*)Obj)->bAdd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd = { "bAdd", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFavoritesListChanged), &Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListChanged, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListChanged, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort = { "ConnectionPort", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListChanged, ConnectionPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListChanged, QueryPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListChanged, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_SteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_bAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_Flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_ConnectionPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_QueryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::NewProp_IP,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"FavoritesListChanged",
		sizeof(FFavoritesListChanged),
		alignof(FFavoritesListChanged),
		Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListChanged()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFavoritesListChanged_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FavoritesListChanged"), sizeof(FFavoritesListChanged), Get_Z_Construct_UScriptStruct_FFavoritesListChanged_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFavoritesListChanged_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFavoritesListChanged_Hash() { return 911329688U; }
class UScriptStruct* FFavoritesListAccountsUpdated::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated, Z_Construct_UPackage__Script_SteamCore(), TEXT("FavoritesListAccountsUpdated"), sizeof(FFavoritesListAccountsUpdated), Get_Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FFavoritesListAccountsUpdated>()
{
	return FFavoritesListAccountsUpdated::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFavoritesListAccountsUpdated(FFavoritesListAccountsUpdated::StaticStruct, TEXT("/Script/SteamCore"), TEXT("FavoritesListAccountsUpdated"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFFavoritesListAccountsUpdated
{
	FScriptStruct_SteamCore_StaticRegisterNativesFFavoritesListAccountsUpdated()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FavoritesListAccountsUpdated")),new UScriptStruct::TCppStructOps<FFavoritesListAccountsUpdated>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFFavoritesListAccountsUpdated;
	struct Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFavoritesListAccountsUpdated>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Matchmaking" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFavoritesListAccountsUpdated, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"FavoritesListAccountsUpdated",
		sizeof(FFavoritesListAccountsUpdated),
		alignof(FFavoritesListAccountsUpdated),
		Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FavoritesListAccountsUpdated"), sizeof(FFavoritesListAccountsUpdated), Get_Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Hash() { return 1082356228U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
