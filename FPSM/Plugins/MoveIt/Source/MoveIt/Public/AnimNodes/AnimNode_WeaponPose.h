// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "AnimNodes/AnimNode_LocalSkeletalControlBase.h"
#include "MITypes.h"
#include "AnimNode_WeaponPose.generated.h"


USTRUCT(BlueprintType)
struct FMIWeaponPose_Hands
{
	GENERATED_BODY()

	FMIWeaponPose_Hands()
		: Target(FVector::ZeroVector)
		, Translation(FVector::ZeroVector)
		, OrientTarget(FRotator::ZeroRotator)
		, Orientation(FRotator::ZeroRotator)
		, CachedWorldLoc(FVector::ZeroVector)
		, CachedWorldBaseLoc(FVector::ZeroVector)
		, CachedBoneLoc(FVector::ZeroVector)
		, BoneIndex(-1)
		, IKBoneIndex(-1)
	{}

	FMIWeaponPose_Hands(const FBoneReference& InBone, const FBoneReference& InIKBone)
		: Bone(InBone)
		, IKBone(InIKBone)
		, Target(FVector::ZeroVector)
		, Translation(FVector::ZeroVector)
		, OrientTarget(FRotator::ZeroRotator)
		, Orientation(FRotator::ZeroRotator)
		, CachedWorldLoc(FVector::ZeroVector)
		, CachedWorldBaseLoc(FVector::ZeroVector)
		, CachedBoneLoc(FVector::ZeroVector)
		, BoneIndex(-1)
		, IKBoneIndex(-1)
	{}

	/** Foot bone */
	UPROPERTY(EditAnywhere, Category = IK)
	FBoneReference Bone;

	/** Foot IK bone */
	UPROPERTY(EditAnywhere, Category = IK)
	FBoneReference IKBone;

	/** Desired foot position */
	FVector Target;

	/** Resulting foot translation, interpolating towards Target */
	FVector Translation;

	/** Desired foot orientation */
	FRotator OrientTarget;

	/** Resulting foot orientation, interpolating towards OrientTarget */
	FRotator Orientation;

	/** MeshTM.Rotator().RotateVector(BoneTM.GetLocation()) + MeshLoc */
	FVector CachedWorldLoc;

	/** OrientRotation.UnrotateVector(Foot.CachedWorldLoc - MeshLoc) + MeshLoc */
	FVector CachedWorldBaseLoc;

	FVector CachedBoneLoc;

	FCompactPoseBoneIndex BoneIndex;
	FCompactPoseBoneIndex IKBoneIndex;
};

/**
 *	Highly advanced Foot IK, allowing for arbitrary orientation of the mesh, pelvis translation to shift body weight, etc
 */
USTRUCT(BlueprintInternalUseOnly)
struct MOVEIT_API FAnimNode_WeaponPose : public FAnimNode_LocalSkeletalControlBase
{
	GENERATED_BODY()

public:
	typedef FAnimNode_LocalSkeletalControlBase Super;

	UPROPERTY(EditAnywhere, Category = IK)
	FMIWeaponPose_Hands WeaponHand;

	UPROPERTY(EditAnywhere, Category = IK)
	FMIWeaponPose_Hands OffHand;

	UPROPERTY(EditAnywhere, Category = IK, meta = (PinShownByDefault))
	FMIWeapon Weapon;

protected:
	bool bValidProxy;

public:
	FAnimNode_WeaponPose()
		: WeaponHand(FMIWeaponPose_Hands(FBoneReference("hand_r"), FBoneReference("ik_hand_r")))
		, OffHand(FMIWeaponPose_Hands(FBoneReference("hand_l"), FBoneReference("ik_hand_l")))
		, bValidProxy(false)
	{
		AlphaInputType = EAnimAlphaInputType::Bool;
		AlphaBoolBlend.BlendInTime = 0.2f;
		AlphaBoolBlend.BlendOutTime = 0.2f;
		AlphaBoolBlend.BlendOption = EAlphaBlendOption::HermiteCubic;
	}

	// FAnimNode_SkeletalControlBase interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) final;
	virtual void EvaluateLocalSkeletalControl_AnyThread(FPoseContext& Output, float BlendWeight) final;
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) final;
	// End of FAnimNode_SkeletalControlBase interface

private:
	// FAnimNode_SkeletalControlBase interface
	virtual void InitializeBoneReferences(const FBoneContainer& RequiredBones) final;
	virtual void InitializeBoneParentCache(const FBoneContainer& BoneContainer) final;
	// End of FAnimNode_SkeletalControlBase interface
};