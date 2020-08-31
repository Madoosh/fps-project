/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "SteamCore/SteamUtilities.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"
#include "OnlineSubsystemSteamModule.h"
#include "MatchmakingServers/MatchmakingServersTypes.h"
#if STEAM_VERSION > 142
#include "OnlinePingInterfaceSteam.h"
#endif

TArray<FOnSteamMessage> USteamUtilities::s_SteamMessageListeners;

FSteamID USteamUtilities::MakeSteamID(FString value)
{
	uint64 m_Temp = 0;
	LexFromString(m_Temp, *value);
	return FSteamID(m_Temp);
}

FSteamGameID USteamUtilities::MakeSteamGameID(FString value)
{
	uint64 m_Temp = 0;
	LexFromString(m_Temp, *value);
	return FSteamGameID(m_Temp);
}

FString USteamUtilities::BreakSteamID(FSteamID steamID)
{
	return LexToString(static_cast<uint64>(steamID));
}

FString USteamUtilities::BreakSteamGameID(FSteamGameID steamID)
{
	return LexToString(static_cast<uint64>(steamID));
}

FPublishedFileID USteamUtilities::MakePublishedFileID(FString value)
{
	uint64 m_Temp = 0;
	LexFromString(m_Temp, *value);
	return FPublishedFileID(m_Temp);
}

FSteamUGCHandle USteamUtilities::MakeUGCHandle(FString value)
{
	uint64 m_Temp = 0;
	LexFromString(m_Temp, *value);
	return FSteamUGCHandle(m_Temp);
}

FSteamInventoryUpdateHandle USteamUtilities::MakeInventoryUpdateHandle(FString value)
{
	uint64 m_Temp = 0;
	LexFromString(m_Temp, *value);
	return FSteamInventoryUpdateHandle(m_Temp);
}

FSteamTicketHandle USteamUtilities::MakeTicketHandle(FString value)
{
	uint64 m_Temp = 0;
	LexFromString(m_Temp, *value);
	return FSteamTicketHandle(m_Temp);
}

FString USteamUtilities::BreakPublishedFileID(FPublishedFileID fileID)
{
	return LexToString(static_cast<uint64>(fileID));
}

FString USteamUtilities::BreakUGCHandle(FSteamUGCHandle handle)
{
	return LexToString(static_cast<uint64>(handle));
}

FString USteamUtilities::BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle handle)
{
	return LexToString(static_cast<uint64>(handle));
}

FString USteamUtilities::BreakTicketHandle(FSteamTicketHandle handle)
{
	return LexToString(static_cast<uint64>(handle));
}

bool USteamUtilities::IsValid(FSteamID steamID)
{
	return CSteamID(steamID.GetValue()).IsValid();
}

bool USteamUtilities::Equal(FSteamID a, FSteamID b)
{
	return a == b;
}

bool USteamUtilities::NotEqual(FSteamID a, FSteamID b)
{
	return a != b;
}

bool USteamUtilities::PublishedFileID_Equals(FPublishedFileID a, FPublishedFileID b)
{
	return a == b;
}

bool USteamUtilities::PublishedFileID_NotEquals(FPublishedFileID a, FPublishedFileID b)
{
	return a != b;
}

ESteamAccountType USteamUtilities::GetAccountType(FSteamID steamID)
{
	return static_cast<ESteamAccountType>((CSteamID(steamID.GetValue())).GetEAccountType());
}

bool USteamUtilities::IsLobby(FSteamID steamID)
{
	return CSteamID(steamID.GetValue()).IsLobby();
}

bool USteamUtilities::IsSteamAvailable()
{
	return SteamAPI_Init();
}

UServerFilter* USteamUtilities::ConstructServerFilter(UObject* WorldContextObject)
{
	UServerFilter* m_Obj = nullptr;

	if (WorldContextObject)
	{
		m_Obj = NewObject<UServerFilter>(WorldContextObject);
		
		if (m_Obj)
			m_Obj->AddToRoot();
	}

	if (SteamCoreDebugging())
	{
		UE_LOG(SteamCoreLog, Error, TEXT("No world context object when creating UServerFilter object!"));
	}

	return m_Obj;
}

bool USteamUtilities::IsUsingP2PRelays()
{
	FOnlineSubsystemSteam* SteamSubsystem = static_cast<FOnlineSubsystemSteam*>(IOnlineSubsystem::Get(STEAM_SUBSYSTEM));
	
#if STEAM_VERSION > 142
	if (SteamSubsystem && SteamSubsystem->GetPingInterface())
	{
		return SteamSubsystem->GetPingInterface()->IsUsingP2PRelays();
	}
#endif

	return false;
}

FHostPingData USteamUtilities::GetHostPingData()
{
	FOnlineSubsystemSteam* SteamSubsystem = static_cast<FOnlineSubsystemSteam*>(IOnlineSubsystem::Get(STEAM_SUBSYSTEM));
	
#if STEAM_VERSION > 142
	if (SteamSubsystem && SteamSubsystem->GetPingInterface())
	{
		return FHostPingData(SteamSubsystem->GetPingInterface()->GetHostPingData());
	}
#endif

	return FHostPingData();
}

int32 USteamUtilities::GetPingFromHostData(const FHostPingData& data)
{
	FOnlineSubsystemSteam* SteamSubsystem = static_cast<FOnlineSubsystemSteam*>(IOnlineSubsystem::Get(STEAM_SUBSYSTEM));

#if STEAM_VERSION > 142
	if (SteamSubsystem && SteamSubsystem->GetPingInterface())
	{
		return SteamSubsystem->GetPingInterface()->GetPingFromHostData(data);
	}
#endif

	return 0;
}

bool USteamUtilities::IsRecalculatingPing()
{
	FOnlineSubsystemSteam* SteamSubsystem = static_cast<FOnlineSubsystemSteam*>(IOnlineSubsystem::Get(STEAM_SUBSYSTEM));

#if STEAM_VERSION > 142
	if (SteamSubsystem && SteamSubsystem->GetPingInterface())
	{
		return SteamSubsystem->GetPingInterface()->IsRecalculatingPing();
	}
#endif

	return false;
}

void USteamUtilities::ListenForSteamMessages(const FOnSteamMessage& callback)
{
	s_SteamMessageListeners.Add(callback);
}

void USteamUtilities::InvokeSteamMessage(ESteamMessageType type, const FString& message)
{
	for (auto& m_Element : s_SteamMessageListeners) 
	{
		m_Element.ExecuteIfBound(type, message);
	}
}
