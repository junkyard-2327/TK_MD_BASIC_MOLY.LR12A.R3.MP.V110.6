/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 2002-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef SIDBDEFS_H
#define SIDBDEFS_H 
/******************************************************************************
* 
* FILE NAME   : sidbdefs.h
*
* DESCRIPTION :
*
*   This is the definitions of ITEM and KEY for SIDB.
*   In FileSystemManager(FsmDataItem), ITEM is type and KEY is id.
*
* HISTORY     :
*
*   See Log at end of file
*
******************************************************************************/

/*for UI */
/*Temp add 1000 for distinguish UI sidb ITEM*/
#define ITEM_SOUNDS                          1001
#define ITEM_DISPLAY                         1002
#define ITEM_SYSTEM                          1003
#define ITEM_SECURITY                        1004
#define ITEM_CALLSETUP                       1005
#define ITEM_1XDATA                          1006
#define ITEM_VOICESERVICE                    1007
#define ITEM_PHONEINFO                       1008
#define ITEM_OTHERS                          1009
#define ITEM_MESSAGE                         1010
#define ITEM_MESSAGE_QUICKTEXT               1011
#define ITEM_ALARMCLOCK                      1012
#define ITEM_SCHEDULER                       1013
#define ITEM_MANAGEMENT                      1014  /* */
#define ITEM_RECENTCALL                      1015
#define ITEM_CALLPROCESS                     1016
#define ITEM_EDIT_INPUT                      1017
#define ITEM_MODULE_PHONEINFO                1018
#define ITEM_CHVAPP                          1019
#define ITEM_VOICE_MEMO                      1020

#define ITEM_NO_UIM                          1021
#define ITEM_CONTACT_GROUP_NAME              1022
#define ITEM_WORLDTIME                       1023

#define ITEM_PROFILE_DEFAULT                 1024
#define ITEM_PROFILE_OFFICE                  1025
#define ITEM_PROFILE_MEETING                 1026
#define ITEM_PROFILE_CAR                     1027
#define ITEM_PROFILE_SILENCE                 1028
#define ITEM_PROFILE_OUTDOOR                 1029
#define ITEM_PROFILE_CUSTOMIZED              1030  /* Now it is for vibrator*/
#define ITEM_SMART_MESSAGE                   1031
#define ITEM_TDL_ITEMS                       1032
#define ITEM_KEYPADSERV                      1033  // ADDED for keypad service provioning
#define ITEM_NETWORK_SERVICES                1034

/*-----------------------------------------------// */
#define ITEM_HAIER_CONTACT_LIST              1035
#define ITEM_WAP                             1050
#define ITEM_CONTENT_MANAGER                 1051
#define ITEM_MYMEDIA                         1052
#define ITEM_IP_KEY                          1053

#define ITEM_CLIPBOARD                       1054
#define ITEM_PHONEBOOK                       1055

/*for CTA extension*/
#define ITEM_CTA_EXT                         1056


/*for BREW*/
#define ITEM_BREW                            1100 

/*for Extended AT commands*/
#define ITEM_ATCONFIG           1120

#ifdef SYS_OPTION_DM
#define ITEM_DMAT                            1160 
#define ITEM_HFA                             1161 
#define ITEM_TREE                            1162
#define ITEM_PROXY                           1163 
#endif

/*for UIM module*/
#define ITEM_UIM                             2000

/*for DBM */
#define ITEM_DBM_CP_TYPE                     256
#define ITEM_DBM_RF_TYPE                     257

/*###KEY####################*/

/*ITEM_ATCONFIG */
/*******************************************
value type:     ITEM_ATCONFIG
value range:    
value meanings: 
********************************************/
#define KEY_ATCONFIG_SMSMEM1    1
#define KEY_ATCONFIG_SMSMEM2    2
#define KEY_ATCONFIG_SMSMEM3    3

/*WAP */
/*******************************************
value type:     WapClipboardDataT
value range:    
value meanings: buffer 256 + 1 + 1 bytes
********************************************/
#define KEY_WAP_CLIPBOARD    1

/*******************************************
value type:     SidbStringT
value range:    
value meanings: 
********************************************/
#define KEY_WAP_USER_NAME    2
#define KEY_WAP_PASS_WORD    3
#define KEY_WAP_DIAL_NUMBER  4

#ifdef SYS_OPTION_DM
/* ITEM_DMAT */
#define ITEM_DMAT_OMADM      1

/* ITEM_HFA */
#define ITEM_DMAT_HFA        1
#define ITEM_DM_HFA_FUMO     2

/* ITEM_TREE */
#define ITEM_DM_TREE         1

/* ITEM_PROXY*/
#define ITEM_PROXY_ENABLE    1
#define ITEM_PROXY_ADD       2
#endif

/*ITEM_CONTENT_MANAGER */
/*******************************************
value type:     kal_uint32
value range:    
value meanings: Num of predefined CID
********************************************/
#define KEY_CONTENT_CID_NUM           1

/*******************************************
value type:     kal_uint32
value range:    
value meanings: Total memory capacity of media 
                files (including Java), in Bytes
********************************************/
#define KEY_CONTENT_MEMORY_CAPACITY   2

/*ITEM_MYMEDIA */
/*******************************************
value type:     kal_uint32
value range:    
value meanings: 
********************************************/
#define KEY_MYMEDIA_SORT_BY         1
#define KEY_MYMEDIA_SORT_ASCEND       2

/*ITEM_IP_KEY*/
/*******************************************
value type:     kal_int16
value range:    
value meanings: 
********************************************/
#define KEY_IP_KEY_DEFAULT           1
#define KEY_IP_KEY_POND_ON          2
#define KEY_IP_KEY_PAUSE_TIME      3 
/*******************************************
value type:     SidbStringT
value range:    
value meanings: IP Service NUmber
********************************************/
#define KEY_IP_KEY_NUMBER_START    4 
/*TDL (To do list) */
/*******************************************
value type:     TodoItemC
value range:    N/A
value meanings: Items in todo-list app
********************************************/
#define KEY_TDL_ITEM01    1
#define KEY_TDL_ITEM02    2
#define KEY_TDL_ITEM03    3
#define KEY_TDL_ITEM04    4
#define KEY_TDL_ITEM05    5
#define KEY_TDL_ITEM06    6
#define KEY_TDL_ITEM07    7
#define KEY_TDL_ITEM08    8
#define KEY_TDL_ITEM09    9
#define KEY_TDL_ITEM10    10




