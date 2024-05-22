.set LOCALID_ETHAN, 1
.set LOCALID_NATE, 2

FallarborTown_MoveRelearnersHouse_MapScripts::
	.byte 0

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
	lockall
	applymovement LOCALID_ETHAN, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
	checkitem ITEM_HEART_SCALE
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	end

FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	releaseall
	end

FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
	.string "I'm the MOVE TUTOR.\p"
	.string "I know all the moves that POKéMON\n"
	.string "learn--every one of them--and I can\l"
	.string "teach POKéMON those moves.\p"
	.string "I can teach a move to a POKéMON\n"
	.string "of yours if you'd like.\p"
	.string "I'll do it for a HEART SCALE.\n"
	.string "I'm collecting those now.$"

FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness HEART SCALE!\p"
	.string "Let me guess, you want me to teach\n"
	.string "a move?$"

FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
	.string "Which POKéMON needs tutoring?$"

FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
	.string "Which move should I teach?$"

FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that POKéMON.$"

FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
	.string "{PLAYER} handed over one HEART SCALE\n"
	.string "in exchange.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
	.string "If your POKéMON need to learn a move,\n"
	.string "come back with a HEART SCALE.$"

FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an EGG.$"

FallarborTown_MoveRelearnersHouse_EventScript_IVTraining::
	lockall
	applymovement LOCALID_ETHAN, Common_Movement_FacePlayer
	waitmovement 0
	questmenu QUEST_MENU_CHECK_COMPLETE QUEST_5
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_Quest5CompleteEthanIV
	goto_if_quest_active QUEST_5, FallarborTown_MoveRelearnersHouse_EventScript_Quest5Progress
	goto FallarborTown_MoveRelearnersHouse_EventScript_StartQuest5Ethan
	releaseall
	end

FallarborTown_MoveRelearnersHouse_EventScript_StartQuest5Ethan::
	msgbox FallarborTown_MoveRelearnersHouse_Text_StartQuest5Ethan, MSGBOX_DEFAULT
	startquest QUEST_5
	end

FallarborTown_MoveRelearnersHouse_Text_StartQuest5Ethan:
	.string "Ethan: Hi! I'm Ethan, and my\n"
	.string "specialty is IV training.\p"
	.string "My brother Nate over there\n"
	.string "is an expert in EV training.\p"
	.string "If you bring us 10 bottle caps,\n"
	.string "We can offer you our training services.\p"
	.string "You can find them all over Hoenn since\n"
	.string "most people think they are junk.\p"
	.string "So, just look everywhere!$"

FallarborTown_MoveRelearnersHouse_EventScript_Quest5Progress::
	msgbox FallarborTown_MoveRelearnersHouse_Text_Quest5Progress, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq MoveRelearnersHouse_EventScript_NoCaps
	goto FallarborTown_MoveRelearnersHouse_EventScript_GiveCaps

FallarborTown_MoveRelearnersHouse_Text_Quest5Progress:
	.string "Got those bottle caps for us?$"

FallarborTown_MoveRelearnersHouse_EventScript_GiveCaps::
	checkitem ITEM_BOTTLE_CAP, 10
	compare VAR_RESULT, FALSE
	goto_if_eq MoveRelearnersHouse_EventScript_NotEnoughCaps
	msgbox MoveRelearnersHouse_Text_Thanks, MSGBOX_DEFAULT
	@setvar VAR_FALLARBOR_BOTTLECAPS, 10
	completequest QUEST_5
	removeitem ITEM_BOTTLE_CAP, 10
	releaseall
	end

MoveRelearnersHouse_EventScript_NotEnoughCaps::
	msgbox MoveRelearnersHouse_Text_NotEnoughCaps, MSGBOX_DEFAULT
	releaseall
	end

MoveRelearnersHouse_Text_NotEnoughCaps:
	.string "Sorry, I can only accept all\n"
	.string "10 caps at once.$"

MoveRelearnersHouse_EventScript_NoCaps::
	msgbox MoveRelearnersHouse_Text_NoCaps, MSGBOX_DEFAULT
	releaseall
	end

MoveRelearnersHouse_Text_NoCaps:
	.string "Ok! Come back whenever!$"

