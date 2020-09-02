// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.


#include "MIAnimInstance.h"
#include "MICharacter.h"
#include "MICharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MIPhysicalMaterial.h"
#include "Kismet/GameplayStatics.h"
#include "MIAnimInstanceProxy.h"
#include "Niagara/Public/NiagaraFunctionLibrary.h"


FAnimInstanceProxy* UMIAnimInstance::CreateAnimInstanceProxy()
{
	return new FMIAnimInstanceProxy(this);
}

void UMIAnimInstance::NativeInitializeAnimation()
{
	Character = (TryGetPawnOwner()) ? Cast<AMICharacter>(TryGetPawnOwner()) : nullptr;
	if (Character)
	{
		Movement = Character->GetMICharacterMovement();
		Mesh = Character->GetMesh();

		if (Mesh && Character->GetNetMode() != NM_DedicatedServer)
		{
			Mesh->OnBoneTransformsFinalized.RemoveDynamic(this, &UMIAnimInstance::ComputeSurfaceImpacts);
			Mesh->OnBoneTransformsFinalized.AddDynamic(this, &UMIAnimInstance::ComputeSurfaceImpacts);
		}

		RootYawOffset = Character->GetActorRotation().Yaw;
		bResetTurn = true;
	}
}

void UMIAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	if (!IsValidToEvaluate(DeltaTime))
	{
		return;
	}

	// ----------------------------------------------------------------------
	// Cache movement values
	// ----------------------------------------------------------------------
	bRagdoll = Character->IsRagdoll() || Character->IsRagdollStandingUp();

	Velocity = Character->GetVelocity();
	TraversalVelocity = Movement->GetTraversalVelocity();
	JumpingVelocity = FVector(0.f, 0.f, Movement->Velocity.Z);
	LandingVelocity = FVector(0.f, 0.f, TraversalVelocity.Z);
	AngularVelocity = Movement->GetAngularVelocity();
	VelocityRotation = Velocity.Rotation();
	RawSpeed = Velocity.Size2D();
	Speed = UKismetMathLibrary::NormalizeToRange(RawSpeed, 0.f, Movement->GetMaxSpeed());
	AnimSpeed = UKismetMathLibrary::NormalizeToRange(RawSpeed, 0.f, Movement->GetMaxAnimSpeed());
	GaitSpeed = FMath::FInterpConstantTo(GaitSpeed, Speed, DeltaTime, GaitInterpRate);
	bPlayingRootMotion = Character->GetRootMotionAnimMontageInstance() != nullptr;
	bIsMoving = Speed > 0.f && !bPlayingRootMotion;
	bIsIdle = !bIsMoving;

	AnimPlayRate = UKismetMathLibrary::MapRangeClamped(Speed, 0.f, 1.f, MinAnimPlayRate, MaxAnimPlayRate);

	if (bPlayingRootMotion)
	{
		RootYawOffset = FMath::FInterpConstantTo(RootYawOffset, 0.f, DeltaTime, RootMotionMontageTurnRate);
	}
	
	// ----------------------------------------------------------------------
	// Cache movement states
	// ----------------------------------------------------------------------
	bIsCrouched = Movement->IsCrouching() && !bRagdoll;
	bIsStanding = !bIsCrouched;
	bIsFalling = Movement->IsFalling() && !bRagdoll;
	bIsJumping = bIsFalling && Velocity.Z > 0.f;
	bOnGround = Movement->IsMovingOnGround() || bRagdoll;
	bCrouchingOnGround = bIsCrouched && bOnGround && !bRagdoll;
	bIsSprinting = Movement->IsSprinting() && Speed >= 0.5f && !bRagdoll;
	const bool bWasFloorSliding = bIsFloorSliding;
	bIsFloorSliding = Character->bIsFloorSliding && !bRagdoll;
	StrafeOrientation = Character->StrafeOrientation;
	MovementSystem = Character->MovementSystem;
	bGaitEnabled = bOnGround && bIsMoving && !bIsFloorSliding;
	bStrafeEnabled = (MovementSystem == EMIMovementSystem::MS_OrientToView) && !bRagdoll;
	bAiming = Character->IsAimingWeapon();
	bNotAiming = !bAiming;
	bAimingLocalPlayer = bAiming && Character->IsLocallyControlled();
	bNotAimingLocalPlayer = !Character->IsLocallyControlled() || !bAiming;

	GaitMultiplier = BaseGaitMultiplier;
	if (bIsSprinting) { GaitMultiplier = SprintGaitMultiplier; }
	else if (bIsCrouched) { GaitMultiplier = CrouchGaitMultiplier; }

	bFootIK = bOnGround && !bRagdoll;
	FootIKState = (bIsCrouched) ? 1 : 0;
	if (bIsFloorSliding) { FootIKState = 2; }

	bOrientKeepUpperBodyUpright = Character->bOrientKeepUpperBodyUpright && !bRagdoll;

	if (!bWasFloorSliding && bIsFloorSliding)
	{
		OnStartFloorSliding();
	}
	else if (bWasFloorSliding && !bIsFloorSliding)
	{
		OnStopFloorSliding();
	}

	Weapon = Character->GetWeaponAnimInfo();
	bool bWasArmed = bArmed;
	bArmed = Weapon.IsValid();
	bUnarmed = !bArmed;
	const int32 LastWeaponAnimState = WeaponAnimState;
	WeaponAnimState = (bArmed) ? Weapon.AnimStance : 0;

	bEnableWeaponPose = bArmed;
	bEnableHandIK = bArmed && !Weapon.bIsOneHanded;

	bWeaponOneHanded = bArmed && Weapon.bIsOneHanded;
	LeftArmBlendWeight = bWeaponOneHanded ? 1.f : 0.f;

	const bool bLastUseWeaponPose = bUseWeaponPose;
	bUseWeaponPose = Weapon.WeaponPose != nullptr;

	bUseWeaponAimPose = Weapon.AimOffset != nullptr;

	if (bUseWeaponAimPose)
	{
		WeaponAimOffset = Weapon.AimOffset;
	}

	const bool bWasChangingWeapon = bChangingWeapon;

	bool bUnequipping = false;
	if (!bUseWeaponPose && bLastUseWeaponPose)
	{
		// Just unequipped, save snapshot for blending
		bUnequipping = true;
		bChangingWeapon = false;
		SavePoseSnapshot("Unequip");
	}

	if (bChangingWeapon)
	{
		// Lasts for one frame only, just to trigger the transition
		bChangingWeapon = false;
	}
	else
	{
		bChangingWeapon = LastWeaponAnimState != WeaponAnimState && !bUnequipping && bWasArmed;
	}

	if (bChangingWeapon && !bWasChangingWeapon)
	{
		// Changing weapon, save snapshot for blending
		SavePoseSnapshot("ChangingWeapon");
	}

	const bool bStrafeUseVelocity = RawInput.IsZero() && Speed > 0.25f;
	const bool bStrafeUseAcceleration = Speed < 0.1f;
	const EMIStrafeDirectionBasis& StrafeDirectionBasis = (StrafeOrientation == EMIStrafeOrientation::SO_Neutral) ? NeutralStrafeDirectionBasis : RightStrafeDirectionBasis;
	const bool bVelocityBased = (StrafeDirectionBasis == EMIStrafeDirectionBasis::MISB_Velocity && !bStrafeUseAcceleration) || (StrafeDirectionBasis == EMIStrafeDirectionBasis::MISB_Acceleration && bStrafeUseAcceleration);
	const bool bAccelerationBased = !bVelocityBased;
	float BackwardsDegreesTolerance = (bVelocityBased) ? BackwardsVelocityDegreesTolerance : BackwardsAccelerationDegreesTolerance;

	// ----------------------------------------------------------------------
	// Aim Offset
	// ----------------------------------------------------------------------
	ComputeAimOffset(DeltaTime, Mesh->GetComponentRotation(), Character->GetBaseAimRotation(), AimOffsetHorizontal, AimOffsetVertical);
	bAimOffsetEnabled = !bEnableLookTarget;

	// ----------------------------------------------------------------------
	// Ragdoll - Early Exit
	// ----------------------------------------------------------------------
	if (bRagdoll)
	{
		PreviousInput = Input;
		Input = FVector::ZeroVector;
		RawInput = FVector::ZeroVector;
		bWasApplyingInput = bIsApplyingInput;
		bIsApplyingInput = false;
		bIsMovingWithInput = false;
		DirectionInput = FVector::ZeroVector;
		MotionWeight = 0.f;
		Speed = 0.f;
		RawSpeed = 0.f;
		bIsMoving = false;
		bIsIdle = true;

		StoppingInput = FVector::ZeroVector;
		StoppingVelocity = FVector::ZeroVector;
		MovingInput = FVector::ZeroVector;
		StrafeDirection = FVector::ZeroVector;

		bDoTurn = false;
		RootYawOffset = 0.f;
		Yaw = Character->GetActorRotation().Yaw;
		bResetTurn = true;

		// No longer want to factor standing up as being in ragdoll to ensure blend out plays
		bRagdoll = Character->IsRagdoll();

		PreviousVelocityRotation = VelocityRotation;
		return;
	}

	// ----------------------------------------------------------------------
	// Compute acceleration
	// ----------------------------------------------------------------------

	PreviousInput = Input;
	PreviousRawInput = RawInput;
	RawInput = Character->Input;
	bWasApplyingInput = bIsApplyingInput;
	bIsApplyingInput = !RawInput.IsNearlyZero();
	bIsMovingWithInput = bIsApplyingInput && bIsMoving;

	if (bIsApplyingInput)
	{
		Input = RawInput;
	}
	else
	{
		// Interpolate input to zero to smoothly interpolate gait nodes
		Input = FMath::VInterpConstantTo(Input, FVector::ZeroVector, DeltaTime, InputInterpToZeroRate);
	}

	// Input used for direction changes
	DirectionInput = FMath::VInterpTo(DirectionInput, RawInput, DeltaTime, DirectionInterpRate);

	if (Movement->bPivotAnimTrigger && !bPivot)
	{
		bPivot = true;
		Movement->bPivotAnimTrigger = false;

		PivotVelocity = Movement->GetLastUpdateRotation().UnrotateVector(Velocity.GetSafeNormal2D());
		PivotInput = RawInput;

		PivotStartTime = GetWorld()->GetTimeSeconds();

		PivotDirection = Character->GetActorRotation().UnrotateVector(Movement->PivotMovementDirection).Rotation().Yaw;
	}

	if (bPivot && GetWorld()->GetTimeSeconds() >= (PivotStartTime + PivotDuration))
	{
		bPivot = false;
	}

	if (bPivot)
	{
		BackwardsDegreesTolerance = 0.f;
	}

	if (!bIsApplyingInput)
	{
		FVector MotionWeightVector = Movement->AccelerationDelta / (Movement->GetMaxSpeed() * 3.f);
		MotionWeightVector = Movement->GetLastUpdateRotation().UnrotateVector(MotionWeightVector);

		MotionWeight = MotionWeightVector.X * -1.f;
	}
	else
	{
		MotionWeight = 0.f;
	}

	// ----------------------------------------------------------------------
	// Compute stopping
	// ----------------------------------------------------------------------

	// Should stop if moving, not already stopping, and just stopped applying input
	const bool bShouldStop = !bIsStopping && !bIsApplyingInput && bWasApplyingInput;
	if (bShouldStop)
	{
		bIsStopping = true;
		StoppingSpeed = Speed;
		StoppingInput = RawInput;
		StoppingVelocity = Velocity;
		StoppingRotation = Movement->GetLastUpdateRotation();

		StoppingStartTime = GetWorld()->GetTimeSeconds();
	}
	else
	{
		// End stopping (going back to moving)
		if (bIsStopping && bIsApplyingInput)
		{
			bIsStopping = false;
		}
	}

	bIsStoppingInAir = bIsStopping && bIsFalling;

	// ----------------------------------------------------------------------
	// Assign relevant input to use for movement anim nodes
	// ----------------------------------------------------------------------
	MovingInput = bIsStopping ? StoppingInput : Input;

	// ----------------------------------------------------------------------
	// Compute strafe direction
	// ----------------------------------------------------------------------

	bool bStrafingForward = false;
	if (MovementSystem == EMIMovementSystem::MS_OrientToView)
	{
		FVector StrafeTarget = FVector::ZeroVector;
		if (bAccelerationBased)
		{
			StrafeTarget = RawInput;

			if (bPivot)
			{
				StrafeTarget = PivotInput;
			}
		}
		else
		{
			StrafeTarget = Movement->GetLastUpdateRotation().UnrotateVector(Velocity.GetSafeNormal2D());

			if (bPivot)
			{
				StrafeTarget = PivotVelocity;
			}
		}

		bStrafingForward = !FMIStatics::IsStrafingBackward(StrafeTarget, StrafeOrientation, BackwardsDegreesTolerance);

		// Nudge the direction forward, because turning backwards looks glitchy
		StrafeTarget += FVector::ForwardVector * 0.01f;

		const FVector FacingDirection = bStrafingForward ? StrafeTarget : -StrafeTarget;

		if (DirectionInterpRate != 0.f)
		{
			StrafeQuat = FMath::QInterpConstantTo(StrafeQuat, FacingDirection.ToOrientationQuat(), DeltaTime, DirectionInterpRate);
		}
		else
		{
			StrafeQuat = FacingDirection.ToOrientationQuat();
		}

		StrafeDirection = StrafeQuat.Vector();
	}
	else
	{
		StrafeDirection = FVector(1.f, 0.f, 0.f);
	}

	// ----------------------------------------------------------------------
	// Compute direction
	// ----------------------------------------------------------------------
	if (Speed > 0.f)
	{
		Direction = DirectionInput.Rotation().Yaw;
	}

	// ----------------------------------------------------------------------
	// Compute physics blending
	// ----------------------------------------------------------------------
	if (Character->HitImpactPhysics.IsActive())
	{
		Character->HitImpactPhysics.Update(Mesh, DeltaTime);
	}
	if (Character->HitCharacterImpactPhysics.IsActive())
	{
		Character->HitCharacterImpactPhysics.Update(Mesh, DeltaTime);
	}
	if (Character->HitByCharacterImpactPhysics.IsActive())
	{
		Character->HitByCharacterImpactPhysics.Update(Mesh, DeltaTime);
	}

	// ----------------------------------------------------------------------
	// Strafing
	// ----------------------------------------------------------------------

	const FVector UnrotatedVelocity = Movement->GetLastUpdateRotation().UnrotateVector(Velocity.GetSafeNormal2D());

	bIsMovingBackward = bStrafeEnabled && !bStrafingForward;
	bIsMovingForward = !bIsMovingBackward;

	// ----------------------------------------------------------------------
	// Turn in place
	// ----------------------------------------------------------------------

	if (!bUseLegacyTurnInPlace)
	{
		const float LastYawTick = Yaw;
		Yaw = Character->GetActorRotation().Yaw;
		const float YawChangeOverFrame = LastYawTick - Yaw;

		if (bIsApplyingInput || bIsMoving || !IsTurnInPlaceEnabled())
		{
			// If we're moving interpolate back to 0
			RootYawOffset = FMath::FInterpConstantTo(RootYawOffset, 0.f, DeltaTime, StartMovingTurnRate);
		}
		else if (!bPlayingRootMotion)
		{
			// Not moving, turn in place
			RootYawOffset = FRotator::NormalizeAxis(YawChangeOverFrame + RootYawOffset);

			if (FMath::IsNearlyEqual(GetCurveValue(IsTurningCurveName), 1.f, 0.001f))
			{
				if (bResetTurn)
				{
					bResetTurn = false;
					CurveValue = FMath::Abs(GetCurveValue(YawCurveName));
				}

				const float LastCurveValue = CurveValue;
				CurveValue = FMath::Abs(GetCurveValue(YawCurveName));

				const float CurveValueChangeOverFrame = (LastCurveValue - CurveValue) * (bTurnRight ? 1.f : -1.f);
				RootYawOffset -= CurveValueChangeOverFrame;
			}
			else
			{
				bResetTurn = true;
			}
		}

		bTurnRight = RootYawOffset < 0.f;
		TurnAngle = FMath::Abs(RootYawOffset);
		bDoTurn = TurnAngle >= MinTurnAngle;

		if (bDoTurn)
		{
			// Interrupt stopping animation (required for long stopping anims)
			bIsStopping = false;
		}

		if (MaxTurnAngle > 0.f && TurnAngle >= MaxTurnAngle)
		{
			RootYawOffset = MaxTurnAngle * (bTurnRight ? -1.f : 1.f);
		}

		AimOffsetHorizontal = RootYawOffset * -1.f;
	}

	// ----------------------------------------------------------------------
	// Cache end of frame variables
	// ----------------------------------------------------------------------

	PreviousVelocityRotation = VelocityRotation;
}

