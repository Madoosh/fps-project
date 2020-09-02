// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_LocalSkeletalControlBase.h"
#include "AnimNodes/AnimNode_WeaponPose.h"
#include "AnimGraphNode_WeaponPose.generated.h"

struct FAnimNode_WeaponPose;

UCLASS()
class MOVEITEDITOR_API UAnimGraphNode_WeaponPose : public UAnimGraphNode_LocalSkeletalControlBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_WeaponPose Node;

	// UEdGraphNode interface
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const final;
	virtual FLinearColor GetNodeTitleColor() const final;
	virtual FText GetTooltipText() const final;
	virtual FString GetNodeCategory() const final;
	// End of UEdGraphNode interface

protected:
	//~ Begin UAnimGraphNode_SkeletalControlBase Interface
	virtual FText GetControllerDescription() const final;
	virtual const FAnimNode_LocalSkeletalControlBase* GetNode() const final { return &Node; }
	//~ End UAnimGraphNode_SkeletalControlBase Interface
};