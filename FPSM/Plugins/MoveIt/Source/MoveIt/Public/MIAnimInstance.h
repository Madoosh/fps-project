// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "MITypes.h"
#include "Engine/EngineTypes.h"
#include "MIAnimInstance.generated.h"

class AMICharacter;
class UMICharacterMovementComponent;

UENUM(BlueprintType)
enum class EMIStrafeDirectionBasis : uint8
{
	MISB_Acceleration			UMETA(DisplayName = "Acceleration", ToolTip = "Strafe direction based on acceleration (input direction)"),
	MISB_Velocity				UMETA(DisplayName = "Velocity", ToolTip = "Strafe direction based on velocity (movement direction)"),
};

USTRUCT(BlueprintType)
struct FMISurfaceImpact
{
	GENERATED_BODY()

	FMISurfaceImpact()
		: Bone(FBoneReference())
		, Socket(NAME_None)
		, MinVelocity(30.f)
		, TraceStartHeight(5.f)
		, TraceDistFromGround(5.f)
		, MinTriggerInterval(0.2f)
		, bRagdollOnly(false)
		, LODThreshold(2)
		, bWasHit(false)
		, PreviousVelocity(0.f)
	{
		ObjectsToTrace.Add(ECollisionChannel::ECC_WorldStatic);
		ObjectsToTrace.Add(ECollisionChannel::ECC_WorldDynamic);
	}

	FMISurfaceImpact(const FBoneReference& InBone, const FName& InSocket, const float InMinVelocity = 30.f, const bool bInRagdollOnly = false, const float InTraceDistFromGround = 5.f, const float InTraceStartHeight = 5.f)
		: Bone(InBone)
		, Socket(InSocket)
		, MinVelocity(InMinVelocity)
		, TraceStartHeight(InTraceStartHeight)
		, TraceDistFromGround(InTraceDistFromGround)
		, MinTriggerInterval(0.2f)
		, bRagdollOnly(bInRagdollOnly)
		, LODThreshold(2)
		, bWasHit(false)
		, PreviousVelocity(0.f)
	{
		ObjectsToTrace.Add(ECollisionChannel::ECC_WorldStatic);
		ObjectsToTrace.Add(ECollisionChannel::ECC_WorldDynamic);
	}

	/** The bone that is used to compute velocity */
	UPROPERTY(EditAnywhere, Category = Impact)
	FBoneReference Bone;

	/** The socket that is used to trace to the ground and to spawn effects from */
	UPROPERTY(EditAnywhere, Category = Impact)
	FName Socket;

	/** How fast the bone must be moving to trigger a Impact */
	UPROPERTY(EditAnywhere, Category = Impact)
	float MinVelocity;

	/** How far above the socket to start the trace from */
	UPROPERTY(EditAnywhere, Category = Impact)
	float TraceStartHeight;

	/** How far above the ground the bone can be while still triggering an impact */
	UPROPERTY(EditAnywhere, Category = Impact)
	float TraceDistFromGround;

	/** How often an impact can be triggered by this bone */
	UPROPERTY(EditAnywhere, Category = Impact)
	float MinTriggerInterval;

	/** If true, will only trigger when ragdoll is active */
	UPROPERTY(EditAnywhere, Category = Impact)
	bool bRagdollOnly;

	/*
	* Max LOD that this impact is allowed to run
	* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)
	* when the component LOD becomes 3, it will stop
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Impact, meta = (DisplayName = "LOD Threshold"))
	int32 LODThreshold;

	UPROPERTY(EditAnywhere, Category = Impact)
	TArray<TEnumAsByte<ECollisionChannel>> ObjectsToTrace;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = Impact)
	bool bDebugDrawTrace = false;
#endif

	bool bWasHit;

	FTimerHandle CooldownTimerHandle;

	FVector PreviousVelocity;
};

/**
 * 
 */
UCLASS()
class MOVEIT_API UMIAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, Category = References)
	AMICharacter* Character;

	UPROPERTY(BlueprintReadWrite, Category = References)
	UMICharacterMovementComponent* Movement;

	UPROPERTY(BlueprintReadWrite, Category = References)
	USkeletalMeshComponent* Mesh;

