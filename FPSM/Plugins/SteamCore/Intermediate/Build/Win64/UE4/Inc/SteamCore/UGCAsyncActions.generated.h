// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDownloadItemResult;
struct FRemoteStorageSubscribePublishedFileResult;
struct FStopPlaytimeTrackingResult;
struct FStartPlaytimeTrackingResult;
struct FSubmitItemUpdateResult;
struct FGetAppDependenciesResult;
struct FDeleteItemResult;
struct FRemoveUGCDependencyResult;
struct FAddUGCDependencyResult;
struct FRemoveAppDependencyResult;
struct FAddAppDependencyResult;
struct FSteamUGCQueryCompleted;
struct FUserFavoriteItemsListChanged;
struct FGetUserItemVoteResult;
struct FSetUserItemVoteResult;
struct FCreateItemResult;
class UObject;
class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems;
struct FPublishedFileID;
class USteamCoreUGCAsyncActionStopPlaytimeTracking;
class USteamCoreUGCAsyncActionStartPlaytimeTracking;
class USteamCoreUGCAsyncActionUnsubscribeItem;
class USteamCoreUGCAsyncActionSubscribeItem;
class USteamCoreUGCAsyncActionRemoveItemFromFavorites;
class USteamCoreUGCAsyncActionAddItemToFavorites;
class USteamCoreUGCAsyncActionGetUserItemVote;
class USteamCoreUGCAsyncActionSetUserItemVote;
struct FUGCUpdateHandle;
class USteamCoreUGCAsyncActionSubmitItemUpdate;
enum class ESteamWorkshopFileType : uint8;
class USteamCoreUGCAsyncActionCreateItem;
struct FUGCQueryHandle;
class USteamCoreUGCAsyncActionSendQueryUGCRequest;
class USteamCoreUGCAsyncActionAddAppDependency;
class USteamCoreUGCAsyncActionRemoveAppDependency;
class USteamCoreUGCAsyncActionAddUGCDependency;
class USteamCoreUGCAsyncActionRemoveUGCDependency;
class USteamCoreUGCAsyncActionDeleteItem;
class USteamCoreUGCAsyncActionGetAppDependencies;
class USteamCoreUGCAsyncActionDownloadItem;
#ifdef STEAMCORE_UGCAsyncActions_generated_h
#error "UGCAsyncActions.generated.h already included, missing '#pragma once' in UGCAsyncActions.h"
#endif
#define STEAMCORE_UGCAsyncActions_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_34_DELEGATE \
struct _Script_SteamCore_eventOnDownloadItemResultDelegate_Parms \
{ \
	FDownloadItemResult data; \
}; \
static inline void FOnDownloadItemResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDownloadItemResultDelegate, FDownloadItemResult const& data) \
{ \
	_Script_SteamCore_eventOnDownloadItemResultDelegate_Parms Parms; \
	Parms.data=data; \
	OnDownloadItemResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_33_DELEGATE \
struct _Script_SteamCore_eventOnUnsubscribeItemAsyncDelegate_Parms \
{ \
	FRemoteStorageSubscribePublishedFileResult data; \
}; \
static inline void FOnUnsubscribeItemAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUnsubscribeItemAsyncDelegate, FRemoteStorageSubscribePublishedFileResult const& data) \
{ \
	_Script_SteamCore_eventOnUnsubscribeItemAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnUnsubscribeItemAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_32_DELEGATE \
struct _Script_SteamCore_eventOnStopPlaytimeTrackingForAllItemsAsyncDelegate_Parms \
{ \
	FStopPlaytimeTrackingResult data; \
}; \
static inline void FOnStopPlaytimeTrackingForAllItemsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStopPlaytimeTrackingForAllItemsAsyncDelegate, FStopPlaytimeTrackingResult const& data) \
{ \
	_Script_SteamCore_eventOnStopPlaytimeTrackingForAllItemsAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnStopPlaytimeTrackingForAllItemsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_31_DELEGATE \
struct _Script_SteamCore_eventOnStopPlaytimeTrackingAsyncDelegate_Parms \
{ \
	FStopPlaytimeTrackingResult data; \
}; \
static inline void FOnStopPlaytimeTrackingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStopPlaytimeTrackingAsyncDelegate, FStopPlaytimeTrackingResult const& data) \
{ \
	_Script_SteamCore_eventOnStopPlaytimeTrackingAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnStopPlaytimeTrackingAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_30_DELEGATE \
struct _Script_SteamCore_eventOnStartPlaytimeTrackingAsyncDelegate_Parms \
{ \
	FStartPlaytimeTrackingResult data; \
}; \
static inline void FOnStartPlaytimeTrackingAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStartPlaytimeTrackingAsyncDelegate, FStartPlaytimeTrackingResult const& data) \
{ \
	_Script_SteamCore_eventOnStartPlaytimeTrackingAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnStartPlaytimeTrackingAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_29_DELEGATE \
struct _Script_SteamCore_eventOnSubmitItemUpdateAsyncDelegate_Parms \
{ \
	FSubmitItemUpdateResult data; \
}; \
static inline void FOnSubmitItemUpdateAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSubmitItemUpdateAsyncDelegate, FSubmitItemUpdateResult const& data) \
{ \
	_Script_SteamCore_eventOnSubmitItemUpdateAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnSubmitItemUpdateAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_28_DELEGATE \
struct _Script_SteamCore_eventOnGetAppDependenciesResultAsyncDelegate_Parms \
{ \
	FGetAppDependenciesResult data; \
}; \
static inline void FOnGetAppDependenciesResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetAppDependenciesResultAsyncDelegate, FGetAppDependenciesResult const& data) \
{ \
	_Script_SteamCore_eventOnGetAppDependenciesResultAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnGetAppDependenciesResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_27_DELEGATE \
struct _Script_SteamCore_eventOnDeleteItemResultAsyncDelegate_Parms \
{ \
	FDeleteItemResult data; \
}; \
static inline void FOnDeleteItemResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteItemResultAsyncDelegate, FDeleteItemResult const& data) \
{ \
	_Script_SteamCore_eventOnDeleteItemResultAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnDeleteItemResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_26_DELEGATE \
struct _Script_SteamCore_eventOnRemoveUGCDependencyResultAsyncDelegate_Parms \
{ \
	FRemoveUGCDependencyResult data; \
}; \
static inline void FOnRemoveUGCDependencyResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveUGCDependencyResultAsyncDelegate, FRemoveUGCDependencyResult const& data) \
{ \
	_Script_SteamCore_eventOnRemoveUGCDependencyResultAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnRemoveUGCDependencyResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_25_DELEGATE \
struct _Script_SteamCore_eventOnAddUGCDependencyResultAsyncDelegate_Parms \
{ \
	FAddUGCDependencyResult data; \
}; \
static inline void FOnAddUGCDependencyResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddUGCDependencyResultAsyncDelegate, FAddUGCDependencyResult const& data) \
{ \
	_Script_SteamCore_eventOnAddUGCDependencyResultAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnAddUGCDependencyResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_24_DELEGATE \
struct _Script_SteamCore_eventOnRemoveAppDependencyResultAsyncDelegate_Parms \
{ \
	FRemoveAppDependencyResult data; \
}; \
static inline void FOnRemoveAppDependencyResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveAppDependencyResultAsyncDelegate, FRemoveAppDependencyResult const& data) \
{ \
	_Script_SteamCore_eventOnRemoveAppDependencyResultAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnRemoveAppDependencyResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_23_DELEGATE \
struct _Script_SteamCore_eventOnAddAppDependencyResultAsyncDelegate_Parms \
{ \
	FAddAppDependencyResult data; \
}; \
static inline void FOnAddAppDependencyResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddAppDependencyResultAsyncDelegate, FAddAppDependencyResult const& data) \
{ \
	_Script_SteamCore_eventOnAddAppDependencyResultAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnAddAppDependencyResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_22_DELEGATE \
struct _Script_SteamCore_eventOnSendQueryUGCRequestAsyncDelegate_Parms \
{ \
	FSteamUGCQueryCompleted data; \
}; \
static inline void FOnSendQueryUGCRequestAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSendQueryUGCRequestAsyncDelegate, FSteamUGCQueryCompleted const& data) \
{ \
	_Script_SteamCore_eventOnSendQueryUGCRequestAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnSendQueryUGCRequestAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_21_DELEGATE \
struct _Script_SteamCore_eventOnSubscribeItemAsyncDelegate_Parms \
{ \
	FRemoteStorageSubscribePublishedFileResult data; \
}; \
static inline void FOnSubscribeItemAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSubscribeItemAsyncDelegate, FRemoteStorageSubscribePublishedFileResult const& data) \
{ \
	_Script_SteamCore_eventOnSubscribeItemAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnSubscribeItemAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_20_DELEGATE \
struct _Script_SteamCore_eventOnRemoveItemFromFavoritesAsyncDelegate_Parms \
{ \
	FUserFavoriteItemsListChanged data; \
}; \
static inline void FOnRemoveItemFromFavoritesAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveItemFromFavoritesAsyncDelegate, FUserFavoriteItemsListChanged const& data) \
{ \
	_Script_SteamCore_eventOnRemoveItemFromFavoritesAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnRemoveItemFromFavoritesAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_19_DELEGATE \
struct _Script_SteamCore_eventOnGetUserItemVoteAsyncDelegate_Parms \
{ \
	FGetUserItemVoteResult data; \
}; \
static inline void FOnGetUserItemVoteAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnGetUserItemVoteAsyncDelegate, FGetUserItemVoteResult const& data) \
{ \
	_Script_SteamCore_eventOnGetUserItemVoteAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnGetUserItemVoteAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_18_DELEGATE \
struct _Script_SteamCore_eventOnSetUserItemVoteAsyncDelegate_Parms \
{ \
	FSetUserItemVoteResult data; \
}; \
static inline void FOnSetUserItemVoteAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSetUserItemVoteAsyncDelegate, FSetUserItemVoteResult const& data) \
{ \
	_Script_SteamCore_eventOnSetUserItemVoteAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnSetUserItemVoteAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_17_DELEGATE \
struct _Script_SteamCore_eventOnCreateItemAsyncDelegate_Parms \
{ \
	FCreateItemResult data; \
}; \
static inline void FOnCreateItemAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateItemAsyncDelegate, FCreateItemResult const& data) \
{ \
	_Script_SteamCore_eventOnCreateItemAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnCreateItemAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_16_DELEGATE \
struct _Script_SteamCore_eventOnAddItemToFavoritesAsyncDelegate_Parms \
{ \
	FUserFavoriteItemsListChanged data; \
}; \
static inline void FOnAddItemToFavoritesAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddItemToFavoritesAsyncDelegate, FUserFavoriteItemsListChanged const& data) \
{ \
	_Script_SteamCore_eventOnAddItemToFavoritesAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnAddItemToFavoritesAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStopPlaytimeTrackingForAllItemsAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStopPlaytimeTrackingForAllItemsAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems&&); \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems(const USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems&&); \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems(const USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_39_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStopPlaytimeTrackingAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStopPlaytimeTrackingAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionStopPlaytimeTracking(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTracking_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionStopPlaytimeTracking, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionStopPlaytimeTracking)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionStopPlaytimeTracking(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionStopPlaytimeTracking_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionStopPlaytimeTracking, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionStopPlaytimeTracking)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTracking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionStopPlaytimeTracking) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionStopPlaytimeTracking); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionStopPlaytimeTracking); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTracking(USteamCoreUGCAsyncActionStopPlaytimeTracking&&); \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTracking(const USteamCoreUGCAsyncActionStopPlaytimeTracking&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTracking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTracking(USteamCoreUGCAsyncActionStopPlaytimeTracking&&); \
	NO_API USteamCoreUGCAsyncActionStopPlaytimeTracking(const USteamCoreUGCAsyncActionStopPlaytimeTracking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionStopPlaytimeTracking); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionStopPlaytimeTracking); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionStopPlaytimeTracking)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_61_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionStopPlaytimeTracking>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStartPlaytimeTrackingAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execStartPlaytimeTrackingAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionStartPlaytimeTracking(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionStartPlaytimeTracking_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionStartPlaytimeTracking, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionStartPlaytimeTracking)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionStartPlaytimeTracking(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionStartPlaytimeTracking_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionStartPlaytimeTracking, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionStartPlaytimeTracking)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionStartPlaytimeTracking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionStartPlaytimeTracking) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionStartPlaytimeTracking); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionStartPlaytimeTracking); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionStartPlaytimeTracking(USteamCoreUGCAsyncActionStartPlaytimeTracking&&); \
	NO_API USteamCoreUGCAsyncActionStartPlaytimeTracking(const USteamCoreUGCAsyncActionStartPlaytimeTracking&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionStartPlaytimeTracking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionStartPlaytimeTracking(USteamCoreUGCAsyncActionStartPlaytimeTracking&&); \
	NO_API USteamCoreUGCAsyncActionStartPlaytimeTracking(const USteamCoreUGCAsyncActionStartPlaytimeTracking&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionStartPlaytimeTracking); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionStartPlaytimeTracking); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionStartPlaytimeTracking)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_85_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionStartPlaytimeTracking>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execUnsubscribeItemAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execUnsubscribeItemAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionUnsubscribeItem(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionUnsubscribeItem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionUnsubscribeItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionUnsubscribeItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionUnsubscribeItem(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionUnsubscribeItem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionUnsubscribeItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionUnsubscribeItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionUnsubscribeItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionUnsubscribeItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionUnsubscribeItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionUnsubscribeItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionUnsubscribeItem(USteamCoreUGCAsyncActionUnsubscribeItem&&); \
	NO_API USteamCoreUGCAsyncActionUnsubscribeItem(const USteamCoreUGCAsyncActionUnsubscribeItem&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionUnsubscribeItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionUnsubscribeItem(USteamCoreUGCAsyncActionUnsubscribeItem&&); \
	NO_API USteamCoreUGCAsyncActionUnsubscribeItem(const USteamCoreUGCAsyncActionUnsubscribeItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionUnsubscribeItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionUnsubscribeItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionUnsubscribeItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_109_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionUnsubscribeItem>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSubscribeItemAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSubscribeItemAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionSubscribeItem(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionSubscribeItem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionSubscribeItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionSubscribeItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionSubscribeItem(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionSubscribeItem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionSubscribeItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionSubscribeItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionSubscribeItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionSubscribeItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionSubscribeItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionSubscribeItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionSubscribeItem(USteamCoreUGCAsyncActionSubscribeItem&&); \
	NO_API USteamCoreUGCAsyncActionSubscribeItem(const USteamCoreUGCAsyncActionSubscribeItem&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionSubscribeItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionSubscribeItem(USteamCoreUGCAsyncActionSubscribeItem&&); \
	NO_API USteamCoreUGCAsyncActionSubscribeItem(const USteamCoreUGCAsyncActionSubscribeItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionSubscribeItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionSubscribeItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionSubscribeItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_132_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionSubscribeItem>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRemoveItemFromFavoritesAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRemoveItemFromFavoritesAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionRemoveItemFromFavorites(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveItemFromFavorites_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionRemoveItemFromFavorites, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionRemoveItemFromFavorites)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionRemoveItemFromFavorites(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveItemFromFavorites_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionRemoveItemFromFavorites, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionRemoveItemFromFavorites)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionRemoveItemFromFavorites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionRemoveItemFromFavorites) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionRemoveItemFromFavorites); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionRemoveItemFromFavorites); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionRemoveItemFromFavorites(USteamCoreUGCAsyncActionRemoveItemFromFavorites&&); \
	NO_API USteamCoreUGCAsyncActionRemoveItemFromFavorites(const USteamCoreUGCAsyncActionRemoveItemFromFavorites&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionRemoveItemFromFavorites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionRemoveItemFromFavorites(USteamCoreUGCAsyncActionRemoveItemFromFavorites&&); \
	NO_API USteamCoreUGCAsyncActionRemoveItemFromFavorites(const USteamCoreUGCAsyncActionRemoveItemFromFavorites&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionRemoveItemFromFavorites); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionRemoveItemFromFavorites); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionRemoveItemFromFavorites)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_155_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_158_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionRemoveItemFromFavorites>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAddItemToFavoritesAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAddItemToFavoritesAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionAddItemToFavorites(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionAddItemToFavorites, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionAddItemToFavorites)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionAddItemToFavorites(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionAddItemToFavorites_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionAddItemToFavorites, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionAddItemToFavorites)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionAddItemToFavorites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionAddItemToFavorites) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionAddItemToFavorites); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionAddItemToFavorites); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionAddItemToFavorites(USteamCoreUGCAsyncActionAddItemToFavorites&&); \
	NO_API USteamCoreUGCAsyncActionAddItemToFavorites(const USteamCoreUGCAsyncActionAddItemToFavorites&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionAddItemToFavorites(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionAddItemToFavorites(USteamCoreUGCAsyncActionAddItemToFavorites&&); \
	NO_API USteamCoreUGCAsyncActionAddItemToFavorites(const USteamCoreUGCAsyncActionAddItemToFavorites&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionAddItemToFavorites); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionAddItemToFavorites); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionAddItemToFavorites)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_179_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionAddItemToFavorites>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetUserItemVoteAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetUserItemVoteAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionGetUserItemVote(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionGetUserItemVote_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionGetUserItemVote, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionGetUserItemVote)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionGetUserItemVote(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionGetUserItemVote_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionGetUserItemVote, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionGetUserItemVote)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionGetUserItemVote(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionGetUserItemVote) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionGetUserItemVote); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionGetUserItemVote); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionGetUserItemVote(USteamCoreUGCAsyncActionGetUserItemVote&&); \
	NO_API USteamCoreUGCAsyncActionGetUserItemVote(const USteamCoreUGCAsyncActionGetUserItemVote&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionGetUserItemVote(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionGetUserItemVote(USteamCoreUGCAsyncActionGetUserItemVote&&); \
	NO_API USteamCoreUGCAsyncActionGetUserItemVote(const USteamCoreUGCAsyncActionGetUserItemVote&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionGetUserItemVote); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionGetUserItemVote); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionGetUserItemVote)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_203_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_206_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionGetUserItemVote>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSetUserItemVoteAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSetUserItemVoteAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionSetUserItemVote(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionSetUserItemVote_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionSetUserItemVote, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionSetUserItemVote)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionSetUserItemVote(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionSetUserItemVote_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionSetUserItemVote, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionSetUserItemVote)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionSetUserItemVote(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionSetUserItemVote) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionSetUserItemVote); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionSetUserItemVote); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionSetUserItemVote(USteamCoreUGCAsyncActionSetUserItemVote&&); \
	NO_API USteamCoreUGCAsyncActionSetUserItemVote(const USteamCoreUGCAsyncActionSetUserItemVote&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionSetUserItemVote(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionSetUserItemVote(USteamCoreUGCAsyncActionSetUserItemVote&&); \
	NO_API USteamCoreUGCAsyncActionSetUserItemVote(const USteamCoreUGCAsyncActionSetUserItemVote&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionSetUserItemVote); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionSetUserItemVote); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionSetUserItemVote)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_226_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_229_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionSetUserItemVote>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSubmitItemUpdateAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSubmitItemUpdateAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionSubmitItemUpdate(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionSubmitItemUpdate_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionSubmitItemUpdate, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionSubmitItemUpdate)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionSubmitItemUpdate(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionSubmitItemUpdate_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionSubmitItemUpdate, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionSubmitItemUpdate)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionSubmitItemUpdate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionSubmitItemUpdate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionSubmitItemUpdate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionSubmitItemUpdate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionSubmitItemUpdate(USteamCoreUGCAsyncActionSubmitItemUpdate&&); \
	NO_API USteamCoreUGCAsyncActionSubmitItemUpdate(const USteamCoreUGCAsyncActionSubmitItemUpdate&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionSubmitItemUpdate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionSubmitItemUpdate(USteamCoreUGCAsyncActionSubmitItemUpdate&&); \
	NO_API USteamCoreUGCAsyncActionSubmitItemUpdate(const USteamCoreUGCAsyncActionSubmitItemUpdate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionSubmitItemUpdate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionSubmitItemUpdate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionSubmitItemUpdate)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_250_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_253_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionSubmitItemUpdate>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateItemAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execCreateItemAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionCreateItem(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionCreateItem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionCreateItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionCreateItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionCreateItem(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionCreateItem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionCreateItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionCreateItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionCreateItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionCreateItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionCreateItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionCreateItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionCreateItem(USteamCoreUGCAsyncActionCreateItem&&); \
	NO_API USteamCoreUGCAsyncActionCreateItem(const USteamCoreUGCAsyncActionCreateItem&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionCreateItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionCreateItem(USteamCoreUGCAsyncActionCreateItem&&); \
	NO_API USteamCoreUGCAsyncActionCreateItem(const USteamCoreUGCAsyncActionCreateItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionCreateItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionCreateItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionCreateItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_275_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_278_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionCreateItem>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSendQueryUGCRequestAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execSendQueryUGCRequestAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionSendQueryUGCRequest(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionSendQueryUGCRequest_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionSendQueryUGCRequest, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionSendQueryUGCRequest)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionSendQueryUGCRequest(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionSendQueryUGCRequest_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionSendQueryUGCRequest, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionSendQueryUGCRequest)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionSendQueryUGCRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionSendQueryUGCRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionSendQueryUGCRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionSendQueryUGCRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionSendQueryUGCRequest(USteamCoreUGCAsyncActionSendQueryUGCRequest&&); \
	NO_API USteamCoreUGCAsyncActionSendQueryUGCRequest(const USteamCoreUGCAsyncActionSendQueryUGCRequest&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionSendQueryUGCRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionSendQueryUGCRequest(USteamCoreUGCAsyncActionSendQueryUGCRequest&&); \
	NO_API USteamCoreUGCAsyncActionSendQueryUGCRequest(const USteamCoreUGCAsyncActionSendQueryUGCRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionSendQueryUGCRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionSendQueryUGCRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionSendQueryUGCRequest)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_299_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_302_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionSendQueryUGCRequest>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAddAppDependencyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAddAppDependencyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionAddAppDependency(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionAddAppDependency_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionAddAppDependency, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionAddAppDependency)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionAddAppDependency(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionAddAppDependency_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionAddAppDependency, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionAddAppDependency)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionAddAppDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionAddAppDependency) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionAddAppDependency); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionAddAppDependency); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionAddAppDependency(USteamCoreUGCAsyncActionAddAppDependency&&); \
	NO_API USteamCoreUGCAsyncActionAddAppDependency(const USteamCoreUGCAsyncActionAddAppDependency&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionAddAppDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionAddAppDependency(USteamCoreUGCAsyncActionAddAppDependency&&); \
	NO_API USteamCoreUGCAsyncActionAddAppDependency(const USteamCoreUGCAsyncActionAddAppDependency&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionAddAppDependency); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionAddAppDependency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionAddAppDependency)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_324_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_327_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionAddAppDependency>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRemoveAppDependencyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRemoveAppDependencyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionRemoveAppDependency(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionRemoveAppDependency, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionRemoveAppDependency)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionRemoveAppDependency(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveAppDependency_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionRemoveAppDependency, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionRemoveAppDependency)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionRemoveAppDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionRemoveAppDependency) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionRemoveAppDependency); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionRemoveAppDependency); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionRemoveAppDependency(USteamCoreUGCAsyncActionRemoveAppDependency&&); \
	NO_API USteamCoreUGCAsyncActionRemoveAppDependency(const USteamCoreUGCAsyncActionRemoveAppDependency&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionRemoveAppDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionRemoveAppDependency(USteamCoreUGCAsyncActionRemoveAppDependency&&); \
	NO_API USteamCoreUGCAsyncActionRemoveAppDependency(const USteamCoreUGCAsyncActionRemoveAppDependency&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionRemoveAppDependency); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionRemoveAppDependency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionRemoveAppDependency)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_351_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_354_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionRemoveAppDependency>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAddDependencyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execAddDependencyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionAddUGCDependency(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionAddUGCDependency_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionAddUGCDependency, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionAddUGCDependency)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionAddUGCDependency(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionAddUGCDependency_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionAddUGCDependency, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionAddUGCDependency)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionAddUGCDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionAddUGCDependency) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionAddUGCDependency); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionAddUGCDependency); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionAddUGCDependency(USteamCoreUGCAsyncActionAddUGCDependency&&); \
	NO_API USteamCoreUGCAsyncActionAddUGCDependency(const USteamCoreUGCAsyncActionAddUGCDependency&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionAddUGCDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionAddUGCDependency(USteamCoreUGCAsyncActionAddUGCDependency&&); \
	NO_API USteamCoreUGCAsyncActionAddUGCDependency(const USteamCoreUGCAsyncActionAddUGCDependency&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionAddUGCDependency); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionAddUGCDependency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionAddUGCDependency)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_375_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_378_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionAddUGCDependency>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRemoveDependencyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRemoveDependencyAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionRemoveUGCDependency(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveUGCDependency_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionRemoveUGCDependency, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionRemoveUGCDependency)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionRemoveUGCDependency(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionRemoveUGCDependency_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionRemoveUGCDependency, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionRemoveUGCDependency)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionRemoveUGCDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionRemoveUGCDependency) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionRemoveUGCDependency); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionRemoveUGCDependency); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionRemoveUGCDependency(USteamCoreUGCAsyncActionRemoveUGCDependency&&); \
	NO_API USteamCoreUGCAsyncActionRemoveUGCDependency(const USteamCoreUGCAsyncActionRemoveUGCDependency&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionRemoveUGCDependency(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionRemoveUGCDependency(USteamCoreUGCAsyncActionRemoveUGCDependency&&); \
	NO_API USteamCoreUGCAsyncActionRemoveUGCDependency(const USteamCoreUGCAsyncActionRemoveUGCDependency&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionRemoveUGCDependency); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionRemoveUGCDependency); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionRemoveUGCDependency)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_402_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_405_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionRemoveUGCDependency>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDeleteItemAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDeleteItemAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionDeleteItem(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionDeleteItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionDeleteItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionDeleteItem(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionDeleteItem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionDeleteItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionDeleteItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionDeleteItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionDeleteItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionDeleteItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionDeleteItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionDeleteItem(USteamCoreUGCAsyncActionDeleteItem&&); \
	NO_API USteamCoreUGCAsyncActionDeleteItem(const USteamCoreUGCAsyncActionDeleteItem&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionDeleteItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionDeleteItem(USteamCoreUGCAsyncActionDeleteItem&&); \
	NO_API USteamCoreUGCAsyncActionDeleteItem(const USteamCoreUGCAsyncActionDeleteItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionDeleteItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionDeleteItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionDeleteItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_426_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_429_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionDeleteItem>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetAppDependenciesAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execGetAppDependenciesAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionGetAppDependencies(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionGetAppDependencies_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionGetAppDependencies, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionGetAppDependencies)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionGetAppDependencies(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionGetAppDependencies_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionGetAppDependencies, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionGetAppDependencies)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionGetAppDependencies(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionGetAppDependencies) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionGetAppDependencies); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionGetAppDependencies); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionGetAppDependencies(USteamCoreUGCAsyncActionGetAppDependencies&&); \
	NO_API USteamCoreUGCAsyncActionGetAppDependencies(const USteamCoreUGCAsyncActionGetAppDependencies&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionGetAppDependencies(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionGetAppDependencies(USteamCoreUGCAsyncActionGetAppDependencies&&); \
	NO_API USteamCoreUGCAsyncActionGetAppDependencies(const USteamCoreUGCAsyncActionGetAppDependencies&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionGetAppDependencies); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionGetAppDependencies); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionGetAppDependencies)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_449_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_452_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionGetAppDependencies>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDownloadItemAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execDownloadItemAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionDownloadItem(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionDownloadItem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionDownloadItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionDownloadItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreUGCAsyncActionDownloadItem(); \
	friend struct Z_Construct_UClass_USteamCoreUGCAsyncActionDownloadItem_Statics; \
public: \
	DECLARE_CLASS(USteamCoreUGCAsyncActionDownloadItem, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreUGCAsyncActionDownloadItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionDownloadItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionDownloadItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionDownloadItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionDownloadItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionDownloadItem(USteamCoreUGCAsyncActionDownloadItem&&); \
	NO_API USteamCoreUGCAsyncActionDownloadItem(const USteamCoreUGCAsyncActionDownloadItem&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreUGCAsyncActionDownloadItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreUGCAsyncActionDownloadItem(USteamCoreUGCAsyncActionDownloadItem&&); \
	NO_API USteamCoreUGCAsyncActionDownloadItem(const USteamCoreUGCAsyncActionDownloadItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreUGCAsyncActionDownloadItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreUGCAsyncActionDownloadItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreUGCAsyncActionDownloadItem)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_474_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h_477_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreUGCAsyncActionDownloadItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_UGC_UGCAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
