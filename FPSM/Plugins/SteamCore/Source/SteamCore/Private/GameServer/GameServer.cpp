/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServer
*/

#include "GameServer/GameServer.h"
#include "GameServer/GameServerAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UGameServer::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnGSPolicyResponseCallback.Register(this, &UGameServer::OnGSPolicyResponse);
	OnGSClientGroupStatusCallback.Register(this, &UGameServer::OnGSClientGroupStatus);
	OnGSValidateAuthTicketResponseCallback.Register(this, &UGameServer::OnGSValidateAuthTicketResponse);
	OnGSClientApproveCallback.Register(this, &UGameServer::OnGSClientApprove);
	OnGSClientDenyCallback.Register(this, &UGameServer::OnGSClientDeny);

	if (IsRunningDedicatedServer())
	{
		OnGSPolicyResponseCallback.SetGameserverFlag();
		OnGSClientGroupStatusCallback.SetGameserverFlag();
		OnGSValidateAuthTicketResponseCallback.SetGameserverFlag();
		OnGSClientApproveCallback.SetGameserverFlag();
		OnGSClientDenyCallback.SetGameserverFlag();
	}
}

void UGameServer::Deinitialize()
{
	OnGSPolicyResponseCallback.Unregister();
	OnGSClientGroupStatusCallback.Unregister();
	OnGSValidateAuthTicketResponseCallback.Unregister();
	OnGSClientApproveCallback.Unregister();
	OnGSClientDenyCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UGameServer::AssociateWithClan(const FOnAssociateWithClan& callback, FSteamID steamIDClan)
{
	if (SteamGameServer())
	{
		FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan* m_Task = new FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan(this, callback, steamIDClan);
		QueueAsyncTask(m_Task);
	}
}

ESteamBeginAuthSessionResult UGameServer::BeginAuthSession(TArray<uint8> ticket, FSteamID steamID)
{
	ESteamBeginAuthSessionResult m_Result = ESteamBeginAuthSessionResult::InvalidTicket;
	
	if (SteamGameServer()) 
	{
		int32 m_Size = ticket.Num();
		uint8* m_Data = new uint8[m_Size];

		for (int32 i = 0; i < m_Size; i++)
			m_Data[i] = ticket[i];

		m_Result = static_cast<ESteamBeginAuthSessionResult>(SteamGameServer()->BeginAuthSession(m_Data, m_Size, steamID));
		delete[] m_Data;
	}

	return m_Result;
}

bool UGameServer::BLoggedOn()
{
	return SteamGameServer() ? SteamGameServer()->BLoggedOn() : false;
}

bool UGameServer::BSecure()
{
	return SteamGameServer() ? SteamGameServer()->BSecure() : false;
}

bool UGameServer::BUpdateUserData(FSteamID steamIDUser, FString playerName, int32 score)
{
	return SteamGameServer() ? SteamGameServer()->BUpdateUserData(steamIDUser, TCHAR_TO_UTF8(*playerName), score) : false;
}

void UGameServer::CancelAuthTicket(FSteamTicketHandle ticketHandle)
{
	if (SteamGameServer())
		SteamGameServer()->CancelAuthTicket(ticketHandle);
}

void UGameServer::ClearAllKeyValues()
{
	if (SteamGameServer())
		SteamGameServer()->ClearAllKeyValues();
}

void UGameServer::ComputeNewPlayerCompatibility(const FOnComputeNewPlayerCompatibility& callback, FSteamID steamIDNewPlayer)
{
	if (SteamGameServer())
	{
		FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility* m_Task = new FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility(this, callback, steamIDNewPlayer);
		QueueAsyncTask(m_Task);
	}
}

FSteamID UGameServer::CreateUnauthenticatedUserConnection()
{
	return SteamGameServer() ? FSteamID(SteamGameServer()->CreateUnauthenticatedUserConnection()) : FSteamID();
}

void UGameServer::EnableHeartbeats(bool bActive)
{
	if (SteamGameServer())
		SteamGameServer()->EnableHeartbeats(bActive);
}

void UGameServer::EndAuthSession(FSteamID steamID)
{
	if (SteamGameServer())
		SteamGameServer()->EndAuthSession(steamID);
}

void UGameServer::ForceHeartbeat()
{
	if (SteamGameServer())
		SteamGameServer()->ForceHeartbeat();
}

FSteamTicketHandle UGameServer::GetAuthSessionTicket(TArray<uint8>& ticket)
{
	if (SteamGameServer())
	{
		uint32 m_TicketSize = 0;
		uint8* m_Data = new uint8[8192];

		if (FSteamTicketHandle m_Handle = SteamGameServer()->GetAuthSessionTicket(m_Data, 8192, &m_TicketSize))
		{
			for (int32 i = 0; i < static_cast<int32>(m_TicketSize); i++)
				ticket.Add(m_Data[i]);

			return m_Handle;
		}
	}

	return FSteamTicketHandle();
}

FString UGameServer::GetServerPublicIP()
{
	if (SteamGameServer())
	{
		#if STEAM_VERSION > 146
			return FIPv4Address(SteamGameServer()->GetPublicIP().m_unIPv4).ToString();
		#else
			return FIPv4Address(SteamGameServer()->GetPublicIP()).ToString();
		#endif
	}
	else
	{
		return FString("Invalid");
	}
}

FSteamID UGameServer::GetServerSteamID()
{
	return SteamGameServer() ? FSteamID(SteamGameServer()->GetSteamID().ConvertToUint64()) : FSteamID();
}

void UGameServer::LogOff()
{
	if (SteamGameServer())
		SteamGameServer()->LogOff();
}

void UGameServer::LogOn(FString token)
{
	if (SteamGameServer())
		SteamGameServer()->LogOn(TCHAR_TO_UTF8(*token));
}

void UGameServer::LogOnAnonymous()
{
	if (SteamGameServer())
		SteamGameServer()->LogOnAnonymous();
}

bool UGameServer::RequestUserGroupStatus(FSteamID steamIDUser, FSteamID steamIDGroup)
{
	return SteamGameServer() ? SteamGameServer()->RequestUserGroupStatus(steamIDUser, steamIDGroup) : false;
}

void UGameServer::SetBotPlayerCount(int32 botplayers)
{
	if (SteamGameServer())
		SteamGameServer()->SetBotPlayerCount(botplayers);
}

void UGameServer::SetDedicatedServer(bool bDedicated)
{
	if (SteamGameServer())
		SteamGameServer()->SetDedicatedServer(bDedicated);
}

void UGameServer::SetGameData(FString gameData)
{
	if (SteamGameServer())
		SteamGameServer()->SetGameData(TCHAR_TO_UTF8(*gameData));
}

void UGameServer::SetGameDescription(FString gameDescription)
{
	if (SteamGameServer())
		SteamGameServer()->SetGameDescription(TCHAR_TO_UTF8(*gameDescription));
}

void UGameServer::SetGameTags(FString gameTags)
{
	if (SteamGameServer())
		SteamGameServer()->SetGameTags(TCHAR_TO_UTF8(*gameTags));
}

void UGameServer::SetHeartbeatInterval(int32 heartbeatInterval)
{
	if (SteamGameServer())
		SteamGameServer()->SetHeartbeatInterval(heartbeatInterval);
}

void UGameServer::SetKeyValue(FString key, FString value)
{
	if (SteamGameServer())
		SteamGameServer()->SetKeyValue(TCHAR_TO_UTF8(*key), TCHAR_TO_UTF8(*value));
}

void UGameServer::SetMapName(FString mapName)
{
	if (SteamGameServer())
		SteamGameServer()->SetMapName(TCHAR_TO_UTF8(*mapName));
}

void UGameServer::SetMaxPlayerCount(int32 playersMax)
{
	if (SteamGameServer())
		SteamGameServer()->SetMaxPlayerCount(playersMax);
}

void UGameServer::SetModDir(FString modDir)
{
	if (SteamGameServer())
		SteamGameServer()->SetModDir(TCHAR_TO_UTF8(*modDir));
}

void UGameServer::SetPasswordProtected(bool bPasswordProtected)
{
	if (SteamGameServer())
		SteamGameServer()->SetPasswordProtected(bPasswordProtected);
}

void UGameServer::SetProduct(FString product)
{
	if (SteamGameServer())
		SteamGameServer()->SetProduct(TCHAR_TO_UTF8(*product));
}

void UGameServer::SetRegion(FString region)
{
	if (SteamGameServer())
		SteamGameServer()->SetRegion(TCHAR_TO_UTF8(*region));
}

void UGameServer::SetServerName(FString serverName)
{
	if (SteamGameServer())
		SteamGameServer()->SetServerName(TCHAR_TO_UTF8(*serverName));
}

void UGameServer::SetSpectatorPort(int32 spectatorPort)
{
	if (SteamGameServer())
		SteamGameServer()->SetSpectatorPort(spectatorPort);
}

void UGameServer::SetSpectatorServerName(FString spectatorServerName)
{
	if (SteamGameServer())
		SteamGameServer()->SetSpectatorServerName(TCHAR_TO_UTF8(*spectatorServerName));
}

ESteamUserHasLicenseForAppResult UGameServer::UserHasLicenseForApp(FSteamID steamID, int32 appID)
{
	return SteamGameServer() ? static_cast<ESteamUserHasLicenseForAppResult>(SteamGameServer()->UserHasLicenseForApp(steamID, appID)) : ESteamUserHasLicenseForAppResult::NoAuth;
}

bool UGameServer::WasRestartRequested()
{
	return SteamGameServer()->WasRestartRequested();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UGameServer::OnGSPolicyResponse( GSPolicyResponse_t *pParam )
{
	const FGSPolicyResponse m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GSPolicyResponse.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GSPolicyResponse.Broadcast(m_Data);
	}
}

void UGameServer::OnGSClientGroupStatus( GSClientGroupStatus_t *pParam )
{
	const FGSClientGroupStatus m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GSClientGroupStatus.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GSClientGroupStatus.Broadcast(m_Data);
	}
}

void UGameServer::OnGSValidateAuthTicketResponse( ValidateAuthTicketResponse_t *pParam )
{
	const FValidateAuthTicketResponse m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GSValidateAuthTicketResponse.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GSValidateAuthTicketResponse.Broadcast(m_Data);
	}
}

void UGameServer::OnGSClientApprove( GSClientApprove_t *pParam )
{
	const FGSClientApprove m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GSClientApprove.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GSClientApprove.Broadcast(m_Data);
	}
}

void UGameServer::OnGSClientDeny( GSClientDeny_t *pParam )
{
	const FGSClientDeny m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GSClientDeny.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GSClientDeny.Broadcast(m_Data);
	}
}
