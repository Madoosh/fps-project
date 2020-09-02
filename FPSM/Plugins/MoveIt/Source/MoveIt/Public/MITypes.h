// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "AlphaBlend.h"
#include "MITypes.generated.h"

class UMeshComponent;
class USkeletalMeshComponent;
class UBlendSpaceBase;


UENUM(BlueprintType)
enum class EMIStrafeOrientation : uint8
{
	SO_Neutral						UMETA(DisplayName = "Neutral"),
	SO_Right						UMETA(DisplayName = "Right"),
};

UENUM(BlueprintType)
enum class EMIMovementSystem : uint8
{
	MS_OrientToView					UMETA(DisplayName = "Orient To View"),
	MS_OrientToMovement				UMETA(DisplayName = "Orient To Movement"),
	MS_CycleOrientToMovement		UMETA(DisplayName = "Orient To Movement with Cycle"),
};

USTRUCT(BlueprintType)
struct MOVEIT_API FOrientToFloorSettings
{
	GENERATED_BODY()

	FOrientToFloorSettings()
		: OrientRotateRate(12.f)
		, OrientResetRate(10.f)
		, OrientAngleMultiplier(1.f)
		, OrientMinAngle(0.f)
		, OrientMaxAngle(90.f)
	{}

	/** How fast the mesh orients to the floor */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OrientToFloor)
	float OrientRotateRate;

	/** How fast the mesh orients back to upright when leaving the floor */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OrientToFloor)
	float OrientResetRate;

	/** 
	 * Scale the orientation angle
	 * Examples: 0.5 will remap 60 degrees as 30 degrees, halving the effect.
	 * 1.0 will have the full effect. 0 will disable.
	 * 2.0 will double the effect.
	 * -1.0 will inverse the effect.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OrientToFloor)
	float OrientAngleMultiplier;

	/** Minimum angle before it will start orienting */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OrientToFloor)
	float OrientMinAngle;

	/** Maximum angle it will orient to */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OrientToFloor)
	float OrientMaxAngle;
};

USTRUCT(BlueprintType)
struct MOVEIT_API FMIWeapon
{
	GENERATED_BODY()

	FMIWeapon()
		: WeaponMesh(nullptr)
		, WeaponOffset(FVector::ZeroVector)
		, OffHandSocketName("offhand_grip")
		, bIsOneHanded(false)
		, AnimStance(0)
		, WeaponPose(nullptr)
		, AimOffset(nullptr)
	{}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	UMeshComponent* WeaponMesh;

	/**
	 * [ DEPRECATED / NO LONGER USED ]
	 * X. Right
	 * Y. Forward
	 * Z. Up
	 */
	UPROPERTY(EditAnywhere, AdvancedDisplay, BlueprintReadWrite, Category = Weapon)
	FVector WeaponOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	FName OffHandSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	bool bIsOneHanded;

	/** 
	 * [ DEPRECATED / NO LONGER USED ]
	 * Animation stance for this weapon 
	 */
	UPROPERTY(EditAnywhere, AdvancedDisplay, BlueprintReadWrite, Category = Weapon)
	uint8 AnimStance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	UAnimSequenceBase* WeaponPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	UBlendSpaceBase* AimOffset;

	FORCEINLINE operator bool() const
	{
		return IsValid();
	}

	FORCEINLINE bool IsValid() const
	{
		return WeaponMesh != nullptr;
	}
};

struct FAngularVelocityCompute
{
	FAngularVelocityCompute()
		: AngularVelocity(FRotator::ZeroRotator)
		, AngularVector(FVector::ZeroVector)
		, LastTransform(FTransform::Identity)
		, bDebugDrawAngularVelocityOnScreen(false)
	{}

	/**
	* Angular velocity in degrees.
	* Divided by delta time.
	*/
	UPROPERTY(BlueprintReadOnly, Category = Character)
	FRotator AngularVelocity;

	/**
	* Angular velocity vector in radians.
	* Not yet divided by delta time.
	*
	* If in doubt, use the other option, NOT this one
	*/
	UPROPERTY(BlueprintReadOnly, Category = Character)
	FVector AngularVector;

	/** Used for angular velocity calculation */
	FTransform LastTransform;

	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = Character)
	bool bDebugDrawAngularVelocityOnScreen;

