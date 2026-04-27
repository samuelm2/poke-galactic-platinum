#ifndef GUARD_CONSTANTS_EVENT_OBJECTS_H
#define GUARD_CONSTANTS_EVENT_OBJECTS_H

#include "constants/global.h"
#include "constants/map_event_ids.h"

#define PLAYER_AVATAR_GFX_MALE_NORMAL     (IS_FRLG ? OBJ_EVENT_GFX_RED_NORMAL     : OBJ_EVENT_GFX_BRENDAN_NORMAL)
#define PLAYER_AVATAR_GFX_MALE_MACH_BIKE  (IS_FRLG ? OBJ_EVENT_GFX_RED_BIKE       : OBJ_EVENT_GFX_BRENDAN_MACH_BIKE)
#define PLAYER_AVATAR_GFX_MALE_ACRO_BIKE  (IS_FRLG ? OBJ_EVENT_GFX_RED_BIKE       : OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE)
#define PLAYER_AVATAR_GFX_MALE_SURFING    (IS_FRLG ? OBJ_EVENT_GFX_RED_SURF       : OBJ_EVENT_GFX_BRENDAN_SURFING)
#define PLAYER_AVATAR_GFX_MALE_UNDERWATER (IS_FRLG ? OBJ_EVENT_GFX_RED_SURF       : OBJ_EVENT_GFX_BRENDAN_UNDERWATER)
#define PLAYER_AVATAR_GFX_MALE_FIELD_MOVE (IS_FRLG ? OBJ_EVENT_GFX_RED_FIELD_MOVE : OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE)
#define PLAYER_AVATAR_GFX_MALE_FISHING    (IS_FRLG ? OBJ_EVENT_GFX_RED_FISH       : OBJ_EVENT_GFX_BRENDAN_FISHING)
#define PLAYER_AVATAR_GFX_MALE_WATERING   (IS_FRLG ? OBJ_EVENT_GFX_RED_FIELD_MOVE : OBJ_EVENT_GFX_BRENDAN_WATERING)
#define PLAYER_AVATAR_GFX_MALE_VSSEEKER   (IS_FRLG ? OBJ_EVENT_GFX_RED_VS_SEEKER  : OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE)
#define PLAYER_AVATAR_GFX_FEMALE_NORMAL     (IS_FRLG ? OBJ_EVENT_GFX_GREEN_NORMAL     : OBJ_EVENT_GFX_MAY_NORMAL)
#define PLAYER_AVATAR_GFX_FEMALE_MACH_BIKE  (IS_FRLG ? OBJ_EVENT_GFX_GREEN_BIKE       : OBJ_EVENT_GFX_MAY_MACH_BIKE)
#define PLAYER_AVATAR_GFX_FEMALE_ACRO_BIKE  (IS_FRLG ? OBJ_EVENT_GFX_GREEN_BIKE       : OBJ_EVENT_GFX_MAY_ACRO_BIKE)
#define PLAYER_AVATAR_GFX_FEMALE_SURFING    (IS_FRLG ? OBJ_EVENT_GFX_GREEN_SURF       : OBJ_EVENT_GFX_MAY_SURFING)
#define PLAYER_AVATAR_GFX_FEMALE_UNDERWATER (IS_FRLG ? OBJ_EVENT_GFX_GREEN_SURF       : OBJ_EVENT_GFX_MAY_UNDERWATER)
#define PLAYER_AVATAR_GFX_FEMALE_FIELD_MOVE (IS_FRLG ? OBJ_EVENT_GFX_GREEN_FIELD_MOVE : OBJ_EVENT_GFX_MAY_FIELD_MOVE)
#define PLAYER_AVATAR_GFX_FEMALE_FISHING    (IS_FRLG ? OBJ_EVENT_GFX_GREEN_FISH       : OBJ_EVENT_GFX_MAY_FISHING)
#define PLAYER_AVATAR_GFX_FEMALE_WATERING   (IS_FRLG ? OBJ_EVENT_GFX_GREEN_FIELD_MOVE : OBJ_EVENT_GFX_MAY_WATERING)
#define PLAYER_AVATAR_GFX_FEMALE_VSSEEKER   (IS_FRLG ? OBJ_EVENT_GFX_GREEN_VS_SEEKER  : OBJ_EVENT_GFX_MAY_FIELD_MOVE)

