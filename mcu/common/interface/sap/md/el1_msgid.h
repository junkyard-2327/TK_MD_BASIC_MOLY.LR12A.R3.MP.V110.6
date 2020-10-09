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
 *   el1_msgid.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   LTE Layer 1 and Protocol Stack related message identity definition
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 02 26 2020 deepti.varadarajan
 * [MOLY00501582] [DH30_TRF][PROTOCOL][ATT][10776]  LTE-BTR-5-4102 is failed
 * 	
 * 	[MOLY00501582] NDI setting for SIB1 Rx
 *
 * 11 13 2019 wade.chen
 * [MOLY00457350] ??TX¤zÊðRX??»Ý¨D
 * 	
 * 	[R3] non-sync NSFT
 *
 * 09 26 2019 aditya.rachakonda
 * [MOLY00441408] [MT6293][LR12.R3] King of Glory latency optimization patch back (Level2)
 * 	
 * 	Addition of guard timer for KOG to avoid race around condition when AP craches.
 *
 * 09 23 2019 aditya.rachakonda
 * [MOLY00441408] [MT6293][LR12.R3] King of Glory latency optimization patch back (Level2)
 * 	
 * 	Addition of guard timer for KOG to avoid race around condition where AP craches.
 * 	
 * 	Reverting CL: 9328023 due to build error.
 *
 * 05 30 2018 alice.tsai
 * [MOLY00328923][EL1 CH]256 QAM Feature Design
 *
 * 05 30 2018 alice.tsai
 * [MOLY00328923][EL1 CH]256 QAM Feature Design
 *
 * 02 27 2018 gary.liu
 * [MOLY00308599] eMBMS feature design
 * [EL1 RX] eMBMS efuse
 *
 * 12 13 2017 meng-hsuan.lin
 * [MOLY00296032] [MT6763][Bianco][O1][MP2][TMO][WW FT][United States][Seattle][Nokia][EE][ASSERT] file:mcu/pcore/modem/lte_sec/errc/assert/errc_el1_assert_csr.c line:86
 * 	
 * 	[MOLY00296032] CSR scheduling
 *
 * 12 04 2017 meng-hsuan.lin
 * [MOLY00260493] rollback csr scheduling
 *
 * 11 02 2017 alex.chung
 * [MOLY00286880] [MT6763][IDC] Workaround for WMT Defect
 * Record all CCCI msg content and then handle them once to prevent WMT dequeue too much MSG
 *
 * 09 25 2017 aric.chiu
 * [MOLY00279410] [IRAT PERF VTF] EL1C speed up CS/CM scheduling in HSR mode
 * [errc-el1mpc] add RCM hsr freq interface/RCM hsr mode interface.
 *
 * 09 20 2017 lawrence.chen
 * [MOLY00278366]LPP OTDOA new procedure architecture development.
 *
 * 09 13 2017 aric.chiu
 * [MOLY00277703] [MT6293][LR12A.R2] speed up inter-freq. measurement by MEASURE_CFG_NTF.
 * [errc-el1mpc] add interface for MEASURE_CFG_NTF.
 *
 * 08 29 2017 pei-xuan.qiu
 * [MOLY00260508] [EL1_MEAS_Development]
 *
 * 	Remove MEAS pathloss (UMOLYA).
 *
 * 08 28 2017 gary.liu
 * [MOLY00266605] Verizon' ota antenna infos Porting 91 [VZW] feature to 93
 * [EL1 PHS] bypass VZW cmd for MPC
 *
 * 08 24 2017 nelsonhe.huang
 * [MOLY00273588] [MOLY00269598] [Gen93] TPB/Mobility Ctrl patch check in -> Meas part : Revise ilm naming
 *
 * 08 24 2017 hyper.wang
 * [MOLY00176045] [UMOLYA][EL1 MEAS Development] Refine SINR calculation
 *
 * 08 21 2017 masc.cheng
 * [MOLY00269598] [Gen93]TPB/Mobility Ctrl patch check in
 * [TPB]EL1C Tx part
 *
 * 08 21 2017 gary.liu
 * [MOLY00207413] EL1C 6293 development
 *
 * 	[EL1 CH] add new message to tell TX IDLE DRX config for TAS
 *
 * 08 16 2017 yu-chun.chen
 * [MOLY00233456] [Bianco_SMT][UMOLYA] 93 TSTM_META Development
 * Fix MSGID for TSTM
 *
 * 08 07 2017 yu-chun.chen
 * [MOLY00233456] [Bianco_SMT][UMOLYA] 93 TSTM_META Development
 * move TSTM xl1sim case from code to xl1sim script
 *
 * 07 28 2017 gary.liu
 * [MOLY00266852] [Bianco/Zion] fre sw check-in
 * [EL1] B71 efuse
 *
 * 07 07 2017 jung-ching.hsieh
 * [MOLY00262750][PH1 VZW] Regarding Antenna Testing interface modify
 *
 * 06 30 2017 alex.chung
 * [MOLY00260703] [TE-MTBF][Airtel IMS][Bianco][N1]Externel (EE),0,0,99,/data/core/,1,modem,Trigger time:[2017-06-23 06:18:24.250319] md1:(MCU_core1.vpe0.tc0(VPE2)) [Fatal error(task)] err_code1:0x00000604 err_code2:0xFFFFFFDE err_code3:0xCCCCCCCC MD Offender:EL1
 * MOD_EL1_MPC sends ILM to update volte and inter-frequency state
 *
 * 06 28 2017 alex.chung
 * [MOLY00260337] [BIANCO] Enable L+L IDC
 * Enable L+L IDC
 *
 * 06 28 2017 hyper.wang
 * [MOLY00257930] [6293] Special Patch for VoLTE
 * 1. Remove MSG_ID_EL1MPC_EL1_MEAS_PHS_CM_PROC_REQ/MSG_ID_EL1_EL1MPC_PHS_MEAS_CM_PROC_CNF
 * 2. Remove MEAS_IND_CELL_STATE_VALID_BIT
 *
 * 05 26 2017 hyper.wang
 * [MOLY00240604] [SE2 Internal Test][MT6293][UMOLYA][20170406][Overnight Result] Assert fail: el1_meas_phy.c 1104 - EL1_MPC
 * 	(Consider cross-term flag in APD)
 * 	.
 *
 * 05 16 2017 gary.liu
 * [MOLY00249575] [6293][EL1C] SW feature check
 * [EL1C] SW feature check
 *
 * 04 20 2017 jy.pan
 * [MOLY00237418] [EL1D CS]CSHW hang workaround
 * [EL1D CS]CSHW hang workaround.
 *
 * 04 08 2017 hyper.wang
 * [MOLY00176045] [UMOLYA][EL1 MEAS Development]
 * 	Enable MEAS/PHS interface: MSG_ID_EL1MPC_EL1_MEAS_PHS_MEASURE_TYPE_NTF
 *
 * 03 29 2017 alex.chung
 * [MOLY00226028] [UMOLYA][EL1] EL1 RX development
 * Porting IDC from Gen92 to Gen93
 *
 * 03 29 2017 ali.su
 * [MOLY00237873] [6293][EL1] Gemini L+L
 * (UMOLYA TRUNK) 6293 EL1: L+L (CH).
 *
 * 03 21 2017 lewis.yu
 * [MOLY00182864] [6293] EL1C RX development
 * L+L development.
 *
 * 03 15 2017 popcafa.shih
 * [MOLY00222760] [Gen 93][UMOLY to UMOLYA sync] el1tx part
 * ML1S TRX Feature for phy test.
 *
 * 02 16 2017 luhung.hsu
 * [MOLY00186994] 93 New PHS code
 * [EL1 PHS]Refine 4G stby flow
 *
 * 02 02 2017 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 *
 * 	.
 *
 * 01 25 2017 gary.liu
 * [MOLY00207413] EL1C 6293 development
 * [EL1 CH] L1ADT porting
 *
 * 01 17 2017 ali.su
 * [MOLY00203235] [6293][EL1]EL1_RX/MLL1 development
 * (UMOLYA) EL1C ue_category_ind implementation.
 *
 * 01 13 2017 ali.su
 * [MOLY00203235] [6293][EL1]EL1_RX/MLL1 development
 * (UMOLYA) ERRC-EL1 ue_category interface.
 *
 * 01 10 2017 luhung.hsu
 * [MOLY00186994] 93 New PHS code
 * [EL1 PHS]Combine two stopSrvPresync flag to one
 *
 * 01 04 2017 ali.su
 * [MOLY00203235] [6293][EL1]EL1_RX/MLL1 development
 * (UMOLYA)ERRC-EL1  M-PS, R-SIM interface.
 *
 * 01 04 2017 luhung.hsu
 * [MOLY00186994] 93 New PHS code
 * Rename scs result ilm msg
 *
 * 12 25 2016 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 *
 * 	.93 tstm_meta patch back
 *
 * 12 08 2016 gary.liu
 * [MOLY00207413] EL1C 6293 development
 * [EL1 IDC] add message
 *
 * 12 07 2016 aric.chiu
 * [MOLY00185561] [UMOLYA][TRUNK][UMOLYA][EL1/EL1_MPC]
 * [el1] rename MSG_ID_EL1_EL1MPC_CH_MEAS_CELL_INFO_UPDATE_IND to MSG_ID_EL1_EL1MPC_CH_MEAS_CELL_INFO_UPDT_IND.
 *
 * 12 06 2016 kuan-ting.lee
 * [MOLY00176045] [UMOLYA][EL1 MEAS Development]
 * Add: MSG_ID_ERRC_EL1MPC_MEASUREMENT_INFO_NTF.
 *
 * 11 24 2016 kuan-ting.lee
 * [MOLY00176045] [UMOLYA][EL1 MEAS Development]
 *
 * 	IcSp: 1. sync code from 92
 * 	          2. Design change: Rx qual report
 * 	          3. Feicic antenna port information.
 * 	          4. Misc
 *
 * 11 16 2016 popcafa.shih
 * [MOLY00196065] [MT6293][folder structure] Move EL1/EL2 files from LTE domain to SWRD domain
 * modify MOLY00173949 & MOLY00172964 for IS_EL1_ANDROID_M_LCE_REPORT_SUPPORT 0.
 *
 * 11 16 2016 yuanwei.fan
 * [MOLY00213386] [EL1D][CM] report buffer save related modify
 * [EL1D][CM] report buffer related modiy (to save buffer)
 *
 * 11 15 2016 ali.su
 * [MOLY00203235] [6293][EL1]EL1_RX/MLL1 development
 * (UMOLYA)EL1: remove SGLTE legacy code.
 *
 * 11 11 2016 ali.su
 * [MOLY00203235] [6293][EL1]EL1_RX/MLL1 development
 * (UMOLYA) EL1 Gemini: RSVAS (part 1).
 *
 * 11 07 2016 yuanwei.fan
 * [MOLY00211822] [EL1C][CM] MBSFN report related modify rollback
 * [EL1D][CM] MBSFN report related modify rollback
 *
 * 11 03 2016 gary.liu
 * [MOLY00207413] EL1C 6293 development
 * [6293] roll back for el1b
 *
 * 11 02 2016 luhung.hsu
 * [MOLY00186994] 93 New PHS code
 * [EL1 PHS]SCell flow refine
 *
 * 10 20 2016 ali.su
 * [MOLY00208519] [MT6293][VzW]LTE SIB8/16 for AGPS fine time aiding (code sync from UMOLY)
 * (UMOLYA) AGPS sync feature (EL1).
 *
 * 10 18 2016 hyper.wang
 * [MOLY00203310] [PS_DEV][6293] ERRC MBSFN MDT check in
 *
 * 10 14 2016 ali.su
 * [MOLY00203235] [6293][EL1]EL1_RX/MLL1 development
 * (UMOLYA) add note.
 *
 * 10 05 2016 kuan-ting.lee
 * [MOLY00176045] [UMOLYA][EL1 MEAS Development]
 * Meas force mode change.
 *
 * 09 28 2016 kuan-ting.lee
 * [MOLY00176045] [UMOLYA][EL1 MEAS Development]
 * Add new ilm: MSG_ID_EL1MPC_EL1_MEAS_TX_SRV_RLT_IND.
 *
 * 09 26 2016 hyper.wang
 * [MOLY00203310] [PS_DEV][6293] ERRC MBSFN MDT check in
 *
 * 09 26 2016 lewis.yu
 * [MOLY00182864] [6293] EL1C RX development
 * add TX/MEAS RX CMD ind.
 *
 * 09 26 2016 luhung.hsu
 * [MOLY00186994] 93 New PHS code
 * [EL1 PHS]Add SRVCC enhancement flow
 *
 * 09 23 2016 eddie.wang
 * [MOLY00194987] [MT6293][UMOLYA/PS DEV] EMAC maintenance
 * Sync PS.DEV to TRUNK up to CL2868873
 *
 * 08 16 2016 eddie.wang
 * [MOLY00197177] Code maintenance on UMOLYA.PS.DEV
 * [EMACMCH]Remove MCCH_RCV_MODE_CHANGE_COMPLETE_NTF and related struct
 * 09 07 2016 ali.su
 * [MOLY00181051] [6293][EL1]EL1_CH/EL1_IRT development
 * (UMOLYA) merge EL1_CH code from UMOLY, CL#2302597, CL#2639880, CL#2663669, CL#2667971, CL#2690148, CL#2706232.
 *
 * 09 02 2016 yuanwei.fan
 * [MOLY00200903] [EL1D][CM] SCM and tp related modify
 * [EL1D][CM] SCM  RSSI/PHASE Report for VzW OTA Test
 *
 * 08 24 2016 shihyao.wang
 * [MOLY00175997] [EL1C] umolya code sync
 * drx control & event scheduling
 *
 * 08 22 2016 hyper.wang
 * [MOLY00176045] [UMOLYA][EL1 MEAS Development]
 * 	add MSG ID
 * 	.
 *
 * 08 10 2016 gary.liu
 * [MOLY00194267] add new feature
 * Merging
 *
 * 	//UMOLYA_CBr/aric.chiu/UMOLYA_W16.31.LTE.p1.el1FolderMove/
 *
 * 	to //UMOLYA/TRUNK/UMOLYA/
 *
 * 08 10 2016 kuan-ting.lee
 * [MOLY00176045] [UMOLYA][EL1 MEAS Development]
 * send specific measurement ilm to CSR instead of MEAS
 *
 * 08 09 2016 aric.chiu
 * [MOLY00196065] [MT6293][folder structure] Move EL1/EL2 files from LTE domain to SWRD domain
 * [fldr_str][el1] merge common file from Cbr.
 *
 * 07 11 2016 gary.liu
 * [MOLY00190027] UMOLYA build error
 * fix build error
 *
 * 06 28 2016 lawrence.chen
 * [MOLY00183642] new task EL1_MPC definition for 6293
 * Rename MSG Id for the new EL1_MPC task.
 *
 * 06 28 2016 aric.chiu
 * [MOLY00185561] [UMOLYA][TRUNK][UMOLYA][EL1/EL1_MPC]
 * add MSG_ID_EL1_TX_MEAS_TX_RX_DIFF_IND.
 *
 * 06 28 2016 aric.chiu
 * [MOLY00185561] [UMOLYA][TRUNK][UMOLYA][EL1/EL1_MPC]
 * add lost msg_id.
 *
 * 06 28 2016 johnny.chiang
 * [MOLY00174069] [UMOLYA] fix build error
 *
 * 	.update csr irt interface
 *
 * 06 28 2016 aric.chiu
 * [MOLY00185561] [UMOLYA][TRUNK][UMOLYA][EL1/EL1_MPC]
 * fix redeclaration of enumerator.
 *
 * 06 28 2016 aric.chiu
 * [MOLY00185561] [UMOLYA][TRUNK][UMOLYA][EL1/EL1_MPC]
 * msg_id modify between el1_mpc & el1_phs
 *
 * 06 28 2016 gary.liu
 * [MOLY00186977] merge el1c code to umolya
 *
 * 	add new message id and change msg range for el1
 *
 * 06 27 2016 johnny.chiang
 * [MOLY00174069] [UMOLYA] fix build error
 *
 * 	.
 *
 * 06 27 2016 lawrence.chen
 * [MOLY00183642] new task EL1_MPC definition for 6293
 * MSG Id rename for the new task EL1_MPC.
 *
 * 06 22 2016 johnny.chiang
 * [MOLY00181800] [UMOLYA] 93 CSR Development
 *
 * 	. add new scm message id
 *
 * 06 13 2016 johnny.chiang
 * [MOLY00181800] [UMOLYA] 93 CSR Development
 *
 * 	.
 *
 * 06 13 2016 johnny.chiang
 * [MOLY00181800] [UMOLYA] 93 CSR Development
 *
 * 	.add new primitive
 *
 * 06 08 2016 kuan-ting.lee
 * [MOLY00176045] [UMOLYA][EL1 MEAS Development]
 * Add Meas SCS procedure .
 *
 * 06 08 2016 ali.su
 * [MOLY00181051] [6293][EL1]EL1_CH/EL1_IRT development
 * (UMOLYA) EMAC-EL1 interface update (msg).
 *
 * 06 08 2016 ali.su
 * [MOLY00181051] [6293][EL1]EL1_CH/EL1_IRT development
 * (UMOLYA) ERRC-EL1 interface update (msg).
 *
 * 06 03 2016 ali.su
 * [MOLY00181051] [6293][EL1]EL1_CH/EL1_IRT development
 * (UMOLYA) EL1 SCS flow change: (OA) interface.
 *
 * 05 24 2016 ali.su
 * [MOLY00181051] [6293][EL1]EL1_CH/EL1_IRT development
 * (UMOLYA) CH-MEAS flow change: add message.
 *
 * 04 26 2016 shihyao.wang
 * [MOLY00175997] [EL1C] umolya code sync
 * 93 code sync from panu cbr (label=UMOLY_92L1Dev.W1617.p4).
 *
 * 03 16 2016 panu.peisa
 * [MOLY00147611] MT6292 EL1 code merge from UMOLY_92L1Dev CBr to UMOLY
 * Integrated mcu/common and mcu/make changes from 2124898 to 2168172.
 *
 * 03 04 2016 panu.peisa
 * [MOLY00147611] MT6292 EL1 code merge from UMOLY_92L1Dev CBr to UMOLY
 * Integrated mcu/common, mcu/make and mcu/pcore changes form 2108356 to 2124898 ( swrd part ).
 *
 * 02 04 2016 panu.peisa
 * [MOLY00147611] MT6292 EL1 code merge from UMOLY_92L1Dev CBr to UMOLY
 * Integrated mcu/common, mcu/make and mcu/pcore changes from 2019297 to 2043298 ( swrd part ).
 *
 * 02 03 2016 antti.tormanen
 * [MOLY00133325] 6291plus development
 *
 * 	Interface updates for feature port & sync
 * 	Port LR11 new features:
 * 	MOLY00139263 - specific cell delete
 * 	MOLY00155307 - eMBMS enhancement
 * 	MOLY00154368 - Change handover abort interface to REQ/CNF
 * 	AUDRX support
 * 	MIB spare bit interface.
 *
 * 01 22 2016 panu.peisa
 * [MOLY00147611] MT6292 EL1 code merge from UMOLY_92L1Dev CBr to UMOLY
 * Integrated mcu/make, mcu/common mcu/pcore changes from 1985248 to 2011226 ( swrd part).
 *
 * 01 19 2016 panu.peisa
 * [MOLY00147611] MT6292 EL1 code merge from UMOLY_92L1Dev CBr to UMOLY
 * Integrated common and mcu/common changes from 1946091 to 1985248 .
 *
 * 11 16 2015 panu.peisa
 * [MOLY00147611] MT6292 EL1 code merge from UMOLY_92L1Dev CBr to UMOLY
 * Integrated mcu/common, mcu/make and mcu/pcore changes between 1809051 and 1826317 ( swrd part ).
 *
 * 11 12 2015 panu.peisa
 * [MOLY00147611] MT6292 EL1 code merge from UMOLY_92L1Dev CBr to UMOLY
 *
 * 	Integrated common, mcu/common and mcu/make changes between 1788771 to 1808878.
 *
 * 10 30 2015 panu.peisa
 * [MOLY00147611] MT6292 EL1 code merge from UMOLY_92L1Dev CBr to UMOLY
 *
 * 	mcu/common changes integrated from UMOLY_92L1Dev_15w43 CBr.
 *
 * 09 15 2015 yenchih.yang
 * [MOLY00099648] [VoLTE] Voice quality patch - ERRC
 * .
 *
 * 08 05 2015 yr.chiang
 * [MOLY00087893] [MT6291] Merge EL1C/EL1D from xL1SIM to MT6291_DEV
 * update ADT header files
 *
 * 08 03 2015 carol.lin
 * [MOLY00134637] [Jade][TK6291][New Feature][ADT] Check in ADT new feature into LR11
 * ADT.
 *
 * 08 01 2015 yr.chiang
 * [MOLY00087893] [MT6291] Merge EL1C/EL1D from xL1SIM to MT6291_DEV
 * 91 L1S TPC info acquisition
 *
 * 05 28 2015 hyper.wang
 * [MOLY00074164] 6291 IDC Development
 * 	.
 *
 * 04 28 2015 shihyao.wang
 * [MOLY00109540] [EL1IT] 91 MoDIS IT code
 * 91 MoDIS integration.
 *
 * 03 02 2015 ms.lin
 * [MOLY00070265] MT6291 code change: add new sap id
 * 	.
 *
 * 10 27 2014 daron.lu
 * [MOLY00081763] [MT6291] Merge EL1C/EL1D to UMOLY
 * 	.
 *
 * 08 07 2014 yr.chiang
 * [MOLY00072292] 6291 EL1C Development
 * sync MOLY to UMOLY
 *
 * 08 04 2014 lewis.yu
 * [MOLY00073990] [LPP CP] LPP code check-in for OTDOA feature
 * .
 *
 * 07 15 2014 kuan-ting.lee
 * [MOLY00055217] EL1 IDC development
 * IDC msg : pin type lte con, and lte con timer
 *
 * 06 23 2014 popcafa.shih
 * [MOLY00069383] [VoLTE][Low power improvement]
 * move recal to task.
 *
 * 06 13 2014 popcafa.shih
 * [MOLY00069383] [VoLTE][Low power improvement]
 * add new sap.
 *
 * 05 21 2014 dennis.weng
 * [MOLY00066251] ICS may camp on a cell not having largest RSRP in TDD mode
 * specific measurement el1 sap
 *
 * 04 28 2014 lewis.yu
 * [MOLY00063876] [MT6595] MT6595 DVFS support
 * .
 *
 * 02 20 2014 lewis.yu
 * [MOLY00056695] [LTE R9] disallow sleep (prevent power down L2 copro) during evaluation phase of HO/CCR/IRCR/redirection from LTE
 * .
 *
 * 02 11 2014 yr.chiang
 * [MOLY00055707] [MOLY00054538] [MT6290E2][EL1] EL1 Trace update for EM Customer Release (phase 2)
 * .
 *
 * 01 29 2014 carol.lin
 * [MOLY00054688] [MT6290E2][TDD] inter-cell HO took too much time
 *
 * 01 22 2014 c-h.huang
 * [MOLY00054324] [4G Gemini][Merge] MOLY.MM.GEMINI.DEV Merge back to MOLY
 * .
 *
 * 12 03 2013 lewis.yu
 * [MOLY00048832] power down/on in EL2 task context and refine the flow
 * .
 *
 * 11 25 2013 vend_david.tang
 * [MOLY00047275] [MT6290E2][EL1 CH] CPHY_CFG_REQ/CNF guard timer.
 * Add a 1s guard timer for cphy_cfg_req/cnf.
 *
 * 11 13 2013 ty.shen
 * [MOLY00046027] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * .
 *
 * 11 06 2013 yr.chiang
 * [MOLY00045089] [MT6290E1][IOT][Huawei][LTE][Uu_ANR_001] Assert: l2lmac_drv.c 234 -L2COPRO
 * add csi_srs_admission_2nd_ntf for EMAC
 *
 * 11 01 2013 vend_hyper.wang
 * [MOLY00014152] EL1 IDC development
 * 	(Revise IPC messages).
 *
 * 10 30 2013 vend_hyper.wang
 * [MOLY00014152] EL1 IDC development
 * Add new SW message ID
 *
 * 10 29 2013 ms.lin
 * [MOLY00041363] [MT6290E1][Design Change] Neighbor BCCH flow change
 *  .
 *
 * 10 11 2013 lewis.yu
 * [MOLY00040824] [MT6290][EL1] PHS suspend IRT gap for MAC_DRX_TRACK
 * .
 *
 * 10 11 2013 ms.lin
 * [MOLY00040824] [MT6290][EL1] PHS suspend IRT gap for MAC_DRX_TRACK
 *  .
 *
 * 08 26 2013 carol.lin
 * [MOLY00034285] [MT6290E1][EL2 RTD] Assert fail: modem/lte_sec/el1/meas/src/el1_meas_ctrl.c 5783 after attach and pinging
 * HOST_DATA_REQ is rcv by CH
 *
 * 08 16 2013 c-h.huang
 * [MOLY00033989] [MT6290][EL1] MSG ID naming typo error fix
 * .
 *
 * 08 15 2013 daron.lu
 * [MOLY00031340] [MT6290E1][GCF][RRM][36521-3][TC 9.1.1/9.1.3]config long DRX, UE can't measure intra/inter freq cell
 * .
 *
 * 08 15 2013 daron.lu
 * [MOLY00031340] [MT6290E1][GCF][RRM][36521-3][TC 9.1.1/9.1.3]config long DRX, UE can't measure intra/inter freq cell
 * .
 *
 * 07 04 2013 vend_hyper.wang
 * [MOLY00026065] EL1 IDC unit test case development
 * (add new msgid).
 *
 * 05 22 2013 vend_david.tang
 * [MOLY00007804] [EL1 CH]
 * add timer expiry msg for sch.
 *
 * 05 07 2013 vend_hyper.wang
 * [MOLY00006577] EL1 MEAS development (update MODIS AUTO EL1 IT).
 *
 * 03 30 2013 jerry.ho
 * [MOLY00010951] LTE L1S relative files merge to MOLY
 *
 * 03 05 2013 elly.wei
 * [MOLY00007073] [MT7208][EL1] Sleep mode support
 * <saved by Perforce>
 * Re-arrange the MSG ID for sleep mode related messages.
 *
 * 03 04 2013 ms.lin
 * [MOLY00006061] [Design change]LTE EL1 DRV/TSTM/PHS code change
 * .
 *
 * 01 28 2013 ms.lin
 * [MOLY00006061] [Design change]LTE EL1 DRV/TSTM/PHS code change
 * .
 *
 * 11 08 2012 ms.lin
 * [MOLY00005322] TATAKA merge to MOLY
 * .
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _EL1_MSGID_H
#define _EL1_MSGID_H