public:
	FORCEINLINE void UpdateAngularVelocity(const FTransform& MeshTransform, float DeltaTime)
	{
		checkSlow(DeltaTime != 0.f);

		// Angular velocity computation
		const FVector QuatVector = QuatTo3D(LastTransform.InverseTransformRotation(MeshTransform.GetRotation()));
		AngularVector = LastTransform.TransformVectorNoScale(QuatVector);

		AngularVelocity.Roll = FMath::RadiansToDegrees(AngularVector.X) / DeltaTime;
		AngularVelocity.Pitch = FMath::RadiansToDegrees(AngularVector.Y) / DeltaTime;
		AngularVelocity.Yaw = FMath::RadiansToDegrees(AngularVector.Z) / DeltaTime;

		LastTransform = MeshTransform;

#if WITH_EDITOR
		if (bDebugDrawAngularVelocityOnScreen && GEngine)
		{
			GEngine->AddOnScreenDebugMessage(429612, 1.f, FColor::Orange, FString::Printf(TEXT("Angular Velocity: %s"), *AngularVelocity.ToString()));
		}
#endif  // WITH_EDITOR
	}

	FORCEINLINE static FVector QuatTo3D(const FQuat& Q)
	{
		float Angle;
		FVector O;
		Q.ToAxisAndAngle(O, Angle);

		float Size = O.Size();

		if (Size >= KINDA_SMALL_NUMBER)
		{

			if (Angle >= (PI))
			{
				Size = -Size;
				Angle = -(Angle - (2 * PI));
			}

			O *= (Angle / Size);
		}
		else
		{
			O.X = 0.f;
			O.Y = 0.f;
			O.Z = 0.f;
		}
		return O;
	}
};

struct FAccelerationFrameCache
{
	FAccelerationFrameCache()
	{
		Velocity.Init(FVector::ZeroVector, 5);
		DeltaTime.Init(.016f, 5);
	}

	TArray<FVector, TInlineAllocator<5>> Velocity;
	TArray<float, TInlineAllocator<5>> DeltaTime;

	FORCEINLINE void Add(const FVector& InVelocity, float InDeltaTime)
	{
		Velocity.RemoveAt(0);
		DeltaTime.RemoveAt(0);
		Velocity.Add(InVelocity);
		DeltaTime.Add(InDeltaTime);
	}

	FORCEINLINE FVector GetAcceleration() const
	{
		check(Velocity.Num() == 5);
		check(DeltaTime.Num() == 5);

		float DT = 0;

		for (int32 i = 1; i < 5; i++)
		{
			DT += DeltaTime[i];
		}

		return (Velocity[4] - Velocity[0]) / DT;
	}
};

struct FNormalFrameCache
{
	FNormalFrameCache()
	{
		Normal.Init(0.f, 5);
		DeltaTime.Init(.016f, 5);
	}

	TArray<float, TInlineAllocator<5>> Normal;
	TArray<float, TInlineAllocator<5>> DeltaTime;

	FORCEINLINE void Add(const float InNormal, float InDeltaTime)
	{
		Normal.RemoveAt(0);
		DeltaTime.RemoveAt(0);
		Normal.Add(InNormal);
		DeltaTime.Add(InDeltaTime);
	}

	FORCEINLINE float GetNormal() const
	{
		check(Normal.Num() == 5);
		check(DeltaTime.Num() == 5);

		float DT = 0;

		for (int32 i = 1; i < 5; i++)
		{
			DT += DeltaTime[i];
		}

		return (Normal[4] - Normal[0]) / DT;
	}
};

UENUM(BlueprintType)
enum class EPhysicsBlendState : uint8
{
	PBS_Inactive					UMETA(DisplayName = "Inactive"),
	PBS_In							UMETA(DisplayName = "In"),
	PBS_Out							UMETA(DisplayName = "Out"),
	PBS_MAX=255						UMETA(Hidden),
};

USTRUCT(BlueprintType)
struct FPhysicsBlend
{
	GENERATED_BODY()

	FPhysicsBlend()
		: BoneName(NAME_None)
		, ImpulseMultiplier(1.f)
		, BlendIn(FAlphaBlend())
		, BlendOut(FAlphaBlend())
		, MinBlendWeight(0.f)
		, MaxBlendWeight(1.f)
		, MaxImpulseTaken(1000.f)
		, ImpulseInterpOutRate(10.f)
		, PhysicsBlendState(EPhysicsBlendState::PBS_Inactive)
		, CurrentImpulse(FVector::ZeroVector)
	{
		Init();
	}

