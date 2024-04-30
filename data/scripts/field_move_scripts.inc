@ Interact with cuttable tree
EventScript_CutTree::
	lockall
	goto_if_unset FLAG_BADGE01_GET, EventScript_CheckTreeCantCut
	checkpartymove MOVE_CUT
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CheckTreeCantCut
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_CUT
	msgbox Text_WantToCut, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelCut
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

@ Use cut from party menu
EventScript_UseCut::
	lockall
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

EventScript_CutTreeDown::
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
	waitmovement 0
	removeobject VAR_LAST_TALKED
	random 3
	switch VAR_RESULT
	case 0, EventScript_CutTreeEncounter
	case 1, EventScript_CutTreeItem
	case 2, EventScript_CancelCut
	releaseall
	end

EventScript_CutTreeEncounter:: @Inclement Emerald
	compare VAR_REPEL_STEP_COUNT, 0
	goto_if_gt EventScript_CancelCut
	special RockSmashWildEncounter
	compare VAR_RESULT, 0
	goto_if_eq EventScript_CancelCut
	waitstate
	releaseall
	end

EventScript_CutTreeItem:: @Inclement Emerald
	random 14
	switch VAR_RESULT
	case 0, EventScript_CutTreeMiracleSeed
	case 1, EventScript_CutTreeCharcoal
	case 2, EventScript_CutTreeMentalHerb
	case 3, EventScript_CutTreePowerHerb
	case 4, EventScript_CutTreeWhiteHerb
	case 5, EventScript_CutTreeRevivalHerb
	case 6, EventScript_CutTreeEnergyRoot
	case 7, EventScript_CutTreeTerrainSeed
	case 8, EventScript_CutTreeTinyMushroom
	case 9, EventScript_CutTreeBigMushroom
	case 10, EventScript_CutTreeTypeBerry
	case 11, EventScript_CutTreeEVBerry
	case 12, EventScript_CutTreeStick
	case 13, EventScript_CutTreeBigRoot
	releaseall
	end

EventScript_CutTreeMiracleSeed::
	finditem ITEM_MIRACLE_SEED
	releaseall
	end

EventScript_CutTreeCharcoal::
	finditem ITEM_CHARCOAL
	releaseall
	end

EventScript_CutTreeMentalHerb::
	finditem ITEM_MENTAL_HERB
	releaseall
	end
	
EventScript_CutTreePowerHerb::
	finditem ITEM_POWER_HERB
	releaseall
	end
	
EventScript_CutTreeWhiteHerb::
	finditem ITEM_WHITE_HERB
	releaseall
	end
	
EventScript_CutTreeRevivalHerb::
	finditem ITEM_REVIVAL_HERB
	releaseall
	end
	
EventScript_CutTreeEnergyRoot::
	finditem ITEM_ENERGY_ROOT
	releaseall
	end
	
EventScript_CutTreeTerrainSeed::
	random 4
	addvar VAR_RESULT, ITEM_ELECTRIC_SEED
	finditem VAR_RESULT
	releaseall
	end
	
EventScript_CutTreeTinyMushroom::
	finditem ITEM_TINY_MUSHROOM
	releaseall
	end
	
EventScript_CutTreeBigMushroom::
	finditem ITEM_BIG_MUSHROOM
	releaseall
	end
	
EventScript_CutTreeTypeBerry::
	random 18
	addvar VAR_RESULT, ITEM_OCCA_BERRY
	finditem VAR_RESULT
	releaseall
	end

EventScript_CutTreeEVBerry::
	random 6
	addvar VAR_RESULT, ITEM_POMEG_BERRY
	finditem VAR_RESULT
	releaseall
	end

EventScript_CutTreeStick::
	finditem ITEM_LEEK
	releaseall
	end

EventScript_CutTreeBigRoot::
	finditem ITEM_BIG_ROOT
	releaseall
	end

Movement_CutTreeDown:
	cut_tree
	step_end

EventScript_CheckTreeCantCut::
	msgbox Text_CantCut, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelCut::
	closemessage
	releaseall
	end

Text_WantToCut:
	.string "This tree looks like it can be\n"
	.string "CUT down!\p"
	.string "Would you like to CUT it?$"

Text_MonUsedFieldMove:
	.string "{STR_VAR_1} used {STR_VAR_2}!$"

