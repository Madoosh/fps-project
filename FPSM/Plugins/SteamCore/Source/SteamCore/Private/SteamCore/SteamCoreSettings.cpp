/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "SteamCore/SteamCoreSettings.h"
#include "SteamCore/SteamTypes.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"
#include "SteamCore/SteamUtilities.h"

USteamCoreSettings::USteamCoreSettings()
	: bForceGameThreadExecution(true)
	, bDebugging(true)
	, AsyncTaskTimeout(5.0f)
{
	if (!GConfig->GetBool(TEXT("OnlineSubsystemSteam"), TEXT("bEnabled"), bEnabled, GEngineIni))
	{
		bEnabled = true;
	}

	if (!GConfig->GetBool(TEXT("OnlineSubsystemSteam"), TEXT("bRelaunchInSteam"), bRelaunchInSteam, GEngineIni))
	{
		bRelaunchInSteam = true;
	}

	if (!GConfig->GetBool(TEXT("OnlineSubsystemSteam"), TEXT("bVACEnabled"), bVACEnabled, GEngineIni))
	{
		bVACEnabled = true;
	}

	if (!GConfig->GetBool(TEXT("OnlineSubsystemSteam"), TEXT("bAllowP2PPacketRelay"), bAllowP2PPacketRelay, GEngineIni))
	{
		bAllowP2PPacketRelay = true;
	}

	if (!GConfig->GetInt(TEXT("OnlineSubsystemSteam"), TEXT("P2PConnectionTimeout"), P2PConnectionTimeout, GEngineIni))
	{
		P2PConnectionTimeout = 90;
	}

	if (!GConfig->GetInt(TEXT("OnlineSubsystemSteam"), TEXT("SteamAppId"), SteamAppID, GEngineIni))
	{
		SteamAppID = 480;
	}

	if (!GConfig->GetInt(TEXT("OnlineSubsystemSteam"), TEXT("SteamDevAppId"), SteamDevAppID, GEngineIni))
	{
		SteamDevAppID = 480;
	}

	if (!GConfig->GetInt(TEXT("URL"), TEXT("Port"), Port, GEngineIni))
	{
		Port = 7777;
	}

	if (!GConfig->GetInt(TEXT("OnlineSubsystemSteam"), TEXT("GameServerQueryPort"), GameServerQueryPort, GEngineIni))
	{
		Port = 27015;
	}

	if (!GConfig->GetString(TEXT("OnlineSubsystemSteam"), TEXT("GameVersion"), GameVersion, GEngineIni))
	{
		GameVersion = "1.0.0.0";
	}

	if (!GConfig->GetString(TEXT("OnlineSubsystemSteam"), TEXT("GameVersion"), GameVersion, GEngineIni))
	{
		GameVersion = "1.0.0.0";
	}

	if (SteamAppID == 0)
		SteamAppID = 480;

	if (SteamDevAppID == 0)
		SteamDevAppID = SteamAppID;

	AsyncTaskTimeout = FMath::Clamp(AsyncTaskTimeout, 5.0f, 60.f);
}

#if WITH_EDITOR
void USteamCoreSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	SaveToIni();
}

FName USteamCoreSettings::GetCategoryName() const
{
	return NAME_Game;
}

void USteamCoreSettings::SaveToIni()
{
	GConfig->SetBool(TEXT("OnlineSubsystemSteam"), TEXT("bEnabled"), bEnabled, GEngineIni);
	GConfig->SetBool(TEXT("OnlineSubsystemSteam"), TEXT("bRelaunchInSteam"), bRelaunchInSteam, GEngineIni);
	GConfig->SetBool(TEXT("OnlineSubsystemSteam"), TEXT("bVACEnabled"), bVACEnabled, GEngineIni);
	GConfig->SetBool(TEXT("OnlineSubsystemSteam"), TEXT("bAllowP2PPacketRelay"), bAllowP2PPacketRelay, GEngineIni);
	GConfig->SetInt(TEXT("OnlineSubsystemSteam"), TEXT("P2PConnectionTimeout"), P2PConnectionTimeout, GEngineIni);
	GConfig->SetInt(TEXT("OnlineSubsystemSteam"), TEXT("SteamAppId"), SteamAppID, GEngineIni);
	GConfig->SetInt(TEXT("OnlineSubsystemSteam"), TEXT("SteamDevAppId"), SteamDevAppID, GEngineIni);
	GConfig->SetInt(TEXT("URL"), TEXT("Port"), Port, GEngineIni);
	GConfig->SetInt(TEXT("OnlineSubsystemSteam"), TEXT("GameServerQueryPort"), GameServerQueryPort, GEngineIni);
	GConfig->SetString(TEXT("OnlineSubsystemSteam"), TEXT("GameVersion"), *GameVersion, GEngineIni);

	if (bEnabled)
	{
		FString m_Empty;

		if (!GConfig->GetString(TEXT("OnlineSubsystem"), TEXT("DefaultPlatformService"), m_Empty, GEngineIni))
		{
			GConfig->SetString(TEXT("OnlineSubsystem"), TEXT("DefaultPlatformService"), *FString("Steam"), GEngineIni);
		}
	}

	GConfig->Flush(false, GEngineIni);
	SaveConfig(CPF_Config, *GEngineIni);
	UE_LOG(SteamCoreLog, Warning, TEXT("Steam Settings Saved!"));
}
#endif
