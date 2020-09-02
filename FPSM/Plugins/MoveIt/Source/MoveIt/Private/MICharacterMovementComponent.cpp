// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.


#include "MICharacterMovementComponent.h"
#include "MICharacter.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/PlayerState.h"

UMICharacterMovementComponent::UMICharacterMovementComponent(const FObjectInitializer& OI)
	: Super(OI)
{
	NetworkSimulatedSmoothRotationTime = 0.01f;  // Required for turn in place to not jitter
	NetworkSmoothingMode = ENetworkSmoothingMode::Linear;  // Giving up on exponential, animation jitters

	SetMaxSprintDirectionInputAngle(50.f);
	SetMoveForwardAngle(100.f);

	InitCurve(UphillSpeedMultiplier, 0.8f, 0.9f, 0.35f, 1.f);
	InitCurve(DownhillSpeedMultiplier, 0.3f, 1.f, 0.8f, 1.3f);
	InitCurve(UphillAccelerationMultiplier, 0.8f, 0.4f, 0.2f, 1.f);
	InitCurve(DownhillAccelerationMultiplier, 0.3f, 1.f, 0.8f, 1.2f);
	InitCurve(UphillBrakingDecelerationMultiplier, 0.8f, 1.2f, 0.3f, 1.f);
	InitCurve(DownhillBrakingDecelerationMultiplier, 0.3f, 1.f, 0.8f, 0.1f);
	InitCurve(UphillGroundFrictionMultiplier, 0.8f, 1.3f, 0.35f, 1.f);
	InitCurve(DownhillGroundFrictionMultiplier, 0.35f, 1.f, 0.8f, 0.5f);

	MoveBackwardsSpeedMultiplier = 0.8f;
	MoveBackwardsCrouchSpeedMultiplier = 0.8f;
	TurningRadiusRate = 270.f;
	MinTurningRadiusSpeedPct = 0.5f;

	bWantsToSprint = false;

	MaxWalkSpeed = 400.f;
	MaxWalkSpeedCrouched = 280.f;
	MaxAcceleration = 512.f;
	BrakingDecelerationWalking = 512.f;
	GroundFriction = 12.f;
	bUseSeparateBrakingFriction = true;
	BrakingFriction = 2.5f;
	BrakingFrictionFactor = 1.f;

	MaxWalkSpeedSprinting = 550.f;
	MaxAccelerationSprinting = 1200.0f;
	BrakingDecelerationSprinting = 512.f;

	bCyclePivotChangesDirection = true;
	bCycleUseRotationRate = false;
	CycleRotationRate = 265.f;

	bForceWalkOffLedge = true;
	bForceWalkOntoLedge = true;
	ForceWalkOffLedgeImpulse = 200.f;
	ForceWalkOntoLedgeImpulse = 400.f;

	GravityScale = 2.f;
	JumpZVelocity = 750.f;
	AirControl = 0.2f;

	RotationRate.Yaw = 540.f;
	NavAgentProps.bCanCrouch = true;
	NavAgentProps.AgentRadius = 42.f;
	NavAgentProps.AgentHeight = 192.f;

	PivotType = EMIPivotType::PT_Velocity;
	PivotMinVelocityDifference = 0.8f;
	PivotMinInput = 0.8f;
	bPivotUseMaxSpeedMultiplier = true;
	PivotSpeedMultiplier = 0.5f;
	PivotMinSpeed = 200.f;
	PivotMinSpeedMaintainTime = 0.4f;
	PivotDuration = 0.6f;
	PivotDirectionLockTime = 0.3f;
	PivotSpeedMultiplier = 0.2f;
	PivotAccelerationMultiplier = 0.2f;
	PivotBrakingDecelerationMultiplier = 1.f;
	PivotAlpha = 0.f;

	FloorSlideConditions = EMIFloorSlide::FSR_SpeedThreshold;
	FloorSlideMinStartSpeed = MaxWalkSpeed * 1.1f;
	FloorSlideMinConditionDuration = 0.f;
	bFloorSlideCanStartFromAir = true;
	FloorSlideCooldownTime = 0.f;
	FloorSlideMinSpeed = 300.f;
	bFloorSlideCanContinueInAir = true;
	bCanWalkOffLedgesWhenFloorSliding = true;
	bCanWalkOffLedgesWhenCrouching = true;
	MaxWalkSpeedFloorSliding = 50.f;
	MaxAccelerationFloorSliding = 256.f;
	BrakingDecelerationFloorSliding = 128.f;
	GroundFrictionFloorSliding = 0.f;
	bFloorSlideGroundSpeedBoostOnlyFromSprint = true;
	FloorSlideGroundSpeedBoost = 100.f;
	FloorSlideAirSpeedBoost = 100.f;
	FloorSlideUphillAccelerationMultiplier = 1.f;
	FloorSlideDownhillAccelerationMultiplier = 5.f;
	FloorSlideUphillSpeedMultiplier = 1.f;
	FloorSlideDownhillSpeedMultiplier = 5.f;
	FloorSlideUphillBrakingDecelerationMultiplier = 1.f;
	FloorSlideDownhillBrakingDecelerationMultiplier = 0.2f;
	FloorSlideUphillFrictionMultiplier = 1.f;
	FloorSlideDownhillFrictionMultiplier = 1.f;

	AccelerationFrameCache = FAccelerationFrameCache();
	AngularVelocityCompute = FAngularVelocityCompute();
	TraversalFrameCache = FAccelerationFrameCache();

	LastNonZeroVelocity = FVector::ZeroVector;
}

