/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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

/*******************************************************************************
 * Filename:
 * ---------
 *   ccci_ch_cfg.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Defines the CCCI channels
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 09 19 2019 viney.kaushik
 * [MOLY00441703] network latency optimization 3 arrows porting- MD CCCI
 * 	
 * 	add screen touch/disp channel.
 *
 * 05 29 2019 viney.kaushik
 * [MOLY00409700] ??patch??MT6768?????modem?????????CCM-driver
 * 	
 * 	add new TTY device for MIPI. add system message.
 *
 * 03 01 2019 viney.kaushik
 * [MOLY00387502] ?Bingo?SCP???????
 * 	
 * 	add new SCP channel for CC state.
 *
 * 01 10 2019 viney.kaushik
 * [MOLY00378182] [MT6293] UDC feature patch back to R3
 * 	
 * 	add UDC feature ID and tty channel / replace ccci spinlock with HWITC.
 *
 * 08 09 2017 chien-hui.lu
 * [MOLY00268913] [BIP] BIP over Wifi
 * [CCCI_TTY][CCCI] add CCCI TTY port for BIP.
 *
 * 05 24 2017 chien-hui.lu
 * [MOLY00251469] [UMOLY] [Add Module] ssds
 * [CCCI_TTY][CCCI] add TTY port for XUI.
 *
 * 04 27 2017 chien-hui.lu
 * [MOLY00245508] [CCCI] file history log has unexpected charactor
 * [CCCI] file history log has charactor encoding issue.
 *
 * 02 15 2017 chien-hui.lu
 * [MOLY00220291] [CCCI][CCCI_TTY] add TTY port for 93 MD
 * [CCCI TTY][CCCI] add tty port for 93 MD IMSM & WOA.
 *
 * 01 04 2017 chien-hui.lu
 * [MOLY00220000] merge CSCD into trunk
 * [CCCI][CCCI_TTY] add CCCI TTY port and CSCD Core related.
 *
 * 11 11 2016 cs.huang
 * [MOLY00204430] [CCCI] MT6293 change
 * [CCCI] Add CCMNI interface for multi IMS emerengy PDN
 *
 * 10 04 2016 cs.huang
 * [MOLY00205087] [CCMNI] Add more NETIFs for multi IMS emergency PDN
 * [CCCI] Add CCMNI interface for multi IMS emerengy PDN
 *
 * 07 05 2016 cs.huang
 * [MOLY00187383] [MDT] MD direct tethering porting to UMOLY
 * [CCCI] MDT support
 *
 *
 *
 * 01 25 2016 cs.huang
 * [MOLY00162367] [CCISM] add CCISM
 * [CCCI] Add CCISM related code
 *
 *
 * 07 29 2015 hsin-jun.tang
 * [MOLY00132873] [CCCI] DHL 2ed path channel for hugeland autotest tool
 * [CCCI] DHL 2ed path channel - UMOLY
 *
 * 11 13 2014 cs.huang
 * [MOLY00084393] [UMOLY][CCCI] CCCI common header arrangement
 * Merging
 * 	
 * 	//UMOLY/TRUNK/UMOLY/mcu/pcore/interface/service/hif/ccci_ch_cfg.h
 * 	
 * 	to //UMOLY/TRUNK/UMOLY/mcu/common/interface/service/hif/ccci_ch_cfg.h
 *
 * 06 11 2014 ian.cheng
 * [MOLY00069231] [TK6291] MOLY CCCI merge
 * 	TK6291 CCCI migration
 *
 * 05 14 2014 ap.wang
 * [MOLY00063866] [ROME] data/ackqueue IT
 * CCMNI Fast Ack Patch and linkdown fast reload
 *
 * 03 28 2014 ian.cheng
 * [MOLY00061219] [MT6582][SGLTE][CMCC FT][SZ][TC_3.1.8]DFTP(Fail [FOCUS ISSUE]
 * 	[CCMNI ACK Fast Path]
 *
 * 12 05 2013 cs.huang
 * [MOLY00049049] [MT6595] [CCCI] Add ICUSB feature
 * [CCCI] Add ICUSB feature.
 *
 * 11 26 2013 box.wu
 * [MOLY00047966] [MT6595] patch for CCCI over CLDMA
 * add exception, tty, ICUSB.
 *
 * 05 30 2013 ap.wang
 * [MOLY00024263] [CCCI IMS] Add CCCI IMS Data Control channel
 * [CCCI_IMS] Add IMS_DCTRL channel
 *
 * 01 28 2013 ap.wang
 * [MOLY00009488] [CCCI] CCCI_IMS ch rename
 * [CCCI] CCCI_IMS channel rename
 *
 * 01 17 2013 ian.cheng
 * [MOLY00008993] [CCCI_SRV] CCCI_IMS 1st version
 * [CCCI] CCCI_IMS 1st verison loopback support
 *
 * 01 11 2013 ap.wang
 * [MOLY00008683] [CCCI] CCCI new feature check in
 * [CCCI] Modify CCCI channel config
 ****************************************************************************/