#define OBJ_EVENT_GFX_BRENDAN_NORMAL               0
#define OBJ_EVENT_GFX_BRENDAN_MACH_BIKE            1
#define OBJ_EVENT_GFX_BRENDAN_SURFING              2
#define OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE           3
#define OBJ_EVENT_GFX_QUINTY_PLUMP                 4
#define OBJ_EVENT_GFX_NINJA_BOY                    5
#define OBJ_EVENT_GFX_TWIN                         6
#define OBJ_EVENT_GFX_BOY_1                        7
#define OBJ_EVENT_GFX_GIRL_1                       8
#define OBJ_EVENT_GFX_BOY_2                        9
#define OBJ_EVENT_GFX_GIRL_2                      10
#define OBJ_EVENT_GFX_LITTLE_BOY                  11
#define OBJ_EVENT_GFX_LITTLE_GIRL                 12
#define OBJ_EVENT_GFX_BOY_3                       13
#define OBJ_EVENT_GFX_GIRL_3                      14
#define OBJ_EVENT_GFX_RICH_BOY                    15
#define OBJ_EVENT_GFX_WOMAN_1                     16
#define OBJ_EVENT_GFX_FAT_MAN                     17
#define OBJ_EVENT_GFX_POKEFAN_F                   18
#define OBJ_EVENT_GFX_MAN_1                       19
#define OBJ_EVENT_GFX_WOMAN_2                     20
#define OBJ_EVENT_GFX_EXPERT_M                    21
#define OBJ_EVENT_GFX_EXPERT_F                    22
#define OBJ_EVENT_GFX_MAN_2                       23
#define OBJ_EVENT_GFX_WOMAN_3                     24
#define OBJ_EVENT_GFX_POKEFAN_M                   25
#define OBJ_EVENT_GFX_WOMAN_4                     26
#define OBJ_EVENT_GFX_COOK                        27
#define OBJ_EVENT_GFX_LINK_RECEPTIONIST           28
#define OBJ_EVENT_GFX_OLD_MAN                     29
#define OBJ_EVENT_GFX_OLD_WOMAN                   30
#define OBJ_EVENT_GFX_CAMPER                      31
#define OBJ_EVENT_GFX_PICNICKER                   32
#define OBJ_EVENT_GFX_MAN_3                       33
#define OBJ_EVENT_GFX_WOMAN_5                     34
#define OBJ_EVENT_GFX_YOUNGSTER                   35
#define OBJ_EVENT_GFX_BUG_CATCHER                 36
#define OBJ_EVENT_GFX_PSYCHIC_M                   37
#define OBJ_EVENT_GFX_SCHOOL_KID_M                38
#define OBJ_EVENT_GFX_MANIAC                      39
#define OBJ_EVENT_GFX_HEX_MANIAC                  40
#define OBJ_EVENT_GFX_RAYQUAZA_STILL              41
#define OBJ_EVENT_GFX_SWIMMER_M                   42
#define OBJ_EVENT_GFX_SWIMMER_F                   43
#define OBJ_EVENT_GFX_BLACK_BELT                  44
#define OBJ_EVENT_GFX_BEAUTY                      45
#define OBJ_EVENT_GFX_SCIENTIST_1                 46
#define OBJ_EVENT_GFX_LASS                        47
#define OBJ_EVENT_GFX_GENTLEMAN                   48
#define OBJ_EVENT_GFX_SAILOR                      49
#define OBJ_EVENT_GFX_FISHERMAN                   50
#define OBJ_EVENT_GFX_RUNNING_TRIATHLETE_M        51
#define OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F        52
#define OBJ_EVENT_GFX_TUBER_F                     53
#define OBJ_EVENT_GFX_TUBER_M                     54
#define OBJ_EVENT_GFX_HIKER                       55
#define OBJ_EVENT_GFX_CYCLING_TRIATHLETE_M        56
#define OBJ_EVENT_GFX_CYCLING_TRIATHLETE_F        57
#define OBJ_EVENT_GFX_NURSE                       58
#define OBJ_EVENT_GFX_ITEM_BALL                   59
#define OBJ_EVENT_GFX_BERRY_TREE                  60
#define OBJ_EVENT_GFX_BERRY_TREE_EARLY_STAGES     61
#define OBJ_EVENT_GFX_BERRY_TREE_LATE_STAGES      62
#define OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE           63
#define OBJ_EVENT_GFX_PROF_BIRCH                  64
#define OBJ_EVENT_GFX_MAN_4                       65
#define OBJ_EVENT_GFX_MAN_5                       66
#define OBJ_EVENT_GFX_REPORTER_M                  67
#define OBJ_EVENT_GFX_REPORTER_F                  68
#define OBJ_EVENT_GFX_BARD                        69
#define OBJ_EVENT_GFX_ANABEL                      70
#define OBJ_EVENT_GFX_TUCKER                      71
#define OBJ_EVENT_GFX_GRETA                       72
#define OBJ_EVENT_GFX_SPENSER                     73
#define OBJ_EVENT_GFX_NOLAND                      74
#define OBJ_EVENT_GFX_LUCY                        75
#define OBJ_EVENT_GFX_UNUSED_NATU_DOLL            76
#define OBJ_EVENT_GFX_UNUSED_MAGNEMITE_DOLL       77
#define OBJ_EVENT_GFX_UNUSED_SQUIRTLE_DOLL        78
#define OBJ_EVENT_GFX_UNUSED_WOOPER_DOLL          79
#define OBJ_EVENT_GFX_UNUSED_PIKACHU_DOLL         80
#define OBJ_EVENT_GFX_UNUSED_PORYGON2_DOLL        81
#define OBJ_EVENT_GFX_CUTTABLE_TREE               82
#define OBJ_EVENT_GFX_MART_EMPLOYEE               83
#define OBJ_EVENT_GFX_ROOFTOP_SALE_WOMAN          84
#define OBJ_EVENT_GFX_TEALA                       85
#define OBJ_EVENT_GFX_BREAKABLE_ROCK              86
#define OBJ_EVENT_GFX_PUSHABLE_BOULDER            87
#define OBJ_EVENT_GFX_MR_BRINEYS_BOAT             88
#define OBJ_EVENT_GFX_MAY_NORMAL                  89
#define OBJ_EVENT_GFX_MAY_MACH_BIKE               90
#define OBJ_EVENT_GFX_MAY_ACRO_BIKE               91
#define OBJ_EVENT_GFX_MAY_SURFING                 92
#define OBJ_EVENT_GFX_MAY_FIELD_MOVE              93
#define OBJ_EVENT_GFX_TRUCK                       94
#define OBJ_EVENT_GFX_VIGOROTH_CARRYING_BOX       95
#define OBJ_EVENT_GFX_VIGOROTH_FACING_AWAY        96
#define OBJ_EVENT_GFX_BIRCHS_BAG                  97
#define OBJ_EVENT_GFX_ZIGZAGOON_1                 98
#define OBJ_EVENT_GFX_ARTIST                      99
#define OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL       100
#define OBJ_EVENT_GFX_RIVAL_BRENDAN_MACH_BIKE    101
#define OBJ_EVENT_GFX_RIVAL_BRENDAN_ACRO_BIKE    102
#define OBJ_EVENT_GFX_RIVAL_BRENDAN_SURFING      103
#define OBJ_EVENT_GFX_RIVAL_BRENDAN_FIELD_MOVE   104
#define OBJ_EVENT_GFX_RIVAL_MAY_NORMAL           105
#define OBJ_EVENT_GFX_RIVAL_MAY_MACH_BIKE        106
#define OBJ_EVENT_GFX_RIVAL_MAY_ACRO_BIKE        107
#define OBJ_EVENT_GFX_RIVAL_MAY_SURFING          108
#define OBJ_EVENT_GFX_RIVAL_MAY_FIELD_MOVE       109
#define OBJ_EVENT_GFX_CAMERAMAN                  110
#define OBJ_EVENT_GFX_BRENDAN_UNDERWATER         111
#define OBJ_EVENT_GFX_MAY_UNDERWATER             112
#define OBJ_EVENT_GFX_MOVING_BOX                 113
#define OBJ_EVENT_GFX_CABLE_CAR                  114
#define OBJ_EVENT_GFX_SCIENTIST_2                115
#define OBJ_EVENT_GFX_DEVON_EMPLOYEE             116
#define OBJ_EVENT_GFX_AQUA_MEMBER_M              117
#define OBJ_EVENT_GFX_AQUA_MEMBER_F              118
#define OBJ_EVENT_GFX_MAGMA_MEMBER_M             119
#define OBJ_EVENT_GFX_MAGMA_MEMBER_F             120
#define OBJ_EVENT_GFX_SIDNEY                     121
#define OBJ_EVENT_GFX_PHOEBE                     122
#define OBJ_EVENT_GFX_GLACIA                     123
#define OBJ_EVENT_GFX_DRAKE                      124
#define OBJ_EVENT_GFX_ROXANNE                    125
#define OBJ_EVENT_GFX_BRAWLY                     126
#define OBJ_EVENT_GFX_WATTSON                    127
#define OBJ_EVENT_GFX_FLANNERY                   128
#define OBJ_EVENT_GFX_NORMAN                     129
#define OBJ_EVENT_GFX_WINONA                     130
#define OBJ_EVENT_GFX_LIZA                       131
#define OBJ_EVENT_GFX_TATE                       132
#define OBJ_EVENT_GFX_WALLACE                    133
#define OBJ_EVENT_GFX_STEVEN                     134
#define OBJ_EVENT_GFX_WALLY                      135
#define OBJ_EVENT_GFX_LITTLE_BOY_3               136
#define OBJ_EVENT_GFX_BRENDAN_FISHING            137
#define OBJ_EVENT_GFX_MAY_FISHING                138
#define OBJ_EVENT_GFX_HOT_SPRINGS_OLD_WOMAN      139
#define OBJ_EVENT_GFX_SS_TIDAL                   140
#define OBJ_EVENT_GFX_SUBMARINE_SHADOW           141
#define OBJ_EVENT_GFX_PICHU_DOLL                 142
#define OBJ_EVENT_GFX_PIKACHU_DOLL               143
#define OBJ_EVENT_GFX_MARILL_DOLL                144
#define OBJ_EVENT_GFX_TOGEPI_DOLL                145
#define OBJ_EVENT_GFX_CYNDAQUIL_DOLL             146
#define OBJ_EVENT_GFX_CHIKORITA_DOLL             147
#define OBJ_EVENT_GFX_TOTODILE_DOLL              148
#define OBJ_EVENT_GFX_JIGGLYPUFF_DOLL            149
#define OBJ_EVENT_GFX_MEOWTH_DOLL                150
#define OBJ_EVENT_GFX_CLEFAIRY_DOLL              151
#define OBJ_EVENT_GFX_DITTO_DOLL                 152
#define OBJ_EVENT_GFX_SMOOCHUM_DOLL              153
#define OBJ_EVENT_GFX_TREECKO_DOLL               154
#define OBJ_EVENT_GFX_TORCHIC_DOLL               155
#define OBJ_EVENT_GFX_MUDKIP_DOLL                156
#define OBJ_EVENT_GFX_DUSKULL_DOLL               157
#define OBJ_EVENT_GFX_WYNAUT_DOLL                158
#define OBJ_EVENT_GFX_BALTOY_DOLL                159
#define OBJ_EVENT_GFX_KECLEON_DOLL               160
#define OBJ_EVENT_GFX_AZURILL_DOLL               161
#define OBJ_EVENT_GFX_SKITTY_DOLL                162
#define OBJ_EVENT_GFX_SWABLU_DOLL                163
#define OBJ_EVENT_GFX_GULPIN_DOLL                164
#define OBJ_EVENT_GFX_LOTAD_DOLL                 165
#define OBJ_EVENT_GFX_SEEDOT_DOLL                166
#define OBJ_EVENT_GFX_PIKA_CUSHION               167
#define OBJ_EVENT_GFX_ROUND_CUSHION              168
#define OBJ_EVENT_GFX_KISS_CUSHION               169
#define OBJ_EVENT_GFX_ZIGZAG_CUSHION             170
#define OBJ_EVENT_GFX_SPIN_CUSHION               171
#define OBJ_EVENT_GFX_DIAMOND_CUSHION            172
#define OBJ_EVENT_GFX_BALL_CUSHION               173
#define OBJ_EVENT_GFX_GRASS_CUSHION              174
#define OBJ_EVENT_GFX_FIRE_CUSHION               175
#define OBJ_EVENT_GFX_WATER_CUSHION              176
#define OBJ_EVENT_GFX_BIG_SNORLAX_DOLL           177
#define OBJ_EVENT_GFX_BIG_RHYDON_DOLL            178
#define OBJ_EVENT_GFX_BIG_LAPRAS_DOLL            179
#define OBJ_EVENT_GFX_BIG_VENUSAUR_DOLL          180
#define OBJ_EVENT_GFX_BIG_CHARIZARD_DOLL         181
#define OBJ_EVENT_GFX_BIG_BLASTOISE_DOLL         182
#define OBJ_EVENT_GFX_BIG_WAILMER_DOLL           183
#define OBJ_EVENT_GFX_BIG_REGIROCK_DOLL          184
#define OBJ_EVENT_GFX_BIG_REGICE_DOLL            185
#define OBJ_EVENT_GFX_BIG_REGISTEEL_DOLL         186
#define OBJ_EVENT_GFX_LATIAS                     187
#define OBJ_EVENT_GFX_LATIOS                     188
#define OBJ_EVENT_GFX_GAMEBOY_KID                189
#define OBJ_EVENT_GFX_CONTEST_JUDGE              190
#define OBJ_EVENT_GFX_BRENDAN_WATERING           191
#define OBJ_EVENT_GFX_MAY_WATERING               192
#define OBJ_EVENT_GFX_BRENDAN_DECORATING         193
#define OBJ_EVENT_GFX_MAY_DECORATING             194
#define OBJ_EVENT_GFX_ARCHIE                     195
#define OBJ_EVENT_GFX_MAXIE                      196
#define OBJ_EVENT_GFX_KYOGRE_FRONT               197
#define OBJ_EVENT_GFX_GROUDON_FRONT              198
#define OBJ_EVENT_GFX_FOSSIL                     199
#define OBJ_EVENT_GFX_REGIROCK                   200
#define OBJ_EVENT_GFX_REGICE                     201
#define OBJ_EVENT_GFX_REGISTEEL                  202
#define OBJ_EVENT_GFX_SKITTY                     203
#define OBJ_EVENT_GFX_KECLEON                    204
#define OBJ_EVENT_GFX_KYOGRE_ASLEEP              205
#define OBJ_EVENT_GFX_GROUDON_ASLEEP             206
#define OBJ_EVENT_GFX_RAYQUAZA                   207
#define OBJ_EVENT_GFX_ZIGZAGOON_2                208
#define OBJ_EVENT_GFX_PIKACHU                    209
#define OBJ_EVENT_GFX_AZUMARILL                  210
#define OBJ_EVENT_GFX_WINGULL                    211
#define OBJ_EVENT_GFX_KECLEON_BRIDGE_SHADOW      212
#define OBJ_EVENT_GFX_TUBER_M_SWIMMING           213
#define OBJ_EVENT_GFX_AZURILL                    214
#define OBJ_EVENT_GFX_MOM                        215
#define OBJ_EVENT_GFX_LINK_BRENDAN               216
#define OBJ_EVENT_GFX_LINK_MAY                   217
#define OBJ_EVENT_GFX_JUAN                       218
#define OBJ_EVENT_GFX_SCOTT                      219
#define OBJ_EVENT_GFX_POOCHYENA                  220
#define OBJ_EVENT_GFX_KYOGRE_SIDE                221
#define OBJ_EVENT_GFX_GROUDON_SIDE               222
#define OBJ_EVENT_GFX_MYSTERY_GIFT_MAN           223
#define OBJ_EVENT_GFX_TRICK_HOUSE_STATUE         224
#define OBJ_EVENT_GFX_KIRLIA                     225
#define OBJ_EVENT_GFX_DUSCLOPS                   226
#define OBJ_EVENT_GFX_UNION_ROOM_NURSE           227
#define OBJ_EVENT_GFX_SUDOWOODO                  228
#define OBJ_EVENT_GFX_MEW                        229
#define OBJ_EVENT_GFX_RED                        230
#define OBJ_EVENT_GFX_LEAF                       231
#define OBJ_EVENT_GFX_DEOXYS                     232
#define OBJ_EVENT_GFX_DEOXYS_TRIANGLE            233
#define OBJ_EVENT_GFX_BRANDON                    234
#define OBJ_EVENT_GFX_LINK_RS_BRENDAN            235
#define OBJ_EVENT_GFX_LINK_RS_MAY                236
#define OBJ_EVENT_GFX_LUGIA                      237
#define OBJ_EVENT_GFX_HOOH                       238
#define OBJ_EVENT_GFX_POKE_BALL                  239
#define OBJ_EVENT_GFX_OW_MON                     240
#define OBJ_EVENT_GFX_LIGHT_SPRITE               241
#define OBJ_EVENT_GFX_APRICORN_TREE              242

