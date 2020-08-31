/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInput
*/

#include "Input/Input.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UInput::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UInput::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

FInputActionSetHandle UInput::GetActionSetHandle(FString actionSetName)
{
	FInputActionSetHandle m_Handle;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		m_Handle = SteamInput()->GetActionSetHandle(TCHAR_TO_UTF8(*actionSetName));
	}
#endif

	return m_Handle;
}

void UInput::ActivateActionSet(FInputHandle handle, FInputActionSetHandle actionSetHandle)
{
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->ActivateActionSet(handle, actionSetHandle);
	}
#endif
}

FInputActionSetHandle UInput::GetCurrentActionSet(FInputHandle handle)
{
	FInputActionSetHandle m_Handle;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		m_Handle = SteamInput()->GetCurrentActionSet(handle);
	}
#endif

	return m_Handle;
}

void UInput::ActivateActionSetLayer(FInputHandle handle, FInputActionSetHandle actionSetLayerHandle)
{
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->ActivateActionSetLayer(handle, actionSetLayerHandle);
	}
#endif
}

void UInput::DeactivateActionSetLayer(FInputHandle handle, FInputActionSetHandle actionSetLayerHandle)
{
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->DeactivateActionSetLayer(handle, actionSetLayerHandle);
	}
#endif
}

void UInput::DeactivateAllActionSetLayers(FInputHandle handle)
{
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->DeactivateAllActionSetLayers(handle);
	}
#endif
}

int32 UInput::GetActiveActionSetLayers(FInputHandle handle, TArray<FInputActionSetHandle>& data)
{
	int32 m_Result = 0;
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		InputActionSetHandle_t* m_Arr = new InputActionSetHandle_t[STEAM_INPUT_MAX_ACTIVE_LAYERS];
		SteamInput()->GetActiveActionSetLayers(handle, m_Arr);

		for (int32 i = 0; i < STEAM_INPUT_MAX_ACTIVE_LAYERS; i++)
			data.Add(m_Arr[i]);

		delete[] m_Arr;
	}
#endif

	return	m_Result;
}

FInputDigitalActionHandle UInput::GetDigitalActionHandle(FString pszActionName)
{
	FInputDigitalActionHandle m_Handle;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		m_Handle = SteamInput()->GetDigitalActionHandle(TCHAR_TO_UTF8(*pszActionName));
	}
#endif

	return m_Handle;
}

FInputDigitalActionData UInput::GetDigitalActionData(FInputHandle handle, FInputDigitalActionHandle digitalActionHandle)
{
	FInputDigitalActionData m_Handle;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		m_Handle = SteamInput()->GetDigitalActionData(handle, digitalActionHandle);
	}
#endif

	return m_Handle;
}

int32 UInput::GetDigitalActionOrigins(FInputHandle handle, FInputActionSetHandle actionSetHandle, FInputDigitalActionHandle digitalActionHandle, TArray<ESteamCoreInputActionOrigin>& originsOut)
{
	int32 m_Result = 0;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		EInputActionOrigin* m_Arr = new EInputActionOrigin[STEAM_INPUT_MAX_ORIGINS];

		m_Result = SteamInput()->GetDigitalActionOrigins(handle, actionSetHandle, digitalActionHandle, m_Arr);

		for (int32 i = 0; i < STEAM_INPUT_MAX_ORIGINS; i++)
			originsOut.Add(static_cast<ESteamCoreInputActionOrigin>(m_Arr[i]));

		delete[] m_Arr;
	}
#endif

	return m_Result;
}

FInputAnalogActionHandle UInput::GetAnalogActionHandle(FString pszActionName)
{
	FInputAnalogActionHandle m_Handle;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		m_Handle = SteamInput()->GetAnalogActionHandle(TCHAR_TO_UTF8(*pszActionName));
	}
#endif

	return m_Handle;
}

FInputAnalogActionData UInput::GetAnalogActionData(FInputHandle handle, FInputAnalogActionHandle analogActionHandle)
{
	FInputAnalogActionData m_Handle;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		m_Handle = SteamInput()->GetAnalogActionData(handle, analogActionHandle);
	}
#endif
	return m_Handle;
}

int32 UInput::GetAnalogActionOrigins(FInputHandle handle, FInputActionSetHandle actionSetHandle, FInputAnalogActionHandle analogActionHandle, TArray<ESteamCoreInputActionOrigin>& originsOut)
{
	int32 m_Result = 0;
	
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		EInputActionOrigin* m_Arr = new EInputActionOrigin[STEAM_INPUT_MAX_ORIGINS];

		m_Result = SteamInput()->GetAnalogActionOrigins(handle, actionSetHandle, analogActionHandle, m_Arr);

		for (int32 i = 0; i < STEAM_INPUT_MAX_ORIGINS; i++)
			originsOut.Add(static_cast<ESteamCoreInputActionOrigin>(m_Arr[i]));

		delete[] m_Arr;
	}
#endif
	 return m_Result;
}

FString UInput::GetGlyphForActionOrigin(ESteamCoreInputActionOrigin origin)
{
#if STEAM_VERSION > 142
	return SteamInput() ? TCHAR_TO_UTF8(SteamInput()->GetGlyphForActionOrigin(static_cast<EInputActionOrigin>(origin))) : "";
#else
	return "";
#endif
}

