// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
struct FOrientToFloorSettings;
class USkeletalMeshComponent;
enum class EMIMovementSystem : uint8;
struct FMIWeapon;
#ifdef MOVEIT_MICharacter_generated_h
#error "MICharacter.generated.h already included, missing '#pragma once' in MICharacter.h"
#endif
#define MOVEIT_MICharacter_generated_h

#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_SPARSE_DATA
#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_RPC_WRAPPERS \
	virtual bool CanPlayHitByCharacterVoice_Implementation() const; \
	virtual FOrientToFloorSettings GetOrientToFloorSettings_Implementation() const; \
	virtual bool ShouldOrientToFloor_Implementation() const; \
	virtual bool ShouldCycleMovement_Implementation() const; \
	virtual bool CanContinueFloorSlide_Implementation() const; \
	virtual bool CanStartFloorSlide_Implementation() const; \
	virtual bool CanSprint_Implementation() const; \
	virtual bool ServerReceiveRagdoll_Validate(FVector const& ); \
	virtual void ServerReceiveRagdoll_Implementation(FVector const& NewRagdollActorLocation); \
	virtual bool CanStopRagdoll_Implementation() const; \
	virtual bool CanStartRagdoll_Implementation() const; \
	virtual bool IsAimingWeapon_Implementation() const; \
	virtual bool SendInputToServer_Validate(float , float ); \
	virtual void SendInputToServer_Implementation(float X, float Y); \
	virtual FMIWeapon GetWeaponAnimInfo_Implementation() const; \
 \
	DECLARE_FUNCTION(execCanPlayHitByCharacterVoice); \
	DECLARE_FUNCTION(execOnCapsuleComponentHit); \
	DECLARE_FUNCTION(execGetOrientToFloorSettings); \
	DECLARE_FUNCTION(execIsCurrentFloorMovable); \
	DECLARE_FUNCTION(execIsOnWalkableFloor); \
	DECLARE_FUNCTION(execShouldOrientToFloor); \
	DECLARE_FUNCTION(execShouldCycleMovement); \
	DECLARE_FUNCTION(execOnRep_IsFloorSliding); \
	DECLARE_FUNCTION(execIsFloorSliding); \
	DECLARE_FUNCTION(execCanContinueFloorSlide); \
	DECLARE_FUNCTION(execCanStartFloorSlide); \
	DECLARE_FUNCTION(execOnRep_IsSprinting); \
	DECLARE_FUNCTION(execStopSprinting); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execCanSprint); \
	DECLARE_FUNCTION(execServerReceiveRagdoll); \
	DECLARE_FUNCTION(execOnRagdollStandUp); \
	DECLARE_FUNCTION(execStopRagdoll); \
	DECLARE_FUNCTION(execStartRagdoll); \
	DECLARE_FUNCTION(execOnRep_Ragdoll); \
	DECLARE_FUNCTION(execCanStopRagdoll); \
	DECLARE_FUNCTION(execCanStartRagdoll); \
	DECLARE_FUNCTION(execIsRagdollStandingUp); \
	DECLARE_FUNCTION(execIsRagdoll); \
	DECLARE_FUNCTION(execIsAimingWeapon); \
	DECLARE_FUNCTION(execTakeShotPhysicsImpact); \
	DECLARE_FUNCTION(execOnRep_SimulatedPivot); \
	DECLARE_FUNCTION(execSendInputToServer); \
	DECLARE_FUNCTION(execAddRightMovementInput); \
	DECLARE_FUNCTION(execAddForwardMovementInput); \
	DECLARE_FUNCTION(execSetMovementSystem); \
	DECLARE_FUNCTION(execGetWeaponAnimInfo);


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanPlayHitByCharacterVoice_Implementation() const; \
	virtual FOrientToFloorSettings GetOrientToFloorSettings_Implementation() const; \
	virtual bool ShouldOrientToFloor_Implementation() const; \
	virtual bool ShouldCycleMovement_Implementation() const; \
	virtual bool CanContinueFloorSlide_Implementation() const; \
	virtual bool CanStartFloorSlide_Implementation() const; \
	virtual bool CanSprint_Implementation() const; \
	virtual bool ServerReceiveRagdoll_Validate(FVector const& ); \
	virtual void ServerReceiveRagdoll_Implementation(FVector const& NewRagdollActorLocation); \
	virtual bool CanStopRagdoll_Implementation() const; \
	virtual bool CanStartRagdoll_Implementation() const; \
	virtual bool IsAimingWeapon_Implementation() const; \
	virtual bool SendInputToServer_Validate(float , float ); \
	virtual void SendInputToServer_Implementation(float X, float Y); \
	virtual FMIWeapon GetWeaponAnimInfo_Implementation() const; \
 \
	DECLARE_FUNCTION(execCanPlayHitByCharacterVoice); \
	DECLARE_FUNCTION(execOnCapsuleComponentHit); \
	DECLARE_FUNCTION(execGetOrientToFloorSettings); \
	DECLARE_FUNCTION(execIsCurrentFloorMovable); \
	DECLARE_FUNCTION(execIsOnWalkableFloor); \
	DECLARE_FUNCTION(execShouldOrientToFloor); \
	DECLARE_FUNCTION(execShouldCycleMovement); \
	DECLARE_FUNCTION(execOnRep_IsFloorSliding); \
	DECLARE_FUNCTION(execIsFloorSliding); \
	DECLARE_FUNCTION(execCanContinueFloorSlide); \
	DECLARE_FUNCTION(execCanStartFloorSlide); \
	DECLARE_FUNCTION(execOnRep_IsSprinting); \
	DECLARE_FUNCTION(execStopSprinting); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execCanSprint); \
	DECLARE_FUNCTION(execServerReceiveRagdoll); \
	DECLARE_FUNCTION(execOnRagdollStandUp); \
	DECLARE_FUNCTION(execStopRagdoll); \
	DECLARE_FUNCTION(execStartRagdoll); \
	DECLARE_FUNCTION(execOnRep_Ragdoll); \
	DECLARE_FUNCTION(execCanStopRagdoll); \
	DECLARE_FUNCTION(execCanStartRagdoll); \
	DECLARE_FUNCTION(execIsRagdollStandingUp); \
	DECLARE_FUNCTION(execIsRagdoll); \
	DECLARE_FUNCTION(execIsAimingWeapon); \
	DECLARE_FUNCTION(execTakeShotPhysicsImpact); \
	DECLARE_FUNCTION(execOnRep_SimulatedPivot); \
	DECLARE_FUNCTION(execSendInputToServer); \
	DECLARE_FUNCTION(execAddRightMovementInput); \
	DECLARE_FUNCTION(execAddForwardMovementInput); \
	DECLARE_FUNCTION(execSetMovementSystem); \
	DECLARE_FUNCTION(execGetWeaponAnimInfo);


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_EVENT_PARMS \
	struct MICharacter_eventCanContinueFloorSlide_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanContinueFloorSlide_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanPlayHitByCharacterVoice_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanPlayHitByCharacterVoice_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanSprint_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanSprint_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanStartFloorSlide_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanStartFloorSlide_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanStartRagdoll_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanStartRagdoll_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventCanStopRagdoll_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventCanStopRagdoll_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventGetOrientToFloorSettings_Parms \
	{ \
		FOrientToFloorSettings ReturnValue; \
	}; \
	struct MICharacter_eventGetWeaponAnimInfo_Parms \
	{ \
		FMIWeapon ReturnValue; \
	}; \
	struct MICharacter_eventIsAimingWeapon_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventIsAimingWeapon_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventSendInputToServer_Parms \
	{ \
		float X; \
		float Y; \
	}; \
	struct MICharacter_eventServerReceiveRagdoll_Parms \
	{ \
		FVector NewRagdollActorLocation; \
	}; \
	struct MICharacter_eventShouldCycleMovement_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventShouldCycleMovement_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MICharacter_eventShouldOrientToFloor_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MICharacter_eventShouldOrientToFloor_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_CALLBACK_WRAPPERS
