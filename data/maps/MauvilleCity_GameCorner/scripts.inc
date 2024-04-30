MauvilleCity_GameCorner_MapScripts::
	.byte 0

    @ Game Corner prices
	.set GASTLY_COINS, 		2500
	.set MUNCHLAX_COINS,	4000
	.set HOUNDOUR_COINS,	2500
	.set RIOLU_COINS,		2500
	.set RALTS_COINS,		2500
	.set ARON_COINS,		2500
	.set GIBLE_COINS,		2500
	.set DITTO_COINS,		3000
	.set CUBONE_COINS,		3500
	.set HONEDGE_COINS,		5000
	.set SPIRITOMB_COINS,	4500
	.set BAGON_COINS,		5000
	.set STARTER_COINS, 	2500
	.set SHINY_COINS,		20000
	.set DOLL_COINS,  1000

	.set COINS_PRICE_50,  500
	.set COINS_PRICE_500, 5000
	.set COINS_PRICE_2500, 25000
	.set COINS_PRICE_5000, 50000

MauvilleCity_GameCorner_EventScript_CoinsClerk::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT

	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NeedCoinCase
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
	waitmessage
	showmoneybox 0, 0
	showcoinsbox 1, 6
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50

MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault50::
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
	case 2, MauvilleCity_GameCorner_EventScript_Buy2500Coins
	case 3, MauvilleCity_GameCorner_EventScript_Buy5000Coins
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
	end

@ Unused
MauvilleCity_GameCorner_EventScript_ChooseCoinsDefault500::
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_Buy50Coins
	case 1, MauvilleCity_GameCorner_EventScript_Buy500Coins
	goto MauvilleCity_GameCorner_EventScript_CancelBuyCoins
	end

