/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#include "MatchmakingServers/MatchmakingServersTypes.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

UServerFilter::UServerFilter()
	: MaxFilters(100)
	, NumFilters(0)
{
	Filters = new MatchMakingKeyValuePair_t[MaxFilters];
}

UServerFilter::~UServerFilter()
{
	delete[] Filters;
}

void UServerFilter::AddFilterMap(FString value)
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "map", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*value), GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterGameDataAnd(FString value)
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gamedataand", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*value), GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterGameDataOr(FString value)
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gamedataor", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*value), GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterGameDataNor(FString value)
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gamedatanor", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*value), GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterGameTagsAnd(FString value)
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gametagsand", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*value), GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterGameTagsNor(FString value)
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gametagsnor", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*value), GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterAnd(FString value)
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "and", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*value), GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterOr(FString value)
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "or", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*value), GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterNand(FString value)
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "nand", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*value), GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterNor(FString value)
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "nor", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*value), GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterGameAddr(FString value)
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "gameaddr", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, TCHAR_TO_ANSI(*value), GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterDedicated()
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "dedicated", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterSecure()
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "secure", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterNotFull()
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "notfull", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterHasPlayers()
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "hasplayers", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterNoPlayers()
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "noplayers", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

void UServerFilter::AddFilterLinux()
{
	if (CanAddFilter())
	{
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szKey, "linux", GetKeySize());
		FCStringAnsi::Strncpy(Filters[NumFilters].m_szValue, "", GetValueSize());

		NumFilters++;
	}
	else
	{
		UE_LOG(SteamCoreLog, Error, TEXT("AddFilter is exceeding max filters!"));
	}
}

TMap<FString, FString> UServerFilter::GetFilters()
{
	TMap<FString, FString> outFilters;

	for (int32 i = 0; i < NumFilters; i++)
	{
		outFilters.Add(Filters[i].m_szKey, Filters[i].m_szValue);
	}

	return outFilters;
}
