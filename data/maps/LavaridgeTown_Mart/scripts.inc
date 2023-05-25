LavaridgeTown_Mart_MapScripts::
	.byte 0

LavaridgeTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LavaridgeTown_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LavaridgeTown_Mart_Pokemart:
	.2byte ITEM_PROTECTOR
	.2byte ITEM_LINKING_CORD
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_NONE
	release
	end

LavaridgeTown_Mart_EventScript_ExpertM::
	msgbox LavaridgeTown_Mart_Text_XSpeedFirstStrike, MSGBOX_NPC
	end

LavaridgeTown_Mart_EventScript_OldWoman::
	msgbox LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney, MSGBOX_NPC
	end

LavaridgeTown_Mart_Text_XSpeedFirstStrike:
	.string "Use X SPEED to add to a POKéMON's\n"
	.string "SPEED in battle.\p"
	.string "That will help it get in the first\n"
	.string "strike--a decided advantage!$"

LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney:
	.string "On MT. CHIMNEY's peak, there's a local\n"
	.string "specialty that you can buy only there.\p"
	.string "Give it to a POKéMON--it will be elated.$"