MoveRelearnersHouse_Text_Thanks:
	.string "Thank you so much! Talk to us\n"
	.string "anytime if you need our services.$"

FallarborTown_MoveRelearnersHouse_EventScript_EVTraining::
	lockall
	applymovement LOCALID_NATE, Common_Movement_FacePlayer
	waitmovement 0
	questmenu QUEST_MENU_CHECK_COMPLETE QUEST_5
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_Quest5CompleteNateEV
	goto_if_quest_active QUEST_5, FallarborTown_MoveRelearnersHouse_EventScript_Quest5Progress
	goto FallarborTown_MoveRelearnersHouse_EventScript_StartQuest5Nate
	releaseall
	end

FallarborTown_MoveRelearnersHouse_EventScript_StartQuest5Nate::
	msgbox FallarborTown_MoveRelearnersHouse_Text_StartQuest5Nate, MSGBOX_DEFAULT
	startquest QUEST_5
	end

FallarborTown_MoveRelearnersHouse_Text_StartQuest5Nate:
	.string "Nate: Hey! I'm Nate, and my\n"
	.string "specialty is EV training.\p"
	.string "My brother Ethan over there\n"
	.string "is an expert in IV training.\p"
	.string "If you bring us 10 bottle caps,\n"
	.string "We can offer you our training services.\p"
	.string "You can find them all over Hoenn since\n"
	.string "most people think they are junk.\p"
	.string "So, just look everywhere!$"

@@@@@@@@@@@@@@@@ Super Training Script @@@@@@@@@@@@@@@@ Credit to Buffel Saft from Inclement Emerald

FallarborTown_MoveRelearnersHouse_EventScript_Quest5CompleteNateEV::
	lock
	faceplayer
	goto FallarborTown_SuperMainMenu

FallarborTown_SuperMainMenu::
	bufferpartymonnick 0, VAR_0x8004
	msgbox SuperTraining_Text_HowCanIHelp, MSGBOX_DEFAULT
	dynmultipush Super_Abilities, 0
	dynmultipush Super_Innates, 1
	dynmultipush Super_Explain, 2
	dynmultipush Super_Nevermind, 3
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 0, Call_FallarborTown_Explain_Abilities
	case 1, Call_FallarborTown_Explain_Innates
	case 2, Call_FallarborTown_Explain_EVs
	case 3, HyperTraining_EventScript_DoNothing
	case 127, HyperTraining_EventScript_DoNothing
	releaseall
	end

Super_Abilities:
	.string "Explain Abilities$"

Super_Innates:
	.string "Explain Innates$"

Super_Explain:
	.string "Explain EVs$"

Super_Nevermind:
	.string "Nevermind$"

Call_FallarborTown_Explain_Abilities::
	call FallarborTown_Explain_Abilities
	goto FallarborTown_SuperMainMenu

Call_FallarborTown_Explain_Innates::
	call FallarborTown_Explain_Innates
	goto FallarborTown_SuperMainMenu

Call_FallarborTown_Explain_EVs::
	call FallarborTown_Explain_EVs
	goto FallarborTown_SuperMainMenu

FallarborTown_Explain_Abilities::
	msgbox FallarborTown_Text_ExplainAbilities, MSGBOX_DEFAULT
	return

FallarborTown_Explain_Innates::
	msgbox FallarborTown_Text_ExplainInnates, MSGBOX_DEFAULT
	return

FallarborTown_Explain_EVs::
	msgbox FallarborTown_Text_ExplainEvs, MSGBOX_DEFAULT
	return

FallarborTown_ChangeEV::
	bufferpartymonnick 0, VAR_0x8004
	msgbox SuperTraining_Text_ThisIsMonsCurrentSpread, MSGBOX_DEFAULT
	special BufferChosenMonAllEVs
	dynmultipush Super_HP, 0
	dynmultipush Super_Atk, 1
	dynmultipush Super_Def, 2
	dynmultipush Super_Spd, 3
	dynmultipush Super_SpA, 4
	dynmultipush Super_Spdef, 5
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 0, HyperTraining_EventScript_ChangeHPEV
	case 1, FallarborTown_ChangeATKEV
	case 2, FallarborTown_ChangeDEFEV
	case 3, FallarborTown_ChangeSPEEDEV
	case 4, FallarborTown_ChangeSPATKEV
	case 5, FallarborTown_ChangeSPDEFEV
	case 127, FallarborTown_SuperMainMenu
	releaseall
	end