/*###KEY####################*/

/*BEGIN FOR PROFILE */
/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,5,10,11
value meanings: 0:off 1:low 2:med low
                3:med 4:high med 5:high 
note:
********************************************/
#define KEY_PROFILE_VOLUME_RINGER    1


/*******************************************
value type:     kal_uint32
value range:    1,2,3,4,5
value meanings: 1:low 2:med low 3:med 4:high med 5:high 
********************************************/
#define KEY_PROFILE_VOLUME_EARPIECE        2
#define KEY_PROFILE_VOLUME_HANDFREE_SPEAKER          3
#define KEY_PROFILE_VOLUME_SPEAKER                 4

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,5
value meanings: 0:off 1:low 2:med low 3:med 4:high med 5:high 
********************************************/
#define KEY_PROFILE_VOLUME_KEYBEEP 5

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,5,....
value meanings: 
********************************************/
#define KEY_PROFILE_CALL_RINGER 6

/*******************************************
value type:     kal_uint32
value range:    1,2,3,4,5
value meanings: 
1:ringer 2:vibrate 3: first vibrate then ringer 4: ringer and vibrate 5:silent
********************************************/
#define KEY_PROFILE_INCOMINGCALL_WAY 7

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,5,....
value meanings: 
********************************************/
#define KEY_PROFILE_SMS_RINGER 8

/*******************************************
value type:     kal_uint32
value range:    1,2,3,4,5
value meanings: 
1:ringer 2:vibrate 3: first vibrate then ringer 4: ringer and vibrate 5:silent
********************************************/
#define KEY_PROFILE_INCOMINGSMS_WAY 9

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:off 1:on
********************************************/
#define KEY_PROFILE_ALERTS_SERVICECHANGE 10
#define KEY_PROFILE_ALERTS_MINUTEBEEP 11
#define KEY_PROFILE_ALERTS_CALLCONNECT 12
#define KEY_PROFILE_ALERTS_BACKTOTOP 13
#define KEY_PROFILE_TONE_POWERONOFF 14


/*******************************************
value type:     kal_uint32
value range:    1,2,3
value meanings: 1:flip open 2:any key 3:send only 
********************************************/
#define KEY_PROFILE_ANSWER_CALL 15

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,5,10,11
value meanings: 0:off 1:low 2:med low
                3:med 4:high med 5:high 
note:
********************************************/
#define KEY_PROFILE_VOLUME_RINGER_SMS    16

/*******************************************
value type:     kal_uint32
value range:    1,2,3,4,5,....
value meanings: 
********************************************/
#define KEY_PROFILE_COLORLIGHT 17

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:off 1:on
********************************************/
#define KEY_PROFILE_ALERTS_DROPPEDCALL 18
#define KEY_PROFILE_ALERTS_ORIGINATIONFAIL 19

/*******************************************
value type:     kal_uint32
value range:    1,2
value meanings: 1:normal 2:long 
********************************************/
#define KEY_PROFILE_KEYTONE 20
#define KEY_PROFILE_BATTERY_WARNING 21
#define KEY_PROFILE_VOLUME_ALERTS 22

#define KEY_PROFILE_TONE_POWERON		23
#define KEY_PROFILE_TONE_POWEROFF	24
#define KEY_PROFILE_ROAM_INDICATOR	25
#define KEY_PROFILE_VOICEMAIL_TONE	26
#define KEY_PROFILE_VOICEMAIL_VIBRATE		27

/*END FOR PROFILE */


/*******************************************
value type:     kal_uint32
value range:    
value meanings: The index of the current world time
********************************************/
#define KEY_WORLDTIME 1


/*BEGIN FOR NO UIM */
/*******************************************
value type:     ukal_uint3232
value range:    
value meanings: 
********************************************/

#define KEY_NOUIM_SLOTCYCLE_INDEX 2 /*kal_uint8      SLOT_CYCLE_INDEXp;  slot cycle index */


/*******************************************
value type:     SidbStringT
value range:    
value meanings: 
********************************************/
#define KEY_NOUIM_ESN  1 /*kal_uint32     ESN;   Electronic Serial Number */

#define KEY_NOUIM_COUNTRY_CODE 3  /*kal_uint16 mcc;  Mobile Country Code  */

#define KEY_NOUIM_NETWORK_CODE 4  /*kal_uint8  imsi_11_12;   7 bit  IMSI_11_12 */

#define KEY_NOUIM_A_KEY 5 /*kal_uint32    A_Key[2];  Binary Authentication Key for CAVE      */
#define KEY_NOUIM_DIR_NUMBER 6 /*kal_uint8     Mdn[16]; MDN - Mobile directory number   */

/*******************************************************************************
      kal_uint16 imsi_s2;               10 bit IMSI_S2 value            
      kal_uint32 imsi_s1;              24 bit IMSI_S1 value               
*******************************************************************************/
#define KEY_NOUIM_PHONE_NUMBER 7

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3 
value meanings: 
  #define ENG_PREF_SYS_A           0
  #define ENG_PREF_SYS_B           1
  #define ENG_PREF_SYS_A_ONLY      2
  #define ENG_PREF_SYS_B_ONLY      3
********************************************/
#define KEY_NOUIM_CHANNEL 8

/*******************************************
value type:     kal_uint32
value range:    0,1 
value meanings: system prefence
  0: home only =false
  1: home only = true
********************************************/
#define KEY_NOUIM_HOMEONLY 9

/*******************************************
value type:     SidbStringT
value range:     
value meanings: SID NID PAIR
      SID + '*' + NID
********************************************/
#define KEY_NOUIM_SIDNID1 10
#define KEY_NOUIM_SIDNID2 11
#define KEY_NOUIM_SIDNID3 12
#define KEY_NOUIM_SIDNID4 13

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3 
value meanings: 
  THE value of CDMA Channel primary A(B) and CDMA Channel secondary A(B)
********************************************/
#define KEY_NOUIM_CHANNEL_PA 14
#define KEY_NOUIM_CHANNEL_PB 15
#define KEY_NOUIM_CHANNEL_SA 16
#define KEY_NOUIM_CHANNEL_SB 17 
/*END FOR NO UIM */


