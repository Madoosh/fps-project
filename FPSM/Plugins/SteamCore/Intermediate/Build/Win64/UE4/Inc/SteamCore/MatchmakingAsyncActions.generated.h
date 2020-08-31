// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJoinLobbyData;
struct FCreateLobbyData;
struct FLobbyMatchList;
class UObject;
enum class ESteamLobbyType : uint8;
class USteamCoreMatchmakingAsyncActionCreateLobby;
class USteamCoreMatchmakingAsyncActionRequestLobbyList;
struct FSteamID;
class USteamCoreMatchmakingAsyncActionJoinLobby;
class USteamCoreCreateSession;
enum class ESteamSessionFindType : uint8;
class USteamCoreFindSession;
class USteamCoreDestroySession;
#ifdef STEAMCORE_MatchmakingAsyncActions_generated_h
#error "MatchmakingAsyncActions.generated.h already included, missing '#pragma once' in MatchmakingAsyncActions.h"
#endif
#define STEAMCORE_MatchmakingAsyncActions_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_22_DELEGATE \
struct _Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms \
{ \
	FJoinLobbyData data; \
}; \
static inline void FOnJoinLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinLobbyAsyncDelegate, FJoinLobbyData const& data) \
{ \
	_Script_SteamCore_eventOnJoinLobbyAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnJoinLobbyAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_21_DELEGATE \
struct _Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms \
{ \
	FCreateLobbyData data; \
}; \
static inline void FOnCreateLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateLobbyAsyncDelegate, FCreateLobbyData const& data) \
{ \
	_Script_SteamCore_eventOnCreateLobbyAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnCreateLobbyAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_20_DELEGATE \
struct _Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms \
{ \
	FLobbyMatchList data; \
}; \
static inline void FOnRequestLobbyListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestLobbyListAsyncDelegate, FLobbyMatchList const& data) \
{ \
	_Script_SteamCore_eventOnRequestLobbyListAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnRequestLobbyListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateLobbyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateLobbyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionCreateLobby(); \
	friend struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics; \
public: \
	DECLARE_CLASS(USteamCoreMatchmakingAsyncActionCreateLobby, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionCreateLobby)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionCreateLobby(); \
	friend struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionCreateLobby_Statics; \
public: \
	DECLARE_CLASS(USteamCoreMatchmakingAsyncActionCreateLobby, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionCreateLobby)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionCreateLobby) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionCreateLobby); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionCreateLobby); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(USteamCoreMatchmakingAsyncActionCreateLobby&&); \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(const USteamCoreMatchmakingAsyncActionCreateLobby&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(USteamCoreMatchmakingAsyncActionCreateLobby&&); \
	NO_API USteamCoreMatchmakingAsyncActionCreateLobby(const USteamCoreMatchmakingAsyncActionCreateLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionCreateLobby); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionCreateLobby); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionCreateLobby)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_29_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreMatchmakingAsyncActionCreateLobby>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestLobbyListAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestLobbyListAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionRequestLobbyList(); \
	friend struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics; \
public: \
	DECLARE_CLASS(USteamCoreMatchmakingAsyncActionRequestLobbyList, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionRequestLobbyList)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionRequestLobbyList(); \
	friend struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionRequestLobbyList_Statics; \
public: \
	DECLARE_CLASS(USteamCoreMatchmakingAsyncActionRequestLobbyList, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionRequestLobbyList)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionRequestLobbyList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionRequestLobbyList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionRequestLobbyList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(USteamCoreMatchmakingAsyncActionRequestLobbyList&&); \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(const USteamCoreMatchmakingAsyncActionRequestLobbyList&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(USteamCoreMatchmakingAsyncActionRequestLobbyList&&); \
	NO_API USteamCoreMatchmakingAsyncActionRequestLobbyList(const USteamCoreMatchmakingAsyncActionRequestLobbyList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionRequestLobbyList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionRequestLobbyList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionRequestLobbyList)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_53_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreMatchmakingAsyncActionRequestLobbyList>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinLobbyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinLobbyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionJoinLobby(); \
	friend struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics; \
public: \
	DECLARE_CLASS(USteamCoreMatchmakingAsyncActionJoinLobby, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionJoinLobby)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreMatchmakingAsyncActionJoinLobby(); \
	friend struct Z_Construct_UClass_USteamCoreMatchmakingAsyncActionJoinLobby_Statics; \
public: \
	DECLARE_CLASS(USteamCoreMatchmakingAsyncActionJoinLobby, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreMatchmakingAsyncActionJoinLobby)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionJoinLobby) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionJoinLobby); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionJoinLobby); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(USteamCoreMatchmakingAsyncActionJoinLobby&&); \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(const USteamCoreMatchmakingAsyncActionJoinLobby&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(USteamCoreMatchmakingAsyncActionJoinLobby&&); \
	NO_API USteamCoreMatchmakingAsyncActionJoinLobby(const USteamCoreMatchmakingAsyncActionJoinLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreMatchmakingAsyncActionJoinLobby); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreMatchmakingAsyncActionJoinLobby); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreMatchmakingAsyncActionJoinLobby)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_79_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreMatchmakingAsyncActionJoinLobby>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSteamCoreSession);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSteamCoreSession);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreCreateSession(); \
	friend struct Z_Construct_UClass_USteamCoreCreateSession_Statics; \
public: \
	DECLARE_CLASS(USteamCoreCreateSession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreCreateSession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreCreateSession(); \
	friend struct Z_Construct_UClass_USteamCoreCreateSession_Statics; \
public: \
	DECLARE_CLASS(USteamCoreCreateSession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreCreateSession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreCreateSession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreCreateSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreCreateSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreCreateSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreCreateSession(USteamCoreCreateSession&&); \
	NO_API USteamCoreCreateSession(const USteamCoreCreateSession&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreCreateSession(USteamCoreCreateSession&&); \
	NO_API USteamCoreCreateSession(const USteamCoreCreateSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreCreateSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreCreateSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreCreateSession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_103_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreCreateSession>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execFindSteamCoreSessions);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execFindSteamCoreSessions);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFindSession(); \
	friend struct Z_Construct_UClass_USteamCoreFindSession_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFindSession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFindSession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreFindSession(); \
	friend struct Z_Construct_UClass_USteamCoreFindSession_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFindSession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFindSession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFindSession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFindSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFindSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFindSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFindSession(USteamCoreFindSession&&); \
	NO_API USteamCoreFindSession(const USteamCoreFindSession&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFindSession(USteamCoreFindSession&&); \
	NO_API USteamCoreFindSession(const USteamCoreFindSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFindSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFindSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreFindSession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_143_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreFindSession>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execDestroySteamCoreSession);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execDestroySteamCoreSession);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreDestroySession(); \
	friend struct Z_Construct_UClass_USteamCoreDestroySession_Statics; \
public: \
	DECLARE_CLASS(USteamCoreDestroySession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreDestroySession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreDestroySession(); \
	friend struct Z_Construct_UClass_USteamCoreDestroySession_Statics; \
public: \
	DECLARE_CLASS(USteamCoreDestroySession, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreDestroySession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreDestroySession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreDestroySession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreDestroySession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreDestroySession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreDestroySession(USteamCoreDestroySession&&); \
	NO_API USteamCoreDestroySession(const USteamCoreDestroySession&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreDestroySession(USteamCoreDestroySession&&); \
	NO_API USteamCoreDestroySession(const USteamCoreDestroySession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreDestroySession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreDestroySession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamCoreDestroySession)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_187_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreDestroySession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
