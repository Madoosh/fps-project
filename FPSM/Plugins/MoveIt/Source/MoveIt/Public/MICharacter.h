// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MITypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "MICharacter.generated.h"

class UMICharacterMovementComponent;
class UMIViewComponent;
class UAudioComponent;
class UAnimSequenceBase;
class UMIPhysicalMaterial;

UCLASS()
class MOVEIT_API AMICharacter : public ACharacter
{
	GENERATED_BODY()

private:
	/** Movement component used for movement logic in various movement modes (walking, sprinting, falling, etc), containing relevant settings and functions to control movement. */
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, Transient, meta = (AllowPrivateAccess = "true"))
	UMICharacterMovementComponent* MICharacterMovement;

	/** View component used for camera blending and transition logic in various movement modes (crouching, sprinting, etc). */
	UMIViewComponent* MIViewComponent;

public:
	/** 
	 * If true, will keep body upright when orienting to floor
	 * Convenience plug for Animation Instance to compensate for orienting to floor
	 * Must be present in anim graph for it to work
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OrientToFloor)
	bool bOrientKeepUpperBodyUpright;

	/** Default settings that are passed to GetOrientToFloorSettings() */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OrientToFloor)
	FOrientToFloorSettings OrientDefaultSettings;

	/** 
	 * Convenience settings to pass to GetOrientToFloorSettings() to make the character orient to the floor
	 * Helpful for floor sliding
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OrientToFloor)
	FOrientToFloorSettings OrientMatchGround;

public:
	/** 
	 * Direction to orient in when strafing left
	 * Great for over the shoulder movement
	 * NOT replicated - you must handle this yourself if you want to change it during runtime and other players to see it
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
	EMIStrafeOrientation StrafeOrientation;

	/**
	 * General type of movement used
	 * OrientToView faces the camera
	 * OrientToMovement is similar to Third Person Template
	 * CycleOrientToMovement is same as OrientToMovement but has a minimum turning circle like Zelda BOTW or Mario Odyssey so they can't simply spin on the spot, combines with pivot to allow direction change on the spot
	 */
	UPROPERTY(EditAnywhere, BlueprintSetter = "SetMovementSystem", Category = Character)
	EMIMovementSystem MovementSystem;

	/** How fast the character turns back to face the camera when switching MovementSystem back to OrientToView */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Character)
	float MovementSystemChangeOrientRate;

