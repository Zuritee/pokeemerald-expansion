PokemonLab_MapScripts::
	.byte 0


PokemonLab_Cole::
	goto_if_unset FLAG_SYS_POKEDEX_GET, PokemonLab_Cole_1
	goto_if_set FLAG_SYS_POKEDEX_GET, PokemonLab_Cole_6
PokemonLab_Cole_5:
	goto_if_set FLAG_SYS_POKEMON_GET, PokemonLab_Cole_3
	msgbox PokemonLab_Cole_Text_7, MSGBOX_NPC
	return

PokemonLab_Cole_1:
	msgbox PokemonLab_Cole_Text_0, MSGBOX_NPC
	msgbox PokemonLab_Cole_Text_1, MSGBOX_NPC
	playfanfare MUS_OBTAIN_ITEM
	lock
	msgbox PokemonLab_Cole_Text_2, MSGBOX_DEFAULT
	waitfanfare
	release
	closemessage
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	return

PokemonLab_Cole_2:
	msgbox PokemonLab_Cole_Text_3, MSGBOX_NPC
	return

PokemonLab_Cole_3:
	msgbox PokemonLab_Cole_Text_4, MSGBOX_NPC
	msgbox PokemonLab_Cole_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq PokemonLab_Cole_11
PokemonLab_Cole_10:
	msgbox PokemonLab_Cole_Text_6, MSGBOX_NPC
	return

PokemonLab_Cole_6:
	goto_if_unset FLAG_SYS_POKEMON_GET, PokemonLab_Cole_2
	goto PokemonLab_Cole_5

PokemonLab_Cole_11:
	call Common_EventScript_NameReceivedPartyMon
	goto PokemonLab_Cole_10


PokemonLab_StarterBag::
	goto_if_unset FLAG_SYS_POKEDEX_GET, PokemonLab_StarterBag_1
	goto_if_set FLAG_SYS_POKEDEX_GET, PokemonLab_StarterBag_4
PokemonLab_StarterBag_3:
	msgbox PokemonLab_StarterBag_Text_2, MSGBOX_NPC
	return

PokemonLab_StarterBag_1:
	msgbox PokemonLab_StarterBag_Text_0, MSGBOX_NPC
	return

PokemonLab_StarterBag_2:
	setflag FLAG_SYS_POKEMON_GET
	fadescreen FADE_TO_BLACK
	special ChooseStarter
	waitstate
	waitmovement 0
	playfanfare MUS_OBTAIN_ITEM
	lock
	msgbox PokemonLab_StarterBag_Text_1, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	release
	return

PokemonLab_StarterBag_4:
	goto_if_unset FLAG_SYS_POKEMON_GET, PokemonLab_StarterBag_2
	goto PokemonLab_StarterBag_3


PokemonLab_Sign_BookshelfOne::
	msgbox PokemonLab_Sign_BookshelfOne_Text_0, MSGBOX_SIGN
	return


PokemonLab_Sign_BookshelfTwo::
	msgbox PokemonLab_Sign_BookshelfTwo_Text_0, MSGBOX_SIGN
	return


PokemonLab_Sign_StrangeMachine::
	msgbox PokemonLab_Sign_StrangeMachine_Text_0, MSGBOX_SIGN
	return


PokemonLab_Sign_List::
	msgbox PokemonLab_Sign_List_Text_0, MSGBOX_SIGN
	return


PokemonLab_Cole_Text_0:
	.string "Cole: Hey! You're {PLAYER}, right?\p"
	.string "My name is Cole Sapling and I'm\n"
	.string "professor Oak's assistant.\p"
	.string "If you wouldn't mind I'd like you to do\n"
	.string "some research for me, since you know\l"
	.string "your way around better than I do.\p"
	.string "Could you take this pokedex and\n"
	.string "document all the pokemon of the Telas\l"
	.string "Region?$"

PokemonLab_Cole_Text_1:
	.string "Great! Here's the pokedex you'll use to\n"
	.string "document each pokemon you come\l"
	.string "across.$"

PokemonLab_Cole_Text_2:
	.string "You got the Pokedex!$"

PokemonLab_Cole_Text_3:
	.string "Cole: What are you waiting for?\l"
	.string "Grab a pokemon!$"

PokemonLab_Cole_Text_4:
	.string "Cole: You made a great choice!$"

PokemonLab_Cole_Text_5:
	.string "Would you like to give a name to your\n"
	.string "new pokemon?$"

PokemonLab_Cole_Text_6:
	.string "Cole: Well, you'd better go out and\n"
	.string "start collecting data! Make sure to\l"
	.string "tell your mother where you're going!\n"
	.string "You wouldn't want her to get worried!$"

PokemonLab_Cole_Text_7:
	.string "Cole: You'd better go out and start\n"
	.string "collecting data!$"

PokemonLab_StarterBag_Text_0:
	.string "Cole: Hey! At least say hello before\n"
	.string "rifling through my things!$"

PokemonLab_StarterBag_Text_1:
	.string "You got your first pokemon!$"

PokemonLab_StarterBag_Text_2:
	.string "Cole: You can only take one pokemon!\n"
	.string "They're very rare and I can't just give\l"
	.string "them all away!$"

PokemonLab_Sign_BookshelfOne_Text_0:
	.string "There are lots of books about Pokemon here.$"

PokemonLab_Sign_BookshelfTwo_Text_0:
	.string "There are books about evolution and\n"
	.string "friendship here.$"

PokemonLab_Sign_StrangeMachine_Text_0:
	.string "It's some kind of strange machine. No\n"
	.string "clue what it could be used for.$"

PokemonLab_Sign_List_Text_0:
	.string "It looks like a shopping list.$"
