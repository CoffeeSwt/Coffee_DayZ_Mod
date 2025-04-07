class CfgPatches
{
    class CoffeeCustomDSS
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\1早晨_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\2中午_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\3夜晚到来_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\4进入战斗_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\地堡_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\地堡2_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\地堡3_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\地堡4_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\登录页面主题曲_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\机场_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\机场2_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\军营_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\有湖的村子_01",
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
                "\Coffee\CoffeeCustomDSS\Data\DynamicSounds\最大城市_01",
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