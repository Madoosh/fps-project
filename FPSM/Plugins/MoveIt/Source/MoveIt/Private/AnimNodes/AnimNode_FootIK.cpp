// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#include "AnimNodes/AnimNode_FootIK.h"
#include "Animation/AnimInstanceProxy.h"
#include "Animation/BlendProfile.h"
#include "Components/SkeletalMeshComponent.h"
#include "MICharacter.h"
#include "MICharacterMovementComponent.h"
#include "AnimNodes/AnimNodes_Shared.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/CapsuleComponent.h"
#include "MIAnimInstance.h"
#include "MIAnimInstanceProxy.h"


void FAnimNode_FootIK::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	Super::Initialize_AnyThread(Context);

	Feet.Reset();
	for (FMIFootIK_Foot& Foot : LeftFeet)
	{
		Foot.bIsLeftFoot = true;
		Feet.Add(Foot);
	}
	for (FMIFootIK_Foot& Foot : RightFeet)
	{
		Feet.Add(Foot);
	}

	bValidProxy = Context.AnimInstanceProxy->GetAnimInstanceObject()->IsA(UMIAnimInstance::StaticClass());
}

void FAnimNode_FootIK::UpdateInternal(const FAnimationUpdateContext& Context)
{
	Super::UpdateInternal(Context);

	DeltaTime = Context.GetDeltaTime();
}

void FAnimNode_FootIK::PreUpdate(const UAnimInstance* InAnimInstance)
{
	// Copied line for line from FAnimNode_SpringBone::PreUpdate

	const USkeletalMeshComponent* SkelComp = InAnimInstance->GetSkelMeshComponent();
	const UWorld* World = SkelComp->GetWorld();
	check(World->GetWorldSettings());

	AActor* SkelOwner = SkelComp->GetOwner();
	if (SkelComp->GetAttachParent() != NULL && (SkelOwner == NULL))
	{
		SkelOwner = SkelComp->GetAttachParent()->GetOwner();
		OwnerVelocity = SkelOwner->GetVelocity();
	}
	else
	{
		OwnerVelocity = FVector::ZeroVector;
	}
}

FRotator OrientBoneToNormal(FVector Normal, USkeletalMeshComponent* const Mesh, const FTransform& BoneTM)
{
	FVector FwdVec = Mesh->GetOwner()->GetActorForwardVector();
	FVector Fwd = FVector::CrossProduct(FwdVec, Normal);
	FVector Right = FVector::CrossProduct(Normal, Fwd);

	Fwd.Normalize();
	Right.Normalize();
	Normal.Normalize();

	const FMatrix RotMatrix(Fwd, Right, Normal, FVector::ZeroVector);
	const FRotator Rotator = RotMatrix.Rotator();
	return FRotator(Rotator.Pitch, BoneTM.Rotator().Yaw, Rotator.Roll);
}

