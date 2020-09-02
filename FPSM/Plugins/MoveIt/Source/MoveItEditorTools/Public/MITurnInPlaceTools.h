// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blutility/Classes/EditorUtilityWidget.h"
#include "MITurnInPlaceTools.generated.h"

/**
 * 
 */
UCLASS()
class MOVEITEDITORTOOLS_API UMITurnInPlaceTools : public UEditorUtilityWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = Editor)
	FTransform ExtractRootMotion(float Time, UAnimSequence* Anim);
};
