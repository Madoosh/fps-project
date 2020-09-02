// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MIAnimInstanceProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIAnimInstanceProxy() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
// End Cross Module References
class UScriptStruct* FMIAnimInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIAnimInstanceProxy, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIAnimInstanceProxy"), sizeof(FMIAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIAnimInstanceProxy>()
{
	return FMIAnimInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIAnimInstanceProxy(FMIAnimInstanceProxy::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MIAnimInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMIAnimInstanceProxy
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMIAnimInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MIAnimInstanceProxy")),new UScriptStruct::TCppStructOps<FMIAnimInstanceProxy>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMIAnimInstanceProxy;
	struct Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Used to pass data in/out of threaded animation nodes\n * This is used specifically to get the correct position for the offhand placed on a weapon\n */" },
		{ "DisplayName", "Native Variables" },
		{ "ModuleRelativePath", "Public/MIAnimInstanceProxy.h" },
		{ "ToolTip", "Used to pass data in/out of threaded animation nodes\nThis is used specifically to get the correct position for the offhand placed on a weapon" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIAnimInstanceProxy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"MIAnimInstanceProxy",
		sizeof(FMIAnimInstanceProxy),
		alignof(FMIAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIAnimInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIAnimInstanceProxy"), sizeof(FMIAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIAnimInstanceProxy_Hash() { return 3451807039U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
