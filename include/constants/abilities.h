#ifndef GUARD_CONSTANTS_ABILITIES_H
#define GUARD_CONSTANTS_ABILITIES_H

#define ABILITY_NONE 0
#define ABILITY_STENCH 1 // This Pokemon's attacks without a chance to flinch gain a 10% chance to flinch.
#define ABILITY_DRIZZLE 2 // The Pokémon makes it rain when it enters a battle.
#define ABILITY_SPEED_BOOST 3 // Its Speed stat is boosted every turn.
#define ABILITY_BATTLE_ARMOR 4 // Hard armor protects the Pokémon from critical hits. Takes 20% less damage.
#define ABILITY_STURDY 5 // It cannot be knocked out with one hit. One-hit KO moves cannot knock it out, either.
#define ABILITY_DAMP 6 // Prevents the use of explosive moves, such as Self-Destruct, by dampening its surroundings.
#define ABILITY_LIMBER 7 // Its limber body protects the Pokémon from paralysis. Takes 30% less damage from crash damage.
#define ABILITY_SAND_VEIL 8 // Boosts the Pokémon's evasiveness in a sandstorm by 20%.
#define ABILITY_STATIC 9 // 30% chance to get paralyzed on contact against this Pokémon.
#define ABILITY_VOLT_ABSORB 10 // The Pokémon heals up to 1/4 of its maximum Hit Points when hit with Electric-type moves.
#define ABILITY_WATER_ABSORB 11 // The Pokémon heals up to 1/4 of its maximum Hit Points when hit with Water-type moves.
#define ABILITY_OBLIVIOUS 12 // The Pokémon is oblivious, and that keeps it from being infatuated or falling for taunts.
#define ABILITY_CLOUD_NINE 13 // Eliminates the effects of weather.
#define ABILITY_COMPOUND_EYES 14 // Raises the Pokémon’s accuracy by 30%.
#define ABILITY_INSOMNIA 15 // The Pokémon is suffering from insomnia and cannot fall asleep.
#define ABILITY_COLOR_CHANGE 16 // The Pokemon's type become the type that counters the move used on it before hit.
#define ABILITY_IMMUNITY 17 // The immune system of the Pokémon prevents it from getting poisoned. Halves damage from Poison-type moves.
#define ABILITY_FLASH_FIRE 18 // This ability makes the Pokémon immune to Fire-type moves and will activate when hit by one. When activated, the power of the Pokémon's Fire-type moves is increased by 50%.
#define ABILITY_SHIELD_DUST 19 // Damaging moves used by the opponent will not have an additional effect. Now also avoids damage from entry hazards.
#define ABILITY_OWN_TEMPO 20 // Prevents it from becoming confused.
#define ABILITY_SUCTION_CUPS 21 // *No innate* This Pokémon uses suction cups to stay in one spot to negate all moves and items that force switching out.
#define ABILITY_INTIMIDATE 22 // The Pokémon intimidates opposing Pokémon upon entering battle, lowering their Attack stat.
#define ABILITY_SHADOW_TAG 23 // This Pokémon steps on the opposing Pokémon's shadow to prevent it from escaping.
#define ABILITY_ROUGH_SKIN 24 // This Pokémon inflicts 1/8 HP damage on contact.
#define ABILITY_WONDER_GUARD 25 // *No innate* Its mysterious power only lets supereffective moves hit the Pokémon.
#define ABILITY_LEVITATE 26 // By floating in the air, the Pokémon receives full immunity to all Ground-type moves. Boosts the power of Flying-type moves by 25%.
#define ABILITY_EFFECT_SPORE 27 // When a Pokémon with this Ability is hit by a move that makes contact, there is a 10% chance that the attacking Pokémon will become either poisoned, paralyzed, or asleep, with a 3.3% probability each.
#define ABILITY_SYNCHRONIZE 28 // *No innate* The attacker will receive the same status condition if it inflicts a burn, poison, or paralysis to the Pokémon.
#define ABILITY_CLEAR_BODY 29 // Prevents other Pokémon's moves or Abilities from lowering the Pokémon's stats.
#define ABILITY_NATURAL_CURE 30 // All status conditions heal when the Pokémon switches out.
#define ABILITY_LIGHTNING_ROD 31 // The Pokémon draws in all Electric-type moves. Instead of being hit by Electric-type moves, it boosts its Attack or Sp. Attack stat (which is higher).
#define ABILITY_SERENE_GRACE 32 // Doubles the likelihood of additional effects occurring when attacking.
#define ABILITY_SWIFT_SWIM 33 // Doubles speed in rain.
#define ABILITY_CHLOROPHYLL 34 // Doubles speed in sunshine.
#define ABILITY_ILLUMINATE 35 // Boosts accuracy by 1.2x. Also has its existing field effect.
#define ABILITY_TRACE 36 // *No innate* When it enters a battle, the Pokémon copies an opposing Pokémon's Ability.
#define ABILITY_HUGE_POWER 37 // Doubles the Pokémon's Attack.
#define ABILITY_POISON_POINT 38 // 30% chance to get poisoned on contact against this Pokémon.
#define ABILITY_INNER_FOCUS 39 // The Pokémon's intensely focused, and that protects the Pokémon from flinching, Focus Blast has increased accuracy to 90%.
#define ABILITY_MAGMA_ARMOR 40 // Prevents the Pokémon from becoming frozen. Takes 30% less damage from Water- and Ice-type moves.
#define ABILITY_WATER_VEIL 41 // Prevents the Pokémon from getting a burn. Sets Aqua Ring on entry. [Aqua Ring effect: Restore 1/8 HP every turn]
#define ABILITY_MAGNET_PULL 42 // Traps Steel-type Pokémon.
#define ABILITY_SOUNDPROOF 43 // Soundproofing gives the Pokémon full immunity to all sound-based moves.
#define ABILITY_RAIN_DISH 44 // Restores 1/8 HP per turn under rain.
#define ABILITY_SAND_STREAM 45 // The Pokémon summons a sandstorm when it enters a battle.
#define ABILITY_PRESSURE 46 // When this Pokémon is hit by a move, the opponent’s PP lowers by 2 rather than 1.
#define ABILITY_THICK_FAT 47 // The Pokémon is protected by a layer of thick fat, which halves the damage taken from Fire- and Ice-type moves.
#define ABILITY_EARLY_BIRD 48 // The Pokémon awakens from sleep twice as fast as other Pokémon.
#define ABILITY_FLAME_BODY 49 // 30% chance to get burned on contact against this Pokémon.
#define ABILITY_RUN_AWAY 50 // Enables a sure getaway from wild Pokémon. Boosts the Pokémon's Speed stat sharply when its stats are lowered.
#define ABILITY_KEEN_EYE 51 // Prevents loss of accuracy. Ups accuracy by 20%.
#define ABILITY_HYPER_CUTTER 52 // Prevents other Pokémon from lowering its Attack stat. Contact moves have its critical hit rate increased by 1.
#define ABILITY_PICKUP 53 // Removes all hazards on entry. Has a 10% chance of finding and holding an item after battle. Will not work if this Pokémon is already holding an item. From Black & White, it allows for the user to pick up the item of its opponent or ally if they used up the item in battle.
#define ABILITY_TRUANT 54 // The Pokémon can't use a move if it had used a move on the previous turn.
#define ABILITY_HUSTLE 55 // Boosts the Attack stat by 40%, but lowers accuracy by 10%.
#define ABILITY_CUTE_CHARM 56 // The opponent has a 30% chance of being induced with Attract when using an attack, that requires physical contact, against this Pokémon.
#define ABILITY_PLUS 57 // When battling with Plus or Minus, Special Attack increases by 50%.
#define ABILITY_MINUS 58 // When battling with Plus or Minus, Special Attack increases by 50%.
#define ABILITY_FORECAST 59 // *No innate* This Pokémon’ changes its form and type if Harsh Sunlight, Heavy Rain or Hail is in effect.
#define ABILITY_STICKY_HOLD 60 // Prevents item theft.
#define ABILITY_SHED_SKIN 61 // Every turn, it has a 1 in 3 chance of healing from a status condition (BURN, PARALYZE, SLEEP, POISON, FREEZE).
#define ABILITY_GUTS 62 // Attack is increased by 50% when induced with a status (BURN, PARALYZE, SLEEP, POISON, FREEZE). Burn’s effect of lowering Attack is not applied.
#define ABILITY_MARVEL_SCALE 63 // The Pokémon's marvelous scales boost the Defense stats by 50% if it has a status condition.
#define ABILITY_LIQUID_OOZE 64 // *No innate* The oozed liquid has a strong stench, which damages attackers using any draining move.
#define ABILITY_OVERGROW 65 // Now always provides a 20% damage boost to their move types. This increases to 50% while the Pokémon is at or below 1/3 HP. These boosts do not stack (the 50% boost replaces the 20% one while weakened).
#define ABILITY_BLAZE 66 // // Now always provides a 20% damage boost to their move types. This increases to 50% while the Pokémon is at or below 1/3 HP. These boosts do not stack (the 50% boost replaces the 20% one while weakened).
#define ABILITY_TORRENT 67 // Now always provides a 20% damage boost to their move types. This increases to 50% while the Pokémon is at or below 1/3 HP. These boosts do not stack (the 50% boost replaces the 20% one while weakened).
#define ABILITY_SWARM 68 // Now always provides a 20% damage boost to their move types. This increases to 50% while the Pokémon is at or below 1/3 HP. These boosts do not stack (the 50% boost replaces the 20% one while weakened).
#define ABILITY_ROCK_HEAD 69 // Prevents recoil damage.
#define ABILITY_DROUGHT 70 // Summons sunshine on entry.
#define ABILITY_ARENA_TRAP 71 // Prevents fleeing.
#define ABILITY_VITAL_SPIRIT 72 // Prevents falling asleep.
#define ABILITY_WHITE_SMOKE 73 // The Pokémon is protected by its white smoke, which prevents other Pokémon from lowering its stats
#define ABILITY_PURE_POWER 74 // Doubles Attack.
#define ABILITY_SHELL_ARMOR 75 // A hard shell protects the Pokémon from critical hits. Takes 20% less damage.
#define ABILITY_AIR_LOCK 76 // Eliminates the effects of weather.

