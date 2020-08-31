/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/
*/

#include "SteamCoreEditorPlugin.h"
#include "PropertyEditorModule.h"

#include "Modules/ModuleManager.h"
#include "LevelEditor.h"

class FToolBarBuilder;
class FMenuBuilder;

#define LOCTEXT_NAMESPACE "FSteamCoreEditorModule"

class FSteamCoreEditorPlugin : public ISteamCoreEditorPlugin
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void DonateActionClicked();
	void HelpActionClicked();
	void DiscordActionClicked();
	void MarketplaceActionClicked();

private:
	void AddMenuBarExtension(FMenuBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);

private:
	TSharedPtr<class FUICommandList> PluginCommands;
};

IMPLEMENT_MODULE(FSteamCoreEditorPlugin, SteamCoreEditor)

void FSteamCoreEditorPlugin::StartupModule()
{
	FSteamCoreEditorStyle::Initialize();
	FSteamCoreEditorStyle::ReloadTextures();
	FSteamCoreEditorCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FSteamCoreEditorCommands::Get().DonateAction,
		FExecuteAction::CreateRaw(this, &FSteamCoreEditorPlugin::DonateActionClicked),
		FCanExecuteAction());
	PluginCommands->MapAction(
		FSteamCoreEditorCommands::Get().HelpAction,
		FExecuteAction::CreateRaw(this, &FSteamCoreEditorPlugin::HelpActionClicked),
		FCanExecuteAction());
	PluginCommands->MapAction(
		FSteamCoreEditorCommands::Get().DiscordAction,
		FExecuteAction::CreateRaw(this, &FSteamCoreEditorPlugin::DiscordActionClicked),
		FCanExecuteAction());
	PluginCommands->MapAction(
		FSteamCoreEditorCommands::Get().MarketplaceAction,
		FExecuteAction::CreateRaw(this, &FSteamCoreEditorPlugin::MarketplaceActionClicked),
		FCanExecuteAction());

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuBarExtension("Window", EExtensionHook::After, PluginCommands, FMenuBarExtensionDelegate::CreateRaw(this, &FSteamCoreEditorPlugin::AddMenuBarExtension));
		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
}

void FSteamCoreEditorPlugin::ShutdownModule()
{
	FSteamCoreEditorStyle::Shutdown();
	FSteamCoreEditorCommands::Unregister();
}

void FSteamCoreEditorPlugin::DonateActionClicked()
{
	FPlatformProcess::LaunchURL(TEXT("https://paypal.me/eeldev"), NULL, NULL);
}

void FSteamCoreEditorPlugin::HelpActionClicked()
{
	FPlatformProcess::LaunchURL(TEXT("https://eeldev.com/index.php/steamcore-plugin/"), NULL, NULL);
}

void FSteamCoreEditorPlugin::DiscordActionClicked()
{
	FPlatformProcess::LaunchURL(TEXT("https://discord.gg/7AGWewB"), NULL, NULL);
}

void FSteamCoreEditorPlugin::MarketplaceActionClicked()
{
	FPlatformProcess::LaunchURL(TEXT("https://www.unrealengine.com/marketplace/product/steamcore"), NULL, NULL);
}

void FSteamCoreEditorPlugin::AddMenuBarExtension(FMenuBarBuilder& Builder)
{
	Builder.AddPullDownMenu(
		LOCTEXT("SteamCoreEditorMenu", "SteamCore Plugin"),
		LOCTEXT("SteamCoreEditorMenu_Tooltip", "SteamCore Help and Documentation menu"),
		FNewMenuDelegate::CreateRaw(this, &FSteamCoreEditorPlugin::AddMenuExtension), "SteamCore Plugin");
}

void FSteamCoreEditorPlugin::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.BeginSection("Help", LOCTEXT("SteamCoreMenu_Help", "Help"));
	Builder.AddMenuEntry(FSteamCoreEditorCommands::Get().MarketplaceAction);
	Builder.AddMenuEntry(FSteamCoreEditorCommands::Get().HelpAction);
	Builder.AddMenuEntry(FSteamCoreEditorCommands::Get().DiscordAction);
	Builder.EndSection();

	Builder.BeginSection("Support", LOCTEXT("SteamCoreMenu_Support", "Support"));
	Builder.AddMenuEntry(FSteamCoreEditorCommands::Get().DonateAction);
	Builder.EndSection();
}

#undef LOCTEXT_NAMESPACE