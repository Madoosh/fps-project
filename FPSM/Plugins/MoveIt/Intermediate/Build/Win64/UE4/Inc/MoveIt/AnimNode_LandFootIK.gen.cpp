// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_LandFootIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LandFootIK() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandFootIK();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIFoot_LandFootIK();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_LandFootIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LandFootIK, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_LandFootIK"), sizeof(FAnimNode_LandFootIK), Get_Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_LandFootIK>()
{
	return FAnimNode_LandFootIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LandFootIK(FAnimNode_LandFootIK::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_LandFootIK"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LandFootIK
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LandFootIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LandFootIK")),new UScriptStruct::TCppStructOps<FAnimNode_LandFootIK>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LandFootIK;
	struct Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFeet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RightFeet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightFeet_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFeet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeftFeet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftFeet_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pelvis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMinDistFromGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartMinDistFromGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpStartZVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpStartZVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Plants the feet at the predicted landing location\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
		{ "ToolTip", "Plants the feet at the predicted landing location" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LandFootIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_PredictResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_PredictResult = { "PredictResult", nullptr, (EPropertyFlags)0x0020088000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandFootIK, PredictResult), Z_Construct_UScriptStruct_FPredictProjectilePathResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_PredictResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_PredictResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet_MetaData[] = {
		{ "Category", "Land" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet = { "RightFeet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandFootIK, RightFeet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet_Inner = { "RightFeet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIFoot_LandFootIK, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet_MetaData[] = {
		{ "Category", "Land" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet = { "LeftFeet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandFootIK, LeftFeet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet_Inner = { "LeftFeet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIFoot_LandFootIK, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "Land" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandFootIK, Pelvis), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_Pelvis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_StartMinDistFromGround_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** Must be this close to ground to begin landing */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
		{ "ToolTip", "Must be this close to ground to begin landing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_StartMinDistFromGround = { "StartMinDistFromGround", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandFootIK, StartMinDistFromGround), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_StartMinDistFromGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_StartMinDistFromGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_JumpStartZVelocity_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** Z Velocity must be less than this amount while in the air to begin landing */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
		{ "ToolTip", "Z Velocity must be less than this amount while in the air to begin landing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_JumpStartZVelocity = { "JumpStartZVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandFootIK, JumpStartZVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_JumpStartZVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_JumpStartZVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_PredictResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_RightFeet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_LeftFeet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_Pelvis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_StartMinDistFromGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::NewProp_JumpStartZVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_LandFootIK",
		sizeof(FAnimNode_LandFootIK),
		alignof(FAnimNode_LandFootIK),
		Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandFootIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LandFootIK"), sizeof(FAnimNode_LandFootIK), Get_Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LandFootIK_Hash() { return 3192418788U; }
class UScriptStruct* FMIFoot_LandFootIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIFoot_LandFootIK, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIFoot_LandFootIK"), sizeof(FMIFoot_LandFootIK), Get_Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIFoot_LandFootIK>()
{
	return FMIFoot_LandFootIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIFoot_LandFootIK(FMIFoot_LandFootIK::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MIFoot_LandFootIK"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMIFoot_LandFootIK
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMIFoot_LandFootIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MIFoot_LandFootIK")),new UScriptStruct::TCppStructOps<FMIFoot_LandFootIK>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMIFoot_LandFootIK;
	struct Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachPct_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachPct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIFoot_LandFootIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_ReachPct_MetaData[] = {
		{ "Category", "Land" },
		{ "ClampMax", "1" },
		{ "Comment", "/** How far towards the ground the legs go */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
		{ "ToolTip", "How far towards the ground the legs go" },
		{ "UIMax", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_ReachPct = { "ReachPct", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFoot_LandFootIK, ReachPct), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_ReachPct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_ReachPct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_InterpRate_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** How fast the legs move toward the ground */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
		{ "ToolTip", "How fast the legs move toward the ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_InterpRate = { "InterpRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFoot_LandFootIK, InterpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_InterpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_InterpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_IKBone_MetaData[] = {
		{ "Category", "Land" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_IKBone = { "IKBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFoot_LandFootIK, IKBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_IKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_IKBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Land" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandFootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFoot_LandFootIK, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_ReachPct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_InterpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_IKBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::NewProp_Bone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIFoot_LandFootIK",
		sizeof(FMIFoot_LandFootIK),
		alignof(FMIFoot_LandFootIK),
		Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIFoot_LandFootIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIFoot_LandFootIK"), sizeof(FMIFoot_LandFootIK), Get_Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIFoot_LandFootIK_Hash() { return 1350909868U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