/*PIN */
/*******************************************
value type:     SidbStringT
value range:    ----
value meanings: PIN code
********************************************/
#define KEY_PIN1 1 
/*******************************************
value type:     char[16]
value range:    ----
value meanings: code generated from IMSI
********************************************/
#define KEY_UIM_ID 2 
/*PHONE INFO */
/*******************************************
value type:     SidbStringT*
value range:    the number
value meanings: the number 
********************************************/
#define KEY_PHONEINFO_NUMBER 1
#define KEY_PHONEINFO_SWVERSION 2
#define KEY_PHONEINFO_HWDVERSION 3
#define KEY_PHONEINFO_PRLVERSION 4
#define KEY_PHONEINFO_PRIVERSION 5
#define KEY_PHONEINFO_SID        6
#define KEY_PHONEINFO_NID        7
#define KEY_PHONEINFO_KAL_TRUE_SWVERSION     8

#define KEY_PHONEINFO_PRL1_VERSION 9
#define KEY_PHONEINFO_PRL2_VERSION 10
#define KEY_PHONEINFO_CFG_VERSION 11 
/*:::  21 IS USED FOR SCRIPT VERSION*/

/* MODULE PHONEINFO*/
/* for manufacture test mode */
/*******************************************
value type:   char*
value range:  char[16]
value meanings: 
********************************************/
#define KEY_BARCODE     1 
/*******************************************
value type:   kal_uint8
value range:  0 or 1 
value meanings: if have checked barcode,value is 1
********************************************/
#define KEY_BARCODE_WRITE_CHECKED  2 
/*******************************************
value type:   kal_uint8
value range:  0 or 1 
value meanings: if have calibrated,value is 1
********************************************/
#define KEY_CALIBRATION_CHECKED   3 
/*******************************************
value type:   kal_uint8
value range:  0 or 1 
value meanings: if have rf checked,value is 1
********************************************/
#define KEY_RF_PERFORMANCE_CHECKED 4 
/*******************************************
value type:   kal_uint8
value range:  0 or 1 
value meanings: if esn checked,value is 1
********************************************/
#define KEY_ESN_IMSI_CHECKED    5


#define KEY_CUST_DEFINE_1    6 
#define KEY_CUST_DEFINE_2    7 
#define KEY_CUST_DEFINE_3    8


/********
The following is a list of SIDB commands:
1. "ETS, Id=CP FFS SIDB WRITE, type=18, id=1,length=8"    -write barcode number;
2. "ETS, Id=CP FFS SIDB WRITE, type=18, id=2,length=1"    -barcode written flag;
3. "ETS, Id=CP FFS SIDB WRITE, type=18, id=3,length=1,"    -calibration pass flag;
4. "ETS, Id=CP FFS SIDB WRITE, type=18, id=4,length=1"    -RF testing pass flag;
5.  "ETS, Id=CP FFS SIDB WRITE, type=18, id=5, length=1"    -ESN written flag;
 
5. "ETS, Id=CP FFS SIDB WRITE, type=18, id=6, length=30"    -write AMTS version info (if the length of version info is less than 30, insert '0'. Same rule for all string info.);
6. "ETS, Id=CP FFS SIDB WRITE, type=18, id=7,length=30"    -write default.ini file version;
7. "ETS, Id=CP FFS SIDB WRITE, type=18, id=8,length=1"    -write MMI Test flag;
8. "ETS, Id=CP FFS SIDB WRITE, type=18, id=9,length=30"    -write VPSTGo version info;
9. "ETS, Id=CP FFS SIDB WRITE, type=18, id=10,length=30"    -write VPSTGo configuration file version;
***********/ 

#define KEY_KDS_OR_kyocera    12             /* 0x31: KDS    0x32  Kyocera */

/*sounds */
/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,5,....
value meanings: 
********************************************/
#define KEY_RINGER_CALLER 1
#define KEY_RINGER_NOCALLER 2
#define KEY_RINGER_RESTRICT 3

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,5,10,11
value meanings: 0:off 1:low 2:med low
                3:med 4:high med 5:high 10:vibrate 11 :vibrate and high
note:
********************************************/
#define KEY_VOLUME_RINGER 4

/*******************************************
value type:     kal_uint32
value range:    1,2,3,4,5
value meanings: 1:low 2:med low 3:med 4:high med 5:high 
********************************************/
#define KEY_VOLUME_EARPIECE 5
#define KEY_VOLUME_HANDFREE_SPEAKER 6
#define KEY_VOLUME_SPEAKER 7


/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,5
value meanings: 0:off 1:low 2:med low 3:med 4:high med 5:high 
********************************************/
#define KEY_VOLUME_KEYBEEP 8

/*by raynm */
/************************************************************************
value type: kal_bool
value range: KAL_TRUE, KAL_FALSE
value meanings :  KAL_TRUE: vibrate on, KAL_FALSE: vibrate off
************************************************************************/
#define KEY_SOUND_VIBRATE 9

/************************************************************************
value type: kal_uint32
value range: 
value meanings :
************************************************************************/

#define KEY_SOUND_PATH 10


/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:off 1:on
********************************************/
#define KEY_ALERTS_SERVICECHANGE 13
#define KEY_ALERTS_MINUTEBEEP 14
#define KEY_ALERTS_CALLCONNECT 15
#define KEY_ALERTS_BACKTOTOP 16
#define KEY_TONE_POWERONOFF 17

/*******************************************
value type:     kal_uint32
value range:    1,2
value meanings: 1:normal 2:long 
********************************************/
#define KEY_KEYTONE 18

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,5,....
value meanings: 
********************************************/
#define KEY_GROUP_NO_RINGER 19
#define KEY_GROUP_FAMILY_RINGER 20
#define KEY_GROUP_FRIENDS_RINGER 21
#define KEY_GROUP_COLLEAGUES_RINGER 22
#define KEY_GROUP_VIP_RINGER 23
#define KEY_GROUP_RESERVED1_RINGER 24
#define KEY_GROUP_RESERVED2_RINGER 25

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,....
value meanings: AlarmClock Ringer
********************************************/
#define ALARM_VOICE 26

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:Burst 1:Continue
********************************************/
#define KEY_DTMF_MODE 27

/*******************************************
value type:     kal_uint32
value range:    24,25,26,27,28,28,30
value meanings: the profiles item
********************************************/
#define KEY_PROFILES_ITEM   50
#define KEY_PROFILES_ITEM_OLD 51 /*FOR vibrate*/

/*******************************************
value type:     kal_uint32
value range:    0, 1
value meanings:0: off, 1: on
********************************************/
#define KEY_ALERTS_CALLDISCONNECT 52

