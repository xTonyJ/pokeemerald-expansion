// regex to change fields

// Wally

static const struct TrainerMonNoItemDefaultMoves sParty_WallyMauville[] = {
    {
    .iv = 30,
    .lvl = -1,
    .species = SPECIES_RALTS,
    },
    {
    .iv = 30,
    .lvl = -3,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 30,
    .lvl = -3,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = 30,
    .lvl = -3,
    .species = SPECIES_MAWILE,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_WallyVR2[] = {
    {
    .iv = 150,
    .lvl = 47,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 46,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 47,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 44,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 48,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_WallyVR3[] = {
    {
    .iv = 150,
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 49,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 47,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 51,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_WallyVR4[] = {
    {
    .iv = 150,
    .lvl = 53,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 52,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 53,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 50,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 54,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_WallyVR5[] = {
    {
    .iv = 150,
    .lvl = 56,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = 150,
    .lvl = 55,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 150,
    .lvl = 56,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = 150,
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = 250,
    .lvl = 57,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

// Mudkip = Trainer's starters are Riolu/Ralts > rival is Houndour/Gastly

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute103Mudkip[] = {
    {
    .lvl = -1,
    .species = SPECIES_HOUNDOUR,
	.moves = {MOVE_TACKLE, MOVE_LEER, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = -1,
    .species = SPECIES_GASTLY,
	.moves = {MOVE_LICK, MOVE_MEAN_LOOK, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute103Mudkip[] = {
    {
    .lvl = -1,
    .species = SPECIES_HOUNDOUR,
	.moves = {MOVE_TACKLE, MOVE_LEER, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = -1,
    .species = SPECIES_GASTLY,
	.moves = {MOVE_LICK, MOVE_MEAN_LOOK, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRustboroMudkip[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_ROSELI_BERRY,
    .ability = 1, //Flash Fire
    .moves = {MOVE_BEAT_UP, MOVE_INCINERATE, MOVE_SLUDGE_BOMB, MOVE_THUNDER_FANG}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_HAUNTER,
    .heldItem = ITEM_GHOST_GEM,
    .ability = 0, //Levitate
    .moves = {MOVE_SUCKER_PUNCH, MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_HYPNOSIS}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = 0, //Water Absorb
    .moves = {MOVE_WATER_PULSE, MOVE_AURORA_BEAM, MOVE_HELPING_HAND, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_GROVYLE,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 0, //Overgrow
    .moves = {MOVE_FURY_CUTTER, MOVE_MEGA_DRAIN, MOVE_PURSUIT, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRustboroMudkip[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_ROSELI_BERRY,
    .ability = 1, //Flash Fire
    .moves = {MOVE_BEAT_UP, MOVE_INCINERATE, MOVE_SLUDGE_BOMB, MOVE_THUNDER_FANG}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_HAUNTER,
    .heldItem = ITEM_GHOST_GEM,
    .ability = 0, //Levitate
    .moves = {MOVE_SUCKER_PUNCH, MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_HYPNOSIS}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = 0, //Water Absorb
    .moves = {MOVE_WATER_PULSE, MOVE_AURORA_BEAM, MOVE_HELPING_HAND, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_GROVYLE,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 0, //Overgrow
    .moves = {MOVE_FURY_CUTTER, MOVE_MEGA_DRAIN, MOVE_PURSUIT, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute110Mudkip[] = {
    {
    .spread = SPREAD_HP_GRASS_MODEST,
    .lvl = 0,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_ROSELI_BERRY,
    .ability = 1, //Flash Fire
    .moves = {MOVE_DARK_PULSE, MOVE_FLAME_CHARGE, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_HAUNTER,
    .heldItem = ITEM_GHOST_GEM,
    .ability = 0, //Levitate
    .moves = {MOVE_SUCKER_PUNCH, MOVE_HEX, MOVE_ICY_WIND, MOVE_HYPNOSIS}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = 0, //Water Absorb
    .moves = {MOVE_WATER_PULSE, MOVE_AURORA_BEAM, MOVE_HELPING_HAND, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_GROVYLE,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 0, //Overgrow
    .moves = {MOVE_LEAF_BLADE, MOVE_GIGA_DRAIN, MOVE_DRAIN_PUNCH, MOVE_ROCK_TOMB}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_CHARMELEON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 0, //Blaze
    .moves = {MOVE_DRAGON_BREATH, MOVE_FIRE_FANG, MOVE_HELPING_HAND, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute110Mudkip[] = {
    {
    .spread = SPREAD_HP_GRASS_MODEST,
    .lvl = 0,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_ROSELI_BERRY,
    .ability = 1, //Flash Fire
    .moves = {MOVE_DARK_PULSE, MOVE_FLAME_CHARGE, MOVE_SLUDGE_BOMB, MOVE_THUNDER_FANG}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_HAUNTER,
    .heldItem = ITEM_GHOST_GEM,
    .ability = 0, //Levitate
    .moves = {MOVE_SUCKER_PUNCH, MOVE_HEX, MOVE_ICY_WIND, MOVE_HYPNOSIS}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = 0, //Water Absorb
    .moves = {MOVE_WATER_PULSE, MOVE_AURORA_BEAM, MOVE_HELPING_HAND, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_GROVYLE,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 0, //Overgrow
    .moves = {MOVE_LEAF_BLADE, MOVE_GIGA_DRAIN, MOVE_DRAIN_PUNCH, MOVE_ROCK_TOMB}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_CHARMELEON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 0, //Blaze
    .moves = {MOVE_DRAGON_BREATH, MOVE_FIRE_FANG, MOVE_HELPING_HAND, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute119Mudkip[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = -1,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = 0, //Blaze
    .moves = {MOVE_DRAGON_CLAW, MOVE_FLARE_BLITZ, MOVE_AIR_SLASH, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 0, //Levitate
    .moves = {MOVE_DARK_PULSE, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_SLUDGE_WAVE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = -1,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = 0, //Water Absorb
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HELPING_HAND, MOVE_SHADOW_BALL}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 0, //Overgrow
    .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_DRAIN_PUNCH, MOVE_OUTRAGE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 2,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_HOUNDOOMINITE,
    .ability = 1, //Flash Fire > Solar Power
    .moves = {MOVE_DARK_VOID, MOVE_HEAT_WAVE, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 1, //Intimidate
    .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_FOUL_PLAY}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute119Mudkip[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = -1,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_KINGS_ROCK,
    .ability = 0, //Blaze
    .moves = {MOVE_DRAGON_CLAW, MOVE_FLARE_BLITZ, MOVE_AIR_SLASH, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 0, //Levitate
    .moves = {MOVE_DARK_PULSE, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_SLUDGE_WAVE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = -1,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = 0, //Water Absorb
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HELPING_HAND, MOVE_SHADOW_BALL}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_SCEPTILE,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 0, //Overgrow
    .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_DRAIN_PUNCH, MOVE_OUTRAGE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 2,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_HOUNDOOMINITE,
    .ability = 1, //Flash Fire > Solar Power
    .moves = {MOVE_DARK_VOID, MOVE_HEAT_WAVE, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 1, //Intimidate
    .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_FOUL_PLAY}
    }
};

static const struct TrainerMonCustomized sParty_BrendanLilycoveMudkip[] = {
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 1,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = 2, // Solar Power
    .moves = {MOVE_FOCUS_BLAST, MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 2,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 1, // Flash Fire
    .moves = {MOVE_DARK_VOID, MOVE_HEAT_WAVE, MOVE_SLUDGE_BOMB, MOVE_SOLAR_BEAM}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 1,
    .species = SPECIES_ROTOM_MOW,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 0, // Levitate
    .moves = {MOVE_THUNDER, MOVE_LEAF_STORM, MOVE_HELPING_HAND, MOVE_CONFUSE_RAY}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 0, // Swarm
    .moves = {MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 1, // Intimidate
    .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_FOUL_PLAY}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 3,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_GENGARITE,
    .ability = 0, // Levitate
    .isShiny = 1,
    .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_SLUDGE_WAVE}
    }
};

static const struct TrainerMonCustomized sParty_MayLilycoveMudkip[] = {
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 1,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = 2, // Solar Power
    .moves = {MOVE_FOCUS_BLAST, MOVE_HEAT_WAVE, MOVE_AIR_SLASH, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 2,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 1, // Flash Fire
    .moves = {MOVE_DARK_VOID, MOVE_HEAT_WAVE, MOVE_SLUDGE_BOMB, MOVE_SOLAR_BEAM}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 1,
    .species = SPECIES_ROTOM_MOW,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 0, // Levitate
    .moves = {MOVE_THUNDER, MOVE_LEAF_STORM, MOVE_HELPING_HAND, MOVE_CONFUSE_RAY}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 0, // Swarm
    .moves = {MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_MAWILE,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 1, // Intimidate
    .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_FOUL_PLAY}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 3,
    .species = SPECIES_GENGAR,
    .heldItem = ITEM_GENGARITE,
    .ability = 0, // Levitate
    .isShiny = 1,
    .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_SLUDGE_WAVE}
    }
};

// Treecko = Trainer's starters are Houndour/Gastly > rival is Aron/Gible

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute103Treecko[] = {
    {
    .lvl = -1,
    .species = SPECIES_ARON,
	.moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = -1,
    .species = SPECIES_GIBLE,
	.moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute103Treecko[] = {
    {
    .lvl = -1,
    .species = SPECIES_ARON,
	.moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = -1,
    .species = SPECIES_GIBLE,
	.moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRustboroTreecko[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_LAIRON,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 1, //Rock Head
    .moves = {MOVE_AUTOTOMIZE, MOVE_METAL_CLAW, MOVE_ROCK_TOMB, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_GIBLE,
    .heldItem = ITEM_DRAGON_GEM,
    .ability = 2, //Rough Skin
    .moves = {MOVE_SCALE_SHOT, MOVE_SANDSTORM, MOVE_BULLDOZE, MOVE_DRAGON_RAGE}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 2, //Chlorophyll
    .moves = {MOVE_RAZOR_LEAF, MOVE_X_SCISSOR, MOVE_HELPING_HAND, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_PASSHO_BERRY,
    .ability = 2, //Speed Boost
    .moves = {MOVE_DOUBLE_KICK, MOVE_FLAME_CHARGE, MOVE_AERIAL_ACE, MOVE_BULK_UP}
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRustboroTreecko[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_LAIRON,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 1, //Rock Head
    .moves = {MOVE_AUTOTOMIZE, MOVE_METAL_CLAW, MOVE_ROCK_TOMB, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_GIBLE,
    .heldItem = ITEM_DRAGON_GEM,
    .ability = 2, //Rough Skin
    .moves = {MOVE_SCALE_SHOT, MOVE_SANDSTORM, MOVE_BULLDOZE, MOVE_DRAGON_RAGE}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 2, //Chlorophyll
    .moves = {MOVE_RAZOR_LEAF, MOVE_X_SCISSOR, MOVE_HELPING_HAND, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_PASSHO_BERRY,
    .ability = 2, //Speed Boost
    .moves = {MOVE_DOUBLE_KICK, MOVE_FLAME_CHARGE, MOVE_AERIAL_ACE, MOVE_BULK_UP}
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute110Treecko[] = {
    {
    .spread = SPREAD_BRAWLY_ONE_MON,
    .lvl = 0,
    .species = SPECIES_LAIRON,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 1, //Rock Head
    .moves = {MOVE_TAKE_DOWN, MOVE_METAL_CLAW, MOVE_ROCK_SLIDE, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_BRAWLY_ONE_MON,
    .lvl = 0,
    .species = SPECIES_GABITE,
    .heldItem = ITEM_DRAGON_GEM,
    .ability = 2, //Rough Skin
    .moves = {MOVE_DUAL_CHOP, MOVE_SANDSTORM, MOVE_BULLDOZE, MOVE_TAKE_DOWN}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 2, //Chlorophyll
    .moves = {MOVE_RAZOR_LEAF, MOVE_X_SCISSOR, MOVE_HELPING_HAND, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_PASSHO_BERRY,
    .ability = 2, //Speed Boost
    .moves = {MOVE_DOUBLE_KICK, MOVE_FLAME_CHARGE, MOVE_AERIAL_ACE, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_FROGADIER,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 2, //Protean
    .moves = {MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_MUD_SHOT, MOVE_U_TURN}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute110Treecko[] = {
    {
    .spread = SPREAD_BRAWLY_ONE_MON,
    .lvl = 0,
    .species = SPECIES_LAIRON,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 1, //Rock Head
    .moves = {MOVE_TAKE_DOWN, MOVE_METAL_CLAW, MOVE_ROCK_SLIDE, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_BRAWLY_ONE_MON,
    .lvl = 0,
    .species = SPECIES_GABITE,
    .heldItem = ITEM_DRAGON_GEM,
    .ability = 2, //Rough Skin
    .moves = {MOVE_DUAL_CHOP, MOVE_SANDSTORM, MOVE_BULLDOZE, MOVE_TAKE_DOWN}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 2, //Chlorophyll
    .moves = {MOVE_RAZOR_LEAF, MOVE_X_SCISSOR, MOVE_HELPING_HAND, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_PASSHO_BERRY,
    .ability = 2, //Speed Boost
    .moves = {MOVE_DOUBLE_KICK, MOVE_FLAME_CHARGE, MOVE_AERIAL_ACE, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_FROGADIER,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 2, //Protean
    .moves = {MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_MUD_SHOT, MOVE_U_TURN}
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute119Treecko[] = {
    {
    .spread = SPREAD_BRAWLY_ONE_MON,
    .lvl = 0,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 1, // Rock Head
    .moves = {MOVE_DOUBLE_EDGE, MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 2,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_GARCHOMPITE,
    .ability = 2, // Rough Skin
    .moves = {MOVE_DRAGON_CLAW, MOVE_SANDSTORM, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = -1,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 2, // Chlorophyll
    .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 2, // Speed Boost
    .moves = {MOVE_BRAVE_BIRD, MOVE_BLAZE_KICK, MOVE_HIGH_JUMP_KICK, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = -1,
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 2, // Protean
    .moves = {MOVE_WATER_SHURIKEN, MOVE_BLIZZARD, MOVE_DARK_PULSE, MOVE_SUBSTITUTE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 1, // Pastel Veil
    .moves = {MOVE_PSYCHO_CUT, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_HEAL_PULSE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute119Treecko[] = {
    {
    .spread = SPREAD_BRAWLY_ONE_MON,
    .lvl = 0,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 1, // Rock Head
    .moves = {MOVE_DOUBLE_EDGE, MOVE_HEAVY_SLAM, MOVE_EARTHQUAKE, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 2,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_GARCHOMPITE,
    .ability = 2, // Rough Skin
    .moves = {MOVE_DRAGON_CLAW, MOVE_SANDSTORM, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = -1,
    .species = SPECIES_LEAFEON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 2, // Chlorophyll
    .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 2, // Speed Boost
    .moves = {MOVE_BRAVE_BIRD, MOVE_BLAZE_KICK, MOVE_HIGH_JUMP_KICK, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = -1,
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 2, // Protean
    .moves = {MOVE_WATER_SHURIKEN, MOVE_BLIZZARD, MOVE_DARK_PULSE, MOVE_SUBSTITUTE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 1, // Pastel Veil
    .moves = {MOVE_PSYCHO_CUT, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_HEAL_PULSE}
    }
};

static const struct TrainerMonCustomized sParty_MayLilycoveTreecko[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 2,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = 2, // Rough Skin
    .moves = {MOVE_DRAGON_RUSH, MOVE_POISON_JAB, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .lvl = 2,
    .species = SPECIES_ESPEON,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = 2, // Magic Bounce
    .moves = {MOVE_TRICK, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_TOXIC}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_NAUGHTY,
    .lvl = 2,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Speed Boost
    .moves = {MOVE_STONE_EDGE, MOVE_FLARE_BLITZ, MOVE_LOW_KICK, MOVE_SWORDS_DANCE}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .lvl = 1,
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 2, // Protean
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .lvl = 1,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .heldItem = ITEM_KEE_BERRY,
    .ability = 1, // Pastel Veil
    .moves = {MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .lvl = 3,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_AGGRONITE,
    .isShiny = 1,
    .ability = 1, // Rock Head
    .moves = {MOVE_CURSE, MOVE_HEAVY_SLAM, MOVE_REST, MOVE_SLEEP_TALK}
    }
};

static const struct TrainerMonCustomized sParty_BrendanLilycoveTreecko[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 2,
    .species = SPECIES_GARCHOMP,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = 2, // Rough Skin
    .moves = {MOVE_DRAGON_RUSH, MOVE_POISON_JAB, MOVE_STONE_EDGE, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .lvl = 2,
    .species = SPECIES_ESPEON,
    .heldItem = ITEM_CHOICE_SPECS,
    .ability = 2, // Magic Bounce
    .moves = {MOVE_TRICK, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_TOXIC}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_NAUGHTY,
    .lvl = 2,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Speed Boost
    .moves = {MOVE_STONE_EDGE, MOVE_FLARE_BLITZ, MOVE_LOW_KICK, MOVE_SWORDS_DANCE}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .lvl = 1,
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 2, // Protean
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .lvl = 1,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .heldItem = ITEM_KEE_BERRY,
    .ability = 1, // Pastel Veil
    .moves = {MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPDEF_CAREFUL,
    .lvl = 3,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_AGGRONITE,
    .isShiny = 1,
    .ability = 1, // Rock Head
    .moves = {MOVE_CURSE, MOVE_HEAVY_SLAM, MOVE_REST, MOVE_SLEEP_TALK}
    }
};

// Torchic = Trainer's starters are Aron/Gible > rival is Riolu/Ralts

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute103Torchic[] = {
    {
    .lvl = -1,
    .species = SPECIES_RIOLU,
	.moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = -1,
    .species = SPECIES_RALTS,
	.moves = {MOVE_GROWL, MOVE_STORED_POWER, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute103Torchic[] = {
    {
    .lvl = -1,
    .species = SPECIES_RIOLU,
	.moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = -1,
    .species = SPECIES_RALTS,
	.moves = {MOVE_GROWL, MOVE_STORED_POWER, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRustboroTorchic[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 2, //Justified
    .moves = {MOVE_AURA_SPHERE, MOVE_POWER_UP_PUNCH, MOVE_DETECT, MOVE_METAL_CLAW}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_KIRLIA,
    .heldItem = ITEM_PSYCHIC_GEM,
    .ability = 1, //Trace
    .moves = {MOVE_DRAINING_KISS, MOVE_MAGICAL_LEAF, MOVE_CONFUSION, MOVE_HYPNOSIS}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 0, //Flash Fire
    .moves = {MOVE_FIRE_FANG, MOVE_DIG, MOVE_HELPING_HAND, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 0, //Torrent
    .moves = {MOVE_MUD_SHOT, MOVE_WATER_PULSE, MOVE_DIG, MOVE_AVALANCHE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRustboroTorchic[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 2, //Justified
    .moves = {MOVE_AURA_SPHERE, MOVE_POWER_UP_PUNCH, MOVE_DETECT, MOVE_METAL_CLAW}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_KIRLIA,
    .heldItem = ITEM_PSYCHIC_GEM,
    .ability = 1, //Trace
    .moves = {MOVE_DRAINING_KISS, MOVE_MAGICAL_LEAF, MOVE_CONFUSION, MOVE_HYPNOSIS}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 0, //Flash Fire
    .moves = {MOVE_FIRE_FANG, MOVE_DIG, MOVE_HELPING_HAND, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 0, //Torrent
    .moves = {MOVE_MUD_SHOT, MOVE_WATER_PULSE, MOVE_DIG, MOVE_AVALANCHE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute110Torchic[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 2, //Justified
    .moves = {MOVE_AURA_SPHERE, MOVE_POWER_UP_PUNCH, MOVE_DRAIN_PUNCH, MOVE_BULLET_PUNCH}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 0,
    .species = SPECIES_KIRLIA,
    .heldItem = ITEM_PSYCHIC_GEM,
    .ability = 1, //Trace
    .moves = {MOVE_DRAINING_KISS, MOVE_MAGICAL_LEAF, MOVE_PSYBEAM, MOVE_HEAL_PULSE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 0, //Flash Fire
    .moves = {MOVE_FIRE_FANG, MOVE_DIG, MOVE_HELPING_HAND, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 0, //Torrent
    .moves = {MOVE_MUD_BOMB, MOVE_WATER_PULSE, MOVE_DIG, MOVE_AVALANCHE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_BAYLEEF,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, //Overgrow
    .moves = {MOVE_RAZOR_LEAF, MOVE_GIGA_DRAIN, MOVE_SWAGGER, MOVE_IRON_TAIL}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute110Torchic[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 2, //Justified
    .moves = {MOVE_AURA_SPHERE, MOVE_POWER_UP_PUNCH, MOVE_DRAIN_PUNCH, MOVE_BULLET_PUNCH}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 0,
    .species = SPECIES_KIRLIA,
    .heldItem = ITEM_PSYCHIC_GEM,
    .ability = 1, //Trace
    .moves = {MOVE_DRAINING_KISS, MOVE_MAGICAL_LEAF, MOVE_PSYBEAM, MOVE_HEAL_PULSE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 0, //Flash Fire
    .moves = {MOVE_FIRE_FANG, MOVE_DIG, MOVE_HELPING_HAND, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 0, //Torrent
    .moves = {MOVE_MUD_BOMB, MOVE_WATER_PULSE, MOVE_DIG, MOVE_AVALANCHE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_BAYLEEF,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, //Overgrow
    .moves = {MOVE_RAZOR_LEAF, MOVE_GIGA_DRAIN, MOVE_SWAGGER, MOVE_IRON_TAIL}
    }
};

static const struct TrainerMonItemCustomMoves sParty_BrendanRoute119Torchic[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 2, // Justified
    .moves = {MOVE_AURA_SPHERE, MOVE_EXTREME_SPEED, MOVE_CLOSE_COMBAT, MOVE_METEOR_MASH}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 2,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_GARDEVOIRITE,
    .ability = 1, // Trace
    .moves = {MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_HYPER_BEAM}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = -1,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 0, // Flash Fire
    .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_HELPING_HAND, MOVE_WILL_O_WISP}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 0, // Torrent
    .moves = {MOVE_EARTHQUAKE, MOVE_MUDDY_WATER, MOVE_HAMMER_ARM, MOVE_ICE_PUNCH}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = -1,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Triage
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_ARBOK,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Shed Skin
    .moves = {MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MayRoute119Torchic[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 2, // Justified
    .moves = {MOVE_AURA_SPHERE, MOVE_EXTREME_SPEED, MOVE_CLOSE_COMBAT, MOVE_METEOR_MASH}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 2,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_GARDEVOIRITE,
    .ability = 1, // Trace
    .moves = {MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_HYPER_BEAM}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = -1,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 0, // Flash Fire
    .moves = {MOVE_FLARE_BLITZ, MOVE_DOUBLE_EDGE, MOVE_HELPING_HAND, MOVE_WILL_O_WISP}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 0, // Torrent
    .moves = {MOVE_EARTHQUAKE, MOVE_MUDDY_WATER, MOVE_HAMMER_ARM, MOVE_ICE_PUNCH}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = -1,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Triage
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_ARBOK,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Shed Skin
    .moves = {MOVE_CRUNCH, MOVE_POISON_JAB, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMonCustomized sParty_BrendanLilycoveTorchic[] = {
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 2,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 1, // Trace
    .moves = {MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_PSYCHIC, MOVE_SHADOW_BALL}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_UMBREON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // Synchronize
    .moves = {MOVE_WISH, MOVE_TOXIC, MOVE_FOUL_PLAY, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 1,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 0, // Torrent
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_WIDE_GUARD, MOVE_ICE_PUNCH}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 1,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Triage
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_GIGA_DRAIN, MOVE_AROMATHERAPY, MOVE_SYNTHESIS}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_ARBOK,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 0, // Intimidate
    .moves = {MOVE_SUCKER_PUNCH, MOVE_GUNK_SHOT, MOVE_EARTHQUAKE, MOVE_COIL}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 3,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_LUCARIONITE,
    .ability = 2, // Justified
    .isShiny = 1,
    .moves = {MOVE_IRON_TAIL, MOVE_BULLET_PUNCH, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMonCustomized sParty_MayLilycoveTorchic[] = {
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 2,
    .species = SPECIES_GARDEVOIR,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 1, // Trace
    .moves = {MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_PSYCHIC, MOVE_SHADOW_BALL}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_UMBREON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // Synchronize
    .moves = {MOVE_WISH, MOVE_TOXIC, MOVE_FOUL_PLAY, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 1,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_RINDO_BERRY,
    .ability = 0, // Torrent
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_WIDE_GUARD, MOVE_ICE_PUNCH}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 1,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Triage
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_GIGA_DRAIN, MOVE_AROMATHERAPY, MOVE_SYNTHESIS}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_ARBOK,
    .heldItem = ITEM_BLACK_SLUDGE,
    .ability = 0, // Intimidate
    .moves = {MOVE_SUCKER_PUNCH, MOVE_GUNK_SHOT, MOVE_EARTHQUAKE, MOVE_COIL}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 3,
    .species = SPECIES_LUCARIO,
    .heldItem = ITEM_LUCARIONITE,
    .ability = 2, // Justified
    .isShiny = 1,
    .moves = {MOVE_IRON_TAIL, MOVE_BULLET_PUNCH, MOVE_CLOSE_COMBAT, MOVE_SWORDS_DANCE}
    }
};

// Grunts

static const struct TrainerMonNoItemDefaultMoves sParty_GruntAquaHideout1[] = {
    {
    .lvl = 32,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
    .lvl = 36,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern2[] = {
    {
    .lvl = 36,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
    .lvl = 36,
    .species = SPECIES_ZUBAT,
    }
};

// Route 102

static const struct TrainerMonNoItemDefaultMoves sParty_Calvin1[] = {
    {
    .iv = 0,
    .lvl = -4,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 0,
    .lvl = -4,
    .species = SPECIES_RATTATA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Calvin2[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Calvin3[] = {
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 20,
    .lvl = 30,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Calvin4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 30,
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Calvin5[] = {
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Rick[] = {
    {
    .iv = 0,
    .lvl = -4,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 0,
    .lvl = -4,
    .species = SPECIES_ODDISH,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Allen[] = {
    {
    .iv = 0,
    .lvl = -4,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Tiana[] = {
    {
    .iv = 0,
    .lvl = -4,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 0,
    .lvl = -4,
    .species = SPECIES_LILLIPUP,
    }
};

// Route 104 South 

static const struct TrainerMonNoItemDefaultMoves sParty_Billy[] = {
    {
    .iv = 0,
    .lvl = -4,
    .species = SPECIES_DIGLETT,
    },
    {
    .iv = 0,
    .lvl = -4,
    .species = SPECIES_POLIWAG,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Darian[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cindy1[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 2, //Quick Feet
    .moves = {MOVE_RETURN, MOVE_WATER_PULSE, MOVE_ICY_WIND, MOVE_GRASS_KNOT}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 1,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, //Quick Feet
    .moves = {MOVE_HELPING_HAND, MOVE_PROTECT, MOVE_RETURN, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cindy2[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 11,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Cindy3[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Cindy4[] = {
    {
    .iv = 20,
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Cindy5[] = {
    {
    .iv = 30,
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cindy6[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

 // Route 104 North

static const struct TrainerMonItemCustomMoves sParty_Winston1[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -4,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_BABY_DOLL_EYES, MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_GROWL}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -4,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_BABY_DOLL_EYES, MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_GROWL}
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Winston2[] = {
    {
    .iv = 0,
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Winston3[] = {
    {
    .iv = 0,
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Winston4[] = {
    {
    .iv = 0,
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winston5[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Haley1[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_LOTAD,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_NATURAL_GIFT, MOVE_BUBBLE, MOVE_ABSORB, MOVE_ASTONISH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_EXEGGCUTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_UPROAR, MOVE_BARRAGE, MOVE_GROWL}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Haley2[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Haley3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Haley4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Haley5[] = {
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMonItemCustomMoves sParty_GinaAndMia1[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_PHANTUMP,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 0, //
    .moves = {MOVE_NIGHT_SHADE, MOVE_HYPNOSIS, MOVE_LICK, MOVE_CURSE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_PUMPKABOO,
    .heldItem = ITEM_NONE,
    .ability = 2, //Insomnia
    .moves = {MOVE_RAZOR_LEAF, MOVE_TRICK_OR_TREAT, MOVE_CONFUSE_RAY, MOVE_ASTONISH}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_GinaAndMia2[] = {
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_DUSKULL,
    .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = 10,
    .species = SPECIES_SHROOMISH,
    .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ivan[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_CORPHISH,
    .heldItem = ITEM_NONE,
    .ability = 2, //Adaptability
    .moves = {MOVE_BUBBLE_BEAM, MOVE_VISE_GRIP, MOVE_LEER, MOVE_HARDEN}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_STARYU,
    .heldItem = ITEM_NONE,
    .ability = 0, //Illuminate
    .moves = {MOVE_RECOVER, MOVE_WATER_GUN, MOVE_PSYWAVE, MOVE_SWIFT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_MAGIKARP,
    .heldItem = ITEM_NONE,
    .ability = 0, //Swift Swim
    .moves = {MOVE_SPLASH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE}
    }
};

//Petalburg Woods

static const struct TrainerMonItemCustomMoves sParty_GruntPetalburgWoods[] = {
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_ZORUA,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_THIEF, MOVE_TAUNT, MOVE_HELPING_HAND, MOVE_FURY_SWIPES}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CARVANHA,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 2, //Speed Boost
    .moves = {MOVE_BITE, MOVE_AQUA_JET, MOVE_FOCUS_ENERGY, MOVE_LEER}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_SANDILE,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_SAND_TOMB, MOVE_BITE, MOVE_STEALTH_ROCK, MOVE_HELPING_HAND}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_POOCHYENA,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = 1, //Quick Feet
    .moves = {MOVE_BITE, MOVE_MUD_SLAP, MOVE_ICE_FANG, MOVE_POISON_FANG}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lyle[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_BUTTERFREE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_BUG_BITE, MOVE_GUST, MOVE_POISON_POWDER, MOVE_STUN_SPORE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_BEEDRILL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_STING, MOVE_FURY_CUTTER, MOVE_FURY_ATTACK, MOVE_BUG_BITE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_LEDYBA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWIFT, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_BUG_BITE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -2,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_BUG_BITE, MOVE_GUST, MOVE_ABSORB, MOVE_POISON_STING}
    }
};

static const struct TrainerMonItemCustomMoves sParty_James1[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_NINCADA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FURY_SWIPES, MOVE_FURY_SWIPES, MOVE_ABSORB, MOVE_SCRATCH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_JOLTIK,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ELECTROWEB, MOVE_FURY_CUTTER, MOVE_THUNDER_WAVE, MOVE_ABSORB}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_James2[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_James3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_James4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_James5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_NINJASK,
    }
};

// Route 116

static const struct TrainerMonItemCustomMoves sParty_Joey[] = {
    {
    .lvl = -4,
    .species = SPECIES_MACHOP,
    .moves = {MOVE_LOW_KICK, MOVE_SEISMIC_TOSS, MOVE_LEER, MOVE_KNOCK_OFF}
    },
    {
    .lvl = -4,
    .species = SPECIES_PIKACHU,
    .moves = {MOVE_ELECTRO_BALL, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP, MOVE_GRASS_KNOT}
    },
};

static const struct TrainerMonItemCustomMoves sParty_Jose[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_ANORITH,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 0, //Battle Armor
    .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_BRINE, MOVE_SWORDS_DANCE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_SHUCKLE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, //Sturdy
    .moves = {MOVE_HELPING_HAND, MOVE_STEALTH_ROCK, MOVE_POWER_TRICK, MOVE_STRUGGLE_BUG}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = -2,
    .species = SPECIES_PINSIR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 2, //Moxie
    .moves = {MOVE_BUG_BITE, MOVE_STORM_THROW, MOVE_X_SCISSOR, MOVE_STONE_EDGE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Karen1[] = {
    {
    .lvl = -1,
    .species = SPECIES_CYNDAQUIL,
    .moves = {MOVE_EMBER, MOVE_FLAME_WHEEL, MOVE_SWIFT, MOVE_QUICK_ATTACK}
    },
    {
    .lvl = -1,
    .species = SPECIES_BULBASAUR,
    .moves = {MOVE_VENOSHOCK, MOVE_POISON_POWDER, MOVE_SLEEP_POWDER, MOVE_RAZOR_LEAF}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Karen2[] = {
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Karen3[] = {
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Karen4[] = {
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Karen5[] = {
    {
    .iv = 50,
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 50,
    .lvl = 35,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Clark[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -4,
    .species = SPECIES_GEODUDE,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 1, //Sturdy
    .moves = {MOVE_ROLLOUT, MOVE_BULLDOZE, MOVE_DEFENSE_CURL, MOVE_ROCK_POLISH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -4,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_ROLLOUT, MOVE_FURY_CUTTER, MOVE_MAGNITUDE, MOVE_SWIFT}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Johnson[] = {
    {
    .lvl = -4,
    .species = SPECIES_JOLTIK,
    .moves = {MOVE_FURY_CUTTER, MOVE_ELECTROWEB, MOVE_SPIDER_WEB, MOVE_THUNDER_WAVE}
    },
    {
    .lvl = -4,
    .species = SPECIES_EKANS,
    .moves = {MOVE_POISON_STING, MOVE_SCREECH, MOVE_GLARE, MOVE_BITE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Devan[] = {
    {
    .lvl = -4,
    .species = SPECIES_MAGNEMITE,
    .moves = {MOVE_MAGNET_BOMB, MOVE_SONIC_BOOM, MOVE_THUNDER_SHOCK, MOVE_THUNDER_WAVE}
    },
    {
    .lvl = -4,
    .species = SPECIES_DIGLETT,
    .moves = {MOVE_MAGNITUDE, MOVE_GROWL, MOVE_MUD_SLAP, MOVE_ASTONISH}
    }
};

// Route 116: Requires Cut

static const struct TrainerMonItemCustomMoves sParty_Sarah[] = {
    {
    .lvl = -3,
    .species = SPECIES_LOMBRE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ASTONISH, MOVE_ABSORB, MOVE_BUBBLE, MOVE_FAKE_OUT}
    },
    {
    .lvl = -3,
    .species = SPECIES_FURRET,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_AGILITY, MOVE_QUICK_ATTACK, MOVE_DEFENSE_CURL, MOVE_FURY_SWIPES}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dawson[] = {
    {
    .lvl = -4,
    .species = SPECIES_PANSAGE,
    .heldItem = ITEM_NUGGET,
    .moves = MOVE_LEECH_SEED, MOVE_VINE_WHIP, MOVE_LEER
    },
    {
    .lvl = -4,
    .species = SPECIES_PANSEAR,
    .moves = MOVE_INCINERATE, MOVE_BITE, MOVE_YAWN, MOVE_PLAY_NICE
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jerry1[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_RALTS,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_PIDGEY,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jerry2[] = {
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_RALTS,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jerry3[] = {
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = 30,
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jerry4[] = {
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = 40,
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jerry5[] = {
    {
    .iv = 50,
    .lvl = 34,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = 50,
    .lvl = 34,
    .species = SPECIES_BANETTE,
    },
    {
    .iv = 50,
    .lvl = 34,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Janice[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_LEDYBA,
    }
};

// Rusturf Tunnel

static const struct TrainerMonItemCustomMoves sParty_GruntRusturfTunnel[] = {
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_ZORUA,
    .heldItem = ITEM_DARK_GEM,
    .moves = {MOVE_THIEF, MOVE_TAUNT, MOVE_HELPING_HAND, MOVE_FEINT_ATTACK}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_PYUKUMUKU,
    .heldItem = ITEM_NONE,
    .ability = 0, //Innards Out
    .moves = {MOVE_BIDE, MOVE_HELPING_HAND, MOVE_TAUNT, MOVE_SAFEGUARD}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_SANDILE,
    .heldItem = ITEM_NONE,
    .ability = 0, //Intimidate
    .moves = {MOVE_SAND_TOMB, MOVE_CRUNCH, MOVE_TORMENT, MOVE_DIG}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_CARVANHA,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 2, //Speed Boost
    .moves = {MOVE_BITE, MOVE_SWAGGER, MOVE_AQUA_JET, MOVE_ICE_FANG}
    }
};
// From Verdanturf
static const struct TrainerMonNoItemCustomMoves sParty_Mike1[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_PELIPPER,
    .moves = {MOVE_GUST, MOVE_WATER_PULSE, MOVE_AIR_SLASH, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_HIPPOPOTAS,
    .moves = {MOVE_SANDSTORM, MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_BITE}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Mike2[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GEODUDE_ALOLAN,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GEODUDE,
    }
};

// Rustboro gym

static const struct TrainerMonItemCustomMoves sParty_Josh[] = {
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_BONSLY,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 0, //Sturdy
    .moves = {MOVE_ROCK_THROW, MOVE_COPYCAT, MOVE_BULLDOZE, MOVE_MUD_SLAP}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_GEODUDE,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 1, //Sturdy
    .moves = {MOVE_ROLLOUT, MOVE_BULLDOZE, MOVE_SANDSTORM, MOVE_ROCK_POLISH}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Tommy[] = {
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 0, //Rock Head
    .moves = {MOVE_SMACK_DOWN, MOVE_SAND_TOMB, MOVE_BULLDOZE, MOVE_ROCK_TOMB}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_ANORITH,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 0, //Battle Armor
    .moves = {MOVE_FURY_CUTTER, MOVE_WATER_GUN, MOVE_SMACK_DOWN, MOVE_METAL_CLAW}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Marc[] = {
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_ARON,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 0, //Rock Head
    .moves = {MOVE_METAL_CLAW, MOVE_HEADBUTT, MOVE_ROCK_SMASH, MOVE_ROCK_TOMB}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_AMAURA,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 0, //Refrigerate
    .moves = {MOVE_ICY_WIND, MOVE_ROUND, MOVE_ANCIENT_POWER, MOVE_ROCK_TOMB}
    }
};

static const struct TrainerMonCustomized sParty_Roxanne1[] = {
    {
    .spread = SPREAD_ROXANNE_ONE_MON,
    .lvl = 15,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = 2, //Weak Armor
    .moves = {MOVE_STEALTH_ROCK, MOVE_SANDSTORM, MOVE_BULLDOZE, MOVE_ROCK_TOMB}
    },
    {
    .spread = SPREAD_ROXANNE_ONE_MON,
    .lvl = 14,
    .species = SPECIES_LILEEP,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 2, //Storm Drain
    .moves = {MOVE_CONFUSE_RAY, MOVE_ROCK_TOMB, MOVE_PROTECT, MOVE_MEGA_DRAIN}
    },
    {
    .spread = SPREAD_ROXANNE_ONE_MON,
    .lvl = 14,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 0, //Levitate
    .moves = {MOVE_PSYWAVE, MOVE_CALM_MIND, MOVE_ROCK_TOMB, MOVE_BULLDOZE}
    },
    {
    .spread = SPREAD_ROXANNE_ONE_MON,
    .lvl = 15,
    .species = SPECIES_CARBINK,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 2, //Sturdy
    .moves = {MOVE_ANCIENT_POWER, MOVE_DRAINING_KISS, MOVE_ROCK_TOMB, MOVE_SANDSTORM}
    },
    {
    .spread = SPREAD_ROXANNE_NOSEPASS,
    .lvl = 16,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_BERRY_JUICE,
    .ability = 0, // Sturdy
    .isShiny = 1,
    .moves = {MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE, MOVE_ROCK_TOMB, MOVE_BULLDOZE}
    },
    {
    .spread = SPREAD_ROXANNE_ONE_MON,
    .lvl = 15,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 1, //Rock Head
    .moves = {MOVE_ROCK_TOMB, MOVE_LOW_KICK, MOVE_WOOD_HAMMER, MOVE_BULLDOZE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Roxanne2[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 32,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 35,
    .species = SPECIES_KABUTO,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 35,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Roxanne3[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 37,
    .species = SPECIES_OMANYTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 37,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 40,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 40,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 42,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Roxanne4[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 42,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 42,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 45,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 45,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 47,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Roxanne5[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 47,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 47,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 47,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 52,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

// Route 106

static const struct TrainerMonNoItemDefaultMoves sParty_Ned[] = {
    {
    .iv = 50,
    .lvl = -3,
    .species = SPECIES_HORSEA,
    },
    {
    .iv = 50,
    .lvl = -3,
    .species = SPECIES_KRABBY,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Elliot1[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SHELLDER,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CHINCHOU,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Elliot2[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Elliot3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Elliot4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = 31,
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Elliot5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Kyla[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DEWPIDER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Douglas[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_DEWGONG,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_TENTACOOL,
    }
};

// Dewford Gym

static const struct TrainerMonItemCustomMoves sParty_Jocelyn[] = {
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 2, //Speed Boost
    .moves = {MOVE_DOUBLE_KICK, MOVE_FLAME_CHARGE, MOVE_AERIAL_ACE, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -4,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 2, //Unburden
    .moves = {MOVE_JUMP_KICK, MOVE_BRICK_BREAK, MOVE_BLAZE_KICK, MOVE_BULK_UP}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Laura[] = {
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -4,
    .species = SPECIES_MANKEY,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 1, //Anger Point
    .moves = {MOVE_LOW_KICK, MOVE_SWAGGER, MOVE_KARATE_CHOP, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -4,
    .species = SPECIES_MAKUHITA,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 1, //Guts
    .moves = {MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_FORCE_PALM, MOVE_BULK_UP}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Takao[] = {
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -4,
    .species = SPECIES_TIMBURR,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 0, //Guts
    .moves = {MOVE_LOW_KICK, MOVE_ROCK_THROW, MOVE_WAKE_UP_SLAP, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -4,
    .species = SPECIES_SCRAGGY,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = 2, //Intimidate
    .moves = {MOVE_LOW_KICK, MOVE_SWAGGER, MOVE_PAYBACK, MOVE_BULK_UP}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brenden[] = {
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -4,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, //Pure Power
    .moves = {MOVE_HIDDEN_POWER, MOVE_FORCE_PALM, MOVE_CONFUSION, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -4,
    .species = SPECIES_MIENFOO,
    .heldItem = ITEM_FOCUS_BAND,
    .ability = 0, //Inner Focus
    .moves = {MOVE_FAKE_OUT, MOVE_FORCE_PALM, MOVE_DETECT, MOVE_BULK_UP}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lilith[] = {
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -4,
    .species = SPECIES_MONFERNO,
    .heldItem = ITEM_FIRE_GEM,
    .ability = 2, //Iron Fist
    .moves = {MOVE_MACH_PUNCH, MOVE_FIRE_PUNCH, MOVE_POWER_UP_PUNCH, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -4,
    .species = SPECIES_STUFFUL,
    .heldItem = ITEM_ORAN_BERRY,
    .ability = 0, //Fluffy
    .moves = {MOVE_BRUTAL_SWING, MOVE_FLAIL, MOVE_PAYBACK, MOVE_BULK_UP}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cristian[] = {
    {
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .lvl = -4,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_IRON_BALL,
    .ability = 1, //Technician
    .moves = {MOVE_TRIPLE_KICK, MOVE_HELPING_HAND, MOVE_FAKE_OUT, MOVE_GYRO_BALL}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_QUICK_CLAW,
    .ability = 2, //Moxie
    .moves = {MOVE_ARM_THRUST, MOVE_BULLET_SEED, MOVE_AERIAL_ACE, MOVE_BULK_UP}
    },
};

static const struct TrainerMonCustomized sParty_Brawly1[] = {
{
.spread = SPREAD_BRAWLY_ONE_MON,
.lvl = 23,
.species = SPECIES_MEDITITE,
.ability = 0, //Pure Power
.heldItem = ITEM_LIGHT_CLAY,
.moves = {MOVE_ZEN_HEADBUTT, MOVE_LIGHT_SCREEN, MOVE_BULK_UP, MOVE_FORCE_PALM}
},
{
.spread = SPREAD_BRAWLY_ONE_MON,
.lvl = 23,
.species = SPECIES_HITMONCHAN,
.heldItem = ITEM_MUSCLE_BAND,
.ability = 1, //Iron Fist
.moves = {MOVE_BULLET_PUNCH, MOVE_DRAIN_PUNCH, MOVE_BULK_UP, MOVE_THUNDER_PUNCH}
},
{
.spread = SPREAD_BRAWLY_ONE_MON,
.lvl = 23,
.species = SPECIES_BRELOOM,
.heldItem = ITEM_TOXIC_ORB,
.ability = 1, //Poison Heal
.moves = {MOVE_DRAIN_PUNCH, MOVE_SUBSTITUTE, MOVE_BULLET_SEED, MOVE_BULK_UP}
},
{
.spread = SPREAD_BRAWLY_ONE_MON,
.lvl = 24,
.species = SPECIES_HAWLUCHA,
.heldItem = ITEM_SITRUS_BERRY,
.ability = 1, //Unburden
.moves = {MOVE_BACKFLIP, MOVE_BULK_UP, MOVE_ROOST, MOVE_AERIAL_ACE}
},
{
.spread = SPREAD_BRAWLY_ONE_MON,
.lvl = 23,
.species = SPECIES_CROAGUNK,
.heldItem = ITEM_FOCUS_SASH,
.ability = 2, //Poison Touch
.moves = {MOVE_VENOSHOCK, MOVE_BULK_UP, MOVE_LOW_SWEEP, MOVE_ICE_PUNCH}
},
{
.spread = SPREAD_BRAWLY_ONE_MON,
.lvl = 25,
.species = SPECIES_HARIYAMA,
.heldItem = ITEM_FLAME_ORB,
.isShiny = 1,
.ability = 1, //Guts
.moves = {MOVE_KNOCK_OFF, MOVE_BRICK_BREAK, MOVE_ICE_PUNCH, MOVE_BULK_UP}
}
};

static const struct TrainerMonItemCustomMoves sParty_Brawly2[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 35,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 37,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brawly3[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 38,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 38,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 40,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brawly4[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 40,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 45,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 47,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Brawly5[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

// Route 109 Beach

static const struct TrainerMonItemCustomMoves sParty_Huey[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_AIR_CUTTER, MOVE_WATER_PULSE, MOVE_QUICK_ATTACK, MOVE_BRINE}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_MANKEY,
    .moves = {MOVE_CROSS_CHOP, MOVE_SWAGGER, MOVE_LOW_KICK, MOVE_BULK_UP}
    },
};

static const struct TrainerMonItemCustomMoves sParty_Edmond[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_AIR_CUTTER, MOVE_WATER_PULSE, MOVE_QUICK_ATTACK, MOVE_BRINE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -4,
    .species = SPECIES_SKITTY,
    .moves = {MOVE_ATTRACT, MOVE_COPYCAT, MOVE_ASSIST, MOVE_SING}
    },
};

static const struct TrainerMonItemCustomMoves sParty_Hailey[] = {
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NUGGET,
    .moves = MOVE_ROLLOUT, MOVE_AQUA_JET, MOVE_DISARMING_VOICE, MOVE_NONE
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -4,
    .species = SPECIES_DIGLETT,
    .heldItem = ITEM_NUGGET,
    .moves = MOVE_DIG, MOVE_ROCK_THROW, MOVE_MAGNITUDE, MOVE_NONE
    }
};

static const struct TrainerMonItemCustomMoves sParty_Chandler[] = {
    {
    .lvl = -2,
    .species = SPECIES_TENTACOOL,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ACID_SPRAY, MOVE_BUBBLE_BEAM, MOVE_WATER_PULSE, MOVE_TOXIC_SPIKES}
    },
    {
    .lvl = -4,
    .species = SPECIES_SEEL,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ICY_WIND, MOVE_AQUA_JET, MOVE_ENCORE, MOVE_REST}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ricky1[] = {
    {
    .lvl = 0,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_SAND_ATTACK, MOVE_HEADBUTT, MOVE_TAIL_WHIP, MOVE_SURF}
    },
    {
    .lvl = 0,
    .species = SPECIES_PIKACHU,
    .moves = {MOVE_ELECTRO_BALL, MOVE_QUICK_ATTACK, MOVE_SURF, MOVE_GRASS_KNOT}
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_Ricky2[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Ricky3[] = {
    {
    .iv = 20,
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Ricky4[] = {
    {
    .iv = 30,
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Ricky5[] = {
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lola1[] = {
    {
    .lvl = -2,
    .species = SPECIES_AZURILL,
    .moves = {MOVE_ROLLOUT, MOVE_WATER_PULSE, MOVE_PLAY_ROUGH, MOVE_NONE}
    },
    {
    .lvl = -3,
    .species = SPECIES_EEVEE,
    .moves = {MOVE_HELPING_HAND, MOVE_TAKE_DOWN, MOVE_BABY_DOLL_EYES, MOVE_ASSIST}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lola2[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lola3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lola4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lola5[] = {
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    }
};

// Seashore House

static const struct TrainerMonItemCustomMoves sParty_Simon[] = {
    {
    .lvl = 1,
    .species = SPECIES_CLEFAIRY,
    .moves = {MOVE_METRONOME, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 1,
    .species = SPECIES_TOGEPI,
    .moves = {MOVE_METRONOME, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Johanna[] = {
    {
    .lvl = -2,
    .species = SPECIES_GOLDEEN,
    .moves = {MOVE_FURY_ATTACK, MOVE_AQUA_RING, MOVE_WATER_PULSE, MOVE_WATER_SPORT}
    },
    {
    .lvl = -2,
    .species = SPECIES_GLAMEOW,
    .moves = {MOVE_FURY_SWIPES, MOVE_CHARM, MOVE_FAKE_OUT, MOVE_HYPNOSIS}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dwayne[] = {
    {
    .lvl = -3,
    .species = SPECIES_WINGULL,
    .moves = {MOVE_AIR_CUTTER, MOVE_WATER_PULSE, MOVE_SUPERSONIC, MOVE_TAILWIND}
    },
    {
    .lvl = -2,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_FAKE_OUT, MOVE_ARM_THRUST, MOVE_BULK_UP, MOVE_FACADE}
    },
    {
    .lvl = -2,
    .species = SPECIES_TENTACOOL,
    .moves = {MOVE_WATER_PULSE, MOVE_ACID_SPRAY, MOVE_CONSTRICT, MOVE_SUPERSONIC}
    },
    {
    .lvl = 0,
    .species = SPECIES_SHELLOS,
    .moves = {MOVE_WATER_PULSE, MOVE_HIDDEN_POWER, MOVE_RAIN_DANCE, MOVE_MUD_BOMB}
    },
    {
    .lvl = -1,
    .species = SPECIES_OCTILLERY,
    .moves = {MOVE_OCTAZOOKA, MOVE_AURORA_BEAM, MOVE_BUBBLE_BEAM, MOVE_SIGNAL_BEAM}
    },
    {
    .lvl = 0,
    .species = SPECIES_LOMBRE,
    .moves = {MOVE_FAKE_OUT, MOVE_BUBBLE_BEAM, MOVE_NATURE_POWER, MOVE_MEGA_DRAIN}
    }
};

// Slateport Museum

static const struct TrainerMonItemCustomMoves sParty_GruntMuseum1[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_CARVANHA,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, //Speed Boost
    .moves = {MOVE_CRUNCH, MOVE_SURF, MOVE_PROTECT, MOVE_ICE_FANG}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, //Drizzle
    .moves = {MOVE_SCALD, MOVE_ICY_WIND, MOVE_PROTECT, MOVE_TOXIC}
    }
};

static const struct TrainerMonItemCustomMoves sParty_GruntMuseum2[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_EVIOLITE,
    .ability = 0, //Oblivious
    .moves = {MOVE_YAWN, MOVE_SURF, MOVE_SKILL_SWAP, MOVE_HELPING_HAND}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_BASCULIN,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 1, //Adaptability
    .moves = {MOVE_REVENGE, MOVE_AQUA_JET, MOVE_ICE_FANG, MOVE_PROTECT}
    }
};

// Route 110

static const struct TrainerMonItemCustomMoves sParty_Isabel1[] = {
    {
    .lvl = 2,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_HELPING_HAND, MOVE_SPARK, MOVE_ASSIST, MOVE_THUNDER_WAVE}
    },
    {
    .lvl = 2,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_HELPING_HAND, MOVE_SPARK, MOVE_ASSIST, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Isabel2[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Isabel3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Isabel4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Isabel5[] = {
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kaleb[] = {
    {
    .lvl = -1,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_VOLT_TACKLE, MOVE_QUICK_ATTACK, MOVE_THUNDERBOLT, MOVE_IRON_TAIL}
    },
    {
    .lvl = -2,
    .species = SPECIES_ELECTRIKE,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_BITE, MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_FURY_SWIPES}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Joseph[] = {
    {
    .lvl = -2,
    .species = SPECIES_ELECTRIKE,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_DISCHARGE, MOVE_BITE, MOVE_QUICK_ATTACK, MOVE_ODOR_SLEUTH
    },
    {
    .lvl = -2,
    .species = SPECIES_LUXIO,
    .spread = SPREAD_10_IV_0_EV,
    .moves = MOVE_BITE, MOVE_SPARK, MOVE_HOWL, MOVE_ROAR
    }
};

static const struct TrainerMonItemCustomMoves sParty_Timmy[] = {
    {
    .lvl = -1,
    .species = SPECIES_PIKACHU,
    .moves = MOVE_THUNDERBOLT, MOVE_NUZZLE, MOVE_NASTY_PLOT, MOVE_SWEET_KISS
    },
    {
    .lvl = -2,
    .species = SPECIES_GEODUDE_ALOLAN,
    .moves = MOVE_THUNDER_PUNCH, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT, MOVE_ROCK_POLISH
    }
};

static const struct TrainerMonItemCustomMoves sParty_Edwin1[] = {
    {
    .spread = SPREAD_10_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_LOMBRE,
    .moves = MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_MEGA_DRAIN, MOVE_BUBBLE_BEAM
    },
    {
    .spread = SPREAD_10_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_NUZLEAF,
    .moves = MOVE_FEINT_ATTACK, MOVE_LEAF_BLADE, MOVE_AIR_CUTTER, MOVE_GROWTH
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Edwin2[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Edwin3[] = {
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = 29,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Edwin4[] = {
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 0,
    .lvl = 32,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Edwin5[] = {
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 0,
    .lvl = 35,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dale[] = {
    {
    .lvl = -2,
    .species = SPECIES_TENTACOOL,
    .moves = MOVE_WRAP, MOVE_ACID_SPRAY, MOVE_WATER_PULSE, MOVE_BARRIER
    },
    {
    .lvl = -2,
    .species = SPECIES_WAILMER,
    .moves = MOVE_BRINE, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_WHIRLPOOL
    },
    {
    .lvl = -3,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = -2,
    .species = SPECIES_AZUMARILL,
    .moves = MOVE_BRINE, MOVE_ROLLOUT, MOVE_PLAY_ROUGH, MOVE_WHIRLPOOL
    }
};

// Route 110 Cycling Road

static const struct TrainerMonItemCustomMoves sParty_Edward[] = {
    {
    .spread = SPREAD_HP_GRASS_MODEST,
    .lvl = -2,
    .species = SPECIES_ABRA,
    .moves = {MOVE_HIDDEN_POWER, MOVE_SHOCK_WAVE, MOVE_CONFUSION, MOVE_NONE}
    },
    {
    .lvl = -2,
    .species = SPECIES_LUNATONE,
    .moves = {MOVE_SECRET_POWER, MOVE_SHOCK_WAVE, MOVE_CONFUSION, MOVE_NONE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jacob[] = {
    {
    .lvl = -1,
    .species = SPECIES_DEDENNE,
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_CHARM, MOVE_TAKE_DOWN, MOVE_PROTECT}
    },
    {
    .lvl = -2,
    .species = SPECIES_STUNFISK,
    .moves = {MOVE_STEALTH_ROCK, MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE, MOVE_MUD_BOMB}
    },
    {
    .lvl = 1,
    .species = SPECIES_TOGEDEMARU,
    .moves = {MOVE_PIN_MISSILE, MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_IRON_HEAD}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jasmine[] = {
    {
    .lvl = -2,
    .species = SPECIES_YAMPER,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_SPARK, MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE
    },
    {
    .lvl = -2,
    .species = SPECIES_PINCURCHIN,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_THUNDER_SHOCK, MOVE_BUBBLE_BEAM, MOVE_SPARK, MOVE_THUNDER_WAVE
    },
    {
    .lvl = -2,
    .species = SPECIES_EMOLGA,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_PARABOLIC_CHARGE, MOVE_AIR_CUTTER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK
    },
    {
    .lvl = -1,
    .species = SPECIES_HELIOPTILE,
    .spread = SPREAD_15_IV_0_EV,
    .moves = MOVE_PARABOLIC_CHARGE, MOVE_MUD_SLAP, MOVE_THUNDER_WAVE, MOVE_RAZOR_WIND
    }
};

static const struct TrainerMonItemCustomMoves sParty_Benjamin1[] = {
    {
    .lvl = -1,
    .species = SPECIES_LUXIO,
    .moves = {MOVE_CRUNCH, MOVE_ELECTRO_BALL, MOVE_TAKE_DOWN, MOVE_THUNDER_WAVE}
    },
    {
    .lvl = -1,
    .species = SPECIES_ZEBSTRIKA,
    .moves = {MOVE_FLAME_CHARGE, MOVE_SPARK, MOVE_ION_DELUGE, MOVE_SHOCK_WAVE}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Benjamin2[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Benjamin3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Benjamin4[] = {
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Benjamin5[] = {
    {
    .iv = 40,
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Alyssa[] = {
    {
    .lvl = -2,
    .species = SPECIES_MAGNEMITE,
    .moves = {MOVE_SPARK, MOVE_ELECTRO_BALL, MOVE_MIRROR_SHOT, MOVE_METAL_SOUND}
    },
    {
    .lvl = -1,
    .species = SPECIES_ELEKID,
    .moves = {MOVE_SHOCK_WAVE, MOVE_ELECTRO_BALL, MOVE_LOW_KICK, MOVE_SWIFT}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Anthony[] = {
    {
    .lvl = -1,
    .species = SPECIES_VOLTORB,
    .moves =  {MOVE_CHARGE_BEAM, MOVE_ELECTRO_BALL, MOVE_SWIFT, MOVE_ROLLOUT}
    },
    {
    .lvl = -1,
    .species = SPECIES_FLAAFFY,
    .moves = {MOVE_COTTON_SPORE, MOVE_ELECTRO_BALL, MOVE_TAKE_DOWN, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Abigail1[] = {
    {
    .lvl = -1,
    .species = SPECIES_MAGNEMITE,
    .moves = {MOVE_MAGNET_BOMB, MOVE_SONIC_BOOM, MOVE_THUNDER_SHOCK, MOVE_THUNDER_WAVE}
    },
    {
    .lvl = -1,
    .species = SPECIES_PACHIRISU,
    .moves = {MOVE_ELECTRO_BALL, MOVE_SWIFT, MOVE_NUZZLE, MOVE_SPARK}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Abigail2[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Abigail3[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Abigail4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Abigail5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jaclyn[] = {
    {
    .spread = SPREAD_HP_FIGHTING_TIMID,
    .lvl = -1,
    .species = SPECIES_KADABRA,
    .moves = {MOVE_HIDDEN_POWER, MOVE_CONFUSION, MOVE_SECRET_POWER, MOVE_NONE}
    },
    {
    .lvl = 0,
    .species = SPECIES_HYPNO,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_HIDDEN_POWER, MOVE_HEADBUTT}
    }
};

// Route 103 East

static const struct TrainerMonNoItemDefaultMoves sParty_Daisy[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_WOOLOO,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMonItemCustomMoves sParty_AmyAndLiv1[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_PACHIRISU,
    .ability = 2, //Volt Absorb
    .moves = {MOVE_ELECTRO_BALL, MOVE_SWIFT, MOVE_HELPING_HAND, MOVE_NUZZLE}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_YAMPER,
    .moves = {MOVE_SPARK, MOVE_BITE, MOVE_HELPING_HAND, MOVE_NUZZLE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CHINCHOU,
    .ability = 0, //Volt Absorb
    .moves = {MOVE_SPARK, MOVE_WATER_PULSE, MOVE_CONFUSE_RAY, MOVE_ELECTRO_BALL}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CHARJABUG,
    .moves = {MOVE_BUG_BITE, MOVE_BITE, MOVE_SPARK, MOVE_STICKY_WEB}
    }
};

static const struct TrainerMonItemCustomMoves sParty_AmyAndLiv2[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_PACHIRISU,
    .ability = 2, //Volt Absorb
    .moves = {MOVE_ELECTRO_BALL, MOVE_SWIFT, MOVE_HELPING_HAND, MOVE_NUZZLE}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_YAMPER,
    .moves = {MOVE_SPARK, MOVE_BITE, MOVE_HELPING_HAND, MOVE_NUZZLE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CHINCHOU,
    .ability = 0, //Volt Absorb
    .moves = {MOVE_SPARK, MOVE_WATER_PULSE, MOVE_CONFUSE_RAY, MOVE_ELECTRO_BALL}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CHARJABUG,
    .moves = {MOVE_BUG_BITE, MOVE_BITE, MOVE_SPARK, MOVE_STICKY_WEB}
    }
};

static const struct TrainerMonItemCustomMoves sParty_AmyAndLiv3[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_PACHIRISU,
    .ability = 2, //Volt Absorb
    .moves = {MOVE_ELECTRO_BALL, MOVE_SWIFT, MOVE_HELPING_HAND, MOVE_NUZZLE}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_YAMPER,
    .moves = {MOVE_SPARK, MOVE_BITE, MOVE_HELPING_HAND, MOVE_NUZZLE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CHINCHOU,
    .ability = 0, //Volt Absorb
    .moves = {MOVE_SPARK, MOVE_WATER_PULSE, MOVE_CONFUSE_RAY, MOVE_ELECTRO_BALL}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CHARJABUG,
    .moves = {MOVE_BUG_BITE, MOVE_BITE, MOVE_SPARK, MOVE_STICKY_WEB}
    }
};

static const struct TrainerMonItemCustomMoves sParty_AmyAndLiv4[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_PACHIRISU,
    .ability = 2, //Volt Absorb
    .moves = {MOVE_ELECTRO_BALL, MOVE_SWIFT, MOVE_HELPING_HAND, MOVE_NUZZLE}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_YAMPER,
    .moves = {MOVE_SPARK, MOVE_BITE, MOVE_HELPING_HAND, MOVE_NUZZLE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CHINCHOU,
    .ability = 0, //Volt Absorb
    .moves = {MOVE_SPARK, MOVE_WATER_PULSE, MOVE_CONFUSE_RAY, MOVE_ELECTRO_BALL}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CHARJABUG,
    .moves = {MOVE_BUG_BITE, MOVE_BITE, MOVE_SPARK, MOVE_STICKY_WEB}
    }
};

static const struct TrainerMonItemCustomMoves sParty_AmyAndLiv5[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_PACHIRISU,
    .ability = 2, //Volt Absorb
    .moves = {MOVE_ELECTRO_BALL, MOVE_SWIFT, MOVE_HELPING_HAND, MOVE_NUZZLE}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_YAMPER,
    .moves = {MOVE_SPARK, MOVE_BITE, MOVE_HELPING_HAND, MOVE_NUZZLE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CHINCHOU,
    .ability = 0, //Volt Absorb
    .moves = {MOVE_SPARK, MOVE_WATER_PULSE, MOVE_CONFUSE_RAY, MOVE_ELECTRO_BALL}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CHARJABUG,
    .moves = {MOVE_BUG_BITE, MOVE_BITE, MOVE_SPARK, MOVE_STICKY_WEB}
    }
};

static const struct TrainerMonItemCustomMoves sParty_AmyAndLiv6[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_PACHIRISU,
    .ability = 2, //Volt Absorb
    .moves = {MOVE_ELECTRO_BALL, MOVE_SWIFT, MOVE_HELPING_HAND, MOVE_NUZZLE}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_YAMPER,
    .moves = {MOVE_SPARK, MOVE_BITE, MOVE_HELPING_HAND, MOVE_NUZZLE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CHINCHOU,
    .ability = 0, //Volt Absorb
    .moves = {MOVE_SPARK, MOVE_WATER_PULSE, MOVE_CONFUSE_RAY, MOVE_ELECTRO_BALL}
    },
    {
    .spread = SPREAD_15_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CHARJABUG,
    .moves = {MOVE_BUG_BITE, MOVE_BITE, MOVE_SPARK, MOVE_STICKY_WEB}
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Miguel1[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KRICKETOT,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Miguel2[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Miguel3[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Miguel4[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Miguel5[] = {
    {
    .iv = 0,
    .lvl = 38,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Andrew[] = {
    {
    .iv = 0,
    .lvl = 0,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Marcos[] = {
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_VOLTORB,
    },
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_VOLTORB_HISUIAN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Rhett[] = {
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_MANKEY,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Pete[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = -2,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = 2, //Rain Dish
    .moves = {MOVE_HYDRO_PUMP, MOVE_RAPID_SPIN, MOVE_FLASH_CANNON, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = -1,
    .species = SPECIES_TENTACRUEL,
    .ability = 2, //Rain Dish
    .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_WAVE, MOVE_HEX, MOVE_TOXIC_SPIKES}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Isabelle[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_CLAWITZER,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, //Mega Launcher
    .moves = {MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_DRAGON_PULSE, MOVE_AURA_SPHERE}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = -2,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, //Skill Link
    .moves = {MOVE_ICICLE_SPEAR, MOVE_PIN_MISSILE, MOVE_ROCK_BLAST, MOVE_SPIKE_CANNON}
    }
};

// Mawville Gym

static const struct TrainerMonItemCustomMoves sParty_Angelo[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_PIKACHU_ALOLA_CAP,
    .heldItem = ITEM_EVIOLITE,
    .ability = 0, //Static
    .moves = {MOVE_SPARK, MOVE_FEINT, MOVE_HELPING_HAND, MOVE_QUICK_ATTACK}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_VOLTORB,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_ROLLOUT, MOVE_CHARGE_BEAM, MOVE_SELF_DESTRUCT, MOVE_SWIFT}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Vivian[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_FLAAFFY,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_TAKE_DOWN, MOVE_ELECTRO_BALL, MOVE_ELECTRIC_TERRAIN, MOVE_BRICK_BREAK}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_ZEBSTRIKA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SPARK, MOVE_FLAME_CHARGE, MOVE_FACADE, MOVE_SWAGGER}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ben[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_JOLTEON,
    .heldItem = ITEM_SHUCA_BERRY,
    .moves = {MOVE_THUNDER_FANG, MOVE_PIN_MISSILE, MOVE_HELPING_HAND, MOVE_DOUBLE_KICK}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_LUXIO,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 2, //Guts
    .moves = {MOVE_THUNDER_FANG, MOVE_BITE, MOVE_LIGHT_SCREEN, MOVE_ICE_FANG}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Kirk[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_PINCURCHIN,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = 2, //Electric Surge
    .moves = {MOVE_BUBBLE_BEAM, MOVE_SPARK, MOVE_PECK, MOVE_SPIKES}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_QUICK_ATTACK, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Shawn[] = {
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_EMOLGA,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_ACROBATICS, MOVE_SPARK, MOVE_LIGHT_SCREEN, MOVE_ROUND}
    },
    {
    .spread = SPREAD_25_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_GRAVELER_ALOLAN,
    .heldItem = ITEM_ROCK_GEM,
    .ability = 1, //Sturdy
    .moves = {MOVE_ROCK_SLIDE, MOVE_THUNDER_PUNCH, MOVE_ROLLOUT, MOVE_BULLDOZE}
    }
};

static const struct TrainerMonCustomized sParty_Wattson1[] = {
    {
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = 2, //Analytic
    .moves = {MOVE_ELECTRIC_TERRAIN, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_TRI_ATTACK}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 34,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_EJECT_BUTTON,
    .ability = 0, //Levitate
    .moves = {MOVE_THUNDERBOLT, MOVE_X_SCISSOR, MOVE_VOLT_SWITCH, MOVE_ENERGY_BALL}
    },
    {
    .spread = SPREAD_WATTSON_SPECIAL,
    .lvl = 34,
    .species = SPECIES_RAICHU_ALOLAN,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 0, //Surge Surfer
    .moves = {MOVE_ELECTRO_BALL, MOVE_VOLT_SWITCH, MOVE_NASTY_PLOT, MOVE_PSYCHIC}
    },
    {
    .spread = SPREAD_WATTSON_SPECIAL,
    .lvl = 34,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = 2, //Water Absorb
    .moves = {MOVE_THUNDER_WAVE, MOVE_VOLT_SWITCH, MOVE_SURF, MOVE_ICY_WIND}
    },
    {
    .spread = SPREAD_WATTSON_SPECIAL,
    .lvl = 35,
    .species = SPECIES_ELECTRODE_HISUIAN,
    .heldItem = ITEM_NORMAL_GEM,
    .ability = 1, //Static
    .moves = {MOVE_ELECTRO_BALL, MOVE_VOLT_SWITCH, MOVE_GIGA_DRAIN, MOVE_SELF_DESTRUCT}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 36,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .isShiny = 1,
    .ability = 1, // Lightning Rod
    .moves = {MOVE_CHARGE_BEAM, MOVE_FLAMETHROWER, MOVE_DISCHARGE, MOVE_HYPER_VOICE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wattson2[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 36,
    .species = SPECIES_MAREEP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 36,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 38,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 40,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wattson3[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 39,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 41,
    .species = SPECIES_FLAAFFY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 41,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wattson4[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 44,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wattson5[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 51,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 51,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 55,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

// Route 117, West Mauville

static const struct TrainerMonNoItemCustomMoves sParty_AnnaAndMeg1[] = {
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_TAKE_DOWN, MOVE_QUICK_ATTACK, MOVE_HEADBUTT, MOVE_HELPING_HAND}
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_BULK_UP, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_FAKE_OUT}
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_AZUMARILL,
    .moves = {MOVE_ROLLOUT, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_TOGETIC,
    .moves = MOVE_AIR_CUTTER, MOVE_ANCIENT_POWER, MOVE_SOFT_BOILED, MOVE_MAGICAL_LEAF
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_AnnaAndMeg2[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_AnnaAndMeg3[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_AnnaAndMeg4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_AnnaAndMeg5[] = {
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Derek[] = {
    {
    .iv = 150,
    .lvl = -2,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = 150,
    .lvl = -2,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Dylan1[] = {
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_DODUO,
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_FEAROW,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Dylan2[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Dylan3[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Dylan4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Dylan5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Maria1[] = {
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_TAUROS,
    },
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_PONYTA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Maria2[] = {
    {
    .iv = 10,
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Maria3[] = {
    {
    .iv = 20,
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Maria4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Maria5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Isaac1[] = {
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_WHISMUR,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_SENTRET,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_ARON,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_GROWLITHE_HISUIAN,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 0,
    .lvl = 0,
    .species = SPECIES_VOLBEAT,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Isaac2[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_ARON,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Isaac3[] = {
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_ARON,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Isaac4[] = {
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_ARON,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Isaac5[] = {
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lydia1[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_NIDORINA,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_NIDORINO,
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_SUNKERN,
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = 0,
    .lvl = 0,
    .species = SPECIES_LEAFEON,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lydia2[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lydia3[] = {
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 20,
    .lvl = -3,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lydia4[] = {
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 30,
    .lvl = 28,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lydia5[] = {
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 40,
    .lvl = 31,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Melina[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NATU,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_PIDOVE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Brandi[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GIRAFARIG,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_STANTLER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Aisha[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_PINECO,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_PHANPY,
    }
};

// Route 111, North Mauville

static const struct TrainerMonNoItemDefaultMoves sParty_Tyron[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_TRAPINCH,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Celina[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CHARJABUG,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Bianca[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_FLABEBE,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DELCATTY,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Hayden[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MAGBY,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Wilton1[] = {
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_GLIGAR,
    },
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_GRIMER,
    },
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_FLETCHINDER,
    },
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_GOLETT,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Wilton2[] = {
    {
    .iv = 110,
    .lvl = -3,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 110,
    .lvl = -3,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 110,
    .lvl = -3,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Wilton3[] = {
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Wilton4[] = {
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Wilton5[] = {
    {
    .iv = 140,
    .lvl = 35,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 140,
    .lvl = 35,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 140,
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Brooke1[] = {
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_TRAPINCH,
    },
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_GROWLITHE_HISUIAN,
    },
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_NINETALES,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Brooke2[] = {
    {
    .iv = 110,
    .lvl = -3,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 110,
    .lvl = -3,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 110,
    .lvl = -3,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Brooke3[] = {
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Brooke4[] = {
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Brooke5[] = {
    {
    .iv = 140,
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 140,
    .lvl = 34,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = 140,
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Daisuke[] = {
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_MANKEY,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Travis[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_HIPPOPOTAS,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CACNEA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Irene[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_TRAPINCH,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SANDSHREW,
    }
};

// Route 111 Desert

static const struct TrainerMonNoItemCustomMoves sParty_Drew[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_POISON_STING, MOVE_SLASH}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DIGLETT,
    .moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_SLASH, MOVE_SUCKER_PUNCH}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Beau[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SANDYGAST,
    .moves = {MOVE_HYPNOSIS, MOVE_GIGA_DRAIN, MOVE_BULLDOZE, MOVE_IRON_DEFENSE}
    },
};

static const struct TrainerMonNoItemCustomMoves sParty_Heidi[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SANDILE,
    .moves = {MOVE_DIG, MOVE_FOUL_PLAY, MOVE_SWAGGER, MOVE_CRUNCH}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MINIOR_METEOR_YELLOW,
    .moves = {MOVE_STEALTH_ROCK, MOVE_COSMIC_POWER, MOVE_POWER_GEM, MOVE_ANCIENT_POWER}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Becky[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MINIOR_METEOR_GREEN,
    .moves = {MOVE_ANCIENT_POWER, MOVE_SELF_DESTRUCT, MOVE_POWER_GEM, MOVE_DOUBLE_EDGE}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MARILL,
    .moves = {MOVE_ROLLOUT, MOVE_BUBBLE_BEAM, MOVE_PLAY_ROUGH, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Dusty1[] = {
    {
    .iv = 50,
    .lvl = -3,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_EARTHQUAKE, MOVE_POISON_STING}
    },
    {
    .iv = 50,
    .lvl = -3,
    .species = SPECIES_VIBRAVA,
    .moves = {MOVE_EARTHQUAKE, MOVE_BUG_BUZZ, MOVE_DRAGON_BREATH, MOVE_SANDSTORM}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Dusty2[] = {
    {
    .iv = 60,
    .lvl = 27,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Dusty3[] = {
    {
    .iv = 70,
    .lvl = 30,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Dusty4[] = {
    {
    .iv = 80,
    .lvl = 33,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Dusty5[] = {
    {
    .iv = 90,
    .lvl = 36,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Celia[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CACNEA,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SANDYGAST,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Bryan[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_BINACLE,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GLIGAR,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Branden[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_BEAUTIFLY,
    }
};

// Winstrates

static const struct TrainerMonItemCustomMoves sParty_Victor[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_UMBREON,
    .ability = 2, //Inner Focus
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_CONFUSE_RAY, MOVE_MOONLIGHT, MOVE_REFLECT, MOVE_CRUNCH}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_ESPEON,
    .ability = 2, // Magic Bounce
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_POWER_GEM}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Victoria[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_NINETALES,
    .ability = 0, //Flash Fire
    .heldItem = ITEM_SAFETY_GOGGLES,
    .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_HEX, MOVE_DRAINING_KISS}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_NINETALES_ALOLAN,
    .ability = 2, //Snow Warning
    .heldItem = ITEM_ICY_ROCK,
    .moves = {MOVE_AURORA_VEIL, MOVE_ICE_BEAM, MOVE_EXTRASENSORY, MOVE_CONFUSE_RAY}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Vivi[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_NIDOQUEEN,
    .ability = 1, //Rivalry
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_STOMPING_TANTRUM, MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_HELPING_HAND}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_SWELLOW,
    .ability = 0, //Guts
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AIR_SLASH, MOVE_FACADE, MOVE_STEEL_WING, MOVE_ROOST}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Vicky[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_MAWILE,
    .ability = 1, //Intimidate
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_PLAY_ROUGH, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_STEALTH_ROCK}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 1,
    .species = SPECIES_DRAGONAIR,
    .ability = 0, //Shed Skin
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_DRAGON_TAIL, MOVE_AQUA_TAIL, MOVE_DRAGON_DANCE, MOVE_SLAM}
    }
};

// Route 112

static const struct TrainerMonNoItemDefaultMoves sParty_Carol[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DRILBUR,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Brice[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CACNEA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Trent1[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DONPHAN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Trent2[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Trent3[] = {
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Trent4[] = {
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Trent5[] = {
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = 40,
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Bryant[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_LARVESTA,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_TORKOAL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Shayla[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_LAMPENT,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Larry[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KROKOROK,
    }
};

// Route 113

static const struct TrainerMonNoItemDefaultMoves sParty_Lung[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KOFFING,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lawrence[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_LARVESTA,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GROWLITHE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Wyatt[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SIZZLIPEDE,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SPINDA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jaylen[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_TRAPINCH,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KLEFKI,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Madeline1[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_TORKOAL,
    .moves = {MOVE_INCINERATE, MOVE_BULLDOZE, MOVE_MAGNITUDE, MOVE_TAKE_DOWN}
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_SKARMORY,
    .moves = {MOVE_STEALTH_ROCK, MOVE_STEEL_WING, MOVE_ACROBATICS, MOVE_ROAR}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Madeline2[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_TORKOAL,
    .moves = {MOVE_INCINERATE, MOVE_BULLDOZE, MOVE_MAGNITUDE, MOVE_TAKE_DOWN}
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_SKARMORY,
    .moves = {MOVE_STEALTH_ROCK, MOVE_STEEL_WING, MOVE_ACROBATICS, MOVE_ROAR}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Madeline3[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_TORKOAL,
    .moves = {MOVE_INCINERATE, MOVE_BULLDOZE, MOVE_MAGNITUDE, MOVE_TAKE_DOWN}
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_SKARMORY,
    .moves = {MOVE_STEALTH_ROCK, MOVE_STEEL_WING, MOVE_ACROBATICS, MOVE_ROAR}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Madeline4[] = {
    {
    .iv = 30,
    .lvl = 0,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    .iv = 30,
    .lvl = 0,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Madeline5[] = {
    {
    .iv = 40,
    .lvl = 0,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .iv = 40,
    .lvl = 0,
    .species = SPECIES_CAMERUPT,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMonItemCustomMoves sParty_ToriAndTia[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_SALAC_BERRY,
    .ability = 1, //Sturdy
    .moves = {MOVE_STEALTH_ROCK, MOVE_ROAR, MOVE_STEEL_WING, MOVE_ACROBATICS}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_VIBRAVA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 1, //Levitate
    .moves = {MOVE_EARTHQUAKE, MOVE_BUG_BUZZ, MOVE_DRAGON_BREATH, MOVE_NONE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, //Own Tempo
    .moves = {MOVE_UPROAR, MOVE_HYPNOSIS, MOVE_COPYCAT, MOVE_TEETER_DANCE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_FORRETRESS,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 0, //Sturdy
    .moves = {MOVE_MIRROR_SHOT, MOVE_ZAP_CANNON, MOVE_HEAVY_SLAM, MOVE_BUG_BITE}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Lao1[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SMOG, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NINJASK,
    .moves = {MOVE_FURY_CUTTER, MOVE_SLASH, MOVE_DOUBLE_TEAM, MOVE_AGILITY}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SHEDINJA,
    .moves = {MOVE_SHADOW_BALL, MOVE_SHADOW_SNEAK, MOVE_CONFUSE_RAY, MOVE_BUG_BITE}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Lao2[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Lao3[] = {
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = 20,
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Lao4[] = {
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 30,
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Lao5[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 35,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_SMOKE_BALL,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Dillon[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_FERROSEED,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_PAWNIARD,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Sophie[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SNUBBULL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Coby[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_PIDGEOTTO,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SWELLOW,
    }
};

// Route 114

static const struct TrainerMonNoItemDefaultMoves sParty_Nolan[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_BARBOACH,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Kai[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_TYMPOLE,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MANTYKE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Charlotte[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_LOMBRE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Claude[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_BARBOACH,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Nancy[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ESPURR,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_TyraAndIvy[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_TAKE_DOWN, MOVE_SING}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GRAVELER,
    .moves = {MOVE_EARTHQUAKE, MOVE_ROLLOUT, MOVE_STEALTH_ROCK, MOVE_ROCK_THROW}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_NIGHT_SLASH, MOVE_POISON_JAB, MOVE_SWAGGER, MOVE_BULLDOZE}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ARBOK,
    .moves = {MOVE_CRUNCH, MOVE_POISON_FANG, MOVE_ICE_FANG, MOVE_GLARE}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Shane[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KLEFKI,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Steve1[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ESPURR,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Steve2[] = {
    {
    .iv = 10,
    .lvl = 27,
    .species = SPECIES_LAIRON,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Steve3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Steve4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Steve5[] = {
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_AGGRON,
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Bernie1[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KLEFKI,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Bernie2[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Bernie3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Bernie4[] = {
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = 30,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Bernie5[] = {
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_MAGCARGO,
    },
    {
    .iv = 40,
    .lvl = 35,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lenny[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_LARVITAR,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ROGGENROLA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lucas1[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_FERROSEED,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Lucas2[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Angelina[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SUNKERN,
    }
};

// Route 115

static const struct TrainerMonNoItemDefaultMoves sParty_Nob1[] = {
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_DRATINI,
    },
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_LUNATONE, 
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Nob2[] = {
    {
    .iv = 110,
    .lvl = 27,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Nob3[] = {
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Nob4[] = {
    {
    .iv = 130,
    .lvl = 31,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 130,
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 130,
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Nob5[] = {
    {
    .iv = 140,
    .lvl = 33,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 140,
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_BLACK_BELT
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cyndy1[] = {
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_SOLROCK,
    },
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_NOIBAT,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cyndy2[] = {
    {
    .iv = 110,
    .lvl = -3,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 110,
    .lvl = -3,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cyndy3[] = {
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 120,
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cyndy4[] = {
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 130,
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cyndy5[] = {
    {
    .iv = 140,
    .lvl = 35,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 140,
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Hector[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DREEPY,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Marlene[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_JANGMO_O,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SEVIPER,
    }
};

// Mt Chimney Magma

static const struct TrainerMonItemCustomMoves sParty_GruntMtChimney1[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_YAWN, MOVE_LAVA_PLUME, MOVE_CURSE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_FLETCHINDER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ACROBATICS, MOVE_ROOST, MOVE_FLAME_CHARGE, MOVE_FACADE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_GruntMtChimney2[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_LAMPENT,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_HEX, MOVE_INFERNO, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_SIZZLIPEDE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BUG_BITE, MOVE_FLAME_WHEEL, MOVE_CRUNCH, MOVE_SLAM}
    }
};

static const struct TrainerMonItemCustomMoves sParty_TabithaMtChimney[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 1, //Drought
    .moves = {MOVE_STEALTH_ROCK, MOVE_FLAMETHROWER, MOVE_PROTECT, MOVE_RAPID_SPIN}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_TREVENANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, //Harvest
    .moves = {MOVE_PHANTOM_FORCE, MOVE_HORN_LEECH, MOVE_WILL_O_WISP, MOVE_LEECH_SEED}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_RATICATE_ALOLAN,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = 2, //Thick Fat
    .moves = {MOVE_SUPER_FANG, MOVE_CRUNCH, MOVE_PURSUIT, MOVE_SWORDS_DANCE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_DELPHOX,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = 0, //Blaze
    .moves = {MOVE_MYSTICAL_FIRE, MOVE_SHADOW_BALL, MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MaxieMtChimney[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 0, //Intimidate
    .moves = {MOVE_CRUNCH, MOVE_HOWL, MOVE_THUNDER_FANG, MOVE_SWAGGER}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_MAROWAK_ALOLAN,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 2, //Rock head
    .moves = {MOVE_SHADOW_BONE, MOVE_DOUBLE_EDGE, MOVE_FIRE_PUNCH, MOVE_IRON_HEAD}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_PASSHO_BERRY,
    .ability = 0, //Magma Armor
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTH_POWER, MOVE_TAKE_DOWN, MOVE_LAVA_PLUME}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_MAGMAR,
    .heldItem = ITEM_RED_CARD,
    .ability = 0, //Flame Body
    .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_SUNNY_DAY, MOVE_CONFUSE_RAY}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 1, //Flash Fire
    .moves = {MOVE_HELPING_HAND, MOVE_LAVA_PLUME, MOVE_SHADOW_BALL, MOVE_FACADE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_INCINEROAR,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, //Blaze
    .moves = {MOVE_DARKEST_LARIAT, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH}
    }
};

// Mt Chimney

static const struct TrainerMonNoItemDefaultMoves sParty_Melissa[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_TOGEPI,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Sheila[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Shirley[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SLUGMA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Shelby1[] = {
    {
    .iv = 200,
    .lvl = -1,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 200,
    .lvl = 0,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Shelby2[] = {
    {
    .iv = 210,
    .lvl = 30,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 210,
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Shelby3[] = {
    {
    .iv = 220,
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 220,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Shelby4[] = {
    {
    .iv = 230,
    .lvl = 36,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 230,
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Shelby5[] = {
    {
    .iv = 240,
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = 240,
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    }
};

// Jagged Pass

static const struct TrainerMonNoItemDefaultMoves sParty_Eric[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Diana1[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ODDISH,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Diana2[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Diana3[] = {
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 20,
    .lvl = 28,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Diana4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Diana5[] = {
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_VILEPLUME,
    },
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Ethan1[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_PANSEAR,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Ethan2[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Ethan3[] = {
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 20,
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Ethan4[] = {
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 30,
    .lvl = 31,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Ethan5[] = {
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = 40,
    .lvl = 34,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Autumn[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_GLOOM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Julio[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_CASTFORM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GruntJaggedPass[] = {
    {
    .iv = 50,
    .lvl = 0,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 50,
    .lvl = 0,
    .species = SPECIES_NUMEL,
    }
};

// Lavaridge Gym

static const struct TrainerMonItemCustomMoves sParty_Cole[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_LARVESTA,
    .ability = 2, //Swarm
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_BUZZY_BUZZ, MOVE_LEECH_LIFE, MOVE_FLAME_CHARGE, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_MAGMAR,
    .ability = 0, //Flame Body
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_FLAMETHROWER, MOVE_LOW_KICK, MOVE_BODY_SLAM, MOVE_WILL_O_WISP}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jeff[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_MAGCARGO,
    .ability = 2, //Weak Armor
    .heldItem = ITEM_PASSHO_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_ROCK_SLIDE, MOVE_SHELL_SMASH, MOVE_RECOVER}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_CASTFORM,
    .ability = 0, //Forecast
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_SUNNY_DAY, MOVE_FIRE_BLAST, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Eli[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_SALAZZLE,
    .ability = 0, //Corrosion
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_KNOCK_OFF, MOVE_FLAMETHROWER, MOVE_VENOSHOCK, MOVE_SWAGGER}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 1,
    .species = SPECIES_PYROAR,
    .ability = 2, //Moxie
    .heldItem = ITEM_APICOT_BERRY,
    .moves = {MOVE_HEADBUTT, MOVE_NOBLE_ROAR, MOVE_FLAMETHROWER, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jace[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_RAPIDASH,
    .ability = 1, //Flash Fire
    .heldItem = ITEM_KINGS_ROCK,
    .moves = {MOVE_FLAME_CHARGE, MOVE_TAKE_DOWN, MOVE_FLAMETHROWER, MOVE_DOUBLE_KICK}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_LAMPENT,
    .ability = 0, //Flash Fire
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_SHADOW_BALL, MOVE_CURSE, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Keegan[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_CENTISKORCH,
    .ability = 0, //Flash Fire
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_FLAMETHROWER, MOVE_SLAM, MOVE_LEECH_LIFE, MOVE_VENOSHOCK}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_INFERNAPE,
    .ability = 1, //Blaze
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_POWER_UP_PUNCH, MOVE_FACADE, MOVE_BULLDOZE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Danielle[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_TYPHLOSION,
    .ability = 1, //Flash Fire
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_QUICK_ATTACK, MOVE_GYRO_BALL, MOVE_BULLDOZE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_TALONFLAME,
    .ability = 1, //Flame Body
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_ROOST, MOVE_FLAME_CHARGE, MOVE_STEEL_WING}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Axle[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_ARCANINE,
    .ability = 1, //Flash Fire
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_HEAT_WAVE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_NINETALES,
    .ability = 1, //Flash Fire
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_HEAT_WAVE, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Gerald[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_KECLEON,
    .ability = 2, //Protean
    .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_CLAW, MOVE_CHARGE_BEAM, MOVE_DRAIN_PUNCH}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_CINDERACE,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = 2, //Libero
    .moves = {MOVE_BOUNCE, MOVE_ZEN_HEADBUTT, MOVE_PYRO_BALL, MOVE_REST}
    }
};

static const struct TrainerMonCustomized sParty_Flannery1[] = {
    {
    .spread = SPREAD_CHANSEY,
    .lvl = 47,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, //Drought
    .isShiny = 1,
    .moves = {MOVE_FLAMETHROWER, MOVE_STEALTH_ROCK, MOVE_HELPING_HAND, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 44,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 2, //Speed Boost
    .moves = {MOVE_BULK_UP, MOVE_BLAZE_KICK, MOVE_SKY_UPPERCUT, MOVE_DIG}
    },
    {
    .spread = SPREAD_FLANNERY_SPECIAL,
    .lvl = 44,
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 0, //Shell Armor
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_WILL_O_WISP, MOVE_BULLDOZE}
    },
    {
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .lvl = 44,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .ability = 1, //Solid Rock
    .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_BODY_SLAM, MOVE_YAWN}
    },
    {
    .spread = SPREAD_31_IV_HP_ATK_BRAVE,
    .lvl = 44,
    .species = SPECIES_DARMANITAN,
    .heldItem = ITEM_CHESTO_BERRY,
    .ability = 2, //Zen Mode
    .moves = {MOVE_HAMMER_ARM, MOVE_BELLY_DRUM, MOVE_ZEN_HEADBUTT, MOVE_REST}
    },
    {
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .lvl = 46,
    .species = SPECIES_CHARIZARD,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, //Solar Power 
    .moves = {MOVE_FLAMETHROWER, MOVE_AIR_SLASH, MOVE_BULLDOZE, MOVE_DRAGON_TAIL}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Flannery2[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 38,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 36,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 38,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 40,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Flannery3[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 41,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 41,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 45,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Flannery4[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Flannery5[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 51,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 51,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 51,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 55,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

// Petalburg Gym

// Accuracy room
static const struct TrainerMonItemCustomMoves sParty_Mary[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = 2, //Scrappy
    .moves = {MOVE_DOUBLE_TEAM, MOVE_FACADE, MOVE_AIR_SLASH, MOVE_NONE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_LICKITUNG,
    .heldItem = ITEM_BRIGHT_POWDER,
    .ability = 0, //Own Tempo
    .moves = {MOVE_MUDDY_WATER, MOVE_FACADE, MOVE_DOUBLE_TEAM, MOVE_NONE}
    }
};
// Speed Room
static const struct TrainerMonItemCustomMoves sParty_Randall[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, //Guts
    .moves = {MOVE_AERIAL_ACE, MOVE_FACADE, MOVE_FLY, MOVE_STEEL_WING}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_TIMID,
    .lvl = 0,
    .species = SPECIES_PERSIAN,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = 0, //Limber
    .moves = {MOVE_FAKE_OUT, MOVE_FACADE, MOVE_HYPER_VOICE, MOVE_SHADOW_BALL}
    }
};
// Confusion Room
static const struct TrainerMonItemCustomMoves sParty_Parker[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 1, //Tangled Feet
    .moves = {MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_NONE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_AMBIPOM,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, //Skill Link
    .moves = {MOVE_SWAGGER, MOVE_DOUBLE_HIT, MOVE_HELPING_HAND, MOVE_NONE}
    }
};
// Defense
static const struct TrainerMonItemCustomMoves sParty_Alexia[] = {
    {
    .spread = SPREAD_31_IV_HP_DEF_IMPISH,
    .lvl = 0,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 0, //Cute Charm
    .moves = {MOVE_GYRO_BALL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_HYPER_VOICE}
    },
    {
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .lvl = 0,
    .species = SPECIES_GIRAFARIG,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, //Early Bird
    .moves = {MOVE_PSYCHIC, MOVE_CRUNCH, MOVE_FACADE, MOVE_THUNDERBOLT}
    }
};
// Recovery
static const struct TrainerMonItemCustomMoves sParty_George[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_MILTANK,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, //Thick Fat
    .moves = {MOVE_MILK_DRINK, MOVE_HEAL_BELL, MOVE_ROLLOUT, MOVE_BODY_SLAM}
    },
    {
    .spread = SPREAD_CHANSEY,
    .lvl = 0,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_EVIOLITE,
    .ability = 2, //Healer
    .moves = {MOVE_SOFT_BOILED, MOVE_HEAL_PULSE, MOVE_HELPING_HAND, MOVE_DOUBLE_EDGE}
    }
};
// OHKO
static const struct TrainerMonItemCustomMoves sParty_Berke[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 2, //Toxic Boost
    .moves = {MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_SWORDS_DANCE, MOVE_NIGHT_SLASH}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_KOMALA,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_LAST_RESORT, MOVE_SLEEP_TALK, MOVE_NONE, MOVE_NONE}
    }
};
// Strength
static const struct TrainerMonItemCustomMoves sParty_Jody[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_URSARING,
    .heldItem = ITEM_RAWST_BERRY,
    .ability = 1, //Guts
    .moves = {MOVE_HAMMER_ARM, MOVE_SLASH, MOVE_SNORE, MOVE_REST}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = 0, //Intimidate
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ENDEAVOR, MOVE_BRAVE_BIRD, MOVE_FEATHER_DANCE}
    }
};

static const struct TrainerMonCustomized sParty_Norman1[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 54,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, //Sheer Force
    .moves = {MOVE_BODY_SLAM, MOVE_IRON_HEAD, MOVE_ROCK_SMASH, MOVE_THROAT_CHOP}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_NAUGHTY,
    .lvl = 54,
    .species = SPECIES_SNORLAX,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, //Thick Fat
    .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_HIGH_HORSEPOWER, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 56,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_LUM_BERRY,
    .isShiny = 1,
    .ability = 0, //truant
    .moves = {MOVE_FACADE, MOVE_HAMMER_ARM, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT}
    },
    {
    .spread = SPREAD_CHANSEY,
    .lvl = 55,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 1, //Serene Grace
    .moves = {MOVE_HELPING_HAND, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_SOFT_BOILED}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .lvl = 55,
    .species = SPECIES_PORYGON2,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 2, //Analytic
    .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_PSYCHIC}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 55,
    .species = SPECIES_LOPUNNY,
    .heldItem = ITEM_LOPUNNITE,
    .ability = 2, //Limber
    .moves = {MOVE_THUNDER_PUNCH, MOVE_CLOSE_COMBAT, MOVE_FACADE, MOVE_PLAY_ROUGH}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Norman2[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 42,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 42,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 45,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Norman3[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 47,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 47,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 45,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Norman4[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 52,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 52,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 55,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Norman5[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 57,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 57,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 55,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 57,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 58,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 60,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

// Player can now use Mega Evolutions
// Route 115 North - Surf

static const struct TrainerMonItemCustomMoves sParty_Koichi[] = { // Guardian of the Charizardite Y
    {
    .spread = SPREAD_31_IV_80_EV,
    .lvl = -1,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_FLAME_ORB,
    .ability = 0, //Guts
    .moves = {MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_DUAL_CHOP, MOVE_BULLET_PUNCH}
    },
    {
    .spread = SPREAD_31_IV_80_EV,
    .lvl = -1,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_EVIOLITE,
    .ability = 1, //No Guard
    .moves = {MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_KNOCK_OFF, MOVE_FIRE_PUNCH}
    },
    {
    .spread = SPREAD_31_IV_80_EV,
    .lvl = 0,
    .species = SPECIES_POLIWRATH,
    .heldItem = ITEM_CHOICE_SCARF,
    .ability = 2, //Swift Swim
    .moves = {MOVE_CLOSE_COMBAT, MOVE_LIQUIDATION, MOVE_HIGH_HORSEPOWER, MOVE_DARKEST_LARIAT}
    },
    {
    .spread = SPREAD_31_IV_80_EV,
    .lvl = 1,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_MEDICHAMITE,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_THUNDER_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_PANGORO,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Mold Breaker
    .moves = {MOVE_HAMMER_ARM, MOVE_KNOCK_OFF, MOVE_GUNK_SHOT, MOVE_DRAIN_PUNCH}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Timothy1[] = {
    {
    .iv = 200,
    .lvl = 27,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Timothy2[] = {
    {
    .iv = 210,
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Timothy3[] = {
    {
    .iv = 220,
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Timothy4[] = {
    {
    .iv = 230,
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Timothy5[] = {
    {
    .iv = 240,
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jaiden[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Kyra[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DODUO,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Alix[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Helene[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MAKUHITA,
    }
};

// Route 105

static const struct TrainerMonNoItemDefaultMoves sParty_Imani[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DEWGONG,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Dominik[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KINGLER,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Foster[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_GOLEM,
    .ability = 1, //Sturdy
    .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM, MOVE_ROCK_BLAST}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_GOLEM_ALOLAN,
    .ability = 0, //Magnet Pull
    .moves = {MOVE_THUNDER_PUNCH, MOVE_DOUBLE_EDGE, MOVE_STONE_EDGE, MOVE_HEAVY_SLAM}
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Luis[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Beverly[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Josue[] = {
    {
    .iv = 50,
    .lvl = -3,
    .species = SPECIES_TAILLOW,
    },
    {
    .iv = 50,
    .lvl = -3,
    .species = SPECIES_PIDGEOT,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Andres1[] = { // Guardian of Swampertite
    {
    .spread = SPREAD_31_IV_80_EV,
    .lvl = 1,
    .species = SPECIES_LUNATONE,
    .ability = 1, //Rock Head
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_MOONBLAST, MOVE_STEALTH_ROCK}
    },
    {
    .spread = SPREAD_31_IV_80_EV,
    .lvl = -1,
    .species = SPECIES_SKARMORY,
    .ability = 1, //Sturdy
    .heldItem = ITEM_SMOOTH_ROCK,
    .moves = {MOVE_SANDSTORM, MOVE_STEEL_WING, MOVE_U_TURN, MOVE_BRAVE_BIRD}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_SANDSLASH_ALOLAN,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_ICE_SPINNER, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_SWORDS_DANCE}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 1,
    .species = SPECIES_AERODACTYL,
    .ability = 1, //Rock Head
    .heldItem = ITEM_AERODACTYLITE,
    .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL, MOVE_ROOST}
    },
    {
    .spread = SPREAD_31_IV_80_EV,
    .lvl = 0,
    .species = SPECIES_SANDSLASH,
    .ability = 2, //Sand Rush
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_SLASH, MOVE_SWORDS_DANCE, MOVE_LEECH_LIFE}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Andres2[] = {
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Andres3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Andres4[] = {
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Andres5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    }
};

// Route 107

static const struct TrainerMonNoItemDefaultMoves sParty_Denise[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_HUNTAIL,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GOREBYSS,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Tony1[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_LAPRAS,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_VAPOREON,
    }

};

static const struct TrainerMonNoItemDefaultMoves sParty_Tony2[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Tony3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Tony4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_STARYU,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Tony5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = 40,
    .lvl = 39,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMonItemCustomMoves sParty_LisaAndRay[] = { // Gives Damp Rock
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = -3,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = 0, // Intimidate
    .moves = {MOVE_AQUA_TAIL, MOVE_HURRICANE, MOVE_CRUNCH, MOVE_DRAGON_DANCE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = 2, // Cute Charm
    .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_RECOVER, MOVE_DRAGON_TAIL}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -3,
    .species = SPECIES_SEISMITOAD,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 2, // Water Absorb
    .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_AQUA_RING, MOVE_HYPER_VOICE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 1, // Swift Swim
    .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_RAIN_DANCE, MOVE_ICE_BEAM}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Darrin[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_CHEWTLE,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_WISHIWASHI,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Beth[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CLAWITZER,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CORSOLA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Camron[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SIMIPOUR,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CORSOLA_GALARIAN,
    }
};

// Route 108

static const struct TrainerMonNoItemDefaultMoves sParty_Missy[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Matthew[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GOLDUCK,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_OCTILLERY,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Tara[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_HORSEA,
    },
    {
    .iv = 0,
    .lvl = 0,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Carolina[] = { // Guardian of Blastoisinite
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 1, // Lightning Rod
    .moves = {MOVE_CHARGE_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDER, MOVE_ELECTRIC_TERRAIN}
    },
    {
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .lvl = 0,
    .species = SPECIES_ORICORIO_POM_POM,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_HELPING_HAND, MOVE_BATON_PASS, MOVE_FEATHER_DANCE, MOVE_REVELATION_DANCE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 2,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_AMPHAROSITE,
    .ability = 0, // Static > Mold Breaker
    .moves = {MOVE_THUNDER, MOVE_DRAGON_PULSE, MOVE_DAZZLING_GLEAM, MOVE_POWER_GEM}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Cory1[] = { // Guardian of Blastoisinite 
    {
    .spread = SPREAD_31_IV_HP_SPDEF_CALM,
    .lvl = 0,
    .species = SPECIES_POLITOED,
    .ability = 2, // Drizzle
    .heldItem = ITEM_DAMP_ROCK,
    .moves = {MOVE_HYDRO_PUMP, MOVE_HELPING_HAND, MOVE_TOXIC, MOVE_BLIZZARD}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_BLASTOISE,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Rain Dish
    .moves = {MOVE_HYDRO_PUMP, MOVE_RAPID_SPIN, MOVE_FLASH_CANNON, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 2, // Speed boost
    .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cory2[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cory3[] = {
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 20,
    .lvl = 32,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cory4[] = {
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 30,
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cory5[] = {
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 40,
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jerome[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SEALEO,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MANTYKE,
    }
};

// Abandoned Ship 1F

static const struct TrainerMonNoItemDefaultMoves sParty_Charlie[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CLAWITZER,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KINGLER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Demetrius[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SENTRET,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_BIDOOF,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Thalia1[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_SEADRA,
    },
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_PURUGLY,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Thalia2[] = {
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Thalia3[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Thalia4[] = {
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 30,
    .lvl = 38,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Thalia5[] = {
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_WAILORD,
    },
    {
    .iv = 40,
    .lvl = 40,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMonItemCustomMoves sParty_KiraAndDan1[] = {// Gives Choice Band
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_VOLBEAT,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 1, // Swarm
    .moves = {MOVE_ZEN_HEADBUTT, MOVE_LEECH_LIFE, MOVE_PLAY_ROUGH, MOVE_TRICK}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 0,
    .species = SPECIES_ILLUMISE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Prankster
    .moves = {MOVE_INFESTATION, MOVE_TRICK, MOVE_WISH, MOVE_BUG_BUZZ}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 0,
    .species = SPECIES_GOURGEIST_SUPER,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 2, // Insomnia
    .moves = {MOVE_TRICK, MOVE_PHANTOM_FORCE, MOVE_SEED_BOMB, MOVE_PAIN_SPLIT}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_NINJASK,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 0, // Speed Boost
    .moves = {MOVE_X_SCISSOR, MOVE_U_TURN, MOVE_FACADE, MOVE_AERIAL_ACE}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_FORRETRESS,
    .heldItem = ITEM_OCCA_BERRY,
    .ability = 0, // Sturdy
    .moves = {MOVE_EXPLOSION, MOVE_HEAVY_SLAM, MOVE_VOLT_SWITCH, MOVE_BUG_BUZZ}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_CHOICE_BAND,
    .ability = 1, // Technician
    .moves = {MOVE_AERIAL_ACE, MOVE_X_SCISSOR, MOVE_DOUBLE_HIT, MOVE_BULLET_PUNCH}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_KiraAndDan2[] = {
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 10,
    .lvl = 30,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_KiraAndDan3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_KiraAndDan4[] = {
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_KiraAndDan5[] = {
    {
    .iv = 40,
    .lvl = 39,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = 40,
    .lvl = 39,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Garrison[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_EXCADRILL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jani[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_FERALIGATR,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_JELLICENT,
    }
};

// Abandoned Ship B1F

static const struct TrainerMonNoItemDefaultMoves sParty_Duncan[] = {
    {
    .iv = 0,
    .lvl = 0,
    .species = SPECIES_SPHEAL,
    },
    {
    .iv = 0,
    .lvl = 0,
    .species = SPECIES_MACHOKE,
    }
};

// Route 109 Water

static const struct TrainerMonNoItemCustomMoves sParty_MelAndPaul[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DUSTOX,
    .moves = {MOVE_GUST, MOVE_PSYBEAM, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_BEAUTIFLY,
    .moves = {MOVE_GUST, MOVE_MEGA_DRAIN, MOVE_ATTRACT, MOVE_STUN_SPORE}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SHEDINJA,
    .moves = {MOVE_SHADOW_SNEAK, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_HEAL_BLOCK}
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NINJASK,
    .moves = {MOVE_SWORDS_DANCE, MOVE_X_SCISSOR, MOVE_SLASH, MOVE_DIG}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Elijah[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CORVIKNIGHT,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Carter[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Alice[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_POLIWHIRL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_David[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_EMPOLEON,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Gwen[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_QWILFISH,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CORSOLA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Austina[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_PALOSSAND,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_COMFEY,
    }

};

// Route 118 - East - Surf

static const struct TrainerMonNoItemDefaultMoves sParty_Barny[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_WAILORD,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_LUMINEON,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Chester[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_RATICATE_ALOLAN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Perry[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_FLOATZEL,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_LINOONE_GALARIAN,
    }
};

// Route 123 from Route 118

static const struct TrainerMonNoItemDefaultMoves sParty_Davis[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_PINSIR,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CHARIZARD,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jazmyn[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ABSOL,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SUNFLORA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_MiuAndYuki[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DUSTOX,
    }
};

// Route 119

static const struct TrainerMonNoItemDefaultMoves sParty_Kent[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_FORRETRESS,
    }

};

static const struct TrainerMonNoItemDefaultMoves sParty_Donald[] = {
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_JUMPLUFF,
    },
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_TANGROWTH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Greg[] = {
    {
    .iv = 0,
    .lvl = 0,
    .species = SPECIES_MEGANIUM,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_VICTREEBEL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Taylor[] = {
    {
    .iv = 100,
    .lvl = 0,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 100,
    .lvl = 0,
    .species = SPECIES_HATENNA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Brent[] = {
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_HYPNO,
    },
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_DRIFBLIM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Doug[] = {
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_CHERRIM,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_LEAFEON,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Chris[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 0,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Moxie
    .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_HURRICANE, MOVE_ICE_FANG}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = 1, // Water Veil
    .moves = {MOVE_WATER_SPOUT, MOVE_HEAVY_SLAM, MOVE_RAIN_DANCE, MOVE_REST}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 2, // Hydration
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_ATTRACT}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 3,
    .species = SPECIES_EMPOLEON,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 0, // Torrent
    .moves = {MOVE_GRASS_KNOT, MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_FLASH_CANNON}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Catherine1[] = {
    {
    .iv = 150,
    .lvl = -3,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 150,
    .lvl = -1,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 150,
    .lvl = -3,
    .species = SPECIES_FLORGES,
    },
    {
    .iv = 150,
    .lvl = -2,
    .species = SPECIES_WHIMSICOTT,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Catherine2[] = {
    {
    .iv = 60,
    .lvl = 30,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 60,
    .lvl = 30,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Catherine3[] = {
    {
    .iv = 70,
    .lvl = 33,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 70,
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Catherine4[] = {
    {
    .iv = 80,
    .lvl = 36,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 80,
    .lvl = 36,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Catherine5[] = {
    {
    .iv = 90,
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = 90,
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jackson1[] = {
    {
    .iv = 50,
    .lvl = -3,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 50,
    .lvl = -3,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jackson2[] = {
    {
    .iv = 60,
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jackson3[] = {
    {
    .iv = 70,
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jackson4[] = {
    {
    .iv = 80,
    .lvl = 37,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jackson5[] = {
    {
    .iv = 90,
    .lvl = 39,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = 90,
    .lvl = 39,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Rachel[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SEAKING,
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_ARIADOS,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Phil[] = {
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_FEAROW,
    },
    {
    .iv = 110,
    .lvl = -2,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dayton[] = { // Guardian of Sceptilite
    {
    .spread = SPREAD_31_IV_HP_SPATK_QUIET,
    .lvl = -1,
    .species = SPECIES_RILLABOOM,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .ability = 2, // Grassy Surge
    .moves = {MOVE_GRASSY_GLIDE, MOVE_SECRET_POWER, MOVE_BOOMBURST, MOVE_SOLAR_BEAM}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = 0, // Chlorophyll
    .moves = {MOVE_SUNNY_DAY, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_GIGA_DRAIN}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = -1,
    .species = SPECIES_MEGANIUM,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 2, // Triage
    .moves = {MOVE_GIGA_DRAIN, MOVE_DAZZLING_GLEAM, MOVE_SOLAR_BEAM, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_BRELOOM,
    .heldItem = ITEM_TOXIC_ORB,
    .ability = 1, // Poison Heal
    .moves = {MOVE_SUBSTITUTE, MOVE_LEECH_SEED, MOVE_DRAIN_PUNCH, MOVE_TOXIC}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_EXEGGUTOR_ALOLAN,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = 0, // Chlorophyll
    .moves = {MOVE_SUPERPOWER, MOVE_OUTRAGE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_31_IV_HP_DEF_SPDEF_SASSY,
    .lvl = 1,
    .species = SPECIES_VENUSAUR,
    .heldItem = ITEM_VENUSAURITE,
    .ability = 0, // Overgrow > Thick Fat
    .moves = {MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Takashi[] = {
    {
    .iv = 200,
    .lvl = 5,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_SHEDINJA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Hugh[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GLIGAR,
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Fabian[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_JOLTEON,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Yasu[] = {
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_GRENINJA,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Hideo[] = {
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_EXPLOSION, MOVE_EXPLOSION, MOVE_EXPLOSION, MOVE_EXPLOSION}
    },
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_VOLTORB,
    .moves = {MOVE_EXPLOSION, MOVE_EXPLOSION, MOVE_EXPLOSION, MOVE_EXPLOSION}
    }
};

// Weather Institute Grunts

static const struct TrainerMonItemCustomMoves sParty_GruntWeatherInst1[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_GOLDUCK,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = 2, // Swift Swim
    .moves = {MOVE_HYDRO_PUMP, MOVE_DISABLE, MOVE_ZEN_HEADBUTT, MOVE_RAIN_DANCE}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -2,
    .species = SPECIES_SIMIPOUR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 2, // Torrent
    .moves = {MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_ACROBATICS, MOVE_ICE_BEAM}
    }
};

static const struct TrainerMonItemCustomMoves sParty_GruntWeatherInst2[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_EVIOLITE,
    .ability = 0, // Oblivious
    .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_PSYCHIC, MOVE_ZEN_HEADBUTT}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = -1,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 1, // Huge Power
    .moves = {MOVE_HYDRO_PUMP, MOVE_SUPERPOWER, MOVE_DOUBLE_EDGE, MOVE_PLAY_ROUGH}
    }
};

static const struct TrainerMonItemCustomMoves sParty_GruntWeatherInst3[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 1,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Drizzle
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PROTECT, MOVE_TOXIC}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 0, // Swift Swim
    .moves = {MOVE_HYDRO_PUMP, MOVE_MEGAHORN, MOVE_WATERFALL, MOVE_BLIZZARD}
    },

};

static const struct TrainerMonItemCustomMoves sParty_GruntWeatherInst4[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 2,
    .species = SPECIES_OCTILLERY,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = 1, // Sniper
    .moves = {MOVE_OCTAZOOKA, MOVE_SURF, MOVE_SIGNAL_BEAM, MOVE_ICE_BEAM}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 0,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Water Absorb
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_REST}
    }
};

static const struct TrainerMonItemCustomMoves sParty_GruntWeatherInst5[] = {
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 1,
    .species = SPECIES_QUAGSIRE,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 2, // Unaware
    .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_ICE_BEAM}
    },
    {
    .spread = SPREAD_31_IV_0_EV,
    .lvl = 1,
    .species = SPECIES_SWANNA,
    .heldItem = ITEM_WACAN_BERRY,
    .ability = 2, // Hydration
    .moves = {MOVE_HURRICANE, MOVE_ROOST, MOVE_SCALD, MOVE_RAIN_DANCE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_ShellyWeatherInstitute[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_BARBARACLE,
    .heldItem = ITEM_NONE,
    .ability = 2, // Pickpocket
    .moves = {MOVE_STEALTH_ROCK, MOVE_STONE_EDGE, MOVE_TOXIC, MOVE_RAZOR_SHELL}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = -1,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = 1, // Drizzle
    .moves = {MOVE_HURRICANE, MOVE_ROOST, MOVE_TOXIC, MOVE_SCALD}
    },    
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_SHELL_BELL,
    .ability = 0, // Swift Swim
    .moves = {MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_ICE_BEAM}
    },    
    {
    .spread = SPREAD_31_IV_HP_DEF_BOLD,
    .lvl = 1,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Hydration
    .moves = {MOVE_BATON_PASS, MOVE_HELPING_HAND, MOVE_HYDRO_PUMP, MOVE_CALM_MIND}
    },    
    {
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .lvl = 1,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Swift Swim
    .moves = {MOVE_DRAGON_PULSE, MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_ICE_BEAM}
    },    
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_SHARPEDONITE,
    .ability = 0, // Rough Skin > Strong Jaw
    .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG, MOVE_POISON_FANG}
    },
};

// Fortree Gym

static const struct TrainerMonItemCustomMoves sParty_Humberto[] = {
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 1,
    .species = SPECIES_BUTTERFREE,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = 0, // Compound Eyes
    .moves = {MOVE_QUIVER_DANCE, MOVE_SLEEP_POWDER, MOVE_HURRICANE, MOVE_BUG_BUZZ}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = -1,
    .species = SPECIES_DELIBIRD,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = 2, // Insomnia
    .moves = {MOVE_PRESENT, MOVE_BRAVE_BIRD, MOVE_DESTINY_BOND, MOVE_BLIZZARD}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Ashley[] = {
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = -1,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = 0, // Natural Cure
    .moves = {MOVE_MOONBLAST, MOVE_DRAGON_PULSE, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER}
    },
    {
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Harvest
    .moves = {MOVE_HURRICANE, MOVE_ENERGY_BALL, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jared[] = {
    {
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .lvl = -1,
    .species = SPECIES_STARAPTOR,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 0, // Intimidate
    .moves = {MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_CLOSE_COMBAT, MOVE_FACADE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 2, // Weak Armor
    .moves = {MOVE_BRAVE_BIRD, MOVE_STEALTH_ROCK, MOVE_IRON_HEAD, MOVE_ROOST}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Flint[] = {
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = -1,
    .species = SPECIES_XATU,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = 2, // Magic Bounce
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_AIR_SLASH, MOVE_ROOST}
    },
    {
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_TOGETIC,
    .heldItem = ITEM_EVIOLITE,
    .ability = 1, // Serene Grace
    .moves = {MOVE_BODY_SLAM, MOVE_ZEN_HEADBUTT, MOVE_AIR_SLASH, MOVE_MOONBLAST}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Edwardo[] = {
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = -1,
    .species = SPECIES_NOIVERN,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = 1, // Infiltrator
    .moves = {MOVE_BOOMBURST, MOVE_HURRICANE, MOVE_DRAGON_PULSE, MOVE_TAILWIND}
    },
    {
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_FEAROW,
    .heldItem = ITEM_LANSAT_BERRY,
    .ability = 2, // Sniper
    .moves = {MOVE_FOCUS_ENERGY, MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_FACADE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Darius[] = {
     {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 1,
    .species = SPECIES_GOLBAT,
    .heldItem = ITEM_STICKY_BARB,
    .ability = 2, // Infiltrator
    .moves = {MOVE_TOXIC, MOVE_TAUNT, MOVE_SLUDGE_BOMB, MOVE_TAILWIND}
    },
    {
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .lvl = -1,
    .species = SPECIES_FARFETCHD,
    .heldItem = ITEM_LEEK,
    .ability = 1, // Inner Focus
    .moves = {MOVE_BRAVE_BIRD, MOVE_LEAF_BLADE, MOVE_KNOCK_OFF, MOVE_CLOSE_COMBAT}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = -1,
    .species = SPECIES_SWANNA,
    .heldItem = ITEM_YACHE_BERRY,
    .ability = 1, // Big Pecks
    .moves = {MOVE_HURRICANE, MOVE_ICE_BEAM, MOVE_SCALD, MOVE_ROOST}
    },
    {
    .spread = SPREAD_31_IV_HP_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_EMOLGA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 0, // Static
    .moves = {MOVE_WILD_CHARGE, MOVE_ACROBATICS, MOVE_LAST_RESORT, MOVE_IRON_TAIL}
    }
};

static const struct TrainerMonCustomized sParty_Winona1[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 65,
    .species = SPECIES_GLISCOR,
    .ability = 2, // Poison Heal 
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_STEALTH_ROCK}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 65,
    .species = SPECIES_DRIFBLIM,
    .ability = 1, // Unburden
    .heldItem = ITEM_RED_CARD,
    .moves = {MOVE_TAILWIND, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDER}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 66,
    .species = SPECIES_ORICORIO_POM_POM,
    .ability = 0, // Dancer
    .heldItem = ITEM_PROTECTIVE_PADS,
    .moves = {MOVE_HURRICANE, MOVE_REVELATION_DANCE, MOVE_BATON_PASS, MOVE_QUIVER_DANCE}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 65,
    .species = SPECIES_HONCHKROW,
    .ability = 1, // Super Luck
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_FEATHER_DANCE, MOVE_NIGHT_SLASH, MOVE_BRAVE_BIRD, MOVE_TAILWIND}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .lvl = 66,
    .species = SPECIES_ALTARIA,
    .ability = 2, // Cloud Nine > Pixilate
    .heldItem = ITEM_ALTARIANITE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_OUTRAGE, MOVE_FIRE_BLAST, MOVE_MOONBLAST}
    },
    {
    .spread = SPREAD_31_IV_HP_ATK_ADAMANT,
    .lvl = 67,
    .species = SPECIES_SWELLOW,
    .ability = 1, // Guts
    .heldItem = ITEM_SAFETY_GOGGLES,
    .isShiny = 1,
    .moves = {MOVE_BRAVE_BIRD, MOVE_ROOST, MOVE_DOUBLE_EDGE, MOVE_HEAT_WAVE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winona2[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 40,
    .species = SPECIES_DRATINI,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 38,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 45,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winona3[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_HOOTHOOT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 45,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winona4[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 49,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 51,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 55,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Winona5[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 54,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 55,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 55,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 58,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

// Route 120

static const struct TrainerMonNoItemDefaultMoves sParty_Clarissa[] = {
    {
    .iv = 200,
    .lvl = -3,
    .species = SPECIES_PIDGEOT,
    },
    {
    .iv = 200,
    .lvl = 0,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Robert1[] = {
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_RAPIDASH_GALARIAN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Robert2[] = {
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_RAPIDASH_GALARIAN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Robert3[] = {
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_RAPIDASH_GALARIAN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Robert4[] = {
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_RAPIDASH_GALARIAN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Robert5[] = {
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_RAPIDASH_GALARIAN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Colin[] = {
    {
    .iv = 200,
    .lvl = 0,
    .species = SPECIES_HONCHKROW,
    },
    {
    .iv = 200,
    .lvl = 0,
    .species = SPECIES_ORICORIO_SENSU,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Riley[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_NINCADA,
    .moves = {MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE, MOVE_MIND_READER, MOVE_DIG}
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_WEEZING,
    .moves = {MOVE_TOXIC, MOVE_SMOG, MOVE_SLUDGE, MOVE_EXPLOSION}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Leonel[] = {
    {
    .iv = 100,
    .lvl = -1,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_HYPER_BEAM}
    },
    {
    .iv = 100,
    .lvl = 0,
    .species = SPECIES_LUXRAY,
    .moves = {MOVE_THUNDER, MOVE_FOUL_PLAY, MOVE_THUNDER_WAVE, MOVE_SWAGGER}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Angelica[] = {
    {
    .iv = 250,
    .lvl = -2,
    .species = SPECIES_CASTFORM,
    .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
    },
    {
    .iv = 250,
    .lvl = -1,
    .species = SPECIES_CASTFORM,
    .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_FIRE_BLAST}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Callie[] = {
    {
    .iv = 220,
    .lvl = -1,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = 210,
    .lvl = -2,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jennifer[] = {
    {
    .iv = 200,
    .lvl = -1,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_SPIRITOMB,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jenna[] = {
    {
    .iv = 250,
    .lvl = -2,
    .species = SPECIES_FEAROW,
    },
    {
    .iv = 250,
    .lvl = -2,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 250,
    .lvl = -2,
    .species = SPECIES_MR_MIME,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lorenzo[] = {
    {
    .iv = 250,
    .lvl = -3,
    .species = SPECIES_RAPIDASH_GALARIAN,
    },
    {
    .iv = 250,
    .lvl = -3,
    .species = SPECIES_MIENSHAO,
    },
    {
    .iv = 250,
    .lvl = -2,
    .species = SPECIES_MEGANIUM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jeffrey1[] = {
    {
    .iv = 150,
    .lvl = -2,
    .species = SPECIES_ALAKAZAM,
    },
    {
    .iv = 150,
    .lvl = -2,
    .species = SPECIES_GOTHITELLE,
    },
    {
    .iv = 250,
    .lvl = -1,
    .species = SPECIES_SLOWKING,
    },
    {
    .iv = 250,
    .lvl = -1,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jeffrey2[] = {
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jeffrey3[] = {
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 20,
    .lvl = 34,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jeffrey4[] = {
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = 30,
    .lvl = 36,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Jeffrey5[] = {
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER
    },
    {
    .iv = 40,
    .lvl = 38,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Chip[] = {
    {
    .iv = 250,
    .lvl = -2,
    .species = SPECIES_CLAYDOL,
    .moves = {MOVE_PSYBEAM, MOVE_EXPLOSION, MOVE_SANDSTORM, MOVE_ANCIENT_POWER}
    },
    {
    .iv = 250,
    .lvl = -1,
    .species = SPECIES_EXCADRILL,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SANDSTORM, MOVE_EARTHQUAKE}
    },
    {
    .iv = 250,
    .lvl = 0,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_POISON_STING, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Keigo[] = { // Guardian of Pidgeotite
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_NINJASK,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .ability = 0, // Speed Boost
    .moves = {MOVE_X_SCISSOR, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS, MOVE_SWORDS_DANCE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_ACCELGOR,
    .heldItem = ITEM_RED_CARD,
    .ability = 2, // Unburden
    .moves = {MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST, MOVE_TOXIC_SPIKES}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_GRENINJA,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Protean
    .moves = {MOVE_WATER_SHURIKEN, MOVE_BLIZZARD, MOVE_DARK_PULSE, MOVE_GRASS_KNOT}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 1,
    .species = SPECIES_BISHARP,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 0, // Defiant
    .moves = {MOVE_STONE_EDGE, MOVE_FOUL_PLAY, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 1,
    .species = SPECIES_WEAVILE,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 0, // Pressure
    .moves = {MOVE_NIGHT_SLASH, MOVE_ICE_PUNCH, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_SCIZOR,
    .heldItem = ITEM_SCIZORITE,
    .ability = 0, // Speed Boost
    .moves = {MOVE_AERIAL_ACE, MOVE_BUG_BITE, MOVE_KNOCK_OFF, MOVE_BULLET_PUNCH}
    }
};

//Route 121

static const struct TrainerMonNoItemDefaultMoves sParty_Cale[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_CHANDELURE,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GENGAR,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Tammy[] = {
    {
    .iv = 200,
    .lvl = -3,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = 200,
    .lvl = -3,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Jessica1[] = {
    {
    .iv = 220,
    .lvl = 0,
    .species = SPECIES_SYLVEON,
    .moves = {MOVE_MOONBLAST, MOVE_MISTY_TERRAIN, MOVE_DOUBLE_EDGE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 210,
    .lvl = 1,
    .species = SPECIES_CORVIKNIGHT,
    .moves = {MOVE_BRAVE_BIRD, MOVE_HEAVY_SLAM, MOVE_PROTECT, MOVE_BODY_PRESS}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Jessica2[] = {
    {
    .iv = 220,
    .lvl = 0,
    .species = SPECIES_SYLVEON,
    .moves = {MOVE_MOONBLAST, MOVE_MISTY_TERRAIN, MOVE_DOUBLE_EDGE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = 210,
    .lvl = 1,
    .species = SPECIES_CORVIKNIGHT,
    .moves = {MOVE_BRAVE_BIRD, MOVE_HEAVY_SLAM, MOVE_PROTECT, MOVE_BODY_PRESS}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Jessica3[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Jessica4[] = {
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Jessica5[] = {
    {
    .iv = 40,
    .lvl = 44,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = 40,
    .lvl = 44,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMonItemCustomMoves sParty_KateAndJoy[] = { //Guardian of BEEDRILLITE 
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 3,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_HERACRONITE,
    .ability = 2, //Moxie > Skill Link
    .moves = {MOVE_CLOSE_COMBAT, MOVE_BULLET_SEED, MOVE_MEGAHORN, MOVE_SWORDS_DANCE}
    },
    {
    .spread = SPREAD_31_IV_HP_DEF_SPDEF_SASSY,
    .lvl = -1,
    .species = SPECIES_WHIMSICOTT,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // Prankster
    .moves = {MOVE_TAILWIND, MOVE_HELPING_HAND, MOVE_LIGHT_SCREEN, MOVE_TAUNT}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = -1,
    .species = SPECIES_ORICORIO_PAU,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 0, // Dancer
    .moves = {MOVE_HURRICANE, MOVE_REVELATION_DANCE, MOVE_TEETER_DANCE, MOVE_SWORDS_DANCE}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = -1,
    .species = SPECIES_GOURGEIST_SUPER,
    .heldItem = ITEM_LIFE_ORB,
    .ability = 2, // Insomnia
    .moves = {MOVE_TRICK, MOVE_PHANTOM_FORCE, MOVE_POWER_WHIP, MOVE_PAIN_SPLIT}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 1,
    .species = SPECIES_VAPOREON,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Water Absorb
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HYPER_VOICE, MOVE_DIG}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_MODEST,
    .lvl = 1,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 1, // Intimidate
    .moves = {MOVE_THUNDER, MOVE_PLAY_ROUGH, MOVE_THROAT_CHOP, MOVE_CHARGE_BEAM}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Pat[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_POOCHYENA,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_ARBOK,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_MARILL,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_GULPIN,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Myles[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_EXEGGUTOR,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Walter1[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 0,
    .lvl = 0,
    .species = SPECIES_LUXRAY,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Walter2[] = {
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Walter3[] = {
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = 20,
    .lvl = 36,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Walter4[] = {
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Walter5[] = {
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_GOLDUCK,
    .moves = {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP}
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Vanessa[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Marcel[] = {
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_RILLABOOM,
    },
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cristin1[] = {
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 100,
    .lvl = -2,
    .species = SPECIES_VILEPLUME,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cristin2[] = {
    {
    .iv = 110,
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 110,
    .lvl = 35,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cristin3[] = {
    {
    .iv = 120,
    .lvl = 37,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = 120,
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 120,
    .lvl = 37,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cristin4[] = {
    {
    .iv = 130,
    .lvl = 39,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = 130,
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = 100,
    .lvl = 39,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cristin5[] = {
    {
    .iv = 140,
    .lvl = 41,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = 140,
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = 140,
    .lvl = 41,
    .species = SPECIES_SLAKING,
    }
};

// MT Pyre

// 2F

static const struct TrainerMonNoItemDefaultMoves sParty_Mark[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_SHUPPET,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_HAUNTER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Leah[] = {
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_SHUPPET,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Zander[] = {
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_HAUNTER,
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_CORSOLA_GALARIAN,
    }
};

static const struct TrainerMonItemCustomMoves sParty_DezAndLuke[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_DRIFBLIM,
    .heldItem = ITEM_FLYING_GEM,
    .ability = 1, // Unburden
    .moves = {MOVE_ACROBATICS, MOVE_PHANTOM_FORCE, MOVE_TAILWIND, MOVE_STOCKPILE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_PALOSSAND,
    .heldItem = ITEM_RED_CARD,
    .ability = 0, // Water Compaction
    .moves = {MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_GIGA_DRAIN}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 1,
    .species = SPECIES_DRAKLOAK,
    .heldItem = ITEM_EVIOLITE,
    .ability = 2, // Cursed Body
    .moves = {MOVE_DRAGON_DANCE, MOVE_PHANTOM_FORCE, MOVE_DRAGON_RUSH, MOVE_DOUBLE_EDGE}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 2,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_GHOST_GEM,
    .ability = 0, // Pressure
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_CHARGE_BEAM, MOVE_ICE_BEAM}
    }
};

// 3F

static const struct TrainerMonNoItemDefaultMoves sParty_Kayla[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SKUNTANK,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_William[] = {
    {
    .iv = 60,
    .lvl = -2,
    .species = SPECIES_POLTEAGEIST,
    },
    {
    .iv = 60,
    .lvl = -2,
    .species = SPECIES_VILEPLUME,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Gabrielle1[] = {
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_DRIFBLIM,
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_HAUNTER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Gabrielle2[] = {
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Gabrielle3[] = {
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = 20,
    .lvl = 33,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Gabrielle4[] = {
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = 30,
    .lvl = 35,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Gabrielle5[] = {
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = 40,
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    }
};

// 4F

static const struct TrainerMonNoItemDefaultMoves sParty_Tasha[] = {
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_TREVENANT,
    },
    {
    .iv = 200,
    .lvl = -2,
    .species = SPECIES_CHANDELURE,
    }
};

// 5F

static const struct TrainerMonNoItemDefaultMoves sParty_Atsushi[] = {
    {
    .iv = 100,
    .lvl = 1,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = 100,
    .lvl = 0,
    .species = SPECIES_ORICORIO_SENSU,
    }
};

// 6F

static const struct TrainerMonNoItemDefaultMoves sParty_Valerie1[] = {
    {
    .iv = 210,
    .lvl = 3,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = 200,
    .lvl = 3,
    .species = SPECIES_SPIRITOMB,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Valerie2[] = {
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = 10,
    .lvl = 31,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Valerie3[] = {
    {
    .iv = 20,
    .lvl = 35,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = 20,
    .lvl = 35,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Valerie4[] = {
    {
    .iv = 30,
    .lvl = 40,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = 30,
    .lvl = 40,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Valerie5[] = {
    {
    .iv = 40,
    .lvl = 42,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = 40,
    .lvl = 42,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = 40,
    .lvl = 42,
    .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Cedric[] = {
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    },
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    },
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    },
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

// Mt Pyre Summit

static const struct TrainerMonItemCustomMoves sParty_GruntMtPyre1[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_ROCKY_HELMET,
    .ability = 0, // Rough Skin
    .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_SWAGGER, MOVE_ICE_FANG}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_JELLICENT,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 1, // Cursed Body
    .moves = {MOVE_WATER_SPOUT, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_RAIN_DANCE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_GruntMtPyre2[] = {
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 2, // Drizzle
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 2, // Rain Dish
    .moves = {MOVE_HYDRO_PUMP, MOVE_POISON_JAB, MOVE_SLUDGE_WAVE, MOVE_PROTECT}
    }
};

static const struct TrainerMonItemCustomMoves sParty_GruntMtPyre3[] = {
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 0,
    .species = SPECIES_SLOWBRO,
    .heldItem = ITEM_EVIOLITE,
    .ability = 0, // Oblivious
    .moves = {MOVE_SURF, MOVE_SKILL_SWAP, MOVE_HELPING_HAND, MOVE_PSYCHIC}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 2,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 0, // Volt Absorb
    .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_RAIN_DANCE}
    }
};

static const struct TrainerMonItemCustomMoves sParty_GruntMtPyre4[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 1,
    .species = SPECIES_BASCULEGION,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 0, // Swift Swim
    .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 3,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 1, // Sniper
    .moves = {MOVE_DRAGON_DANCE, MOVE_OUTRAGE, MOVE_BLIZZARD, MOVE_HURRICANE}
    }
};

// Route 123 from MT Pyre

static const struct TrainerMonNoItemDefaultMoves sParty_Cameron1[] = {
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_SOLROCK,
    },
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_DUSCLOPS,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cameron2[] = {
    {
    .iv = 10,
    .lvl = 33,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 10,
    .lvl = 33,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cameron3[] = {
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 20,
    .lvl = 38,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cameron4[] = {
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 30,
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cameron5[] = {
    {
    .iv = 40,
    .lvl = 45,
    .species = SPECIES_SOLROCK,
    },
    {
    .iv = 40,
    .lvl = 45,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Jonas[] = {
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_GRIMER,
    .moves = {MOVE_TOXIC, MOVE_SLUDGE_WAVE, MOVE_PROTECT, MOVE_ACID_ARMOR}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Kayley[] = {
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_CASTFORM,
    .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
    },
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_CASTFORM,
    .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Kindra[] = {
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_SCYTHER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Ed[] = {
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_HYPNO,
    },
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Wendy[] = {
    {
    .iv = 200,
    .lvl = 5,
    .species = SPECIES_MAWILE,
    .moves = {MOVE_BATON_PASS, MOVE_IRON_DEFENSE, MOVE_PLAY_ROUGH, MOVE_CRUNCH}
    },
    {
    .iv = 200,
    .lvl = 3,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED}
    },
    {
    .iv = 200,
    .lvl = 4,
    .species = SPECIES_PELIPPER,
    .moves = {MOVE_FLY, MOVE_PROTECT, MOVE_HYDRO_PUMP, MOVE_STOCKPILE}
    },
    {
    .iv = 200,
    .lvl = 4,
    .species = SPECIES_GOTHITELLE,
    .moves = {MOVE_PSYCHIC, MOVE_HEAL_BLOCK, MOVE_EMBARGO, MOVE_FLATTER}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Alberto[] = {
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_PERSIAN,
    },
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_OCTILLERY,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Fernando1[] = {
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_LUXRAY,
    },
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Fernando2[] = {
    {
    .iv = 10,
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 10,
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 10,
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Fernando3[] = {
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Fernando4[] = {
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 30,
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Fernando5[] = {
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = 40,
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Braxton[] = {
    {
    .iv = 100,
    .lvl = 2,
    .species = SPECIES_SWELLOW,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_TAILWIND, MOVE_BRAVE_BIRD, MOVE_ENDEAVOR}
    },
    {
    .iv = 100,
    .lvl = 2,
    .species = SPECIES_FLYGON,
    .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_PULSE, MOVE_PROTECT, MOVE_UPROAR}
    },
    {
    .iv = 100,
    .lvl = 2,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_ROLLOUT, MOVE_HEAVY_SLAM, MOVE_REST, MOVE_WATER_PULSE}
    },
    {
    .iv = 100,
    .lvl = 2,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_THUNDER, MOVE_LOCK_ON, MOVE_THUNDER_WAVE, MOVE_GYRO_BALL}
    },
    {
    .iv = 100,
    .lvl = 5,
    .species = SPECIES_SHIFTRY,
    .moves = {MOVE_GIGA_DRAIN, MOVE_FEINT_ATTACK, MOVE_HURRICANE, MOVE_SWAGGER}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Fredrick[] = {
    {
    .iv = 100,
    .lvl = 1,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = 100,
    .lvl = 0,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Jacki1[] = {//Lopunnite
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 1,
    .species = SPECIES_SCYTHER,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = 1, // Technician
    .moves = {MOVE_SWORDS_DANCE, MOVE_BUG_BITE, MOVE_DUAL_WINGBEAT, MOVE_CLOSE_COMBAT}
    },
    {
    .spread = SPREAD_31_IV_HP_DEF_SPDEF_SASSY,
    .lvl = 2,
    .species = SPECIES_CLOYSTER,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 0, // Shell Armor
    .moves = {MOVE_HELPING_HAND, MOVE_TOXIC_SPIKES, MOVE_LIGHT_SCREEN, MOVE_RAZOR_SHELL}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 2,
    .species = SPECIES_SIRFETCHD,
    .heldItem = ITEM_LEEK,
    .ability = 2, // Scrappy
    .moves = {MOVE_SWORDS_DANCE, MOVE_BRAVE_BIRD, MOVE_LEAF_BLADE, MOVE_CLOSE_COMBAT}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 3,
    .species = SPECIES_FERALIGATR,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Sheer Force
    .moves = {MOVE_DYNAMIC_PUNCH, MOVE_ICE_BEAM, MOVE_SCALD, MOVE_CRUNCH}
    },
    {
    .spread = SPREAD_31_IV_HP_DEF_SPDEF_SASSY,
    .lvl = 2,
    .species = SPECIES_DUSKNOIR,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 0, // Pressure
    .moves = {MOVE_SKILL_SWAP, MOVE_HELPING_HAND, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_NAUGHTY,
    .lvl = 4,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ALTARIANITE,
    .ability = 2, // Cloud Nine > Pixilate
    .moves = {MOVE_DOUBLE_EDGE, MOVE_MOONBLAST, MOVE_DRAGON_PULSE, MOVE_HEAT_WAVE}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jacki2[] = {
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 10,
    .lvl = 34,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jacki3[] = {
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 20,
    .lvl = 37,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jacki4[] = {
    {
    .iv = 30,
    .lvl = 40,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = 30,
    .lvl = 40,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jacki5[] = {
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    },
    {
    .iv = 40,
    .lvl = 43,
    .species = SPECIES_ALAKAZAM,
    }
};

// Magma Hideout

// Floor 1

static const struct TrainerMonNoItemDefaultMoves sParty_GruntMagmaHideout1[] = {
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_GOLEM
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GruntMagmaHideout2[] = {
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 0,
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    }
};

// Floor 2F 1R

static const struct TrainerMonNoItemDefaultMoves sParty_GruntMagmaHideout14[] = {
    {
    .iv = 200,
    .lvl = 2,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = 200,
    .lvl = 2,
    .species = SPECIES_BOLDORE,
    },
    {
    .iv = 200,
    .lvl = 3,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GruntMagmaHideout3[] = {
    {
    .iv = 200,
    .lvl = 2,
    .species = SPECIES_GRAVELER_ALOLAN,
    },
    {
    .iv = 200,
    .lvl = 3,
    .species = SPECIES_NINETALES,
    },
    {
    .iv = 200,
    .lvl = 1,
    .species = SPECIES_TALONFLAME
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GruntMagmaHideout4[] = {
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_SIMISEAR,
    },
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_CHANDELURE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GruntMagmaHideout5[] = {
    {
    .iv = 0,
    .lvl = 2,
    .species = SPECIES_CENTISKORCH,
    },
    {
    .iv = 0,
    .lvl = 4,
    .species = SPECIES_CAMERUPT,
    }
};

// Floor 2F 2R

static const struct TrainerMonItemCustomMoves sParty_GruntMagmaHideout6[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_FLAREON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 0, // Flash Fire
    .moves = {MOVE_FLARE_BLITZ, MOVE_HELPING_HAND, MOVE_WILL_O_WISP, MOVE_SCORCHING_SANDS}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPDEF,
    .lvl = 2,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Flash Fire
    .moves = {MOVE_HEAT_WAVE, MOVE_DRAGON_PULSE, MOVE_WILL_O_WISP, MOVE_SUNNY_DAY}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MIXED,
    .lvl = 3,
    .species = SPECIES_CENTISKORCH,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = 0, // Flash Fire
    .moves = {MOVE_HEAT_WAVE, MOVE_LEECH_LIFE, MOVE_THUNDER_FANG, MOVE_CRUNCH}
    }
};

static const struct TrainerMonItemCustomMoves sParty_GruntMagmaHideout15[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 0,
    .species = SPECIES_BLAZIKEN,
    .heldItem = ITEM_SCOPE_LENS,
    .ability = 2, // Speed Boost
    .moves = {MOVE_FLARE_BLITZ, MOVE_FOCUS_ENERGY, MOVE_BRICK_BREAK, MOVE_SKY_UPPERCUT}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MIXED,
    .lvl = 1,
    .species = SPECIES_CHANDELURE,
    .heldItem = ITEM_WIDE_LENS,
    .ability = 0, // Flash Fire
    .moves = {MOVE_INFERNO, MOVE_SHADOW_BALL, MOVE_HEX, MOVE_SOLAR_BEAM}
    }
};

static const struct TrainerMonItemCustomMoves sParty_GruntMagmaHideout7[] = {
    {
    .spread = SPREAD_31_IV_ATK_SPEED_NAUGHTY,
    .lvl = 2,
    .species = SPECIES_SIMISEAR,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 2, // Blaze
    .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_CLAW, MOVE_WILL_O_WISP, MOVE_SWAGGER}
    },
    {
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .lvl = 3,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 0, // Flame Body
    .moves = {MOVE_FLY, MOVE_TAILWIND, MOVE_HEAT_WAVE, MOVE_ROOST}
    }
};

static const struct TrainerMonItemCustomMoves sParty_GruntMagmaHideout8[] = {
     {
    .spread = SPREAD_31_IV_SPATK_SPEED_HASTY,
    .lvl = 3,
    .species = SPECIES_BRAIXEN,
    .heldItem = ITEM_EVIOLITE,
    .ability = 0, // Blaze
    .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 1,
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_LEFTOVERS,
    .ability = 1, // Shell Armor
    .moves = {MOVE_SHELL_SMASH, MOVE_DRAGON_TAIL, MOVE_IRON_DEFENSE, MOVE_HEAT_CRASH}
    }
};

// Floor 3F 1R

static const struct TrainerMonNoItemDefaultMoves sParty_GruntMagmaHideout9[] = {
    {
    .iv = 220,
    .lvl = 3,
    .species = SPECIES_GOLBAT,
    },
    {
    .iv = 220,
    .lvl = 3,
    .species = SPECIES_SALAZZLE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GruntMagmaHideout16[] = {
    {
    .iv = 210,
    .lvl = 2,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = 200,
    .lvl = 0,
    .species = SPECIES_ABSOL,
    }
};

// Floor 3F 2R

static const struct TrainerMonNoItemDefaultMoves sParty_GruntMagmaHideout10[] = {
    {
    .iv = 210,
    .lvl = 2,
    .species = SPECIES_SKUNTANK,
    },
    {
    .iv = 200,
    .lvl = 0,
    .species = SPECIES_MAGCARGO,
    }
};

// Floor 4F

static const struct TrainerMonNoItemDefaultMoves sParty_GruntMagmaHideout11[] = {
    {
    .iv = 200,
    .lvl = 1,
    .species = SPECIES_BALTOY,
    },
    {
    .iv = 210,
    .lvl = 1,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GruntMagmaHideout12[] = {
    {
    .iv = 200,
    .lvl = 2,
    .species = SPECIES_ORICORIO,
    },
    {
    .iv = 200,
    .lvl = 2,
    .species = SPECIES_PYROAR,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GruntMagmaHideout13[] = {
    {
    .iv = 200,
    .lvl = 2,
    .species = SPECIES_GOLBAT,
    },
    {
    .iv = 210,
    .lvl = 2,
    .species = SPECIES_COALOSSAL,
    }
};

static const struct TrainerMonItemCustomMoves sParty_TabithaMagmaHideout[] = {
    {
    .spread = SPREAD_31_IV_HP_SPEED_TIMID,
    .lvl = 0,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_AIR_BALLOON,
    .ability = 1, // Drought
    .moves = {MOVE_STEALTH_ROCK, MOVE_FIRE_BLAST, MOVE_PROTECT, MOVE_RAPID_SPIN}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 2,
    .species = SPECIES_VOLCARONA,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = 0, // Flame Body
    .moves = {MOVE_HEAT_WAVE, MOVE_LEECH_LIFE, MOVE_QUIVER_DANCE, MOVE_SOLAR_BEAM}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_UMBREON,
    .heldItem = ITEM_LUM_BERRY,
    .ability = 1, // Synchronize
    .moves = {MOVE_FOUL_PLAY, MOVE_PSYCHIC, MOVE_SNARL, MOVE_DIG}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 3,
    .species = SPECIES_TURTONATOR,
    .heldItem = ITEM_RED_CARD,
    .ability = 0, // Shell Armor
    .moves = {MOVE_DRAGON_PULSE, MOVE_SHELL_TRAP, MOVE_SOLAR_BEAM, MOVE_FLASH_CANNON}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 4,
    .species = SPECIES_DELPHOX,
    .heldItem = ITEM_NONE,
    .ability = 2, // Magician
    .moves = {MOVE_MYSTICAL_FIRE, MOVE_SHADOW_BALL, MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM}
    }
};

static const struct TrainerMonItemCustomMoves sParty_MaxieMagmaHideout[] = {
    {
    .spread = SPREAD_31_IV_HP_DEF_SPDEF_SASSY,
    .lvl = 2,
    .species = SPECIES_TALONFLAME,
    .heldItem = ITEM_HEAT_ROCK,
    .ability = 2, // Gale Wings
    .moves = {MOVE_BRAVE_BIRD, MOVE_TAILWIND, MOVE_SUNNY_DAY, MOVE_ROOST}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 2,
    .species = SPECIES_MAROWAK_ALOLAN,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = 2, //Rock head
    .moves = {MOVE_SHADOW_BONE, MOVE_DOUBLE_EDGE, MOVE_FLARE_BLITZ, MOVE_IRON_HEAD}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_ADAMANT,
    .lvl = 3,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_CAMERUPTITE,
    .ability = 0, // Magma Armor > Sheer Force
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_LAVA_PLUME}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 3,
    .species = SPECIES_MAGMORTAR,
    .heldItem = ITEM_RED_CARD,
    .ability = 2, // Vital Spirit
    .moves = {MOVE_THUNDERBOLT, MOVE_FLARE_BLITZ, MOVE_SUNNY_DAY, MOVE_CONFUSE_RAY}
    },
    {
    .spread = SPREAD_31_IV_HP_SPATK_MODEST,
    .lvl = 2,
    .species = SPECIES_SUNFLORA,
    .heldItem = ITEM_WISE_GLASSES,
    .ability = 1, // Solar Power
    .moves = {MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_LIGHT_SCREEN, MOVE_DAZZLING_GLEAM}
    },
    {
    .spread = SPREAD_31_IV_ATK_SPEED_JOLLY,
    .lvl = 4,
    .species = SPECIES_INCINEROAR,
    .heldItem = ITEM_ASSAULT_VEST,
    .ability = 2, // Intimidate
    .moves = {MOVE_DARKEST_LARIAT, MOVE_EARTHQUAKE, MOVE_FLARE_BLITZ, MOVE_THUNDER_PUNCH}
    }
};

// Lilycove City - Rival fight

//todo - the rest of the mess

static const struct TrainerMonNoItemDefaultMoves sParty_GruntSeafloorCavern4[] = {
    {
    .lvl = 36,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Declan[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GruntSpaceCenter1[] = {
    {
    .lvl = 32,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GruntAquaHideout5[] = {
    {
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Matt[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_ShellySeafloorCavern[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Archie[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 41,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 41,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Rose1[] = {
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_FERROSEED,
    }
};

static const struct TrainerMon sParty_Felix[] = {
    {
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 43,
    .species = SPECIES_CLAYDOL,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Violet[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GLOOM,
    }
};

static const struct TrainerMon sParty_Rose2[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GabbyAndTy1[] = {
    {
    .iv = 50,
    .lvl = -3,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 50,
    .lvl = -3,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 30,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 30,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 36,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SONIC_BOOM, MOVE_THUNDER_WAVE, MOVE_METAL_SOUND, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 39,
    .species = SPECIES_EXPLOUD,
    .moves = {MOVE_ASTONISH, MOVE_STOMP, MOVE_SUPERSONIC, MOVE_HYPER_VOICE}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Vincent[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Leroy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 46,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 46,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Edgar[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_CACTURNE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Albert[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_MUK,
    }
};

static const struct TrainerMon sParty_Samuel[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Vito[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_DODRIO,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_ELECTRODE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Owen[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Warren[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 33,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Keira[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Hope[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Shannon[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_CLAYDOL,
    }
};

static const struct TrainerMon sParty_Michelle[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Caroline[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Julie[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_NINETALES,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Patricia[] = {
    {
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 41,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Daphne[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 39,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL, MOVE_WATER_PULSE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 39,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ATTRACT, MOVE_SAFEGUARD, MOVE_TAKE_DOWN, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 30,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Brianna[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 40,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Naomi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Connie[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 40,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Bridget[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 40,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Olivia[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 35,
    .species = SPECIES_CLAMPERL,
    .moves = {MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_CORPHISH,
    .moves = {MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_LOMBRE,
    .moves = {MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Tiffany[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Mollie[] = {
    {
    .lvl = 33,
    .species = SPECIES_WHISCASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Garret[] = {
    {
    .lvl = 45,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Sawyer1[] = {
    {
    .iv = 0,
    .lvl = 0,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = 0,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Sawyer2[] = {
    {
    .iv = 10,
    .lvl = 0,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 10,
    .lvl = 0,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Sawyer3[] = {
    {
    .iv = 20,
    .lvl = 0,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 20,
    .lvl = 0,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 20,
    .lvl = 0,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Sawyer4[] = {
    {
    .iv = 30,
    .lvl = 0,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = 30,
    .lvl = 0,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 30,
    .lvl = 0,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Sawyer5[] = {
    {
    .iv = 40,
    .lvl = 0,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = 40,
    .lvl = 0,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = 40,
    .lvl = 0,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_Spencer[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Roland[] = {
    {
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Nolen[] = {
    {
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Stan[] = {
    {
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Barry[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dean[] = {
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 31,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Rodney[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Richard[] = {
    {
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Herman[] = {
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Santiago[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Gilbert[] = {
    {
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Franklin[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEALEO,
    }
};

static const struct TrainerMon sParty_Kevin[] = {
    {
    .lvl = 34,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Jack[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dudley[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Chad[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Hitoshi[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 32,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Kiyo[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Yuji[] = {
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = 100,
    .lvl = -3,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GruntAquaHideout7[] = {
    {
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};
 // Route 118
static const struct TrainerMonNoItemDefaultMoves sParty_Dalton1[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Dalton2[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_WHISMUR,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dalton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Justin[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_KECLEON,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Preston[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Virgil[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Blake[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Joshua[] = {
    {
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Hannah[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_KIRLIA,
    }
};

static const struct TrainerMon sParty_Samantha[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Maura[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Alexis[] = {
    {
    .lvl = 41,
    .species = SPECIES_KIRLIA,
    },
    {
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Micah[] = {
    {
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Thomas[] = {
    {
    .lvl = 45,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Sidney[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_FEINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 49,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Phoebe[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FEINT_ATTACK}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 51,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Glacia[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 52,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 52,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD}
    }
};

static const struct TrainerMon sParty_Drake[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 52,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_TOMB, MOVE_DRAGON_CLAW, MOVE_PROTECT, MOVE_DOUBLE_EDGE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 54,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE, MOVE_AERIAL_ACE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SMOKESCREEN, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_BODY_SLAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_FLYGON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 55,
    .species = SPECIES_SALAMENCE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE, MOVE_CRUNCH}
    }
};

static const struct TrainerMonItemCustomMoves sParty_TateAndLiza1[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 41,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 41,
    .species = SPECIES_XATU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_SUNNY_DAY, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 42,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_CALM_MIND}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 42,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan1[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 41,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 41,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_AMNESIA, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_AURORA_BEAM, MOVE_WATER_PULSE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_LEER}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Ted[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_RALTS,
    }
};

static const struct TrainerMon sParty_Paul[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_ODDISH,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Georgia[] = {
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 10,
    .lvl = -3,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Colton[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 40,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = -3,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    }
};

static const struct TrainerMonItemDefaultMoves sParty_Bethany[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 35,
    .species = SPECIES_AZURILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Quincy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_DUSCLOPS,
    .moves = {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Katelynn[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Eddie[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ZIGZAGOON,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Wallace[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 57,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 55,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 56,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 56,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_AMNESIA, MOVE_HYPER_BEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 56,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_SURF}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 58,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC}
    }
};
 // Route 118
static const struct TrainerMonNoItemDefaultMoves sParty_Wade[] = {
    {
    .iv = 0,
    .lvl = -1,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = 0,
    .lvl = 1,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Ronald[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 30,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Camden[] = {
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Isaiah1[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo1[] = {
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Chase[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isobel[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Donny[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Talia[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn1[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Allison[] = {
    {
    .lvl = 27,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_BAGON,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_DRAGON_FANG
    }
};

static const struct TrainerMon sParty_Aaron[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_BAGON,
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Presley[] = {
    {
    .lvl = 33,
    .species = SPECIES_TROPIUS,
    },
    {
    .lvl = 33,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Benny[] = {
    {
    .lvl = 36,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 36,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Alex[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Beck[] = {
    {
    .lvl = 34,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Dianne[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 43,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Cora[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Paula[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jenny1[] = {
    {
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Grace[] = {
    {
    .lvl = 34,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Tanya[] = {
    {
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Sharon[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Nikki[] = {
    {
    .lvl = 33,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Brenda[] = {
    {
    .lvl = 34,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Katie[] = {
    {
    .lvl = 33,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Susie[] = {
    {
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Kara[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Dana[] = {
    {
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Sienna[] = {
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Debra[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Linda[] = {
    {
    .lvl = 33,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 33,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
    .lvl = 34,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Laurel[] = {
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Carlee[] = {
    {
    .lvl = 35,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
    .lvl = 38,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
    .lvl = 41,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
    .lvl = 43,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 43,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Martha[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Ernest1[] = {
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Phillip[] = {
    {
    .lvl = 44,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 44,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Leonard[] = {
    {
    .lvl = 43,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 43,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Ernest2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMonItemCustomMoves sParty_Annika[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Auron[] = {
    {
    .lvl = 33,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Kelvin[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Marley[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sParty_Reyna[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Hudson[] = {
    {
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Conor[] = {
    {
    .lvl = 33,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_TabithaMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 38,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 40,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_WallyVR1[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 41,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 45,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_Mitchell[] = {
    {
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
    },
    {
    .lvl = 43,
    .species = SPECIES_SOLROCK,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Halle[] = {
    {
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    },
    {
    .lvl = 43,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Sebastian[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 39,
    .species = SPECIES_CACTURNE,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Sophia[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 38,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_GruntSeafloorCavern5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .lvl = 31,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Sylvia[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Athena[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 0,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 0,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Harrison[] = {
    {
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Clarence[] = {
    {
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Terry[] = {
    {
    .lvl = 37,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nate[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Kathleen[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Clifford[] = {
    {
    .lvl = 36,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nicholas[] = {
    {
    .lvl = 36,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
    .lvl = 32,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Macey[] = {
    {
    .lvl = 36,
    .species = SPECIES_NATU,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Paxton[] = {
    {
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 33,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Isabella[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jonathan[] = {
    {
    .lvl = 33,
    .species = SPECIES_KECLEON,
    },
    {
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};
 // Route 116

static const struct TrainerMon sParty_Sally[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_ODDISH,
    }
};

static const struct TrainerMon sParty_Robin[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Andrea[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Crissy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Alan[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaAndJed[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Jonah[] = {
    {
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 32,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Henry[] = {
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Roger[] = {
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MAGIKARP,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Alexa[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ruben[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMon sParty_Koji1[] = {
    {
    .lvl = 34,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Wayne[] = {
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 36,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Aidan[] = {
    {
    .lvl = 32,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 32,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Reed[] = {
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tisha[] = {
    {
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_KimAndIris[] = {
    {
    .lvl = 32,
    .species = SPECIES_SWABLU,
    .moves = {MOVE_SING, MOVE_FURY_ATTACK, MOVE_SAFEGUARD, MOVE_AERIAL_ACE}
    },
    {
    .lvl = 35,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_REST, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMonNoItemCustomMoves sParty_JohnAndJay1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    {
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 33,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .lvl = 42,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 40,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .lvl = 45,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 43,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .lvl = 48,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 46,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
    {
    .lvl = 51,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 49,
    .species = SPECIES_SHARPEDO,
    }
};
 // Route 118
static const struct TrainerMonNoItemDefaultMoves sParty_Deandre[] = {
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_ZUBAT,
    },
    {
    .iv = 0,
    .lvl = -2,
    .species = SPECIES_DUGTRIO,
    },
    {
    .iv = 0,
    .lvl = -3,
    .species = SPECIES_DUGTRIO_ALOLAN,
    }
};

static const struct TrainerMon sParty_Darcy[] = {
    {
    .lvl = 33,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 42,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_MOLTRES,
    }
};

static const struct TrainerMon sParty_Makayla[] = {
    {
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMonItemCustomMoves sParty_TateAndLiza2[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 49,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 49,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_DROWZEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 54,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 54,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 55,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 58,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 59,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 58,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 59,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 60,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 60,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 63,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 64,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 63,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 64,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 65,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan2[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_POLIWAG,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 46,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 51,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan3[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 50,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 51,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 53,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 56,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan4[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 56,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 58,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 56,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 58,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 58,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 61,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan5[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 61,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 63,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 61,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 63,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 63,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 66,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMonItemCustomMoves sParty_Steven[] = {
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 77,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 75,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 76,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 76,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 76,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .spread = SPREAD_0_IV_EV,
    .lvl = 78,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Pablo2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Koji2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMonNoItemDefaultMoves sParty_Mariela[] = {
    {
    .lvl = 41,
    .species = SPECIES_CHIMECHO,
    }
};

static const struct TrainerMon sParty_Alvaro[] = {
    {
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 41,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Everett[] = {
    {
    .lvl = 41,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_Red[] = {
    {
    .lvl = 5,
    .species = SPECIES_CHARMANDER,
    }
};

static const struct TrainerMon sParty_Leaf[] = {
    {
    .lvl = 5,
    .species = SPECIES_BULBASAUR,
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};
