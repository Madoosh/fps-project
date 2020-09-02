// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "AnimNodes/AnimNode_AdditiveBlendSpace.h"
#include "AnimNode_Duck.generated.h"


/**
 *	Procedural ducking under obstacles
 */
USTRUCT(BlueprintInternalUseOnly)
struct MOVEIT_API FAnimNode_Duck : public FAnimNode_AdditiveBlendSpace
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Duck)
	float HalfHeight;

	UPROPERTY(EditAnywhere, Category = Duck)
	float AnticipationDistance;

	UPROPERTY(EditAnywhere, Category = Duck)
	float DuckRate;

	UPROPERTY(EditAnywhere, Category = Duck)
	float ResetRate;

public:
	FAnimNode_Duck()
		: HalfHeight(86.f)
		, AnticipationDistance(40.f)
		, DuckRate(15.f)
		, ResetRate(2.f)
	{
		AlphaInputType = EAnimAlphaInputType::Bool;
		AlphaBoolBlend.BlendInTime = 0.1f;
		AlphaBoolBlend.BlendOutTime = 0.1f;
		AlphaBoolBlend.BlendOption = EAlphaBlendOption::HermiteCubic;
	}

protected:
	virtual void UpdateBlendSpace(const FAnimationUpdateContext& Context) final;
};