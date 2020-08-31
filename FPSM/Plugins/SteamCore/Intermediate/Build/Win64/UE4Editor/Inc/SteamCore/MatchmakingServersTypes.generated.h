// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameServerRule;
struct FGameServerItem;
 
#ifdef STEAMCORE_MatchmakingServersTypes_generated_h
#error "MatchmakingServersTypes.generated.h already included, missing '#pragma once' in MatchmakingServersTypes.h"
#endif
#define STEAMCORE_MatchmakingServersTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_180_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameServerRule_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGameServerRule>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameServerItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGameServerItem>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamServerAddr_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__IP() { return STRUCT_OFFSET(FSteamServerAddr, IP); } \
	FORCEINLINE static uint32 __PPO__Port() { return STRUCT_OFFSET(FSteamServerAddr, Port); } \
	FORCEINLINE static uint32 __PPO__QueryPort() { return STRUCT_OFFSET(FSteamServerAddr, QueryPort); } \
	FORCEINLINE static uint32 __PPO__ConnectionAddressString() { return STRUCT_OFFSET(FSteamServerAddr, ConnectionAddressString); } \
	FORCEINLINE static uint32 __PPO__SteamP2PAddr() { return STRUCT_OFFSET(FSteamServerAddr, SteamP2PAddr); }


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamServerAddr>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_200_DELEGATE \
struct _Script_SteamCore_eventOnServerRules_Parms \
{ \
	TArray<FGameServerRule> data; \
	bool bWasSuccessful; \
}; \
static inline void FOnServerRules_DelegateWrapper(const FScriptDelegate& OnServerRules, TArray<FGameServerRule> const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnServerRules_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnServerRules.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_199_DELEGATE \
struct _Script_SteamCore_eventOnServerPing_Parms \
{ \
	FGameServerItem data; \
	bool bWasSuccessful; \
}; \
static inline void FOnServerPing_DelegateWrapper(const FScriptDelegate& OnServerPing, FGameServerItem const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnServerPing_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnServerPing.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_198_DELEGATE \
struct _Script_SteamCore_eventOnServersUpdated_Parms \
{ \
	TArray<FGameServerItem> data; \
	bool bWasSuccessful; \
}; \
static inline void FOnServersUpdated_DelegateWrapper(const FScriptDelegate& OnServersUpdated, TArray<FGameServerItem> const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnServersUpdated_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnServersUpdated.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFilters); \
	DECLARE_FUNCTION(execAddFilterLinux); \
	DECLARE_FUNCTION(execAddFilterNoPlayers); \
	DECLARE_FUNCTION(execAddFilterHasPlayers); \
	DECLARE_FUNCTION(execAddFilterNotFull); \
	DECLARE_FUNCTION(execAddFilterSecure); \
	DECLARE_FUNCTION(execAddFilterDedicated); \
	DECLARE_FUNCTION(execAddFilterGameAddr); \
	DECLARE_FUNCTION(execAddFilterNor); \
	DECLARE_FUNCTION(execAddFilterNand); \
	DECLARE_FUNCTION(execAddFilterOr); \
	DECLARE_FUNCTION(execAddFilterAnd); \
	DECLARE_FUNCTION(execAddFilterGameTagsNor); \
	DECLARE_FUNCTION(execAddFilterGameTagsAnd); \
	DECLARE_FUNCTION(execAddFilterGameDataNor); \
	DECLARE_FUNCTION(execAddFilterGameDataOr); \
	DECLARE_FUNCTION(execAddFilterGameDataAnd); \
	DECLARE_FUNCTION(execAddFilterMap);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFilters); \
	DECLARE_FUNCTION(execAddFilterLinux); \
	DECLARE_FUNCTION(execAddFilterNoPlayers); \
	DECLARE_FUNCTION(execAddFilterHasPlayers); \
	DECLARE_FUNCTION(execAddFilterNotFull); \
	DECLARE_FUNCTION(execAddFilterSecure); \
	DECLARE_FUNCTION(execAddFilterDedicated); \
	DECLARE_FUNCTION(execAddFilterGameAddr); \
	DECLARE_FUNCTION(execAddFilterNor); \
	DECLARE_FUNCTION(execAddFilterNand); \
	DECLARE_FUNCTION(execAddFilterOr); \
	DECLARE_FUNCTION(execAddFilterAnd); \
	DECLARE_FUNCTION(execAddFilterGameTagsNor); \
	DECLARE_FUNCTION(execAddFilterGameTagsAnd); \
	DECLARE_FUNCTION(execAddFilterGameDataNor); \
	DECLARE_FUNCTION(execAddFilterGameDataOr); \
	DECLARE_FUNCTION(execAddFilterGameDataAnd); \
	DECLARE_FUNCTION(execAddFilterMap);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUServerFilter(); \
	friend struct Z_Construct_UClass_UServerFilter_Statics; \
public: \
	DECLARE_CLASS(UServerFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UServerFilter)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUServerFilter(); \
	friend struct Z_Construct_UClass_UServerFilter_Statics; \
public: \
	DECLARE_CLASS(UServerFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UServerFilter)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UServerFilter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UServerFilter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerFilter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerFilter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerFilter(UServerFilter&&); \
	NO_API UServerFilter(const UServerFilter&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UServerFilter(UServerFilter&&); \
	NO_API UServerFilter(const UServerFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UServerFilter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UServerFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UServerFilter)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_15_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UServerFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_MatchmakingServers_MatchmakingServersTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
