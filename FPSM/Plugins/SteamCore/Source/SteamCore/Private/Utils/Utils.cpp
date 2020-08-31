/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUtils
*/

#include "Utils/Utils.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UUtils::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnCheckFileSignatureCallback.Register(this, &UUtils::OnCheckFileSignature);
	OnGamepadTextInputDismissedCallback.Register(this, &UUtils::OnGamepadTextInputDismissed);
	OnLowBatteryPowerCallback.Register(this, &UUtils::OnLowBatteryPower);
	OnIPCountryCallback.Register(this, &UUtils::OnIPCountry);
	OnSteamShutdownCallback.Register(this, &UUtils::OnSteamShutdown);

	if (IsRunningDedicatedServer())
	{
		OnCheckFileSignatureCallback.SetGameserverFlag();
		OnGamepadTextInputDismissedCallback.SetGameserverFlag();
		OnLowBatteryPowerCallback.SetGameserverFlag();
		OnIPCountryCallback.SetGameserverFlag();
		OnSteamShutdownCallback.SetGameserverFlag();
	}
}

void UUtils::Deinitialize()
{
	OnCheckFileSignatureCallback.Unregister();
	OnGamepadTextInputDismissedCallback.Unregister();
	OnLowBatteryPowerCallback.Unregister();
	OnIPCountryCallback.Unregister();
	OnSteamShutdownCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
int32 UUtils::GetSecondsSinceAppActive()
{
	return GetUtils() ? GetUtils()->GetSecondsSinceAppActive() : 0;
}

int32 UUtils::GetSecondsSinceComputerActive()
{
	return GetUtils() ? GetUtils()->GetSecondsSinceComputerActive() : 0;
}

ESteamUniverse UUtils::GetConnectedUniverse()
{
	return GetUtils() ? static_cast<ESteamUniverse>(GetUtils()->GetConnectedUniverse()) : ESteamUniverse::Invalid;
}

bool UUtils::GetCSERIPPort(FString ip, int32 port)
{
	if (GetUtils())
	{
		uint32 m_IP;

		if (GetUtils()->GetCSERIPPort(&m_IP, reinterpret_cast<uint16*>(&port)))
		{
			ip = FIPv4Address(m_IP).ToString();

			return true;
		}
	}
	return false;
}

int32 UUtils::GetServerRealTime()
{
	return GetUtils() ? GetUtils()->GetServerRealTime() : 0;
}

FString UUtils::GetIPCountry()
{
	return GetUtils() ? UTF8_TO_TCHAR(GetUtils()->GetIPCountry()) : FString("");
}

int32 UUtils::GetCurrentBatteryPower()
{
	return GetUtils() ? GetUtils()->GetCurrentBatteryPower() : 0;
}

int32 UUtils::GetAppID()
{
	return GetUtils() ? GetUtils()->GetAppID() : 0;
}

void UUtils::SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition)
{
	if (GetUtils())
		GetUtils()->SetOverlayNotificationPosition((ENotificationPosition)NotificationPosition);
}

void UUtils::SetVRHeadsetStreamingEnabled(bool bEnabled)
{
	if (GetUtils())
		GetUtils()->SetVRHeadsetStreamingEnabled(bEnabled);
}

int32 UUtils::GetIPCCallCount()
{
	return GetUtils() ? GetUtils()->GetIPCCallCount() : 0;
}

bool UUtils::IsOverlayEnabled()
{
	return GetUtils() ? GetUtils()->IsOverlayEnabled() : false;
}

bool UUtils::IsSteamChinaLauncher()
{
#if STEAM_VERSION > 142
	return GetUtils()->IsSteamChinaLauncher();
#else
	return false;
#endif
}

int UUtils::FilterText(FString& filteredText, FString inputMessage, bool bLegalOnly)
{
	// TODO: Update SDK

	return 0;
}

bool UUtils::BOverlayNeedsPresent()
{
	return GetUtils() ? GetUtils()->BOverlayNeedsPresent() : false;
}