MODULE_MSG_BEGIN( MSG_ID_EL1_CODE_BEGIN )

/****************************************************************************
 *                          Destination: CH
 ****************************************************************************/
MSG_ID_ERRC_EL1_CPHY_CFG_REQ            = MSG_ID_EL1_CODE_BEGIN,
MSG_ID_EL1_CH_MSG_START                 = MSG_ID_ERRC_EL1_CPHY_CFG_REQ,
MSG_ID_ERRC_EL1_RL_MONITOR_REQ,
MSG_ID_ERRC_EL1_SPECIFIC_CELL_SEARCH_REQ,
#if defined (__MULTIPLE_PS__)
MSG_ID_ERRC_EL1_VIRTUAL_MODE_REQ,
#endif
#if 1 /* To be removed once ERRC supports */
MSG_ID_ERRC_EL1_ABORT_HO_NTF,
#endif
MSG_ID_ERRC_EL1_ABORT_HO_REQ,
MSG_ID_ERRC_EL1_L1S_TEST_PARA_REQ,
MSG_ID_ERRC_EL1_L1S_TEST_PARA_CNF,
MSG_ID_ERRC_EL1_T312_START_REQ,
MSG_ID_ERRC_EL1_TX_ENHANCE_NTF,
MSG_ID_ERRC_EL1_PCH_RCV_NTF,
MSG_ID_ERRC_EL1_RX_POLL_DATA_IND,
MSG_ID_ERRC_EL1_SIB_FRAME_SYNC_REQ,  // SIB for AGPS.
MSG_ID_ERRC_EL1_UE_CATEGORY_IND,
MSG_ID_EMAC_EL1_RA_GAP_STOP_REQ,
MSG_ID_EMAC_EL1_RA_GAP_RESUME_REQ,
MSG_ID_EMAC_EL1_DRX_CTRL_REQ,
MSG_ID_EMAC_EL1_DRX_CYCLE_NTF,
MSG_ID_EMAC_EL1_HOST_DATA_REQ,
MSG_ID_EMAC_EL1_MSI_NOTIFY,  // to be removed in 6293.
MSG_ID_ETMR_EL1_DRX_SLEEP_TMR_EXPIRY,
MSG_ID_ETMR_EL1_UE_CATEGORY_TMR_EXPIRY,
MSG_ID_ETMR_EL1_256QAM_CHECK_TMR_EXPIRY,
MSG_ID_ETMR_EL1_B71_TMR_EXPIRY,
MSG_ID_ETMR_EL1_GEMINI_FEATURE_TMR_EXPIRY,
MSG_ID_ETMR_EL1_EMBMS_FEATURE_TMR_EXPIRY,
MSG_ID_ETMR_EL1_CPHY_CFG_TMR_EXPIRY,
MSG_ID_GAS_EL1_ENABLE_B39_REQ,       // SGLTE legacy code, not used in 6293.
MSG_ID_GAS_EL1_DISABLE_B39_REQ,      // SGLTE legacy code, not used in 6293.
MSG_ID_HAL_EL1_GPS_TIME_SYNC_REQ,
MSG_ID_HAL_EL1_GPS_TIME_SYNC_IND,

