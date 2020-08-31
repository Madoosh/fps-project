// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Input/InputTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSource();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData();
// End Cross Module References
	static UEnum* ESteamCoreInputLEDFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputLEDFlag"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputLEDFlag>()
	{
		return ESteamCoreInputLEDFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreInputLEDFlag(ESteamCoreInputLEDFlag_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreInputLEDFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Hash() { return 3094915794U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreInputLEDFlag"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputLEDFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreInputLEDFlag::SetColor", (int64)ESteamCoreInputLEDFlag::SetColor },
				{ "ESteamCoreInputLEDFlag::RestoreUserDefault", (int64)ESteamCoreInputLEDFlag::RestoreUserDefault },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
				{ "RestoreUserDefault.Name", "ESteamCoreInputLEDFlag::RestoreUserDefault" },
				{ "SetColor.Name", "ESteamCoreInputLEDFlag::SetColor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreInputLEDFlag",
				"ESteamCoreInputLEDFlag",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamCoreInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputType>()
	{
		return ESteamCoreInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreInputType(ESteamCoreInputType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Hash() { return 1937198451U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreInputType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreInputType::Unknown", (int64)ESteamCoreInputType::Unknown },
				{ "ESteamCoreInputType::SteamController", (int64)ESteamCoreInputType::SteamController },
				{ "ESteamCoreInputType::XBox360Controller", (int64)ESteamCoreInputType::XBox360Controller },
				{ "ESteamCoreInputType::XBoxOneController", (int64)ESteamCoreInputType::XBoxOneController },
				{ "ESteamCoreInputType::GenericGamepad", (int64)ESteamCoreInputType::GenericGamepad },
				{ "ESteamCoreInputType::PS4Controller", (int64)ESteamCoreInputType::PS4Controller },
				{ "ESteamCoreInputType::AppleMFiController", (int64)ESteamCoreInputType::AppleMFiController },
				{ "ESteamCoreInputType::AndroidController", (int64)ESteamCoreInputType::AndroidController },
				{ "ESteamCoreInputType::SwitchJoyConPair", (int64)ESteamCoreInputType::SwitchJoyConPair },
				{ "ESteamCoreInputType::SwitchJoyConSingle", (int64)ESteamCoreInputType::SwitchJoyConSingle },
				{ "ESteamCoreInputType::SwitchProController", (int64)ESteamCoreInputType::SwitchProController },
				{ "ESteamCoreInputType::MobileTouch", (int64)ESteamCoreInputType::MobileTouch },
				{ "ESteamCoreInputType::PS3Controller", (int64)ESteamCoreInputType::PS3Controller },
				{ "ESteamCoreInputType::Count", (int64)ESteamCoreInputType::Count },
				{ "ESteamCoreInputType::MaximumPossibleValue", (int64)ESteamCoreInputType::MaximumPossibleValue },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AndroidController.Name", "ESteamCoreInputType::AndroidController" },
				{ "AppleMFiController.Name", "ESteamCoreInputType::AppleMFiController" },
				{ "BlueprintType", "true" },
				{ "Count.Name", "ESteamCoreInputType::Count" },
				{ "GenericGamepad.Name", "ESteamCoreInputType::GenericGamepad" },
				{ "MaximumPossibleValue.Name", "ESteamCoreInputType::MaximumPossibleValue" },
				{ "MobileTouch.Name", "ESteamCoreInputType::MobileTouch" },
				{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
				{ "PS3Controller.Name", "ESteamCoreInputType::PS3Controller" },
				{ "PS4Controller.Name", "ESteamCoreInputType::PS4Controller" },
				{ "SteamController.Name", "ESteamCoreInputType::SteamController" },
				{ "SwitchJoyConPair.Name", "ESteamCoreInputType::SwitchJoyConPair" },
				{ "SwitchJoyConSingle.Name", "ESteamCoreInputType::SwitchJoyConSingle" },
				{ "SwitchProController.Name", "ESteamCoreInputType::SwitchProController" },
				{ "Unknown.Name", "ESteamCoreInputType::Unknown" },
				{ "XBox360Controller.Name", "ESteamCoreInputType::XBox360Controller" },
				{ "XBoxOneController.Name", "ESteamCoreInputType::XBoxOneController" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreInputType",
				"ESteamCoreInputType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamCoreControllerPad_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreControllerPad"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreControllerPad>()
	{
		return ESteamCoreControllerPad_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreControllerPad(ESteamCoreControllerPad_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreControllerPad"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Hash() { return 927745143U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreControllerPad"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreControllerPad_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreControllerPad::Left", (int64)ESteamCoreControllerPad::Left },
				{ "ESteamCoreControllerPad::Right", (int64)ESteamCoreControllerPad::Right },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Left.Name", "ESteamCoreControllerPad::Left" },
				{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
				{ "Right.Name", "ESteamCoreControllerPad::Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreControllerPad",
				"ESteamCoreControllerPad",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamCoreXboxOrigin_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreXboxOrigin"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreXboxOrigin>()
	{
		return ESteamCoreXboxOrigin_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreXboxOrigin(ESteamCoreXboxOrigin_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreXboxOrigin"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Hash() { return 1847408157U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreXboxOrigin"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreXboxOrigin_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreXboxOrigin::A", (int64)ESteamCoreXboxOrigin::A },
				{ "ESteamCoreXboxOrigin::B", (int64)ESteamCoreXboxOrigin::B },
				{ "ESteamCoreXboxOrigin::X", (int64)ESteamCoreXboxOrigin::X },
				{ "ESteamCoreXboxOrigin::Y", (int64)ESteamCoreXboxOrigin::Y },
				{ "ESteamCoreXboxOrigin::LeftBumper", (int64)ESteamCoreXboxOrigin::LeftBumper },
				{ "ESteamCoreXboxOrigin::RightBumper", (int64)ESteamCoreXboxOrigin::RightBumper },
				{ "ESteamCoreXboxOrigin::Menu", (int64)ESteamCoreXboxOrigin::Menu },
				{ "ESteamCoreXboxOrigin::View", (int64)ESteamCoreXboxOrigin::View },
				{ "ESteamCoreXboxOrigin::LeftTrigger_Pull", (int64)ESteamCoreXboxOrigin::LeftTrigger_Pull },
				{ "ESteamCoreXboxOrigin::LeftTrigger_Click", (int64)ESteamCoreXboxOrigin::LeftTrigger_Click },
				{ "ESteamCoreXboxOrigin::RightTrigger_Pull", (int64)ESteamCoreXboxOrigin::RightTrigger_Pull },
				{ "ESteamCoreXboxOrigin::RightTrigger_Click", (int64)ESteamCoreXboxOrigin::RightTrigger_Click },
				{ "ESteamCoreXboxOrigin::LeftStick_Move", (int64)ESteamCoreXboxOrigin::LeftStick_Move },
				{ "ESteamCoreXboxOrigin::LeftStick_Click", (int64)ESteamCoreXboxOrigin::LeftStick_Click },
				{ "ESteamCoreXboxOrigin::LeftStick_DPadNorth", (int64)ESteamCoreXboxOrigin::LeftStick_DPadNorth },
				{ "ESteamCoreXboxOrigin::LeftStick_DPadSouth", (int64)ESteamCoreXboxOrigin::LeftStick_DPadSouth },
				{ "ESteamCoreXboxOrigin::LeftStick_DPadWest", (int64)ESteamCoreXboxOrigin::LeftStick_DPadWest },
				{ "ESteamCoreXboxOrigin::LeftStick_DPadEast", (int64)ESteamCoreXboxOrigin::LeftStick_DPadEast },
				{ "ESteamCoreXboxOrigin::RightStick_Move", (int64)ESteamCoreXboxOrigin::RightStick_Move },
				{ "ESteamCoreXboxOrigin::RightStick_Click", (int64)ESteamCoreXboxOrigin::RightStick_Click },
				{ "ESteamCoreXboxOrigin::RightStick_DPadNorth", (int64)ESteamCoreXboxOrigin::RightStick_DPadNorth },
				{ "ESteamCoreXboxOrigin::RightStick_DPadSouth", (int64)ESteamCoreXboxOrigin::RightStick_DPadSouth },
				{ "ESteamCoreXboxOrigin::RightStick_DPadWest", (int64)ESteamCoreXboxOrigin::RightStick_DPadWest },
				{ "ESteamCoreXboxOrigin::RightStick_DPadEast", (int64)ESteamCoreXboxOrigin::RightStick_DPadEast },
				{ "ESteamCoreXboxOrigin::DPad_North", (int64)ESteamCoreXboxOrigin::DPad_North },
				{ "ESteamCoreXboxOrigin::DPad_South", (int64)ESteamCoreXboxOrigin::DPad_South },
				{ "ESteamCoreXboxOrigin::DPad_West", (int64)ESteamCoreXboxOrigin::DPad_West },
				{ "ESteamCoreXboxOrigin::DPad_East", (int64)ESteamCoreXboxOrigin::DPad_East },
				{ "ESteamCoreXboxOrigin::Count", (int64)ESteamCoreXboxOrigin::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "A.Name", "ESteamCoreXboxOrigin::A" },
				{ "B.Name", "ESteamCoreXboxOrigin::B" },
				{ "BlueprintType", "true" },
				{ "Count.Name", "ESteamCoreXboxOrigin::Count" },
				{ "DPad_East.Name", "ESteamCoreXboxOrigin::DPad_East" },
				{ "DPad_North.Name", "ESteamCoreXboxOrigin::DPad_North" },
				{ "DPad_South.Name", "ESteamCoreXboxOrigin::DPad_South" },
				{ "DPad_West.Name", "ESteamCoreXboxOrigin::DPad_West" },
				{ "LeftBumper.Name", "ESteamCoreXboxOrigin::LeftBumper" },
				{ "LeftStick_Click.Name", "ESteamCoreXboxOrigin::LeftStick_Click" },
				{ "LeftStick_DPadEast.Name", "ESteamCoreXboxOrigin::LeftStick_DPadEast" },
				{ "LeftStick_DPadNorth.Name", "ESteamCoreXboxOrigin::LeftStick_DPadNorth" },
				{ "LeftStick_DPadSouth.Name", "ESteamCoreXboxOrigin::LeftStick_DPadSouth" },
				{ "LeftStick_DPadWest.Name", "ESteamCoreXboxOrigin::LeftStick_DPadWest" },
				{ "LeftStick_Move.Name", "ESteamCoreXboxOrigin::LeftStick_Move" },
				{ "LeftTrigger_Click.Name", "ESteamCoreXboxOrigin::LeftTrigger_Click" },
				{ "LeftTrigger_Pull.Name", "ESteamCoreXboxOrigin::LeftTrigger_Pull" },
				{ "Menu.Name", "ESteamCoreXboxOrigin::Menu" },
				{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
				{ "RightBumper.Name", "ESteamCoreXboxOrigin::RightBumper" },
				{ "RightStick_Click.Name", "ESteamCoreXboxOrigin::RightStick_Click" },
				{ "RightStick_DPadEast.Name", "ESteamCoreXboxOrigin::RightStick_DPadEast" },
				{ "RightStick_DPadNorth.Name", "ESteamCoreXboxOrigin::RightStick_DPadNorth" },
				{ "RightStick_DPadSouth.Name", "ESteamCoreXboxOrigin::RightStick_DPadSouth" },
				{ "RightStick_DPadWest.Name", "ESteamCoreXboxOrigin::RightStick_DPadWest" },
				{ "RightStick_Move.Name", "ESteamCoreXboxOrigin::RightStick_Move" },
				{ "RightTrigger_Click.Name", "ESteamCoreXboxOrigin::RightTrigger_Click" },
				{ "RightTrigger_Pull.Name", "ESteamCoreXboxOrigin::RightTrigger_Pull" },
				{ "View.Name", "ESteamCoreXboxOrigin::View" },
				{ "X.Name", "ESteamCoreXboxOrigin::X" },
				{ "Y.Name", "ESteamCoreXboxOrigin::Y" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreXboxOrigin",
				"ESteamCoreXboxOrigin",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamCoreInputActionOrigin_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputActionOrigin"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputActionOrigin>()
	{
		return ESteamCoreInputActionOrigin_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreInputActionOrigin(ESteamCoreInputActionOrigin_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreInputActionOrigin"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin_Hash() { return 1601490531U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreInputActionOrigin"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputActionOrigin_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreInputActionOrigin::None", (int64)ESteamCoreInputActionOrigin::None },
				{ "ESteamCoreInputActionOrigin::SteamController_A", (int64)ESteamCoreInputActionOrigin::SteamController_A },
				{ "ESteamCoreInputActionOrigin::SteamController_B", (int64)ESteamCoreInputActionOrigin::SteamController_B },
				{ "ESteamCoreInputActionOrigin::SteamController_X", (int64)ESteamCoreInputActionOrigin::SteamController_X },
				{ "ESteamCoreInputActionOrigin::SteamController_Y", (int64)ESteamCoreInputActionOrigin::SteamController_Y },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftBumper", (int64)ESteamCoreInputActionOrigin::SteamController_LeftBumper },
				{ "ESteamCoreInputActionOrigin::SteamController_RightBumper", (int64)ESteamCoreInputActionOrigin::SteamController_RightBumper },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftGrip", (int64)ESteamCoreInputActionOrigin::SteamController_LeftGrip },
				{ "ESteamCoreInputActionOrigin::SteamController_RightGrip", (int64)ESteamCoreInputActionOrigin::SteamController_RightGrip },
				{ "ESteamCoreInputActionOrigin::SteamController_Start", (int64)ESteamCoreInputActionOrigin::SteamController_Start },
				{ "ESteamCoreInputActionOrigin::SteamController_Back", (int64)ESteamCoreInputActionOrigin::SteamController_Back },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftPad_Touch", (int64)ESteamCoreInputActionOrigin::SteamController_LeftPad_Touch },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftPad_Swipe", (int64)ESteamCoreInputActionOrigin::SteamController_LeftPad_Swipe },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftPad_Click", (int64)ESteamCoreInputActionOrigin::SteamController_LeftPad_Click },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadNorth", (int64)ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadNorth },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadSouth", (int64)ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadSouth },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadWest", (int64)ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadWest },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadEast", (int64)ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadEast },
				{ "ESteamCoreInputActionOrigin::SteamController_RightPad_Touch", (int64)ESteamCoreInputActionOrigin::SteamController_RightPad_Touch },
				{ "ESteamCoreInputActionOrigin::SteamController_RightPad_Swipe", (int64)ESteamCoreInputActionOrigin::SteamController_RightPad_Swipe },
				{ "ESteamCoreInputActionOrigin::SteamController_RightPad_Click", (int64)ESteamCoreInputActionOrigin::SteamController_RightPad_Click },
				{ "ESteamCoreInputActionOrigin::SteamController_RightPad_DPadNorth", (int64)ESteamCoreInputActionOrigin::SteamController_RightPad_DPadNorth },
				{ "ESteamCoreInputActionOrigin::SteamController_RightPad_DPadSouth", (int64)ESteamCoreInputActionOrigin::SteamController_RightPad_DPadSouth },
				{ "ESteamCoreInputActionOrigin::SteamController_RightPad_DPadWest", (int64)ESteamCoreInputActionOrigin::SteamController_RightPad_DPadWest },
				{ "ESteamCoreInputActionOrigin::SteamController_RightPad_DPadEast", (int64)ESteamCoreInputActionOrigin::SteamController_RightPad_DPadEast },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftTrigger_Pull", (int64)ESteamCoreInputActionOrigin::SteamController_LeftTrigger_Pull },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftTrigger_Click", (int64)ESteamCoreInputActionOrigin::SteamController_LeftTrigger_Click },
				{ "ESteamCoreInputActionOrigin::SteamController_RightTrigger_Pull", (int64)ESteamCoreInputActionOrigin::SteamController_RightTrigger_Pull },
				{ "ESteamCoreInputActionOrigin::SteamController_RightTrigger_Click", (int64)ESteamCoreInputActionOrigin::SteamController_RightTrigger_Click },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftStick_Move", (int64)ESteamCoreInputActionOrigin::SteamController_LeftStick_Move },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftStick_Click", (int64)ESteamCoreInputActionOrigin::SteamController_LeftStick_Click },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadNorth", (int64)ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadNorth },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadSouth", (int64)ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadSouth },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadWest", (int64)ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadWest },
				{ "ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadEast", (int64)ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadEast },
				{ "ESteamCoreInputActionOrigin::SteamController_Gyro_Move", (int64)ESteamCoreInputActionOrigin::SteamController_Gyro_Move },
				{ "ESteamCoreInputActionOrigin::SteamController_Gyro_Pitch", (int64)ESteamCoreInputActionOrigin::SteamController_Gyro_Pitch },
				{ "ESteamCoreInputActionOrigin::SteamController_Gyro_Yaw", (int64)ESteamCoreInputActionOrigin::SteamController_Gyro_Yaw },
				{ "ESteamCoreInputActionOrigin::SteamController_Gyro_Roll", (int64)ESteamCoreInputActionOrigin::SteamController_Gyro_Roll },
				{ "ESteamCoreInputActionOrigin::SteamController_Reserved0", (int64)ESteamCoreInputActionOrigin::SteamController_Reserved0 },
				{ "ESteamCoreInputActionOrigin::SteamController_Reserved1", (int64)ESteamCoreInputActionOrigin::SteamController_Reserved1 },
				{ "ESteamCoreInputActionOrigin::SteamController_Reserved2", (int64)ESteamCoreInputActionOrigin::SteamController_Reserved2 },
				{ "ESteamCoreInputActionOrigin::SteamController_Reserved3", (int64)ESteamCoreInputActionOrigin::SteamController_Reserved3 },
				{ "ESteamCoreInputActionOrigin::SteamController_Reserved4", (int64)ESteamCoreInputActionOrigin::SteamController_Reserved4 },
				{ "ESteamCoreInputActionOrigin::SteamController_Reserved5", (int64)ESteamCoreInputActionOrigin::SteamController_Reserved5 },
				{ "ESteamCoreInputActionOrigin::SteamController_Reserved6", (int64)ESteamCoreInputActionOrigin::SteamController_Reserved6 },
				{ "ESteamCoreInputActionOrigin::SteamController_Reserved7", (int64)ESteamCoreInputActionOrigin::SteamController_Reserved7 },
				{ "ESteamCoreInputActionOrigin::SteamController_Reserved8", (int64)ESteamCoreInputActionOrigin::SteamController_Reserved8 },
				{ "ESteamCoreInputActionOrigin::SteamController_Reserved9", (int64)ESteamCoreInputActionOrigin::SteamController_Reserved9 },
				{ "ESteamCoreInputActionOrigin::SteamController_Reserved10", (int64)ESteamCoreInputActionOrigin::SteamController_Reserved10 },
				{ "ESteamCoreInputActionOrigin::PS4_X", (int64)ESteamCoreInputActionOrigin::PS4_X },
				{ "ESteamCoreInputActionOrigin::PS4_Circle", (int64)ESteamCoreInputActionOrigin::PS4_Circle },
				{ "ESteamCoreInputActionOrigin::PS4_Triangle", (int64)ESteamCoreInputActionOrigin::PS4_Triangle },
				{ "ESteamCoreInputActionOrigin::PS4_Square", (int64)ESteamCoreInputActionOrigin::PS4_Square },
				{ "ESteamCoreInputActionOrigin::PS4_LeftBumper", (int64)ESteamCoreInputActionOrigin::PS4_LeftBumper },
				{ "ESteamCoreInputActionOrigin::PS4_RightBumper", (int64)ESteamCoreInputActionOrigin::PS4_RightBumper },
				{ "ESteamCoreInputActionOrigin::PS4_Options", (int64)ESteamCoreInputActionOrigin::PS4_Options },
				{ "ESteamCoreInputActionOrigin::PS4_Share", (int64)ESteamCoreInputActionOrigin::PS4_Share },
				{ "ESteamCoreInputActionOrigin::PS4_LeftPad_Touch", (int64)ESteamCoreInputActionOrigin::PS4_LeftPad_Touch },
				{ "ESteamCoreInputActionOrigin::PS4_LeftPad_Swipe", (int64)ESteamCoreInputActionOrigin::PS4_LeftPad_Swipe },
				{ "ESteamCoreInputActionOrigin::PS4_LeftPad_Click", (int64)ESteamCoreInputActionOrigin::PS4_LeftPad_Click },
				{ "ESteamCoreInputActionOrigin::PS4_LeftPad_DPadNorth", (int64)ESteamCoreInputActionOrigin::PS4_LeftPad_DPadNorth },
				{ "ESteamCoreInputActionOrigin::PS4_LeftPad_DPadSouth", (int64)ESteamCoreInputActionOrigin::PS4_LeftPad_DPadSouth },
				{ "ESteamCoreInputActionOrigin::PS4_LeftPad_DPadWest", (int64)ESteamCoreInputActionOrigin::PS4_LeftPad_DPadWest },
				{ "ESteamCoreInputActionOrigin::PS4_LeftPad_DPadEast", (int64)ESteamCoreInputActionOrigin::PS4_LeftPad_DPadEast },
				{ "ESteamCoreInputActionOrigin::PS4_RightPad_Touch", (int64)ESteamCoreInputActionOrigin::PS4_RightPad_Touch },
				{ "ESteamCoreInputActionOrigin::PS4_RightPad_Swipe", (int64)ESteamCoreInputActionOrigin::PS4_RightPad_Swipe },
				{ "ESteamCoreInputActionOrigin::PS4_RightPad_Click", (int64)ESteamCoreInputActionOrigin::PS4_RightPad_Click },
				{ "ESteamCoreInputActionOrigin::PS4_RightPad_DPadNorth", (int64)ESteamCoreInputActionOrigin::PS4_RightPad_DPadNorth },
				{ "ESteamCoreInputActionOrigin::PS4_RightPad_DPadSouth", (int64)ESteamCoreInputActionOrigin::PS4_RightPad_DPadSouth },
				{ "ESteamCoreInputActionOrigin::PS4_RightPad_DPadWest", (int64)ESteamCoreInputActionOrigin::PS4_RightPad_DPadWest },
				{ "ESteamCoreInputActionOrigin::PS4_RightPad_DPadEast", (int64)ESteamCoreInputActionOrigin::PS4_RightPad_DPadEast },
				{ "ESteamCoreInputActionOrigin::PS4_CenterPad_Touch", (int64)ESteamCoreInputActionOrigin::PS4_CenterPad_Touch },
				{ "ESteamCoreInputActionOrigin::PS4_CenterPad_Swipe", (int64)ESteamCoreInputActionOrigin::PS4_CenterPad_Swipe },
				{ "ESteamCoreInputActionOrigin::PS4_CenterPad_Click", (int64)ESteamCoreInputActionOrigin::PS4_CenterPad_Click },
				{ "ESteamCoreInputActionOrigin::PS4_CenterPad_DPadNorth", (int64)ESteamCoreInputActionOrigin::PS4_CenterPad_DPadNorth },
				{ "ESteamCoreInputActionOrigin::PS4_CenterPad_DPadSouth", (int64)ESteamCoreInputActionOrigin::PS4_CenterPad_DPadSouth },
				{ "ESteamCoreInputActionOrigin::PS4_CenterPad_DPadWest", (int64)ESteamCoreInputActionOrigin::PS4_CenterPad_DPadWest },
				{ "ESteamCoreInputActionOrigin::PS4_CenterPad_DPadEast", (int64)ESteamCoreInputActionOrigin::PS4_CenterPad_DPadEast },
				{ "ESteamCoreInputActionOrigin::PS4_LeftTrigger_Pull", (int64)ESteamCoreInputActionOrigin::PS4_LeftTrigger_Pull },
				{ "ESteamCoreInputActionOrigin::PS4_LeftTrigger_Click", (int64)ESteamCoreInputActionOrigin::PS4_LeftTrigger_Click },
				{ "ESteamCoreInputActionOrigin::PS4_RightTrigger_Pull", (int64)ESteamCoreInputActionOrigin::PS4_RightTrigger_Pull },
				{ "ESteamCoreInputActionOrigin::PS4_RightTrigger_Click", (int64)ESteamCoreInputActionOrigin::PS4_RightTrigger_Click },
				{ "ESteamCoreInputActionOrigin::PS4_LeftStick_Move", (int64)ESteamCoreInputActionOrigin::PS4_LeftStick_Move },
				{ "ESteamCoreInputActionOrigin::PS4_LeftStick_Click", (int64)ESteamCoreInputActionOrigin::PS4_LeftStick_Click },
				{ "ESteamCoreInputActionOrigin::PS4_LeftStick_DPadNorth", (int64)ESteamCoreInputActionOrigin::PS4_LeftStick_DPadNorth },
				{ "ESteamCoreInputActionOrigin::PS4_LeftStick_DPadSouth", (int64)ESteamCoreInputActionOrigin::PS4_LeftStick_DPadSouth },
				{ "ESteamCoreInputActionOrigin::PS4_LeftStick_DPadWest", (int64)ESteamCoreInputActionOrigin::PS4_LeftStick_DPadWest },
				{ "ESteamCoreInputActionOrigin::PS4_LeftStick_DPadEast", (int64)ESteamCoreInputActionOrigin::PS4_LeftStick_DPadEast },
				{ "ESteamCoreInputActionOrigin::PS4_RightStick_Move", (int64)ESteamCoreInputActionOrigin::PS4_RightStick_Move },
				{ "ESteamCoreInputActionOrigin::PS4_RightStick_Click", (int64)ESteamCoreInputActionOrigin::PS4_RightStick_Click },
				{ "ESteamCoreInputActionOrigin::PS4_RightStick_DPadNorth", (int64)ESteamCoreInputActionOrigin::PS4_RightStick_DPadNorth },
				{ "ESteamCoreInputActionOrigin::PS4_RightStick_DPadSouth", (int64)ESteamCoreInputActionOrigin::PS4_RightStick_DPadSouth },
				{ "ESteamCoreInputActionOrigin::PS4_RightStick_DPadWest", (int64)ESteamCoreInputActionOrigin::PS4_RightStick_DPadWest },
				{ "ESteamCoreInputActionOrigin::PS4_RightStick_DPadEast", (int64)ESteamCoreInputActionOrigin::PS4_RightStick_DPadEast },
				{ "ESteamCoreInputActionOrigin::PS4_DPad_North", (int64)ESteamCoreInputActionOrigin::PS4_DPad_North },
				{ "ESteamCoreInputActionOrigin::PS4_DPad_South", (int64)ESteamCoreInputActionOrigin::PS4_DPad_South },
				{ "ESteamCoreInputActionOrigin::PS4_DPad_West", (int64)ESteamCoreInputActionOrigin::PS4_DPad_West },
				{ "ESteamCoreInputActionOrigin::PS4_DPad_East", (int64)ESteamCoreInputActionOrigin::PS4_DPad_East },
				{ "ESteamCoreInputActionOrigin::PS4_Gyro_Move", (int64)ESteamCoreInputActionOrigin::PS4_Gyro_Move },
				{ "ESteamCoreInputActionOrigin::PS4_Gyro_Pitch", (int64)ESteamCoreInputActionOrigin::PS4_Gyro_Pitch },
				{ "ESteamCoreInputActionOrigin::PS4_Gyro_Yaw", (int64)ESteamCoreInputActionOrigin::PS4_Gyro_Yaw },
				{ "ESteamCoreInputActionOrigin::PS4_Gyro_Roll", (int64)ESteamCoreInputActionOrigin::PS4_Gyro_Roll },
				{ "ESteamCoreInputActionOrigin::PS4_DPad_Move", (int64)ESteamCoreInputActionOrigin::PS4_DPad_Move },
				{ "ESteamCoreInputActionOrigin::PS4_Reserved1", (int64)ESteamCoreInputActionOrigin::PS4_Reserved1 },
				{ "ESteamCoreInputActionOrigin::PS4_Reserved2", (int64)ESteamCoreInputActionOrigin::PS4_Reserved2 },
				{ "ESteamCoreInputActionOrigin::PS4_Reserved3", (int64)ESteamCoreInputActionOrigin::PS4_Reserved3 },
				{ "ESteamCoreInputActionOrigin::PS4_Reserved4", (int64)ESteamCoreInputActionOrigin::PS4_Reserved4 },
				{ "ESteamCoreInputActionOrigin::PS4_Reserved5", (int64)ESteamCoreInputActionOrigin::PS4_Reserved5 },
				{ "ESteamCoreInputActionOrigin::PS4_Reserved6", (int64)ESteamCoreInputActionOrigin::PS4_Reserved6 },
				{ "ESteamCoreInputActionOrigin::PS4_Reserved7", (int64)ESteamCoreInputActionOrigin::PS4_Reserved7 },
				{ "ESteamCoreInputActionOrigin::PS4_Reserved8", (int64)ESteamCoreInputActionOrigin::PS4_Reserved8 },
				{ "ESteamCoreInputActionOrigin::PS4_Reserved9", (int64)ESteamCoreInputActionOrigin::PS4_Reserved9 },
				{ "ESteamCoreInputActionOrigin::PS4_Reserved10", (int64)ESteamCoreInputActionOrigin::PS4_Reserved10 },
				{ "ESteamCoreInputActionOrigin::XBoxOne_A", (int64)ESteamCoreInputActionOrigin::XBoxOne_A },
				{ "ESteamCoreInputActionOrigin::XBoxOne_B", (int64)ESteamCoreInputActionOrigin::XBoxOne_B },
				{ "ESteamCoreInputActionOrigin::XBoxOne_X", (int64)ESteamCoreInputActionOrigin::XBoxOne_X },
				{ "ESteamCoreInputActionOrigin::XBoxOne_Y", (int64)ESteamCoreInputActionOrigin::XBoxOne_Y },
				{ "ESteamCoreInputActionOrigin::XBoxOne_LeftBumper", (int64)ESteamCoreInputActionOrigin::XBoxOne_LeftBumper },
				{ "ESteamCoreInputActionOrigin::XBoxOne_RightBumper", (int64)ESteamCoreInputActionOrigin::XBoxOne_RightBumper },
				{ "ESteamCoreInputActionOrigin::XBoxOne_Menu", (int64)ESteamCoreInputActionOrigin::XBoxOne_Menu },
				{ "ESteamCoreInputActionOrigin::XBoxOne_View", (int64)ESteamCoreInputActionOrigin::XBoxOne_View },
				{ "ESteamCoreInputActionOrigin::XBoxOne_LeftTrigger_Pull", (int64)ESteamCoreInputActionOrigin::XBoxOne_LeftTrigger_Pull },
				{ "ESteamCoreInputActionOrigin::XBoxOne_LeftTrigger_Click", (int64)ESteamCoreInputActionOrigin::XBoxOne_LeftTrigger_Click },
				{ "ESteamCoreInputActionOrigin::XBoxOne_RightTrigger_Pull", (int64)ESteamCoreInputActionOrigin::XBoxOne_RightTrigger_Pull },
				{ "ESteamCoreInputActionOrigin::XBoxOne_RightTrigger_Click", (int64)ESteamCoreInputActionOrigin::XBoxOne_RightTrigger_Click },
				{ "ESteamCoreInputActionOrigin::XBoxOne_LeftStick_Move", (int64)ESteamCoreInputActionOrigin::XBoxOne_LeftStick_Move },
				{ "ESteamCoreInputActionOrigin::XBoxOne_LeftStick_Click", (int64)ESteamCoreInputActionOrigin::XBoxOne_LeftStick_Click },
				{ "ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadNorth", (int64)ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadNorth },
				{ "ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadSouth", (int64)ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadSouth },
				{ "ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadWest", (int64)ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadWest },
				{ "ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadEast", (int64)ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadEast },
				{ "ESteamCoreInputActionOrigin::XBoxOne_RightStick_Move", (int64)ESteamCoreInputActionOrigin::XBoxOne_RightStick_Move },
				{ "ESteamCoreInputActionOrigin::XBoxOne_RightStick_Click", (int64)ESteamCoreInputActionOrigin::XBoxOne_RightStick_Click },
				{ "ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadNorth", (int64)ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadNorth },
				{ "ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadSouth", (int64)ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadSouth },
				{ "ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadWest", (int64)ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadWest },
				{ "ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadEast", (int64)ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadEast },
				{ "ESteamCoreInputActionOrigin::XBoxOne_DPad_North", (int64)ESteamCoreInputActionOrigin::XBoxOne_DPad_North },
				{ "ESteamCoreInputActionOrigin::XBoxOne_DPad_South", (int64)ESteamCoreInputActionOrigin::XBoxOne_DPad_South },
				{ "ESteamCoreInputActionOrigin::XBoxOne_DPad_West", (int64)ESteamCoreInputActionOrigin::XBoxOne_DPad_West },
				{ "ESteamCoreInputActionOrigin::XBoxOne_DPad_East", (int64)ESteamCoreInputActionOrigin::XBoxOne_DPad_East },
				{ "ESteamCoreInputActionOrigin::XBoxOne_DPad_Move", (int64)ESteamCoreInputActionOrigin::XBoxOne_DPad_Move },
				{ "ESteamCoreInputActionOrigin::XBoxOne_Reserved1", (int64)ESteamCoreInputActionOrigin::XBoxOne_Reserved1 },
				{ "ESteamCoreInputActionOrigin::XBoxOne_Reserved2", (int64)ESteamCoreInputActionOrigin::XBoxOne_Reserved2 },
				{ "ESteamCoreInputActionOrigin::XBoxOne_Reserved3", (int64)ESteamCoreInputActionOrigin::XBoxOne_Reserved3 },
				{ "ESteamCoreInputActionOrigin::XBoxOne_Reserved4", (int64)ESteamCoreInputActionOrigin::XBoxOne_Reserved4 },
				{ "ESteamCoreInputActionOrigin::XBoxOne_Reserved5", (int64)ESteamCoreInputActionOrigin::XBoxOne_Reserved5 },
				{ "ESteamCoreInputActionOrigin::XBoxOne_Reserved6", (int64)ESteamCoreInputActionOrigin::XBoxOne_Reserved6 },
				{ "ESteamCoreInputActionOrigin::XBoxOne_Reserved7", (int64)ESteamCoreInputActionOrigin::XBoxOne_Reserved7 },
				{ "ESteamCoreInputActionOrigin::XBoxOne_Reserved8", (int64)ESteamCoreInputActionOrigin::XBoxOne_Reserved8 },
				{ "ESteamCoreInputActionOrigin::XBoxOne_Reserved9", (int64)ESteamCoreInputActionOrigin::XBoxOne_Reserved9 },
				{ "ESteamCoreInputActionOrigin::XBoxOne_Reserved10", (int64)ESteamCoreInputActionOrigin::XBoxOne_Reserved10 },
				{ "ESteamCoreInputActionOrigin::XBox360_A", (int64)ESteamCoreInputActionOrigin::XBox360_A },
				{ "ESteamCoreInputActionOrigin::XBox360_B", (int64)ESteamCoreInputActionOrigin::XBox360_B },
				{ "ESteamCoreInputActionOrigin::XBox360_X", (int64)ESteamCoreInputActionOrigin::XBox360_X },
				{ "ESteamCoreInputActionOrigin::XBox360_Y", (int64)ESteamCoreInputActionOrigin::XBox360_Y },
				{ "ESteamCoreInputActionOrigin::XBox360_LeftBumper", (int64)ESteamCoreInputActionOrigin::XBox360_LeftBumper },
				{ "ESteamCoreInputActionOrigin::XBox360_RightBumper", (int64)ESteamCoreInputActionOrigin::XBox360_RightBumper },
				{ "ESteamCoreInputActionOrigin::XBox360_Start", (int64)ESteamCoreInputActionOrigin::XBox360_Start },
				{ "ESteamCoreInputActionOrigin::XBox360_Back", (int64)ESteamCoreInputActionOrigin::XBox360_Back },
				{ "ESteamCoreInputActionOrigin::XBox360_LeftTrigger_Pull", (int64)ESteamCoreInputActionOrigin::XBox360_LeftTrigger_Pull },
				{ "ESteamCoreInputActionOrigin::XBox360_LeftTrigger_Click", (int64)ESteamCoreInputActionOrigin::XBox360_LeftTrigger_Click },
				{ "ESteamCoreInputActionOrigin::XBox360_RightTrigger_Pull", (int64)ESteamCoreInputActionOrigin::XBox360_RightTrigger_Pull },
				{ "ESteamCoreInputActionOrigin::XBox360_RightTrigger_Click", (int64)ESteamCoreInputActionOrigin::XBox360_RightTrigger_Click },
				{ "ESteamCoreInputActionOrigin::XBox360_LeftStick_Move", (int64)ESteamCoreInputActionOrigin::XBox360_LeftStick_Move },
				{ "ESteamCoreInputActionOrigin::XBox360_LeftStick_Click", (int64)ESteamCoreInputActionOrigin::XBox360_LeftStick_Click },
				{ "ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadNorth", (int64)ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadNorth },
				{ "ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadSouth", (int64)ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadSouth },
				{ "ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadWest", (int64)ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadWest },
				{ "ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadEast", (int64)ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadEast },
				{ "ESteamCoreInputActionOrigin::XBox360_RightStick_Move", (int64)ESteamCoreInputActionOrigin::XBox360_RightStick_Move },
				{ "ESteamCoreInputActionOrigin::XBox360_RightStick_Click", (int64)ESteamCoreInputActionOrigin::XBox360_RightStick_Click },
				{ "ESteamCoreInputActionOrigin::XBox360_RightStick_DPadNorth", (int64)ESteamCoreInputActionOrigin::XBox360_RightStick_DPadNorth },
				{ "ESteamCoreInputActionOrigin::XBox360_RightStick_DPadSouth", (int64)ESteamCoreInputActionOrigin::XBox360_RightStick_DPadSouth },
				{ "ESteamCoreInputActionOrigin::XBox360_RightStick_DPadWest", (int64)ESteamCoreInputActionOrigin::XBox360_RightStick_DPadWest },
				{ "ESteamCoreInputActionOrigin::XBox360_RightStick_DPadEast", (int64)ESteamCoreInputActionOrigin::XBox360_RightStick_DPadEast },
				{ "ESteamCoreInputActionOrigin::XBox360_DPad_North", (int64)ESteamCoreInputActionOrigin::XBox360_DPad_North },
				{ "ESteamCoreInputActionOrigin::XBox360_DPad_South", (int64)ESteamCoreInputActionOrigin::XBox360_DPad_South },
				{ "ESteamCoreInputActionOrigin::XBox360_DPad_West", (int64)ESteamCoreInputActionOrigin::XBox360_DPad_West },
				{ "ESteamCoreInputActionOrigin::XBox360_DPad_East", (int64)ESteamCoreInputActionOrigin::XBox360_DPad_East },
				{ "ESteamCoreInputActionOrigin::XBox360_DPad_Move", (int64)ESteamCoreInputActionOrigin::XBox360_DPad_Move },
				{ "ESteamCoreInputActionOrigin::XBox360_Reserved1", (int64)ESteamCoreInputActionOrigin::XBox360_Reserved1 },
				{ "ESteamCoreInputActionOrigin::XBox360_Reserved2", (int64)ESteamCoreInputActionOrigin::XBox360_Reserved2 },
				{ "ESteamCoreInputActionOrigin::XBox360_Reserved3", (int64)ESteamCoreInputActionOrigin::XBox360_Reserved3 },
				{ "ESteamCoreInputActionOrigin::XBox360_Reserved4", (int64)ESteamCoreInputActionOrigin::XBox360_Reserved4 },
				{ "ESteamCoreInputActionOrigin::XBox360_Reserved5", (int64)ESteamCoreInputActionOrigin::XBox360_Reserved5 },
				{ "ESteamCoreInputActionOrigin::XBox360_Reserved6", (int64)ESteamCoreInputActionOrigin::XBox360_Reserved6 },
				{ "ESteamCoreInputActionOrigin::XBox360_Reserved7", (int64)ESteamCoreInputActionOrigin::XBox360_Reserved7 },
				{ "ESteamCoreInputActionOrigin::XBox360_Reserved8", (int64)ESteamCoreInputActionOrigin::XBox360_Reserved8 },
				{ "ESteamCoreInputActionOrigin::XBox360_Reserved9", (int64)ESteamCoreInputActionOrigin::XBox360_Reserved9 },
				{ "ESteamCoreInputActionOrigin::XBox360_Reserved10", (int64)ESteamCoreInputActionOrigin::XBox360_Reserved10 },
				{ "ESteamCoreInputActionOrigin::Switch_A", (int64)ESteamCoreInputActionOrigin::Switch_A },
				{ "ESteamCoreInputActionOrigin::Switch_B", (int64)ESteamCoreInputActionOrigin::Switch_B },
				{ "ESteamCoreInputActionOrigin::Switch_X", (int64)ESteamCoreInputActionOrigin::Switch_X },
				{ "ESteamCoreInputActionOrigin::Switch_Y", (int64)ESteamCoreInputActionOrigin::Switch_Y },
				{ "ESteamCoreInputActionOrigin::Switch_LeftBumper", (int64)ESteamCoreInputActionOrigin::Switch_LeftBumper },
				{ "ESteamCoreInputActionOrigin::Switch_RightBumper", (int64)ESteamCoreInputActionOrigin::Switch_RightBumper },
				{ "ESteamCoreInputActionOrigin::Switch_Plus", (int64)ESteamCoreInputActionOrigin::Switch_Plus },
				{ "ESteamCoreInputActionOrigin::Switch_Minus", (int64)ESteamCoreInputActionOrigin::Switch_Minus },
				{ "ESteamCoreInputActionOrigin::Switch_Capture", (int64)ESteamCoreInputActionOrigin::Switch_Capture },
				{ "ESteamCoreInputActionOrigin::Switch_LeftTrigger_Pull", (int64)ESteamCoreInputActionOrigin::Switch_LeftTrigger_Pull },
				{ "ESteamCoreInputActionOrigin::Switch_LeftTrigger_Click", (int64)ESteamCoreInputActionOrigin::Switch_LeftTrigger_Click },
				{ "ESteamCoreInputActionOrigin::Switch_RightTrigger_Pull", (int64)ESteamCoreInputActionOrigin::Switch_RightTrigger_Pull },
				{ "ESteamCoreInputActionOrigin::Switch_RightTrigger_Click", (int64)ESteamCoreInputActionOrigin::Switch_RightTrigger_Click },
				{ "ESteamCoreInputActionOrigin::Switch_LeftStick_Move", (int64)ESteamCoreInputActionOrigin::Switch_LeftStick_Move },
				{ "ESteamCoreInputActionOrigin::Switch_LeftStick_Click", (int64)ESteamCoreInputActionOrigin::Switch_LeftStick_Click },
				{ "ESteamCoreInputActionOrigin::Switch_LeftStick_DPadNorth", (int64)ESteamCoreInputActionOrigin::Switch_LeftStick_DPadNorth },
				{ "ESteamCoreInputActionOrigin::Switch_LeftStick_DPadSouth", (int64)ESteamCoreInputActionOrigin::Switch_LeftStick_DPadSouth },
				{ "ESteamCoreInputActionOrigin::Switch_LeftStick_DPadWest", (int64)ESteamCoreInputActionOrigin::Switch_LeftStick_DPadWest },
				{ "ESteamCoreInputActionOrigin::Switch_LeftStick_DPadEast", (int64)ESteamCoreInputActionOrigin::Switch_LeftStick_DPadEast },
				{ "ESteamCoreInputActionOrigin::Switch_RightStick_Move", (int64)ESteamCoreInputActionOrigin::Switch_RightStick_Move },
				{ "ESteamCoreInputActionOrigin::Switch_RightStick_Click", (int64)ESteamCoreInputActionOrigin::Switch_RightStick_Click },
				{ "ESteamCoreInputActionOrigin::Switch_RightStick_DPadNorth", (int64)ESteamCoreInputActionOrigin::Switch_RightStick_DPadNorth },
				{ "ESteamCoreInputActionOrigin::Switch_RightStick_DPadSouth", (int64)ESteamCoreInputActionOrigin::Switch_RightStick_DPadSouth },
				{ "ESteamCoreInputActionOrigin::Switch_RightStick_DPadWest", (int64)ESteamCoreInputActionOrigin::Switch_RightStick_DPadWest },
				{ "ESteamCoreInputActionOrigin::Switch_RightStick_DPadEast", (int64)ESteamCoreInputActionOrigin::Switch_RightStick_DPadEast },
				{ "ESteamCoreInputActionOrigin::Switch_DPad_North", (int64)ESteamCoreInputActionOrigin::Switch_DPad_North },
				{ "ESteamCoreInputActionOrigin::Switch_DPad_South", (int64)ESteamCoreInputActionOrigin::Switch_DPad_South },
				{ "ESteamCoreInputActionOrigin::Switch_DPad_West", (int64)ESteamCoreInputActionOrigin::Switch_DPad_West },
				{ "ESteamCoreInputActionOrigin::Switch_DPad_East", (int64)ESteamCoreInputActionOrigin::Switch_DPad_East },
				{ "ESteamCoreInputActionOrigin::Switch_ProGyro_Move", (int64)ESteamCoreInputActionOrigin::Switch_ProGyro_Move },
				{ "ESteamCoreInputActionOrigin::Switch_ProGyro_Pitch", (int64)ESteamCoreInputActionOrigin::Switch_ProGyro_Pitch },
				{ "ESteamCoreInputActionOrigin::Switch_ProGyro_Yaw", (int64)ESteamCoreInputActionOrigin::Switch_ProGyro_Yaw },
				{ "ESteamCoreInputActionOrigin::Switch_ProGyro_Roll", (int64)ESteamCoreInputActionOrigin::Switch_ProGyro_Roll },
				{ "ESteamCoreInputActionOrigin::Switch_DPad_Move", (int64)ESteamCoreInputActionOrigin::Switch_DPad_Move },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved1", (int64)ESteamCoreInputActionOrigin::Switch_Reserved1 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved2", (int64)ESteamCoreInputActionOrigin::Switch_Reserved2 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved3", (int64)ESteamCoreInputActionOrigin::Switch_Reserved3 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved4", (int64)ESteamCoreInputActionOrigin::Switch_Reserved4 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved5", (int64)ESteamCoreInputActionOrigin::Switch_Reserved5 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved6", (int64)ESteamCoreInputActionOrigin::Switch_Reserved6 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved7", (int64)ESteamCoreInputActionOrigin::Switch_Reserved7 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved8", (int64)ESteamCoreInputActionOrigin::Switch_Reserved8 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved9", (int64)ESteamCoreInputActionOrigin::Switch_Reserved9 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved10", (int64)ESteamCoreInputActionOrigin::Switch_Reserved10 },
				{ "ESteamCoreInputActionOrigin::Switch_RightGyro_Move", (int64)ESteamCoreInputActionOrigin::Switch_RightGyro_Move },
				{ "ESteamCoreInputActionOrigin::Switch_RightGyro_Pitch", (int64)ESteamCoreInputActionOrigin::Switch_RightGyro_Pitch },
				{ "ESteamCoreInputActionOrigin::Switch_RightGyro_Yaw", (int64)ESteamCoreInputActionOrigin::Switch_RightGyro_Yaw },
				{ "ESteamCoreInputActionOrigin::Switch_RightGyro_Roll", (int64)ESteamCoreInputActionOrigin::Switch_RightGyro_Roll },
				{ "ESteamCoreInputActionOrigin::Switch_LeftGyro_Move", (int64)ESteamCoreInputActionOrigin::Switch_LeftGyro_Move },
				{ "ESteamCoreInputActionOrigin::Switch_LeftGyro_Pitch", (int64)ESteamCoreInputActionOrigin::Switch_LeftGyro_Pitch },
				{ "ESteamCoreInputActionOrigin::Switch_LeftGyro_Yaw", (int64)ESteamCoreInputActionOrigin::Switch_LeftGyro_Yaw },
				{ "ESteamCoreInputActionOrigin::Switch_LeftGyro_Roll", (int64)ESteamCoreInputActionOrigin::Switch_LeftGyro_Roll },
				{ "ESteamCoreInputActionOrigin::Switch_LeftGrip_Lower", (int64)ESteamCoreInputActionOrigin::Switch_LeftGrip_Lower },
				{ "ESteamCoreInputActionOrigin::Switch_LeftGrip_Upper", (int64)ESteamCoreInputActionOrigin::Switch_LeftGrip_Upper },
				{ "ESteamCoreInputActionOrigin::Switch_RightGrip_Lower", (int64)ESteamCoreInputActionOrigin::Switch_RightGrip_Lower },
				{ "ESteamCoreInputActionOrigin::Switch_RightGrip_Upper", (int64)ESteamCoreInputActionOrigin::Switch_RightGrip_Upper },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved11", (int64)ESteamCoreInputActionOrigin::Switch_Reserved11 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved12", (int64)ESteamCoreInputActionOrigin::Switch_Reserved12 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved13", (int64)ESteamCoreInputActionOrigin::Switch_Reserved13 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved14", (int64)ESteamCoreInputActionOrigin::Switch_Reserved14 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved15", (int64)ESteamCoreInputActionOrigin::Switch_Reserved15 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved16", (int64)ESteamCoreInputActionOrigin::Switch_Reserved16 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved17", (int64)ESteamCoreInputActionOrigin::Switch_Reserved17 },
				{ "ESteamCoreInputActionOrigin::Switch_Reserved18", (int64)ESteamCoreInputActionOrigin::Switch_Reserved18 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
				{ "None.Comment", "// Steam Controller\n" },
				{ "None.Name", "ESteamCoreInputActionOrigin::None" },
				{ "None.ToolTip", "Steam Controller" },
				{ "PS4_CenterPad_Click.Name", "ESteamCoreInputActionOrigin::PS4_CenterPad_Click" },
				{ "PS4_CenterPad_DPadEast.Name", "ESteamCoreInputActionOrigin::PS4_CenterPad_DPadEast" },
				{ "PS4_CenterPad_DPadNorth.Name", "ESteamCoreInputActionOrigin::PS4_CenterPad_DPadNorth" },
				{ "PS4_CenterPad_DPadSouth.Name", "ESteamCoreInputActionOrigin::PS4_CenterPad_DPadSouth" },
				{ "PS4_CenterPad_DPadWest.Name", "ESteamCoreInputActionOrigin::PS4_CenterPad_DPadWest" },
				{ "PS4_CenterPad_Swipe.Name", "ESteamCoreInputActionOrigin::PS4_CenterPad_Swipe" },
				{ "PS4_CenterPad_Touch.Name", "ESteamCoreInputActionOrigin::PS4_CenterPad_Touch" },
				{ "PS4_Circle.Name", "ESteamCoreInputActionOrigin::PS4_Circle" },
				{ "PS4_DPad_East.Name", "ESteamCoreInputActionOrigin::PS4_DPad_East" },
				{ "PS4_DPad_Move.Name", "ESteamCoreInputActionOrigin::PS4_DPad_Move" },
				{ "PS4_DPad_North.Name", "ESteamCoreInputActionOrigin::PS4_DPad_North" },
				{ "PS4_DPad_South.Name", "ESteamCoreInputActionOrigin::PS4_DPad_South" },
				{ "PS4_DPad_West.Name", "ESteamCoreInputActionOrigin::PS4_DPad_West" },
				{ "PS4_Gyro_Move.Name", "ESteamCoreInputActionOrigin::PS4_Gyro_Move" },
				{ "PS4_Gyro_Pitch.Name", "ESteamCoreInputActionOrigin::PS4_Gyro_Pitch" },
				{ "PS4_Gyro_Roll.Name", "ESteamCoreInputActionOrigin::PS4_Gyro_Roll" },
				{ "PS4_Gyro_Yaw.Name", "ESteamCoreInputActionOrigin::PS4_Gyro_Yaw" },
				{ "PS4_LeftBumper.Name", "ESteamCoreInputActionOrigin::PS4_LeftBumper" },
				{ "PS4_LeftPad_Click.Name", "ESteamCoreInputActionOrigin::PS4_LeftPad_Click" },
				{ "PS4_LeftPad_DPadEast.Name", "ESteamCoreInputActionOrigin::PS4_LeftPad_DPadEast" },
				{ "PS4_LeftPad_DPadNorth.Name", "ESteamCoreInputActionOrigin::PS4_LeftPad_DPadNorth" },
				{ "PS4_LeftPad_DPadSouth.Name", "ESteamCoreInputActionOrigin::PS4_LeftPad_DPadSouth" },
				{ "PS4_LeftPad_DPadWest.Name", "ESteamCoreInputActionOrigin::PS4_LeftPad_DPadWest" },
				{ "PS4_LeftPad_Swipe.Name", "ESteamCoreInputActionOrigin::PS4_LeftPad_Swipe" },
				{ "PS4_LeftPad_Touch.Name", "ESteamCoreInputActionOrigin::PS4_LeftPad_Touch" },
				{ "PS4_LeftStick_Click.Name", "ESteamCoreInputActionOrigin::PS4_LeftStick_Click" },
				{ "PS4_LeftStick_DPadEast.Name", "ESteamCoreInputActionOrigin::PS4_LeftStick_DPadEast" },
				{ "PS4_LeftStick_DPadNorth.Name", "ESteamCoreInputActionOrigin::PS4_LeftStick_DPadNorth" },
				{ "PS4_LeftStick_DPadSouth.Name", "ESteamCoreInputActionOrigin::PS4_LeftStick_DPadSouth" },
				{ "PS4_LeftStick_DPadWest.Name", "ESteamCoreInputActionOrigin::PS4_LeftStick_DPadWest" },
				{ "PS4_LeftStick_Move.Name", "ESteamCoreInputActionOrigin::PS4_LeftStick_Move" },
				{ "PS4_LeftTrigger_Click.Name", "ESteamCoreInputActionOrigin::PS4_LeftTrigger_Click" },
				{ "PS4_LeftTrigger_Pull.Name", "ESteamCoreInputActionOrigin::PS4_LeftTrigger_Pull" },
				{ "PS4_Options.Name", "ESteamCoreInputActionOrigin::PS4_Options" },
				{ "PS4_Reserved1.Name", "ESteamCoreInputActionOrigin::PS4_Reserved1" },
				{ "PS4_Reserved10.Name", "ESteamCoreInputActionOrigin::PS4_Reserved10" },
				{ "PS4_Reserved2.Name", "ESteamCoreInputActionOrigin::PS4_Reserved2" },
				{ "PS4_Reserved3.Name", "ESteamCoreInputActionOrigin::PS4_Reserved3" },
				{ "PS4_Reserved4.Name", "ESteamCoreInputActionOrigin::PS4_Reserved4" },
				{ "PS4_Reserved5.Name", "ESteamCoreInputActionOrigin::PS4_Reserved5" },
				{ "PS4_Reserved6.Name", "ESteamCoreInputActionOrigin::PS4_Reserved6" },
				{ "PS4_Reserved7.Name", "ESteamCoreInputActionOrigin::PS4_Reserved7" },
				{ "PS4_Reserved8.Name", "ESteamCoreInputActionOrigin::PS4_Reserved8" },
				{ "PS4_Reserved9.Name", "ESteamCoreInputActionOrigin::PS4_Reserved9" },
				{ "PS4_RightBumper.Name", "ESteamCoreInputActionOrigin::PS4_RightBumper" },
				{ "PS4_RightPad_Click.Name", "ESteamCoreInputActionOrigin::PS4_RightPad_Click" },
				{ "PS4_RightPad_DPadEast.Name", "ESteamCoreInputActionOrigin::PS4_RightPad_DPadEast" },
				{ "PS4_RightPad_DPadNorth.Name", "ESteamCoreInputActionOrigin::PS4_RightPad_DPadNorth" },
				{ "PS4_RightPad_DPadSouth.Name", "ESteamCoreInputActionOrigin::PS4_RightPad_DPadSouth" },
				{ "PS4_RightPad_DPadWest.Name", "ESteamCoreInputActionOrigin::PS4_RightPad_DPadWest" },
				{ "PS4_RightPad_Swipe.Name", "ESteamCoreInputActionOrigin::PS4_RightPad_Swipe" },
				{ "PS4_RightPad_Touch.Name", "ESteamCoreInputActionOrigin::PS4_RightPad_Touch" },
				{ "PS4_RightStick_Click.Name", "ESteamCoreInputActionOrigin::PS4_RightStick_Click" },
				{ "PS4_RightStick_DPadEast.Name", "ESteamCoreInputActionOrigin::PS4_RightStick_DPadEast" },
				{ "PS4_RightStick_DPadNorth.Name", "ESteamCoreInputActionOrigin::PS4_RightStick_DPadNorth" },
				{ "PS4_RightStick_DPadSouth.Name", "ESteamCoreInputActionOrigin::PS4_RightStick_DPadSouth" },
				{ "PS4_RightStick_DPadWest.Name", "ESteamCoreInputActionOrigin::PS4_RightStick_DPadWest" },
				{ "PS4_RightStick_Move.Name", "ESteamCoreInputActionOrigin::PS4_RightStick_Move" },
				{ "PS4_RightTrigger_Click.Name", "ESteamCoreInputActionOrigin::PS4_RightTrigger_Click" },
				{ "PS4_RightTrigger_Pull.Name", "ESteamCoreInputActionOrigin::PS4_RightTrigger_Pull" },
				{ "PS4_Share.Name", "ESteamCoreInputActionOrigin::PS4_Share" },
				{ "PS4_Square.Name", "ESteamCoreInputActionOrigin::PS4_Square" },
				{ "PS4_Triangle.Name", "ESteamCoreInputActionOrigin::PS4_Triangle" },
				{ "PS4_X.Comment", "// PS4 Dual Shock\n" },
				{ "PS4_X.Name", "ESteamCoreInputActionOrigin::PS4_X" },
				{ "PS4_X.ToolTip", "PS4 Dual Shock" },
				{ "SteamController_A.Name", "ESteamCoreInputActionOrigin::SteamController_A" },
				{ "SteamController_B.Name", "ESteamCoreInputActionOrigin::SteamController_B" },
				{ "SteamController_Back.Name", "ESteamCoreInputActionOrigin::SteamController_Back" },
				{ "SteamController_Gyro_Move.Name", "ESteamCoreInputActionOrigin::SteamController_Gyro_Move" },
				{ "SteamController_Gyro_Pitch.Name", "ESteamCoreInputActionOrigin::SteamController_Gyro_Pitch" },
				{ "SteamController_Gyro_Roll.Name", "ESteamCoreInputActionOrigin::SteamController_Gyro_Roll" },
				{ "SteamController_Gyro_Yaw.Name", "ESteamCoreInputActionOrigin::SteamController_Gyro_Yaw" },
				{ "SteamController_LeftBumper.Name", "ESteamCoreInputActionOrigin::SteamController_LeftBumper" },
				{ "SteamController_LeftGrip.Name", "ESteamCoreInputActionOrigin::SteamController_LeftGrip" },
				{ "SteamController_LeftPad_Click.Name", "ESteamCoreInputActionOrigin::SteamController_LeftPad_Click" },
				{ "SteamController_LeftPad_DPadEast.Name", "ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadEast" },
				{ "SteamController_LeftPad_DPadNorth.Name", "ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadNorth" },
				{ "SteamController_LeftPad_DPadSouth.Name", "ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadSouth" },
				{ "SteamController_LeftPad_DPadWest.Name", "ESteamCoreInputActionOrigin::SteamController_LeftPad_DPadWest" },
				{ "SteamController_LeftPad_Swipe.Name", "ESteamCoreInputActionOrigin::SteamController_LeftPad_Swipe" },
				{ "SteamController_LeftPad_Touch.Name", "ESteamCoreInputActionOrigin::SteamController_LeftPad_Touch" },
				{ "SteamController_LeftStick_Click.Name", "ESteamCoreInputActionOrigin::SteamController_LeftStick_Click" },
				{ "SteamController_LeftStick_DPadEast.Name", "ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadEast" },
				{ "SteamController_LeftStick_DPadNorth.Name", "ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadNorth" },
				{ "SteamController_LeftStick_DPadSouth.Name", "ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadSouth" },
				{ "SteamController_LeftStick_DPadWest.Name", "ESteamCoreInputActionOrigin::SteamController_LeftStick_DPadWest" },
				{ "SteamController_LeftStick_Move.Name", "ESteamCoreInputActionOrigin::SteamController_LeftStick_Move" },
				{ "SteamController_LeftTrigger_Click.Name", "ESteamCoreInputActionOrigin::SteamController_LeftTrigger_Click" },
				{ "SteamController_LeftTrigger_Pull.Name", "ESteamCoreInputActionOrigin::SteamController_LeftTrigger_Pull" },
				{ "SteamController_Reserved0.Name", "ESteamCoreInputActionOrigin::SteamController_Reserved0" },
				{ "SteamController_Reserved1.Name", "ESteamCoreInputActionOrigin::SteamController_Reserved1" },
				{ "SteamController_Reserved10.Name", "ESteamCoreInputActionOrigin::SteamController_Reserved10" },
				{ "SteamController_Reserved2.Name", "ESteamCoreInputActionOrigin::SteamController_Reserved2" },
				{ "SteamController_Reserved3.Name", "ESteamCoreInputActionOrigin::SteamController_Reserved3" },
				{ "SteamController_Reserved4.Name", "ESteamCoreInputActionOrigin::SteamController_Reserved4" },
				{ "SteamController_Reserved5.Name", "ESteamCoreInputActionOrigin::SteamController_Reserved5" },
				{ "SteamController_Reserved6.Name", "ESteamCoreInputActionOrigin::SteamController_Reserved6" },
				{ "SteamController_Reserved7.Name", "ESteamCoreInputActionOrigin::SteamController_Reserved7" },
				{ "SteamController_Reserved8.Name", "ESteamCoreInputActionOrigin::SteamController_Reserved8" },
				{ "SteamController_Reserved9.Name", "ESteamCoreInputActionOrigin::SteamController_Reserved9" },
				{ "SteamController_RightBumper.Name", "ESteamCoreInputActionOrigin::SteamController_RightBumper" },
				{ "SteamController_RightGrip.Name", "ESteamCoreInputActionOrigin::SteamController_RightGrip" },
				{ "SteamController_RightPad_Click.Name", "ESteamCoreInputActionOrigin::SteamController_RightPad_Click" },
				{ "SteamController_RightPad_DPadEast.Name", "ESteamCoreInputActionOrigin::SteamController_RightPad_DPadEast" },
				{ "SteamController_RightPad_DPadNorth.Name", "ESteamCoreInputActionOrigin::SteamController_RightPad_DPadNorth" },
				{ "SteamController_RightPad_DPadSouth.Name", "ESteamCoreInputActionOrigin::SteamController_RightPad_DPadSouth" },
				{ "SteamController_RightPad_DPadWest.Name", "ESteamCoreInputActionOrigin::SteamController_RightPad_DPadWest" },
				{ "SteamController_RightPad_Swipe.Name", "ESteamCoreInputActionOrigin::SteamController_RightPad_Swipe" },
				{ "SteamController_RightPad_Touch.Name", "ESteamCoreInputActionOrigin::SteamController_RightPad_Touch" },
				{ "SteamController_RightTrigger_Click.Name", "ESteamCoreInputActionOrigin::SteamController_RightTrigger_Click" },
				{ "SteamController_RightTrigger_Pull.Name", "ESteamCoreInputActionOrigin::SteamController_RightTrigger_Pull" },
				{ "SteamController_Start.Name", "ESteamCoreInputActionOrigin::SteamController_Start" },
				{ "SteamController_X.Name", "ESteamCoreInputActionOrigin::SteamController_X" },
				{ "SteamController_Y.Name", "ESteamCoreInputActionOrigin::SteamController_Y" },
				{ "Switch_A.Comment", "// Switch - Pro or Joycons used as a single input device.\n// This does not apply to a single joycon\n" },
				{ "Switch_A.Name", "ESteamCoreInputActionOrigin::Switch_A" },
				{ "Switch_A.ToolTip", "Switch - Pro or Joycons used as a single input device.\nThis does not apply to a single joycon" },
				{ "Switch_B.Name", "ESteamCoreInputActionOrigin::Switch_B" },
				{ "Switch_Capture.Name", "ESteamCoreInputActionOrigin::Switch_Capture" },
				{ "Switch_DPad_East.Name", "ESteamCoreInputActionOrigin::Switch_DPad_East" },
				{ "Switch_DPad_Move.Name", "ESteamCoreInputActionOrigin::Switch_DPad_Move" },
				{ "Switch_DPad_North.Name", "ESteamCoreInputActionOrigin::Switch_DPad_North" },
				{ "Switch_DPad_South.Name", "ESteamCoreInputActionOrigin::Switch_DPad_South" },
				{ "Switch_DPad_West.Name", "ESteamCoreInputActionOrigin::Switch_DPad_West" },
				{ "Switch_LeftBumper.Name", "ESteamCoreInputActionOrigin::Switch_LeftBumper" },
				{ "Switch_LeftGrip_Lower.Name", "ESteamCoreInputActionOrigin::Switch_LeftGrip_Lower" },
				{ "Switch_LeftGrip_Upper.Name", "ESteamCoreInputActionOrigin::Switch_LeftGrip_Upper" },
				{ "Switch_LeftGyro_Move.Name", "ESteamCoreInputActionOrigin::Switch_LeftGyro_Move" },
				{ "Switch_LeftGyro_Pitch.Name", "ESteamCoreInputActionOrigin::Switch_LeftGyro_Pitch" },
				{ "Switch_LeftGyro_Roll.Name", "ESteamCoreInputActionOrigin::Switch_LeftGyro_Roll" },
				{ "Switch_LeftGyro_Yaw.Name", "ESteamCoreInputActionOrigin::Switch_LeftGyro_Yaw" },
				{ "Switch_LeftStick_Click.Name", "ESteamCoreInputActionOrigin::Switch_LeftStick_Click" },
				{ "Switch_LeftStick_DPadEast.Name", "ESteamCoreInputActionOrigin::Switch_LeftStick_DPadEast" },
				{ "Switch_LeftStick_DPadNorth.Name", "ESteamCoreInputActionOrigin::Switch_LeftStick_DPadNorth" },
				{ "Switch_LeftStick_DPadSouth.Name", "ESteamCoreInputActionOrigin::Switch_LeftStick_DPadSouth" },
				{ "Switch_LeftStick_DPadWest.Name", "ESteamCoreInputActionOrigin::Switch_LeftStick_DPadWest" },
				{ "Switch_LeftStick_Move.Name", "ESteamCoreInputActionOrigin::Switch_LeftStick_Move" },
				{ "Switch_LeftTrigger_Click.Name", "ESteamCoreInputActionOrigin::Switch_LeftTrigger_Click" },
				{ "Switch_LeftTrigger_Pull.Name", "ESteamCoreInputActionOrigin::Switch_LeftTrigger_Pull" },
				{ "Switch_Minus.Name", "ESteamCoreInputActionOrigin::Switch_Minus" },
				{ "Switch_Plus.Name", "ESteamCoreInputActionOrigin::Switch_Plus" },
				{ "Switch_ProGyro_Move.Name", "ESteamCoreInputActionOrigin::Switch_ProGyro_Move" },
				{ "Switch_ProGyro_Pitch.Name", "ESteamCoreInputActionOrigin::Switch_ProGyro_Pitch" },
				{ "Switch_ProGyro_Roll.Name", "ESteamCoreInputActionOrigin::Switch_ProGyro_Roll" },
				{ "Switch_ProGyro_Yaw.Name", "ESteamCoreInputActionOrigin::Switch_ProGyro_Yaw" },
				{ "Switch_Reserved1.Name", "ESteamCoreInputActionOrigin::Switch_Reserved1" },
				{ "Switch_Reserved10.Name", "ESteamCoreInputActionOrigin::Switch_Reserved10" },
				{ "Switch_Reserved11.Name", "ESteamCoreInputActionOrigin::Switch_Reserved11" },
				{ "Switch_Reserved12.Name", "ESteamCoreInputActionOrigin::Switch_Reserved12" },
				{ "Switch_Reserved13.Name", "ESteamCoreInputActionOrigin::Switch_Reserved13" },
				{ "Switch_Reserved14.Name", "ESteamCoreInputActionOrigin::Switch_Reserved14" },
				{ "Switch_Reserved15.Name", "ESteamCoreInputActionOrigin::Switch_Reserved15" },
				{ "Switch_Reserved16.Name", "ESteamCoreInputActionOrigin::Switch_Reserved16" },
				{ "Switch_Reserved17.Name", "ESteamCoreInputActionOrigin::Switch_Reserved17" },
				{ "Switch_Reserved18.Name", "ESteamCoreInputActionOrigin::Switch_Reserved18" },
				{ "Switch_Reserved2.Name", "ESteamCoreInputActionOrigin::Switch_Reserved2" },
				{ "Switch_Reserved3.Name", "ESteamCoreInputActionOrigin::Switch_Reserved3" },
				{ "Switch_Reserved4.Name", "ESteamCoreInputActionOrigin::Switch_Reserved4" },
				{ "Switch_Reserved5.Name", "ESteamCoreInputActionOrigin::Switch_Reserved5" },
				{ "Switch_Reserved6.Name", "ESteamCoreInputActionOrigin::Switch_Reserved6" },
				{ "Switch_Reserved7.Name", "ESteamCoreInputActionOrigin::Switch_Reserved7" },
				{ "Switch_Reserved8.Name", "ESteamCoreInputActionOrigin::Switch_Reserved8" },
				{ "Switch_Reserved9.Name", "ESteamCoreInputActionOrigin::Switch_Reserved9" },
				{ "Switch_RightBumper.Name", "ESteamCoreInputActionOrigin::Switch_RightBumper" },
				{ "Switch_RightGrip_Lower.Name", "ESteamCoreInputActionOrigin::Switch_RightGrip_Lower" },
				{ "Switch_RightGrip_Upper.Name", "ESteamCoreInputActionOrigin::Switch_RightGrip_Upper" },
				{ "Switch_RightGyro_Move.Comment", "// Switch JoyCon Specific\n" },
				{ "Switch_RightGyro_Move.Name", "ESteamCoreInputActionOrigin::Switch_RightGyro_Move" },
				{ "Switch_RightGyro_Move.ToolTip", "Switch JoyCon Specific" },
				{ "Switch_RightGyro_Pitch.Name", "ESteamCoreInputActionOrigin::Switch_RightGyro_Pitch" },
				{ "Switch_RightGyro_Roll.Name", "ESteamCoreInputActionOrigin::Switch_RightGyro_Roll" },
				{ "Switch_RightGyro_Yaw.Name", "ESteamCoreInputActionOrigin::Switch_RightGyro_Yaw" },
				{ "Switch_RightStick_Click.Name", "ESteamCoreInputActionOrigin::Switch_RightStick_Click" },
				{ "Switch_RightStick_DPadEast.Name", "ESteamCoreInputActionOrigin::Switch_RightStick_DPadEast" },
				{ "Switch_RightStick_DPadNorth.Name", "ESteamCoreInputActionOrigin::Switch_RightStick_DPadNorth" },
				{ "Switch_RightStick_DPadSouth.Name", "ESteamCoreInputActionOrigin::Switch_RightStick_DPadSouth" },
				{ "Switch_RightStick_DPadWest.Name", "ESteamCoreInputActionOrigin::Switch_RightStick_DPadWest" },
				{ "Switch_RightStick_Move.Name", "ESteamCoreInputActionOrigin::Switch_RightStick_Move" },
				{ "Switch_RightTrigger_Click.Name", "ESteamCoreInputActionOrigin::Switch_RightTrigger_Click" },
				{ "Switch_RightTrigger_Pull.Name", "ESteamCoreInputActionOrigin::Switch_RightTrigger_Pull" },
				{ "Switch_X.Name", "ESteamCoreInputActionOrigin::Switch_X" },
				{ "Switch_Y.Name", "ESteamCoreInputActionOrigin::Switch_Y" },
				{ "XBox360_A.Comment", "// XBox 360\n" },
				{ "XBox360_A.Name", "ESteamCoreInputActionOrigin::XBox360_A" },
				{ "XBox360_A.ToolTip", "XBox 360" },
				{ "XBox360_B.Name", "ESteamCoreInputActionOrigin::XBox360_B" },
				{ "XBox360_Back.Name", "ESteamCoreInputActionOrigin::XBox360_Back" },
				{ "XBox360_DPad_East.Name", "ESteamCoreInputActionOrigin::XBox360_DPad_East" },
				{ "XBox360_DPad_Move.Name", "ESteamCoreInputActionOrigin::XBox360_DPad_Move" },
				{ "XBox360_DPad_North.Name", "ESteamCoreInputActionOrigin::XBox360_DPad_North" },
				{ "XBox360_DPad_South.Name", "ESteamCoreInputActionOrigin::XBox360_DPad_South" },
				{ "XBox360_DPad_West.Name", "ESteamCoreInputActionOrigin::XBox360_DPad_West" },
				{ "XBox360_LeftBumper.Name", "ESteamCoreInputActionOrigin::XBox360_LeftBumper" },
				{ "XBox360_LeftStick_Click.Name", "ESteamCoreInputActionOrigin::XBox360_LeftStick_Click" },
				{ "XBox360_LeftStick_DPadEast.Name", "ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadEast" },
				{ "XBox360_LeftStick_DPadNorth.Name", "ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadNorth" },
				{ "XBox360_LeftStick_DPadSouth.Name", "ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadSouth" },
				{ "XBox360_LeftStick_DPadWest.Name", "ESteamCoreInputActionOrigin::XBox360_LeftStick_DPadWest" },
				{ "XBox360_LeftStick_Move.Name", "ESteamCoreInputActionOrigin::XBox360_LeftStick_Move" },
				{ "XBox360_LeftTrigger_Click.Name", "ESteamCoreInputActionOrigin::XBox360_LeftTrigger_Click" },
				{ "XBox360_LeftTrigger_Pull.Name", "ESteamCoreInputActionOrigin::XBox360_LeftTrigger_Pull" },
				{ "XBox360_Reserved1.Name", "ESteamCoreInputActionOrigin::XBox360_Reserved1" },
				{ "XBox360_Reserved10.Name", "ESteamCoreInputActionOrigin::XBox360_Reserved10" },
				{ "XBox360_Reserved2.Name", "ESteamCoreInputActionOrigin::XBox360_Reserved2" },
				{ "XBox360_Reserved3.Name", "ESteamCoreInputActionOrigin::XBox360_Reserved3" },
				{ "XBox360_Reserved4.Name", "ESteamCoreInputActionOrigin::XBox360_Reserved4" },
				{ "XBox360_Reserved5.Name", "ESteamCoreInputActionOrigin::XBox360_Reserved5" },
				{ "XBox360_Reserved6.Name", "ESteamCoreInputActionOrigin::XBox360_Reserved6" },
				{ "XBox360_Reserved7.Name", "ESteamCoreInputActionOrigin::XBox360_Reserved7" },
				{ "XBox360_Reserved8.Name", "ESteamCoreInputActionOrigin::XBox360_Reserved8" },
				{ "XBox360_Reserved9.Name", "ESteamCoreInputActionOrigin::XBox360_Reserved9" },
				{ "XBox360_RightBumper.Name", "ESteamCoreInputActionOrigin::XBox360_RightBumper" },
				{ "XBox360_RightStick_Click.Name", "ESteamCoreInputActionOrigin::XBox360_RightStick_Click" },
				{ "XBox360_RightStick_DPadEast.Name", "ESteamCoreInputActionOrigin::XBox360_RightStick_DPadEast" },
				{ "XBox360_RightStick_DPadNorth.Name", "ESteamCoreInputActionOrigin::XBox360_RightStick_DPadNorth" },
				{ "XBox360_RightStick_DPadSouth.Name", "ESteamCoreInputActionOrigin::XBox360_RightStick_DPadSouth" },
				{ "XBox360_RightStick_DPadWest.Name", "ESteamCoreInputActionOrigin::XBox360_RightStick_DPadWest" },
				{ "XBox360_RightStick_Move.Name", "ESteamCoreInputActionOrigin::XBox360_RightStick_Move" },
				{ "XBox360_RightTrigger_Click.Name", "ESteamCoreInputActionOrigin::XBox360_RightTrigger_Click" },
				{ "XBox360_RightTrigger_Pull.Name", "ESteamCoreInputActionOrigin::XBox360_RightTrigger_Pull" },
				{ "XBox360_Start.Name", "ESteamCoreInputActionOrigin::XBox360_Start" },
				{ "XBox360_X.Name", "ESteamCoreInputActionOrigin::XBox360_X" },
				{ "XBox360_Y.Name", "ESteamCoreInputActionOrigin::XBox360_Y" },
				{ "XBoxOne_A.Comment", "// XBox One\n" },
				{ "XBoxOne_A.Name", "ESteamCoreInputActionOrigin::XBoxOne_A" },
				{ "XBoxOne_A.ToolTip", "XBox One" },
				{ "XBoxOne_B.Name", "ESteamCoreInputActionOrigin::XBoxOne_B" },
				{ "XBoxOne_DPad_East.Name", "ESteamCoreInputActionOrigin::XBoxOne_DPad_East" },
				{ "XBoxOne_DPad_Move.Name", "ESteamCoreInputActionOrigin::XBoxOne_DPad_Move" },
				{ "XBoxOne_DPad_North.Name", "ESteamCoreInputActionOrigin::XBoxOne_DPad_North" },
				{ "XBoxOne_DPad_South.Name", "ESteamCoreInputActionOrigin::XBoxOne_DPad_South" },
				{ "XBoxOne_DPad_West.Name", "ESteamCoreInputActionOrigin::XBoxOne_DPad_West" },
				{ "XBoxOne_LeftBumper.Name", "ESteamCoreInputActionOrigin::XBoxOne_LeftBumper" },
				{ "XBoxOne_LeftStick_Click.Name", "ESteamCoreInputActionOrigin::XBoxOne_LeftStick_Click" },
				{ "XBoxOne_LeftStick_DPadEast.Name", "ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadEast" },
				{ "XBoxOne_LeftStick_DPadNorth.Name", "ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadNorth" },
				{ "XBoxOne_LeftStick_DPadSouth.Name", "ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadSouth" },
				{ "XBoxOne_LeftStick_DPadWest.Name", "ESteamCoreInputActionOrigin::XBoxOne_LeftStick_DPadWest" },
				{ "XBoxOne_LeftStick_Move.Name", "ESteamCoreInputActionOrigin::XBoxOne_LeftStick_Move" },
				{ "XBoxOne_LeftTrigger_Click.Name", "ESteamCoreInputActionOrigin::XBoxOne_LeftTrigger_Click" },
				{ "XBoxOne_LeftTrigger_Pull.Name", "ESteamCoreInputActionOrigin::XBoxOne_LeftTrigger_Pull" },
				{ "XBoxOne_Menu.Name", "ESteamCoreInputActionOrigin::XBoxOne_Menu" },
				{ "XBoxOne_Reserved1.Name", "ESteamCoreInputActionOrigin::XBoxOne_Reserved1" },
				{ "XBoxOne_Reserved10.Name", "ESteamCoreInputActionOrigin::XBoxOne_Reserved10" },
				{ "XBoxOne_Reserved2.Name", "ESteamCoreInputActionOrigin::XBoxOne_Reserved2" },
				{ "XBoxOne_Reserved3.Name", "ESteamCoreInputActionOrigin::XBoxOne_Reserved3" },
				{ "XBoxOne_Reserved4.Name", "ESteamCoreInputActionOrigin::XBoxOne_Reserved4" },
				{ "XBoxOne_Reserved5.Name", "ESteamCoreInputActionOrigin::XBoxOne_Reserved5" },
				{ "XBoxOne_Reserved6.Name", "ESteamCoreInputActionOrigin::XBoxOne_Reserved6" },
				{ "XBoxOne_Reserved7.Name", "ESteamCoreInputActionOrigin::XBoxOne_Reserved7" },
				{ "XBoxOne_Reserved8.Name", "ESteamCoreInputActionOrigin::XBoxOne_Reserved8" },
				{ "XBoxOne_Reserved9.Name", "ESteamCoreInputActionOrigin::XBoxOne_Reserved9" },
				{ "XBoxOne_RightBumper.Name", "ESteamCoreInputActionOrigin::XBoxOne_RightBumper" },
				{ "XBoxOne_RightStick_Click.Name", "ESteamCoreInputActionOrigin::XBoxOne_RightStick_Click" },
				{ "XBoxOne_RightStick_DPadEast.Name", "ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadEast" },
				{ "XBoxOne_RightStick_DPadNorth.Name", "ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadNorth" },
				{ "XBoxOne_RightStick_DPadSouth.Name", "ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadSouth" },
				{ "XBoxOne_RightStick_DPadWest.Name", "ESteamCoreInputActionOrigin::XBoxOne_RightStick_DPadWest" },
				{ "XBoxOne_RightStick_Move.Name", "ESteamCoreInputActionOrigin::XBoxOne_RightStick_Move" },
				{ "XBoxOne_RightTrigger_Click.Name", "ESteamCoreInputActionOrigin::XBoxOne_RightTrigger_Click" },
				{ "XBoxOne_RightTrigger_Pull.Name", "ESteamCoreInputActionOrigin::XBoxOne_RightTrigger_Pull" },
				{ "XBoxOne_View.Name", "ESteamCoreInputActionOrigin::XBoxOne_View" },
				{ "XBoxOne_X.Name", "ESteamCoreInputActionOrigin::XBoxOne_X" },
				{ "XBoxOne_Y.Name", "ESteamCoreInputActionOrigin::XBoxOne_Y" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreInputActionOrigin",
				"ESteamCoreInputActionOrigin",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamCoreInputSourceMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputSourceMode"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputSourceMode>()
	{
		return ESteamCoreInputSourceMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreInputSourceMode(ESteamCoreInputSourceMode_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreInputSourceMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Hash() { return 684945743U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreInputSourceMode"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreInputSourceMode::None", (int64)ESteamCoreInputSourceMode::None },
				{ "ESteamCoreInputSourceMode::Dpad", (int64)ESteamCoreInputSourceMode::Dpad },
				{ "ESteamCoreInputSourceMode::Buttons", (int64)ESteamCoreInputSourceMode::Buttons },
				{ "ESteamCoreInputSourceMode::FourButtons", (int64)ESteamCoreInputSourceMode::FourButtons },
				{ "ESteamCoreInputSourceMode::AbsoluteMouse", (int64)ESteamCoreInputSourceMode::AbsoluteMouse },
				{ "ESteamCoreInputSourceMode::RelativeMouse", (int64)ESteamCoreInputSourceMode::RelativeMouse },
				{ "ESteamCoreInputSourceMode::JoystickMove", (int64)ESteamCoreInputSourceMode::JoystickMove },
				{ "ESteamCoreInputSourceMode::JoystickMouse", (int64)ESteamCoreInputSourceMode::JoystickMouse },
				{ "ESteamCoreInputSourceMode::JoystickCamera", (int64)ESteamCoreInputSourceMode::JoystickCamera },
				{ "ESteamCoreInputSourceMode::ScrollWheel", (int64)ESteamCoreInputSourceMode::ScrollWheel },
				{ "ESteamCoreInputSourceMode::Trigger", (int64)ESteamCoreInputSourceMode::Trigger },
				{ "ESteamCoreInputSourceMode::TouchMenu", (int64)ESteamCoreInputSourceMode::TouchMenu },
				{ "ESteamCoreInputSourceMode::MouseJoystick", (int64)ESteamCoreInputSourceMode::MouseJoystick },
				{ "ESteamCoreInputSourceMode::MouseRegion", (int64)ESteamCoreInputSourceMode::MouseRegion },
				{ "ESteamCoreInputSourceMode::RadialMenu", (int64)ESteamCoreInputSourceMode::RadialMenu },
				{ "ESteamCoreInputSourceMode::SingleButton", (int64)ESteamCoreInputSourceMode::SingleButton },
				{ "ESteamCoreInputSourceMode::Switches", (int64)ESteamCoreInputSourceMode::Switches },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbsoluteMouse.Name", "ESteamCoreInputSourceMode::AbsoluteMouse" },
				{ "BlueprintType", "true" },
				{ "Buttons.Name", "ESteamCoreInputSourceMode::Buttons" },
				{ "Dpad.Name", "ESteamCoreInputSourceMode::Dpad" },
				{ "FourButtons.Name", "ESteamCoreInputSourceMode::FourButtons" },
				{ "JoystickCamera.Name", "ESteamCoreInputSourceMode::JoystickCamera" },
				{ "JoystickMouse.Name", "ESteamCoreInputSourceMode::JoystickMouse" },
				{ "JoystickMove.Name", "ESteamCoreInputSourceMode::JoystickMove" },
				{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
				{ "MouseJoystick.Name", "ESteamCoreInputSourceMode::MouseJoystick" },
				{ "MouseRegion.Name", "ESteamCoreInputSourceMode::MouseRegion" },
				{ "None.Name", "ESteamCoreInputSourceMode::None" },
				{ "RadialMenu.Name", "ESteamCoreInputSourceMode::RadialMenu" },
				{ "RelativeMouse.Name", "ESteamCoreInputSourceMode::RelativeMouse" },
				{ "ScrollWheel.Name", "ESteamCoreInputSourceMode::ScrollWheel" },
				{ "SingleButton.Name", "ESteamCoreInputSourceMode::SingleButton" },
				{ "Switches.Name", "ESteamCoreInputSourceMode::Switches" },
				{ "TouchMenu.Name", "ESteamCoreInputSourceMode::TouchMenu" },
				{ "Trigger.Name", "ESteamCoreInputSourceMode::Trigger" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreInputSourceMode",
				"ESteamCoreInputSourceMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamCoreInputSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreInputSource, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreInputSource"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreInputSource>()
	{
		return ESteamCoreInputSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreInputSource(ESteamCoreInputSource_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreInputSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Hash() { return 2680265279U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreInputSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreInputSource"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreInputSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreInputSource::None", (int64)ESteamCoreInputSource::None },
				{ "ESteamCoreInputSource::LeftTrackpad", (int64)ESteamCoreInputSource::LeftTrackpad },
				{ "ESteamCoreInputSource::RightTrackpad", (int64)ESteamCoreInputSource::RightTrackpad },
				{ "ESteamCoreInputSource::Joystick", (int64)ESteamCoreInputSource::Joystick },
				{ "ESteamCoreInputSource::ABXY", (int64)ESteamCoreInputSource::ABXY },
				{ "ESteamCoreInputSource::Switch", (int64)ESteamCoreInputSource::Switch },
				{ "ESteamCoreInputSource::LeftTrigger", (int64)ESteamCoreInputSource::LeftTrigger },
				{ "ESteamCoreInputSource::RightTrigger", (int64)ESteamCoreInputSource::RightTrigger },
				{ "ESteamCoreInputSource::LeftBumper", (int64)ESteamCoreInputSource::LeftBumper },
				{ "ESteamCoreInputSource::RightBumper", (int64)ESteamCoreInputSource::RightBumper },
				{ "ESteamCoreInputSource::Gyro", (int64)ESteamCoreInputSource::Gyro },
				{ "ESteamCoreInputSource::CenterTrackpad", (int64)ESteamCoreInputSource::CenterTrackpad },
				{ "ESteamCoreInputSource::RightJoystick", (int64)ESteamCoreInputSource::RightJoystick },
				{ "ESteamCoreInputSource::DPad", (int64)ESteamCoreInputSource::DPad },
				{ "ESteamCoreInputSource::Key", (int64)ESteamCoreInputSource::Key },
				{ "ESteamCoreInputSource::Mouse", (int64)ESteamCoreInputSource::Mouse },
				{ "ESteamCoreInputSource::LeftGyro", (int64)ESteamCoreInputSource::LeftGyro },
				{ "ESteamCoreInputSource::Count", (int64)ESteamCoreInputSource::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ABXY.Name", "ESteamCoreInputSource::ABXY" },
				{ "BlueprintType", "true" },
				{ "CenterTrackpad.Name", "ESteamCoreInputSource::CenterTrackpad" },
				{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""enum classs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
				{ "Count.Name", "ESteamCoreInputSource::Count" },
				{ "DPad.Name", "ESteamCoreInputSource::DPad" },
				{ "Gyro.Name", "ESteamCoreInputSource::Gyro" },
				{ "Joystick.Name", "ESteamCoreInputSource::Joystick" },
				{ "Key.Name", "ESteamCoreInputSource::Key" },
				{ "LeftBumper.Name", "ESteamCoreInputSource::LeftBumper" },
				{ "LeftGyro.Name", "ESteamCoreInputSource::LeftGyro" },
				{ "LeftTrackpad.Name", "ESteamCoreInputSource::LeftTrackpad" },
				{ "LeftTrigger.Name", "ESteamCoreInputSource::LeftTrigger" },
				{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
				{ "Mouse.Name", "ESteamCoreInputSource::Mouse" },
				{ "None.Name", "ESteamCoreInputSource::None" },
				{ "RightBumper.Name", "ESteamCoreInputSource::RightBumper" },
				{ "RightJoystick.Name", "ESteamCoreInputSource::RightJoystick" },
				{ "RightTrackpad.Name", "ESteamCoreInputSource::RightTrackpad" },
				{ "RightTrigger.Name", "ESteamCoreInputSource::RightTrigger" },
				{ "Switch.Name", "ESteamCoreInputSource::Switch" },
				{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              enum classs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreInputSource",
				"ESteamCoreInputSource",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInputAnalogActionHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputAnalogActionHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAnalogActionHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("InputAnalogActionHandle"), sizeof(FInputAnalogActionHandle), Get_Z_Construct_UScriptStruct_FInputAnalogActionHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputAnalogActionHandle>()
{
	return FInputAnalogActionHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputAnalogActionHandle(FInputAnalogActionHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("InputAnalogActionHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFInputAnalogActionHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFInputAnalogActionHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputAnalogActionHandle")),new UScriptStruct::TCppStructOps<FInputAnalogActionHandle>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFInputAnalogActionHandle;
	struct Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAnalogActionHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputAnalogActionHandle",
		sizeof(FInputAnalogActionHandle),
		alignof(FInputAnalogActionHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputAnalogActionHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputAnalogActionHandle"), sizeof(FInputAnalogActionHandle), Get_Z_Construct_UScriptStruct_FInputAnalogActionHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputAnalogActionHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputAnalogActionHandle_Hash() { return 411941294U; }
class UScriptStruct* FInputDigitalActionHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputDigitalActionHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDigitalActionHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("InputDigitalActionHandle"), sizeof(FInputDigitalActionHandle), Get_Z_Construct_UScriptStruct_FInputDigitalActionHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputDigitalActionHandle>()
{
	return FInputDigitalActionHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputDigitalActionHandle(FInputDigitalActionHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("InputDigitalActionHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFInputDigitalActionHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFInputDigitalActionHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputDigitalActionHandle")),new UScriptStruct::TCppStructOps<FInputDigitalActionHandle>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFInputDigitalActionHandle;
	struct Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDigitalActionHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputDigitalActionHandle",
		sizeof(FInputDigitalActionHandle),
		alignof(FInputDigitalActionHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputDigitalActionHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputDigitalActionHandle"), sizeof(FInputDigitalActionHandle), Get_Z_Construct_UScriptStruct_FInputDigitalActionHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputDigitalActionHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputDigitalActionHandle_Hash() { return 104348890U; }
class UScriptStruct* FInputActionSetHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputActionSetHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionSetHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("InputActionSetHandle"), sizeof(FInputActionSetHandle), Get_Z_Construct_UScriptStruct_FInputActionSetHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputActionSetHandle>()
{
	return FInputActionSetHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputActionSetHandle(FInputActionSetHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("InputActionSetHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFInputActionSetHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFInputActionSetHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputActionSetHandle")),new UScriptStruct::TCppStructOps<FInputActionSetHandle>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFInputActionSetHandle;
	struct Z_Construct_UScriptStruct_FInputActionSetHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionSetHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputActionSetHandle",
		sizeof(FInputActionSetHandle),
		alignof(FInputActionSetHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionSetHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputActionSetHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputActionSetHandle"), sizeof(FInputActionSetHandle), Get_Z_Construct_UScriptStruct_FInputActionSetHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputActionSetHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputActionSetHandle_Hash() { return 2254082740U; }
class UScriptStruct* FInputHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("InputHandle"), sizeof(FInputHandle), Get_Z_Construct_UScriptStruct_FInputHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputHandle>()
{
	return FInputHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputHandle(FInputHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("InputHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFInputHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFInputHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputHandle")),new UScriptStruct::TCppStructOps<FInputHandle>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFInputHandle;
	struct Z_Construct_UScriptStruct_FInputHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputHandle",
		sizeof(FInputHandle),
		alignof(FInputHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputHandle"), sizeof(FInputHandle), Get_Z_Construct_UScriptStruct_FInputHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputHandle_Hash() { return 647262606U; }
class UScriptStruct* FInputMotionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputMotionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMotionData, Z_Construct_UPackage__Script_SteamCore(), TEXT("InputMotionData"), sizeof(FInputMotionData), Get_Z_Construct_UScriptStruct_FInputMotionData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputMotionData>()
{
	return FInputMotionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputMotionData(FInputMotionData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("InputMotionData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFInputMotionData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFInputMotionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputMotionData")),new UScriptStruct::TCppStructOps<FInputMotionData>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFInputMotionData;
	struct Z_Construct_UScriptStruct_FInputMotionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotVelZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotVelZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotVelY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotVelY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotVelX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotVelX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosAccelZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosAccelZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosAccelY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosAccelY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosAccelX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosAccelX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotQuatW_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotQuatW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotQuatZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotQuatZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotQuatY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotQuatY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotQuatX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotQuatX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputMotionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMotionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ = { "RotVelZ", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotVelZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY = { "RotVelY", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotVelY), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX = { "RotVelX", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotVelX), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ = { "PosAccelZ", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, PosAccelZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY = { "PosAccelY", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, PosAccelY), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX = { "PosAccelX", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, PosAccelX), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW = { "RotQuatW", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotQuatW), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ = { "RotQuatZ", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotQuatZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY = { "RotQuatY", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotQuatY), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX = { "RotQuatX", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputMotionData, RotQuatX), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotVelX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_PosAccelX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMotionData_Statics::NewProp_RotQuatX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMotionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputMotionData",
		sizeof(FInputMotionData),
		alignof(FInputMotionData),
		Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMotionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputMotionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputMotionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputMotionData"), sizeof(FInputMotionData), Get_Z_Construct_UScriptStruct_FInputMotionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputMotionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputMotionData_Hash() { return 2770195564U; }
class UScriptStruct* FInputDigitalActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputDigitalActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDigitalActionData, Z_Construct_UPackage__Script_SteamCore(), TEXT("InputDigitalActionData"), sizeof(FInputDigitalActionData), Get_Z_Construct_UScriptStruct_FInputDigitalActionData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputDigitalActionData>()
{
	return FInputDigitalActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputDigitalActionData(FInputDigitalActionData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("InputDigitalActionData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFInputDigitalActionData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFInputDigitalActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputDigitalActionData")),new UScriptStruct::TCppStructOps<FInputDigitalActionData>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFInputDigitalActionData;
	struct Z_Construct_UScriptStruct_FInputDigitalActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bState_MetaData[];
#endif
		static void NewProp_bState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDigitalActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FInputDigitalActionData*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputDigitalActionData), &Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_SetBit(void* Obj)
	{
		((FInputDigitalActionData*)Obj)->bState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputDigitalActionData), &Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::NewProp_bState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputDigitalActionData",
		sizeof(FInputDigitalActionData),
		alignof(FInputDigitalActionData),
		Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputDigitalActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputDigitalActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputDigitalActionData"), sizeof(FInputDigitalActionData), Get_Z_Construct_UScriptStruct_FInputDigitalActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputDigitalActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputDigitalActionData_Hash() { return 3910764615U; }
class UScriptStruct* FInputAnalogActionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputAnalogActionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAnalogActionData, Z_Construct_UPackage__Script_SteamCore(), TEXT("InputAnalogActionData"), sizeof(FInputAnalogActionData), Get_Z_Construct_UScriptStruct_FInputAnalogActionData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FInputAnalogActionData>()
{
	return FInputAnalogActionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputAnalogActionData(FInputAnalogActionData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("InputAnalogActionData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFInputAnalogActionData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFInputAnalogActionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputAnalogActionData")),new UScriptStruct::TCppStructOps<FInputAnalogActionData>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFInputAnalogActionData;
	struct Z_Construct_UScriptStruct_FInputAnalogActionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Define these structs just so we can compile on earlier versions of the SDK\n*/" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
		{ "ToolTip", "* Define these structs just so we can compile on earlier versions of the SDK" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAnalogActionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((FInputAnalogActionData*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputAnalogActionData), &Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAnalogActionData, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAnalogActionData, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputAnalogActionData, Mode), Z_Construct_UEnum_SteamCore_ESteamCoreInputSourceMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::NewProp_Mode_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"InputAnalogActionData",
		sizeof(FInputAnalogActionData),
		alignof(FInputAnalogActionData),
		Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAnalogActionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputAnalogActionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputAnalogActionData"), sizeof(FInputAnalogActionData), Get_Z_Construct_UScriptStruct_FInputAnalogActionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputAnalogActionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputAnalogActionData_Hash() { return 1907580995U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