void FAnimNode_FootIK::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{
	check(OutBoneTransforms.Num() == 0);

	// ----------------------------------------------
	// ----------------- INIT VARS ------------------
	// ----------------------------------------------
	const UWorld* World = Output.AnimInstanceProxy->GetAnimInstanceObject()->GetWorld();

	// Cache bone indices
	const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();

	// Cache Component Space Transforms
	FTransform PelvisTM = Output.Pose.GetComponentSpaceTransform(PelvisBoneIndex);
	FTransform MeshTM = Output.AnimInstanceProxy->GetComponentTransform();
	const FVector& MeshLoc = MeshTM.GetLocation();

	// Cache owner
	USkeletalMeshComponent* const Mesh = Output.AnimInstanceProxy->GetSkelMeshComponent();
	AMICharacter* const Character = (Mesh && Mesh->GetOwner()) ? Cast<AMICharacter>(Mesh->GetOwner()) : nullptr;
	UMICharacterMovementComponent* const Movement = (Character) ? Character->GetMICharacterMovement() : nullptr;

	const bool bIsMoving = Character != nullptr && Character->GetVelocity().Size() > 0.05f;

	// -----------------------------------------------------
	// ----------------- ORIENT TO GROUND ------------------
	// -----------------------------------------------------

	OrientMeshToGround_AnyThread(Output, OutBoneTransforms);

	// ----------------------------------------------------
	// ------------------- COMPUTE IK ---------------------
	// ----------------------------------------------------

	FVector PelvisTarget = FVector::ZeroVector;
	float PelvisTranslateRateZ = 0.f;

	int32 NumFeetOverEdge = 0;
	if (!World->IsPreviewWorld() && Movement && Character)
	{
		const TArray<AActor*> TraceIgnore { Character };

		// If all feet are over the ledge, we're going to be strangely levitating if we let this happen so
		// determine the closest foot as we go
		FMIFootIK_Foot* ClosestFoot = nullptr;
		float ClosestDistance = 0.f;
		FVector& FloorPoint = Movement->CurrentFloor.HitResult.ImpactPoint;
		FVector& FloorNormal = Movement->CurrentFloor.HitResult.ImpactNormal;

		for (FMIFootIK_Foot& Foot : Feet)
		{
			// Cache Component Space Transforms
			FTransform BoneTM = Output.Pose.GetComponentSpaceTransform(Foot.BoneIndex);
			FTransform IKBoneTM = Output.Pose.GetComponentSpaceTransform(Foot.IKBoneIndex);

			// ------------------- UPDATE IK ----------------------
			// Compute the IK Targets for each foot and the pelvis
			// ----------------------------------------------------

			// Zero previous target
			Foot.Target = FVector::ZeroVector;
			Foot.OrientTarget = FRotator::ZeroRotator;

			if (Foot.States.IsValidIndex(State))
			{
				const FMIFootIK_State& Settings = Foot.States[State];

				// Cache properties for this tick
				Foot.CachedWorldLoc = MeshTM.Rotator().RotateVector(BoneTM.GetLocation()) + MeshLoc;
				Foot.CachedWorldBaseLoc = OrientRotation.UnrotateVector(Foot.CachedWorldLoc - MeshLoc) + MeshLoc;
				Foot.CachedFloorOrientOffset = Foot.CachedWorldLoc - Foot.CachedWorldBaseLoc;
				Foot.CachedBoneLoc = FVector(Foot.CachedWorldLoc.X, Foot.CachedWorldLoc.Y, Foot.CachedWorldBaseLoc.Z);

				FHitResult Hit(ForceInit);

				// Line trace from foot to ground
				{
					FVector TraceStart(Foot.CachedBoneLoc.X, Foot.CachedBoneLoc.Y, MeshLoc.Z);
					FVector TraceEnd(Foot.CachedBoneLoc.X, Foot.CachedBoneLoc.Y, MeshLoc.Z);

					TraceStart += UKismetMathLibrary::GetUpVector(OrientRotation) * TraceStartHeightAboveMesh;
					TraceEnd -= UKismetMathLibrary::GetUpVector(OrientRotation) * TraceLengthBelowMesh;

					UKismetSystemLibrary::LineTraceSingle(
						Mesh,
						TraceStart,
						TraceEnd,
						FootTraceType(),
						true,
						TraceIgnore,
						EDrawDebugTrace::None,
						Hit,
						false
					);
				}

				Foot.bOverEdge = true;
				if (Hit.bBlockingHit)
				{
					//DrawDebugDirectionalArrow(World, Hit.ImpactPoint, Hit.ImpactPoint + MeshTM.GetScaledAxis(EAxis::Z) * 250.f, 100.f, FColor::Black, false, -1.f, 0, 2.f);

					// Don't try to conform to extreme angles
					const float FloorDot = (Hit.ImpactNormal | MeshTM.GetScaledAxis(EAxis::Z));
					if (FloorDot >= 0.25f)
					{
						FVector DesiredTarget = (Hit.ImpactPoint - MeshTM.GetLocation()) + FVector(0.f, 0.f, Settings.ZOffset) - Foot.CachedFloorOrientOffset;

						FVector PelvisDesiredTarget = PelvisTM.GetRotation().RotateVector(DesiredTarget);
						PelvisDesiredTarget.Y = 0.f;
						PelvisDesiredTarget = PelvisTM.GetRotation().UnrotateVector(PelvisDesiredTarget);
						Foot.PelvisTarget = FVector2D(PelvisDesiredTarget.X, PelvisDesiredTarget.Y);

						Foot.Target.Z = FMath::Clamp(DesiredTarget.Z, Settings.LowerMaxZLimit, Settings.LiftMaxZLimit);

						// If true, we are on the floor
						if (FMath::IsNearlyEqual(Foot.Target.Z, DesiredTarget.Z))
						{
							// Note to my future self: I did NOT get the roll limit and pitch limits backwards, this is the correct usage
							const FRotator Orientation = OrientBoneToNormal(Hit.Normal, Mesh, BoneTM);
							const float Roll = FMath::Clamp(Orientation.Roll - OrientRotation.Roll, Settings.PitchUpLimit, Settings.PitchDownLimit);
							const float Pitch = FMath::Clamp(Orientation.Pitch - OrientRotation.Pitch, Settings.RollRightLimit, Settings.RollLeftLimit) * -1.f;

							Foot.OrientTarget = FRotator(-Pitch, 0.f, Roll);

							Foot.bOverEdge = false;
						}
					}
				}

				if (Foot.bOverEdge)
				{
					// No ground beneath the foot, interpolate to reset position
					NumFeetOverEdge++;
					Foot.bOverEdge = true;

					Foot.Target.Z = Settings.LowerMaxZLimitOverEdge;
					Foot.TranslateInterpRate = Settings.LowerFootRate;
					Foot.OrientTarget = FRotator::ZeroRotator;

					// Compare foot distance to find closest to ledge that isn't grounded
					// This is used if no feet are on the ground but capsule is
					const float FootDistance = FVector::Dist2D(Foot.CachedWorldLoc, FloorPoint);
					if (!ClosestFoot || FootDistance < ClosestDistance)
					{
						ClosestFoot = &Foot;
						ClosestDistance = FootDistance;
					}
				}
			}
		}
	}
	else
	{
		for (FMIFootIK_Foot& Foot : Feet)
		{
			Foot.Target = FVector::ZeroVector;
			Foot.OrientTarget = FRotator::ZeroRotator;
		}
	}

	// ----------------------------------------------------
	// ----------------- APPLY RESULTS --------------------
	// ----------------------------------------------------

	if (!World->IsPreviewWorld())
	{
		bool bFirstFoot = true;
		FVector2D TotalPelvisTarget = FVector2D::ZeroVector;
		for (FMIFootIK_Foot& Foot : Feet)
		{
			if (Foot.States.IsValidIndex(State))
			{
				const FMIFootIK_State& Settings = Foot.States[State];

				// If foot is moving upward use the min interp rate (move slower), otherwise max (move faster)
				Foot.TranslateInterpRate = Foot.Translation.Z < Foot.Target.Z ? Settings.LowerFootRate : Settings.LiftFootRate;
				if (Foot.Target.Z > PelvisTarget.Z)
				{
					// If foot is higher than last Z Offset (likely 0 or from previous foot) then move faster
					Foot.TranslateInterpRate = Settings.LiftFootRate;
				}

				Foot.Translation = FMath::VInterpTo(Foot.Translation, Foot.Target, DeltaTime, Foot.TranslateInterpRate);
				Foot.Orientation = FMath::RInterpTo(Foot.Orientation, Foot.OrientTarget, DeltaTime, Settings.OrientationRate);

				// The pelvis matches the lowest foot
				if (bFirstFoot || Foot.Target.Z <= PelvisTarget.Z)
				{
					bFirstFoot = false;
					PelvisTarget.Z = Foot.Target.Z;
					PelvisTranslateRateZ = Foot.TranslateInterpRate;
				}

				if (!Foot.bOverEdge || (NumFeetOverEdge == Feet.Num() && Feet.Num() > 0))
				{
					TotalPelvisTarget += Foot.PelvisTarget;
				}
			}
		}

		// Pelvis target is averaged by all feet targets (weight shifting)
		if (Feet.Num() > 0 && !bIsMoving)
		{
			PelvisTarget = FVector(TotalPelvisTarget.X / Feet.Num(), TotalPelvisTarget.Y / Feet.Num(), PelvisTarget.Z);
		}

		// Don't weight shift when running, distorts animation
		if (bIsMoving)
		{
			PelvisTarget.X = 0.f;
			PelvisTarget.Y = 0.f;
		}

		// Interp the pelvis too
		PelvisTranslation.X = FMath::FInterpTo(PelvisTranslation.X, PelvisTarget.X, DeltaTime, PelvisXYTranslateRate);
		PelvisTranslation.Y = FMath::FInterpTo(PelvisTranslation.Y, PelvisTarget.Y, DeltaTime, PelvisXYTranslateRate);
		PelvisTranslation.Z = FMath::FInterpTo(PelvisTranslation.Z, PelvisTarget.Z, DeltaTime, PelvisTranslateRateZ);

		// This was modified when the root was, we'll be overwriting the orientation otherwise!
		PelvisTM = Output.Pose.GetComponentSpaceTransform(PelvisBoneIndex);

		// --------- TRANSFORM BONES ----------
		// Move the pelvis
		// ------------------------------------

		// Equivalent of using FAnimNode_ModifyBone on each bone - "Transform (Modify) Bone"
		// Translation Mode & Rotation Mode - "Add to Existing"
		auto TransformModifyBone = []
		(
			FTransform& BoneTM,
			FTransform& MeshTM,
			const FCompactPoseBoneIndex& BoneIndex,
			TEnumAsByte<enum EBoneControlSpace> BoneSpace,
			bool bDoRotation,
			const FRotator& Rotation,
			bool bDoTranslation,
			const FVector& Translation,
			float InBlendWeight,
			FComponentSpacePoseContext& Output,
			TArray<FBoneTransform>& OutBoneTransforms
			)
		{
			if (bDoRotation)
			{
				// Convert to Bone Space.
				FAnimationRuntime::ConvertCSTransformToBoneSpace(MeshTM, Output.Pose, BoneTM, BoneIndex, BoneSpace);

				const FQuat BoneQuat(Rotation);
				BoneTM.SetRotation(BoneQuat * BoneTM.GetRotation());

				// Convert back to Component Space.
				FAnimationRuntime::ConvertBoneSpaceTransformToCS(MeshTM, Output.Pose, BoneTM, BoneIndex, BoneSpace);
			}

			if (bDoTranslation)
			{
				// Convert to Bone Space.
				FAnimationRuntime::ConvertCSTransformToBoneSpace(MeshTM, Output.Pose, BoneTM, BoneIndex, BoneSpace);

				BoneTM.AddToTranslation(Translation);

				// Convert back to Component Space.
				FAnimationRuntime::ConvertBoneSpaceTransformToCS(MeshTM, Output.Pose, BoneTM, BoneIndex, BoneSpace);
			}

			OutBoneTransforms.Add(FBoneTransform(BoneIndex, BoneTM));
			Output.Pose.LocalBlendCSBoneTransforms(OutBoneTransforms, InBlendWeight);
			OutBoneTransforms.Reset();
		};

		{
			const bool bDoRotation = false;
			const bool bDoTranslation = true;
			TransformModifyBone(PelvisTM, MeshTM, PelvisBoneIndex, EBoneControlSpace::BCS_ComponentSpace, bDoRotation, FRotator::ZeroRotator, bDoTranslation, PelvisTranslation, ActualAlpha, Output, OutBoneTransforms);

			// These bones copy what the pelvis does
			// Currently only used to make the hand ik root follow along so the gun doesn't get raised/lowered
			for (const FCompactPoseBoneIndex& Index : FollowPelvisIndices)
			{
				FTransform BoneTM = Output.Pose.GetComponentSpaceTransform(Index);
				TransformModifyBone(BoneTM, MeshTM, Index, EBoneControlSpace::BCS_ComponentSpace, bDoRotation, FRotator::ZeroRotator, bDoTranslation, PelvisTranslation, ActualAlpha, Output, OutBoneTransforms);
			}
		}

		// --------- TRANSFORM BONES ----------
		// Move the feet IK Bones
		// ------------------------------------
		for (const FMIFootIK_Foot& Foot : Feet)
		{
			if (!Foot.States.IsValidIndex(State))
			{
				continue;
			}

			// Cache Component Space Transforms
			FTransform IKBoneTM = Output.Pose.GetComponentSpaceTransform(Foot.IKBoneIndex);

			const FMIFootIK_State& Settings = Foot.States[State];

			const bool bDoRotation = true;
			const bool bDoTranslation = true;
			TransformModifyBone(IKBoneTM, MeshTM, Foot.IKBoneIndex, EBoneControlSpace::BCS_ComponentSpace, bDoRotation, Foot.Orientation, bDoTranslation, Foot.Translation, ActualAlpha, Output, OutBoneTransforms);
		}
	}
}

