// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_WeaponPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_WeaponPose() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_WeaponPose();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIWeapon();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIWeaponPose_Hands();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_WeaponPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_WeaponPose, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_WeaponPose"), sizeof(FAnimNode_WeaponPose), Get_Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_WeaponPose>()
{
	return FAnimNode_WeaponPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_WeaponPose(FAnimNode_WeaponPose::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_WeaponPose"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_WeaponPose
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_WeaponPose()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_WeaponPose")),new UScriptStruct::TCppStructOps<FAnimNode_WeaponPose>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_WeaponPose;
	struct Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Highly advanced Foot IK, allowing for arbitrary orientation of the mesh, pelvis translation to shift body weight, etc\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_WeaponPose.h" },
		{ "ToolTip", "Highly advanced Foot IK, allowing for arbitrary orientation of the mesh, pelvis translation to shift body weight, etc" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_WeaponPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_WeaponPose.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_WeaponPose, Weapon), Z_Construct_UScriptStruct_FMIWeapon, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_OffHand_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_WeaponPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_OffHand = { "OffHand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_WeaponPose, OffHand), Z_Construct_UScriptStruct_FMIWeaponPose_Hands, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_OffHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_OffHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_WeaponHand_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_WeaponPose.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_WeaponHand = { "WeaponHand", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_WeaponPose, WeaponHand), Z_Construct_UScriptStruct_FMIWeaponPose_Hands, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_WeaponHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_WeaponHand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_OffHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::NewProp_WeaponHand,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_WeaponPose",
		sizeof(FAnimNode_WeaponPose),
		alignof(FAnimNode_WeaponPose),
		Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_WeaponPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_WeaponPose"), sizeof(FAnimNode_WeaponPose), Get_Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_WeaponPose_Hash() { return 3376708893U; }
class UScriptStruct* FMIWeaponPose_Hands::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIWeaponPose_Hands, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIWeaponPose_Hands"), sizeof(FMIWeaponPose_Hands), Get_Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIWeaponPose_Hands>()
{
	return FMIWeaponPose_Hands::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIWeaponPose_Hands(FMIWeaponPose_Hands::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MIWeaponPose_Hands"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMIWeaponPose_Hands
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMIWeaponPose_Hands()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MIWeaponPose_Hands")),new UScriptStruct::TCppStructOps<FMIWeaponPose_Hands>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMIWeaponPose_Hands;
	struct Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_WeaponPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIWeaponPose_Hands>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::NewProp_IKBone_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Foot IK bone */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_WeaponPose.h" },
		{ "ToolTip", "Foot IK bone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::NewProp_IKBone = { "IKBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIWeaponPose_Hands, IKBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::NewProp_IKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::NewProp_IKBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Foot bone */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_WeaponPose.h" },
		{ "ToolTip", "Foot bone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIWeaponPose_Hands, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::NewProp_IKBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::NewProp_Bone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIWeaponPose_Hands",
		sizeof(FMIWeaponPose_Hands),
		alignof(FMIWeaponPose_Hands),
		Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIWeaponPose_Hands()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIWeaponPose_Hands"), sizeof(FMIWeaponPose_Hands), Get_Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIWeaponPose_Hands_Hash() { return 2615036176U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