// FRLG objects
#define OBJ_EVENT_GFX_RED_NORMAL                 243
#define OBJ_EVENT_GFX_RED_BIKE                   244
#define OBJ_EVENT_GFX_RED_SURF                   245
#define OBJ_EVENT_GFX_RED_FIELD_MOVE             246
#define OBJ_EVENT_GFX_RED_FISH                   247
#define OBJ_EVENT_GFX_RED_VS_SEEKER              248
#define OBJ_EVENT_GFX_RED_VS_SEEKER_BIKE         249
#define OBJ_EVENT_GFX_GREEN_NORMAL               251
#define OBJ_EVENT_GFX_GREEN_BIKE                 252
#define OBJ_EVENT_GFX_GREEN_SURF                 253
#define OBJ_EVENT_GFX_GREEN_FIELD_MOVE           254
#define OBJ_EVENT_GFX_GREEN_FISH                 255
#define OBJ_EVENT_GFX_GREEN_VS_SEEKER            256
#define OBJ_EVENT_GFX_GREEN_VS_SEEKER_BIKE       257
#define OBJ_EVENT_GFX_BOY                        258
#define OBJ_EVENT_GFX_BATTLE_GIRL                259
#define OBJ_EVENT_GFX_MAN                        260
#define OBJ_EVENT_GFX_ROCKER                     261
#define OBJ_EVENT_GFX_BALDING_MAN                262
#define OBJ_EVENT_GFX_OLD_MAN_1                  263
#define OBJ_EVENT_GFX_OLD_MAN_2                  264
#define OBJ_EVENT_GFX_OLD_MAN_LYING_DOWN         265
#define OBJ_EVENT_GFX_TUBER_M_WATER              266
#define OBJ_EVENT_GFX_TUBER_M_LAND               267
#define OBJ_EVENT_GFX_COOLTRAINER_M              268
#define OBJ_EVENT_GFX_COOLTRAINER_F              269
#define OBJ_EVENT_GFX_SWIMMER_M_WATER            270
#define OBJ_EVENT_GFX_SWIMMER_F_WATER            271
#define OBJ_EVENT_GFX_SWIMMER_M_LAND             272
#define OBJ_EVENT_GFX_SWIMMER_F_LAND             273
#define OBJ_EVENT_GFX_WORKER_M                   274
#define OBJ_EVENT_GFX_WORKER_F                   275
#define OBJ_EVENT_GFX_ROCKET_M                   276
#define OBJ_EVENT_GFX_ROCKET_F                   277
#define OBJ_EVENT_GFX_GBA_KID                    278
#define OBJ_EVENT_GFX_SUPER_NERD                 279
#define OBJ_EVENT_GFX_BIKER                      280
#define OBJ_EVENT_GFX_BLACKBELT                  281
#define OBJ_EVENT_GFX_SCIENTIST                  282
#define OBJ_EVENT_GFX_FISHER                     283
#define OBJ_EVENT_GFX_CHANNELER                  284
#define OBJ_EVENT_GFX_CHEF                       285
#define OBJ_EVENT_GFX_POLICEMAN                  286
#define OBJ_EVENT_GFX_CAPTAIN                    287
#define OBJ_EVENT_GFX_CABLE_CLUB_RECEPTIONIST    288
#define OBJ_EVENT_GFX_UNION_ROOM_RECEPTIONIST    289
#define OBJ_EVENT_GFX_CLERK                      290
#define OBJ_EVENT_GFX_MG_DELIVERYMAN             291
#define OBJ_EVENT_GFX_TRAINER_TOWER_DUDE         292
#define OBJ_EVENT_GFX_PROF_OAK                   293
#define OBJ_EVENT_GFX_BLUE                       294
#define OBJ_EVENT_GFX_BILL                       295
#define OBJ_EVENT_GFX_LANCE                      296
#define OBJ_EVENT_GFX_AGATHA                     297
#define OBJ_EVENT_GFX_DAISY                      298
#define OBJ_EVENT_GFX_LORELEI                    299
#define OBJ_EVENT_GFX_MR_FUJI                    300
#define OBJ_EVENT_GFX_BRUNO                      301
#define OBJ_EVENT_GFX_BROCK                      302
#define OBJ_EVENT_GFX_MISTY                      303
#define OBJ_EVENT_GFX_LT_SURGE                   304
#define OBJ_EVENT_GFX_ERIKA                      305
#define OBJ_EVENT_GFX_KOGA                       306
#define OBJ_EVENT_GFX_SABRINA                    307
#define OBJ_EVENT_GFX_BLAINE                     308
#define OBJ_EVENT_GFX_GIOVANNI                   309
#define OBJ_EVENT_GFX_CELIO                      310
#define OBJ_EVENT_GFX_TEACHY_TV_HOST             311
#define OBJ_EVENT_GFX_GYM_GUY                    312
#define OBJ_EVENT_GFX_TOWN_MAP                   313
#define OBJ_EVENT_GFX_POKEDEX                    314
#define OBJ_EVENT_GFX_LITTLE_BOY_FRLG            315
#define OBJ_EVENT_GFX_LITTLE_GIRL_FRLG           316
#define OBJ_EVENT_GFX_YOUNGSTER_FRLG             317
#define OBJ_EVENT_GFX_BUG_CATCHER_FRLG           318
#define OBJ_EVENT_GFX_LASS_FRLG                  319
#define OBJ_EVENT_GFX_WOMAN_1_FRLG               320
#define OBJ_EVENT_GFX_FAT_MAN_FRLG               321
#define OBJ_EVENT_GFX_WOMAN_2_FRLG               322
#define OBJ_EVENT_GFX_BEAUTY_FRLG                323
#define OBJ_EVENT_GFX_WOMAN_3_FRLG               324
#define OBJ_EVENT_GFX_OLD_WOMAN_FRLG             325
#define OBJ_EVENT_GFX_CAMPER_FRLG                326
#define OBJ_EVENT_GFX_PICNICKER_FRLG             327
#define OBJ_EVENT_GFX_MOM_FRLG                   328
#define OBJ_EVENT_GFX_TUBER_F_FRLG               329
#define OBJ_EVENT_GFX_HIKER_FRLG                 330
#define OBJ_EVENT_GFX_GENTLEMAN_FRLG             331
#define OBJ_EVENT_GFX_SAILOR_FRLG                332
#define OBJ_EVENT_GFX_NURSE_FRLG                 333
#define OBJ_EVENT_GFX_FOSSIL_FRLG                334
#define OBJ_EVENT_GFX_RUBY                       335
#define OBJ_EVENT_GFX_SAPPHIRE                   336
#define OBJ_EVENT_GFX_OLD_AMBER                  337
#define OBJ_EVENT_GFX_GYM_SIGN                   338
#define OBJ_EVENT_GFX_SIGN                       339
#define OBJ_EVENT_GFX_TRAINER_TIPS               340
#define OBJ_EVENT_GFX_CLIPBOARD                  341
#define OBJ_EVENT_GFX_METEORITE                  342
#define OBJ_EVENT_GFX_LAPRAS_DOLL                343
#define OBJ_EVENT_GFX_SEAGALLOP                  344
#define OBJ_EVENT_GFX_SNORLAX                    345
#define OBJ_EVENT_GFX_SPEAROW                    346
#define OBJ_EVENT_GFX_CUBONE                     347
#define OBJ_EVENT_GFX_POLIWRATH                  348
#define OBJ_EVENT_GFX_CLEFAIRY                   349
#define OBJ_EVENT_GFX_PIDGEOT                    350
#define OBJ_EVENT_GFX_JIGGLYPUFF                 351
#define OBJ_EVENT_GFX_PIDGEY                     352
#define OBJ_EVENT_GFX_CHANSEY                    353
#define OBJ_EVENT_GFX_OMANYTE                    354
#define OBJ_EVENT_GFX_KANGASKHAN                 355
#define OBJ_EVENT_GFX_PIKACHU_FRLG               356
#define OBJ_EVENT_GFX_PSYDUCK                    357
#define OBJ_EVENT_GFX_NIDORAN_F                  358
#define OBJ_EVENT_GFX_NIDORAN_M                  359
#define OBJ_EVENT_GFX_NIDORINO                   360
#define OBJ_EVENT_GFX_MEOWTH                     361
#define OBJ_EVENT_GFX_SEEL                       362
#define OBJ_EVENT_GFX_VOLTORB                    363
#define OBJ_EVENT_GFX_SLOWPOKE                   364
#define OBJ_EVENT_GFX_SLOWBRO                    365
#define OBJ_EVENT_GFX_MACHOP                     366
#define OBJ_EVENT_GFX_WIGGLYTUFF                 367
#define OBJ_EVENT_GFX_DODUO                      368
#define OBJ_EVENT_GFX_FEAROW                     369
#define OBJ_EVENT_GFX_MACHOKE                    370
#define OBJ_EVENT_GFX_LAPRAS                     371
#define OBJ_EVENT_GFX_ZAPDOS                     372
#define OBJ_EVENT_GFX_MOLTRES                    373
#define OBJ_EVENT_GFX_ARTICUNO                   374
#define OBJ_EVENT_GFX_MEWTWO                     375
#define OBJ_EVENT_GFX_ENTEI                      376
#define OBJ_EVENT_GFX_SUICUNE                    377
#define OBJ_EVENT_GFX_RAIKOU                     378
#define OBJ_EVENT_GFX_CELEBI                     379
#define OBJ_EVENT_GFX_KABUTO                     380
#define OBJ_EVENT_GFX_DEOXYS_D                   381
#define OBJ_EVENT_GFX_DEOXYS_A                   382
#define OBJ_EVENT_GFX_DEOXYS_N                   383
#define OBJ_EVENT_GFX_SS_ANNE                    384
#define OBJ_EVENT_GFX_PUSHABLE_BOULDER_FRLG      385
#define OBJ_EVENT_GFX_CUTTABLE_TREE_FRLG         386
#define OBJ_EVENT_GFX_BREAKABLE_ROCK_FRLG        387