/*DISPLAY */
/*******************************************
value type:     SidbStringT
value range:    none
value meanings: banner text 
********************************************/
#define KEY_BANNER_PERSONAL 1

/*******************************************
value type:     kal_uint32
value range:    0,1,7000,15000,30000
value meanings: 7000:7 seconds 15000:15 seconds 30000:30 seconds
                0:always off 1: on flip open
********************************************/
#define KEY_MAINLCD_TIMER 2

/****to do:front lcd:timer ,patterns****/

/*******************************************
value type:     kal_uint32
value range:    0,25,50,75,100
value meanings: 0:0% 25:25% 50:50% 75:75% 100:100%
********************************************/
#define KEY_MAINLCD_BRIGHTNESS 3

/*******************************************
value type:     kal_uint32
value range:    none
value meanings: the picture or animation index
********************************************/
#define KEY_SCREEN_WALLPAPER 4
#define KEY_SCREEN_POWERON 5
#define KEY_SCREEN_POWEROFF 6

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4
value meanings: 0:default 1:green 2:violet 3:orange 4:black
********************************************/
#define KEY_THEME_COLOR 7

/*************fonts*************************/

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:english 1:spanish
********************************************/
#define KEY_LANGUAGE 8

/*******************************************
value type:     ukal_uint3232
value range:    1,2,3,4
value meanings: 1:2 minutes 2:10 minutes 3:30 minutes 4:always on
********************************************/
#define KEY_POWERSAVER 9


/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:off 1:on
********************************************/
#define KEY_STATUS_LIGHT 10

/*******************************************
value type:     kal_uint32
value range:    1,2,3,4,5
value meanings: 
********************************************/
#define KEY_MAINLCD_CONTRAST 11

/*******************************************
value type:     Ukal_int32
value range:    0,1,2
value meanings: 
 0: menu list only text
 1: large icon list  
 2: large icon style1
********************************************/
#define KEY_MAINMENU_STYLE 12 
/*1 Venezuela 0 others latam country*/
#define KEY_LATAM_VENEZUELA 13

/*******************************************
value type:     Ukal_int32
value range:    0,1,2,3,4,....
value meanings: 
different type LCD
********************************************/
#define KEY_LCD_TYPE 14

/*******************************************
value type:     Ukal_int32
value range:    0,1,
value meanings: 0: Use PWM to turn off back light
                1: Use GPIO28 to turn off back light
different type LCD
********************************************/
#define KEY_LCD_BL_USE_GPIO 15

/*******************************************
value type:     Ukal_int32
value range:    0,1,
value meanings: 	0: ERI Banner off.
							1: ERI Banner on.
********************************************/
#define KEY_BANNER_ERI 16

/*******************************************
value type:     kal_uint32
value range:    0,1,7000,15000,30000
value meanings: 7000:7 seconds 15000:15 seconds 30000:30 seconds
                0:always off 1: on flip open
********************************************/
#define KEY_KEYPAD_TIMER 17

/*******************************************
value type:     Ukal_int32
value range:    0,1,
value meanings: 	0: Number on start off.
							1: Number on start on.
********************************************/
#define KEY_NUMBER_ON_START 18

/*******************************************
value type:     kal_uint32
value range:    1,2,3,4,5
value meanings: 
********************************************/
#define KEY_SUBLCD_CONTRAST 19

/*******************************************
value type:     kal_uint32
value range:    0, 1
value meanings: 0: Normal(default), 1:Large
********************************************/
#define KEY_DIAL_FONTS 20



/*SYSTEM */
/*******************************************
value type:     kal_uint32
value range:    1,2,3
value meanings: 1:home only 2:automatic a 3:automatic b
********************************************/
#define KEY_SYSTEM 1

/*******************************************
value type:     kal_uint32
value range:    1,2
value meanings: 1:nam1 2:nam2
********************************************/
#define KEY_NAM 2

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:OFF 1:ON
********************************************/
#define KEY_NAM_AUTO 3

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,5,6
value meanings: 	0:My Ringtones
							1:My Sounds
							2:Inbox
							3:Settings & Tools
							4:Alarm Clock
							5:Calculator
							6:Calendar
********************************************/
#define KEY_LEFT_SHORTCUT 	4
#define KEY_UP_SHORTCUT 		5
#define KEY_RIGHT_SHORTCUT 	6
#define KEY_DOWN_SHORTCUT 	7

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 	0:KAL_FALSE
							1:KAL_TRUE
********************************************/
#define KEY_STANDALONE 	8



/***********serving system********************/

/*security */
/*******************************************
value type:     SidbStringT
value range:    none
value meanings: the lock code
********************************************/
#define KEY_LOCKCODE 1

/*******************************************
value type:     kal_uint32
value range:    1,2,3
value meanings: 1:unlock 2:lock 3:on power up
********************************************/
#define KEY_LOCKPHONE 2

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:off 1:on
********************************************/
#define KEY_RESTRICT 3

/*******************************************
value type:     SidbStringT
value range:    none
value meanings: the emergency #s
********************************************/
#define KEY_EMERGENCY_S1 4
#define KEY_EMERGENCY_S2 5
#define KEY_EMERGENCY_S3 6

#define KEY_CALLRESTRICT_MO 7
#define KEY_CALLRESTRICT_MT 8
#define KEY_CALLRESTRICT_LOCAL 9
#define KEY_CALLRESTRICT_LONG 10
#define KEY_CALLRESTRICT_PB 11
#define KEY_CALLRESTRICT_PWD 12 
/*SPC code*/
/*ITEM_SYSTEM*/
#define KEY_SPC_1    13
#define KEY_SPC_2    14
#define KEY_SPC_3    15

#define KEY_MIN_LOCK_TABLE 16    /*25*12  kal_uint8*/ 

#define KEY_SPC_TIMES 		 17 
#define KEY_CTIA						18
/*MANAGEMENT */


/*******************************************
value type:     char
value range:    
value meanings: UIM card's IMSI number
********************************************/ 
/* Security Management */
#define KEY_MANAGEMENT_UIM_ID 1 
/*******************************************
value type:     char
value range:    4--8 lenghth
value meanings: PIN code for the UIM card
********************************************/
#define KEY_MANAGEMENT_RANDOM_PIN 2 
/*******************************************
value type:     kal_uint16
value range:    
value meanings: SID
********************************************/
#define KEY_MANAGEMENT_SID 3 
/*******************************************
value type:     kal_uint16
value range:    
value meanings: NID
********************************************/
#define KEY_MANAGEMENT_NID 4