/* Internal message */
MSG_ID_EL1_IRT_CH_PARAM_CHG_CNF,
MSG_ID_EL1_IRT_CH_GAP_SUSP_CNF,
MSG_ID_EL1_IRT_CH_BCCH_CNF,
MSG_ID_EL1_IRT_CH_AUTO_GAP_STOP_REQ,
MSG_ID_EL1_IRT_CH_AUTO_GAP_AVAIL_IND,
MSG_ID_EL1_PHS_CH_DL_BC_ASSIGN_RLT,
MSG_ID_EL1_PHS_CH_CTRL_CNF,
MSG_ID_EL1_PHS_CH_DL_CHNG_SET_CNF,
MSG_ID_EL1_PHS_CH_DL_CHNG_RPT,
MSG_ID_EL1_PHS_CH_GEMINI_CONFLICT_IND,
MSG_ID_EL1_PHS_CH_REL_ALL_IND,
MSG_ID_EL1_PHS_CH_VIRTUAL_MODE_CNF,
MSG_ID_EL1_PHS_CH_NBR_AUTO_GAP_END_IND,
MSG_ID_EL1_PHS_CH_MIB_RPT,
MSG_ID_EL1_PHS_CH_DRX_SLEEP_NTF,
MSG_ID_EL1MPC_EL1_MEAS_CH_NBR_PARAM_UPDATE_IND,
MSG_ID_EL1MPC_EL1_MEAS_CH_SCS_START_CNF,
MSG_ID_EL1MPC_EL1_MEAS_CH_SCS_CELL_INFO_IND,
MSG_ID_EL1MPC_EL1_MEAS_CH_SCS_STOP_CNF,
MSG_ID_EL1MPC_EL1_LPP_CH_PRS_INFO_UPDT_NTF,