void UMICharacterMovementComponent::InitCurve(FRuntimeFloatCurve& InCurve, float FirstKeyTime, float FirstKeyValue, float LastKeyTime, float LastKeyValue)
{
	const FKeyHandle& FirstKey = InCurve.GetRichCurve()->AddKey(FirstKeyTime, FirstKeyValue);
	const FKeyHandle& LastKey = InCurve.GetRichCurve()->AddKey(LastKeyTime, LastKeyValue);
	InCurve.GetRichCurve()->SetKeyInterpMode(FirstKey, RCIM_Cubic);
	InCurve.GetRichCurve()->SetKeyInterpMode(LastKey, RCIM_Cubic);
}

#if WITH_EDITOR
void UMICharacterMovementComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const UProperty* PropertyThatChanged = PropertyChangedEvent.MemberProperty;
	if (!PropertyThatChanged) { return; }

	// Properties
	if (PropertyThatChanged->GetFName() == GET_MEMBER_NAME_CHECKED(UMICharacterMovementComponent, MaxSprintDirectionInputAngle))
	{
		// Compute MaxSprintDirectionInputNormal from the Angle.
		SetMaxSprintDirectionInputAngle(MaxSprintDirectionInputAngle);
	}
	if (PropertyThatChanged->GetFName() == GET_MEMBER_NAME_CHECKED(UMICharacterMovementComponent, MoveForwardAngle))
	{
		// Compute MoveForwardNormal from the Angle.
		SetMoveForwardAngle(MoveForwardAngle);
	}
}
#endif // WITH_EDITOR

void UMICharacterMovementComponent::SetMaxSprintDirectionInputAngle(float InMaxSprintDirectionInputAngle)
{
	MaxSprintDirectionInputAngle = FMath::Clamp(InMaxSprintDirectionInputAngle, 0.f, 90.0f);
	MaxSprintDirectionInputNormal = FMath::Cos(FMath::DegreesToRadians(MaxSprintDirectionInputAngle));
}

void UMICharacterMovementComponent::SetMaxSprintDirectionInputNormal(float InMaxSprintDirectionInputNormal)
{
	MaxSprintDirectionInputNormal = FMath::Clamp(InMaxSprintDirectionInputNormal, 0.f, 1.f);
	MaxSprintDirectionInputAngle = FMath::RadiansToDegrees(FMath::Acos(MaxSprintDirectionInputNormal));
}

float UMICharacterMovementComponent::K2_GetMaxSprintDirectionInputAngle() const
{
	return GetMaxSprintDirectionInputAngle();
}

float UMICharacterMovementComponent::K2_GetMaxSprintDirectionInputNormal() const
{
	return GetMaxSprintDirectionInputNormal();
}

void UMICharacterMovementComponent::SetMoveForwardAngle(float InMoveForwardAngle)
{
	MoveForwardAngle = FMath::Clamp(InMoveForwardAngle, 0.f, 180.0f);
	MoveForwardNormal = FMath::Cos(FMath::DegreesToRadians(MoveForwardAngle));
}

void UMICharacterMovementComponent::SetMoveForwardNormal(float InMoveForwardNormal)
{
	MoveForwardNormal = FMath::Clamp(InMoveForwardNormal, 0.f, 1.f);
	MoveForwardAngle = FMath::RadiansToDegrees(FMath::Acos(MoveForwardNormal));
}

float UMICharacterMovementComponent::K2_GetMoveForwardAngle() const
{
	return GetMoveForwardAngle();
}

float UMICharacterMovementComponent::K2_GetMoveForwardNormal() const
{
	return GetMoveForwardNormal();
}

void UMICharacterMovementComponent::OnRegister()
{
	Super::OnRegister();

#if WITH_EDITOR
	SetMaxSprintDirectionInputAngle(MaxSprintDirectionInputAngle);
#endif  // WITH_EDITOR
}

void UMICharacterMovementComponent::PostLoad()
{
	Super::PostLoad();

	MICharacterOwner = Cast<AMICharacter>(PawnOwner);
}

void UMICharacterMovementComponent::SetUpdatedComponent(USceneComponent* NewUpdatedComponent)
{
	Super::SetUpdatedComponent(NewUpdatedComponent);

	if (NewUpdatedComponent && !bMovementInProgress)
	{
		MICharacterOwner = Cast<AMICharacter>(PawnOwner);
	}
}

void UMICharacterMovementComponent::SetMovementMode(EMovementMode NewMovementMode, uint8 NewCustomMode /* = 0 */)
{
	if (MovementMode == MOVE_None && NewMovementMode != MOVE_None)
	{
		if (ensureAlwaysMsgf(IsValid(CharacterOwner) && IsValid(CharacterOwner->GetMesh()), TEXT("Invalid Character or Mesh when setting movement mode for { %s }"), *GetNameSafe(CharacterOwner)))
		{
			// When initializing movement, clear angular velocity
			AngularVelocityCompute.LastTransform = CharacterOwner->GetMesh()->GetComponentTransform();
			AngularVelocityCompute.UpdateAngularVelocity(CharacterOwner->GetMesh()->GetComponentTransform(), 1.f);
		}
	}

	Super::SetMovementMode(NewMovementMode, NewCustomMode);
}

bool UMICharacterMovementComponent::HasValidData() const
{
	return Super::HasValidData() && IsValid(MICharacterOwner);
}

FVector UMICharacterMovementComponent::ConsumeInputVector()
{
	if (MICharacterOwner)
	{
		MICharacterOwner->HandleConsumeInputVector();
	}
	return Super::ConsumeInputVector();
}

