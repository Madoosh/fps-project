// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Video/Video.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideo() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UVideo_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UVideo();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UVideo::execIsBroadcasting)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numViewers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVideo::IsBroadcasting(Z_Param_Out_numViewers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideo::execGetVideoURL)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_videoAppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVideo::GetVideoURL(Z_Param_videoAppID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideo::execGetOPFStringForApp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_videoAppID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVideo::GetOPFStringForApp(Z_Param_videoAppID,Z_Param_Out_buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVideo::execGetOPFSettings)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_videoAppID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVideo::GetOPFSettings(Z_Param_videoAppID);
		P_NATIVE_END;
	}
	void UVideo::StaticRegisterNativesUVideo()
	{
		UClass* Class = UVideo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOPFSettings", &UVideo::execGetOPFSettings },
			{ "GetOPFStringForApp", &UVideo::execGetOPFStringForApp },
			{ "GetVideoURL", &UVideo::execGetVideoURL },
			{ "IsBroadcasting", &UVideo::execIsBroadcasting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVideo_GetOPFSettings_Statics
	{
		struct Video_eventGetOPFSettings_Parms
		{
			int32 videoAppID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_videoAppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::NewProp_videoAppID = { "videoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Video_eventGetOPFSettings_Parms, videoAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::NewProp_videoAppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Video" },
		{ "Comment", "/**\n\x09* Get the OPF details for 360 video playback\n\x09* \n\x09* To retrieve the 360 OPF (open projection format) data to playback a 360 video, start by making a call to this, then the callback will indicate whether the request was successful. If it was successful, the actual OPF JSON data can be retrieved with a call to GetOPFStringForApp.\n\x09*\n\x09* @param\x09videoAppID\x09\x09The video app ID to get the OPF details of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Video/Video.h" },
		{ "ToolTip", "Get the OPF details for 360 video playback\n\nTo retrieve the 360 OPF (open projection format) data to playback a 360 video, start by making a call to this, then the callback will indicate whether the request was successful. If it was successful, the actual OPF JSON data can be retrieved with a call to GetOPFStringForApp.\n\n@param        videoAppID              The video app ID to get the OPF details of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideo, nullptr, "GetOPFSettings", nullptr, nullptr, sizeof(Video_eventGetOPFSettings_Parms), Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideo_GetOPFSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVideo_GetOPFSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics
	{
		struct Video_eventGetOPFStringForApp_Parms
		{
			int32 videoAppID;
			FString buffer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_buffer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_videoAppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Video_eventGetOPFStringForApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Video_eventGetOPFStringForApp_Parms), &Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Video_eventGetOPFStringForApp_Parms, buffer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_videoAppID = { "videoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Video_eventGetOPFStringForApp_Parms, videoAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::NewProp_videoAppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Video" },
		{ "Comment", "/**\n\x09* Gets the OPF string for the specified video App ID.\n\x09*\n\x09* Once the callback for GetOPFSettingsResult_t has been raised and the EResult indicates success, then calling this will return back the actual OPF data in a JSON format. \n\x09* The size of the OPF string varies, but at this time 48,000 bytes should be sufficient to contain the full string. If it is not, pnBufferSize will be set to the size required. In that case, make a second call with the correct buffer size.\n\x09* NOTE: The data returned in a successful call to GetOPFStringForApp() can only be retrieved once. If you need to retrieve it multiple times, a call to GetOPFSettings will need to be made each time.\n\x09*\n\x09* param\x09\x09videoAppID\x09\x09The video app ID to get the OPF string for.\n\x09* param\x09\x09""buffer\x09\x09\x09Returns the OPF string by writing it to this buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Video/Video.h" },
		{ "ToolTip", "Gets the OPF string for the specified video App ID.\n\nOnce the callback for GetOPFSettingsResult_t has been raised and the EResult indicates success, then calling this will return back the actual OPF data in a JSON format.\nThe size of the OPF string varies, but at this time 48,000 bytes should be sufficient to contain the full string. If it is not, pnBufferSize will be set to the size required. In that case, make a second call with the correct buffer size.\nNOTE: The data returned in a successful call to GetOPFStringForApp() can only be retrieved once. If you need to retrieve it multiple times, a call to GetOPFSettings will need to be made each time.\n\nparam         videoAppID              The video app ID to get the OPF string for.\nparam         buffer                  Returns the OPF string by writing it to this buffer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideo, nullptr, "GetOPFStringForApp", nullptr, nullptr, sizeof(Video_eventGetOPFStringForApp_Parms), Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideo_GetOPFStringForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVideo_GetOPFStringForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideo_GetVideoURL_Statics
	{
		struct Video_eventGetVideoURL_Parms
		{
			int32 videoAppID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_videoAppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideo_GetVideoURL_Statics::NewProp_videoAppID = { "videoAppID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Video_eventGetVideoURL_Parms, videoAppID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideo_GetVideoURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_GetVideoURL_Statics::NewProp_videoAppID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideo_GetVideoURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Video" },
		{ "Comment", "/**\n\x09* Asynchronously gets the URL suitable for streaming the video associated with the specified video app ID.\n\x09*\n\x09* param\x09\x09videoAppID\x09The video app ID to receive the video stream for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Video/Video.h" },
		{ "ToolTip", "Asynchronously gets the URL suitable for streaming the video associated with the specified video app ID.\n\nparam         videoAppID      The video app ID to receive the video stream for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideo_GetVideoURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideo, nullptr, "GetVideoURL", nullptr, nullptr, sizeof(Video_eventGetVideoURL_Parms), Z_Construct_UFunction_UVideo_GetVideoURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetVideoURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideo_GetVideoURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_GetVideoURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideo_GetVideoURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVideo_GetVideoURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVideo_IsBroadcasting_Statics
	{
		struct Video_eventIsBroadcasting_Parms
		{
			int32 numViewers;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numViewers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Video_eventIsBroadcasting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Video_eventIsBroadcasting_Parms), &Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_numViewers = { "numViewers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Video_eventIsBroadcasting_Parms, numViewers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::NewProp_numViewers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Video" },
		{ "Comment", "/**\n\x09* Checks if the user is currently live broadcasting and gets the number of users. \n\x09*\n\x09* param\x09\x09numViewers\x09\x09Returns the number of viewers currently watching the live broadcast.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Video/Video.h" },
		{ "ToolTip", "Checks if the user is currently live broadcasting and gets the number of users.\n\nparam         numViewers              Returns the number of viewers currently watching the live broadcast." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideo, nullptr, "IsBroadcasting", nullptr, nullptr, sizeof(Video_eventIsBroadcasting_Parms), Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVideo_IsBroadcasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVideo_IsBroadcasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVideo_NoRegister()
	{
		return UVideo::StaticClass();
	}
	struct Z_Construct_UClass_UVideo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetVideoURLResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetVideoURLResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetOPFSettingsResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetOPFSettingsResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVideo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVideo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVideo_GetOPFSettings, "GetOPFSettings" }, // 2653217764
		{ &Z_Construct_UFunction_UVideo_GetOPFStringForApp, "GetOPFStringForApp" }, // 622057127
		{ &Z_Construct_UFunction_UVideo_GetVideoURL, "GetVideoURL" }, // 2862274518
		{ &Z_Construct_UFunction_UVideo_IsBroadcasting, "IsBroadcasting" }, // 1181346937
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Video/Video.h" },
		{ "ModuleRelativePath", "Public/Video/Video.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult_MetaData[] = {
		{ "Category", "SteamCore|Video|Delegates" },
		{ "ModuleRelativePath", "Public/Video/Video.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult = { "GetVideoURLResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideo, GetVideoURLResult), Z_Construct_UDelegateFunction_SteamCore_OnGetVideoURLResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult_MetaData[] = {
		{ "Category", "SteamCore|Video|Delegates" },
		{ "ModuleRelativePath", "Public/Video/Video.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult = { "GetOPFSettingsResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVideo, GetOPFSettingsResult), Z_Construct_UDelegateFunction_SteamCore_OnGetOPFSettingsResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVideo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideo_Statics::NewProp_GetVideoURLResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideo_Statics::NewProp_GetOPFSettingsResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVideo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVideo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVideo_Statics::ClassParams = {
		&UVideo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVideo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVideo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVideo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVideo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVideo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVideo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVideo, 4004742435);
	template<> STEAMCORE_API UClass* StaticClass<UVideo>()
	{
		return UVideo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVideo(Z_Construct_UClass_UVideo, &UVideo::StaticClass, TEXT("/Script/SteamCore"), TEXT("UVideo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVideo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
