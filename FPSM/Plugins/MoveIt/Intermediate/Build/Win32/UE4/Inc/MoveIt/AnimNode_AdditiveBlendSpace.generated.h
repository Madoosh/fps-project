// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEIT_AnimNode_AdditiveBlendSpace_generated_h
#error "AnimNode_AdditiveBlendSpace.generated.h already included, missing '#pragma once' in AnimNode_AdditiveBlendSpace.h"
#endif
#define MOVEIT_AnimNode_AdditiveBlendSpace_generated_h

#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveBlendSpace_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_BlendSpacePlayer Super;


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FAnimNode_AdditiveBlendSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MoveIt_Source_MoveIt_Public_AnimNodes_AnimNode_AdditiveBlendSpace_h


#define FOREACH_ENUM_EMIADDITIVETYPE(op) \
	op(EMIAdditiveType::MIAS_Additive) \
	op(EMIAdditiveType::MIAS_MeshSpaceAdditive) 

enum class EMIAdditiveType : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIAdditiveType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
