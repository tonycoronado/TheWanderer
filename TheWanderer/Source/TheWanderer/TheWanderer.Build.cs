// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TheWanderer : ModuleRules
{
	public TheWanderer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "GameplayAbilities", "GameplayTags", "GameplayTasks", "MotionWarping" });
	}
}
