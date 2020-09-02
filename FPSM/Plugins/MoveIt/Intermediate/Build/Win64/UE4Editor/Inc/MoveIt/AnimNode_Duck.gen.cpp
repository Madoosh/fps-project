// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_Duck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Duck() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Duck();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace();
// End Cross Module References
class UScriptStruct* FAnimNode_Duck::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Duck_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Duck, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_Duck"), sizeof(FAnimNode_Duck), Get_Z_Construct_UScriptStruct_FAnimNode_Duck_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_Duck>()
{
	return FAnimNode_Duck::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Duck(FAnimNode_Duck::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_Duck"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_Duck
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_Duck()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_Duck")),new UScriptStruct::TCppStructOps<FAnimNode_Duck>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_Duck;
	struct Z_Construct_UScriptStruct_FAnimNode_Duck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DuckRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DuckRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnticipationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnticipationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Procedural ducking under obstacles\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Duck.h" },
		{ "ToolTip", "Procedural ducking under obstacles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Duck>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_ResetRate_MetaData[] = {
		{ "Category", "Duck" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Duck.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_ResetRate = { "ResetRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Duck, ResetRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_ResetRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_ResetRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckRate_MetaData[] = {
		{ "Category", "Duck" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Duck.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckRate = { "DuckRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Duck, DuckRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_AnticipationDistance_MetaData[] = {
		{ "Category", "Duck" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Duck.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_AnticipationDistance = { "AnticipationDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Duck, AnticipationDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_AnticipationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_AnticipationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_HalfHeight_MetaData[] = {
		{ "Category", "Duck" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Duck.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Duck, HalfHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_HalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_HalfHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_ResetRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_AnticipationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_HalfHeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace,
		&NewStructOps,
		"AnimNode_Duck",
		sizeof(FAnimNode_Duck),
		alignof(FAnimNode_Duck),
		Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Duck()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Duck_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Duck"), sizeof(FAnimNode_Duck), Get_Z_Construct_UScriptStruct_FAnimNode_Duck_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Duck_Hash() { return 1649893683U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
