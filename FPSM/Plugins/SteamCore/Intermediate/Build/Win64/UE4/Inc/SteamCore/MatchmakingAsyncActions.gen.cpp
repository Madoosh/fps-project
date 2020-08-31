// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Matchmaking/MatchmakingAsyncActions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakingAsyncActions() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbyData();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyMatchList();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAsyncAction();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreCreateSession_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreCreateSession();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFindSession_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreFindSession();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamSessionFindType();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreDestroySession_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreDestroySession();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms
		{
			FJoinLobbyData data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnJoinLobbyAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms
		{
			FCreateLobbyData data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCreateLobbyAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms
		{
			FLobbyMatchList data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms, data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestLobbyListAsyncDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionCreateLobby::execHandleCallback)
	{
		P_GET_STRUCT_REF(FCreateLobbyData,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionCreateLobby::execCreateLobbyAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ESteamLobbyType,Z_Param_lobbyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxMembers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingAsyncActionCreateLobby**)Z_Param__Result=USteamCoreMatchmakingAsyncActionCreateLobby::CreateLobbyAsync(Z_Param_WorldContextObject,ESteamLobbyType(Z_Param_lobbyType),Z_Param_maxMembers);
		P_NATIVE_END;
	}
	void USteamCoreMatchmakingAsyncActionCreateLobby::StaticRegisterNativesUSteamCoreMatchmakingAsyncActionCreateLobby()
	{
		UClass* Class = USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLobbyAsync", &USteamCoreMatchmakingAsyncActionCreateLobby::execCreateLobbyAsync },
			{ "HandleCallback", &USteamCoreMatchmakingAsyncActionCreateLobby::execHandleCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics
	{
		struct SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms
		{
			UObject* WorldContextObject;
			ESteamLobbyType lobbyType;
			int32 maxMembers;
			USteamCoreMatchmakingAsyncActionCreateLobby* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxMembers;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_lobbyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_lobbyType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_maxMembers = { "maxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, maxMembers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_lobbyType = { "lobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, lobbyType), Z_Construct_UEnum_SteamCore_ESteamLobbyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_lobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_maxMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_lobbyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_lobbyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Create a new matchmaking lobby.\n\x09*\n\x09* @param\x09lobbyType\x09\x09The type and visibility of this lobby. This can be changed later via SetLobbyType.\n\x09* @param\x09maxMembers\x09\x09\x09The maximum number of players that can join this lobby. This can not be above 250.\n\x09*/" },
		{ "DisplayName", "Create Lobby" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "Create a new matchmaking lobby.\n\n@param        lobbyType               The type and visibility of this lobby. This can be changed later via SetLobbyType.\n@param        maxMembers                      The maximum number of players that can join this lobby. This can not be above 250." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, nullptr, "CreateLobbyAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms
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
	void Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_NoRegister()
	{
		return USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_CreateLobbyAsync, "CreateLobbyAsync" }, // 1189817817
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionCreateLobby_HandleCallback, "HandleCallback" }, // 1803458038
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingAsyncActionCreateLobby\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Matchmaking/MatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingAsyncActionCreateLobby\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreMatchmakingAsyncActionCreateLobby, OnSuccess), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobbyAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingAsyncActionCreateLobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::ClassParams = {
		&USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreMatchmakingAsyncActionCreateLobby, 242122491);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingAsyncActionCreateLobby>()
	{
		return USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreMatchmakingAsyncActionCreateLobby(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby, &USteamCoreMatchmakingAsyncActionCreateLobby::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreMatchmakingAsyncActionCreateLobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingAsyncActionCreateLobby);
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionRequestLobbyList::execHandleCallback)
	{
		P_GET_STRUCT_REF(FLobbyMatchList,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionRequestLobbyList::execRequestLobbyListAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingAsyncActionRequestLobbyList**)Z_Param__Result=USteamCoreMatchmakingAsyncActionRequestLobbyList::RequestLobbyListAsync(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticRegisterNativesUSteamCoreMatchmakingAsyncActionRequestLobbyList()
	{
		UClass* Class = USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreMatchmakingAsyncActionRequestLobbyList::execHandleCallback },
			{ "RequestLobbyListAsync", &USteamCoreMatchmakingAsyncActionRequestLobbyList::execRequestLobbyListAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms
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
	void Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics
	{
		struct SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms
		{
			UObject* WorldContextObject;
			USteamCoreMatchmakingAsyncActionRequestLobbyList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Get a filtered list of relevant lobbies.\n\x09* There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\n\x09* To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\n\x09* If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\n\x09* This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\x09*\n\x09*/" },
		{ "DisplayName", "Request Lobby List" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "Get a filtered list of relevant lobbies.\nThere can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\nTo filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\nIf AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\nThis will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, nullptr, "RequestLobbyListAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_NoRegister()
	{
		return USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_HandleCallback, "HandleCallback" }, // 3958025637
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync, "RequestLobbyListAsync" }, // 320222433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingAsyncActionRequestLobbyList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Matchmaking/MatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingAsyncActionRequestLobbyList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreMatchmakingAsyncActionRequestLobbyList, OnSuccess), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyListAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingAsyncActionRequestLobbyList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::ClassParams = {
		&USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreMatchmakingAsyncActionRequestLobbyList, 3939206991);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingAsyncActionRequestLobbyList>()
	{
		return USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList, &USteamCoreMatchmakingAsyncActionRequestLobbyList::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreMatchmakingAsyncActionRequestLobbyList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingAsyncActionRequestLobbyList);
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionJoinLobby::execHandleCallback)
	{
		P_GET_STRUCT_REF(FJoinLobbyData,Z_Param_Out_data);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCallback(Z_Param_Out_data,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreMatchmakingAsyncActionJoinLobby::execJoinLobbyAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreMatchmakingAsyncActionJoinLobby**)Z_Param__Result=USteamCoreMatchmakingAsyncActionJoinLobby::JoinLobbyAsync(Z_Param_WorldContextObject,Z_Param_steamIDLobby);
		P_NATIVE_END;
	}
	void USteamCoreMatchmakingAsyncActionJoinLobby::StaticRegisterNativesUSteamCoreMatchmakingAsyncActionJoinLobby()
	{
		UClass* Class = USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCallback", &USteamCoreMatchmakingAsyncActionJoinLobby::execHandleCallback },
			{ "JoinLobbyAsync", &USteamCoreMatchmakingAsyncActionJoinLobby::execJoinLobbyAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics
	{
		struct SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms
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
	void Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms, data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby, nullptr, "HandleCallback", nullptr, nullptr, sizeof(SteamCoreMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics
	{
		struct SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms
		{
			UObject* WorldContextObject;
			FSteamID steamIDLobby;
			USteamCoreMatchmakingAsyncActionJoinLobby* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_steamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Joins an existing lobby.\n\x09* The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby to join.\n\x09*/" },
		{ "DisplayName", "Join Lobby" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "Joins an existing lobby.\nThe lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\n@param        steamIDLobby    The Steam ID of the lobby to join." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby, nullptr, "JoinLobbyAsync", nullptr, nullptr, sizeof(SteamCoreMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms), Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_NoRegister()
	{
		return USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_HandleCallback, "HandleCallback" }, // 4178261009
		{ &Z_Construct_UFunction_USteamCoreMatchmakingAsyncActionJoinLobby_JoinLobbyAsync, "JoinLobbyAsync" }, // 81210555
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreMatchmakingAsyncActionJoinLobby\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Matchmaking/MatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreMatchmakingAsyncActionJoinLobby\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreMatchmakingAsyncActionJoinLobby, OnSuccess), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobbyAsyncDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreMatchmakingAsyncActionJoinLobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::ClassParams = {
		&USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreMatchmakingAsyncActionJoinLobby, 849364311);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreMatchmakingAsyncActionJoinLobby>()
	{
		return USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreMatchmakingAsyncActionJoinLobby(Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby, &USteamCoreMatchmakingAsyncActionJoinLobby::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreMatchmakingAsyncActionJoinLobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreMatchmakingAsyncActionJoinLobby);
	DEFINE_FUNCTION(USteamCoreCreateSession::execCreateSteamCoreSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_sessionName);
		P_GET_PROPERTY(FIntProperty,Z_Param_numPublicConnections);
		P_GET_PROPERTY(FIntProperty,Z_Param_numPrivateConnections);
		P_GET_UBOOL(Z_Param_bUseLAN);
		P_GET_UBOOL(Z_Param_bAllowInvites);
		P_GET_UBOOL(Z_Param_bUsesPresence);
		P_GET_UBOOL(Z_Param_bAllowJoinViaPresence);
		P_GET_UBOOL(Z_Param_bAllowJoinViaPresenceFriendsOnly);
		P_GET_UBOOL(Z_Param_bAntiCheatProtected);
		P_GET_UBOOL(Z_Param_bUsesStats);
		P_GET_UBOOL(Z_Param_bShouldAdvertise);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreCreateSession**)Z_Param__Result=USteamCoreCreateSession::CreateSteamCoreSession(Z_Param_WorldContextObject,Z_Param_sessionName,Z_Param_numPublicConnections,Z_Param_numPrivateConnections,Z_Param_bUseLAN,Z_Param_bAllowInvites,Z_Param_bUsesPresence,Z_Param_bAllowJoinViaPresence,Z_Param_bAllowJoinViaPresenceFriendsOnly,Z_Param_bAntiCheatProtected,Z_Param_bUsesStats,Z_Param_bShouldAdvertise);
		P_NATIVE_END;
	}
	void USteamCoreCreateSession::StaticRegisterNativesUSteamCoreCreateSession()
	{
		UClass* Class = USteamCoreCreateSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSteamCoreSession", &USteamCoreCreateSession::execCreateSteamCoreSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics
	{
		struct SteamCoreCreateSession_eventCreateSteamCoreSession_Parms
		{
			UObject* WorldContextObject;
			FName sessionName;
			int32 numPublicConnections;
			int32 numPrivateConnections;
			bool bUseLAN;
			bool bAllowInvites;
			bool bUsesPresence;
			bool bAllowJoinViaPresence;
			bool bAllowJoinViaPresenceFriendsOnly;
			bool bAntiCheatProtected;
			bool bUsesStats;
			bool bShouldAdvertise;
			USteamCoreCreateSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bShouldAdvertise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
		static void NewProp_bUsesStats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesStats;
		static void NewProp_bAntiCheatProtected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatProtected;
		static void NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly;
		static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
		static void NewProp_bUsesPresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesPresence;
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numPrivateConnections;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numPublicConnections;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_sessionName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreCreateSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bShouldAdvertise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUsesStats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats = { "bUsesStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAntiCheatProtected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected = { "bAntiCheatProtected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAllowJoinViaPresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUsesPresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence = { "bUsesPresence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bAllowInvites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((SteamCoreCreateSession_eventCreateSteamCoreSession_Parms*)Obj)->bUseLAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_numPrivateConnections = { "numPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, numPrivateConnections), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_numPublicConnections = { "numPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, numPublicConnections), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_sessionName = { "sessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, sessionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bShouldAdvertise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAntiCheatProtected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowJoinViaPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUsesPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bAllowInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_bUseLAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_numPrivateConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_numPublicConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_sessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Creates an online session\n\x09* \n\x09* Automatically detects if we're running a dedicated or listen server\n\x09*\n\x09* Listen servers will create a Lobby Session, use \"FindSteamCoreSession\" to find Listen Servers\n\x09*\n\x09*    @param sessionName\x09\x09\x09\x09Name of our session\n\x09*    @param numPublicConnections\x09Number of public connections\n\x09*    @param PublicConnections\x09\x09Number of private connections\n\x09*    @param bUsesPresence\x09\x09\x09""Create a lobby for the session (disabled for dedicated servers)\n\x09*    @param bUseLAN\x09\x09\x09\x09\x09Used for LAN server\n\x09*/" },
		{ "CPP_Default_bAllowInvites", "true" },
		{ "CPP_Default_bAllowJoinViaPresence", "true" },
		{ "CPP_Default_bAllowJoinViaPresenceFriendsOnly", "false" },
		{ "CPP_Default_bAntiCheatProtected", "false" },
		{ "CPP_Default_bShouldAdvertise", "true" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_bUsesPresence", "true" },
		{ "CPP_Default_bUsesStats", "false" },
		{ "CPP_Default_numPrivateConnections", "0" },
		{ "CPP_Default_numPublicConnections", "5" },
		{ "CPP_Default_sessionName", "SteamCoreSession" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "Creates an online session\n\nAutomatically detects if we're running a dedicated or listen server\n\nListen servers will create a Lobby Session, use \"FindSteamCoreSession\" to find Listen Servers\n\n   @param sessionName                         Name of our session\n   @param numPublicConnections        Number of public connections\n   @param PublicConnections           Number of private connections\n   @param bUsesPresence                       Create a lobby for the session (disabled for dedicated servers)\n   @param bUseLAN                                     Used for LAN server" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreCreateSession, nullptr, "CreateSteamCoreSession", nullptr, nullptr, sizeof(SteamCoreCreateSession_eventCreateSteamCoreSession_Parms), Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreCreateSession_NoRegister()
	{
		return USteamCoreCreateSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreCreateSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreCreateSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreCreateSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreCreateSession_CreateSteamCoreSession, "CreateSteamCoreSession" }, // 4277737939
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreCreateSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreCreateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Matchmaking/MatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreCreateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreCreateSession, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreCreateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreCreateSession_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreCreateSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreCreateSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreCreateSession_Statics::ClassParams = {
		&USteamCoreCreateSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreCreateSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreCreateSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreCreateSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreCreateSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreCreateSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreCreateSession, 1566295717);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreCreateSession>()
	{
		return USteamCoreCreateSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreCreateSession(Z_Construct_UClass_USteamCoreCreateSession, &USteamCoreCreateSession::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreCreateSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreCreateSession);
	DEFINE_FUNCTION(USteamCoreFindSession::execOnCompleted)
	{
		P_GET_UBOOL(Z_Param_bSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleted(Z_Param_bSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreFindSession::execFindSteamCoreSessions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_GET_UBOOL(Z_Param_bUseLAN);
		P_GET_ENUM(ESteamSessionFindType,Z_Param_serverType);
		P_GET_UBOOL(Z_Param_bEmptyServersOnly);
		P_GET_UBOOL(Z_Param_bSecureServersOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreFindSession**)Z_Param__Result=USteamCoreFindSession::FindSteamCoreSessions(Z_Param_WorldContextObject,Z_Param_maxResults,Z_Param_bUseLAN,ESteamSessionFindType(Z_Param_serverType),Z_Param_bEmptyServersOnly,Z_Param_bSecureServersOnly);
		P_NATIVE_END;
	}
	void USteamCoreFindSession::StaticRegisterNativesUSteamCoreFindSession()
	{
		UClass* Class = USteamCoreFindSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSteamCoreSessions", &USteamCoreFindSession::execFindSteamCoreSessions },
			{ "OnCompleted", &USteamCoreFindSession::execOnCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics
	{
		struct SteamCoreFindSession_eventFindSteamCoreSessions_Parms
		{
			UObject* WorldContextObject;
			int32 maxResults;
			bool bUseLAN;
			ESteamSessionFindType serverType;
			bool bEmptyServersOnly;
			bool bSecureServersOnly;
			USteamCoreFindSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bSecureServersOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecureServersOnly;
		static void NewProp_bEmptyServersOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmptyServersOnly;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_serverType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_serverType_Underlying;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, ReturnValue), Z_Construct_UClass_USteamCoreFindSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly_SetBit(void* Obj)
	{
		((SteamCoreFindSession_eventFindSteamCoreSessions_Parms*)Obj)->bSecureServersOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly = { "bSecureServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly_SetBit(void* Obj)
	{
		((SteamCoreFindSession_eventFindSteamCoreSessions_Parms*)Obj)->bEmptyServersOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly = { "bEmptyServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_serverType = { "serverType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, serverType), Z_Construct_UEnum_SteamCore_ESteamSessionFindType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_serverType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((SteamCoreFindSession_eventFindSteamCoreSessions_Parms*)Obj)->bUseLAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreFindSession_eventFindSteamCoreSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bSecureServersOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bEmptyServersOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_serverType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_serverType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_bUseLAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_maxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Find Online Sessions\n\x09*\n\x09* This is primarily used to find Listen Servers (lobbies), can be used to find dedicated servers but will give less server info\n\x09*\n\x09* @param maxResults\x09\x09\x09\x09Max Number of Servers\n\x09* @param serverType\x09\x09\x09\x09Search for Listen or Dedicated servers\n\x09* @param bUseLAN\x09\x09\x09\x09Search for LAN servers only\n\x09* @param bEmptyServersOnly\x09\x09Only empty servers\n\x09* @param bSecureServersOnly\x09\x09Only secure servers\n\x09*/" },
		{ "CPP_Default_bEmptyServersOnly", "false" },
		{ "CPP_Default_bSecureServersOnly", "false" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_maxResults", "50" },
		{ "CPP_Default_serverType", "Listen" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "Find Online Sessions\n\nThis is primarily used to find Listen Servers (lobbies), can be used to find dedicated servers but will give less server info\n\n@param maxResults                             Max Number of Servers\n@param serverType                             Search for Listen or Dedicated servers\n@param bUseLAN                                Search for LAN servers only\n@param bEmptyServersOnly              Only empty servers\n@param bSecureServersOnly             Only secure servers" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFindSession, nullptr, "FindSteamCoreSessions", nullptr, nullptr, sizeof(SteamCoreFindSession_eventFindSteamCoreSessions_Parms), Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics
	{
		struct SteamCoreFindSession_eventOnCompleted_Parms
		{
			bool bSuccessful;
		};
		static void NewProp_bSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful_SetBit(void* Obj)
	{
		((SteamCoreFindSession_eventOnCompleted_Parms*)Obj)->bSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreFindSession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::NewProp_bSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreFindSession, nullptr, "OnCompleted", nullptr, nullptr, sizeof(SteamCoreFindSession_eventOnCompleted_Parms), Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreFindSession_OnCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreFindSession_OnCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreFindSession_NoRegister()
	{
		return USteamCoreFindSession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreFindSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreFindSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreFindSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreFindSession_FindSteamCoreSessions, "FindSteamCoreSessions" }, // 4198664617
		{ &Z_Construct_UFunction_USteamCoreFindSession_OnCompleted, "OnCompleted" }, // 1653433565
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFindSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreFindSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Matchmaking/MatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreFindSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreFindSession, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreFindSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreFindSession_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreFindSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreFindSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreFindSession_Statics::ClassParams = {
		&USteamCoreFindSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreFindSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFindSession_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreFindSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreFindSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreFindSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreFindSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreFindSession, 4121217010);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreFindSession>()
	{
		return USteamCoreFindSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreFindSession(Z_Construct_UClass_USteamCoreFindSession, &USteamCoreFindSession::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreFindSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreFindSession);
	DEFINE_FUNCTION(USteamCoreDestroySession::execOnCompleted)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_sessionName);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompleted(Z_Param_sessionName,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamCoreDestroySession::execDestroySteamCoreSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_sessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USteamCoreDestroySession**)Z_Param__Result=USteamCoreDestroySession::DestroySteamCoreSession(Z_Param_WorldContextObject,Z_Param_sessionName);
		P_NATIVE_END;
	}
	void USteamCoreDestroySession::StaticRegisterNativesUSteamCoreDestroySession()
	{
		UClass* Class = USteamCoreDestroySession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroySteamCoreSession", &USteamCoreDestroySession::execDestroySteamCoreSession },
			{ "OnCompleted", &USteamCoreDestroySession::execOnCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics
	{
		struct SteamCoreDestroySession_eventDestroySteamCoreSession_Parms
		{
			UObject* WorldContextObject;
			FName sessionName;
			USteamCoreDestroySession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_sessionName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreDestroySession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_sessionName = { "sessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms, sessionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_sessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Destroy an Online Session\n\x09*/" },
		{ "CPP_Default_sessionName", "SteamCoreSession" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "Destroy an Online Session" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreDestroySession, nullptr, "DestroySteamCoreSession", nullptr, nullptr, sizeof(SteamCoreDestroySession_eventDestroySteamCoreSession_Parms), Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics
	{
		struct SteamCoreDestroySession_eventOnCompleted_Parms
		{
			FName sessionName;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_sessionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((SteamCoreDestroySession_eventOnCompleted_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamCoreDestroySession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_sessionName = { "sessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamCoreDestroySession_eventOnCompleted_Parms, sessionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::NewProp_sessionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreDestroySession, nullptr, "OnCompleted", nullptr, nullptr, sizeof(SteamCoreDestroySession_eventOnCompleted_Parms), Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamCoreDestroySession_NoRegister()
	{
		return USteamCoreDestroySession::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreDestroySession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreDestroySession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamCoreDestroySession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreDestroySession_DestroySteamCoreSession, "DestroySteamCoreSession" }, // 768240592
		{ &Z_Construct_UFunction_USteamCoreDestroySession_OnCompleted, "OnCompleted" }, // 1573645323
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreDestroySession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreDestroySession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "Matchmaking/MatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreDestroySession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Matchmaking/MatchmakingAsyncActions.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USteamCoreDestroySession, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreDestroySession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreDestroySession_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreDestroySession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreDestroySession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreDestroySession_Statics::ClassParams = {
		&USteamCoreDestroySession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamCoreDestroySession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreDestroySession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreDestroySession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreDestroySession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreDestroySession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreDestroySession, 2841259770);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreDestroySession>()
	{
		return USteamCoreDestroySession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreDestroySession(Z_Construct_UClass_USteamCoreDestroySession, &USteamCoreDestroySession::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreDestroySession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreDestroySession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