public:
	/**
	 * If true, the amount of time to stand up will be taken from the animation played
	 * Note that this can cause desync when used online due to server and client possibly playing different animations
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ragdoll)
	bool bRagdollStandUpTimeFromAnimation;

	/**
	 * How long it takes to stand up if bRagdollStandUpTimeFromAnimation is false
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ragdoll, meta = (EditCondition = "!bRagdollStandUpTimeFromAnimation"))
	float RagdollStandUpTime;

	/** Animation to play when standing up from lying down on face */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ragdoll)
	UAnimSequenceBase* RagdollStandUpFace;

	/** Animation to play when standing up from lying down on back */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ragdoll)
	UAnimSequenceBase* RagdollStandUpBack;

	/** Physical material to use when none is assigned to the material being interacted with */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact")
	UMIPhysicalMaterial* DefaultPhysicalMaterial;
	
	/** Whether Hit Wall can occur */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Wall")
	bool bHitWallEnabled;

	/** If true, can apply hit wall effect when montage is playing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Wall")
	bool bCanHitWallWhileMontagePlaying;

	/** If true, can apply hit wall effect when root motion is playing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Wall")
	bool bCanHitWallWhileRootMotionPlaying;

	/*
	* Max LOD that wall impact is allowed to run
	* For example if you have ImpactLODThreshold at 2, it will run until LOD 2 (based on 0 index)
	* when the component LOD becomes 3, it will stop
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Wall", meta = (DisplayName = "Impact LOD Threshold"))
	int32 ImpactLODThreshold;

	/**
	 * Impact velocity must exceed this when running into a wall to play a sound (set in physical material)
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Wall")
	float HitWallImpactVelocityThreshold;

	/** How much Impact Velocity [Time] results in how much Physics Impulse [Value] to play physical animation on the character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Wall", meta = (DisplayName = "Hit [Impact Velocity -> Physics Impulse]"))
	FRuntimeFloatCurve HitImpactVelocityToPhysicsImpulse;

	/** Blending for impact from hitting a wall */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Wall")
	FPhysicsBlend HitImpactPhysics;

	/** Blending settings for bone impact from being shot */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Shot")
	FPhysicsBlend ShotImpactPhysics;

	/** Primarily used to stop simulation on pelvis and hands/feet (they don't look good) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Shot")
	TMap<FName, FName> ShotImpactBoneRedirects;

	/** Whether Hit Character can occur */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	bool bHitCharacterEnabled;

	/** If true, can apply hit character effect when montage is playing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	bool bCanHitCharacterWhileMontagePlaying;

	/** If true, can apply hit character effect when root motion is playing */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	bool bCanHitCharacterWhileRootMotionPlaying;

	/** Blending for impact from hitting another character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	FPhysicsBlend HitCharacterImpactPhysics;

	/** Blending for impact from being hit by another character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	FPhysicsBlend HitByCharacterImpactPhysics;

	/** How fast we have to be moving to apply hit another character effects */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	float HitCharacterVelocityThreshold;

	/** How fast other character has to be moving to apply hit another character effects */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	float HitByCharacterVelocityThreshold;
	
	/** Sound to play when hitting a character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	USoundBase* HitCharacterGrunt;

	/** Sound to play when hit by a character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	USoundBase* HitByCharacterGrunt;

	/** Voice sound to play when hit by a character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	USoundBase* HitByCharacterVoice;

	/** How often we can hit another character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	float HitCharacterMinInterval;

	/** How often we can be hit by another character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	float HitByCharacterMinInterval;

	/** How often a voice will play instead of a grunt when hit by another character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Character")
	float HitByCharacterMinVoiceInterval;

	/** 
	 * Impact velocity must exceed this when walking into a wall to play a scuffing sound (set in physical material)
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Wall")
	float ScuffWallSoundVelocityThreshold;

	/** Hit wall scuffle can only be played this often */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Wall")
	float ScuffWallSoundMinInterval;

	/** Hit wall scuffle can only be played this often */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Impact: Wall")
	float ScuffWallParticleMinInterval;

	/** Up normal of the wall surface relative to wall up before it wont allow us to hit it */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Impact: Wall")
	float HitMaxUpNormal;

	/** 
	 * Movement vector (acceleration) difference to the wall before it wont allow us to hit it 
	 * Lower is easier to trigger
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Impact: Wall")
	float HitMaxMovementNormal;

	/** Up normal of the wall surface relative to wall up before it wont allow us to scuff it */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Impact: Wall")
	float ScuffMaxUpNormal;

	/** 
	 * Movement vector (acceleration) difference to the wall before it wont allow us to scuff it 
	 * Lower is easier to trigger
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, Category = "Impact: Wall")
	float ScuffMaxMovementNormal;

protected:
	FTimerHandle ScuffWallSoundTimerHandle;
	FTimerHandle ScuffWallParticleTimerHandle;
	FTimerHandle HitWallSoundTimerHandle;

	FTimerHandle HitCharacterTimerHandle;
	FTimerHandle HitByCharacterTimerHandle;
	FTimerHandle HitByCharacterVoiceTimerHandle;

	UPROPERTY()
	UAudioComponent* HitWallAudioComponent;

public:
	/** Used for simulated proxies to know when to pivot */
	UPROPERTY(ReplicatedUsing="OnRep_SimulatedPivot")
	bool bSimulatedPivot;
	
public:
	/** Mesh -> Impact Struct -> BoneName -> PhysicsBlend */
	UPROPERTY()
	TMap<USkeletalMeshComponent*, FMIShotImpact> ShotBonePhysicsImpacts;

protected:
	bool bMovementSystemInterp;
	FRotator MovementSystemControlRotation;

