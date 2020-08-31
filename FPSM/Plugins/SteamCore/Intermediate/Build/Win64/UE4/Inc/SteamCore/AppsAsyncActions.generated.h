// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFileDetailsResult;
class UObject;
class USteamCoreAppsAsyncActionGetFileDetails;
#ifdef STEAMCORE_AppsAsyncActions_generated_h
#error "AppsAsyncActions.generated.h already included, missing '#pragma once' in AppsAsyncActions.h"
#endif
#define STEAMCORE_AppsAsyncActions_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_16_DELEGATE \
struct _Script_SteamCore_eventOnFileDetailsResultAsyncDelegate_Parms \
{ \
	FFileDetailsResult data; \
}; \
static inline void FOnFileDetailsResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultAsyncDelegate, FFileDetailsResult const& data) \
{ \
	_Script_SteamCore_eventOnFileDetailsResultAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnFileDetailsResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetFileDetailsAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetFileDetailsAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreAppsAsyncActionGetFileDetails(); \
	friend struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetFileDetails_Statics; \
public: \
	DECLARE_CLASS(USteamCoreAppsAsyncActionGetFileDetails, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreAppsAsyncActionGetFileDetails)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreAppsAsyncActionGetFileDetails(); \
	friend struct Z_Construct_UClass_USteamCoreAppsAsyncActionGetFileDetails_Statics; \
public: \
	DECLARE_CLASS(USteamCoreAppsAsyncActionGetFileDetails, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreAppsAsyncActionGetFileDetails)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreAppsAsyncActionGetFileDetails) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreAppsAsyncActionGetFileDetails); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreAppsAsyncActionGetFileDetails); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(USteamCoreAppsAsyncActionGetFileDetails&&); \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(const USteamCoreAppsAsyncActionGetFileDetails&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(USteamCoreAppsAsyncActionGetFileDetails&&); \
	NO_API USteamCoreAppsAsyncActionGetFileDetails(const USteamCoreAppsAsyncActionGetFileDetails&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreAppsAsyncActionGetFileDetails); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreAppsAsyncActionGetFileDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreAppsAsyncActionGetFileDetails)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_21_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreAppsAsyncActionGetFileDetails>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
