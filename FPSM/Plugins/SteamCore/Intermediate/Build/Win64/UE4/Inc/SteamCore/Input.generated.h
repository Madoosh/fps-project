// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputHandle;
enum class ESteamCoreInputType : uint8;
enum class ESteamCoreInputActionOrigin : uint8;
enum class ESteamCoreXboxOrigin : uint8;
enum class ESteamCoreControllerPad : uint8;
enum class ESteamCoreInputLEDFlag : uint8;
struct FInputMotionData;
struct FInputAnalogActionHandle;
struct FInputActionSetHandle;
struct FInputAnalogActionData;
struct FInputDigitalActionHandle;
struct FInputDigitalActionData;
#ifdef STEAMCORE_Input_generated_h
#error "Input.generated.h already included, missing '#pragma once' in Input.h"
#endif
#define STEAMCORE_Input_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_SPARSE_DATA
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRemotePlaySessionID); \
	DECLARE_FUNCTION(execGetDeviceBindingRevision); \
	DECLARE_FUNCTION(execTranslateActionOrigin); \
	DECLARE_FUNCTION(execGetActionOriginFromXboxOrigin); \
	DECLARE_FUNCTION(execGetGlyphForXboxOrigin); \
	DECLARE_FUNCTION(execGetStringForXboxOrigin); \
	DECLARE_FUNCTION(execGetGamepadIndexForController); \
	DECLARE_FUNCTION(execGetControllerForGamepadIndex); \
	DECLARE_FUNCTION(execGetInputTypeForHandle); \
	DECLARE_FUNCTION(execShowBindingPanel); \
	DECLARE_FUNCTION(execTriggerRepeatedHapticPulse); \
	DECLARE_FUNCTION(execTriggerHapticPulse); \
	DECLARE_FUNCTION(execSetLEDColor); \
	DECLARE_FUNCTION(execTriggerVibration); \
	DECLARE_FUNCTION(execGetMotionData); \
	DECLARE_FUNCTION(execStopAnalogActionMomentum); \
	DECLARE_FUNCTION(execGetStringForActionOrigin); \
	DECLARE_FUNCTION(execGetGlyphForActionOrigin); \
	DECLARE_FUNCTION(execGetAnalogActionOrigins); \
	DECLARE_FUNCTION(execGetAnalogActionData); \
	DECLARE_FUNCTION(execGetAnalogActionHandle); \
	DECLARE_FUNCTION(execGetDigitalActionOrigins); \
	DECLARE_FUNCTION(execGetDigitalActionData); \
	DECLARE_FUNCTION(execGetDigitalActionHandle); \
	DECLARE_FUNCTION(execGetActiveActionSetLayers); \
	DECLARE_FUNCTION(execDeactivateAllActionSetLayers); \
	DECLARE_FUNCTION(execDeactivateActionSetLayer); \
	DECLARE_FUNCTION(execActivateActionSetLayer); \
	DECLARE_FUNCTION(execGetCurrentActionSet); \
	DECLARE_FUNCTION(execActivateActionSet); \
	DECLARE_FUNCTION(execGetActionSetHandle);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRemotePlaySessionID); \
	DECLARE_FUNCTION(execGetDeviceBindingRevision); \
	DECLARE_FUNCTION(execTranslateActionOrigin); \
	DECLARE_FUNCTION(execGetActionOriginFromXboxOrigin); \
	DECLARE_FUNCTION(execGetGlyphForXboxOrigin); \
	DECLARE_FUNCTION(execGetStringForXboxOrigin); \
	DECLARE_FUNCTION(execGetGamepadIndexForController); \
	DECLARE_FUNCTION(execGetControllerForGamepadIndex); \
	DECLARE_FUNCTION(execGetInputTypeForHandle); \
	DECLARE_FUNCTION(execShowBindingPanel); \
	DECLARE_FUNCTION(execTriggerRepeatedHapticPulse); \
	DECLARE_FUNCTION(execTriggerHapticPulse); \
	DECLARE_FUNCTION(execSetLEDColor); \
	DECLARE_FUNCTION(execTriggerVibration); \
	DECLARE_FUNCTION(execGetMotionData); \
	DECLARE_FUNCTION(execStopAnalogActionMomentum); \
	DECLARE_FUNCTION(execGetStringForActionOrigin); \
	DECLARE_FUNCTION(execGetGlyphForActionOrigin); \
	DECLARE_FUNCTION(execGetAnalogActionOrigins); \
	DECLARE_FUNCTION(execGetAnalogActionData); \
	DECLARE_FUNCTION(execGetAnalogActionHandle); \
	DECLARE_FUNCTION(execGetDigitalActionOrigins); \
	DECLARE_FUNCTION(execGetDigitalActionData); \
	DECLARE_FUNCTION(execGetDigitalActionHandle); \
	DECLARE_FUNCTION(execGetActiveActionSetLayers); \
	DECLARE_FUNCTION(execDeactivateAllActionSetLayers); \
	DECLARE_FUNCTION(execDeactivateActionSetLayer); \
	DECLARE_FUNCTION(execActivateActionSetLayer); \
	DECLARE_FUNCTION(execGetCurrentActionSet); \
	DECLARE_FUNCTION(execActivateActionSet); \
	DECLARE_FUNCTION(execGetActionSetHandle);


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInput(); \
	friend struct Z_Construct_UClass_UInput_Statics; \
public: \
	DECLARE_CLASS(UInput, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UInput)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUInput(); \
	friend struct Z_Construct_UClass_UInput_Statics; \
public: \
	DECLARE_CLASS(UInput, USteamCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCore"), NO_API) \
	DECLARE_SERIALIZER(UInput)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInput(UInput&&); \
	NO_API UInput(const UInput&); \
public:


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInput(UInput&&); \
	NO_API UInput(const UInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInput); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInput)


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_14_PROLOG
#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_RPC_WRAPPERS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_INCLASS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_SPARSE_DATA \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCORE_API UClass* StaticClass<class UInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Input_Input_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
