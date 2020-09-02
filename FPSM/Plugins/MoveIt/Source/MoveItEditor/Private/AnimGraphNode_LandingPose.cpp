// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#include "AnimGraphNode_LandingPose.h"

#define LOCTEXT_NAMESPACE "MoveItEditor_Node"

FText UAnimGraphNode_LandingPose::GetControllerDescription() const
{
	return LOCTEXT("LandingPoseNode", "LandingPose");
}

FText UAnimGraphNode_LandingPose::GetTooltipText() const
{
	return LOCTEXT("AnimGraphNode_LandingPose_Tooltip", "LandingPose.");
}

#undef LOCTEXT_NAMESPACE