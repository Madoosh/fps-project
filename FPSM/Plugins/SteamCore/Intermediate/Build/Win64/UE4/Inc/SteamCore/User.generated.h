// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamID;
enum class ESteamUserHasLicenseForAppResult : uint8;
enum class ESteamVoiceResult : uint8;
struct FSteamTicketHandle;
enum class ESteamBeginAuthSessionResult : uint8;
#ifdef STEAMCORE_User_generated_h
#error "User.generated.h already included, missing '#pragma once' in User.h"
#endif
#define STEAMCORE_User_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execStartVoiceRecording); \
	DECLARE_FUNCTION(execRequestStoreAuthURL); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execGetVoice); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetSteamID_Pure); \
	DECLARE_FUNCTION(execGetPlayerSteamLevel); \
	DECLARE_FUNCTION(execGetGameBadgeLevel); \
	DECLARE_FUNCTION(execGetEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetAvailableVoice); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBIsTwoFactorEnabled); \
	DECLARE_FUNCTION(execBIsPhoneVerified); \
	DECLARE_FUNCTION(execBIsPhoneRequiringVerification); \
	DECLARE_FUNCTION(execBIsPhoneIdentifying); \
	DECLARE_FUNCTION(execBIsBehindNAT); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAdvertiseGame);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUserHasLicenseForApp); \
	DECLARE_FUNCTION(execStopVoiceRecording); \
	DECLARE_FUNCTION(execStartVoiceRecording); \
	DECLARE_FUNCTION(execRequestStoreAuthURL); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetVoiceOptimalSampleRate); \
	DECLARE_FUNCTION(execGetVoice); \
	DECLARE_FUNCTION(execGetSteamID); \
	DECLARE_FUNCTION(execGetSteamID_Pure); \
	DECLARE_FUNCTION(execGetPlayerSteamLevel); \
	DECLARE_FUNCTION(execGetGameBadgeLevel); \
	DECLARE_FUNCTION(execGetEncryptedAppTicket); \
	DECLARE_FUNCTION(execGetAvailableVoice); \
	DECLARE_FUNCTION(execGetAuthSessionTicket); \
	DECLARE_FUNCTION(execEndAuthSession); \
	DECLARE_FUNCTION(execDecompressVoice); \
	DECLARE_FUNCTION(execCancelAuthTicket); \
	DECLARE_FUNCTION(execBLoggedOn); \
	DECLARE_FUNCTION(execBIsTwoFactorEnabled); \
	DECLARE_FUNCTION(execBIsPhoneVerified); \
	DECLARE_FUNCTION(execBIsPhoneRequiringVerification); \
	DECLARE_FUNCTION(execBIsPhoneIdentifying); \
	DECLARE_FUNCTION(execBIsBehindNAT); \
	DECLARE_FUNCTION(execBeginAuthSession); \
	DECLARE_FUNCTION(execAdvertiseGame);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUser(); \
	friend struct Z_Construct_UClass_UUser_Statics; \
public: \
	DECLARE_CLASS(UUser, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUser)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUser(); \
	friend struct Z_Construct_UClass_UUser_Statics; \
public: \
	DECLARE_CLASS(UUser, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UUser)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUser(UUser&&); \
	NO_API UUser(const UUser&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUser(UUser&&); \
	NO_API UUser(const UUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUser)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_14_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UUser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_User_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