// FRLG equivalents

// #define OBJ_EVENT_GFX_MEW OBJ_EVENT_GFX_NINJA_BOY
// #define OBJ_EVENT_GFX_LUGIA OBJ_EVENT_GFX_NINJA_BOY



// NOTE: The maximum amount of object events has been expanded from 255 to 65535.
// Since dynamic graphics ids still require at least 16 free values, the actual limit
// is 65519, but even considering follower Pokémon, this should be more than enough :)
// --- BEGIN WIRE_TO_DECOMP_SPRITES sinnoh ---
#define OBJ_EVENT_GFX_SINNOH_4                        388
#define OBJ_EVENT_GFX_SINNOH_5                        389
#define OBJ_EVENT_GFX_SINNOH_6                        390
#define OBJ_EVENT_GFX_SINNOH_7                        391
#define OBJ_EVENT_GFX_SINNOH_8                        392
#define OBJ_EVENT_GFX_SINNOH_9                        393
#define OBJ_EVENT_GFX_SINNOH_10                       394
#define OBJ_EVENT_GFX_SINNOH_11                       395
#define OBJ_EVENT_GFX_SINNOH_12                       396
#define OBJ_EVENT_GFX_SINNOH_13                       397
#define OBJ_EVENT_GFX_SINNOH_14                       398
#define OBJ_EVENT_GFX_SINNOH_15                       399
#define OBJ_EVENT_GFX_SINNOH_16                       400
#define OBJ_EVENT_GFX_SINNOH_17                       401
#define OBJ_EVENT_GFX_SINNOH_18                       402
#define OBJ_EVENT_GFX_SINNOH_19                       403
#define OBJ_EVENT_GFX_SINNOH_20                       404
#define OBJ_EVENT_GFX_SINNOH_21                       405
#define OBJ_EVENT_GFX_SINNOH_22                       406
#define OBJ_EVENT_GFX_SINNOH_23                       407
#define OBJ_EVENT_GFX_SINNOH_24                       408
#define OBJ_EVENT_GFX_SINNOH_25                       409
#define OBJ_EVENT_GFX_SINNOH_26                       410
#define OBJ_EVENT_GFX_SINNOH_27                       411
#define OBJ_EVENT_GFX_SINNOH_28                       412
#define OBJ_EVENT_GFX_SINNOH_29                       413
#define OBJ_EVENT_GFX_SINNOH_30                       414
#define OBJ_EVENT_GFX_SINNOH_31                       415
#define OBJ_EVENT_GFX_SINNOH_32                       416
#define OBJ_EVENT_GFX_SINNOH_33                       417
#define OBJ_EVENT_GFX_SINNOH_34                       418
#define OBJ_EVENT_GFX_SINNOH_35                       419
#define OBJ_EVENT_GFX_SINNOH_36                       420
#define OBJ_EVENT_GFX_SINNOH_37                       421
#define OBJ_EVENT_GFX_SINNOH_38                       422
#define OBJ_EVENT_GFX_SINNOH_39                       423
#define OBJ_EVENT_GFX_SINNOH_40                       424
#define OBJ_EVENT_GFX_SINNOH_41                       425
#define OBJ_EVENT_GFX_SINNOH_42                       426
#define OBJ_EVENT_GFX_SINNOH_43                       427
#define OBJ_EVENT_GFX_SINNOH_44                       428
#define OBJ_EVENT_GFX_SINNOH_45                       429
#define OBJ_EVENT_GFX_SINNOH_46                       430
#define OBJ_EVENT_GFX_SINNOH_47                       431
#define OBJ_EVENT_GFX_SINNOH_48                       432
#define OBJ_EVENT_GFX_SINNOH_49                       433
#define OBJ_EVENT_GFX_SINNOH_50                       434
#define OBJ_EVENT_GFX_SINNOH_51                       435
#define OBJ_EVENT_GFX_SINNOH_52                       436
#define OBJ_EVENT_GFX_SINNOH_53                       437
#define OBJ_EVENT_GFX_SINNOH_54                       438
#define OBJ_EVENT_GFX_SINNOH_55                       439
#define OBJ_EVENT_GFX_SINNOH_56                       440
#define OBJ_EVENT_GFX_SINNOH_57                       441
#define OBJ_EVENT_GFX_SINNOH_58                       442
#define OBJ_EVENT_GFX_SINNOH_59                       443
#define OBJ_EVENT_GFX_SINNOH_60                       444
#define OBJ_EVENT_GFX_SINNOH_61                       445
#define OBJ_EVENT_GFX_SINNOH_63                       446
#define OBJ_EVENT_GFX_SINNOH_64                       447
#define OBJ_EVENT_GFX_SINNOH_65                       448
#define OBJ_EVENT_GFX_SINNOH_66                       449
#define OBJ_EVENT_GFX_SINNOH_67                       450
#define OBJ_EVENT_GFX_SINNOH_68                       451
#define OBJ_EVENT_GFX_SINNOH_69                       452
#define OBJ_EVENT_GFX_SINNOH_70                       453
#define OBJ_EVENT_GFX_SINNOH_71                       454
#define OBJ_EVENT_GFX_SINNOH_72                       455
#define OBJ_EVENT_GFX_SINNOH_73                       456
#define OBJ_EVENT_GFX_SINNOH_74                       457
#define OBJ_EVENT_GFX_SINNOH_75                       458
#define OBJ_EVENT_GFX_SINNOH_76                       459
#define OBJ_EVENT_GFX_SINNOH_77                       460
#define OBJ_EVENT_GFX_SINNOH_78                       461
#define OBJ_EVENT_GFX_SINNOH_79                       462
#define OBJ_EVENT_GFX_SINNOH_80                       463
#define OBJ_EVENT_GFX_SINNOH_81                       464
#define OBJ_EVENT_GFX_SINNOH_82                       465
#define OBJ_EVENT_GFX_SINNOH_83                       466
#define OBJ_EVENT_GFX_SINNOH_84                       467
#define OBJ_EVENT_GFX_SINNOH_85                       468
#define OBJ_EVENT_GFX_SINNOH_86                       469
#define OBJ_EVENT_GFX_SINNOH_87                       470
#define OBJ_EVENT_GFX_SINNOH_88                       471
#define OBJ_EVENT_GFX_SINNOH_89                       472
#define OBJ_EVENT_GFX_SINNOH_90                       473
#define OBJ_EVENT_GFX_SINNOH_91                       474
#define OBJ_EVENT_GFX_SINNOH_92                       475
#define OBJ_EVENT_GFX_SINNOH_93                       476
#define OBJ_EVENT_GFX_SINNOH_94                       477
#define OBJ_EVENT_GFX_SINNOH_95                       478
#define OBJ_EVENT_GFX_SINNOH_96                       479
#define OBJ_EVENT_GFX_SINNOH_97                       480
#define OBJ_EVENT_GFX_SINNOH_98                       481
#define OBJ_EVENT_GFX_SINNOH_99                       482
#define OBJ_EVENT_GFX_SINNOH_100                      483
#define OBJ_EVENT_GFX_SINNOH_101                      484
#define OBJ_EVENT_GFX_SINNOH_102                      485
#define OBJ_EVENT_GFX_SINNOH_103                      486
#define OBJ_EVENT_GFX_SINNOH_104                      487
#define OBJ_EVENT_GFX_SINNOH_105                      488
#define OBJ_EVENT_GFX_SINNOH_106                      489
#define OBJ_EVENT_GFX_SINNOH_107                      490
#define OBJ_EVENT_GFX_SINNOH_108                      491
#define OBJ_EVENT_GFX_SINNOH_109                      492
#define OBJ_EVENT_GFX_SINNOH_110                      493
#define OBJ_EVENT_GFX_SINNOH_111                      494
#define OBJ_EVENT_GFX_SINNOH_112                      495
#define OBJ_EVENT_GFX_SINNOH_113                      496
#define OBJ_EVENT_GFX_SINNOH_114                      497
#define OBJ_EVENT_GFX_SINNOH_115                      498
#define OBJ_EVENT_GFX_SINNOH_116                      499
#define OBJ_EVENT_GFX_SINNOH_117                      500
#define OBJ_EVENT_GFX_SINNOH_118                      501
#define OBJ_EVENT_GFX_SINNOH_119                      502
#define OBJ_EVENT_GFX_SINNOH_120                      503
#define OBJ_EVENT_GFX_SINNOH_121                      504
#define OBJ_EVENT_GFX_SINNOH_122                      505
#define OBJ_EVENT_GFX_SINNOH_123                      506
#define OBJ_EVENT_GFX_SINNOH_124                      507
#define OBJ_EVENT_GFX_SINNOH_125                      508
#define OBJ_EVENT_GFX_SINNOH_126                      509
#define OBJ_EVENT_GFX_SINNOH_127                      510
#define OBJ_EVENT_GFX_SINNOH_128                      511
#define OBJ_EVENT_GFX_SINNOH_129                      512
#define OBJ_EVENT_GFX_SINNOH_130                      513
#define OBJ_EVENT_GFX_SINNOH_131                      514
#define OBJ_EVENT_GFX_SINNOH_132                      515
#define OBJ_EVENT_GFX_SINNOH_133                      516
#define OBJ_EVENT_GFX_SINNOH_134                      517
#define OBJ_EVENT_GFX_SINNOH_135                      518
#define OBJ_EVENT_GFX_SINNOH_136                      519
#define OBJ_EVENT_GFX_SINNOH_137                      520
#define OBJ_EVENT_GFX_SINNOH_138                      521
#define OBJ_EVENT_GFX_SINNOH_139                      522
#define OBJ_EVENT_GFX_SINNOH_142                      523
#define OBJ_EVENT_GFX_SINNOH_143                      524
#define OBJ_EVENT_GFX_SINNOH_144                      525
#define OBJ_EVENT_GFX_SINNOH_145                      526
#define OBJ_EVENT_GFX_SINNOH_146                      527
#define OBJ_EVENT_GFX_SINNOH_147                      528
#define OBJ_EVENT_GFX_SINNOH_148                      529
#define OBJ_EVENT_GFX_SINNOH_149                      530
#define OBJ_EVENT_GFX_SINNOH_150                      531
#define OBJ_EVENT_GFX_SINNOH_151                      532
#define OBJ_EVENT_GFX_SINNOH_152                      533
#define OBJ_EVENT_GFX_SINNOH_153                      534
#define OBJ_EVENT_GFX_SINNOH_154                      535
#define OBJ_EVENT_GFX_SINNOH_155                      536
#define OBJ_EVENT_GFX_SINNOH_156                      537
#define OBJ_EVENT_GFX_SINNOH_157                      538
#define OBJ_EVENT_GFX_SINNOH_158                      539
#define OBJ_EVENT_GFX_SINNOH_159                      540
#define OBJ_EVENT_GFX_SINNOH_160                      541
#define OBJ_EVENT_GFX_SINNOH_161                      542
#define OBJ_EVENT_GFX_SINNOH_162                      543
#define OBJ_EVENT_GFX_SINNOH_163                      544
#define OBJ_EVENT_GFX_SINNOH_164                      545
#define OBJ_EVENT_GFX_SINNOH_165                      546
#define OBJ_EVENT_GFX_SINNOH_166                      547
#define OBJ_EVENT_GFX_SINNOH_167                      548
#define OBJ_EVENT_GFX_SINNOH_168                      549
#define OBJ_EVENT_GFX_SINNOH_169                      550
#define OBJ_EVENT_GFX_SINNOH_170                      551
#define OBJ_EVENT_GFX_SINNOH_171                      552
#define OBJ_EVENT_GFX_SINNOH_172                      553
#define OBJ_EVENT_GFX_SINNOH_173                      554
#define OBJ_EVENT_GFX_SINNOH_174                      555
#define OBJ_EVENT_GFX_SINNOH_176                      556
#define OBJ_EVENT_GFX_SINNOH_177                      557
#define OBJ_EVENT_GFX_SINNOH_178                      558
#define OBJ_EVENT_GFX_SINNOH_179                      559
#define OBJ_EVENT_GFX_SINNOH_180                      560
#define OBJ_EVENT_GFX_SINNOH_181                      561
#define OBJ_EVENT_GFX_SINNOH_182                      562
#define OBJ_EVENT_GFX_SINNOH_183                      563
#define OBJ_EVENT_GFX_SINNOH_184                      564
#define OBJ_EVENT_GFX_SINNOH_185                      565
#define OBJ_EVENT_GFX_SINNOH_186                      566
#define OBJ_EVENT_GFX_SINNOH_189                      567
#define OBJ_EVENT_GFX_SINNOH_190                      568
#define OBJ_EVENT_GFX_SINNOH_195                      569
#define OBJ_EVENT_GFX_SINNOH_196                      570
#define OBJ_EVENT_GFX_SINNOH_197                      571
#define OBJ_EVENT_GFX_SINNOH_198                      572
#define OBJ_EVENT_GFX_SINNOH_199                      573
#define OBJ_EVENT_GFX_SINNOH_200                      574
#define OBJ_EVENT_GFX_SINNOH_201                      575
#define OBJ_EVENT_GFX_SINNOH_202                      576
#define OBJ_EVENT_GFX_SINNOH_203                      577
#define OBJ_EVENT_GFX_SINNOH_204                      578
#define OBJ_EVENT_GFX_SINNOH_205                      579
#define OBJ_EVENT_GFX_SINNOH_206                      580
#define OBJ_EVENT_GFX_SINNOH_207                      581
#define OBJ_EVENT_GFX_SINNOH_208                      582
#define OBJ_EVENT_GFX_SINNOH_209                      583
#define OBJ_EVENT_GFX_SINNOH_210                      584
#define OBJ_EVENT_GFX_SINNOH_211                      585
#define OBJ_EVENT_GFX_SINNOH_212                      586
#define OBJ_EVENT_GFX_SINNOH_213                      587
#define OBJ_EVENT_GFX_SINNOH_214                      588
#define OBJ_EVENT_GFX_SINNOH_215                      589
#define OBJ_EVENT_GFX_SINNOH_218                      590
#define OBJ_EVENT_GFX_SINNOH_219                      591
#define OBJ_EVENT_GFX_SINNOH_220                      592
#define OBJ_EVENT_GFX_SINNOH_221                      593
#define OBJ_EVENT_GFX_SINNOH_222                      594
#define OBJ_EVENT_GFX_SINNOH_223                      595
#define OBJ_EVENT_GFX_SINNOH_224                      596
#define OBJ_EVENT_GFX_SINNOH_225                      597
#define OBJ_EVENT_GFX_SINNOH_226                      598
#define OBJ_EVENT_GFX_SINNOH_227                      599
#define OBJ_EVENT_GFX_SINNOH_228                      600
#define OBJ_EVENT_GFX_SINNOH_229                      601
#define OBJ_EVENT_GFX_SINNOH_230                      602
#define OBJ_EVENT_GFX_SINNOH_231                      603
#define OBJ_EVENT_GFX_SINNOH_232                      604
#define OBJ_EVENT_GFX_SINNOH_233                      605
#define OBJ_EVENT_GFX_SINNOH_234                      606
#define OBJ_EVENT_GFX_SINNOH_235                      607
#define OBJ_EVENT_GFX_SINNOH_236                      608
#define OBJ_EVENT_GFX_SINNOH_237                      609
#define OBJ_EVENT_GFX_SINNOH_238                      610
#define OBJ_EVENT_GFX_SINNOH_240                      611
#define OBJ_EVENT_GFX_SINNOH_241                      612
#define OBJ_EVENT_GFX_SINNOH_242                      613
#define OBJ_EVENT_GFX_SINNOH_243                      614
#define OBJ_EVENT_GFX_SINNOH_244                      615
#define OBJ_EVENT_GFX_SINNOH_245                      616

