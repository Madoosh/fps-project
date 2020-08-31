// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/MatchmakingServers/MatchmakingServersTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakingServersTypes() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerRule();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr();
	STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnServerRules_Parms
		{
			TArray<FGameServerRule> data;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnServerRules_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnServerRules_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnServerRules_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameServerRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::NewProp_data_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerRules__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnServerRules_Parms), Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnServerPing_Parms
		{
			FGameServerItem data;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnServerPing_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnServerPing_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnServerPing_Parms, data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServerPing__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnServerPing_Parms), Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnServersUpdated_Parms
		{
			TArray<FGameServerItem> data;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnServersUpdated_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnServersUpdated_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnServersUpdated_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::NewProp_data_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnServersUpdated__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnServersUpdated_Parms), Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FGameServerRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGameServerRule_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameServerRule, Z_Construct_UPackage__Script_SteamCore(), TEXT("GameServerRule"), sizeof(FGameServerRule), Get_Z_Construct_UScriptStruct_FGameServerRule_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameServerRule>()
{
	return FGameServerRule::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameServerRule(FGameServerRule::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GameServerRule"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGameServerRule
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGameServerRule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameServerRule")),new UScriptStruct::TCppStructOps<FGameServerRule>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGameServerRule;
	struct Z_Construct_UScriptStruct_FGameServerRule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerRule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameServerRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameServerRule>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerRule, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerRule, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameServerRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameServerRule",
		sizeof(FGameServerRule),
		alignof(FGameServerRule),
		Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameServerRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameServerRule_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameServerRule"), sizeof(FGameServerRule), Get_Z_Construct_UScriptStruct_FGameServerRule_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameServerRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameServerRule_Hash() { return 3273886612U; }
class UScriptStruct* FGameServerItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGameServerItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameServerItem, Z_Construct_UPackage__Script_SteamCore(), TEXT("GameServerItem"), sizeof(FGameServerItem), Get_Z_Construct_UScriptStruct_FGameServerItem_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameServerItem>()
{
	return FGameServerItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameServerItem(FGameServerItem::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GameServerItem"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGameServerItem
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGameServerItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameServerItem")),new UScriptStruct::TCppStructOps<FGameServerItem>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGameServerItem;
	struct Z_Construct_UScriptStruct_FGameServerItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSecure_MetaData[];
#endif
		static void NewProp_bSecure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPassword_MetaData[];
#endif
		static void NewProp_bPassword_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPassword;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BotPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Players;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamServerAddr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamServerAddr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameServerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameServerItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_SetBit(void* Obj)
	{
		((FGameServerItem*)Obj)->bSecure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameServerItem), &Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_SetBit(void* Obj)
	{
		((FGameServerItem*)Obj)->bPassword = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword = { "bPassword", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameServerItem), &Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion = { "ServerVersion", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, ServerVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers = { "BotPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, BotPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, MaxPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, Players), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, Ping), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr = { "SteamServerAddr", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, SteamServerAddr), Z_Construct_UScriptStruct_FSteamServerAddr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags = { "GameTags", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, GameTags), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription = { "GameDescription", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, GameDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameServerItem, ServerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameServerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameServerItem",
		sizeof(FGameServerItem),
		alignof(FGameServerItem),
		Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameServerItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameServerItem"), sizeof(FGameServerItem), Get_Z_Construct_UScriptStruct_FGameServerItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameServerItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameServerItem_Hash() { return 3221385273U; }
class UScriptStruct* FSteamServerAddr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamServerAddr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServerAddr, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamServerAddr"), sizeof(FSteamServerAddr), Get_Z_Construct_UScriptStruct_FSteamServerAddr_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamServerAddr>()
{
	return FSteamServerAddr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamServerAddr(FSteamServerAddr::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamServerAddr"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamServerAddr
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamServerAddr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamServerAddr")),new UScriptStruct::TCppStructOps<FSteamServerAddr>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamServerAddr;
	struct Z_Construct_UScriptStruct_FSteamServerAddr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamP2PAddr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SteamP2PAddr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionAddressString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectionAddressString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServerAddr>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr = { "SteamP2PAddr", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServerAddr, SteamP2PAddr), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString = { "ConnectionAddressString", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServerAddr, ConnectionAddressString), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServerAddr, QueryPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServerAddr, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServerAddr, IP), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamServerAddr",
		sizeof(FSteamServerAddr),
		alignof(FSteamServerAddr),
		Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamServerAddr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamServerAddr"), sizeof(FSteamServerAddr), Get_Z_Construct_UScriptStruct_FSteamServerAddr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamServerAddr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamServerAddr_Hash() { return 870569314U; }
	DEFINE_FUNCTION(UServerFilter::execGetFilters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetFilters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterLinux)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterLinux();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterNoPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterNoPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterHasPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterHasPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterNotFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterNotFull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterSecure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterSecure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterDedicated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterDedicated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterGameAddr)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterGameAddr(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterNor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterNor(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterNand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterNand(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterOr)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterOr(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterAnd)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterAnd(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterGameTagsNor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterGameTagsNor(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterGameTagsAnd)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterGameTagsAnd(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterGameDataNor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterGameDataNor(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterGameDataOr)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterGameDataOr(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterGameDataAnd)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterGameDataAnd(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UServerFilter::execAddFilterMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFilterMap(Z_Param_value);
		P_NATIVE_END;
	}
	void UServerFilter::StaticRegisterNativesUServerFilter()
	{
		UClass* Class = UServerFilter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFilterAnd", &UServerFilter::execAddFilterAnd },
			{ "AddFilterDedicated", &UServerFilter::execAddFilterDedicated },
			{ "AddFilterGameAddr", &UServerFilter::execAddFilterGameAddr },
			{ "AddFilterGameDataAnd", &UServerFilter::execAddFilterGameDataAnd },
			{ "AddFilterGameDataNor", &UServerFilter::execAddFilterGameDataNor },
			{ "AddFilterGameDataOr", &UServerFilter::execAddFilterGameDataOr },
			{ "AddFilterGameTagsAnd", &UServerFilter::execAddFilterGameTagsAnd },
			{ "AddFilterGameTagsNor", &UServerFilter::execAddFilterGameTagsNor },
			{ "AddFilterHasPlayers", &UServerFilter::execAddFilterHasPlayers },
			{ "AddFilterLinux", &UServerFilter::execAddFilterLinux },
			{ "AddFilterMap", &UServerFilter::execAddFilterMap },
			{ "AddFilterNand", &UServerFilter::execAddFilterNand },
			{ "AddFilterNoPlayers", &UServerFilter::execAddFilterNoPlayers },
			{ "AddFilterNor", &UServerFilter::execAddFilterNor },
			{ "AddFilterNotFull", &UServerFilter::execAddFilterNotFull },
			{ "AddFilterOr", &UServerFilter::execAddFilterOr },
			{ "AddFilterSecure", &UServerFilter::execAddFilterSecure },
			{ "GetFilters", &UServerFilter::execGetFilters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics
	{
		struct ServerFilter_eventAddFilterAnd_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterAnd_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterAnd", nullptr, nullptr, sizeof(ServerFilter_eventAddFilterAnd_Parms), Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterAnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterDedicated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterDedicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics
	{
		struct ServerFilter_eventAddFilterGameAddr_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameAddr_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameAddr", nullptr, nullptr, sizeof(ServerFilter_eventAddFilterGameAddr_Parms), Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameAddr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics
	{
		struct ServerFilter_eventAddFilterGameDataAnd_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameDataAnd_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameDataAnd", nullptr, nullptr, sizeof(ServerFilter_eventAddFilterGameDataAnd_Parms), Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics
	{
		struct ServerFilter_eventAddFilterGameDataNor_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameDataNor_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameDataNor", nullptr, nullptr, sizeof(ServerFilter_eventAddFilterGameDataNor_Parms), Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics
	{
		struct ServerFilter_eventAddFilterGameDataOr_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameDataOr_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameDataOr", nullptr, nullptr, sizeof(ServerFilter_eventAddFilterGameDataOr_Parms), Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics
	{
		struct ServerFilter_eventAddFilterGameTagsAnd_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameTagsAnd_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameTagsAnd", nullptr, nullptr, sizeof(ServerFilter_eventAddFilterGameTagsAnd_Parms), Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics
	{
		struct ServerFilter_eventAddFilterGameTagsNor_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameTagsNor_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameTagsNor", nullptr, nullptr, sizeof(ServerFilter_eventAddFilterGameTagsNor_Parms), Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterHasPlayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterLinux", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterLinux()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics
	{
		struct ServerFilter_eventAddFilterMap_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterMap_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterMap", nullptr, nullptr, sizeof(ServerFilter_eventAddFilterMap_Parms), Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics
	{
		struct ServerFilter_eventAddFilterNand_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterNand_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNand", nullptr, nullptr, sizeof(ServerFilter_eventAddFilterNand_Parms), Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNoPlayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics
	{
		struct ServerFilter_eventAddFilterNor_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterNor_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNor", nullptr, nullptr, sizeof(ServerFilter_eventAddFilterNor_Parms), Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNotFull", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNotFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics
	{
		struct ServerFilter_eventAddFilterOr_Parms
		{
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterOr_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterOr", nullptr, nullptr, sizeof(ServerFilter_eventAddFilterOr_Parms), Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterOr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterSecure", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_AddFilterSecure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UServerFilter_GetFilters_Statics
	{
		struct ServerFilter_eventGetFilters_Parms
		{
			TMap<FString,FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ServerFilter_eventGetFilters_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerFilter_GetFilters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "GetFilters", nullptr, nullptr, sizeof(ServerFilter_eventGetFilters_Parms), Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerFilter_GetFilters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerFilter_GetFilters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UServerFilter_NoRegister()
	{
		return UServerFilter::StaticClass();
	}
	struct Z_Construct_UClass_UServerFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UServerFilter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerFilter_AddFilterAnd, "AddFilterAnd" }, // 761653009
		{ &Z_Construct_UFunction_UServerFilter_AddFilterDedicated, "AddFilterDedicated" }, // 627320876
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameAddr, "AddFilterGameAddr" }, // 134527261
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd, "AddFilterGameDataAnd" }, // 3104759620
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor, "AddFilterGameDataNor" }, // 1804201260
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr, "AddFilterGameDataOr" }, // 1749691901
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd, "AddFilterGameTagsAnd" }, // 1616108419
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor, "AddFilterGameTagsNor" }, // 1222392067
		{ &Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers, "AddFilterHasPlayers" }, // 1228911403
		{ &Z_Construct_UFunction_UServerFilter_AddFilterLinux, "AddFilterLinux" }, // 4070317208
		{ &Z_Construct_UFunction_UServerFilter_AddFilterMap, "AddFilterMap" }, // 480221912
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNand, "AddFilterNand" }, // 2810811223
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers, "AddFilterNoPlayers" }, // 1423525805
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNor, "AddFilterNor" }, // 3981960135
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNotFull, "AddFilterNotFull" }, // 3450709732
		{ &Z_Construct_UFunction_UServerFilter_AddFilterOr, "AddFilterOr" }, // 3187313224
		{ &Z_Construct_UFunction_UServerFilter_AddFilterSecure, "AddFilterSecure" }, // 834791865
		{ &Z_Construct_UFunction_UServerFilter_GetFilters, "GetFilters" }, // 2349671060
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MatchmakingServers/MatchmakingServersTypes.h" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServersTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerFilter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UServerFilter_Statics::ClassParams = {
		&UServerFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UServerFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerFilter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UServerFilter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UServerFilter, 669764527);
	template<> STEAMCORE_API UClass* StaticClass<UServerFilter>()
	{
		return UServerFilter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UServerFilter(Z_Construct_UClass_UServerFilter, &UServerFilter::StaticClass, TEXT("/Script/SteamCore"), TEXT("UServerFilter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerFilter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