#define ABILITIES_COUNT_GEN3 77

// Gen 4
#define ABILITY_TANGLED_FEET 77
#define ABILITY_MOTOR_DRIVE 78
#define ABILITY_RIVALRY 79
#define ABILITY_STEADFAST 80
#define ABILITY_SNOW_CLOAK 81
#define ABILITY_GLUTTONY 82
#define ABILITY_ANGER_POINT 83
#define ABILITY_UNBURDEN 84
#define ABILITY_HEATPROOF 85
#define ABILITY_SIMPLE 86
#define ABILITY_DRY_SKIN 87
#define ABILITY_DOWNLOAD 88
#define ABILITY_IRON_FIST 89
#define ABILITY_POISON_HEAL 90
#define ABILITY_ADAPTABILITY 91
#define ABILITY_SKILL_LINK 92
#define ABILITY_HYDRATION 93
#define ABILITY_SOLAR_POWER 94
#define ABILITY_QUICK_FEET 95
#define ABILITY_NORMALIZE 96
#define ABILITY_SNIPER 97
#define ABILITY_MAGIC_GUARD 98
#define ABILITY_NO_GUARD 99
#define ABILITY_STALL 100
#define ABILITY_TECHNICIAN 101
#define ABILITY_LEAF_GUARD 102
#define ABILITY_KLUTZ 103
#define ABILITY_MOLD_BREAKER 104
#define ABILITY_SUPER_LUCK 105
#define ABILITY_AFTERMATH 106
#define ABILITY_ANTICIPATION 107
#define ABILITY_FOREWARN 108
#define ABILITY_UNAWARE 109
#define ABILITY_TINTED_LENS 110
#define ABILITY_FILTER 111
#define ABILITY_SLOW_START 112
#define ABILITY_SCRAPPY 113
#define ABILITY_STORM_DRAIN 114
#define ABILITY_ICE_BODY 115
#define ABILITY_SOLID_ROCK 116
#define ABILITY_SNOW_WARNING 117
#define ABILITY_HONEY_GATHER 118
#define ABILITY_FRISK 119
#define ABILITY_RECKLESS 120
#define ABILITY_MULTITYPE 121
#define ABILITY_FLOWER_GIFT 122
#define ABILITY_BAD_DREAMS 123

