// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "AnimNodes/AnimNode_AdditiveBlendSpace.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "AnimNode_LandingPose.generated.h"

class ACharacter;
struct FPredictProjectilePathResult;


/**
 *	Procedural ducking under obstacles
 */
USTRUCT(BlueprintInternalUseOnly)
struct MOVEIT_API FAnimNode_LandingPose : public FAnimNode_AdditiveBlendSpace
{
	GENERATED_BODY()

public:
	/** Z Velocity must be less than this amount while in the air to begin landing */
	UPROPERTY(EditAnywhere, Category = Land)
	float JumpStartZVelocity;

	/** Must be this close to ground to begin landing */
	UPROPERTY(EditAnywhere, Category = Land)
	float StartMinDistFromGround;

	/** How fast the lateral velocity interpolates going up - 0 for no interpolation */
	UPROPERTY(EditAnywhere, Category = Land)
	float LateralInterpUpRate;

	/** How fast the lateral velocity interpolates going down (to neutral pose) - 0 for no interpolation */
	UPROPERTY(EditAnywhere, Category = Land)
	float LateralInterpDownRate;

protected:
	ACharacter* Character;

	FVector OwnerVelocity;

	UPROPERTY()
	FPredictProjectilePathResult PredictResult;

public:
	FAnimNode_LandingPose()
		: JumpStartZVelocity(150.f)
		, StartMinDistFromGround(750.f)
		, LateralInterpUpRate(0.f)
		, LateralInterpDownRate(10.f)
		, OwnerVelocity(FVector::ZeroVector)
	{
		AlphaInputType = EAnimAlphaInputType::Bool;
		AlphaBoolBlend.BlendInTime = 0.1f;
		AlphaBoolBlend.BlendOutTime = 0.1f;
		AlphaBoolBlend.BlendOption = EAlphaBlendOption::HermiteCubic;
	}

protected:
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) final;
	virtual void PreUpdate(const UAnimInstance* InAnimInstance) final;
	virtual bool HasPreUpdate() const final { return true; }
	virtual void UpdateBlendSpace(const FAnimationUpdateContext& Context) final;

	bool PredictLandingLocation(FPredictProjectilePathResult& PredictResult);
};