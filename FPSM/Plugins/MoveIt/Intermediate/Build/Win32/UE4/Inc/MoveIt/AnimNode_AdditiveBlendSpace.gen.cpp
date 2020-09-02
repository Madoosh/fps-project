// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_AdditiveBlendSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AdditiveBlendSpace() {}
// Cross Module References
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIAdditiveType();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
	static UEnum* EMIAdditiveType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIAdditiveType, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIAdditiveType"));
		}
		return Singleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIAdditiveType>()
	{
		return EMIAdditiveType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMIAdditiveType(EMIAdditiveType_StaticEnum, TEXT("/Script/MoveIt"), TEXT("EMIAdditiveType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoveIt_EMIAdditiveType_Hash() { return 3035356993U; }
	UEnum* Z_Construct_UEnum_MoveIt_EMIAdditiveType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMIAdditiveType"), 0, Get_Z_Construct_UEnum_MoveIt_EMIAdditiveType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMIAdditiveType::MIAS_Additive", (int64)EMIAdditiveType::MIAS_Additive },
				{ "EMIAdditiveType::MIAS_MeshSpaceAdditive", (int64)EMIAdditiveType::MIAS_MeshSpaceAdditive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MIAS_Additive.DisplayName", "Additive" },
				{ "MIAS_Additive.Name", "EMIAdditiveType::MIAS_Additive" },
				{ "MIAS_MeshSpaceAdditive.DisplayName", "Mesh Space Additive" },
				{ "MIAS_MeshSpaceAdditive.Name", "EMIAdditiveType::MIAS_MeshSpaceAdditive" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
				nullptr,
				"EMIAdditiveType",
				"EMIAdditiveType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_AdditiveBlendSpace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_AdditiveBlendSpace"), sizeof(FAnimNode_AdditiveBlendSpace), Get_Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_AdditiveBlendSpace>()
{
	return FAnimNode_AdditiveBlendSpace::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_AdditiveBlendSpace(FAnimNode_AdditiveBlendSpace::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_AdditiveBlendSpace"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AdditiveBlendSpace
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AdditiveBlendSpace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_AdditiveBlendSpace")),new UScriptStruct::TCppStructOps<FAnimNode_AdditiveBlendSpace>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AdditiveBlendSpace;
	struct Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AdditiveType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AdditiveType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Equivalent of \"Apply Additive\" with a blendspace and has additional blending options\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
		{ "ToolTip", "Equivalent of \"Apply Additive\" with a blendspace and has additional blending options" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AdditiveBlendSpace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayAfter", "AlphaInputType" },
		{ "DisplayName", "bEnabled" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
	{
		((FAnimNode_AdditiveBlendSpace*)Obj)->bAlphaBoolEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_AdditiveBlendSpace), &Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayAfter", "AlphaScaleBias" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBiasClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, AlphaCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaBoolBlend_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayAfter", "bAlphaBoolEnabled" },
		{ "DisplayName", "Blend Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaBoolBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaBoolBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/* \n\x09 * Max LOD that this node is allowed to run\n\x09 * For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09 * when the component LOD becomes 3, it will stop update/evaluate\n\x09 * currently transition would be issue and that has to be re-visited\n\x09 */" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType = { "AdditiveType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, AdditiveType), Z_Construct_UEnum_MoveIt_EMIAdditiveType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveBlendSpace.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveBlendSpace, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_SourcePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_bAlphaBoolEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBiasClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaBoolBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_LODThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AlphaScaleBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_AdditiveType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::NewProp_SourcePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,
		&NewStructOps,
		"AnimNode_AdditiveBlendSpace",
		sizeof(FAnimNode_AdditiveBlendSpace),
		alignof(FAnimNode_AdditiveBlendSpace),
		Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_AdditiveBlendSpace"), sizeof(FAnimNode_AdditiveBlendSpace), Get_Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Hash() { return 2779643868U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