Super_HP:
	.string "HP{CLEAR_TO 0x36}{STR_VAR_1}$"

Super_Atk:
	.string "Attack{CLEAR_TO 0x36}{STR_VAR_2}$"

Super_Def:
	.string "Defense{CLEAR_TO 0x36}{STR_VAR_3}$"

Super_Spd:
	.string "Speed{CLEAR_TO 0x36}{EXTRA_STR_VAR_1}$"

Super_SpA:
	.string "Sp. Atk{CLEAR_TO 0x36}{EXTRA_STR_VAR_2}$"

Super_Spdef:
	.string "Sp. Def{CLEAR_TO 0x36}{EXTRA_STR_VAR_3}$"

HyperTraining_EventScript_ChangeHPEV::
	setvar VAR_0x8005, 0
	special BufferChosenMonEV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	compare VAR_0x8006, 252
	goto_if_eq FallarborTown_MaxEVs
	msgbox SuperTraining_ReportHP
	goto FallarborTown_ChooseNewEV

FallarborTown_ChangeATKEV::
	setvar VAR_0x8005, 1
	special BufferChosenMonEV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	compare VAR_0x8006, 252
	goto_if_eq FallarborTown_MaxEVs
	msgbox SuperTraining_ReportAtk
	goto FallarborTown_ChooseNewEV

FallarborTown_ChangeDEFEV::
	setvar VAR_0x8005, 2
	special BufferChosenMonEV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	compare VAR_0x8006, 252
	goto_if_eq FallarborTown_MaxEVs
	msgbox SuperTraining_ReportDef
	goto FallarborTown_ChooseNewEV

FallarborTown_ChangeSPEEDEV::
	setvar VAR_0x8005, 3
	special BufferChosenMonEV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	compare VAR_0x8006, 252
	goto_if_eq FallarborTown_MaxEVs
	msgbox SuperTraining_ReportSpeed
	goto FallarborTown_ChooseNewEV

FallarborTown_ChangeSPATKEV::
	setvar VAR_0x8005, 4
	special BufferChosenMonEV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	compare VAR_0x8006, 252
	goto_if_eq FallarborTown_MaxEVs
	msgbox SuperTraining_ReportSpAtk
	goto FallarborTown_ChooseNewEV

FallarborTown_ChangeSPDEFEV::
	setvar VAR_0x8005, 5
	special BufferChosenMonEV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	compare VAR_0x8006, 252
	goto_if_eq FallarborTown_MaxEVs
	msgbox SuperTraining_ReportSpDef
	goto FallarborTown_ChooseNewEV

FallarborTown_MaxEVs::
	msgbox SuperTraining_ReportMaxEVs
	goto FallarborTown_ChangeEV

FallarborTown_EVsMaxedOut::
	msgbox SuperTraining_ReportMaxTotalEVs
	goto FallarborTown_SuperMainMenu

FallarborTown_ChooseNewEV::
	dynmultipush Add4toEVL, 0
	dynmultipush Add8toEV, 1
	dynmultipush Add12toEV, 2
	dynmultipush Add64toEV, 3
	dynmultipush Add128toEV, 4
	dynmultipush Add252toEV, 5
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 0, FallarborTown_ChangeEV4
	case 1, FallarborTown_ChangeEV8
	case 2, FallarborTown_ChangeEV12
	case 3, FallarborTown_ChangeEV64
	case 4, FallarborTown_ChangeEV128
	case 5, FallarborTown_ChangeEV252
	case 127, FallarborTown_ChangeEV

Add4toEVL:
	.string " 4 EVs$"

Add8toEV:
	.string " 8 EVs$"

Add12toEV:
	.string "12 EVs$"

Add64toEV:
	.string "64 EVs$"

Add128toEV:
	.string "128 EVs$"

Add252toEV:
	.string "252 EVs$"

FallarborTown_ChangeEV4::
	setvar VAR_0x8006, 4
	setvar VAR_0x8009, 400
	goto FallarborTown_DoSuperTraining