/****************************************************************************
 *                          Destination: PHS
 ****************************************************************************/
MSG_ID_ERRC_EL1_CHANNEL_PROTECT_START_REQ,
MSG_ID_EL1_PHS_MSG_START                = MSG_ID_ERRC_EL1_CHANNEL_PROTECT_START_REQ,
MSG_ID_ERRC_EL1_CHANNEL_PROTECT_STOP_REQ,
MSG_ID_ERRC_EL1_DATA_SERVICE_IND,
MSG_ID_AP_MD_LTE_AUTO_GAP_REQ,
MSG_ID_EL1MPC_EL1_MEAS_PHS_CD_CTRL_REQ,
MSG_ID_EL1MPC_EL1_MEAS_PHS_CD_CTRL_STOP_REQ,
MSG_ID_EL1MPC_CS_ABORT_IND,
MSG_ID_EL1MPC_EL1_MEAS_PHS_RX_CMD_IND,
MSG_ID_EL1MPC_EL1_MEAS_PHS_RX_VZW_CMD_IND,
MSG_ID_EL1_EL1MPC_PHS_L1DCS_ABORT_IND,
MSG_ID_EL1_PHS_TASK_SUSPEND_IND,
MSG_ID_EL1_PHS_SCH_HIGH_PRIO_IND,
MSG_ID_EL1_PHS_HOST_DATA_REQ,
MSG_ID_EL1_PHS_TASK_WAKE_IND,
MSG_ID_EL1_EL1_TSTM_META_REQ,
MSG_ID_EL1_EL1_TSTM_TOOL_CNF,

