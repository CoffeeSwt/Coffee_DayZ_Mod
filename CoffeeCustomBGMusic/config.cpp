class CfgPatches
{
	class CoffeeCustomBGMusic
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts"};
	};
};

class CfgMods
{
	class CoffeeCustomBGMusic
	{
		name = "CoffeeCustomBGMusic";
		credits = "";
		author = "Coffeesw";
		type = "mod";
		hideName = 0;
		hidePicture = 0;
		tooltip = "CoffeeCustomBGMusic";
		overview = "CoffeeCustomBGMusic";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Coffee/CoffeeCustomBGMusic/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Coffee/CoffeeCustomBGMusic/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Coffee/CoffeeCustomBGMusic/Scripts/5_Mission"};
			};
		};
	};
};

class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class Coffee_SoundShader_1: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_1",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_2: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_2",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_3: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_3",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_4: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_4",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_5: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_5",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_6: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_6",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_7: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_7",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_8: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_8",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_9: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_9",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_10: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_10",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_11: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_11",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_12: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_12",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_13: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_13",
                1
            }
        };
        volume=0.25;
    };
    class Coffee_SoundShader_14: baseCharacter_SoundShader
    {
        samples[]=
        {
            {
                "\Coffee\CoffeeCustomBGMusic\Data\music_14",
                1
            }
        };
        volume=0.25;
    };
};
class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class Coffee_SoundSet_1: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_1"
        };
        spatial=0;
    };
    class Coffee_SoundSet_2: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_2"
        };
        spatial=0;
    };
    class Coffee_SoundSet_3: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_3"
        };
        spatial=0;
    };
    class Coffee_SoundSet_4: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_4"
        };
        spatial=0;
    };
    class Coffee_SoundSet_5: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_5"
        };
        spatial=0;
    };
    class Coffee_SoundSet_6: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_6"
        };
        spatial=0;
    };
    class Coffee_SoundSet_7: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_7"
        };
        spatial=0;
    };
    class Coffee_SoundSet_8: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_8"
        };
        spatial=0;
    };
    class Coffee_SoundSet_9: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_9"
        };
        spatial=0;
    };
    class Coffee_SoundSet_10: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_10"
        };
        spatial=0;
    };
    class Coffee_SoundSet_11: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_11"
        };
        spatial=0;
    };
    class Coffee_SoundSet_12: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_12"
        };
        spatial=0;
    };
    class Coffee_SoundSet_13: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_13"
        };
        spatial=0;
    };
    class Coffee_SoundSet_14: baseCharacter_SoundSet
    {
        soundShaders[]=
        {
            "Coffee_SoundShader_14"
        };
        spatial=0;
    };
};

