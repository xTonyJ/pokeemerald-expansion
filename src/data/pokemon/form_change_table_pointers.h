const struct Fusion *const gFusionTablePointers[NUM_SPECIES] =
{
#if P_GEN_4_POKEMON == TRUE
    [SPECIES_DIALGA] = sDialgaFormChangeTable,
    [SPECIES_DIALGA_ORIGIN] = sDialgaFormChangeTable,
    [SPECIES_PALKIA] = sPalkiaFormChangeTable,
    [SPECIES_PALKIA_ORIGIN] = sPalkiaFormChangeTable,
    [SPECIES_GIRATINA] = sGiratinaFormChangeTable,
    [SPECIES_GIRATINA_ORIGIN] = sGiratinaFormChangeTable,
    [SPECIES_SHAYMIN] = sShayminFormChangeTable,
    [SPECIES_SHAYMIN_SKY] = sShayminFormChangeTable,
    [SPECIES_ARCEUS] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_FIGHTING] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_FLYING] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_POISON] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_ROCK] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_GROUND] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_BUG] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_GHOST] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_STEEL] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_FIRE] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_WATER] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_GRASS] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_ELECTRIC] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_PSYCHIC] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_ICE] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_DRAGON] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_DARK] = sArceusFormChangeTable,
    [SPECIES_ARCEUS_FAIRY] = sArceusFormChangeTable,
    [SPECIES_ROTOM] = sRotomFormChangeTable,
    [SPECIES_ROTOM_FAN] = sRotomFanFormChangeTable,
    [SPECIES_ROTOM_FROST] = sRotomFrostFormChangeTable,
    [SPECIES_ROTOM_HEAT] = sRotomHeatFormChangeTable,
    [SPECIES_ROTOM_MOW] = sRotomMowFormChangeTable,
    [SPECIES_ROTOM_WASH] = sRotomWashFormChangeTable,
#endif
#if P_GEN_5_POKEMON == TRUE
    [SPECIES_TORNADUS] = sTornadusFormChangeTable,
    [SPECIES_TORNADUS_THERIAN] = sTornadusFormChangeTable,
    [SPECIES_THUNDURUS] = sThundurusFormChangeTable,
    [SPECIES_THUNDURUS_THERIAN] = sThundurusFormChangeTable,
    [SPECIES_LANDORUS] = sLandorusFormChangeTable,
    [SPECIES_LANDORUS_THERIAN] = sLandorusFormChangeTable,
    [SPECIES_KELDEO] = sKeldeoFormChangeTable,
    [SPECIES_KELDEO_RESOLUTE] = sKeldeoFormChangeTable,
    [SPECIES_GENESECT] = sGenesectFormChangeTable,
    [SPECIES_GENESECT_DOUSE_DRIVE] = sGenesectFormChangeTable,
    [SPECIES_GENESECT_SHOCK_DRIVE] = sGenesectFormChangeTable,
    [SPECIES_GENESECT_BURN_DRIVE] = sGenesectFormChangeTable,
    [SPECIES_GENESECT_CHILL_DRIVE] = sGenesectFormChangeTable,
#endif
#if P_GEN_6_POKEMON == TRUE
    [SPECIES_XERNEAS] = sXerneasFormChangeTable,
    [SPECIES_XERNEAS_ACTIVE] = sXerneasFormChangeTable,
    [SPECIES_HOOPA] = sHoopaFormChangeTable,
    [SPECIES_HOOPA_UNBOUND] = sHoopaFormChangeTable,
#endif
#if P_GEN_7_POKEMON == TRUE
    [SPECIES_ORICORIO] = sOricorioFormChangeTable,
    [SPECIES_ORICORIO_POM_POM] = sOricorioFormChangeTable,
    [SPECIES_ORICORIO_PAU] = sOricorioFormChangeTable,
    [SPECIES_ORICORIO_SENSU] = sOricorioFormChangeTable,
    [SPECIES_SILVALLY] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_BUG] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_DARK] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_DRAGON] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_ELECTRIC] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_FAIRY] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_FIGHTING] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_FIRE] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_FLYING] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_GHOST] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_GRASS] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_GROUND] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_ICE] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_POISON] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_PSYCHIC] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_ROCK] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_STEEL] = sSilvallyFormChangeTable,
    [SPECIES_SILVALLY_WATER] = sSilvallyFormChangeTable,
#endif
#if P_GEN_8_POKEMON == TRUE
    [SPECIES_ZACIAN] = sZacianFormChangeTable,
    [SPECIES_ZACIAN_CROWNED_SWORD] = sZacianFormChangeTable,
    [SPECIES_ZAMAZENTA] = sZamazentaFormChangeTable,
    [SPECIES_ZAMAZENTA_CROWNED_SHIELD] = sZamazentaFormChangeTable,
    [SPECIES_ENAMORUS] = sEnamorusFormChangeTable,
    [SPECIES_ENAMORUS_THERIAN] = sEnamorusFormChangeTable,
#endif
#if P_FUSION_FORMS
#if P_FAMILY_KYUREM
    [SPECIES_KYUREM] = sKyuremFusionTable,
#if P_FAMILY_RESHIRAM
    [SPECIES_KYUREM_WHITE] = sKyuremFusionTable,
    [SPECIES_RESHIRAM] = sKyuremFusionTable,
#endif //P_FAMILY_RESHIRAM
#if P_FAMILY_ZEKROM
    [SPECIES_KYUREM_BLACK] = sKyuremFusionTable,
    [SPECIES_ZEKROM] = sKyuremFusionTable,
#endif //P_FAMILY_ZEKROM
#endif //P_FAMILY_KYUREM
#if P_FAMILY_NECROZMA
    [SPECIES_NECROZMA] = sNecrozmaFusionTable,
#if P_FAMILY_COSMOG
    [SPECIES_NECROZMA_DAWN_WINGS] = sNecrozmaFusionTable,
    [SPECIES_SOLGALEO] = sNecrozmaFusionTable,
    [SPECIES_NECROZMA_DUSK_MANE] = sNecrozmaFusionTable,
    [SPECIES_LUNALA] = sNecrozmaFusionTable,
#endif //P_FAMILY_COSMOG
#endif //P_FAMILY_NECROZMA
#if P_FAMILY_CALYREX
    [SPECIES_CALYREX] = sCalyrexFusionTable,
#if P_FAMILY_SPECTRIER
    [SPECIES_CALYREX_SHADOW_RIDER] = sCalyrexFusionTable,
    [SPECIES_SPECTRIER] = sCalyrexFusionTable,
#endif //P_FAMILY_SPECTRIER
#if P_FAMILY_GLASTRIER
    [SPECIES_CALYREX_ICE_RIDER] = sCalyrexFusionTable,
    [SPECIES_GLASTRIER] = sCalyrexFusionTable,
#endif //P_FAMILY_GLASTRIER
#endif //P_FAMILY_CALYREX
#endif //P_FUSION_FORMS
};