/* Internal message */
MSG_ID_EL1_CH_PHS_DL_CHNG_REQ,
MSG_ID_EL1_CH_PHS_SCH_RNTI_IND,
MSG_ID_EL1_CH_PHS_DRX_CTRL_REQ,
MSG_ID_EL1_CH_PHS_CTRL_REQ,
MSG_ID_EL1_CH_PHS_RRC_CONFIG_IND,
MSG_ID_EL1_CH_PHS_UE_CATEGORY_IND,
MSG_ID_EL1_CH_PHS_SIB1_CRC_NOTIFY_IND,
MSG_ID_EL1_CH_PHS_LMAC_LOCK_IND,
MSG_ID_EL1_CH_PHS_RSVAS_SUSPEND_REQ,
MSG_ID_EL1_CH_PHS_RSVAS_SUSPEND_DONE_IND,
MSG_ID_EL1_CH_PHS_VIRTUAL_MODE_REQ,
MSG_ID_EL1MPC_EL1_MEAS_PHS_CTRL_REQ,
MSG_ID_EL1MPC_EL1_MEAS_PHS_CTRL_STOP_REQ,
MSG_ID_EL1MPC_EL1_MEAS_PHS_SF_PATTERN_IND,
MSG_ID_EL1MPC_EL1_MEAS_PHS_SRV_MEASURE_CFG_NTF,
MSG_ID_EL1MPC_EL1_MEAS_PHS_SCELL_KNOWN_IND,
MSG_ID_EL1MPC_EL1_MEAS_PHS_IRT_CTRL_REQ,
MSG_ID_EL1MPC_EL1_MEAS_PHS_IRT_CTRL_STOP_REQ,
MSG_ID_EL1MPC_EL1_MEAS_PHS_PSIM_SWAP_CNF,
MSG_ID_EL1MPC_EL1_CSR_PHS_CTRL_REQ,
MSG_ID_EL1MPC_EL1_CSR_PHS_CTRL_STOP_REQ,
MSG_ID_EL1MPC_EL1_LPP_PHS_PRS_CTRL_REQ,
MSG_ID_EL1MPC_EL1_LPP_PHS_PRS_STOP_REQ,
MSG_ID_EL1MPC_EL1_LPP_PHS_PRS_ACTIVATE_REQ,
MSG_ID_EL1MPC_EL1_LPP_PHS_PRS_DEACTIVATE_REQ,
MSG_ID_EL1_CH_PHS_MSI_NOTIFY,
MSG_ID_EL1_IRT_PHS_RAT_CHG_REQ,
MSG_ID_EL1_IRT_PHS_GAP_CANCEL_CNF,
MSG_ID_EL1_IRT_PHS_AUTO_GAP_CANCEL_CNF,
MSG_ID_EL1_IRT_PHS_MEAS_GAP_REQ,
MSG_ID_EL1_IRT_PHS_AUTO_GAP_IND,
MSG_ID_EL1_IRT_PHS_AUTO_GAP_END_IND,
MSG_ID_EL1_IRT_PHS_CANCEL_AUTO_GAP_IND, // to force PHS reuturn AUTO_GAP_RES immediately (for SRVCC)
MSG_ID_EL1_IRT_PHS_GAP_CTRL_REQ,
MSG_ID_EL1_IRT_PHS_GAP_CANCEL_REQ,
MSG_ID_EL1_IRT_PHS_GAP_RESUME_IND,
MSG_ID_EL1_IRT_PHS_GAP_CLEAR_IND,
MSG_ID_EL1_IRT_PHS_GAP_SUSPEND_CNF,
MSG_ID_EL1_PHS_MBMS_INFO_IND,
MSG_ID_EL1_TX_PHS_PSIM_SWAP_CNF,
MSG_ID_EL1_IDC_PHS_PSIM_SWAP_CNF,

