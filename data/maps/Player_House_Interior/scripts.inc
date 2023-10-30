Player_House_Interior_MapScripts::
	.byte 0


Player_House_Interior_Mom::
	goto_if_unset FLAG_RECEIVED_RUNNING_SHOES, Player_House_Interior_Mom_1
	goto_if_unset FLAG_SYS_POKEMON_GET, Player_House_Interior_Mom_2
	goto_if_set FLAG_SYS_POKEMON_GET, Player_House_Interior_Mom_5
Player_House_Interior_Mom_4:
	msgbox Player_House_Interior_Mom_Text_6, MSGBOX_NPC
	return

Player_House_Interior_Mom_1:
	msgbox Player_House_Interior_Mom_Text_0, MSGBOX_NPC
	msgbox Player_House_Interior_Mom_Text_1, MSGBOX_NPC
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag 0x8C0
	playfanfare MUS_OBTAIN_ITEM
	lock
	msgbox Player_House_Interior_Mom_Text_2, MSGBOX_DEFAULT
	release
	waitfanfare
	closemessage
	return

Player_House_Interior_Mom_2:
	msgbox Player_House_Interior_Mom_Text_3, MSGBOX_NPC
	return

Player_House_Interior_Mom_3:
	msgbox Player_House_Interior_Mom_Text_4, MSGBOX_NPC
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	playfanfare MUS_OBTAIN_ITEM
	lock
	msgbox Player_House_Interior_Mom_Text_5, MSGBOX_DEFAULT
	release
	waitfanfare
	closemessage
	return

Player_House_Interior_Mom_5:
	goto_if_unset FLAG_SYS_POKENAV_GET, Player_House_Interior_Mom_3
	goto Player_House_Interior_Mom_4


Player_House_Interior_Test::
	msgbox Player_House_Interior_Test_Text_0, MSGBOX_NPC
	msgbox Player_House_Interior_Test_Text_1, MSGBOX_NPC
	msgbox Player_House_Interior_Test_Text_2, MSGBOX_NPC
	return


Player_House_Interior_Mom_Text_0:
	.string "Mom: Professor Oak's assistant just\n"
	.string "moved in today!\p"
	.string "You should go talk to him,\p"
	.string "I heard he might have a job for you!$"

Player_House_Interior_Mom_Text_1:
	.string "Mom: Oh wait! Don't forget to take your\n"
	.string "running shoes!$"

Player_House_Interior_Mom_Text_2:
	.string "Obtained Runing Shoes!$"

Player_House_Interior_Mom_Text_3:
	.string "Mom: Well what are you waiting for! Go\n"
	.string "see Oak's assistant!$"

Player_House_Interior_Mom_Text_4:
	.string "Mom: Oh! So he wants you to work on the\n"
	.string "Poxedex for the Talis Region?\p"
	.string "That sounds like a great idea!\p"
	.string "I guess I'll give you your birthday\n"
	.string "present early then!$"

Player_House_Interior_Mom_Text_5:
	.string "Obtained The Pokenav!$"

Player_House_Interior_Mom_Text_6:
	.string "Mom: How's your adventure going honey?$"

Player_House_Interior_Test_Text_0:
	.string "These lines are split by L\l"
	.string "just like that$"

Player_House_Interior_Test_Text_1:
	.string "These lines are split by N\n"
	.string "just like that$"

Player_House_Interior_Test_Text_2:
	.string "These lines are split by P\p"
	.string "just like that$"
