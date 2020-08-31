/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUser
*/

#include "User/User.h"
#include "User/UserAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UUser::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnClientGameServerDenyCallbackCallback.Register(this, &UUser::OnClientGameServerDeny);
	OnGameWebCallbackCallback.Register(this, &UUser::OnGameWebCallback);
	OnGetAuthSessionTicketResponseCallback.Register(this, &UUser::OnGetAuthSessionTicketResponse);
	OnIPCFailureCallback.Register(this, &UUser::OnIPCFailure);
	OnLicensesUpdatedCallback.Register(this, &UUser::OnLicensesUpdated);
	OnMicroTxnAuthorizationResponseCallback.Register(this, &UUser::OnMicroTxnAuthorizationResponse);
	OnSteamServersConnectedCallback.Register(this, &UUser::OnSteamServersConnected);
	OnSteamServerConnectFailureCallback.Register(this, &UUser::OnSteamServerConnectFailure);
	OnSteamServersDisconnectedCallback.Register(this, &UUser::OnSteamServersDisconnected);
	OnValidateAuthTicketResponseCallback.Register(this, &UUser::OnValidateAuthTicketResponse);
	OnEncryptedAppTicketResponseCallback.Register(this, &UUser::OnEncryptedAppTicketResponse);

	if (IsRunningDedicatedServer())
	{
		OnClientGameServerDenyCallbackCallback.SetGameserverFlag();
		OnGameWebCallbackCallback.SetGameserverFlag();
		OnGetAuthSessionTicketResponseCallback.SetGameserverFlag();
		OnIPCFailureCallback.SetGameserverFlag();
		OnLicensesUpdatedCallback.SetGameserverFlag();
		OnMicroTxnAuthorizationResponseCallback.SetGameserverFlag();
		OnSteamServersConnectedCallback.SetGameserverFlag();
		OnSteamServerConnectFailureCallback.SetGameserverFlag();
		OnSteamServersDisconnectedCallback.SetGameserverFlag();
		OnValidateAuthTicketResponseCallback.SetGameserverFlag();
		OnEncryptedAppTicketResponseCallback.SetGameserverFlag();
	}
}

