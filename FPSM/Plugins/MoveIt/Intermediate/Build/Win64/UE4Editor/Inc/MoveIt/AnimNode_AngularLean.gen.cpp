// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_AngularLean.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AngularLean() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AngularLean();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase();
// End Cross Module References
class UScriptStruct* FAnimNode_AngularLean::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AngularLean_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AngularLean, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_AngularLean"), sizeof(FAnimNode_AngularLean), Get_Z_Construct_UScriptStruct_FAnimNode_AngularLean_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_AngularLean>()
{
	return FAnimNode_AngularLean::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_AngularLean(FAnimNode_AngularLean::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_AngularLean"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AngularLean
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AngularLean()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_AngularLean")),new UScriptStruct::TCppStructOps<FAnimNode_AngularLean>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AngularLean;
	struct Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Apply angular velocity to an additive leaning blendspace\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AngularLean.h" },
		{ "ToolTip", "Apply angular velocity to an additive leaning blendspace" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AngularLean>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase,
		&NewStructOps,
		"AnimNode_AngularLean",
		sizeof(FAnimNode_AngularLean),
		alignof(FAnimNode_AngularLean),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AngularLean()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AngularLean_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_AngularLean"), sizeof(FAnimNode_AngularLean), Get_Z_Construct_UScriptStruct_FAnimNode_AngularLean_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_AngularLean_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AngularLean_Hash() { return 2731530437U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