/*add here for call stats */
#define KEY_MANAGEMENT_CALL_STATS 5

/*******************************************
value type:     kal_uint8
value range:    
value meanings: DND indicator
********************************************/
#define KEY_MANAGEMENT_DND 6 
/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:disable 1:enable
********************************************/
#define KEY_MANAGEMENT_CNIR 7

/*******************************************
value type:      SidbStringT
value range:    
value meanings: CNIR number
********************************************/
#define KEY_MANAGEMENT_CNIR_NUMBER 8/*added by wangxia*/ 


/*call setup */
/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4
value meanings: 0:off(default)  1: 3secs  2: 5secs   3: 7secs  4:10secs
********************************************/
#define KEY_AUTO_RETRY 1

/*******************************************
value type:     kal_uint32
value range:    0,1,2
value meanings: 0:send only 1:flip open 2:any key 3:Auto answer 
********************************************/
#define KEY_ANSWER_CALL 2

/*******************************************
value type:     kal_uint32
value range:    0,3,10
value meanings: 0:off 3: after 3 seconds 10:answering machine
********************************************/
#define KEY_AUTO_ANSWER 3 
/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:disable 1:enable
********************************************/
#define KEY_ONETOUCH_DIAL 4

/*******************************************
value type:     kal_uint32
value range:    1,2
value meanings: 1:standard 2:enhanced
********************************************/
#define KEY_VOICE_PRIVACY 5

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:off 1:on
********************************************/
#define KEY_AUTO_VOLUME 6

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:TTY OFF 1:TTY+FULL 2:TTY+TALK 3:TTY+HEAR 
********************************************/
#define KEY_TTYMODE 7

#define CSPSETTING_DATA 8 
/*******************************************
value type:     kal_uint32
value range:    0 1
value meanings: 0:OFF 1:ON 
********************************************/
#define KEY_CALL_GUARD 9

/*******************************************
value type:     kal_uint32
value range:    0,1,2
value meanings: 0: repeat 1 times, 1: repeat 3 times, 2: repeat 5 times
********************************************/
#define KEY_CALL_REPEAT 9

/*******************************************
value type:     kal_uint32
value range:    
value meanings: Save the old mode before set tty.
********************************************/
#define KEY_TTYMODE_BACKUP 10


/*1XDATA */
/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4
value meanings: 0:off 1:fax in once 2:fax in always 
                3:data in once 4:data in always
********************************************/
#define KEY_DATA_FAX 1

/*******************************************
value type:     kal_uint32
value range:    0,1,2
value meanings: 0:closed 1:usb 2:RS-232C(Com Port)
********************************************/
#define KEY_PORT 2

/*******************************************
value type:     kal_uint32
value range:    1,2,3
value meanings: 1:19200 2:115200 3:230400
********************************************/
#define KEY_PORT_SPEED 3

/*VOICR SERVICES */
/*******************************************
value type:     kal_uint32
value range:    0,1,2
value meanings: 0:disabled 1:flip open 2:key press
********************************************/
#define KEY_VOICEDIAL_PROMPT 1

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:speaker off 1:speaker off
********************************************/
#define KEY_ANSWERING_MACHINE 2

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:un-trained 1:train
********************************************/
#define KEY_TRAINWORDS_YES 3
#define KEY_TRAINWORDS_NO 4

/*others */
/*******************************************
value type:     kal_uint32
value range:    1,2
value meanings: 1:location on 2:e911 only
********************************************/
#define KEY_LOCATION 1

/**********PHONE INFO*************************/

/*message */
/*******************************************
value type:     kal_uint32
value range:    1,2,3
value meanings: 1:auto save 2:prompt 3:do not save
********************************************/
#define KEY_MSG_AUTO_SAVE 1

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:OFF 1:ON
********************************************/
#define KEY_MSG_AUTO_DELETE 2

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:OFF 1:ON
********************************************/
#define KEY_MSG_CALLBACK 3

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:NONE 1:CUSTOMER
********************************************/
#define KEY_MSG_SIGNATURE 4

#define KEY_MSG_SIGNATURE_TEXT  25
/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:OFF 1:ON
********************************************/
#define KEY_MSG_DIRECT_VIEW 5

/*******************************************
value type:     kal_uint32
value range:    1,2,3,4,5
value meanings: 1:VIBRATE ONCE 2:vibrate and sound 3:customer ringer tone
                4:low beep once 5:low beeps
********************************************/
#define KEY_MSG_VOICEMAIL_ALERT 6

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,5,6,7
value meanings: 0:IMMEDIATE 1:3DAYS 2:2DAYS 3:1DAY
                4:12HOURS 5:2HOURS 6:1HOUR 7:30MINUTES
********************************************/
#define KEY_MSG_DEFERRED 7

/*******************************************
value type:     kal_uint32
value range:    0,1,2,3,4,5,6,7
value meanings: 0:DEFAULT 1:30MINUTES 2:1HOUR 3:12HOURS
                4:1DAY 5:2HOURS 6:2DAYS 7:3DAYS
********************************************/
#define KEY_MSG_VALIDITY 8

/*******************************************
value type:     kal_uint32
value range:    1,2
value meanings: 1:NORMAL 2:URGENT.
********************************************/
#define KEY_MSG_PRIORITY 9

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:OFF 1:ON
********************************************/
#define KEY_MSG_2MIN_ALERT 10

/*******************************************
value type:     kal_uint32
value range:    1,2,3
value meanings: 1:T9 WORD 2: ABC 3: 123
********************************************/
#define KEY_MSG_ENTRY_MODE 11

/*******************************************
value type:     SidbStringT
value range:    none
value meanings: the number of mail box of voice
********************************************/
#define KEY_MSG_VOICE_MAILBOX 12

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: 0:OFF 1:ON
********************************************/
#define KEY_MSG_DELIVERY_REPORTS 13

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: the mask of broadcast service category
********************************************/
#define KEY_MSG_BC_SRVCAT 14

/*******************************************
value type:     SidbStringT
value range:    none
value meanings: the address of voice mail
********************************************/
#define KEY_MSG_VOICE_ADDRESS 15

/*******************************************
value type:     SidbStringT
value range:    none
value meanings: Call back number
********************************************/
#define KEY_MSG_CALLBACK_NUMBER 16

