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
     { "S"     ,1 }
    ,{ "SEVE"  ,1 }
    ,{ "J"     ,2 }
    ,{ "JUG"   ,2 }
    ,{ "V"     ,3 }
    ,{ "VZHO"  ,3 }
    ,{ "Z"     ,4 }
    ,{ "ZAHO"  ,4 }
    ,{ "SV"    ,5 }
    ,{ "SZ"    ,6 }
    ,{ "JV"    ,7 }
    ,{ "JZ"    ,8 }
    ,{ "G"     ,9 }
    ,{ "GOR"   ,9 }
    ,{ "D"     ,10 }
    ,{ "DOL"   ,10 }
    ,{ "VEN"   ,11 }
    ,{ "IZST"  ,11 }
    ,{ "NOT"   ,12 }
    ,{ "NOTE"  ,12 }
    ,{ "VSTO"  ,12 }
    ,{ "L"     ,13 }
    ,{ "LEVO"  ,13 }
    ,{ "DESN"  ,13 }
    ,{ "KIP"   ,14 }
    ,{ "KIPE"  ,14 }
    ,{ "KOVA"  ,15 }
    ,{ "DENA"  ,15 }
    ,{ "TRNK"  ,16 }
    ,{ "REGO"  ,17 }
    ,{ "ZABO"  ,17 }
    ,{ "NAPO"  ,18 }
    ,{ "VREM"  ,18 }
    ,{ "RUNO"  ,19 }
    ,{ "IGLO"  ,20 }
    ,{ "SIVA"  ,20 }
    ,{ "OBLE"  ,21 }
    ,{ "NATA"  ,21 }
    ,{ "SITU"  ,22 }
    ,{ "POSO"  ,22 }
    ,{ "SMOL"  ,23 }
    ,{ "ZASM"  ,23 }
    ,{ "DAJ"   ,24 }
    ,{ "VRZI"  ,24 }
    ,{ "SPUS"  ,24 }
    ,{ "ODLO"  ,24 }
    ,{ "PRIZ"  ,25 }
    ,{ "VKLJ"  ,25 }
    ,{ "ZX"    ,26 }
    ,{ "SPEC"  ,26 }
    ,{ "SINC"  ,26 }
    ,{ "RACU"  ,26 }
    ,{ "TRAF"  ,27 }
    ,{ "TRAN"  ,27 }
    ,{ "MED"   ,28 }
    ,{ "OGEN"  ,29 }
    ,{ "PROT"  ,30 }
    ,{ "CLOV"  ,30 }
    ,{ "UGAS"  ,31 }
    ,{ "IZKL"  ,31 }
    ,{ "VZEM"  ,32 }
    ,{ "POBE"  ,32 }
    ,{ "UKRA"  ,32 }
    ,{ "VZIG"  ,33 }
    ,{ "SIBI"  ,33 }
    ,{ "JANT"  ,34 }
    ,{ "MCD"   ,35 }
    ,{ "MICR"  ,35 }
    ,{ "MIKR"  ,35 }
    ,{ "UBIJ"  ,36 }
    ,{ "NAPA"  ,36 }
    ,{ "MAMU"  ,37 }
    ,{ "CEBE"  ,38 }
    ,{ "ZVER"  ,39 }
    ,{ "JUGO"  ,40 }
    ,{ "I"     ,41 }
    ,{ "INVE"  ,41 }
    ,{ "CAS"   ,43 }
    ,{ "KORA"  ,43 }
    ,{ "UKAZ"  ,43 }
    ,{ "REZU"  ,43 }
    ,{ "TOCK"  ,43 }
    ,{ "KONE"  ,44 }
    ,{ "FUK"   ,45 }
    ,{ "JEBI"  ,45 }
    ,{ "KURA"  ,45 }
    ,{ "KURC"  ,45 }
    ,{ "PIZD"  ,45 }
    ,{ "LED"   ,46 }
    ,{ "PLAZ"  ,46 }
    ,{ "SOS"   ,47 }
    ,{ "POMA"  ,47 }
    ,{ "POMO"  ,47 }
    ,{ "STAL"  ,48 }
    ,{ "ATIL"  ,49 }
    ,{ "GLAV"  ,50 }
    ,{ "LOPA"  ,51 }
    ,{ "KREM"  ,52 }
    ,{ "NAMA"  ,53 }
    ,{ "SE"    ,54 }
    ,{ "IREN"  ,55 }
    ,{ "GATE"  ,56 }
    ,{ "SPOD"  ,56 }
    ,{ "PODR"  ,57 }
    ,{ "POFU"  ,57 }
    ,{ "POKA"  ,57 }
    ,{ "POJE"  ,57 }
    ,{ "POLJ"  ,57 }
    ,{ "TEOD"  ,58 }
    ,{ "ZAKO"  ,59 }
    ,{ "EMON"  ,60 }
    ,{ "HARF"  ,61 }
    ,{ "PRST"  ,62 }
    ,{ "ZAIG"  ,63 }
    ,{ "ZENS"  ,64 }
    ,{ "ZENE"  ,64 }
    ,{ "CUPR"  ,65 }
    ,{ "GRAD"  ,65 }
    ,{ "SOKO"  ,66 }
    ,{ "PTIC"  ,66 }
    ,{ "DJER"  ,67 }
    ,{ "NAKI"  ,67 }
    ,{ "KRAL"  ,68 }
    ,{ "KONJ"  ,69 }
    ,{ "VILO"  ,70 }
    ,{ "MARK"  ,71 }
    ,{ "DEVO"  ,72 }
    ,{ "CARJ"  ,73 }
    ,{ "ZBUD"  ,74 }
    ,{ "ZAJA"  ,75 }
    ,{ "JAHA"  ,75 }
    ,{ "RESI"  ,76 }
    ,{ "MEC"   ,77 }
    ,{ "LOBA"  ,78 }
    ,{ "PROP"  ,79 }
    ,{ "VINO"  ,80 }
    ,{ "VILE"  ,81 }
    ,{ "SIBO"  ,82 }
    ,{ "SOL"   ,83 }
    ,{ "NACL"  ,83 }
    ,{ "DOVO"  ,84 }
    ,{ "LIPO"  ,85 }
    ,{ "DREV"  ,85 }
    ,{ "PRIP"  ,86 }
    ,{ "ABEC"  ,87 }
    ,{ "AZBU"  ,87 }
    ,{ "LADJ"  ,88 }
    ,{ "ZDRA"  ,88 }
    ,{ "BISE"  ,89 }
    ,{ "OZDR"  ,90 }
    ,{ "POZD"  ,90 }
    ,{ "KAME"  ,91 }
    ,{ "USTR"  ,92 }
    ,{ "KOZO"  ,93 }
    ,{ "PUSK"  ,94 }
    ,{ "KAVO"  ,95 }
    ,{ "PASU"  ,96 }
    ,{ "VREC"  ,96 }
    ,{ "FRAN"  ,97 }
    ,{ "POSA"  ,98 }
    ,{ "ODKO"  ,99 }
    ,{ "ODKL"  ,100 }
    ,{ "KLJU"  ,101 }
    ,{ "ME"    ,102 }
    ,{ "PIJ"   ,103 }
    ,{ "POPI"  ,103 }
    ,{ "OPIS"  ,104 }
    ,{ "GLEJ"  ,104 }
    ,{ "POGL"  ,104 }
    ,{ "SAVE"  ,105 }
    ,{ "CIRA"  ,107 }
    ,{ "SEDI"  ,107 }
    ,{ "LOAD"  ,108 }
    ,{ "DA"    ,109 }
    ,{ "SLEC"  ,110 }
    ,{ "SNEM"  ,110 }
    ,{ "LES"   ,111 }
    ,{ "VRAT"  ,112 }
    ,{ "LAZA"  ,113 }
    ,{ "OGLE"  ,114 }
    ,{ "SCRE"  ,115 }
    ,{ "EKRA"  ,115 }
    ,{ "RISI"  ,116 }
    ,{ "NE"    ,117 }
    ,{ "KAJ"   ,118 }
    ,{ "KDO"   ,118 }
    ,{ "KAKO"  ,118 }
    ,{ "ZAKA"  ,118 }
    ,{ "KOGA"  ,118 }
    ,{ "PROD"  ,119 }
    ,{ "KUPI"  ,120 }
    ,{ "UJEM"  ,121 }
    ,{ "KOZE"  ,122 }
    ,{ "UDAR"  ,123 }
    ,{ "VRAG"  ,124 }
    ,{ "METO"  ,125 }
    ,{ "TESN"  ,126 }
    ,{ "FITI"  ,127 }
    ,{ "_"     ,255 }
};