float UMICharacterMovementComponent::GetMaxAnimSpeed() const
{
	if (MICharacterOwner && (MICharacterOwner->IsRagdoll() || MICharacterOwner->IsRagdollStandingUp()))
	{
		return 0.f;
	}

	const float Multiplier = IsMovingBackwards() ? GetMoveBackwardsSpeedMultiplier() : 1.f;

	if (IsSprintingInternal())
	{
		return MaxWalkSpeedSprinting * Multiplier;
	}

	if (IsFloorSliding())
	{
		return MaxWalkSpeedFloorSliding * Multiplier;
	}

	return Super::GetMaxSpeed() * Multiplier;
}

float UMICharacterMovementComponent::GetMaxSpeed() const
{
	if (MICharacterOwner && (MICharacterOwner->IsRagdoll() || MICharacterOwner->IsRagdollStandingUp()))
	{
		return 0.f;
	}

	float Uphill = GetUphillCurveMultiplier(UphillSpeedMultiplier);
	if (IsFloorSliding()) { Uphill = FMath::Pow(Uphill, FloorSlideUphillSpeedMultiplier); }

	float Downhill = GetDownhillCurveMultiplier(DownhillSpeedMultiplier);
	if (IsFloorSliding()) { Downhill = FMath::Pow(Downhill, FloorSlideDownhillSpeedMultiplier); }

	const float HillMultiplier = IsMovingOnGround() ? Uphill * Downhill : 1.f;
	const float BackwardsMultiplier = IsMovingBackwards() ? GetMoveBackwardsSpeedMultiplier() : 1.f;
	const float PivotMultiplier = FMath::Lerp(1.f, PivotSpeedMultiplier, PivotAlpha);

	const float Multiplier = HillMultiplier * BackwardsMultiplier * PivotMultiplier;

	if (IsSprintingInternal())
	{
		return MaxWalkSpeedSprinting * Multiplier;
	}

	if (IsFloorSliding())
	{
		return MaxWalkSpeedFloorSliding * Multiplier;
	}

	return Super::GetMaxSpeed() * Multiplier;
}

float UMICharacterMovementComponent::GetMaxAcceleration() const
{
	float Uphill = GetUphillCurveMultiplier(UphillAccelerationMultiplier);
	if (IsFloorSliding()) { Uphill = FMath::Pow(Uphill, FloorSlideUphillAccelerationMultiplier); }

	float Downhill = GetDownhillCurveMultiplier(DownhillAccelerationMultiplier);
	if (IsFloorSliding()) { Downhill = FMath::Pow(Downhill, FloorSlideDownhillAccelerationMultiplier); }

	const float HillMultiplier = IsMovingOnGround() ? Uphill * Downhill : 1.f;
	const float PivotMultiplier = FMath::Lerp(1.f, PivotAccelerationMultiplier, PivotAlpha);

	const float Multiplier = HillMultiplier * PivotMultiplier;

	if (IsSprintingInternal())
	{
		return MaxAccelerationSprinting * Multiplier;
	}

	if (IsFloorSliding())
	{
		return MaxAccelerationFloorSliding * Multiplier;
	}

	return Super::GetMaxAcceleration() * Multiplier;
}

float UMICharacterMovementComponent::GetMaxBrakingDeceleration() const
{
	float Uphill = GetUphillCurveMultiplier(UphillBrakingDecelerationMultiplier);
	if (IsFloorSliding()) { Uphill = FMath::Pow(Uphill, FloorSlideUphillBrakingDecelerationMultiplier); }

	float Downhill = GetDownhillCurveMultiplier(DownhillBrakingDecelerationMultiplier);
	if (IsFloorSliding()) { Downhill = FMath::Pow(Downhill, FloorSlideDownhillBrakingDecelerationMultiplier); }

	const float HillMultiplier = IsMovingOnGround() ? Uphill * Downhill : 1.f;
	const float PivotMultiplier = FMath::Lerp(1.f, PivotBrakingDecelerationMultiplier, PivotAlpha);

	const float Multiplier = HillMultiplier * PivotMultiplier;

	if (IsFloorSliding())
	{
		return BrakingDecelerationFloorSliding * Multiplier;
	}

	if (Velocity.Size2D() >= Super::GetMaxSpeed() && !IsCrouching() && !IsSwimming() && !IsFlying() && !IsFalling())
	{
		return BrakingDecelerationSprinting * Multiplier;
	}

	return Super::GetMaxBrakingDeceleration() * Multiplier;
}

void UMICharacterMovementComponent::ModifyFriction(float& Friction) const
{
	float Uphill = GetUphillCurveMultiplier(UphillGroundFrictionMultiplier);
	if (IsFloorSliding()) { Uphill = FMath::Pow(Uphill, FloorSlideUphillFrictionMultiplier); }

	float Downhill = GetDownhillCurveMultiplier(DownhillGroundFrictionMultiplier);
	if (IsFloorSliding()) { Downhill = FMath::Pow(Downhill, FloorSlideDownhillFrictionMultiplier); }

	const float HillMultiplier = IsMovingOnGround() ? Uphill * Downhill : 1.f;

	Friction *= HillMultiplier;
}

