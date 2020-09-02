// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_MotionWeight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MotionWeight() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MotionWeight();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace();
// End Cross Module References
class UScriptStruct* FAnimNode_MotionWeight::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MotionWeight, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_MotionWeight"), sizeof(FAnimNode_MotionWeight), Get_Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_MotionWeight>()
{
	return FAnimNode_MotionWeight::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_MotionWeight(FAnimNode_MotionWeight::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_MotionWeight"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_MotionWeight
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_MotionWeight()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_MotionWeight")),new UScriptStruct::TCppStructOps<FAnimNode_MotionWeight>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_MotionWeight;
	struct Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Apply weight shift from motion change - such as running fast then stopping suddenly, or starting suddenly\n *\x09This is just a shell that applies additive blendspace, the real magic happens elsewhere\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MotionWeight.h" },
		{ "ToolTip", "Apply weight shift from motion change - such as running fast then stopping suddenly, or starting suddenly\nThis is just a shell that applies additive blendspace, the real magic happens elsewhere" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MotionWeight>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Direction" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MotionWeight.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_MotionWeight, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewProp_Weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::NewProp_Weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace,
		&NewStructOps,
		"AnimNode_MotionWeight",
		sizeof(FAnimNode_MotionWeight),
		alignof(FAnimNode_MotionWeight),
		Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MotionWeight()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_MotionWeight"), sizeof(FAnimNode_MotionWeight), Get_Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MotionWeight_Hash() { return 3543625301U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
