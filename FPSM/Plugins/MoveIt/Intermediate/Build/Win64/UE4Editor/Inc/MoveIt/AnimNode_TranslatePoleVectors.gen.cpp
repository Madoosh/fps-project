// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_TranslatePoleVectors.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TranslatePoleVectors() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMICopyIKBones_Bone();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_TranslatePoleVectors::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_TranslatePoleVectors"), sizeof(FAnimNode_TranslatePoleVectors), Get_Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_TranslatePoleVectors>()
{
	return FAnimNode_TranslatePoleVectors::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_TranslatePoleVectors(FAnimNode_TranslatePoleVectors::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_TranslatePoleVectors"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_TranslatePoleVectors
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_TranslatePoleVectors()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_TranslatePoleVectors")),new UScriptStruct::TCppStructOps<FAnimNode_TranslatePoleVectors>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_TranslatePoleVectors;
	struct Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoleVectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PoleVectors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoleVectors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Copies the IK bones to the matching bones. Always call this before any other node in your animation graph.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TranslatePoleVectors.h" },
		{ "ToolTip", "Copies the IK bones to the matching bones. Always call this before any other node in your animation graph." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TranslatePoleVectors>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors_MetaData[] = {
		{ "Category", "Copy IK Bones" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TranslatePoleVectors.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors = { "PoleVectors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_TranslatePoleVectors, PoleVectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors_Inner = { "PoleVectors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::NewProp_PoleVectors_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_TranslatePoleVectors",
		sizeof(FAnimNode_TranslatePoleVectors),
		alignof(FAnimNode_TranslatePoleVectors),
		Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_TranslatePoleVectors"), sizeof(FAnimNode_TranslatePoleVectors), Get_Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_TranslatePoleVectors_Hash() { return 1490029424U; }
class UScriptStruct* FMITranslatePoleVectors_PoleVector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector, Z_Construct_UPackage__Script_MoveIt(), TEXT("MITranslatePoleVectors_PoleVector"), sizeof(FMITranslatePoleVectors_PoleVector), Get_Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMITranslatePoleVectors_PoleVector>()
{
	return FMITranslatePoleVectors_PoleVector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMITranslatePoleVectors_PoleVector(FMITranslatePoleVectors_PoleVector::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MITranslatePoleVectors_PoleVector"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMITranslatePoleVectors_PoleVector
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMITranslatePoleVectors_PoleVector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MITranslatePoleVectors_PoleVector")),new UScriptStruct::TCppStructOps<FMITranslatePoleVectors_PoleVector>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMITranslatePoleVectors_PoleVector;
	struct Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoleVectorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PoleVectorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectorBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TranslatePoleVectors.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMITranslatePoleVectors_PoleVector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_PoleVectorOffset_MetaData[] = {
		{ "Category", "Copy IK Bones" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TranslatePoleVectors.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_PoleVectorOffset = { "PoleVectorOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMITranslatePoleVectors_PoleVector, PoleVectorOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_PoleVectorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_PoleVectorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_EffectorBone_MetaData[] = {
		{ "Category", "Copy IK Bones" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_TranslatePoleVectors.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_EffectorBone = { "EffectorBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMITranslatePoleVectors_PoleVector, EffectorBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_EffectorBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_EffectorBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_PoleVectorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::NewProp_EffectorBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FMICopyIKBones_Bone,
		&NewStructOps,
		"MITranslatePoleVectors_PoleVector",
		sizeof(FMITranslatePoleVectors_PoleVector),
		alignof(FMITranslatePoleVectors_PoleVector),
		Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MITranslatePoleVectors_PoleVector"), sizeof(FMITranslatePoleVectors_PoleVector), Get_Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMITranslatePoleVectors_PoleVector_Hash() { return 2479936834U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