void UMICharacterMovementComponent::CheckMovementInput(float DeltaTime)
{
	if (!HasValidData() || DeltaTime < MIN_TICK_TIME)
	{
		return;
	}

	// Sprinting
	{
		const bool bWasSprinting = MICharacterOwner->bIsSprinting;

		// Stop sprinting if player crouched
		if (bWasSprinting && IsCrouching())
		{
			MICharacterOwner->bIsSprinting = false;
		}

		// Start sprinting
		if (bWantsToSprint && !bWasSprinting)
		{
			MICharacterOwner->bIsSprinting = true;
		}
		// Stop sprinting
		else if (!bWantsToSprint && bWasSprinting)
		{
			MICharacterOwner->bIsSprinting = false;
		}
		// Requirements not met
		if (MICharacterOwner->bIsSprinting && !MICharacterOwner->CanSprint())
		{
			MICharacterOwner->bIsSprinting = false;
		}

		// Event sprinting has started
		if (!bWasSprinting && MICharacterOwner->bIsSprinting)
		{
			MICharacterOwner->OnStartSprint();
		}
		else if (bWasSprinting && !MICharacterOwner->bIsSprinting)
		{
			MICharacterOwner->OnStopSprint();
		}
	}

	// Floor sliding
	{
		if (IsFloorSliding() && !MICharacterOwner->CanContinueFloorSlide())
		{
			StopFloorSlide(false);
		}
	}
}

void UMICharacterMovementComponent::PerformMovement(float DeltaTime)
{
	//const bool bPivotEnd = HandlePivot(DeltaTime);
	//HandleCycleAcceleration(DeltaTime, bPivotEnd);

	Super::PerformMovement(DeltaTime);

	AngularVelocityCompute.UpdateAngularVelocity(CharacterOwner->GetMesh()->GetComponentTransform(), DeltaTime);

	if (CurrentFloor.bBlockingHit && CurrentFloor.IsWalkableFloor()) { LastWalkableFloor = CurrentFloor; }
}

void UMICharacterMovementComponent::SimulateMovement(float DeltaTime)
{
	Super::SimulateMovement(DeltaTime);
	HandlePivot(DeltaTime);

	AngularVelocityCompute.UpdateAngularVelocity(CharacterOwner->GetMesh()->GetComponentTransform(), DeltaTime);

	if (CurrentFloor.bBlockingHit && CurrentFloor.IsWalkableFloor()) { LastWalkableFloor = CurrentFloor; }
}

void UMICharacterMovementComponent::HandleCycleAcceleration(float DeltaTime, bool bPivotEnd)
{
	const bool bCanPivot = bCyclePivotChangesDirection && bPivot;
	if (MICharacterOwner->ShouldCycleMovement() || ShouldCycleOrientToView())
	{
		if (IsMovingOnGround())
		{
			// If speed is too low then cycling is bypassed, allowing us to start moving without 
			// the change in orientation and delay
			const bool bLowSpeed = FMath::IsNearlyZero(Velocity.Size2D()) && !Acceleration.IsNearlyZero();

			// CycleEndDirection is only ever zero if it hasn't been initialized, this should never be true twice
			if (bCycle || CycleEndDirection.IsZero())
			{
				// Speed is low, so disable cycling and cache CycleEndDirection (used to check against to re-enable cycling)
				if (bLowSpeed)
				{
					bCycle = false;
					CycleEndDirection = Acceleration.GetSafeNormal();
				}
			}

			// Compare the disparity between the end direction and current direction to see if cycling needs 
			// to be turned back on
			// The purpose of this is to disable it at low speeds to allow moving normally from idle, then once the
			// player changes direction (and can now possibly cycle their movement) it needs to be re-enabled
			const float DotCycle = (CycleEndDirection.GetSafeNormal2D() | Acceleration.GetSafeNormal2D());
			if (!bCycle && !bCanPivot && Velocity.Size2D() >= 200.f)
			{
				if (DotCycle < .5f)
				{
					bCycle = true;
				}
			}

			if (bCanPivot || bPivotEnd)
			{
				bCycle = false;
				CycleEndDirection = Acceleration.GetSafeNormal();
			}

			if (bCycle)
			{
				Acceleration = GetCycleAcceleration(DeltaTime);
			}
		}
		else
		{
			bCycle = false;
			CycleEndDirection = Acceleration.GetSafeNormal();
		}
	}
}

bool UMICharacterMovementComponent::HandlePivot(float DeltaTime)
{
	const float MultipliedSpeed = FMath::Max(50.f, GetMaxSpeed() * PivotSpeedMultiplier);  // Don't allow it to go below 50
	const float MinPivotSpeed = (bPivotUseMaxSpeedMultiplier) ? MultipliedSpeed : PivotMinSpeed;
	if (Velocity.Size2D() >= MinPivotSpeed)
	{
		PivotMinSpeedTime += DeltaTime;
	}
	else
	{
		PivotMinSpeedTime = 0.f;
	}

	if (MICharacterOwner->GetLocalRole() > ROLE_SimulatedProxy)
	{
		// Do a moving turn if direction changed suddenly (this is what happens at the extent of a shuttle run, for example
		if (PivotType != EMIPivotType::PT_Disabled && !bPivot && IsMovingOnGround() && !Acceleration.IsNearlyZero() && LastUpdateVelocity.Size2D() >= MinPivotSpeed && PivotMinSpeedTime >= PivotMinSpeedMaintainTime && !IsPivotOnCooldown())
		{
			if (PivotType == EMIPivotType::PT_Velocity)
			{
				const float VelocityDiff = (LastUpdateVelocity.GetSafeNormal2D() | Acceleration.GetSafeNormal2D());
				bPivot = VelocityDiff < -PivotMinVelocityDifference;
			}
			else
			{
				const float InputDiff = (LastNonZeroAcceleration.GetSafeNormal2D() | Acceleration.GetSafeNormal2D());
				bPivot = InputDiff < -PivotMinInput;
			}

			if (bPivot)
			{
				OnPivotStart();
			}
		}
	}

	bool bPivotEnd = false;
	if (PivotAlpha > 0.f)
	{
		PivotAlpha = FMath::FInterpConstantTo(PivotAlpha, 0.f, DeltaTime, 1.f / PivotDuration);
		if (PivotAlpha == 0.f)
		{
			bPivotEnd = true;

			if (MICharacterOwner->GetLocalRole() > ROLE_SimulatedProxy)
			{
				OnPivotStop();
			}
		}
	}
	else
	{
		bPivot = false;
	}

	if (!Acceleration.IsZero()) { LastNonZeroAcceleration = Acceleration; }

	return bPivotEnd;
}

