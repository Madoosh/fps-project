/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamVideo
*/

#include "Video/Video.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UVideo::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnGetOPFSettingsResultCallback.Register(this, &UVideo::OnGetOPFSettingsResult);
	OnGetVideoURLResultCallback.Register(this, &UVideo::OnGetVideoURLResult);

	if (IsRunningDedicatedServer())
	{
		OnGetOPFSettingsResultCallback.SetGameserverFlag();
		OnGetVideoURLResultCallback.SetGameserverFlag();
	}
}

void UVideo::Deinitialize()
{
	OnGetOPFSettingsResultCallback.Unregister();
	OnGetVideoURLResultCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
void UVideo::GetOPFSettings(int32 videoAppID)
{
	if (SteamVideo())
		SteamVideo()->GetOPFSettings(videoAppID);
}

bool UVideo::GetOPFStringForApp(int32 videoAppID, FString& buffer)
{
	if (SteamVideo())
	{
		int32 m_BufferSize = 256;
		char* m_Buffer = new char[m_BufferSize];

		if (SteamVideo()->GetOPFStringForApp(videoAppID, m_Buffer, &m_BufferSize))
		{
			buffer = TCHAR_TO_UTF8(m_Buffer);

			delete[] m_Buffer;
			return true;
		}
	}
	return false;
}

void UVideo::GetVideoURL(int32 videoAppID)
{
	if (SteamVideo())
		SteamVideo()->GetVideoURL(videoAppID);
}

bool UVideo::IsBroadcasting(int32& numViewers)
{
	return SteamVideo() ? SteamVideo()->IsBroadcasting(&numViewers) : false;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UVideo::OnGetOPFSettingsResult(GetOPFSettingsResult_t* pParam)
{
	const FGetOPFSettingsResult m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GetOPFSettingsResult.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GetOPFSettingsResult.Broadcast(m_Data);
	}
}

void UVideo::OnGetVideoURLResult(GetVideoURLResult_t* pParam)
{
	const FGetVideoURLResult m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GetVideoURLResult.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GetVideoURLResult.Broadcast(m_Data);
	}
}