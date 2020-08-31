// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Apps/Apps.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApps() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UApps_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UApps();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UApps::execGetFileDetails)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFileDetails(FOnFileDetailsResult(Z_Param_Out_callback),Z_Param_fileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetAppBuildId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetAppBuildId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetDlcDownloadProgress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bytesDownloaded);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bytesTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::GetDlcDownloadProgress(Z_Param_appID,Z_Param_Out_bytesDownloaded,Z_Param_Out_bytesTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetLaunchQueryParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UApps::GetLaunchQueryParam(Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetAppOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UApps::GetAppOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execUninstallDLC)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UApps::UninstallDLC(Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execMarkContentCorrupt)
	{
		P_GET_UBOOL(Z_Param_bMissingFilesOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::MarkContentCorrupt(Z_Param_bMissingFilesOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsAppInstalled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsAppInstalled(Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execInstallDLC)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UApps::InstallDLC(Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetLaunchCommandLine)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_commandLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetLaunchCommandLine(Z_Param_Out_commandLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetInstalledDepots)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxDepots);
		P_GET_TARRAY_REF(int32,Z_Param_Out_depots);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetInstalledDepots(Z_Param_appID,Z_Param_maxDepots,Z_Param_Out_depots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetEarliestPurchaseUnixTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetEarliestPurchaseUnixTime(Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetDLCCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetDLCCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetCurrentBetaName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::GetCurrentBetaName(Z_Param_Out_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetAppInstallDir)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UApps::GetAppInstallDir(Z_Param_appID,Z_Param_Out_folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsSubscribedFromFreeWeekend)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsSubscribedFromFreeWeekend();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsSubscribedFromFamilySharing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsSubscribedFromFamilySharing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsSubscribedApp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsSubscribedApp(Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsVACBanned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsVACBanned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsDlcInstalled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsDlcInstalled(Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetAvailableGameLanguages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UApps::GetAvailableGameLanguages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execGetCurrentGameLanguage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UApps::GetCurrentGameLanguage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBGetDLCDataByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_dlc);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_appID);
		P_GET_UBOOL_REF(Z_Param_Out_bAvailable);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BGetDLCDataByIndex(Z_Param_dlc,Z_Param_Out_appID,Z_Param_Out_bAvailable,Z_Param_Out_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsCybercafe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsCybercafe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsLowViolence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsLowViolence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UApps::execBIsSubscribed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UApps::BIsSubscribed();
		P_NATIVE_END;
	}
	void UApps::StaticRegisterNativesUApps()
	{
		UClass* Class = UApps::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BGetDLCDataByIndex", &UApps::execBGetDLCDataByIndex },
			{ "BIsAppInstalled", &UApps::execBIsAppInstalled },
			{ "BIsCybercafe", &UApps::execBIsCybercafe },
			{ "BIsDlcInstalled", &UApps::execBIsDlcInstalled },
			{ "BIsLowViolence", &UApps::execBIsLowViolence },
			{ "BIsSubscribed", &UApps::execBIsSubscribed },
			{ "BIsSubscribedApp", &UApps::execBIsSubscribedApp },
			{ "BIsSubscribedFromFamilySharing", &UApps::execBIsSubscribedFromFamilySharing },
			{ "BIsSubscribedFromFreeWeekend", &UApps::execBIsSubscribedFromFreeWeekend },
			{ "BIsVACBanned", &UApps::execBIsVACBanned },
			{ "GetAppBuildId", &UApps::execGetAppBuildId },
			{ "GetAppInstallDir", &UApps::execGetAppInstallDir },
			{ "GetAppOwner", &UApps::execGetAppOwner },
			{ "GetAvailableGameLanguages", &UApps::execGetAvailableGameLanguages },
			{ "GetCurrentBetaName", &UApps::execGetCurrentBetaName },
			{ "GetCurrentGameLanguage", &UApps::execGetCurrentGameLanguage },
			{ "GetDLCCount", &UApps::execGetDLCCount },
			{ "GetDlcDownloadProgress", &UApps::execGetDlcDownloadProgress },
			{ "GetEarliestPurchaseUnixTime", &UApps::execGetEarliestPurchaseUnixTime },
			{ "GetFileDetails", &UApps::execGetFileDetails },
			{ "GetInstalledDepots", &UApps::execGetInstalledDepots },
			{ "GetLaunchCommandLine", &UApps::execGetLaunchCommandLine },
			{ "GetLaunchQueryParam", &UApps::execGetLaunchQueryParam },
			{ "InstallDLC", &UApps::execInstallDLC },
			{ "MarkContentCorrupt", &UApps::execMarkContentCorrupt },
			{ "UninstallDLC", &UApps::execUninstallDLC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics
	{
		struct Apps_eventBGetDLCDataByIndex_Parms
		{
			int32 dlc;
			int32 appID;
			bool bAvailable;
			FString name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static void NewProp_bAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAvailable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_dlc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBGetDLCDataByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBGetDLCDataByIndex_Parms, name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit(void* Obj)
	{
		((Apps_eventBGetDLCDataByIndex_Parms*)Obj)->bAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable = { "bAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBGetDLCDataByIndex_Parms), &Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBGetDLCDataByIndex_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_dlc = { "dlc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBGetDLCDataByIndex_Parms, dlc), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_bAvailable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::NewProp_dlc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Returns metadata for a DLC by index.\n\x09*\n\x09* @param\x09""dlc\x09\x09\x09\x09\x09index of the DLC to get between 0 and GetDLCCount.\n\x09* @param\x09""appID\x09\x09\x09\x09Returns the App ID of the DLC.\n\x09* @param\x09""bAvailable\x09\x09\x09Returns whether the DLC is currently available.\n\x09* @param\x09name\x09\x09\x09\x09Returns the name of the DLC by copying it into this buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Returns metadata for a DLC by index.\n\n@param        dlc                                     index of the DLC to get between 0 and GetDLCCount.\n@param        appID                           Returns the App ID of the DLC.\n@param        bAvailable                      Returns whether the DLC is currently available.\n@param        name                            Returns the name of the DLC by copying it into this buffer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BGetDLCDataByIndex", nullptr, nullptr, sizeof(Apps_eventBGetDLCDataByIndex_Parms), Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BGetDLCDataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BGetDLCDataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsAppInstalled_Statics
	{
		struct Apps_eventBIsAppInstalled_Parms
		{
			int32 appID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsAppInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsAppInstalled_Parms), &Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBIsAppInstalled_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if a specific app is installed.\n\x09*\n\x09* The app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\n\x09* This only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\x09*\n\x09* @param\x09""appID\x09The App ID of the application to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Checks if a specific app is installed.\n\nThe app may not actually be owned by the current user, they may have it left over from a free weekend, etc.\nThis only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.\n\n@param        appID   The App ID of the application to check." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsAppInstalled", nullptr, nullptr, sizeof(Apps_eventBIsAppInstalled_Parms), Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsAppInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsAppInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsCybercafe_Statics
	{
		struct Apps_eventBIsCybercafe_Parms
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
	void Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsCybercafe_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsCybercafe_Parms), &Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsCybercafe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks whether the current App ID is for Cyber Cafes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Checks whether the current App ID is for Cyber Cafes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsCybercafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsCybercafe", nullptr, nullptr, sizeof(Apps_eventBIsCybercafe_Parms), Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsCybercafe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsCybercafe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsCybercafe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics
	{
		struct Apps_eventBIsDlcInstalled_Parms
		{
			int32 appID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsDlcInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsDlcInstalled_Parms), &Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBIsDlcInstalled_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the user owns a specific DLC and if the DLC is installed\n\x09*\n\x09* @param\x09""appID\x09The App ID of the DLC to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Checks if the user owns a specific DLC and if the DLC is installed\n\n@param        appID   The App ID of the DLC to check." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsDlcInstalled", nullptr, nullptr, sizeof(Apps_eventBIsDlcInstalled_Parms), Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsDlcInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsDlcInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsLowViolence_Statics
	{
		struct Apps_eventBIsLowViolence_Parms
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
	void Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsLowViolence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsLowViolence_Parms), &Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsLowViolence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the license owned by the user provides low violence depots.\n\x09*\n\x09* Low violence depots are useful for copies sold in countries that have content restrictions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Checks if the license owned by the user provides low violence depots.\n\nLow violence depots are useful for copies sold in countries that have content restrictions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsLowViolence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsLowViolence", nullptr, nullptr, sizeof(Apps_eventBIsLowViolence_Parms), Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsLowViolence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsLowViolence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsLowViolence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsSubscribed_Statics
	{
		struct Apps_eventBIsSubscribed_Parms
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
	void Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsSubscribed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsSubscribed_Parms), &Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the active user is subscribed to the current App ID.\n\x09*\n\x09* This will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Checks if the active user is subscribed to the current App ID.\n\nThis will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribed", nullptr, nullptr, sizeof(Apps_eventBIsSubscribed_Parms), Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsSubscribed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics
	{
		struct Apps_eventBIsSubscribedApp_Parms
		{
			int32 appID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsSubscribedApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsSubscribedApp_Parms), &Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventBIsSubscribedApp_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the active user is subscribed to a specified AppId.\n\x09*\n\x09* Only use this if you need to check ownership of another game related to yours, a demo for example.\n\x09*\n\x09* @param\x09""appID\x09The App ID to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Checks if the active user is subscribed to a specified AppId.\n\nOnly use this if you need to check ownership of another game related to yours, a demo for example.\n\n@param        appID   The App ID to check." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribedApp", nullptr, nullptr, sizeof(Apps_eventBIsSubscribedApp_Parms), Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsSubscribedApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribedApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics
	{
		struct Apps_eventBIsSubscribedFromFamilySharing_Parms
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
	void Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsSubscribedFromFamilySharing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsSubscribedFromFamilySharing_Parms), &Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.\n\x09*\n\x09* If you need to determine the steamID of the permanent owner of the license, use GetAppOwner.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.\n\nIf you need to determine the steamID of the permanent owner of the license, use GetAppOwner." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribedFromFamilySharing", nullptr, nullptr, sizeof(Apps_eventBIsSubscribedFromFamilySharing_Parms), Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics
	{
		struct Apps_eventBIsSubscribedFromFreeWeekend_Parms
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
	void Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsSubscribedFromFreeWeekend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsSubscribedFromFreeWeekend_Parms), &Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the user is subscribed to the current App ID through a free weekend.\n\x09*\n\x09* Before using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Checks if the user is subscribed to the current App ID through a free weekend.\n\nBefore using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsSubscribedFromFreeWeekend", nullptr, nullptr, sizeof(Apps_eventBIsSubscribedFromFreeWeekend_Parms), Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_BIsVACBanned_Statics
	{
		struct Apps_eventBIsVACBanned_Parms
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
	void Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventBIsVACBanned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventBIsVACBanned_Parms), &Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_BIsVACBanned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the user has a VAC ban on their account\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Checks if the user has a VAC ban on their account" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_BIsVACBanned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "BIsVACBanned", nullptr, nullptr, sizeof(Apps_eventBIsVACBanned_Parms), Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_BIsVACBanned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_BIsVACBanned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_BIsVACBanned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetAppBuildId_Statics
	{
		struct Apps_eventGetAppBuildId_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetAppBuildId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetAppBuildId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppBuildId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the buildid of this app, may change at any time based on backend updates to the game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Gets the buildid of this app, may change at any time based on backend updates to the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAppBuildId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAppBuildId", nullptr, nullptr, sizeof(Apps_eventGetAppBuildId_Parms), Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppBuildId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetAppBuildId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetAppBuildId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetAppInstallDir_Statics
	{
		struct Apps_eventGetAppInstallDir_Parms
		{
			int32 appID;
			FString folder;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_folder;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetAppInstallDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_folder = { "folder", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetAppInstallDir_Parms, folder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetAppInstallDir_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_folder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the install folder for a specific AppID.\n\x09*\n\x09* This works even if the application is not installed, based on where the game would be installed with the default Steam library location.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09The App ID to get the install dir for.\n\x09* @param\x09path\x09\x09\x09The string buffer that the folder path will be copied into.\n\x09* @param\x09pathMaxLength\x09The size in bytes of the pchFolder buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Gets the install folder for a specific AppID.\n\nThis works even if the application is not installed, based on where the game would be installed with the default Steam library location.\n\n@param        appID                   The App ID to get the install dir for.\n@param        path                    The string buffer that the folder path will be copied into.\n@param        pathMaxLength   The size in bytes of the pchFolder buffer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAppInstallDir", nullptr, nullptr, sizeof(Apps_eventGetAppInstallDir_Parms), Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetAppInstallDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetAppInstallDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetAppOwner_Statics
	{
		struct Apps_eventGetAppOwner_Parms
		{
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UApps_GetAppOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetAppOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAppOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetAppOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAppOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAppOwner", nullptr, nullptr, sizeof(Apps_eventGetAppOwner_Parms), Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetAppOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAppOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetAppOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetAppOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics
	{
		struct Apps_eventGetAvailableGameLanguages_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetAvailableGameLanguages_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets a comma separated list of the languages the current app supports.\n\x09*\n\x09* For the full list of languages that may be returned see Localization and Languages.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Gets a comma separated list of the languages the current app supports.\n\nFor the full list of languages that may be returned see Localization and Languages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetAvailableGameLanguages", nullptr, nullptr, sizeof(Apps_eventGetAvailableGameLanguages_Parms), Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetAvailableGameLanguages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetAvailableGameLanguages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics
	{
		struct Apps_eventGetCurrentBetaName_Parms
		{
			FString name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventGetCurrentBetaName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventGetCurrentBetaName_Parms), &Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetCurrentBetaName_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Checks if the user is running from a beta branch, and gets the name of the branch if they are.\n\x09*\n\x09* @param\x09name\x09The buffer where the beta name will be copied in to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Checks if the user is running from a beta branch, and gets the name of the branch if they are.\n\n@param        name    The buffer where the beta name will be copied in to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetCurrentBetaName", nullptr, nullptr, sizeof(Apps_eventGetCurrentBetaName_Parms), Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetCurrentBetaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetCurrentBetaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics
	{
		struct Apps_eventGetCurrentGameLanguage_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetCurrentGameLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the current language that the user has set.\n\x09*\n\x09* This falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.\n\x09* For the full list of languages see Supported Languages.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Gets the current language that the user has set.\n\nThis falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.\nFor the full list of languages see Supported Languages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetCurrentGameLanguage", nullptr, nullptr, sizeof(Apps_eventGetCurrentGameLanguage_Parms), Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetCurrentGameLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetCurrentGameLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetDLCCount_Statics
	{
		struct Apps_eventGetDLCCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDLCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetDLCCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDLCCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetDLCCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the number of DLC pieces for the current app.\n\x09*\n\x09* This is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Gets the number of DLC pieces for the current app.\n\nThis is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetDLCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetDLCCount", nullptr, nullptr, sizeof(Apps_eventGetDLCCount_Parms), Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDLCCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetDLCCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDLCCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetDLCCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetDLCCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics
	{
		struct Apps_eventGetDlcDownloadProgress_Parms
		{
			int32 appID;
			int32 bytesDownloaded;
			int32 bytesTotal;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bytesTotal;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bytesDownloaded;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventGetDlcDownloadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventGetDlcDownloadProgress_Parms), &Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_bytesTotal = { "bytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetDlcDownloadProgress_Parms, bytesTotal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_bytesDownloaded = { "bytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetDlcDownloadProgress_Parms, bytesDownloaded), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetDlcDownloadProgress_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_bytesTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_bytesDownloaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the download progress for optional DLC.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID of the DLC to monitor\n\x09* @param\x09""bytesDownloaded\x09\x09Returns the number of bytes downloaded.\n\x09* @param\x09""bytesTotal\x09\x09\x09Returns the total size of the download in bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Gets the download progress for optional DLC.\n\n@param        appID                           The App ID of the DLC to monitor\n@param        bytesDownloaded         Returns the number of bytes downloaded.\n@param        bytesTotal                      Returns the total size of the download in bytes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetDlcDownloadProgress", nullptr, nullptr, sizeof(Apps_eventGetDlcDownloadProgress_Parms), Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetDlcDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetDlcDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics
	{
		struct Apps_eventGetEarliestPurchaseUnixTime_Parms
		{
			int32 appID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetEarliestPurchaseUnixTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetEarliestPurchaseUnixTime_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).\n\x09*\n\x09* This is useful for rewarding users based on their initial purchase date.\n\x09*\n\x09* @param\x09""appID\x09The App ID to get the purchase time for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).\n\nThis is useful for rewarding users based on their initial purchase date.\n\n@param        appID   The App ID to get the purchase time for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetEarliestPurchaseUnixTime", nullptr, nullptr, sizeof(Apps_eventGetEarliestPurchaseUnixTime_Parms), Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetFileDetails_Statics
	{
		struct Apps_eventGetFileDetails_Parms
		{
			FScriptDelegate callback;
			FString fileName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetFileDetails_Parms, fileName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetFileDetails_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_fileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetFileDetails_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetFileDetails_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\x09*\n\x09* Currently provides:\n\x09* The file size in bytes.\n\x09* The file's SHA1 hash.\n\x09* The file's flags.\n\x09*\n\x09* @param\x09""fileName\x09The absolute path and name to the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Asynchronously retrieves metadata details about a specific file in the depot manifest.\n\nCurrently provides:\nThe file size in bytes.\nThe file's SHA1 hash.\nThe file's flags.\n\n@param        fileName        The absolute path and name to the file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetFileDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetFileDetails", nullptr, nullptr, sizeof(Apps_eventGetFileDetails_Parms), Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetFileDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetFileDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetFileDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetFileDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetInstalledDepots_Statics
	{
		struct Apps_eventGetInstalledDepots_Parms
		{
			int32 appID;
			int32 maxDepots;
			TArray<int32> depots;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_depots;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_depots_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxDepots;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_depots = { "depots", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, depots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_depots_Inner = { "depots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_maxDepots = { "maxDepots", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, maxDepots), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetInstalledDepots_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_depots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_depots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_maxDepots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets a list of all installed depots for a given App ID in mount order.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09The App to list the depots for.\n\x09* @param\x09maxDepots\x09\x09The maximum number of depots to obtain, typically the size of pvecDepots.\n\x09* @param\x09""depots\x09\x09\x09""A preallocated array that will be filled with the list of depots.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Gets a list of all installed depots for a given App ID in mount order.\n\n@param        appID                   The App to list the depots for.\n@param        maxDepots               The maximum number of depots to obtain, typically the size of pvecDepots.\n@param        depots                  A preallocated array that will be filled with the list of depots." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetInstalledDepots", nullptr, nullptr, sizeof(Apps_eventGetInstalledDepots_Parms), Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetInstalledDepots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetInstalledDepots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics
	{
		struct Apps_eventGetLaunchCommandLine_Parms
		{
			FString commandLine;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_commandLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetLaunchCommandLine_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_commandLine = { "commandLine", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetLaunchCommandLine_Parms, commandLine), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::NewProp_commandLine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/. \n\x09*\n\x09* This method is preferable to launching with a command line via the operating system, which can be a security risk.\n\x09* In order for rich presence joins to go through this and not be placed on the OS command line, you must enable \"Use launch command line\" from the Installation > General page on your app.\n\x09*\n\x09* @param\x09""commandLine\x09\x09\x09The string buffer that the command line will be copied into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/.\n\nThis method is preferable to launching with a command line via the operating system, which can be a security risk.\nIn order for rich presence joins to go through this and not be placed on the OS command line, you must enable \"Use launch command line\" from the Installation > General page on your app.\n\n@param        commandLine                     The string buffer that the command line will be copied into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetLaunchCommandLine", nullptr, nullptr, sizeof(Apps_eventGetLaunchCommandLine_Parms), Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetLaunchCommandLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetLaunchCommandLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics
	{
		struct Apps_eventGetLaunchQueryParam_Parms
		{
			FString key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetLaunchQueryParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventGetLaunchQueryParam_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.\n\x09*\n\x09* Parameter names starting with the character '@' are reserved for internal use and will always return an empty string.\n\x09* Parameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.\n\x09*\n\x09* @param\x09key\x09\x09The launch key to test for. Ex: param1\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.\n\nParameter names starting with the character '@' are reserved for internal use and will always return an empty string.\nParameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.\n\n@param        key             The launch key to test for. Ex: param1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "GetLaunchQueryParam", nullptr, nullptr, sizeof(Apps_eventGetLaunchQueryParam_Parms), Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_GetLaunchQueryParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_GetLaunchQueryParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_InstallDLC_Statics
	{
		struct Apps_eventInstallDLC_Parms
		{
			int32 appID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_InstallDLC_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventInstallDLC_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_InstallDLC_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_InstallDLC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Allows you to install an optional DLC.\n\x09*\n\x09* @param\x09""appID\x09The DLC you want to install.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Allows you to install an optional DLC.\n\n@param        appID   The DLC you want to install." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_InstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "InstallDLC", nullptr, nullptr, sizeof(Apps_eventInstallDLC_Parms), Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_InstallDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_InstallDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_InstallDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_InstallDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_InstallDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics
	{
		struct Apps_eventMarkContentCorrupt_Parms
		{
			bool bMissingFilesOnly;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bMissingFilesOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMissingFilesOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Apps_eventMarkContentCorrupt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit(void* Obj)
	{
		((Apps_eventMarkContentCorrupt_Parms*)Obj)->bMissingFilesOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly = { "bMissingFilesOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Apps_eventMarkContentCorrupt_Parms), &Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::NewProp_bMissingFilesOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Allows you to force verify game content on next launch.\n\x09*\n\x09* If you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server),\n\x09* you can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.\n\x09*\n\x09* @param\x09""bMissingFilesOnly\x09Only scan for missing files, don't verify the checksum of each file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Allows you to force verify game content on next launch.\n\nIf you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server),\nyou can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.\n\n@param        bMissingFilesOnly       Only scan for missing files, don't verify the checksum of each file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "MarkContentCorrupt", nullptr, nullptr, sizeof(Apps_eventMarkContentCorrupt_Parms), Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_MarkContentCorrupt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_MarkContentCorrupt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApps_UninstallDLC_Statics
	{
		struct Apps_eventUninstallDLC_Parms
		{
			int32 appID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UApps_UninstallDLC_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apps_eventUninstallDLC_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApps_UninstallDLC_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApps_UninstallDLC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Apps" },
		{ "Comment", "/**\n\x09* Allows you to uninstall an optional DLC.\n\x09*\n\x09* @param\x09""appID\x09The DLC you want to uninstall.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
		{ "ToolTip", "Allows you to uninstall an optional DLC.\n\n@param        appID   The DLC you want to uninstall." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApps_UninstallDLC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApps, nullptr, "UninstallDLC", nullptr, nullptr, sizeof(Apps_eventUninstallDLC_Parms), Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_UninstallDLC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApps_UninstallDLC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApps_UninstallDLC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApps_UninstallDLC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApps_UninstallDLC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UApps_NoRegister()
	{
		return UApps::StaticClass();
	}
	struct Z_Construct_UClass_UApps_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileDetailsResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FileDetailsResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLCInstalled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DLCInstalled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApps_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApps_BGetDLCDataByIndex, "BGetDLCDataByIndex" }, // 3725327026
		{ &Z_Construct_UFunction_UApps_BIsAppInstalled, "BIsAppInstalled" }, // 1964747113
		{ &Z_Construct_UFunction_UApps_BIsCybercafe, "BIsCybercafe" }, // 1465115473
		{ &Z_Construct_UFunction_UApps_BIsDlcInstalled, "BIsDlcInstalled" }, // 1762651164
		{ &Z_Construct_UFunction_UApps_BIsLowViolence, "BIsLowViolence" }, // 2121355658
		{ &Z_Construct_UFunction_UApps_BIsSubscribed, "BIsSubscribed" }, // 197986709
		{ &Z_Construct_UFunction_UApps_BIsSubscribedApp, "BIsSubscribedApp" }, // 2061679241
		{ &Z_Construct_UFunction_UApps_BIsSubscribedFromFamilySharing, "BIsSubscribedFromFamilySharing" }, // 1218256214
		{ &Z_Construct_UFunction_UApps_BIsSubscribedFromFreeWeekend, "BIsSubscribedFromFreeWeekend" }, // 4230773934
		{ &Z_Construct_UFunction_UApps_BIsVACBanned, "BIsVACBanned" }, // 3645775604
		{ &Z_Construct_UFunction_UApps_GetAppBuildId, "GetAppBuildId" }, // 1720269877
		{ &Z_Construct_UFunction_UApps_GetAppInstallDir, "GetAppInstallDir" }, // 208712677
		{ &Z_Construct_UFunction_UApps_GetAppOwner, "GetAppOwner" }, // 3824312413
		{ &Z_Construct_UFunction_UApps_GetAvailableGameLanguages, "GetAvailableGameLanguages" }, // 3136548356
		{ &Z_Construct_UFunction_UApps_GetCurrentBetaName, "GetCurrentBetaName" }, // 3134418431
		{ &Z_Construct_UFunction_UApps_GetCurrentGameLanguage, "GetCurrentGameLanguage" }, // 3570235091
		{ &Z_Construct_UFunction_UApps_GetDLCCount, "GetDLCCount" }, // 286081906
		{ &Z_Construct_UFunction_UApps_GetDlcDownloadProgress, "GetDlcDownloadProgress" }, // 3799624121
		{ &Z_Construct_UFunction_UApps_GetEarliestPurchaseUnixTime, "GetEarliestPurchaseUnixTime" }, // 3977235331
		{ &Z_Construct_UFunction_UApps_GetFileDetails, "GetFileDetails" }, // 2762798038
		{ &Z_Construct_UFunction_UApps_GetInstalledDepots, "GetInstalledDepots" }, // 1970930912
		{ &Z_Construct_UFunction_UApps_GetLaunchCommandLine, "GetLaunchCommandLine" }, // 1874228418
		{ &Z_Construct_UFunction_UApps_GetLaunchQueryParam, "GetLaunchQueryParam" }, // 3580138977
		{ &Z_Construct_UFunction_UApps_InstallDLC, "InstallDLC" }, // 1259568407
		{ &Z_Construct_UFunction_UApps_MarkContentCorrupt, "MarkContentCorrupt" }, // 2798076454
		{ &Z_Construct_UFunction_UApps_UninstallDLC, "UninstallDLC" }, // 2003518418
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApps_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Apps/Apps.h" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate = { "FileDetailsResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApps, FileDetailsResultDelegate), Z_Construct_UDelegateFunction_SteamCore_OnFileDetailsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled_MetaData[] = {
		{ "Category", "SteamCore|Apps|Delegates" },
		{ "ModuleRelativePath", "Public/Apps/Apps.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled = { "DLCInstalled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApps, DLCInstalled), Z_Construct_UDelegateFunction_SteamCore_OnDLCInstalled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApps_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApps_Statics::NewProp_FileDetailsResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApps_Statics::NewProp_DLCInstalled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApps>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApps_Statics::ClassParams = {
		&UApps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApps_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApps()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApps_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApps, 888225932);
	template<> STEAMCORE_API UClass* StaticClass<UApps>()
	{
		return UApps::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApps(Z_Construct_UClass_UApps, &UApps::StaticClass, TEXT("/Script/SteamCore"), TEXT("UApps"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApps);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
