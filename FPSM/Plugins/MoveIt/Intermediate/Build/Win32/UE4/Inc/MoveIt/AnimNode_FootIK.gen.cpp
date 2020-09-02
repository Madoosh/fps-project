// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_FootIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_FootIK() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootIK();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIFootIK_Foot();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIFootIK_State();
// End Cross Module References
class UScriptStruct* FAnimNode_FootIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_FootIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_FootIK, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_FootIK"), sizeof(FAnimNode_FootIK), Get_Z_Construct_UScriptStruct_FAnimNode_FootIK_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_FootIK>()
{
	return FAnimNode_FootIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_FootIK(FAnimNode_FootIK::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_FootIK"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_FootIK
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_FootIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_FootIK")),new UScriptStruct::TCppStructOps<FAnimNode_FootIK>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_FootIK;
	struct Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FootTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceLengthBelowMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceLengthBelowMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceStartHeightAboveMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceStartHeightAboveMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisXYTranslateRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PelvisXYTranslateRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowPelvis_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FollowPelvis;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FollowPelvis_Inner;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Highly advanced Foot IK, allowing for arbitrary orientation of the mesh, pelvis translation to shift body weight, etc\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Highly advanced Foot IK, allowing for arbitrary orientation of the mesh, pelvis translation to shift body weight, etc" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_FootIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FootTraceChannel_MetaData[] = {
		{ "Category", "IK Config" },
		{ "Comment", "/** Channel to trace for foot IK */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Channel to trace for foot IK" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FootTraceChannel = { "FootTraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, FootTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FootTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FootTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceLengthBelowMesh_MetaData[] = {
		{ "Category", "IK Config" },
		{ "Comment", "/** How far below the mesh to trace to */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How far below the mesh to trace to" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceLengthBelowMesh = { "TraceLengthBelowMesh", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, TraceLengthBelowMesh), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceLengthBelowMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceLengthBelowMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceStartHeightAboveMesh_MetaData[] = {
		{ "Category", "IK Config" },
		{ "Comment", "/** How far above the mesh to trace from */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How far above the mesh to trace from" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceStartHeightAboveMesh = { "TraceStartHeightAboveMesh", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, TraceStartHeightAboveMesh), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceStartHeightAboveMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceStartHeightAboveMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_PelvisXYTranslateRate_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How fast the pelvis adjusts its weight when both feet are in the air */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How fast the pelvis adjusts its weight when both feet are in the air" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_PelvisXYTranslateRate = { "PelvisXYTranslateRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, PelvisXYTranslateRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_PelvisXYTranslateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_PelvisXYTranslateRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_State_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** The state the character is currently in - Index to Feet::States, determining which to use */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The state the character is currently in - Index to Feet::States, determining which to use" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, State), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Same translation applied to the pelvis also applied to these joints (mainly for keeping hand ik moving along with pelvis) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Same translation applied to the pelvis also applied to these joints (mainly for keeping hand ik moving along with pelvis)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis = { "FollowPelvis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, FollowPelvis), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis_Inner = { "FollowPelvis", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Add every right foot that will be modified */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Add every right foot that will be modified" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet = { "RightFeet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, RightFeet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet_Inner = { "RightFeet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIFootIK_Foot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Add every left foot that will be modified */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Add every left foot that will be modified" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet = { "LeftFeet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, LeftFeet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet_Inner = { "LeftFeet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIFootIK_Foot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Character pelvis bone, usually immediately beneath root (also called: hips, cog) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Character pelvis bone, usually immediately beneath root (also called: hips, cog)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, Pelvis), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Character root bone, this is usually the first bone in the skeletal hierarchy */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Character root bone, this is usually the first bone in the skeletal hierarchy" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_FootIK, Root), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FootTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceLengthBelowMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_TraceStartHeightAboveMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_PelvisXYTranslateRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_FollowPelvis_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_RightFeet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_LeftFeet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Pelvis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::NewProp_Root,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_FootIK",
		sizeof(FAnimNode_FootIK),
		alignof(FAnimNode_FootIK),
		Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_FootIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_FootIK"), sizeof(FAnimNode_FootIK), Get_Z_Construct_UScriptStruct_FAnimNode_FootIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_FootIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_FootIK_Hash() { return 3225750705U; }
class UScriptStruct* FMIFootIK_Foot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMIFootIK_Foot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIFootIK_Foot, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIFootIK_Foot"), sizeof(FMIFootIK_Foot), Get_Z_Construct_UScriptStruct_FMIFootIK_Foot_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIFootIK_Foot>()
{
	return FMIFootIK_Foot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIFootIK_Foot(FMIFootIK_Foot::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MIFootIK_Foot"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMIFootIK_Foot
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMIFootIK_Foot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MIFootIK_Foot")),new UScriptStruct::TCppStructOps<FMIFootIK_Foot>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMIFootIK_Foot;
	struct Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_States_Inner;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIFootIK_Foot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/**\n\x09 * Optional states to allow for different settings when crouching, sprinting, etc\n\x09 * Must always have at least one entry, or will abort applying IK\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Optional states to allow for different settings when crouching, sprinting, etc\nMust always have at least one entry, or will abort applying IK" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_Foot, States), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIFootIK_State, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_IKBone_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Foot IK bone */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Foot IK bone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_IKBone = { "IKBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_Foot, IKBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_IKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_IKBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Foot bone */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Foot bone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_Foot, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_States_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_IKBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::NewProp_Bone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIFootIK_Foot",
		sizeof(FMIFootIK_Foot),
		alignof(FMIFootIK_Foot),
		Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIFootIK_Foot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIFootIK_Foot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIFootIK_Foot"), sizeof(FMIFootIK_Foot), Get_Z_Construct_UScriptStruct_FMIFootIK_Foot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIFootIK_Foot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIFootIK_Foot_Hash() { return 4292757684U; }
class UScriptStruct* FMIFootIK_State::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMIFootIK_State_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIFootIK_State, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIFootIK_State"), sizeof(FMIFootIK_State), Get_Z_Construct_UScriptStruct_FMIFootIK_State_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIFootIK_State>()
{
	return FMIFootIK_State::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIFootIK_State(FMIFootIK_State::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MIFootIK_State"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMIFootIK_State
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMIFootIK_State()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MIFootIK_State")),new UScriptStruct::TCppStructOps<FMIFootIK_State>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMIFootIK_State;
	struct Z_Construct_UScriptStruct_FMIFootIK_State_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollRightLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollRightLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollLeftLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollLeftLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchUpLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchUpLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchDownLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchDownLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerMaxZLimitOverEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowerMaxZLimitOverEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerMaxZLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowerMaxZLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiftMaxZLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LiftMaxZLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerFootRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowerFootRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiftFootRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LiftFootRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrientationRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIFootIK_State>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_ZOffset_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Offset the final position on Z */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "Offset the final position on Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, ZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_ZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_ZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollRightLimit_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How far the foot can rotate right on roll */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How far the foot can rotate right on roll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollRightLimit = { "RollRightLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, RollRightLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollRightLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollRightLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollLeftLimit_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How far the foot can rotate left on roll */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How far the foot can rotate left on roll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollLeftLimit = { "RollLeftLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, RollLeftLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollLeftLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollLeftLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchUpLimit_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How far the foot can rotate up on pitch */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How far the foot can rotate up on pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchUpLimit = { "PitchUpLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, PitchUpLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchUpLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchUpLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchDownLimit_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How far the foot can rotate down on pitch */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How far the foot can rotate down on pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchDownLimit = { "PitchDownLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, PitchDownLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchDownLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchDownLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimitOverEdge_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How low the foot can go if its over the edge (not touching ground) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How low the foot can go if its over the edge (not touching ground)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimitOverEdge = { "LowerMaxZLimitOverEdge", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, LowerMaxZLimitOverEdge), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimitOverEdge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimitOverEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimit_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How low the foot can go */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How low the foot can go" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimit = { "LowerMaxZLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, LowerMaxZLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftMaxZLimit_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How high the foot can go */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How high the foot can go" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftMaxZLimit = { "LiftMaxZLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, LiftMaxZLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftMaxZLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftMaxZLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerFootRate_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How fast the foot moves down */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How fast the foot moves down" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerFootRate = { "LowerFootRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, LowerFootRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerFootRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerFootRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftFootRate_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How fast the foot moves up */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How fast the foot moves up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftFootRate = { "LiftFootRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, LiftFootRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftFootRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftFootRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_OrientationRate_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** How fast the foot rotates to orient to the ground */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_FootIK.h" },
		{ "ToolTip", "How fast the foot rotates to orient to the ground" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_OrientationRate = { "OrientationRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIFootIK_State, OrientationRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_OrientationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_OrientationRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIFootIK_State_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_ZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollRightLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_RollLeftLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchUpLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_PitchDownLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimitOverEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerMaxZLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftMaxZLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LowerFootRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_LiftFootRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIFootIK_State_Statics::NewProp_OrientationRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIFootIK_State_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIFootIK_State",
		sizeof(FMIFootIK_State),
		alignof(FMIFootIK_State),
		Z_Construct_UScriptStruct_FMIFootIK_State_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIFootIK_State_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIFootIK_State()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIFootIK_State_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIFootIK_State"), sizeof(FMIFootIK_State), Get_Z_Construct_UScriptStruct_FMIFootIK_State_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIFootIK_State_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIFootIK_State_Hash() { return 783659482U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