#define ABILITIES_COUNT_GEN4 124

// Gen 5
#define ABILITY_PICKPOCKET 124
#define ABILITY_SHEER_FORCE 125
#define ABILITY_CONTRARY 126
#define ABILITY_UNNERVE 127
#define ABILITY_DEFIANT 128
#define ABILITY_DEFEATIST 129
#define ABILITY_CURSED_BODY 130
#define ABILITY_HEALER 131
#define ABILITY_FRIEND_GUARD 132
#define ABILITY_WEAK_ARMOR 133
#define ABILITY_HEAVY_METAL 134
#define ABILITY_LIGHT_METAL 135
#define ABILITY_MULTISCALE 136
#define ABILITY_TOXIC_BOOST 137
#define ABILITY_FLARE_BOOST 138
#define ABILITY_HARVEST 139
#define ABILITY_TELEPATHY 140
#define ABILITY_MOODY 141
#define ABILITY_OVERCOAT 142
#define ABILITY_POISON_TOUCH 143
#define ABILITY_REGENERATOR 144
#define ABILITY_BIG_PECKS 145
#define ABILITY_SAND_RUSH 146
#define ABILITY_WONDER_SKIN 147
#define ABILITY_ANALYTIC 148
#define ABILITY_ILLUSION 149
#define ABILITY_IMPOSTER 150
#define ABILITY_INFILTRATOR 151
#define ABILITY_MUMMY 152
#define ABILITY_MOXIE 153
#define ABILITY_JUSTIFIED 154
#define ABILITY_RATTLED 155
#define ABILITY_MAGIC_BOUNCE 156
#define ABILITY_SAP_SIPPER 157
#define ABILITY_PRANKSTER 158
#define ABILITY_SAND_FORCE 159
#define ABILITY_IRON_BARBS 160
#define ABILITY_ZEN_MODE 161
#define ABILITY_VICTORY_STAR 162
#define ABILITY_TURBOBLAZE 163
#define ABILITY_TERAVOLT 164

