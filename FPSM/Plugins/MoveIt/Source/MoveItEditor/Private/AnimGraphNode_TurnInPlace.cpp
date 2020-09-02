// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#include "AnimGraphNode_TurnInPlace.h"
#include "DetailLayoutBuilder.h"

#define LOCTEXT_NAMESPACE "MoveItEditor_Node"

FText UAnimGraphNode_TurnInPlace::GetControllerDescription() const
{
	return LOCTEXT("TurnInPlace", "Turn In Place");
}

FText UAnimGraphNode_TurnInPlace::GetTooltipText() const
{
	return LOCTEXT("AnimGraphNode_TurnInPlace_Tooltip", "Procedural turning in place.");
}

void UAnimGraphNode_TurnInPlace::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	Super::CustomizeDetails(DetailBuilder);

	TSharedRef<IPropertyHandle> NodeHandle = DetailBuilder.GetProperty(FName(TEXT("Node")), GetClass());

	DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_TurnInPlace, bLoop)));
}

#undef LOCTEXT_NAMESPACE