// Sinnoh per-sprite palette tags
#define OBJ_EVENT_PAL_TAG_SINNOH_4                              0x1200
#define OBJ_EVENT_PAL_TAG_SINNOH_5                              0x1201
#define OBJ_EVENT_PAL_TAG_SINNOH_6                              0x1202
#define OBJ_EVENT_PAL_TAG_SINNOH_7                              0x1203
#define OBJ_EVENT_PAL_TAG_SINNOH_8                              0x1204
#define OBJ_EVENT_PAL_TAG_SINNOH_9                              0x1205
#define OBJ_EVENT_PAL_TAG_SINNOH_10                             0x1206
#define OBJ_EVENT_PAL_TAG_SINNOH_11                             0x1207
#define OBJ_EVENT_PAL_TAG_SINNOH_12                             0x1208
#define OBJ_EVENT_PAL_TAG_SINNOH_13                             0x1209
#define OBJ_EVENT_PAL_TAG_SINNOH_14                             0x120A
#define OBJ_EVENT_PAL_TAG_SINNOH_15                             0x120B
#define OBJ_EVENT_PAL_TAG_SINNOH_16                             0x120C
#define OBJ_EVENT_PAL_TAG_SINNOH_17                             0x120D
#define OBJ_EVENT_PAL_TAG_SINNOH_18                             0x120E
#define OBJ_EVENT_PAL_TAG_SINNOH_19                             0x120F
#define OBJ_EVENT_PAL_TAG_SINNOH_20                             0x1210
#define OBJ_EVENT_PAL_TAG_SINNOH_21                             0x1211
#define OBJ_EVENT_PAL_TAG_SINNOH_22                             0x1212
#define OBJ_EVENT_PAL_TAG_SINNOH_23                             0x1213
#define OBJ_EVENT_PAL_TAG_SINNOH_24                             0x1214
#define OBJ_EVENT_PAL_TAG_SINNOH_25                             0x1215
#define OBJ_EVENT_PAL_TAG_SINNOH_26                             0x1216
#define OBJ_EVENT_PAL_TAG_SINNOH_27                             0x1217
#define OBJ_EVENT_PAL_TAG_SINNOH_28                             0x1218
#define OBJ_EVENT_PAL_TAG_SINNOH_29                             0x1219
#define OBJ_EVENT_PAL_TAG_SINNOH_30                             0x121A
#define OBJ_EVENT_PAL_TAG_SINNOH_31                             0x121B
#define OBJ_EVENT_PAL_TAG_SINNOH_32                             0x121C
#define OBJ_EVENT_PAL_TAG_SINNOH_33                             0x121D
#define OBJ_EVENT_PAL_TAG_SINNOH_34                             0x121E
#define OBJ_EVENT_PAL_TAG_SINNOH_35                             0x121F
#define OBJ_EVENT_PAL_TAG_SINNOH_36                             0x1220
#define OBJ_EVENT_PAL_TAG_SINNOH_37                             0x1221
#define OBJ_EVENT_PAL_TAG_SINNOH_38                             0x1222
#define OBJ_EVENT_PAL_TAG_SINNOH_39                             0x1223
#define OBJ_EVENT_PAL_TAG_SINNOH_40                             0x1224
#define OBJ_EVENT_PAL_TAG_SINNOH_41                             0x1225
#define OBJ_EVENT_PAL_TAG_SINNOH_42                             0x1226
#define OBJ_EVENT_PAL_TAG_SINNOH_43                             0x1227
#define OBJ_EVENT_PAL_TAG_SINNOH_44                             0x1228
#define OBJ_EVENT_PAL_TAG_SINNOH_45                             0x1229
#define OBJ_EVENT_PAL_TAG_SINNOH_46                             0x122A
#define OBJ_EVENT_PAL_TAG_SINNOH_47                             0x122B
#define OBJ_EVENT_PAL_TAG_SINNOH_48                             0x122C
#define OBJ_EVENT_PAL_TAG_SINNOH_49                             0x122D
#define OBJ_EVENT_PAL_TAG_SINNOH_50                             0x122E
#define OBJ_EVENT_PAL_TAG_SINNOH_51                             0x122F
#define OBJ_EVENT_PAL_TAG_SINNOH_52                             0x1230
#define OBJ_EVENT_PAL_TAG_SINNOH_53                             0x1231
#define OBJ_EVENT_PAL_TAG_SINNOH_54                             0x1232
#define OBJ_EVENT_PAL_TAG_SINNOH_55                             0x1233
#define OBJ_EVENT_PAL_TAG_SINNOH_56                             0x1234
#define OBJ_EVENT_PAL_TAG_SINNOH_57                             0x1235
#define OBJ_EVENT_PAL_TAG_SINNOH_58                             0x1236
#define OBJ_EVENT_PAL_TAG_SINNOH_59                             0x1237
#define OBJ_EVENT_PAL_TAG_SINNOH_60                             0x1238
#define OBJ_EVENT_PAL_TAG_SINNOH_61                             0x1239
#define OBJ_EVENT_PAL_TAG_SINNOH_63                             0x123A
#define OBJ_EVENT_PAL_TAG_SINNOH_64                             0x123B
#define OBJ_EVENT_PAL_TAG_SINNOH_65                             0x123C
#define OBJ_EVENT_PAL_TAG_SINNOH_66                             0x123D
#define OBJ_EVENT_PAL_TAG_SINNOH_67                             0x123E
#define OBJ_EVENT_PAL_TAG_SINNOH_68                             0x123F
#define OBJ_EVENT_PAL_TAG_SINNOH_69                             0x1240
#define OBJ_EVENT_PAL_TAG_SINNOH_70                             0x1241
#define OBJ_EVENT_PAL_TAG_SINNOH_71                             0x1242
#define OBJ_EVENT_PAL_TAG_SINNOH_72                             0x1243
#define OBJ_EVENT_PAL_TAG_SINNOH_73                             0x1244
#define OBJ_EVENT_PAL_TAG_SINNOH_74                             0x1245
#define OBJ_EVENT_PAL_TAG_SINNOH_75                             0x1246
#define OBJ_EVENT_PAL_TAG_SINNOH_76                             0x1247
#define OBJ_EVENT_PAL_TAG_SINNOH_77                             0x1248
#define OBJ_EVENT_PAL_TAG_SINNOH_78                             0x1249
#define OBJ_EVENT_PAL_TAG_SINNOH_79                             0x124A
#define OBJ_EVENT_PAL_TAG_SINNOH_80                             0x124B
#define OBJ_EVENT_PAL_TAG_SINNOH_81                             0x124C
#define OBJ_EVENT_PAL_TAG_SINNOH_82                             0x124D
#define OBJ_EVENT_PAL_TAG_SINNOH_83                             0x124E
#define OBJ_EVENT_PAL_TAG_SINNOH_84                             0x124F
#define OBJ_EVENT_PAL_TAG_SINNOH_85                             0x1250
#define OBJ_EVENT_PAL_TAG_SINNOH_86                             0x1251
#define OBJ_EVENT_PAL_TAG_SINNOH_87                             0x1252
#define OBJ_EVENT_PAL_TAG_SINNOH_88                             0x1253
#define OBJ_EVENT_PAL_TAG_SINNOH_89                             0x1254
#define OBJ_EVENT_PAL_TAG_SINNOH_90                             0x1255
#define OBJ_EVENT_PAL_TAG_SINNOH_91                             0x1256
#define OBJ_EVENT_PAL_TAG_SINNOH_92                             0x1257
#define OBJ_EVENT_PAL_TAG_SINNOH_93                             0x1258
#define OBJ_EVENT_PAL_TAG_SINNOH_94                             0x1259
#define OBJ_EVENT_PAL_TAG_SINNOH_95                             0x125A
#define OBJ_EVENT_PAL_TAG_SINNOH_96                             0x125B
#define OBJ_EVENT_PAL_TAG_SINNOH_97                             0x125C
#define OBJ_EVENT_PAL_TAG_SINNOH_98                             0x125D
#define OBJ_EVENT_PAL_TAG_SINNOH_99                             0x125E
#define OBJ_EVENT_PAL_TAG_SINNOH_100                            0x125F
#define OBJ_EVENT_PAL_TAG_SINNOH_101                            0x1260
#define OBJ_EVENT_PAL_TAG_SINNOH_102                            0x1261
#define OBJ_EVENT_PAL_TAG_SINNOH_103                            0x1262
#define OBJ_EVENT_PAL_TAG_SINNOH_104                            0x1263
#define OBJ_EVENT_PAL_TAG_SINNOH_105                            0x1264
#define OBJ_EVENT_PAL_TAG_SINNOH_106                            0x1265
#define OBJ_EVENT_PAL_TAG_SINNOH_107                            0x1266
#define OBJ_EVENT_PAL_TAG_SINNOH_108                            0x1267
#define OBJ_EVENT_PAL_TAG_SINNOH_109                            0x1268
#define OBJ_EVENT_PAL_TAG_SINNOH_110                            0x1269
#define OBJ_EVENT_PAL_TAG_SINNOH_111                            0x126A
#define OBJ_EVENT_PAL_TAG_SINNOH_112                            0x126B
#define OBJ_EVENT_PAL_TAG_SINNOH_113                            0x126C
#define OBJ_EVENT_PAL_TAG_SINNOH_114                            0x126D
#define OBJ_EVENT_PAL_TAG_SINNOH_115                            0x126E
#define OBJ_EVENT_PAL_TAG_SINNOH_116                            0x126F
#define OBJ_EVENT_PAL_TAG_SINNOH_117                            0x1270
#define OBJ_EVENT_PAL_TAG_SINNOH_118                            0x1271
#define OBJ_EVENT_PAL_TAG_SINNOH_119                            0x1272
#define OBJ_EVENT_PAL_TAG_SINNOH_120                            0x1273
#define OBJ_EVENT_PAL_TAG_SINNOH_121                            0x1274
#define OBJ_EVENT_PAL_TAG_SINNOH_122                            0x1275
#define OBJ_EVENT_PAL_TAG_SINNOH_123                            0x1276
#define OBJ_EVENT_PAL_TAG_SINNOH_124                            0x1277
#define OBJ_EVENT_PAL_TAG_SINNOH_125                            0x1278
#define OBJ_EVENT_PAL_TAG_SINNOH_126                            0x1279
#define OBJ_EVENT_PAL_TAG_SINNOH_127                            0x127A
#define OBJ_EVENT_PAL_TAG_SINNOH_128                            0x127B
#define OBJ_EVENT_PAL_TAG_SINNOH_129                            0x127C
#define OBJ_EVENT_PAL_TAG_SINNOH_130                            0x127D
#define OBJ_EVENT_PAL_TAG_SINNOH_131                            0x127E
#define OBJ_EVENT_PAL_TAG_SINNOH_132                            0x127F
#define OBJ_EVENT_PAL_TAG_SINNOH_133                            0x1280
#define OBJ_EVENT_PAL_TAG_SINNOH_134                            0x1281
#define OBJ_EVENT_PAL_TAG_SINNOH_135                            0x1282
#define OBJ_EVENT_PAL_TAG_SINNOH_136                            0x1283
#define OBJ_EVENT_PAL_TAG_SINNOH_137                            0x1284
#define OBJ_EVENT_PAL_TAG_SINNOH_138                            0x1285
#define OBJ_EVENT_PAL_TAG_SINNOH_139                            0x1286
#define OBJ_EVENT_PAL_TAG_SINNOH_142                            0x1287
#define OBJ_EVENT_PAL_TAG_SINNOH_143                            0x1288
#define OBJ_EVENT_PAL_TAG_SINNOH_144                            0x1289
#define OBJ_EVENT_PAL_TAG_SINNOH_145                            0x128A
#define OBJ_EVENT_PAL_TAG_SINNOH_146                            0x128B
#define OBJ_EVENT_PAL_TAG_SINNOH_147                            0x128C
#define OBJ_EVENT_PAL_TAG_SINNOH_148                            0x128D
#define OBJ_EVENT_PAL_TAG_SINNOH_149                            0x128E
#define OBJ_EVENT_PAL_TAG_SINNOH_150                            0x128F
#define OBJ_EVENT_PAL_TAG_SINNOH_151                            0x1290
#define OBJ_EVENT_PAL_TAG_SINNOH_152                            0x1291
#define OBJ_EVENT_PAL_TAG_SINNOH_153                            0x1292
#define OBJ_EVENT_PAL_TAG_SINNOH_154                            0x1293
#define OBJ_EVENT_PAL_TAG_SINNOH_155                            0x1294
#define OBJ_EVENT_PAL_TAG_SINNOH_156                            0x1295
#define OBJ_EVENT_PAL_TAG_SINNOH_157                            0x1296
#define OBJ_EVENT_PAL_TAG_SINNOH_158                            0x1297
#define OBJ_EVENT_PAL_TAG_SINNOH_159                            0x1298
#define OBJ_EVENT_PAL_TAG_SINNOH_160                            0x1299
#define OBJ_EVENT_PAL_TAG_SINNOH_161                            0x129A
#define OBJ_EVENT_PAL_TAG_SINNOH_162                            0x129B
#define OBJ_EVENT_PAL_TAG_SINNOH_163                            0x129C
#define OBJ_EVENT_PAL_TAG_SINNOH_164                            0x129D
#define OBJ_EVENT_PAL_TAG_SINNOH_165                            0x129E
#define OBJ_EVENT_PAL_TAG_SINNOH_166                            0x129F
#define OBJ_EVENT_PAL_TAG_SINNOH_167                            0x12A0
#define OBJ_EVENT_PAL_TAG_SINNOH_168                            0x12A1
#define OBJ_EVENT_PAL_TAG_SINNOH_169                            0x12A2
#define OBJ_EVENT_PAL_TAG_SINNOH_170                            0x12A3
#define OBJ_EVENT_PAL_TAG_SINNOH_171                            0x12A4
#define OBJ_EVENT_PAL_TAG_SINNOH_172                            0x12A5
#define OBJ_EVENT_PAL_TAG_SINNOH_173                            0x12A6
#define OBJ_EVENT_PAL_TAG_SINNOH_174                            0x12A7
#define OBJ_EVENT_PAL_TAG_SINNOH_176                            0x12A8
#define OBJ_EVENT_PAL_TAG_SINNOH_177                            0x12A9
#define OBJ_EVENT_PAL_TAG_SINNOH_178                            0x12AA
#define OBJ_EVENT_PAL_TAG_SINNOH_179                            0x12AB
#define OBJ_EVENT_PAL_TAG_SINNOH_180                            0x12AC
#define OBJ_EVENT_PAL_TAG_SINNOH_181                            0x12AD
#define OBJ_EVENT_PAL_TAG_SINNOH_182                            0x12AE
#define OBJ_EVENT_PAL_TAG_SINNOH_183                            0x12AF
#define OBJ_EVENT_PAL_TAG_SINNOH_184                            0x12B0
#define OBJ_EVENT_PAL_TAG_SINNOH_185                            0x12B1
#define OBJ_EVENT_PAL_TAG_SINNOH_186                            0x12B2
#define OBJ_EVENT_PAL_TAG_SINNOH_189                            0x12B3
#define OBJ_EVENT_PAL_TAG_SINNOH_190                            0x12B4
#define OBJ_EVENT_PAL_TAG_SINNOH_195                            0x12B5
#define OBJ_EVENT_PAL_TAG_SINNOH_196                            0x12B6
#define OBJ_EVENT_PAL_TAG_SINNOH_197                            0x12B7
#define OBJ_EVENT_PAL_TAG_SINNOH_198                            0x12B8
#define OBJ_EVENT_PAL_TAG_SINNOH_199                            0x12B9
#define OBJ_EVENT_PAL_TAG_SINNOH_200                            0x12BA
#define OBJ_EVENT_PAL_TAG_SINNOH_201                            0x12BB
#define OBJ_EVENT_PAL_TAG_SINNOH_202                            0x12BC
#define OBJ_EVENT_PAL_TAG_SINNOH_203                            0x12BD
#define OBJ_EVENT_PAL_TAG_SINNOH_204                            0x12BE
#define OBJ_EVENT_PAL_TAG_SINNOH_205                            0x12BF
#define OBJ_EVENT_PAL_TAG_SINNOH_206                            0x12C0
#define OBJ_EVENT_PAL_TAG_SINNOH_207                            0x12C1
#define OBJ_EVENT_PAL_TAG_SINNOH_208                            0x12C2
#define OBJ_EVENT_PAL_TAG_SINNOH_209                            0x12C3
#define OBJ_EVENT_PAL_TAG_SINNOH_210                            0x12C4
#define OBJ_EVENT_PAL_TAG_SINNOH_211                            0x12C5
#define OBJ_EVENT_PAL_TAG_SINNOH_212                            0x12C6
#define OBJ_EVENT_PAL_TAG_SINNOH_213                            0x12C7
#define OBJ_EVENT_PAL_TAG_SINNOH_214                            0x12C8
#define OBJ_EVENT_PAL_TAG_SINNOH_215                            0x12C9
#define OBJ_EVENT_PAL_TAG_SINNOH_218                            0x12CA
#define OBJ_EVENT_PAL_TAG_SINNOH_219                            0x12CB
#define OBJ_EVENT_PAL_TAG_SINNOH_220                            0x12CC
#define OBJ_EVENT_PAL_TAG_SINNOH_221                            0x12CD
#define OBJ_EVENT_PAL_TAG_SINNOH_222                            0x12CE
#define OBJ_EVENT_PAL_TAG_SINNOH_223                            0x12CF
#define OBJ_EVENT_PAL_TAG_SINNOH_224                            0x12D0
#define OBJ_EVENT_PAL_TAG_SINNOH_225                            0x12D1
#define OBJ_EVENT_PAL_TAG_SINNOH_226                            0x12D2
#define OBJ_EVENT_PAL_TAG_SINNOH_227                            0x12D3
#define OBJ_EVENT_PAL_TAG_SINNOH_228                            0x12D4
#define OBJ_EVENT_PAL_TAG_SINNOH_229                            0x12D5
#define OBJ_EVENT_PAL_TAG_SINNOH_230                            0x12D6
#define OBJ_EVENT_PAL_TAG_SINNOH_231                            0x12D7
#define OBJ_EVENT_PAL_TAG_SINNOH_232                            0x12D8
#define OBJ_EVENT_PAL_TAG_SINNOH_233                            0x12D9
#define OBJ_EVENT_PAL_TAG_SINNOH_234                            0x12DA
#define OBJ_EVENT_PAL_TAG_SINNOH_235                            0x12DB
#define OBJ_EVENT_PAL_TAG_SINNOH_236                            0x12DC
#define OBJ_EVENT_PAL_TAG_SINNOH_237                            0x12DD
#define OBJ_EVENT_PAL_TAG_SINNOH_238                            0x12DE
#define OBJ_EVENT_PAL_TAG_SINNOH_240                            0x12DF
#define OBJ_EVENT_PAL_TAG_SINNOH_241                            0x12E0
#define OBJ_EVENT_PAL_TAG_SINNOH_242                            0x12E1
#define OBJ_EVENT_PAL_TAG_SINNOH_243                            0x12E2
#define OBJ_EVENT_PAL_TAG_SINNOH_244                            0x12E3
#define OBJ_EVENT_PAL_TAG_SINNOH_245                            0x12E4
// --- END WIRE_TO_DECOMP_SPRITES sinnoh ---

