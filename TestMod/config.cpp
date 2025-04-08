class CfgPatches
{
	class TestMod
	{
		requiredAddons[] =
		{
			// ""
		};
	};
};

class CfgMods
{
	class TestMod
	{
		type = "mod";

		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = { "Coffee/TestMod/Scripts/4_World" };
			};
		};
	};
};