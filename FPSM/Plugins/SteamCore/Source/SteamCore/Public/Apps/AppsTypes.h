/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "AppsTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FFileDetailsResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
		ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
		int32 FileSize;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
		FString SHA;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
		TArray<int32> Flags;
public:
	FFileDetailsResult() = default;
	FFileDetailsResult(const FileDetailsResult_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult)), FileSize(data.m_ulFileSize), SHA(UTF8_TO_TCHAR(data.m_FileSHA))
	{
		for (int i = 0; i < 32; i++)
		{
			if (data.m_unFlags & 1 << i)
			{
				Flags.Add(1 << i);
			}
		}
	}
};

USTRUCT(BlueprintType)
struct FDLCInstalled
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Apps")
		int32 AppID;

public:
	FDLCInstalled() = default;
	FDLCInstalled(const DlcInstalled_t& data)
		: AppID(data.m_nAppID)
	{}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFileDetailsResult, const FFileDetailsResult&, data, bool, bWasSuccessful);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDLCInstalled, const FDLCInstalled&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFileDetailsResultDelegate, const FFileDetailsResult&, data);