FString UInput::GetStringForActionOrigin(ESteamCoreInputActionOrigin origin)
{
#if STEAM_VERSION > 142
	return SteamInput() ? TCHAR_TO_UTF8(SteamInput()->GetStringForActionOrigin(static_cast<EInputActionOrigin>(origin))) : "";
#else
	return "";
#endif
}

void UInput::StopAnalogActionMomentum(FInputHandle handle, FInputAnalogActionHandle eAction)
{
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->StopAnalogActionMomentum(handle, eAction);
	}
#endif
}

FInputMotionData UInput::GetMotionData(FInputHandle handle)
{
	FInputMotionData m_Handle;

#if STEAM_VERSION > 142
	if (SteamInput())
	{
		m_Handle = SteamInput()->GetMotionData(handle);
	}
#endif

	return m_Handle;
}

void UInput::TriggerVibration(FInputHandle handle, uint8 leftSpeed, uint8 rightSpeed)
{
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->TriggerVibration(handle, leftSpeed, rightSpeed);
	}
#endif
}

void UInput::SetLEDColor(FInputHandle handle, uint8 colorR, uint8 colorG, uint8 colorB, ESteamCoreInputLEDFlag flags)
{
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->SetLEDColor(handle, colorR, colorG, colorB, static_cast<int32>(flags));
	}
#endif
}

void UInput::TriggerHapticPulse(FInputHandle handle, ESteamCoreControllerPad targetPad, uint8 durationMicroSec)
{
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->TriggerHapticPulse(handle, static_cast<ESteamControllerPad>(targetPad), durationMicroSec);
	}
#endif
}

void UInput::TriggerRepeatedHapticPulse(FInputHandle handle, ESteamCoreControllerPad targetPad, uint8 durationMicroSec, uint8 offMicroSec, uint8 repeat, uint8 flags)
{
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		SteamInput()->TriggerRepeatedHapticPulse(handle, static_cast<ESteamControllerPad>(targetPad), durationMicroSec, offMicroSec, repeat, flags);
	}
#endif
}

bool UInput::ShowBindingPanel(FInputHandle handle)
{
#if STEAM_VERSION > 142
	return SteamInput() ? SteamInput()->ShowBindingPanel(handle) : false;
#else
	return false;
#endif
}

ESteamCoreInputType UInput::GetInputTypeForHandle(FInputHandle handle)
{
	ESteamCoreInputType m_Result = ESteamCoreInputType::Unknown;
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		m_Result = static_cast<ESteamCoreInputType>(SteamInput()->GetInputTypeForHandle(handle));
	}
#endif
	return m_Result;
}

FInputHandle UInput::GetControllerForGamepadIndex(int32 index)
{
	FInputHandle m_Handle;
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		m_Handle = SteamInput()->GetControllerForGamepadIndex(index);
	}
#endif
	return m_Handle;
}

int32 UInput::GetGamepadIndexForController(FInputHandle handle)
{
#if STEAM_VERSION > 142
	return SteamInput() ? SteamInput()->GetGamepadIndexForController(handle) : 0;
#else
	return 0;
#endif
}

FString UInput::GetStringForXboxOrigin(ESteamCoreXboxOrigin origin)
{
#if STEAM_VERSION > 142
	return SteamInput() ? TCHAR_TO_UTF8(SteamInput()->GetStringForXboxOrigin(static_cast<EXboxOrigin>(origin))) : "";
#else
	return "";
#endif
}

FString UInput::GetGlyphForXboxOrigin(ESteamCoreXboxOrigin origin)
{
#if STEAM_VERSION > 142
	return SteamInput() ? TCHAR_TO_UTF8(SteamInput()->GetGlyphForXboxOrigin(static_cast<EXboxOrigin>(origin))) : "";
#else
	return "";
#endif
}

ESteamCoreInputActionOrigin UInput::GetActionOriginFromXboxOrigin(FInputHandle handle, ESteamCoreXboxOrigin origin)
{
	ESteamCoreInputActionOrigin m_Result = ESteamCoreInputActionOrigin::None;
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		m_Result = static_cast<ESteamCoreInputActionOrigin>(SteamInput()->GetActionOriginFromXboxOrigin(handle, static_cast<EXboxOrigin>(origin)));
	}
#endif
	return m_Result;
}

ESteamCoreInputActionOrigin UInput::TranslateActionOrigin(ESteamCoreInputType destinationInputType, ESteamCoreInputActionOrigin sourceOrigin)
{
	ESteamCoreInputActionOrigin m_Result = ESteamCoreInputActionOrigin::None;
#if STEAM_VERSION > 142
	if (SteamInput())
	{
		m_Result = static_cast<ESteamCoreInputActionOrigin>(SteamInput()->TranslateActionOrigin(static_cast<ESteamInputType>(destinationInputType), static_cast<EInputActionOrigin>(sourceOrigin)));
	}
#endif
	return m_Result;
}

bool UInput::GetDeviceBindingRevision(FInputHandle handle, int32& major, int32& minor)
{
#if STEAM_VERSION > 142
	return SteamInput() ? SteamInput()->GetDeviceBindingRevision(handle, &major, &minor) : false;
#else
	return false;
#endif
}

int32 UInput::GetRemotePlaySessionID(FInputHandle handle)
{
#if STEAM_VERSION > 142
	return SteamInput() ? SteamInput()->GetRemotePlaySessionID(handle) : 0;
#else
	return 0;
#endif
}