// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#include "AnimGraphNode_WeaponPose.h"

#define LOCTEXT_NAMESPACE "MoveItEditor_Node"

FText UAnimGraphNode_WeaponPose::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return GetControllerDescription();
}

FLinearColor UAnimGraphNode_WeaponPose::GetNodeTitleColor() const
{
	return FLinearColor::Black;
}

FText UAnimGraphNode_WeaponPose::GetTooltipText() const
{
	return LOCTEXT("AnimGraphNode_WeaponPose_Tooltip", "Positions on a per-weapon basis. Supplies Animation Graph with OffHandIK Transform for FABRIK (weapon hand placement).");
}

FString UAnimGraphNode_WeaponPose::GetNodeCategory() const
{
	return TEXT("MoveIt!");
}

FText UAnimGraphNode_WeaponPose::GetControllerDescription() const
{
	return LOCTEXT("WeaponPose", "Weapon Pose");
}

#undef LOCTEXT_NAMESPACE