// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_TraversalSpring.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TraversalSpring() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TraversalSpring();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_TraversalSpring::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_TraversalSpring"), sizeof(FAnimNode_TraversalSpring), Get_Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_TraversalSpring>()
{
	return FAnimNode_TraversalSpring::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_TraversalSpring(FAnimNode_TraversalSpring::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_TraversalSpring"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_TraversalSpring
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_TraversalSpring()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_TraversalSpring")),new UScriptStruct::TCppStructOps<FAnimNode_TraversalSpring>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_TraversalSpring;
	struct Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDownwardStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDownwardStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringUpwardStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringUpwardStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Applies a spring based on movement while on an incline to push the pelvis up (walking uphill) or down (walking downhill)\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TraversalSpring.h" },
		{ "ToolTip", "Applies a spring based on movement while on an incline to push the pelvis up (walking uphill) or down (walking downhill)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TraversalSpring>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDamping_MetaData[] = {
		{ "Category", "TraversalSpring" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TraversalSpring.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TraversalSpring, SpringDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "TraversalSpring" },
		{ "Comment", "/** Spring stiffness (tightness) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TraversalSpring.h" },
		{ "ToolTip", "Spring stiffness (tightness)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TraversalSpring, SpringStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDownwardStrength_MetaData[] = {
		{ "Category", "TraversalSpring" },
		{ "Comment", "/** Spring strength (displacement, mass) when moving down a hill */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TraversalSpring.h" },
		{ "ToolTip", "Spring strength (displacement, mass) when moving down a hill" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDownwardStrength = { "SpringDownwardStrength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TraversalSpring, SpringDownwardStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDownwardStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDownwardStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringUpwardStrength_MetaData[] = {
		{ "Category", "TraversalSpring" },
		{ "Comment", "/** Spring strength (displacement, mass) when moving up a hill */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TraversalSpring.h" },
		{ "ToolTip", "Spring strength (displacement, mass) when moving up a hill" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringUpwardStrength = { "SpringUpwardStrength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TraversalSpring, SpringUpwardStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringUpwardStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringUpwardStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "TraversalSpring" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TraversalSpring.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TraversalSpring, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringDownwardStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_SpringUpwardStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::NewProp_Bone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_TraversalSpring",
		sizeof(FAnimNode_TraversalSpring),
		alignof(FAnimNode_TraversalSpring),
		Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TraversalSpring()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_TraversalSpring"), sizeof(FAnimNode_TraversalSpring), Get_Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TraversalSpring_Hash() { return 787537018U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
