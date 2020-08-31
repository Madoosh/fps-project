// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStoreAuthURLResponse;
struct FEncryptedAppTicketResponse;
class UObject;
class USteamCoreUserAsyncActionRequestEncryptedAppTicket;
class USteamCoreUserAsyncActionRequestStoreAuthURL;
#ifdef STEAMCORE_UserAsyncActions_generated_h
#error "UserAsyncActions.generated.h already included, missing '#pragma once' in UserAsyncActions.h"
#endif
#define STEAMCORE_UserAsyncActions_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_17_DELEGATE \
struct _Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms \
{ \
	FStoreAuthURLResponse data; \
}; \
static inline void FRequestStoreAuthURLDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestStoreAuthURLDelegate, FStoreAuthURLResponse const& data) \
{ \
	_Script_SteamCore_eventRequestStoreAuthURLDelegate_Parms Parms; \
	Parms.data=data; \
	RequestStoreAuthURLDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_16_DELEGATE \
struct _Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms \
{ \
	FEncryptedAppTicketResponse data; \
}; \
static inline void FRequestEncryptedAppTicketDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestEncryptedAppTicketDelegate, FEncryptedAppTicketResponse const& data) \
{ \
	_Script_SteamCore_eventRequestEncryptedAppTicketDelegate_Parms Parms; \
	Parms.data=data; \
	RequestEncryptedAppTicketDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicketAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEncryptedAppTicketAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestEncryptedAppTicket(); \
	friend struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUserAsyncActionRequestEncryptedAppTicket, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestEncryptedAppTicket)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestEncryptedAppTicket(); \
	friend struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestEncryptedAppTicket_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUserAsyncActionRequestEncryptedAppTicket, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestEncryptedAppTicket)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestEncryptedAppTicket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(USteamCoreUserAsyncActionRequestEncryptedAppTicket&&); \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const USteamCoreUserAsyncActionRequestEncryptedAppTicket&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(USteamCoreUserAsyncActionRequestEncryptedAppTicket&&); \
	NO_API USteamCoreUserAsyncActionRequestEncryptedAppTicket(const USteamCoreUserAsyncActionRequestEncryptedAppTicket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestEncryptedAppTicket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestEncryptedAppTicket)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_22_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUserAsyncActionRequestEncryptedAppTicket>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestStoreAuthURLAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestStoreAuthURLAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestStoreAuthURL(); \
	friend struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUserAsyncActionRequestStoreAuthURL, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestStoreAuthURL)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUserAsyncActionRequestStoreAuthURL(); \
	friend struct Z_Construct_UClass_USteamCoreUserAsyncActionRequestStoreAuthURL_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUserAsyncActionRequestStoreAuthURL, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUserAsyncActionRequestStoreAuthURL)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestStoreAuthURL) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestStoreAuthURL); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestStoreAuthURL); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(USteamCoreUserAsyncActionRequestStoreAuthURL&&); \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const USteamCoreUserAsyncActionRequestStoreAuthURL&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(USteamCoreUserAsyncActionRequestStoreAuthURL&&); \
	NO_API USteamCoreUserAsyncActionRequestStoreAuthURL(const USteamCoreUserAsyncActionRequestStoreAuthURL&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUserAsyncActionRequestStoreAuthURL); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUserAsyncActionRequestStoreAuthURL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUserAsyncActionRequestStoreAuthURL)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_47_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUserAsyncActionRequestStoreAuthURL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
