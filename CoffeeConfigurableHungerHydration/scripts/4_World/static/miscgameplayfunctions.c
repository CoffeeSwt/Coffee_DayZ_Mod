modded class MiscGameplayFunctions 
{
    override static float GetEnergyMetabolicSpeed(int movement_speed)
	{
        
		float speed;
		switch (movement_speed)
		{
		case DayZPlayerConstants.MOVEMENTIDX_WALK:
			speed = GetCoffeeConfigurableHungerHydrationConfig().MetabolicSpeedEnergyWalk;
		break;
		case DayZPlayerConstants.MOVEMENTIDX_RUN:
			speed = GetCoffeeConfigurableHungerHydrationConfig().MetabolicSpeedEnergyJog;
		break;
		case DayZPlayerConstants.MOVEMENTIDX_SPRINT:
			speed = GetCoffeeConfigurableHungerHydrationConfig().MetabolicSpeedEnergySprint;
		break;
		default:
			speed = 0;
		break;
		}

		speed += GetCoffeeConfigurableHungerHydrationConfig().MetabolicSpeedEnergyBasal;
		return speed;
	}
	
	override static float GetWaterMetabolicSpeed(int movement_speed)
	{
		float speed;
		switch (movement_speed)
		{
		case DayZPlayerConstants.MOVEMENTIDX_WALK:
			speed = GetCoffeeConfigurableHungerHydrationConfig().MetabolicSpeedWaterWalk;
		break;
		case DayZPlayerConstants.MOVEMENTIDX_RUN:
			speed = GetCoffeeConfigurableHungerHydrationConfig().MetabolicSpeedWaterJog;
		break;
		case DayZPlayerConstants.MOVEMENTIDX_SPRINT:
			speed = GetCoffeeConfigurableHungerHydrationConfig().MetabolicSpeedWaterSprint;
		break;
		default:
			speed = 0;
		break;
		}

		speed += GetCoffeeConfigurableHungerHydrationConfig().MetabolicSpeedWaterBasal;
		return speed;
	}
}