public:
	/** Character is not crouched */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bIsStanding;

	/** Character is crouched */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bIsCrouched;

	/** Character is crouched and on the ground */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bCrouchingOnGround;

	/** Character is jumping (falling and Velocity.Z > 0) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bIsJumping;

	/** Character is in the air (can be both jumping and falling) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bIsFalling;

	/** Character is on the ground (not falling) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bOnGround;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bPlayingRootMotion;

	/** Character is sprinting and over 50% of sprint speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bIsSprinting;

	/** Character is floor sliding */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bIsFloorSliding;

	/** Strafe is enabled when MovementSystem is orient to view */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bStrafeEnabled;

	/** Gait is enabled when on ground and moving */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bGaitEnabled;

	/** Character is aiming weapon */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bAiming;

	/** Character is not aiming weapon */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bNotAiming;

	/** Character is a local player who is aiming weapon */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bAimingLocalPlayer;
	
	/** Is not a local player or is not aiming */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bNotAimingLocalPlayer;

	/** Character is in ragdoll */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bRagdoll;

	/** FootIK is enabled when on ground */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bFootIK;

	/** True if character wants to keep their upper body upright */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	bool bOrientKeepUpperBodyUpright;

public:
	/** Character has no weapon out */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	bool bUnarmed;

	/** Character has a weapon out */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	bool bArmed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	bool bChangingWeapon;

	/** Anim state for current weapon, used to select aim offsets currently */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	int32 WeaponAnimState;

	/** Current anim info for weapon */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	FMIWeapon Weapon;

	/** Always Weapon.AimOffset if it is valid, if not valid, will be the last valid WeaponAimOffset */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	UBlendSpaceBase* WeaponAimOffset;

	/** True if Weapon contains animation sequence to layer over animation states */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	bool bUseWeaponPose;

	/** True if Weapon contains aim offset to apply */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	bool bUseWeaponAimPose;

	/** True if armed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	bool bEnableWeaponPose;

	/** True if armed and weapon is not one handed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	bool bEnableHandIK;

	/** True if current weapon is one handed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	bool bWeaponOneHanded;

	/** Blends in left arm animation if weapon is one handed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	float LeftArmBlendWeight;

	/** Transform applied to offhand FABRIK */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon, meta = (DisplayName = "OffHand IK"))
	FTransform OffHandIKTM;

public:
	/** Aim offset is disabled when look target is enabled */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AimOffset)
	bool bAimOffsetEnabled;

	/** Horizontal axis for aim offset */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AimOffset)
	float AimOffsetHorizontal;

	/** Vertical axis for aim offset */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AimOffset)
	float AimOffsetVertical;

	/**
	 * Current state used for Foot IK
	 * 0 if Standing
	 * 1 if Crouched
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	uint8 FootIKState;

	/** Current orientation for strafing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	EMIStrafeOrientation StrafeOrientation;
	
	/** Current movement system (affects strafing behaviour) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = States)
	EMIMovementSystem MovementSystem;

public:
	/** This should be set externally by the character to enable or disable look targets */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LookTarget)
	bool bEnableLookTarget;

	/** This should be set externally by the character to assign current look target */
	UPROPERTY(BlueprintReadWrite, Category = LookTarget)
	AActor* LookTarget;

