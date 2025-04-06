class CfgPatches
{
	class CoffeeDisableGardenplot
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
		author = "Coffee_sw";
		name = "CoffeeDisableGardenplot";
	};
};
class CfgMods
{
	class CoffeeDisableGardenplot
	{
		type = "mod";
		name = "CoffeeDisableGardenplot";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Coffee\CoffeeDisableGardenplot\scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Coffee\CoffeeDisableGardenplot\scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Coffee\CoffeeDisableGardenplot\scripts\5_Mission"};
			};
		};
	};
};
class CfgVehicles{};