// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_LandingCompression.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LandingCompression() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandingCompression();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FAnimNode_LandingCompression::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LandingCompression, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_LandingCompression"), sizeof(FAnimNode_LandingCompression), Get_Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_LandingCompression>()
{
	return FAnimNode_LandingCompression::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LandingCompression(FAnimNode_LandingCompression::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_LandingCompression"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LandingCompression
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LandingCompression()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LandingCompression")),new UScriptStruct::TCppStructOps<FAnimNode_LandingCompression>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LandingCompression;
	struct Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxImpactVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxImpactVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityForMaxLandTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityForMaxLandTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLandTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLandTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLandTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinLandTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityZThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityZThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactVelocityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Applies physics spring to compress the character using impact velocity when landing\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "ToolTip", "Applies physics spring to compress the character using impact velocity when landing" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LandingCompression>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxImpactVelocity_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** \n\x09 * Max magnitude to actually apply from ImpactVelocity \n\x09 * If the character jitters when landing, this is too high or your spring isn't customized correctly\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "ToolTip", "Max magnitude to actually apply from ImpactVelocity\nIf the character jitters when landing, this is too high or your spring isn't customized correctly" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxImpactVelocity = { "MaxImpactVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, MaxImpactVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxImpactVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityForMaxLandTime_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** Minimum Velocity required to reach MaxLandTime */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "ToolTip", "Minimum Velocity required to reach MaxLandTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityForMaxLandTime = { "VelocityForMaxLandTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, VelocityForMaxLandTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityForMaxLandTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityForMaxLandTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxLandTime_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** Maximum duration for landing impact (at VelocityForMaxLandTime) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "ToolTip", "Maximum duration for landing impact (at VelocityForMaxLandTime)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxLandTime = { "MaxLandTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, MaxLandTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxLandTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxLandTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MinLandTime_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** Shortest duration for landing impact (at 0 velocity) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "ToolTip", "Shortest duration for landing impact (at 0 velocity)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MinLandTime = { "MinLandTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, MinLandTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MinLandTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MinLandTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityZThreshold_MetaData[] = {
		{ "Category", "Landing" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityZThreshold = { "VelocityZThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, VelocityZThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityZThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityZThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocityScale_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** Scale the incoming impact velocity */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "ToolTip", "Scale the incoming impact velocity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocityScale = { "ImpactVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, ImpactVelocityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocity_MetaData[] = {
		{ "Category", "Landing" },
		{ "Comment", "/** Landing velocity applied to spring */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingCompression.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Landing velocity applied to spring" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingCompression, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxImpactVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityForMaxLandTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MaxLandTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_MinLandTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_VelocityZThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::NewProp_ImpactVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_SpringBase,
		&NewStructOps,
		"AnimNode_LandingCompression",
		sizeof(FAnimNode_LandingCompression),
		alignof(FAnimNode_LandingCompression),
		Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandingCompression()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LandingCompression"), sizeof(FAnimNode_LandingCompression), Get_Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LandingCompression_Hash() { return 1282859831U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
