// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_LookTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LookTarget() {}
// Cross Module References
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMILookTargetInput();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookTarget();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMILookTargetBone();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
	static UEnum* EMILookTargetInput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMILookTargetInput, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMILookTargetInput"));
		}
		return Singleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMILookTargetInput>()
	{
		return EMILookTargetInput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMILookTargetInput(EMILookTargetInput_StaticEnum, TEXT("/Script/MoveIt"), TEXT("EMILookTargetInput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoveIt_EMILookTargetInput_Hash() { return 2257646041U; }
	UEnum* Z_Construct_UEnum_MoveIt_EMILookTargetInput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMILookTargetInput"), 0, Get_Z_Construct_UEnum_MoveIt_EMILookTargetInput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMILookTargetInput::LTI_Actor", (int64)EMILookTargetInput::LTI_Actor },
				{ "EMILookTargetInput::LTI_Location", (int64)EMILookTargetInput::LTI_Location },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LTI_Actor.DisplayName", "Actor" },
				{ "LTI_Actor.Name", "EMILookTargetInput::LTI_Actor" },
				{ "LTI_Location.DisplayName", "Location" },
				{ "LTI_Location.Name", "EMILookTargetInput::LTI_Location" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
				nullptr,
				"EMILookTargetInput",
				"EMILookTargetInput",
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
class UScriptStruct* FAnimNode_LookTarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LookTarget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LookTarget, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_LookTarget"), sizeof(FAnimNode_LookTarget), Get_Z_Construct_UScriptStruct_FAnimNode_LookTarget_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_LookTarget>()
{
	return FAnimNode_LookTarget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LookTarget(FAnimNode_LookTarget::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_LookTarget"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LookTarget
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LookTarget()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LookTarget")),new UScriptStruct::TCppStructOps<FAnimNode_LookTarget>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LookTarget;
	struct Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyeLevelSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EyeLevelSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchZOffsetLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArchZOffsetLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArchLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolverFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetInputType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Procedurally looks at a given target or location\n *\x09""Applies a spring for organic, realistic, natural motion\n *\x09Runs more or less on black magic\n *\x09Thanks to p@t from Unreal Slackers for major help with the math (he came up with almost all of it)\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "ToolTip", "Procedurally looks at a given target or location\nApplies a spring for organic, realistic, natural motion\nRuns more or less on black magic\nThanks to p@t from Unreal Slackers for major help with the math (he came up with almost all of it)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LookTarget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** Bones that look at the target. Result is averaged between all added bones and can be re-biased using the Weight */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "ToolTip", "Bones that look at the target. Result is averaged between all added bones and can be re-biased using the Weight" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMILookTargetBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_EyeLevelSocket_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** The socket that represents where the character's eyes are */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "ToolTip", "The socket that represents where the character's eyes are" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_EyeLevelSocket = { "EyeLevelSocket", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, EyeLevelSocket), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_EyeLevelSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_EyeLevelSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchZOffsetLimit_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** Z Height Limit for Arching */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Z Height Limit for Arching" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchZOffsetLimit = { "ArchZOffsetLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, ArchZOffsetLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchZOffsetLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchZOffsetLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchLimit_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Back and forward motion along the forward axis (Y) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Back and forward motion along the forward axis (Y)" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchLimit = { "ArchLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, ArchLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_RollLimit_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Side-to-side motion along the roll axis (Z) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Side-to-side motion along the roll axis (Z)" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_RollLimit = { "RollLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, RollLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_RollLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_RollLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TwistLimit_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Twisting motion along the aim axis (X) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Twisting motion along the aim axis (X)" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TwistLimit = { "TwistLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, TwistLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TwistLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TwistLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SolverFrequency_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/**\n\x09 * The frequency at which the solver plays\n\x09 * Lower frequencies are prone to issues but are more performant\n\x09 * Changing the frequency will greatly impact the outcome\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "ToolTip", "The frequency at which the solver plays\nLower frequencies are prone to issues but are more performant\nChanging the frequency will greatly impact the outcome" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SolverFrequency = { "SolverFrequency", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, SolverFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SolverFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SolverFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringDamping_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/**\n\x09 * Traversing between linear result and spring result\n\x09 * 1 is no damping\n\x09 * 0 is completely damped\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Traversing between linear result and spring result\n1 is no damping\n0 is completely damped" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, SpringDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** How stiff the spring is (aka tightness) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How stiff the spring is (aka tightness)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, SpringStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStrength_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "/** How much strength applied when moving against the resistance of the spring (aka displacement, mass) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much strength applied when moving against the resistance of the spring (aka displacement, mass)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStrength = { "SpringStrength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, SpringStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** Actor to look at */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Actor to look at" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/** Location in world space to look at */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Location in world space to look at" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "Comment", "/**\n\x09 * What the character should look at\n\x09 * @param Actor Look at an actor\n\x09 * @param Location Look at a position in world space\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
		{ "ToolTip", "What the character should look at\n@param Actor Look at an actor\n@param Location Look at a position in world space" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType = { "TargetInputType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LookTarget, TargetInputType), Z_Construct_UEnum_MoveIt_EMILookTargetInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Bones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_EyeLevelSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchZOffsetLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_ArchLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_RollLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TwistLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SolverFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_SpringStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::NewProp_TargetInputType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_LookTarget",
		sizeof(FAnimNode_LookTarget),
		alignof(FAnimNode_LookTarget),
		Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookTarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LookTarget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LookTarget"), sizeof(FAnimNode_LookTarget), Get_Z_Construct_UScriptStruct_FAnimNode_LookTarget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LookTarget_Hash() { return 1037869831U; }
class UScriptStruct* FMILookTargetBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMILookTargetBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMILookTargetBone, Z_Construct_UPackage__Script_MoveIt(), TEXT("MILookTargetBone"), sizeof(FMILookTargetBone), Get_Z_Construct_UScriptStruct_FMILookTargetBone_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMILookTargetBone>()
{
	return FMILookTargetBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMILookTargetBone(FMILookTargetBone::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MILookTargetBone"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMILookTargetBone
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMILookTargetBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MILookTargetBone")),new UScriptStruct::TCppStructOps<FMILookTargetBone>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMILookTargetBone;
	struct Z_Construct_UScriptStruct_FMILookTargetBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMILookTargetBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMILookTargetBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bias_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMILookTargetBone, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMILookTargetBone, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "LookTarget" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LookTarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMILookTargetBone, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMILookTargetBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMILookTargetBone_Statics::NewProp_Bone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMILookTargetBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		nullptr,
		&NewStructOps,
		"MILookTargetBone",
		sizeof(FMILookTargetBone),
		alignof(FMILookTargetBone),
		Z_Construct_UScriptStruct_FMILookTargetBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMILookTargetBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMILookTargetBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMILookTargetBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MILookTargetBone"), sizeof(FMILookTargetBone), Get_Z_Construct_UScriptStruct_FMILookTargetBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMILookTargetBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMILookTargetBone_Hash() { return 1486122610U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