FallarborTown_ChangeEV8::
	setvar VAR_0x8006, 8
	setvar VAR_0x8009, 800
	goto FallarborTown_DoSuperTraining

FallarborTown_ChangeEV12::
	setvar VAR_0x8006, 12
	setvar VAR_0x8009, 1200
	goto FallarborTown_DoSuperTraining

FallarborTown_ChangeEV64::
	setvar VAR_0x8006, 64
	setvar VAR_0x8009, 6400
	goto FallarborTown_DoSuperTraining

FallarborTown_ChangeEV128::
	setvar VAR_0x8006, 128
	setvar VAR_0x8009, 12800
	goto FallarborTown_DoSuperTraining

FallarborTown_ChangeEV252::
	setvar VAR_0x8006, 252
	setvar VAR_0x8009, 25200
	goto FallarborTown_DoSuperTraining

FallarborTown_ResetEVs::
	msgbox SuperTraining_Text_ICanResetEVs, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_SuperMainMenu
	special ResetChosenMonEVs
	msgbox SuperTraining_Text_EVsReset, MSGBOX_DEFAULT
	goto FallarborTown_SuperMainMenu
	
FallarborTown_DoSuperTraining::
	special CheckChosenMonCanGainEVs
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_CantExceedEVLimit
	special IncreaseChosenMonEVs
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8007
	msgbox SuperTraining_Text_EVsHaveIncreased
	goto FallarborTown_ChangeEV

FallarborTown_CantExceedEVLimit::
	buffernumberstring 1, VAR_0x8008
	msgbox SuperTraining_TooManyEVs, MSGBOX_DEFAULT
	goto FallarborTown_ChangeEV

FallarborTown_WontPay::
	hidemoneybox
	goto FallarborTown_ChangeEV

FallarborTown_CantAfford::
	msgbox FallarborTown_CantAfford_String, MSGBOX_DEFAULT
	hidemoneybox
	goto FallarborTown_ChangeEV

HyperTraining_EventScript_DoNothing::
	releaseall
	end

SuperTraining_Egg::
	msgbox FallarborTown_Text_CantTrainEgg, MSGBOX_DEFAULT
	releaseall
	end

SuperTraining_Refuse::
	msgbox FallarborTown_Text_SomeOtherTime, MSGBOX_DEFAULT
	releaseall
	end

SuperTraining_Text_ChoosePokemon:
	.string "Nate: Which Pokémon would you like me\n"
	.string "to train?$"

FallarborTown_Text_CantTrainEgg:
	.string "Oh come on, I can't train an Egg!\n"
	.string "Bring it back once it's hatched.$"

FallarborTown_Text_SomeOtherTime:
	.string "Oh, OK.\n"
	.string "Some other time, then?$"

SuperTraining_Text_RememberEvs:
	.string "And you remember how EVs work, right?$"

FallarborTown_Text_ExplainAbilities:
	.string "Nate: Abilities are core to Pokémon and\n"
	.string "can be found on the summary screen.\p"
	.string "Once you find the ability master,\n"
	.string "they can be changed from the\l"
	.string "summary screen with {A_BUTTON} and {DPAD_LEFTRIGHT}$"

FallarborTown_Text_ExplainInnates:
	.string "Nate: Innates are part of every Pokémon\n"
	.string "and can be found on the summary screen.\p"
	.string "Unlike abilities, they can't be changed.\n"
	.string "Also, they might be modified slightly.\p"
	.string "For example, Shell Armor will now\n"
	.string "also reduce damage taken by 20%.\p"
	.string "So make sure you look out for new\n"
	.string "powerful combinations of Pokémon!$"

FallarborTown_Text_ExplainEvs:
	.string "Nate: EVs are part of every stat a\n"
	.string "a Pokémon has.\p"
	.string "They can have HP EVs, Attack EVs,\n"
	.string "Defense EVs… you get the idea.\p"
	.string "Every time you earn a badge, the\n"
	.string "total number of EVs you can assign\p"
	.string "will increase by 64.\p"
	.string "EVs can be assigned right on your\n"
	.string "Pokémon within the summary screen.\p"
	.string "You can have up to 252 EVs in one stat,\n"
	.string "but you can only have 510 EVs in total.\p"
	.string "It's normally good to put 252 EVs in\n"
	.string "two of your Pokémon's best stats,\l"
	.string "but you can get creative with EVs too!$"

