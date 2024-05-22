/*static const u8 sDummyDesc[] COMPOUND_STRING(
    "?????");

// Poké Balls
static const u8 sPokeBallDesc[] COMPOUND_STRING(
    "A tool used for\n"
    "catching wild\n"
    "Pokémon.");

static const u8 sGreatBallDesc[] COMPOUND_STRING(
    "A good Ball with a\n"
    "higher catch rate\n"
    "than a Poké Ball.");

static const u8 sUltraBallDesc[] COMPOUND_STRING(
    "A better Ball with\n"
    "a higher catch rate\n"
    "than a Great Ball.");

static const u8 sMasterBallDesc[] COMPOUND_STRING(
    "The best Ball that\n"
    "catches a Pokémon\n"
    "without fail.");

static const u8 sPremierBallDesc[] COMPOUND_STRING(
    "A rare Ball made\n"
    "in commemoration\n"
    "of some event.");

static const u8 sHealBallDesc[] COMPOUND_STRING(
    "A remedial Ball\n"
    "that restores\n"
    "caught Pokémon.");

static const u8 sNetBallDesc[] COMPOUND_STRING(
    "A Ball that works\n"
    "well on Water- and\n"
    "Bug-type Pokémon.");

static const u8 sNestBallDesc[] COMPOUND_STRING(
    "A Ball that works\n"
    "better on weaker\n"
    "Pokémon.");

static const u8 sDiveBallDesc[] COMPOUND_STRING(
    "A Ball that works\n"
    "better on Pokémon\n"
    "on the ocean floor.");

static const u8 sDuskBallDesc[] COMPOUND_STRING(
    "Works well if\n"
    "used in a\n"
    "dark place.");

static const u8 sTimerBallDesc[] COMPOUND_STRING(
    "A Ball that gains\n"
    "power in battles\n"
    "taking many turns.");

static const u8 sQuickBallDesc[] COMPOUND_STRING(
    "Works well if\n"
    "used on the\n"
    "first turn.");

static const u8 sRepeatBallDesc[] COMPOUND_STRING(
    "A Ball that works\n"
    "better on Pokémon\n"
    "caught before.");

static const u8 sLuxuryBallDesc[] COMPOUND_STRING(
    "A cozy Ball that\n"
    "makes Pokémon\n"
    "more friendly.");

static const u8 sLevelBallDesc[] COMPOUND_STRING(
    "A Ball that works\n"
    "well on lower\n"
    "level Pokémon.");

static const u8 sLureBallDesc[] COMPOUND_STRING(
    "A Ball that works\n"
    "well on fished\n"
    "up Pokémon.");

static const u8 sMoonBallDesc[] COMPOUND_STRING(
    "A Ball that works\n"
    "well on Moon\n"
    "Stone users.");

static const u8 sFriendBallDesc[] COMPOUND_STRING(
    "A Ball that makes\n"
    "a Pokémon friendly\n"
    "when caught.");

static const u8 sLoveBallDesc[] COMPOUND_STRING(
    "Works well on\n"
    "Pokémon of the\n"
    "opposite gender.");

static const u8 sFastBallDesc[] COMPOUND_STRING(
    "Works well on\n"
    "very fast\n"
    "Pokémon.");

static const u8 sHeavyBallDesc[] COMPOUND_STRING(
    "Works well on\n"
    "very heavy\n"
    "Pokémon.");

static const u8 sDreamBallDesc[] COMPOUND_STRING(
#if B_DREAM_BALL_MODIFIER >= GEN_8
    "A Ball that gives\n"
    "Pokémon their\n"
    "hidden ability.");
#else
    "A Poké Ball used in\n"
    "the Entree Forest.");
#endif

static const u8 sSafariBallDesc[] COMPOUND_STRING(
    "A special Ball that\n"
    "is used only in the\n"
    "Safari Zone.");

static const u8 sSportBallDesc[] COMPOUND_STRING(
    "A special Ball used\n"
    "in the Bug-Catching\n"
    "Contest.");

static const u8 sParkBallDesc[] COMPOUND_STRING(
    "A special Ball for\n"
    "the Pal Park.");

static const u8 sBeastBallDesc[] COMPOUND_STRING(
    "A Ball designed to\n"
    "catch Ultra Beasts.");

static const u8 sCherishBallDesc[] COMPOUND_STRING(
    "A rare Ball made\n"
    "in commemoration\n"
    "of some event.");

// Medicine
static const u8 sPotionDesc[] COMPOUND_STRING(
    "Restores the HP of\n"
    "a Pokémon by\n"
    "20 points.");

static const u8 sSuperPotionDesc[] COMPOUND_STRING(
    "Restores the HP of\n"
    "a Pokémon by\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "60 points.");
#else
    "50 points.");
#endif

static const u8 sHyperPotionDesc[] COMPOUND_STRING(
    "Restores the HP of\n"
    "a Pokémon by\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "120 points.");
#else
    "200 points.");
#endif

static const u8 sMaxPotionDesc[] COMPOUND_STRING(
    "Fully restores the\n"
    "HP of a Pokémon.");

static const u8 sFullRestoreDesc[] COMPOUND_STRING(
    "Fully restores the\n"
    "HP and status of a\n"
    "Pokémon.");

static const u8 sReviveDesc[] COMPOUND_STRING(
    "Revives a fainted\n"
    "Pokémon with half\n"
    "its HP.");

static const u8 sMaxReviveDesc[] COMPOUND_STRING(
    "Revives a fainted\n"
    "Pokémon with all\n"
    "its HP.");

static const u8 sFreshWaterDesc[] COMPOUND_STRING(
    "A mineral water\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 30 points.");
#else
    "by 50 points.");
#endif

static const u8 sSodaPopDesc[] COMPOUND_STRING(
    "A fizzy soda drink\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 50 points.");
#else
    "by 60 points.");
#endif

static const u8 sLemonadeDesc[] COMPOUND_STRING(
    "A very sweet drink\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 70 points.");
#else
    "by 80 points.");
#endif

static const u8 sMoomooMilkDesc[] COMPOUND_STRING(
    "A nutritious milk\n"
    "that restores HP\n"
    "by 100 points.");

static const u8 sEnergyPowderDesc[] COMPOUND_STRING(
    "A bitter powder\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 60 points.");
#else
    "by 50 points.");
#endif

static const u8 sEnergyRootDesc[] COMPOUND_STRING(
    "A bitter root\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 120 points.");
#else
    "by 200 points.");
#endif

static const u8 sHealPowderDesc[] COMPOUND_STRING(
    "A bitter powder\n"
    "that heals all\n"
    "status problems.");

static const u8 sRevivalHerbDesc[] COMPOUND_STRING(
    "A very bitter herb\n"
    "that revives a\n"
    "fainted Pokémon.");

static const u8 sAntidoteDesc[] COMPOUND_STRING(
    "Heals a poisoned\n"
    "Pokémon.");

static const u8 sParalyzeHealDesc[] COMPOUND_STRING(
    "Heals a paralyzed\n"
    "Pokémon.");

static const u8 sBurnHealDesc[] COMPOUND_STRING(
    "Heals Pokémon\n"
    "of a burn.");

static const u8 sIceHealDesc[] COMPOUND_STRING(
    "Defrosts a brittle\n"
    "Pokémon.");

static const u8 sAwakeningDesc[] COMPOUND_STRING(
    "Awakens a sleeping\n"
    "Pokémon.");

static const u8 sFullHealDesc[] COMPOUND_STRING(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sEtherDesc[] COMPOUND_STRING(
    "Restores the PP\n"
    "of a selected move\n"
    "by 10.");

static const u8 sMaxEtherDesc[] COMPOUND_STRING(
    "Fully restores the\n"
    "PP of a selected\n"
    "move.");

static const u8 sElixirDesc[] COMPOUND_STRING(
    "Restores the PP\n"
    "of all moves by 10.");

static const u8 sMaxElixirDesc[] COMPOUND_STRING(
    "Fully restores the\n"
    "PP of a Pokémon's\n"
    "moves.");

static const u8 sBerryJuiceDesc[] COMPOUND_STRING(
    "A 100% pure juice\n"
    "that restores HP\n"
    "by 20 points.");

static const u8 sSacredAshDesc[] COMPOUND_STRING(
    "Fully revives and\n"
    "restores all\n"
    "fainted Pokémon.");

static const u8 sSweetHeartDesc[] COMPOUND_STRING(
    "A sweet chocolate\n"
    "that restores HP\n"
    "by 20 points.");

static const u8 sMaxHoneyDesc[] COMPOUND_STRING(
    "Revives a fainted\n"
    "Pokémon with all\n"
    "its HP.");

static const u8 sPewterCrunchiesDesc[] COMPOUND_STRING(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sRageCandyBarDesc[] COMPOUND_STRING(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sLavaCookieDesc[] COMPOUND_STRING(
    "A local specialty\n"
    "that heals all\n"
    "status problems.");

static const u8 sOldGateauDesc[] COMPOUND_STRING(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sCasteliaconeDesc[] COMPOUND_STRING(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sLumioseGaletteDesc[] COMPOUND_STRING(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sShalourSableDesc[] COMPOUND_STRING(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sBigMalasadaDesc[] COMPOUND_STRING(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

// Vitamins
static const u8 sHPUpDesc[] COMPOUND_STRING(
    "Raises the base HP\n"
    "of one Pokémon.");

static const u8 sProteinDesc[] COMPOUND_STRING(
    "Raises the base\n"
    "Attack stat of one\n"
    "Pokémon.");

static const u8 sIronDesc[] COMPOUND_STRING(
    "Raises the base\n"
    "Defense stat of\n"
    "one Pokémon.");

static const u8 sCalciumDesc[] COMPOUND_STRING(
    "Raises the base\n"
    "Sp. Atk stat of one\n"
    "Pokémon.");

static const u8 sZincDesc[] COMPOUND_STRING(
    "Raises the base\n"
    "Sp. Def stat of one\n"
    "Pokémon.");

static const u8 sCarbosDesc[] COMPOUND_STRING(
    "Raises the base\n"
    "Speed stat of one\n"
    "Pokémon.");

static const u8 sPPUpDesc[] COMPOUND_STRING(
    "Raises the maximum\n"
    "PP of a selected\n"
    "move.");

static const u8 sPPMaxDesc[] COMPOUND_STRING(
    "Raises the PP of a\n"
    "move to its maximum\n"
    "points.");

// EV Feathers
static const u8 sHealthFeatherDesc[] COMPOUND_STRING(
    "An item that raises\n"
    "the base HP of\n"
    "a Pokémon.");

static const u8 sMuscleFeatherDesc[] COMPOUND_STRING(
    "An item that raises\n"
    "the base Attack of\n"
    "a Pokémon.");

static const u8 sResistFeatherDesc[] COMPOUND_STRING(
    "An item that raises\n"
    "the base Defense\n"
    "of a Pokémon.");

static const u8 sGeniusFeatherDesc[] COMPOUND_STRING(
    "An item that raises\n"
    "the base Sp. Atk.\n"
    "of a Pokémon.");

static const u8 sCleverFeatherDesc[] COMPOUND_STRING(
    "An item that raises\n"
    "the base Sp. Def.\n"
    "of a Pokémon.");

static const u8 sSwiftFeatherDesc[] COMPOUND_STRING(
    "An item that raises\n"
    "the base Speed of\n"
    "a Pokémon.");

// Ability Modifiers
static const u8 sAbilityCapsuleDesc[] COMPOUND_STRING(
    "Switches a Poké-\n"
    "mon's ability.");

static const u8 sAbilityPatchDesc[] COMPOUND_STRING(
    "Turns the ability\n"
    "of a Pokémon into\n"
    "a rare ability.");

// Mints
static const u8 sLonelyMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Defense.");

static const u8 sAdamantMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Sp. Atk.");

static const u8 sNaughtyMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Sp. Def.");

static const u8 sBraveMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Speed.");

static const u8 sBoldMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Attack.");

static const u8 sImpishMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Sp. Atk.");

static const u8 sLaxMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Sp. Def.");

static const u8 sRelaxedMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Speed.");

static const u8 sModestMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Attack.");

static const u8 sMildMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Defense.");

static const u8 sRashMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Sp. Def.");

static const u8 sQuietMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Speed.");

static const u8 sCalmMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Attack.");

static const u8 sGentleMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Defense.");

static const u8 sCarefulMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Sp. Atk.");

static const u8 sSassyMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Speed.");

static const u8 sTimidMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Attack.");

static const u8 sHastyMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Defense.");

static const u8 sJollyMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Sp. Atk.");

static const u8 sNaiveMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Sp. Def.");

static const u8 sSeriousMintDesc[] COMPOUND_STRING(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Attack.");

// Candy
static const u8 sRareCandyDesc[] COMPOUND_STRING(
    "Raises the level\n"
    "of a Pokémon by\n"
    "one.");

static const u8 sExpCandyXSDesc[] COMPOUND_STRING(
    "Gives a very small\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandySDesc[] COMPOUND_STRING(
    "Gives a small\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandyMDesc[] COMPOUND_STRING(
    "Gives a moderate\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandyLDesc[] COMPOUND_STRING(
    "Contains infinite\n"
    "amounts of candy.\n"
    "Use to level up!");

static const u8 sExpCandyXLDesc[] COMPOUND_STRING(
    "Gives a very large\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sDynamaxCandyDesc[] COMPOUND_STRING(
    "Raises the Dynamax\n"
    "Level of a single\n"
    "Pokémon by one.");

// Medicinal Flutes
static const u8 sBlueFluteDesc[] COMPOUND_STRING(
    "A glass flute that\n"
    "awakens sleeping\n"
    "Pokémon.");

static const u8 sYellowFluteDesc[] COMPOUND_STRING(
    "A glass flute that\n"
    "snaps Pokémon\n"
    "out of confusion.");

static const u8 sRedFluteDesc[] COMPOUND_STRING(
    "A glass flute that\n"
    "snaps Pokémon\n"
    "out of attraction.");

// Encounter-modifying Flutes
static const u8 sBlackFluteDesc[] COMPOUND_STRING(
    "A glass flute that\n"
    "keeps away wild\n"
    "Pokémon.");

static const u8 sWhiteFluteDesc[] COMPOUND_STRING(
    "A glass flute that\n"
    "lures wild Pokémon.");

// Encounter Modifiers
static const u8 sRepelDesc[] COMPOUND_STRING(
    "Repels weak wild\n"
    "Pokémon for 100\n"
    "steps.");

static const u8 sSuperRepelDesc[] COMPOUND_STRING(
    "Repels weak wild\n"
    "Pokémon for 200\n"
    "steps.");

static const u8 sMaxRepelDesc[] COMPOUND_STRING(
    "Repels weak wild\n"
    "Pokémon for 250\n"
    "steps.");

static const u8 sLureDesc[] COMPOUND_STRING(
    "Makes Pokémon more\n"
    "likely to appear\n"
    "for 100 steps.");

static const u8 sSuperLureDesc[] COMPOUND_STRING(
    "Makes Pokémon more\n"
    "likely to appear\n"
    "for 200 steps.");

static const u8 sMaxLureDesc[] COMPOUND_STRING(
    "Makes Pokémon more\n"
    "likely to appear\n"
    "for 250 steps.");

static const u8 sEscapeRopeDesc[] COMPOUND_STRING(
    "Use to escape\n"
    "instantly from a\n"
    "cave or a dungeon.");

// Battle items
static const u8 sXAttackDesc[] COMPOUND_STRING(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Attack during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Attack during one\n"
    "battle.");
#endif

static const u8 sXDefenseDesc[] COMPOUND_STRING(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Defense during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Defense during one\n"
    "battle.");
#endif

static const u8 sXSpAtkDesc[] COMPOUND_STRING(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Sp. Atk during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Sp. Atk during one\n"
    "battle.");
#endif

static const u8 sXSpDefDesc[] COMPOUND_STRING(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Sp. Def during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Sp. Def during one\n"
    "battle.");
#endif

static const u8 sXSpeedDesc[] COMPOUND_STRING(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Speed during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Speed during one\n"
    "battle.");
#endif

static const u8 sXAccuracyDesc[] COMPOUND_STRING(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises move\n"
    "accuracy during\n"
    "one battle.");
#else
    "Raises accuracy\n"
    "of attack moves\n"
    "during one battle.");
#endif

static const u8 sDireHitDesc[] COMPOUND_STRING(
    "Raises the\n"
    "critical-hit ratio\n"
    "during one battle.");

static const u8 sGuardSpecDesc[] COMPOUND_STRING(
    "Prevents stat\n"
    "reduction when\n"
    "used in battle.");

// Escape Items
static const u8 sPokeDollDesc[] COMPOUND_STRING(
    "Use to flee from\n"
    "any battle with\n"
    "a wild Pokémon.");

static const u8 sFluffyTailDesc[] COMPOUND_STRING(
    "Use to flee from\n"
    "any battle with\n"
    "a wild Pokémon.");

static const u8 sPokeToyDesc[] COMPOUND_STRING(
    "Use to flee from\n"
    "any battle with\n"
    "a wild Pokémon.");

static const u8 sMaxMushroomsDesc[] COMPOUND_STRING(
    "Raises every stat\n"
    "during one battle\n"
    "by one stage.");

// Treasures
static const u8 sBottleCapDesc[] COMPOUND_STRING(
    "A beautiful bottle\n"
    "cap that gives off\n"
    "a silver gleam.");

static const u8 sGoldBottleCapDesc[] COMPOUND_STRING(
    "A beautiful bottle\n"
    "cap that gives off\n"
    "a golden gleam.");

static const u8 sNuggetDesc[] COMPOUND_STRING(
    "A nugget of pure\n"
    "gold. Can be sold at\n"
    "a high price.");

static const u8 sBigNuggetDesc[] COMPOUND_STRING(
    "A big nugget made\n"
    "of gold, sellable\n"
    "at a high price.");

static const u8 sTinyMushroomDesc[] COMPOUND_STRING(
    "A plain mushroom\n"
    "that would sell\n"
    "at a cheap price.");

static const u8 sBigMushroomDesc[] COMPOUND_STRING(
    "A rare mushroom\n"
    "that would sell at a\n"
    "high price.");

static const u8 sBalmMushroomDesc[] COMPOUND_STRING(
    "A rare mushroom\n"
    "that would sell at a\n"
    "high price.");

static const u8 sPearlDesc[] COMPOUND_STRING(
    "A pretty pearl\n"
    "that would sell at a\n"
    "cheap price.");

static const u8 sBigPearlDesc[] COMPOUND_STRING(
    "A lovely large pearl\n"
    "that would sell at a\n"
    "high price.");

static const u8 sPearlStringDesc[] COMPOUND_STRING(
    "Very large pearls\n"
    "that would sell at a\n"
    "high price.");

static const u8 sStardustDesc[] COMPOUND_STRING(
    "Beautiful red sand.\n"
    "Can be sold at a\n"
    "high price.");

static const u8 sStarPieceDesc[] COMPOUND_STRING(
    "A red gem shard.\n"
    "It would sell for a\n"
    "very high price.");

static const u8 sCometShardDesc[] COMPOUND_STRING(
    "A comet's shard.\n"
    "It would sell for a\n"
    "high price.");

static const u8 sShoalSaltDesc[] COMPOUND_STRING(
    "Salt obtained from\n"
    "deep inside the\n"
    "Shoal Cave.");

static const u8 sShoalShellDesc[] COMPOUND_STRING(
    "A seashell found\n"
    "deep inside the\n"
    "Shoal Cave.");

static const u8 sRedShardDesc[] COMPOUND_STRING(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sBlueShardDesc[] COMPOUND_STRING(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sYellowShardDesc[] COMPOUND_STRING(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sGreenShardDesc[] COMPOUND_STRING(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sHeartScaleDesc[] COMPOUND_STRING(
    "A lovely scale.\n"
    "It is coveted by\n"
    "collectors.");

static const u8 sHoneyDesc[] COMPOUND_STRING(
    "Sweet honey that\n"
    "attracts wild\n"
    "Pokémon when used.");

static const u8 sRareBoneDesc[] COMPOUND_STRING(
    "A very rare bone.\n"
    "It can be sold at\n"
    "a high price.");

static const u8 sOddKeystoneDesc[] COMPOUND_STRING(
    "Voices can be heard\n"
    "from this odd stone\n"
    "occasionally.");

static const u8 sPrettyFeatherDesc[] COMPOUND_STRING(
    "A beautiful yet\n"
    "plain feather that\n"
    "does nothing.");

static const u8 sRelicCopperDesc[] COMPOUND_STRING(
    "A copper coin used\n"
    "long ago. It sells\n"
    "at a high price.");

static const u8 sRelicSilverDesc[] COMPOUND_STRING(
    "A silver coin used\n"
    "long ago. It sells\n"
    "at a high price.");

static const u8 sRelicGoldDesc[] COMPOUND_STRING(
    "A gold coin used\n"
    "long ago. It sells\n"
    "at a high price.");

static const u8 sRelicVaseDesc[] COMPOUND_STRING(
    "A vase made long\n"
    "ago. It sells at\n"
    "a high price.");

static const u8 sRelicBandDesc[] COMPOUND_STRING(
    "An old bracelet.\n"
    "It sells at a\n"
    "high price.");

static const u8 sRelicStatueDesc[] COMPOUND_STRING(
    "An old statue.\n"
    "It sells at a\n"
    "high price.");

static const u8 sRelicCrownDesc[] COMPOUND_STRING(
    "An old crown.\n"
    "It sells at a\n"
    "high price.");

static const u8 sStrangeSouvenirDesc[] COMPOUND_STRING(
    "An ornament that\n"
    "depicts a Pokémon\n"
    "from Alola.");

// Fossils
static const u8 sHelixFossilDesc[] COMPOUND_STRING(
    "A piece of an\n"
    "ancient marine\n"
    "Pokémon's seashell.");

static const u8 sDomeFossilDesc[] COMPOUND_STRING(
    "A piece of an\n"
    "ancient marine\n"
    "Pokémon's shell.");

static const u8 sOldAmberDesc[] COMPOUND_STRING(
    "A stone containing\n"
    "the genes of an\n"
    "ancient Pokémon.");

static const u8 sRootFossilDesc[] COMPOUND_STRING(
    "A fossil of an\n"
    "ancient, seafloor-\n"
    "dwelling Pokémon.");

static const u8 sClawFossilDesc[] COMPOUND_STRING(
    "A fossil of an\n"
    "ancient, seafloor-\n"
    "dwelling Pokémon.");

static const u8 sArmorFossilDesc[] COMPOUND_STRING(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's head.");

static const u8 sSkullFossilDesc[] COMPOUND_STRING(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's head.");

static const u8 sCoverFossilDesc[] COMPOUND_STRING(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's back.");

static const u8 sPlumeFossilDesc[] COMPOUND_STRING(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's wing.");

static const u8 sJawFossilDesc[] COMPOUND_STRING(
    "A piece of a prehis-\n"
    "toric Pokémon's\n"
    "large jaw.");

static const u8 sSailFossilDesc[] COMPOUND_STRING(
    "A piece of a prehis-\n"
    "toric Pokémon's\n"
    "skin sail.");

static const u8 sFossilizedBirdDesc[] COMPOUND_STRING(
    "A fossil of an\n"
    "ancient, sky-\n"
    "soaring Pokémon.");

static const u8 sFossilizedFishDesc[] COMPOUND_STRING(
    "A fossil of an\n"
    "ancient, sea-\n"
    "dwelling Pokémon.");

static const u8 sFossilizedDrakeDesc[] COMPOUND_STRING(
    "A fossil of an\n"
    "ancient, land-\n"
    "roaming Pokémon.");

static const u8 sFossilizedDinoDesc[] COMPOUND_STRING(
    "A fossil of an\n"
    "ancient, sea-\n"
    "dwelling Pokémon.");

// Mulch
static const u8 sGrowthMulchDesc[] COMPOUND_STRING(
    "A fertilizer that\n"
    "accelerates the\n"
    "growth of Berries.");

static const u8 sDampMulchDesc[] COMPOUND_STRING(
    "A fertilizer that\n"
    "decelerates the\n"
    "growth of Berries.");

static const u8 sStableMulchDesc[] COMPOUND_STRING(
    "A fertilizer that\n"
    "ups the life time\n"
    "of Berry trees.");

static const u8 sGooeyMulchDesc[] COMPOUND_STRING(
    "A fertilizer that\n"
    "makes more Berries\n"
    "regrow after fall.");

static const u8 sRichMulchDesc[] COMPOUND_STRING(
    "A fertilizer that\n"
    "ups the number of\n"
    "Berries harvested.");

static const u8 sSurpriseMulchDesc[] COMPOUND_STRING(
    "A fertilizer that\n"
    "ups the chance of\n"
    "Berry mutations.");

static const u8 sBoostMulchDesc[] COMPOUND_STRING(
    "A fertilizer that\n"
    "ups the dry speed\n"
    "of soft soil.");

static const u8 sAmazeMulchDesc[] COMPOUND_STRING(
    "A fertilizer Rich\n"
    "Surprising and\n"
    "Boosting as well.");

// Apricorns
static const u8 sRedApricornDesc[] COMPOUND_STRING(
    "A red apricorn.\n"
    "It assails your\n"
    "nostrils.");

static const u8 sBlueApricornDesc[] COMPOUND_STRING(
    "A blue apricorn.\n"
    "It smells a bit\n"
    "like grass.");

static const u8 sYellowApricornDesc[] COMPOUND_STRING(
    "A yellow apricorn.\n"
    "It has an invigor-\n"
    "ating scent.");

static const u8 sGreenApricornDesc[] COMPOUND_STRING(
    "A green apricorn.\n"
    "It has a strange,\n"
    "aromatic scent.");

static const u8 sPinkApricornDesc[] COMPOUND_STRING(
    "A pink apricorn.\n"
    "It has a nice,\n"
    "sweet scent.");

static const u8 sWhiteApricornDesc[] COMPOUND_STRING(
    "A white apricorn.\n"
    "It doesn't smell\n"
    "like anything.");

static const u8 sBlackApricornDesc[] COMPOUND_STRING(
    "A black apricorn.\n"
    "It has an inde-\n"
    "scribable scent.");

static const u8 sWishingPieceDesc[] COMPOUND_STRING(
    "Throw into a\n"
    "{PKMN} Den to attract\n"
    "Dynamax Pokémon.");

static const u8 sGalaricaTwigDesc[] COMPOUND_STRING(
    "A twig from a tree\n"
    "in Galar called\n"
    "Galarica.");

static const u8 sArmoriteOreDesc[] COMPOUND_STRING(
    "A rare ore. Can be\n"
    "found in the Isle\n"
    "of Armor at Galar.");

static const u8 sDyniteOreDesc[] COMPOUND_STRING(
    "A mysterious ore.\n"
    "It can be found in\n"
    "Galar's Max Lair.");

// Mail
static const u8 sOrangeMailDesc[] COMPOUND_STRING(
    "A Zigzagoon-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sHarborMailDesc[] COMPOUND_STRING(
    "A Wingull-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sGlitterMailDesc[] COMPOUND_STRING(
    "A Pikachu-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sMechMailDesc[] COMPOUND_STRING(
    "A Magnemite-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sWoodMailDesc[] COMPOUND_STRING(
    "A Slakoth-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sWaveMailDesc[] COMPOUND_STRING(
    "A Wailmer-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sBeadMailDesc[] COMPOUND_STRING(
    "Mail featuring a\n"
    "sketch of the\n"
    "holding Pokémon.");

static const u8 sShadowMailDesc[] COMPOUND_STRING(
    "A Duskull-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sTropicMailDesc[] COMPOUND_STRING(
    "A Bellossom-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sDreamMailDesc[] COMPOUND_STRING(
    "Mail featuring a\n"
    "sketch of the\n"
    "holding Pokémon.");

static const u8 sFabMailDesc[] COMPOUND_STRING(
    "A gorgeous-print\n"
    "Mail to be held\n"
    "by a Pokémon.");

static const u8 sRetroMailDesc[] COMPOUND_STRING(
    "Mail featuring the\n"
    "drawings of three\n"
    "Pokémon.");

// Evolution Items
static const u8 sFireStoneDesc[] COMPOUND_STRING(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sWaterStoneDesc[] COMPOUND_STRING(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sThunderStoneDesc[] COMPOUND_STRING(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sLeafStoneDesc[] COMPOUND_STRING(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sIceStoneDesc[] COMPOUND_STRING(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sSunStoneDesc[] COMPOUND_STRING(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sMoonStoneDesc[] COMPOUND_STRING(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sShinyStoneDesc[] COMPOUND_STRING(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sDuskStoneDesc[] COMPOUND_STRING(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sDawnStoneDesc[] COMPOUND_STRING(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sSweetAppleDesc[] COMPOUND_STRING(
    "A very sweet apple\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sTartAppleDesc[] COMPOUND_STRING(
    "A very tart apple\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sCrackedPotDesc[] COMPOUND_STRING(
    "A cracked teapot\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sChippedPotDesc[] COMPOUND_STRING(
    "A chipped teapot\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sGalaricaCuffDesc[] COMPOUND_STRING(
    "A cuff from Galar\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sGalaricaWreathDesc[] COMPOUND_STRING(
    "A wreath made in\n"
    "Galar. Makes some\n"
    "Pokémon evolve.");

static const u8 sDragonScaleDesc[] COMPOUND_STRING(
    "A strange scale\n"
    "held by Dragon-\n"
    "type Pokémon.");

static const u8 sUpgradeDesc[] COMPOUND_STRING(
    "A peculiar box made\n"
    "by Silph Co.");

static const u8 sProtectorDesc[] COMPOUND_STRING(
    "Loved by a certain\n"
    "Pokémon. It's stiff\n"
    "and heavy.");

static const u8 sElectirizerDesc[] COMPOUND_STRING(
    "Loved by a certain\n"
    "Pokémon. It's full\n"
    "of electric energy.");

static const u8 sMagmarizerDesc[] COMPOUND_STRING(
    "Loved by a certain\n"
    "Pokémon. It's full\n"
    "of magma energy.");

static const u8 sDubiousDiscDesc[] COMPOUND_STRING(
    "A transparent device\n"
    "overflowing with\n"
    "dubious data.");

static const u8 sReaperClothDesc[] COMPOUND_STRING(
    "Loved by a certain\n"
    "Pokémon. Imbued with\n"
    "spiritual energy.");

static const u8 sPrismScaleDesc[] COMPOUND_STRING(
    "A mysterious scale\n"
    "that evolves certain\n"
    "Pokémon. It shines.");

static const u8 sWhippedDreamDesc[] COMPOUND_STRING(
    "A soft and sweet\n"
    "treat loved by\n"
    "a certain Pokémon.");

static const u8 sSachetDesc[] COMPOUND_STRING(
    "A sachet filled with\n"
    "perfumes loved by\n"
    "a certain Pokémon.");

static const u8 sOvalStoneDesc[] COMPOUND_STRING(
    "Makes a certain\n"
    "Pokémon evolve. It's\n"
    "shaped like an egg.");

static const u8 sStrawberrySweetDesc[] COMPOUND_STRING(
    "Strawberry-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sLoveSweetDesc[] COMPOUND_STRING(
    "A heart-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sBerrySweetDesc[] COMPOUND_STRING(
    "A berry-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sCloverSweetDesc[] COMPOUND_STRING(
    "A clover-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sFlowerSweetDesc[] COMPOUND_STRING(
    "A flower-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sStarSweetDesc[] COMPOUND_STRING(
    "A star-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sRibbonSweetDesc[] COMPOUND_STRING(
    "A ribbon-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sEverstoneDesc[] COMPOUND_STRING(
    "A wondrous hold\n"
    "item that prevents\n"
    "evolution.");

static const u8 sBlackAuguriteDesc[] COMPOUND_STRING(
    "A black stone that\n"
    "makes some Pokémon\n"
    "evolve.");;

static const u8 sLinkingCordDesc[] COMPOUND_STRING(
    "A mysterious string\n"
    "that makes some\n"
    "Pokémon evolve.");

static const u8 sPeatBlockDesc[] COMPOUND_STRING(
    "A block of material\n"
    "that makes some\n"
    "Pokémon evolve.");

// Nectars
static const u8 sRedNectarDesc[] COMPOUND_STRING(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sYellowNectarDesc[] COMPOUND_STRING(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sPinkNectarDesc[] COMPOUND_STRING(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sPurpleNectarDesc[] COMPOUND_STRING(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

// Plates
static const u8 sFlamePlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Fire-type moves.");

static const u8 sSplashPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Water-type moves.");

static const u8 sZapPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of Elec-\n"
    "tric-type moves.");

static const u8 sMeadowPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Grass-type moves.");

static const u8 sIciclePlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Ice-type moves.");

static const u8 sFistPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of Fight-\n"
    "ing-type moves.");

static const u8 sToxicPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Poison-type moves.");

static const u8 sEarthPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Ground-type moves.");

static const u8 sSkyPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Flying-type moves.");

static const u8 sMindPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of Psy\n"
    "chic-type moves.");

static const u8 sInsectPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Bug-type moves.");

static const u8 sStonePlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Rock-type moves.");

static const u8 sSpookyPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Ghost-type moves.");

static const u8 sDracoPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Dragon-type moves.");

static const u8 sDreadPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Dark-type moves.");

static const u8 sIronPlateDesc[] COMPOUND_STRING(
    "A tablet that ups\n"
    "the power of\n"
    "Steel-type moves.");

static const u8 sPixiePlateDesc[] COMPOUND_STRING(
    "A stone tablet that\n"
    "boosts the power of\n"
    "Fairy-type moves.");

// Drives
static const u8 sDouseDriveDesc[] COMPOUND_STRING(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Water-type.");

static const u8 sShockDriveDesc[] COMPOUND_STRING(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Electric-type.");

static const u8 sBurnDriveDesc[] COMPOUND_STRING(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Fire-type.");

static const u8 sChillDriveDesc[] COMPOUND_STRING(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Ice-type.");

// Memories
static const u8 sFireMemoryDesc[] COMPOUND_STRING(
    "A disc with Fire\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sWaterMemoryDesc[] COMPOUND_STRING(
    "A disc with Water\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sElectricMemoryDesc[] COMPOUND_STRING(
    "A disc with Electric\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGrassMemoryDesc[] COMPOUND_STRING(
    "A disc with Grass\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sIceMemoryDesc[] COMPOUND_STRING(
    "A disc with Ice\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFightingMemoryDesc[] COMPOUND_STRING(
    "A disc with Fighting\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sPoisonMemoryDesc[] COMPOUND_STRING(
    "A disc with Poison\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGroundMemoryDesc[] COMPOUND_STRING(
    "A disc with Ground\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFlyingMemoryDesc[] COMPOUND_STRING(
    "A disc with Flying\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sPsychicMemoryDesc[] COMPOUND_STRING(
    "A disc with Psychic\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sBugMemoryDesc[] COMPOUND_STRING(
    "A disc with Bug\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sRockMemoryDesc[] COMPOUND_STRING(
    "A disc with Rock\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGhostMemoryDesc[] COMPOUND_STRING(
    "A disc with Ghost\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sDragonMemoryDesc[] COMPOUND_STRING(
    "A disc with Dragon\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sDarkMemoryDesc[] COMPOUND_STRING(
    "A disc with Dark\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sSteelMemoryDesc[] COMPOUND_STRING(
    "A disc with Steel\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFairyMemoryDesc[] COMPOUND_STRING(
    "A disc with Fairy\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sRustedSwordDesc[] COMPOUND_STRING(
    "A rusty sword. A\n"
    "hero used it to\n"
    "halt a disaster.");

static const u8 sRustedShieldDesc[] COMPOUND_STRING(
    "A rusty shield. A\n"
    "hero used it to\n"
    "halt a disaster.");

// Colored Orbs
static const u8 sRedOrbDesc[] COMPOUND_STRING(
    "A red, glowing orb\n"
    "said to contain an\n"
    "ancient power.");

static const u8 sBlueOrbDesc[] COMPOUND_STRING(
    "A blue, glowing orb\n"
    "said to contain an\n"
    "ancient power.");

// Mega Stones
static const u8 sVenusauriteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Venusaur to Mega\n"
    "Evolve in battle.");

static const u8 sCharizarditeDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Charizard to Mega\n"
    "Evolve in battle.");

static const u8 sBlastoisiniteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Blastoise to Mega\n"
    "Evolve in battle.");

static const u8 sBeedrilliteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Beedrill to Mega\n"
    "Evolve in battle.");

static const u8 sPidgeotiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Pidgeot to Mega\n"
    "Evolve in battle.");

static const u8 sAlakaziteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Alakazam to Mega\n"
    "Evolve in battle.");

static const u8 sSlowbroniteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Slowbro to Mega\n"
    "Evolve in battle.");

static const u8 sGengariteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Gengar to Mega\n"
    "Evolve in battle.");

static const u8 sKangaskhaniteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Kangaskhan to Mega\n"
    "Evolve in battle.");

static const u8 sPinsiriteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Pinsir to Mega\n"
    "Evolve in battle.");

static const u8 sGyaradositeDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Gyarados to Mega\n"
    "Evolve in battle.");

static const u8 sAerodactyliteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Aerodactyl to Mega\n"
    "Evolve in battle.");

static const u8 sMewtwoniteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Mewtwo to Mega\n"
    "Evolve in battle.");

static const u8 sAmpharositeDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Ampharos to Mega\n"
    "Evolve in battle.");

static const u8 sSteelixiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Steelix to Mega\n"
    "Evolve in battle.");

static const u8 sScizoriteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Scizor to Mega\n"
    "Evolve in battle.");

static const u8 sHeracroniteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Heracross to Mega\n"
    "Evolve in battle.");

static const u8 sHoundoominiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Houndoom to Mega\n"
    "Evolve in battle.");

static const u8 sTyranitariteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Tyranitar to Mega\n"
    "Evolve in battle.");

static const u8 sSceptiliteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Sceptile to Mega\n"
    "Evolve in battle.");

static const u8 sBlazikeniteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Blaziken to Mega\n"
    "Evolve in battle.");

static const u8 sSwampertiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Swampert to Mega\n"
    "Evolve in battle.");

static const u8 sGardevoiriteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Gardevoir to Mega\n"
    "Evolve in battle.");

static const u8 sSableniteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Sableye to Mega\n"
    "Evolve in battle.");

static const u8 sMawiliteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Mawile to Mega\n"
    "Evolve in battle.");

static const u8 sAggroniteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Aggron to Mega\n"
    "Evolve in battle.");

static const u8 sMedichamiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Medicham to Mega\n"
    "Evolve in battle.");

static const u8 sManectiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Manectric to Mega\n"
    "Evolve in battle.");

static const u8 sSharpedoniteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Sharpedo to Mega\n"
    "Evolve in battle.");

static const u8 sCameruptiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Camerupt to Mega\n"
    "Evolve in battle.");

static const u8 sAltarianiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Altaria to Mega\n"
    "Evolve in battle.");

static const u8 sBanettiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Banette to Mega\n"
    "Evolve in battle.");

static const u8 sAbsoliteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Absol to Mega\n"
    "Evolve in battle.");

static const u8 sGlalititeDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Glalie to Mega\n"
    "Evolve in battle.");

static const u8 sSalamenciteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Salamence to Mega\n"
    "Evolve in battle.");

static const u8 sMetagrossiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Metagross to Mega\n"
    "Evolve in battle.");

static const u8 sLatiasiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Latias to Mega\n"
    "Evolve in battle.");

static const u8 sLatiositeDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Latios to Mega\n"
    "Evolve in battle.");

static const u8 sLopunniteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Lopunny to Mega\n"
    "Evolve in battle.");

static const u8 sGarchompiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Garchomp to Mega\n"
    "Evolve in battle.");

static const u8 sLucarioniteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Lucario to Mega\n"
    "Evolve in battle.");

static const u8 sAbomasiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Abomasnow to Mega\n"
    "Evolve in battle.");

static const u8 sGalladiteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Gallade to Mega\n"
    "Evolve in battle.");

static const u8 sAudiniteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Audino to Mega\n"
    "Evolve in battle.");

static const u8 sDianciteDesc[] COMPOUND_STRING(
    "This stone enables\n"
    "Diancie to Mega\n"
    "Evolve in battle.");

// Gems
static const u8 sNormalGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Normal\n"
    "Type moves.");

static const u8 sFireGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Fire\n"
    "Type moves.");

static const u8 sWaterGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Water\n"
    "Type moves.");

static const u8 sElectricGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Electric\n"
    "Type moves.");

static const u8 sGrassGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Grass\n"
    "Type moves.");

static const u8 sIceGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Ice\n"
    "Type moves.");

static const u8 sFightingGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Fighting\n"
    "Type moves.");

static const u8 sPoisonGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Poison\n"
    "Type moves.");

static const u8 sGroundGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Ground\n"
    "Type moves.");

static const u8 sFlyingGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Flying\n"
    "Type moves.");

static const u8 sPsychicGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Psychic\n"
    "Type moves.");

static const u8 sBugGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Bug\n"
    "Type moves.");

static const u8 sRockGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Rock\n"
    "Type moves.");

static const u8 sGhostGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Ghost\n"
    "Type moves.");

static const u8 sDragonGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Dragon\n"
    "Type moves.");

static const u8 sDarkGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Dark\n"
    "Type moves.");

static const u8 sSteelGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Steel\n"
    "Type moves.");

static const u8 sFairyGemDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of Fairy\n"
    "Type moves.");

// Z-Crystals
static const u8 sNormaliumZDesc[] COMPOUND_STRING(
    "Upgrade Normal-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFiriumZDesc[] COMPOUND_STRING(
    "Upgrade Fire-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sWateriumZDesc[] COMPOUND_STRING(
    "Upgrade Water-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sElectriumZDesc[] COMPOUND_STRING(
    "Upgrade Electric-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sGrassiumZDesc[] COMPOUND_STRING(
    "Upgrade Grass-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sIciumZDesc[] COMPOUND_STRING(
    "Upgrade Ice-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFightiniumZDesc[] COMPOUND_STRING(
    "Upgrade Fighting-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sPoisoniumZDesc[] COMPOUND_STRING(
    "Upgrade Poison-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sGroundiumZDesc[] COMPOUND_STRING(
    "Upgrade Ground-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFlyiniumZDesc[] COMPOUND_STRING(
    "Upgrade Flying-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sPsychiumZDesc[] COMPOUND_STRING(
    "Upgrade Psychic-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sBuginiumZDesc[] COMPOUND_STRING(
    "Upgrade Bug-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sRockiumZDesc[] COMPOUND_STRING(
    "Upgrade Rock-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sGhostiumZDesc[] COMPOUND_STRING(
    "Upgrade Ghost-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sDragoniumZDesc[] COMPOUND_STRING(
    "Upgrade Dragon-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sDarkiniumZDesc[] COMPOUND_STRING(
    "Upgrade Dark-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sSteeliumZDesc[] COMPOUND_STRING(
    "Upgrade Steel-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFairiumZDesc[] COMPOUND_STRING(
    "Upgrade Fairy-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sPikaniumZDesc[] COMPOUND_STRING(
    "Upgrade Pikachu's\n"
    "Volt Tackle\n"
    "into a Z-Move.");

static const u8 sEeviumZDesc[] COMPOUND_STRING(
    "Upgrade Eevee's\n"
    "Last Resort\n"
    "into a Z-Move.");

static const u8 sSnorliumZDesc[] COMPOUND_STRING(
    "Upgrade Snorlax's\n"
    "Giga Impact\n"
    "into a Z-Move.");

static const u8 sMewniumZDesc[] COMPOUND_STRING(
    "Upgrade Mew's\n"
    "Psychic into\n"
    "a Z-Move.");

static const u8 sDecidiumZDesc[] COMPOUND_STRING(
    "Upgrade Decidu-\n"
    "eye's Spirit Sha-\n"
    "ckle into a Z-Move.");

static const u8 sInciniumZDesc[] COMPOUND_STRING(
    "Upgrade Incine-\n"
    "roar's Darkest La-\n"
    "riat into a Z-Move.");

static const u8 sPrimariumZDesc[] COMPOUND_STRING(
    "Upgrade Primarina's\n"
    "Sparkling Aria\n"
    "into a Z-Move.");

static const u8 sLycaniumZDesc[] COMPOUND_STRING(
    "Upgrade Lycanroc's\n"
    "Stone Edge\n"
    "into a Z-Move.");

static const u8 sMimikiumZDesc[] COMPOUND_STRING(
    "Upgrade Mimikyu's\n"
    "Play Rough\n"
    "into a Z-Move.");

static const u8 sKommoniumZDesc[] COMPOUND_STRING(
    "Upgrade Kommo-o's\n"
    "Clanging Scales\n"
    "into a Z-Move.");

static const u8 sTapuniumZDesc[] COMPOUND_STRING(
    "Upgrade the tapu's\n"
    "Nature's Madness\n"
    "into a Z-Move.");

static const u8 sSolganiumZDesc[] COMPOUND_STRING(
    "Upgrade Solgaleo's\n"
    "Sunsteel Strike\n"
    "into a Z-Move.");

static const u8 sLunaliumZDesc[] COMPOUND_STRING(
    "Upgrade Lunala's\n"
    "Moongeist Beam\n"
    "into a Z-Move.");

static const u8 sMarshadiumZDesc[] COMPOUND_STRING(
    "Upgrade Marsha-\n"
    "dow's Spectral Thi-\n"
    "ef into a Z-Move.");

static const u8 sAloraichiumZDesc[] COMPOUND_STRING(
    "Upgrade Alolan\n"
    "Raichu's Thunder-\n"
    "bolt into a Z-Move.");

static const u8 sPikashuniumZDesc[] COMPOUND_STRING(
    "Upgrade Pikachu w/\n"
    "a cap's Thunderbolt\n"
    "into a Z-Move.");

static const u8 sUltranecroziumZDesc[] COMPOUND_STRING(
    "A crystal to turn\n"
    "fused Necrozma\n"
    "into a new form.");

// Species-specific Held Items
static const u8 sLightBallDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the Atk and\n"
    "Sp. Atk of Pikachu.");

static const u8 sLeekDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Farfetch'd's\n"
    "critical-hit ratio.");

static const u8 sThickClubDesc[] COMPOUND_STRING(
    "A hold item that \n"
    "raises Cubone or\n"
    "Marowak's Attack.");

static const u8 sLuckyPunchDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Chansey's\n"
    "critical-hit rate.");

static const u8 sMetalPowderDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Ditto's\n"
    "Defense.");

static const u8 sQuickPowderDesc[] COMPOUND_STRING(
    "An item to be held\n"
    "by Ditto. This odd\n"
    "powder boosts Speed.");

static const u8 sDeepSeaScaleDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the Sp. Def\n"
    "of Clamperl.");

static const u8 sDeepSeaToothDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the Sp. Atk\n"
    "of Clamperl.");

static const u8 sSoulDewDesc[] COMPOUND_STRING(
#if B_SOUL_DEW_BOOST >= GEN_7
    "Powers up Latios' &\n"
    "Latias' Psychic and\n"
    "Dragon-type moves.");
#else
    "Hold item: raises\n"
    "Sp. Atk & Sp. Def of\n"
    "Latios & Latias.");
#endif

static const u8 sAdamantOrbDesc[] COMPOUND_STRING(
    "Boosts the power of\n"
    "Dialga's Dragon and\n"
    "Steel-type moves.");

static const u8 sLustrousOrbDesc[] COMPOUND_STRING(
    "Boosts the power of\n"
    "Palkia's Dragon and\n"
    "Water-type moves.");

static const u8 sGriseousOrbDesc[] COMPOUND_STRING(
    "Powers up Giratina's\n"
    "Dragon and Ghost-\n"
    "type moves.");

// Incenses
static const u8 sSeaIncenseDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "slightly boosts\n"
    "Water-type moves.");

static const u8 sLaxIncenseDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "slightly lowers the\n"
    "foe's accuracy.");

static const u8 sOddIncenseDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "boosts Psychic-\n"
    "type moves.");

static const u8 sRockIncenseDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Rock-type moves.");

static const u8 sFullIncenseDesc[] COMPOUND_STRING(
    "A held item that\n"
    "makes the holder\n"
    "move slower.");

static const u8 sWaveIncenseDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "slightly boosts\n"
    "Water-type moves.");

static const u8 sRoseIncenseDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Grass-type moves.");

static const u8 sLuckIncenseDesc[] COMPOUND_STRING(
    "Doubles money in\n"
    "battle if the\n"
    "holder takes part.");

static const u8 sPureIncenseDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "helps repel wild\n"
    "Pokémon.");

// Contest Scarves
static const u8 sRedScarfDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Cool in\n"
    "Contests.");

static const u8 sBlueScarfDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Beauty in\n"
    "Contests.");

static const u8 sPinkScarfDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Cute in\n"
    "Contests.");

static const u8 sGreenScarfDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Smart in\n"
    "Contests.");

static const u8 sYellowScarfDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Tough in\n"
    "Contests.");

// EV Gain Modifiers
static const u8 sMachoBraceDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "promotes growth,\n"
    "but reduces Speed.");

static const u8 sPowerWeightDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "promotes HP gain,\n"
    "but reduces Speed.");

static const u8 sPowerBracerDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "promotes Atk gain,\n"
    "but reduces Speed.");

static const u8 sPowerBeltDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "promotes Def gain,\n"
    "but reduces Speed.");

static const u8 sPowerLensDesc[] COMPOUND_STRING(
    "Hold item that pro-\n"
    "motes Sp. Atk gain,\n"
    "but reduces Speed.");

static const u8 sPowerBandDesc[] COMPOUND_STRING(
    "Hold item that pro-\n"
    "motes Sp. Def gain,\n"
    "but reduces Speed.");

static const u8 sPowerAnkletDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "promotes Spd gain,\n"
    "but reduces Speed.");

// Type-boosting Held Items
static const u8 sSilkScarfDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Normal-type moves.");

static const u8 sCharcoalDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Fire-type moves.");

static const u8 sMysticWaterDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Water-type moves.");

static const u8 sMagnetDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "boosts Electric-\n"
    "type moves.");

static const u8 sMiracleSeedDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Grass-type moves.");

static const u8 sNeverMeltIceDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Ice-type moves.");

static const u8 sBlackBeltDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "boosts Fighting-\n"
    "type moves.");

static const u8 sPoisonBarbDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Poison-type moves.");

static const u8 sSoftSandDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Ground-type moves.");

static const u8 sSharpBeakDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Flying-type moves.");

static const u8 sTwistedSpoonDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "boosts Psychic-\n"
    "type moves.");

static const u8 sSilverPowderDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Bug-type moves.");

static const u8 sHardStoneDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Rock-type moves.");

static const u8 sSpellTagDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Ghost-type moves.");

static const u8 sDragonFangDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Dragon-type moves.");

static const u8 sBlackGlassesDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Dark-type moves.");

static const u8 sMetalCoatDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises the power of\n"
    "Steel-type moves.");

// Choice Items
static const u8 sChoiceBandDesc[] COMPOUND_STRING(
    "Raises a move's\n"
    "power, but permits\n"
    "only that move.");

static const u8 sChoiceSpecsDesc[] COMPOUND_STRING(
    "Boosts Sp. Atk, but\n"
    "allows the use of\n"
    "only one move.");

static const u8 sChoiceScarfDesc[] COMPOUND_STRING(
    "Boosts Speed, but\n"
    "allows the use of\n"
    "only one move.");

// Status Orbs
static const u8 sFlameOrbDesc[] COMPOUND_STRING(
    "A bizarre orb that\n"
    "inflicts a burn on\n"
    "holder in battle.");

static const u8 sToxicOrbDesc[] COMPOUND_STRING(
    "A bizarre orb that\n"
    "badly poisons the\n"
    "holder in battle.");

// Weather Rocks
static const u8 sDampRockDesc[] COMPOUND_STRING(
    "Extends the length\n"
    "of Rain Dance if\n"
    "used by the holder.");

static const u8 sHeatRockDesc[] COMPOUND_STRING(
    "Extends the length\n"
    "of Sunny Day if\n"
    "used by the holder.");

static const u8 sSmoothRockDesc[] COMPOUND_STRING(
    "Extends the length\n"
    "of Sandstorm if\n"
    "used by the holder.");

static const u8 sIcyRockDesc[] COMPOUND_STRING(
    "Extends the length\n"
    "of the move Hail\n"
    "used by the holder.");

// Terrain Seeds
static const u8 sElectricSeedDesc[] COMPOUND_STRING(
    "Boosts Defense on\n"
    "Electric Terrain,\n"
    "but only one time.");

static const u8 sPsychicSeedDesc[] COMPOUND_STRING(
    "Boosts Sp. Def. on\n"
    "Psychic Terrain,\n"
    "but only one time.");

static const u8 sMistySeedDesc[] COMPOUND_STRING(
    "Boosts Sp. Def. on\n"
    "Misty Terrain,\n"
    "but only one time.");

static const u8 sGrassySeedDesc[] COMPOUND_STRING(
    "Boosts Defense on\n"
    "Grassy Terrain,\n"
    "but only one time.");

// Type-activated Stat Modifiers
static const u8 sAbsorbBulbDesc[] COMPOUND_STRING(
    "Raises Sp. Atk if\n"
    "the holder is hit by\n"
    "a Water-type move.");

static const u8 sCellBatteryDesc[] COMPOUND_STRING(
    "Raises Atk if the\n"
    "holder is hit by an\n"
    "Electric-type move.");

static const u8 sLuminousMossDesc[] COMPOUND_STRING(
    "Raises Sp. Def if\n"
    "the holder is hit by\n"
    "a Water-type move.");

static const u8 sSnowballDesc[] COMPOUND_STRING(
    "Raises Atk if its\n"
    "holder is hit by an\n"
    "Ice-type move.");

// Misc. Held Items
static const u8 sBrightPowderDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "casts a glare to\n"
    "reduce accuracy.");

static const u8 sWhiteHerbDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "restores any\n"
    "lowered stat.");

static const u8 sExpShareDesc[] COMPOUND_STRING(
    "Turning this on\n"
    "gives all in party\n"
    "EXP. points.");

static const u8 sQuickClawDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "occasionally allows\n"
    "the first strike.");

static const u8 sSootheBellDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "calms spirits and\n"
    "fosters friendship.");

#if B_MENTAL_HERB >= GEN_5
static const u8 sMentalHerbDesc[] COMPOUND_STRING(
    "Snaps Pokémon out\n"
    "of move-binding\n"
    "effects.");
#else
static const u8 sMentalHerbDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "snaps Pokémon out\n"
    "of infatuation.");
#endif

static const u8 sKingsRockDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "may cause flinching\n"
    "when the foe is hit.");

static const u8 sAmuletCoinDesc[] COMPOUND_STRING(
    "Doubles money in\n"
    "battle if the\n"
    "holder takes part.");

static const u8 sCleanseTagDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "helps repel wild\n"
    "Pokémon.");

static const u8 sSmokeBallDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "assures fleeing\n"
    "from wild Pokémon.");

static const u8 sFocusBandDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "occasionally\n"
    "prevents fainting.");

static const u8 sLuckyEggDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "boosts Exp. points\n"
    "earned in battle.");

static const u8 sScopeLensDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "improves the\n"
    "critical-hit rate.");

static const u8 sLeftoversDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "gradually restores\n"
    "HP in battle.");

static const u8 sShellBellDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "restores HP upon\n"
    "striking the foe.");

static const u8 sWideLensDesc[] COMPOUND_STRING(
    "A magnifying lens\n"
    "that boosts the\n"
    "accuracy of moves.");

static const u8 sMuscleBandDesc[] COMPOUND_STRING(
    "A headband that\n"
    "boosts the power of\n"
    "physical moves.");

static const u8 sWiseGlassesDesc[] COMPOUND_STRING(
    "A pair of glasses\n"
    "that ups the power\n"
    "of special moves.");

static const u8 sExpertBeltDesc[] COMPOUND_STRING(
    "A belt that boosts\n"
    "the power of super\n"
    "effective moves.");

static const u8 sLightClayDesc[] COMPOUND_STRING(
    "Extends the length\n"
    "of barrier moves\n"
    "used by the holder.");

static const u8 sLifeOrbDesc[] COMPOUND_STRING(
    "Boosts the power of\n"
    "moves at the cost\n"
    "of some HP per turn.");

static const u8 sPowerHerbDesc[] COMPOUND_STRING(
    "Allows immediate\n"
    "use of a move that\n"
    "charges first.");

static const u8 sFocusSashDesc[] COMPOUND_STRING(
    "If the holder has\n"
    "full HP, it endures\n"
    "KO hits with 1 HP.");

static const u8 sZoomLensDesc[] COMPOUND_STRING(
    "If the holder moves\n"
    "after the foe, it'll\n"
    "boost accuracy.");

static const u8 sMetronomeDesc[] COMPOUND_STRING(
    "A held item that\n"
    "boosts a move used\n"
    "consecutively.");

static const u8 sIronBallDesc[] COMPOUND_STRING(
    "Cuts Speed and lets\n"
    "Flying-types be hit\n"
    "by Ground moves.");

static const u8 sLaggingTailDesc[] COMPOUND_STRING(
    "A held item that\n"
    "makes the holder\n"
    "move slower.");

static const u8 sDestinyKnotDesc[] COMPOUND_STRING(
    "If the holder falls\n"
    "in love, the foe\n"
    "does too.");

static const u8 sBlackSludgeDesc[] COMPOUND_STRING(
    "Gradually restores\n"
    "HP of Poison-types.\n"
    "Damages others.");

static const u8 sGripClawDesc[] COMPOUND_STRING(
    "Makes binding moves\n"
    "used by the holder\n"
    "go on for 7 turns.");

static const u8 sStickyBarbDesc[] COMPOUND_STRING(
    "Damages the holder\n"
    "each turn. May latch\n"
    "on to foes.");

static const u8 sShedShellDesc[] COMPOUND_STRING(
    "Enables the holder\n"
    "to switch out of\n"
    "battle without fail.");

static const u8 sBigRootDesc[] COMPOUND_STRING(
    "A held item that\n"
    "boosts the power of\n"
    "HP-stealing moves.");

static const u8 sRazorClawDesc[] COMPOUND_STRING(
    "A hooked claw that\n"
    "ups the holder's\n"
    "critical-hit ratio.");

static const u8 sRazorFangDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "may cause flinching\n"
    "when the foe is hit.");

static const u8 sEvioliteDesc[] COMPOUND_STRING(
    "Raises the Def and\n"
    "Sp. Def of Pokémon\n"
    "that can evolve.");

static const u8 sFloatStoneDesc[] COMPOUND_STRING(
    "It's so light that\n"
    "when held, it halves\n"
    "a Pokémon's weight.");

static const u8 sRockyHelmetDesc[] COMPOUND_STRING(
    "Hurts the foe if\n"
    "they touch its\n"
    "holder.");

static const u8 sAirBalloonDesc[] COMPOUND_STRING(
    "Elevates the holder\n"
    "in the air. If hit,\n"
    "this item will burst.");

static const u8 sRedCardDesc[] COMPOUND_STRING(
    "Switches out the\n"
    "foe if they hit the\n"
    "holder.");

static const u8 sRingTargetDesc[] COMPOUND_STRING(
    "Moves that wouldn't\n"
    "have effect will\n"
    "land on its holder.");

static const u8 sBindingBandDesc[] COMPOUND_STRING(
    "Increases the\n"
    "power of binding\n"
    "moves when held.");

static const u8 sEjectButtonDesc[] COMPOUND_STRING(
    "Switches out the\n"
    "user if they're hit\n"
    "by the foe.");

static const u8 sWeaknessPolicyDesc[] COMPOUND_STRING(
    "If hit by a Super\n"
    "Effective move, ups\n"
    "Atk and Sp. Atk.");

static const u8 sAssaultVestDesc[] COMPOUND_STRING(
    "Raises Sp. Def but\n"
    "prevents the use\n"
    "of status moves.");

static const u8 sSafetyGogglesDesc[] COMPOUND_STRING(
    "Protect from\n"
    "weather damage and\n"
    "powder moves.");

static const u8 sAdrenalineOrbDesc[] COMPOUND_STRING(
    "Boosts Speed if the\n"
    "user is intimidated,\n"
    "but only one time.");

static const u8 sTerrainExtenderDesc[] COMPOUND_STRING(
    "Extends the length\n"
    "of the active\n"
    "battle terrain.");

static const u8 sProtectivePadsDesc[] COMPOUND_STRING(
    "Guard the holder\n"
    "from contact move\n"
    "effects.");

static const u8 sThroatSprayDesc[] COMPOUND_STRING(
    "Raises Sp. Atk. if\n"
    "a Pokémon is hit by\n"
    "a sound-based move.");

static const u8 sEjectPackDesc[] COMPOUND_STRING(
    "Forces the user to\n"
    "switch if its stats\n"
    "are lowered.");

static const u8 sHeavyDutyBootsDesc[] COMPOUND_STRING(
    "Boots that prevent\n"
    "effects of traps\n"
    "set in the field.");

static const u8 sBlunderPolicyDesc[] COMPOUND_STRING(
    "Raises Speed if\n"
    "the user misses\n"
    "due to Accuracy.");

static const u8 sRoomServiceDesc[] COMPOUND_STRING(
    "Lowers Speed if\n"
    "Trick Room is\n"
    "active.");

static const u8 sUtilityUmbrellaDesc[] COMPOUND_STRING(
    "An umbrella that\n"
    "protects from\n"
    "weather effects.");

// Berries
static const u8 sCheriBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "heals paralysis\n"
    "in battle.");

static const u8 sChestoBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "awakens Pokémon\n"
    "in battle.");

static const u8 sPechaBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "heals poisoning\n"
    "in battle.");

static const u8 sRawstBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "heals a burn in\n"
    "battle.");

static const u8 sAspearBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "defrosts Pokémon\n"
    "in battle.");

static const u8 sLeppaBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "restores 10 PP in\n"
    "battle.");

static const u8 sOranBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "restores 10 HP in\n"
    "battle.");

static const u8 sPersimBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "heals confusion\n"
    "in battle.");

static const u8 sLumBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "heals any status\n"
    "problem in battle.");

static const u8 sSitrusBerryDesc[] COMPOUND_STRING(
#if I_SITRUS_BERRY_HEAL >= GEN_4
    "A hold item that\n"
    "restores the user's\n"
    "HP a little.");
#else
    "A hold item that\n"
    "restores 30 HP in\n"
    "battle.");
#endif

static const u8 sFigyBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sWikiBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sMagoBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sAguavBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sIapapaBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sRazzBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Razz.");

static const u8 sBlukBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Bluk.");

static const u8 sNanabBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Nanab.");

static const u8 sWepearBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Wepear.");

static const u8 sPinapBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Pinap.");

static const u8 sPomegBerryDesc[] COMPOUND_STRING(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base HP.");

static const u8 sKelpsyBerryDesc[] COMPOUND_STRING(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Attack.");

static const u8 sQualotBerryDesc[] COMPOUND_STRING(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Defense.");

static const u8 sHondewBerryDesc[] COMPOUND_STRING(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Sp. Atk.");

static const u8 sGrepaBerryDesc[] COMPOUND_STRING(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Sp. Def.");

static const u8 sTamatoBerryDesc[] COMPOUND_STRING(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Speed.");

static const u8 sCornnBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Cornn.");

static const u8 sMagostBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Magost.");

static const u8 sRabutaBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Rabuta.");

static const u8 sNomelBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Nomel.");

static const u8 sSpelonBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Spelon.");

static const u8 sPamtreBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Pamtre.");

static const u8 sWatmelBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Watmel.");

static const u8 sDurinBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Durin.");

static const u8 sBelueBerryDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Belue.");

static const u8 sChilanBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Normal\n"
    "move.");

static const u8 sOccaBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Fire\n"
    "move if weak to it.");

static const u8 sPasshoBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Water\n"
    "move if weak to it.");

static const u8 sWacanBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Electric\n"
    "move if weak to it.");

static const u8 sRindoBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Grass\n"
    "move if weak to it.");

static const u8 sYacheBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Ice\n"
    "move if weak to it.");

static const u8 sChopleBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Fighting\n"
    "move if weak to it.");

static const u8 sKebiaBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Poison\n"
    "move if weak to it.");

static const u8 sShucaBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Ground\n"
    "move if weak to it.");

static const u8 sCobaBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Flying\n"
    "move if weak to it.");

static const u8 sPayapaBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Psychic\n"
    "move if weak to it.");

static const u8 sTangaBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Bug\n"
    "move if weak to it.");

static const u8 sChartiBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Rock\n"
    "move if weak to it.");

static const u8 sKasibBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Ghost\n"
    "move if weak to it.");

static const u8 sHabanBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Dragon\n"
    "move if weak to it.");

static const u8 sColburBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Dark\n"
    "move if weak to it.");

static const u8 sBabiriBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Steel\n"
    "move if weak to it.");

static const u8 sRoseliBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "weakens a Fairy\n"
    "move if weak to it.");

static const u8 sLiechiBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Attack in\n"
    "a pinch.");

static const u8 sGanlonBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Defense in\n"
    "a pinch.");

static const u8 sSalacBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Speed in\n"
    "a pinch.");

static const u8 sPetayaBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Sp. Atk in\n"
    "a pinch.");

static const u8 sApicotBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "raises Sp. Def in\n"
    "a pinch.");

static const u8 sLansatBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "ups the critical-\n"
    "hit rate in a pinch.");

static const u8 sStarfBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "sharply boosts a\n"
    "stat in a pinch.");

static const u8 sEnigmaBerryDesc[] COMPOUND_STRING(
    "A hold item that\n"
    "heals from super\n"
    "effective moves.");

static const u8 sMicleBerryDesc[] COMPOUND_STRING(
    "When held, it ups\n"
    "the Accuracy of a\n"
    "move in a pinch.");

static const u8 sCustapBerryDesc[] COMPOUND_STRING(
    "It allows a Pokémon\n"
    "in a pinch to move\n"
    "first just once.");

static const u8 sJabocaBerryDesc[] COMPOUND_STRING(
    "If hit by a physical\n"
    "move, it will hurt\n"
    "the attacker a bit.");

static const u8 sRowapBerryDesc[] COMPOUND_STRING(
    "If hit by a special\n"
    "move, it will hurt\n"
    "the attacker a bit.");

static const u8 sKeeBerryDesc[] COMPOUND_STRING(
    "If hit by a physical\n"
    "move, it raises the\n"
    "Defense a bit.");

static const u8 sMarangaBerryDesc[] COMPOUND_STRING(
    "If hit by a special\n"
    "move, it raises the\n"
    "Sp. Def. a bit.");

static const u8 sEnigmaBerryEReaderDesc[] COMPOUND_STRING(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow a mystery.");

// TMs/HMs
static const u8 sTM01Desc[] COMPOUND_STRING(
    "Powerful, but makes\n"
    "the user flinch if\n"
    "hit by the foe.");

static const u8 sTM02Desc[] COMPOUND_STRING(
    "Hooks and slashes\n"
    "the foe with long,\n"
    "sharp claws.");

static const u8 sTM03Desc[] COMPOUND_STRING(
    "Generates an\n"
    "ultrasonic wave\n"
    "that may confuse.");

static const u8 sTM04Desc[] COMPOUND_STRING(
    "Raises Sp. Atk and\n"
    "Sp. Def by focusing\n"
    "the mind.");

static const u8 sTM05Desc[] COMPOUND_STRING(
    "A savage roar that\n"
    "makes the foe flee \n"
    "to end the battle.");

static const u8 sTM06Desc[] COMPOUND_STRING(
    "Poisons the foe\n"
    "with a toxin that\n"
    "gradually worsens.");

static const u8 sTM07Desc[] COMPOUND_STRING(
    "Creates a hailstorm\n"
    "that damages all\n"
    "types except Ice.");

static const u8 sTM08Desc[] COMPOUND_STRING(
    "Bulks up the body\n"
    "to boost both\n"
    "Attack & Defense.");

static const u8 sTM09Desc[] COMPOUND_STRING(
    "Shoots 2 to 5 seeds\n"
    "in a row to strike\n"
    "the foe.");

static const u8 sTM10Desc[] COMPOUND_STRING(
    "The attack power\n"
    "varies among\n"
    "different Pokémon.");

static const u8 sTM11Desc[] COMPOUND_STRING(
    "Raises the power of\n"
    "Fire-type moves\n"
    "for 5 turns.");

static const u8 sTM12Desc[] COMPOUND_STRING(
    "Enrages the foe so\n"
    "it can only use\n"
    "attack moves.");

static const u8 sTM13Desc[] COMPOUND_STRING(
    "Fires an icy cold\n"
    "beam that may\n"
    "freeze the foe.");

static const u8 sTM14Desc[] COMPOUND_STRING(
    "A brutal snow-and-\n"
    "wind attack that\n"
    "may freeze the foe.");

static const u8 sTM15Desc[] COMPOUND_STRING(
    "Powerful, but needs\n"
    "recharging the\n"
    "next turn.");

static const u8 sTM16Desc[] COMPOUND_STRING(
    "Creates a wall of\n"
    "light that lowers\n"
    "Sp. Atk damage.");

static const u8 sTM17Desc[] COMPOUND_STRING(
    "Negates all damage,\n"
    "but may fail if used\n"
    "in succession.");

static const u8 sTM18Desc[] COMPOUND_STRING(
    "Raises the power of\n"
    "Water-type moves\n"
    "for 5 turns.");

static const u8 sTM19Desc[] COMPOUND_STRING(
    "Recovers half the\n"
    "HP of the damage \n"
    "this move inflicts.");

static const u8 sTM20Desc[] COMPOUND_STRING(
    "Prevents status\n"
    "abnormality with a\n"
    "mystical power.");

static const u8 sTM21Desc[] COMPOUND_STRING(
    "The less the user\n"
    "likes you, the more\n"
    "powerful this move.");

static const u8 sTM22Desc[] COMPOUND_STRING(
    "Absorbs sunlight in\n"
    "the 1st turn, then\n"
    "attacks next turn.");

static const u8 sTM23Desc[] COMPOUND_STRING(
    "Slams the foe with\n"
    "a hard tail. It may\n"
    "lower Defense.");

static const u8 sTM24Desc[] COMPOUND_STRING(
    "A powerful electric\n"
    "attack that may\n"
    "cause paralysis.");

static const u8 sTM25Desc[] COMPOUND_STRING(
    "Strikes the foe\n"
    "with a thunderbolt.\n"
    "It may paralyze.");

static const u8 sTM26Desc[] COMPOUND_STRING(
    "Causes a quake\n"
    "that has no effect\n"
    "on flying foes.");

static const u8 sTM27Desc[] COMPOUND_STRING(
    "The more the user\n"
    "likes you, the more\n"
    "powerful this move.");

static const u8 sTM28Desc[] COMPOUND_STRING(
    "Digs underground\n"
    "the 1st turn, then\n"
    "strikes next turn.");

static const u8 sTM29Desc[] COMPOUND_STRING(
    "A powerful psychic\n"
    "attack that may\n"
    "lower Sp. Def.");

static const u8 sTM30Desc[] COMPOUND_STRING(
    "Hurls a dark lump\n"
    "at the foe. It may\n"
    "lower Sp. Def.");

static const u8 sTM31Desc[] COMPOUND_STRING(
    "Destroys barriers\n"
    "like Light Screen\n"
    "and causes damage.");

static const u8 sTM32Desc[] COMPOUND_STRING(
    "Creates illusory\n"
    "copies to enhance\n"
    "elusiveness.");

static const u8 sTM33Desc[] COMPOUND_STRING(
    "Creates a wall of\n"
    "light that weakens\n"
    "physical attacks.");

static const u8 sTM34Desc[] COMPOUND_STRING(
    "Zaps the foe with a\n"
    "jolt of electricity\n"
    "that never misses.");

static const u8 sTM35Desc[] COMPOUND_STRING(
    "Looses a stream of\n"
    "fire that may burn\n"
    "the foe.");

static const u8 sTM36Desc[] COMPOUND_STRING(
    "Hurls sludge at the\n"
    "foe. It may poison\n"
    "the foe.");

static const u8 sTM37Desc[] COMPOUND_STRING(
    "Causes a sandstorm\n"
    "that hits the foe\n"
    "over several turns.");

static const u8 sTM38Desc[] COMPOUND_STRING(
    "A powerful fire\n"
    "attack that may\n"
    "burn the foe.");

static const u8 sTM39Desc[] COMPOUND_STRING(
    "Stops the foe from\n"
    "moving with rocks.\n"
    "May lower Speed.");

static const u8 sTM40Desc[] COMPOUND_STRING(
    "An extremely fast\n"
    "attack that can't\n"
    "be avoided.");

static const u8 sTM41Desc[] COMPOUND_STRING(
    "Prevents the foe\n"
    "from using the same\n"
    "move in a row.");

static const u8 sTM42Desc[] COMPOUND_STRING(
    "Raises Attack when\n"
    "poisoned, burned,\n"
    "or paralyzed.");

static const u8 sTM43Desc[] COMPOUND_STRING(
    "Adds an effect to\n"
    "attack depending\n"
    "on the location.");

static const u8 sTM44Desc[] COMPOUND_STRING(
    "The user sleeps for\n"
    "2 turns to restore\n"
    "health and status.");

static const u8 sTM45Desc[] COMPOUND_STRING(
    "Makes it tough to\n"
    "attack a foe of the\n"
    "opposite gender.");

static const u8 sTM46Desc[] COMPOUND_STRING(
    "While attacking,\n"
    "it may steal the\n"
    "foe's held item.");

static const u8 sTM47Desc[] COMPOUND_STRING(
    "Spreads hard-\n"
    "edged wings and\n"
    "slams into the foe.");

static const u8 sTM48Desc[] COMPOUND_STRING(
    "Switches abilities\n"
    "with the foe on the\n"
    "turn this is used.");

static const u8 sTM49Desc[] COMPOUND_STRING(
    "Steals the effects\n"
    "of the move the foe\n"
    "is trying to use.");

static const u8 sTM50Desc[] COMPOUND_STRING(
    "Enables full-power\n"
    "attack, but sharply\n"
    "lowers Sp. Atk.");

COMPOUND_STRING(
    "The user lands and\n"
    "rests, restoring up\n"
    "to half its max HP.");

        static const u8 sTM52Desc[] COMPOUND_STRING(
            "Attacks at full\n"
            "power. May also\n"
            "lower Sp Def.");

        static const u8 sTM53Desc[] COMPOUND_STRING(
            "Draws power from\n"
            "nature to attack.\n"
            "May lower Sp Def.");

        static const u8 sTM54Desc[] COMPOUND_STRING(
            "Attacks with a\n"
            "psychic wave. Does\n"
            "physical damage.");

        static const u8 sTM55Desc[] COMPOUND_STRING(
            "Shoots boiling water\n"
            "at the foe. May\n"
            "inflict a burn.");

        static const u8 sTM56Desc[] COMPOUND_STRING(
            "Recovers half the\n"
            "HP of the damage \n"
            "this move inflicts.");

        static const u8 sTM57Desc[] COMPOUND_STRING(
            "Fires a beam of\n"
            "electricity.\n"
            "May raise Sp. Atk.");

        static const u8 sTM58Desc[] COMPOUND_STRING(
            "Endures any attack\n"
            "for 1 turn, leaving\n"
            "at least 1HP.");

        static const u8 sTM59Desc[] COMPOUND_STRING(
            "Generates a shock\n"
            "wave to damage the\n"
            "foe.");

        static const u8 sTM60Desc[] COMPOUND_STRING(
            "Recovers half the\n"
            "HP of the damage \n"
            "this move inflicts.");

        static const u8 sTM61Desc[] COMPOUND_STRING(
            "Inflicts a burn on\n"
            "the foe with\n"
            "intense fire.");

        static const u8 sTM62Desc[] COMPOUND_STRING(
            "Does double damage\n"
            "if the user has\n"
            "no held item.");

        static const u8 sTM63Desc[] COMPOUND_STRING(
            "Large boulders are\n"
            "hurled. May cause\n"
            "flinching.");

        static const u8 sTM64Desc[] COMPOUND_STRING(
            "Inflicts severe\n"
            "damage but makes\n"
            "the user faint.");

        static const u8 sTM65Desc[] COMPOUND_STRING(
            "Slashes with a claw\n"
            "of shadows. High\n"
            "critical-hit ratio.");

        static const u8 sTM66Desc[] COMPOUND_STRING(
            "Deals double damage\n"
            "if the user moves\n"
            "after the foe.");

        static const u8 sTM67Desc[] COMPOUND_STRING(
            "Recycles a used\n"
            "held item for one\n"
            "more use.");

        static const u8 sTM68Desc[] COMPOUND_STRING(
            "Powerful, but needs\n"
            "recharging the\n"
            "next turn.");

        static const u8 sTM69Desc[] COMPOUND_STRING(
            "Polishes the body\n"
            "to sharply raise\n"
            "speed.");

        static const u8 sTM70Desc[] COMPOUND_STRING(
            "Weakens all attacks,\n"
            "but only usable\n"
            "with hail.");

        static const u8 sTM71Desc[] COMPOUND_STRING(
            "Stabs the foe with\n"
            "sharp stones. High\n"
            "critical-hit ratio.");

        static const u8 sTM72Desc[] COMPOUND_STRING(
            "Does damage then\n"
            "switches out the\n"
            "user.");

        static const u8 sTM73Desc[] COMPOUND_STRING(
            "A weak jolt of\n"
            "electricity that\n"
            "paralyzes the foe.");

        static const u8 sTM74Desc[] COMPOUND_STRING(
            "A high-speed spin\n"
            "that hurts faster\n"
            "foes more.");

        static const u8 sTM75Desc[] COMPOUND_STRING(
            "A fighting dance\n"
            "that sharply raises\n"
            "Attack.");

        static const u8 sTM76Desc[] COMPOUND_STRING(
            "A sneaky trap of\n"
            "stones that hurt\n"
            "a foe switching in.");

        static const u8 sTM77Desc[] COMPOUND_STRING(
            "Resisting, the user\n"
            "attacks the foes.\n"
            "Lowers Sp. Atk.");

        static const u8 sTM78Desc[] COMPOUND_STRING(
            "The user stomps\n"
            "down on the ground.\n"
            "Lowers Speed.");

        static const u8 sTM79Desc[] COMPOUND_STRING(
            "Super effective on\n"
            "Water-types. May\n"
            "cause freezing.");

        static const u8 sTM80Desc[] COMPOUND_STRING(
            "Does double damage\n"
            "if the foe is\n"
            "poisoned.");

        static const u8 sTM81Desc[] COMPOUND_STRING(
            "Slashes foe with\n"
            "crossed scythes,\n"
            "claws, etc.");

        static const u8 sTM82Desc[] COMPOUND_STRING(
            "Knocks the foe\n"
            "away to end the\n"
            "battle.");

        static const u8 sTM83Desc[] COMPOUND_STRING(
            "Attacks in a cloak\n"
            "of flames. Raises\n"
            "the user's Speed.");

        static const u8 sTM84Desc[] COMPOUND_STRING(
            "A stabbing attack\n"
            "that may poison\n"
            "the foe.");

        static const u8 sTM85Desc[] COMPOUND_STRING(
            "Heals for half the\n"
            "damage inflicted on\n"
            "a sleeping foe.");

        static const u8 sTM86Desc[] COMPOUND_STRING(
            "A snare attack that\n"
            "does more damage\n"
            "to heavier foes.");

        static const u8 sTM87Desc[] COMPOUND_STRING(
            "Throws a rock to\n"
            "knock the foe to\n"
            "the ground.");

        static const u8 sTM88Desc[] COMPOUND_STRING(
            "Attacks the foe's\n"
            "legs, lowering its\n"
            "Speed.");

        static const u8 sTM89Desc[] COMPOUND_STRING(
            "Does damage then\n"
            "switches out the\n"
            "user.");

        static const u8 sTM90Desc[] COMPOUND_STRING(
            "Creates a decoy\n"
            "using 1/4 of the\n"
            "user's maximum HP.");

        static const u8 sTM91Desc[] COMPOUND_STRING(
            "Releases a blast\n"
            "of light that may\n"
            "lower Sp. Def.");

        static const u8 sTM92Desc[] COMPOUND_STRING(
            "Slower Pokémon get\n"
            "to move first for\n"
            "five turns.");

        static const u8 sTM93Desc[] COMPOUND_STRING(
            "An electric charge\n"
            "attack that also\n"
            "hurts the user.");

        static const u8 sTM94Desc[] COMPOUND_STRING(
            "Strikes first if\n"
            "the foe is readying\n"
            "an attack.");

        static const u8 sTM95Desc[] COMPOUND_STRING(
            "Yells and rants at\n"
            "the foe, lowering\n"
            "its Sp. Atk.");

        static const u8 sTM96Desc[] COMPOUND_STRING(
            "An attack that\n"
            "gains power if\n"
            "damaged by the foe.");

        static const u8 sTM97Desc[] COMPOUND_STRING(
            "Releases a horrible\n"
            "aura that may cause\n"
            "flinching.");

        static const u8 sTM98Desc[] COMPOUND_STRING(
            "An attack that\n"
            "leaves the foe with\n"
            "at least 1 HP.");

        static const u8 sTM99Desc[] COMPOUND_STRING(
            "Damages foes by\n"
            "emitting a bright\n"
            "flash.");

        static const u8 sTM100Desc[] COMPOUND_STRING(
            "A move that works\n"
            "differently for\n"
            "Ghost-types.");

        static const u8 sHM01Desc[] COMPOUND_STRING(
            "Attacks the foe\n"
            "with sharp blades\n"
            "or claws.");

        static const u8 sHM02Desc[] COMPOUND_STRING(
            "Flies up on the\n"
            "first turn, then\n"
            "attacks next turn.");

        static const u8 sHM03Desc[] COMPOUND_STRING(
            "Creates a huge\n"
            "wave, then crashes\n"
            "it down on the foe.");

        static const u8 sHM04Desc[] COMPOUND_STRING(
            "Builds enormous\n"
            "power, then slams\n"
        "the foe.");

    static const u8 sHM05Desc[] COMPOUND_STRING(
        "Looses a powerful\n"
        "blast of light that\n"
        "reduces accuracy.");

    static const u8 sHM06Desc[] COMPOUND_STRING(
        "A rock-crushingly\n"
        "tough attack that\n"
        "may lower Defense.");

    static const u8 sHM07Desc[] COMPOUND_STRING(
        "Attacks the foe\n"
        "with enough power\n"
        "to climb waterfalls.");

    static const u8 sHM08Desc[] COMPOUND_STRING(
        "Dives underwater\n"
        "the 1st turn, then\n"
        "attacks next turn.");

// Charms
static const u8 sOvalCharmDesc[] COMPOUND_STRING(
    "Raises the chance\n"
    "of finding eggs\n"
    "at the daycare.");

static const u8 sShinyCharmDesc[] COMPOUND_STRING(
    "A charm that will\n"
    "raise the chance\n"
    "of Shiny Pokémon.");

static const u8 sCatchingCharmDesc[] COMPOUND_STRING(
    "A charm that raises\n"
    "the chance of\n"
    "Critical Captures.");

static const u8 sExpCharmDesc[] COMPOUND_STRING(
    "A charm that raises\n"
    "the amount of Exp.\n"
    "earned in battle.");

// Form-changing Key Items
static const u8 sRotomCatalogDesc[] COMPOUND_STRING(
    "A catalog full of\n"
    "deviced liked by\n"
    "Rotom.");

static const u8 sGracideaDesc[] COMPOUND_STRING(
    "Bouquets made with\n"
    "it are offered as a\n"
    "token of gratitude.");

static const u8 sRevealGlassDesc[] COMPOUND_STRING(
    "This glass returns\n"
    "a Pokémon back to\n"
    "its original form.");

static const u8 sDNASplicersDesc[] COMPOUND_STRING(
    "Splicer that fuses\n"
    "Kyurem and a\n"
    "certain Pokémon.");

static const u8 sZygardeCubeDesc[] COMPOUND_STRING(
    "An item to store\n"
    "Zygarde Cores and\n"
    "Cells.");

static const u8 sPrisonBottleDesc[] COMPOUND_STRING(
    "A bottle used to\n"
    "seal a certain\n"
    "Pokémon long ago.");

static const u8 sNSolarizerDesc[] COMPOUND_STRING(
    "A device to fuse\n"
    "and split Necrozma\n"
    "using a Solgaleo.");

static const u8 sNLunarizerDesc[] COMPOUND_STRING(
    "A device to fuse\n"
    "and split Necrozma\n"
    "using a Lunala.");

static const u8 sReinsOfUnityDesc[] COMPOUND_STRING(
    "Reins that unite\n"
    "Calyrex with its\n"
    "beloved steed.");

// Battle Mechanic Key Items
static const u8 sMegaRingDesc[] COMPOUND_STRING(
    "Enables {PKMN} holding\n"
    "their Mega Stone to\n"
    "Mega Evolve.");

static const u8 sZPowerRingDesc[] COMPOUND_STRING(
    "A strange ring\n"
    "that enables\n"
    "Z-Move usage.");

static const u8 sDynamaxBandDesc[] COMPOUND_STRING(
    "A band carrying a\n"
    "Wishing Star that\n"
    "allows Dynamaxing.");

// Misc. Key Items
static const u8 sPokeVialDesc[] COMPOUND_STRING(
    "Potent medicine\n"
    "that fully restores\n"
    "all Pokémon.");
    
static const u8 sBicycleDesc[] COMPOUND_STRING(
    "A folding bicycle\n"
    "that is faster than\n"
    "the Running Shoes.");

static const u8 sMachBikeDesc[] COMPOUND_STRING(
    "A folding bicycle\n"
    "that doubles your\n"
    "speed or better.");

static const u8 sAcroBikeDesc[] COMPOUND_STRING(
    "A folding bicycle\n"
    "capable of jumps\n"
    "and wheelies.");

static const u8 sOldRodDesc[] COMPOUND_STRING(
    "Use by any body of\n"
    "water to fish for\n"
    "wild Pokémon.");

static const u8 sGoodRodDesc[] COMPOUND_STRING(
    "A decent fishing\n"
    "rod for catching\n"
    "wild Pokémon.");

static const u8 sSuperRodDesc[] COMPOUND_STRING(
    "The best fishing\n"
    "rod for catching\n"
    "wild Pokémon.");

static const u8 sDowsingMachineDesc[] COMPOUND_STRING(
    "A device that\n"
    "signals an invisible\n"
    "item by sound.");

static const u8 sTownMapDesc[] COMPOUND_STRING(
    "Can be viewed\n"
    "anytime. Shows your\n"
    "present location.");

static const u8 sVsSeekerDesc[] COMPOUND_STRING(
    "A rechargeable unit\n"
    "that flags battle-\n"
    "ready Trainers.");

static const u8 sTMCaseDesc[] COMPOUND_STRING(
    "A convenient case \n"
    "that holds TMs and\n"
    "HMs.");

static const u8 sBerryPouchDesc[] COMPOUND_STRING(
    "A convenient\n"
    "container that\n"
    "holds Berries.");

static const u8 sPokemonBoxLinkDesc[] COMPOUND_STRING(
    "This device grants\n"
    "access to the {PKMN}\n"
    "Storage System.");

static const u8 sCoinCaseDesc[] COMPOUND_STRING(
    "A case that holds\n"
    "up to 9,999 Coins.");

static const u8 sPowderJarDesc[] COMPOUND_STRING(
    "Stores Berry\n"
    "Powder made using\n"
    "a Berry Crusher.");

static const u8 sWailmerPailDesc[] COMPOUND_STRING(
    "A tool used for\n"
    "watering Berries\n"
    "and plants.");

static const u8 sPokeRadarDesc[] COMPOUND_STRING(
    "A tool used to\n"
    "search out Pokémon\n"
    "hiding in grass.");

static const u8 sPokeblockCaseDesc[] COMPOUND_STRING(
    "A case for holding\n"
    "{POKEBLOCK}s made with\n"
    "a Berry Blender.");

static const u8 sSootSackDesc[] COMPOUND_STRING(
    "A sack used to\n"
    "gather and hold\n"
    "volcanic ash.");

static const u8 sPokeFluteDesc[] COMPOUND_STRING(
    "A sweet-sounding\n"
    "flute that awakens\n"
    "Pokémon.");

static const u8 sFameCheckerDesc[] COMPOUND_STRING(
    "Stores information\n"
    "on famous people\n"
    "for instant recall.");

static const u8 sTeachyTVDesc[] COMPOUND_STRING(
    "A TV set tuned to\n"
    "an advice program\n"
    "for Trainers.");

// Story Key Items
static const u8 sSSTicketDesc[] COMPOUND_STRING(
    "The ticket required\n"
    "for sailing on a\n"
    "ferry.");

static const u8 sEonTicketDesc[] COMPOUND_STRING(
    "The ticket for a\n"
    "ferry to a distant\n"
    "southern island.");

static const u8 sMysticTicketDesc[] COMPOUND_STRING(
    "A ticket required\n"
    "to board the ship\n"
    "to Navel Rock.");

static const u8 sAuroraTicketDesc[] COMPOUND_STRING(
    "A ticket required\n"
    "to board the ship\n"
    "to Birth Island.");

static const u8 sOldSeaMapDesc[] COMPOUND_STRING(
    "A faded sea chart\n"
    "that shows the way\n"
    "to a certain island.");

static const u8 sLetterDesc[] COMPOUND_STRING(
    "A letter to Steven\n"
    "from the President\n"
    "of the Devon Corp.");

static const u8 sDevonPartsDesc[] COMPOUND_STRING(
    "A package that\n"
    "contains Devon's\n"
    "machine parts.");

static const u8 sGoGogglesDesc[] COMPOUND_STRING(
    "Nifty goggles that\n"
    "protect eyes from\n"
    "desert sandstorms.");

static const u8 sDevonScopeDesc[] COMPOUND_STRING(
    "A device by Devon\n"
    "that signals any\n"
    "unseeable Pokémon.");

static const u8 sBasementKeyDesc[] COMPOUND_STRING(
    "The key for New\n"
    "Mauville beneath\n"
    "Mauville City.");

static const u8 sScannerDesc[] COMPOUND_STRING(
    "A device found\n"
    "inside the\n"
    "Abandoned Ship.");

static const u8 sStorageKeyDesc[] COMPOUND_STRING(
    "The key to the\n"
    "storage inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom1Desc[] COMPOUND_STRING(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom2Desc[] COMPOUND_STRING(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom4Desc[] COMPOUND_STRING(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom6Desc[] COMPOUND_STRING(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sMeteoriteDesc[] COMPOUND_STRING(
    "A meteorite found\n"
    "at Meteor Falls.");

static const u8 sMagmaEmblemDesc[] COMPOUND_STRING(
    "A medal-like item in\n"
    "the same shape as\n"
    "Team Magma's mark.");

static const u8 sContestPassDesc[] COMPOUND_STRING(
    "The pass required\n"
    "for entering\n"
    "Pokémon Contests.");

static const u8 sOaksParcelDesc[] COMPOUND_STRING(
    "A parcel for Prof.\n"
    "Oak from a Pokémon\n"
    "Mart's clerk.");

static const u8 sSecretKeyDesc[] COMPOUND_STRING(
    "The key to the\n"
    "Cinnabar Island\n"
    "Gym's entrance.");

static const u8 sBikeVoucherDesc[] COMPOUND_STRING(
    "A voucher for\n"
    "obtaining a bicycle\n"
    "from the Bike Shop.");

static const u8 sGoldTeethDesc[] COMPOUND_STRING(
    "Gold dentures lost\n"
    "by the Safari\n"
    "Zone's Warden.");

static const u8 sCardKeyDesc[] COMPOUND_STRING(
    "A card-type door\n"
    "key used in Silph\n"
    "Co's office.");

static const u8 sLiftKeyDesc[] COMPOUND_STRING(
    "An elevator key\n"
    "used in Team\n"
    "Rocket's Hideout.");

static const u8 sSilphScopeDesc[] COMPOUND_STRING(
    "Silph Co's scope\n"
    "makes unseeable\n"
    "POKéMON visible.");

static const u8 sTriPassDesc[] COMPOUND_STRING(
    "A pass for ferries\n"
    "between One, Two,\n"
    "and Three Island.");

static const u8 sRainbowPassDesc[] COMPOUND_STRING(
    "For ferries serving\n"
    "Vermilion and the\n"
    "Sevii Islands.");

static const u8 sTeaDesc[] COMPOUND_STRING(
    "A thirst-quenching\n"
    "tea prepared by an\n"
    "old lady.");

static const u8 sRubyDesc[] COMPOUND_STRING(
    "An exquisite, red-\n"
    "glowing gem that\n"
    "symbolizes passion.");

static const u8 sSapphireDesc[] COMPOUND_STRING(
    "A brilliant blue gem\n"
    "that symbolizes\n"
    "honesty.");

static const u8 sAbilityShieldDesc[] COMPOUND_STRING(
    "Ability changes are\n"
    "prevented for this\n"
    "items's holder.");

static const u8 sClearAmuletDesc[] COMPOUND_STRING(
    "Stat lowering is\n"
    "prevented for this\n"
    "items's holder.");

static const u8 sPunchingGloveDesc[] COMPOUND_STRING(
    "Powers up punching\n"
    "moves and removes\n"
    "their contact.");

static const u8 sCovertCloakDesc[] COMPOUND_STRING(
    "Protects the holder\n"
    "from secondary\n"
    "move effects.");

static const u8 sLoadedDiceDesc[] COMPOUND_STRING(
    "Rolls high numbers.\n"
    "Multihit strikes\n"
    "hit more times.");

static const u8 sAuspiciousArmorDesc[] COMPOUND_STRING(
    "Armor inhabited by\n"
    "auspicious wishes.\n"
    "Causes evolution.");

static const u8 sBoosterEnergyDesc[] COMPOUND_STRING(
    "Encapsuled energy\n"
    "ups Pokémon with\n"
    "certain Abilities.");

static const u8 sBigBambooShootDesc[] COMPOUND_STRING(
    "A large and rare\n"
    "bamboo shoot. Best\n"
    "sold to gourmands.");

static const u8 sGimmighoulCoinDesc[] COMPOUND_STRING(
    "Gimmighoul hoard\n"
    "and treasure these\n"
    "curious coins.");

static const u8 sLeadersCrestDesc[] COMPOUND_STRING(
    "A shard of an old\n"
    "blade of some sort.\n"
    "Held by Bisharp.");

static const u8 sMaliciousArmorDesc[] COMPOUND_STRING(
    "Armor inhabited by\n"
    "malicious will.\n"
    "Causes evolution.");

static const u8 sMirrorHerbDesc[] COMPOUND_STRING(
    "Mirrors an enemy's\n"
    "stat increases\n"
    "but only once.");

static const u8 sScrollOfDarknessDesc[] COMPOUND_STRING(
    "A peculiar scroll\n"
    "with secrets of\n"
    "the dark path.");

static const u8 sScrollOfWatersDesc[] COMPOUND_STRING(
    "A peculiar scroll\n"
    "with secrets of\n"
    "the water path.");

static const u8 sTeraOrbDesc[] COMPOUND_STRING(
    "Energy charges can\n"
    "be used to cause\n"
    "Terastallization.");

static const u8 sTinyBambooShootDesc[] COMPOUND_STRING(
    "A small and rare\n"
    "bamboo shoot. Best\n"
    "sold to gourmands.");

static const u8 sTeraShardDesc[] COMPOUND_STRING(
    "These shards may\n"
    "form when a Tera\n"
    "Pokémon faints.");

static const u8 sAdamantCrystalDesc[] COMPOUND_STRING(
    "A large, glowing gem\n"
    "that lets Dialga\n"
    "change form.");

static const u8 sGriseousCoreDesc[] COMPOUND_STRING(
    "A large, glowing gem\n"
    "that lets Giratina\n"
    "change form.");

static const u8 sLustrousGlobeDesc[] COMPOUND_STRING(
    "A large, glowing gem\n"
    "that lets Palkia\n"
    "change form.");*/
