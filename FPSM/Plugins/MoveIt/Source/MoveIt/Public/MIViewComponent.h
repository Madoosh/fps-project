// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "AlphaBlend.h"
#include "Camera/CameraTypes.h"
#include "MIViewComponent.generated.h"

class UCameraComponent;
class APawn;

DECLARE_LOG_CATEGORY_CLASS(LogView, Log, All);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMIOnCameraChanged, UCameraComponent*, NewCamera);


USTRUCT(BlueprintType)
struct FMICharacterState : public FAlphaBlend
{
	GENERATED_BODY()

	FMICharacterState()
		: ViewOffset(FVector::ZeroVector)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewComponent)
	FVector ViewOffset;
};

USTRUCT(BlueprintType)
struct FMICameraViewBlend : public FAlphaBlend
{
	GENERATED_BODY()

	FMICameraViewBlend()
		: bScaleTimeOverViewDistance(true)
		, bIgnoreZDistance(false)
		, DistanceScalar(1.f)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewComponent)
	bool bScaleTimeOverViewDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewComponent, meta = (EditCondition = "bScaleTimeByViewDistance"))
	bool bIgnoreZDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewComponent, meta = (EditCondition = "bScaleTimeByViewDistance"))
	float DistanceScalar;

	FORCEINLINE float GetTimeScaledOverDistance(const FVector& CurrentLocation, const FVector& PendingLocation) const
	{
		if (!bScaleTimeOverViewDistance || DistanceScalar == 0.f)
		{
			return GetBlendTime();
		}

		const FVector Difference = (PendingLocation - CurrentLocation);
		const float Distance = (bIgnoreZDistance) ? Difference.Size2D() : Difference.Size();

		return (Distance * (GetBlendTime() / DistanceScalar));
	}
};

/**
 * Handles camera blending and character state changes
 * Allows blending smoothly between any number of cameras
 */
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MOVEIT_API UMIViewComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewComponent)
	bool bHandleBaseEyeHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewComponent)
	FMICharacterState DefaultCharacterState;

	/**
	 *
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewComponent)
	TMap<FName, FMICharacterState> CharacterStates;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ViewComponent)
	//TMap<FName, 

public:
	UPROPERTY(BlueprintAssignable, Category = ViewComponent)
	FMIOnCameraChanged OnCameraChanged;

protected:
	/** "None" is DefaultState */
	FName CurrentState;
	FName PreviousState;

	FAlphaBlend StateBlend;

	TArray<UCameraComponent*> UpdatedCameras;
	TMap<UCameraComponent*, FVector> UpdatedCameraRelativeLocations;

	float HalfHeight;

	float BaseEyeHeight;
	float StartBaseEyeHeight;

	FVector StateViewOffset;
	FVector StartStateViewOffset;

	APawn* PawnOwner;

protected:
	UCameraComponent* CurrentCamera;
	UCameraComponent* PendingCamera;

	FAlphaBlend CameraBlend;

	/**
	 * Used when starting transition with a transition already in progress to blend views together
	 */
	FMinimalViewInfo StartBlendView;

public:
	UMIViewComponent();

	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** Notify ViewComponent that character state has changed to a new state that it handles */
	UFUNCTION(BlueprintCallable, Category = ViewComponent)
	void OnCharacterStateChanged();

	void OnHalfHeightChanged(float ScaledHalfHeightAdjust);

	UFUNCTION(BlueprintNativeEvent, Category = ViewComponent)
	bool IsCharacterStateActive(uint8 State) const;

	UFUNCTION(BlueprintNativeEvent, Category = ViewComponent)
	TArray<UCameraComponent*> GetCharacterStateCameras() const;

	FORCEINLINE FVector GetViewOffset() const { return StateViewOffset; }
	FORCEINLINE float GetBaseEyeHeightOffset() const { return BaseEyeHeight; }

	FORCEINLINE bool IsDefaultStateActive() const { return CurrentState.IsNone(); }

	FORCEINLINE FMICharacterState& GetCharacterState(const FName& StateName)
	{
		if (!StateName.IsNone() && CharacterStates.Contains(StateName))
		{
			return CharacterStates.FindChecked(StateName);
		}
		return DefaultCharacterState;
	}

	FORCEINLINE const FMICharacterState& GetCharacterState(const FName& StateName) const
	{
		if (!StateName.IsNone() && CharacterStates.Contains(StateName))
		{
			return CharacterStates.FindChecked(StateName);
		}
		return DefaultCharacterState;
	}

	FORCEINLINE FMICharacterState& CharacterState() { return GetCharacterState(CurrentState); }
	FORCEINLINE const FMICharacterState& CharacterState() const { return GetCharacterState(CurrentState); }
	FORCEINLINE FMICharacterState& PreviousCharacterState() { return GetCharacterState(PreviousState); }
	FORCEINLINE const FMICharacterState& PreviousCharacterState() const { return GetCharacterState(PreviousState); }

	UFUNCTION(BlueprintCallable, Category = ViewComponent, meta = (DisplayName = "Set Camera"))
	void SetCamera(UCameraComponent* NewCamera, UPARAM(ref) const FMICameraViewBlend& CameraSettings);

	UFUNCTION(BlueprintCallable, Category = ViewComponent, meta = (DisplayName = "Set New Camera"))
	void K2_SetNewCamera(UCameraComponent* NewCamera, FMICameraViewBlend CameraSettings, float BlendTime, EAlphaBlendOption BlendOption, UCurveFloat* CustomBlendCurve);

	/**
	* Call this from AActor::CalcCamera (dont call super)
	*/
	void CalcCamera(float DeltaTime, FMinimalViewInfo& OutResult);

	UFUNCTION(BlueprintPure, Category = ViewComponent)
	FORCEINLINE UCameraComponent* GetCurrentCamera() const { return CurrentCamera; }

	UFUNCTION(BlueprintPure, Category = ViewComponent)
	FORCEINLINE UCameraComponent* GetPendingCamera() const { return PendingCamera; }

protected:
	float ComputeTransitionTime() const;

	FORCEINLINE FVector GetHalfHeight() const { return FVector(0.f, 0.f, HalfHeight); }
};