	FPhysicsBlend(const FName& InBoneName, float InImpulseMultiplier = 1.f, float InMinBlendWeight = 0.f, float InMaxBlendWeight = 1.f)
		: BoneName(InBoneName)
		, ImpulseMultiplier(InImpulseMultiplier)
		, BlendIn(FAlphaBlend())
		, BlendOut(FAlphaBlend())
		, MinBlendWeight(InMinBlendWeight)
		, MaxBlendWeight(InMaxBlendWeight)
		, MaxImpulseTaken(1000.f)
		, ImpulseInterpOutRate(10.f)
		, PhysicsBlendState(EPhysicsBlendState::PBS_Inactive)
		, CurrentImpulse(FVector::ZeroVector)
	{
		Init();
	}

	/** 
	 * Bone to simulate physics on 
	 * Impulse application will fail if physics asset does not contain a body (capsule, box, sphere, etc)
	 * @note : Set to None to disable
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Physics)
	FName BoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Physics)
	float ImpulseMultiplier;

	/** Parameters for blending in */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Physics)
	FAlphaBlend BlendIn;

	/** Parameters for blending out */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Physics)
	FAlphaBlend BlendOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Physics, meta = (UIMin = "0", ClampMin="0", UIMax="1", ClampMax="1"))
	float MinBlendWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Physics, meta = (UIMin = "0", ClampMin = "0", UIMax = "1", ClampMax = "1"))
	float MaxBlendWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Physics, meta = (UIMin = "0", ClampMin = "0"))
	float MaxImpulseTaken;

	/**
	 * How fast the applied impulse interpolates out 
	 * Workaround for not knowing the impulse on each bone but needing to limit total application
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Physics, meta = (UIMin = "0", ClampMin = "0"))
	float ImpulseInterpOutRate;

	UPROPERTY(BlueprintReadOnly, Category = Physics)
	EPhysicsBlendState PhysicsBlendState;

protected:
	FVector CurrentImpulse;

public:
	void Impact(USkeletalMeshComponent* const Mesh, const FVector& ImpactNormal, const float ImpactMagnitude);

	/** @return Has completed */
	bool Update(USkeletalMeshComponent* const Mesh, float DeltaTime);

	FORCEINLINE bool IsActive() const { return PhysicsBlendState > EPhysicsBlendState::PBS_Inactive && PhysicsBlendState < EPhysicsBlendState::PBS_MAX; }

	bool CanSimulate(USkeletalMeshComponent* const Mesh) const;

private:
	FORCEINLINE void Init()
	{
		BlendIn.SetAlpha(1.f);
		BlendOut.SetAlpha(1.f);
		BlendIn.SetValueRange(0.f, 1.f);
		BlendOut.SetValueRange(1.f, 0.f);
	}
};

USTRUCT(BlueprintType)
struct FMIShotImpact
{
	GENERATED_BODY()

	FMIShotImpact()
	{}

	TMap<FName, FPhysicsBlend> BoneMap;
};

class FMIStatics
{
	FMIStatics(){}
	~FMIStatics(){}

public:
	FORCEINLINE static bool IsStrafingBackward(const FVector& StrafeInput, const EMIStrafeOrientation& StrafeOrientation, const float DegreesTolerance)
	{
		const float StrafeYaw = StrafeInput.Rotation().Yaw;
		if (StrafeOrientation == EMIStrafeOrientation::SO_Neutral)
		{
			// SO_Neutral
			return FMath::Abs(StrafeYaw) >= (91.f + DegreesTolerance);
		}
		else
		{
			// SO_Right
			return !(StrafeYaw >= -66.f && StrafeYaw <= 91.f);
		}
	}

	/**
	* Predict the arc of a virtual capsule (character) affected by gravity with collision checks along the arc.
	* Returns true if it hit something.
	*
	* @param PredictParams				Input params to the trace (start location, velocity, time to simulate, etc).
	* @param PredictResult				Output result of the trace (Hit result, array of location/velocity/times for each trace step, etc).
	* @return							True if hit something along the path (if tracing with collision).
	*/
	static bool PredictCapsulePath(const UObject* WorldContextObject, float HalfHeight, const struct FPredictProjectilePathParams& PredictParams, struct FPredictProjectilePathResult& PredictResult);
};