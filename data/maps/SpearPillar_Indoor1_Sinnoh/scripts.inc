@ Auto-generated stub scripts for SpearPillar_Indoor1_Sinnoh
@ Replace these with real scripts as needed

SpearPillar_Indoor1_Sinnoh_MapScripts::
    map_script MAP_SCRIPT_ON_FRAME_TABLE, SpearPillar_Indoor1_Sinnoh_OnFrameTable
    .byte 0

SpearPillar_Indoor1_Sinnoh_OnFrameTable:
    map_script_2 VAR_TEMP_1, 0, SpearPillar_Indoor1_Sinnoh_OnFrame_FireTrigger0
    .2byte 0

SpearPillar_Indoor1_Sinnoh_OnFrame_FireTrigger0::
    setvar VAR_TEMP_1, 1
    goto SpearPillar_Indoor1_Sinnoh_EventScript_Trigger0
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj1::
    lock
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj1_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj1_Text:
    .string "TODO: Stub script\nSpearPillar_Indoor1_Sinnoh_EventScript_Obj1$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj2::
    lock
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj2_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj2_Text:
    .string "TODO: Stub script\nSpearPillar_Indoor1_Sinnoh_EventScript_Obj2$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj3::
    lock
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj3_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj3_Text:
    .string "TODO: Stub script\nSpearPillar_Indoor1_Sinnoh_EventScript_Obj3$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj4::
    lock
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj4_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj4_Text:
    .string "TODO: Stub script\nSpearPillar_Indoor1_Sinnoh_EventScript_Obj4$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj5::
    lock
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj5_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj5_Text:
    .string "TODO: Stub script\nSpearPillar_Indoor1_Sinnoh_EventScript_Obj5$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj6::
    lock
    faceplayer
    goto_if_defeated TRAINER_CYRUS, SpearPillar_Indoor1_Sinnoh_EventScript_Obj6_AlreadyDefeated
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj6_Text, MSGBOX_DEFAULT
    closemessage
    trainerbattle_no_intro TRAINER_CYRUS, SpearPillar_Indoor1_Sinnoh_EventScript_Obj6_DefeatText
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj6_PostDefeatText, MSGBOX_DEFAULT
    closemessage
    applymovement VAR_LAST_TALKED, SpearPillar_Indoor1_Sinnoh_Movement_CyrusStepAside
    waitmovement 0
    setobjectxyperm 6, 14, 9
    setobjectmovementtype 6, MOVEMENT_TYPE_FACE_RIGHT
    release
    end

SpearPillar_Indoor1_Sinnoh_Movement_CyrusStepAside:
    walk_left
    delay_8
    face_right
    step_end
    waitmovement

SpearPillar_Indoor1_Sinnoh_EventScript_Obj6_AlreadyDefeated:
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj6_PostDefeatText, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj6_Text:
    .string "Saturn. My most trusted confidant.\p"
    .string "All this time we spent together\nbuilding Team Galactic.\p"
    .string "All this trust I put into you.\p"
    .string "Only for you to betray me when\nI needed you most.\p"
    .string "This world really does deserve\nnothingness.\p"
    .string "It's time for me to end you.$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj6_DefeatText:
    .string "Impossible…$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj6_PostDefeatText:
    .string "I never thought it would end\nlike this, Saturn.$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj7::
    lock
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj7_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj7_Text:
    .string "TODO: Stub script\nSpearPillar_Indoor1_Sinnoh_EventScript_Obj7$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj8::
    lock
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj8_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj8_Text:
    .string "TODO: Stub script\nSpearPillar_Indoor1_Sinnoh_EventScript_Obj8$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj9::
    lock
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj9_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj9_Text:
    .string "TODO: Stub script\nSpearPillar_Indoor1_Sinnoh_EventScript_Obj9$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj10::
    lock
    goto_if_defeated TRAINER_CYNTHIA, SpearPillar_Indoor1_Sinnoh_EventScript_Obj10_AlreadyDefeated
    fadeoutbgm 1
    playbgm MUS_CYNTHIA_THEME, FALSE
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj10_Text, MSGBOX_DEFAULT
    closemessage
    trainerbattle_no_intro TRAINER_CYNTHIA, SpearPillar_Indoor1_Sinnoh_EventScript_Obj10_DefeatText
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj10_PostDefeatText, MSGBOX_DEFAULT
    closemessage
    applymovement VAR_LAST_TALKED, SpearPillar_Indoor1_Sinnoh_Movement_CynthiaStepAside
    waitmovement 0
    setobjectxyperm 10, 14, 4
    setobjectmovementtype 10, MOVEMENT_TYPE_FACE_RIGHT
    fadedefaultbgm
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj10_AlreadyDefeated:
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj10_PostDefeatText, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_Movement_CynthiaStepAside:
    walk_left
    delay_8
    face_right
    step_end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj10_Text:
    .string "Hello Saturn. You've finally come.\p"
    .string "Even with everything we've been\n"
    .string "through together, you still chose\l"
    .string "to betray me.\p"
    .string "For that, I'll have to stop you here.\p"
    .string "I have no other words for you.\p"
    .string "Taste my wrath!$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj10_DefeatText:
    .string "How could you…$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj10_PostDefeatText:
    .string "Saturn… I see now.\pYou have grown beyond what I\never taught you.\pGo. Whatever you came here for,\nclaim it.$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj11::
    lock
    faceplayer
    trainerbattle_single TRAINER_SINNOH_MC, SpearPillar_Indoor1_Sinnoh_EventScript_Obj11_Intro, SpearPillar_Indoor1_Sinnoh_EventScript_Obj11_Defeat
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj11_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj11_Intro:
    .string "…$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj11_Defeat:
    .string "…$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj11_Text:
    .string "…$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj12::
    lock
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj12_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj12_Text:
    .string "TODO: Stub script\nSpearPillar_Indoor1_Sinnoh_EventScript_Obj12$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj13::
    trainerbattle_single TRAINER_GALACTIC_GRUNT_SPEAR_PILLAR, SpearPillar_Indoor1_Sinnoh_EventScript_Obj13_Intro, SpearPillar_Indoor1_Sinnoh_EventScript_Obj13_Defeat
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj13_PostDefeat, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj13_Intro:
    .string "Halt! Commander Saturn or not,\nno traitor passes us!$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj13_Defeat:
    .string "How… for Cyrus…$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj13_PostDefeat:
    .string "Saturn…you were the best boss\nI ever had. Why would you betray us?$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj14::
    trainerbattle_single TRAINER_GALACTIC_GRUNT_SPEAR_PILLAR_2, SpearPillar_Indoor1_Sinnoh_EventScript_Obj14_Intro, SpearPillar_Indoor1_Sinnoh_EventScript_Obj14_Defeat
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj14_PostDefeat, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj14_Intro:
    .string "Saturn?! You don't get to walk\nin here like nothing happened!$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj14_Defeat:
    .string "Curse you, Saturn…$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj14_PostDefeat:
    .string "I knew you were a traitor.\nWhy did Cyrus trust you?$"

