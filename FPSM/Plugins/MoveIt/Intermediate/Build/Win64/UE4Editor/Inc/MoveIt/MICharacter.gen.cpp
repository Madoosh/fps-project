// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMICharacter() {}
// Cross Module References
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FOrientToFloorSettings();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIWeapon();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIMovementSystem();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIShotImpact();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	MOVEIT_API UClass* Z_Construct_UClass_UMIPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeOrientation();
	MOVEIT_API UClass* Z_Construct_UClass_UMICharacterMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMICharacter::execCanPlayHitByCharacterVoice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlayHitByCharacterVoice_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnCapsuleComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execGetOrientToFloorSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOrientToFloorSettings*)Z_Param__Result=P_THIS->GetOrientToFloorSettings_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsCurrentFloorMovable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurrentFloorMovable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsOnWalkableFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnWalkableFloor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execShouldOrientToFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldOrientToFloor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execShouldCycleMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldCycleMovement_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnRep_IsFloorSliding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsFloorSliding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsFloorSliding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFloorSliding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanContinueFloorSlide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanContinueFloorSlide_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanStartFloorSlide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartFloorSlide_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnRep_IsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execStopSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Sprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSprint_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execServerReceiveRagdoll)
	{
		P_GET_STRUCT(FVector,Z_Param_NewRagdollActorLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerReceiveRagdoll_Validate(Z_Param_NewRagdollActorLocation))
		{
			RPC_ValidateFailed(TEXT("ServerReceiveRagdoll_Validate"));
			return;
		}
		P_THIS->ServerReceiveRagdoll_Implementation(Z_Param_NewRagdollActorLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnRagdollStandUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRagdollStandUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execStopRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRagdoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execStartRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRagdoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnRep_Ragdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Ragdoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanStopRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStopRagdoll_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execCanStartRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartRagdoll_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsRagdollStandingUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRagdollStandingUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsRagdoll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRagdoll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execIsAimingWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAimingWeapon_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execTakeShotPhysicsImpact)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_HitMesh);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitMagnitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeShotPhysicsImpact(Z_Param_BoneName,Z_Param_HitMesh,Z_Param_Out_HitNormal,Z_Param_HitMagnitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execOnRep_SimulatedPivot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SimulatedPivot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execSendInputToServer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SendInputToServer_Validate(Z_Param_X,Z_Param_Y))
		{
			RPC_ValidateFailed(TEXT("SendInputToServer_Validate"));
			return;
		}
		P_THIS->SendInputToServer_Implementation(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execAddRightMovementInput)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRightMovementInput(Z_Param_WorldDirection,Z_Param_ScaleValue,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execAddForwardMovementInput)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddForwardMovementInput(Z_Param_WorldDirection,Z_Param_ScaleValue,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execSetMovementSystem)
	{
		P_GET_ENUM(EMIMovementSystem,Z_Param_NewMovement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementSystem(EMIMovementSystem(Z_Param_NewMovement));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMICharacter::execGetWeaponAnimInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMIWeapon*)Z_Param__Result=P_THIS->GetWeaponAnimInfo_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AMICharacter_CanContinueFloorSlide = FName(TEXT("CanContinueFloorSlide"));
	bool AMICharacter::CanContinueFloorSlide() const
	{
		MICharacter_eventCanContinueFloorSlide_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanContinueFloorSlide),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanPlayHitByCharacterVoice = FName(TEXT("CanPlayHitByCharacterVoice"));
	bool AMICharacter::CanPlayHitByCharacterVoice() const
	{
		MICharacter_eventCanPlayHitByCharacterVoice_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanPlayHitByCharacterVoice),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanSprint = FName(TEXT("CanSprint"));
	bool AMICharacter::CanSprint() const
	{
		MICharacter_eventCanSprint_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanSprint),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanStartFloorSlide = FName(TEXT("CanStartFloorSlide"));
	bool AMICharacter::CanStartFloorSlide() const
	{
		MICharacter_eventCanStartFloorSlide_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanStartFloorSlide),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanStartRagdoll = FName(TEXT("CanStartRagdoll"));
	bool AMICharacter::CanStartRagdoll() const
	{
		MICharacter_eventCanStartRagdoll_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanStartRagdoll),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_CanStopRagdoll = FName(TEXT("CanStopRagdoll"));
	bool AMICharacter::CanStopRagdoll() const
	{
		MICharacter_eventCanStopRagdoll_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_CanStopRagdoll),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_GetOrientToFloorSettings = FName(TEXT("GetOrientToFloorSettings"));
	FOrientToFloorSettings AMICharacter::GetOrientToFloorSettings() const
	{
		MICharacter_eventGetOrientToFloorSettings_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_GetOrientToFloorSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_GetWeaponAnimInfo = FName(TEXT("GetWeaponAnimInfo"));
	FMIWeapon AMICharacter::GetWeaponAnimInfo() const
	{
		MICharacter_eventGetWeaponAnimInfo_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_GetWeaponAnimInfo),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_IsAimingWeapon = FName(TEXT("IsAimingWeapon"));
	bool AMICharacter::IsAimingWeapon() const
	{
		MICharacter_eventIsAimingWeapon_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_IsAimingWeapon),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_K2_OnPivot = FName(TEXT("K2_OnPivot"));
	void AMICharacter::K2_OnPivot()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnPivot),NULL);
	}
	static FName NAME_AMICharacter_K2_OnRagdollStandUp = FName(TEXT("K2_OnRagdollStandUp"));
	void AMICharacter::K2_OnRagdollStandUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnRagdollStandUp),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStartFloorSlide = FName(TEXT("K2_OnStartFloorSlide"));
	void AMICharacter::K2_OnStartFloorSlide()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStartFloorSlide),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStartRagdoll = FName(TEXT("K2_OnStartRagdoll"));
	void AMICharacter::K2_OnStartRagdoll()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStartRagdoll),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStartSprint = FName(TEXT("K2_OnStartSprint"));
	void AMICharacter::K2_OnStartSprint()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStartSprint),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStopFloorSlide = FName(TEXT("K2_OnStopFloorSlide"));
	void AMICharacter::K2_OnStopFloorSlide()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStopFloorSlide),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStopRagdoll = FName(TEXT("K2_OnStopRagdoll"));
	void AMICharacter::K2_OnStopRagdoll()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStopRagdoll),NULL);
	}
	static FName NAME_AMICharacter_K2_OnStopSprint = FName(TEXT("K2_OnStopSprint"));
	void AMICharacter::K2_OnStopSprint()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_K2_OnStopSprint),NULL);
	}
	static FName NAME_AMICharacter_SendInputToServer = FName(TEXT("SendInputToServer"));
	void AMICharacter::SendInputToServer(float X, float Y)
	{
		MICharacter_eventSendInputToServer_Parms Parms;
		Parms.X=X;
		Parms.Y=Y;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_SendInputToServer),&Parms);
	}
	static FName NAME_AMICharacter_ServerReceiveRagdoll = FName(TEXT("ServerReceiveRagdoll"));
	void AMICharacter::ServerReceiveRagdoll(FVector const& NewRagdollActorLocation)
	{
		MICharacter_eventServerReceiveRagdoll_Parms Parms;
		Parms.NewRagdollActorLocation=NewRagdollActorLocation;
		ProcessEvent(FindFunctionChecked(NAME_AMICharacter_ServerReceiveRagdoll),&Parms);
	}
	static FName NAME_AMICharacter_ShouldCycleMovement = FName(TEXT("ShouldCycleMovement"));
	bool AMICharacter::ShouldCycleMovement() const
	{
		MICharacter_eventShouldCycleMovement_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_ShouldCycleMovement),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMICharacter_ShouldOrientToFloor = FName(TEXT("ShouldOrientToFloor"));
	bool AMICharacter::ShouldOrientToFloor() const
	{
		MICharacter_eventShouldOrientToFloor_Parms Parms;
		const_cast<AMICharacter*>(this)->ProcessEvent(FindFunctionChecked(NAME_AMICharacter_ShouldOrientToFloor),&Parms);
		return !!Parms.ReturnValue;
	}
	void AMICharacter::StaticRegisterNativesAMICharacter()
	{
		UClass* Class = AMICharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddForwardMovementInput", &AMICharacter::execAddForwardMovementInput },
			{ "AddRightMovementInput", &AMICharacter::execAddRightMovementInput },
			{ "CanContinueFloorSlide", &AMICharacter::execCanContinueFloorSlide },
			{ "CanPlayHitByCharacterVoice", &AMICharacter::execCanPlayHitByCharacterVoice },
			{ "CanSprint", &AMICharacter::execCanSprint },
			{ "CanStartFloorSlide", &AMICharacter::execCanStartFloorSlide },
			{ "CanStartRagdoll", &AMICharacter::execCanStartRagdoll },
			{ "CanStopRagdoll", &AMICharacter::execCanStopRagdoll },
			{ "GetOrientToFloorSettings", &AMICharacter::execGetOrientToFloorSettings },
			{ "GetWeaponAnimInfo", &AMICharacter::execGetWeaponAnimInfo },
			{ "IsAimingWeapon", &AMICharacter::execIsAimingWeapon },
			{ "IsCurrentFloorMovable", &AMICharacter::execIsCurrentFloorMovable },
			{ "IsFloorSliding", &AMICharacter::execIsFloorSliding },
			{ "IsOnWalkableFloor", &AMICharacter::execIsOnWalkableFloor },
			{ "IsRagdoll", &AMICharacter::execIsRagdoll },
			{ "IsRagdollStandingUp", &AMICharacter::execIsRagdollStandingUp },
			{ "OnCapsuleComponentHit", &AMICharacter::execOnCapsuleComponentHit },
			{ "OnRagdollStandUp", &AMICharacter::execOnRagdollStandUp },
			{ "OnRep_IsFloorSliding", &AMICharacter::execOnRep_IsFloorSliding },
			{ "OnRep_IsSprinting", &AMICharacter::execOnRep_IsSprinting },
			{ "OnRep_Ragdoll", &AMICharacter::execOnRep_Ragdoll },
			{ "OnRep_SimulatedPivot", &AMICharacter::execOnRep_SimulatedPivot },
			{ "SendInputToServer", &AMICharacter::execSendInputToServer },
			{ "ServerReceiveRagdoll", &AMICharacter::execServerReceiveRagdoll },
			{ "SetMovementSystem", &AMICharacter::execSetMovementSystem },
			{ "ShouldCycleMovement", &AMICharacter::execShouldCycleMovement },
			{ "ShouldOrientToFloor", &AMICharacter::execShouldOrientToFloor },
			{ "Sprint", &AMICharacter::execSprint },
			{ "StartRagdoll", &AMICharacter::execStartRagdoll },
			{ "StopRagdoll", &AMICharacter::execStopRagdoll },
			{ "StopSprinting", &AMICharacter::execStopSprinting },
			{ "TakeShotPhysicsImpact", &AMICharacter::execTakeShotPhysicsImpact },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics
	{
		struct MICharacter_eventAddForwardMovementInput_Parms
		{
			FVector WorldDirection;
			float ScaleValue;
			bool bForce;
		};
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((MICharacter_eventAddForwardMovementInput_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventAddForwardMovementInput_Parms), &Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventAddForwardMovementInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventAddForwardMovementInput_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_ScaleValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::NewProp_WorldDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** \n\x09 * Call instead of AddMovementInput when applying forward input \n\x09 * Pass the exact same information you would pass to AddMovementInput\n\n\x09* Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.\n\x09 * Base Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.\n\x09 *\n\x09 * @param WorldDirection\x09""Direction in world space to apply input\n\x09 * @param ScaleValue\x09\x09Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.\n\x09 * @param bForce\x09\x09\x09If true always add the input, ignoring the result of IsMoveInputIgnored().\n\x09 * @see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()\n\x09 */" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Call instead of AddMovementInput when applying forward input\nPass the exact same information you would pass to AddMovementInput\n\nAdd movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.\nBase Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.\n\n@param WorldDirection        Direction in world space to apply input\n@param ScaleValue            Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.\n@param bForce                        If true always add the input, ignoring the result of IsMoveInputIgnored().\n@see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "AddForwardMovementInput", nullptr, nullptr, sizeof(MICharacter_eventAddForwardMovementInput_Parms), Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_AddForwardMovementInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_AddForwardMovementInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics
	{
		struct MICharacter_eventAddRightMovementInput_Parms
		{
			FVector WorldDirection;
			float ScaleValue;
			bool bForce;
		};
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((MICharacter_eventAddRightMovementInput_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventAddRightMovementInput_Parms), &Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventAddRightMovementInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventAddRightMovementInput_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_ScaleValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::NewProp_WorldDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Call instead of AddMovementInput when applying right input\n\x09 * Pass the exact same information you would pass to AddMovementInput\n\n\x09* Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.\n\x09 * Base Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.\n\x09 *\n\x09 * @param WorldDirection\x09""Direction in world space to apply input\n\x09 * @param ScaleValue\x09\x09Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.\n\x09 * @param bForce\x09\x09\x09If true always add the input, ignoring the result of IsMoveInputIgnored().\n\x09 * @see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()\n\x09 */" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Call instead of AddMovementInput when applying right input\nPass the exact same information you would pass to AddMovementInput\n\nAdd movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.\nBase Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.\n\n@param WorldDirection        Direction in world space to apply input\n@param ScaleValue            Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.\n@param bForce                        If true always add the input, ignoring the result of IsMoveInputIgnored().\n@see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "AddRightMovementInput", nullptr, nullptr, sizeof(MICharacter_eventAddRightMovementInput_Parms), Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_AddRightMovementInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_AddRightMovementInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanContinueFloorSlide_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanContinueFloorSlide_Parms), &Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Slide" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanContinueFloorSlide", nullptr, nullptr, sizeof(MICharacter_eventCanContinueFloorSlide_Parms), Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanPlayHitByCharacterVoice_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanPlayHitByCharacterVoice_Parms), &Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanPlayHitByCharacterVoice", nullptr, nullptr, sizeof(MICharacter_eventCanPlayHitByCharacterVoice_Parms), Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanSprint_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanSprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanSprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanSprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanSprint_Parms), &Z_Construct_UFunction_AMICharacter_CanSprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanSprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanSprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** \n\x09 * Override to change when character can sprint\n\x09 \n\x09 * Default conditions:\n\x09 * - Not being destroyed\n\x09 * - Is providing input\n\x09 * - Input is suitably in direction of character facing direction @see UMICharacterMovement::GetMaxSprintDirectionInputNormal()\n\x09 * - When strafing orientation is set to right, Input isn't moving backwards\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Override to change when character can sprint\n\nDefault conditions:\n- Not being destroyed\n- Is providing input\n- Input is suitably in direction of character facing direction @see UMICharacterMovement::GetMaxSprintDirectionInputNormal()\n- When strafing orientation is set to right, Input isn't moving backwards" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanSprint", nullptr, nullptr, sizeof(MICharacter_eventCanSprint_Parms), Z_Construct_UFunction_AMICharacter_CanSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanSprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_CanSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanStartFloorSlide_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanStartFloorSlide_Parms), &Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Slide" },
		{ "Comment", "// Floor sliding\n" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Floor sliding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanStartFloorSlide", nullptr, nullptr, sizeof(MICharacter_eventCanStartFloorSlide_Parms), Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanStartFloorSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_CanStartFloorSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanStartRagdoll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanStartRagdoll_Parms), &Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Override to return true if we can enter ragdoll. Always true by default. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Override to return true if we can enter ragdoll. Always true by default." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanStartRagdoll", nullptr, nullptr, sizeof(MICharacter_eventCanStartRagdoll_Parms), Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanStartRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_CanStartRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventCanStopRagdoll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventCanStopRagdoll_Parms), &Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Override to return true if we can leave ragdoll and stand back up. Always true by default. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Override to return true if we can leave ragdoll and stand back up. Always true by default." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "CanStopRagdoll", nullptr, nullptr, sizeof(MICharacter_eventCanStopRagdoll_Parms), Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_CanStopRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_CanStopRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventGetOrientToFloorSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FOrientToFloorSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Settings for currently orienting to the floor */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Settings for currently orienting to the floor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "GetOrientToFloorSettings", nullptr, nullptr, sizeof(MICharacter_eventGetOrientToFloorSettings_Parms), Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventGetWeaponAnimInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMIWeapon, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/**\n\x09 * Override to return information about current weapon\n\x09 * Used by animation instance to offset the weapon position and grip with left hand properly\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Override to return information about current weapon\nUsed by animation instance to offset the weapon position and grip with left hand properly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "GetWeaponAnimInfo", nullptr, nullptr, sizeof(MICharacter_eventGetWeaponAnimInfo_Parms), Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsAimingWeapon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsAimingWeapon_Parms), &Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Override to notify when weapon is being aimed (used by animation blueprint) */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Override to notify when weapon is being aimed (used by animation blueprint)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsAimingWeapon", nullptr, nullptr, sizeof(MICharacter_eventIsAimingWeapon_Parms), Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsAimingWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_IsAimingWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics
	{
		struct MICharacter_eventIsCurrentFloorMovable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsCurrentFloorMovable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsCurrentFloorMovable_Parms), &Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsCurrentFloorMovable", nullptr, nullptr, sizeof(MICharacter_eventIsCurrentFloorMovable_Parms), Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics
	{
		struct MICharacter_eventIsFloorSliding_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsFloorSliding_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsFloorSliding_Parms), &Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Floor Slide" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsFloorSliding", nullptr, nullptr, sizeof(MICharacter_eventIsFloorSliding_Parms), Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsFloorSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_IsFloorSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics
	{
		struct MICharacter_eventIsOnWalkableFloor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsOnWalkableFloor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsOnWalkableFloor_Parms), &Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsOnWalkableFloor", nullptr, nullptr, sizeof(MICharacter_eventIsOnWalkableFloor_Parms), Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics
	{
		struct MICharacter_eventIsRagdoll_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsRagdoll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsRagdoll_Parms), &Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/**\n\x09 * True if currently in ragdoll\n\x09 * Available to everyone (simulated, auton, server)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "True if currently in ragdoll\nAvailable to everyone (simulated, auton, server)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsRagdoll", nullptr, nullptr, sizeof(MICharacter_eventIsRagdoll_Parms), Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_IsRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics
	{
		struct MICharacter_eventIsRagdollStandingUp_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventIsRagdollStandingUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventIsRagdollStandingUp_Parms), &Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/**\n\x09 * True if ragdoll is currently standing up\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "True if ragdoll is currently standing up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "IsRagdollStandingUp", nullptr, nullptr, sizeof(MICharacter_eventIsRagdollStandingUp_Parms), Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnPivot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Called any time the character pivots (changes direction, causing animation and brief movement changes */" },
		{ "DisplayName", "On Pivot" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called any time the character pivots (changes direction, causing animation and brief movement changes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnPivot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Called when ragdoll finishes standing up */" },
		{ "DisplayName", "On Ragdoll Stand Up" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when ragdoll finishes standing up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnRagdollStandUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Called when character starts to floor slide */" },
		{ "DisplayName", "On Start Floor Slide" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when character starts to floor slide" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStartFloorSlide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Called when starting to ragdoll */" },
		{ "DisplayName", "On Start Ragdoll" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when starting to ragdoll" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStartRagdoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStartSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStartSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Called when character starts to sprint */" },
		{ "DisplayName", "On Start Sprint" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when character starts to sprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStartSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStartSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStartSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStartSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStartSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Called when character stops floor sliding */" },
		{ "DisplayName", "On Stop Floor Slide" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when character stops floor sliding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStopFloorSlide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Called when stopping ragdoll and standing up */" },
		{ "DisplayName", "On Stop Ragdoll" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when stopping ragdoll and standing up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStopRagdoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_K2_OnStopSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_K2_OnStopSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Called when character stops sprinting */" },
		{ "DisplayName", "On Stop Sprint" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Called when character stops sprinting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_K2_OnStopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "K2_OnStopSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_K2_OnStopSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_K2_OnStopSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_K2_OnStopSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_K2_OnStopSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics
	{
		struct MICharacter_eventOnCapsuleComponentHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventOnCapsuleComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventOnCapsuleComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventOnCapsuleComponentHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventOnCapsuleComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventOnCapsuleComponentHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnCapsuleComponentHit", nullptr, nullptr, sizeof(MICharacter_eventOnCapsuleComponentHit_Parms), Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnRagdollStandUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnRagdollStandUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnRagdollStandUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnRagdollStandUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnRagdollStandUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnRagdollStandUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnRagdollStandUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_OnRagdollStandUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handle Floor Sliding replicated from server */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Handle Floor Sliding replicated from server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnRep_IsFloorSliding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handle Sprinting replicated from server */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Handle Sprinting replicated from server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnRep_IsSprinting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnRep_Ragdoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "OnRep_SimulatedPivot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventSendInputToServer_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventSendInputToServer_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::NewProp_X,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sends compressed local inputs to server, which is then replicated to proxies */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Sends compressed local inputs to server, which is then replicated to proxies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "SendInputToServer", nullptr, nullptr, sizeof(MICharacter_eventSendInputToServer_Parms), Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_SendInputToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_SendInputToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRagdollActorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRagdollActorLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::NewProp_NewRagdollActorLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::NewProp_NewRagdollActorLocation = { "NewRagdollActorLocation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventServerReceiveRagdoll_Parms, NewRagdollActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::NewProp_NewRagdollActorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::NewProp_NewRagdollActorLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::NewProp_NewRagdollActorLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Send actor location to server during ragdoll */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Send actor location to server during ragdoll" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "ServerReceiveRagdoll", nullptr, nullptr, sizeof(MICharacter_eventServerReceiveRagdoll_Parms), Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics
	{
		struct MICharacter_eventSetMovementSystem_Parms
		{
			EMIMovementSystem NewMovement;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMovement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMovement_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::NewProp_NewMovement = { "NewMovement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventSetMovementSystem_Parms, NewMovement), Z_Construct_UEnum_MoveIt_EMIMovementSystem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::NewProp_NewMovement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::NewProp_NewMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::NewProp_NewMovement_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Change the current movement system\n\x09 * NOT replicated (you should handle this yourself)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Change the current movement system\nNOT replicated (you should handle this yourself)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "SetMovementSystem", nullptr, nullptr, sizeof(MICharacter_eventSetMovementSystem_Parms), Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_SetMovementSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_SetMovementSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventShouldCycleMovement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventShouldCycleMovement_Parms), &Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * @return True if movement should be cycled\n\x09 * Cycling provides a minimum turning circle preventing spinning on the spot\n\x09 * By default is True if MovementSystem is CycleOrientToMovement\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "@return True if movement should be cycled\nCycling provides a minimum turning circle preventing spinning on the spot\nBy default is True if MovementSystem is CycleOrientToMovement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "ShouldCycleMovement", nullptr, nullptr, sizeof(MICharacter_eventShouldCycleMovement_Parms), Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_ShouldCycleMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_ShouldCycleMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MICharacter_eventShouldOrientToFloor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MICharacter_eventShouldOrientToFloor_Parms), &Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/** @return True if character should orient to the floor */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "@return True if character should orient to the floor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "ShouldOrientToFloor", nullptr, nullptr, sizeof(MICharacter_eventShouldOrientToFloor_Parms), Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_Sprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_Sprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Request the character to start sprinting.\n\x09 * @see OnStartSprinting\n\x09 * @see IsSprinting\n\x09 * @see MICharacterMovement->WantsToSprint\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Request the character to start sprinting.\n@see OnStartSprinting\n@see IsSprinting\n@see MICharacterMovement->WantsToSprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "Sprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_Sprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_Sprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_StartRagdoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_StartRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Call this to enter ragdoll */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Call this to enter ragdoll" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_StartRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "StartRagdoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_StartRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_StartRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_StartRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_StartRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_StopRagdoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_StopRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Call this to stop ragdoll and stand back up */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Call this to stop ragdoll and stand back up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_StopRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "StopRagdoll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_StopRagdoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_StopRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_StopRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_StopRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_StopSprinting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_StopSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * Request the character to stop sprinting.\n\x09 * @see OnStopSprinting\n\x09 * @see IsSprinting\n\x09 * @see MICharacterMovement->WantsToSprint\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Request the character to stop sprinting.\n@see OnStopSprinting\n@see IsSprinting\n@see MICharacterMovement->WantsToSprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_StopSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "StopSprinting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_StopSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_StopSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_StopSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_StopSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics
	{
		struct MICharacter_eventTakeShotPhysicsImpact_Parms
		{
			FName BoneName;
			USkeletalMeshComponent* HitMesh;
			FVector HitNormal;
			float HitMagnitude;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitMesh;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMagnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMagnitude = { "HitMagnitude", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventTakeShotPhysicsImpact_Parms, HitMagnitude), METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventTakeShotPhysicsImpact_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMesh = { "HitMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventTakeShotPhysicsImpact_Parms, HitMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMesh_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MICharacter_eventTakeShotPhysicsImpact_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_HitMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Impact: Shot" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMICharacter, nullptr, "TakeShotPhysicsImpact", nullptr, nullptr, sizeof(MICharacter_eventTakeShotPhysicsImpact_Parms), Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMICharacter_NoRegister()
	{
		return AMICharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRagdollOnGround_MetaData[];
#endif
		static void NewProp_bRagdollOnGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRagdollOnGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollActorLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RagdollActorLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RagdollLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRagdoll_MetaData[];
#endif
		static void NewProp_bRagdoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRagdoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousNonZeroInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousNonZeroInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviousInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFloorSliding_MetaData[];
#endif
		static void NewProp_bIsFloorSliding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFloorSliding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[];
#endif
		static void NewProp_bIsSprinting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotBonePhysicsImpacts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ShotBonePhysicsImpacts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShotBonePhysicsImpacts_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotBonePhysicsImpacts_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulatedPivot_MetaData[];
#endif
		static void NewProp_bSimulatedPivot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulatedPivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitWallAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitWallAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScuffMaxMovementNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScuffMaxMovementNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScuffMaxUpNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScuffMaxUpNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitMaxMovementNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitMaxMovementNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitMaxUpNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitMaxUpNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScuffWallParticleMinInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScuffWallParticleMinInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScuffWallSoundMinInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScuffWallSoundMinInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScuffWallSoundVelocityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScuffWallSoundVelocityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitByCharacterMinVoiceInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitByCharacterMinVoiceInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitByCharacterMinInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitByCharacterMinInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCharacterMinInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitCharacterMinInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitByCharacterVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitByCharacterVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitByCharacterGrunt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitByCharacterGrunt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCharacterGrunt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitCharacterGrunt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitByCharacterVelocityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitByCharacterVelocityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCharacterVelocityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitCharacterVelocityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitByCharacterImpactPhysics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitByCharacterImpactPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitCharacterImpactPhysics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitCharacterImpactPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHitCharacterWhileRootMotionPlaying_MetaData[];
#endif
		static void NewProp_bCanHitCharacterWhileRootMotionPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHitCharacterWhileRootMotionPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHitCharacterWhileMontagePlaying_MetaData[];
#endif
		static void NewProp_bCanHitCharacterWhileMontagePlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHitCharacterWhileMontagePlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHitCharacterEnabled_MetaData[];
#endif
		static void NewProp_bHitCharacterEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHitCharacterEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotImpactBoneRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ShotImpactBoneRedirects;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ShotImpactBoneRedirects_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ShotImpactBoneRedirects_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotImpactPhysics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotImpactPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitImpactPhysics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitImpactPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitImpactVelocityToPhysicsImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitImpactVelocityToPhysicsImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitWallImpactVelocityThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitWallImpactVelocityThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactLODThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImpactLODThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHitWallWhileRootMotionPlaying_MetaData[];
#endif
		static void NewProp_bCanHitWallWhileRootMotionPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHitWallWhileRootMotionPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHitWallWhileMontagePlaying_MetaData[];
#endif
		static void NewProp_bCanHitWallWhileMontagePlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHitWallWhileMontagePlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHitWallEnabled_MetaData[];
#endif
		static void NewProp_bHitWallEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHitWallEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysicalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultPhysicalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollStandUpBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RagdollStandUpBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollStandUpFace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RagdollStandUpFace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollStandUpTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RagdollStandUpTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRagdollStandUpTimeFromAnimation_MetaData[];
#endif
		static void NewProp_bRagdollStandUpTimeFromAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRagdollStandUpTimeFromAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSystemChangeOrientRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSystemChangeOrientRate;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientMatchGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrientMatchGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientDefaultSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrientDefaultSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrientKeepUpperBodyUpright_MetaData[];
#endif
		static void NewProp_bOrientKeepUpperBodyUpright_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientKeepUpperBodyUpright;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MICharacterMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MICharacterMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMICharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMICharacter_AddForwardMovementInput, "AddForwardMovementInput" }, // 3869514069
		{ &Z_Construct_UFunction_AMICharacter_AddRightMovementInput, "AddRightMovementInput" }, // 113776375
		{ &Z_Construct_UFunction_AMICharacter_CanContinueFloorSlide, "CanContinueFloorSlide" }, // 3088612391
		{ &Z_Construct_UFunction_AMICharacter_CanPlayHitByCharacterVoice, "CanPlayHitByCharacterVoice" }, // 3192779313
		{ &Z_Construct_UFunction_AMICharacter_CanSprint, "CanSprint" }, // 3332937377
		{ &Z_Construct_UFunction_AMICharacter_CanStartFloorSlide, "CanStartFloorSlide" }, // 2266518514
		{ &Z_Construct_UFunction_AMICharacter_CanStartRagdoll, "CanStartRagdoll" }, // 503554444
		{ &Z_Construct_UFunction_AMICharacter_CanStopRagdoll, "CanStopRagdoll" }, // 1835212901
		{ &Z_Construct_UFunction_AMICharacter_GetOrientToFloorSettings, "GetOrientToFloorSettings" }, // 3688359769
		{ &Z_Construct_UFunction_AMICharacter_GetWeaponAnimInfo, "GetWeaponAnimInfo" }, // 1007179439
		{ &Z_Construct_UFunction_AMICharacter_IsAimingWeapon, "IsAimingWeapon" }, // 484467122
		{ &Z_Construct_UFunction_AMICharacter_IsCurrentFloorMovable, "IsCurrentFloorMovable" }, // 2711269682
		{ &Z_Construct_UFunction_AMICharacter_IsFloorSliding, "IsFloorSliding" }, // 4153514798
		{ &Z_Construct_UFunction_AMICharacter_IsOnWalkableFloor, "IsOnWalkableFloor" }, // 4179907110
		{ &Z_Construct_UFunction_AMICharacter_IsRagdoll, "IsRagdoll" }, // 46679360
		{ &Z_Construct_UFunction_AMICharacter_IsRagdollStandingUp, "IsRagdollStandingUp" }, // 2570403000
		{ &Z_Construct_UFunction_AMICharacter_K2_OnPivot, "K2_OnPivot" }, // 744881560
		{ &Z_Construct_UFunction_AMICharacter_K2_OnRagdollStandUp, "K2_OnRagdollStandUp" }, // 3690667685
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStartFloorSlide, "K2_OnStartFloorSlide" }, // 2718834378
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStartRagdoll, "K2_OnStartRagdoll" }, // 423443984
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStartSprint, "K2_OnStartSprint" }, // 2408257433
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStopFloorSlide, "K2_OnStopFloorSlide" }, // 1236332233
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStopRagdoll, "K2_OnStopRagdoll" }, // 1978871831
		{ &Z_Construct_UFunction_AMICharacter_K2_OnStopSprint, "K2_OnStopSprint" }, // 3395564613
		{ &Z_Construct_UFunction_AMICharacter_OnCapsuleComponentHit, "OnCapsuleComponentHit" }, // 3775470922
		{ &Z_Construct_UFunction_AMICharacter_OnRagdollStandUp, "OnRagdollStandUp" }, // 4269487227
		{ &Z_Construct_UFunction_AMICharacter_OnRep_IsFloorSliding, "OnRep_IsFloorSliding" }, // 3691603553
		{ &Z_Construct_UFunction_AMICharacter_OnRep_IsSprinting, "OnRep_IsSprinting" }, // 3167259590
		{ &Z_Construct_UFunction_AMICharacter_OnRep_Ragdoll, "OnRep_Ragdoll" }, // 572365976
		{ &Z_Construct_UFunction_AMICharacter_OnRep_SimulatedPivot, "OnRep_SimulatedPivot" }, // 865721425
		{ &Z_Construct_UFunction_AMICharacter_SendInputToServer, "SendInputToServer" }, // 2724341727
		{ &Z_Construct_UFunction_AMICharacter_ServerReceiveRagdoll, "ServerReceiveRagdoll" }, // 1229720515
		{ &Z_Construct_UFunction_AMICharacter_SetMovementSystem, "SetMovementSystem" }, // 1723464981
		{ &Z_Construct_UFunction_AMICharacter_ShouldCycleMovement, "ShouldCycleMovement" }, // 1088299984
		{ &Z_Construct_UFunction_AMICharacter_ShouldOrientToFloor, "ShouldOrientToFloor" }, // 4020641410
		{ &Z_Construct_UFunction_AMICharacter_Sprint, "Sprint" }, // 3675668027
		{ &Z_Construct_UFunction_AMICharacter_StartRagdoll, "StartRagdoll" }, // 4155042804
		{ &Z_Construct_UFunction_AMICharacter_StopRagdoll, "StopRagdoll" }, // 3916515345
		{ &Z_Construct_UFunction_AMICharacter_StopSprinting, "StopSprinting" }, // 1157960563
		{ &Z_Construct_UFunction_AMICharacter_TakeShotPhysicsImpact, "TakeShotPhysicsImpact" }, // 72303546
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MICharacter.h" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** True if in ragdoll and ragdoll is currently on the ground. Valid local player only. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "True if in ragdoll and ragdoll is currently on the ground. Valid local player only." },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bRagdollOnGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround = { "bRagdollOnGround", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollActorLocation_MetaData[] = {
		{ "Comment", "/** \n\x09 * The current actor location while in ragdoll\n\x09 * Available to everyone (simulated, auton, server)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "The current actor location while in ragdoll\nAvailable to everyone (simulated, auton, server)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollActorLocation = { "RagdollActorLocation", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollActorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollActorLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLocation_MetaData[] = {
		{ "Comment", "/** THe current ragdoll location on local client */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "THe current ragdoll location on local client" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLocation = { "RagdollLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll_MetaData[] = {
		{ "Comment", "/**\n\x09 * True if currently in ragdoll\n\x09 * Available to everyone (simulated, auton, server)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "True if currently in ragdoll\nAvailable to everyone (simulated, auton, server)" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bRagdoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll = { "bRagdoll", "OnRep_Ragdoll", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousNonZeroInput_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Previous input vector that wasn't zero. Available to simulated players. Used for pivoting and animation sync. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Previous input vector that wasn't zero. Available to simulated players. Used for pivoting and animation sync." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousNonZeroInput = { "PreviousNonZeroInput", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, PreviousNonZeroInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousNonZeroInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousNonZeroInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousInput_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Previous input vector. Available to simulated players. Used for pivoting and animation sync. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Previous input vector. Available to simulated players. Used for pivoting and animation sync." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousInput = { "PreviousInput", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, PreviousInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Current input vector. Replicated to simulated players. Used for pivoting and animation sync. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Current input vector. Replicated to simulated players. Used for pivoting and animation sync." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, Input), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Set by character movement to specify that this Character is currently floor sliding. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Set by character movement to specify that this Character is currently floor sliding." },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bIsFloorSliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding = { "bIsFloorSliding", "OnRep_IsFloorSliding", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_SprintStartTime_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Game time when sprinting started */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Game time when sprinting started" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_SprintStartTime = { "SprintStartTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, SprintStartTime), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_SprintStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_SprintStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** Set by character movement to specify that this Character is currently sprinting. */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Set by character movement to specify that this Character is currently sprinting." },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bIsSprinting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting = { "bIsSprinting", "OnRep_IsSprinting", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_MetaData[] = {
		{ "Comment", "/** Mesh -> Impact Struct -> BoneName -> PhysicsBlend */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Mesh -> Impact Struct -> BoneName -> PhysicsBlend" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts = { "ShotBonePhysicsImpacts", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ShotBonePhysicsImpacts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_Key_KeyProp = { "ShotBonePhysicsImpacts_Key", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_ValueProp = { "ShotBonePhysicsImpacts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMIShotImpact, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot_MetaData[] = {
		{ "Comment", "/** Used for simulated proxies to know when to pivot */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Used for simulated proxies to know when to pivot" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bSimulatedPivot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot = { "bSimulatedPivot", "OnRep_SimulatedPivot", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallAudioComponent = { "HitWallAudioComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitWallAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxMovementNormal_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/** \n\x09 * Movement vector (acceleration) difference to the wall before it wont allow us to scuff it \n\x09 * Lower is easier to trigger\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Movement vector (acceleration) difference to the wall before it wont allow us to scuff it\nLower is easier to trigger" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxMovementNormal = { "ScuffMaxMovementNormal", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ScuffMaxMovementNormal), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxMovementNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxMovementNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxUpNormal_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/** Up normal of the wall surface relative to wall up before it wont allow us to scuff it */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Up normal of the wall surface relative to wall up before it wont allow us to scuff it" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxUpNormal = { "ScuffMaxUpNormal", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ScuffMaxUpNormal), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxUpNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxUpNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxMovementNormal_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/** \n\x09 * Movement vector (acceleration) difference to the wall before it wont allow us to hit it \n\x09 * Lower is easier to trigger\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Movement vector (acceleration) difference to the wall before it wont allow us to hit it\nLower is easier to trigger" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxMovementNormal = { "HitMaxMovementNormal", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitMaxMovementNormal), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxMovementNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxMovementNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxUpNormal_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/** Up normal of the wall surface relative to wall up before it wont allow us to hit it */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Up normal of the wall surface relative to wall up before it wont allow us to hit it" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxUpNormal = { "HitMaxUpNormal", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitMaxUpNormal), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxUpNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxUpNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallParticleMinInterval_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/** Hit wall scuffle can only be played this often */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Hit wall scuffle can only be played this often" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallParticleMinInterval = { "ScuffWallParticleMinInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ScuffWallParticleMinInterval), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallParticleMinInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallParticleMinInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundMinInterval_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/** Hit wall scuffle can only be played this often */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Hit wall scuffle can only be played this often" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundMinInterval = { "ScuffWallSoundMinInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ScuffWallSoundMinInterval), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundMinInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundMinInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundVelocityThreshold_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/** \n\x09 * Impact velocity must exceed this when walking into a wall to play a scuffing sound (set in physical material)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Impact velocity must exceed this when walking into a wall to play a scuffing sound (set in physical material)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundVelocityThreshold = { "ScuffWallSoundVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ScuffWallSoundVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinVoiceInterval_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** How often a voice will play instead of a grunt when hit by another character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How often a voice will play instead of a grunt when hit by another character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinVoiceInterval = { "HitByCharacterMinVoiceInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitByCharacterMinVoiceInterval), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinVoiceInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinVoiceInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinInterval_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** How often we can be hit by another character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How often we can be hit by another character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinInterval = { "HitByCharacterMinInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitByCharacterMinInterval), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterMinInterval_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** How often we can hit another character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How often we can hit another character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterMinInterval = { "HitCharacterMinInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitCharacterMinInterval), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterMinInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterMinInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVoice_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** Voice sound to play when hit by a character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Voice sound to play when hit by a character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVoice = { "HitByCharacterVoice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitByCharacterVoice), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterGrunt_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** Sound to play when hit by a character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Sound to play when hit by a character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterGrunt = { "HitByCharacterGrunt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitByCharacterGrunt), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterGrunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterGrunt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterGrunt_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** Sound to play when hitting a character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Sound to play when hitting a character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterGrunt = { "HitCharacterGrunt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitCharacterGrunt), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterGrunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterGrunt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVelocityThreshold_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** How fast other character has to be moving to apply hit another character effects */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How fast other character has to be moving to apply hit another character effects" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVelocityThreshold = { "HitByCharacterVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitByCharacterVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterVelocityThreshold_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** How fast we have to be moving to apply hit another character effects */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How fast we have to be moving to apply hit another character effects" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterVelocityThreshold = { "HitCharacterVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitCharacterVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterImpactPhysics_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** Blending for impact from being hit by another character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Blending for impact from being hit by another character" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterImpactPhysics = { "HitByCharacterImpactPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitByCharacterImpactPhysics), Z_Construct_UScriptStruct_FPhysicsBlend, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterImpactPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterImpactPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterImpactPhysics_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** Blending for impact from hitting another character */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Blending for impact from hitting another character" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterImpactPhysics = { "HitCharacterImpactPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitCharacterImpactPhysics), Z_Construct_UScriptStruct_FPhysicsBlend, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterImpactPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterImpactPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** If true, can apply hit character effect when root motion is playing */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If true, can apply hit character effect when root motion is playing" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bCanHitCharacterWhileRootMotionPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying = { "bCanHitCharacterWhileRootMotionPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** If true, can apply hit character effect when montage is playing */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If true, can apply hit character effect when montage is playing" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bCanHitCharacterWhileMontagePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying = { "bCanHitCharacterWhileMontagePlaying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled_MetaData[] = {
		{ "Category", "Impact: Character" },
		{ "Comment", "/** Whether Hit Character can occur */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Whether Hit Character can occur" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bHitCharacterEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled = { "bHitCharacterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_MetaData[] = {
		{ "Category", "Impact: Shot" },
		{ "Comment", "/** Primarily used to stop simulation on pelvis and hands/feet (they don't look good) */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Primarily used to stop simulation on pelvis and hands/feet (they don't look good)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects = { "ShotImpactBoneRedirects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ShotImpactBoneRedirects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_Key_KeyProp = { "ShotImpactBoneRedirects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_ValueProp = { "ShotImpactBoneRedirects", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactPhysics_MetaData[] = {
		{ "Category", "Impact: Shot" },
		{ "Comment", "/** Blending settings for bone impact from being shot */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Blending settings for bone impact from being shot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactPhysics = { "ShotImpactPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ShotImpactPhysics), Z_Construct_UScriptStruct_FPhysicsBlend, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactPhysics_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/** Blending for impact from hitting a wall */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Blending for impact from hitting a wall" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactPhysics = { "HitImpactPhysics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitImpactPhysics), Z_Construct_UScriptStruct_FPhysicsBlend, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactVelocityToPhysicsImpulse_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/** How much Impact Velocity [Time] results in how much Physics Impulse [Value] to play physical animation on the character */" },
		{ "DisplayName", "Hit [Impact Velocity -> Physics Impulse]" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How much Impact Velocity [Time] results in how much Physics Impulse [Value] to play physical animation on the character" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactVelocityToPhysicsImpulse = { "HitImpactVelocityToPhysicsImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitImpactVelocityToPhysicsImpulse), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactVelocityToPhysicsImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactVelocityToPhysicsImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallImpactVelocityThreshold_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/**\n\x09 * Impact velocity must exceed this when running into a wall to play a sound (set in physical material)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Impact velocity must exceed this when running into a wall to play a sound (set in physical material)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallImpactVelocityThreshold = { "HitWallImpactVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, HitWallImpactVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallImpactVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallImpactVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_ImpactLODThreshold_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/*\n\x09* Max LOD that wall impact is allowed to run\n\x09* For example if you have ImpactLODThreshold at 2, it will run until LOD 2 (based on 0 index)\n\x09* when the component LOD becomes 3, it will stop\n\x09*/" },
		{ "DisplayName", "Impact LOD Threshold" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "* Max LOD that wall impact is allowed to run\n* For example if you have ImpactLODThreshold at 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_ImpactLODThreshold = { "ImpactLODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, ImpactLODThreshold), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_ImpactLODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_ImpactLODThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/** If true, can apply hit wall effect when root motion is playing */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If true, can apply hit wall effect when root motion is playing" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bCanHitWallWhileRootMotionPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying = { "bCanHitWallWhileRootMotionPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/** If true, can apply hit wall effect when montage is playing */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If true, can apply hit wall effect when montage is playing" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bCanHitWallWhileMontagePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying = { "bCanHitWallWhileMontagePlaying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled_MetaData[] = {
		{ "Category", "Impact: Wall" },
		{ "Comment", "/** Whether Hit Wall can occur */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Whether Hit Wall can occur" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bHitWallEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled = { "bHitWallEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_DefaultPhysicalMaterial_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** Physical material to use when none is assigned to the material being interacted with */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Physical material to use when none is assigned to the material being interacted with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_DefaultPhysicalMaterial = { "DefaultPhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, DefaultPhysicalMaterial), Z_Construct_UClass_UMIPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_DefaultPhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_DefaultPhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpBack_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Animation to play when standing up from lying down on back */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Animation to play when standing up from lying down on back" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpBack = { "RagdollStandUpBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollStandUpBack), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpFace_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/** Animation to play when standing up from lying down on face */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Animation to play when standing up from lying down on face" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpFace = { "RagdollStandUpFace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollStandUpFace), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpFace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpTime_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/**\n\x09 * How long it takes to stand up if bRagdollStandUpTimeFromAnimation is false\n\x09 */" },
		{ "EditCondition", "!bRagdollStandUpTimeFromAnimation" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How long it takes to stand up if bRagdollStandUpTimeFromAnimation is false" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpTime = { "RagdollStandUpTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, RagdollStandUpTime), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation_MetaData[] = {
		{ "Category", "Ragdoll" },
		{ "Comment", "/**\n\x09 * If true, the amount of time to stand up will be taken from the animation played\n\x09 * Note that this can cause desync when used online due to server and client possibly playing different animations\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If true, the amount of time to stand up will be taken from the animation played\nNote that this can cause desync when used online due to server and client possibly playing different animations" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bRagdollStandUpTimeFromAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation = { "bRagdollStandUpTimeFromAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystemChangeOrientRate_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** How fast the character turns back to face the camera when switching MovementSystem back to OrientToView */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "How fast the character turns back to face the camera when switching MovementSystem back to OrientToView" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystemChangeOrientRate = { "MovementSystemChangeOrientRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, MovementSystemChangeOrientRate), METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystemChangeOrientRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystemChangeOrientRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem_MetaData[] = {
		{ "BlueprintSetter", "SetMovementSystem" },
		{ "Category", "Character" },
		{ "Comment", "/**\n\x09 * General type of movement used\n\x09 * OrientToView faces the camera\n\x09 * OrientToMovement is similar to Third Person Template\n\x09 * CycleOrientToMovement is same as OrientToMovement but has a minimum turning circle like Zelda BOTW or Mario Odyssey so they can't simply spin on the spot, combines with pivot to allow direction change on the spot\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "General type of movement used\nOrientToView faces the camera\nOrientToMovement is similar to Third Person Template\nCycleOrientToMovement is same as OrientToMovement but has a minimum turning circle like Zelda BOTW or Mario Odyssey so they can't simply spin on the spot, combines with pivot to allow direction change on the spot" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem = { "MovementSystem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, MovementSystem), Z_Construct_UEnum_MoveIt_EMIMovementSystem, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/** \n\x09 * Direction to orient in when strafing left\n\x09 * Great for over the shoulder movement\n\x09 * NOT replicated - you must handle this yourself if you want to change it during runtime and other players to see it\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Direction to orient in when strafing left\nGreat for over the shoulder movement\nNOT replicated - you must handle this yourself if you want to change it during runtime and other players to see it" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation = { "StrafeOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, StrafeOrientation), Z_Construct_UEnum_MoveIt_EMIStrafeOrientation, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientMatchGround_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** \n\x09 * Convenience settings to pass to GetOrientToFloorSettings() to make the character orient to the floor\n\x09 * Helpful for floor sliding\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Convenience settings to pass to GetOrientToFloorSettings() to make the character orient to the floor\nHelpful for floor sliding" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientMatchGround = { "OrientMatchGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, OrientMatchGround), Z_Construct_UScriptStruct_FOrientToFloorSettings, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientMatchGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientMatchGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientDefaultSettings_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** Default settings that are passed to GetOrientToFloorSettings() */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Default settings that are passed to GetOrientToFloorSettings()" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientDefaultSettings = { "OrientDefaultSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, OrientDefaultSettings), Z_Construct_UScriptStruct_FOrientToFloorSettings, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientDefaultSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientDefaultSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_bOrientKeepUpperBodyUpright_MetaData[] = {
		{ "Category", "OrientToFloor" },
		{ "Comment", "/** \n\x09 * If true, will keep body upright when orienting to floor\n\x09 * Convenience plug for Animation Instance to compensate for orienting to floor\n\x09 * Must be present in anim graph for it to work\n\x09 */" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "If true, will keep body upright when orienting to floor\nConvenience plug for Animation Instance to compensate for orienting to floor\nMust be present in anim graph for it to work" },
	};
#endif
	void Z_Construct_UClass_AMICharacter_Statics::NewProp_bOrientKeepUpperBodyUpright_SetBit(void* Obj)
	{
		((AMICharacter*)Obj)->bOrientKeepUpperBodyUpright = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_bOrientKeepUpperBodyUpright = { "bOrientKeepUpperBodyUpright", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMICharacter), &Z_Construct_UClass_AMICharacter_Statics::NewProp_bOrientKeepUpperBodyUpright_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_bOrientKeepUpperBodyUpright_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_bOrientKeepUpperBodyUpright_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMICharacter_Statics::NewProp_MICharacterMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** Movement component used for movement logic in various movement modes (walking, sprinting, falling, etc), containing relevant settings and functions to control movement. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MICharacter.h" },
		{ "ToolTip", "Movement component used for movement logic in various movement modes (walking, sprinting, falling, etc), containing relevant settings and functions to control movement." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMICharacter_Statics::NewProp_MICharacterMovement = { "MICharacterMovement", nullptr, (EPropertyFlags)0x00400000000a201d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMICharacter, MICharacterMovement), Z_Construct_UClass_UMICharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::NewProp_MICharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::NewProp_MICharacterMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollActorLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousNonZeroInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_PreviousInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsFloorSliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_SprintStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bIsSprinting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotBonePhysicsImpacts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bSimulatedPivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxMovementNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffMaxUpNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxMovementNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitMaxUpNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallParticleMinInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundMinInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ScuffWallSoundVelocityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinVoiceInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterMinInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterMinInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterGrunt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterGrunt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterVelocityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterVelocityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitByCharacterImpactPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitCharacterImpactPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileRootMotionPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitCharacterWhileMontagePlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitCharacterEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactBoneRedirects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ShotImpactPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitImpactVelocityToPhysicsImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_HitWallImpactVelocityThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_ImpactLODThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileRootMotionPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bCanHitWallWhileMontagePlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bHitWallEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_DefaultPhysicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpFace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_RagdollStandUpTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bRagdollStandUpTimeFromAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystemChangeOrientRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_MovementSystem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_StrafeOrientation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientMatchGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_OrientDefaultSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_bOrientKeepUpperBodyUpright,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMICharacter_Statics::NewProp_MICharacterMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMICharacter_Statics::ClassParams = {
		&AMICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMICharacter, 1698909602);
	template<> MOVEIT_API UClass* StaticClass<AMICharacter>()
	{
		return AMICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMICharacter(Z_Construct_UClass_AMICharacter, &AMICharacter::StaticClass, TEXT("/Script/MoveIt"), TEXT("AMICharacter"), false, nullptr, nullptr, nullptr);

	void AMICharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bSimulatedPivot(TEXT("bSimulatedPivot"));
		static const FName Name_bIsSprinting(TEXT("bIsSprinting"));
		static const FName Name_bIsFloorSliding(TEXT("bIsFloorSliding"));
		static const FName Name_Input(TEXT("Input"));
		static const FName Name_bRagdoll(TEXT("bRagdoll"));
		static const FName Name_RagdollActorLocation(TEXT("RagdollActorLocation"));

		const bool bIsValid = true
			&& Name_bSimulatedPivot == ClassReps[(int32)ENetFields_Private::bSimulatedPivot].Property->GetFName()
			&& Name_bIsSprinting == ClassReps[(int32)ENetFields_Private::bIsSprinting].Property->GetFName()
			&& Name_bIsFloorSliding == ClassReps[(int32)ENetFields_Private::bIsFloorSliding].Property->GetFName()
			&& Name_Input == ClassReps[(int32)ENetFields_Private::Input].Property->GetFName()
			&& Name_bRagdoll == ClassReps[(int32)ENetFields_Private::bRagdoll].Property->GetFName()
			&& Name_RagdollActorLocation == ClassReps[(int32)ENetFields_Private::RagdollActorLocation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMICharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