void UUser::Deinitialize()
{
	OnClientGameServerDenyCallbackCallback.Unregister();
	OnGameWebCallbackCallback.Unregister();
	OnGetAuthSessionTicketResponseCallback.Unregister();
	OnIPCFailureCallback.Unregister();
	OnLicensesUpdatedCallback.Unregister();
	OnMicroTxnAuthorizationResponseCallback.Unregister();
	OnSteamServersConnectedCallback.Unregister();
	OnSteamServerConnectFailureCallback.Unregister();
	OnSteamServersDisconnectedCallback.Unregister();
	OnValidateAuthTicketResponseCallback.Unregister();
	OnEncryptedAppTicketResponseCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUser::AdvertiseGame(FSteamID steamIDGameServer, FString serverIP, int32 serverPort)
{
	if (SteamUser())
	{
		FIPv4Address m_IP;
		FIPv4Address::Parse(serverIP, m_IP);

		SteamUser()->AdvertiseGame(steamIDGameServer, m_IP.Value, serverPort);
	}
}

ESteamBeginAuthSessionResult UUser::BeginAuthSession(TArray<uint8> ticket, FSteamID steamID)
{
	ESteamBeginAuthSessionResult m_Result = ESteamBeginAuthSessionResult::InvalidTicket;

	if (SteamUser())
	{
		const int32 m_Size = ticket.Num();
		uint8* m_Data = new uint8[m_Size];
		for (int32 i = 0; i < m_Size; i++)
			m_Data[i] = ticket[i];

		m_Result = static_cast<ESteamBeginAuthSessionResult>(SteamUser()->BeginAuthSession(m_Data, m_Size, steamID));

		delete[] m_Data;
	}

	return m_Result;
}

bool UUser::BIsBehindNAT()
{
	return SteamUser() ? SteamUser()->BIsBehindNAT() : false;
}

bool UUser::BIsPhoneIdentifying()
{
	return SteamUser() ? SteamUser()->BIsPhoneIdentifying() : false;
}

bool UUser::BIsPhoneRequiringVerification()
{
	return SteamUser() ? SteamUser()->BIsPhoneRequiringVerification() : false;
}

bool UUser::BIsPhoneVerified()
{
	return SteamUser() ? SteamUser()->BIsPhoneVerified() : false;
}

bool UUser::BIsTwoFactorEnabled()
{
	return SteamUser() ? SteamUser()->BIsTwoFactorEnabled() : false;
}

bool UUser::BLoggedOn()
{
	return SteamUser() ? SteamUser()->BLoggedOn() : false;
}

void UUser::CancelAuthTicket(FSteamTicketHandle TicketHandle)
{
	if (SteamUser())
		SteamUser()->CancelAuthTicket(TicketHandle);
}

ESteamVoiceResult UUser::DecompressVoice(TArray<uint8> compressedBuffer, int32 desiredSampleRate, TArray<uint8>& destBuffer)
{
	ESteamVoiceResult m_Result = ESteamVoiceResult::NotInitialized;
	int32 m_CompressedBufferSize = compressedBuffer.Num();

	if (SteamUser())
	{
		uint32 m_BytesWritten = 0;

		uint8* m_CompressedBuffer = new uint8[m_CompressedBufferSize];
		uint8* m_DecompressedBuffer = new uint8[m_CompressedBufferSize];

		for (int32 i = 0; i < m_CompressedBufferSize; i++)
			m_CompressedBuffer[i] = compressedBuffer[i];

		m_Result = static_cast<ESteamVoiceResult>(SteamUser()->DecompressVoice(m_CompressedBuffer, m_CompressedBufferSize, m_DecompressedBuffer, m_CompressedBufferSize, &m_BytesWritten, desiredSampleRate));
	
		for (int32 i = 0; i < static_cast<int32>(m_BytesWritten); i++)
			destBuffer.Add(m_DecompressedBuffer[i]);
		
		delete[] m_CompressedBuffer;
		delete[] m_DecompressedBuffer;
	}

	return m_Result;
}

void UUser::EndAuthSession(FSteamID steamID)
{
	if (SteamUser())
		SteamUser()->EndAuthSession(steamID);
}

FSteamTicketHandle UUser::GetAuthSessionTicket(TArray<uint8>& ticket)
{
	FSteamTicketHandle m_Result;

	if (SteamUser())
	{
		uint8* m_Data = new uint8[8192];
		uint32 m_TicketSize = 0;
		m_Result = SteamUser()->GetAuthSessionTicket(m_Data, 8192, &m_TicketSize);

		if (m_Result.IsValid())
		{
			for (int32 i = 0; i < static_cast<int32>(m_TicketSize); i++)
				ticket.Add(m_Data[i]);
		}

		delete[] m_Data;
	}

	return m_Result;
}

ESteamVoiceResult UUser::GetAvailableVoice(int32& compressedBytes, int32& uncompressedBytes, int32 uncompressedVoiceDesiredSampleRate)
{
	ESteamVoiceResult m_Result = ESteamVoiceResult::NotInitialized;

	if (SteamUser())
	{
		m_Result = static_cast<ESteamVoiceResult>(SteamUser()->GetAvailableVoice(reinterpret_cast<uint32*>(&compressedBytes), reinterpret_cast<uint32*>(&uncompressedBytes), uncompressedVoiceDesiredSampleRate));
	}

	return m_Result;
}

bool UUser::GetEncryptedAppTicket(TArray<uint8>& ticket)
{
	bool bResult = false;

	if (SteamUser()) 
	{
		uint8* m_Data = new uint8[8192];
		uint32 m_TicketSize = 0;

		if (SteamUser()->GetEncryptedAppTicket(m_Data, 8192, &m_TicketSize))
		{
			for (int32 i = 0; i < static_cast<int32>(m_TicketSize); i++)
				ticket.Add(m_Data[i]);

			bResult = true;
		}
		delete[] m_Data;
	}
	

	return bResult;
}

int32 UUser::GetGameBadgeLevel(int32 series, bool bFoil)
{
	return SteamUser() ? SteamUser()->GetGameBadgeLevel(series, bFoil) : 0;
}

int32 UUser::GetPlayerSteamLevel()
{
	return SteamUser() ? SteamUser()->GetPlayerSteamLevel() : 0;
}

FSteamID UUser::GetSteamID()
{
	return SteamUser() ? FSteamID(SteamUser()->GetSteamID()) : FSteamID();
}

ESteamVoiceResult UUser::GetVoice(TArray<uint8>& destBuffer, int32& bytesWritten)
{
	ESteamVoiceResult m_Result = ESteamVoiceResult::NotInitialized;

	if (SteamUser())
	{
		// get the required buffer size
		SteamUser()->GetAvailableVoice(reinterpret_cast<uint32*>(&bytesWritten));
		uint8* m_DestBuffer = new uint8[bytesWritten];

		m_Result = static_cast<ESteamVoiceResult>(SteamUser()->GetVoice(true, m_DestBuffer, bytesWritten, reinterpret_cast<uint32*>(&bytesWritten)));

		for (int32 i = 0; i < bytesWritten; i++)
			destBuffer.Add(m_DestBuffer[i]);

		delete[] m_DestBuffer;
	}

	return m_Result;
}

int32 UUser::GetVoiceOptimalSampleRate()
{
	return SteamUser() ? SteamUser()->GetVoiceOptimalSampleRate() : 0;
}

void UUser::RequestEncryptedAppTicket(const FOnRequestEncryptedAppTicket& callback, TArray<uint8> dataToInclude)
{
	if (SteamUser())
	{
		FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket* m_Task = new FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket(this, callback, dataToInclude);
		QueueAsyncTask(m_Task);
	}
}

void UUser::RequestStoreAuthURL(const FOnStoreAuthURLResponse& callback, FString redirectURL)
{
	if (SteamUser())
	{
		FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL* m_Task = new FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL(this, callback, redirectURL);
		QueueAsyncTask(m_Task);
	}
}

void UUser::StartVoiceRecording()
{
	if (SteamUser())
		SteamUser()->StartVoiceRecording();
}

void UUser::StopVoiceRecording()
{
	if (SteamUser())
		SteamUser()->StopVoiceRecording();
}

ESteamUserHasLicenseForAppResult UUser::UserHasLicenseForApp(FSteamID steamID, int32 appID)
{
	return SteamUser() ? static_cast<ESteamUserHasLicenseForAppResult>(SteamUser()->UserHasLicenseForApp(steamID, appID)) : ESteamUserHasLicenseForAppResult::NoAuth;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUser::OnClientGameServerDeny(ClientGameServerDeny_t* pParam)
{
	const FClientGameServerDeny m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UUser::ClientGameServerDeny.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		ClientGameServerDeny.Broadcast(m_Data);
	}
}

void UUser::OnGameWebCallback(GameWebCallback_t* pParam)
{
	const FGameWebCallback m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UUser::GameWebCallback.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GameWebCallback.Broadcast(m_Data);
	}
}