#define NUM_OBJ_EVENT_GFX                        617


// These are dynamic object gfx ids.
// They correspond with the values of the VAR_OBJ_GFX_ID_X vars.
// More info about them in include/constants/vars.h
#define OBJ_EVENT_GFX_VARS   (NUM_OBJ_EVENT_GFX + 1)
#define OBJ_EVENT_GFX_VAR_0  (OBJ_EVENT_GFX_VARS + 0x0)
#define OBJ_EVENT_GFX_VAR_1  (OBJ_EVENT_GFX_VARS + 0x1)
#define OBJ_EVENT_GFX_VAR_2  (OBJ_EVENT_GFX_VARS + 0x2)
#define OBJ_EVENT_GFX_VAR_3  (OBJ_EVENT_GFX_VARS + 0x3)
#define OBJ_EVENT_GFX_VAR_4  (OBJ_EVENT_GFX_VARS + 0x4)
#define OBJ_EVENT_GFX_VAR_5  (OBJ_EVENT_GFX_VARS + 0x5)
#define OBJ_EVENT_GFX_VAR_6  (OBJ_EVENT_GFX_VARS + 0x6)
#define OBJ_EVENT_GFX_VAR_7  (OBJ_EVENT_GFX_VARS + 0x7)
#define OBJ_EVENT_GFX_VAR_8  (OBJ_EVENT_GFX_VARS + 0x8)
#define OBJ_EVENT_GFX_VAR_9  (OBJ_EVENT_GFX_VARS + 0x9)
#define OBJ_EVENT_GFX_VAR_A  (OBJ_EVENT_GFX_VARS + 0xA)
#define OBJ_EVENT_GFX_VAR_B  (OBJ_EVENT_GFX_VARS + 0xB)
#define OBJ_EVENT_GFX_VAR_C  (OBJ_EVENT_GFX_VARS + 0xC)
#define OBJ_EVENT_GFX_VAR_D  (OBJ_EVENT_GFX_VARS + 0xD)
#define OBJ_EVENT_GFX_VAR_E  (OBJ_EVENT_GFX_VARS + 0xE)
#define OBJ_EVENT_GFX_VAR_F  (OBJ_EVENT_GFX_VARS + 0xF)

