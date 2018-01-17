

using UnrealBuildTool;
using System.Collections.Generic;

public class MultiMenuEditorTarget : TargetRules
{
	public MultiMenuEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "MultiMenu" } );
	}
}