bool UMICharacterMovementComponent::IsPivotOnCooldown() const
{
	return GetWorld()->GetTimerManager().IsTimerActive(PivotCooldownTimerHandle);
}

void UMICharacterMovementComponent::OnPivotStart()
{
	PivotAlpha = 1.f;
	bPivotAnimTrigger = true;

	if (PivotBonusAccelerationOnStart != 0.f)
	{
		if (Velocity.Size2D() < PivotBonusAccelerationOnStart)
		{
			Velocity = Acceleration.GetSafeNormal() * PivotBonusAccelerationOnStart;
		}
	}

	if (!Velocity.IsNearlyZero())
	{
		PivotMovementDirection = Velocity.GetSafeNormal2D();
	}
	else
	{
		PivotMovementDirection = UpdatedComponent->GetForwardVector();
	}

	GetWorld()->GetTimerManager().SetTimer(PivotLockTimerHandle, PivotDirectionLockTime, false);

	if (MICharacterOwner->GetLocalRole() == ROLE_Authority)
	{
		MICharacterOwner->bSimulatedPivot = true;
	}

	if (MICharacterOwner)
	{
		MICharacterOwner->OnPivot();
	}
}

void UMICharacterMovementComponent::OnPivotStop()
{
	PivotMinSpeedTime = 0.f;

	if (PivotBonusAccelerationOnEnd != 0.f)
	{
		if (IsMovingOnGround() && Velocity.Size2D() < PivotBonusAccelerationOnEnd)
		{
			Velocity = Acceleration.GetSafeNormal() * PivotBonusAccelerationOnEnd;
		}
	}

	if (MICharacterOwner->GetLocalRole() == ROLE_Authority)
	{
		MICharacterOwner->bSimulatedPivot = false;
	}

	if (PivotCooldownTime != 0.f)
	{
		GetWorld()->GetTimerManager().SetTimer(PivotCooldownTimerHandle, PivotCooldownTime, false);
	}
}

FRotator UMICharacterMovementComponent::ComputeOrientToMovementRotation(const FRotator& CurrentRotation, float DeltaTime, FRotator& DeltaRotation) const
{
	if (GetWorld()->GetTimerManager().IsTimerActive(PivotLockTimerHandle) && IsMovingOnGround())
	{
		return PivotMovementDirection.Rotation();
	}

	return Super::ComputeOrientToMovementRotation(CurrentRotation, DeltaTime, DeltaRotation);
}

float UMICharacterMovementComponent::GetHillCurveMultiplier(const FRuntimeFloatCurve& NormalCurve, const bool bUphill) const
{
	const float Dot = (Velocity.GetSafeNormal() | CurrentFloor.HitResult.Normal);
	const bool bMovingUphill = (Dot < 0.f);
	const bool bValidUphill = (bUphill && bMovingUphill);
	const bool bValidDownhill = (!bUphill && !bMovingUphill);
	if (bValidUphill || bValidDownhill)
	{
		return NormalCurve.GetRichCurveConst()->Eval(FMath::Abs(Dot));
	}
	return 1.f;
}

