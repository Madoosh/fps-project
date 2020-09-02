// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_AngularBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AngularBase() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AngularBase();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
class UScriptStruct* FAnimNode_AngularBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AngularBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AngularBase, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_AngularBase"), sizeof(FAnimNode_AngularBase), Get_Z_Construct_UScriptStruct_FAnimNode_AngularBase_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_AngularBase>()
{
	return FAnimNode_AngularBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_AngularBase(FAnimNode_AngularBase::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_AngularBase"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AngularBase
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AngularBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_AngularBase")),new UScriptStruct::TCppStructOps<FAnimNode_AngularBase>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AngularBase;
	struct Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base for nodes applying angular velocity to calculations and performing the equivalent \n * of \"Local to Component\" and \"Component to Local\" (very expensive) using a LUT (very cheap) instead.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AngularBase.h" },
		{ "ToolTip", "Base for nodes applying angular velocity to calculations and performing the equivalent\nof \"Local to Component\" and \"Component to Local\" (very expensive) using a LUT (very cheap) instead." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AngularBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "AngularVelocity" },
		{ "Comment", "/** Scale angular velocity by this amount */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AngularBase.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scale angular velocity by this amount" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AngularBase, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "AngularVelocity" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AngularBase.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AngularBase, AngularVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_AngularVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::NewProp_AngularVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_AngularBase",
		sizeof(FAnimNode_AngularBase),
		alignof(FAnimNode_AngularBase),
		Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AngularBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AngularBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_AngularBase"), sizeof(FAnimNode_AngularBase), Get_Z_Construct_UScriptStruct_FAnimNode_AngularBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_AngularBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AngularBase_Hash() { return 751679670U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