Text_CantCut:
	.string "This tree looks like it can be\n"
	.string "CUT down!$"

@ Interact with smashable rock
EventScript_RockSmash::
	lockall
	goto_if_unset FLAG_BADGE03_GET, EventScript_CantSmashRock
	checkpartymove MOVE_ROCK_SMASH
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
	msgbox Text_WantToSmash, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

@ Use rock smash from party menu
EventScript_UseRockSmash::
	lockall
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

EventScript_SmashRock::
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	specialvar VAR_RESULT, TryUpdateRusturfTunnelState
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_EndSmash
	random 3
	switch VAR_RESULT
	case 0, EventScript_EndSmash
	case 1, EventScript_RockSmashItem
	case 2, EventScript_RockSmashEncounter
	releaseall
	end

EventScript_RockSmashEncounter::
	compare VAR_REPEL_STEP_COUNT, 0
	goto_if_gt EventScript_EndSmash
	special RockSmashWildEncounter
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_EndSmash
	waitstate
	releaseall
	end

EventScript_RockSmashItem::
	random 6
	switch VAR_RESULT
	case 0, EventScript_RockSmashPearl
	case 1, EventScript_RockSmashBigPearl
	case 2, EventScript_RockSmashHardStone
	case 3, EventScript_RockSmashStarPiece
	case 4, EventScript_RockSmashGem
	case 5, EventScript_RockSmashFossil
	releaseall
	end

EventScript_RockSmashPearl::
	finditem ITEM_PEARL
	releaseall
	end

EventScript_RockSmashBigPearl::
	finditem ITEM_BIG_PEARL
	releaseall
	end

EventScript_RockSmashHardStone::
	finditem ITEM_HARD_STONE
	releaseall
	end
	
EventScript_RockSmashStarPiece::
	finditem ITEM_STAR_PIECE
	releaseall
	end
	
EventScript_RockSmashGem::
	random 19
	addvar VAR_RESULT, ITEM_BUG_GEM
	finditem VAR_RESULT
	releaseall
	end
	
EventScript_RockSmashFossil::
	random 12
	compare VAR_RESULT, 11
	goto_if_eq EventScript_RockSmashOldAmber
	addvar VAR_RESULT, ITEM_ARMOR_FOSSIL
	finditem VAR_RESULT
	releaseall
	end

EventScript_RockSmashOldAmber::
	finditem ITEM_OLD_AMBER
	releaseall
	end

EventScript_EndSmash::
	releaseall
	end

Movement_SmashRock:
	rock_smash_break
	step_end

EventScript_CantSmashRock::
	msgbox Text_CantSmash, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelSmash::
	closemessage
	releaseall
	end

Text_WantToSmash:
	.string "This rock appears to be breakable.\n"
	.string "Would you like to use ROCK SMASH?$"

Text_CantSmash:
	.string "It's a rugged rock, but a POKéMON\n"
	.string "may be able to smash it.$"

EventScript_StrengthBoulder::
	lockall
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantStrength
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
	checkpartymove MOVE_STRENGTH
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToStrength, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
	closemessage
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_UseStrength::
	lockall
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_ActivateStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CantStrength::
	msgbox Text_CantStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CheckActivatedBoulder::
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelStrength::
	closemessage
	releaseall
	end

Text_WantToStrength:
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.\p"
	.string "Would you like to use STRENGTH?$"

Text_MonUsedStrength:
	.string "{STR_VAR_1} used STRENGTH!\p"
	.string "{STR_VAR_1}'s STRENGTH made it\n"
	.string "possible to move boulders around!$"

Text_CantStrength:
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.$"

Text_StrengthActivated:
	.string "STRENGTH made it possible to move\n"
	.string "boulders around.$"

EventScript_UseWaterfall::
	lockall
	checkpartymove MOVE_WATERFALL
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_WATERFALL
	goto EventScript_EndWaterfall

EventScript_CannotUseWaterfall::
	lockall

EventScript_CantWaterfall::
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT

EventScript_EndWaterfall::
	releaseall
	end

Text_CantWaterfall:
	.string "A wall of water is crashing down with\n"
	.string "a mighty roar.$"

Text_WantToWaterfall:
	.string "It's a large waterfall.\n"
	.string "Would you like to use WATERFALL?$"