void UMICharacterMovementComponent::CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration)
{
	if (IsFloorSliding())
	{
		Friction = GroundFrictionFloorSliding;
	}

	ModifyFriction(Friction);

	const bool bPivotEnd = HandlePivot(DeltaTime);
	if (CharacterOwner->GetLocalRole() > ROLE_SimulatedProxy)
	{
		HandleCycleAcceleration(DeltaTime, bPivotEnd);
	}

	Super::CalcVelocity(DeltaTime, Friction, bFluid, BrakingDeceleration);

	if (DeltaTime > MIN_TICK_TIME)
	{
		// Used to update Velocity.Z as it gets zeroed before CalcVelocity, however it is a frame behind
		const FVector RealVelocityZ = (UpdatedComponent->GetComponentLocation() - LastCalcVelocityPosition) / DeltaTime;
		LastCalcVelocityPosition = UpdatedComponent->GetComponentLocation();

		const FVector RealVelocity = FVector(Velocity.X, Velocity.Y, RealVelocityZ.Z);

		AccelerationFrameCache.Add(RealVelocity, DeltaTime);
		AccelerationDelta = AccelerationFrameCache.GetAcceleration();

		TraversalFrameCache.Add(UpdatedComponent->GetComponentLocation(), DeltaTime);

//#if WITH_EDITOR
//		if (GEngine && MICharacterOwner->bDebugDrawImpactVelocity && AccelerationFrameCache.GetImpactVelocity().Size() >= MICharacterOwner->DebugDrawImpactVelocityThreshold)
//		{
//			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Emerald, FString::Printf(TEXT("Impact Rate: %f"), AccelerationDelta.Size()));
//		}
//#endif  // WITH_EDITOR
	}

	// Stopped moving, if not on solid ground, walk onto/off the surface
	if ((bForceWalkOntoLedge || bForceWalkOffLedge) && IsMovingOnGround() && Velocity.IsNearlyZero() && Acceleration.IsNearlyZero())
	{
		if (LastNonZeroVelocity.IsZero() || !CurrentFloor.IsWalkableFloor())
		{
			return;
		}

		const float HalfHeight = CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
		const float Radius = CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleRadius();

		// Check if on solid ground
		FHitResult Hit(ForceInit);
		UKismetSystemLibrary::SphereTraceSingle(
			CharacterOwner,
			UpdatedComponent->GetComponentLocation(), 
			UpdatedComponent->GetComponentLocation() - FVector(0.f, 0.f, HalfHeight),
			Radius / 3.f,
			UEngineTypes::ConvertToTraceType(ECC_Visibility),
			false,
			TArray<AActor*>() = { CharacterOwner },
			EDrawDebugTrace::None,
			Hit, 
			false
		);

		if (!Hit.bBlockingHit)
		{
			// Compute a correction vector to move us in the right direction
			const FVector CapsulePoint = CurrentFloor.HitResult.ImpactPoint;
			const FVector CapsuleBase = UpdatedComponent->GetComponentLocation() - FVector(0.f, 0.f, HalfHeight);

			FVector CorrectionVector = UKismetMathLibrary::FindLookAtRotation(CapsuleBase, CapsulePoint).Vector();

			const float CapsuleDot = (CorrectionVector | LastNonZeroVelocity.GetSafeNormal2D());
			const bool bWalkOff = CapsuleDot < 0.f;
			if (bWalkOff)
			{
				CorrectionVector *= -1.f;
			}

			// Only proceed if setting enabled
			const bool bWalkEnabled = (bWalkOff && bForceWalkOffLedge) || (!bWalkOff && bForceWalkOntoLedge);
			if (bWalkEnabled)
			{
				// See if we can move to where it will push us
				const FVector CurrentLocation = UpdatedComponent->GetComponentLocation();
				const float Impulse = Radius;
				const FVector TargetImpulse = CorrectionVector * Impulse;

				const float WallDetectionRadiusMultiplier = (bWalkOff) ? 3.f : 1.5f;

				// Make sure there is no wall in our way of stepping off
				FHitResult WallHit(ForceInit);
				const FVector TraceStart = UpdatedComponent->GetComponentLocation() + FVector(0.f, 0.f, 10.f);
				const FVector TraceEnd = TraceStart + CorrectionVector * Radius * WallDetectionRadiusMultiplier;
				UKismetSystemLibrary::CapsuleTraceSingle(
					CharacterOwner,
					TraceStart,
					TraceEnd,
					Radius,
					HalfHeight,
					UEngineTypes::ConvertToTraceType(ECC_Visibility),
					false, TArray<AActor*>() = { CharacterOwner },
					EDrawDebugTrace::None,
					Hit,
					false,
					FLinearColor::Red,
					FLinearColor::Green,
					3.f
				);

				if (!WallHit.bBlockingHit)
				{
					if (bWalkOff)
					{
						CorrectionVector.Z *= -1.f;
						Velocity = CorrectionVector * ForceWalkOffLedgeImpulse;
					}
					else
					{
						FHitResult MoveHit(ForceInit);
						Velocity = ComputeGroundMovementDelta(CorrectionVector * ForceWalkOntoLedgeImpulse, MoveHit, CurrentFloor.bLineTrace);
					}
				}
			}
		}
	}

	if (!Velocity.IsNearlyZero())
	{
		LastNonZeroVelocity = Velocity;
	}
}

void UMICharacterMovementComponent::ApplyVelocityBraking(float DeltaTime, float Friction, float BrakingDeceleration)
{
	if (IsFloorSliding())
	{
		Friction = GroundFrictionFloorSliding;
		ModifyFriction(Friction);
	}
	else if (bUseSeparateBrakingFriction)
	{
		ModifyFriction(Friction);
	}

	Super::ApplyVelocityBraking(DeltaTime, Friction, BrakingDeceleration);
}

FVector UMICharacterMovementComponent::GetCycleAcceleration(float DeltaTime, float CycleRate /* = -1.f */) const
{
	if (MICharacterOwner->MovementSystem == EMIMovementSystem::MS_OrientToView)
	{
		if (TurningRadiusRate > 0.f)
		{
			CycleRate = TurningRadiusRate * 10.f;
		}
		else
		{
			CycleRate = 0.f;
		}
	}
	else if (CycleRate == -1.f)
	{
		CycleRate = (bCycleUseRotationRate) ? RotationRate.Yaw : CycleRotationRate;
	}

	if (CycleRate > 0.f && MICharacterOwner)
	{
		const bool bOrientView = (MICharacterOwner->MovementSystem == EMIMovementSystem::MS_OrientToView);
		const FVector Direction = (bOrientView) ? Velocity.GetSafeNormal() : UpdatedComponent->GetForwardVector();
		const FRotator Rotation = (bOrientView) ? Direction.Rotation() : UpdatedComponent->GetComponentRotation();

		const float AccelDiff = FMath::RadiansToDegrees(FMath::Acos(Direction | Acceleration.GetSafeNormal()));
		const float CycleDelta = (CycleRate * DeltaTime) / AccelDiff;
		const float ClampedCycleDelta = FMath::Clamp(CycleDelta, -1.f, 1.f);
		const FRotator CycleRotation = UKismetMathLibrary::RLerp(Rotation, Acceleration.Rotation(), ClampedCycleDelta, true);
		return CycleRotation.Vector() * Acceleration.Size();
	}

	return Acceleration;
}