/*******************************************
value type:     int
value range:    0,1
value meanings: the ID of message
********************************************/
#define KEY_MSG_ID 17

/*******************************************
value type:     int
value range:    0-160
value meanings: the Length of message
********************************************/
#define KEY_MSG_LENGTH 18

/*******************************************
value type:     int
value range:    0=7bit,1=latin
value meanings: the encode of sending message
********************************************/
#define KEY_MSG_ENCODE 19

/*******************************************
value type:     int
value range:    0=default,1=traffic
value meanings: the channel of sending message
********************************************/
#define KEY_MSG_TRAFFIC 20

/*******************************************
value type:     SidbStringT
value range:    none
value meanings: message storage device,0:UIM 1:FLASH,2,UIM&FLASH
********************************************/
#define KEY_MSG_STOAGE_DEVICE 21

/*QUICK TEXT */
/*******************************************
value type:     kal_uint32
value range:    0,1,2,...
value meanings: the count of dynamic quick text
********************************************/
#define KEY_MSG_QUICKTEXT_DYNAMIC_COUNT 0

/*alarm clock; */

#define ALARM_CLOCK_SET   1
#define ALARM_CLOCK_ON    2

#define ALARM_FIRST_CLOCK 3
#define ALARM_SECOND_CLOCK 4
#define ALARM_THIRD_CLOCK 5
#define ALARM_FOURTH_CLOCK 6 
/*scheduler flags; */
#define SCHEDULER_NUM_COUNT     1
#define SCHEDULER_CLOCK_FIRST_POS 2

/*recent call flags */
#define RECENTCALL_DATA         1
#define CALLTIMERS_DATA         2 
#define LOCKFLAG_DATA            3
/*ITEM_CONTACT==22*/
#define CONTACT_GROUP_NAME      1
#define KEY_CONTACT_NUMBER_MATCH_LENGTH     2

#define CONTACT_LIST            3
/*ITEM_PHONEBOOK=55*/
#define PHONEBOOK_GROUP           1
#define PHONEBOOK_SPEEDDIAL       2
#define EMERGENCY_CONTACT_NUMBER  3

/*Call Process */
/*******************************************
value type:     kal_uint32
value range:    0,1,2,...
value meanings: Current call time
********************************************/
#define KEY_CALLPROCESS_CURRENT_CALL_TIME       1

/*******************************************
value type:     kal_uint32
value range:    0,1,2,...
value meanings: Total call time
********************************************/
#define KEY_CALLPROCESS_TOTAL_CALL_TIME         2

/*******************************************
value type:     SidbStringT
value range:    will contain PHB_NUMBER_LEN digits(1-9, *, #, T, P)
value meanings: Resend number
********************************************/
#define KEY_CALLPROCESS_RESEND_NUMBER           3

/*******************************************
value type:     kal_uint32
value range:    0,1,2,...
value meanings: remain input means;
********************************************/
#define EDIT_INPUT_NOW                         1

/*******************************************
value type:     kal_uint32
value range:    0,1
value meanings: KAL_FALSE,KAL_TRUE,whether save received vcard directly on phb
********************************************/
#define KEY_VCARD_RECEIVE                         1

#define KEY_KEYPADSERV_ESN_NO                0
#define KEY_KEYPADSERV_SLOTCYCLE_INDEX       1
#define KEY_KEYPADSERV_PHONE_MODEL           2 
/*NAM 1*/
#define KEY_KEYPADSERV_NAM1_MIN_NUMBER       3
#define KEY_KEYPADSERV_NAM1_HOME_SID         4
#define KEY_KEYPADSERV_NAM1_NAME             5
#define KEY_KEYPADSERV_NAM1_SERVICE_SEC_CODE 6
#define KEY_KEYPADSERV_NAM1_COUNTRY_CODE     7
#define KEY_KEYPADSERV_NAM1_NMSID            8
#define KEY_KEYPADSERV_NAM1_KAL_TRUE_IMSI_MCC    9
#define KEY_KEYPADSERV_NAM1_KAL_TRUE_IMSI_NMSID  10
#define KEY_KEYPADSERV_NAM1_PRL_ENABLE       11
#define KEY_KEYPADSERV_NAM1_DIR_NUMBER       12
#define KEY_KEYPADSERV_NAM1_PRIMARY_CH_A     13
#define KEY_KEYPADSERV_NAM1_SECONDARY_CH_A   14
#define KEY_KEYPADSERV_NAM1_PRIMARY_CH_B     15
#define KEY_KEYPADSERV_NAM1_SECONDARY_CH_B   16
#define KEY_KEYPADSERV_NAM1_HOME_SYS_REQ     17
#define KEY_KEYPADSERV_NAM1_FORN_SID_REQ     18
#define KEY_KEYPADSERV_NAM1_FORN_NID_REQ     19
#define KEY_KEYPADSERV_NAM1_ACC_OL_CLASS     20

#define KEY_KEYPADSERV_NAM1_HOME_SIDNID1     21
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID2     22
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID3     23
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID4     24
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID5     25
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID6     26
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID7     27
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID8     28
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID9     29
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID10    30
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID11    31
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID12    32
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID13    33
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID14    34
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID15    35
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID16    36
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID17    37
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID18    38
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID19    39
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID20    40

#define KEY_KEYPADSERV_NAM1_LOCKOUT_SIDNID1  51
#define KEY_KEYPADSERV_NAM1_LOCKOUT_SIDNID2  52
#define KEY_KEYPADSERV_NAM1_LOCKOUT_SIDNID3  53
#define KEY_KEYPADSERV_NAM1_LOCKOUT_SIDNID4  54
#define KEY_KEYPADSERV_NAM1_LOCKOUT_SIDNID5  55
#define KEY_KEYPADSERV_NAM1_LOCKOUT_SIDNID6  56
#define KEY_KEYPADSERV_NAM1_LOCKOUT_SIDNID7  57
#define KEY_KEYPADSERV_NAM1_LOCKOUT_SIDNID8  58
#define KEY_KEYPADSERV_NAM1_LOCKOUT_SIDNID9  59
#define KEY_KEYPADSERV_NAM1_LOCKOUT_SIDNID10 60
#define KEY_KEYPADSERV_NAM1_PHONE_NUMBER     61
#define KEY_KEYPADSERV_NAM1_PREFERRED        62
#define KEY_KEYPADSERV_NAM1_MINLOCK_ENABLE   63
#define KEY_KEYPADSERV_NAM1_A_KEY            64
#define KEY_KEYPADSERV_NAM1_HOME_SIDNID_NUM  65
#define KEY_KEYPADSERV_NAM1_LOCKOUT_SIDNID_NUM  66
#define KEY_KEYPADSERV_NAM1_CDMA_HOME_SID    67     /* for Peru: in Abbrev NAM : PSid[0]  */
#define KEY_KEYPADSERV_NAM1_CDMA_HOME_NID    68     /* for Peru: in Abbrev NAM : PNid[0]  */

