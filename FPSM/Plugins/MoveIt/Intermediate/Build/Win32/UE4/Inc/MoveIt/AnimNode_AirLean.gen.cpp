// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_AirLean.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AirLean() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AirLean();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_AirLean::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AirLean_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AirLean, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_AirLean"), sizeof(FAnimNode_AirLean), Get_Z_Construct_UScriptStruct_FAnimNode_AirLean_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_AirLean>()
{
	return FAnimNode_AirLean::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_AirLean(FAnimNode_AirLean::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_AirLean"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AirLean
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AirLean()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_AirLean")),new UScriptStruct::TCppStructOps<FAnimNode_AirLean>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AirLean;
	struct Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Additive leaning while in air to face direction of velocity\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AirLean.h" },
		{ "ToolTip", "Additive leaning while in air to face direction of velocity" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AirLean>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AirLean.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AirLean, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::NewProp_Character,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace,
		&NewStructOps,
		"AnimNode_AirLean",
		sizeof(FAnimNode_AirLean),
		alignof(FAnimNode_AirLean),
		Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AirLean()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AirLean_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_AirLean"), sizeof(FAnimNode_AirLean), Get_Z_Construct_UScriptStruct_FAnimNode_AirLean_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_AirLean_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AirLean_Hash() { return 1784654684U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