SpearPillar_Indoor1_Sinnoh_EventScript_Obj15::
    lock
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Obj15_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Obj15_Text:
    .string "TODO: Stub script\nSpearPillar_Indoor1_Sinnoh_EventScript_Obj15$"

SpearPillar_Indoor1_Sinnoh_EventScript_Trigger0::
    goto_if_set FLAG_RECEIVED_GIRATINA, SpearPillar_Indoor1_Sinnoh_EventScript_Trigger0_Done
    lock
    playfanfare MUS_OBTAIN_ITEM
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Trigger0_Text, MSGBOX_DEFAULT
    waitfanfare
    closemessage
    givemon SPECIES_ALAKAZAM, 60, ITEM_ALAKAZITE, , , , , , , , , , , , , , , , , MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL, MOVE_RECOVER
    givemon SPECIES_TOXICROAK, 60, ITEM_BLACK_SLUDGE, , , , , , , , , , , , , , , , , MOVE_GUNK_SHOT, MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE
    givemon SPECIES_BRONZONG, 60, ITEM_LEFTOVERS, , , , , , , , , , , , , , , , , MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_EARTHQUAKE, MOVE_STEALTH_ROCK
    givemon SPECIES_CROBAT, 60, ITEM_BRIGHT_POWDER, , , , , , , , , , , , , , , , , MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_U_TURN, MOVE_ROOST
    givemon SPECIES_GENGAR, 60, ITEM_CHOICE_SPECS, , , , , , , , , , , , , , , , , MOVE_SHADOW_BALL, MOVE_SLUDGE_WAVE, MOVE_FOCUS_BLAST, MOVE_TRICK
    givemon SPECIES_WEAVILE, 62, ITEM_LIFE_ORB, , , , , , , , , , , , , , , , , MOVE_KNOCK_OFF, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_SWORDS_DANCE
    additem ITEM_MEGA_RING, 1
    setflag FLAG_SYS_POKEMON_GET
    setflag FLAG_SYS_POKEDEX_GET
    setflag FLAG_RECEIVED_GIRATINA
    setflag FLAG_BADGE01_GET
    setflag FLAG_BADGE02_GET
    setflag FLAG_BADGE03_GET
    setflag FLAG_BADGE04_GET
    setflag FLAG_BADGE05_GET
    setflag FLAG_BADGE06_GET
    setflag FLAG_BADGE07_GET
    setflag FLAG_BADGE08_GET
    settrainerflag TRAINER_GALACTIC_GRUNT_SPEAR_PILLAR
    settrainerflag TRAINER_GALACTIC_GRUNT_SPEAR_PILLAR_2
    settrainerflag TRAINER_SINNOH_MC
    callnative UpdateFollowingPokemon
    release
SpearPillar_Indoor1_Sinnoh_EventScript_Trigger0_Done:
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Trigger0_Text:
    .string "You found your Pokémon party!$"

SpearPillar_Indoor1_Sinnoh_EventScript_Trigger1::
    lock
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Trigger1_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Trigger1_Text:
    .string "TODO: Stub script\nSpearPillar_Indoor1_Sinnoh_EventScript_Trigger1$"

SpearPillar_Indoor1_Sinnoh_EventScript_Sign0::
    lock
    msgbox SpearPillar_Indoor1_Sinnoh_EventScript_Sign0_Text, MSGBOX_DEFAULT
    release
    end

SpearPillar_Indoor1_Sinnoh_EventScript_Sign0_Text:
    .string "TODO: Stub script\nSpearPillar_Indoor1_Sinnoh_EventScript_Sign0$"
