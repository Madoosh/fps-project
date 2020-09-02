// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "MIAnimInstanceProxy.generated.h"

/**
 * Used to pass data in/out of threaded animation nodes
 * This is used specifically to get the correct position for the offhand placed on a weapon
 */
USTRUCT(meta = (DisplayName = "Native Variables"))
struct FMIAnimInstanceProxy : public FAnimInstanceProxy
{
	GENERATED_BODY()

	typedef FAnimInstanceProxy Super;

	FTransform OffHandIKTM;

	/** This is the specific rotation to orient completely to the floor, without any scaling or remapping applied */
	FRotator OrientToFloorBaseRotation;

	/** This is the rotation that results from applying scaling and remapping */
	FRotator OrientFloorRotation;

	FMIAnimInstanceProxy()
		: Super()
		, OffHandIKTM(FTransform::Identity)
		, OrientToFloorBaseRotation(FRotator::ZeroRotator)
		, OrientFloorRotation(FRotator::ZeroRotator)
	{}

	FMIAnimInstanceProxy(UAnimInstance* Instance)
		: Super(Instance)
		, OffHandIKTM(FTransform::Identity)
		, OrientToFloorBaseRotation(FRotator::ZeroRotator)
		, OrientFloorRotation(FRotator::ZeroRotator)
	{}

	virtual ~FMIAnimInstanceProxy() {}
};