MauvilleCity_GameCorner_EventScript_Buy50Coins::
	checkcoins VAR_TEMP_1
	goto_if_ge VAR_TEMP_1, (MAX_COINS2 + 1 - 50), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
	checkmoney COINS_PRICE_50
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
	addcoins 50
	removemoney COINS_PRICE_50
	updatemoneybox
	updatecoinsbox 1, 6
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_Buy500Coins::
	checkcoins VAR_TEMP_1
	goto_if_ge VAR_TEMP_1, (MAX_COINS2 + 1 - 500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
	checkmoney COINS_PRICE_500
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
	addcoins 500
	removemoney COINS_PRICE_500
	updatemoneybox
	updatecoinsbox 1, 6
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_Buy2500Coins::
	checkcoins VAR_TEMP_1
	goto_if_ge VAR_TEMP_1, (MAX_COINS2 + 1 - 2500), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
	checkmoney COINS_PRICE_2500
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
	addcoins 2500
	removemoney COINS_PRICE_2500
	updatemoneybox
	updatecoinsbox 1, 6
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_Buy5000Coins::
	checkcoins VAR_TEMP_1
	goto_if_ge VAR_TEMP_1, (MAX_COINS2 + 1 - 5000), MauvilleCity_GameCorner_EventScript_NoRoomForCoins
	checkmoney COINS_PRICE_5000
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NotEnoughMoney
	addcoins 5000
	removemoney COINS_PRICE_5000
	updatemoneybox
	updatecoinsbox 1, 6
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_NeedCoinCase::
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
	giveitem ITEM_COIN_CASE
	setflag FLAG_RECEIVED_COIN_CASE
	release
	end

MauvilleCity_GameCorner_EventScript_NotEnoughMoney::
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_CancelBuyCoins::
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_NoRoomForCoins::
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
	hidemoneybox
	hidecoinsbox 0, 5
	release
	end

MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage
	release
	end

MauvilleCity_GameCorner_EventScript_ChooseDollPrizeMessage::
	message MauvilleCity_GameCorner_Text_WhichPrize
	waitmessage
	setvar VAR_TEMP_1, 0
	showcoinsbox 1, 1
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize

MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
	message MauvilleCity_GameCorner_Text_WhichPrize
	waitmessage
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize

MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_TreeckoDoll
	case 1, MauvilleCity_GameCorner_EventScript_TorchicDoll
	case 2, MauvilleCity_GameCorner_EventScript_MudkipDoll
	case 3, MauvilleCity_GameCorner_EventScript_CancelDollSelect
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
	end

MauvilleCity_GameCorner_EventScript_TreeckoDoll::
	setvar VAR_TEMP_1, 1
	bufferdecorationname STR_VAR_1, DECOR_TREECKO_DOLL
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize

MauvilleCity_GameCorner_EventScript_TorchicDoll::
	setvar VAR_TEMP_1, 2
	bufferdecorationname STR_VAR_1, DECOR_TORCHIC_DOLL
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize

MauvilleCity_GameCorner_EventScript_MudkipDoll::
	setvar VAR_TEMP_1, 3
	bufferdecorationname STR_VAR_1, DECOR_MUDKIP_DOLL
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize

MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_CancelDollSelect
	switch VAR_TEMP_1
	case 1, MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll
	case 2, MauvilleCity_GameCorner_EventScript_BuyTorchicDoll
	case 3, MauvilleCity_GameCorner_EventScript_BuyMudkipDoll
	end

MauvilleCity_GameCorner_EventScript_BuyTreeckoDoll::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
	checkdecorspace DECOR_TREECKO_DOLL
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
	removecoins DOLL_COINS
	adddecoration DECOR_TREECKO_DOLL
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_BuyTorchicDoll::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
	checkdecorspace DECOR_TORCHIC_DOLL
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
	removecoins DOLL_COINS
	adddecoration DECOR_TORCHIC_DOLL
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_BuyMudkipDoll::
	checkcoins VAR_TEMP_2
	goto_if_lt VAR_TEMP_2, DOLL_COINS, MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
	checkdecorspace DECOR_MUDKIP_DOLL
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForDoll
	removecoins DOLL_COINS
	adddecoration DECOR_MUDKIP_DOLL
	updatecoinsbox 1, 1
	playse SE_SHOP
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForDoll::
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_NoRoomForDoll::
	call Common_EventScript_NoRoomForDecor
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_CancelDollSelect::
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
	hidecoinsbox 0, 0
	release
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Rare Pokemon Prizes @@@@@@@@@@@@@@@@@@@@@@@@@@@@@

MauvilleCity_GameCorner_EventScript_PrizeCornerPokemon::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPokemon, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChoosePokemonPrizeMessage
	release
	end

MauvilleCity_GameCorner_EventScript_ChoosePokemonPrizeMessage::
	message MauvilleCity_GameCorner_Text_WhichPokemon
	waitmessage
	setvar VAR_0x8004, 0
	showcoinsbox 1, 1
	goto MauvilleCity_GameCorner_EventScript_ChoosePokemonPrize

MauvilleCity_GameCorner_EventScript_ChoosePokemonPrize::
	setvar VAR_0x8004, SCROLL_MULTI_GAMECORNER_POKEMON
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_Munchlax
	case 1, MauvilleCity_GameCorner_EventScript_Gastly
	case 2, MauvilleCity_GameCorner_EventScript_Houndour
	case 3, MauvilleCity_GameCorner_EventScript_Riolu
	case 4, MauvilleCity_GameCorner_EventScript_Ralts
	case 5, MauvilleCity_GameCorner_EventScript_Aron
	case 6, MauvilleCity_GameCorner_EventScript_Gible
	case 7, MauvilleCity_GameCorner_EventScript_Ditto
	case 8, MauvilleCity_GameCorner_EventScript_Cubone
	case 9, MauvilleCity_GameCorner_EventScript_Honedge
	case 10, MauvilleCity_GameCorner_EventScript_Spiritomb
	case 11, MauvilleCity_GameCorner_EventScript_Bagon
	case 12, MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	goto MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	end

MauvilleCity_GameCorner_EventScript_Gastly::
	setvar VAR_TEMP_1, SPECIES_GASTLY
	setvar VAR_0x8006, GASTLY_COINS
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
	
MauvilleCity_GameCorner_EventScript_Munchlax::
	setvar VAR_TEMP_1, SPECIES_MUNCHLAX
	setvar VAR_0x8006, MUNCHLAX_COINS
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
	
MauvilleCity_GameCorner_EventScript_Houndour::
	setvar VAR_TEMP_1, SPECIES_HOUNDOUR
	setvar VAR_0x8006, HOUNDOUR_COINS
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
	
MauvilleCity_GameCorner_EventScript_Riolu::
	setvar VAR_TEMP_1, SPECIES_RIOLU
	setvar VAR_0x8006, RIOLU_COINS
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
	
MauvilleCity_GameCorner_EventScript_Ralts::
	setvar VAR_TEMP_1, SPECIES_RALTS
	setvar VAR_0x8006, RALTS_COINS
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
	
MauvilleCity_GameCorner_EventScript_Aron::
	setvar VAR_TEMP_1, SPECIES_ARON
	setvar VAR_0x8006, ARON_COINS
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
	
MauvilleCity_GameCorner_EventScript_Gible::
	setvar VAR_TEMP_1, SPECIES_GIBLE
	setvar VAR_0x8006, GIBLE_COINS
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
	
MauvilleCity_GameCorner_EventScript_Ditto::
	setvar VAR_TEMP_1, SPECIES_DITTO
	setvar VAR_0x8006, DITTO_COINS
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
	
MauvilleCity_GameCorner_EventScript_Cubone::
	setvar VAR_TEMP_1, SPECIES_CUBONE
	setvar VAR_0x8006, CUBONE_COINS
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize

MauvilleCity_GameCorner_EventScript_Honedge::
	setvar VAR_TEMP_1, SPECIES_HONEDGE
	setvar VAR_0x8006, HONEDGE_COINS
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize

MauvilleCity_GameCorner_EventScript_Spiritomb::
	setvar VAR_TEMP_1, SPECIES_SPIRITOMB
	setvar VAR_0x8006, SPIRITOMB_COINS
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize

MauvilleCity_GameCorner_EventScript_Bagon::
	setvar VAR_TEMP_1, SPECIES_BAGON
	setvar VAR_0x8006, BAGON_COINS
	goto MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize
	
MauvilleCity_GameCorner_EventScript_ConfirmPokemonPrize::
	bufferspeciesname 0, VAR_TEMP_1
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheShinyPokemonX, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_GameCorner_EventScript_ConfirmShinyPokemonPrize
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsThePokemonX, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	checkcoins VAR_0x8007
	compare VAR_0x8007, VAR_0x8006
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPokemon
	goto MauvilleCity_GameCorner_EventScript_ReceivePokemon

MauvilleCity_GameCorner_EventScript_ConfirmShinyPokemonPrize::
	bufferspeciesname 0, VAR_TEMP_1
	setvar VAR_0x8006, SHINY_COINS
	checkcoins VAR_0x8007
	compare VAR_0x8007, VAR_0x8006
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPokemon
	goto MauvilleCity_GameCorner_EventScript_ReceiveShinyPokemon

MauvilleCity_GameCorner_EventScript_CancelPokemonSelect::
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
	hidecoinsbox 0, 0
	release
	end
	
MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForPokemon::
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ChoosePokemonPrizeMessage
	end

MauvilleCity_GameCorner_EventScript_ReceivePokemon::
	msgbox MauvilleCity_GameCorner_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
	removecoins VAR_0x8006
	updatecoinsbox 1, 1
	givemon VAR_TEMP_1, 5, ITEM_LUCKY_EGG
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_ReceivePokemonParty
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_GameCorner_EventScript_ReceivePokemonPC
	goto Common_EventScript_NoMoreRoomForPokemon

MauvilleCity_GameCorner_EventScript_ReceiveShinyPokemon::
	msgbox MauvilleCity_GameCorner_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
	removecoins VAR_0x8006
	updatecoinsbox 1, 1
	setflag P_FLAG_FORCE_SHINY
	givemon VAR_TEMP_1, 5, ITEM_LUCKY_EGG
	compare VAR_RESULT, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_ReceivePokemonParty
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_GameCorner_EventScript_ReceivePokemonPC
	goto Common_EventScript_NoMoreRoomForPokemon

MauvilleCity_GameCorner_EventScript_ReceivePokemonParty::
	call MauvilleCity_GameCorner_EventScript_ReceivedPokemonFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_TakeCareOfPokemon
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto MauvilleCity_GameCorner_EventScript_TakeCareOfPokemon

MauvilleCity_GameCorner_EventScript_ReceivePokemonPC::
	call MauvilleCity_GameCorner_EventScript_ReceivedPokemonFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_SendPokemonToPC
	call Common_EventScript_NameReceivedBoxMon
	goto MauvilleCity_GameCorner_EventScript_SendPokemonToPC

MauvilleCity_GameCorner_EventScript_SendPokemonToPC::
	call Common_EventScript_TransferredToPC
	goto MauvilleCity_GameCorner_EventScript_TakeCareOfPokemon

MauvilleCity_GameCorner_EventScript_ReceivedPokemonFanfare::
	bufferspeciesname 0, VAR_TEMP_1
	playfanfare MUS_OBTAIN_ITEM
	message MauvilleCity_GameCorner_Text_PlayerReceivedPokemon
	waitmessage
	waitfanfare
	@ bufferspeciesname 0, VAR_TEMP_1
	return

MauvilleCity_GameCorner_EventScript_TakeCareOfPokemon::
	bufferspeciesname 0, VAR_TEMP_1
	msgbox MauvilleCity_GameCorner_Text_TakeCareOfPokemon, MSGBOX_DEFAULT
	hidecoinsbox 0, 0
	clearflag P_FLAG_FORCE_SHINY
	release
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Starter Pokemon Prizes @@@@@@@@@@@@@@@@@@@@@@@@@@@@

MauvilleCity_GameCorner_EventScript_PrizeCornerStarter::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPokemon, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChooseStarterPrizeMessage
	release
	end

MauvilleCity_GameCorner_EventScript_ChooseStarterPrizeMessage::
	message MauvilleCity_GameCorner_Text_WhichStarterType
	waitmessage
	setvar VAR_0x8004, 0
	showcoinsbox 1, 1
	multichoice 0, 0, MULTI_GRASS_FIRE_WATER, 0
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_ChooseGrassStarter
	case 1, MauvilleCity_GameCorner_EventScript_ChooseFireStarter
	case 2, MauvilleCity_GameCorner_EventScript_ChooseWaterStarter
	case 3, MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	case MULTI_B_PRESSED, MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	goto MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	end
	
MauvilleCity_GameCorner_EventScript_ChooseGrassStarter::
	setvar VAR_0x8004, SCROLL_MULTI_GAMECORNER_GRASS_STARTERS
	setvar VAR_0x8006, STARTER_COINS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_Bulbasaur
	case 1, MauvilleCity_GameCorner_EventScript_Chikorita
	case 2, MauvilleCity_GameCorner_EventScript_Treecko
	case 3, MauvilleCity_GameCorner_EventScript_Turtwig
	case 4, MauvilleCity_GameCorner_EventScript_Snivy
	case 5, MauvilleCity_GameCorner_EventScript_Chespin
	case 6, MauvilleCity_GameCorner_EventScript_Rowlet
	case 7, MauvilleCity_GameCorner_EventScript_Grookey
	case 8, MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	goto MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	end
	
MauvilleCity_GameCorner_EventScript_ChooseFireStarter::
	setvar VAR_0x8004, SCROLL_MULTI_GAMECORNER_FIRE_STARTERS
	setvar VAR_0x8006, STARTER_COINS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_Charmander
	case 1, MauvilleCity_GameCorner_EventScript_Cyndaquil
	case 2, MauvilleCity_GameCorner_EventScript_Torchic
	case 3, MauvilleCity_GameCorner_EventScript_Chimchar
	case 4, MauvilleCity_GameCorner_EventScript_Tepig
	case 5, MauvilleCity_GameCorner_EventScript_Fennekin
	case 6, MauvilleCity_GameCorner_EventScript_Litten
	case 7, MauvilleCity_GameCorner_EventScript_Scorbunny
	case 8, MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	goto MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	end
	
MauvilleCity_GameCorner_EventScript_ChooseWaterStarter::
	setvar VAR_0x8004, SCROLL_MULTI_GAMECORNER_WATER_STARTERS
	setvar VAR_0x8006, STARTER_COINS
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, MauvilleCity_GameCorner_EventScript_Squirtle
	case 1, MauvilleCity_GameCorner_EventScript_Totodile
	case 2, MauvilleCity_GameCorner_EventScript_Mudkip
	case 3, MauvilleCity_GameCorner_EventScript_Piplup
	case 4, MauvilleCity_GameCorner_EventScript_Oshawott
	case 5, MauvilleCity_GameCorner_EventScript_Froakie
	case 6, MauvilleCity_GameCorner_EventScript_Popplio
	case 7, MauvilleCity_GameCorner_EventScript_Sobble
	case 8, MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	goto MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	end

MauvilleCity_GameCorner_EventScript_Bulbasaur::
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Chikorita::
	setvar VAR_TEMP_1, SPECIES_CHIKORITA
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Treecko::
	setvar VAR_TEMP_1, SPECIES_TREECKO
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Turtwig::
	setvar VAR_TEMP_1, SPECIES_TURTWIG
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Snivy::
	setvar VAR_TEMP_1, SPECIES_SNIVY
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Chespin::
	setvar VAR_TEMP_1, SPECIES_CHESPIN
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Rowlet::
	setvar VAR_TEMP_1, SPECIES_ROWLET
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize

MauvilleCity_GameCorner_EventScript_Grookey::
	setvar VAR_TEMP_1, SPECIES_GROOKEY
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize

MauvilleCity_GameCorner_EventScript_Charmander::
	setvar VAR_TEMP_1, SPECIES_CHARMANDER
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Cyndaquil::
	setvar VAR_TEMP_1, SPECIES_CYNDAQUIL
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Torchic::
	setvar VAR_TEMP_1, SPECIES_TORCHIC
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Chimchar::
	setvar VAR_TEMP_1, SPECIES_CHIMCHAR
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Tepig::
	setvar VAR_TEMP_1, SPECIES_TEPIG
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Fennekin::
	setvar VAR_TEMP_1, SPECIES_FENNEKIN
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Litten::
	setvar VAR_TEMP_1, SPECIES_LITTEN
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
		
MauvilleCity_GameCorner_EventScript_Scorbunny::
	setvar VAR_TEMP_1, SPECIES_SCORBUNNY
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize

MauvilleCity_GameCorner_EventScript_Squirtle::
	setvar VAR_TEMP_1, SPECIES_SQUIRTLE
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Totodile::
	setvar VAR_TEMP_1, SPECIES_TOTODILE
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Mudkip::
	setvar VAR_TEMP_1, SPECIES_MUDKIP
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Piplup::
	setvar VAR_TEMP_1, SPECIES_PIPLUP
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Oshawott::
	setvar VAR_TEMP_1, SPECIES_OSHAWOTT
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Froakie::
	setvar VAR_TEMP_1, SPECIES_FROAKIE
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
	
MauvilleCity_GameCorner_EventScript_Popplio::
	setvar VAR_TEMP_1, SPECIES_POPPLIO
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize
		
MauvilleCity_GameCorner_EventScript_Sobble::
	setvar VAR_TEMP_1, SPECIES_SOBBLE
	goto MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize

MauvilleCity_GameCorner_EventScript_ConfirmStarterPrize::
	bufferspeciesname 0, VAR_TEMP_1
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheShinyPokemonX, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_GameCorner_EventScript_ConfirmShinyPokemonPrize
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsThePokemonX, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_CancelPokemonSelect
	checkcoins VAR_0x8007
	compare VAR_0x8007, VAR_0x8006
	goto_if_lt MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForStarter
	goto MauvilleCity_GameCorner_EventScript_ReceivePokemon

MauvilleCity_GameCorner_EventScript_NotEnoughCoinsForStarter::
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ChooseStarterPrizeMessage
	end
	
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

MauvilleCity_GameCorner_EventScript_Woman2::
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
	end

MauvilleCity_GameCorner_EventScript_Gentleman::
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
	end

MauvilleCity_GameCorner_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
	switch VAR_STARTER_MON
	case 0, MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
	case 1, MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
	case 2, MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
	end

MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll::
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
	checkdecorspace DECOR_TREECKO_DOLL
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
	givedecoration DECOR_TREECKO_DOLL
	setflag FLAG_RECEIVED_STARTER_DOLL
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
	end

MauvilleCity_GameCorner_EventScript_GiveTorchicDoll::
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
	checkdecorspace DECOR_TORCHIC_DOLL
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
	givedecoration DECOR_TORCHIC_DOLL
	setflag FLAG_RECEIVED_STARTER_DOLL
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
	end

MauvilleCity_GameCorner_EventScript_GiveMudkipDoll::
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
	checkdecorspace DECOR_MUDKIP_DOLL
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
	givedecoration DECOR_MUDKIP_DOLL
	setflag FLAG_RECEIVED_STARTER_DOLL
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
	end

MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
	call Common_EventScript_NoRoomForDecor
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_PokefanM::
	lock
	faceplayer
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_TryGive20Coins::
	goto_if_set FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanMNormal
	checkcoins VAR_TEMP_1
	goto_if_ge VAR_TEMP_1, 1, MauvilleCity_GameCorner_EventScript_PokefanMNormal @ Only give 20 coins if player has no coins
	setflag FLAG_RECEIVED_20_COINS
	addcoins 20
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
	playse SE_SHOP
	goto MauvilleCity_GameCorner_EventScript_PokefanMNormal
	end

MauvilleCity_GameCorner_EventScript_PokefanMNormal::
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_OldMan::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_Cook::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_Man::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MauvilleCity_GameCorner_EventScript_Maniac::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_Woman::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_SlotMachine0::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine1::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine2::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 2
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine3::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 3
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine4::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 4
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine5::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 5
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine6::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 6
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine7::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 7
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine8::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 8
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine9::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 9
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine10::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 10
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachine11::
	lockall
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoCoinCase
	setvar VAR_0x8004, 11
	specialvar VAR_RESULT, GetSlotMachineId
	playslotmachine VAR_RESULT
	releaseall
	end

MauvilleCity_GameCorner_EventScript_NoCoinCase::
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
	.string "Welcome to the MAUVILLE GAME CORNER.\n"
	.string "Remember, gambling is bad!$"

MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins:
	.string "Okay, you wanted some COINS for\n"
	.string "the games?\p"
	.string "Since you don't have a COIN CASE for\n"
	.string "stowing the COINS, I'll give you one.$"

MauvilleCity_GameCorner_Text_WereYouLookingForCoins:
	.string "Were you looking for COINS?\p"
	.string "It's ¥500 for 50 COINS.\n"
	.string "Would you like some?$"

MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins:
	.string "Thank you very much!\n"
	.string "Here are your COINS!$"

MauvilleCity_GameCorner_Text_DontHaveEnoughMoney:
	.string "Um… You don't appear to have\n"
	.string "enough money…$"

MauvilleCity_GameCorner_Text_CoinCaseIsFull:
	.string "Oh?\n"
	.string "Your COIN CASE is full.$"

MauvilleCity_GameCorner_Text_DontNeedCoinsThen:
	.string "Oh… You don't need COINS, then?\n"
	.string "Good luck on your adventure!$"

MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes:
	.string "Welcome.\p"
	.string "You can exchange your COINS for\n"
	.string "prizes here.$"

MauvilleCity_GameCorner_Text_WhichPrize:
	.string "Which prize would you like?$"

MauvilleCity_GameCorner_Text_SendToYourHomePC:
	.string "Thank you!\n"
	.string "We'll send it to your PC at home.$"

MauvilleCity_GameCorner_Text_NotEnoughCoins:
	.string "You don't have enough COINS.$"

@ Unused
MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor:
	.string "There isn't any room available for\n"
	.string "placing {STR_VAR_1}.$"

MauvilleCity_GameCorner_Text_OhIsThatSo:
	.string "Oh, is that so? \n"
	.string "You need to save some COINS before\l"
	.string "coming back here.$"

MauvilleCity_GameCorner_Text_SoYourChoiceIsX:
	.string "So your choice is {STR_VAR_1}?$"

MauvilleCity_GameCorner_Text_HereYouGo:
	.string "Here you go!$"

@ Unused
MauvilleCity_GameCorner_Text_CantCarryAnyMore:
	.string "Oh, you can't carry any more than that.$"

MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
	.string "I made a mistake and got two of\n"
	.string "the same DOLLS.\p"
	.string "Would you like one of them?$"

MauvilleCity_GameCorner_Text_HereYouGo2:
	.string "Here you go!$"

MauvilleCity_GameCorner_Text_YouWantItButNotNow:
	.string "Huh?\n"
	.string "You want it, but not right now?$"

MauvilleCity_GameCorner_Text_DontBeNegative:
	.string "Oh, don't be so negative!\n"
	.string "You can have this!$"

MauvilleCity_GameCorner_Text_CantWinJackpot:
	.string "There's a prize I want, but I can't win\n"
	.string "the jackpot.$"

MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor:
	.string "Hey, kid, if you want to play here,\n"
	.string "you need a COIN CASE.\p"
	.string "I think the young lady next door\n"
	.string "had one. Go see her!$"

MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
	.string "My luck can only last so long.\n"
	.string "This is too much for me.\l"
	.string "Here, take some COINS!$"

MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
	.string "MAUVILLE has something for\n"
	.string "everyone.\p"
	.string "For me, it's the GAME CORNER.$"

MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates:
	.string "The ROULETTE tables have different\n"
	.string "rates.\p"
	.string "Check your COINS if you're going to\n"
	.string "pick a table.$"

MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
	.string "It's easy to lose track of time in here. \n"
	.string "I should get back to work.$"

MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay:
	.string "COINS are needed to play here\n"
	.string "in the GAME CORNER.$"

MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
	.string "This ROULETTE thing…\n"
	.string "It's rather demanding.\p"
	.string "Win or lose, it's only by luck.$"

MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
	.string "Up to three COINS can be used to play\n"
	.string "the SLOTS.$"

MauvilleCity_GameCorner_Text_DifficultToStopOn7:
	.string "It's very difficult to make it stop\n"
	.string "right on “7.”\p"
	.string "If it stops on “7” during the REEL TIME\n"
	.string "bonus game, you'll receive extra COINS.$"

MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo:
	.string "Here's some information for you\n"
	.string "about the SLOTS.\p"
	.string "The more lightning bolts you stock,\n"
	.string "the more REEL TIME chances you get.\p"
	.string "In a game with the maximum five\n"
	.string "REEL TIME chances…\p"
	.string "It is possible to receive four regular\n"
	.string "bonuses, then a big bonus.\p"
	.string "That would total 660 COINS, but it's\n"
	.string "very difficult to get.$"

MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase:
	.string "You can't play if you don't have\n"
	.string "a COIN CASE.$"	

MauvilleCity_GameCorner_Text_ExchangeCoinsForPokemon:
	.string "Welcome.\p"
	.string "You can exchange your Coins for\n"
	.string "rare Pokémon here.$"

MauvilleCity_GameCorner_Text_WhichPokemon:
	.string "Which Pokémon would you like?$"

MauvilleCity_GameCorner_Text_SoYourChoiceIsThePokemonX:
	.string "So your choice is {STR_VAR_1}?$"

MauvilleCity_GameCorner_Text_SoYourChoiceIsTheShinyPokemonX:
	.string "Want to make the {STR_VAR_1} shiny\n"
	.string "for 20,000 coins?$"

MauvilleCity_GameCorner_Text_ThanksPleaseTakePokemon:
	.string "Thank you!\p"
	.string "Please take your new Pokémon.$"

MauvilleCity_GameCorner_Text_PlayerReceivedPokemon:
	.string "{PLAYER} received {STR_VAR_1}!$"

MauvilleCity_GameCorner_Text_TakeCareOfPokemon:
	.string "Take good care of {STR_VAR_1}!$"

MauvilleCity_GameCorner_Text_WhichStarterType:
	.string "Which Type of Pokémon would you like?$"
