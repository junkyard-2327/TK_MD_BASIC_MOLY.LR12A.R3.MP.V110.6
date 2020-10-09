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
 *   eval_msgid.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   LTE NAS EVAL (EVNAS Adaptation Layer) related message identity definition
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 03 30 2020 chidananda.n
 * [MOLY00507185] [Interfaces][URGENT][Cervino][MT6762][C2K][CCP][MP2][VzW][Dallas][Pre-LG][E2E][E911][3.36] Device should not come back to LTE until ECBM timer expires
 * [Interface]ALPS04932806 Block TAU during C2K ECBM+DAN SMS.
 *
 * 01 21 2020 chidananda.n
 * [MOLY00475375] [Interfaces][REPRODUCING][URGENT][Cervino][MT6762][C2K][CCP][MP2][VzW][Dallas][Pre-LG][E2E][E911][3.36] Device should not come back to LTE until ECBM timer expires
 * [Interface]ALPS04932806 Block TAU during ECBM.
 *
 * 12 11 2019 zhe-hao.zhang
 * [MOLY00435269] [Interface][B190414-819]¤ýªÌ?Ä£´å??µ{¥d?¡AÊI?©µ?450 (?±`¥X?¡A©Î?¤é¦h¦¸Î`?) Protect MT SMS
 * 	
 * 	.
 *
 * 10 30 2019 chidananda.n
 * [MOLY00454751] [Interfaces][Ben190921-063][FT-Nepal-Kathmandu][NCELL] DUT's time delay to show the manual search network list is worse than REF (4/5)
 * ALPS04799724 - Peer SIM PLMN List handling (Interface).
 *
 * 08 28 2019 rex.li
 * [MOLY00434902] [Gen93][LR12A.R3.MP] Add new ILM IA_APN_SET_REQ to solve the attach issue - Header Part
 * .
 *
 * 08 27 2019 zhe-hao.zhang
 * [MOLY00434427] [Interface][B190414-819]¤ýªÌ?Ä£´å??µ{¥d?¡AÊI?©µ?450 (?±`¥X?¡A©Î?¤é¦h¦¸Î`?) According to data type to release HPS for paging
 * 	
 * 	.
 *
 * 08 02 2019 ian.hsieh
 * [MOLY00426354] (NWSEL interface part)·sFeature»Ý¨D¡G¬d?©P?ÊI?«H?
 * 	
 * 	Given Timer Number PLMN List.
 *
 * 06 19 2019 kuan-hua.lin
 * [MOLY00414582] [msg id part][GATING][MT6771][Sylvia][P0][R3][IOT][Japan][KDDI][VoWiFi][Pre-Test][ST-22.2] UE shall not do INITIAL ATTACH of IMS on LTE while IMS registered on WiFi
 * 	
 * 	Sync MOLY00407901. Add EVL/MM msgid.
 *
 * 04 23 2019 zhe-hao.zhang
 * [MOLY00399645] [MSGID][US_DEV][TMO][2019Q2] TMOUS_2019Q2_GID-MTRREQ-245903
 * 	
 * 	.
 *
 * 03 25 2019 vend_mtb_aritha009
 * [MOLY00385219] [CODE SYNC][MH4][SPR] modem crash - [ASSERT] file:mcu/pcore/modem/lte_sec/enas/eval/src/eval_handler.c line:593
 * 	
 * 	[CODE SYNC][MOLY00385219][MH4][SPR] modem crash - [ASSERT] file:mcu/pcore/modem/lte_sec/enas/eval/src/eval_handler.c line:593
 * 	
 * 	Removal of +EPCASE for Gen93
 *
 * 01 02 2019 kuan-hua.lin
 * [MOLY00375053] [EVAL/EMM msg id][MT6763][Bianco][P0][India][Delhi][4GMM][FDD][Static][Airtel][Idea][Auto][Android Linux Script][SST] System API Dump,944,992,99,/data/vendor/core/,1,,mtkrild:AT command pending too long. assert!!! AT cmd: COPS.timer: 900000ms
 * 	
 * 	MANUAL_SEARCH_STOP_REQ msg.
 *
 * 10 03 2018 vend_mtb_mobiveil012
 * [MOLY00355801] [93][AT+ECACOMB] complete the design from L4 to ERRC
 * 	
 * 	L4 changes for +ECACOMB AT command to R3.
 *
 * 10 03 2018 vend_mtb_mobiveil012
 * [MOLY00355801] [93][AT+ECACOMB] complete the design from L4 to ERRC
 * L4 changes for +ECACOMB AT command to R3.
 *
 * 08 24 2018 kuan-hua.lin
 * [MOLY00347066] [Msg_id] [Announced issue]External (EE) Exception when SIM1 cmcc switch SIM2 cmcc Type: modem  Current Executing Process:  Trigger time:[2010-01-01 08:21:29.350556] md1:(MCU_core1,vpe0,tc0(VPE2)) [ASSERT]
 * 	
 * 	.
 *
 * 08 23 2018 kuan-hua.lin
 * [MOLY00346768] [Msg_id][Cervino][P0][BSP+]VoLTE is not registered in this case
 * 	
 * 	add new msg_id.
 *
 * 06 13 2018 kuan-hua.lin
 * [MOLY00332359] [R3][EVAL/EMM msg id][Gen93][MP3][RD IT][VSIM 3.0] Modem EE after rsim enables (errc_conn_main)
 * 	
 * 	RSIM for L+L. Add msgid.
 *
 * 05 31 2018 zanya.peng
 * [MOLY00329932] [R3][COMMON][Telephony PPM][Merlot][TC163]T1: network registration time is worse than ref phone and not stable
 * 	
 * 	.
 *
 * 04 27 2018 otto.liu
 * [MOLY00322463] [Gen93] AT cmd for HPUE, TM9, UL64QAM and DL256QAM
 * 	
 * 	.
 *
 * 04 27 2018 prasad.hugar
 * New AT command to enable/disable the TDD/FDD TM9 separately - MOLY00322630
 *
 * 04 24 2018 praveen.komatiguntla
 * [MOLY00321225] [Interface header files: can be released partially] When MMS operation is started on the current LTE stack, L4BPDN need to inform other LTE stack EVAL to ignore PS paging
 * [Interface header files - can be released partially].
 *
 * 02 26 2018 xiaoting.wang
 * [MOLY00306599] [Rose][sylvia][BSP+][O1]The device will popup "network or sim card error" when query call forwarding.(2/2).
 *
 * 01 16 2018 ian-yw.chen
 * [MOLY00302109] [MT6763][Bianco][N1][India FT][Chennai][WW FT][RCOM][TATA DOCOMO][TC_MTK_P1_4G_Gemini_13] [MP1.5] DUT long SMS to sim2 fails (common interface part)
 *  SMS/EVAL
 *
 * 01 04 2018 zanya.peng
 * [MOLY00298830] [MT6763][R3]implement backoff-time report for T3396 & T3346
 * 	
 * 	.
 *
 * 12 11 2017 morton.lin
 * [MOLY00295077] [Gen93][ERRC][RCM] LTE support band and CA combination customization re-arch
 * Common IF and MRS part (LR12A.R3.MP) (Not in V-List)
 *
 * 12 01 2017 po-hung.lin
 * [MOLY00292291] [LR12A.R3.MP] Change IMEISV during RF OFF state
 * relay IMEISV to EMM/MM
 *
 * 11 29 2017 lucien.li
 * [MOLY00290361] 203604 ï¿½iï¿½~??ï¿½Oï¿½jï¿½ï¿½?ï¿½Gï¿½d1ï¿½ï¿½?4Gï¿½Bï¿½d2?ï¿½H4Gï¿½n??ï¿½d2?ï¿½uï¿½nï¿½ï¿½ï¿Ä£ï¿½ï¿½??ï¿½{ï¿½ï¿½[L4C][.src]
 * [R3][L4C] AT+EMRO - gaming optimization
 *
 * 11 28 2017 chien-li.chou
 * [MOLY00292082] [Gen93][TMO] 2G disable with ecc enable
 * Dummy check-in for auto-sync
 *
 * 11 28 2017 chien-li.chou
 * [MOLY00292082] [Gen93][TMO] 2G disable with ecc enable
 * 2G disable (NWSEL interface and SBP part)
 *
 * 11 28 2017 zanya.peng
 * [MOLY00287971] RB test mode_ETC part
 * 	
 * 	.
 *
 * 11 21 2017 kuan-wei.chen
 * [MOLY00289580] [L4-EVAL interface] extend AT+EIREG:...,<ims_rat> extend AT+EVIVS:...,<rat>
 * [LR12A.R3.MP]
 * 	L4-EVAL msgid and structure:
 * 	extend AT+EIREG:...,<ims_rat>
 * 	extend AT+EVIVS:...,<rat>
 *
 * 11 16 2017 kuan-hua.lin
 * [MOLY00289945] [LR12A.R2.MP] L+L New Feature: Occupy HPS for IMS RE-REG (EMM-Common interface)
 * 	
 * 	EVAL/EMM msg id.
 *
 * 11 06 2017 harry.chang
 * [MOLY00287761] [CDMA-less][Gen92] Sniff feature change for ERRC_CEL
 * .
 *
 * 11 02 2017 morning.lee
 * [MOLY00286282] [Gen93][Network Search+CDMA-less+plmn-loss Optimization] Code merge from LR12 to LR12A.R3
 * 	
 * 	.
 *
 * 08 29 2017 harry.chang
 * [MOLY00274167] [Copy MOLY00262171][CDMA-less][LR12] main CR
 * NWSEL part
 *
 * 08 24 2017 kelly.lo
 * [MOLY00273395] [Bianco][N1][MTK FT][SRLTE][CT 6M C][SH][Random]APN protocol changing issue(TRUNK & R2)
 * 	
 * 	ia_apn_change (interface) (OA)
 *
 * 08 17 2017 morning.lee
 * [MOLY00271227] [UMOLYA] [Rose][Vinson][N1]The ECC call will can't be dial out success.(5/5)
 * 	
 * 	.
 *
 * 07 03 2017 morning.lee
 * [MOLY00261208] [Copy MOLY00200593]Multiple-PS MP5
 * 	
 * 	.
 *
 * 06 27 2017 morning.lee
 * [MOLY00259599] [Copy MOLY00195196]cause #18 from EMM to change UE mode first
 * 	
 * 	.
 *
 * 04 26 2017 morning.lee
 * [MOLY00245171] [Copy MOLY00224343]VOLTEï¿½Uï¿½Qï¿½sï¿½ï¿½?ï¿½ï¿½GSMï¿½Z?ï¿½ï¿½E?ï¿½Aï¿½ï¿½?ï¿½^4G??ï¿½ï¿½HD??ï¿½Aï¿½u??ï¿½Ü¤Sï¿½ï¿½
 * 	
 * 	.
 *
 * 04 05 2017 morning.lee
 * [MOLY00210986] [6293] Merge back from UMOLY to UMOLYA
 * 	
 * 	.
 *
 * 04 05 2017 hong.yu
 * [MOLY00239308] [Gen93] L4 M3 check in
 * merge L4BNW and L4BPWR M3
 *
 * 04 05 2017 allen.keh
 * [MOLY00195775] [MT6293] [ENAS] feature & re-arch development
 * 	
 * 	.add C2K related message ids
 *
 * 03 27 2017 allen.keh
 * [MOLY00195775] [MT6293] [ENAS] feature & re-arch development
 * 	
 * 	.add R-SIM message ids
 *
 * 02 21 2017 kelly.lo
 * [MOLY00203953] [MT6293][EMM] check-in UMOLYA
 * 	
 * 	remove unused emm msg (OA part)
 *
 * 02 13 2017 morning.lee
 * [MOLY00228924] [copy MOLY00224596][LR12][CMCC]Keeping IMS registered state for MT CSFB
 * 	
 * 	.
 *
 * 02 09 2017 morning.lee
 * [MOLY00228375] [copy MOLY00220113][6292][Gemini][LG+WG] SBP_CSFB_DUPLEX_CHG_FOR_LG_MODE / SBP_DUPLEX_MODE_CHG_AFTER_CSFB / AT+ETWMODE -EVAL part
 * 	
 * 	.
 *
 * 01 05 2017 zanya.peng
 * [MOLY00205094] [MT6293] [ENAS] UMOLYA.PS.DEV merge to UMOLYA.TRUNK ([EVALIF] add IMS SCM INFO CNF)
 * 	
 * 	.
 *
 * 11 11 2016 danny.kuo
 * [MOLY00212922] New Feature UL64QAM switcher
 * .
 *
 * 11 03 2016 danny.kuo
 * [MOLY00193300] Porting of NW BAND Info from LR9 to LR11 TC01
 * .
 *
 * 11 03 2016 danny.kuo
 * 	
 * 	.
 *
 * [MOLY00159801] [K7] Request the URC for reporting the rrc connection establishment failure
 * 	
 * 	.
 *
 * 11 03 2016 danny.kuo
 * .check-in for MOLY00093206
 *
 * 10 18 2016 benjamin.kuo
 * [MOLY00205591] [6293][EVAL] development
 * sync for MOLY00193865.
 *
 *
 * 09 26 2016 joe.chang
 * [MOLY00205244] [6293] PS.DEV merge back to UMOLYA trunk
 * msgid part
 *
 * 09 26 2016 sh.yeh
 * [MOLY00205082] EMM_REG merge from UMOLYA-PS-DEV to UMOLYA
 * .
 *
 * 09 26 2016 allen.keh
 * [MOLY00204967] [MT6293] [ENAS] UMOLYA.PS.DEV merge to UMOLYA.TRUNK
 * .PS.DEV merge OA domain
 *
 * 07 27 2016 allen.keh
 * [MOLY00193617] [MT6293] [ENAS] CBr merge to UMOLYA.PS.DEV
 * .CBr merge to UMOLYA.PS.DEV (OA domain)
 * 08 22 2016 shih-che.chou
 * [MOLY00187953] AT+ECMSID=<n> to clear GUTI/P-TMSI
 * .
 *
 * 07 26 2016 joe.chang
 * [MOLY00193429] [UMOLYA] 93 CBr patch back to PS.DEV
 * Merge EVAL and EMM msgid
 *
 * 07 25 2016 sh.yeh
 * [MOLY00191864] [UMOLA PS DEV] EMM_REG merge from UMOLY
 * .merge from PSD5 CBr to DEV, emm and eval message id, add wait_emc_pdn_status in update_eplmn_struct
 *
 * 07 19 2016 sh.yeh
 * [MOLY00191864] [UMOLA PS DEV] EMM_REG merge from UMOLY
 * .sync MOLY183559 CL2526832, up to #53 version by UMOLY
 *
 * 06 24 2016 zanya.peng
 * [MOLY00185907] [MT6293] [ENAS] UMOLY merge to UMOLYA
 * 	
 * 	.
 *
 * 06 14 2016 ivy.wang
 * [MOLY00165236] [PH1_VZW][FLD][Radio_Protocol] VZ_REQ_LTEDATA_37821 Autonomous Gaps
 * .
 *
 * 06 08 2016 bart.liang
 * [MOLY00169240] [PH1_VZW][Radio_Protocol][UNSOL] LTE NETWORK INFORMATION
 *
 * 05 27 2016 jerry-yh.chang
 * [MOLY00170799] [PH1_VZW][joint-camp][Radio_Protocol][hVoLTE] TC 2.2.9.3 fail: at step13, TAU timeout
 * OA domain Interface check in
 *
 * 05 17 2016 mark.ng
 * [MOLY00179023] Allowable Registration Area List Feature V2 Check In
 * ARAL 2.0 interface
 *
 * 04 26 2016 sherry.kuo
 * [MOLY00175925] sync LR11 to UMOLY
 * .
 *
 * 04 26 2016 tim.huang
 * [MOLY00167450] [PH1_VZW][joint-camp][Radio][hVoLTE][Blocking] TC 2.1.10.2 - At step5, in the TAU Request message, there is not "UE radio capability information update needed" field
 * .
 *
 * 04 26 2016 ming.shen
 * [MOLY00150211] [VzW][VZ_REQ_LTEMMO_38695] LTE Scanning Enhancement
 * .
 *
 * 03 09 2016 sabrina.hsu
 * [MOLY00155801] [CA] Enable/Disable CA by AT+ECASW (ERRC)
 * merge UMOLY version
 *
 * 03 03 2016 jerry-yh.chang
 * [EMM] merge MOLY00152757 and MOLY00152764 (non-LTE)
 *
 * 02 15 2016 kun-lin.wu
 * [MOLY00144901] [ERRC] bCSFB feature check-in for TMO-US
 *
 * 01 25 2016 yc.chen
 * [MOLY00146327] [VzW] hVoLTE implementation (non-LTE)
 *
 * 01 13 2016 hong.yu
 * [MOLY00156229] [MT6292] Code sync from MT6291: AuDRX
 * [EVAL] patch MOLY00097750 to UMOLY
 *
 * 12 11 2015 mika.kaikkonen
 * [MOLY00145451] [R12][CR1962] Handling of SCM at NAS layer - EVAL - EMM interface MSG IDs
 *
 * 11 23 2015 jerry-yh.chang
 * [MOLY00150096] [Jade-M][Spirent][IR]TC-LTEIRLAB-DCMP-09003 FAIL
 * Add handling for GLOBAL_MODE_CHANGE_START_REQ(interface check in OA domain)
 *
 * 11 17 2015 yc.chen
 * [MOLY00149445] [UMOLY] Sync DoCoMo MOLY CR to related branch (MOLY00123677)(non-LTE)
 *
 * 10 26 2015 yingfui.hung
 * [MOLY00141134] [Copy CR][Porting to LR11][TMO][IMS] bCSFB - L4 ERLQ, ERLM changes (without switch)
 * 	
 * 	.
 *
 * 10 19 2015 yc.chen
 * [MOLY00145708] [Jade-L][SRLTE][CT OM 6M][LTE IOT][FT][SH][ALU][Random]?Ý¦b3GUAX??PSMCS??
 * 	.
 *
 * 10 08 2015 allen.hsu
 * [MOLY00133440] [ERRC][RCM]Configurable CA combination
 * add LTE CA band settings feature related interface.
 *
 * 10 07 2015 yc.chen
 * [MOLY00141417] [Jade-L][SRLTE][LTE IOT][FT][SH][ZTE][random]mHZ? EE,0,0,99,/data/core/,1,modem,md1
 * 	.
 *
 * 10 07 2015 doug.shih
 * [MOLY00144181] [ERRC][SPV] LR11 build warning scan and fix (also legacy C2K code cleanup)
 * [CEL] phase out early OOS ind for SVLTE (OA domain).
 *
 * 10 05 2015 panu.peisa
 * [MOLY00142657] [VzW][VZ_REQ_e911_30203] RAL and MRU cell band info update implementation to 6291
 * 	Integrated CLs 1690397 and 1690428 from LR11_VzW.
 *
 * 10 02 2015 panu.peisa
 * [MOLY00141224] [VzW][VZ_REQ_LTEDATA_6800] UE specific DRX setting
 * 	Integrated CL 1669033 from LR11_VzW CBr.
 *
 * 10 02 2015 hong.yu
 * [MOLY00139482] [VzW] [VZ_REQ_LTEDATA_6800] Dynamic UE specific DRX setting
 * [VzW] UE specific DRX
 *
 * 09 30 2015 marko.akselin
 * [MOLY00142657][VzW][VZ_REQ_e911_30203] Add new message IDs for RAL and MRU cell band info updating into EMM - EVAL - NWSEL interfaces.
 * 	.
 *
 * 09 25 2015 james-chi-ju.chang
 * [MOLY00143156] [MT6755][E1][GCF][Anite][3G][FDD][CSG][6.3.1.1] Test Fail
 * .
 *
 * 09 22 2015 teemu.partanen
 * [VZ_REQ_LTEDATA_6800] UE Specific DRX setting. SWRD part.
 *
 * 08 27 2015 bob.chiang
 * [MOLY00138281] [EMM] Sync MOLY CR to 2015/08/20
 * : CONN - MOLY00129803
 *
 * 08 27 2015 bob.chiang
 * [MOLY00139385] [JADE][SRLTE][inHouseIT][Lab Spirent][TC-LTEIRLAB-SCMP-03006] Moible failed to registered in gsm network!
 * : REG/EVAL - inform NWSEL when SIM removal handling is completed
 *
 * 07 20 2015 allen.keh
 * [MOLY00129803] [Denali][ATT][VoLTE][Anritsu CAT] TC LTE-BTR-1-8220 (-8248) On a voice call the Detach procedure after the ISIM refresh should only be started when returned to Idle state
 * .add MSG_ID_EVAL_EMM_CONNECTION_INFO_IND
 *
 * 07 18 2015 cooper.lin
 * [MOLY00090532] [MT6291] Change Feature Check-in
 * Uplink Data Shaping
 *
 * 07 17 2015 shih-che.chou
 * [MOLY00129720] [VzW][Merge to UMOLY] Porting RAC part from MOLY to UMOLY
 * .
 *
 * 07 03 2015 tim.huang
 * [MOLY00125845] [JADE] SRLTE related design
 * .
 *
 * 06 18 2015 jerry-yh.chang
 * [MOLY00122048] [6795] Request new feature to improve registration time of roaming case
 * .
 *
 * 06 18 2015 panu.peisa
 * [MOLY00122487] EMM, ESM & PAM module VzW feature porting from 6290 to 6291
 * 	SWRD part, change have dependency to LTE_SEC parts.
 *
 * 06 16 2015 tim.huang
 * [MOLY00083439] [MUSE] IMS Development for requirment 1-15 - get the information of MO Data Barring and SSAC barring
 * .
 *
 * 06 16 2015 kuan-wei.chen
 * [MOLY00115378] SS code revise
 * merge from MOLY to UMOLY
 *
 * 06 10 2015 teemu.partanen
 * [VZ_REQ_LTEDATARETRY_7733] Throttling timer related new message identifiers, enumerations and structures for EMM - NWSEL communication
 *
 * 05 29 2015 ye.yuan
 * [MOLY00116932] [UMOLY] [NAS]compile option modify
 * .
 *
 * 05 29 2015 shih-che.chou
 * [MOLY00117190] PLMN List in CONNECTED Mode
 * RAC part
 *
 * 05 29 2015 kun-lin.wu
 * [MOLY00117190] PLMN List in CONNECTED Mode
 *
 * 05 29 2015 kun-lin.wu
 * [MOLY00115617] [6291] Dynamic SIM switch without modem reset
 *
 * 05 26 2015 chun-fan.tsai
 * [MOLY00097098] [6291][CONN] Code Sync from MOLY to UMOLY
 * MOLY00097502
 *
 * 05 07 2015 cooper.lin
 * [MOLY00090532] [MT6291] Change Feature Check-in
 * Report CA Info to support 4G Plus Icon
 *
 * 05 06 2015 kuan-wei.chen
 * [MOLY00098019] [VzW][Merge to MOLY] MRU revise / MRU AT command
 * add AT+VZWMRUC, AT+VZWMRUE
 *
 * 04 23 2015 mark.chung
 * [MOLY00095378] Amazon Requirement
 * 	.
 *
 * 04 21 2015 edwin.liu
 * [MOLY00091774] [VzW][Merge to MOLY] Clear GUTI when doing factory reset
 * 	.
 *
 * 04 16 2015 tim.huang
 * [MOLY00107801] NAS 6291 DEV
 * .
 *
 * 04 16 2015 james-chi-ju.chang
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * 	.
 *
 * 02 23 2015 bob.chiang
 * [MOLY00096607] Sync C2K CR
 * .
 *
 * 02 05 2015 morton.lin
 * [MOLY00084695] [6291] Code merged from MOLY to UMOLY TRUNK
 * [6291][ERRC][SPV] Code sync from MOLY (W15.06)
 *
 * 12 17 2014 james-chi-ju.chang
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * 	.
 *
 * 11 12 2014 yingwei.huang
 * [MOLY00073932] [MT6291_DEV] EDDA implementation -- interface part.	.
 *
 * 11 12 2014 carlson.lin
 * [MOLY00084165] [UMOLY][R10][R11] NAS check-in from 6291_DEV to UMOLY Trunk
 * (Sync from MT6291_DEV upto CL 869855)
 *
 * 11 10 2014 robert.wu
 * [MOLY00083874] [UMOLY][R10][R11] EMM MTC sync code from 6291_DEV to UMOLY trunk
 *
 * 07 07 2014 benjamin.kuo
 * [MOLY00071459] Add Mobility Management for IMS Voice Termination
 * MMIVT2MOLY
 *
 * 07 02 2014 shaowu.huang
 * [MOLY00070824] [4G Gemini][FT][BJ][CSFB test][case5.1.1][SIM1 CMCC+SIM2 CMCC][4G,3G,2G×¢ï¿½ï¿½Ê±ï¿½Ó¾ï¿½Ï³ï¿½]
 * .
 *
 * 06 13 2014 aaron.liu
 * [MOLY00067559] [MT6592LTE][CSFB][Single USIM][CMCC FT][case5.1.1][4G,3G,2Gï¿½`??ï¿½ï¿½ï¿½ï¿½??]
 * .EVAL interface part.
 *
 * 05 16 2014 lt.chang
 * [MOLY00065658] [sglte dsds]ps detach and attach redesign
 * .check in actvie sim info req interface
 *
 * 04 23 2014 tehuang.liu
 * [MOLY00063538] [6290E2][VoLTE][VDM] Support VoLTE Gemini architecture
 * Check in VoLTE+Gemini related interfaces for VDM, IMSP, L4C, EVAL, and ERRC
 *
 * 04 02 2014 cookie.chen
 * [MOLY00060012] AT+ECBMR to remove modem CB records
 * .
 *
 * 03 28 2014 jinghan.wang
 * [MOLY00060988] [LPP CP] LPP code check-in for A-GNSS and eCID feature
 * Check in LPP CP interfaces & capability for EMM (OA domain)
 *
 * 03 06 2014 aaron.liu
 * [MOLY00056483] [MT6582LTE][SGLTE][CMCC FT][GZ]ï¿½b?ï¿½ï¿½2G3Gï¿½ï¿½??ï¿½ï¿½b3Gï¿½Jï¿½I???
 * Add PLMN SEARCH Abort Interface:
 * 1.MSG_ID_EVAL_ERRC_PLMN_SEARCH_ABORT_REQ
 * 2.MSG_ID_NWSEL_EVAL_PLMN_SEARCH_ABORT_REQ
 *
 * 03 06 2014 joe.chang
 * [MOLY00058412] [MOLY] TFT validate revision
 * [ESM/TFTLIB] Modification fot "TFT validate" and "PS init deactivation"
 *
 * 03 05 2014 benjamin.kuo
 * [MOLY00050602] [SAT] support Network Rejection Event
 * .
 *
 * 02 17 2014 benjamin.kuo
 * [MOLY00055341] [MP1 Post MP Patch][MT6290E2][LTE attach PDN] UE doesn't perform LTE attach due to TCM cmd conflict
 * MOLY
 *
 * 01 22 2014 jinghan.wang
 * [MOLY00054514] [LTE Gemini] Feature check in MOLY trunk for EMM PLMNSEL and related EMM interfaces
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 01 13 2014 allen.keh
 * [MOLY00053328] [MT6290E2][VoLTE] VoLTE development merge back to TRUNK.
 * 	Add message ids & SAP ids
 *
 * 11 13 2013 adeline.chang
 * [MOLY00046027] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * .
 *
 * 10 18 2013 shih-chieh.liao
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * integrate EAS_TO_PEER_INFO_IND.
 *
 * 10 18 2013 hc.chu
 * [MOLY00041414] [MT6290E1][WWFT][HK][3HK] Voice domain preference encode error
 * merge prebuild cbr back to trunk.
 *
 * 08 23 2013 shih-chieh.liao
 * [MOLY00034931] [MMDC] change EAS_STATE_IND to TO_PEER_INFO_IND
 * .
 *
 * 08 30 2013 hc.chu
 * [MOLY00036036] [MMDS_DC] Add EVAL_ESM_PS_SWITCH_COMPLETE_IND related handing
 * [MMDS_DC] Add EVAL_ESM_PS_SWITCH_COMPLETE_IND related handing.
 *
 * 08 23 2013 shih-chieh.liao
 * [MOLY00034931] [MMDC] change EAS_STATE_IND to TO_PEER_INFO_IND
 * .
 *
 * 08 23 2013 hc.chu
 * [MOLY00034663] MMDC RAC code check-in
 * remove unused mmdc rac codes
 *
 * 07 24 2013 benjamin.kuo
 * [MOLY00031020] [MMDS_DC] Merge MMDC interface to MOLY
 * <saved by Perforce>
 *
 * 04 01 2013 benjamin.kuo
 * [MOLY00011934] LTE MM IT CBr merge to MOLY
 * add __MMDC__ for message/structure.
 *
 * 03 27 2013 benjamin.kuo
 * [MOLY00011934] LTE MM IT CBr merge to MOLY
 * .
 *
 * 03 15 2013 benjamin.kuo
 * [MOLY00011934] LTE MM IT CBr merge to MOLY
 * MM IT merge back to MOLY.
 *
 * 03 14 2013 benjamin.kuo
 * [MOLY00011934] LTE MM IT CBr merge to MOLY
 * common file: EVAL part.
 *
 * 01 22 2013 benjamin.kuo
 * [MOLY00009163] LTE Multimode merge back to MOLY
 *
 * 01 22 2013 benjamin.kuo
 * [MOLY00009163] LTE Multimode merge back to MOLY
 *
 * 01 22 2013 benjamin.kuo
 * [MOLY00009163] LTE Multimode merge back to MOLY
 * MOLY_CBr to MOLY.
 *
 * 11 06 2012 yu.huang
 * [MOLY00005322] TATAKA merge to MOLY
 * [EVAL] Add EVAL related interfaces and common strust
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _EVAL_MSGID_H
#define _EVAL_MSGID_H

MODULE_MSG_BEGIN( MSG_ID_EVAL_CODE_BEGIN )

/****************************************************************************
 *                          Destination: EVAL (L4C to EVAL) 
 ****************************************************************************/
MSG_ID_L4C_EVAL_RAT_CHANGE_REQ              = MSG_ID_EVAL_CODE_BEGIN,
MSG_ID_L4C_EVAL_RAT_CHANGE_RSP,
MSG_ID_L4C_EVAL_ETWS_SETTING_REQ,
MSG_ID_L4C_EVAL_GET_SSAC_PARAM_REQ,

/* defined in l4_msgid.h for maintenance
 * MSG_ID_L4C_EVAL_ADJUST_MEAS_REQ,
 */

MSG_ID_L4C_EVAL_NBR_CELL_INFO_START_REQ,
MSG_ID_L4C_EVAL_NBR_CELL_INFO_STOP_REQ,

MSG_ID_L4C_EVAL_LTE_NEIGHBOR_CELL_INFO_REQ,

MSG_ID_L4C_EVAL_VDM_VOICE_STATUS_REQ,

MSG_ID_L4C_EVAL_VDM_IMS_VOICE_STATUS_REQ,

MSG_ID_L4C_EVAL_ERLM_CONTROL_REQ,

MSG_ID_L4C_EVAL_EDDA_REQ,
MSG_ID_L4C_EVAL_FACTORY_RESET_REQ,
MSG_ID_L4C_EVAL_MRU_UPDATE_REQ,
MSG_ID_L4C_EVAL_DRX_UPDATE_REQ,
MSG_ID_L4C_EVAL_LTECA_MODE_SETTING_REQ,
MSG_ID_L4C_EVAL_AUDRX_ENABLE_REQ,
MSG_ID_L4C_EVAL_OMADM_UPDATE_REQ,
MSG_ID_L4C_EVAL_MODULATION_UPDATE_REQ,
MSG_ID_L4C_EVAL_GUTI_IN_NV_CLEAR_REQ,
MSG_ID_L4C_EVAL_IMS_CALL_STATUS_REQ,
MSG_ID_L4C_EVAL_IMS_STATUS_UPDATE_REQ,
MSG_ID_L4C_EVAL_HQ_SERVICE_STATUS_REQ,
MSG_ID_L4C_EVAL_LTE_TM9_FDD_TDD_SETTING_REQ,
MSG_ID_L4C_EVAL_NOTIFY_SIM_SWITCH_RFOFF_REQ,
MSG_ID_L4C_EVAL_CA_BAND_COMB_LIST_REQ,
MSG_ID_L4C_EVAL_CS_SERVICE_NOTIFICATION_RSP, //TMO-US GID-MTRREQ-245903 

/****************************************************************************
 *                          Destination: EVAL (ERAC to EVAL) 
 ****************************************************************************/
MSG_ID_EMMREG_INIT_REQ,
MSG_ID_EMMREG_SET_RAT_MODE_REQ,
MSG_ID_EMMREG_ATTACH_REQ,
MSG_ID_EMMREG_DETACH_REQ,
MSG_ID_EMMREG_RFOFF_REQ,
MSG_ID_EMMREG_EMC_ATTACH_REQ, // for IMS
MSG_ID_EMMREG_EPS_ATTACH_NEEDED_REJ_RSP,
MSG_ID_EMMREG_SET_IMS_VOICE_AVAILABILITY_REQ, // for IMS
MSG_ID_EMMREG_SET_IMS_VOICE_TERMINATION_REQ, // for IMS
#ifdef __MULTIPLE_PS__
MSG_ID_EMMREG_DATA_ALLOW_REQ,
#endif
MSG_ID_EMMREG_IMS_SCM_INFO_REQ, // for REL12 feature SCM

#ifdef __SGLTE__
MSG_ID_EMMREG_PS_SWITCH_REQ,
MSG_ID_EMMREG_PS_SWITCH_SUSPEND_REQ, 
MSG_ID_EMMREG_PS_SWITCH_RESUME_REQ, 
#endif /* __SGLTE__ */

MSG_ID_EMMREG_ACTIVE_SIM_INFO_REQ,
MSG_ID_EMMREG_DUPLEX_MODE_CHANGE_REQ,
MSG_ID_EMMREG_SET_PGCHECK_REQ,
MSG_ID_EMMREG_IMS_REG_STATUS_UPDATE_REQ,
MSG_ID_EMMREG_IMS_CALL_REG_INFO_REQ,
MSG_ID_EMMREG_SET_MS_SV_REQ,

// Remote SIM
MSG_ID_EMMREG_RSIM_AKA_STATUS_REQ,
MSG_ID_EMMREG_RSIM_AKA_RSIM_ACCESS_FOR_AUTH_DOWNLOAD_REQ,
MSG_ID_EMMREG_RSIM_AUTH_ABORT_REQ,

/****************************************************************************
 *                          Destination: EVAL (NWSEL to EVAL) 
 ****************************************************************************/
MSG_ID_NWSEL_EVAL_PLMN_SEARCH_REQ,
MSG_ID_NWSEL_EVAL_SEARCH_STATUS_UPDATE_REQ,
MSG_ID_NWSEL_EVAL_PLMN_LIST_STATUS_UPDATE_REQ,
MSG_ID_NWSEL_EVAL_SYS_INFO_UPDATE_REQ,
MSG_ID_NWSEL_EVAL_REGN_STATUS_UPDATE_REQ,
MSG_ID_NWSEL_EVAL_PLMN_LIST_REQ,
MSG_ID_NWSEL_EVAL_PLMN_LIST_STOP_REQ,
MSG_ID_NWSEL_EVAL_CSG_LIST_REQ,
MSG_ID_NWSEL_EVAL_CSG_LIST_STOP_REQ,
MSG_ID_NWSEL_EVAL_EQ_PLMN_LIST_UPDATE_REQ,
MSG_ID_NWSEL_EVAL_HPLMN_INFO_UPDATE_REQ,
MSG_ID_NWSEL_EVAL_DEACTIVATE_REQ,
MSG_ID_NWSEL_EVAL_NAS_CTXT_TRANSFER_REQ,
MSG_ID_NWSEL_EVAL_UEMODE_PARAM_UPDATE_REQ,
MSG_ID_NWSEL_EVAL_PLMN_SEARCH_PREFERENCE_UPDATE_REQ, // for IMS
MSG_ID_NWSEL_EVAL_EMC_FPLMN_LIST_UPDATE_REQ, // for IMS
MSG_ID_NWSEL_EVAL_RESELECT_SHARED_NW_RSP, // for IMS __6293DEV__
MSG_ID_NWSEL_EVAL_RESUME_REQ,
MSG_ID_NWSEL_EVAL_EUTRAN_CAP_UPDATE_REQ,
MSG_ID_NWSEL_EVAL_INVALID_SIM_RECOVER_REQ,  // for __REL10__: t3245
MSG_ID_NWSEL_EVAL_L2C_TRANSFER_REQ,  // for C2K
MSG_ID_NWSEL_EVAL_C2L_TRANSFER_REQ,  // for C2K
MSG_ID_NWSEL_EVAL_C2K_IRAT_COMPLETE_REQ,    // for C2K
MSG_ID_NWSEL_EVAL_C2K_NORMAL_SERVICE_REQ,
MSG_ID_NWSEL_EVAL_PLMN_SEARCH_ABORT_REQ,
MSG_ID_NWSEL_EVAL_POWER_ON_PROTECTION_REQ,
MSG_ID_NWSEL_EVAL_CLEAR_T3346_EPLMN_REQ,
MSG_ID_NWSEL_EVAL_SET_MRU_REQ,
MSG_ID_NWSEL_EVAL_CLEAR_MRU_REQ,
MSG_ID_NWSEL_EVAL_CSG_AUTO_SEARCH_MODE_REQ,
MSG_ID_NWSEL_EVAL_C2K_FORCE_TO_LOCAL_DETACH_REQ, //for C2K when OP12 project
MSG_ID_NWSEL_EVAL_GLOBAL_MODE_CHANGE_START_REQ,
MSG_ID_NWSEL_EVAL_HVOLTE_MODE_CHANGE_REQ,
MSG_ID_NWSEL_EVAL_ARAL_UPDATE_REQ,
MSG_ID_NWSEL_EVAL_CLEAR_FORBIDDEN_TA_LIST_REQ,
MSG_ID_NWSEL_EVAL_CALL_STATUS_IND,
MSG_ID_NWSEL_EVAL_GMSS_IRAT_START_IND, // for C2K
MSG_ID_NWSEL_EVAL_GMSS_IRAT_FINISH_IND, // for C2K
MSG_ID_NWSEL_EVAL_IA_APN_CHANGE_REQ,
MSG_ID_NWSEL_EVAL_MANUAL_SEARCH_STOP_REQ, 
MSG_ID_NWSEL_EVAL_RAT_DISABLE_CONFIG_REQ,
MSG_ID_NWSEL_EVAL_PLMNLIST_ABORT_REQ,
MSG_ID_NWSEL_EVAL_PEER_SIM_MANUAL_LIST_START_REQ,
MSG_ID_NWSEL_EVAL_PEER_SIM_MANUAL_LIST_FINISH_REQ,
MSG_ID_NWSEL_EVAL_ECBM_START_REQ,
MSG_ID_NWSEL_EVAL_ECBM_STOP_REQ,
MSG_ID_NWSEL_EVAL_SEND_DAN_SMS_IND,

/****************************************************************************
 *                          Destination: EVAL (SMS to EVAL) 
 ****************************************************************************/
MSG_ID_SMS_EVAL_EST_REQ,
MSG_ID_SMS_EVAL_UNITDATA_REQ,
MSG_ID_SMS_EVAL_SMS_STATUS_REQ,
MSG_ID_IMCSMS_EVAL_MT_SMS_OVER_IMS_STATUS_REQ,


/****************************************************************************
 *                          Destination: EVAL (SMSAL to EVAL) 
 ****************************************************************************/
MSG_ID_SMSAL_EVAL_CBCH_REQ,
MSG_ID_SMSAL_EVAL_CB_UPDATE_REQ,
MSG_ID_SMSAL_EVAL_CB_MSG_REMOVAL_REQ,

/****************************************************************************
 *                          Destination: EVAL (L4BPDN to EVAL) 
 ****************************************************************************/
MSG_ID_L4BPDN_EVAL_PS_SERVICE_TYPE_NOTIFY_REQ,

/****************************************************************************
 *                          Destination: EVAL (ETC to EVAL)
 ****************************************************************************/
MSG_ID_EVAL_ETC_NW_RESET_UE_STORED_POS_INFO_IND, // for LPP
MSG_ID_EVAL_ETC_LBM_INFO_IND, // for L4C


/****************************************************************************
 *                          Destination: EVAL (EMM to EVAL) 
 ****************************************************************************/
MSG_ID_EVAL_EMM_SET_RAT_MODE_CNF,
MSG_ID_EVAL_EMM_ATTACH_CNF,
MSG_ID_EVAL_EMM_DETACH_IND,
MSG_ID_EVAL_EMM_RFOFF_CNF,
MSG_ID_EVAL_EMM_CELL_INFO_UPDATE_IND,
MSG_ID_EVAL_EMM_NW_INFO_IND,
MSG_ID_EVAL_EMM_NW_ECC_IND,
MSG_ID_EVAL_EMM_PLMN_SEARCH_CNF,
MSG_ID_EVAL_EMM_SYS_INFO_IND,
MSG_ID_EVAL_EMM_REGN_RESULT_IND,
MSG_ID_EVAL_EMM_DISABLE_NW_LOSS_OPTIMIZE_IND,
MSG_ID_EVAL_EMM_NO_ACTION_IND,
MSG_ID_EVAL_EMM_PLMN_FOUND_IND,
MSG_ID_EVAL_EMM_PLMN_LIST_CNF,
MSG_ID_EVAL_EMM_PLMN_LIST_STOP_CNF,
MSG_ID_EVAL_EMM_CSG_LIST_CNF,
MSG_ID_EVAL_EMM_CSG_LIST_STOP_CNF,
MSG_ID_EVAL_EMM_OUT_OF_SERVICE_IND,
MSG_ID_EVAL_EMM_OUT_OF_SERVICE_FINISH_IND,
MSG_ID_EVAL_EMM_PLMN_LOSS_IND,
MSG_ID_EVAL_EMM_DEACTIVATE_CNF,
MSG_ID_EVAL_EMM_NAS_CTXT_TRANSFER_CNF,
MSG_ID_EVAL_EMM_SMS_EST_CNF,
MSG_ID_EVAL_EMM_SMS_EST_REJ,
MSG_ID_EVAL_EMM_SMS_UNITDATA_IND,
MSG_ID_EVAL_EMM_SMS_ERR_IND,
MSG_ID_EVAL_EMM_LPP_DATA_CNF, // for LPP
MSG_ID_EVAL_EMM_LPP_DATA_IND, // for LPP
MSG_ID_EVAL_EMM_LCS_DATA_CNF, // for LPP
MSG_ID_EVAL_EMM_LCS_DATA_IND, // for LPP
MSG_ID_EVAL_EMM_SIM_EPSNSC_INFO_IND,
MSG_ID_EVAL_EMM_SIM_EPSLOCI_INFO_IND,
MSG_ID_EVAL_EMM_AUTHENTICATE_IND,
MSG_ID_EVAL_EMM_PLMN_SEARCH_IND,
MSG_ID_EVAL_EMM_SIGNAL_APPEAR_IND,
MSG_ID_EVAL_EMM_EMERGENCY_STATUS_UPDATE_IND, // for IMS
MSG_ID_EVAL_EMM_EMC_ATTACH_CNF, // for IMS
MSG_ID_EVAL_EMM_EMC_DETACH_IND, // for IMS
MSG_ID_EVAL_EMM_NW_FEATURE_SUPPORT_IND, // for IMS
MSG_ID_EVAL_EMM_SRVCC_STATUS_UPDATE_IND, // for IMS
MSG_ID_EVAL_EMM_RESELECT_SHARED_NW_IND, // for IMS __6293DEV__
MSG_ID_EVAL_EMM_NW_REJECT_IND,
MSG_ID_EVAL_EMM_T3402_CHANGE_IND, // __REL10__: t3402
MSG_ID_EVAL_EMM_PERSISTENT_EPSB_REL_IND, // __REL10__: persistent EPSB
//MSG_ID_EVAL_EMM_L2C_TRANSFER_CNF,  // for C2K
MSG_ID_EVAL_EMM_C2K_IRAT_ATTACH_RESULT_IND, // for C2K
MSG_ID_EVAL_EMM_DUPLEX_MODE_CHANGE_CNF, //for C2K
MSG_ID_EVAL_EMM_REL_IND,
MSG_ID_EVAL_EMM_SMS_UNITDATA_CNF,
MSG_ID_EVAL_EMM_SR_FAILURE_IND,
MSG_ID_EVAL_EMM_CABTSRI_IND,
MSG_ID_EVAL_EMM_SR_REJECT_IND,
MSG_ID_EVAL_EMM_RACH_REJECT_IND,
MSG_ID_EVAL_EMM_CONNECTION_INFO_IND,
MSG_ID_EVAL_EMM_1XCSFB_CNF, //for C2K
MSG_ID_EVAL_EMM_1XCSFB_STOP_CNF, //for C2K
MSG_ID_EVAL_EMM_BARRING_STATUS_IND,
MSG_ID_EVAL_EMM_ESTABLISHMENT_IND,
MSG_ID_EVAL_EMM_PLMN_RESTRICTION_CHANGE_IND,
MSG_ID_EVAL_EMM_C2K_CSFB_CNF, //for C2K
MSG_ID_EVAL_EMM_C2K_CSFB_STOP_CNF, //for C2K
MSG_ID_EVAL_EMM_C2K_CSFB_START_IND,
MSG_ID_EVAL_EMM_C2K_CSFB_EST_IND,
MSG_ID_EVAL_EMM_C2K_CSFB_STOP_IND,
MSG_ID_EVAL_EMM_MT_PAGE_IND,
MSG_ID_EVAL_EMM_SEND_ESR_IND,
MSG_ID_EVAL_EMM_IRAT_C2L_SUCCESS_NOTIFY_IND, //for C2K
MSG_ID_EVAL_EMM_SEARCH_INTERRUPT_EVENT_IND,

MSG_ID_EVAL_EMM_SIM_RESET_COMPLETE_IND,
MSG_ID_EVAL_EMM_DRX_UPDATE_CNF,
MSG_ID_EVAL_EMM_DRX_UPDATE_IND,
MSG_ID_EVAL_EMM_ACDC_STATUS_UPDATE_CNF,
MSG_ID_EVAL_EMM_UPDATE_EMC_PDN_STATUS_IND,
MSG_ID_EVAL_EMM_IMS_SCM_INFO_CNF, //REL12 feature SCM
#ifdef __SGLTE__
MSG_ID_EVAL_EMM_PS_SWITCH_CNF,
MSG_ID_EVAL_EMM_PS_SWITCH_SUSPEND_CNF, 
MSG_ID_EVAL_EMM_PS_SWITCH_IND, 
#endif/* __SGLTE__ */
MSG_ID_EVAL_EMM_CLEAR_FORBIDDEN_TA_NEED_SEARCH_IND,
MSG_ID_EVAL_EMM_IMS_HANDOVER_NEED_SEARCH_IND,
MSG_ID_EVAL_EMM_CELL_BAND_INFO_UPDATE_IND,  // For VzW (VZ_REQ_e911_30203)
MSG_ID_EVAL_EMM_EMM_MSG_IND,                // For VzW VoWifi TC3.2
MSG_ID_EVAL_EMM_NEED_DUPLEX_MODE_CHG_IND,
MSG_ID_EVAL_EMM_RSIM_AUTH_FINISH_IND,   //R-SIM
MSG_ID_EVAL_EMM_RSIM_ABORT_CNF, //R-SIM
MSG_ID_EVAL_EMM_GENERAL_MODEM_CONFIGURE_SET_CNF,
MSG_ID_EVAL_EMM_ME_RECONFIGURE_CNF,
MSG_ID_EVAL_EMM_RESUME_NEEDED_IND,
MSG_ID_EVAL_EMM_PAGING_SESSION_STATUS_NTF,

MSG_ID_EVAL_EMM_RSIM_AUTH_ABORT_CNF, // Remote SIM

MSG_ID_EVAL_EMM_CS_DOMAIN_NOT_AVAILABLE_IND,

MSG_ID_EVAL_EMM_CS_SERVICE_NOTIFICATION_IND, //TMO-US GID-MTRREQ-245903 
MSG_ID_EVAL_EMM_IA_APN_NOT_READY_IND,
MSG_ID_EVAL_EMM_IA_APN_SET_IND,

/****************************************************************************
 *                          Destination: EVAL (ESM to EVAL) 
 ****************************************************************************/
MSG_ID_EVAL_ESM_EPS_ATTACH_NEEDED_IND,
MSG_ID_EVAL_ESM_RAT_CHANGE_IND,
MSG_ID_EVAL_ESM_RAT_CHANGE_CNF,
MSG_ID_EVAL_ESM_EMC_ATTACH_IND, // for IMS
MSG_ID_EVAL_ESM_SRVCC_STATUS_UPDATE_IND, // for IMS
MSG_ID_EVAL_ESM_C2L_TRANSFER_CNF,  // for C2K


/****************************************************************************
 *                          Destination: EVAL (ERRC to EVAL) 
 ****************************************************************************/
MSG_ID_EVAL_ERRC_CB_RECONFIG_IND,
MSG_ID_EVAL_ERRC_CB_GS_CHANGE_IND,
MSG_ID_EVAL_ERRC_CELL_POWER_LEVEL_IND,
MSG_ID_EVAL_ERRC_ADJUST_MEAS_CNF,
MSG_ID_EVAL_ERRC_PWS_INFORMATION_IND,
MSG_ID_EVAL_ERRC_NBR_CELL_INFO_START_CNF,
MSG_ID_EVAL_ERRC_NBR_CELL_INFO_IND,
MSG_ID_EVAL_ERRC_NBR_CELL_INFO_STOP_CNF,
MSG_ID_EVAL_ERRC_GET_SSAC_PARAM_CNF, // for IMS
MSG_ID_EVAL_ERRC_CONNECTED_DRB_IND,
MSG_ID_EVAL_ERRC_TIME_INFO_IND,
#ifdef __VOLTE_SUPPORT__ 
MSG_ID_EVAL_ERRC_IMS_SYS_INFO_IND, //__TC01__
#endif
MSG_ID_EVAL_ERRC_EDDA_CNF,
MSG_ID_EVAL_ERRC_LTECA_MODE_SETTING_CNF,
MSG_ID_EVAL_ERRC_OMADM_UPDATE_CNF,
MSG_ID_EVAL_ERRC_LTE_TM9_FDD_TDD_SETTING_CNF,
MSG_ID_EVAL_ERRC_CA_BAND_COMB_LIST_CNF,

//#ifdef __VOLTE_SUPPORT__ 
MSG_ID_EVAL_ERRC_SRVCC_STATUS_UPDATE_IND, // for IMS
#ifdef __BCSFB__
MSG_ID_EVAL_ERRC_ERLM_REPORT_IND,
MSG_ID_EVAL_ERRC_ERLQ_REPORT_IND,
#endif
//#endif

#ifdef __SGLTE__
MSG_ID_EVAL_ERRC_TO_PEER_INFO_IND,
MSG_ID_EVAL_ERRC_CAPABILITY_CHANGE_IND,
#endif /* __SGLTE__ */
MSG_ID_EVAL_ERRC_STATE_IND,
MSG_ID_EVAL_ERRC_MRU_UPDATE_CNF,

//#ifdef __LTE_R11__
MSG_ID_EVAL_ERRC_CA_INFO_IND,
//#endif

MSG_ID_EVAL_ERRC_PCELL_INFO_IND,

MSG_ID_EVAL_ERRC_EVDO_PS_CONNECTION_STATUS_IND,
MSG_ID_EVAL_ERRC_1XRTT_PS_CONNECTION_STATUS_IND,

MSG_ID_EVAL_ERRC_NW_BAND_INFO_IND,
MSG_ID_EVAL_ERRC_OTHER_RAT_START_SEARCH_IND,

/****************************************************************************
 *                          Destination: EVAL (CISS to EVAL) 
 ****************************************************************************/
MSG_ID_CISS_EVAL_DATA_REQ,


/****************************************************************************
 *                          Destination: EVAL (CPSW to EVAL) 
 ****************************************************************************/
MSG_ID_C2K_LTE_CSFB_REQ,
MSG_ID_C2K_LTE_CSFB_STOP_REQ,


/****************************************************************************
 *                          Destination: EVAL (SSDS to EVAL) 
 ****************************************************************************/
MSG_ID_SSDS_EVAL_SEMAPHORE_SERVICE_STATUS_REQ,


/****************************************************************************
 *                          Destination: EVAL (DDM to EVAL) 
 ****************************************************************************/
MSG_ID_DDM_EVAL_IMS_HANDOVER_ATTACH_REQ,
MSG_ID_DDM_EVAL_IA_APN_SET_REQ,


/****************************************************************************
 *                          Destination: EVAL (UPCM to EVAL) 
 ****************************************************************************/
MSG_ID_EVAL_UPCM_START_RELEASE_PAGING_TIMER_IND,


/****************************************************************************/
MSG_ID_EVAL_CODE_END,

MODULE_MSG_END( MSG_ID_EVAL_CODE_TAIL )

#endif /* _EVAL_MSGID_H */
