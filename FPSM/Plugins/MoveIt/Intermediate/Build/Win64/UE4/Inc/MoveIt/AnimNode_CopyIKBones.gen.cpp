// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_CopyIKBones.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CopyIKBones() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyIKBones();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMICopyIKBones_Bone();
// End Cross Module References
class UScriptStruct* FAnimNode_CopyIKBones::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyIKBones, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_CopyIKBones"), sizeof(FAnimNode_CopyIKBones), Get_Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_CopyIKBones>()
{
	return FAnimNode_CopyIKBones::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_CopyIKBones(FAnimNode_CopyIKBones::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_CopyIKBones"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_CopyIKBones
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_CopyIKBones()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_CopyIKBones")),new UScriptStruct::TCppStructOps<FAnimNode_CopyIKBones>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_CopyIKBones;
	struct Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Copies the IK bones to the matching bones. Always call this before any other node in your animation graph.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyIKBones.h" },
		{ "ToolTip", "Copies the IK bones to the matching bones. Always call this before any other node in your animation graph." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CopyIKBones>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::NewProp_Bones_MetaData[] = {
		{ "Category", "Copy IK Bones" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyIKBones.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_CopyIKBones, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::NewProp_Bones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMICopyIKBones_Bone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::NewProp_Bones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::NewProp_Bones_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_CopyIKBones",
		sizeof(FAnimNode_CopyIKBones),
		alignof(FAnimNode_CopyIKBones),
		Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyIKBones()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_CopyIKBones"), sizeof(FAnimNode_CopyIKBones), Get_Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyIKBones_Hash() { return 3219264167U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
