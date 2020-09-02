// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#include "AnimGraphNode_FootIK.h"

#define LOCTEXT_NAMESPACE "MoveItEditor_Node"

FText UAnimGraphNode_FootIK::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return GetControllerDescription();
}

FLinearColor UAnimGraphNode_FootIK::GetNodeTitleColor() const
{
	return FLinearColor::Black;
}

FText UAnimGraphNode_FootIK::GetTooltipText() const
{
	return LOCTEXT("AnimGraphNode_FootIK_Tooltip", "The Procedural FootIK Node computes and applies advanced IK for each foot.");
}

FString UAnimGraphNode_FootIK::GetNodeCategory() const
{
	return TEXT("MoveIt!");
}

FText UAnimGraphNode_FootIK::GetControllerDescription() const
{
	return LOCTEXT("FootIK", "Foot IK");
}

#undef LOCTEXT_NAMESPACE