/****************************************************************************
 *                          Destination: IRT
 ****************************************************************************/
MSG_ID_ERRC_EL1_SET_RAT_REQ,
MSG_ID_EL1_IRT_MSG_START                = MSG_ID_ERRC_EL1_SET_RAT_REQ,
MSG_ID_ERRC_EL1_AUTO_GAP_ON_REQ,
MSG_ID_ERRC_EL1_AUTO_GAP_OFF_REQ,
MSG_ID_ERRC_EL1_LOCK_SLEEP_NTF,

/* Internal message */
MSG_ID_EL1MPC_EL1_CSR_IRT_GAP_REQ,
MSG_ID_EL1_PHS_IRT_RAT_CHG_CNF,
MSG_ID_EL1_CH_IRT_PARAM_CHG_REQ,
MSG_ID_EL1_CH_IRT_RECONFIG_DONE_IND,
MSG_ID_EL1_CH_IRT_GAP_SUSP_REQ,
MSG_ID_EL1_CH_IRT_GAP_RESUME_IND,
MSG_ID_EL1_CH_IRT_BCCH_REQ,
MSG_ID_EL1_CH_IRT_AUTO_GAP_STOP_CNF,
MSG_ID_EL1MPC_EL1_MEAS_IRT_MEASURE_REQ,
MSG_ID_EL1MPC_EL1_MEAS_IRT_MEASURE_DONE_IND,
MSG_ID_EL1MPC_EL1_MEAS_IRT_GAP_SUSP_REQ,
MSG_ID_EL1MPC_EL1_MEAS_IRT_GAP_RESUME_IND,
MSG_ID_EL1_PHS_IRT_DRX_TICK_IND,
MSG_ID_EL1_PHS_IRT_GAP_PERIOD_IND,
MSG_ID_EL1_PHS_IRT_GAP_CANCEL_REQ,
MSG_ID_EL1_PHS_IRT_AUTO_GAP_CANCEL_REQ,
MSG_ID_EL1_PHS_IRT_GAP_CTRL_CNF,
MSG_ID_EL1_PHS_IRT_GAP_CANCEL_CNF,
MSG_ID_EL1_PHS_IRT_AUTO_GAP_RES,
MSG_ID_EL1_PHS_IRT_GAP_SUSPEND_REQ,
MSG_ID_EL1_PHS_IRT_GAP_RESUME_IND,
MSG_ID_EL1_PHS_IRT_STBY_GAP_END_IND,

/****************************************************************************
 *                          Destination: MEAS
 ****************************************************************************/
MSG_ID_ERRC_EL1MPC_RADIO_MEASURE_REQ,
MSG_ID_EL1MPC_MEAS_MSG_START               = MSG_ID_ERRC_EL1MPC_RADIO_MEASURE_REQ,
MSG_ID_ERRC_EL1MPC_SPECIFIC_CELL_DELETE_NTF,
MSG_ID_ERRC_EL1MPC_HPS_QUALIFY_CELL_NTF,
MSG_ID_ERRC_EL1MPC_MEASURE_EVENT_NTF,
MSG_ID_ERRC_EL1MPC_OOS_TRIG_SEARCH_NTF,
MSG_ID_ERRC_EL1MPC_MBSFN_MEASURE_REQ,
MSG_ID_ERRC_EL1MPC_MBSFN_MEASURE_NTF,
MSG_ID_ERRC_EL1MPC_SPB_NTF,
MSG_ID_ERRC_EL1MPC_MEASUREMENT_INFO_NTF,
MSG_ID_ERRC_EL1MPC_MEASURE_CFG_NTF,
MSG_ID_ERRC_EL1MPC_HSR_FREQ_NTF,
MSG_ID_ERRC_EL1MPC_HSR_MODE_NTF,
MSG_ID_ETMR_EL1MPC_SRV_TMR_EXPIRY,
MSG_ID_ETMR_EL1MPC_LIFE_TMR_EXPIRY,
MSG_ID_ETMR_EL1_VZW_TMR_EXPIRY,