/*NAM 2*/
#define KEY_KEYPADSERV_NAM2_MIN_NUMBER       73
#define KEY_KEYPADSERV_NAM2_HOME_SID         74
#define KEY_KEYPADSERV_NAM2_NAME             75
#define KEY_KEYPADSERV_NAM2_SERVICE_SEC_CODE 76
#define KEY_KEYPADSERV_NAM2_COUNTRY_CODE     77
#define KEY_KEYPADSERV_NAM2_NMSID            78
#define KEY_KEYPADSERV_NAM2_KAL_TRUE_IMSI_MCC    79
#define KEY_KEYPADSERV_NAM2_KAL_TRUE_IMSI_NMSID  80
#define KEY_KEYPADSERV_NAM2_PRL_ENABLE       81
#define KEY_KEYPADSERV_NAM2_DIR_NUMBER       82
#define KEY_KEYPADSERV_NAM2_PRIMARY_CH_A     83
#define KEY_KEYPADSERV_NAM2_SECONDARY_CH_A   84
#define KEY_KEYPADSERV_NAM2_PRIMARY_CH_B     85
#define KEY_KEYPADSERV_NAM2_SECONDARY_CH_B   86
#define KEY_KEYPADSERV_NAM2_HOME_SYS_REQ     87
#define KEY_KEYPADSERV_NAM2_FORN_SID_REQ     88
#define KEY_KEYPADSERV_NAM2_FORN_NID_REQ     89
#define KEY_KEYPADSERV_NAM2_ACC_OL_CLASS     90

#define KEY_KEYPADSERV_NAM2_HOME_SIDNID1     91
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID2     92
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID3     93
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID4     94
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID5     95
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID6     96
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID7     97
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID8     98
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID9     99
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID10    100
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID11    101
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID12    102
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID13    103
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID14    104
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID15    105
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID16    106
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID17    107
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID18    108
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID19    109
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID20    110

#define KEY_KEYPADSERV_NAM2_LOCKOUT_SIDNID1  111
#define KEY_KEYPADSERV_NAM2_LOCKOUT_SIDNID2  112
#define KEY_KEYPADSERV_NAM2_LOCKOUT_SIDNID3  113
#define KEY_KEYPADSERV_NAM2_LOCKOUT_SIDNID4  114
#define KEY_KEYPADSERV_NAM2_LOCKOUT_SIDNID5  115
#define KEY_KEYPADSERV_NAM2_LOCKOUT_SIDNID6  116
#define KEY_KEYPADSERV_NAM2_LOCKOUT_SIDNID7  117
#define KEY_KEYPADSERV_NAM2_LOCKOUT_SIDNID8  118
#define KEY_KEYPADSERV_NAM2_LOCKOUT_SIDNID9  119
#define KEY_KEYPADSERV_NAM2_LOCKOUT_SIDNID10 120
#define KEY_KEYPADSERV_NAM2_PHONE_NUMBER     121
#define KEY_KEYPADSERV_NAM2_PREFERRED        122
#define KEY_KEYPADSERV_NAM2_MINLOCK_ENABLE   123
#define KEY_KEYPADSERV_NAM2_A_KEY   124
#define KEY_KEYPADSERV_SPC1_ERR_MAX_TIMES    125
#define KEY_KEYPADSERV_SPC2_ERR_MAX_TIMES    126
#define KEY_KEYPADSERV_SPC1_ERR_TIMES        127
#define KEY_KEYPADSERV_SPC2_ERR_TIMES        128
#define KEY_KEYPADSERV_NAM2_HOME_SIDNID_NUM  129
#define KEY_KEYPADSERV_NAM2_LOCKOUT_SIDNID_NUM  130
#define KEY_KEYPADSERV_SPC3_ERR_MAX_TIMES    131   /*zhengyi*/
#define KEY_KEYPADSERV_SPC3_ERR_TIMES        132   /*zhengyi*/

#define KEY_KEYPADSERV_NAM2_CDMA_HOME_SID    133     /* for Peru: in Abbrev NAM : PSid[0]  */
#define KEY_KEYPADSERV_NAM2_CDMA_HOME_NID    134     /* for Peru: in Abbrev NAM : PNid[0]  */

#define KEY_KEYPADSERV_SERVICE_OPTION        140
#define KEY_KEYPADSERV_HOME_ORIG_SERVICE_OPTION        141
#define KEY_KEYPADSERV_ROAM_ORIG_SERVICE_OPTION        142
#define KEY_KEYPADSERV_HOME_PAGE_SERVICE_OPTION        143
/*end ITEM_KEYPADSERV*/
#ifdef SYS_OPTION_VOICE_MEMO 
/*VOICE MEMO */
/*how many files have been stored */
#define VOICE_MEMO_ONLINE_FILES        1
#define VOICE_MEMO_OFFLINE_FILES       2
#define VOICE_MEMO_ANSWER_MACHINE       3
#endif 
/*******************************************
value type:     SidbStringT
value range:    
value meanings: call waiting and call forwording codes.
********************************************/
#define KEY_CALL_WAITING_ENABLE                     0
#define KEY_CALL_WAITING_DISABLE                    1

#define KEY_CALL_FORWARD_UNCONDITIONAL_ENABLE       2
#define KEY_CALL_FORWARD_UNCONDITIONAL_DISABLE      3

#define KEY_CALL_FORWARD_NOANWER_ENABLE             4
#define KEY_CALL_FORWARD_NOANWER_DISABLE            5

#define KEY_CALL_FORWARD_BUSY_ENABLE                6
#define KEY_CALL_FORWARD_BUSY_DISABLE               7

#define KEY_CALL_FORWARD_END                        8

#define KEY_CALL_FORWARD_UNREACHABLE_ENABLE         9
#define KEY_CALL_FORWARD_UNREACHABLE_DISABLE        10
#define KEY_TEST_CALL_PHONE_NUMBER                  11


