/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/
*/

#pragma once

#include "Modules/ModuleManager.h"

class ISteamCoreEditorPlugin : public IModuleInterface
{
public:
	static inline ISteamCoreEditorPlugin& Get()
	{
		return FModuleManager::LoadModuleChecked<ISteamCoreEditorPlugin>("SteamCoreEditorPlugin");
	}
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("SteamCoreEditorPlugin");
	}
};