CaramelTown_MapScripts::
	.byte 0


CaramelTown_EventScript_PlayerHouseSign::
	msgbox CaramelTown_EventScript_PlayerHouseSign_Text_0, MSGBOX_SIGN
	return


CaramelTown_EventScript_ProfHouseSign::
	msgbox CaramelTown_EventScript_ProfHouseSign_Text_0, MSGBOX_SIGN
	return


CaramelTown_EventScript_TownSign::
	msgbox CaramelTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	return


CaramelTown_EventScript_BobHouseSign::
	msgbox CaramelTown_EventScript_BobHouseSign_Text_0, MSGBOX_SIGN
	return


CaramelTown_EventScript_BillHouseSign::
	msgbox CaramelTown_EventScript_BillHouseSign_Text_0, MSGBOX_SIGN
	return


CaramelTown_EventScript_PlayerHouseSign_Text_0:
	.string "It reads: {PLAYER}'s House$"

CaramelTown_EventScript_ProfHouseSign_Text_0:
	.string "Cole's House & Pokemon Lab$"

CaramelTown_EventScript_TownSign_Text_0:
	.string "Caramel Town: The sweetest place on earth$"

CaramelTown_EventScript_BobHouseSign_Text_0:
	.string "It reads: Bob's House$"

CaramelTown_EventScript_BillHouseSign_Text_0:
	.string "It reads: Bill's House$"
