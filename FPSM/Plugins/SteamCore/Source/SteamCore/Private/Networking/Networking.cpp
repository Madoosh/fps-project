/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamNetworking
*/

#include "Networking/Networking.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UNetworking::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnP2PSessionRequestCallback.Register(this, &UNetworking::OnP2PSessionRequest);
	OnP2PSessionConnectFailCallback.Register(this, &UNetworking::OnP2PSessionConnectFail);

	if (IsRunningDedicatedServer())
	{
		OnP2PSessionRequestCallback.SetGameserverFlag();
		OnP2PSessionConnectFailCallback.SetGameserverFlag();
	}
}

void UNetworking::Deinitialize()
{
	OnP2PSessionRequestCallback.Unregister();
	OnP2PSessionConnectFailCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
bool UNetworking::AcceptP2PSessionWithUser(FSteamID steamIDRemote)
{
	return GetNetworking() ? GetNetworking()->AcceptP2PSessionWithUser(steamIDRemote) : false;
}

bool UNetworking::AllowP2PPacketRelay(bool bAllow)
{
	return GetNetworking() ? GetNetworking()->AllowP2PPacketRelay(bAllow) : false;
}

bool UNetworking::CloseP2PchannelWithUser(FSteamID steamIDRemote, int32 channel)
{
	return GetNetworking() ? GetNetworking()->CloseP2PChannelWithUser(steamIDRemote, channel) : false;
}

bool UNetworking::CloseP2PSessionWithUser(FSteamID steamIDRemote)
{
	return GetNetworking() ? GetNetworking()->CloseP2PSessionWithUser(steamIDRemote) : false;
}

bool UNetworking::GetP2PSessionState(FSteamID steamIDRemote, FSteamP2PSessionState& connectionState)
{
	return GetNetworking() ? GetNetworking()->GetP2PSessionState(steamIDRemote, reinterpret_cast<P2PSessionState_t*>(&connectionState)) : false;
}

bool UNetworking::IsP2PPacketAvailable(int32& msgSize, int32 channel)
{
	return GetNetworking() ? GetNetworking()->IsP2PPacketAvailable(reinterpret_cast<uint32*>(&msgSize), channel) : false;
}

bool UNetworking::ReadP2PPacket(TArray<uint8>& data, FSteamID& steamIDRemote, int32 channel)
{
	if (GetNetworking())
	{
		uint32 m_Size = 0;

		if (GetNetworking()->IsP2PPacketAvailable(&m_Size))
		{
			uint8* m_Data = new uint8[m_Size];

			if (GetNetworking()->ReadP2PPacket(m_Data, m_Size, &m_Size, reinterpret_cast<CSteamID*>(&steamIDRemote), channel))
			{
				for (int32 i = 0; i < static_cast<int32>(m_Size); i++)
					data.Add(m_Data[i]);

				delete[] m_Data;

				return true;
			}
		}
	}

	return false;
}

bool UNetworking::SendP2PPacket(FSteamID steamIDRemote, TArray<uint8> data, ESteamP2PSend p2pSendType, int32 channel)
{
	bool bResult = false;

	if (GetNetworking()) 
	{
		const int32 m_Size = data.Num();
		uint8* m_Data = new uint8[m_Size];

		for (int32 i = 0; i < m_Size; i++)
			m_Data[i] = data[i];

		bResult = GetNetworking()->SendP2PPacket(steamIDRemote, m_Data, m_Size, static_cast<EP2PSend>(p2pSendType), channel);

		delete[] m_Data;
	}

	return bResult;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UNetworking::OnP2PSessionRequest(P2PSessionRequest_t* pParam)
{
	const FP2PSessionRequest m_data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				OnP2PSessionRequestDelegate.Broadcast(m_data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		OnP2PSessionRequestDelegate.Broadcast(m_data);
	}
}

void UNetworking::OnP2PSessionConnectFail(P2PSessionConnectFail_t *pParam)
{
	const FP2PSessionConnectFail m_data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				OnP2PSessionConnectFailDelegate.Broadcast(m_data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		OnP2PSessionConnectFailDelegate.Broadcast(m_data);
	}
}