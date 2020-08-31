// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCORE_SteamCoreSettings_generated_h
#error "SteamCoreSettings.generated.h already included, missing '#pragma once' in SteamCoreSettings.h"
#endif
#define STEAMCORE_SteamCoreSettings_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_RPC_WRAPPERS
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreSettings(); \
	friend struct Z_Construct_UClass_USteamCoreSettings_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreSettings(); \
	friend struct Z_Construct_UClass_USteamCoreSettings_Statics; \
public: \
	DECLARE_CLASS(USteamCoreSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSettings(USteamCoreSettings&&); \
	NO_API USteamCoreSettings(const USteamCoreSettings&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreSettings(USteamCoreSettings&&); \
	NO_API USteamCoreSettings(const USteamCoreSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreSettings)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_42_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamCoreSettings_h


#define FOREACH_ENUM_ESUBSYSTEM(op) \
	op(ESubsystem::SteamCore) \
	op(ESubsystem::AppList) \
	op(ESubsystem::Apps) \
	op(ESubsystem::Friends) \
	op(ESubsystem::GameServer) \
	op(ESubsystem::GameServerStats) \
	op(ESubsystem::Inventory) \
	op(ESubsystem::Input) \
	op(ESubsystem::Matchmaking) \
	op(ESubsystem::MatchmakingServers) \
	op(ESubsystem::Music) \
	op(ESubsystem::Networking) \
	op(ESubsystem::NetworkingUtils) \
	op(ESubsystem::ParentalSettings) \
	op(ESubsystem::RemoteStorage) \
	op(ESubsystem::RemotePlay) \
	op(ESubsystem::Screenshots) \
	op(ESubsystem::UGC) \
	op(ESubsystem::User) \
	op(ESubsystem::UserStats) \
	op(ESubsystem::Utils) \
	op(ESubsystem::Video) 

enum class ESubsystem : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESubsystem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