#define ABILITIES_COUNT_GEN5 165

// Gen 6
#define ABILITY_AROMA_VEIL 165
#define ABILITY_FLOWER_VEIL 166
#define ABILITY_CHEEK_POUCH 167
#define ABILITY_PROTEAN 168
#define ABILITY_FUR_COAT 169
#define ABILITY_MAGICIAN 170
#define ABILITY_BULLETPROOF 171
#define ABILITY_COMPETITIVE 172
#define ABILITY_STRONG_JAW 173
#define ABILITY_REFRIGERATE 174
#define ABILITY_SWEET_VEIL 175
#define ABILITY_STANCE_CHANGE 176
#define ABILITY_GALE_WINGS 177
#define ABILITY_MEGA_LAUNCHER 178
#define ABILITY_GRASS_PELT 179
#define ABILITY_SYMBIOSIS 180
#define ABILITY_TOUGH_CLAWS 181
#define ABILITY_PIXILATE 182
#define ABILITY_GOOEY 183
#define ABILITY_AERILATE 184
#define ABILITY_PARENTAL_BOND 185
#define ABILITY_DARK_AURA 186
#define ABILITY_FAIRY_AURA 187
#define ABILITY_AURA_BREAK 188
#define ABILITY_PRIMORDIAL_SEA 189
#define ABILITY_DESOLATE_LAND 190
#define ABILITY_DELTA_STREAM 191

#define ABILITIES_COUNT_GEN6 192