bool UUtils::ShowGamepadTextInput(ESteamGamepadTextInputMode inputMode, ESteamGamepadTextInputLineMode lineInputMode, FString description, int32 charMax, FString existingText)
{
	return GetUtils() ? GetUtils()->ShowGamepadTextInput(static_cast<EGamepadTextInputMode>(inputMode), static_cast<EGamepadTextInputLineMode>(lineInputMode), TCHAR_TO_UTF8(*description), charMax, TCHAR_TO_UTF8(*existingText)) : false;
}

int32 UUtils::GetEnteredGamepadTextLength()
{
	return GetUtils() ? GetUtils()->GetEnteredGamepadTextLength() : 0;
}

bool UUtils::GetImageRGBA(int iImage, TArray<uint8>& buffer)
{
	if (GetUtils())
	{
		uint32 m_AvatarWidth, m_AvatarHeight;

		if (GetUtils()->GetImageSize(iImage, &m_AvatarWidth, &m_AvatarHeight))
		{
			const int m_ImageSizeInBytes = m_AvatarWidth * m_AvatarHeight * 4;
			uint8* m_Buffer = new uint8[m_ImageSizeInBytes];

			if (GetUtils()->GetImageRGBA(iImage, m_Buffer, m_ImageSizeInBytes))
			{
				for (int32 i = 0; i < m_ImageSizeInBytes; i++)
					buffer.Add(m_Buffer[i]);

				delete[] m_Buffer;

				return true;
			}
		}
	}

	return false;
}

bool UUtils::GetImageSize(int iImage, int32& width, int32& height)
{
	return GetUtils() ? GetUtils()->GetImageSize(iImage, reinterpret_cast<uint32*>(&width), reinterpret_cast<uint32*>(&height)) : false;
}

bool UUtils::GetEnteredGamepadTextInput(FString& text)
{
	bool bResult = false;

	if (GetUtils())
	{
		char* m_Data = new char[65];
		uint32 m_Length = GetUtils()->GetEnteredGamepadTextLength();

		bResult = GetUtils()->GetEnteredGamepadTextInput(m_Data, m_Length);

		if (bResult)
		{
			text = UTF8_TO_TCHAR(m_Data);
		}

		delete[] m_Data;
	}

	return bResult;
}

FString UUtils::GetSteamUILanguage()
{
	return GetUtils() ? UTF8_TO_TCHAR(GetUtils()->GetSteamUILanguage()) : FString("");
}

bool UUtils::IsSteamRunningInVR()
{
	return GetUtils() ? GetUtils()->IsSteamRunningInVR() : false;
}

bool UUtils::IsVRHeadsetStreamingEnabled()
{
	return GetUtils() ? GetUtils()->IsVRHeadsetStreamingEnabled() : false;
}

void UUtils::SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset)
{
	if (GetUtils())
		GetUtils()->SetOverlayNotificationInset(HorizontalInset, VerticalInset);
}

bool UUtils::IsSteamInBigPictureMode()
{
	return GetUtils() ? GetUtils()->IsSteamInBigPictureMode() : false;
}

void UUtils::StartVRDashboard()
{
	if (GetUtils())
		GetUtils()->StartVRDashboard();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUtils::OnCheckFileSignature(CheckFileSignature_t* pParam)
{
	const FCheckFileSignature m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				CheckFileSignature.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		CheckFileSignature.Broadcast(m_Data);
	}
}

void UUtils::OnGamepadTextInputDismissed(GamepadTextInputDismissed_t* pParam)
{
	const FGamepadTextInputDismissed m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GamepadTextInputDismissed.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GamepadTextInputDismissed.Broadcast(m_Data);
	}
}

void UUtils::OnLowBatteryPower(LowBatteryPower_t* pParam)
{
	const FLowBatteryPower m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				LowBatteryPower.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		LowBatteryPower.Broadcast(m_Data);
	}
}

void UUtils::OnIPCountry(IPCountry_t* pParam)
{
	const FIPCountry m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				IPCountry.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		IPCountry.Broadcast(m_Data);
	}
}

void UUtils::OnSteamShutdown(SteamShutdown_t* pParam)
{
	const FSteamShutdown m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				SteamShutdown.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamShutdown.Broadcast(m_Data);
	}
}
