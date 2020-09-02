// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_LocalSkeletalControlBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LocalSkeletalControlBase() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_LocalSkeletalControlBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_LocalSkeletalControlBase"), sizeof(FAnimNode_LocalSkeletalControlBase), Get_Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_LocalSkeletalControlBase>()
{
	return FAnimNode_LocalSkeletalControlBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LocalSkeletalControlBase(FAnimNode_LocalSkeletalControlBase::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_LocalSkeletalControlBase"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LocalSkeletalControlBase
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LocalSkeletalControlBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LocalSkeletalControlBase")),new UScriptStruct::TCppStructOps<FAnimNode_LocalSkeletalControlBase>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LocalSkeletalControlBase;
	struct Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaBoolBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaBoolBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlphaBoolEnabled_MetaData[];
#endif
		static void NewProp_bAlphaBoolEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlphaBoolEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Handles the otherwise extremely expensive conversions \"Local to Component\" & \"Component to Local\" using a LUT at a mere fraction of the cost\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LocalSkeletalControlBase.h" },
		{ "ToolTip", "Handles the otherwise extremely expensive conversions \"Local to Component\" & \"Component to Local\" using a LUT at a mere fraction of the cost" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LocalSkeletalControlBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LocalSkeletalControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LocalSkeletalControlBase, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaScaleBiasClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LocalSkeletalControlBase.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LocalSkeletalControlBase, AlphaCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaBoolBlend_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayName", "Blend Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LocalSkeletalControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LocalSkeletalControlBase, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaBoolBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaBoolBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LocalSkeletalControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LocalSkeletalControlBase, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Current strength of the skeletal control\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LocalSkeletalControlBase.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Current strength of the skeletal control" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LocalSkeletalControlBase, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayName", "bEnabled" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LocalSkeletalControlBase.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
	{
		((FAnimNode_LocalSkeletalControlBase*)Obj)->bAlphaBoolEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_LocalSkeletalControlBase), &Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LocalSkeletalControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LocalSkeletalControlBase, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LocalSkeletalControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LocalSkeletalControlBase, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_BlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09* Max LOD that this node is allowed to run\n\x09* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09* when the component LOD becomes 3, it will stop update/evaluate\n\x09* currently transition would be issue and that has to be re-visited\n\x09*/" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LocalSkeletalControlBase.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LocalSkeletalControlBase, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LocalSkeletalControlBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LocalSkeletalControlBase, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_SourcePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaScaleBiasClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaBoolBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaScaleBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_AlphaInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_BlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_LODThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::NewProp_SourcePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_LocalSkeletalControlBase",
		sizeof(FAnimNode_LocalSkeletalControlBase),
		alignof(FAnimNode_LocalSkeletalControlBase),
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LocalSkeletalControlBase"), sizeof(FAnimNode_LocalSkeletalControlBase), Get_Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase_Hash() { return 1164536683U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