bool UMICharacterMovementComponent::ShouldCycleOrientToView() const
{
	return MICharacterOwner && MICharacterOwner->MovementSystem == EMIMovementSystem::MS_OrientToView && Velocity.Size2D() >= (MinTurningRadiusSpeedPct * GetMaxSpeed());
}

void UMICharacterMovementComponent::HandleImpact(const FHitResult& Hit, float TimeSlice/* =0.f */, const FVector& MoveDelta /* = FVector::ZeroVector */)
{
	Super::HandleImpact(Hit, TimeSlice, MoveDelta);

	AMICharacter* const OtherCharacter = (Hit.GetActor() != nullptr) ? Cast<AMICharacter>(Hit.GetActor()) : nullptr;
	if (OtherCharacter)
	{
		const FVector& LastVelocity = GetLastUpdateVelocity();
		//const FVector& HitNormal = (MICharacterOwner->GetActorLocation() - OtherCharacter->GetActorLocation()).GetSafeNormal();

		MICharacterOwner->HandleImpactCharacter(OtherCharacter, Hit.Normal, LastVelocity, true);
		OtherCharacter->HandleImpactCharacter(MICharacterOwner, -Hit.Normal, LastVelocity, false);
	}
}

void UMICharacterMovementComponent::ProcessLanded(const FHitResult& Hit, float remainingTime, int32 Iterations)
{
	CycleEndDirection = Acceleration.GetSafeNormal();

	Super::ProcessLanded(Hit, remainingTime, Iterations);
}

bool UMICharacterMovementComponent::CanWalkOffLedges() const
{
	if (IsFloorSliding())
	{
		return bCanWalkOffLedgesWhenFloorSliding;
	}

	return Super::CanWalkOffLedges();
}

void UMICharacterMovementComponent::Crouch(bool bClientSimulation /* = false */)
{
	Super::Crouch(bClientSimulation);

	if (!bClientSimulation && !IsFloorSliding())
	{
		if (MICharacterOwner && MICharacterOwner->CanStartFloorSlide())
		{
			StartFloorSlide(bClientSimulation);
		}
	}
}

void UMICharacterMovementComponent::UnCrouch(bool bClientSimulation /* = false */)
{
	Super::UnCrouch(bClientSimulation);

	if (!bClientSimulation && IsFloorSliding())
	{
		StopFloorSlide(bClientSimulation);
	}
}

void UMICharacterMovementComponent::StartFloorSlide(bool bClientSimulation)
{
	if (!bClientSimulation)
	{
		if (!bFloorSlideGroundSpeedBoostOnlyFromSprint || IsSprintingInternal() || IsFalling())
		{
			const float& FloorSlideSpeedBoost = IsMovingOnGround() ? FloorSlideGroundSpeedBoost : FloorSlideAirSpeedBoost;
			if (FloorSlideSpeedBoost != 0.f)
			{
				Velocity += Velocity.GetSafeNormal2D() * FloorSlideSpeedBoost;
			}
		}

		if (IsSprinting())
		{
			MICharacterOwner->bIsSprinting = false;
		}

		MICharacterOwner->bIsFloorSliding = true;
		MICharacterOwner->OnStartFloorSlide();
	}
}

void UMICharacterMovementComponent::StopFloorSlide(bool bClientSimulation)
{
	if (!bClientSimulation)
	{
		MICharacterOwner->bIsFloorSliding = false;
		MICharacterOwner->OnStopFloorSlide();
	}
}

bool UMICharacterMovementComponent::IsSprinting() const
{
	return MICharacterOwner != nullptr && MICharacterOwner->bIsSprinting;
}

bool UMICharacterMovementComponent::IsFloorSliding() const
{
	return MICharacterOwner != nullptr && MICharacterOwner->bIsFloorSliding;
}

bool UMICharacterMovementComponent::IsSprintingInternal() const
{
	return MICharacterOwner && MICharacterOwner->bIsSprinting && Velocity.Size2D() >= (Super::GetMaxSpeed() * 0.8f);
}

void UMICharacterMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Update the CurrentServerMoveTime used for predicted randomization
	// Only update when local player, running physics without controller, or playing root motion without controller
	if (CharacterOwner->IsLocallyControlled() || bRunPhysicsWithNoController || (!CharacterOwner->Controller && CharacterOwner->IsPlayingRootMotion()))
	{
		FNetworkPredictionData_Client_Character* const ClientData = ((CharacterOwner->GetLocalRole() < ROLE_Authority) && (GetNetMode() == NM_Client)) ? GetPredictionData_Client_Character() : nullptr;
		if (ClientData)
		{
			CurrentServerMoveTime = ClientData->CurrentTimeStamp;
		}
		else
		{
			// Standalone support
			CurrentServerMoveTime = GetWorld()->GetTimeSeconds();
		}
	}
}

void UMICharacterMovementComponent::MoveAutonomous(float ClientTimeStamp, float DeltaTime, uint8 CompressedFlags, const FVector& NewAccel)
{
	// This only occurs on authority
	CurrentServerMoveTime = ClientTimeStamp;

	Super::MoveAutonomous(ClientTimeStamp, DeltaTime, CompressedFlags, NewAccel);
}

void UMICharacterMovementComponent::CallServerMove(const class FSavedMove_Character* NewMove, const class FSavedMove_Character* OldMove)
{
	FNetworkPredictionData_Client_Character* const ClientData = ((CharacterOwner->GetLocalRole() < ROLE_Authority) && (GetNetMode() == NM_Client)) ? GetPredictionData_Client_Character() : nullptr;
	LastSentTimeStamp = ClientData->CurrentTimeStamp;

	Super::CallServerMove(NewMove, OldMove);
}

