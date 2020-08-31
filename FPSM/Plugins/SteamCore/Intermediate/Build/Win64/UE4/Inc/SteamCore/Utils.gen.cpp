// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Utils/Utils.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtils() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UUtils_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UUtils();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUniverse();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamNotificationPosition();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UUtils::execStartVRDashboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtils::StartVRDashboard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execShowGamepadTextInput)
	{
		P_GET_ENUM(ESteamGamepadTextInputMode,Z_Param_inputMode);
		P_GET_ENUM(ESteamGamepadTextInputLineMode,Z_Param_lineInputMode);
		P_GET_PROPERTY(FStrProperty,Z_Param_description);
		P_GET_PROPERTY(FIntProperty,Z_Param_charMax);
		P_GET_PROPERTY(FStrProperty,Z_Param_existingText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::ShowGamepadTextInput(ESteamGamepadTextInputMode(Z_Param_inputMode),ESteamGamepadTextInputLineMode(Z_Param_lineInputMode),Z_Param_description,Z_Param_charMax,Z_Param_existingText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execSetVRHeadsetStreamingEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtils::SetVRHeadsetStreamingEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execSetOverlayNotificationPosition)
	{
		P_GET_ENUM(ESteamNotificationPosition,Z_Param_notificationPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtils::SetOverlayNotificationPosition(ESteamNotificationPosition(Z_Param_notificationPosition));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execSetOverlayNotificationInset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_horizontalInset);
		P_GET_PROPERTY(FIntProperty,Z_Param_verticalInset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtils::SetOverlayNotificationInset(Z_Param_horizontalInset,Z_Param_verticalInset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsVRHeadsetStreamingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsVRHeadsetStreamingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsSteamRunningInVR)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsSteamRunningInVR();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsSteamInBigPictureMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsSteamInBigPictureMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execFilterText)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_filteredText);
		P_GET_PROPERTY(FStrProperty,Z_Param_inputMessage);
		P_GET_UBOOL(Z_Param_bLegalOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::FilterText(Z_Param_Out_filteredText,Z_Param_inputMessage,Z_Param_bLegalOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsSteamChinaLauncher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsSteamChinaLauncher();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execIsOverlayEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::IsOverlayEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetSteamUILanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUtils::GetSteamUILanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetServerRealTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetServerRealTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetSecondsSinceComputerActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetSecondsSinceComputerActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetSecondsSinceAppActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetSecondsSinceAppActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetIPCountry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUtils::GetIPCountry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetIPCCallCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetIPCCallCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetImageSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_iImage);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_width);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::GetImageSize(Z_Param_iImage,Z_Param_Out_width,Z_Param_Out_height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetImageRGBA)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_iImage);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::GetImageRGBA(Z_Param_iImage,Z_Param_Out_buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetEnteredGamepadTextLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetEnteredGamepadTextLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetEnteredGamepadTextInput)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::GetEnteredGamepadTextInput(Z_Param_Out_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetCurrentBatteryPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetCurrentBatteryPower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetCSERIPPort)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ip);
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::GetCSERIPPort(Z_Param_ip,Z_Param_port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetConnectedUniverse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamUniverse*)Z_Param__Result=UUtils::GetConnectedUniverse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetAppID_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetAppID_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execGetAppID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtils::GetAppID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtils::execBOverlayNeedsPresent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtils::BOverlayNeedsPresent();
		P_NATIVE_END;
	}
	void UUtils::StaticRegisterNativesUUtils()
	{
		UClass* Class = UUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BOverlayNeedsPresent", &UUtils::execBOverlayNeedsPresent },
			{ "FilterText", &UUtils::execFilterText },
			{ "GetAppID", &UUtils::execGetAppID },
			{ "GetAppID_Pure", &UUtils::execGetAppID_Pure },
			{ "GetConnectedUniverse", &UUtils::execGetConnectedUniverse },
			{ "GetCSERIPPort", &UUtils::execGetCSERIPPort },
			{ "GetCurrentBatteryPower", &UUtils::execGetCurrentBatteryPower },
			{ "GetEnteredGamepadTextInput", &UUtils::execGetEnteredGamepadTextInput },
			{ "GetEnteredGamepadTextLength", &UUtils::execGetEnteredGamepadTextLength },
			{ "GetImageRGBA", &UUtils::execGetImageRGBA },
			{ "GetImageSize", &UUtils::execGetImageSize },
			{ "GetIPCCallCount", &UUtils::execGetIPCCallCount },
			{ "GetIPCountry", &UUtils::execGetIPCountry },
			{ "GetSecondsSinceAppActive", &UUtils::execGetSecondsSinceAppActive },
			{ "GetSecondsSinceComputerActive", &UUtils::execGetSecondsSinceComputerActive },
			{ "GetServerRealTime", &UUtils::execGetServerRealTime },
			{ "GetSteamUILanguage", &UUtils::execGetSteamUILanguage },
			{ "IsOverlayEnabled", &UUtils::execIsOverlayEnabled },
			{ "IsSteamChinaLauncher", &UUtils::execIsSteamChinaLauncher },
			{ "IsSteamInBigPictureMode", &UUtils::execIsSteamInBigPictureMode },
			{ "IsSteamRunningInVR", &UUtils::execIsSteamRunningInVR },
			{ "IsVRHeadsetStreamingEnabled", &UUtils::execIsVRHeadsetStreamingEnabled },
			{ "SetOverlayNotificationInset", &UUtils::execSetOverlayNotificationInset },
			{ "SetOverlayNotificationPosition", &UUtils::execSetOverlayNotificationPosition },
			{ "SetVRHeadsetStreamingEnabled", &UUtils::execSetVRHeadsetStreamingEnabled },
			{ "ShowGamepadTextInput", &UUtils::execShowGamepadTextInput },
			{ "StartVRDashboard", &UUtils::execStartVRDashboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics
	{
		struct Utils_eventBOverlayNeedsPresent_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventBOverlayNeedsPresent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventBOverlayNeedsPresent_Parms), &Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if the Overlay needs a present. Only required if using event driven render updates.\n\x09*\n\x09* Typically this call is unneeded if your game has a constantly running frame loop that calls the D3D Present API, \n\x09* or OGL SwapBuffers API every frame as is the case in most games. \n\x09* However, if you have a game that only refreshes the screen on an event driven basis then that can break the overlay, as it uses your \n\x09* Present/SwapBuffers calls to drive it's internal frame loop and it may also need to Present() to the screen any time a \n\x09* notification happens or when the overlay is brought up over the game by a user. You can use this API to ask the overlay if it \n\x09* currently need a present in that case, and then you can check for this periodically (roughly 33hz is desirable) and make \n\x09* sure you refresh the screen with Present or SwapBuffers to allow the overlay to do it's work.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Checks if the Overlay needs a present. Only required if using event driven render updates.\n\nTypically this call is unneeded if your game has a constantly running frame loop that calls the D3D Present API,\nor OGL SwapBuffers API every frame as is the case in most games.\nHowever, if you have a game that only refreshes the screen on an event driven basis then that can break the overlay, as it uses your\nPresent/SwapBuffers calls to drive it's internal frame loop and it may also need to Present() to the screen any time a\nnotification happens or when the overlay is brought up over the game by a user. You can use this API to ask the overlay if it\ncurrently need a present in that case, and then you can check for this periodically (roughly 33hz is desirable) and make\nsure you refresh the screen with Present or SwapBuffers to allow the overlay to do it's work." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "BOverlayNeedsPresent", nullptr, nullptr, sizeof(Utils_eventBOverlayNeedsPresent_Parms), Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_BOverlayNeedsPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_BOverlayNeedsPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_FilterText_Statics
	{
		struct Utils_eventFilterText_Parms
		{
			FString filteredText;
			FString inputMessage;
			bool bLegalOnly;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bLegalOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLegalOnly;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputMessage;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filteredText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUtils_FilterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventFilterText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtils_FilterText_Statics::NewProp_bLegalOnly_SetBit(void* Obj)
	{
		((Utils_eventFilterText_Parms*)Obj)->bLegalOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_FilterText_Statics::NewProp_bLegalOnly = { "bLegalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventFilterText_Parms), &Z_Construct_UFunction_UUtils_FilterText_Statics::NewProp_bLegalOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_FilterText_Statics::NewProp_inputMessage = { "inputMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventFilterText_Parms, inputMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_FilterText_Statics::NewProp_filteredText = { "filteredText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventFilterText_Parms, filteredText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_FilterText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_FilterText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_FilterText_Statics::NewProp_bLegalOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_FilterText_Statics::NewProp_inputMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_FilterText_Statics::NewProp_filteredText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_FilterText_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Initializes text filtering. Returns false if filtering is unavailable for the language the user is currently running in. If the language is unsupported, the FilterText API will act as a passthrough.\n\x09*\n\x09* @param\x09""filteredText\x09\x09where the output will be placed, even if no filtering or censoring is performed\n\x09* @param\x09inputMessage\x09\x09input string that should be filtered, which can be ASCII or UTF-8\n\x09* @param\x09""bLegalOnly\x09\x09\x09should be false if you want profanity and legally required filtering (where required) and true if you want legally required filtering only\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Initializes text filtering. Returns false if filtering is unavailable for the language the user is currently running in. If the language is unsupported, the FilterText API will act as a passthrough.\n\n@param        filteredText            where the output will be placed, even if no filtering or censoring is performed\n@param        inputMessage            input string that should be filtered, which can be ASCII or UTF-8\n@param        bLegalOnly                      should be false if you want profanity and legally required filtering (where required) and true if you want legally required filtering only" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_FilterText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "FilterText", nullptr, nullptr, sizeof(Utils_eventFilterText_Parms), Z_Construct_UFunction_UUtils_FilterText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_FilterText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_FilterText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_FilterText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_FilterText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_FilterText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetAppID_Statics
	{
		struct Utils_eventGetAppID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetAppID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetAppID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetAppID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the App ID of the current process.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Gets the App ID of the current process." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetAppID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetAppID", nullptr, nullptr, sizeof(Utils_eventGetAppID_Parms), Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetAppID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetAppID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetAppID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics
	{
		struct Utils_eventGetAppID_Pure_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetAppID_Pure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils|Pure" },
		{ "Comment", "/**\n\x09* Gets the App ID of the current process.\n\x09*/" },
		{ "DisplayName", "Get App ID (Pure)" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Gets the App ID of the current process." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetAppID_Pure", nullptr, nullptr, sizeof(Utils_eventGetAppID_Pure_Parms), Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetAppID_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetAppID_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics
	{
		struct Utils_eventGetConnectedUniverse_Parms
		{
			ESteamUniverse ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetConnectedUniverse_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamUniverse, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the universe that the current client is connecting to. (Valve use only.)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Gets the universe that the current client is connecting to. (Valve use only.)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetConnectedUniverse", nullptr, nullptr, sizeof(Utils_eventGetConnectedUniverse_Parms), Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetConnectedUniverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetConnectedUniverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics
	{
		struct Utils_eventGetCSERIPPort_Parms
		{
			FString ip;
			int32 port;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventGetCSERIPPort_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventGetCSERIPPort_Parms), &Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetCSERIPPort_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::NewProp_ip = { "ip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetCSERIPPort_Parms, ip), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::NewProp_port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::NewProp_ip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the universe that the current client is connecting to. (Valve use only.)\n\x09*\n\x09* @param\x09ip\x09\x09\x09Returns the IP that the client is connected to.\n\x09* @param\x09port\x09\x09Returns the port that the client is connected to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Gets the universe that the current client is connecting to. (Valve use only.)\n\n@param        ip                      Returns the IP that the client is connected to.\n@param        port            Returns the port that the client is connected to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetCSERIPPort", nullptr, nullptr, sizeof(Utils_eventGetCSERIPPort_Parms), Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetCSERIPPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetCSERIPPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics
	{
		struct Utils_eventGetCurrentBatteryPower_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetCurrentBatteryPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the current amount of battery power on the computer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Gets the current amount of battery power on the computer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetCurrentBatteryPower", nullptr, nullptr, sizeof(Utils_eventGetCurrentBatteryPower_Parms), Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetCurrentBatteryPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetCurrentBatteryPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics
	{
		struct Utils_eventGetEnteredGamepadTextInput_Parms
		{
			FString text;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventGetEnteredGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventGetEnteredGamepadTextInput_Parms), &Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetEnteredGamepadTextInput_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the gamepad text input from the Big Picture overlay.\n\x09*\n\x09* This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\x09*\n\x09* @param\x09text\x09\x09""A preallocated buffer to copy the text input string into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Gets the gamepad text input from the Big Picture overlay.\n\nThis must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\n@param        text            A preallocated buffer to copy the text input string into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetEnteredGamepadTextInput", nullptr, nullptr, sizeof(Utils_eventGetEnteredGamepadTextInput_Parms), Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics
	{
		struct Utils_eventGetEnteredGamepadTextLength_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetEnteredGamepadTextLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the length of the gamepad text input from the Big Picture overlay.\n\x09*\n\x09* This must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Gets the length of the gamepad text input from the Big Picture overlay.\n\nThis must be called within the GamepadTextInputDismissed_t callback, and only if GamepadTextInputDismissed_t.m_bSubmitted is true." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetEnteredGamepadTextLength", nullptr, nullptr, sizeof(Utils_eventGetEnteredGamepadTextLength_Parms), Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetImageRGBA_Statics
	{
		struct Utils_eventGetImageRGBA_Parms
		{
			int32 iImage;
			TArray<uint8> buffer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_buffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buffer_Inner;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventGetImageRGBA_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventGetImageRGBA_Parms), &Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetImageRGBA_Parms, buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_buffer_Inner = { "buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_iImage = { "iImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetImageRGBA_Parms, iImage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::NewProp_iImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the image bytes from an image handle.\n\x09* \n\x09* Prior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as: width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer, thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.\n\x09*\n\x09* @param\x09iImage\x09\x09The handle to the image that will be obtained.\n\x09* @param\x09""buffer\x09\x09The buffer that will be filled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Gets the image bytes from an image handle.\n\nPrior to calling this you must get the size of the image by calling GetImageSize so that you can create your buffer with an appropriate size. You can then allocate your buffer with the width and height as: width * height * 4. The image is provided in RGBA format. This call can be somewhat expensive as it converts from the compressed type (JPG, PNG, TGA) and provides no internal caching of returned buffer, thus it is highly recommended to only call this once per image handle and cache the result. This function is only used for Steam Avatars and Achievement images and those are not expected to change mid game.\n\n@param        iImage          The handle to the image that will be obtained.\n@param        buffer          The buffer that will be filled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetImageRGBA", nullptr, nullptr, sizeof(Utils_eventGetImageRGBA_Parms), Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetImageRGBA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetImageRGBA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetImageSize_Statics
	{
		struct Utils_eventGetImageSize_Parms
		{
			int32 iImage;
			int32 width;
			int32 height;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_width;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventGetImageSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventGetImageSize_Parms), &Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetImageSize_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetImageSize_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_iImage = { "iImage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetImageSize_Parms, iImage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetImageSize_Statics::NewProp_iImage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetImageSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Gets the size of a Steam image handle.\n\x09*\n\x09* This must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.\n\x09*\n\x09* @param\x09iImage\x09\x09The image handle to get the size for.\n\x09* @param\x09width\x09\x09Returns the width of the image.\n\x09* @param\x09height\x09\x09Returns the height of the image.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Gets the size of a Steam image handle.\n\nThis must be called before calling GetImageRGBA to create an appropriately sized buffer that will be filled with the raw image data.\n\n@param        iImage          The image handle to get the size for.\n@param        width           Returns the width of the image.\n@param        height          Returns the height of the image." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetImageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetImageSize", nullptr, nullptr, sizeof(Utils_eventGetImageSize_Parms), Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetImageSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetImageSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetImageSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetImageSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics
	{
		struct Utils_eventGetIPCCallCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetIPCCallCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the number of IPC calls made since the last time this function was called.\n\x09*\n\x09* Used for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame\n\x09* Every IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Returns the number of IPC calls made since the last time this function was called.\n\nUsed for perf debugging so you can determine how many IPC (Inter-Process Communication) calls your game makes per frame\nEvery IPC call is at minimum a thread context switch if not a process one so you want to rate control how often you do them." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetIPCCallCount", nullptr, nullptr, sizeof(Utils_eventGetIPCCallCount_Parms), Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetIPCCallCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetIPCCallCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetIPCountry_Statics
	{
		struct Utils_eventGetIPCountry_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetIPCountry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetIPCountry_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetIPCountry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g \"US\" or \"UK\".\n\x09*\n\x09* This is looked up via an IP-to-location database.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Returns the 2 digit ISO 3166-1-alpha-2 format country code which client is running in. e.g \"US\" or \"UK\".\n\nThis is looked up via an IP-to-location database." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetIPCountry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetIPCountry", nullptr, nullptr, sizeof(Utils_eventGetIPCountry_Parms), Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetIPCountry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetIPCountry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetIPCountry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics
	{
		struct Utils_eventGetSecondsSinceAppActive_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetSecondsSinceAppActive_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the number of seconds since the application was active.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Returns the number of seconds since the application was active." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetSecondsSinceAppActive", nullptr, nullptr, sizeof(Utils_eventGetSecondsSinceAppActive_Parms), Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics
	{
		struct Utils_eventGetSecondsSinceComputerActive_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetSecondsSinceComputerActive_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the number of seconds since the user last moved the mouse.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Returns the number of seconds since the user last moved the mouse." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetSecondsSinceComputerActive", nullptr, nullptr, sizeof(Utils_eventGetSecondsSinceComputerActive_Parms), Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetServerRealTime_Statics
	{
		struct Utils_eventGetServerRealTime_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetServerRealTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Returns the Steam server time in Unix epoch format. (Number of seconds since Jan 1, 1970 UTC)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetServerRealTime", nullptr, nullptr, sizeof(Utils_eventGetServerRealTime_Parms), Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetServerRealTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetServerRealTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics
	{
		struct Utils_eventGetSteamUILanguage_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventGetSteamUILanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns the language the steam client is running in.\n\x09*\n\x09* You probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.\n\x09* For a full list of languages see Supported Languages.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Returns the language the steam client is running in.\n\nYou probably want ISteamApps::GetCurrentGameLanguage instead, this should only be used in very special cases.\nFor a full list of languages see Supported Languages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "GetSteamUILanguage", nullptr, nullptr, sizeof(Utils_eventGetSteamUILanguage_Parms), Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_GetSteamUILanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_GetSteamUILanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics
	{
		struct Utils_eventIsOverlayEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsOverlayEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventIsOverlayEnabled_Parms), &Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if the Steam Overlay is running & the user can access it.\n\x09*\n\x09* The overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Checks if the Steam Overlay is running & the user can access it.\n\nThe overlay process could take a few seconds to start & hook the game process, so this function will initially return false while the overlay is loading." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsOverlayEnabled", nullptr, nullptr, sizeof(Utils_eventIsOverlayEnabled_Parms), Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsOverlayEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_IsOverlayEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics
	{
		struct Utils_eventIsSteamChinaLauncher_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsSteamChinaLauncher_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventIsSteamChinaLauncher_Parms), &Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Returns whether the current launcher is a Steam China launcher. You can cause the client to behave as the Steam China launcher by adding -dev -steamchina to the command line when running Steam." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamChinaLauncher", nullptr, nullptr, sizeof(Utils_eventIsSteamChinaLauncher_Parms), Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsSteamChinaLauncher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamChinaLauncher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics
	{
		struct Utils_eventIsSteamInBigPictureMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsSteamInBigPictureMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventIsSteamInBigPictureMode_Parms), &Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if Steam & the Steam Overlay are running in Big Picture mode.\n\x09*\n\x09* Games must be launched through the Steam client to enable the Big Picture overlay.\n\x09* During development, a game can be added as a non-steam game to the developers library to test this feature.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Checks if Steam & the Steam Overlay are running in Big Picture mode.\n\nGames must be launched through the Steam client to enable the Big Picture overlay.\nDuring development, a game can be added as a non-steam game to the developers library to test this feature." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamInBigPictureMode", nullptr, nullptr, sizeof(Utils_eventIsSteamInBigPictureMode_Parms), Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics
	{
		struct Utils_eventIsSteamRunningInVR_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsSteamRunningInVR_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventIsSteamRunningInVR_Parms), &Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if Steam is running in VR mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Checks if Steam is running in VR mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsSteamRunningInVR", nullptr, nullptr, sizeof(Utils_eventIsSteamRunningInVR_Parms), Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsSteamRunningInVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_IsSteamRunningInVR_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics
	{
		struct Utils_eventIsVRHeadsetStreamingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventIsVRHeadsetStreamingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventIsVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Checks if the HMD view will be streamed via Steam Remote Play.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Checks if the HMD view will be streamed via Steam Remote Play." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "IsVRHeadsetStreamingEnabled", nullptr, nullptr, sizeof(Utils_eventIsVRHeadsetStreamingEnabled_Parms), Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics
	{
		struct Utils_eventSetOverlayNotificationInset_Parms
		{
			int32 horizontalInset;
			int32 verticalInset;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_verticalInset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_horizontalInset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_verticalInset = { "verticalInset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventSetOverlayNotificationInset_Parms, verticalInset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_horizontalInset = { "horizontalInset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventSetOverlayNotificationInset_Parms, horizontalInset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_verticalInset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::NewProp_horizontalInset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.\n\x09*\n\x09* A value of (0, 0) resets the position into the corner.\n\x09* This position is per-game and is reset each launch.\n\x09*\n\x09* @param\x09horizontalInset\x09\x09The horizontal (left-right) distance in pixels from the corner.\n\x09* @param\x09verticalInset\x09\x09The vertical (up-down) distance in pixels from the corner.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Sets the inset of the overlay notification from the corner specified by SetOverlayNotificationPosition.\n\nA value of (0, 0) resets the position into the corner.\nThis position is per-game and is reset each launch.\n\n@param        horizontalInset         The horizontal (left-right) distance in pixels from the corner.\n@param        verticalInset           The vertical (up-down) distance in pixels from the corner." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "SetOverlayNotificationInset", nullptr, nullptr, sizeof(Utils_eventSetOverlayNotificationInset_Parms), Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_SetOverlayNotificationInset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_SetOverlayNotificationInset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics
	{
		struct Utils_eventSetOverlayNotificationPosition_Parms
		{
			ESteamNotificationPosition notificationPosition;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_notificationPosition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_notificationPosition_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_notificationPosition = { "notificationPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventSetOverlayNotificationPosition_Parms, notificationPosition), Z_Construct_UEnum_SteamCore_ESteamNotificationPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_notificationPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_notificationPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::NewProp_notificationPosition_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Sets which corner the Steam overlay notification popup should display itself in.\n\x09*\n\x09* You can also set the distance from the specified corner by using SetOverlayNotificationInset.\n\x09* This position is per-game and is reset each launch.\n\x09*\n\x09* @param\x09notificationPosition\x09position\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Sets which corner the Steam overlay notification popup should display itself in.\n\nYou can also set the distance from the specified corner by using SetOverlayNotificationInset.\nThis position is per-game and is reset each launch.\n\n@param        notificationPosition    position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "SetOverlayNotificationPosition", nullptr, nullptr, sizeof(Utils_eventSetOverlayNotificationPosition_Parms), Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics
	{
		struct Utils_eventSetVRHeadsetStreamingEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((Utils_eventSetVRHeadsetStreamingEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventSetVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Set whether the HMD content will be streamed via Steam Remote Play.\n\x09*\n\x09* If this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input will be allowed. VR games default to enabled unless \"VRHeadsetStreaming\" \"0\" is in the extended appinfo for a game.\n\x09* This is useful for games that have asymmetric multiplayer gameplay.\n\x09*\n\x09* @param\x09""bEnabled\x09Turns VR HMD Streaming on (true) or off (false).\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Set whether the HMD content will be streamed via Steam Remote Play.\n\nIf this is enabled, then the scene in the HMD headset will be streamed, and remote input will not be allowed. Otherwise if this is disabled, then the application window will be streamed instead, and remote input will be allowed. VR games default to enabled unless \"VRHeadsetStreaming\" \"0\" is in the extended appinfo for a game.\nThis is useful for games that have asymmetric multiplayer gameplay.\n\n@param        bEnabled        Turns VR HMD Streaming on (true) or off (false)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "SetVRHeadsetStreamingEnabled", nullptr, nullptr, sizeof(Utils_eventSetVRHeadsetStreamingEnabled_Parms), Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics
	{
		struct Utils_eventShowGamepadTextInput_Parms
		{
			ESteamGamepadTextInputMode inputMode;
			ESteamGamepadTextInputLineMode lineInputMode;
			FString description;
			int32 charMax;
			FString existingText;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_existingText;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_charMax;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_description;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_lineInputMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_lineInputMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inputMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inputMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Utils_eventShowGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Utils_eventShowGamepadTextInput_Parms), &Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_existingText = { "existingText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, existingText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_charMax = { "charMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, charMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, description), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_lineInputMode = { "lineInputMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, lineInputMode), Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_lineInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_inputMode = { "inputMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utils_eventShowGamepadTextInput_Parms, inputMode), Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_inputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_existingText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_charMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_lineInputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_lineInputMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_inputMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::NewProp_inputMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Activates the Big Picture text input dialog which only supports gamepad input.\n\x09*\n\x09* @param\x09inputMode\x09\x09\x09Selects the input mode to use, either Normal or Password (hidden text)\n\x09* @param\x09lineInputMode\x09\x09""Controls whether to use single or multi line input.\n\x09* @param\x09""description\x09\x09\x09Sets the description that should inform the user what the input dialog is for.\n\x09* @param\x09""charMax\x09\x09\x09\x09The maximum number of characters that the user can input.\n\x09* @param\x09""existingText\x09\x09Sets the preexisting text which the user can edit.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Activates the Big Picture text input dialog which only supports gamepad input.\n\n@param        inputMode                       Selects the input mode to use, either Normal or Password (hidden text)\n@param        lineInputMode           Controls whether to use single or multi line input.\n@param        description                     Sets the description that should inform the user what the input dialog is for.\n@param        charMax                         The maximum number of characters that the user can input.\n@param        existingText            Sets the preexisting text which the user can edit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "ShowGamepadTextInput", nullptr, nullptr, sizeof(Utils_eventShowGamepadTextInput_Parms), Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_ShowGamepadTextInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_ShowGamepadTextInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtils_StartVRDashboard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utils" },
		{ "Comment", "/**\n\x09* Asks Steam to create and render the OpenVR dashboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
		{ "ToolTip", "Asks Steam to create and render the OpenVR dashboard." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtils, nullptr, "StartVRDashboard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtils_StartVRDashboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtils_StartVRDashboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUtils_NoRegister()
	{
		return UUtils::StaticClass();
	}
	struct Z_Construct_UClass_UUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamShutdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamShutdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowBatteryPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LowBatteryPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPCountry_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_IPCountry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadTextInputDismissed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GamepadTextInputDismissed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckFileSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CheckFileSignature;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUtils_BOverlayNeedsPresent, "BOverlayNeedsPresent" }, // 2370367142
		{ &Z_Construct_UFunction_UUtils_FilterText, "FilterText" }, // 3809812176
		{ &Z_Construct_UFunction_UUtils_GetAppID, "GetAppID" }, // 3218365099
		{ &Z_Construct_UFunction_UUtils_GetAppID_Pure, "GetAppID_Pure" }, // 2583592379
		{ &Z_Construct_UFunction_UUtils_GetConnectedUniverse, "GetConnectedUniverse" }, // 3079666015
		{ &Z_Construct_UFunction_UUtils_GetCSERIPPort, "GetCSERIPPort" }, // 2800497714
		{ &Z_Construct_UFunction_UUtils_GetCurrentBatteryPower, "GetCurrentBatteryPower" }, // 3913277959
		{ &Z_Construct_UFunction_UUtils_GetEnteredGamepadTextInput, "GetEnteredGamepadTextInput" }, // 2656226246
		{ &Z_Construct_UFunction_UUtils_GetEnteredGamepadTextLength, "GetEnteredGamepadTextLength" }, // 440822879
		{ &Z_Construct_UFunction_UUtils_GetImageRGBA, "GetImageRGBA" }, // 1762113251
		{ &Z_Construct_UFunction_UUtils_GetImageSize, "GetImageSize" }, // 2542302443
		{ &Z_Construct_UFunction_UUtils_GetIPCCallCount, "GetIPCCallCount" }, // 2557755879
		{ &Z_Construct_UFunction_UUtils_GetIPCountry, "GetIPCountry" }, // 1372784207
		{ &Z_Construct_UFunction_UUtils_GetSecondsSinceAppActive, "GetSecondsSinceAppActive" }, // 145396826
		{ &Z_Construct_UFunction_UUtils_GetSecondsSinceComputerActive, "GetSecondsSinceComputerActive" }, // 1283157033
		{ &Z_Construct_UFunction_UUtils_GetServerRealTime, "GetServerRealTime" }, // 512707896
		{ &Z_Construct_UFunction_UUtils_GetSteamUILanguage, "GetSteamUILanguage" }, // 797796548
		{ &Z_Construct_UFunction_UUtils_IsOverlayEnabled, "IsOverlayEnabled" }, // 3927877120
		{ &Z_Construct_UFunction_UUtils_IsSteamChinaLauncher, "IsSteamChinaLauncher" }, // 1022819404
		{ &Z_Construct_UFunction_UUtils_IsSteamInBigPictureMode, "IsSteamInBigPictureMode" }, // 2970293963
		{ &Z_Construct_UFunction_UUtils_IsSteamRunningInVR, "IsSteamRunningInVR" }, // 3016772047
		{ &Z_Construct_UFunction_UUtils_IsVRHeadsetStreamingEnabled, "IsVRHeadsetStreamingEnabled" }, // 3189668984
		{ &Z_Construct_UFunction_UUtils_SetOverlayNotificationInset, "SetOverlayNotificationInset" }, // 956708661
		{ &Z_Construct_UFunction_UUtils_SetOverlayNotificationPosition, "SetOverlayNotificationPosition" }, // 33377020
		{ &Z_Construct_UFunction_UUtils_SetVRHeadsetStreamingEnabled, "SetVRHeadsetStreamingEnabled" }, // 3069447855
		{ &Z_Construct_UFunction_UUtils_ShowGamepadTextInput, "ShowGamepadTextInput" }, // 3883069300
		{ &Z_Construct_UFunction_UUtils_StartVRDashboard, "StartVRDashboard" }, // 2288556311
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/Utils.h" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown = { "SteamShutdown", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUtils, SteamShutdown), Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower = { "LowBatteryPower", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUtils, LowBatteryPower), Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry = { "IPCountry", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUtils, IPCountry), Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed = { "GamepadTextInputDismissed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUtils, GamepadTextInputDismissed), Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature_MetaData[] = {
		{ "Category", "SteamCore|Utils|Delegates" },
		{ "ModuleRelativePath", "Public/Utils/Utils.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature = { "CheckFileSignature", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUtils, CheckFileSignature), Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUtils_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_SteamShutdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_LowBatteryPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_IPCountry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_GamepadTextInputDismissed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUtils_Statics::NewProp_CheckFileSignature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUtils_Statics::ClassParams = {
		&UUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUtils_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUtils, 3142510226);
	template<> STEAMCORE_API UClass* StaticClass<UUtils>()
	{
		return UUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUtils(Z_Construct_UClass_UUtils, &UUtils::StaticClass, TEXT("/Script/SteamCore"), TEXT("UUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
