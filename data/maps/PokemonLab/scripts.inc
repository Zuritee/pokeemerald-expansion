PokemonLab_MapScripts::
	.byte 0


PokemonLab_Sign_BookshelfOne::
	msgbox PokemonLab_Sign_BookshelfOne_Text_0, MSGBOX_SIGN
	return


PokemonLab_Sign_BookshelfTwo::
	msgbox PokemonLab_Sign_BookshelfTwo_Text_0, MSGBOX_SIGN
	return


PokemonLab_Sign_StrangeMachine::
	msgbox PokemonLab_Sign_StrangeMachine_Text_0, MSGBOX_SIGN
	msgbox PokemonLab_Sign_StrangeMachine_Text_1, MSGBOX_SIGN
	return


PokemonLab_Sign_List::
	msgbox PokemonLab_Sign_List_Text_0, MSGBOX_SIGN
	return


PokemonLab_Cole::
	msgbox PokemonLab_Cole_Text_0, MSGBOX_SIGN
	return


PokemonLab_Sign_BookshelfOne_Text_0:
	.string "There are lots of books about Pokemon here.$"

PokemonLab_Sign_BookshelfTwo_Text_0:
	.string "There are books about evolution and friendship here.$"

PokemonLab_Sign_StrangeMachine_Text_0:
	.string "It's some kind of strange machine.$"

PokemonLab_Sign_StrangeMachine_Text_1:
	.string "No clue what it could be used for.$"

PokemonLab_Sign_List_Text_0:
	.string "It looks like a shopping list.$"

PokemonLab_Cole_Text_0:
	.string "Hey! Want some pokemon??$"