public:
	/** Set by character movement to specify that this Character is currently sprinting. */
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = "OnRep_IsSprinting", Category=Character)
	uint32 bIsSprinting:1;

	/** Game time when sprinting started */
	UPROPERTY(BlueprintReadOnly, Category = Character)
	float SprintStartTime;

	/** Set by character movement to specify that this Character is currently floor sliding. */
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = "OnRep_IsFloorSliding", Category=Character)
	uint32 bIsFloorSliding:1;

private:
	float FloorSlideSpeedStartTime;

	float FloorSlideStopTime;

public:

	/** Current input vector. Replicated to simulated players. Used for pivoting and animation sync. */
	UPROPERTY(Replicated, BlueprintReadOnly, Category = Character)
	FVector Input;

	/** Previous input vector. Available to simulated players. Used for pivoting and animation sync. */
	UPROPERTY(BlueprintReadOnly, Category = Character)
	FVector PreviousInput;

	/** Previous input vector that wasn't zero. Available to simulated players. Used for pivoting and animation sync. */
	UPROPERTY(BlueprintReadOnly, Category = Character)
	FVector PreviousNonZeroInput;

	/** 0 is orient to view, 1 is any movement facing movement system. */
	float MovementSystemViewAlpha;

	/**
	 * True if currently in ragdoll
	 * Available to everyone (simulated, auton, server)
	 */
	UPROPERTY(ReplicatedUsing="OnRep_Ragdoll")
	bool bRagdoll;

	bool bRagdollStandingUp;

	/** THe current ragdoll location on local client */
	UPROPERTY()
	FVector RagdollLocation;

	/** 
	 * The current actor location while in ragdoll
	 * Available to everyone (simulated, auton, server)
	 */
	UPROPERTY(Replicated)
	FVector RagdollActorLocation;

	/** Used to compare locations so we don't send updates when a small change occurs */
	FVector LastNetSendRagdollActorLocation;

	/** True if in ragdoll and ragdoll is currently on the ground. Valid local player only. */
	UPROPERTY(BlueprintReadOnly, Category = Ragdoll)
	bool bRagdollOnGround;

	/** For first 10 seconds, ragdoll corrects more aggressively to handle initial impulse */
	FTimerHandle RagdollCorrectionTimerHandle;

	FTimerHandle RagdollStandUpTimerHandle;

protected:
	FVector PendingInput;

public:
	AMICharacter(const FObjectInitializer& OI);

	virtual void BeginPlay() override;

	/** Return ragdoll velocity when in ragdoll */
	virtual FVector GetVelocity() const override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void PreNetReceive() override;
	virtual void PostNetReceive() override;

	/** Returns MICharacterMovement subobject **/
	FORCEINLINE UMICharacterMovementComponent* GetMICharacterMovement() const { return MICharacterMovement; }

	/** Returns MIViewComponent subobject **/
	FORCEINLINE UMIViewComponent* GetMIViewComponent() const { return MIViewComponent; }

	/**
	 * Override to return information about current weapon
	 * Used by animation instance to offset the weapon position and grip with left hand properly
	 */
	UFUNCTION(BlueprintNativeEvent, Category = Weapon)
	FMIWeapon GetWeaponAnimInfo() const;

public:
	/** Notify ViewComponent that character state has changed to a new state that it handles */
	void OnCharacterStateChanged();

	/** Camera blending logic for ViewComponent */
	virtual void CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult) override;

public:
	/**
	 * Change the current movement system
	 * NOT replicated (you should handle this yourself)
	 */
	UFUNCTION(BlueprintCallable, Category = Character)
	void SetMovementSystem(EMIMovementSystem NewMovement);

