// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamMessageType : uint8;
struct FHostPingData;
class UObject;
class UServerFilter;
struct FSteamID;
enum class ESteamAccountType : uint8;
struct FPublishedFileID;
enum class ESteamCoreIdentical : uint8;
struct FSteamInventoryUpdateHandle;
enum class ESteamCoreValid : uint8;
struct FSteamTicketHandle;
struct FSteamUGCHandle;
struct FSteamGameID;
#ifdef STEAMCORE_SteamUtilities_generated_h
#error "SteamUtilities.generated.h already included, missing '#pragma once' in SteamUtilities.h"
#endif
#define STEAMCORE_SteamUtilities_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_15_DELEGATE \
struct _Script_SteamCore_eventOnSteamMessage_Parms \
{ \
	ESteamMessageType type; \
	FString message; \
}; \
static inline void FOnSteamMessage_DelegateWrapper(const FScriptDelegate& OnSteamMessage, ESteamMessageType type, const FString& message) \
{ \
	_Script_SteamCore_eventOnSteamMessage_Parms Parms; \
	Parms.type=type; \
	Parms.message=message; \
	OnSteamMessage.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListenForSteamMessages); \
	DECLARE_FUNCTION(execIsRecalculatingPing); \
	DECLARE_FUNCTION(execGetPingFromHostData); \
	DECLARE_FUNCTION(execGetHostPingData); \
	DECLARE_FUNCTION(execIsUsingP2PRelays); \
	DECLARE_FUNCTION(execConstructServerFilter); \
	DECLARE_FUNCTION(execIsSteamAvailable); \
	DECLARE_FUNCTION(execIsLobby); \
	DECLARE_FUNCTION(execGetAccountType); \
	DECLARE_FUNCTION(execPublishedFileID_NotEquals); \
	DECLARE_FUNCTION(execPublishedFileID_Equals_Exec); \
	DECLARE_FUNCTION(execPublishedFileID_Equals); \
	DECLARE_FUNCTION(execNotEqual); \
	DECLARE_FUNCTION(execEqual_Exec); \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid_Exec); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid_Exec); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid); \
	DECLARE_FUNCTION(execIsUGCHandleValid_Exec); \
	DECLARE_FUNCTION(execIsUGCHandleValid); \
	DECLARE_FUNCTION(execIsGameIDValid_Exec); \
	DECLARE_FUNCTION(execIsGameIDValid); \
	DECLARE_FUNCTION(execIsSteamIDValid_Exec); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execBreakTicketHandle); \
	DECLARE_FUNCTION(execBreakInventoryUpdateHandle); \
	DECLARE_FUNCTION(execBreakUGCHandle); \
	DECLARE_FUNCTION(execBreakPublishedFileID); \
	DECLARE_FUNCTION(execBreakSteamGameID); \
	DECLARE_FUNCTION(execBreakSteamID); \
	DECLARE_FUNCTION(execMakeTicketHandle); \
	DECLARE_FUNCTION(execMakeInventoryUpdateHandle); \
	DECLARE_FUNCTION(execMakeUGCHandle); \
	DECLARE_FUNCTION(execMakePublishedFileID); \
	DECLARE_FUNCTION(execMakeSteamGameID); \
	DECLARE_FUNCTION(execMakeSteamID);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListenForSteamMessages); \
	DECLARE_FUNCTION(execIsRecalculatingPing); \
	DECLARE_FUNCTION(execGetPingFromHostData); \
	DECLARE_FUNCTION(execGetHostPingData); \
	DECLARE_FUNCTION(execIsUsingP2PRelays); \
	DECLARE_FUNCTION(execConstructServerFilter); \
	DECLARE_FUNCTION(execIsSteamAvailable); \
	DECLARE_FUNCTION(execIsLobby); \
	DECLARE_FUNCTION(execGetAccountType); \
	DECLARE_FUNCTION(execPublishedFileID_NotEquals); \
	DECLARE_FUNCTION(execPublishedFileID_Equals_Exec); \
	DECLARE_FUNCTION(execPublishedFileID_Equals); \
	DECLARE_FUNCTION(execNotEqual); \
	DECLARE_FUNCTION(execEqual_Exec); \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid_Exec); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid_Exec); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid); \
	DECLARE_FUNCTION(execIsUGCHandleValid_Exec); \
	DECLARE_FUNCTION(execIsUGCHandleValid); \
	DECLARE_FUNCTION(execIsGameIDValid_Exec); \
	DECLARE_FUNCTION(execIsGameIDValid); \
	DECLARE_FUNCTION(execIsSteamIDValid_Exec); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execBreakTicketHandle); \
	DECLARE_FUNCTION(execBreakInventoryUpdateHandle); \
	DECLARE_FUNCTION(execBreakUGCHandle); \
	DECLARE_FUNCTION(execBreakPublishedFileID); \
	DECLARE_FUNCTION(execBreakSteamGameID); \
	DECLARE_FUNCTION(execBreakSteamID); \
	DECLARE_FUNCTION(execMakeTicketHandle); \
	DECLARE_FUNCTION(execMakeInventoryUpdateHandle); \
	DECLARE_FUNCTION(execMakeUGCHandle); \
	DECLARE_FUNCTION(execMakePublishedFileID); \
	DECLARE_FUNCTION(execMakeSteamGameID); \
	DECLARE_FUNCTION(execMakeSteamID);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamUtilities(); \
	friend struct Z_Construct_UClass_USteamUtilities_Statics; \
public: \
	DECLARE_CLASS(USteamUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamUtilities)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUSteamUtilities(); \
	friend struct Z_Construct_UClass_USteamUtilities_Statics; \
public: \
	DECLARE_CLASS(USteamUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(USteamUtilities)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamUtilities(USteamUtilities&&); \
	NO_API USteamUtilities(const USteamUtilities&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamUtilities(USteamUtilities&&); \
	NO_API USteamUtilities(const USteamUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamUtilities)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_43_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class USteamUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_SteamCore_SteamUtilities_h


#define FOREACH_ENUM_ESTEAMCOREIDENTICAL(op) \
	op(ESteamCoreIdentical::Identical) \
	op(ESteamCoreIdentical::NotIdentical) 

enum class ESteamCoreIdentical : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreIdentical>();

#define FOREACH_ENUM_ESTEAMCOREVALID(op) \
	op(ESteamCoreValid::Valid) \
	op(ESteamCoreValid::NotValid) 

enum class ESteamCoreValid : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreValid>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
