// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_Gait.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Gait() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Gait();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIGait_Foot();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FAnimNode_Gait::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Gait_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Gait, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_Gait"), sizeof(FAnimNode_Gait), Get_Z_Construct_UScriptStruct_FAnimNode_Gait_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_Gait>()
{
	return FAnimNode_Gait::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Gait(FAnimNode_Gait::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_Gait"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_Gait
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_Gait()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_Gait")),new UScriptStruct::TCppStructOps<FAnimNode_Gait>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_Gait;
	struct Z_Construct_UScriptStruct_FAnimNode_Gait_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampIKLengthToBoneLength_MetaData[];
#endif
		static void NewProp_bClampIKLengthToBoneLength_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampIKLengthToBoneLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PelvisDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisTightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PelvisTightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisDisplacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PelvisDisplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedFootHeightBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedFootHeightBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeedFootHeightBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeedFootHeightBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopeTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SlopeTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopeTraceLengthBelowMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlopeTraceLengthBelowMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopeTraceStartHeightAboveMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlopeTraceStartHeightAboveMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopeTraceAheadTraceCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlopeTraceAheadTraceCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopeTraceAheadDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlopeTraceAheadDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopeSmoothingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlopeSmoothingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlopeAngleGaitMultiplierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlopeAngleGaitMultiplierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdjustGaitToSlope_MetaData[];
#endif
		static void NewProp_bAdjustGaitToSlope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdjustGaitToSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGait_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGait_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaitMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GaitMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gait_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Feet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Feet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Feet_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pelvis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Changes the distance between the feet while moving, and applies a spring to the pelvis to modify the weight at shorter gaits\n *\x09Using this node allows characters to walk into walls without the legs clipping, as it will ultimately run on the spot instead\n *\x09""Additionally gives the benefit of start and stop animations, procedurally\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "Changes the distance between the feet while moving, and applies a spring to the pelvis to modify the weight at shorter gaits\nUsing this node allows characters to walk into walls without the legs clipping, as it will ultimately run on the spot instead\nAdditionally gives the benefit of start and stop animations, procedurally" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Gait>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** If true, the IK length wont exceed the base bone length */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "If true, the IK length wont exceed the base bone length" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength_SetBit(void* Obj)
	{
		((FAnimNode_Gait*)Obj)->bClampIKLengthToBoneLength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength = { "bClampIKLengthToBoneLength", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_Gait), &Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDamping_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDamping = { "PelvisDamping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, PelvisDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisTightness_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisTightness = { "PelvisTightness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, PelvisTightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisTightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisTightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDisplacement_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDisplacement = { "PelvisDisplacement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, PelvisDisplacement), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDisplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxSpeedFootHeightBias_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxSpeedFootHeightBias = { "MaxSpeedFootHeightBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, MaxSpeedFootHeightBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxSpeedFootHeightBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxSpeedFootHeightBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinSpeedFootHeightBias_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinSpeedFootHeightBias = { "MinSpeedFootHeightBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, MinSpeedFootHeightBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinSpeedFootHeightBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinSpeedFootHeightBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceChannel_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceChannel = { "SlopeTraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceLengthBelowMesh_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** How far below the mesh to trace to */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "How far below the mesh to trace to" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceLengthBelowMesh = { "SlopeTraceLengthBelowMesh", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeTraceLengthBelowMesh), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceLengthBelowMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceLengthBelowMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceStartHeightAboveMesh_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** How far above the mesh to trace from */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "How far above the mesh to trace from" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceStartHeightAboveMesh = { "SlopeTraceStartHeightAboveMesh", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeTraceStartHeightAboveMesh), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceStartHeightAboveMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceStartHeightAboveMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadTraceCount_MetaData[] = {
		{ "Category", "Gait" },
		{ "EditCondition", "bAdjustGaitToSlope" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadTraceCount = { "SlopeTraceAheadTraceCount", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeTraceAheadTraceCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadTraceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadTraceCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadDist_MetaData[] = {
		{ "Category", "Gait" },
		{ "EditCondition", "bAdjustGaitToSlope" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadDist = { "SlopeTraceAheadDist", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeTraceAheadDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeSmoothingRate_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** How fast the slope change updates - set to 0 for no smoothing */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "How fast the slope change updates - set to 0 for no smoothing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeSmoothingRate = { "SlopeSmoothingRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeSmoothingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeSmoothingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeSmoothingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeAngleGaitMultiplierCurve_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Modify gait based on the slope of the surface */" },
		{ "EditCondition", "bAdjustGaitToSlope" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "Modify gait based on the slope of the surface" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeAngleGaitMultiplierCurve = { "SlopeAngleGaitMultiplierCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, SlopeAngleGaitMultiplierCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeAngleGaitMultiplierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeAngleGaitMultiplierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope_SetBit(void* Obj)
	{
		((FAnimNode_Gait*)Obj)->bAdjustGaitToSlope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope = { "bAdjustGaitToSlope", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_Gait), &Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxGait_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxGait = { "MaxGait", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, MaxGait), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxGait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxGait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinGait_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinGait = { "MinGait", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, MinGait), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinGait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinGait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_GaitMultiplier_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_GaitMultiplier = { "GaitMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, GaitMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_GaitMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_GaitMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Gait_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** 0->1 range, usually normalized character speed */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "0->1 range, usually normalized character speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Gait = { "Gait", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, Gait), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Gait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Gait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FAnimNode_Gait*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_Gait), &Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** Add each foot that will be modified */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "Add each foot that will be modified" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet = { "Feet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, Feet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet_Inner = { "Feet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIGait_Foot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_IKRoot_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** The bone above the feet IK bones (they should have an IK root) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "The bone above the feet IK bones (they should have an IK root)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_IKRoot = { "IKRoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, IKRoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_IKRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_IKRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Gait, Pelvis), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Pelvis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bClampIKLengthToBoneLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisTightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_PelvisDisplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxSpeedFootHeightBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinSpeedFootHeightBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceLengthBelowMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceStartHeightAboveMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadTraceCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeTraceAheadDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeSmoothingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_SlopeAngleGaitMultiplierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bAdjustGaitToSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MaxGait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_MinGait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_GaitMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Gait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Feet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_IKRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::NewProp_Pelvis,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_Gait",
		sizeof(FAnimNode_Gait),
		alignof(FAnimNode_Gait),
		Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Gait()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Gait_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Gait"), sizeof(FAnimNode_Gait), Get_Z_Construct_UScriptStruct_FAnimNode_Gait_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_Gait_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Gait_Hash() { return 603306313U; }
class UScriptStruct* FMIGait_Foot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMIGait_Foot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIGait_Foot, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIGait_Foot"), sizeof(FMIGait_Foot), Get_Z_Construct_UScriptStruct_FMIGait_Foot_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIGait_Foot>()
{
	return FMIGait_Foot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIGait_Foot(FMIGait_Foot::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MIGait_Foot"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMIGait_Foot
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMIGait_Foot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MIGait_Foot")),new UScriptStruct::TCppStructOps<FMIGait_Foot>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMIGait_Foot;
	struct Z_Construct_UScriptStruct_FMIGait_Foot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActualLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimbRootLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimbRootLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKPole_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKPole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pole_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pole;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIGait_Foot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneVelocity = { "BoneVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, BoneVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneLocation = { "BoneLocation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, BoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_ActualLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_ActualLocation = { "ActualLocation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, ActualLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_ActualLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_ActualLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_OriginLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_OriginLocation = { "OriginLocation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, OriginLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_OriginLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_OriginLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_LimbRootLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_LimbRootLocation = { "LimbRootLocation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, LimbRootLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_LimbRootLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_LimbRootLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** This is usually the thigh */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "This is usually the thigh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, Parent), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKPole_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** This is usually the knee/calf */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "This is usually the knee/calf" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKPole = { "IKPole", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, IKPole), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKPole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKPole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Pole_MetaData[] = {
		{ "Category", "Gait" },
		{ "Comment", "/** This is usually the knee/calf */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
		{ "ToolTip", "This is usually the knee/calf" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Pole = { "Pole", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, Pole), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Pole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Pole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKFoot_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKFoot = { "IKFoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, IKFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKFoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Foot_MetaData[] = {
		{ "Category", "Gait" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Gait.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Foot = { "Foot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIGait_Foot, Foot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Foot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Foot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIGait_Foot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_BoneLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_ActualLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_OriginLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_LimbRootLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKPole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Pole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_IKFoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIGait_Foot_Statics::NewProp_Foot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIGait_Foot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIGait_Foot",
		sizeof(FMIGait_Foot),
		alignof(FMIGait_Foot),
		Z_Construct_UScriptStruct_FMIGait_Foot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIGait_Foot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIGait_Foot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIGait_Foot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIGait_Foot"), sizeof(FMIGait_Foot), Get_Z_Construct_UScriptStruct_FMIGait_Foot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIGait_Foot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIGait_Foot_Hash() { return 941652993U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