SuperTraining_Text_TakeALookatEVs:
	.string "OK! let's take a look at your\n"
	.string "{STR_VAR_1}'s EVs.$"

SuperTraining_Text_ThisIsMonsCurrentSpread:
	.string "This is {STR_VAR_1}'s current EV\n"
	.string "spread.\p"
	.string "Which stat would you like it to train?$"

SuperTraining_ReportHP:
	.string "{STR_VAR_1} has {STR_VAR_2} HP EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportAtk:
	.string "{STR_VAR_1} has {STR_VAR_2} Attack EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportDef:
	.string "{STR_VAR_1} has {STR_VAR_2} Defense EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportSpeed:
	.string "{STR_VAR_1} has {STR_VAR_2} Speed EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportSpAtk:
	.string "{STR_VAR_1} has {STR_VAR_2} Sp. Atk EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_ReportSpDef:
	.string "{STR_VAR_1} has {STR_VAR_2} Sp. Def EVs.\n"
	.string "How many EVs would you like to add?$"

SuperTraining_Text_EVsHaveIncreased:
	.string "{STR_VAR_1}'s EVs in that stat have\n"
	.string "increased to {STR_VAR_2}!$"

SuperTraining_Text_ICanResetEVs:
	.string "I can completely reset your\n"
	.string "{STR_VAR_1}'s EVs!\p"
	.string "This will remove all of its EVs, so\n"
	.string "you can add more to the stats you want\l"
	.string "{STR_VAR_1} to focus on.\p"
	.string "Would you like me to reset\n"
	.string "{STR_VAR_1}'s EVs?$"

SuperTraining_Text_HowCanIHelp:
	.string "Hey! Need anything?$"
	
SuperTraining_Text_EVsReset::
	.string "{STR_VAR_1}'s EVs have been reset!$"

SuperTraining_ReportMaxEVs:
	.string "{STR_VAR_1} has 252 EVs in that stat!\n"
	.string "It can't gain any more!$"

SuperTraining_ReportMaxTotalEVs:
	.string "{STR_VAR_1}'s EVs are maxed out!\n"
	.string "It can't gain any more!$"

SuperTraining_TooManyEVs:
	.string "{STR_VAR_1} already has {STR_VAR_2} EVs in total!\n"
	.string "It can't gain that many more!$"

SuperTraining_ShowPrice:
	.string "That'll cost ¥{STR_VAR_3}. Is that OK?$"

FallarborTown_CantAfford_String:
	.string "You don't have the money.$"

@@@@@@@@@@@@@@@@ Hyper Training Script @@@@@@@@@@@@@@@@

FallarborTown_MoveRelearnersHouse_EventScript_Quest5CompleteEthanIV::
	lockall
	faceplayer
	msgbox HyperTraining_Text_ChoosePokemon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge SuperTraining_Refuse
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq SuperTraining_Egg
	bufferpartymonnick 0, VAR_0x8004
	msgbox HyperTraining_Text_LetsTakeALook, MSGBOX_DEFAULT
	goto FallarborTown_HyperMainMenu

FallarborTown_HyperMainMenu::
	bufferpartymonnick 0, VAR_0x8004
	msgbox HyperTraining_Text_HowCanIHelp, MSGBOX_DEFAULT
	dynmultipush ChangeIV, 0
	dynmultipush HiddenPower, 1
	dynmultipush ExplainIVs, 2
	dynmultipush Nevermind, 3
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 0, HyperTraining_EventScript_ChangeIV
	case 1, HyperTraining_EventScript_ChangeHiddenPower
	case 2, Call_HyperTraining_EventScript_Explain_IVs
	case 3, HyperTraining_EventScript_DoNothing
	case 127, HyperTraining_EventScript_DoNothing
	releaseall
	end

ChangeIV:
	.string "Change IVs$"
HiddenPower:
	.string "Change Hidden Power$"
ExplainIVs:
	.string "Explain IVs$"
Nevermind: 
	.string "Nevermind$"

Call_HyperTraining_EventScript_Explain_IVs::
	call HyperTraining_EventScript_Explain_IVs
	goto FallarborTown_HyperMainMenu

