// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNodes_Shared.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodes_Shared() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMICopyIKBones_Bone();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FMICopyIKBones_Bone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMICopyIKBones_Bone, Z_Construct_UPackage__Script_MoveIt(), TEXT("MICopyIKBones_Bone"), sizeof(FMICopyIKBones_Bone), Get_Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMICopyIKBones_Bone>()
{
	return FMICopyIKBones_Bone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMICopyIKBones_Bone(FMICopyIKBones_Bone::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MICopyIKBones_Bone"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMICopyIKBones_Bone
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMICopyIKBones_Bone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MICopyIKBones_Bone")),new UScriptStruct::TCppStructOps<FMICopyIKBones_Bone>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMICopyIKBones_Bone;
	struct Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IK_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNodes_Shared.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMICopyIKBones_Bone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_IK_MetaData[] = {
		{ "Category", "Copy IK Bones" },
		{ "Comment", "/** Target bone to copy over */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNodes_Shared.h" },
		{ "ToolTip", "Target bone to copy over" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_IK = { "IK", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMICopyIKBones_Bone, IK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_IK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_IK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Copy IK Bones" },
		{ "Comment", "/** Source bone to copy from */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNodes_Shared.h" },
		{ "ToolTip", "Source bone to copy from" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMICopyIKBones_Bone, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_IK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::NewProp_Bone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MICopyIKBones_Bone",
		sizeof(FMICopyIKBones_Bone),
		alignof(FMICopyIKBones_Bone),
		Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMICopyIKBones_Bone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MICopyIKBones_Bone"), sizeof(FMICopyIKBones_Bone), Get_Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMICopyIKBones_Bone_Hash() { return 3244386947U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
