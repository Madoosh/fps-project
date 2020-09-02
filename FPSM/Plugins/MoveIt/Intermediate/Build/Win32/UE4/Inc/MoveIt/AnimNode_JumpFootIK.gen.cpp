// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_JumpFootIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_JumpFootIK() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_JumpFootIK();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIJumpFootIK_Foot();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_JumpFootIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_JumpFootIK"), sizeof(FAnimNode_JumpFootIK), Get_Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_JumpFootIK>()
{
	return FAnimNode_JumpFootIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_JumpFootIK(FAnimNode_JumpFootIK::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_JumpFootIK"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_JumpFootIK
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_JumpFootIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_JumpFootIK")),new UScriptStruct::TCppStructOps<FAnimNode_JumpFootIK>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_JumpFootIK;
	struct Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRearFoot_MetaData[];
#endif
		static void NewProp_bUseRearFoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRearFoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Compute best leg to jump off then moves it toward the ground\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Compute best leg to jump off then moves it toward the ground" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_JumpFootIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Add every right foot that will be used for jumping */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Add every right foot that will be used for jumping" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet = { "RightFeet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_JumpFootIK, RightFeet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet_Inner = { "RightFeet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIJumpFootIK_Foot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Add every left foot that will be used for jumping */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Add every left foot that will be used for jumping" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet = { "LeftFeet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_JumpFootIK, LeftFeet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet_Inner = { "LeftFeet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIJumpFootIK_Foot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** If true, jump off the rear foot instead of front foot */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "If true, jump off the rear foot instead of front foot" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot_SetBit(void* Obj)
	{
		((FAnimNode_JumpFootIK*)Obj)->bUseRearFoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot = { "bUseRearFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_JumpFootIK), &Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_RightFeet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_LeftFeet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::NewProp_bUseRearFoot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_JumpFootIK",
		sizeof(FAnimNode_JumpFootIK),
		alignof(FAnimNode_JumpFootIK),
		Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_JumpFootIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_JumpFootIK"), sizeof(FAnimNode_JumpFootIK), Get_Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_JumpFootIK_Hash() { return 220828575U; }
class UScriptStruct* FMIJumpFootIK_Foot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIJumpFootIK_Foot"), sizeof(FMIJumpFootIK_Foot), Get_Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIJumpFootIK_Foot>()
{
	return FMIJumpFootIK_Foot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIJumpFootIK_Foot(FMIJumpFootIK_Foot::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MIJumpFootIK_Foot"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMIJumpFootIK_Foot
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMIJumpFootIK_Foot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MIJumpFootIK_Foot")),new UScriptStruct::TCppStructOps<FMIJumpFootIK_Foot>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMIJumpFootIK_Foot;
	struct Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInterpOutRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultInterpOutRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwimInterpOutRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwimInterpOutRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlyInterpOutRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlyInterpOutRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundInterpOutRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundInterpOutRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallInterpOutRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallInterpOutRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpInterpOutRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpInterpOutRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBonesInLimb_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumBonesInLimb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKFoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKFoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Foot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Foot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIJumpFootIK_Foot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_DefaultInterpOutRate_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** For when MovementMode is disabled or custom movement mode is used */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "For when MovementMode is disabled or custom movement mode is used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_DefaultInterpOutRate = { "DefaultInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, DefaultInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_DefaultInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_DefaultInterpOutRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_SwimInterpOutRate_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Rate to interpolate out the foot reaching to the ground while swimming */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Rate to interpolate out the foot reaching to the ground while swimming" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_SwimInterpOutRate = { "SwimInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, SwimInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_SwimInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_SwimInterpOutRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FlyInterpOutRate_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Rate to interpolate out the foot reaching to the ground while flying */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Rate to interpolate out the foot reaching to the ground while flying" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FlyInterpOutRate = { "FlyInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, FlyInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FlyInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FlyInterpOutRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_GroundInterpOutRate_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Rate to interpolate out the foot reaching to the ground while on the ground */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Rate to interpolate out the foot reaching to the ground while on the ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_GroundInterpOutRate = { "GroundInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, GroundInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_GroundInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_GroundInterpOutRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FallInterpOutRate_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Rate to interpolate out the foot reaching to the ground while falling downward */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Rate to interpolate out the foot reaching to the ground while falling downward" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FallInterpOutRate = { "FallInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, FallInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FallInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FallInterpOutRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_JumpInterpOutRate_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Rate to interpolate out the foot reaching to the ground while jumping upward */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Rate to interpolate out the foot reaching to the ground while jumping upward" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_JumpInterpOutRate = { "JumpInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, JumpInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_JumpInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_JumpInterpOutRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_NumBonesInLimb_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** How many other bones in the same limb (for bipeds/humans, this is 2 for the thigh and calf) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "How many other bones in the same limb (for bipeds/humans, this is 2 for the thigh and calf)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_NumBonesInLimb = { "NumBonesInLimb", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, NumBonesInLimb), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_NumBonesInLimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_NumBonesInLimb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_IKFoot_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Foot IK bone */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Foot IK bone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_IKFoot = { "IKFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, IKFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_IKFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_IKFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_Foot_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Foot bone */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_JumpFootIK.h" },
		{ "ToolTip", "Foot bone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_Foot = { "Foot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIJumpFootIK_Foot, Foot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_Foot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_Foot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_DefaultInterpOutRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_SwimInterpOutRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FlyInterpOutRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_GroundInterpOutRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_FallInterpOutRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_JumpInterpOutRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_NumBonesInLimb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_IKFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::NewProp_Foot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIJumpFootIK_Foot",
		sizeof(FMIJumpFootIK_Foot),
		alignof(FMIJumpFootIK_Foot),
		Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIJumpFootIK_Foot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIJumpFootIK_Foot"), sizeof(FMIJumpFootIK_Foot), Get_Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIJumpFootIK_Foot_Hash() { return 2619845359U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
