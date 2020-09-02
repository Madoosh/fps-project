// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "Curves/CurveFloat.h"
#include "Niagara/Classes/NiagaraSystem.h"
#include "MIPhysicalMaterial.generated.h"

UENUM(BlueprintType)
enum class EMIParticleSystemType : uint8
{
	MIPST_Legacy			UMETA(DisplayName = "Legacy"),
	MIPST_Niagara			UMETA(DisplayName = "Niagara"),
};

/**
 * Custom physical material with surface interaction effects
 */
UCLASS(BlueprintType, Blueprintable)
class MOVEIT_API UMIPhysicalMaterial : public UPhysicalMaterial
{
	GENERATED_BODY()
	
public:
	/** Sound played when the character runs into this surface at speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	USoundBase* HitSound;

	/** Sound played when the character walks beside/into this surface (scuffling sound) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	USoundBase* ScuffSound;

	/** Sound played when the character walks on this surface (footstep sound, usually) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound, meta = (DisplayName = "Bone Impact Sound (Footstep)"))
	USoundBase* BoneImpactSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Particle)
	EMIParticleSystemType ParticleSystemType;

	/** Particle spawned when the character runs into this surface at speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Particle, meta = (DisplayName = "Hit Particle", EditCondition = "ParticleSystemType == EMIParticleSystemType::MIPST_Niagara"))
	UNiagaraSystem* HitNiagara;

	/** Particle spawned when the character walks beside/into this surface (scuffling sound) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Particle, meta = (DisplayName = "Scuff Particle", EditCondition = "ParticleSystemType == EMIParticleSystemType::MIPST_Niagara"))
	UNiagaraSystem* ScuffNiagara;

	/** Particle spawned when the character walks on this surface (footstep sound, usually) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Particle, meta = (DisplayName = "Bone Impact Particle (Footstep)", EditCondition = "ParticleSystemType == EMIParticleSystemType::MIPST_Niagara"))
	UNiagaraSystem* BoneImpactNiagara;

	/** Particle spawned when the character runs into this surface at speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Particle, meta = (EditCondition = "ParticleSystemType == EMIParticleSystemType::MIPST_Legacy"))
	UParticleSystem* HitParticle;

	/** Particle spawned when the character walks beside/into this surface (scuffling sound) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Particle, meta = (EditCondition = "ParticleSystemType == EMIParticleSystemType::MIPST_Legacy"))
	UParticleSystem* ScuffParticle;
	
	/** Particle spawned when the character walks on this surface (footstep sound, usually) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Particle, meta = (DisplayName = "Bone Impact Particle (Footstep)", EditCondition = "ParticleSystemType == EMIParticleSystemType::MIPST_Legacy"))
	UParticleSystem* BoneImpactParticle;

	/** Maps Velocity [Time] to Volume [Value] when the character runs into this surface at speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound, meta = (DisplayName = "Hit [Velocity -> Volume]"))
	FRuntimeFloatCurve HitVelocityToVolume;

	/** Maps Velocity [Time] to Pitch [Value] when the character runs into this surface at speed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound, meta = (DisplayName = "Hit [Velocity -> Pitch]"))
	FRuntimeFloatCurve HitVelocityToPitch;
	
	/** Maps Velocity [Time] to Volume [Value] when the character walks beside/into this surface (scuffling sound) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound, meta = (DisplayName = "Scuff [Velocity -> Volume]"))
	FRuntimeFloatCurve ScuffVelocityToVolume;

	/** Maps Velocity [Time] to Pitch [Value] when the character walks beside/into this surface (scuffling sound) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound, meta = (DisplayName = "Scuff [Velocity -> Pitch]"))
	FRuntimeFloatCurve ScuffVelocityToPitch;

	/**  Maps Velocity [Time] to Volume [Value] when the character walks beside/into this surface (scuffling sound) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound, meta = (DisplayName = "Bone Impact (Footstep) [Velocity -> Volume]"))
	FRuntimeFloatCurve BoneImpactVelocityToVolume;

	/**  Maps Velocity [Time] to Pitch [Value] when the character walks beside/into this surface (scuffling sound) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound, meta = (DisplayName = "Bone Impact (Footstep) [Velocity -> Pitch]"))
	FRuntimeFloatCurve BoneImpactVelocityToPitch;

	UMIPhysicalMaterial()
		: HitSound(nullptr)
		, ScuffSound(nullptr)
		, BoneImpactSound(nullptr)
		, ParticleSystemType(EMIParticleSystemType::MIPST_Niagara)
		, HitParticle(nullptr)
		, ScuffParticle(nullptr)
		, BoneImpactParticle(nullptr)
	{
		HitVelocityToVolume.GetRichCurve()->AddKey(300.f, 1.0f);
		HitVelocityToVolume.GetRichCurve()->AddKey(700.f, 1.5f);
		HitVelocityToPitch.GetRichCurve()->AddKey(0.f, 1.0f);

		ScuffVelocityToVolume.GetRichCurve()->AddKey(0.f, 1.0f);
		ScuffVelocityToPitch.GetRichCurve()->AddKey(0.f, 1.0f);

		BoneImpactVelocityToVolume.GetRichCurve()->AddKey(0.f, 1.0f);
		BoneImpactVelocityToPitch.GetRichCurve()->AddKey(0.f, 1.0f);
	}	
};