// Don't use (1u << 15) to avoid conflict with BLEND_IMMUNE_FLAG.
#define OBJ_EVENT_MON               (1u << 14)
#define OBJ_EVENT_MON_SHINY         (1u << 13)
#define OBJ_EVENT_MON_FEMALE        (1u << 12)
#define OBJ_EVENT_MON_SPECIES_MASK  (~(7u << 12))

// Used to call a specific species' follower graphics. Useful for static encounters.
#define OBJ_EVENT_GFX_SPECIES(name)                 (SPECIES_##name + OBJ_EVENT_MON)
#define OBJ_EVENT_GFX_SPECIES_SHINY(name)           (SPECIES_##name + OBJ_EVENT_MON + OBJ_EVENT_MON_SHINY)
#define OBJ_EVENT_GFX_SPECIES_FEMALE(name)          (SPECIES_##name + OBJ_EVENT_MON + OBJ_EVENT_MON_FEMALE)
#define OBJ_EVENT_GFX_SPECIES_SHINY_FEMALE(name)    (SPECIES_##name + OBJ_EVENT_MON + OBJ_EVENT_MON_SHINY + OBJ_EVENT_MON_FEMALE)

#define OW_SPECIES(x) ((x)->graphicsId & OBJ_EVENT_MON_SPECIES_MASK)
#define OW_SHINY(x) ((x)->graphicsId & OBJ_EVENT_MON_SHINY)
#define OW_FEMALE(x) ((x)->graphicsId & OBJ_EVENT_MON_FEMALE)

// Whether Object Event is an OW pokemon
#define IS_OW_MON_OBJ(obj) ((obj)->graphicsId & OBJ_EVENT_MON)

#define SHADOW_SIZE_S       0
#define SHADOW_SIZE_M       1
#define SHADOW_SIZE_L       2
#define SHADOW_SIZE_NONE    3   // Originally SHADOW_SIZE_XL, which went unused due to shadowSize in ObjectEventGraphicsInfo being only 2 bits.

#define SHADOW_SIZE_XL_BATTLE_ONLY  SHADOW_SIZE_NONE    // Battle-only definition for XL shadow size.

#define F_INANIMATE                        (1 << 6)
#define F_DISABLE_REFLECTION_PALETTE_LOAD  (1 << 7)

#define TRACKS_NONE       0
#define TRACKS_FOOT       1
#define TRACKS_BIKE_TIRE  2
#define TRACKS_SLITHER    3
#define TRACKS_SPOT       4
#define TRACKS_BUG        5

#define LIGHT_TYPE_BALL             0
#define LIGHT_TYPE_PKMN_CENTER_SIGN 1
#define LIGHT_TYPE_POKE_MART_SIGN   2

#define FIRST_DECORATION_SPRITE_GFX OBJ_EVENT_GFX_PICHU_DOLL

#define OBJ_KIND_NORMAL 0
#define OBJ_KIND_CLONE  255 // Exclusive to FRLG

// Special object event local ids
// Used for link player OWs in CreateLinkPlayerSprite
#define OBJ_EVENT_ID_DYNAMIC_BASE 0xF0

// Each object event template gets an ID that can be used to refer to it in scripts and elsewhere.
// This is referred to as the "local id" (and it's really just 1 + its index in the templates array).
// There are a few special IDs reserved for objects that don't have templates in the map data -- one for the player
// in regular offline play, five for linked players while playing Berry Blender, and one for an invisible object that
// can be spawned for the camera to track instead of the player. Additionally, the value 0 is reserved as an "empty" indicator.
#define LOCALID_NONE                         0
#define LOCALID_CAMERA                     127
#define LOCALID_BERRY_BLENDER_PLAYER_END   240 // This will use 5 (MAX_RFU_PLAYERS) IDs ending at 240, i.e. 236-240
#define LOCALID_FOLLOWING_POKEMON          254
#define LOCALID_PLAYER                     255
#define OBJ_EVENT_ID_FOLLOWER              0xFE
#define OBJ_EVENT_ID_NPC_FOLLOWER          0xFD

