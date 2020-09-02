// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEIT_MITypes_generated_h
#error "MITypes.generated.h already included, missing '#pragma once' in MITypes.h"
#endif
#define MOVEIT_MITypes_generated_h

#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_386_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMIShotImpact_Statics; \
	MOVEIT_API static class UScriptStruct* StaticStruct();


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FMIShotImpact>();

#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_290_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsBlend_Statics; \
	MOVEIT_API static class UScriptStruct* StaticStruct();


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FPhysicsBlend>();

#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMIWeapon_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FMIWeapon>();

#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOrientToFloorSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FOrientToFloorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MoveIt_Source_MoveIt_Public_MITypes_h


#define FOREACH_ENUM_EPHYSICSBLENDSTATE(op) \
	op(EPhysicsBlendState::PBS_Inactive) \
	op(EPhysicsBlendState::PBS_In) \
	op(EPhysicsBlendState::PBS_Out) 

enum class EPhysicsBlendState : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EPhysicsBlendState>();

#define FOREACH_ENUM_EMIMOVEMENTSYSTEM(op) \
	op(EMIMovementSystem::MS_OrientToView) \
	op(EMIMovementSystem::MS_OrientToMovement) \
	op(EMIMovementSystem::MS_CycleOrientToMovement) 

enum class EMIMovementSystem : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIMovementSystem>();

#define FOREACH_ENUM_EMISTRAFEORIENTATION(op) \
	op(EMIStrafeOrientation::SO_Neutral) \
	op(EMIStrafeOrientation::SO_Right) 

enum class EMIStrafeOrientation : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIStrafeOrientation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