HyperTraining_EventScript_Explain_IVs::
	msgbox HyperTraining_Text_ExplainIVs, MSGBOX_DEFAULT
	return

HyperTraining_EventScript_ChangeIV::
	bufferpartymonnick 0, VAR_0x8004
	msgbox HyperTraining_Text_WhichIVShouldChange, MSGBOX_DEFAULT
	special BufferChosenMonAllIVs
	dynmultipush Super_HP, 0
	dynmultipush Super_Atk, 1
	dynmultipush Super_Def, 2
	dynmultipush Super_Spd, 3
	dynmultipush Super_SpA, 4
	dynmultipush Super_Spdef, 5
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 0, HyperTraining_EventScript_ChangeHPIV
	case 1, FallarborTown_ChangeATKIV
	case 2, FallarborTown_ChangeDEFIV
	case 3, FallarborTown_ChangeSPEEDIV
	case 4, FallarborTown_ChangeSPATKIV
	case 5, FallarborTown_ChangeSPDEFIV
	case 127, FallarborTown_HyperMainMenu
	releaseall
	end

HyperTraining_EventScript_ChangeHPIV::
	setvar VAR_0x8005, 0
	special BufferChosenMonIV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	msgbox HyperTraining_ReportHP
	goto FallarborTown_ChooseNewIV

FallarborTown_ChangeATKIV::
	setvar VAR_0x8005, 1
	special BufferChosenMonIV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	msgbox HyperTraining_ReportAtk
	goto FallarborTown_ChooseNewIV

FallarborTown_ChangeDEFIV::
	setvar VAR_0x8005, 2
	special BufferChosenMonIV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	msgbox HyperTraining_ReportDef
	goto FallarborTown_ChooseNewIV

FallarborTown_ChangeSPEEDIV::
	setvar VAR_0x8005, 3
	special BufferChosenMonIV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	msgbox HyperTraining_ReportSpeed
	goto FallarborTown_ChooseNewIV

FallarborTown_ChangeSPATKIV::
	setvar VAR_0x8005, 4
	special BufferChosenMonIV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	msgbox HyperTraining_ReportSpAtk
	goto FallarborTown_ChooseNewIV

FallarborTown_ChangeSPDEFIV::
	setvar VAR_0x8005, 5
	special BufferChosenMonIV
	bufferpartymonnick 0, VAR_0x8004
	buffernumberstring 1, VAR_0x8006
	msgbox HyperTraining_ReportSpDef
	goto FallarborTown_ChooseNewIV

FallarborTown_ChooseNewIV::
	dynmultipush ChangeIVto0, 0
	dynmultipush ChangeIVto1, 1
	dynmultipush ChangeIVto14, 2
	dynmultipush ChangeIVto15, 3
	dynmultipush ChangeIVto30, 4
	dynmultipush ChangeIVto31, 5
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 0, HyperTraining_EventScript_ChangeIV0
	case 1, HyperTraining_EventScript_ChangeIV1
	case 2, HyperTraining_EventScript_ChangeIV14
	case 3, HyperTraining_EventScript_ChangeIV15
	case 4, HyperTraining_EventScript_ChangeIV30
	case 5, HyperTraining_EventScript_ChangeIV31
	case 127, HyperTraining_EventScript_ChangeIV

ChangeIVto0:
	.string " 0$"
ChangeIVto1:
	.string " 1$"
ChangeIVto14:
	.string "14$"
ChangeIVto15:
	.string "15$"
ChangeIVto30:
	.string "30$"
ChangeIVto31:
	.string "31$"

HyperTraining_EventScript_ChangeIV0::
	setvar VAR_0x8006, 0
	goto HyperTraining_EventScript_ChangeOneIV

HyperTraining_EventScript_ChangeIV1::
	setvar VAR_0x8006, 1
	goto HyperTraining_EventScript_ChangeOneIV

HyperTraining_EventScript_ChangeIV14::
	setvar VAR_0x8006, 14
	goto HyperTraining_EventScript_ChangeOneIV

HyperTraining_EventScript_ChangeIV15::
	setvar VAR_0x8006, 15
	goto HyperTraining_EventScript_ChangeOneIV

