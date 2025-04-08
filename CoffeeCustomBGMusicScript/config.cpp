class CfgPatches
{
	class CoffeeCustomBGMusicScript
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts","CoffeeCustomBGMusic","BanovFrostMiscScripts","BanovfrostUI"};
	};
};
class CfgMods
{
	class CoffeeCustomBGMusicScript
	{
		name = "CoffeeCustomBGMusicScript";
		credits = "";
		author = "Coffeesw";
		type = "mod";
		hideName = 0;
		hidePicture = 0;
		tooltip = "CoffeeCustomBGMusicScript";
		overview = "CoffeeCustomBGMusicScript";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Coffee/CoffeeCustomBGMusicScript/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Coffee/CoffeeCustomBGMusicScript/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Coffee/CoffeeCustomBGMusicScript/Scripts/5_Mission"};
			};
		};
	};
};
