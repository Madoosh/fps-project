// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "AnimNodes/AnimNode_AdditiveAngularBase.h"
#include "AnimNodes/AnimNodes_Shared.h"
#include "Curves/CurveFloat.h"
#include "AnimNode_TurnInPlace.generated.h"


/**
 *	Procedural turning in place
 */
USTRUCT(BlueprintInternalUseOnly)
struct MOVEIT_API FAnimNode_TurnInPlace : public FAnimNode_AdditiveAngularBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = TurnInPlace)
	float AngularVelocityThreshold;

	UPROPERTY(EditAnywhere, Category = TurnInPlace)
	FRuntimeFloatCurve AngularVelocityToPlayRate;

protected:
	/** Velocity accumulated that did not result in a step (below threshold) eventually triggers a step when total exceeds threshold */
	float AccumulatedYawVelocity;

public:
	FAnimNode_TurnInPlace()
		: AngularVelocityThreshold(80.f)
		, AccumulatedYawVelocity(0.f)
	{
		InternalTimeAccumulator = 1.f;
		bResetPlayTimeWhenBlendSpaceChanges = false;

		const FKeyHandle& FirstKey = AngularVelocityToPlayRate.GetRichCurve()->AddKey(250.f, 0.7f);
		const FKeyHandle& LastKey = AngularVelocityToPlayRate.GetRichCurve()->AddKey(1500.f, 2.f);
		AngularVelocityToPlayRate.GetRichCurve()->SetKeyInterpMode(FirstKey, RCIM_Cubic);
		AngularVelocityToPlayRate.GetRichCurve()->SetKeyInterpMode(LastKey, RCIM_Cubic);

		AlphaInputType = EAnimAlphaInputType::Bool;
		AlphaBoolBlend.BlendInTime = 0.2f;
		AlphaBoolBlend.BlendOutTime = 0.2f;
		AlphaBoolBlend.BlendOption = EAlphaBlendOption::HermiteCubic;

		bLoop = false;
	}

protected:
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) final;
	virtual void UpdateBlendSpace(const FAnimationUpdateContext& Context) final;

	FORCEINLINE bool IsTurning() const { return InternalTimeAccumulator != 1.f; }
};