modded class AmbientHandler
{
    void AmbientHandler(SoundHandler soundHandler)
    {
        m_SoundHandler = soundHandler;
        SetAmbientSoundCooldown(DayZGame.GetDSSProfileVal(EDSSProfileOptions.AMBIENT_INTERVAL));

        m_AmbientAreas = new array<ref AmbientArea>;

        //Multi map support added
        if (DSSCoreStatics.GetWorldName() == "chernarusplus")
        {
            //Use Corner Top-Left and Corner Bottom-Right Coords
            // m_AmbientAreas.Insert(new AmbientArea("AREA NAME/DESCRIPTION", "1000 0 1000", "1000 0 1000", AmbientTimeOfDay.BOTH, {"DS_AmbientMusic_04_SoundSet"}));
            m_AmbientAreas.Insert(new AmbientArea("Tisy", "1259 0 14747", "2506 0 13885", AmbientTimeOfDay.BOTH, {"DS_AmbientMusic_07_SoundSet"}));
            m_AmbientAreas.Insert(new AmbientArea("NWAF", "3145 0 11857", "5290 0 9438", AmbientTimeOfDay.BOTH, {"DS_AmbientMusic_08_SoundSet", "DS_AmbientMusic_10_SoundSet"}));
        }
        else if (DSSCoreStatics.GetWorldName() == "sakhal")
        {
            m_AmbientAreas.Insert(new AmbientArea("NWAF", "105 0 6405", "9090 0 0", AmbientTimeOfDay.BOTH, {"DS_AmbientMusic_17_SoundSet", "DS_AmbientMusic_07_SoundSet", "DS_AmbientMusic_08_SoundSet", "DS_AmbientMusic_10_SoundSet"}));
        } 
        //other maps can be added here
        else {
            //Use Corner Top-Left and Corner Bottom-Right Coords
            m_AmbientAreas.Insert(new AmbientArea("place1", "4885 0 475", "7985 0 3575", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_14"}));
            m_AmbientAreas.Insert(new AmbientArea("place2", "1346 0 11164", "2646 0 12464", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_10"}));
            m_AmbientAreas.Insert(new AmbientArea("place3", "4567 0 4525", "5267 0 5225", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_11"}));
            m_AmbientAreas.Insert(new AmbientArea("place4", "6141 0 3531", "7741 0 5131", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place5", "391 0 330", "1351 0 1290", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place6", "8206 0 5430", "9286 0 6510", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place7", "2936 0 7515", "3296 0 7875", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place8", "3694 0 8800", "3894 0 9000", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place9", "2358 0 13116", "2598 0 13356", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place10", "408 0 14386", "708 0 14686", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place11", "8786 0 14744", "9106 0 15064", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place12", "12966 0 12732", "13226 0 12992", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place13", "9440 0 10020", "10340 0 10920", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place14", "13587 0 8879", "14087 0 9379", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place15", "12966 0 7294", "13566 0 7894", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place16", "8908 0 7683", "9308 0 8083", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_13"}));
            m_AmbientAreas.Insert(new AmbientArea("place17", "13426 0 3191", "14626 0 4391", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_5"}));
            m_AmbientAreas.Insert(new AmbientArea("place18", "10976 0 11698", "11876 0 12598", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_6"}));
            m_AmbientAreas.Insert(new AmbientArea("place19", "11109 0 13856", "12909 0 15656", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_7"}));
            m_AmbientAreas.Insert(new AmbientArea("place20", "249 0 15051", "579 0 15381", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_8"}));
            m_AmbientAreas.Insert(new AmbientArea("place21", "4536 0 4448", "5216 0 5128", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_12"}));
            m_AmbientAreas.Insert(new AmbientArea("place22", "2613 0 8526", "2993 0 8906", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_12"}));
            m_AmbientAreas.Insert(new AmbientArea("place23", "730 0 8844", "1010 0 9124", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_12"}));
            m_AmbientAreas.Insert(new AmbientArea("place24", "7510 0 9205", "8790 0 10485", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_12"}));
            m_AmbientAreas.Insert(new AmbientArea("place25", "11830 0 8897", "12030 0 9097", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_12"}));
            m_AmbientAreas.Insert(new AmbientArea("place26", "10846 0 6931", "11646 0 7731", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_12"}));
            m_AmbientAreas.Insert(new AmbientArea("place27", "9373 0 5807", "9653 0 6087", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_12"}));
            m_AmbientAreas.Insert(new AmbientArea("place28", "13130 0 1195", "13290 0 1355", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_12"}));
            m_AmbientAreas.Insert(new AmbientArea("place29", "14852 0 566", "14932 0 646", AmbientTimeOfDay.BOTH, {"Coffee_SoundSet_12"}));
        }
        //Global sounds
        ref array<string> daySounds = {"Coffee_SoundShader_2","Coffee_SoundShader_1","Coffee_SoundShader_9"};
        ref array<string> nightSounds = {"Coffee_SoundShader_3","Coffee_SoundShader_9"};
        
        //If you want to remove the original global music, uncomment the following two lines
        DaySoundSets.Clear();
        DaySoundSets.Clear();
        
        DaySoundSets.InsertAll(daySounds);
        NightSoundSets.InsertAll(nightSounds);
    }
}