/*BREW*/
#define KEY_BREW_CFGI_DNS_IP1                       0
#define KEY_BREW_CFGI_DNS_IP2                       1
#define KEY_BREW_CFGI_DOWNLOAD                      2
#define KEY_BREW_CFGI_SUBSCRIBERID                  3
#define KEY_BREW_CFGI_MOBILEINFO                    4
#define KEY_BREW_CFGI_AUTOSTART                     5
#define KEY_BREW_CFGI_BUSY_CURSOR_OFFSET            6
#define KEY_BREW_CFGI_DOWNLOAD_BUFFER               7
#define KEY_BREW_CFGI_HTTP_BUFFER                   8
#define KEY_BREW_CFGI_NET_CONNTIMEOUT               9
#define KEY_BREW_CFGI_SUBSCRIBERID_LEN              10
#define KEY_BREW_CFGI_MAX_DISPATCH_TIME             11
#define KEY_BREW_CFGI_MIN_IDLE_TIME                 12
#define KEY_BREW_CFGI_SLEEP_TIMER_RESOLUTION        13
#define KEY_BREW_CFGI_SYSMEM_SIZE                   14
#define KEY_BREW_CFGI_DOWNLOAD_FS_INFO              15
#define KEY_BREW_CFGI_SCREEN_SAVER                  16
#define KEY_BREW_CFGI_DISALLOW_DORMANCY             17
#define KEY_BREW_CFGI_DORMANCY_NO_SOCKETS           18
#define KEY_BREW_CFGI_CLOSE_KEYS                    19
#define KEY_BREW_CFGI_FILE_CACHE_INFO               20
#define KEY_BREW_CFGI_GPSONE_TRANSPORT              21
#define KEY_BREW_CFGI_GPSONE_SVRIP                  22
#define KEY_BREW_CFGI_GPSONE_SVRPORT                23
#define KEY_BREW_CFGI_GPSONE_LOCK                   24
#define KEY_BREW_CFGI_MODULE_FSLIMIT                25
#define KEY_BREW_CFGI_DATA_NETWORK                  26
#define KEY_BREW_CFGI_CARDID_LEN                    27
#define KEY_BREW_CFGI_CARDID                        28
#define KEY_BREW_CFGI_DEBUG_KEY                     29
#define KEY_BREW_CFGI_OFFLINE_PPP_TIMEOUT           30
#define KEY_BREW_CFGI_APPX5_ON                      31
#define KEY_BREW_CFGI_APPX5_MPC_ADDR                32
#define KEY_BREW_CFGI_APPX5_MPC_PORT                33
#define KEY_BREW_CFGI_LANGUAGE_ID                   34
#define KEY_BREW_CFGI_PPP_USER                      35
#define KEY_BREW_CFGI_PPP_PASkal_int16                  36
#define KEY_BREW_CFGI_PPP_DIAL_NUMBER               37
#define KEY_BREW_CFGI_LCD_WIDTH                     38
#define KEY_BREW_CFGI_LCD_HEIGHT                    39
#define KEY_BREW_CFGI_MENU_TEXT_SCROLL_TIME         40

/*for  clipboard */
/******************************************
value type: char*
value range: char[1024]
value meanings: content of the clipboard
******************************************/
#define KEY_CLIPBOARD_CONTENT   1

/*****************************************
value type: kal_uint32
value range: NULL
value meaning: parameter of clipboard string
*****************************************/
#define KEY_CLIPBOARD_PARAM    2

/*for UIM module*/
#define KEY_UIM_HOTPLUG_DETECTION_EN 1

/*****************************************************************************
* $Log: sidbdefs.h $
* Revision 1.20  2006/07/06 09:11:36  yli
* modified value
* Revision 1.19  2006/06/17 10:32:52  binye
* Merge0616
* Revision 1.4  2006/06/14 17:47:37  yli
* add a item for ctia logo.
* Revision 1.3  2006/06/13 18:50:13  yli
* add a item for spc retry times.
* Revision 1.2  2006/06/06 19:11:19  hongzhang
* merged from hangzhou
* Revision 1.18  2006/06/06 13:16:04  wjzhang
* modified a spelling mistake.
* Revision 1.1  2006/06/04 13:13:30  hongzhang
* Initial revision
* Revision 1.17  2006/05/26 13:25:44  wjzhang
* changed the note of KEY_ANSWER_CALL
* Revision 1.16  2006/05/19 16:12:02  yli
* Support##20022002TestMode
* Revision 1.15  2006/05/12 13:54:33  dli
* Add TTY mode backup.
* Revision 1.14  2006/05/10 16:19:17  zfu
* add emergency contact
* Revision 1.13  2006/04/29 21:46:32  zfu
* Fixed CR#174,#175,#180
* Revision 1.12  2006/04/22 13:21:38  dli
* Modify some calls setting.
* Revision 1.11  2006/04/14 17:19:06  yli
* add  some keyid
* Revision 1.10  2006/04/13 13:47:51  dli
* Modify the value of KEY_CALL_REPEAT.
* Revision 1.9  2006/04/04 19:40:36  yli
* add some keyid
* Revision 1.8  2006/03/29 17:01:53  dli
* Add phone setting.
* Revision 1.7  2006/03/27 19:56:42  dli
* Add calls setting.
* Revision 1.6  2006/03/24 17:41:22  dli
* Add Themes, nuber on startup, contrast,in-call sounds.
* Revision 1.5  2006/03/23 20:02:49  dli
* Add Wallpaper and Themes.
* Revision 1.4  2006/03/23 13:44:22  zfu
* add ITEM_PHONEBOOK ,
* PHONEBOOK_GROUP ,
* PHONEBOOK_SPEEDDIAL
* Revision 1.3  2006/03/18 04:58:22  dli
* Add ERI Banner and personal banner.
* Revision 1.2  2006/03/12 17:58:01  dli
* Add entry lock.
* Revision 1.1  2006/03/02 11:29:29  hongzhang
* Initial revision
*****************************************************************************/

/*****************************************************************************
* End of File
*****************************************************************************/
#endif

/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_hxwang_href14861\1 2010-09-28 09:31:24 GMT hxwang
** HREF#14861**/
/**Log information: \main\CBP7FeaturePhone\4 2010-09-28 09:42:25 GMT zlin
** Merge href 14861.**/

