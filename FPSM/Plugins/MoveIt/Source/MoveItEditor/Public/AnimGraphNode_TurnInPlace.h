// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_AdditiveBlendSpace.h"
#include "AnimNodes/AnimNode_TurnInPlace.h"
#include "AnimGraphNode_TurnInPlace.generated.h"

UCLASS()
class MOVEITEDITOR_API UAnimGraphNode_TurnInPlace : public UAnimGraphNode_AdditiveBlendSpace
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_TurnInPlace Node;

	// UEdGraphNode interface
	virtual FText GetControllerDescription() const override;
	virtual FText GetTooltipText() const override;
	// End of UEdGraphNode interface

	// UAnimGraphNode_Base interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
	// End of UAnimGraphNode_Base interface

protected:
	virtual FAnimNode_AdditiveBlendSpace* GetNode() override { return &Node; }
	virtual const FAnimNode_AdditiveBlendSpace* GetNode() const override { return &Node; }
};