public:
	/** How fast the character is moving and the direction they are moving in */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	FVector Velocity;

	/** How fast the character has been moving over the past few frames */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	FVector TraversalVelocity;

	/** Velocity of character jump */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	FVector JumpingVelocity;

	/** Traversal velocity of character impact when landing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	FVector LandingVelocity;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	FRotator VelocityRotation;

	/** Rotational velocity, used to drive turn in place and leaning, etc */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	FRotator AngularVelocity;

	/** Compensation when orienting to the floor that will keep the body upright if applied */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	FRotator FloorOrientCompensation;

	/** Non-normalized horizontal speed (original raw value) - Velocity.Size2D() */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float RawSpeed;

	/** Ignores slope and pivot speed reductions so they correctly affect blendspaces - Horizontal speed normalized to a 0-1 range (up to CharacterMovement->GetMaxAnimSpeed()) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float AnimSpeed;

	/** Horizontal speed normalized to a 0-1 range (up to CharacterMovement->GetMaxSpeed()) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float Speed;

	/** Interpolated speed applied to the gate allowing for slower changes to the gate to cause start/stop animations and to blend nicely to and from idle */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float GaitSpeed;
	
	/** Current gait multiplier based on character state */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float GaitMultiplier;

	/** Speed when stopping. Not currently used */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float StoppingSpeed;

	/** Yaw direction that we are moving in */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float Direction;

	/** Motion weight is carried momentum from starting/stopping movement that is applied via the MotionWeight anim graph node */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float MotionWeight;

	/** Is pivoting */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	bool bPivot;

	/** Pivot Yaw Direction */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float PivotDirection;

	/** Speed is over 0.0 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	bool bIsMoving;

	/** Speed is 0.0 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	bool bIsIdle;

	/** Has velocity but is not providing input */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	bool bIsStopping;

	/** Has velocity but is not providing input (while in air) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	bool bIsStoppingInAir;

	/** (bIsApplyingInput & bIsMoving) - Used as "has started moving after stopping" */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	bool bIsMovingWithInput;

	/** Movement direction, also applicable to strafing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	bool bIsMovingBackward;

	/** Movement direction, also applicable to strafing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	bool bIsMovingForward;

	/** Plug into animations to scale their play rate based on movement speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	float AnimPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	FVector PivotVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	FVector PivotInput;

public:
	/** If true, uses the legacy turn in place node */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TurnInPlace)
	bool bUseLegacyTurnInPlace;

	/** Used to negate rotation from root bone (to prevent mesh turning until turn in place triggers) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TurnInPlace)
	float RootYawOffset;

	/** Character Actor Rotation Yaw */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TurnInPlace)
	float Yaw;

	/** Value of the yaw curve */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TurnInPlace)
	float CurveValue;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TurnInPlace)
	float TurnAngle;

	/** Used by anim graph to determine left or right turn animation */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TurnInPlace)
	bool bTurnRight;

	/** Used by anim graph to trigger Turn state */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TurnInPlace)
	bool bDoTurn;

	/** If true, use a big turn instead of the normal turn */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TurnInPlace)
	bool bBigStep;
		
	/** Gate to update curve value at start of turn */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TurnInPlace)
	bool bResetTurn;

	/** Curve Name for Yaw Curve */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TurnInPlace|Settings")
	FName YawCurveName;

	/** Curve Name for whether we are turning at this part of the animation */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TurnInPlace|Settings")
	FName IsTurningCurveName;

	/** Angle at which turn in place will trigger */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TurnInPlace|Settings")
	float MinTurnAngle;

	/** Maximum angle at which point the character will turn to maintain this value (hard clamp on angle) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TurnInPlace|Settings")
	float MaxTurnAngle;

	/** Angle at which a big step will be used instead of regular step */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TurnInPlace|Settings")
	float BigStepTurnAngle;

	/** Rate at which character turns when starting to move from idle (or partial turn) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TurnInPlace|Settings")
	float StartMovingTurnRate;

	/** Rate at which character turns when starting a root motion montage */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TurnInPlace|Settings")
	float RootMotionMontageTurnRate;

public:
	/** Input as obtained from the character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	FVector RawInput;

	/** Input interpolated to zero (applied to gait) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	FVector Input;

	/** Applies stopping input if stopping otherwise applies Input */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	FVector MovingInput;

	/** Interpolated input for smooth direction changes */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	FVector DirectionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	FVector StrafeDirection;

	/** Input supplied when initially triggering stopping */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	FVector StoppingInput;

	/** Velocity when initially triggering stopping */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	FVector StoppingVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	FRotator StoppingRotation;

public:
	/** Input from the previous frame */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	FVector PreviousInput;

	/** Raw input from the previous frame */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	FVector PreviousRawInput;
	
	/** Velocity rotation from the previous frame */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	FRotator PreviousVelocityRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	bool bIsApplyingInput;

	/** Was applying input on the previous frame */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	bool bWasApplyingInput;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	EMIStrafeDirectionBasis NeutralStrafeDirectionBasis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	EMIStrafeDirectionBasis RightStrafeDirectionBasis;

	/** When neutral strafing, when checking the direction will check for an additional degree of change required to be considered "backwards" */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float BackwardsVelocityDegreesTolerance;

	/** When neutral strafing, when checking the direction will check for an additional degree of change required to be considered "backwards" */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float BackwardsAccelerationDegreesTolerance;

	/** Applied when not sprinting or crouching */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float BaseGaitMultiplier;

	/** Applied when sprinting */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float SprintGaitMultiplier;

	/** Applied when crouching */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float CrouchGaitMultiplier;

	/** How fast gait speed catches up to actual speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float GaitInterpRate;

	/** How fast we can change direction (strafe/blendspace direction rate) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float DirectionInterpRate;

	/** How long the pivot animation runs for */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float PivotDuration;

	/** How fast input interpolates to zero when idle (used to smoothly transition gait node from moving to idle) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = Settings)
	float InputInterpToZeroRate;

	/** Animation rate based on character speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float MinAnimPlayRate;

	/** Animation rate based on character speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	float MaxAnimPlayRate;

	/** Used for scaling rotation between nodes, incorrect number will give incorrect rotation */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Movement)
	int32 NumCompensateUpperBodyNodes;

protected:
	float PivotStartTime;

	float StoppingStartTime;

	/** Interpolated */
	FQuat StrafeQuat;

public:
	/** A physically accurate footstep system that can handle any and all other bones hitting the ground */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	TArray<FMISurfaceImpact> SurfaceImpacts;

