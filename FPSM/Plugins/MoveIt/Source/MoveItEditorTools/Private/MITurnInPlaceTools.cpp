// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.


#include "MITurnInPlaceTools.h"

FTransform UMITurnInPlaceTools::ExtractRootMotion(float Time, UAnimSequence* Anim)
{
	return Anim->ExtractRootMotion(0.f, Time, false);
}