/* Internal message */
MSG_ID_EL1_EL1MPC_IRT_MEAS_GAP_CFG_IND,
MSG_ID_EL1_EL1MPC_IRT_MEAS_MEAS_GAP_REQ,
MSG_ID_EL1_EL1MPC_IRT_MEAS_BASE_TIME_IND,
MSG_ID_EL1_EL1MPC_IRT_MEAS_MODE_CHNG_NTF,
MSG_ID_EL1_EL1MPC_IRT_MEAS_GAP_SUSP_CNF,
MSG_ID_EL1_EL1MPC_IRT_MEAS_RAT_STATUS_IND,

//MSG_ID_EL1_PHS_MEAS_SCHDL_IND,
//MSG_ID_EL1_PHS_MEAS_CTRL_CNF,
//MSG_ID_EL1_PHS_MEAS_CONFLICT_IND,
MSG_ID_EL1_EL1MPC_PHS_MEAS_ABORT_IND,
MSG_ID_EL1_EL1MPC_PHS_MEAS_SCELL_STATUS_IND,
MSG_ID_EL1_EL1MPC_PHS_MEAS_CD_CTRL_CNF,
MSG_ID_EL1_EL1MPC_PHS_MEAS_CD_CTRL_STOP_CNF,
MSG_ID_EL1_EL1MPC_PHS_MEAS_STB_TRX_FORCE_REPORT_NTF,
MSG_ID_EL1_EL1MPC_PHS_MEAS_IRT_CTRL_CNF,
MSG_ID_EL1_EL1MPC_PHS_MEAS_IRT_CTRL_STOP_CNF,
MSG_ID_EL1_EL1MPC_PHS_MEAS_CTRL_STOP_CNF,
MSG_ID_EL1_EL1MPC_PHS_MEAS_CTRL_CNF,
MSG_ID_EL1_EL1MPC_PHS_MEAS_SCHDL_IND,
MSG_ID_EL1_EL1MPC_PHS_MEAS_REL_EL1D_BUFF_IND,
MSG_ID_EL1_EL1MPC_PHS_MEAS_PSIM_SWAP_REQ,

//MSG_ID_EL1_EL1MPC_CH_MEAS_RL_PROBLEM_NTF,
//MSG_ID_EL1_EL1MPC_CH_MEAS_RL_RECOVER_NTF,
MSG_ID_EL1_EL1MPC_CH_MEAS_MEAS_MODE_CHNG_IND,
MSG_ID_EL1_EL1MPC_CH_MEAS_MAIN_CH_STATUS_IND,
MSG_ID_EL1_EL1MPC_CH_MEAS_DRX_PARAMS_IND,
MSG_ID_EL1_EL1MPC_CH_MEAS_GAP_PARAMS_IND,
MSG_ID_EL1_EL1MPC_CH_MEAS_SUBFRAME_CONFIG_IND,
MSG_ID_EL1_EL1MPC_CH_MEAS_COMMON_PARAMS_IND,
MSG_ID_EL1_EL1MPC_CH_MEAS_SCELL_CONFIG_IND,
MSG_ID_EL1_EL1MPC_CH_MEAS_SCELL_STATUS_IND,
MSG_ID_EL1_EL1MPC_CH_MEAS_EARFCN_UPDATE_IND,
MSG_ID_EL1_EL1MPC_CH_MEAS_SCS_START_REQ,
MSG_ID_EL1_EL1MPC_CH_MEAS_SCS_STOP_REQ,
MSG_ID_EL1_EL1MPC_CH_MEAS_CELL_IND, // should  be removed.
MSG_ID_EL1_EL1MPC_CH_MEAS_CELL_INFO_UPDT_IND,
MSG_ID_EL1_EL1MPC_CH_MEAS_IC_ASSIST_CONFIG_IND,
MSG_ID_EL1_EL1MPC_CH_MPC_RESET_IND,
MSG_ID_EL1_EL1MPC_CH_MPC_RSVAS_SUSPEND_IND,
MSG_ID_EL1_EL1MPC_CH_MPC_RSVAS_RESUME_IND,
MSG_ID_EL1_EL1MPC_TX_MEAS_TX_RX_DIFF_IND,
MSG_ID_EL1_EL1MPC_RX_TICK_NTF,

/****************************************************************************
 *                          Destination: LPP
 ****************************************************************************/
MSG_ID_ERRC_EL1MPC_OTDOA_MEAS_REQ,
MSG_ID_EL1MPC_LPP_MSG_START               = MSG_ID_ERRC_EL1MPC_OTDOA_MEAS_REQ,
MSG_ID_ERRC_EL1MPC_OTDOA_CTRL_REQ,
MSG_ID_ETMR_EL1MPC_OTDOA_TMR_EXPIRY,
MSG_ID_EL1_EL1MPC_PHS_LPP_PRS_CTRL_CNF,
MSG_ID_EL1_EL1MPC_PHS_LPP_PRS_STOP_CNF,
MSG_ID_EL1_EL1MPC_PHS_LPP_PRS_ACTIVATE_CNF,
MSG_ID_EL1_EL1MPC_PHS_LPP_PRS_DEACTIVATE_CNF,
MSG_ID_EL1_EL1MPC_PHS_LPP_PRS_SCHED_IND,

/* Internal message */

/****************************************************************************
 *                          Destination: CSR
 ****************************************************************************/
MSG_ID_ERRC_EL1MPC_CARRIER_SEARCH_REQ,
MSG_ID_EL1MPC_CSR_MSG_START                = MSG_ID_ERRC_EL1MPC_CARRIER_SEARCH_REQ,
MSG_ID_ERRC_EL1MPC_SPECIFIC_MEASURE_REQ,
MSG_ID_ERRC_EL1MPC_RSSI_SNIFFER_REQ,
MSG_ID_EL1_EL1MPC_PHS_CSR_CTRL_CNF,
MSG_ID_EL1_EL1MPC_PHS_CSR_CTRL_STOP_CNF,
MSG_ID_EL1MPC_EL1MPC_BAND_FLT_CONT_NTF,

/****************************************************************************
 *                          Destination: IDC
 ****************************************************************************/