void FAnimNode_FootIK::OrientMeshToGround_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{
	if (!bValidProxy) 
	{ 
		return;
	}

	// ----------------- ORIENT TO GROUND ------------------
	// -----------------------------------------------------
	FMIAnimInstanceProxy* const Proxy = (FMIAnimInstanceProxy*)Output.AnimInstanceProxy;

	const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();
	FTransform RootTM = Output.Pose.GetComponentSpaceTransform(RootBoneIndex);
	FTransform MeshTM = Output.AnimInstanceProxy->GetComponentTransform();

	const USkeletalMeshComponent* const Mesh = Output.AnimInstanceProxy->GetSkelMeshComponent();
	const AMICharacter* const Character = (Mesh && Mesh->GetOwner()) ? Cast<AMICharacter>(Mesh->GetOwner()) : nullptr;
	const UMICharacterMovementComponent* const Movement = (Character) ? Character->GetMICharacterMovement() : nullptr;

	if (Character && Movement && Mesh)
	{
		const FOrientToFloorSettings Settings = Character->GetOrientToFloorSettings();

		const FHitResult& FloorHit = Movement->CurrentFloor.HitResult;
		OrientRotation.Yaw = MeshTM.Rotator().Yaw;
		const FRotator MeshYawRotation = FRotator(0.f, OrientRotation.Yaw, 0.f);

		auto OrientTo = [](FVector Normal, const USkeletalMeshComponent* const Mesh, const FTransform& MeshTM) -> FRotator
		{
			FVector FwdVec = Mesh->GetOwner()->GetActorForwardVector();
			FVector Fwd = FVector::CrossProduct(FwdVec, Normal);
			FVector Right = FVector::CrossProduct(Normal, Fwd);

			Fwd.Normalize();
			Right.Normalize();
			Normal.Normalize();

			const FMatrix RotMatrix(Fwd, Right, Normal, FVector::ZeroVector);
			const FRotator Rotator = RotMatrix.Rotator();
			return FRotator(Rotator.Pitch, Mesh->GetComponentRotation().Yaw, Rotator.Roll);
		};

		if (Character->ShouldOrientToFloor() && Character->IsOnWalkableFloor() && !Character->IsCurrentFloorMovable())
		{
			// Base orientation, for raw values to drive animation
			{
				const FRotator FloorOrientation = OrientTo(FloorHit.ImpactNormal, Mesh, MeshTM);
				Proxy->OrientToFloorBaseRotation = FMath::RInterpTo(Proxy->OrientToFloorBaseRotation, FloorOrientation, DeltaTime, Settings.OrientRotateRate);
			}

			// Drive the procedural orientation
			{
				float ClampingScale = 0.f;
				{
					const float InclineNormal = (FloorHit.ImpactNormal | FVector::UpVector);
					const float BaseIncline = FMath::RadiansToDegrees(FMath::Acos(InclineNormal)) * Settings.OrientAngleMultiplier;
					const float Incline = FMath::ClampAngle(FMath::Abs(BaseIncline), 0.f, Settings.OrientMaxAngle);

					if (BaseIncline != 0.f && Incline > Settings.OrientMinAngle)
					{
						ClampingScale = FMath::Abs(Incline / BaseIncline);
					}
				}

				const FVector FloorNormal = FMath::Lerp<FVector>(FVector::UpVector, FloorHit.ImpactNormal, Settings.OrientAngleMultiplier * ClampingScale);
				const FRotator FloorOrientation = OrientTo(FloorNormal, Mesh, MeshTM);

				OrientRotation = FMath::RInterpTo(OrientRotation, FloorOrientation, DeltaTime, Settings.OrientRotateRate);
				Proxy->OrientFloorRotation = OrientRotation;
			}
		}
		// Left the ground
		else
		{
			// Reset orientation if not zero
			if (OrientRotation.Pitch != 0.f || OrientRotation.Roll != 0.f)
			{
				const FRotator ZeroRotation = FRotator(0.f, OrientRotation.Yaw, 0.f);
				OrientRotation = FMath::RInterpTo(OrientRotation, ZeroRotation, DeltaTime, Settings.OrientResetRate);
				Proxy->OrientFloorRotation = OrientRotation;
			}
		}

		// ------ TRANSFORM ROOT BONE -------
		// Rotate the root bone
		// ----------------------------------

		// Equivalent of using FAnimNode_ModifyBone on root bone - "Transform (Modify) Bone"
		// Rotation Mode - "Replace Existing"
		auto TransformModifyRootBone = []
		(
			FTransform& BoneTM,
			FTransform& MeshTM,
			const FCompactPoseBoneIndex& BoneIndex,
			TEnumAsByte<enum EBoneControlSpace> BoneSpace,
			const FRotator& Rotation,
			FComponentSpacePoseContext& Output,
			TArray<FBoneTransform>& OutBoneTransforms
			)
		{
			// Convert to Bone Space.
			FAnimationRuntime::ConvertCSTransformToBoneSpace(MeshTM, Output.Pose, BoneTM, BoneIndex, BoneSpace);

			const FQuat BoneQuat(Rotation);
			BoneTM.SetRotation(BoneQuat);

			// Convert back to Component Space.
			FAnimationRuntime::ConvertBoneSpaceTransformToCS(MeshTM, Output.Pose, BoneTM, BoneIndex, BoneSpace);

			OutBoneTransforms.Add(FBoneTransform(BoneIndex, BoneTM));
			Output.Pose.LocalBlendCSBoneTransforms(OutBoneTransforms, 1.f);
			OutBoneTransforms.Reset();
		};

		TransformModifyRootBone(RootTM, MeshTM, RootBoneIndex, EBoneControlSpace::BCS_WorldSpace, OrientRotation, Output, OutBoneTransforms);
	}
}

