// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#include "AnimNodes/AnimNode_TurnInPlace.h"
#include "Animation/AnimInstanceProxy.h"
#include "Animation/BlendSpaceBase.h"


void FAnimNode_TurnInPlace::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	FAnimNode_AdditiveAngularBase::Initialize_AnyThread(Context);

	SetAccumulatedTime(1.f);
}

void FAnimNode_TurnInPlace::UpdateBlendSpace(const FAnimationUpdateContext& Context)
{
	float Yaw = AngularVelocity.Yaw;

	const bool bTurn = IsTurning() || FMath::Abs(Yaw) >= AngularVelocityThreshold || (!IsTurning() && FMath::Abs(AccumulatedYawVelocity) >= AngularVelocityThreshold);
	if (!bTurn)
	{
		AccumulatedYawVelocity += Yaw;
	}

	// Compute the first grid point on blendspace that doesn't blend with a ref pose
	const FBlendParameter& BlendParam = BlendSpace->GetBlendParameter(0);
	const float MinBlend = (BlendParam.Max / BlendParam.GridNum) * 2.f;

	// Prevent blending with ref pose by clamping X from going below the closest blendspace grid point
	if (FMath::Abs(Yaw) < MinBlend)
	{
		Yaw = MinBlend * FMath::Sign(Yaw);
	}

	// Take a step
	if (!IsTurning() && bTurn)
	{
		check(!AngularVelocity.ContainsNaN());

		// Restart the blendspace animation
		SetAccumulatedTime(0.f);
		X = Yaw;

		AccumulatedYawVelocity = 0.f;
	}
	else if (!IsTurning())
	{
		X = 0.f;
	}

	const bool bIncreasing = IsTurning() && FMath::Sign(Yaw) == FMath::Sign(X) && FMath::Abs(X) < FMath::Abs(Yaw);
	if (bIncreasing)
	{
		X = Yaw;
	}

	// Set the play rate based on the angular velocity
	PlayRate = AngularVelocityToPlayRate.GetRichCurveConst()->Eval(FMath::Abs(X), 1.f);
}