HyperTraining_EventScript_ChangeIV30::
	setvar VAR_0x8006, 30
	goto HyperTraining_EventScript_ChangeOneIV

HyperTraining_EventScript_ChangeIV31::
	setvar VAR_0x8006, 31
	goto HyperTraining_EventScript_ChangeOneIV

HyperTraining_EventScript_ChangeOneIV::
	special ChangeChosenMonIVs
	goto HyperTraining_EventScript_DoHyperTraining

HyperTraining_EventScript_ChangeHiddenPower::
	msgbox HyperTraining_Text_ForThreeCapsChangeAllIVs, MSGBOX_DEFAULT
	dynmultipush HPFighting, 0
	dynmultipush HPFlying, 1
	dynmultipush HPPoison, 2
	dynmultipush HPGround, 3
	dynmultipush HPRock, 4
	dynmultipush HPBug, 5
	dynmultipush HPGhost, 6
	dynmultipush HPSteel, 7
	dynmultipush HPFire, 8
	dynmultipush HPWater, 9
	dynmultipush HPGrass, 10
	dynmultipush HPElectric, 11
	dynmultipush HPPsychic, 12
	dynmultipush HPIce, 13
	dynmultipush HPDragon, 14
	dynmultipush HPDark, 15
	dynmultipush Nevermind, 16
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 0, HyperTraining_EventScript_ChangeHPFighting
	case 1, HyperTraining_EventScript_ChangeHPFlying
	case 2, HyperTraining_EventScript_ChangeHPPoison
	case 3, HyperTraining_EventScript_ChangeHPGround
	case 4, HyperTraining_EventScript_ChangeHPRock
	case 5, HyperTraining_EventScript_ChangeHPBug
	case 6, HyperTraining_EventScript_ChangeHPGhost
	case 7, HyperTraining_EventScript_ChangeHPSteel
	case 8, HyperTraining_EventScript_ChangeHPFire
	case 9, HyperTraining_EventScript_ChangeHPWater
	case 10, HyperTraining_EventScript_ChangeHPGrass
	case 11, HyperTraining_EventScript_ChangeHPElectric
	case 12, HyperTraining_EventScript_ChangeHPPsychic
	case 13, HyperTraining_EventScript_ChangeHPIce
	case 14, HyperTraining_EventScript_ChangeHPDragon
	case 15, HyperTraining_EventScript_ChangeHPDark
	case 16, HyperTraining_EventScript_RebufferChosenMon
	case 127, HyperTraining_EventScript_RebufferChosenMon
	releaseall
	end

HPFighting:
	.string "Fighting$"
HPFlying:
	.string "Flying$"
HPPoison:
	.string "Poison$"
HPGround:
	.string "Ground$"
HPRock:
	.string "Rock$"
HPBug:
	.string "Bug$"
HPGhost:
	.string "Ghost$"
HPSteel:
	.string "Steel$"
HPFire:
	.string "Fire$"
HPWater:
	.string "Water$"
HPGrass:
	.string "Grass$"
HPElectric:
	.string "Electric$"
HPPsychic:
	.string "Psychic$"
HPIce:
	.string "Ice$"
HPDragon:
	.string "Dragon$"
HPDark:
	.string "Dark$"	

HyperTraining_EventScript_ChangeHPFighting::
	setvar 0x8007, 0
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPFlying::
	setvar 0x8007, 1
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPPoison::
	setvar 0x8007, 2
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPGround::
	setvar 0x8007, 3
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPRock::
	setvar 0x8007, 4
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPBug::
	setvar 0x8007, 5
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPGhost::
	setvar 0x8007, 6
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPSteel::
	setvar 0x8007, 7
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPFire::
	setvar 0x8007, 8
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPWater::
	setvar 0x8007, 9
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPGrass::
	setvar 0x8007, 10
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPElectric::
	setvar 0x8007, 11
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPPsychic::
	setvar 0x8007, 12
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPIce::
	setvar 0x8007, 13
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPDragon::
	setvar 0x8007, 14
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeHPDark::
	setvar 0x8007, 15
	goto HyperTraining_EventScript_ChangeAllIVs

HyperTraining_EventScript_ChangeAllIVs::
	special ChangeChosenMonHiddenPower
	goto HyperTraining_EventScript_DoHyperTraining