void UUser::OnGetAuthSessionTicketResponse(GetAuthSessionTicketResponse_t* pParam)
{
	const FGetAuthSessionTicketResponse m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UUser::GetAuthSessionTicketResponse.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GetAuthSessionTicketResponse.Broadcast(m_Data);
	}
}

void UUser::OnIPCFailure(IPCFailure_t* pParam)
{
	const FIPCFailure m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UUser::IPCFailure.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		IPCFailure.Broadcast(m_Data);
	}
}

void UUser::OnLicensesUpdated(LicensesUpdated_t* pParam)
{
	const FLicensesUpdated m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UUser::LicensesUpdated.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		LicensesUpdated.Broadcast(m_Data);
	}
}

void UUser::OnMicroTxnAuthorizationResponse(MicroTxnAuthorizationResponse_t* pParam)
{
	const FMicroTxnAuthorizationResponse m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UUser::MicroTxnAuthorizationResponse.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		MicroTxnAuthorizationResponse.Broadcast(m_Data);
	}
}

void UUser::OnSteamServersConnected(SteamServersConnected_t* pParam)
{
	const FSteamServersConnected m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UUser::SteamServersConnected.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamServersConnected.Broadcast(m_Data);
	}
}

void UUser::OnSteamServerConnectFailure(SteamServerConnectFailure_t* pParam)
{
	const FSteamServerConnectFailure m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UUser::SteamServerConnectFailure.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamServerConnectFailure.Broadcast(m_Data);
	}
}

void UUser::OnSteamServersDisconnected(SteamServersDisconnected_t* pParam)
{
	const FSteamServersDisconnected m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UUser::SteamServersDisconnected.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamServersDisconnected.Broadcast(m_Data);
	}
}

void UUser::OnValidateAuthTicketResponse(ValidateAuthTicketResponse_t* pParam)
{
	const FValidateAuthTicketResponse m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UUser::ValidateAuthTicketResponse.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		ValidateAuthTicketResponse.Broadcast(m_Data);
	}
}

void UUser::OnEncryptedAppTicketResponse( EncryptedAppTicketResponse_t *pParam )
{
	const FEncryptedAppTicketResponse m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				EncryptedAppTicketResponse.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		EncryptedAppTicketResponse.Broadcast(m_Data);
	}
}