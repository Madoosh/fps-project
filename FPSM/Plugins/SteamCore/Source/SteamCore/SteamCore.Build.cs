// Copyright (C) 2017-2020 | Dry Eel Development

using UnrealBuildTool;

public class SteamCore : ModuleRules
{
    public SteamCore(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivatePCHHeaderFile = "Private/SteamCore/SteamCorePluginPrivatePCH.h";

        PublicDependencyModuleNames.AddRange
        (
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "Projects",
                "Steamworks",
                "OnlineSubsystem",
                "OnlineSubsystemUtils",
                "OnlineSubsystemSteam",
                "Networking",
                "Sockets",
            }
        );

        /*if (Target.Version.MinorVersion >= 24)
        {
            PrivateDependencyModuleNames.AddRange
            (
                new string[]
                {
                    "OnlineSubsystemSteamCore"
                }
            );
        }*/

        AddEngineThirdPartyPrivateStaticDependencies(Target, "Steamworks");
    }
}
