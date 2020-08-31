// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_Video_generated_h
#error "Video.generated.h already included, missing '#pragma once' in Video.h"
#endif
#define STEAMCORE_Video_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsBroadcasting); \
	DECLARE_FUNCTION(execGetVideoURL); \
	DECLARE_FUNCTION(execGetOPFStringForApp); \
	DECLARE_FUNCTION(execGetOPFSettings);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsBroadcasting); \
	DECLARE_FUNCTION(execGetVideoURL); \
	DECLARE_FUNCTION(execGetOPFStringForApp); \
	DECLARE_FUNCTION(execGetOPFSettings);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVideo(); \
	friend struct Z_Construct_UClass_UVideo_Statics; \
public: \
	DECLARE_CLASS(UVideo, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UVideo)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVideo(); \
	friend struct Z_Construct_UClass_UVideo_Statics; \
public: \
	DECLARE_CLASS(UVideo, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UVideo)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVideo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVideo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVideo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVideo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVideo(UVideo&&); \
	NO_API UVideo(const UVideo&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVideo(UVideo&&); \
	NO_API UVideo(const UVideo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVideo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVideo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVideo)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_14_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UVideo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_Video_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