Text_MonUsedWaterfall:
	.string "{STR_VAR_1} used WATERFALL.$"

EventScript_UseDive::
	lockall
	checkpartymove MOVE_DIVE
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantDive
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToDive, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndDive
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndDive
	end

EventScript_CantDive::
	msgbox Text_CantDive, MSGBOX_DEFAULT
	releaseall
	end

EventScript_EndDive::
	releaseall
	end

EventScript_UseDiveUnderwater::
	lockall
	checkpartymove MOVE_DIVE
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSurface
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToSurface, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndSurface
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndSurface
	end

EventScript_CantSurface::
	lockall
	msgbox Text_CantSurface, MSGBOX_DEFAULT
	goto EventScript_EndSurface
	end

EventScript_EndSurface::
	releaseall
	end

Text_CantDive:
	.string "The sea is deep here. A POKéMON\n"
	.string "may be able to go underwater.$"

Text_WantToDive:
	.string "The sea is deep here.\n"
	.string "Would you like to use DIVE?$"

Text_MonUsedDive:
	.string "{STR_VAR_1} used DIVE.$"

Text_CantSurface:
	.string "Light is filtering down from above.\n"
	.string "A POKéMON may be able to surface.$"

Text_WantToSurface:
	.string "Light is filtering down from above.\n"
	.string "Would you like to use DIVE?$"

EventScript_FailSweetScent::
	msgbox Text_FailSweetScent, MSGBOX_SIGN
	end

Text_FailSweetScent:
	.string "Looks like there's nothing here…$"

EventScript_DisableAutoRun::
    msgbox AutoRunDisabled MSGBOX_SIGN
    end
AutoRunDisabled:
    .string "Auto Run {COLOR RED}Disabled{COLOR DARK_GRAY}.$"
    
EventScript_EnableAutoRun::
    msgbox AutoRunEnabled MSGBOX_SIGN
    end
AutoRunEnabled:
    .string "Auto Run {COLOR GREEN}Enabled{COLOR DARK_GRAY}.$"

EventScript_DisableRepel::
    msgbox RepelDisabled MSGBOX_SIGN
    end
RepelDisabled:
    .string "Infinite Repel {COLOR RED}Disabled{COLOR DARK_GRAY}.$"
    
EventScript_EnableRepel::
    msgbox RepelEnabled MSGBOX_SIGN
    end
RepelEnabled:
    .string "Infinite Repel {COLOR GREEN}Enabled{COLOR DARK_GRAY}.\n"
	.string "Resets when entering new map.$"

EventScript_PokeVialNoCharges::
    msgbox NoCharges MSGBOX_SIGN
    end
NoCharges:
    .string "The Poké Vial is empty.\n"
	.string "Refill it at a Pokémon Center.$"

EventScript_Normal::
    msgbox NormalMode MSGBOX_SIGN
    end
NormalMode: 
	.string "{COLOR GREEN}Normal Mode {COLOR DARK_GRAY}enabled.\n"
	.string "Trainers will no longer have EVs.$"

EventScript_Hard::
    msgbox HardMode MSGBOX_SIGN
    end
HardMode: 
	.string "{COLOR BLUE}Hard Mode {COLOR DARK_GRAY}enabled.\n"
	.string "Trainers will now have EVs.$"

EventScript_Impossible::
    msgbox ImpossibleMode MSGBOX_SIGN
    end
ImpossibleMode: 
	.string "{COLOR RED}{SHADOW LIGHT_RED}Impossible Mode {COLOR DARK_GRAY}enabled.\n"
	.string "Good luck...$"

EventScript_GrindModeMinimum::
    msgbox GrindModeMinimum MSGBOX_SIGN
    end
GrindModeMinimum:
    .string "Minimum grinding mode {COLOR GREEN}Enabled{COLOR DARK_GRAY}.\n"
	.string "Found Pokemon will have perfect IVs.$"
    
EventScript_GrindModeDefault::
    msgbox GrindModeDefault MSGBOX_SIGN
    end
GrindModeDefault:
    .string "Minimum grinding mode {COLOR RED}Disabled{COLOR DARK_GRAY}.\n"
	.string "Found Pokemon will have random IVs.$"