public:
	UMIAnimInstance()
		: NeutralStrafeDirectionBasis(EMIStrafeDirectionBasis::MISB_Velocity)
		, RightStrafeDirectionBasis(EMIStrafeDirectionBasis::MISB_Acceleration)
		, BackwardsVelocityDegreesTolerance(20.f)
		, BackwardsAccelerationDegreesTolerance(0.f)
		, BaseGaitMultiplier(1.f)
		, SprintGaitMultiplier(1.f)
		, CrouchGaitMultiplier(1.f)
		, GaitInterpRate(1.6f)
		, DirectionInterpRate(7.f)
		, PivotDuration(0.3f)
		, InputInterpToZeroRate(2.f)
		, MinAnimPlayRate(0.7f)
		, MaxAnimPlayRate(1.f)
		, NumCompensateUpperBodyNodes(3)
		, PivotStartTime(0.f)
		, StoppingStartTime(-1.f)
		, StrafeQuat(FQuat::Identity)
	{
		AnimPlayRate = 1.f;

		bUnarmed = true;

		bAimOffsetEnabled = true;
		bEnableLookTarget = false;

		RawSpeed = 1.f;
		Speed = 1.f;
		GaitSpeed = 1.f;
		bIsMovingForward = true;

		AngularVelocity = FRotator::ZeroRotator;

		const FMISurfaceImpact LeftFootImpact = FMISurfaceImpact(FBoneReference("foot_l"), TEXT("footstep_l"));
		const FMISurfaceImpact RightFootImpact = FMISurfaceImpact(FBoneReference("foot_r"), TEXT("footstep_r"));
		const FMISurfaceImpact LeftHandImpact = FMISurfaceImpact(FBoneReference("hand_l"), TEXT("hand_l"), 5.f, true, 15.f);
		const FMISurfaceImpact RightHandImpact = FMISurfaceImpact(FBoneReference("hand_r"), TEXT("hand_r"), 5.f, true, 15.f);
		const FMISurfaceImpact HeadImpact = FMISurfaceImpact(FBoneReference("head"), TEXT("head"), 5.f, true, 25.f);
		SurfaceImpacts = { LeftFootImpact, RightFootImpact, LeftHandImpact, RightHandImpact, HeadImpact };

		bResetTurn = true;
		YawCurveName = TEXT("Yaw");
		IsTurningCurveName = TEXT("IsTurning");
		MinTurnAngle = 60.f;
		MaxTurnAngle = 95.f;
		BigStepTurnAngle = 90.f;
		StartMovingTurnRate = 250.f;
		RootMotionMontageTurnRate = 500.f;
	}

	virtual FAnimInstanceProxy* CreateAnimInstanceProxy() override;

	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	virtual void NativePostEvaluateAnimation() override;

	/** A glorified physically accurate footstep system that can handle any and all other bones hitting the ground */
	UFUNCTION()
	void ComputeSurfaceImpacts();

	FORCEINLINE void ComputeAimOffset(float DeltaTime, FRotator MeshRotation, const FRotator& AimRotation, float& OutHorizontal, float& OutVertical)
	{
		MeshRotation += FRotator(0.f, 90.f - RootYawOffset, 0.f);
		const FRotator AimDelta = (AimRotation - MeshRotation).GetNormalized();

		if (bUseLegacyTurnInPlace)
		{
			const float InterpRate = FMath::GetMappedRangeValueClamped(FVector2D(0.f, 180.f), FVector2D(30.f, 1.f), FMath::Abs(AimDelta.Yaw - OutHorizontal));
			FVector2D AimOffset = FVector2D(OutHorizontal, OutVertical);
			AimOffset = FMath::Vector2DInterpTo(AimOffset, FVector2D(AimDelta.Yaw, AimDelta.Pitch), DeltaTime, InterpRate);

			OutHorizontal = AimOffset.X;
			OutVertical = AimOffset.Y;
		}
		else
		{
			if (bRagdoll)
			{
				OutHorizontal = AimDelta.Yaw;
			}
			OutVertical = AimDelta.Pitch;
		}
	}

	UFUNCTION(BlueprintPure, Category = Animation)
	bool IsValidToEvaluate(float DeltaTime) const;

	/** Called by AnimNotify for entering Turn state */
	UFUNCTION(BlueprintCallable, Category = TurnInPlace)
	void OnStartTurning();

	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = TurnInPlace)
	bool IsTurnInPlaceEnabled() const;

	UFUNCTION(BlueprintImplementableEvent, Category = Animation)
	void OnStartFloorSliding();

	UFUNCTION(BlueprintImplementableEvent, Category = Animation)
	void OnStopFloorSliding();
};
