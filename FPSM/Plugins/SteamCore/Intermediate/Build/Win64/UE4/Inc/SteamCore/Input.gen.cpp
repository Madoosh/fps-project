// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Input/Input.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInput() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UInput_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UInput();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputType();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad();
// End Cross Module References
	DEFINE_FUNCTION(UInput::execGetRemotePlaySessionID)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemotePlaySessionID(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetDeviceBindingRevision)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_major);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_minor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDeviceBindingRevision(Z_Param_handle,Z_Param_Out_major,Z_Param_Out_minor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execTranslateActionOrigin)
	{
		P_GET_ENUM(ESteamCoreInputType,Z_Param_destinationInputType);
		P_GET_ENUM(ESteamCoreInputActionOrigin,Z_Param_sourceOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamCoreInputActionOrigin*)Z_Param__Result=P_THIS->TranslateActionOrigin(ESteamCoreInputType(Z_Param_destinationInputType),ESteamCoreInputActionOrigin(Z_Param_sourceOrigin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetActionOriginFromXboxOrigin)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_ENUM(ESteamCoreXboxOrigin,Z_Param_origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamCoreInputActionOrigin*)Z_Param__Result=P_THIS->GetActionOriginFromXboxOrigin(Z_Param_handle,ESteamCoreXboxOrigin(Z_Param_origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetGlyphForXboxOrigin)
	{
		P_GET_ENUM(ESteamCoreXboxOrigin,Z_Param_origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGlyphForXboxOrigin(ESteamCoreXboxOrigin(Z_Param_origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetStringForXboxOrigin)
	{
		P_GET_ENUM(ESteamCoreXboxOrigin,Z_Param_origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringForXboxOrigin(ESteamCoreXboxOrigin(Z_Param_origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetGamepadIndexForController)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGamepadIndexForController(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetControllerForGamepadIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputHandle*)Z_Param__Result=P_THIS->GetControllerForGamepadIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetInputTypeForHandle)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamCoreInputType*)Z_Param__Result=P_THIS->GetInputTypeForHandle(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execShowBindingPanel)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowBindingPanel(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execTriggerRepeatedHapticPulse)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_ENUM(ESteamCoreControllerPad,Z_Param_targetPad);
		P_GET_PROPERTY(FByteProperty,Z_Param_durationMicroSec);
		P_GET_PROPERTY(FByteProperty,Z_Param_offMicroSec);
		P_GET_PROPERTY(FByteProperty,Z_Param_repeat);
		P_GET_PROPERTY(FByteProperty,Z_Param_flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerRepeatedHapticPulse(Z_Param_handle,ESteamCoreControllerPad(Z_Param_targetPad),Z_Param_durationMicroSec,Z_Param_offMicroSec,Z_Param_repeat,Z_Param_flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execTriggerHapticPulse)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_ENUM(ESteamCoreControllerPad,Z_Param_targetPad);
		P_GET_PROPERTY(FByteProperty,Z_Param_durationMicroSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerHapticPulse(Z_Param_handle,ESteamCoreControllerPad(Z_Param_targetPad),Z_Param_durationMicroSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execSetLEDColor)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_PROPERTY(FByteProperty,Z_Param_colorR);
		P_GET_PROPERTY(FByteProperty,Z_Param_colorG);
		P_GET_PROPERTY(FByteProperty,Z_Param_colorB);
		P_GET_ENUM(ESteamCoreInputLEDFlag,Z_Param_flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLEDColor(Z_Param_handle,Z_Param_colorR,Z_Param_colorG,Z_Param_colorB,ESteamCoreInputLEDFlag(Z_Param_flags));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execTriggerVibration)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_PROPERTY(FByteProperty,Z_Param_leftSpeed);
		P_GET_PROPERTY(FByteProperty,Z_Param_rightSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerVibration(Z_Param_handle,Z_Param_leftSpeed,Z_Param_rightSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetMotionData)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputMotionData*)Z_Param__Result=P_THIS->GetMotionData(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execStopAnalogActionMomentum)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_eAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnalogActionMomentum(Z_Param_handle,Z_Param_eAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetStringForActionOrigin)
	{
		P_GET_ENUM(ESteamCoreInputActionOrigin,Z_Param_origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringForActionOrigin(ESteamCoreInputActionOrigin(Z_Param_origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetGlyphForActionOrigin)
	{
		P_GET_ENUM(ESteamCoreInputActionOrigin,Z_Param_origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetGlyphForActionOrigin(ESteamCoreInputActionOrigin(Z_Param_origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetAnalogActionOrigins)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_actionSetHandle);
		P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_analogActionHandle);
		P_GET_TARRAY_REF(ESteamCoreInputActionOrigin,Z_Param_Out_originsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAnalogActionOrigins(Z_Param_handle,Z_Param_actionSetHandle,Z_Param_analogActionHandle,Z_Param_Out_originsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetAnalogActionData)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_STRUCT(FInputAnalogActionHandle,Z_Param_analogActionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputAnalogActionData*)Z_Param__Result=P_THIS->GetAnalogActionData(Z_Param_handle,Z_Param_analogActionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetAnalogActionHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pszActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputAnalogActionHandle*)Z_Param__Result=P_THIS->GetAnalogActionHandle(Z_Param_pszActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetDigitalActionOrigins)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_actionSetHandle);
		P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_digitalActionHandle);
		P_GET_TARRAY_REF(ESteamCoreInputActionOrigin,Z_Param_Out_originsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDigitalActionOrigins(Z_Param_handle,Z_Param_actionSetHandle,Z_Param_digitalActionHandle,Z_Param_Out_originsOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetDigitalActionData)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_STRUCT(FInputDigitalActionHandle,Z_Param_digitalActionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputDigitalActionData*)Z_Param__Result=P_THIS->GetDigitalActionData(Z_Param_handle,Z_Param_digitalActionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetDigitalActionHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pszActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputDigitalActionHandle*)Z_Param__Result=P_THIS->GetDigitalActionHandle(Z_Param_pszActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetActiveActionSetLayers)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_TARRAY_REF(FInputActionSetHandle,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActiveActionSetLayers(Z_Param_handle,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execDeactivateAllActionSetLayers)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateAllActionSetLayers(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execDeactivateActionSetLayer)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_actionSetLayerHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateActionSetLayer(Z_Param_handle,Z_Param_actionSetLayerHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execActivateActionSetLayer)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_actionSetLayerHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateActionSetLayer(Z_Param_handle,Z_Param_actionSetLayerHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetCurrentActionSet)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetCurrentActionSet(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execActivateActionSet)
	{
		P_GET_STRUCT(FInputHandle,Z_Param_handle);
		P_GET_STRUCT(FInputActionSetHandle,Z_Param_actionSetHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateActionSet(Z_Param_handle,Z_Param_actionSetHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInput::execGetActionSetHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_actionSetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionSetHandle*)Z_Param__Result=P_THIS->GetActionSetHandle(Z_Param_actionSetName);
		P_NATIVE_END;
	}
	void UInput::StaticRegisterNativesUInput()
	{
		UClass* Class = UInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateActionSet", &UInput::execActivateActionSet },
			{ "ActivateActionSetLayer", &UInput::execActivateActionSetLayer },
			{ "DeactivateActionSetLayer", &UInput::execDeactivateActionSetLayer },
			{ "DeactivateAllActionSetLayers", &UInput::execDeactivateAllActionSetLayers },
			{ "GetActionOriginFromXboxOrigin", &UInput::execGetActionOriginFromXboxOrigin },
			{ "GetActionSetHandle", &UInput::execGetActionSetHandle },
			{ "GetActiveActionSetLayers", &UInput::execGetActiveActionSetLayers },
			{ "GetAnalogActionData", &UInput::execGetAnalogActionData },
			{ "GetAnalogActionHandle", &UInput::execGetAnalogActionHandle },
			{ "GetAnalogActionOrigins", &UInput::execGetAnalogActionOrigins },
			{ "GetControllerForGamepadIndex", &UInput::execGetControllerForGamepadIndex },
			{ "GetCurrentActionSet", &UInput::execGetCurrentActionSet },
			{ "GetDeviceBindingRevision", &UInput::execGetDeviceBindingRevision },
			{ "GetDigitalActionData", &UInput::execGetDigitalActionData },
			{ "GetDigitalActionHandle", &UInput::execGetDigitalActionHandle },
			{ "GetDigitalActionOrigins", &UInput::execGetDigitalActionOrigins },
			{ "GetGamepadIndexForController", &UInput::execGetGamepadIndexForController },
			{ "GetGlyphForActionOrigin", &UInput::execGetGlyphForActionOrigin },
			{ "GetGlyphForXboxOrigin", &UInput::execGetGlyphForXboxOrigin },
			{ "GetInputTypeForHandle", &UInput::execGetInputTypeForHandle },
			{ "GetMotionData", &UInput::execGetMotionData },
			{ "GetRemotePlaySessionID", &UInput::execGetRemotePlaySessionID },
			{ "GetStringForActionOrigin", &UInput::execGetStringForActionOrigin },
			{ "GetStringForXboxOrigin", &UInput::execGetStringForXboxOrigin },
			{ "SetLEDColor", &UInput::execSetLEDColor },
			{ "ShowBindingPanel", &UInput::execShowBindingPanel },
			{ "StopAnalogActionMomentum", &UInput::execStopAnalogActionMomentum },
			{ "TranslateActionOrigin", &UInput::execTranslateActionOrigin },
			{ "TriggerHapticPulse", &UInput::execTriggerHapticPulse },
			{ "TriggerRepeatedHapticPulse", &UInput::execTriggerRepeatedHapticPulse },
			{ "TriggerVibration", &UInput::execTriggerVibration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInput_ActivateActionSet_Statics
	{
		struct Input_eventActivateActionSet_Parms
		{
			FInputHandle handle;
			FInputActionSetHandle actionSetHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actionSetHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_actionSetHandle = { "actionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventActivateActionSet_Parms, actionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventActivateActionSet_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_actionSetHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSet_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Reconfigure the controller to use the specified action set (ie \"Menu\", \"Walk\", or \"Drive\").\n\x09*\n\x09* This is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The handle of the controller you want to activate an action set for.\n\x09* @param\x09""actionSetHandle\x09\x09The handle of the action set you want to activate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Reconfigure the controller to use the specified action set (ie \"Menu\", \"Walk\", or \"Drive\").\n\nThis is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\n@param        handle                          The handle of the controller you want to activate an action set for.\n@param        actionSetHandle         The handle of the action set you want to activate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_ActivateActionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "ActivateActionSet", nullptr, nullptr, sizeof(Input_eventActivateActionSet_Parms), Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_ActivateActionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_ActivateActionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics
	{
		struct Input_eventActivateActionSetLayer_Parms
		{
			FInputHandle handle;
			FInputActionSetHandle actionSetLayerHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actionSetLayerHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_actionSetLayerHandle = { "actionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventActivateActionSetLayer_Parms, actionSetLayerHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventActivateActionSetLayer_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_actionSetLayerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Reconfigure the controller to use the specified action set layer.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09\x09The handle of the controller you want to activate an action set layer for.\n\x09* @param\x09""actionSetLayerHandle\x09The handle of the action set layer you want to activate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Reconfigure the controller to use the specified action set layer.\n\n@param        handle                                  The handle of the controller you want to activate an action set layer for.\n@param        actionSetLayerHandle    The handle of the action set layer you want to activate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "ActivateActionSetLayer", nullptr, nullptr, sizeof(Input_eventActivateActionSetLayer_Parms), Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_ActivateActionSetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_ActivateActionSetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics
	{
		struct Input_eventDeactivateActionSetLayer_Parms
		{
			FInputHandle handle;
			FInputActionSetHandle actionSetLayerHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actionSetLayerHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_actionSetLayerHandle = { "actionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventDeactivateActionSetLayer_Parms, actionSetLayerHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventDeactivateActionSetLayer_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_actionSetLayerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Reconfigure the controller to stop using the specified action set layer.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09\x09The handle of the controller you want to deactivate an action set layer for.\n\x09* @param\x09""actionSetLayerHandle\x09The handle of the action set layer you want to deactivate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Reconfigure the controller to stop using the specified action set layer.\n\n@param        handle                                  The handle of the controller you want to deactivate an action set layer for.\n@param        actionSetLayerHandle    The handle of the action set layer you want to deactivate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "DeactivateActionSetLayer", nullptr, nullptr, sizeof(Input_eventDeactivateActionSetLayer_Parms), Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_DeactivateActionSetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_DeactivateActionSetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics
	{
		struct Input_eventDeactivateAllActionSetLayers_Parms
		{
			FInputHandle handle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventDeactivateAllActionSetLayers_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Reconfigure the controller to stop using all action set layers.\n\x09*\n\x09* @param\x09handle\x09The handle of the controller you want to deactivate all action set layers for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Reconfigure the controller to stop using all action set layers.\n\n@param        handle  The handle of the controller you want to deactivate all action set layers for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "DeactivateAllActionSetLayers", nullptr, nullptr, sizeof(Input_eventDeactivateAllActionSetLayers_Parms), Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics
	{
		struct Input_eventGetActionOriginFromXboxOrigin_Parms
		{
			FInputHandle handle;
			ESteamCoreXboxOrigin origin;
			ESteamCoreInputActionOrigin ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_origin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_origin_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActionOriginFromXboxOrigin_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActionOriginFromXboxOrigin_Parms, origin), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActionOriginFromXboxOrigin_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_origin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get an action origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\x09*\n\x09* @param\x09handle\x09\x09The handle of the controller to affect. You can use GetControllerForGamepadIndex to get this handle\n\x09* @param\x09origin\x09\x09This is the button you want to get the image for ex: k_EXboxOrigin_A\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Get an action origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n\n@param        handle          The handle of the controller to affect. You can use GetControllerForGamepadIndex to get this handle\n@param        origin          This is the button you want to get the image for ex: k_EXboxOrigin_A" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetActionOriginFromXboxOrigin", nullptr, nullptr, sizeof(Input_eventGetActionOriginFromXboxOrigin_Parms), Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetActionSetHandle_Statics
	{
		struct Input_eventGetActionSetHandle_Parms
		{
			FString actionSetName;
			FInputActionSetHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_actionSetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActionSetHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_actionSetName = { "actionSetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActionSetHandle_Parms, actionSetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::NewProp_actionSetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Lookup the handle for an Action Set. Best to do this once on startup, and store the handles for all future API calls.\n\x09*\n\x09* @param\x09""actionSetName\x09The string identifier of an action set defined in the game's VDF file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Lookup the handle for an Action Set. Best to do this once on startup, and store the handles for all future API calls.\n\n@param        actionSetName   The string identifier of an action set defined in the game's VDF file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetActionSetHandle", nullptr, nullptr, sizeof(Input_eventGetActionSetHandle_Parms), Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetActionSetHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetActionSetHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics
	{
		struct Input_eventGetActiveActionSetLayers_Parms
		{
			FInputHandle handle;
			TArray<FInputActionSetHandle> data;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActiveActionSetLayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActiveActionSetLayers_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetActiveActionSetLayers_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Fill an array with all of the currently active action set layers for a specified controller handle.\n\x09*\n\x09* @param\x09handle\x09\x09The handle of the controller you want to deactivate all action set layers for.\n\x09* @param\x09""data\x09\x09This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Fill an array with all of the currently active action set layers for a specified controller handle.\n\n@param        handle          The handle of the controller you want to deactivate all action set layers for.\n@param        data            This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetActiveActionSetLayers", nullptr, nullptr, sizeof(Input_eventGetActiveActionSetLayers_Parms), Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetActiveActionSetLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetActiveActionSetLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetAnalogActionData_Statics
	{
		struct Input_eventGetAnalogActionData_Parms
		{
			FInputHandle handle;
			FInputAnalogActionHandle analogActionHandle;
			FInputAnalogActionData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_analogActionHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_analogActionHandle = { "analogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionData_Parms, analogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionData_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_analogActionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the current state of the supplied analog game action.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09\x09The handle of the controller you want to query.\n\x09* @param\x09""analogActionHandle\x09\x09The handle of the analog action you want to query.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Returns the current state of the supplied analog game action.\n\n@param        handle                                  The handle of the controller you want to query.\n@param        analogActionHandle              The handle of the analog action you want to query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetAnalogActionData", nullptr, nullptr, sizeof(Input_eventGetAnalogActionData_Parms), Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetAnalogActionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetAnalogActionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics
	{
		struct Input_eventGetAnalogActionHandle_Parms
		{
			FString pszActionName;
			FInputAnalogActionHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pszActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_pszActionName = { "pszActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionHandle_Parms, pszActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::NewProp_pszActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the handle of the specified Analog action.\n\x09*\n\x09* @param\x09pszActionName\x09\x09The string identifier of the analog action defined in the game's VDF file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Get the handle of the specified Analog action.\n\n@param        pszActionName           The string identifier of the analog action defined in the game's VDF file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetAnalogActionHandle", nullptr, nullptr, sizeof(Input_eventGetAnalogActionHandle_Parms), Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetAnalogActionHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetAnalogActionHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics
	{
		struct Input_eventGetAnalogActionOrigins_Parms
		{
			FInputHandle handle;
			FInputActionSetHandle actionSetHandle;
			FInputAnalogActionHandle analogActionHandle;
			TArray<ESteamCoreInputActionOrigin> originsOut;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_originsOut;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_originsOut_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_originsOut_Inner_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_analogActionHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actionSetHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_originsOut = { "originsOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, originsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_originsOut_Inner = { "originsOut", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_originsOut_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_analogActionHandle = { "analogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, analogActionHandle), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_actionSetHandle = { "actionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, actionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetAnalogActionOrigins_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_originsOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_originsOut_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_originsOut_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_analogActionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_actionSetHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the origin(s) for an analog action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09\x09The handle of the controller you want to query.\n\x09* @param\x09""actionSetHandle\x09\x09\x09The handle of the action set you want to query.\n\x09* @param\x09""analogActionHandle\x09\x09The handle of the analog action you want to query.\n\x09* @param\x09originsOut\x09\x09\x09\x09""A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin handles.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Get the origin(s) for an analog action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action.\n\n@param        handle                                  The handle of the controller you want to query.\n@param        actionSetHandle                 The handle of the action set you want to query.\n@param        analogActionHandle              The handle of the analog action you want to query.\n@param        originsOut                              A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin handles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetAnalogActionOrigins", nullptr, nullptr, sizeof(Input_eventGetAnalogActionOrigins_Parms), Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetAnalogActionOrigins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetAnalogActionOrigins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics
	{
		struct Input_eventGetControllerForGamepadIndex_Parms
		{
			int32 index;
			FInputHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetControllerForGamepadIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetControllerForGamepadIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the associated controller handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.\n\x09*\n\x09* @param\x09index\x09The index of the emulated gamepad you want to get a controller handle for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Returns the associated controller handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.\n\n@param        index   The index of the emulated gamepad you want to get a controller handle for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetControllerForGamepadIndex", nullptr, nullptr, sizeof(Input_eventGetControllerForGamepadIndex_Parms), Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetControllerForGamepadIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetControllerForGamepadIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics
	{
		struct Input_eventGetCurrentActionSet_Parms
		{
			FInputHandle handle;
			FInputActionSetHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetCurrentActionSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetCurrentActionSet_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the currently active action set for the specified controller.\n\x09*\n\x09* @param\x09handle\x09The handle of the controller you want to query.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Get the currently active action set for the specified controller.\n\n@param        handle  The handle of the controller you want to query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetCurrentActionSet", nullptr, nullptr, sizeof(Input_eventGetCurrentActionSet_Parms), Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetCurrentActionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetCurrentActionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics
	{
		struct Input_eventGetDeviceBindingRevision_Parms
		{
			FInputHandle handle;
			int32 major;
			int32 minor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_minor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_major;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Input_eventGetDeviceBindingRevision_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Input_eventGetDeviceBindingRevision_Parms), &Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_minor = { "minor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDeviceBindingRevision_Parms, minor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_major = { "major", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDeviceBindingRevision_Parms, major), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDeviceBindingRevision_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_minor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_major,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get's the major and minor device binding revisions for Steam Input API configurations. Minor revisions are for small changes such as adding a new option action or updating localization in the configuration. When updating a Minor revision only one new configuration needs to be update with the \"Use Action Block\" flag set. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagree's with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the Major revision.\n\x09*\n\x09* @param\x09handle\x09\x09The handle of the controller to query.\n\x09* @param\x09major\x09\x09Pointer to int that Major binding revision will be populated into\n\x09* @param\x09minor\x09\x09Pointer to int that Minor binding revision will be populated into\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Get's the major and minor device binding revisions for Steam Input API configurations. Minor revisions are for small changes such as adding a new option action or updating localization in the configuration. When updating a Minor revision only one new configuration needs to be update with the \"Use Action Block\" flag set. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagree's with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the Major revision.\n\n@param        handle          The handle of the controller to query.\n@param        major           Pointer to int that Major binding revision will be populated into\n@param        minor           Pointer to int that Minor binding revision will be populated into" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDeviceBindingRevision", nullptr, nullptr, sizeof(Input_eventGetDeviceBindingRevision_Parms), Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetDeviceBindingRevision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetDeviceBindingRevision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetDigitalActionData_Statics
	{
		struct Input_eventGetDigitalActionData_Parms
		{
			FInputHandle handle;
			FInputDigitalActionHandle digitalActionHandle;
			FInputDigitalActionData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_digitalActionHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_digitalActionHandle = { "digitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionData_Parms, digitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionData_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_digitalActionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the current state of the supplied digital game action.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09\x09The handle of the controller you want to query.\n\x09* @param\x09""digitalActionHandle\x09\x09The handle of the digital action you want to query.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Returns the current state of the supplied digital game action.\n\n@param        handle                                  The handle of the controller you want to query.\n@param        digitalActionHandle             The handle of the digital action you want to query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDigitalActionData", nullptr, nullptr, sizeof(Input_eventGetDigitalActionData_Parms), Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetDigitalActionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetDigitalActionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics
	{
		struct Input_eventGetDigitalActionHandle_Parms
		{
			FString pszActionName;
			FInputDigitalActionHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pszActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_pszActionName = { "pszActionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionHandle_Parms, pszActionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::NewProp_pszActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the handle of the specified digital action.\n\x09*\n\x09* @param\x09pszActionName\x09The string identifier of the digital action defined in the game's VDF file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Get the handle of the specified digital action.\n\n@param        pszActionName   The string identifier of the digital action defined in the game's VDF file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDigitalActionHandle", nullptr, nullptr, sizeof(Input_eventGetDigitalActionHandle_Parms), Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetDigitalActionHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetDigitalActionHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics
	{
		struct Input_eventGetDigitalActionOrigins_Parms
		{
			FInputHandle handle;
			FInputActionSetHandle actionSetHandle;
			FInputDigitalActionHandle digitalActionHandle;
			TArray<ESteamCoreInputActionOrigin> originsOut;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_originsOut;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_originsOut_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_originsOut_Inner_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_digitalActionHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actionSetHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_originsOut = { "originsOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, originsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_originsOut_Inner = { "originsOut", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_originsOut_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_digitalActionHandle = { "digitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, digitalActionHandle), Z_Construct_UScriptStruct_FInputDigitalActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_actionSetHandle = { "actionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, actionSetHandle), Z_Construct_UScriptStruct_FInputActionSetHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetDigitalActionOrigins_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_originsOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_originsOut_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_originsOut_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_digitalActionHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_actionSetHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the origin(s) for a digital action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09\x09The handle of the controller you want to query.\n\x09* @param\x09""actionSetHandle\x09\x09\x09The handle of the action set you want to query.\n\x09* @param\x09""digitalActionHandle\x09\x09The handle of the digital aciton you want to query.\n\x09* @param\x09originsOut\x09\x09\x09\x09""A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin handles.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Get the origin(s) for a digital action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action.\n\n@param        handle                                  The handle of the controller you want to query.\n@param        actionSetHandle                 The handle of the action set you want to query.\n@param        digitalActionHandle             The handle of the digital aciton you want to query.\n@param        originsOut                              A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin handles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetDigitalActionOrigins", nullptr, nullptr, sizeof(Input_eventGetDigitalActionOrigins_Parms), Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetDigitalActionOrigins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetDigitalActionOrigins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics
	{
		struct Input_eventGetGamepadIndexForController_Parms
		{
			FInputHandle handle;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetGamepadIndexForController_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetGamepadIndexForController_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n\x09*\n\x09* @param\x09handle\x09\x09The handle of the controller you want to get a gamepad index for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n\n@param        handle          The handle of the controller you want to get a gamepad index for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetGamepadIndexForController", nullptr, nullptr, sizeof(Input_eventGetGamepadIndexForController_Parms), Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetGamepadIndexForController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetGamepadIndexForController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics
	{
		struct Input_eventGetGlyphForActionOrigin_Parms
		{
			ESteamCoreInputActionOrigin origin;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_origin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_origin_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetGlyphForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetGlyphForActionOrigin_Parms, origin), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::NewProp_origin_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get a local path to art for on-screen glyph for a particular origin.\n\x09*\n\x09* @param\x09origin\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Get a local path to art for on-screen glyph for a particular origin.\n\n@param        origin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetGlyphForActionOrigin", nullptr, nullptr, sizeof(Input_eventGetGlyphForActionOrigin_Parms), Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetGlyphForActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetGlyphForActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics
	{
		struct Input_eventGetGlyphForXboxOrigin_Parms
		{
			ESteamCoreXboxOrigin origin;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_origin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_origin_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetGlyphForXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetGlyphForXboxOrigin_Parms, origin), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::NewProp_origin_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\x09*\n\x09* @param\x09origin\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\n@param        origin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetGlyphForXboxOrigin", nullptr, nullptr, sizeof(Input_eventGetGlyphForXboxOrigin_Parms), Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics
	{
		struct Input_eventGetInputTypeForHandle_Parms
		{
			FInputHandle handle;
			ESteamCoreInputType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetInputTypeForHandle_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetInputTypeForHandle_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc. For more details, see Steam's Supported Controller Database.\n\x09*\n\x09* @param\x09handle\x09The handle of the controller whose input type (device model) you want to query\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc. For more details, see Steam's Supported Controller Database.\n\n@param        handle  The handle of the controller whose input type (device model) you want to query" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetInputTypeForHandle", nullptr, nullptr, sizeof(Input_eventGetInputTypeForHandle_Parms), Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetInputTypeForHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetInputTypeForHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetMotionData_Statics
	{
		struct Input_eventGetMotionData_Parms
		{
			FInputHandle handle;
			FInputMotionData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetMotionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputMotionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetMotionData_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetMotionData_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetMotionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns raw motion data for the specified controller.\n\x09*\n\x09* @param\x09handle\x09The handle of the controller you want to get motion data for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Returns raw motion data for the specified controller.\n\n@param        handle  The handle of the controller you want to get motion data for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetMotionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetMotionData", nullptr, nullptr, sizeof(Input_eventGetMotionData_Parms), Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetMotionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetMotionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetMotionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetMotionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetMotionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics
	{
		struct Input_eventGetRemotePlaySessionID_Parms
		{
			FInputHandle handle;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetRemotePlaySessionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetRemotePlaySessionID_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\x09*\n\x09* @param\x09handle The handle of the controller to query.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions\n\n@param        handle The handle of the controller to query." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetRemotePlaySessionID", nullptr, nullptr, sizeof(Input_eventGetRemotePlaySessionID_Parms), Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetRemotePlaySessionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetRemotePlaySessionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics
	{
		struct Input_eventGetStringForActionOrigin_Parms
		{
			ESteamCoreInputActionOrigin origin;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_origin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_origin_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetStringForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetStringForActionOrigin_Parms, origin), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::NewProp_origin_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns a localized string (from Steam's language setting) for the specified origin.\n\x09*\n\x09* @param\x09origin\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Returns a localized string (from Steam's language setting) for the specified origin.\n\n@param        origin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetStringForActionOrigin", nullptr, nullptr, sizeof(Input_eventGetStringForActionOrigin_Parms), Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetStringForActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetStringForActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics
	{
		struct Input_eventGetStringForXboxOrigin_Parms
		{
			ESteamCoreXboxOrigin origin;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_origin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_origin_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetStringForXboxOrigin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventGetStringForXboxOrigin_Parms, origin), Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_origin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::NewProp_origin_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\x09*\n\x09* @param\x09origin\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index\n\n@param        origin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "GetStringForXboxOrigin", nullptr, nullptr, sizeof(Input_eventGetStringForXboxOrigin_Parms), Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_GetStringForXboxOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_GetStringForXboxOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_SetLEDColor_Statics
	{
		struct Input_eventSetLEDColor_Parms
		{
			FInputHandle handle;
			uint8 colorR;
			uint8 colorG;
			uint8 colorB;
			ESteamCoreInputLEDFlag flags;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_flags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_flags_Underlying;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_colorB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_colorG;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_colorR;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_flags = { "flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, flags), Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_colorB = { "colorB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, colorB), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_colorG = { "colorG", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, colorG), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_colorR = { "colorR", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, colorR), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventSetLEDColor_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_flags_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_colorB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_colorG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_colorR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_SetLEDColor_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_SetLEDColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Set the controller LED color on supported controllers.\n\x09*\n\x09* @param\x09handle\x09\x09The handle of the controller to affect.\n\x09* @param\x09""colorR\x09\x09The red component of the color to set (0-255).\n\x09* @param\x09""colorG\x09\x09The green component of the color to set (0-255).\n\x09* @param\x09""colorB\x09\x09The blue component of the color to set (0-255).\n\x09* @param\x09""flags\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Set the controller LED color on supported controllers.\n\n@param        handle          The handle of the controller to affect.\n@param        colorR          The red component of the color to set (0-255).\n@param        colorG          The green component of the color to set (0-255).\n@param        colorB          The blue component of the color to set (0-255).\n@param        flags" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_SetLEDColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "SetLEDColor", nullptr, nullptr, sizeof(Input_eventSetLEDColor_Parms), Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_SetLEDColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_SetLEDColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_SetLEDColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_SetLEDColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_SetLEDColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_ShowBindingPanel_Statics
	{
		struct Input_eventShowBindingPanel_Parms
		{
			FInputHandle handle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Input_eventShowBindingPanel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Input_eventShowBindingPanel_Parms), &Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventShowBindingPanel_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Invokes the Steam overlay and brings up the binding screen.\n\x09*\n\x09* @param\x09handle\x09The handle of the controller you want to bring up the binding screen for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Invokes the Steam overlay and brings up the binding screen.\n\n@param        handle  The handle of the controller you want to bring up the binding screen for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "ShowBindingPanel", nullptr, nullptr, sizeof(Input_eventShowBindingPanel_Parms), Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_ShowBindingPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_ShowBindingPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics
	{
		struct Input_eventStopAnalogActionMomentum_Parms
		{
			FInputHandle handle;
			FInputAnalogActionHandle eAction;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_eAction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_eAction = { "eAction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventStopAnalogActionMomentum_Parms, eAction), Z_Construct_UScriptStruct_FInputAnalogActionHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventStopAnalogActionMomentum_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_eAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).\n\x09*\n\x09* @param\x09handle\x09\x09The handle of the controller to affect.\n\x09* @param\x09""eAction\x09\x09The analog action to stop momentum for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).\n\n@param        handle          The handle of the controller to affect.\n@param        eAction         The analog action to stop momentum for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "StopAnalogActionMomentum", nullptr, nullptr, sizeof(Input_eventStopAnalogActionMomentum_Parms), Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_StopAnalogActionMomentum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_StopAnalogActionMomentum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics
	{
		struct Input_eventTranslateActionOrigin_Parms
		{
			ESteamCoreInputType destinationInputType;
			ESteamCoreInputActionOrigin sourceOrigin;
			ESteamCoreInputActionOrigin ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_sourceOrigin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_sourceOrigin_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_destinationInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_destinationInputType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTranslateActionOrigin_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_sourceOrigin = { "sourceOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTranslateActionOrigin_Parms, sourceOrigin), Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_sourceOrigin_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_destinationInputType = { "destinationInputType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTranslateActionOrigin_Parms, destinationInputType), Z_Construct_UEnum_SteamCore_ESteamCoreInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_destinationInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_sourceOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_sourceOrigin_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_destinationInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::NewProp_destinationInputType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Convert an origin to another controller type - for inputs not present on the other controller type this will return k_EInputActionOrigin_None\n\x09*\n\x09* When a new input type is added you will be able to pass in k_ESteamInputType_Unknown and the closest origin that your version of the SDK recognized will be returned\n\x09* ex: if a Playstation 5 controller was released this function would return Playstation 4 origins.\n\x09*\n\x09* @param\x09""destinationInputType\n\x09* @param\x09sourceOrigin\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Convert an origin to another controller type - for inputs not present on the other controller type this will return k_EInputActionOrigin_None\n\nWhen a new input type is added you will be able to pass in k_ESteamInputType_Unknown and the closest origin that your version of the SDK recognized will be returned\nex: if a Playstation 5 controller was released this function would return Playstation 4 origins.\n\n@param        destinationInputType\n@param        sourceOrigin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TranslateActionOrigin", nullptr, nullptr, sizeof(Input_eventTranslateActionOrigin_Parms), Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_TranslateActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_TranslateActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics
	{
		struct Input_eventTriggerHapticPulse_Parms
		{
			FInputHandle handle;
			ESteamCoreControllerPad targetPad;
			uint8 durationMicroSec;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_durationMicroSec;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_targetPad;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_targetPad_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_durationMicroSec = { "durationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerHapticPulse_Parms, durationMicroSec), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_targetPad = { "targetPad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerHapticPulse_Parms, targetPad), Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_targetPad_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerHapticPulse_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_durationMicroSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_targetPad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_targetPad_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Triggers a (low-level) haptic pulse on supported controllers.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The handle of the controller to affect.\n\x09* @param\x09targetPad\x09\x09\x09Which haptic touch pad to affect.\n\x09* @param\x09""durationMicroSec\x09""Duration of the pulse, in microseconds (1/1,000,000th of a second)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Triggers a (low-level) haptic pulse on supported controllers.\n\n@param        handle                          The handle of the controller to affect.\n@param        targetPad                       Which haptic touch pad to affect.\n@param        durationMicroSec        Duration of the pulse, in microseconds (1/1,000,000th of a second)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TriggerHapticPulse", nullptr, nullptr, sizeof(Input_eventTriggerHapticPulse_Parms), Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_TriggerHapticPulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_TriggerHapticPulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics
	{
		struct Input_eventTriggerRepeatedHapticPulse_Parms
		{
			FInputHandle handle;
			ESteamCoreControllerPad targetPad;
			uint8 durationMicroSec;
			uint8 offMicroSec;
			uint8 repeat;
			uint8 flags;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_flags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_repeat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_offMicroSec;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_durationMicroSec;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_targetPad;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_targetPad_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_flags = { "flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, flags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_repeat = { "repeat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, repeat), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_offMicroSec = { "offMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, offMicroSec), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_durationMicroSec = { "durationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, durationMicroSec), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_targetPad = { "targetPad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, targetPad), Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_targetPad_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerRepeatedHapticPulse_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_repeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_offMicroSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_durationMicroSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_targetPad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_targetPad_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Triggers a repeated haptic pulse on supported controllers.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The handle of the controller to affect.\n\x09* @param\x09targetPad\x09\x09\x09Which haptic touch pad to affect.\n\x09* @param\x09""durationMicroSec\x09""Duration of the pulse, in microseconds (1/1,000,000th of a second).\n\x09* @param\x09offMicroSec\x09\x09\x09""Duration of the pause between pulses, in microseconds.\n\x09* @param\x09repeat\x09\x09\x09\x09Number of times to repeat the usDurationMicroSec / usOffMicroSec duty cycle.\n\x09* @param\x09""flags\x09\x09\x09\x09""Currently unused and reserved for future use.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Triggers a repeated haptic pulse on supported controllers.\n\n@param        handle                          The handle of the controller to affect.\n@param        targetPad                       Which haptic touch pad to affect.\n@param        durationMicroSec        Duration of the pulse, in microseconds (1/1,000,000th of a second).\n@param        offMicroSec                     Duration of the pause between pulses, in microseconds.\n@param        repeat                          Number of times to repeat the usDurationMicroSec / usOffMicroSec duty cycle.\n@param        flags                           Currently unused and reserved for future use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TriggerRepeatedHapticPulse", nullptr, nullptr, sizeof(Input_eventTriggerRepeatedHapticPulse_Parms), Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInput_TriggerVibration_Statics
	{
		struct Input_eventTriggerVibration_Parms
		{
			FInputHandle handle;
			uint8 leftSpeed;
			uint8 rightSpeed;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rightSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_leftSpeed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_rightSpeed = { "rightSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerVibration_Parms, rightSpeed), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_leftSpeed = { "leftSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerVibration_Parms, leftSpeed), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Input_eventTriggerVibration_Parms, handle), Z_Construct_UScriptStruct_FInputHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_rightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_leftSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInput_TriggerVibration_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInput_TriggerVibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Input" },
		{ "Comment", "/**\n\x09* Trigger a vibration event on supported controllers.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The handle of the controller to affect.\n\x09* @param\x09leftSpeed\x09\x09The intensity value for the left rumble motor.\n\x09* @param\x09rightSpeed\x09\x09The intensity value of the right rumble motor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
		{ "ToolTip", "Trigger a vibration event on supported controllers.\n\n@param        handle                  The handle of the controller to affect.\n@param        leftSpeed               The intensity value for the left rumble motor.\n@param        rightSpeed              The intensity value of the right rumble motor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInput_TriggerVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInput, nullptr, "TriggerVibration", nullptr, nullptr, sizeof(Input_eventTriggerVibration_Parms), Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerVibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInput_TriggerVibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInput_TriggerVibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInput_TriggerVibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInput_TriggerVibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInput_NoRegister()
	{
		return UInput::StaticClass();
	}
	struct Z_Construct_UClass_UInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInput_ActivateActionSet, "ActivateActionSet" }, // 3814292747
		{ &Z_Construct_UFunction_UInput_ActivateActionSetLayer, "ActivateActionSetLayer" }, // 2413231383
		{ &Z_Construct_UFunction_UInput_DeactivateActionSetLayer, "DeactivateActionSetLayer" }, // 806528441
		{ &Z_Construct_UFunction_UInput_DeactivateAllActionSetLayers, "DeactivateAllActionSetLayers" }, // 1526603137
		{ &Z_Construct_UFunction_UInput_GetActionOriginFromXboxOrigin, "GetActionOriginFromXboxOrigin" }, // 1034501475
		{ &Z_Construct_UFunction_UInput_GetActionSetHandle, "GetActionSetHandle" }, // 2365886512
		{ &Z_Construct_UFunction_UInput_GetActiveActionSetLayers, "GetActiveActionSetLayers" }, // 472526170
		{ &Z_Construct_UFunction_UInput_GetAnalogActionData, "GetAnalogActionData" }, // 1855346413
		{ &Z_Construct_UFunction_UInput_GetAnalogActionHandle, "GetAnalogActionHandle" }, // 2972403313
		{ &Z_Construct_UFunction_UInput_GetAnalogActionOrigins, "GetAnalogActionOrigins" }, // 3411622493
		{ &Z_Construct_UFunction_UInput_GetControllerForGamepadIndex, "GetControllerForGamepadIndex" }, // 213390235
		{ &Z_Construct_UFunction_UInput_GetCurrentActionSet, "GetCurrentActionSet" }, // 2771727966
		{ &Z_Construct_UFunction_UInput_GetDeviceBindingRevision, "GetDeviceBindingRevision" }, // 1581891593
		{ &Z_Construct_UFunction_UInput_GetDigitalActionData, "GetDigitalActionData" }, // 1597518031
		{ &Z_Construct_UFunction_UInput_GetDigitalActionHandle, "GetDigitalActionHandle" }, // 1662018337
		{ &Z_Construct_UFunction_UInput_GetDigitalActionOrigins, "GetDigitalActionOrigins" }, // 223884669
		{ &Z_Construct_UFunction_UInput_GetGamepadIndexForController, "GetGamepadIndexForController" }, // 1526732194
		{ &Z_Construct_UFunction_UInput_GetGlyphForActionOrigin, "GetGlyphForActionOrigin" }, // 2944545230
		{ &Z_Construct_UFunction_UInput_GetGlyphForXboxOrigin, "GetGlyphForXboxOrigin" }, // 3330295226
		{ &Z_Construct_UFunction_UInput_GetInputTypeForHandle, "GetInputTypeForHandle" }, // 1864946958
		{ &Z_Construct_UFunction_UInput_GetMotionData, "GetMotionData" }, // 1913666142
		{ &Z_Construct_UFunction_UInput_GetRemotePlaySessionID, "GetRemotePlaySessionID" }, // 1092862150
		{ &Z_Construct_UFunction_UInput_GetStringForActionOrigin, "GetStringForActionOrigin" }, // 560808624
		{ &Z_Construct_UFunction_UInput_GetStringForXboxOrigin, "GetStringForXboxOrigin" }, // 2400683550
		{ &Z_Construct_UFunction_UInput_SetLEDColor, "SetLEDColor" }, // 1174555258
		{ &Z_Construct_UFunction_UInput_ShowBindingPanel, "ShowBindingPanel" }, // 1908533040
		{ &Z_Construct_UFunction_UInput_StopAnalogActionMomentum, "StopAnalogActionMomentum" }, // 3541657522
		{ &Z_Construct_UFunction_UInput_TranslateActionOrigin, "TranslateActionOrigin" }, // 3783125046
		{ &Z_Construct_UFunction_UInput_TriggerHapticPulse, "TriggerHapticPulse" }, // 957438378
		{ &Z_Construct_UFunction_UInput_TriggerRepeatedHapticPulse, "TriggerRepeatedHapticPulse" }, // 917656732
		{ &Z_Construct_UFunction_UInput_TriggerVibration, "TriggerVibration" }, // 2048992285
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Input/Input.h" },
		{ "ModuleRelativePath", "Public/Input/Input.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInput>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInput_Statics::ClassParams = {
		&UInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInput_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInput, 648886664);
	template<> STEAMCORE_API UClass* StaticClass<UInput>()
	{
		return UInput::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInput(Z_Construct_UClass_UInput, &UInput::StaticClass, TEXT("/Script/SteamCore"), TEXT("UInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
