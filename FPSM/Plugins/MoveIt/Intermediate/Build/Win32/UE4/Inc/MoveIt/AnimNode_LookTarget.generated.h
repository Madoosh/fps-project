// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEIT_AnimNode_LookTarget_generated_h
#error "AnimNode_LookTarget.generated.h already included, missing '#pragma once' in AnimNode_LookTarget.h"
#endif
#define MOVEIT_AnimNode_LookTarget_generated_h

#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LookTarget_h_400_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_LookTarget_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_LocalSkeletalControlBase Super;


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FAnimNode_LookTarget>();

#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LookTarget_h_346_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMILookTargetBone_Statics; \
	MOVEIT_API static class UScriptStruct* StaticStruct();


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FMILookTargetBone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_LookTarget_h


#define FOREACH_ENUM_EMILOOKTARGETINPUT(op) \
	op(EMILookTargetInput::LTI_Actor) \
	op(EMILookTargetInput::LTI_Location) 

enum class EMILookTargetInput : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMILookTargetInput>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