void UMIAnimInstance::NativePostEvaluateAnimation()
{
	// Doesn't actually have anything in super
	Super::NativePostEvaluateAnimation();

	FMIAnimInstanceProxy& Proxy = GetProxyOnGameThread<FMIAnimInstanceProxy>();
	OffHandIKTM = Proxy.OffHandIKTM;

	// ----------------------------------------------------------------------
	// Orient to floor compensation rotation
	// ----------------------------------------------------------------------
	const FRotator& FloorOrientation = Proxy.OrientFloorRotation;
	FloorOrientCompensation = FRotator(FloorOrientation.Pitch * -1.f, FloorOrientation.Roll * -1.f, 0.f);
	if (NumCompensateUpperBodyNodes != 0)
	{
		FloorOrientCompensation.Pitch /= NumCompensateUpperBodyNodes;
		FloorOrientCompensation.Yaw /= NumCompensateUpperBodyNodes;
		FloorOrientCompensation.Roll /= NumCompensateUpperBodyNodes;
	}
}

void UMIAnimInstance::ComputeSurfaceImpacts()
{
	if (!IsValid(Character))
	{
		return;
	}

	if (Character->GetNetMode() == NM_DedicatedServer)
	{
		return;
	}

	const float DeltaTime = GetWorld()->GetDeltaSeconds();
	if (!IsValidToEvaluate(DeltaTime))
	{
		return;
	}

	// ----------------------------------------------------------------------
	// Compute footsteps
	// ----------------------------------------------------------------------
	for (FMISurfaceImpact& Impact : SurfaceImpacts)
	{
		const bool bValidLOD = Impact.LODThreshold == INDEX_NONE || GetLODLevel() <= Impact.LODThreshold;
		const bool bValidRagdollState = !Impact.bRagdollOnly || bRagdoll;

		if (!Mesh->DoesSocketExist(Impact.Socket))
		{
			UE_LOG(LogTemp, Warning, TEXT("Socket { %s } does not exist on { %s }, can not play impact/footstep"), *Impact.Socket.ToString(), *GetNameSafe(Mesh->SkeletalMesh));
			continue;
		}

		if (!Mesh->DoesSocketExist(Impact.Bone.BoneName))
		{
			UE_LOG(LogTemp, Warning, TEXT("Bone { %s } does not exist on { %s }, can not play impact/footstep"), *Impact.Socket.ToString(), *GetNameSafe(Mesh->SkeletalMesh));
			continue;
		}

		if (bValidLOD && bValidRagdollState)
		{
			const FVector& NewVelocity = Mesh->GetPhysicsLinearVelocity(Impact.Bone.BoneName);
			const FVector& ImpactVelocity = Impact.PreviousVelocity;
			Impact.PreviousVelocity = NewVelocity;

			// On cooldown, no need to process further
			if (GetWorld()->GetTimerManager().IsTimerActive(Impact.CooldownTimerHandle))
			{
				continue;
			}

			const float FootSpeed = ImpactVelocity.Size();

			// Insignificant movement
			if (FootSpeed < Impact.MinVelocity)
			{
				return;
			}

			// Trace to the ground
			FHitResult Hit(ForceInit);
			const FVector TraceStart = Mesh->GetSocketLocation(Impact.Socket) + FVector::UpVector * Impact.TraceStartHeight;

			// Create an array of object types to trace
			TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjects;
			for (TEnumAsByte<ECollisionChannel> ObjChannel : Impact.ObjectsToTrace)
			{
				TraceObjects.Add(UEngineTypes::ConvertToObjectType(ObjChannel));
			}

			// Add 2.4f because UCharacterMovementComponent::MAX_FLOOR_DIST = 2.4f which
			// elevates mesh this far off ground
			const FVector TraceEnd = TraceStart - FVector(0.f, 0.f, Impact.TraceDistFromGround + 2.4f);

			if (
				UKismetSystemLibrary::LineTraceSingleForObjects(
					GetWorld(),
					TraceStart,
					TraceEnd,
					TraceObjects,
					true,
					TArray<AActor*>() = { Character },
#if WITH_EDITORONLY_DATA
					(Impact.bDebugDrawTrace ? EDrawDebugTrace::Persistent : EDrawDebugTrace::None),
#else
					EDrawDebugTrace::None,
#endif
					Hit,
					false
				))
			{
				// Must have left the ground before it can re-trigger
				if (!Impact.bWasHit)
				{
					// Triggered, start cooldown timer
					GetWorld()->GetTimerManager().SetTimer(Impact.CooldownTimerHandle, Impact.MinTriggerInterval, false);

					UMIPhysicalMaterial* PhysMat = Hit.PhysMaterial.IsValid() ? Cast<UMIPhysicalMaterial>(Hit.PhysMaterial.Get()) : nullptr;
					if (!PhysMat) { PhysMat = Character->DefaultPhysicalMaterial; }
					if (PhysMat)
					{
						// Play sound effect
						USoundBase* const SoundToPlay = PhysMat->BoneImpactSound;
						if (SoundToPlay)
						{
							const FRuntimeFloatCurve& VolumeCurve = PhysMat->BoneImpactVelocityToVolume;
							const FRuntimeFloatCurve& PitchCurve = PhysMat->BoneImpactVelocityToPitch;
							const float Volume = VolumeCurve.GetRichCurveConst()->Eval(FootSpeed);
							const float Pitch = PitchCurve.GetRichCurveConst()->Eval(FootSpeed);

							if (Volume > 0.f && Pitch > 0.f)
							{
								UGameplayStatics::PlaySoundAtLocation(this, SoundToPlay, Hit.ImpactPoint, Volume, Pitch);
							}
						}

						// Determine correct particle effect to play
						UParticleSystem* const ParticleToPlay = PhysMat != nullptr ? PhysMat->BoneImpactParticle : nullptr;
						UNiagaraSystem* const NiagaraToPlay = PhysMat != nullptr ? PhysMat->BoneImpactNiagara : nullptr;
						const bool bNiagara = PhysMat->ParticleSystemType == EMIParticleSystemType::MIPST_Niagara;

						// Play particle effect
						if ((bNiagara && NiagaraToPlay) || (!bNiagara && ParticleToPlay))
						{
							const FTransform ParticleTransform((-ImpactVelocity.GetSafeNormal()).Rotation(), Hit.ImpactPoint, FVector::OneVector);
							UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleToPlay, ParticleTransform, true, EPSCPoolMethod::AutoRelease);

							if (bNiagara)
							{
								UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NiagaraToPlay, ParticleTransform.GetLocation(), ParticleTransform.Rotator());
							}
							else
							{
								UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleToPlay, ParticleTransform, true, EPSCPoolMethod::AutoRelease);
							}
						}
					}
				}
			}

			Impact.bWasHit = Hit.bBlockingHit;
		}
	}
}

bool UMIAnimInstance::IsValidToEvaluate(float DeltaTime) const
{
	if (!Character || !Movement || !Mesh)
	{
		return false;
	}

	if (DeltaTime < 1e-6f)
	{
		return false;
	}

	if (!Character->IsRagdoll())
	{
		if (Movement->MovementMode == MOVE_None)
		{
			return false;
		}
	}

	return true;
}

void UMIAnimInstance::OnStartTurning()
{
	bBigStep = (TurnAngle >= BigStepTurnAngle);
}

bool UMIAnimInstance::IsTurnInPlaceEnabled_Implementation() const
{
	return true;
}
