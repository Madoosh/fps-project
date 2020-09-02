// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "AnimNodes_Shared.generated.h"

enum class EMIJumpState : uint8
{
	JS_None,
	JS_Ground,
	JS_Jump,
	JS_Fall,
	JS_Fly,
	JS_Swim,
	JS_MAX = 255
};

USTRUCT(BlueprintType)
struct FMICopyIKBones_Bone
{
	GENERATED_BODY()

	/** Source bone to copy from */
	UPROPERTY(EditAnywhere, Category = "Copy IK Bones")
	FBoneReference Bone;

	/** Target bone to copy over */
	UPROPERTY(EditAnywhere, Category = "Copy IK Bones")
	FBoneReference IK;

	FCompactPoseBoneIndex BoneIndex;
	FCompactPoseBoneIndex IKIndex;

	FMICopyIKBones_Bone()
		: BoneIndex(-1)
		, IKIndex(-1)
	{}

	FMICopyIKBones_Bone(const FBoneReference& InBone, const FBoneReference& InIK)
		: Bone(InBone)
		, IK(InIK)
		, BoneIndex(-1)
		, IKIndex(-1)
	{}
};
