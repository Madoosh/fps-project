// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Music/Music.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMusic() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UMusic_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UMusic();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UMusic::execGetVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_flVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_flVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execPlayNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayNext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execPlayPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayPrevious();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execGetPlaybackStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamAudioPlaybackStatus*)Z_Param__Result=P_THIS->GetPlaybackStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execBIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMusic::execBIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BIsEnabled();
		P_NATIVE_END;
	}
	void UMusic::StaticRegisterNativesUMusic()
	{
		UClass* Class = UMusic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BIsEnabled", &UMusic::execBIsEnabled },
			{ "BIsPlaying", &UMusic::execBIsPlaying },
			{ "GetPlaybackStatus", &UMusic::execGetPlaybackStatus },
			{ "GetVolume", &UMusic::execGetVolume },
			{ "Pause", &UMusic::execPause },
			{ "Play", &UMusic::execPlay },
			{ "PlayNext", &UMusic::execPlayNext },
			{ "PlayPrevious", &UMusic::execPlayPrevious },
			{ "SetVolume", &UMusic::execSetVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMusic_BIsEnabled_Statics
	{
		struct Music_eventBIsEnabled_Parms
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
	void Z_Construct_UFunction_UMusic_BIsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Music_eventBIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMusic_BIsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Music_eventBIsEnabled_Parms), &Z_Construct_UFunction_UMusic_BIsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_BIsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_BIsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_BIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Checks if Steam Music is enabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Music/Music.h" },
		{ "ToolTip", "Checks if Steam Music is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_BIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "BIsEnabled", nullptr, nullptr, sizeof(Music_eventBIsEnabled_Parms), Z_Construct_UFunction_UMusic_BIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_BIsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_BIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMusic_BIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_BIsPlaying_Statics
	{
		struct Music_eventBIsPlaying_Parms
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
	void Z_Construct_UFunction_UMusic_BIsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Music_eventBIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMusic_BIsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Music_eventBIsPlaying_Parms), &Z_Construct_UFunction_UMusic_BIsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_BIsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_BIsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_BIsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Music/Music.h" },
		{ "ToolTip", "Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_BIsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "BIsPlaying", nullptr, nullptr, sizeof(Music_eventBIsPlaying_Parms), Z_Construct_UFunction_UMusic_BIsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_BIsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_BIsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_BIsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMusic_BIsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics
	{
		struct Music_eventGetPlaybackStatus_Parms
		{
			ESteamAudioPlaybackStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Music_eventGetPlaybackStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamAudioPlaybackStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Gets the current status of the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Music/Music.h" },
		{ "ToolTip", "Gets the current status of the Steam Music player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "GetPlaybackStatus", nullptr, nullptr, sizeof(Music_eventGetPlaybackStatus_Parms), Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_GetPlaybackStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMusic_GetPlaybackStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_GetVolume_Statics
	{
		struct Music_eventGetVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMusic_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Music_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_GetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_GetVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_GetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Gets the current volume of the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Music/Music.h" },
		{ "ToolTip", "Gets the current volume of the Steam Music player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_GetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "GetVolume", nullptr, nullptr, sizeof(Music_eventGetVolume_Parms), Z_Construct_UFunction_UMusic_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_GetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_GetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_GetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMusic_GetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_Pause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Pause the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Music/Music.h" },
		{ "ToolTip", "Pause the Steam Music player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMusic_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Have the Steam Music player resume playing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Music/Music.h" },
		{ "ToolTip", "Have the Steam Music player resume playing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMusic_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_PlayNext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_PlayNext_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Have the Steam Music player skip to the next song.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Music/Music.h" },
		{ "ToolTip", "Have the Steam Music player skip to the next song." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_PlayNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "PlayNext", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_PlayNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_PlayNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_PlayNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMusic_PlayNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_PlayPrevious_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_PlayPrevious_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Have the Steam Music player play the previous song.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Music/Music.h" },
		{ "ToolTip", "Have the Steam Music player play the previous song." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_PlayPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "PlayPrevious", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_PlayPrevious_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_PlayPrevious_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_PlayPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMusic_PlayPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMusic_SetVolume_Statics
	{
		struct Music_eventSetVolume_Parms
		{
			float flVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_flVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMusic_SetVolume_Statics::NewProp_flVolume = { "flVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Music_eventSetVolume_Parms, flVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMusic_SetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMusic_SetVolume_Statics::NewProp_flVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMusic_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Music" },
		{ "Comment", "/**\n\x09* Sets the volume of the Steam Music player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Music/Music.h" },
		{ "ToolTip", "Sets the volume of the Steam Music player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMusic_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMusic, nullptr, "SetVolume", nullptr, nullptr, sizeof(Music_eventSetVolume_Parms), Z_Construct_UFunction_UMusic_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMusic_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMusic_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMusic_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMusic_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMusic_NoRegister()
	{
		return UMusic::StaticClass();
	}
	struct Z_Construct_UClass_UMusic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeHasChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_VolumeHasChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackStatusHasChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlaybackStatusHasChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMusic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMusic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMusic_BIsEnabled, "BIsEnabled" }, // 3508889832
		{ &Z_Construct_UFunction_UMusic_BIsPlaying, "BIsPlaying" }, // 576930435
		{ &Z_Construct_UFunction_UMusic_GetPlaybackStatus, "GetPlaybackStatus" }, // 404154960
		{ &Z_Construct_UFunction_UMusic_GetVolume, "GetVolume" }, // 2630646942
		{ &Z_Construct_UFunction_UMusic_Pause, "Pause" }, // 147208042
		{ &Z_Construct_UFunction_UMusic_Play, "Play" }, // 986950503
		{ &Z_Construct_UFunction_UMusic_PlayNext, "PlayNext" }, // 1880418927
		{ &Z_Construct_UFunction_UMusic_PlayPrevious, "PlayPrevious" }, // 3710638415
		{ &Z_Construct_UFunction_UMusic_SetVolume, "SetVolume" }, // 1243548576
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMusic_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Music/Music.h" },
		{ "ModuleRelativePath", "Public/Music/Music.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMusic_Statics::NewProp_VolumeHasChanged_MetaData[] = {
		{ "Category", "SteamCore|Music|Delegates" },
		{ "ModuleRelativePath", "Public/Music/Music.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMusic_Statics::NewProp_VolumeHasChanged = { "VolumeHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMusic, VolumeHasChanged), Z_Construct_UDelegateFunction_SteamCore_OnVolumeHasChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMusic_Statics::NewProp_VolumeHasChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMusic_Statics::NewProp_VolumeHasChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMusic_Statics::NewProp_PlaybackStatusHasChanged_MetaData[] = {
		{ "Category", "SteamCore|Music|Delegates" },
		{ "ModuleRelativePath", "Public/Music/Music.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMusic_Statics::NewProp_PlaybackStatusHasChanged = { "PlaybackStatusHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMusic, PlaybackStatusHasChanged), Z_Construct_UDelegateFunction_SteamCore_OnPlaybackStatusHasChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMusic_Statics::NewProp_PlaybackStatusHasChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMusic_Statics::NewProp_PlaybackStatusHasChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMusic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMusic_Statics::NewProp_VolumeHasChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMusic_Statics::NewProp_PlaybackStatusHasChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMusic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMusic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMusic_Statics::ClassParams = {
		&UMusic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMusic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMusic_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMusic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMusic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMusic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMusic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMusic, 2275878664);
	template<> STEAMCORE_API UClass* StaticClass<UMusic>()
	{
		return UMusic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMusic(Z_Construct_UClass_UMusic, &UMusic::StaticClass, TEXT("/Script/SteamCore"), TEXT("UMusic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMusic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