// Gen 7
#define ABILITY_STAMINA 192
#define ABILITY_WIMP_OUT 193
#define ABILITY_EMERGENCY_EXIT 194
#define ABILITY_WATER_COMPACTION 195
#define ABILITY_MERCILESS 196
#define ABILITY_SHIELDS_DOWN 197
#define ABILITY_STAKEOUT 198
#define ABILITY_WATER_BUBBLE 199
#define ABILITY_STEELWORKER 200
#define ABILITY_BERSERK 201
#define ABILITY_SLUSH_RUSH 202
#define ABILITY_LONG_REACH 203
#define ABILITY_LIQUID_VOICE 204
#define ABILITY_TRIAGE 205
#define ABILITY_GALVANIZE 206
#define ABILITY_SURGE_SURFER 207
#define ABILITY_SCHOOLING 208
#define ABILITY_DISGUISE 209
#define ABILITY_BATTLE_BOND 210
#define ABILITY_POWER_CONSTRUCT 211
#define ABILITY_CORROSION 212
#define ABILITY_COMATOSE 213
#define ABILITY_QUEENLY_MAJESTY 214
#define ABILITY_INNARDS_OUT 215
#define ABILITY_DANCER 216
#define ABILITY_BATTERY 217
#define ABILITY_FLUFFY 218
#define ABILITY_DAZZLING 219
#define ABILITY_SOUL_HEART 220
#define ABILITY_TANGLING_HAIR 221
#define ABILITY_RECEIVER 222
#define ABILITY_POWER_OF_ALCHEMY 223
#define ABILITY_BEAST_BOOST 224
#define ABILITY_RKS_SYSTEM 225
#define ABILITY_ELECTRIC_SURGE 226
#define ABILITY_PSYCHIC_SURGE 227
#define ABILITY_MISTY_SURGE 228
#define ABILITY_GRASSY_SURGE 229
#define ABILITY_FULL_METAL_BODY 230
#define ABILITY_SHADOW_SHIELD 231
#define ABILITY_PRISM_ARMOR 232
#define ABILITY_NEUROFORCE 233

#define ABILITIES_COUNT_GEN7 234

// Gen 8
#define ABILITY_INTREPID_SWORD 234
#define ABILITY_DAUNTLESS_SHIELD 235
#define ABILITY_LIBERO 236
#define ABILITY_BALL_FETCH 237
#define ABILITY_COTTON_DOWN 238
#define ABILITY_PROPELLER_TAIL 239
#define ABILITY_MIRROR_ARMOR 240
#define ABILITY_GULP_MISSILE 241
#define ABILITY_STALWART 242
#define ABILITY_STEAM_ENGINE 243
#define ABILITY_PUNK_ROCK 244
#define ABILITY_SAND_SPIT 245
#define ABILITY_ICE_SCALES 246
#define ABILITY_RIPEN 247
#define ABILITY_ICE_FACE 248
#define ABILITY_POWER_SPOT 249
#define ABILITY_MIMICRY 250
#define ABILITY_SCREEN_CLEANER 251
#define ABILITY_STEELY_SPIRIT 252
#define ABILITY_PERISH_BODY 253
#define ABILITY_WANDERING_SPIRIT 254
#define ABILITY_GORILLA_TACTICS 255
#define ABILITY_NEUTRALIZING_GAS 256
#define ABILITY_PASTEL_VEIL 257
#define ABILITY_HUNGER_SWITCH 258
#define ABILITY_QUICK_DRAW 259
#define ABILITY_UNSEEN_FIST 260
#define ABILITY_CURIOUS_MEDICINE 261
#define ABILITY_TRANSISTOR 262
#define ABILITY_DRAGONS_MAW 263
#define ABILITY_CHILLING_NEIGH 264
#define ABILITY_GRIM_NEIGH 265
#define ABILITY_AS_ONE_ICE_RIDER 266
#define ABILITY_AS_ONE_SHADOW_RIDER 267

#define ABILITIES_COUNT_GEN8 268

