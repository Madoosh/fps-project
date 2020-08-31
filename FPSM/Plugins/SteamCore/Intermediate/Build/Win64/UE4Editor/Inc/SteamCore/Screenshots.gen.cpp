// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Screenshots/Screenshots.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenshots() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UScreenshots_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UScreenshots();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UScreenshots::execWriteScreenshot)
	{
		P_GET_TARRAY(uint8,Z_Param_pubRGB);
		P_GET_PROPERTY(FIntProperty,Z_Param_width);
		P_GET_PROPERTY(FIntProperty,Z_Param_height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenshotHandle*)Z_Param__Result=UScreenshots::WriteScreenshot(Z_Param_pubRGB,Z_Param_width,Z_Param_height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execTriggerScreenshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UScreenshots::TriggerScreenshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execTagUser)
	{
		P_GET_STRUCT(FScreenshotHandle,Z_Param_handle);
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UScreenshots::TagUser(Z_Param_handle,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execTagPublishedFile)
	{
		P_GET_STRUCT(FScreenshotHandle,Z_Param_handle);
		P_GET_STRUCT(FPublishedFileID,Z_Param_publishedFileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UScreenshots::TagPublishedFile(Z_Param_handle,Z_Param_publishedFileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execSetLocation)
	{
		P_GET_STRUCT(FScreenshotHandle,Z_Param_handle);
		P_GET_PROPERTY(FStrProperty,Z_Param_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UScreenshots::SetLocation(Z_Param_handle,Z_Param_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execIsScreenshotsHooked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UScreenshots::IsScreenshotsHooked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execHookScreenshots)
	{
		P_GET_UBOOL(Z_Param_bHook);
		P_FINISH;
		P_NATIVE_BEGIN;
		UScreenshots::HookScreenshots(Z_Param_bHook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execAddVRScreenshotToLibrary)
	{
		P_GET_ENUM(ESteamVRScreenshotType,Z_Param_eType);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_vrFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenshotHandle*)Z_Param__Result=UScreenshots::AddVRScreenshotToLibrary(ESteamVRScreenshotType(Z_Param_eType),Z_Param_fileName,Z_Param_vrFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScreenshots::execAddScreenshotToLibrary)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_thumbnailFilename);
		P_GET_PROPERTY(FIntProperty,Z_Param_width);
		P_GET_PROPERTY(FIntProperty,Z_Param_height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenshotHandle*)Z_Param__Result=UScreenshots::AddScreenshotToLibrary(Z_Param_fileName,Z_Param_thumbnailFilename,Z_Param_width,Z_Param_height);
		P_NATIVE_END;
	}
	void UScreenshots::StaticRegisterNativesUScreenshots()
	{
		UClass* Class = UScreenshots::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScreenshotToLibrary", &UScreenshots::execAddScreenshotToLibrary },
			{ "AddVRScreenshotToLibrary", &UScreenshots::execAddVRScreenshotToLibrary },
			{ "HookScreenshots", &UScreenshots::execHookScreenshots },
			{ "IsScreenshotsHooked", &UScreenshots::execIsScreenshotsHooked },
			{ "SetLocation", &UScreenshots::execSetLocation },
			{ "TagPublishedFile", &UScreenshots::execTagPublishedFile },
			{ "TagUser", &UScreenshots::execTagUser },
			{ "TriggerScreenshot", &UScreenshots::execTriggerScreenshot },
			{ "WriteScreenshot", &UScreenshots::execWriteScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics
	{
		struct Screenshots_eventAddScreenshotToLibrary_Parms
		{
			FString fileName;
			FString thumbnailFilename;
			int32 width;
			int32 height;
			FScreenshotHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_width;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_thumbnailFilename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_thumbnailFilename = { "thumbnailFilename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, thumbnailFilename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddScreenshotToLibrary_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_thumbnailFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::NewProp_fileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Adds a screenshot to the user's Steam screenshot library from disk.\n\x09*\n\x09* @param\x09""fileName\x09\x09\x09\x09The absolute file path to the JPG, PNG, or TGA screenshot.\n\x09* @param\x09thumbnailFilename\x09\x09The absolute file path to an optional thumbnail image. This must be 200px wide, as described by k_ScreenshotThumbWidth and the same aspect ratio. Pass NULL if there is no thumbnail, one will be created automatically.\n\x09* @param\x09width\x09\x09\x09\x09\x09The width of the screenshot.\n\x09* @param\x09height\x09\x09\x09\x09\x09The height of the screenshot.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Screenshots/Screenshots.h" },
		{ "ToolTip", "Adds a screenshot to the user's Steam screenshot library from disk.\n\n@param        fileName                                The absolute file path to the JPG, PNG, or TGA screenshot.\n@param        thumbnailFilename               The absolute file path to an optional thumbnail image. This must be 200px wide, as described by k_ScreenshotThumbWidth and the same aspect ratio. Pass NULL if there is no thumbnail, one will be created automatically.\n@param        width                                   The width of the screenshot.\n@param        height                                  The height of the screenshot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "AddScreenshotToLibrary", nullptr, nullptr, sizeof(Screenshots_eventAddScreenshotToLibrary_Parms), Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics
	{
		struct Screenshots_eventAddVRScreenshotToLibrary_Parms
		{
			ESteamVRScreenshotType eType;
			FString fileName;
			FString vrFileName;
			FScreenshotHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_vrFileName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddVRScreenshotToLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_vrFileName = { "vrFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddVRScreenshotToLibrary_Parms, vrFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddVRScreenshotToLibrary_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_eType = { "eType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventAddVRScreenshotToLibrary_Parms, eType), Z_Construct_UEnum_SteamCore_ESteamVRScreenshotType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_eType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_vrFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_fileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_eType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::NewProp_eType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Adds a VR screenshot to the user's Steam screenshot library from disk in the supported type.\n\x09*\n\x09* @param\x09""eType\x09\x09\x09The type of VR screenshot that this is.\n\x09* @param\x09""fileName\x09\x09The absolute file path to a 2D JPG, PNG, or TGA version of the screenshot for the library view.\n\x09* @param\x09vrFileName\x09\x09The absolute file path to the VR screenshot, this should be the same type of screenshot specified in eType.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Screenshots/Screenshots.h" },
		{ "ToolTip", "Adds a VR screenshot to the user's Steam screenshot library from disk in the supported type.\n\n@param        eType                   The type of VR screenshot that this is.\n@param        fileName                The absolute file path to a 2D JPG, PNG, or TGA version of the screenshot for the library view.\n@param        vrFileName              The absolute file path to the VR screenshot, this should be the same type of screenshot specified in eType." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "AddVRScreenshotToLibrary", nullptr, nullptr, sizeof(Screenshots_eventAddVRScreenshotToLibrary_Parms), Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics
	{
		struct Screenshots_eventHookScreenshots_Parms
		{
			bool bHook;
		};
		static void NewProp_bHook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::NewProp_bHook_SetBit(void* Obj)
	{
		((Screenshots_eventHookScreenshots_Parms*)Obj)->bHook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::NewProp_bHook = { "bHook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Screenshots_eventHookScreenshots_Parms), &Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::NewProp_bHook_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::NewProp_bHook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Toggles whether the overlay handles screenshots when the user presses the screenshot hotkey, or if the game handles them.\n\x09*\n\x09* Hooking is disabled by default, and only ever enabled if you do so with this function.\n\x09* If the hooking is enabled, then the ScreenshotRequested_t callback will be sent if the user presses the hotkey or when TriggerScreenshot is called, and then the game is expected to call WriteScreenshot or AddScreenshotToLibrary in response.\n\x09* You can check if hooking is enabled with IsScreenshotsHooked.\n\x09*\n\x09* @param\x09""bHook\x09""Enable (true) or disable (false) hooking?\n\x09*/" },
		{ "ModuleRelativePath", "Public/Screenshots/Screenshots.h" },
		{ "ToolTip", "Toggles whether the overlay handles screenshots when the user presses the screenshot hotkey, or if the game handles them.\n\nHooking is disabled by default, and only ever enabled if you do so with this function.\nIf the hooking is enabled, then the ScreenshotRequested_t callback will be sent if the user presses the hotkey or when TriggerScreenshot is called, and then the game is expected to call WriteScreenshot or AddScreenshotToLibrary in response.\nYou can check if hooking is enabled with IsScreenshotsHooked.\n\n@param        bHook   Enable (true) or disable (false) hooking?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "HookScreenshots", nullptr, nullptr, sizeof(Screenshots_eventHookScreenshots_Parms), Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_HookScreenshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_HookScreenshots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics
	{
		struct Screenshots_eventIsScreenshotsHooked_Parms
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
	void Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Screenshots_eventIsScreenshotsHooked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Screenshots_eventIsScreenshotsHooked_Parms), &Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/** \n\x09* Checks if the app is hooking screenshots, or if the Steam Overlay is handling them.\n\x09*\n\x09* This can be toggled with HookScreenshots.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Screenshots/Screenshots.h" },
		{ "ToolTip", "Checks if the app is hooking screenshots, or if the Steam Overlay is handling them.\n\nThis can be toggled with HookScreenshots." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "IsScreenshotsHooked", nullptr, nullptr, sizeof(Screenshots_eventIsScreenshotsHooked_Parms), Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_SetLocation_Statics
	{
		struct Screenshots_eventSetLocation_Parms
		{
			FScreenshotHandle handle;
			FString location;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Screenshots_eventSetLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Screenshots_eventSetLocation_Parms), &Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventSetLocation_Parms, location), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventSetLocation_Parms, handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_SetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_SetLocation_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_SetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Sets optional metadata about a screenshot's location. For example, the name of the map it was taken on.\n\x09*\n\x09* You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\x09*\n\x09* @param\x09handle\x09\x09The handle to the screenshot to tag.\n\x09* @param\x09location\x09The location in the game where this screenshot was taken. This can not be longer than k_cubUFSTagValueMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Screenshots/Screenshots.h" },
		{ "ToolTip", "Sets optional metadata about a screenshot's location. For example, the name of the map it was taken on.\n\nYou can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\n@param        handle          The handle to the screenshot to tag.\n@param        location        The location in the game where this screenshot was taken. This can not be longer than k_cubUFSTagValueMax." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_SetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "SetLocation", nullptr, nullptr, sizeof(Screenshots_eventSetLocation_Parms), Z_Construct_UFunction_UScreenshots_SetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_SetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_SetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_SetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics
	{
		struct Screenshots_eventTagPublishedFile_Parms
		{
			FScreenshotHandle handle;
			FPublishedFileID publishedFileID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_publishedFileID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Screenshots_eventTagPublishedFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Screenshots_eventTagPublishedFile_Parms), &Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_publishedFileID = { "publishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventTagPublishedFile_Parms, publishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventTagPublishedFile_Parms, handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_publishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Tags a published file as being visible in the screenshot.\n\x09*\n\x09* You can tag up to the value declared by k_nScreenshotMaxTaggedPublishedFiles in a single screenshot. Tagging more items than that will just be discarded.\n\x09* This function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\n\x09* You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The handle to the screenshot to tag.\n\x09* @param\x09publishedFileID\x09\x09The workshop item ID that is in the screenshot.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Screenshots/Screenshots.h" },
		{ "ToolTip", "Tags a published file as being visible in the screenshot.\n\nYou can tag up to the value declared by k_nScreenshotMaxTaggedPublishedFiles in a single screenshot. Tagging more items than that will just be discarded.\nThis function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\nYou can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\n@param        handle                          The handle to the screenshot to tag.\n@param        publishedFileID         The workshop item ID that is in the screenshot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "TagPublishedFile", nullptr, nullptr, sizeof(Screenshots_eventTagPublishedFile_Parms), Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_TagPublishedFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_TagPublishedFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_TagUser_Statics
	{
		struct Screenshots_eventTagUser_Parms
		{
			FScreenshotHandle handle;
			FSteamID steamID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Screenshots_eventTagUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Screenshots_eventTagUser_Parms), &Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventTagUser_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventTagUser_Parms, handle), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_TagUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_TagUser_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_TagUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Tags a Steam user as being visible in the screenshot.\n\x09*\n\x09* You can tag up to the value declared by k_nScreenshotMaxTaggedUsers in a single screenshot. Tagging more users than that will just be discarded.\n\x09* This function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\n\x09* You can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\x09*\n\x09* @param\x09handle\x09\x09The handle to the screenshot to tag.\n\x09* @param\x09steamID\x09\x09The Steam ID of a user that is in the screenshot.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Screenshots/Screenshots.h" },
		{ "ToolTip", "Tags a Steam user as being visible in the screenshot.\n\nYou can tag up to the value declared by k_nScreenshotMaxTaggedUsers in a single screenshot. Tagging more users than that will just be discarded.\nThis function has a built in delay before saving the tag which allows you to call it repeatedly for each item.\nYou can get the handle to tag the screenshot once it has been successfully saved from the ScreenshotReady_t callback or via the WriteScreenshot, AddScreenshotToLibrary, AddVRScreenshotToLibrary calls.\n\n@param        handle          The handle to the screenshot to tag.\n@param        steamID         The Steam ID of a user that is in the screenshot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_TagUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "TagUser", nullptr, nullptr, sizeof(Screenshots_eventTagUser_Parms), Z_Construct_UFunction_UScreenshots_TagUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_TagUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TagUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_TagUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_TagUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Either causes the Steam Overlay to take a screenshot, or tells your screenshot manager that a screenshot needs to be taken. Depending on the value of IsScreenshotsHooked.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Screenshots/Screenshots.h" },
		{ "ToolTip", "Either causes the Steam Overlay to take a screenshot, or tells your screenshot manager that a screenshot needs to be taken. Depending on the value of IsScreenshotsHooked." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "TriggerScreenshot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_TriggerScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_TriggerScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics
	{
		struct Screenshots_eventWriteScreenshot_Parms
		{
			TArray<uint8> pubRGB;
			int32 width;
			int32 height;
			FScreenshotHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_width;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pubRGB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_pubRGB_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventWriteScreenshot_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenshotHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventWriteScreenshot_Parms, height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventWriteScreenshot_Parms, width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_pubRGB = { "pubRGB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Screenshots_eventWriteScreenshot_Parms, pubRGB), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_pubRGB_Inner = { "pubRGB", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_pubRGB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::NewProp_pubRGB_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Screenshots" },
		{ "Comment", "/**\n\x09* Writes a screenshot to the user's Steam screenshot library given the raw image data, which must be in RGB format.\n\x09*\n\x09* @param\x09pubRGB\x09\x09The buffer containing the raw RGB data from the screenshot.\n\x09* @param\x09width\x09\x09The width of the screenshot in pixels.\n\x09* @param\x09height\x09\x09The height of the screenshot in pixels.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Screenshots/Screenshots.h" },
		{ "ToolTip", "Writes a screenshot to the user's Steam screenshot library given the raw image data, which must be in RGB format.\n\n@param        pubRGB          The buffer containing the raw RGB data from the screenshot.\n@param        width           The width of the screenshot in pixels.\n@param        height          The height of the screenshot in pixels." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenshots, nullptr, "WriteScreenshot", nullptr, nullptr, sizeof(Screenshots_eventWriteScreenshot_Parms), Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenshots_WriteScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenshots_WriteScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScreenshots_NoRegister()
	{
		return UScreenshots::StaticClass();
	}
	struct Z_Construct_UClass_UScreenshots_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotRequested_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScreenshotRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScreenshotReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenshots_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScreenshots_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreenshots_AddScreenshotToLibrary, "AddScreenshotToLibrary" }, // 408170677
		{ &Z_Construct_UFunction_UScreenshots_AddVRScreenshotToLibrary, "AddVRScreenshotToLibrary" }, // 3417762901
		{ &Z_Construct_UFunction_UScreenshots_HookScreenshots, "HookScreenshots" }, // 3073644228
		{ &Z_Construct_UFunction_UScreenshots_IsScreenshotsHooked, "IsScreenshotsHooked" }, // 3846702148
		{ &Z_Construct_UFunction_UScreenshots_SetLocation, "SetLocation" }, // 1052334815
		{ &Z_Construct_UFunction_UScreenshots_TagPublishedFile, "TagPublishedFile" }, // 2967274957
		{ &Z_Construct_UFunction_UScreenshots_TagUser, "TagUser" }, // 290980263
		{ &Z_Construct_UFunction_UScreenshots_TriggerScreenshot, "TriggerScreenshot" }, // 1488751707
		{ &Z_Construct_UFunction_UScreenshots_WriteScreenshot, "WriteScreenshot" }, // 3739484820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenshots_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Screenshots/Screenshots.h" },
		{ "ModuleRelativePath", "Public/Screenshots/Screenshots.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotRequested_MetaData[] = {
		{ "Category", "SteamCore|Screenshots|Delegates" },
		{ "ModuleRelativePath", "Public/Screenshots/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotRequested = { "ScreenshotRequested", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenshots, ScreenshotRequested), Z_Construct_UDelegateFunction_SteamCore_OnScreenshotRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotReady_MetaData[] = {
		{ "Category", "SteamCore|Screenshots|Delegates" },
		{ "ModuleRelativePath", "Public/Screenshots/Screenshots.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotReady = { "ScreenshotReady", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UScreenshots, ScreenshotReady), Z_Construct_UDelegateFunction_SteamCore_OnScreenshotReady__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotReady_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenshots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenshots_Statics::NewProp_ScreenshotReady,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenshots_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenshots>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreenshots_Statics::ClassParams = {
		&UScreenshots::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScreenshots_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshots_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScreenshots_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshots_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenshots()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreenshots_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreenshots, 2516421921);
	template<> STEAMCORE_API UClass* StaticClass<UScreenshots>()
	{
		return UScreenshots::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreenshots(Z_Construct_UClass_UScreenshots, &UScreenshots::StaticClass, TEXT("/Script/SteamCore"), TEXT("UScreenshots"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenshots);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
