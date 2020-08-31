/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/
*/

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "SteamCoreEditorStyle.h"

class FSteamCoreEditorCommands : public TCommands<FSteamCoreEditorCommands>
{
public:
	FSteamCoreEditorCommands()
		: TCommands<FSteamCoreEditorCommands>(TEXT("SteamCoreEditor"), NSLOCTEXT("Contexts", "SteamCoreEditor", "SteamCoreEditor Plugin"), NAME_None, FSteamCoreEditorStyle::GetStyleSetName()) {}
	virtual void RegisterCommands() override;
public:
	TSharedPtr<FUICommandInfo> DonateAction;
	TSharedPtr<FUICommandInfo> HelpAction;
	TSharedPtr<FUICommandInfo> DiscordAction;
	TSharedPtr<FUICommandInfo> MarketplaceAction;
};
