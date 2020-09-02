// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_TurnInPlace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TurnInPlace() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TurnInPlace();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
class UScriptStruct* FAnimNode_TurnInPlace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TurnInPlace, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_TurnInPlace"), sizeof(FAnimNode_TurnInPlace), Get_Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_TurnInPlace>()
{
	return FAnimNode_TurnInPlace::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_TurnInPlace(FAnimNode_TurnInPlace::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_TurnInPlace"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_TurnInPlace
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_TurnInPlace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_TurnInPlace")),new UScriptStruct::TCppStructOps<FAnimNode_TurnInPlace>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_TurnInPlace;
	struct Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityToPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocityToPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Procedural turning in place\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TurnInPlace.h" },
		{ "ToolTip", "Procedural turning in place" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TurnInPlace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::NewProp_AngularVelocityToPlayRate_MetaData[] = {
		{ "Category", "TurnInPlace" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TurnInPlace.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::NewProp_AngularVelocityToPlayRate = { "AngularVelocityToPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TurnInPlace, AngularVelocityToPlayRate), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::NewProp_AngularVelocityToPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::NewProp_AngularVelocityToPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::NewProp_AngularVelocityThreshold_MetaData[] = {
		{ "Category", "TurnInPlace" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TurnInPlace.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::NewProp_AngularVelocityThreshold = { "AngularVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TurnInPlace, AngularVelocityThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::NewProp_AngularVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::NewProp_AngularVelocityThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::NewProp_AngularVelocityToPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::NewProp_AngularVelocityThreshold,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase,
		&NewStructOps,
		"AnimNode_TurnInPlace",
		sizeof(FAnimNode_TurnInPlace),
		alignof(FAnimNode_TurnInPlace),
		Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TurnInPlace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_TurnInPlace"), sizeof(FAnimNode_TurnInPlace), Get_Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TurnInPlace_Hash() { return 4100182219U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
