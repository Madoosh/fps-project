// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#include "AnimNodes/AnimNode_WeaponPose.h"
#include "Animation/AnimInstanceProxy.h"
#include "Animation/BlendProfile.h"
#include "Components/SkeletalMeshComponent.h"
#include "MICharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AnimNodes/AnimNodes_Shared.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/CapsuleComponent.h"
#include "MIAnimInstance.h"
#include "MIAnimInstanceProxy.h"


DEFINE_LOG_CATEGORY_STATIC(LogWeaponPose, Log, All);

void FAnimNode_WeaponPose::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	Super::Initialize_AnyThread(Context);

	bValidProxy = Context.AnimInstanceProxy->GetAnimInstanceObject()->IsA(UMIAnimInstance::StaticClass());
	if (!bValidProxy)
	{
		UE_LOG(LogWeaponPose, Error, TEXT("Animation Instance must inherit from UMIAnimInstance. Unable to adjust left hand transform."));
	}
}

void FAnimNode_WeaponPose::EvaluateLocalSkeletalControl_AnyThread(FPoseContext& Output, float ActualBlendWeight)
{
	// ----------------------------------------------
	// ----------------- INIT VARS ------------------
	// ----------------------------------------------
	const UWorld* World = Output.AnimInstanceProxy->GetAnimInstanceObject()->GetWorld();

	// Cache bone indices
	const FBoneContainer& BoneContainer = Output.Pose.GetBoneContainer();

	// Cache Component Space Transforms
	FTransform MeshTM = Output.AnimInstanceProxy->GetComponentTransform();
	const FVector& MeshLoc = MeshTM.GetLocation();

	// Cache owner
	ACharacter* Character = nullptr;
	UCharacterMovementComponent* Movement = nullptr;
	USkeletalMeshComponent* const Mesh = Output.AnimInstanceProxy->GetSkelMeshComponent();
	if (Mesh && Mesh->GetOwner())
	{
		Character = Cast<ACharacter>(Output.AnimInstanceProxy->GetSkelMeshComponent()->GetOwner());
		if (Character)
		{
			Movement = Character->GetCharacterMovement();
		}
	}
	const bool bIsMoving = Character != nullptr && Character->GetVelocity().Size() > 0.05f;

	if (!Mesh)
	{
		return;
	}

	// Move weapon
	FTransform WeaponTM = ConvertLocalToComponent(Output, WeaponHand.IKBoneIndex);
	const FVector InitialWeaponLocation = WeaponTM.GetLocation();
	WeaponTM.SetTranslation(WeaponTM.GetTranslation() + Weapon.WeaponOffset);
	//WeaponTM.SetRotation(WeaponTM.GetRotation() * Weapon.WeaponRotationOffset.Quaternion());

	// Required for offhand to match the move
	const FVector WeaponDeltaMove = WeaponTM.GetLocation() - InitialWeaponLocation;

	ApplyComponentToLocal(Output, WeaponTM, WeaponHand.IKBoneIndex, ActualBlendWeight);

	// Move offhand
	if (bValidProxy && Weapon && Weapon.WeaponMesh->DoesSocketExist(Weapon.OffHandSocketName))
	{
		FTransform OffHandTM = ConvertLocalToComponent(Output, OffHand.IKBoneIndex);
		const FQuat HandRotation = OffHandTM.GetRotation();
		FTransform SocketWorldTM = Weapon.WeaponMesh->GetSocketTransform(Weapon.OffHandSocketName);

		OffHandTM = OffHandTM.GetRelativeTransform(SocketWorldTM);

		FVector BonePos;
		FRotator BoneRot;
		Mesh->TransformToBoneSpace(WeaponHand.Bone.BoneName, SocketWorldTM.GetLocation(), SocketWorldTM.Rotator(), BonePos, BoneRot);

		OffHandTM = FTransform::Identity;
		OffHandTM.SetLocation(BonePos);
		OffHandTM.SetRotation(BoneRot.Quaternion());
		OffHandTM.AddToTranslation(WeaponTM.InverseTransformVector(WeaponDeltaMove));

		FMIAnimInstanceProxy* const AnimProxy = ((FMIAnimInstanceProxy*)Output.AnimInstanceProxy);
		AnimProxy->OffHandIKTM = OffHandTM;
	}
}

bool FAnimNode_WeaponPose::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{
	return WeaponHand.Bone.IsValidToEvaluate(RequiredBones) && WeaponHand.IKBone.IsValidToEvaluate(RequiredBones) && OffHand.Bone.IsValidToEvaluate(RequiredBones) && OffHand.IKBone.IsValidToEvaluate(RequiredBones);
}

void FAnimNode_WeaponPose::InitializeBoneReferences(const FBoneContainer& RequiredBones)
{
	WeaponHand.Bone.Initialize(RequiredBones);
	WeaponHand.IKBone.Initialize(RequiredBones);
	OffHand.Bone.Initialize(RequiredBones);
	OffHand.IKBone.Initialize(RequiredBones);

	WeaponHand.BoneIndex = WeaponHand.Bone.GetCompactPoseIndex(RequiredBones);
	WeaponHand.IKBoneIndex = WeaponHand.IKBone.GetCompactPoseIndex(RequiredBones);
	OffHand.BoneIndex = OffHand.Bone.GetCompactPoseIndex(RequiredBones);
	OffHand.IKBoneIndex = OffHand.IKBone.GetCompactPoseIndex(RequiredBones);
}

void FAnimNode_WeaponPose::InitializeBoneParentCache(const FBoneContainer& BoneContainer)
{
	InitializeBoneParents(WeaponHand.BoneIndex, BoneContainer);
	InitializeBoneParents(WeaponHand.IKBoneIndex, BoneContainer);

	InitializeBoneParents(OffHand.BoneIndex, BoneContainer);
	InitializeBoneParents(OffHand.IKBoneIndex, BoneContainer);
}
