/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamScreenshots
*/

#include "Screenshots/Screenshots.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UScreenshots::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnScreenshotReadyCallback.Register(this, &UScreenshots::OnScreenshotReady);
	OnScreenshotRequestedCallback.Register(this, &UScreenshots::OnScreenshotRequested);

	if (IsRunningDedicatedServer())
	{
		OnScreenshotReadyCallback.SetGameserverFlag();
		OnScreenshotRequestedCallback.SetGameserverFlag();
	}
}

void UScreenshots::Deinitialize()
{
	OnScreenshotReadyCallback.Unregister();
	OnScreenshotRequestedCallback.Unregister();

	Super::Deinitialize();
}

FScreenshotHandle UScreenshots::AddScreenshotToLibrary(FString fileName, FString thumbnailFilename, int32 width, int32 height)
{
	FScreenshotHandle m_Handle = 0;

	if (SteamScreenshots())
	{
		m_Handle = SteamScreenshots()->AddScreenshotToLibrary(TCHAR_TO_UTF8(*fileName), TCHAR_TO_UTF8(*thumbnailFilename), width, height);
	}

	return m_Handle;
}

FScreenshotHandle UScreenshots::AddVRScreenshotToLibrary(ESteamVRScreenshotType eType, FString fileName, FString vrFileName)
{
	FScreenshotHandle m_Handle = 0;

	if (SteamScreenshots())
	{
		m_Handle = SteamScreenshots()->AddVRScreenshotToLibrary(static_cast<EVRScreenshotType>(eType), TCHAR_TO_UTF8(*fileName), TCHAR_TO_UTF8(*vrFileName));
	}

	return m_Handle;
}

void UScreenshots::HookScreenshots(bool bHook)
{
	if (SteamScreenshots())
	{
		SteamScreenshots()->HookScreenshots(bHook);
	}
}

bool UScreenshots::IsScreenshotsHooked()
{
	return SteamScreenshots() ? SteamScreenshots()->IsScreenshotsHooked() : false;
}

bool UScreenshots::SetLocation(FScreenshotHandle handle, FString location)
{
	return SteamScreenshots() ? SteamScreenshots()->SetLocation(handle, TCHAR_TO_UTF8(*location)) : false;
}

bool UScreenshots::TagPublishedFile(FScreenshotHandle handle, FPublishedFileID publishedFileID)
{
	return SteamScreenshots() ? SteamScreenshots()->TagPublishedFile(handle, publishedFileID) : false;
}

bool UScreenshots::TagUser(FScreenshotHandle handle, FSteamID steamID)
{
	return SteamScreenshots() ? SteamScreenshots()->TagUser(handle, steamID) : false;
}

void UScreenshots::TriggerScreenshot()
{
	if (SteamScreenshots())
	{
		SteamScreenshots()->TriggerScreenshot();
	}
}

FScreenshotHandle UScreenshots::WriteScreenshot(TArray<uint8> pubRGB, int32 width, int32 height)
{
	FScreenshotHandle m_Handle = 0;

	if (SteamScreenshots())
	{
		int32 m_DataSize = pubRGB.Num();
		uint8* m_Data = new uint8[m_DataSize];

		for (int32 i = 0; i < m_DataSize; i++)
			m_Data[i] = pubRGB[i];

		m_Handle = SteamScreenshots()->WriteScreenshot(m_Data, m_DataSize, width, height);
		delete[] m_Data;
	}

	return m_Handle;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UScreenshots::OnScreenshotReady(ScreenshotReady_t* pParam)
{
	const FScreenshotReady m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				ScreenshotReady.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		ScreenshotReady.Broadcast(m_Data);
	}
}

void UScreenshots::OnScreenshotRequested(ScreenshotRequested_t* pParam)
{
	const FScreenshotRequested m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				ScreenshotRequested.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		ScreenshotRequested.Broadcast(m_Data);
	}
}