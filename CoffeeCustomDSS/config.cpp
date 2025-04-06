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

class CfgMods
{
    class CoffeeCustomDSS
    {
        dir = "CoffeeCustomDSS";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "Coffeesw";
        credits = "Coffeesw";
        author = "Coffeesw";
        version = "1.0";
        extra = 0;
        type = "mod";

        dependencies[] = {"Mission"};

        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = {"Coffee/CoffeeCustomDSS/scripts/4_World"};
            };
        };
    };
};