#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMICharacter(); \
	friend struct Z_Construct_UClass_AMICharacter_Statics; \
public: \
	DECLARE_CLASS(AMICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(AMICharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bSimulatedPivot=NETFIELD_REP_START, \
		bIsSprinting, \
		bIsFloorSliding, \
		Input, \
		bRagdoll, \
		RagdollActorLocation, \
		NETFIELD_REP_END=RagdollActorLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAMICharacter(); \
	friend struct Z_Construct_UClass_AMICharacter_Statics; \
public: \
	DECLARE_CLASS(AMICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(AMICharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bSimulatedPivot=NETFIELD_REP_START, \
		bIsSprinting, \
		bIsFloorSliding, \
		Input, \
		bRagdoll, \
		RagdollActorLocation, \
		NETFIELD_REP_END=RagdollActorLocation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMICharacter(AMICharacter&&); \
	NO_API AMICharacter(const AMICharacter&); \
public:


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMICharacter(AMICharacter&&); \
	NO_API AMICharacter(const AMICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMICharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMICharacter)


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MICharacterMovement() { return STRUCT_OFFSET(AMICharacter, MICharacterMovement); } \
	FORCEINLINE static uint32 __PPO__HitWallAudioComponent() { return STRUCT_OFFSET(AMICharacter, HitWallAudioComponent); }


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_19_PROLOG \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_EVENT_PARMS


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_SPARSE_DATA \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_RPC_WRAPPERS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_CALLBACK_WRAPPERS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_INCLASS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_SPARSE_DATA \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_CALLBACK_WRAPPERS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEIT_API UClass* StaticClass<class AMICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MoveIt_Source_MoveIt_Public_MICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
