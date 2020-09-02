// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MITypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMITypes() {}
// Cross Module References
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EPhysicsBlendState();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIMovementSystem();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeOrientation();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIShotImpact();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIWeapon();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FOrientToFloorSettings();
// End Cross Module References
	static UEnum* EPhysicsBlendState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EPhysicsBlendState, Z_Construct_UPackage__Script_MoveIt(), TEXT("EPhysicsBlendState"));
		}
		return Singleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EPhysicsBlendState>()
	{
		return EPhysicsBlendState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhysicsBlendState(EPhysicsBlendState_StaticEnum, TEXT("/Script/MoveIt"), TEXT("EPhysicsBlendState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoveIt_EPhysicsBlendState_Hash() { return 3225930773U; }
	UEnum* Z_Construct_UEnum_MoveIt_EPhysicsBlendState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhysicsBlendState"), 0, Get_Z_Construct_UEnum_MoveIt_EPhysicsBlendState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhysicsBlendState::PBS_Inactive", (int64)EPhysicsBlendState::PBS_Inactive },
				{ "EPhysicsBlendState::PBS_In", (int64)EPhysicsBlendState::PBS_In },
				{ "EPhysicsBlendState::PBS_Out", (int64)EPhysicsBlendState::PBS_Out },
				{ "EPhysicsBlendState::PBS_MAX", (int64)EPhysicsBlendState::PBS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MITypes.h" },
				{ "PBS_In.DisplayName", "In" },
				{ "PBS_In.Name", "EPhysicsBlendState::PBS_In" },
				{ "PBS_Inactive.DisplayName", "Inactive" },
				{ "PBS_Inactive.Name", "EPhysicsBlendState::PBS_Inactive" },
				{ "PBS_MAX.Hidden", "" },
				{ "PBS_MAX.Name", "EPhysicsBlendState::PBS_MAX" },
				{ "PBS_Out.DisplayName", "Out" },
				{ "PBS_Out.Name", "EPhysicsBlendState::PBS_Out" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
				nullptr,
				"EPhysicsBlendState",
				"EPhysicsBlendState",
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
	static UEnum* EMIMovementSystem_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIMovementSystem, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIMovementSystem"));
		}
		return Singleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIMovementSystem>()
	{
		return EMIMovementSystem_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMIMovementSystem(EMIMovementSystem_StaticEnum, TEXT("/Script/MoveIt"), TEXT("EMIMovementSystem"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoveIt_EMIMovementSystem_Hash() { return 1773776406U; }
	UEnum* Z_Construct_UEnum_MoveIt_EMIMovementSystem()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMIMovementSystem"), 0, Get_Z_Construct_UEnum_MoveIt_EMIMovementSystem_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMIMovementSystem::MS_OrientToView", (int64)EMIMovementSystem::MS_OrientToView },
				{ "EMIMovementSystem::MS_OrientToMovement", (int64)EMIMovementSystem::MS_OrientToMovement },
				{ "EMIMovementSystem::MS_CycleOrientToMovement", (int64)EMIMovementSystem::MS_CycleOrientToMovement },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MITypes.h" },
				{ "MS_CycleOrientToMovement.DisplayName", "Orient To Movement with Cycle" },
				{ "MS_CycleOrientToMovement.Name", "EMIMovementSystem::MS_CycleOrientToMovement" },
				{ "MS_OrientToMovement.DisplayName", "Orient To Movement" },
				{ "MS_OrientToMovement.Name", "EMIMovementSystem::MS_OrientToMovement" },
				{ "MS_OrientToView.DisplayName", "Orient To View" },
				{ "MS_OrientToView.Name", "EMIMovementSystem::MS_OrientToView" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
				nullptr,
				"EMIMovementSystem",
				"EMIMovementSystem",
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
	static UEnum* EMIStrafeOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIStrafeOrientation, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIStrafeOrientation"));
		}
		return Singleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIStrafeOrientation>()
	{
		return EMIStrafeOrientation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMIStrafeOrientation(EMIStrafeOrientation_StaticEnum, TEXT("/Script/MoveIt"), TEXT("EMIStrafeOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoveIt_EMIStrafeOrientation_Hash() { return 1112974671U; }
	UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMIStrafeOrientation"), 0, Get_Z_Construct_UEnum_MoveIt_EMIStrafeOrientation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMIStrafeOrientation::SO_Neutral", (int64)EMIStrafeOrientation::SO_Neutral },
				{ "EMIStrafeOrientation::SO_Right", (int64)EMIStrafeOrientation::SO_Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MITypes.h" },
				{ "SO_Neutral.DisplayName", "Neutral" },
				{ "SO_Neutral.Name", "EMIStrafeOrientation::SO_Neutral" },
				{ "SO_Right.DisplayName", "Right" },
				{ "SO_Right.Name", "EMIStrafeOrientation::SO_Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
				nullptr,
				"EMIStrafeOrientation",
				"EMIStrafeOrientation",
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
class UScriptStruct* FMIShotImpact::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMIShotImpact_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIShotImpact, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIShotImpact"), sizeof(FMIShotImpact), Get_Z_Construct_UScriptStruct_FMIShotImpact_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIShotImpact>()
{
	return FMIShotImpact::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIShotImpact(FMIShotImpact::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MIShotImpact"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMIShotImpact
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMIShotImpact()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MIShotImpact")),new UScriptStruct::TCppStructOps<FMIShotImpact>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMIShotImpact;
	struct Z_Construct_UScriptStruct_FMIShotImpact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIShotImpact_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIShotImpact_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIShotImpact>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIShotImpact_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIShotImpact",
		sizeof(FMIShotImpact),
		alignof(FMIShotImpact),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIShotImpact_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIShotImpact_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIShotImpact()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIShotImpact_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIShotImpact"), sizeof(FMIShotImpact), Get_Z_Construct_UScriptStruct_FMIShotImpact_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIShotImpact_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIShotImpact_Hash() { return 3136300722U; }
class UScriptStruct* FPhysicsBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FPhysicsBlend_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsBlend, Z_Construct_UPackage__Script_MoveIt(), TEXT("PhysicsBlend"), sizeof(FPhysicsBlend), Get_Z_Construct_UScriptStruct_FPhysicsBlend_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FPhysicsBlend>()
{
	return FPhysicsBlend::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicsBlend(FPhysicsBlend::StaticStruct, TEXT("/Script/MoveIt"), TEXT("PhysicsBlend"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFPhysicsBlend
{
	FScriptStruct_MoveIt_StaticRegisterNativesFPhysicsBlend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicsBlend")),new UScriptStruct::TCppStructOps<FPhysicsBlend>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFPhysicsBlend;
	struct Z_Construct_UScriptStruct_FPhysicsBlend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsBlendState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PhysicsBlendState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhysicsBlendState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseInterpOutRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseInterpOutRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxImpulseTaken_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxImpulseTaken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsBlend>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState = { "PhysicsBlendState", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, PhysicsBlendState), Z_Construct_UEnum_MoveIt_EPhysicsBlendState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseInterpOutRate_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * How fast the applied impulse interpolates out \n\x09 * Workaround for not knowing the impulse on each bone but needing to limit total application\n\x09 */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "How fast the applied impulse interpolates out\nWorkaround for not knowing the impulse on each bone but needing to limit total application" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseInterpOutRate = { "ImpulseInterpOutRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, ImpulseInterpOutRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseInterpOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseInterpOutRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxImpulseTaken_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxImpulseTaken = { "MaxImpulseTaken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, MaxImpulseTaken), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxImpulseTaken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxImpulseTaken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxBlendWeight_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxBlendWeight = { "MaxBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, MaxBlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MinBlendWeight_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MinBlendWeight = { "MinBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, MinBlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MinBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MinBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendOut_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Parameters for blending out */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Parameters for blending out" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendOut = { "BlendOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, BlendOut), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendIn_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Parameters for blending in */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Parameters for blending in" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, BlendIn), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseMultiplier = { "ImpulseMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, ImpulseMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** \n\x09 * Bone to simulate physics on \n\x09 * Impulse application will fail if physics asset does not contain a body (capsule, box, sphere, etc)\n\x09 * @note : Set to None to disable\n\x09 */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Bone to simulate physics on\nImpulse application will fail if physics asset does not contain a body (capsule, box, sphere, etc)\n@note : Set to None to disable" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhysicsBlend, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_PhysicsBlendState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseInterpOutRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxImpulseTaken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MaxBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_MinBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_ImpulseMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBlend_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"PhysicsBlend",
		sizeof(FPhysicsBlend),
		alignof(FPhysicsBlend),
		Z_Construct_UScriptStruct_FPhysicsBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicsBlend_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicsBlend"), sizeof(FPhysicsBlend), Get_Z_Construct_UScriptStruct_FPhysicsBlend_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicsBlend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicsBlend_Hash() { return 1210887492U; }
class UScriptStruct* FMIWeapon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMIWeapon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIWeapon, Z_Construct_UPackage__Script_MoveIt(), TEXT("MIWeapon"), sizeof(FMIWeapon), Get_Z_Construct_UScriptStruct_FMIWeapon_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMIWeapon>()
{
	return FMIWeapon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIWeapon(FMIWeapon::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MIWeapon"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMIWeapon
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMIWeapon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MIWeapon")),new UScriptStruct::TCppStructOps<FMIWeapon>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMIWeapon;
	struct Z_Construct_UScriptStruct_FMIWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimStance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimStance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOneHanded_MetaData[];
#endif
		static void NewProp_bIsOneHanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOneHanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffHandSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OffHandSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIWeapon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIWeapon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AimOffset_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AimOffset = { "AimOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIWeapon, AimOffset), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AimOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AimOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponPose_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponPose = { "WeaponPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIWeapon, WeaponPose), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AnimStance_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** \n\x09 * [ DEPRECATED / NO LONGER USED ]\n\x09 * Animation stance for this weapon \n\x09 */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "[ DEPRECATED / NO LONGER USED ]\nAnimation stance for this weapon" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AnimStance = { "AnimStance", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIWeapon, AnimStance), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AnimStance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AnimStance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded_SetBit(void* Obj)
	{
		((FMIWeapon*)Obj)->bIsOneHanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded = { "bIsOneHanded", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMIWeapon), &Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_OffHandSocketName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_OffHandSocketName = { "OffHandSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIWeapon, OffHandSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_OffHandSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_OffHandSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponOffset_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/**\n\x09 * [ DEPRECATED / NO LONGER USED ]\n\x09 * X. Right\n\x09 * Y. Forward\n\x09 * Z. Up\n\x09 */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "[ DEPRECATED / NO LONGER USED ]\nX. Right\nY. Forward\nZ. Up" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponOffset = { "WeaponOffset", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIWeapon, WeaponOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIWeapon, WeaponMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AimOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_AnimStance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_bIsOneHanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_OffHandSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIWeapon_Statics::NewProp_WeaponMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIWeapon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MIWeapon",
		sizeof(FMIWeapon),
		alignof(FMIWeapon),
		Z_Construct_UScriptStruct_FMIWeapon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIWeapon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIWeapon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIWeapon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIWeapon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIWeapon"), sizeof(FMIWeapon), Get_Z_Construct_UScriptStruct_FMIWeapon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIWeapon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIWeapon_Hash() { return 3578117617U; }
class UScriptStruct* FOrientToFloorSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FOrientToFloorSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrientToFloorSettings, Z_Construct_UPackage__Script_MoveIt(), TEXT("OrientToFloorSettings"), sizeof(FOrientToFloorSettings), Get_Z_Construct_UScriptStruct_FOrientToFloorSettings_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FOrientToFloorSettings>()
{
	return FOrientToFloorSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOrientToFloorSettings(FOrientToFloorSettings::StaticStruct, TEXT("/Script/MoveIt"), TEXT("OrientToFloorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFOrientToFloorSettings
{
	FScriptStruct_MoveIt_StaticRegisterNativesFOrientToFloorSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OrientToFloorSettings")),new UScriptStruct::TCppStructOps<FOrientToFloorSettings>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFOrientToFloorSettings;
	struct Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientMaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrientMaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientMinAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrientMinAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientAngleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrientAngleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientResetRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrientResetRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientRotateRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrientRotateRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrientToFloorSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMaxAngle_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** Maximum angle it will orient to */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Maximum angle it will orient to" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMaxAngle = { "OrientMaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientToFloorSettings, OrientMaxAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMinAngle_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** Minimum angle before it will start orienting */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Minimum angle before it will start orienting" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMinAngle = { "OrientMinAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientToFloorSettings, OrientMinAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMinAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMinAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientAngleMultiplier_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** \n\x09 * Scale the orientation angle\n\x09 * Examples: 0.5 will remap 60 degrees as 30 degrees, halving the effect.\n\x09 * 1.0 will have the full effect. 0 will disable.\n\x09 * 2.0 will double the effect.\n\x09 * -1.0 will inverse the effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "Scale the orientation angle\nExamples: 0.5 will remap 60 degrees as 30 degrees, halving the effect.\n1.0 will have the full effect. 0 will disable.\n2.0 will double the effect.\n-1.0 will inverse the effect." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientAngleMultiplier = { "OrientAngleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientToFloorSettings, OrientAngleMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientAngleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientAngleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientResetRate_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** How fast the mesh orients back to upright when leaving the floor */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "How fast the mesh orients back to upright when leaving the floor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientResetRate = { "OrientResetRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientToFloorSettings, OrientResetRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientResetRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientResetRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientRotateRate_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** How fast the mesh orients to the floor */" },
		{ "ModuleRelativePath", "Public/MITypes.h" },
		{ "ToolTip", "How fast the mesh orients to the floor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientRotateRate = { "OrientRotateRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientToFloorSettings, OrientRotateRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientRotateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientRotateRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientMinAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientAngleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientResetRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::NewProp_OrientRotateRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"OrientToFloorSettings",
		sizeof(FOrientToFloorSettings),
		alignof(FOrientToFloorSettings),
		Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOrientToFloorSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOrientToFloorSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OrientToFloorSettings"), sizeof(FOrientToFloorSettings), Get_Z_Construct_UScriptStruct_FOrientToFloorSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOrientToFloorSettings_Hash() { return 160037512U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
