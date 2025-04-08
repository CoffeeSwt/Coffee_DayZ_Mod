modded class DynamicMusicPlayerRegistry
{
    protected override void RegisterTracksMenu()
    {
        m_TracksMenu = new array<ref DynamicMusicTrackData>();

        RegisterTrackMenu("Coffee_SoundSet_9");
    };
};

class DynamicMusicPlayerRegistryBanovFrost : DynamicMusicPlayerRegistry
{
    void DynamicMusicPlayerRegistryBanovFrost()
	{
		m_WorldName = "banovfrost";
	}
    //____________________________________________Day Time setup___________________________________________
    override protected void RegisterTracksTime()
    {
        m_TracksTime = new array<ref DynamicMusicTrackData>();

        //DAY
        RegisterTrackTime("Coffee_SoundSet_1", DynamicMusicPlayerTimeOfDay.DAY);
        RegisterTrackTime("Coffee_SoundSet_2", DynamicMusicPlayerTimeOfDay.DAY);
        //NIGHT
        RegisterTrackTime("Coffee_SoundSet_3", DynamicMusicPlayerTimeOfDay.NIGHT);
        //DAWN
        RegisterTrackTime("Coffee_SoundSet_3", DynamicMusicPlayerTimeOfDay.DAWN);
        //DUSK
        RegisterTrackTime("Coffee_SoundSet_1", DynamicMusicPlayerTimeOfDay.DUSK);
        //UNSORTED
        //RegisterTrackTime("Music_time_based_new_6_SoundSet", DynamicMusicPlayerTimeOfDay.ANY);
    }

    override protected void RegisterTracksLocationStatic()
    {
        m_TracksLocationStatic = new array<ref DynamicMusicTrackData>();
        m_TracksLocationStaticPrioritized = new array<ref DynamicMusicTrackData>();

        array<ref TVectorArray> bigcity;
		bigcity = {
			{"4885 0 475", "7985 500 3575"}
		};
		
		array<ref TVectorArray> Airport_A;
		Airport_A = {
			{"1346 0 11164", "2646 500 12464"}
		};

		array<ref TVectorArray> Airport_B;
		Airport_B = {
			{"4567 0 4525", "5267 500 5225"}
		};

		RegisterTrackLocationStaticMultiRectangle("Coffee_SoundSet_14", bigcity, DynamicMusicPlayerTimeOfDay.ANY, true);

		RegisterTrackLocationStaticMultiRectangle("Coffee_SoundSet_10", Airport_A, DynamicMusicPlayerTimeOfDay.ANY, true);

		RegisterTrackLocationStaticMultiRectangle("Coffee_SoundSet_11", Airport_B, DynamicMusicPlayerTimeOfDay.ANY, true);

        //village with lake
        array<ref TVectorArray> village_with_lake;
        village_with_lake = {
            {"6141 0 3531", "7741 700 5131"},
            {"391 0 330", "1351 700 1290"},
            {"8206 0 5430", "9286 700 6510"},
            {"2936 0 7515", "3296 800 7875"},
            {"3694 0 8800", "3894 800 9000"},
            {"2358 0 13116", "2598 800 13356"},
            {"408 0 14386", "708 800 14686"},
            {"8786 0 14744", "9106 800 15064"},
            {"12966 0 12732", "13226 800 12992"},
            {"9440 0 10020", "10340 800 10920"},
            {"13587 0 8879", "14087 800 9379"},
            {"12966 0 7294", "13566 800 7894"},
            {"8908 0 7683", "9308 800 8083"}
        };
        RegisterTrackLocationStaticMultiRectangle("Coffee_SoundSet_13", village_with_lake, DynamicMusicPlayerTimeOfDay.ANY, true);
        
        //milaitary base
        array<ref TVectorArray> military_base;
        military_base = {
            {"4536 0 4448", "5216 800 5128"},
            {"2613 0 8526", "2993 800 8906"},
            {"730 0 8844", "1010 800 9124"},
            {"7510 0 9205", "8790 800 10485"},
            {"11830 0 8897", "12030 800 9097"},
            {"10846 0 6931", "11646 800 7731"},
            {"9373 0 5807", "9653 800 6087"},
            {"13130 0 1195", "13290 800 1355"},
            {"14852 0 566", "14932 800 646"}
        };
        RegisterTrackLocationStaticMultiRectangle("Coffee_SoundSet_12", military_base, DynamicMusicPlayerTimeOfDay.ANY, true);
    }

    override protected void RegisterTracksLocationDynamic()
    {
        m_TracksLocationDynamic = new array<ref DynamicMusicTrackData>();

        RegisterTrackLocationDynamic("Music_loc_contaminated_day_SoundSet", DynamicMusicLocationTypes.CONTAMINATED_ZONE, DynamicMusicPlayerTimeOfDay.DAY);
        RegisterTrackLocationDynamic("Music_loc_contaminated_night_SoundSet", DynamicMusicLocationTypes.CONTAMINATED_ZONE, DynamicMusicPlayerTimeOfDay.NIGHT);
        RegisterTrackLocationDynamic("Coffee_SoundSet_4", DynamicMusicLocationTypes.CONTAMINATED_ZONE, DynamicMusicPlayerTimeOfDay.ANY);
        //underground
        RegisterTrackLocationDynamic("Coffee_SoundSet_5", DynamicMusicLocationTypes.UNDERGROUND, DynamicMusicPlayerTimeOfDay.ANY);
        RegisterTrackLocationDynamic("Coffee_SoundSet_6", DynamicMusicLocationTypes.UNDERGROUND, DynamicMusicPlayerTimeOfDay.ANY);
        RegisterTrackLocationDynamic("Coffee_SoundSet_7", DynamicMusicLocationTypes.UNDERGROUND, DynamicMusicPlayerTimeOfDay.ANY);
        RegisterTrackLocationDynamic("Coffee_SoundSet_8", DynamicMusicLocationTypes.UNDERGROUND, DynamicMusicPlayerTimeOfDay.ANY);
    }

}
