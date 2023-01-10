/*
 * src\data\words.c
 *
 * all game words and their indices
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 10.01.2023   tstih
 *
 */
#include <data/words.h>

const word_t words[] = { 
     { "J"     ,1 }
    ,{ "JUG"   ,1 }
    ,{ "S"     ,2 }
    ,{ "SEVE"  ,2 }
    ,{ "Z"     ,3 }
    ,{ "ZAHO"  ,3 }
    ,{ "V"     ,4 }
    ,{ "VZHO"  ,4 }
    ,{ "G"     ,5 }
    ,{ "GOR"   ,5 }
    ,{ "D"     ,6 }
    ,{ "DOL"   ,6 }
    ,{ "SV"    ,7 }
    ,{ "SZ"    ,8 }
    ,{ "JV"    ,9 }
    ,{ "JZ"    ,10 }
    ,{ "NOTE"  ,11 }
    ,{ "VEN"   ,12 }
    ,{ "POBE"  ,15 }
    ,{ "VZEM"  ,15 }
    ,{ "DAJ"   ,16 }
    ,{ "SPUS"  ,16 }
    ,{ "ODLO"  ,16 }
    ,{ "PIJ"   ,17 }
    ,{ "POPI"  ,17 }
    ,{ "JEJ"   ,18 }
    ,{ "POJE"  ,18 }
    ,{ "SKRI"  ,19 }
    ,{ "ODPR"  ,20 }
    ,{ "ZAPR"  ,21 }
    ,{ "NARE"  ,22 }
    ,{ "SPEC"  ,22 }
    ,{ "SKUH"  ,22 }
    ,{ "PRIP"  ,22 }
    ,{ "KOVC"  ,23 }
    ,{ "KUFE"  ,23 }
    ,{ "VODK"  ,24 }
    ,{ "MINE"  ,25 }
    ,{ "DUH"   ,26 }
    ,{ "KOTE"  ,27 }
    ,{ "SLIV"  ,28 }
    ,{ "ZGAN"  ,29 }
    ,{ "SNOP"  ,29 }
    ,{ "VISK"  ,30 }
    ,{ "SKOT"  ,31 }
    ,{ "KONJ"  ,32 }
    ,{ "LED"   ,33 }
    ,{ "RIZL"  ,34 }
    ,{ "PRAS"  ,35 }
    ,{ "SVIN"  ,36 }
    ,{ "PRSU"  ,37 }
    ,{ "MLEK"  ,38 }
    ,{ "SIR"   ,39 }
    ,{ "OLIV"  ,40 }
    ,{ "LEST"  ,41 }
    ,{ "LOJT"  ,41 }
    ,{ "SADJ"  ,42 }
    ,{ "KAVI"  ,43 }
    ,{ "JESE"  ,44 }
    ,{ "RIBO"  ,44 }
    ,{ "MREZ"  ,45 }
    ,{ "MOKO"  ,46 }
    ,{ "SRP"   ,47 }
    ,{ "KLAD"  ,48 }
    ,{ "SOS"   ,49 }
    ,{ "POMA"  ,49 }
    ,{ "ZITO"  ,50 }
    ,{ "PSEN"  ,50 }
    ,{ "PARA"  ,51 }
    ,{ "MESO"  ,52 }
    ,{ "DROB"  ,53 }
    ,{ "KRUH"  ,54 }
    ,{ "JAJC"  ,55 }
    ,{ "VRTN"  ,56 }
    ,{ "KROM"  ,57 }
    ,{ "POMF"  ,58 }
    ,{ "SOLA"  ,59 }
    ,{ "KNED"  ,60 }
    ,{ "BRUS"  ,61 }
    ,{ "LOSA"  ,62 }
    ,{ "PUSK"  ,63 }
    ,{ "TORT"  ,64 }
    ,{ "SACH"  ,64 }
    ,{ "DALJ"  ,65 }
    ,{ "SOL"   ,66 }
    ,{ "POPE"  ,67 }
    ,{ "COLN"  ,68 }
    ,{ "KAVB"  ,69 }
    ,{ "ZID"   ,70 }
    ,{ "DENA"  ,71 }
    ,{ "ZAKL"  ,72 }
    ,{ "KRIZ"  ,73 }
    ,{ "VODO"  ,74 }
    ,{ "OGLE"  ,75 }
    ,{ "CESE"  ,76 }
    ,{ "BIKO"  ,77 }
    ,{ "MEC"   ,78 }
    ,{ "BAKE"  ,78 }
    ,{ "LOPA"  ,79 }
    ,{ "PIVO"  ,80 }
    ,{ "CIPK"  ,81 }
    ,{ "TOKA"  ,82 }
    ,{ "CAJ"   ,83 }
    ,{ "NOZ"   ,84 }
    ,{ "STEK"  ,85 }
    ,{ "CAS"   ,86 }
    ,{ "REZU"  ,86 }
    ,{ "KORA"  ,86 }
    ,{ "OPIS"  ,87 }
    ,{ "POGL"  ,87 }
    ,{ "SPOR"  ,88 }
    ,{ "PUMP"  ,89 }
    ,{ "NAPI"  ,89 }
    ,{ "NAPU"  ,89 }
    ,{ "ODMA"  ,90 }
    ,{ "SAMP"  ,91 }
    ,{ "WATE"  ,92 }
    ,{ "NATO"  ,93 }
    ,{ "NALI"  ,93 }
    ,{ "OBER"  ,94 }
    ,{ "KUHA"  ,95 }
    ,{ "REN"   ,96 }
    ,{ "ZAKO"  ,97 }
    ,{ "UBIJ"  ,97 }
    ,{ "OBES"  ,98 }
    ,{ "SNEM"  ,99 }
    ,{ "MOLZ"  ,100 }
    ,{ "POMO"  ,100 }
    ,{ "KRAV"  ,101 }
    ,{ "PRIS"  ,102 }
    ,{ "NASL"  ,102 }
    ,{ "RAZP"  ,103 }
    ,{ "RAZR"  ,103 }
    ,{ "I"     ,104 }
    ,{ "INVE"  ,104 }
    ,{ "UJEM"  ,105 }
    ,{ "ULOV"  ,105 }
    ,{ "STOP"  ,106 }
    ,{ "KONE"  ,106 }
    ,{ "SAVE"  ,107 }
    ,{ "LOAD"  ,108 }
    ,{ "ZREZ"  ,109 }
    ,{ "SNIC"  ,109 }
    ,{ "SPAG"  ,110 }
    ,{ "MAKA"  ,110 }
    ,{ "TEST"  ,110 }
    ,{ "PONE"  ,111 }
    ,{ "OBLE"  ,112 }
    ,{ "SLEC"  ,113 }
    ,{ "POZA"  ,114 }
    ,{ "ZANJ"  ,114 }
    ,{ "MELJ"  ,115 }
    ,{ "ZMEL"  ,115 }
    ,{ "PIHA"  ,116 }
    ,{ "MAST"  ,117 }
    ,{ "NADR"  ,118 }
    ,{ "OLUP"  ,119 }
    ,{ "USTR"  ,120 }
    ,{ "PONU"  ,121 }
    ,{ "RAZB"  ,122 }
    ,{ "PORU"  ,122 }
    ,{ "ZRUS"  ,122 }
    ,{ "VZDI"  ,123 }
    ,{ "DRAC"  ,124 }
    ,{ "DRAK"  ,124 }
    ,{ "IGRA"  ,125 }
    ,{ "RULE"  ,126 }
    ,{ "KUPI"  ,127 }
    ,{ "PLZE"  ,128 }
    ,{ "KOPL"  ,129 }
    ,{ "ODSE"  ,130 }
    ,{ "ODRE"  ,130 }
    ,{ "DUNA"  ,131 }
    ,{ "BLAG"  ,132 }
    ,{ "BIKA"  ,133 }
    ,{ "PLAV"  ,134 }
    ,{ "BENE"  ,135 }
    ,{ "JEKL"  ,136 }
    ,{ "PREB"  ,137 }
    ,{ "VESL"  ,138 }
    ,{ "NE"    ,139 }
    ,{ "POGR"  ,140 }
    ,{ "MIZO"  ,141 }
    ,{ "VSE"   ,142 }
    ,{ "RISI"  ,144 }
    ,{ "SCRE"  ,145 }
    ,{ "SLIK"  ,145 }
    ,{ "_"     ,255 }
};
