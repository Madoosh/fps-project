/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMusic
*/

#include "Music/Music.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UMusic::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnPlaybackStatusHasChangedCallback.Register(this, &UMusic::OnPlaybackStatusHasChanged);
	OnVolumeHasChangedCallback.Register(this, &UMusic::OnVolumeHasChanged);

	if (IsRunningDedicatedServer())
	{
		OnPlaybackStatusHasChangedCallback.SetGameserverFlag();
		OnVolumeHasChangedCallback.SetGameserverFlag();
	}
}

void UMusic::Deinitialize()
{
	OnPlaybackStatusHasChangedCallback.Unregister();
	OnVolumeHasChangedCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UMusic::BIsEnabled()
{
	return SteamMusic() ? SteamMusic()->BIsEnabled() : false;
}

bool UMusic::BIsPlaying()
{
	return SteamMusic() ? SteamMusic()->BIsPlaying() : false;
}

ESteamAudioPlaybackStatus UMusic::GetPlaybackStatus()
{
	return SteamMusic() ? static_cast<ESteamAudioPlaybackStatus>(SteamMusic()->GetPlaybackStatus()) : ESteamAudioPlaybackStatus::Undefined;
}

void UMusic::Play()
{
	if (SteamMusic())
		SteamMusic()->Play();
}

void UMusic::Pause()
{
	if (SteamMusic())
		SteamMusic()->Pause();
}

void UMusic::PlayPrevious()
{
	if (SteamMusic())
		SteamMusic()->PlayPrevious();
}

void UMusic::PlayNext()
{
	if (SteamMusic())
		SteamMusic()->PlayNext();
}

void UMusic::SetVolume(float flVolume)
{
	if (SteamMusic())
		SteamMusic()->SetVolume(flVolume);
}

float UMusic::GetVolume()
{
	return SteamMusic() ? SteamMusic()->GetVolume() : 0.0f;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UMusic::OnPlaybackStatusHasChanged(PlaybackStatusHasChanged_t* pParam)
{
	const FPlaybackStatusHasChanged m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				PlaybackStatusHasChanged.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		PlaybackStatusHasChanged.Broadcast(m_Data);
	}
}

void UMusic::OnVolumeHasChanged(VolumeHasChanged_t* pParam)
{
	const FVolumeHasChanged m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				VolumeHasChanged.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		VolumeHasChanged.Broadcast(m_Data);
	}
}