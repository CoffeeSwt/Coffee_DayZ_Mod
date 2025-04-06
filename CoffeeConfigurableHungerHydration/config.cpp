class CfgPatches
{
	class CoffeeConfigurableHungerHydration
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
		author = "Coffee_sw";
		name = "CoffeeConfigurableHungerHydration";
	};
};
class CfgMods
{
	class CoffeeConfigurableHungerHydration
	{
		type = "mod";
		name = "CoffeeConfigurableHungerHydration";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Coffee\CoffeeConfigurableHungerHydration\scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Coffee\CoffeeConfigurableHungerHydration\scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Coffee\CoffeeConfigurableHungerHydration\scripts\5_Mission"};
			};
		};
	};
};
class CfgVehicles{};