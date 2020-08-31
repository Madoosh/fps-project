// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFriendsGetFollowerCount;
struct FFriendsIsFollowing;
struct FFriendsEnumerateFollowingList;
struct FJoinClanChatRoomCompletionResult;
struct FClanOfficerListResponse;
struct FDownloadClanActivityCountsResult;
struct FSetPersonaNameResponse;
class UObject;
class USteamCoreFriendsAsyncActionSetPersonaName;
struct FSteamID;
class USteamCoreFriendsAsyncActionDownloadClanActivityCounts;
class USteamCoreFriendsAsyncActionRequestClanOfficerList;
class USteamCoreFriendsAsyncActionJoinClanChatRoom;
class USteamCoreFriendsAsyncActionEnumerateFollowingList;
class USteamCoreFriendsAsyncActionIsFollowing;
class USteamCoreFriendsAsyncActionGetFollowerCount;
#ifdef STEAMCORE_FriendsAsyncActions_generated_h
#error "FriendsAsyncActions.generated.h already included, missing '#pragma once' in FriendsAsyncActions.h"
#endif
#define STEAMCORE_FriendsAsyncActions_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_23_DELEGATE \
struct _Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms \
{ \
	FFriendsGetFollowerCount data; \
}; \
static inline void FOnGetFollowerCountAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetFollowerCountAsyncDelegate, FFriendsGetFollowerCount const& data) \
{ \
	_Script_SteamCore_eventOnGetFollowerCountAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnGetFollowerCountAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_22_DELEGATE \
struct _Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms \
{ \
	FFriendsIsFollowing data; \
}; \
static inline void FOnIsFollowingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnIsFollowingAsyncDelegate, FFriendsIsFollowing const& data) \
{ \
	_Script_SteamCore_eventOnIsFollowingAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnIsFollowingAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_21_DELEGATE \
struct _Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms \
{ \
	FFriendsEnumerateFollowingList data; \
}; \
static inline void FOnEnumerateFollowingListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEnumerateFollowingListAsyncDelegate, FFriendsEnumerateFollowingList const& data) \
{ \
	_Script_SteamCore_eventOnEnumerateFollowingListAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnEnumerateFollowingListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_20_DELEGATE \
struct _Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms \
{ \
	FJoinClanChatRoomCompletionResult data; \
}; \
static inline void FOnJoinClanChatRoomAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinClanChatRoomAsyncDelegate, FJoinClanChatRoomCompletionResult const& data) \
{ \
	_Script_SteamCore_eventOnJoinClanChatRoomAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnJoinClanChatRoomAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_19_DELEGATE \
struct _Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms \
{ \
	FClanOfficerListResponse data; \
}; \
static inline void FOnRequestClanOfficerListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestClanOfficerListAsyncDelegate, FClanOfficerListResponse const& data) \
{ \
	_Script_SteamCore_eventOnRequestClanOfficerListAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnRequestClanOfficerListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_18_DELEGATE \
struct _Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms \
{ \
	FDownloadClanActivityCountsResult data; \
}; \
static inline void FOnDownloadClanActivityCountsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadClanActivityCountsAsyncDelegate, FDownloadClanActivityCountsResult const& data) \
{ \
	_Script_SteamCore_eventOnDownloadClanActivityCountsAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnDownloadClanActivityCountsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_17_DELEGATE \
struct _Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms \
{ \
	FSetPersonaNameResponse data; \
}; \
static inline void FOnSetPersonaNameAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSetPersonaNameAsyncDelegate, FSetPersonaNameResponse const& data) \
{ \
	_Script_SteamCore_eventOnSetPersonaNameAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnSetPersonaNameAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSetPersonaNameAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSetPersonaNameAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionSetPersonaName(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionSetPersonaName, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionSetPersonaName)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionSetPersonaName(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionSetPersonaName_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionSetPersonaName, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionSetPersonaName)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionSetPersonaName(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionSetPersonaName) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionSetPersonaName); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionSetPersonaName); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionSetPersonaName(USteamCoreFriendsAsyncActionSetPersonaName&&); \
	NO_API USteamCoreFriendsAsyncActionSetPersonaName(const USteamCoreFriendsAsyncActionSetPersonaName&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionSetPersonaName(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionSetPersonaName(USteamCoreFriendsAsyncActionSetPersonaName&&); \
	NO_API USteamCoreFriendsAsyncActionSetPersonaName(const USteamCoreFriendsAsyncActionSetPersonaName&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionSetPersonaName); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionSetPersonaName); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionSetPersonaName)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_28_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreFriendsAsyncActionSetPersonaName>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDownloadClanActivityCountsAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDownloadClanActivityCountsAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionDownloadClanActivityCounts(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionDownloadClanActivityCounts, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionDownloadClanActivityCounts)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionDownloadClanActivityCounts(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionDownloadClanActivityCounts_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionDownloadClanActivityCounts, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionDownloadClanActivityCounts)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionDownloadClanActivityCounts(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionDownloadClanActivityCounts) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionDownloadClanActivityCounts); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionDownloadClanActivityCounts); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionDownloadClanActivityCounts(USteamCoreFriendsAsyncActionDownloadClanActivityCounts&&); \
	NO_API USteamCoreFriendsAsyncActionDownloadClanActivityCounts(const USteamCoreFriendsAsyncActionDownloadClanActivityCounts&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionDownloadClanActivityCounts(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionDownloadClanActivityCounts(USteamCoreFriendsAsyncActionDownloadClanActivityCounts&&); \
	NO_API USteamCoreFriendsAsyncActionDownloadClanActivityCounts(const USteamCoreFriendsAsyncActionDownloadClanActivityCounts&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionDownloadClanActivityCounts); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionDownloadClanActivityCounts); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionDownloadClanActivityCounts)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_54_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreFriendsAsyncActionDownloadClanActivityCounts>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestClanOfficerListAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestClanOfficerListAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionRequestClanOfficerList(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionRequestClanOfficerList, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionRequestClanOfficerList)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionRequestClanOfficerList(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionRequestClanOfficerList_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionRequestClanOfficerList, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionRequestClanOfficerList)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionRequestClanOfficerList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionRequestClanOfficerList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionRequestClanOfficerList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionRequestClanOfficerList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionRequestClanOfficerList(USteamCoreFriendsAsyncActionRequestClanOfficerList&&); \
	NO_API USteamCoreFriendsAsyncActionRequestClanOfficerList(const USteamCoreFriendsAsyncActionRequestClanOfficerList&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionRequestClanOfficerList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionRequestClanOfficerList(USteamCoreFriendsAsyncActionRequestClanOfficerList&&); \
	NO_API USteamCoreFriendsAsyncActionRequestClanOfficerList(const USteamCoreFriendsAsyncActionRequestClanOfficerList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionRequestClanOfficerList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionRequestClanOfficerList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionRequestClanOfficerList)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_79_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreFriendsAsyncActionRequestClanOfficerList>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinClanChatRoomAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execJoinClanChatRoomAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionJoinClanChatRoom(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionJoinClanChatRoom, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionJoinClanChatRoom)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionJoinClanChatRoom(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionJoinClanChatRoom_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionJoinClanChatRoom, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionJoinClanChatRoom)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionJoinClanChatRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionJoinClanChatRoom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionJoinClanChatRoom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionJoinClanChatRoom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionJoinClanChatRoom(USteamCoreFriendsAsyncActionJoinClanChatRoom&&); \
	NO_API USteamCoreFriendsAsyncActionJoinClanChatRoom(const USteamCoreFriendsAsyncActionJoinClanChatRoom&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionJoinClanChatRoom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionJoinClanChatRoom(USteamCoreFriendsAsyncActionJoinClanChatRoom&&); \
	NO_API USteamCoreFriendsAsyncActionJoinClanChatRoom(const USteamCoreFriendsAsyncActionJoinClanChatRoom&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionJoinClanChatRoom); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionJoinClanChatRoom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionJoinClanChatRoom)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_104_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreFriendsAsyncActionJoinClanChatRoom>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execEnumerateFollowingListAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execEnumerateFollowingListAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionEnumerateFollowingList(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionEnumerateFollowingList, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionEnumerateFollowingList)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionEnumerateFollowingList(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionEnumerateFollowingList_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionEnumerateFollowingList, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionEnumerateFollowingList)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionEnumerateFollowingList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionEnumerateFollowingList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionEnumerateFollowingList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionEnumerateFollowingList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionEnumerateFollowingList(USteamCoreFriendsAsyncActionEnumerateFollowingList&&); \
	NO_API USteamCoreFriendsAsyncActionEnumerateFollowingList(const USteamCoreFriendsAsyncActionEnumerateFollowingList&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionEnumerateFollowingList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionEnumerateFollowingList(USteamCoreFriendsAsyncActionEnumerateFollowingList&&); \
	NO_API USteamCoreFriendsAsyncActionEnumerateFollowingList(const USteamCoreFriendsAsyncActionEnumerateFollowingList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionEnumerateFollowingList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionEnumerateFollowingList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionEnumerateFollowingList)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_129_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreFriendsAsyncActionEnumerateFollowingList>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execIsFollowingAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execIsFollowingAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionIsFollowing(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionIsFollowing, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionIsFollowing)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionIsFollowing(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionIsFollowing_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionIsFollowing, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionIsFollowing)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionIsFollowing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionIsFollowing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionIsFollowing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionIsFollowing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionIsFollowing(USteamCoreFriendsAsyncActionIsFollowing&&); \
	NO_API USteamCoreFriendsAsyncActionIsFollowing(const USteamCoreFriendsAsyncActionIsFollowing&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionIsFollowing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionIsFollowing(USteamCoreFriendsAsyncActionIsFollowing&&); \
	NO_API USteamCoreFriendsAsyncActionIsFollowing(const USteamCoreFriendsAsyncActionIsFollowing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionIsFollowing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionIsFollowing); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionIsFollowing)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_155_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_158_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreFriendsAsyncActionIsFollowing>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetFollowerCountAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetFollowerCountAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionGetFollowerCount(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionGetFollowerCount, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionGetFollowerCount)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreFriendsAsyncActionGetFollowerCount(); \
	friend struct Z_Construct_UClass_USteamCoreFriendsAsyncActionGetFollowerCount_Statics; \
public: \
	DECLARE_CLASS(USteamCoreFriendsAsyncActionGetFollowerCount, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreFriendsAsyncActionGetFollowerCount)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionGetFollowerCount(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionGetFollowerCount) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionGetFollowerCount); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionGetFollowerCount); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionGetFollowerCount(USteamCoreFriendsAsyncActionGetFollowerCount&&); \
	NO_API USteamCoreFriendsAsyncActionGetFollowerCount(const USteamCoreFriendsAsyncActionGetFollowerCount&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreFriendsAsyncActionGetFollowerCount(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreFriendsAsyncActionGetFollowerCount(USteamCoreFriendsAsyncActionGetFollowerCount&&); \
	NO_API USteamCoreFriendsAsyncActionGetFollowerCount(const USteamCoreFriendsAsyncActionGetFollowerCount&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreFriendsAsyncActionGetFollowerCount); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreFriendsAsyncActionGetFollowerCount); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreFriendsAsyncActionGetFollowerCount)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_178_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreFriendsAsyncActionGetFollowerCount>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Friends_FriendsAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