// Aliases for old names. "object event id" normally refers to an index into gObjectEvents, which these are not.
// Used for link player OWs in CreateLinkPlayerSprite
#define OBJ_EVENT_ID_DYNAMIC_BASE 0xF0
#define OBJ_EVENT_ID_CAMERA LOCALID_CAMERA
#define OBJ_EVENT_ID_PLAYER LOCALID_PLAYER

// Moved from src/event_object_movement.c so that they're accesible from other files.
#define OBJ_EVENT_PAL_TAG_BRENDAN                 0x1100
#define OBJ_EVENT_PAL_TAG_BRENDAN_REFLECTION      0x1101
#define OBJ_EVENT_PAL_TAG_BRIDGE_REFLECTION       0x1102
#define OBJ_EVENT_PAL_TAG_NPC_1                   0x1103
#define OBJ_EVENT_PAL_TAG_NPC_2                   0x1104
#define OBJ_EVENT_PAL_TAG_NPC_3                   0x1105
#define OBJ_EVENT_PAL_TAG_NPC_4                   0x1106
#define OBJ_EVENT_PAL_TAG_NPC_1_REFLECTION        0x1107
#define OBJ_EVENT_PAL_TAG_NPC_2_REFLECTION        0x1108
#define OBJ_EVENT_PAL_TAG_NPC_3_REFLECTION        0x1109
#define OBJ_EVENT_PAL_TAG_NPC_4_REFLECTION        0x110A
#define OBJ_EVENT_PAL_TAG_QUINTY_PLUMP            0x110B
#define OBJ_EVENT_PAL_TAG_QUINTY_PLUMP_REFLECTION 0x110C
#define OBJ_EVENT_PAL_TAG_TRUCK                   0x110D
#define OBJ_EVENT_PAL_TAG_VIGOROTH                0x110E
#define OBJ_EVENT_PAL_TAG_ZIGZAGOON               0x110F
#define OBJ_EVENT_PAL_TAG_MAY                     0x1110
#define OBJ_EVENT_PAL_TAG_MAY_REFLECTION          0x1111
#define OBJ_EVENT_PAL_TAG_MOVING_BOX              0x1112
#define OBJ_EVENT_PAL_TAG_CABLE_CAR               0x1113
#define OBJ_EVENT_PAL_TAG_SSTIDAL                 0x1114
#define OBJ_EVENT_PAL_TAG_PLAYER_UNDERWATER       0x1115
#define OBJ_EVENT_PAL_TAG_KYOGRE                  0x1116
#define OBJ_EVENT_PAL_TAG_KYOGRE_REFLECTION       0x1117
#define OBJ_EVENT_PAL_TAG_GROUDON                 0x1118
#define OBJ_EVENT_PAL_TAG_GROUDON_REFLECTION      0x1119
#define OBJ_EVENT_PAL_TAG_UNUSED                  0x111A
#define OBJ_EVENT_PAL_TAG_SUBMARINE_SHADOW        0x111B
#define OBJ_EVENT_PAL_TAG_POOCHYENA               0x111C
#define OBJ_EVENT_PAL_TAG_RED_LEAF                0x111D
#define OBJ_EVENT_PAL_TAG_DEOXYS                  0x111E
#define OBJ_EVENT_PAL_TAG_BIRTH_ISLAND_STONE      0x111F
#define OBJ_EVENT_PAL_TAG_HO_OH                   0x1120
#define OBJ_EVENT_PAL_TAG_LUGIA                   0x1121
#define OBJ_EVENT_PAL_TAG_RS_BRENDAN              0x1122
#define OBJ_EVENT_PAL_TAG_RS_MAY                  0x1123
#define OBJ_EVENT_PAL_TAG_DYNAMIC                 0x1124
#define OBJ_EVENT_PAL_TAG_PLAYER_RED              0x1125
#define OBJ_EVENT_PAL_TAG_PLAYER_RED_REFLECTION   0x1126
#define OBJ_EVENT_PAL_TAG_PLAYER_GREEN            0x1127
#define OBJ_EVENT_PAL_TAG_PLAYER_GREEN_REFLECTION 0x1128
#define OBJ_EVENT_PAL_TAG_NPC_BLUE                0x1129
#define OBJ_EVENT_PAL_TAG_NPC_PINK                0x112A
#define OBJ_EVENT_PAL_TAG_NPC_GREEN               0x112B
#define OBJ_EVENT_PAL_TAG_NPC_WHITE               0x112C
#define OBJ_EVENT_PAL_TAG_NPC_BLUE_REFLECTION     0x112D
#define OBJ_EVENT_PAL_TAG_NPC_PINK_REFLECTION     0x112E
#define OBJ_EVENT_PAL_TAG_NPC_GREEN_REFLECTION    0x112F
#define OBJ_EVENT_PAL_TAG_NPC_WHITE_REFLECTION    0x1130
#define OBJ_EVENT_PAL_TAG_METEORITE               0x1131
#define OBJ_EVENT_PAL_TAG_SEAGALLOP               0x1132
#define OBJ_EVENT_PAL_TAG_SS_ANNE                 0x1133

#if OW_FOLLOWERS_POKEBALLS
// Vanilla
#define OBJ_EVENT_PAL_TAG_BALL_MASTER             0x1150
#define OBJ_EVENT_PAL_TAG_BALL_ULTRA              0x1151
#define OBJ_EVENT_PAL_TAG_BALL_GREAT              0x1152
#define OBJ_EVENT_PAL_TAG_BALL_SAFARI             0x1153
#define OBJ_EVENT_PAL_TAG_BALL_NET                0x1154
#define OBJ_EVENT_PAL_TAG_BALL_DIVE               0x1155
#define OBJ_EVENT_PAL_TAG_BALL_NEST               0x1156
#define OBJ_EVENT_PAL_TAG_BALL_REPEAT             0x1157
#define OBJ_EVENT_PAL_TAG_BALL_TIMER              0x1158
#define OBJ_EVENT_PAL_TAG_BALL_LUXURY             0x1159
#define OBJ_EVENT_PAL_TAG_BALL_PREMIER            0x115A
// Gen IV/Sinnoh
#define OBJ_EVENT_PAL_TAG_BALL_DUSK               0x115B
#define OBJ_EVENT_PAL_TAG_BALL_HEAL               0x115C
#define OBJ_EVENT_PAL_TAG_BALL_QUICK              0x115D
#define OBJ_EVENT_PAL_TAG_BALL_CHERISH            0x115E
#define OBJ_EVENT_PAL_TAG_BALL_PARK               0x115F
// Gen II/Johto Apricorns
#define OBJ_EVENT_PAL_TAG_BALL_FAST               0x1160
#define OBJ_EVENT_PAL_TAG_BALL_LEVEL              0x1161
#define OBJ_EVENT_PAL_TAG_BALL_LURE               0x1162
#define OBJ_EVENT_PAL_TAG_BALL_HEAVY              0x1163
#define OBJ_EVENT_PAL_TAG_BALL_LOVE               0x1164
#define OBJ_EVENT_PAL_TAG_BALL_FRIEND             0x1165
#define OBJ_EVENT_PAL_TAG_BALL_MOON               0x1166
#define OBJ_EVENT_PAL_TAG_BALL_SPORT              0x1167
// Gen V
#define OBJ_EVENT_PAL_TAG_BALL_DREAM              0x1168
// Gen VII
#define OBJ_EVENT_PAL_TAG_BALL_BEAST              0x1169
// Gen VIII
#define OBJ_EVENT_PAL_TAG_BALL_STRANGE            0x116A
#endif //OW_FOLLOWERS_POKEBALLS
// Used as a placeholder follower graphic
#define OBJ_EVENT_PAL_TAG_SUBSTITUTE              0x7611
#define OBJ_EVENT_PAL_TAG_LIGHT                   0x8001
#define OBJ_EVENT_PAL_TAG_LIGHT_2                 0x8002
#define OBJ_EVENT_PAL_TAG_EMOTES                  0x8003
#define OBJ_EVENT_PAL_TAG_NEON_LIGHT              0x8004
// Not a real OW palette tag; used for the white flash applied to followers
#define OBJ_EVENT_PAL_TAG_WHITE                   (OBJ_EVENT_PAL_TAG_NONE - 1)
#define OBJ_EVENT_PAL_TAG_NONE                    0x11FF

// This + localId is used as the tileTag
// for compressed graphicsInfos
// '(C)ompressed (E)vent'
#define COMP_OW_TILE_TAG_BASE 0xCE00


// --- BEGIN WIRE_TO_DECOMP_GFX_STUBS sinnoh ---
// Aliases for OBJ_EVENT_GFX_SINNOH_N constants whose sprites the extractor missed.
// Maps using these will render as OBJ_EVENT_GFX_NINJA_BOY until the real sprite is extracted/wired.
#define OBJ_EVENT_GFX_SINNOH_0                        OBJ_EVENT_GFX_NINJA_BOY
#define OBJ_EVENT_GFX_SINNOH_140                      OBJ_EVENT_GFX_NINJA_BOY
#define OBJ_EVENT_GFX_SINNOH_141                      OBJ_EVENT_GFX_NINJA_BOY
#define OBJ_EVENT_GFX_SINNOH_246                      OBJ_EVENT_GFX_NINJA_BOY
#define OBJ_EVENT_GFX_SINNOH_247                      OBJ_EVENT_GFX_NINJA_BOY
#define OBJ_EVENT_GFX_SINNOH_248                      OBJ_EVENT_GFX_NINJA_BOY
#define OBJ_EVENT_GFX_SINNOH_249                      OBJ_EVENT_GFX_NINJA_BOY
#define OBJ_EVENT_GFX_SINNOH_250                      OBJ_EVENT_GFX_NINJA_BOY
#define OBJ_EVENT_GFX_SINNOH_251                      OBJ_EVENT_GFX_NINJA_BOY
#define OBJ_EVENT_GFX_SINNOH_252                      OBJ_EVENT_GFX_NINJA_BOY
#define OBJ_EVENT_GFX_SINNOH_253                      OBJ_EVENT_GFX_NINJA_BOY
#define OBJ_EVENT_GFX_SINNOH_254                      OBJ_EVENT_GFX_NINJA_BOY
#define OBJ_EVENT_GFX_SINNOH_255                      OBJ_EVENT_GFX_NINJA_BOY
// --- END WIRE_TO_DECOMP_GFX_STUBS sinnoh ---

#endif  // GUARD_CONSTANTS_EVENT_OBJECTS_H