MSG_ID_EL1_PHS_IDC_PSIM_SWAP_REQ,
MSG_ID_EL1_IDC_MSG_START                     = MSG_ID_EL1_PHS_IDC_PSIM_SWAP_REQ,
MSG_ID_ETMR_EL1_TDM_TX_ENABLE_TMR_EXPIRY,
MSG_ID_ETMR_EL1_TDM_TX_DISABLE_TMR_EXPIRY,
MSG_ID_ETMR_EL1_IDC_IND_TMR_EXPIRY,
MSG_ID_ETMR_EL1_IDC_SWMSG_RESEND_TMR_EXPIRY,
MSG_ID_ETMR_EL1_IDC_SWMSG_DELAY_TMR_EXPIRY,
MSG_ID_ERRC_EL1_IDC_LTE_PROTECT_NTF,
MSG_ID_EL1MPC_EL1_IDC_MEAS_OBJECT_NTF,
MSG_ID_EL1MPC_EL1_IDC_VOLTE_NTF,
MSG_ID_EL1_EL1_IDC_POST_PROCESS_NTF,
MSG_ID_EL1_IDC_MSG_END,

/****************************************************************************
 *                          Destination: TX
 ****************************************************************************/
MSG_ID_EL1_TX_MSG_START,
MSG_ID_EL1_CH_TX_PDSCH_RPT_FREE_IND,      //add in 6293. (to replace the command queue architecture.)
MSG_ID_EL1_CH_TX_SETUP_MAX_PWR_IND,       //add in 6293. (to replace the command queue architecture.)
MSG_ID_EL1_CH_TX_CLEAR_MAX_PWR_IND,       //add in 6293. (to replace the command queue architecture.)
MSG_ID_EL1_CH_TX_FORCE_MAX_PWR_IND,       //add in 6293. (to replace the command queue architecture.)
MSG_ID_EL1_CH_TX_DRX_CTRL_IND,            //add in 6293. (to replace the command queue architecture.), rename from CH_TX_DRX_CTRL_REQ
MSG_ID_EL1_CH_TX_DRX_CYCLE_SLEEP_EN_IND,  //add in 6293. (to replace the command queue architecture.)
MSG_ID_EL1_CH_TX_INFO_IND,                //add in 6293. (to replace the command queue architecture.) // not used now.
MSG_ID_EL1_CH_TX_SCH_CLOSE_IND,           //add in 6293. (to replace the command queue architecture.)
MSG_ID_EL1_CH_TX_GAP_INFO_IND,            //add in 6293. (to replace the command queue architecture.)
MSG_ID_EL1_CH_TX_DRX_PARAMS_IND,
MSG_ID_EL1_IRT_TX_AUTO_GAP_IND,           //add in 6293. (to replace the command queue architecture.)
MSG_ID_EL1MPC_EL1_MEAS_MAIN_SPB_INFO_NTF,
MSG_ID_EL1MPC_EL1_MEAS_TSTM_SRV_RLT_IND,
MSG_ID_EL1_PHS_TX_SCELL_ACT_DONE_IND,     //add in 6293. (to replace the command queue architecture.)
MSG_ID_EL1_PHS_TX_PSIM_SWAP_REQ,          //add in 6293. (to replace the command queue architecture.)
MSG_ID_EL1_MSG_END,                     //END of EL1 Messages
MSG_ID_EL1_TX_TX_CFG_IND,


/****************************************************************************
 *                          EMAC -> EL1-TX
 ****************************************************************************/


/****************************************************************************
 *                          Destination: EL1_IT
 ****************************************************************************/
MSG_ID_ETMR_XL1_GAP_TMR,
MSG_ID_EL1_TX_IT_CC_INTERRUPT_IND,
MSG_ID_TC_AUTO_TIMER_EXPIRY_IND,

/****************************************************************************
 *                          Tool <-> EL1-MAIN
 ****************************************************************************/
MSG_ID_EL1_TEST_MODE_ENABLE_REQ,
MSG_ID_ML1S_EL1_TRX_FEATURE_REQ,

/****************************************************************************/

/****************************************************************************
 *                          EL1D <-> EL1C
 ****************************************************************************/
MSG_ID_EL1_EL1_TASK_WAKE_IND,
MSG_ID_EL1_L1ADT_ENTER_CONNECTED_REQ,
MSG_ID_EL1_L1ADT_ENTER_CONNECTED_CNF,
MSG_ID_EL1_L1ADT_LEAVE_CONNECTED_REQ,
MSG_ID_EL1_L1ADT_LEAVE_CONNECTED_CNF,
MSG_ID_EL1_L1ADT_SET_RAT_IND,
MSG_ID_EL1MPC_CS_RESULTS_IND,
MSG_ID_EL1MPC_CS_GCC_RESULTS_IND,
MSG_ID_EL1MPC_CS_ADD_FREQ_REQ,
MSG_ID_EL1MPC_CS_DELETE_FREQS_REQ,
MSG_ID_EL1MPC_CS_CSHW_HANG_IND,
MSG_ID_EL1MPC_CM_NBR_RESULTS_IND,
MSG_ID_EL1MPC_CM_SRV_RESULTS_IND,
MSG_ID_EL1MPC_CM_AFC_RESULTS_IND,
MSG_ID_EL1MPC_CM_MIB_RESULTS_IND,
MSG_ID_EL1MPC_CM_VZW_RESULTS_IND,
MSG_ID_EL1MPC_CM_MBSFN_MEAS_RESULTS_IND,
MSG_ID_EL1MPC_CM_MBSFN_CRC_RESULTS_IND,
MSG_ID_EL1MPC_POS_RESULTS_IND,
MSG_ID_EL1MPC_PS_RESULTS_IND,
MSG_ID_EL1MPC_SCM_RESULTS_IND,
MSG_ID_EL1_32K_LESS_MEAS_CELL_SFBD_ADJUST_IND,
MSG_ID_EL1C_EL1_RX_RSSI_VERIFY_IND,

/****************************************************************************
 *                          EL4C <-> EL1C
 ****************************************************************************/
MSG_ID_L4C_EL1_LCE_REPORT_START_REQ,
MSG_ID_L4C_EL1_LCE_REPORT_STOP_REQ,
MSG_ID_L4C_EL1_LCE_REPORT_PULLDATA_REQ,
MSG_ID_L4C_EL1_LCE_REPORT_CNF,
MSG_ID_L4C_EL1_LCE_REPORT_IND,

/****************************************************************************
 *                          UPCM <-> EL1C
 ****************************************************************************/
MSG_ID_UPCM_EL1_KG_PATCH_RESET,

/****************************************************************************
 *                          XL1sim TSTM
 ****************************************************************************/

MSG_ID_EL1_EL1_ENTER_FACTORY_MODE_REQ,
MSG_ID_EL1_EL1_ENTER_NORMAL_MODE_REQ,

/****************************************************************************
 * MT6293
 ****************************************************************************/


MODULE_MSG_END( MSG_ID_EL1_CODE_TAIL )

#endif /* _EL1_MSGID_H */

