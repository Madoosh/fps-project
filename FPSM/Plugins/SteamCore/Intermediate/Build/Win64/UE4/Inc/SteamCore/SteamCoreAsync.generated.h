// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_SteamCoreAsync_generated_h
#error "SteamCoreAsync.generated.h already included, missing '#pragma once' in SteamCoreAsync.h"
#endif
#define STEAMCORE_SteamCoreAsync_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_16_DELEGATE \
static inline void FOnFailure_DelegateWrapper(const FMulticastScriptDelegate& OnFailure) \
{ \
	OnFailure.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_RPC_WRAPPERS
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreAsyncAction(); \
	friend struct Z_Construct_UClass_USteamCoreAsyncAction_Statics; \
public: \
	DECLARE_CLASS(USteamCoreAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreAsyncAction)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreAsyncAction(); \
	friend struct Z_Construct_UClass_USteamCoreAsyncAction_Statics; \
public: \
	DECLARE_CLASS(USteamCoreAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreAsyncAction)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreAsyncAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreAsyncAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreAsyncAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreAsyncAction(USteamCoreAsyncAction&&); \
	NO_API USteamCoreAsyncAction(const USteamCoreAsyncAction&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreAsyncAction(USteamCoreAsyncAction&&); \
	NO_API USteamCoreAsyncAction(const USteamCoreAsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreAsyncAction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreAsyncAction)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_71_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreAsyncAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
