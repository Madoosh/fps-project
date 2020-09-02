// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#include "AnimNodes/AnimNode_Strafe.h"
#include "Animation/AnimInstanceProxy.h"


void FAnimNode_Strafe::UpdateInternal(const FAnimationUpdateContext& Context)
{
	DeltaTime = Context.GetDeltaTime();
}

void FAnimNode_Strafe::EvaluateLocalSkeletalControl_AnyThread(FPoseContext& Output, float ActualBlendWeight)
{
	// Cache vars for use
	const FBoneContainer& BoneContainer = Output.AnimInstanceProxy->GetRequiredBones();

	TArray<FBoneReference> BodyBones = SpineBones;
	BodyBones.Append(HeadBones);

	FTransform IKRootBoneTM = ConvertLocalToComponent(Output, IKRootBoneIndex);
	FTransform PelvisTM = ConvertLocalToComponent(Output, PelvisBoneIndex);
	const FTransform& MeshTM = Output.AnimInstanceProxy->GetComponentTransform();

	// ------------ TRANSFORM BONES -------------
	// Rotate the pelvis and IK, and body bones
	// ------------------------------------------

	const FQuat CurrentQuat = Direction.ToOrientationQuat();
	const FQuat CurrentPelvisRotation = PelvisTM.GetRotation();

	const FQuat MeshSpaceQuat = IKRootBoneTM.GetRotation().Inverse() * CurrentQuat * IKRootBoneTM.GetRotation();
	IKRootBoneTM.ConcatenateRotation(MeshSpaceQuat);
	IKRootBoneTM.NormalizeRotation();
	ApplyComponentToLocal(Output, IKRootBoneTM, IKRootBoneIndex, ActualBlendWeight);

	const FQuat PelvisMeshSpaceQuat = PelvisTM.GetRotation().Inverse() * CurrentQuat * PelvisTM.GetRotation();
	PelvisTM.ConcatenateRotation(FQuat::FastLerp(FQuat::Identity, PelvisMeshSpaceQuat, PelvisOrientScale));
	PelvisTM.NormalizeRotation();
	const FQuat PelvisRotationChange = (PelvisTM.GetRotation() - CurrentPelvisRotation);
	ApplyComponentToLocal(Output, PelvisTM, PelvisBoneIndex, ActualBlendWeight);

	if (BodyBones.Num() == 0)
	{
		return;
	}

	const float BodyBlendWeight = (1.f / BodyBones.Num());

	auto OrientBodyBone = [&](const FBoneReference& BodyBone, float InBlendWeight)
	{
		const FCompactPoseBoneIndex BodyBoneIndex = BodyBone.GetCompactPoseIndex(BoneContainer);

		FTransform BodyBoneTM = ConvertLocalToComponent(Output, BodyBoneIndex);
		const FQuat BodyMeshSpaceQuat = BodyBoneTM.GetRotation().Inverse() * CurrentQuat.Inverse() * BodyBoneTM.GetRotation();
		BodyBoneTM.ConcatenateRotation(FQuat::FastLerp(FQuat::Identity, BodyMeshSpaceQuat, InBlendWeight));
		BodyBoneTM.NormalizeRotation();
		ApplyComponentToLocal(Output, BodyBoneTM, BodyBoneIndex, ActualBlendWeight);
	};

	for (const FBoneReference& BodyBone : SpineBones)
	{
		OrientBodyBone(BodyBone, BodyBlendWeight * BodyOrientScale);
	}

	for (const FBoneReference& BodyBone : HeadBones)
	{
		OrientBodyBone(BodyBone, BodyBlendWeight * HeadOrientScale);
	}
}

bool FAnimNode_Strafe::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{
	for (const FMIFoot_Strafe& Foot : Feet)
	{
		if (!Foot.FootBone.IsValidToEvaluate(RequiredBones)) { return false; }
		if (!Foot.IKFootBone.IsValidToEvaluate(RequiredBones)) { return false; }
		if (!Foot.PoleBone.IsValidToEvaluate(RequiredBones)) { return false; }
		if (!Foot.IKPoleBone.IsValidToEvaluate(RequiredBones)) { return false; }
	}

	for (const FBoneReference& BodyBone : SpineBones)
	{
		if (!BodyBone.IsValidToEvaluate(RequiredBones)) { return false; }
	}

	for (const FBoneReference& BodyBone : HeadBones)
	{
		if (!BodyBone.IsValidToEvaluate(RequiredBones)) { return false; }
	}

	return IKRootBone.IsValidToEvaluate(RequiredBones) && PelvisBone.IsValidToEvaluate(RequiredBones);
}

void FAnimNode_Strafe::InitializeBoneParentCache(const FBoneContainer& BoneContainer)
{
	InitializeBoneParents(IKRootBone, BoneContainer);
	InitializeBoneParents(PelvisBone, BoneContainer);
	for (FBoneReference& BodyBone : SpineBones)
	{
		InitializeBoneParents(BodyBone, BoneContainer);
	}
	for (FBoneReference& BodyBone : HeadBones)
	{
		InitializeBoneParents(BodyBone, BoneContainer);
	}
	for (FMIFoot_Strafe& Foot : Feet)
	{
		InitializeBoneParents(Foot.FootBone, BoneContainer);
		InitializeBoneParents(Foot.IKFootBone, BoneContainer);
		InitializeBoneParents(Foot.PoleBone, BoneContainer);
		InitializeBoneParents(Foot.IKPoleBone, BoneContainer);
	}
}

void FAnimNode_Strafe::InitializeBoneReferences(const FBoneContainer& RequiredBones)
{
	PelvisBone.Initialize(RequiredBones);
	IKRootBone.Initialize(RequiredBones);

	PelvisBoneIndex = PelvisBone.GetCompactPoseIndex(RequiredBones);
	IKRootBoneIndex = IKRootBone.GetCompactPoseIndex(RequiredBones);

	for (FBoneReference& BodyBone : SpineBones)
	{
		BodyBone.Initialize(RequiredBones);
	}
	for (FBoneReference& BodyBone : HeadBones)
	{
		BodyBone.Initialize(RequiredBones);
	}
	for (FMIFoot_Strafe& Foot : Feet)
	{
		Foot.FootBone.Initialize(RequiredBones);
		Foot.IKFootBone.Initialize(RequiredBones);
		Foot.PoleBone.Initialize(RequiredBones);
		Foot.IKPoleBone.Initialize(RequiredBones);
	}
}