bool FAnimNode_FootIK::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{
	for (FMIFootIK_Foot& Foot : Feet)
	{
		if (!Foot.Bone.IsValidToEvaluate(RequiredBones)) { return false; }
		if (!Foot.IKBone.IsValidToEvaluate(RequiredBones)) { return false; }
	}

	for (FBoneReference& Bone : FollowPelvis)
	{
		if (!Bone.IsValidToEvaluate(RequiredBones)) { return false; }
	}

	return Root.IsValidToEvaluate(RequiredBones) && Pelvis.IsValidToEvaluate(RequiredBones);
}

void FAnimNode_FootIK::InitializeBoneReferences(const FBoneContainer& RequiredBones)
{
	Root.Initialize(RequiredBones);
	Pelvis.Initialize(RequiredBones);

	RootBoneIndex = Root.GetCompactPoseIndex(RequiredBones);
	PelvisBoneIndex = Pelvis.GetCompactPoseIndex(RequiredBones);

	FollowPelvisIndices.Reset();
	for (FBoneReference& Bone : FollowPelvis)
	{
		Bone.Initialize(RequiredBones);
		FollowPelvisIndices.Add(Bone.GetCompactPoseIndex(RequiredBones));
	}

	for (FMIFootIK_Foot& Foot : Feet)
	{
		Foot.Bone.Initialize(RequiredBones);
		Foot.IKBone.Initialize(RequiredBones);

		// Cache bone indices
		Foot.BoneIndex = Foot.Bone.GetCompactPoseIndex(RequiredBones);
		Foot.IKBoneIndex = Foot.IKBone.GetCompactPoseIndex(RequiredBones);
	}
}

