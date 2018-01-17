

using UnrealBuildTool;
using System.Collections.Generic;

public class MultiMenuTarget : TargetRules
{
	public MultiMenuTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.AddRange( new string[] { "MultiMenu" } );
	}
}