public:
	/** 
	 * Call instead of AddMovementInput when applying forward input 
	 * Pass the exact same information you would pass to AddMovementInput

	* Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.
	 * Base Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.
	 *
	 * @param WorldDirection	Direction in world space to apply input
	 * @param ScaleValue		Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.
	 * @param bForce			If true always add the input, ignoring the result of IsMoveInputIgnored().
	 * @see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()
	 */
	UFUNCTION(BlueprintCallable, Category=Character)
	virtual void AddForwardMovementInput(FVector WorldDirection, float ScaleValue, bool bForce = false);

	/**
	 * Call instead of AddMovementInput when applying right input
	 * Pass the exact same information you would pass to AddMovementInput

	* Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.
	 * Base Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.
	 *
	 * @param WorldDirection	Direction in world space to apply input
	 * @param ScaleValue		Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.
	 * @param bForce			If true always add the input, ignoring the result of IsMoveInputIgnored().
	 * @see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()
	 */
	UFUNCTION(BlueprintCallable, Category=Character)
	virtual void AddRightMovementInput(FVector WorldDirection, float ScaleValue, bool bForce = false);

	/** Called from UMICharacterMovementComponent::ConsumeInputVector()
	 * This maintains the same entry points used by CMC to ensure that the raw input values are processed at
	 * the exact same time as Acceleration so nothing is ever out of sync 
	 */
	void HandleConsumeInputVector();

	/** Sends compressed local inputs to server, which is then replicated to proxies */
	UFUNCTION(Server, Unreliable, WithValidation)
	void SendInputToServer(float X, float Y);

	virtual void Tick(float DeltaTime);

	void TickShotImpacts(float DeltaTime);

	void TickRagdoll();

	void RagdollTraceGround(FHitResult& Hit, const FVector& InRagdollLocation);

	/** Suitable entry-point for prediction related abilities */
	virtual void CheckJumpInput(float DeltaTime) override;

	/** Used to make the character interpolate facing rotation when changing MovementSystem to OrientToView */
	virtual void FaceRotation(FRotator NewControlRotation, float DeltaTime /* = 0.f */) override;

	UFUNCTION()
	void OnRep_SimulatedPivot();

public:
	UFUNCTION(BlueprintCallable, Category = "Impact: Shot")
	void TakeShotPhysicsImpact(FName BoneName, USkeletalMeshComponent* HitMesh, const FVector& HitNormal, const float HitMagnitude);

public:
	/** Override to notify when weapon is being aimed (used by animation blueprint) */
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = Character)
	bool IsAimingWeapon() const;

public:
	/**
	 * True if currently in ragdoll
	 * Available to everyone (simulated, auton, server)
	 */
	UFUNCTION(BlueprintPure, Category = Ragdoll)
	FORCEINLINE bool IsRagdoll() const
	{
		return bRagdoll;
	}

	/**
	 * True if ragdoll is currently standing up
	 */
	UFUNCTION(BlueprintPure, Category = Ragdoll)
	FORCEINLINE bool IsRagdollStandingUp() const
	{
		return bRagdollStandingUp;
	}

	/** Override to return true if we can enter ragdoll. Always true by default. */
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = Ragdoll)
	bool CanStartRagdoll() const;

	/** Override to return true if we can leave ragdoll and stand back up. Always true by default. */
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = Ragdoll)
	bool CanStopRagdoll() const;

	UFUNCTION()
	void OnRep_Ragdoll();

	/** Call this to enter ragdoll */
	UFUNCTION(BlueprintCallable, Category = Ragdoll)
	void StartRagdoll();

	/** Call this to stop ragdoll and stand back up */
	UFUNCTION(BlueprintCallable, Category = Ragdoll)
	void StopRagdoll();

	void OnStartRagdoll();
	void OnStopRagdoll();

	UFUNCTION()
	void OnRagdollStandUp();

	/** Called when starting to ragdoll */
	UFUNCTION(BlueprintImplementableEvent, Category = Ragdoll, meta = (DisplayName = "On Start Ragdoll"))
	void K2_OnStartRagdoll();

	/** Called when stopping ragdoll and standing up */
	UFUNCTION(BlueprintImplementableEvent, Category = Ragdoll, meta = (DisplayName = "On Stop Ragdoll"))
	void K2_OnStopRagdoll();

	/** Called when ragdoll finishes standing up */
	UFUNCTION(BlueprintImplementableEvent, Category = Ragdoll, meta = (DisplayName = "On Ragdoll Stand Up"))
	void K2_OnRagdollStandUp();

	/** Send actor location to server during ragdoll */
	UFUNCTION(Server, Unreliable, WithValidation)
	void ServerReceiveRagdoll(const FVector& NewRagdollActorLocation);

	/** Set actor location during ragdoll */
	void UpdateRagdoll();

