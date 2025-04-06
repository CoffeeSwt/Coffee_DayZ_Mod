class CoffeeConfigurableHungerHydrationConfig
{
	// Static constant config version (is NOT saved to json)
	static const string CONFIG_VERSION = "1";

	// Config location
	private const static string coffeeModFolder = "$profile:\\Coffeesw\\";
	private const static string coffeeConfigName = "ConfigurableHungerHydrationConfig.json";

	// Main config data
	string ConfigVersion = "";
    //default value
    //--------------------------------------------------------
	// static const float METABOLIC_SPEED_ENERGY_BASAL		= 0.01;		//energy loss per second while idle
	
	// static const float METABOLIC_SPEED_ENERGY_WALK		= 0.1;		//energy loss per second
	// static const float METABOLIC_SPEED_ENERGY_JOG		= 0.3;		//energy loss per second
	// static const float METABOLIC_SPEED_ENERGY_SPRINT	= 0.6;		//energy loss per second
	
	// static const float METABOLIC_SPEED_WATER_BASAL		= 0.01;		//water loss per second while idle
	
	// static const float METABOLIC_SPEED_WATER_WALK		= 0.1;		//water loss per second
	// static const float METABOLIC_SPEED_WATER_JOG		= 0.3;		//water loss per second
	// static const float METABOLIC_SPEED_WATER_SPRINT		= 0.6;		//water loss per second
	//--------------------------------------------------------
    float MetabolicSpeedEnergyBasal = 0.01;
    float MetabolicSpeedEnergyWalk = 0.1;
    float MetabolicSpeedEnergyJog = 0.3;
    float MetabolicSpeedEnergySprint = 0.6;

    float MetabolicSpeedWaterBasal = 0.01;
    float MetabolicSpeedWaterWalk = 0.1;
    float MetabolicSpeedWaterJog = 0.3;
    float MetabolicSpeedWaterSprint = 0.6;

	// Load config file or create default file if config doesn't exsit
	void Load()
	{
		if (!GetGame().IsDedicatedServer())
			return;

		if (FileExist(coffeeModFolder + coffeeConfigName))
		{ 
			// If config exists, load file
			JsonFileLoader<CoffeeConfigurableHungerHydrationConfig>.JsonLoadFile(coffeeModFolder + coffeeConfigName, this);

			// If version mismatch, backup old version of json before replacing it
			if (ConfigVersion != CONFIG_VERSION)
			{
				JsonFileLoader<CoffeeConfigurableHungerHydrationConfig>.JsonSaveFile(coffeeModFolder + coffeeConfigName + "_old", this);
			}
			else
			{
				// Config exists and version matches, stop here.
				return;
			}
		}
		 
		// Config file does not exist or json structure has changed, create default file
		ConfigVersion = CONFIG_VERSION;
		
		// Save config
		Save();
	}

	// Save config
	void Save()
	{
		if (!GetGame().IsDedicatedServer())
			return;

		if (!FileExist(coffeeModFolder))
		{	
			// If config folder doesn't exist, create it.
			MakeDirectory(coffeeModFolder);
		}

		// Save JSON config
		JsonFileLoader<CoffeeConfigurableHungerHydrationConfig>.JsonSaveFile(coffeeModFolder + coffeeConfigName, this);
	}
}

// Save config data
ref CoffeeConfigurableHungerHydrationConfig m_CoffeeConfigurableHungerHydrationConfig;

// Helper function to return Config data storage object
static CoffeeConfigurableHungerHydrationConfig GetCoffeeConfigurableHungerHydrationConfig()
{
	if (!m_CoffeeConfigurableHungerHydrationConfig)
	{
		Print("[GetCoffeeConfigurableHungerHydrationConfig] Init");
		m_CoffeeConfigurableHungerHydrationConfig = new CoffeeConfigurableHungerHydrationConfig;
		m_CoffeeConfigurableHungerHydrationConfig.Load();
	}

	return m_CoffeeConfigurableHungerHydrationConfig;
};