float UMICharacterMovementComponent::GetCurrentSyncTime() const
{
	if (!HasValidData())
	{
		return -1.f;
	}

	if (CharacterOwner->GetLocalRole() < ROLE_Authority)
	{
		if (FNetworkPredictionData_Client_Character* const ClientData = GetPredictionData_Client_Character())
		{
			return LastSentTimeStamp;
		}
	}

	return GetCurrentMovementTime();
}

void UMICharacterMovementComponent::SyncRandomSeed(FRandomStream& Stream)
{
	if (PawnOwner && PawnOwner->GetController() && PawnOwner->GetController()->IsA(APlayerController::StaticClass()))
	{
		Stream.Initialize(10000.f * GetCurrentSyncTime());
	}
}

float UMICharacterMovementComponent::GetPlayerPing() const
{
	if (HasValidData() && PawnOwner->GetPlayerState())
	{
		return PawnOwner->GetPlayerState()->ExactPingV2;
	}
	return -1.f;
}

float UMICharacterMovementComponent::GetCurrentMovementTime() const
{
	return ((CharacterOwner->GetLocalRole() == ROLE_AutonomousProxy) || (GetNetMode() == NM_DedicatedServer) || ((GetNetMode() == NM_ListenServer) && !CharacterOwner->IsLocallyControlled()))
		? CurrentServerMoveTime
		: CharacterOwner->GetWorld()->GetTimeSeconds();
}

void UMICharacterMovementComponent::UpdateFromCompressedFlags(uint8 Flags)
{
	if (!CharacterOwner)
	{
		return;
	}

	Super::UpdateFromCompressedFlags(Flags);

	bWantsToSprint = ((Flags & FSavedMove_Character::FLAG_Custom_0) != 0);
}

class FNetworkPredictionData_Client* UMICharacterMovementComponent::GetPredictionData_Client() const
{
	// Should only be called on client or listen server (for remote clients) in network games

	checkSlow(CharacterOwner != NULL);
	checkSlow(CharacterOwner->GetLocalRole() < ROLE_Authority || (CharacterOwner->GetRemoteRole() == ROLE_AutonomousProxy && GetNetMode() == NM_ListenServer));
	checkSlow(GetNetMode() == NM_Client || GetNetMode() == NM_ListenServer);

	if (!ClientPredictionData)
	{
		UMICharacterMovementComponent* MutableThis = const_cast<UMICharacterMovementComponent*>(this);
		MutableThis->ClientPredictionData = new FNetworkPredictionData_Client_Character_MoveIt(*this);
	}

	return ClientPredictionData;
}

uint8 FSavedMove_Character_MoveIt::GetCompressedFlags() const
{
	uint8 Flags = Super::GetCompressedFlags();

	if (bWantsToSprint)
	{
		Flags |= FLAG_Custom_0;
	}

	return Flags;
}

bool FSavedMove_Character_MoveIt::CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* InCharacter, float MaxDelta) const
{
	const TSharedPtr<FSavedMove_Character_MoveIt>& MINewMove = StaticCastSharedPtr<FSavedMove_Character_MoveIt>(NewMove);

	if (bWantsToSprint != MINewMove->bWantsToSprint)
	{
		return false;
	}

	if (bPivot != MINewMove->bPivot)
	{
		return false;
	}

	if (!FMath::IsNearlyEqual(PivotAlpha, MINewMove->PivotAlpha))
	{
		return false;
	}

	return Super::CanCombineWith(NewMove, InCharacter, MaxDelta);
}

void FSavedMove_Character_MoveIt::Clear()
{
	Super::Clear();

	bWantsToSprint = false;
	bPivot = false;
	PivotAlpha = 0.f;
}

void FSavedMove_Character_MoveIt::SetMoveFor(ACharacter* C, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character& ClientData)
{
	Super::SetMoveFor(C, InDeltaTime, NewAccel, ClientData);

	if (UMICharacterMovementComponent* const Movement = Cast<UMICharacterMovementComponent>(C->GetCharacterMovement()))
	{
		bWantsToSprint = Movement->bWantsToSprint;
		bPivot = Movement->bPivot;
		PivotAlpha = Movement->PivotAlpha;
	}
}

void FSavedMove_Character_MoveIt::PrepMoveFor(ACharacter* C)
{
	Super::PrepMoveFor(C);

	if (UMICharacterMovementComponent* const Movement = Cast<UMICharacterMovementComponent>(C->GetCharacterMovement()))
	{
		Movement->bPivot = bPivot;
		Movement->PivotAlpha = PivotAlpha;
	}
}

bool FSavedMove_Character_MoveIt::IsImportantMove(const FSavedMovePtr& LastAckedMove) const
{
	const TSharedPtr<FSavedMove_Character_MoveIt>& MILastAckedMove = StaticCastSharedPtr<FSavedMove_Character_MoveIt>(LastAckedMove);

	// Always important if a flag changed
	if (bWantsToSprint != MILastAckedMove->bWantsToSprint)
	{
		return true;
	}

	if (bPivot != MILastAckedMove->bPivot)
	{
		return true;
	}

	if (!FMath::IsNearlyEqual(PivotAlpha, MILastAckedMove->PivotAlpha))
	{
		return true;
	}

	return Super::IsImportantMove(LastAckedMove);
}

FSavedMovePtr FNetworkPredictionData_Client_Character_MoveIt::AllocateNewMove()
{
	return FSavedMovePtr(new FSavedMove_Character_MoveIt());
}