public:
	virtual void OnPivot()
	{
		K2_OnPivot();
	}

	/** Called any time the character pivots (changes direction, causing animation and brief movement changes */
	UFUNCTION(BlueprintImplementableEvent, Category = Character, meta = (DisplayName = "On Pivot"))
	void K2_OnPivot();

	virtual bool CanStartSprinting() const;

	/** 
	 * Override to change when character can sprint
	 
	 * Default conditions:
	 * - Not being destroyed
	 * - Is providing input
	 * - Input is suitably in direction of character facing direction @see UMICharacterMovement::GetMaxSprintDirectionInputNormal()
	 * - When strafing orientation is set to right, Input isn't moving backwards
	 */
	UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category=Character)
	bool CanSprint() const;

	/**
	 * Request the character to start sprinting.
	 * @see OnStartSprinting
	 * @see IsSprinting
	 * @see MICharacterMovement->WantsToSprint
	 */
	UFUNCTION(BlueprintCallable, Category=Character)
	virtual void Sprint();

	/**
	 * Request the character to stop sprinting.
	 * @see OnStopSprinting
	 * @see IsSprinting
	 * @see MICharacterMovement->WantsToSprint
	 */
	UFUNCTION(BlueprintCallable, Category=Character)
	virtual void StopSprinting();

	void OnStartSprint();

	void OnStopSprint();

	/** Called when character starts to sprint */
	UFUNCTION(BlueprintImplementableEvent, Category=Character, meta = (DisplayName = "On Start Sprint"))
	void K2_OnStartSprint();

	/** Called when character stops sprinting */
	UFUNCTION(BlueprintImplementableEvent, Category = Character, meta = (DisplayName = "On Stop Sprint"))
	void K2_OnStopSprint();

	virtual void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;
	virtual void OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;

	/** Handle Sprinting replicated from server */
	UFUNCTION()
	virtual void OnRep_IsSprinting();

	// Floor sliding
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Floor Slide")
	bool CanStartFloorSlide() const;

	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Floor Slide")
	bool CanContinueFloorSlide() const;

	UFUNCTION(BlueprintPure, Category = "Floor Slide")
	bool IsFloorSliding() const;

	void OnStartFloorSlide();

	void OnStopFloorSlide();

	/** Called when character starts to floor slide */
	UFUNCTION(BlueprintImplementableEvent, Category=Character, meta = (DisplayName = "On Start Floor Slide"))
	void K2_OnStartFloorSlide();

	/** Called when character stops floor sliding */
	UFUNCTION(BlueprintImplementableEvent, Category = Character, meta = (DisplayName = "On Stop Floor Slide"))
	void K2_OnStopFloorSlide();

	/** Handle Floor Sliding replicated from server */
	UFUNCTION()
	virtual void OnRep_IsFloorSliding();

public:
	/**
	 * @return True if movement should be cycled
	 * Cycling provides a minimum turning circle preventing spinning on the spot
	 * By default is True if MovementSystem is CycleOrientToMovement
	 */
	UFUNCTION(BlueprintNativeEvent, Category = Character)
	bool ShouldCycleMovement() const;

public:
	/** @return True if character should orient to the floor */
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category=Character)
	bool ShouldOrientToFloor() const;

	UFUNCTION(BlueprintPure, Category = Character)
	bool IsOnWalkableFloor() const;

	UFUNCTION(BlueprintPure, Category = Character)
	bool IsCurrentFloorMovable() const;

	/** Settings for currently orienting to the floor */
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = Character)
	FOrientToFloorSettings GetOrientToFloorSettings() const;

public:
	bool IsValidLOD(const int32& LODThreshold) const;

	UFUNCTION()
	void OnCapsuleComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	void OnCollideWith(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	void HandleMeshImpact(FPhysicsBlend& ImpactPhysics, const FVector& ImpactNormal, const FVector& ImpactVelocity);

	void HandleImpactCharacter(AMICharacter* OtherCharacter, const FVector& ImpactNormal, const FVector& ImpactVelocity, bool bInstigator);

	UFUNCTION(BlueprintNativeEvent, Category = Sound)
	bool CanPlayHitByCharacterVoice() const;
};