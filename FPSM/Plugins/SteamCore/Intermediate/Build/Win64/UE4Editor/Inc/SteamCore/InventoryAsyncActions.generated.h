// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamInventoryRequestPricesResult;
struct FSteamInventoryEligiblePromoItemDefIDs;
class UObject;
struct FSteamID;
class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs;
class USteamCoreInventoryAsyncActionRequestPricesResult;
#ifdef STEAMCORE_InventoryAsyncActions_generated_h
#error "InventoryAsyncActions.generated.h already included, missing '#pragma once' in InventoryAsyncActions.h"
#endif
#define STEAMCORE_InventoryAsyncActions_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_18_DELEGATE \
struct _Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms \
{ \
	FSteamInventoryRequestPricesResult data; \
}; \
static inline void FOnSteamInventoryRequestPricesResultAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSteamInventoryRequestPricesResultAsyncDelegate, FSteamInventoryRequestPricesResult const& data) \
{ \
	_Script_SteamCore_eventOnSteamInventoryRequestPricesResultAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnSteamInventoryRequestPricesResultAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_17_DELEGATE \
struct _Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms \
{ \
	FSteamInventoryEligiblePromoItemDefIDs data; \
}; \
static inline void FOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate, FSteamInventoryEligiblePromoItemDefIDs const& data) \
{ \
	_Script_SteamCore_eventOnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate_Parms Parms; \
	Parms.data=data; \
	OnRequestEligiblePromoItemDefinitionsIDsAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDsAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestEligiblePromoItemDefinitionsIDsAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(); \
	friend struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics; \
public: \
	DECLARE_CLASS(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(); \
	friend struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs_Statics; \
public: \
	DECLARE_CLASS(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs&&); \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs&&); \
	NO_API USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs(const USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_23_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestPricesAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execRequestPricesAsync);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestPricesResult(); \
	friend struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics; \
public: \
	DECLARE_CLASS(USteamCoreInventoryAsyncActionRequestPricesResult, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionRequestPricesResult)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUSteamCoreInventoryAsyncActionRequestPricesResult(); \
	friend struct Z_Construct_UClass_USteamCoreInventoryAsyncActionRequestPricesResult_Statics; \
public: \
	DECLARE_CLASS(USteamCoreInventoryAsyncActionRequestPricesResult, USteamCoreAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreInventoryAsyncActionRequestPricesResult)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionRequestPricesResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionRequestPricesResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionRequestPricesResult); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(USteamCoreInventoryAsyncActionRequestPricesResult&&); \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(const USteamCoreInventoryAsyncActionRequestPricesResult&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(USteamCoreInventoryAsyncActionRequestPricesResult&&); \
	NO_API USteamCoreInventoryAsyncActionRequestPricesResult(const USteamCoreInventoryAsyncActionRequestPricesResult&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreInventoryAsyncActionRequestPricesResult); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreInventoryAsyncActionRequestPricesResult); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreInventoryAsyncActionRequestPricesResult)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_48_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamCoreInventoryAsyncActionRequestPricesResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Inventory_InventoryAsyncActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