#ifndef _CCCI_CH_CFG_H
#define _CCCI_CH_CFG_H

/*!
 *  @brief CCCI_CHANNEL_T CCCI logical channel enum
 *            NOTICE: Negotiations With AP Owner Before Modification
 */
#define CCCI_MD_AP_BASE 0x0000
#define CCCI_MD_SCP_BASE 0x1000 //CCCI_PEER_ID_MD_SCP:1
#define CCCI_MAX_CHANNEL ((CCCI_MD_AP_MAX_CHANNEL>CCCI_MD_SCP_MAX_CHANNEL)?CCCI_MD_AP_MAX_CHANNEL:CCCI_MD_SCP_MAX_CHANNEL)
typedef enum
{
    CCCI_CONTROL_CHANNEL            = CCCI_MD_AP_BASE,//=[00] 0x0000
    CCCI_CONTROL_CHANNEL_ACK        ,//=[01] 0x0001
    CCCI_SYSTEM_CHANNEL             ,//=[02] 0x0002
    CCCI_SYSTEM_CHANNEL_ACK         ,//=[03] 0x0003
    CCCI_PCM_CHANNEL                ,//=[04] 0x0004
    CCCI_PCM_CHANNEL_ACK            ,//=[05] 0x0005
    CCCI_TST_CHANNEL                ,//=[06] 0x0006
    CCCI_TST_ACK_CHANNEL            ,//=[07] 0x0007
    CCCI_TR_CHANNEL                 ,//=[08] 0x0008
    CCCI_TR_ACK_CHANNEL             ,//=[09] 0x0009
    CCCI_AT_CHANNEL_TX              ,//=[10] 0x000a
    CCCI_AT_ACK_CHANNEL_TX          ,//=[11] 0x000b
    CCCI_AT_CHANNEL_RX              ,//=[12] 0x000c
    CCCI_AT_ACK_CHANNEL_RX          ,//=[13] 0x000d
    CCCI_FS_CHANNEL                 ,//=[14] 0x000e
    CCCI_FS_ACK_CHANNEL             ,//=[15] 0x000f
    CCCI_PMIC_CHANNEL               ,//=[16] 0x0010
    CCCI_PMIC_ACK_CHANNEL           ,//=[17] 0x0011
    CCCI_UEM_CHANNEL                ,//=[18] 0x0012
    CCCI_UEM_ACK_CHANNEL            ,//=[19] 0x0013
    CCCI_CCMNI1_RX                  ,//=[20] 0x0014
    CCCI_CCMNI1_RX_ACK              ,//=[21] 0x0015
    CCCI_CCMNI1_TX                  ,//=[22] 0x0016
    CCCI_CCMNI1_TX_ACK              ,//=[23] 0x0017
    CCCI_CCMNI2_RX                  ,//=[24] 0x0018
    CCCI_CCMNI2_RX_ACK              ,//=[25] 0x0019
    CCCI_CCMNI2_TX                  ,//=[26] 0x001a
    CCCI_CCMNI2_TX_ACK              ,//=[27] 0x001b
    CCCI_CCMNI3_RX                  ,//=[28] 0x001c
    CCCI_CCMNI3_RX_ACK              ,//=[29] 0x001d
    CCCI_CCMNI3_TX                  ,//=[30] 0x001e
    CCCI_CCMNI3_TX_ACK              ,//=[31] 0x001f
    CCCI_IPC_RPC_CHANNEL            ,//=[32] 0x0020
    CCCI_IPC_RPC_ACK_CHANNEL        ,//=[33] 0x0021
    CCCI_MSGSVC_SEND_CHANNEL        ,//=[34] 0x0022
    CCCI_MSGSVC_SEND_ACK_CHANNEL    ,//=[35] 0x0023
    CCCI_MSGSVC_RCV_CHANNEL         ,//=[36] 0x0024
    CCCI_MSGSVC_RCV_ACK_CHANNEL     ,//=[37] 0x0025
    CCCI_GPS_CHANNEL_TX             ,//=[38] 0x0026
    CCCI_GPS_ACK_CHANNEL_TX         ,//=[39] 0x0027
    CCCI_GPS_CHANNEL_RX             ,//=[40] 0x0028
    CCCI_GPS_ACK_CHANNEL_RX         ,//=[41] 0x0029
    CCCI_MD_LOG_RX                  ,//=[42] 0x002a
    CCCI_MD_LOG_TX                  ,//=[43] 0x002b
    CCCI_ARM7_RESERVED1_TX          ,//=[44] 0x002c
    CCCI_ARM7_RESERVED1_RX          ,//=[45] 0x002d
    CCCI_ARM7_RESERVED2_RX          ,//=[46] 0x002e
    CCCI_ARM7_RESERVED2_TX          ,//=[47] 0x002f
    CCCI_ARM7_RESERVED3_TX          ,//=[48] 0x0030
    CCCI_ARM7_RESERVED3_RX          ,//=[49] 0x0031
    CCCI_IT_CHANNEL_TX              ,//=[50] 0x0032
    CCCI_IT_CHANNEL_RX              ,//=[51] 0x0033
    CCCI_IMSV_UL                    ,//=[52] 0x0034
    CCCI_IMSV_DL                    ,//=[53] 0x0035
    CCCI_IMSC_UL                    ,//=[54] 0x0036
    CCCI_IMSC_DL                    ,//=[55] 0x0037
    CCCI_IMSA_UL                    ,//=[56] 0x0038
    CCCI_IMSA_DL                    ,//=[57] 0x0039
    CCCI_IMSD_UL                    ,//=[58] 0x003a
    CCCI_IMSD_DL                    ,//=[59] 0x003b
    CCCI_SIM_CHANNEL_TX             ,//=[60] 0x003c
    CCCI_SIM_CHANNEL_RX             ,//=[61] 0x003d
    CCCI_LB_IT_CHANNEL_TX           ,//=[62] 0x003e
    CCCI_LB_IT_CHANNEL_RX           ,//=[63] 0x003f
    CCCI_CCMNI1_DLACK_RX            ,//=[64] 0x0040 //__CCMNI_ACK_FAST_PATH__
    CCCI_CCMNI2_DLACK_RX            ,//=[65] 0x0041 //__CCMNI_ACK_FAST_PATH__
    CCCI_CCMNI3_DLACK_RX            ,//=[66] 0x0042 //__CCMNI_ACK_FAST_PATH__   
    CCCI_DEBUG_STATUS_CHANNEL_TX    ,//=[67] 0x0043
    CCCI_DEBUG_STATUS_CHANNEL_RX    ,//=[68] 0x0044
    CCCI_CCMNI4_RX                  ,//=[69] 0x0045
    CCCI_CCMNI4_RX_ACK              ,//=[70] 0x0046
    CCCI_CCMNI4_TX                  ,//=[71] 0x0047
    CCCI_CCMNI4_TX_ACK              ,//=[72] 0x0048
    CCCI_CCMNI4_DLACK_RX            ,//=[73] 0x0049 //__CCMNI_ACK_FAST_PATH__  
    CCCI_CCMNI5_RX                  ,//=[74] 0x004a
    CCCI_CCMNI5_RX_ACK              ,//=[75] 0x004b
    CCCI_CCMNI5_TX                  ,//=[76] 0x004c
    CCCI_CCMNI5_TX_ACK              ,//=[77] 0x004d
    CCCI_CCMNI5_DLACK_RX            ,//=[78] 0x004e //__CCMNI_ACK_FAST_PATH__  
    CCCI_CCMNI6_RX                  ,//=[79] 0x004f
    CCCI_CCMNI6_RX_ACK              ,//=[80] 0x0050
    CCCI_CCMNI6_TX                  ,//=[81] 0x0051
    CCCI_CCMNI6_TX_ACK              ,//=[82] 0x0052
    CCCI_CCMNI6_DLACK_RX            ,//=[83] 0x0053 //__CCMNI_ACK_FAST_PATH__  
    CCCI_CCMNI7_RX                  ,//=[84] 0x0054
    CCCI_CCMNI7_RX_ACK              ,//=[85] 0x0055
    CCCI_CCMNI7_TX                  ,//=[86] 0x0056
    CCCI_CCMNI7_TX_ACK              ,//=[87] 0x0057
    CCCI_CCMNI7_DLACK_RX            ,//=[88] 0x0058 //__CCMNI_ACK_FAST_PATH__  
    CCCI_CCMNI8_RX                  ,//=[89] 0x0059
    CCCI_CCMNI8_RX_ACK              ,//=[90] 0x005a
    CCCI_CCMNI8_TX                  ,//=[91] 0x005b
    CCCI_CCMNI8_TX_ACK              ,//=[92] 0x005c
    CCCI_CCMNI8_DLACK_RX            ,//=[93] 0x005d //__CCMNI_ACK_FAST_PATH__    
    CCCI_MD_LOG2_RX                 ,//=[94] 0x005e
    CCCI_MD_LOG2_TX                 ,//=[95] 0x005f
    CCCI_CCMNI9_RX                  ,//=[96] 0x0060
    CCCI_CCMNI9_RX_ACK              ,//=[97] 0x0061
    CCCI_CCMNI9_TX                  ,//=[98] 0x0062
    CCCI_CCMNI9_TX_ACK              ,//=[99] 0x0063
    CCCI_CCMNI9_DLACK_RX            ,//=[100] 0x0064 //__CCMNI_ACK_FAST_PATH__
    CCCI_IMSEM_UL                   ,//=[101] 0x0065
    CCCI_IMSEM_DL                   ,//=[102] 0x0066     
    CCCI_CCMNI10_RX                 ,//=[103] 0x0067
    CCCI_CCMNI10_RX_ACK             ,//=[104] 0x0068
    CCCI_CCMNI10_TX                 ,//=[105] 0x0069
    CCCI_CCMNI10_TX_ACK             ,//=[106] 0x006a
    CCCI_CCMNI10_DLACK_RX           ,//=[107] 0x006b //__CCMNI_ACK_FAST_PATH__ 
    CCCI_CCMNI11_RX                 ,//=[108] 0x006c
    CCCI_CCMNI11_RX_ACK             ,//=[109] 0x006d
    CCCI_CCMNI11_TX                 ,//=[110] 0x006e
    CCCI_CCMNI11_TX_ACK             ,//=[111] 0x006f
    CCCI_CCMNI11_DLACK_RX           ,//=[112] 0x0070 //__CCMNI_ACK_FAST_PATH__ 
    CCCI_CCMNI12_RX                 ,//=[113] 0x0071
    CCCI_CCMNI12_RX_ACK             ,//=[114] 0x0072
    CCCI_CCMNI12_TX                 ,//=[115] 0x0073
    CCCI_CCMNI12_TX_ACK             ,//=[116] 0x0074
    CCCI_CCMNI12_DLACK_RX           ,//=[117] 0x0075 //__CCMNI_ACK_FAST_PATH__ 
    CCCI_CCMNI13_RX                 ,//=[118] 0x0076
    CCCI_CCMNI13_RX_ACK             ,//=[119] 0x0077
    CCCI_CCMNI13_TX                 ,//=[120] 0x0078
    CCCI_CCMNI13_TX_ACK             ,//=[121] 0x0079
    CCCI_CCMNI13_DLACK_RX           ,//=[122] 0x007a //__CCMNI_ACK_FAST_PATH__ 
    CCCI_CCMNI14_RX                 ,//=[123] 0x007b
    CCCI_CCMNI14_RX_ACK             ,//=[124] 0x007c
    CCCI_CCMNI14_TX                 ,//=[125] 0x007d
    CCCI_CCMNI14_TX_ACK             ,//=[126] 0x007e
    CCCI_CCMNI14_DLACK_RX           ,//=[127] 0x007f //__CCMNI_ACK_FAST_PATH__ 
    CCCI_CCMNI15_RX                 ,//=[128] 0x0080
    CCCI_CCMNI15_RX_ACK             ,//=[129] 0x0081
    CCCI_CCMNI15_TX                 ,//=[130] 0x0082
    CCCI_CCMNI15_TX_ACK             ,//=[131] 0x0083
    CCCI_CCMNI15_DLACK_RX           ,//=[132] 0x0084 //__CCMNI_ACK_FAST_PATH__ 
    CCCI_CCMNI16_RX                 ,//=[133] 0x0085
    CCCI_CCMNI16_RX_ACK             ,//=[134] 0x0086
    CCCI_CCMNI16_TX                 ,//=[135] 0x0087
    CCCI_CCMNI16_TX_ACK             ,//=[136] 0x0088
    CCCI_CCMNI16_DLACK_RX           ,//=[137] 0x0089 //__CCMNI_ACK_FAST_PATH__ 
    CCCI_CCMNI17_RX                 ,//=[138] 0x008a
    CCCI_CCMNI17_RX_ACK             ,//=[139] 0x008b
    CCCI_CCMNI17_TX                 ,//=[140] 0x008c
    CCCI_CCMNI17_TX_ACK             ,//=[141] 0x008d
    CCCI_CCMNI17_DLACK_RX           ,//=[142] 0x008e //__CCMNI_ACK_FAST_PATH__ 
    CCCI_CCMNI18_RX                 ,//=[143] 0x008f
    CCCI_CCMNI18_RX_ACK             ,//=[144] 0x0090
    CCCI_CCMNI18_TX                 ,//=[145] 0x0091
    CCCI_CCMNI18_TX_ACK             ,//=[146] 0x0092
    CCCI_CCMNI18_DLACK_RX           ,//=[147] 0x0093 //__CCMNI_ACK_FAST_PATH__ 
    CCCI_CCMNI19_RX                 ,//=[148] 0x0094
    CCCI_CCMNI19_RX_ACK             ,//=[149] 0x0095
    CCCI_CCMNI19_TX                 ,//=[150] 0x0096
    CCCI_CCMNI19_TX_ACK             ,//=[151] 0x0097
    CCCI_CCMNI19_DLACK_RX           ,//=[152] 0x0098 //__CCMNI_ACK_FAST_PATH__ 
    CCCI_CCMNI20_RX                 ,//=[153] 0x0099
    CCCI_CCMNI20_RX_ACK             ,//=[154] 0x009a
    CCCI_CCMNI20_TX                 ,//=[155] 0x009b
    CCCI_CCMNI20_TX_ACK             ,//=[156] 0x009c
    CCCI_CCMNI20_DLACK_RX           ,//=[157] 0x009d //__CCMNI_ACK_FAST_PATH__ 
    CCCI_CCMNI21_RX                 ,//=[158] 0x009e
    CCCI_CCMNI21_RX_ACK             ,//=[159] 0x009f
    CCCI_CCMNI21_TX                 ,//=[160] 0x00a0
    CCCI_CCMNI21_TX_ACK             ,//=[161] 0x00a1
    CCCI_CCMNI21_DLACK_RX           ,//=[162] 0x00a2 //__CCMNI_ACK_FAST_PATH__ 
    CCCI_ATCP_TX                    ,//=[163] 0x00a3  
    CCCI_ATCP_RX                    ,//=[164] 0x00a4  
    CCCI_C2K_PPP_TX                 ,//=[165] 0x00a5  
    CCCI_C2K_PPP_RX                 ,//=[166] 0x00a6  
    CCCI_C2K_AGPS_TX                ,//=[167] 0x00a7  
    CCCI_C2K_AGPS_RX                ,//=[168] 0x00a8  
    CCCI_IMSM_CHANNEL_TX            ,//=[169] 0x00a9
    CCCI_IMSM_CHANNEL_RX            ,//=[170] 0x00aa
    CCCI_WOA_CHANNEL_TX             ,//=[171] 0x00ab
    CCCI_WOA_CHANNEL_RX             ,//=[172] 0x00ac
    CCCI_XUI_CHANNEL_TX             ,//=[173] 0x00ad
    CCCI_XUI_CHANNEL_RX             ,//=[174] 0x00ae
    CCCI_BIP_CHANNEL_TX             ,//=[175] 0x00af
    CCCI_BIP_CHANNEL_RX             ,//=[176] 0x00b0
    CCCI_UDC_CHANNEL_TX             ,//=[177] 0x00b1
    CCCI_UDC_CHANNEL_RX             ,//=[178] 0x00b2
    CCCI_MIPI_CHANNEL_TX            ,//=[179] 0x00b3
    CCCI_MIPI_CHANNEL_RX            ,//=[180] 0x00b4
    CCCI_NLOPT_CHANNEL_TX           ,//=[181] 0x00b5
    CCCI_NLOPT_CHANNEL_RX           ,//=[182] 0x00b6
    CCCI_NLOPP_CHANNEL_TX           ,//=[183] 0x00b7
    CCCI_NLOPP_CHANNEL_RX           ,//=[184] 0x00b8
    CCCI_MD_AP_MAX,
    CCCI_MD_AP_MAX_CHANNEL          = CCCI_MD_AP_MAX-CCCI_MD_AP_BASE,

    CCCI_CELLINFO_CHANNEL_TX        = CCCI_MD_SCP_BASE,//=[00] 0x1000 
    CCCI_CELLINFO_ACK_CHANNEL_TX    ,//=[01] 0x1001
    CCCI_CELLINFO_CHANNEL_RX        ,//=[02] 0x1002
    CCCI_CELLINFO_ACK_CHANNEL_RX    ,//=[03] 0x1003
    CCCI_MD_SCP_TX_LB_IT            ,//=[04] 0x1004 //CCISM LB IT Tx CHANNEL
    CCCI_MD_SCP_RX_LB_IT            ,//=[05] 0x1005 //CCISM LB IT Rx CHANNEL
    CCCI_MD_SCP_DUMMY06_CHANNEL_TX  ,//=[06] 0x1006
    CCCI_MD_SCP_DUMMY07_CHANNEL_RX  ,//=[07] 0x1007
    CCCI_MD_SCP_DUMMY08_CHANNEL_TX  ,//=[08] 0x1008
    CCCI_MD_SCP_DUMMY09_CHANNEL_RX  ,//=[09] 0x1009
    CCCI_MD_SCP_CC_STATE_CHANNEL_TX ,//=[0a] 0x100a //Call state TX channel
    CCCI_MD_SCP_CC_STATE_CHANNEL_RX ,//=[0b] 0x100b //Call state RX channel
    CCCI_MD_SCP_MAX                 ,
    CCCI_MD_SCP_MAX_CHANNEL         = CCCI_MD_SCP_MAX-CCCI_MD_SCP_BASE,

    //CCCI_MAX_CHANNEL                = 96,
    CCCI_FORCE_RESET_MODEM_CHANNEL  = 20090215
} CCCI_CHANNEL_T;


#endif //#ifndef _CCCI_CH_CFG_H
