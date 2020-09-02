// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_AdditiveAngularBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AdditiveAngularBase() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
class UScriptStruct* FAnimNode_AdditiveAngularBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_AdditiveAngularBase"), sizeof(FAnimNode_AdditiveAngularBase), Get_Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_AdditiveAngularBase>()
{
	return FAnimNode_AdditiveAngularBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_AdditiveAngularBase(FAnimNode_AdditiveAngularBase::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_AdditiveAngularBase"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AdditiveAngularBase
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AdditiveAngularBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_AdditiveAngularBase")),new UScriptStruct::TCppStructOps<FAnimNode_AdditiveAngularBase>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AdditiveAngularBase;
	struct Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Computes angular velocity for usage with a blendspace, which then does the equivalent of \"Apply Additive\"\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveAngularBase.h" },
		{ "ToolTip", "Computes angular velocity for usage with a blendspace, which then does the equivalent of \"Apply Additive\"" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AdditiveAngularBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "AngularVelocity" },
		{ "Comment", "/** Scale angular velocity by this amount */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveAngularBase.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scale angular velocity by this amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveAngularBase, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "AngularVelocity" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AdditiveAngularBase.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AdditiveAngularBase, AngularVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_AngularVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::NewProp_AngularVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace,
		&NewStructOps,
		"AnimNode_AdditiveAngularBase",
		sizeof(FAnimNode_AdditiveAngularBase),
		alignof(FAnimNode_AdditiveAngularBase),
		Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_AdditiveAngularBase"), sizeof(FAnimNode_AdditiveAngularBase), Get_Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AdditiveAngularBase_Hash() { return 2166170084U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
