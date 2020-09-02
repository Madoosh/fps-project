// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MIViewComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIViewComponent() {}
// Cross Module References
	MOVEIT_API UFunction* Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMICameraViewBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMICharacterState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOVEIT_API UClass* Z_Construct_UClass_UMIViewComponent_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMIViewComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics
	{
		struct _Script_MoveIt_eventMIOnCameraChanged_Parms
		{
			UCameraComponent* NewCamera;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::NewProp_NewCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::NewProp_NewCamera = { "NewCamera", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MoveIt_eventMIOnCameraChanged_Parms, NewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::NewProp_NewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::NewProp_NewCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::NewProp_NewCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MoveIt, nullptr, "MIOnCameraChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_MoveIt_eventMIOnCameraChanged_Parms), Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FMICameraViewBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMICameraViewBlend_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMICameraViewBlend, Z_Construct_UPackage__Script_MoveIt(), TEXT("MICameraViewBlend"), sizeof(FMICameraViewBlend), Get_Z_Construct_UScriptStruct_FMICameraViewBlend_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMICameraViewBlend>()
{
	return FMICameraViewBlend::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMICameraViewBlend(FMICameraViewBlend::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MICameraViewBlend"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMICameraViewBlend
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMICameraViewBlend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MICameraViewBlend")),new UScriptStruct::TCppStructOps<FMICameraViewBlend>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMICameraViewBlend;
	struct Z_Construct_UScriptStruct_FMICameraViewBlend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreZDistance_MetaData[];
#endif
		static void NewProp_bIgnoreZDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreZDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleTimeOverViewDistance_MetaData[];
#endif
		static void NewProp_bScaleTimeOverViewDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleTimeOverViewDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMICameraViewBlend>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_DistanceScalar_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "EditCondition", "bScaleTimeByViewDistance" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_DistanceScalar = { "DistanceScalar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMICameraViewBlend, DistanceScalar), METADATA_PARAMS(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_DistanceScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_DistanceScalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "EditCondition", "bScaleTimeByViewDistance" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance_SetBit(void* Obj)
	{
		((FMICameraViewBlend*)Obj)->bIgnoreZDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance = { "bIgnoreZDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMICameraViewBlend), &Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance_SetBit(void* Obj)
	{
		((FMICameraViewBlend*)Obj)->bScaleTimeOverViewDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance = { "bScaleTimeOverViewDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMICameraViewBlend), &Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_DistanceScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bIgnoreZDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::NewProp_bScaleTimeOverViewDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAlphaBlend,
		&NewStructOps,
		"MICameraViewBlend",
		sizeof(FMICameraViewBlend),
		alignof(FMICameraViewBlend),
		Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMICameraViewBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMICameraViewBlend_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MICameraViewBlend"), sizeof(FMICameraViewBlend), Get_Z_Construct_UScriptStruct_FMICameraViewBlend_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMICameraViewBlend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMICameraViewBlend_Hash() { return 869824772U; }
class UScriptStruct* FMICharacterState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FMICharacterState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMICharacterState, Z_Construct_UPackage__Script_MoveIt(), TEXT("MICharacterState"), sizeof(FMICharacterState), Get_Z_Construct_UScriptStruct_FMICharacterState_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FMICharacterState>()
{
	return FMICharacterState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMICharacterState(FMICharacterState::StaticStruct, TEXT("/Script/MoveIt"), TEXT("MICharacterState"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFMICharacterState
{
	FScriptStruct_MoveIt_StaticRegisterNativesFMICharacterState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MICharacterState")),new UScriptStruct::TCppStructOps<FMICharacterState>);
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFMICharacterState;
	struct Z_Construct_UScriptStruct_FMICharacterState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICharacterState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMICharacterState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMICharacterState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMICharacterState_Statics::NewProp_ViewOffset_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMICharacterState_Statics::NewProp_ViewOffset = { "ViewOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMICharacterState, ViewOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMICharacterState_Statics::NewProp_ViewOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICharacterState_Statics::NewProp_ViewOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMICharacterState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMICharacterState_Statics::NewProp_ViewOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMICharacterState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAlphaBlend,
		&NewStructOps,
		"MICharacterState",
		sizeof(FMICharacterState),
		alignof(FMICharacterState),
		Z_Construct_UScriptStruct_FMICharacterState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICharacterState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMICharacterState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMICharacterState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMICharacterState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMICharacterState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MICharacterState"), sizeof(FMICharacterState), Get_Z_Construct_UScriptStruct_FMICharacterState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMICharacterState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMICharacterState_Hash() { return 2685131848U; }
	DEFINE_FUNCTION(UMIViewComponent::execGetPendingCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetPendingCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIViewComponent::execGetCurrentCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetCurrentCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIViewComponent::execK2_SetNewCamera)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_NewCamera);
		P_GET_STRUCT(FMICameraViewBlend,Z_Param_CameraSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_GET_ENUM(EAlphaBlendOption,Z_Param_BlendOption);
		P_GET_OBJECT(UCurveFloat,Z_Param_CustomBlendCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetNewCamera(Z_Param_NewCamera,Z_Param_CameraSettings,Z_Param_BlendTime,EAlphaBlendOption(Z_Param_BlendOption),Z_Param_CustomBlendCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIViewComponent::execSetCamera)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_NewCamera);
		P_GET_STRUCT_REF(FMICameraViewBlend,Z_Param_Out_CameraSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCamera(Z_Param_NewCamera,Z_Param_Out_CameraSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIViewComponent::execGetCharacterStateCameras)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCameraComponent*>*)Z_Param__Result=P_THIS->GetCharacterStateCameras_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIViewComponent::execIsCharacterStateActive)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCharacterStateActive_Implementation(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIViewComponent::execOnCharacterStateChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterStateChanged();
		P_NATIVE_END;
	}
	static FName NAME_UMIViewComponent_GetCharacterStateCameras = FName(TEXT("GetCharacterStateCameras"));
	TArray<UCameraComponent*> UMIViewComponent::GetCharacterStateCameras() const
	{
		MIViewComponent_eventGetCharacterStateCameras_Parms Parms;
		const_cast<UMIViewComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMIViewComponent_GetCharacterStateCameras),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UMIViewComponent_IsCharacterStateActive = FName(TEXT("IsCharacterStateActive"));
	bool UMIViewComponent::IsCharacterStateActive(uint8 State) const
	{
		MIViewComponent_eventIsCharacterStateActive_Parms Parms;
		Parms.State=State;
		const_cast<UMIViewComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMIViewComponent_IsCharacterStateActive),&Parms);
		return !!Parms.ReturnValue;
	}
	void UMIViewComponent::StaticRegisterNativesUMIViewComponent()
	{
		UClass* Class = UMIViewComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterStateCameras", &UMIViewComponent::execGetCharacterStateCameras },
			{ "GetCurrentCamera", &UMIViewComponent::execGetCurrentCamera },
			{ "GetPendingCamera", &UMIViewComponent::execGetPendingCamera },
			{ "IsCharacterStateActive", &UMIViewComponent::execIsCharacterStateActive },
			{ "K2_SetNewCamera", &UMIViewComponent::execK2_SetNewCamera },
			{ "OnCharacterStateChanged", &UMIViewComponent::execOnCharacterStateChanged },
			{ "SetCamera", &UMIViewComponent::execSetCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventGetCharacterStateCameras_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "GetCharacterStateCameras", nullptr, nullptr, sizeof(MIViewComponent_eventGetCharacterStateCameras_Parms), Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics
	{
		struct MIViewComponent_eventGetCurrentCamera_Parms
		{
			UCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventGetCurrentCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "GetCurrentCamera", nullptr, nullptr, sizeof(MIViewComponent_eventGetCurrentCamera_Parms), Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics
	{
		struct MIViewComponent_eventGetPendingCamera_Parms
		{
			UCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventGetPendingCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "GetPendingCamera", nullptr, nullptr, sizeof(MIViewComponent_eventGetPendingCamera_Parms), Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_GetPendingCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIViewComponent_GetPendingCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MIViewComponent_eventIsCharacterStateActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MIViewComponent_eventIsCharacterStateActive_Parms), &Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventIsCharacterStateActive_Parms, State), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "IsCharacterStateActive", nullptr, nullptr, sizeof(MIViewComponent_eventIsCharacterStateActive_Parms), Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics
	{
		struct MIViewComponent_eventK2_SetNewCamera_Parms
		{
			UCameraComponent* NewCamera;
			FMICameraViewBlend CameraSettings;
			float BlendTime;
			EAlphaBlendOption BlendOption;
			UCurveFloat* CustomBlendCurve;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomBlendCurve;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_CustomBlendCurve = { "CustomBlendCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventK2_SetNewCamera_Parms, CustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventK2_SetNewCamera_Parms, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventK2_SetNewCamera_Parms, BlendTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventK2_SetNewCamera_Parms, CameraSettings), Z_Construct_UScriptStruct_FMICameraViewBlend, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_NewCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_NewCamera = { "NewCamera", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventK2_SetNewCamera_Parms, NewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_NewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_NewCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_CustomBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_BlendOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_BlendOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_CameraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::NewProp_NewCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "DisplayName", "Set New Camera" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "K2_SetNewCamera", nullptr, nullptr, sizeof(MIViewComponent_eventK2_SetNewCamera_Parms), Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/** Notify ViewComponent that character state has changed to a new state that it handles */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "Notify ViewComponent that character state has changed to a new state that it handles" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "OnCharacterStateChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics
	{
		struct MIViewComponent_eventSetCamera_Parms
		{
			UCameraComponent* NewCamera;
			FMICameraViewBlend CameraSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_CameraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventSetCamera_Parms, CameraSettings), Z_Construct_UScriptStruct_FMICameraViewBlend, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_CameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_CameraSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_NewCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_NewCamera = { "NewCamera", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIViewComponent_eventSetCamera_Parms, NewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_NewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_NewCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_CameraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::NewProp_NewCamera,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewComponent" },
		{ "DisplayName", "Set Camera" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIViewComponent, nullptr, "SetCamera", nullptr, nullptr, sizeof(MIViewComponent_eventSetCamera_Parms), Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIViewComponent_SetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIViewComponent_SetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMIViewComponent_NoRegister()
	{
		return UMIViewComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMIViewComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCameraChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CharacterStates;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharacterStates_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterStates_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCharacterState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultCharacterState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHandleBaseEyeHeight_MetaData[];
#endif
		static void NewProp_bHandleBaseEyeHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHandleBaseEyeHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMIViewComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMIViewComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMIViewComponent_GetCharacterStateCameras, "GetCharacterStateCameras" }, // 1062680160
		{ &Z_Construct_UFunction_UMIViewComponent_GetCurrentCamera, "GetCurrentCamera" }, // 222388911
		{ &Z_Construct_UFunction_UMIViewComponent_GetPendingCamera, "GetPendingCamera" }, // 2886274139
		{ &Z_Construct_UFunction_UMIViewComponent_IsCharacterStateActive, "IsCharacterStateActive" }, // 3501771866
		{ &Z_Construct_UFunction_UMIViewComponent_K2_SetNewCamera, "K2_SetNewCamera" }, // 2653946570
		{ &Z_Construct_UFunction_UMIViewComponent_OnCharacterStateChanged, "OnCharacterStateChanged" }, // 4276641833
		{ &Z_Construct_UFunction_UMIViewComponent_SetCamera, "SetCamera" }, // 3038471530
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIViewComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Handles camera blending and character state changes\n * Allows blending smoothly between any number of cameras\n */" },
		{ "IncludePath", "MIViewComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
		{ "ToolTip", "Handles camera blending and character state changes\nAllows blending smoothly between any number of cameras" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIViewComponent_Statics::NewProp_OnCameraChanged_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMIViewComponent_Statics::NewProp_OnCameraChanged = { "OnCameraChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIViewComponent, OnCameraChanged), Z_Construct_UDelegateFunction_MoveIt_MIOnCameraChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_OnCameraChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_OnCameraChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "Comment", "/**\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates = { "CharacterStates", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIViewComponent, CharacterStates), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_Key_KeyProp = { "CharacterStates_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_ValueProp = { "CharacterStates", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMICharacterState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIViewComponent_Statics::NewProp_DefaultCharacterState_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMIViewComponent_Statics::NewProp_DefaultCharacterState = { "DefaultCharacterState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMIViewComponent, DefaultCharacterState), Z_Construct_UScriptStruct_FMICharacterState, METADATA_PARAMS(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_DefaultCharacterState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_DefaultCharacterState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight_MetaData[] = {
		{ "Category", "ViewComponent" },
		{ "ModuleRelativePath", "Public/MIViewComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight_SetBit(void* Obj)
	{
		((UMIViewComponent*)Obj)->bHandleBaseEyeHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight = { "bHandleBaseEyeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMIViewComponent), &Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMIViewComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIViewComponent_Statics::NewProp_OnCameraChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIViewComponent_Statics::NewProp_CharacterStates_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIViewComponent_Statics::NewProp_DefaultCharacterState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMIViewComponent_Statics::NewProp_bHandleBaseEyeHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIViewComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIViewComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMIViewComponent_Statics::ClassParams = {
		&UMIViewComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMIViewComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMIViewComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMIViewComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIViewComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIViewComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMIViewComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMIViewComponent, 183120342);
	template<> MOVEIT_API UClass* StaticClass<UMIViewComponent>()
	{
		return UMIViewComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMIViewComponent(Z_Construct_UClass_UMIViewComponent, &UMIViewComponent::StaticClass, TEXT("/Script/MoveIt"), TEXT("UMIViewComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIViewComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
