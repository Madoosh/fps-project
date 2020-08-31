/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/
*/

#include "SteamCoreEditorCommands.h"

#define LOCTEXT_NAMESPACE "FSteamCoreEditorModule"

void FSteamCoreEditorCommands::RegisterCommands()
{
	UI_COMMAND(DonateAction, "Donate to Support eelDev!", "Support eelDev by Donating!", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(HelpAction, "Help & Documentation", "SteamCore Documentation", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(DiscordAction, "Discord Server", "eelDev Discord Server", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(MarketplaceAction, "Unreal Marketplace", "SteamCore Marketplace Page", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
