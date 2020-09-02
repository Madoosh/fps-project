// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MIAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIAnimInstance() {}
// Cross Module References
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMISurfaceImpact();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	MOVEIT_API UClass* Z_Construct_UClass_UMIAnimInstance_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMIAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIMovementSystem();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeOrientation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIWeapon();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMICharacterMovementComponent_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter_NoRegister();
// End Cross Module References
	static UEnum* EMIStrafeDirectionBasis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIStrafeDirectionBasis"));
		}
		return Singleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIStrafeDirectionBasis>()
	{
		return EMIStrafeDirectionBasis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMIStrafeDirectionBasis(EMIStrafeDirectionBasis_StaticEnum, TEXT("/Script/MoveIt"), TEXT("EMIStrafeDirectionBasis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis_Hash() { return 4031343474U; }
	UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMIStrafeDirectionBasis"), 0, Get_Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMIStrafeDirectionBasis::MISB_Acceleration", (int64)EMIStrafeDirectionBasis::MISB_Acceleration },
				{ "EMIStrafeDirectionBasis::MISB_Velocity", (int64)EMIStrafeDirectionBasis::MISB_Velocity },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MISB_Acceleration.DisplayName", "Acceleration" },
				{ "MISB_Acceleration.Name", "EMIStrafeDirectionBasis::MISB_Acceleration" },
				{ "MISB_Acceleration.ToolTip", "Strafe direction based on acceleration (input direction)" },
				{ "MISB_Velocity.DisplayName", "Velocity" },
				{ "MISB_Velocity.Name", "EMIStrafeDirectionBasis::MISB_Velocity" },
				{ "MISB_Velocity.ToolTip", "Strafe direction based on velocity (movement direction)" },
				{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
				nullptr,
				"EMIStrafeDirectionBasis",
				"EMIStrafeDirectionBasis",
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
class UScriptStruct* FMISurfaceImpact::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMISurfaceImpact_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMISurfaceImpact, Z_Construct_UPackage__Script_MoveIt(), TEXT("MISurfaceImpact"), sizeof(FMISurfaceImpact), Get_Z_Construct_UScriptStruct_FMISurfaceImpact_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMISurfaceImpact>()
{
	return FMISurfaceImpact::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMISurfaceImpact(FMISurfaceImpact::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MISurfaceImpact"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMISurfaceImpact
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMISurfaceImpact()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MISurfaceImpact")),new UScriptStruct::TCppStructOps<FMISurfaceImpact>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMISurfaceImpact;
	struct Z_Construct_UScriptStruct_FMISurfaceImpact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawTrace_MetaData[];
#endif
		static void NewProp_bDebugDrawTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawTrace;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsToTrace_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectsToTrace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectsToTrace_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRagdollOnly_MetaData[];
#endif
		static void NewProp_bRagdollOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRagdollOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTriggerInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTriggerInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDistFromGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceDistFromGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceStartHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceStartHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Socket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMISurfaceImpact>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace_SetBit(void* Obj)
	{
		((FMISurfaceImpact*)Obj)->bDebugDrawTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace = { "bDebugDrawTrace", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMISurfaceImpact), &Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace_MetaData[] = {
		{ "Category", "Impact" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace = { "ObjectsToTrace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, ObjectsToTrace), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace_Inner = { "ObjectsToTrace", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/*\n\x09* Max LOD that this impact is allowed to run\n\x09* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09* when the component LOD becomes 3, it will stop\n\x09*/" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "* Max LOD that this impact is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bRagdollOnly_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** If true, will only trigger when ragdoll is active */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "If true, will only trigger when ragdoll is active" },
	};
#endif
	void Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bRagdollOnly_SetBit(void* Obj)
	{
		((FMISurfaceImpact*)Obj)->bRagdollOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bRagdollOnly = { "bRagdollOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMISurfaceImpact), &Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bRagdollOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bRagdollOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bRagdollOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinTriggerInterval_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** How often an impact can be triggered by this bone */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How often an impact can be triggered by this bone" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinTriggerInterval = { "MinTriggerInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, MinTriggerInterval), METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinTriggerInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinTriggerInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceDistFromGround_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** How far above the ground the bone can be while still triggering an impact */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How far above the ground the bone can be while still triggering an impact" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceDistFromGround = { "TraceDistFromGround", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, TraceDistFromGround), METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceDistFromGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceDistFromGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceStartHeight_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** How far above the socket to start the trace from */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How far above the socket to start the trace from" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceStartHeight = { "TraceStartHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, TraceStartHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceStartHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceStartHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinVelocity_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** How fast the bone must be moving to trigger a Impact */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast the bone must be moving to trigger a Impact" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinVelocity = { "MinVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, MinVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Socket_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** The socket that is used to trace to the ground and to spawn effects from */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "The socket that is used to trace to the ground and to spawn effects from" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, Socket), METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Socket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Socket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** The bone that is used to compute velocity */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "The bone that is used to compute velocity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMISurfaceImpact, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bDebugDrawTrace,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_ObjectsToTrace_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_LODThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_bRagdollOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinTriggerInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceDistFromGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_TraceStartHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_MinVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Socket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::NewProp_Bone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MISurfaceImpact",
		sizeof(FMISurfaceImpact),
		alignof(FMISurfaceImpact),
		Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMISurfaceImpact()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMISurfaceImpact_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MISurfaceImpact"), sizeof(FMISurfaceImpact), Get_Z_Construct_UScriptStruct_FMISurfaceImpact_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMISurfaceImpact_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMISurfaceImpact_Hash() { return 3008298721U; }
	DEFINE_FUNCTION(UMIAnimInstance::execIsTurnInPlaceEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTurnInPlaceEnabled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIAnimInstance::execOnStartTurning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartTurning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIAnimInstance::execIsValidToEvaluate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidToEvaluate(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIAnimInstance::execComputeSurfaceImpacts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComputeSurfaceImpacts();
		P_NATIVE_END;
	}
	static FName NAME_UMIAnimInstance_IsTurnInPlaceEnabled = FName(TEXT("IsTurnInPlaceEnabled"));
	bool UMIAnimInstance::IsTurnInPlaceEnabled() const
	{
		MIAnimInstance_eventIsTurnInPlaceEnabled_Parms Parms;
		const_cast<UMIAnimInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_IsTurnInPlaceEnabled),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UMIAnimInstance_OnStartFloorSliding = FName(TEXT("OnStartFloorSliding"));
	void UMIAnimInstance::OnStartFloorSliding()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_OnStartFloorSliding),NULL);
	}
	static FName NAME_UMIAnimInstance_OnStopFloorSliding = FName(TEXT("OnStopFloorSliding"));
	void UMIAnimInstance::OnStopFloorSliding()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMIAnimInstance_OnStopFloorSliding),NULL);
	}
	void UMIAnimInstance::StaticRegisterNativesUMIAnimInstance()
	{
		UClass* Class = UMIAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeSurfaceImpacts", &UMIAnimInstance::execComputeSurfaceImpacts },
			{ "IsTurnInPlaceEnabled", &UMIAnimInstance::execIsTurnInPlaceEnabled },
			{ "IsValidToEvaluate", &UMIAnimInstance::execIsValidToEvaluate },
			{ "OnStartTurning", &UMIAnimInstance::execOnStartTurning },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** A glorified physically accurate footstep system that can handle any and all other bones hitting the ground */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "A glorified physically accurate footstep system that can handle any and all other bones hitting the ground" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "ComputeSurfaceImpacts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MIAnimInstance_eventIsTurnInPlaceEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MIAnimInstance_eventIsTurnInPlaceEnabled_Parms), &Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "TurnInPlace" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "IsTurnInPlaceEnabled", nullptr, nullptr, sizeof(MIAnimInstance_eventIsTurnInPlaceEnabled_Parms), Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics
	{
		struct MIAnimInstance_eventIsValidToEvaluate_Parms
		{
			float DeltaTime;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MIAnimInstance_eventIsValidToEvaluate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MIAnimInstance_eventIsValidToEvaluate_Parms), &Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIAnimInstance_eventIsValidToEvaluate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "IsValidToEvaluate", nullptr, nullptr, sizeof(MIAnimInstance_eventIsValidToEvaluate_Parms), Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStartFloorSliding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStartTurning_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStartTurning_Statics::Function_MetaDataParams[] = {
		{ "Category", "TurnInPlace" },
		{ "Comment", "/** Called by AnimNotify for entering Turn state */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Called by AnimNotify for entering Turn state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStartTurning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStartTurning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStartTurning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStartTurning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStartTurning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStartTurning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimInstance, nullptr, "OnStopFloorSliding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMIAnimInstance_NoRegister()
	{
		return UMIAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMIAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceImpacts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SurfaceImpacts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurfaceImpacts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCompensateUpperBodyNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCompensateUpperBodyNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAnimPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAnimPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAnimPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAnimPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputInterpToZeroRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputInterpToZeroRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PivotDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionInterpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionInterpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaitInterpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GaitInterpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchGaitMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchGaitMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintGaitMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintGaitMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseGaitMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseGaitMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackwardsAccelerationDegreesTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackwardsAccelerationDegreesTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackwardsVelocityDegreesTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackwardsVelocityDegreesTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightStrafeDirectionBasis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RightStrafeDirectionBasis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightStrafeDirectionBasis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeutralStrafeDirectionBasis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NeutralStrafeDirectionBasis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NeutralStrafeDirectionBasis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasApplyingInput_MetaData[];
#endif
		static void NewProp_bWasApplyingInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasApplyingInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsApplyingInput_MetaData[];
#endif
		static void NewProp_bIsApplyingInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsApplyingInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousVelocityRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousVelocityRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousRawInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousRawInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoppingRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoppingRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoppingVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoppingVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoppingInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoppingInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrafeDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovingInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovingInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RawInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionMontageTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootMotionMontageTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMovingTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartMovingTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigStepTurnAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BigStepTurnAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTurnAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTurnAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTurnAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTurnAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsTurningCurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IsTurningCurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawCurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_YawCurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetTurn_MetaData[];
#endif
		static void NewProp_bResetTurn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBigStep_MetaData[];
#endif
		static void NewProp_bBigStep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBigStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoTurn_MetaData[];
#endif
		static void NewProp_bDoTurn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTurnRight_MetaData[];
#endif
		static void NewProp_bTurnRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTurnRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootYawOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootYawOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyTurnInPlace_MetaData[];
#endif
		static void NewProp_bUseLegacyTurnInPlace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyTurnInPlace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovingForward_MetaData[];
#endif
		static void NewProp_bIsMovingForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovingForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovingBackward_MetaData[];
#endif
		static void NewProp_bIsMovingBackward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovingBackward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovingWithInput_MetaData[];
#endif
		static void NewProp_bIsMovingWithInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovingWithInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStoppingInAir_MetaData[];
#endif
		static void NewProp_bIsStoppingInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStoppingInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStopping_MetaData[];
#endif
		static void NewProp_bIsStopping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStopping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsIdle_MetaData[];
#endif
		static void NewProp_bIsIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PivotDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPivot_MetaData[];
#endif
		static void NewProp_bPivot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoppingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StoppingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaitMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GaitMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaitSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GaitSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RawSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorOrientCompensation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloorOrientCompensation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandingVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandingVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpingVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JumpingVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraversalVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraversalVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LookTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLookTarget_MetaData[];
#endif
		static void NewProp_bEnableLookTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLookTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementSystem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementSystem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrafeOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StrafeOrientation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StrafeOrientation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootIKState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FootIKState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetVertical_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimOffsetVertical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetHorizontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimOffsetHorizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAimOffsetEnabled_MetaData[];
#endif
		static void NewProp_bAimOffsetEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAimOffsetEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffHandIKTM_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffHandIKTM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftArmBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftArmBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWeaponOneHanded_MetaData[];
#endif
		static void NewProp_bWeaponOneHanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeaponOneHanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHandIK_MetaData[];
#endif
		static void NewProp_bEnableHandIK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHandIK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWeaponPose_MetaData[];
#endif
		static void NewProp_bEnableWeaponPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWeaponPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseWeaponAimPose_MetaData[];
#endif
		static void NewProp_bUseWeaponAimPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWeaponAimPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseWeaponPose_MetaData[];
#endif
		static void NewProp_bUseWeaponPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWeaponPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAimOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponAimOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimState_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponAnimState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChangingWeapon_MetaData[];
#endif
		static void NewProp_bChangingWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChangingWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bArmed_MetaData[];
#endif
		static void NewProp_bArmed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bArmed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUnarmed_MetaData[];
#endif
		static void NewProp_bUnarmed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnarmed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrientKeepUpperBodyUpright_MetaData[];
#endif
		static void NewProp_bOrientKeepUpperBodyUpright_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientKeepUpperBodyUpright;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFootIK_MetaData[];
#endif
		static void NewProp_bFootIK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFootIK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRagdoll_MetaData[];
#endif
		static void NewProp_bRagdoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRagdoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotAimingLocalPlayer_MetaData[];
#endif
		static void NewProp_bNotAimingLocalPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotAimingLocalPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAimingLocalPlayer_MetaData[];
#endif
		static void NewProp_bAimingLocalPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAimingLocalPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotAiming_MetaData[];
#endif
		static void NewProp_bNotAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAiming_MetaData[];
#endif
		static void NewProp_bAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAiming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGaitEnabled_MetaData[];
#endif
		static void NewProp_bGaitEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGaitEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStrafeEnabled_MetaData[];
#endif
		static void NewProp_bStrafeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStrafeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFloorSliding_MetaData[];
#endif
		static void NewProp_bIsFloorSliding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFloorSliding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayingRootMotion_MetaData[];
#endif
		static void NewProp_bPlayingRootMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayingRootMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnGround_MetaData[];
#endif
		static void NewProp_bOnGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsJumping_MetaData[];
#endif
		static void NewProp_bIsJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCrouchingOnGround_MetaData[];
#endif
		static void NewProp_bCrouchingOnGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCrouchingOnGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[];
#endif
		static void NewProp_bIsCrouched_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStanding_MetaData[];
#endif
		static void NewProp_bIsStanding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStanding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMIAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMIAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMIAnimInstance_ComputeSurfaceImpacts, "ComputeSurfaceImpacts" }, // 3982285863
		{ &Z_Construct_UFunction_UMIAnimInstance_IsTurnInPlaceEnabled, "IsTurnInPlaceEnabled" }, // 1009901811
		{ &Z_Construct_UFunction_UMIAnimInstance_IsValidToEvaluate, "IsValidToEvaluate" }, // 487292061
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStartFloorSliding, "OnStartFloorSliding" }, // 3476345996
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStartTurning, "OnStartTurning" }, // 1325093611
		{ &Z_Construct_UFunction_UMIAnimInstance_OnStopFloorSliding, "OnStopFloorSliding" }, // 3417659407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MIAnimInstance.h" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A physically accurate footstep system that can handle any and all other bones hitting the ground */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "A physically accurate footstep system that can handle any and all other bones hitting the ground" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts = { "SurfaceImpacts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, SurfaceImpacts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts_Inner = { "SurfaceImpacts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMISurfaceImpact, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NumCompensateUpperBodyNodes_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Used for scaling rotation between nodes, incorrect number will give incorrect rotation */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used for scaling rotation between nodes, incorrect number will give incorrect rotation" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NumCompensateUpperBodyNodes = { "NumCompensateUpperBodyNodes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, NumCompensateUpperBodyNodes), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NumCompensateUpperBodyNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NumCompensateUpperBodyNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxAnimPlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Animation rate based on character speed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Animation rate based on character speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxAnimPlayRate = { "MaxAnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MaxAnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxAnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxAnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinAnimPlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Animation rate based on character speed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Animation rate based on character speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinAnimPlayRate = { "MinAnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MinAnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinAnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinAnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_InputInterpToZeroRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How fast input interpolates to zero when idle (used to smoothly transition gait node from moving to idle) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast input interpolates to zero when idle (used to smoothly transition gait node from moving to idle)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_InputInterpToZeroRate = { "InputInterpToZeroRate", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, InputInterpToZeroRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_InputInterpToZeroRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_InputInterpToZeroRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDuration_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How long the pivot animation runs for */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How long the pivot animation runs for" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDuration = { "PivotDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PivotDuration), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInterpRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How fast we can change direction (strafe/blendspace direction rate) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast we can change direction (strafe/blendspace direction rate)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInterpRate = { "DirectionInterpRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, DirectionInterpRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInterpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInterpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitInterpRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How fast gait speed catches up to actual speed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast gait speed catches up to actual speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitInterpRate = { "GaitInterpRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, GaitInterpRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitInterpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitInterpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CrouchGaitMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Applied when crouching */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Applied when crouching" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CrouchGaitMultiplier = { "CrouchGaitMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, CrouchGaitMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CrouchGaitMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CrouchGaitMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SprintGaitMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Applied when sprinting */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Applied when sprinting" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SprintGaitMultiplier = { "SprintGaitMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, SprintGaitMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SprintGaitMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SprintGaitMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BaseGaitMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Applied when not sprinting or crouching */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Applied when not sprinting or crouching" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BaseGaitMultiplier = { "BaseGaitMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, BaseGaitMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BaseGaitMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BaseGaitMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsAccelerationDegreesTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When neutral strafing, when checking the direction will check for an additional degree of change required to be considered \"backwards\" */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "When neutral strafing, when checking the direction will check for an additional degree of change required to be considered \"backwards\"" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsAccelerationDegreesTolerance = { "BackwardsAccelerationDegreesTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, BackwardsAccelerationDegreesTolerance), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsAccelerationDegreesTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsAccelerationDegreesTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsVelocityDegreesTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When neutral strafing, when checking the direction will check for an additional degree of change required to be considered \"backwards\" */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "When neutral strafing, when checking the direction will check for an additional degree of change required to be considered \"backwards\"" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsVelocityDegreesTolerance = { "BackwardsVelocityDegreesTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, BackwardsVelocityDegreesTolerance), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsVelocityDegreesTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsVelocityDegreesTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis = { "RightStrafeDirectionBasis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, RightStrafeDirectionBasis), Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis = { "NeutralStrafeDirectionBasis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, NeutralStrafeDirectionBasis), Z_Construct_UEnum_MoveIt_EMIStrafeDirectionBasis, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Was applying input on the previous frame */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Was applying input on the previous frame" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bWasApplyingInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput = { "bWasApplyingInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsApplyingInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput = { "bIsApplyingInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousVelocityRotation_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Velocity rotation from the previous frame */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Velocity rotation from the previous frame" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousVelocityRotation = { "PreviousVelocityRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PreviousVelocityRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousVelocityRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousVelocityRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousRawInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Raw input from the previous frame */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Raw input from the previous frame" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousRawInput = { "PreviousRawInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PreviousRawInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousRawInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousRawInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Input from the previous frame */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Input from the previous frame" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousInput = { "PreviousInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PreviousInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingRotation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingRotation = { "StoppingRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StoppingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Velocity when initially triggering stopping */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Velocity when initially triggering stopping" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingVelocity = { "StoppingVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StoppingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Input supplied when initially triggering stopping */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Input supplied when initially triggering stopping" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingInput = { "StoppingInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StoppingInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeDirection_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeDirection = { "StrafeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StrafeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Interpolated input for smooth direction changes */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Interpolated input for smooth direction changes" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInput = { "DirectionInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, DirectionInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovingInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Applies stopping input if stopping otherwise applies Input */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Applies stopping input if stopping otherwise applies Input" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovingInput = { "MovingInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MovingInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovingInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovingInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Input interpolated to zero (applied to gait) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Input interpolated to zero (applied to gait)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Input), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Input as obtained from the character */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Input as obtained from the character" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawInput = { "RawInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, RawInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootMotionMontageTurnRate_MetaData[] = {
		{ "Category", "TurnInPlace|Settings" },
		{ "Comment", "/** Rate at which character turns when starting a root motion montage */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Rate at which character turns when starting a root motion montage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootMotionMontageTurnRate = { "RootMotionMontageTurnRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, RootMotionMontageTurnRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootMotionMontageTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootMotionMontageTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartMovingTurnRate_MetaData[] = {
		{ "Category", "TurnInPlace|Settings" },
		{ "Comment", "/** Rate at which character turns when starting to move from idle (or partial turn) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Rate at which character turns when starting to move from idle (or partial turn)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartMovingTurnRate = { "StartMovingTurnRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StartMovingTurnRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartMovingTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartMovingTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BigStepTurnAngle_MetaData[] = {
		{ "Category", "TurnInPlace|Settings" },
		{ "Comment", "/** Angle at which a big step will be used instead of regular step */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Angle at which a big step will be used instead of regular step" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BigStepTurnAngle = { "BigStepTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, BigStepTurnAngle), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BigStepTurnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BigStepTurnAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxTurnAngle_MetaData[] = {
		{ "Category", "TurnInPlace|Settings" },
		{ "Comment", "/** Maximum angle at which point the character will turn to maintain this value (hard clamp on angle) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Maximum angle at which point the character will turn to maintain this value (hard clamp on angle)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxTurnAngle = { "MaxTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MaxTurnAngle), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxTurnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxTurnAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinTurnAngle_MetaData[] = {
		{ "Category", "TurnInPlace|Settings" },
		{ "Comment", "/** Angle at which turn in place will trigger */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Angle at which turn in place will trigger" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinTurnAngle = { "MinTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MinTurnAngle), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinTurnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinTurnAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_IsTurningCurveName_MetaData[] = {
		{ "Category", "TurnInPlace|Settings" },
		{ "Comment", "/** Curve Name for whether we are turning at this part of the animation */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Curve Name for whether we are turning at this part of the animation" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_IsTurningCurveName = { "IsTurningCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, IsTurningCurveName), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_IsTurningCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_IsTurningCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_YawCurveName_MetaData[] = {
		{ "Category", "TurnInPlace|Settings" },
		{ "Comment", "/** Curve Name for Yaw Curve */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Curve Name for Yaw Curve" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_YawCurveName = { "YawCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, YawCurveName), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_YawCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_YawCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn_MetaData[] = {
		{ "Category", "TurnInPlace" },
		{ "Comment", "/** Gate to update curve value at start of turn */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Gate to update curve value at start of turn" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bResetTurn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn = { "bResetTurn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bBigStep_MetaData[] = {
		{ "Category", "TurnInPlace" },
		{ "Comment", "/** If true, use a big turn instead of the normal turn */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "If true, use a big turn instead of the normal turn" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bBigStep_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bBigStep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bBigStep = { "bBigStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bBigStep_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bBigStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bBigStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn_MetaData[] = {
		{ "Category", "TurnInPlace" },
		{ "Comment", "/** Used by anim graph to trigger Turn state */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used by anim graph to trigger Turn state" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bDoTurn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn = { "bDoTurn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight_MetaData[] = {
		{ "Category", "TurnInPlace" },
		{ "Comment", "/** Used by anim graph to determine left or right turn animation */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used by anim graph to determine left or right turn animation" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bTurnRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight = { "bTurnRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnAngle_MetaData[] = {
		{ "Category", "TurnInPlace" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnAngle = { "TurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, TurnAngle), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CurveValue_MetaData[] = {
		{ "Category", "TurnInPlace" },
		{ "Comment", "/** Value of the yaw curve */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Value of the yaw curve" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, CurveValue), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CurveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CurveValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "TurnInPlace" },
		{ "Comment", "/** Character Actor Rotation Yaw */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character Actor Rotation Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Yaw), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootYawOffset_MetaData[] = {
		{ "Category", "TurnInPlace" },
		{ "Comment", "/** Used to negate rotation from root bone (to prevent mesh turning until turn in place triggers) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Used to negate rotation from root bone (to prevent mesh turning until turn in place triggers)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootYawOffset = { "RootYawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, RootYawOffset), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootYawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootYawOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseLegacyTurnInPlace_MetaData[] = {
		{ "Category", "TurnInPlace" },
		{ "Comment", "/** If true, uses the legacy turn in place node */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "If true, uses the legacy turn in place node" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseLegacyTurnInPlace_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bUseLegacyTurnInPlace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseLegacyTurnInPlace = { "bUseLegacyTurnInPlace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseLegacyTurnInPlace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseLegacyTurnInPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseLegacyTurnInPlace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotInput_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotInput = { "PivotInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PivotInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotVelocity = { "PivotVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PivotVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimPlayRate_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Plug into animations to scale their play rate based on movement speed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Plug into animations to scale their play rate based on movement speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimPlayRate = { "AnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Movement direction, also applicable to strafing */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Movement direction, also applicable to strafing" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsMovingForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward = { "bIsMovingForward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Movement direction, also applicable to strafing */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Movement direction, also applicable to strafing" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsMovingBackward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward = { "bIsMovingBackward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** (bIsApplyingInput & bIsMoving) - Used as \"has started moving after stopping\" */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "(bIsApplyingInput & bIsMoving) - Used as \"has started moving after stopping\"" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsMovingWithInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput = { "bIsMovingWithInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Has velocity but is not providing input (while in air) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Has velocity but is not providing input (while in air)" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsStoppingInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir = { "bIsStoppingInAir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Has velocity but is not providing input */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Has velocity but is not providing input" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsStopping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping = { "bIsStopping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Speed is 0.0 */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Speed is 0.0" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle = { "bIsIdle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Speed is over 0.0 */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Speed is over 0.0" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Pivot Yaw Direction */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Pivot Yaw Direction" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDirection = { "PivotDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, PivotDirection), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Is pivoting */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Is pivoting" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bPivot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot = { "bPivot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MotionWeight_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Motion weight is carried momentum from starting/stopping movement that is applied via the MotionWeight anim graph node */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Motion weight is carried momentum from starting/stopping movement that is applied via the MotionWeight anim graph node" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MotionWeight = { "MotionWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MotionWeight), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MotionWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MotionWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Yaw direction that we are moving in */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Yaw direction that we are moving in" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Direction), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Speed when stopping. Not currently used */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Speed when stopping. Not currently used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingSpeed = { "StoppingSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StoppingSpeed), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitMultiplier_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Current gait multiplier based on character state */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Current gait multiplier based on character state" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitMultiplier = { "GaitMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, GaitMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Interpolated speed applied to the gate allowing for slower changes to the gate to cause start/stop animations and to blend nicely to and from idle */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Interpolated speed applied to the gate allowing for slower changes to the gate to cause start/stop animations and to blend nicely to and from idle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeed = { "GaitSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, GaitSpeed), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Horizontal speed normalized to a 0-1 range (up to CharacterMovement->GetMaxSpeed()) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Horizontal speed normalized to a 0-1 range (up to CharacterMovement->GetMaxSpeed())" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Ignores slope and pivot speed reductions so they correctly affect blendspaces - Horizontal speed normalized to a 0-1 range (up to CharacterMovement->GetMaxAnimSpeed()) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Ignores slope and pivot speed reductions so they correctly affect blendspaces - Horizontal speed normalized to a 0-1 range (up to CharacterMovement->GetMaxAnimSpeed())" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimSpeed = { "AnimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AnimSpeed), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Non-normalized horizontal speed (original raw value) - Velocity.Size2D() */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Non-normalized horizontal speed (original raw value) - Velocity.Size2D()" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawSpeed = { "RawSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, RawSpeed), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FloorOrientCompensation_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Compensation when orienting to the floor that will keep the body upright if applied */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Compensation when orienting to the floor that will keep the body upright if applied" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FloorOrientCompensation = { "FloorOrientCompensation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, FloorOrientCompensation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FloorOrientCompensation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FloorOrientCompensation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Rotational velocity, used to drive turn in place and leaning, etc */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Rotational velocity, used to drive turn in place and leaning, etc" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AngularVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_VelocityRotation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_VelocityRotation = { "VelocityRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, VelocityRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_VelocityRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_VelocityRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Traversal velocity of character impact when landing */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Traversal velocity of character impact when landing" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingVelocity = { "LandingVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, LandingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_JumpingVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Velocity of character jump */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Velocity of character jump" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_JumpingVelocity = { "JumpingVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, JumpingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_JumpingVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_JumpingVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TraversalVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** How fast the character has been moving over the past few frames */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast the character has been moving over the past few frames" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TraversalVelocity = { "TraversalVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, TraversalVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TraversalVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TraversalVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** How fast the character is moving and the direction they are moving in */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "How fast the character is moving and the direction they are moving in" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LookTarget_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** This should be set externally by the character to assign current look target */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "This should be set externally by the character to assign current look target" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LookTarget = { "LookTarget", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, LookTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LookTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LookTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** This should be set externally by the character to enable or disable look targets */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "This should be set externally by the character to enable or disable look targets" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bEnableLookTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget = { "bEnableLookTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Current movement system (affects strafing behaviour) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Current movement system (affects strafing behaviour)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem = { "MovementSystem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, MovementSystem), Z_Construct_UEnum_MoveIt_EMIMovementSystem, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Current orientation for strafing */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Current orientation for strafing" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation = { "StrafeOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, StrafeOrientation), Z_Construct_UEnum_MoveIt_EMIStrafeOrientation, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FootIKState_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/**\n\x09 * Current state used for Foot IK\n\x09 * 0 if Standing\n\x09 * 1 if Crouched\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Current state used for Foot IK\n0 if Standing\n1 if Crouched" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FootIKState = { "FootIKState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, FootIKState), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FootIKState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FootIKState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetVertical_MetaData[] = {
		{ "Category", "AimOffset" },
		{ "Comment", "/** Vertical axis for aim offset */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Vertical axis for aim offset" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetVertical = { "AimOffsetVertical", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AimOffsetVertical), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetVertical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetHorizontal_MetaData[] = {
		{ "Category", "AimOffset" },
		{ "Comment", "/** Horizontal axis for aim offset */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Horizontal axis for aim offset" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetHorizontal = { "AimOffsetHorizontal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, AimOffsetHorizontal), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetHorizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled_MetaData[] = {
		{ "Category", "AimOffset" },
		{ "Comment", "/** Aim offset is disabled when look target is enabled */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Aim offset is disabled when look target is enabled" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bAimOffsetEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled = { "bAimOffsetEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OffHandIKTM_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Transform applied to offhand FABRIK */" },
		{ "DisplayName", "OffHand IK" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Transform applied to offhand FABRIK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OffHandIKTM = { "OffHandIKTM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, OffHandIKTM), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OffHandIKTM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OffHandIKTM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LeftArmBlendWeight_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Blends in left arm animation if weapon is one handed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Blends in left arm animation if weapon is one handed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LeftArmBlendWeight = { "LeftArmBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, LeftArmBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LeftArmBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LeftArmBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** True if current weapon is one handed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "True if current weapon is one handed" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bWeaponOneHanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded = { "bWeaponOneHanded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** True if armed and weapon is not one handed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "True if armed and weapon is not one handed" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bEnableHandIK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK = { "bEnableHandIK", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** True if armed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "True if armed" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bEnableWeaponPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose = { "bEnableWeaponPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** True if Weapon contains aim offset to apply */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "True if Weapon contains aim offset to apply" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bUseWeaponAimPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose = { "bUseWeaponAimPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** True if Weapon contains animation sequence to layer over animation states */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "True if Weapon contains animation sequence to layer over animation states" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bUseWeaponPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose = { "bUseWeaponPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAimOffset_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Always Weapon.AimOffset if it is valid, if not valid, will be the last valid WeaponAimOffset */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Always Weapon.AimOffset if it is valid, if not valid, will be the last valid WeaponAimOffset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAimOffset = { "WeaponAimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, WeaponAimOffset), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAimOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Current anim info for weapon */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Current anim info for weapon" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Weapon), Z_Construct_UScriptStruct_FMIWeapon, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAnimState_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Anim state for current weapon, used to select aim offsets currently */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Anim state for current weapon, used to select aim offsets currently" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAnimState = { "WeaponAnimState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, WeaponAnimState), METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAnimState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAnimState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bChangingWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon = { "bChangingWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Character has a weapon out */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character has a weapon out" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bArmed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed = { "bArmed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Character has no weapon out */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character has no weapon out" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bUnarmed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed = { "bUnarmed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOrientKeepUpperBodyUpright_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** True if character wants to keep their upper body upright */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "True if character wants to keep their upper body upright" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOrientKeepUpperBodyUpright_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bOrientKeepUpperBodyUpright = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOrientKeepUpperBodyUpright = { "bOrientKeepUpperBodyUpright", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOrientKeepUpperBodyUpright_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOrientKeepUpperBodyUpright_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOrientKeepUpperBodyUpright_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** FootIK is enabled when on ground */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "FootIK is enabled when on ground" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bFootIK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK = { "bFootIK", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Character is in ragdoll */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is in ragdoll" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bRagdoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll = { "bRagdoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Is not a local player or is not aiming */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Is not a local player or is not aiming" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bNotAimingLocalPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer = { "bNotAimingLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Character is a local player who is aiming weapon */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is a local player who is aiming weapon" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bAimingLocalPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer = { "bAimingLocalPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Character is not aiming weapon */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is not aiming weapon" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bNotAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming = { "bNotAiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Character is aiming weapon */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is aiming weapon" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming = { "bAiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Gait is enabled when on ground and moving */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Gait is enabled when on ground and moving" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bGaitEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled = { "bGaitEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Strafe is enabled when MovementSystem is orient to view */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Strafe is enabled when MovementSystem is orient to view" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bStrafeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled = { "bStrafeEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Character is floor sliding */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is floor sliding" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsFloorSliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding = { "bIsFloorSliding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Character is sprinting and over 50% of sprint speed */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is sprinting and over 50% of sprint speed" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion_MetaData[] = {
		{ "Category", "States" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bPlayingRootMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion = { "bPlayingRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Character is on the ground (not falling) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is on the ground (not falling)" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bOnGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround = { "bOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Character is in the air (can be both jumping and falling) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is in the air (can be both jumping and falling)" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsFalling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Character is jumping (falling and Velocity.Z > 0) */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is jumping (falling and Velocity.Z > 0)" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping = { "bIsJumping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Character is crouched and on the ground */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is crouched and on the ground" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bCrouchingOnGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround = { "bCrouchingOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Character is crouched */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is crouched" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsCrouched = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched = { "bIsCrouched", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding_MetaData[] = {
		{ "Category", "States" },
		{ "Comment", "/** Character is not crouched */" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
		{ "ToolTip", "Character is not crouched" },
	};
#endif
	void Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding_SetBit(void* Obj)
	{
		((UMIAnimInstance*)Obj)->bIsStanding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding = { "bIsStanding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIAnimInstance), &Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Movement), Z_Construct_UClass_UMICharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/MIAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIAnimInstance, Character), Z_Construct_UClass_AMICharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMIAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SurfaceImpacts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NumCompensateUpperBodyNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxAnimPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinAnimPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_InputInterpToZeroRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInterpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitInterpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CrouchGaitMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_SprintGaitMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BaseGaitMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsAccelerationDegreesTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BackwardsVelocityDegreesTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RightStrafeDirectionBasis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_NeutralStrafeDirectionBasis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWasApplyingInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsApplyingInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousVelocityRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousRawInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PreviousInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_DirectionInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovingInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootMotionMontageTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StartMovingTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_BigStepTurnAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MaxTurnAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MinTurnAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_IsTurningCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_YawCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bResetTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bBigStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bDoTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bTurnRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TurnAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_CurveValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RootYawOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseLegacyTurnInPlace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingBackward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMovingWithInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStoppingInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStopping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_PivotDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MotionWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StoppingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_GaitSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AnimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_RawSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FloorOrientCompensation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_VelocityRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LandingVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_JumpingVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_TraversalVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LookTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableLookTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_MovementSystem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_StrafeOrientation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_FootIKState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_AimOffsetHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimOffsetEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_OffHandIKTM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_LeftArmBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bWeaponOneHanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableHandIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bEnableWeaponPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponAimPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUseWeaponPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAimOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_WeaponAnimState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bChangingWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bArmed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bUnarmed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOrientKeepUpperBodyUpright,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bFootIK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bRagdoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAimingLocalPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAimingLocalPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bNotAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bAiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bGaitEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bStrafeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFloorSliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bPlayingRootMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bCrouchingOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsCrouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_bIsStanding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Movement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIAnimInstance_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMIAnimInstance_Statics::ClassParams = {
		&UMIAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMIAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMIAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMIAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMIAnimInstance, 2290055048);
	template<> MOVEIT_API UClass* StaticClass<UMIAnimInstance>()
	{
		return UMIAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMIAnimInstance(Z_Construct_UClass_UMIAnimInstance, &UMIAnimInstance::StaticClass, TEXT("/Script/MoveIt"), TEXT("UMIAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