HyperTraining_EventScript_DoHyperTraining::
	msgbox HyperTraining_Text_StartHyperTraining, MSGBOX_AUTOCLOSE
	fadescreen 1
	playfanfare 0x173
	waitfanfare
	fadescreen 0
	msgbox HyperTraining_Text_HyperTrainingMadeMonStronger, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_Quest5CompleteEthanIV
	releaseall
	end

HyperTraining_EventScript_NotEnoughCaps::
	msgbox HyperTraining_Text_NotEnoughCaps, MSGBOX_DEFAULT
	releaseall
	end

HyperTraining_EventScript_RebufferChosenMon::
	copyvar VAR_0x8004, VAR_0x800A
	goto FallarborTown_HyperMainMenu

HyperTraining_Text_ChoosePokemon:
	.string "Ethan: Which Pokémon needs some\n"
	.string "Hyper Training?$"

HyperTraining_Text_WantMeExplainIVs:
	.string "Would you like me to explain IVs again?$"

HyperTraining_Text_ExplainIVs:
	.string "Ethan: IVs are a hidden part of your\n"
	.string "Pokémon's stats that can only be\l"
	.string "changed with special training,\l"
	.string "or raised by giving them Vitamins.\p"
	.string "They can be any value between\n"
	.string "0 and 31, and affect things like\l"
	.string "the type of the move Hidden Power.\p"
	.string "Higher IVs means higher stats, but\n"
	.string "higher stats aren't always better!\p"
	.string "Example: If your Pokémon relies on\n"
	.string "Special Attacks, a low Attack IV will\l"
	.string "reduce the damage it takes if it hits\l"
	.string "itself in confusion.$"

HyperTraining_Text_LetsTakeALook:
	.string "OK! Let's take a look at your\n"
	.string "{STR_VAR_1}'s IVs.$"

HyperTraining_Text_WhichIVShouldChange:
	.string "Which of {STR_VAR_1}'s IVs\n"
	.string "would you like to change?$"

HyperTraining_ReportHP:
	.string "{STR_VAR_1}'s HP IV is {STR_VAR_2}.\n"
	.string "What would you like to change it to?$"

HyperTraining_ReportAtk:
	.string "{STR_VAR_1}'s Attack IV is {STR_VAR_2}.\n"
	.string "What would you like to change it to?$"

HyperTraining_ReportDef:
	.string "{STR_VAR_1}'s Defense IV is {STR_VAR_2}.\n"
	.string "What would you like to change it to?$"

HyperTraining_ReportSpeed:
	.string "{STR_VAR_1}'s Speed IV is {STR_VAR_2}.\n"
	.string "What would you like to change it to?$"

HyperTraining_ReportSpAtk:
	.string "{STR_VAR_1}'s Sp. Atk IV is {STR_VAR_2}.\n"
	.string "What would you like to change it to?$"

HyperTraining_ReportSpDef:
	.string "{STR_VAR_1}'s Sp. Def IV is {STR_VAR_2}.\n"
	.string "What would you like to change it to?$"

HyperTraining_Text_HyperTrainingMadeMonStronger:
	.string "The Hyper Training made {STR_VAR_1}\n"
	.string "stronger!\p"
	.string "Would you like to train some more?$"

HyperTraining_Text_ForThreeCapsChangeAllIVs:
	.string "I can also change all\n"
	.string "of a Pokémon's IVs at once to give them\l"
	.string "a new Hidden Power type.\p"
	.string "Would you like to change {STR_VAR_1}'s\n"
	.string "Hidden Power to one of these types?$"

HyperTraining_Text_HowCanIHelp:
	.string "How can I help {STR_VAR_1} today?$"

HyperTraining_Text_StartHyperTraining:
	.string "Got it! Let's do some Hyper Training!\p"
	.string "… … … … … …\n"
	.string "… … … … … …$"

HyperTraining_Text_NotEnoughCaps:
	.string "You don't have enough Bottle Caps.$"

HyperTraining_Text_PayOneCap:
	.string "{PLAYER} handed over one Bottle Cap.$"

HyperTraining_Text_PayThreeCaps:
	.string "{PLAYER} handed over three Bottle Caps.$"
