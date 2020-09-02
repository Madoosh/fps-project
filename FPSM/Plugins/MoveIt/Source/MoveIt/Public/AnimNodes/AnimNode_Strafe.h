// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "AnimNodes/AnimNode_LocalSkeletalControlBase.h"
#include "MITypes.h"
#include "AnimNode_Strafe.generated.h"


USTRUCT(BlueprintType)
struct FMIFoot_Strafe
{
	GENERATED_BODY()

	FMIFoot_Strafe()
	{}

	FMIFoot_Strafe(const FBoneReference& InFootBone, const FBoneReference& InIKFootBone, const FBoneReference& InPoleBone, const FBoneReference& InIKPoleBone)
		: FootBone(InFootBone)
		, IKFootBone(InIKFootBone)
		, PoleBone(InPoleBone)
		, IKPoleBone(InIKPoleBone)
	{}

	UPROPERTY(EditAnywhere, Category = Strafe)
	FBoneReference FootBone;

	UPROPERTY(EditAnywhere, Category = Strafe)
	FBoneReference IKFootBone;

	/** This is usually the knee/calf */
	UPROPERTY(EditAnywhere, Category = Strafe)
	FBoneReference PoleBone;

	/** This is usually the knee/calf */
	UPROPERTY(EditAnywhere, Category = Strafe)
	FBoneReference IKPoleBone;
};


/**
 *	Procedurally generates strafing animations by reorienting the feet and body
 *	Applies intelligent logic from animation instance to change orientations
 */
USTRUCT(BlueprintInternalUseOnly)
struct MOVEIT_API FAnimNode_Strafe : public FAnimNode_LocalSkeletalControlBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Strafe)
	FBoneReference PelvisBone;

	/** The bone above the feet IK bones (they should have an IK root) */
	UPROPERTY(EditAnywhere, Category = Strafe)
	FBoneReference IKRootBone;

	/** Optionally add spine bones. Result is averaged between all added bones. Add multiple of the same bone to give it more influence. */
	UPROPERTY(EditAnywhere, Category = Strafe)
	TArray<FBoneReference> SpineBones;

	/** Optionally add head/neck bones. Result is averaged between all added bones. Add multiple of the same bone to give it more influence. */
	UPROPERTY(EditAnywhere, Category = Strafe)
	TArray<FBoneReference> HeadBones;

	UPROPERTY(EditAnywhere, Category = Strafe)
	TArray<FMIFoot_Strafe> Feet;

	UPROPERTY(EditAnywhere, Category = Strafe, meta = (PinShownByDefault, DisplayAfter="Source Pose"))
	FVector Direction;

	UPROPERTY(EditAnywhere, Category = Strafe, meta = (PinHiddenByDefault))
	EMIStrafeOrientation Orientation;

	UPROPERTY(EditAnywhere, Category = Strafe, meta = (PinHiddenByDefault))
	float PelvisOrientScale;

	UPROPERTY(EditAnywhere, Category = Strafe, meta = (PinHiddenByDefault))
	float BodyOrientScale;

	UPROPERTY(EditAnywhere, Category = Strafe, meta = (PinHiddenByDefault))
	float HeadOrientScale;

protected:
	/** World-space location of the bone. */
	FVector BoneLocation;

	/** World-space velocity of the bone. */
	FVector BoneVelocity;

	/** Velocity of the owning actor */
	FVector OwnerVelocity;

	float DeltaTime;

	FCompactPoseBoneIndex PelvisBoneIndex;
	FCompactPoseBoneIndex IKRootBoneIndex;

public:
	FAnimNode_Strafe()
		: PelvisBone(FBoneReference("pelvis"))
		, IKRootBone(FBoneReference("ik_foot_root"))
		, SpineBones({ FBoneReference("spine_01"), FBoneReference("spine_02"), FBoneReference("spine_03") })
		, HeadBones({ FBoneReference("neck_01"), FBoneReference("head") })
		, Feet({
			FMIFoot_Strafe(FBoneReference("foot_l"), FBoneReference("ik_foot_l"),FBoneReference("calf_l"),FBoneReference("VB thigh_l_calf_l")),
			FMIFoot_Strafe(FBoneReference("foot_r"), FBoneReference("ik_foot_r"),FBoneReference("calf_r"),FBoneReference("VB thigh_r_calf_r"))
			})
		, Direction(FVector::ZeroVector)
		, Orientation(EMIStrafeOrientation::SO_Neutral)
		, PelvisOrientScale(0.5f)
		, BodyOrientScale(0.5f)
		, HeadOrientScale(0.5f)
		, BoneLocation(FVector::ZeroVector)
		, BoneVelocity(FVector::ZeroVector)
		, OwnerVelocity(FVector::ZeroVector)
		, DeltaTime(0.f)
		, PelvisBoneIndex(-1)
		, IKRootBoneIndex(-1)
	{
		AlphaInputType = EAnimAlphaInputType::Bool;
		AlphaBoolBlend.BlendInTime = 0.2f;
		AlphaBoolBlend.BlendOutTime = 0.2f;
		AlphaBoolBlend.BlendOption = EAlphaBlendOption::HermiteCubic;
	}

protected:
	// FAnimNode_LocalSkeletalControlBase interface
	virtual void UpdateInternal(const FAnimationUpdateContext& Context) final;
	virtual void EvaluateLocalSkeletalControl_AnyThread(FPoseContext& Output, float BlendWeight) final;
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) final;
	// End of FAnimNode_LocalSkeletalControlBase interface

	virtual void InitializeBoneParentCache(const FBoneContainer& BoneContainer) final;
	virtual void InitializeBoneReferences(const FBoneContainer& RequiredBones) final;
};