// Gen 9
#define ABILITY_LINGERING_AROMA 268
#define ABILITY_SEED_SOWER 269
#define ABILITY_THERMAL_EXCHANGE 270
#define ABILITY_ANGER_SHELL 271
#define ABILITY_PURIFYING_SALT 272
#define ABILITY_WELL_BAKED_BODY 273
#define ABILITY_WIND_RIDER 274
#define ABILITY_GUARD_DOG 275
#define ABILITY_ROCKY_PAYLOAD 276
#define ABILITY_WIND_POWER 277
#define ABILITY_ZERO_TO_HERO 278
#define ABILITY_COMMANDER 279
#define ABILITY_ELECTROMORPHOSIS 280
#define ABILITY_PROTOSYNTHESIS 281
#define ABILITY_QUARK_DRIVE 282
#define ABILITY_GOOD_AS_GOLD 283
#define ABILITY_VESSEL_OF_RUIN 284
#define ABILITY_SWORD_OF_RUIN 285
#define ABILITY_TABLETS_OF_RUIN 286
#define ABILITY_BEADS_OF_RUIN 287
#define ABILITY_ORICHALCUM_PULSE 288
#define ABILITY_HADRON_ENGINE 289
#define ABILITY_OPPORTUNIST 290
#define ABILITY_CUD_CHEW 291
#define ABILITY_SHARPNESS 292
#define ABILITY_SUPREME_OVERLORD 293
#define ABILITY_COSTAR 294
#define ABILITY_TOXIC_DEBRIS 295
#define ABILITY_ARMOR_TAIL 296
#define ABILITY_EARTH_EATER 297
#define ABILITY_MYCELIUM_MIGHT 298

#define ABILITIES_COUNT_GEN9 299

// IE Custom Abilities
#define ABILITY_CHLOROPLAST      (ABILITIES_COUNT_GEN9)      // Moves function as if it's sunny, regardless of weather
#define ABILITY_WHITEOUT         (ABILITIES_COUNT_GEN9 + 1)  // Boosts the power of Ice attacks in Hail by 50%
#define ABILITY_PYROMANCY        (ABILITIES_COUNT_GEN9 + 2)  // Fire attacks are 5x more likely to inflict a burn
#define ABILITY_KEEN_EDGE        (ABILITIES_COUNT_GEN9 + 3)  // Cutting moves do 30% more damage
#define ABILITY_PRISM_SCALES     (ABILITIES_COUNT_GEN9 + 4)  // Reduces special damage taken by 30%
#define ABILITY_POWER_FISTS      (ABILITIES_COUNT_GEN9 + 5)  // Punching moves do special damage and get 30% boost
#define ABILITY_SAND_SONG        (ABILITIES_COUNT_GEN9 + 6)  // Sound moves become Ground type. No damage boost.
#define ABILITY_RAMPAGE          (ABILITIES_COUNT_GEN9 + 7)  // If a recharge move KOs the foe, it doesn't need to recharge.
#define ABILITY_VENGEANCE        (ABILITIES_COUNT_GEN9 + 8)  // Overgrow for Ghost moves.
#define ABILITY_BLITZ_BOXER      (ABILITIES_COUNT_GEN9 + 9)  // Punching moves go first.

// Darky's Custom Abilities / Innates - Elite Redux
#define ABILITY_TWISTED_DIMENSION (ABILITIES_COUNT_GEN9 + 10) // Summons Trick Room on entry.

// Tony's Custom Abilities / Innates
#define ABILITY_SPECTRE           (ABILITIES_COUNT_GEN9 + 11) // Adds the Ghost-type to the Pokémon on top of its other type(s)
#define ABILITY_GATHERING_WINDS   (ABILITIES_COUNT_GEN9 + 12)



#define ABILITY_HOLLOW_WHISPERS   (ABILITIES_COUNT_GEN9 + 40) // When the Pokémon faints by a damaging contact move from an opposing Pokémon, the attacker becomes cursed.

#define ABILITIES_COUNT_CUSTOM   (ABILITY_HOLLOW_WHISPERS + 1)

#define ABILITIES_COUNT ABILITIES_COUNT_CUSTOM

#endif  // GUARD_CONSTANTS_ABILITIES_H
