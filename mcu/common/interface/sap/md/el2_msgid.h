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
 *   el2_msgid.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 *   
 *
 * ==========================================================================
 * $Log$
 *
 * 09 20 2019 brian.wu
 * [MOLY00441514] [Gen93] Network related optimization -- el2 msg id
 * 	
 * 	1. el2 msg id.
 *
 * 03 14 2019 tina-yt.wang
 * [MOLY00391466] 4G游??延优化信息申?
 * 	
 * 	EMAC Dynamic Feature
 *
 * 12 25 2018 peter.yu
 * [MOLY00374058] [MT6779][Lafite][P0][India][Delhi][4GMM][FDD][Moving][RJIO][AIRTEL][Auto][Android Linux Script][SST][ASSERT] file:mcu/protocol/el2/el2h/erlcdl/src/erlcdl_ctrl.c line:1703 p1:0x00000000 p2:0x00000000 p3:0x00000000
 * Add new interfaces between ERRC and EL2.
 *
 * 06 25 2018 peter.yu
 * [MOLY00332568] [Gen93][AT&T][ICD] Field Test Mode and ICD EM reporting implementation - EL2 ICD framework
 * [EL2ICD] el2icd framework
 *
 * 02 13 2018 slifer.hsueh
 * [MOLY00308368] [MT6763][Bianco][O1][MP2][TMO][WW FT][United States][Seattle][Nokia][4GMM][F4L][Data][HTTP][UL] HTTP UL Average Throughput Fail by 0.186 as compared to REF LG G4 device during Datum Exp1 Round3 on 30th Jan in Poor Signal Static condition
 * Define message id for RB poll request
 *
 * 01 09 2018 timothy.yao
 * [MOLY00300298] [PVT must resolve] 微信??包慢?? - el2 msg
 * sending pdcp invalid control pdu to avoid entering sleep. (R3) - part2 (el2 msg id)
 *
 * 10 03 2017 jia-shi.lin
 * [MOLY00281754] [MT6763] UL HARQ early close for volte low power enhancement
 * early ul harq close for volte low power
 *
 * 09 20 2017 nicole.hsu
 * [MOLY00279184] [PCT][Anritsu][CAG50C][E40][7.1.1.2] fail
 * [TRUNK] LCID vs. support release handling
 *
 * 08 22 2017 cammie.yang
 * [MOLY00269598] [Gen93]TPB/Mobility Ctrl patch check in
 * [TRUNK][Merged from R1][EPDCP][HST] set vip bit and notify VoLTE bearer for ERLCUL
 *
 * 08 03 2017 wen-jiunn.liu
 * [MOLY00268551] Task batch scheduling for LTE Low power
 * [EL2] Task Rescheduling for Low Power Polling Tick Change
 *
 * 08 03 2017 wen-jiunn.liu
 * [MOLY00268551] Task batch scheduling for LTE Low power
 * [EL2] Task Rescheduling for Low Power Polling Tick Change
 *
 * 07 28 2017 nicole.hsu
 * [MOLY00267509] [MT6763][Bianco][N1][MTBF][PHONE][Overnight][HQ][Lab][Ericsson][ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_mmu_drv.c line:1616
 * [TRUNK] move LMAC HARQ reset to el2pow
 *
 * 07 24 2017 nicole.hsu
 * [MOLY00266293] [Blocking][MT6763][Bianco][N1][India FT][Mumbai][WW FT][eMBMS][RJIO]  md1:(USIP1_USIP0) [ASSERT] file:md32/usip/brp/modem/lte/top/src/4g_top_irq.c line:2004
 * [TRUNK] fix Poll control of TXLISR and EL2POW
 *
 * 07 18 2017 nicole.hsu
 * [MOLY00263936] [BIANCO][MT6763][RDIT][PHONE][GCF][TS8980][FDD B7,TC 5.2.1]Handoff delay exceed 190ms when LTE handoff to WCDMA
 * [TRUNK] power on Copro before TXLISR handle SCH_CLOSE (for LMAC HARQ RESET)
 *
 * 07 17 2017 peter.yu
 * [MOLY00263749] [VOLTE][HST][Anite][02.v01.020][5.1.1][E39]FAIL.No MOS score returned. Error code: -5.
 * Overwirte unreasonable RLC configuration - t-Reordering timer.
 *
 * 07 06 2017 slifer.hsueh
 * [MOLY00261868] [6293]UL SIT new handling
 * Add message id for EL2 RB sync procedure
 *
 * 06 01 2017 nicole.hsu
 * [MOLY00254331] [MT6763][EM] EL2EM maintenance and EMAC EM update
 * [EMAC] EM update
 * [EL2EM] add trace and fix report mechanism
 *
 * 06 01 2017 steve.kao
 * [MOLY00252964] [6293] API update for LTECSR VoLTE EBI indication
 * 	
 * 	[UMOLYA][TRUNK] API update for LTECSR VoLTE EBI indication
 *
 * 05 16 2017 nicole.hsu
 * [MOLY00249804] [BIANCO][MT6763][RDIT][FT][FDD][HK][SIM1:CMHK][SIM2:SMT][Overnight][ASSERT] file:mcu/common/driver/dpcopro/src/l2_4g_dl_lmac.c line:214
 * 1. enable el2pow
 * 2. interface change for sch_close
 *
 * 04 25 2017 slifer.hsueh
 * [MOLY00244795] [BIANCO][MT6763][RDIT][NVIOT][FDD][Nokia][4G] Assert fail: dpcopro_mmu_drv.c 1303 - IPCORE
 * Add EL2 message id for RB lock/unlock
 *
 * 04 06 2017 nicole.hsu
 * [MOLY00226654] [MT6293][EL2POW] EL2 L2Copro power control
 * [EL2POW]
 * - Basic function
 * - L+X, L+L
 * - Meta mode, L1S
 * - UT
 *
 * 03 13 2017 nicole.hsu
 * [MOLY00194987] [MT6293][UMOLYA/PS DEV] EMAC maintenance
 * ML1S
 * - Force NEWTX when ML1S request is sent
 *
 * 02 24 2017 mf.jhang
 * [MOLY00194987] [MT6293][UMOLYA/PS DEV] EMAC maintenance
 * .Add ML1S ILM handler
 *
 * 02 10 2017 steve.kao
 * [MOLY00228972] [UMOLYA][EPDCP][R-SIM] Interface with ERRC for Remote SIM
 * [EPDCP][R-SIM] Interface with ERRC for Remote SIM.
 *
 * 02 06 2017 peter.yu
 * [MOLY00207733] [MT6293][EL2] ERLCDL development
 * [M-SIM] Sync R-SIM related interfaces, remove redundant message IDs related to ERLC.
 *
 * 01 24 2017 nicole.hsu
 * [MOLY00226654] [MT6293][EL2POW] EL2 L2Copro power control
 * Add EL1 msgid and temp ilm handling
 *
 * 01 16 2017 eddie.wang
 * [MOLY00210650] [MT6293][UMOLYA TRUNK] EMAC maintenance
 * [MSIM] Add RSVAS suspend msg id
 *
 * 01 05 2017 nicole.hsu
 * [MOLY00223067] [MT6293] EL2 EM implementation
 * EL2EM framework, merge to TRUNK
 *
 * 12 26 2016 mf.jhang
 * [MOLY00194987] [MT6293][UMOLYA/PS DEV] EMAC maintenance
 * merge DVFS IF code
 *
 * 11 14 2016 chih-cheng.yang
 * [MOLY00213122] [MT6293][EL2] EL2 FPGA IT phase II source code integration
 * 1. refine  RB/MBMS RSMT release
 * 2. refine epdcp polling rsmt
 * 2. add coverage
 *
 * 10 28 2016 jia-shi.lin
 * [MOLY00194987] [MT6293][UMOLYA/PS DEV] EMAC maintenance
 * emac timing report for volte dsp
 *
 * 10 25 2016 chih-cheng.yang
 * [MOLY00209240] [MT6293][EL2] EL2 FPGA IT phase 1 source codes integration
 * new sap and message id for ERLCDL to notify EPDCP to release RSMT when releasing RB
 *
 * 10 06 2016 ville.pukari
 * [MOLY00150835] ML1S Test Environment Support
 * 	
 * 	[UMOLYA] Sync code from UMOLY Trunk CL2228706, CL2455350, CL2529740 and CL2821387
 *
 * 08 25 2016 jia-shi.lin
 * [MOLY00194987] [MT6293][UMOLYA/PS DEV] EMAC maintenance
 * EMAC EL1 interface change
 *
 * 08 16 2016 wen-jiunn.liu
 * [MOLY00194298] [UMOLYA] EL2 + EMAC Code Review
 * Sync to Latest PS.DEV (CL-2728660)
 * 
 * CL-2728660 - el2 vrb virtual space shortage handling framework
 *
 * 08 16 2016 wen-jiunn.liu
 * [MOLY00194298] [UMOLYA] EL2 + EMAC Code Review
 * el2 vrb virtual space shortage handling framework
 * 08 09 2016 nicole.hsu
 * [MOLY00196065] [MT6293][folder structure] Move EL1/EL2 files from LTE domain to SWRD domain
 * 93 EL2 others
 *
 *
 * 07 27 2016 jeremy.chen
 * [MOLY00190683] [UMOLYA][6293] EL2 merge back to UMOLYA TRUNK & PS DEV
 * [common][OA domain] merge from UESIM CBr
 *
 * 07 19 2016 eddie.wang
 * [MOLY00191921] Sync UMOLY to UMOLYA.PS.DEV
 * Sync el2_msgid.h from UMOLY CL2582165 CL2529014
 *
 * 06 28 2016 eddie.wang
 * [MOLY00187041] Sync errc_emac_msg.h from UMOLY to UMOLYA
 * Add MSG_ID_ERRC_EMAC_MEAS_GAP_IND
 *
 * 03 15 2016 ryan.ou
 * [MOLY00162291] [MT6292] EMAC code sync from LR11 to UMOLY
 * CL1867761, [MOLY00151000] [MT6755] SRVCC Enhancement.
 *
 * 01 11 2016 kathie.ho
 * [MOLY00156229] [MT6292] Code sync from MT6291: AuDRX
 * .
 *
 * 01 09 2016 nienteh.hsu
 * [MOLY00159548] [6292] ERLC code sync from LR11 to UMOLY (2015/12) 
 * SWRD domain part	
 * 	.
 *
 * 12 30 2015 antti.karjalainen
 * [MOLY00153335] UL bucket management for UL CA and 64QAM: EPDCP
 *
 * 11 27 2015 ville.pukari
 * [MOLY00150835] ML1S Test Environment Support:
 * 	
 * 	EMAC support for ML1S Test Mode
 *
 * 07 16 2015 chen-wei.wang
 * [MOLY00118157] [TK6291]ERLC code maintain
 * ERLC status proh timer modification
 *
 * 07 06 2015 shengyi.ho
 * [MOLY00125586] [TK6291E1][MVTV-D][4G][TDD][TDD_MIMO_7.2]assert fail : el1tx.c 731
 * 1) add EMAC_EL2TASK_LOCK/UNLOCK_POWER_REQ
 *
 * 06 18 2015 mingtsung.sun
 * [MOLY00121332] [TK6291] 4G EAS low power check in
 * add QBM/EL2 power control messages for LogDMA
 *
 * 06 15 2015 sc.tung
 * [MOLY00121440] [TK6291] eL2 development check in CR
 * 	Add MSG_ID_ERRC_C_RNTI_RA_PROBING_REQ for probing req.
 *
 * 06 15 2015 mingtsung.sun
 * [MOLY00121332] [TK6291] 4G EAS low power check in
 * eL2 low power and ePDCP code sync: el2_msgid.h
 *
 * 06 03 2015 mingtsung.sun
 * [MOLY00118161] [MT6291] EPDCP CR Sync - Early reestablishment to prevent certain kind of VoLTE call drop
 * RD domain
 *
 * 03 18 2015 chen-wei.wang
 * [MOLY00099525] [TK6291] EMAC MDT feature check-in
 * interface file check-in
 *
 * 02 13 2015 mingtsung.sun
 * [MOLY00091822] RATDM reorganization
 * .
 *
 * 12 16 2014 yuting.chen
 * [MOLY00084807] [MT6291_DEV] EL2 Low Power Flow
 * .
 *
 * 12 12 2014 yk.liu
 * [MOLY00086350] [MT6291][L234 P2P] Enable EL2 PDU drop, ping no reply after 30min
 * 	.
 *
 * 11 11 2014 yiting.cheng
 * [MOLY00084042] [UMOLY] merge UMOLY_DEV to UMOLY trunk
 * .
 *
 * 10 28 2014 andrew.wu
 * [MOLY00079018] [MT6291_DEV] ePDCP batch I UT related modification
 * Merging
 * 	
 * 	//UMOLY_CBr/andrew.wu/MT6291_DEV_EPDCPDEVW1427P1/mcu/common/interface/sap/md/errc_msgid.h
 * 	
 * 	to //UMOLY/DEV/MT6291_DEV/mcu/common/interface/sap/md/errc_msgid.h
 *
 * 09 18 2014 shengyi.ho
 * [MOLY00077592] [TK6291] code sync from CBr to TK6291_DEV - emac
 * .
 *
 * 08 26 2014 sh.yang
 * [MOLY00077290] [TK6291_DEV] ILM/Event scheduler wrapper for LISR2HISR removal
 * .
 *
 * 08 22 2014 jy.ou
 * [MOLY00076104] [TK6291] EMAC & ERLC UT framework and ERLC UT cases
 * .
 *
 * 08 21 2014 mingtsung.sun
 * [MOLY00072902] [TK6291][DEV] LTT unit test framework
 * Merging
 *      
 *     //UMOLY_CBr/eric.hsieh/TK6291_DEV_ESL/mcu/common/interface/sap/...
 *      
 *     to //UMOLY/DEV/TK6291_DEV/mcu/common/interface/sap/...
 *
 * 08 14 2014 andrew.wu
 * [MOLY00075397] [TK6291_DEV] code sync MOLY00072445 from MOLY to TK6291_DEV
 * Interface check-in for EPDCP_EMAC_LEAVE_DRX
 *
 * 07 30 2014 yiting.cheng
 * [MOLY00073830] [TK6291_DEV] check-in TK6291 modification
 * modify sap
 *
 * 07 29 2014 andrew.wu
 * [MOLY00073873] [TK6291_DEV] EPDCP-ERRC interfaces check-in
 * add ERRC_EPDCP_MTCH_PC_REQ
 *
 * 07 28 2014 nienteh.hsu
 * [MOLY00073836] [TK6291][ERRC][CHM] LTE-A CHM development code check-in
 *     .
 *
 * 01 15 2014 slifer.hsueh
 * [MOLY00053104] [MT6290E2][NAS RTD][MM][FDD] Assert fail: driver/l2copro/cipher/src/cipher_common.c 196 - L2COPRO
 * Merge codes related to L2 copro delay power off back to MOLY TRUNK in OA domain
 *
 * 01 06 2014 mf.jhang
 * [MOLY00051983] [MT6582LTE][WWFT][Germany][Vodafone]Ping RTT is more than benchmark
 * Add HOST_DATA_READY_IND
 *
 * 12 03 2013 lewis.yu
 * [MOLY00048832] power down/on in EL2 task context and refine the flow
 * .
 *
 * 09 26 2013 lewis.yu
 * [MOLY00039195] [MT6290] [Low Power] LTE L2 copro power down in LTE flight mode
 * .
 *
 * 07 12 2013 stanleyhy.chen
 * [MOLY00029602] [New Feature] NBR_CELL_INFO and TA_INFO related interfaces
 * TA_INFO and NBR_CELL_INFO interfaces for LPP feature
 *
 * 05 15 2013 moja.hsu
 * [MOLY00007625] Maintain code
 * add el2 message for ERT task to ERT HISR.
 *
 * 03 20 2013 jeremy.chen
 * [MOLY00007127] [MT7208] EL2 enhancement in MOLY
 * add IDC-related interface
 *
 * 02 26 2013 jeremy.chen
 * [MOLY00007127] [MT7208] EL2 enhancement in MOLY
 * add MSG_ID_ERLCUL_EPDCP_SRB_DATA_CNF.
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _EL2_MSGID_H
#define _EL2_MSGID_H


MODULE_MSG_BEGIN( MSG_ID_EL2_CODE_BEGIN )

    /*------------------- EL2_MSG_CODE_BEGIN---------------------*/

    //////////////////////////////////////////////
    // Destination: EPDCP                       //
    //////////////////////////////////////////////

    // LTECSR --> EPDCP
    MSG_ID_LTECSR_EPDCP_VOLTE_EBI_NTF,

    // UPCM --> EPDCP
    MSG_ID_UPCM_EPDCP_NETIF_BIND_NTF = MSG_ID_EL2_CODE_BEGIN,
    MSG_ID_UPCM_EPDCP_NETIF_UNBIND_NTF,
    MSG_ID_UPCM_EPDCP_EPSB_APP_NTF,

    // ERRC --> EPDCP
    MSG_ID_ERRC_EPDCP_CONFIG_REQ,
    MSG_ID_ERRC_EPDCP_SWITCH_VIRTUAL_CONNECTED_REQ,
    MSG_ID_ERRC_EPDCP_DCCH_DATA_REQ,
    MSG_ID_ERRC_EPDCP_DCCH_DATA_RES,
    MSG_ID_ERRC_EPDCP_TEST_REQ,
    MSG_ID_ERRC_EPDCP_CNTINFO_REQ,
    //MSG_ID_ERRC_EPDCP_MTCH_PC_REQ,
    MSG_ID_ERRC_EPDCP_DETECTION_TIMER_START_REQ,

    // ERLC-UL --> EPDCP
    MSG_ID_ERLCUL_EPDCP_SRB_DATA_CNF,
    MSG_ID_ERLCUL_EPDCP_RELEASE_IND,
    MSG_ID_ERLCUL_EPDCP_RB_RELEASE_IND,
    MSG_ID_ERLCUL_EPDCP_RB_SYNC_CNF,
    MSG_ID_ERLCUL_EPDCP_RB_LOCK_CNF,

    // ERLC-DL --> EPDCP
    MSG_ID_ERLCDL_EPDCP_MBMS_START_IND,
    MSG_ID_ERLCDL_EPDCP_MBMS_END_IND,

    // EPDCP --> EPDCP
    //MSG_ID_EPDCP_EPDCP_CTRL_PDU_IND,
    //MSG_ID_EPDCP_EPDCP_DL_FLUSH_DONE_IND,

    // UPCM --> EPDCP
    MSG_ID_UPCM_EPDCP_SEND_INV_CTRL_PDU,

    // EMAC --> EPDCP
    MSG_ID_EMAC_EPDCP_TDM_START_IND,
    MSG_ID_EMAC_EPDCP_TDM_END_IND,
    MSG_ID_EMAC_EPDCP_MAX_UL_TB_IND,

    // WLAN --> EPDCP
    MSG_ID_WLAN_EPDCP_CTRL_MSG_ID,
    
    // EL2 --> EPDCP
    MSG_ID_EL2_EPDCP_VRB_VA_SHORTAGE_NTF,

    //////////////////////////////////////////////
    // Destination: ERLC-UL                     //
    //////////////////////////////////////////////

    // ERRC --> ERLC-UL
    MSG_ID_ERRC_ERLCUL_CONFIG_REQ,
    MSG_ID_ERRC_ERLCUL_SRB1_ACK_REQ,
    MSG_ID_ERRC_ERLCUL_SWITCH_VIRTUAL_CONNECTED_REQ,

    // EPDCP --> ERLC-UL
    MSG_ID_EPDCP_ERLCUL_DISCARD_REQ,
    MSG_ID_EPDCP_ERLCUL_VIP_DATA_NTF,
    MSG_ID_EPDCP_ERLCUL_SUSPEND_REQ,
    MSG_ID_EPDCP_ERLCUL_RESUME_REQ,
    MSG_ID_EPDCP_ERLCUL_STATUS_PDU_NTF,
    MSG_ID_EPDCP_ERLCUL_RB_SYNC_REQ,
    MSG_ID_EPDCP_ERLCUL_RB_POLL_REQ,
    MSG_ID_EPDCP_ERLCUL_RB_LOCK_REQ,
    MSG_ID_EPDCP_ERLCUL_RB_UNLOCK_NTF,
    MSG_ID_EPDCP_ERLCUL_VOLTE_RB_IDX_NTF,
    MSG_ID_EPDCP_ERLCUL_L4_NTF,
    MSG_ID_EPDCP_ERLCUL_RB_APP_NTF,

    // ERLCDL --> ERLC-UL
    MSG_ID_ERLCDL_ERLCUL_STATUS_PDU_NTF,

    //////////////////////////////////////////////
    // Destination: ERLC-DL                     //
    //////////////////////////////////////////////

    // ERRC --> ERLC-DL
    MSG_ID_ERRC_ERLCDL_CONFIG_REQ,
    MSG_ID_ERRC_ERLCDL_SWITCH_VIRTUAL_CONNECTED_REQ,
    MSG_ID_ERRC_ERLCDL_TEST_REQ,
    MSG_ID_ERRC_ERLCDL_MTCH_PC_REQ,

    // EL2 --> ERLC-DL
    MSG_ID_EL2_ERLCDL_VRB_VA_SHORTAGE_NTF,

    // EPDCP --> ERLC-DL
    MSG_ID_EPDCP_ERLCDL_VOLTE_RB_IDX_NTF,
    MSG_ID_EPDCP_ERLCDL_RB_APP_NTF,

    // ERLC-UL --> ERLC-DL
    MSG_ID_ERLCUL_ERLCDL_STATUS_FBK_NTF,

    // EMAC  --> ERLC-DL
    MSG_ID_EMAC_ERLCDL_GEMINI_GAP_IND,
    
    //////////////////////////////////////////////
    // Destination: EMAC                        //
    //////////////////////////////////////////////

    MSG_ID_ERRC_EMAC_CONFIG_REQ,
    MSG_ID_ERRC_EMAC_CCCH_DATA_REQ,
    MSG_ID_ERRC_EMAC_TA_INFO_REQ,
    MSG_ID_ERRC_EMAC_ESTFAIL_REPORT_REQ,
    MSG_ID_ERRC_EMAC_C_RNTI_RA_PROBING_REQ,
    MSG_ID_ERRC_EMAC_DRX_INC_GAP_REQ,
    MSG_ID_ERRC_EMAC_MEAS_GAP_IND,
    MSG_ID_ERRC_EMAC_SUPPORT_RELEASE_IND,

    /// EPDCP --> EMAC
    MSG_ID_EPDCP_EMAC_LEAVE_DRX,
    MSG_ID_EPDCP_EMAC_VOLTE_RB_IDX_REQ,
    MSG_ID_EPDCP_EMAC_VOLTE_DATA_REQ,

    /// ERLCDL --> EMAC
    MSG_ID_ERLCDL_EMAC_DL_VOLTE_NOTIFY_REQ,

    // EMAC_UT --> EMAC
    MSG_ID_EMAC_UT_EMAC_TEST_CMD,

    // EL1 --> EMAC
    MSG_ID_EMAC_EL1_PHY_INFO_IND,
    MSG_ID_EMAC_EL1_RA_GAP_STOP_CNF,
    MSG_ID_EMAC_EL1_RA_GAP_RESUME_CNF,
    MSG_ID_EMAC_EL1_RNTI_UPDATE_CNF,
    MSG_ID_EMAC_EL1_DRX_CTRL_CNF,
    MSG_ID_EMAC_EL1_SCELL_NOTIFY_CNF,
    MSG_ID_EMAC_EL1_HOST_DATA_CNF,
    MSG_ID_EMAC_EL1_HOST_DATA_READY_IND,
    MSG_ID_EMAC_EL1_RA_RESTART_IND,
    MSG_ID_EMAC_EL1_IDC_TDM_IND,

    // ML1S SW --> EMAC
    MSG_ID_ML1S_EMAC_TEST_MODE_ENABLE_REQ,
    MSG_ID_ML1S_EMAC_CONN_EST_RA_REQ,    
    MSG_ID_ML1S_EMAC_DL_DATA_DISCARD_REQ,
    MSG_ID_ML1S_EMAC_MAC_CE_TRIGGER_REQ,
    MSG_ID_ML1S_EMAC_TBS_MISMATCH_FORCE_NEWTX_REQ,

    // EL2 --> EMAC
    MSG_ID_EL2_EMAC_VRB_VA_SHORTAGE_NTF,

    // UPCM --> EMAC
    MSG_ID_UPCM_EMAC_INTERNET_DISCONNECT_REQ,
    MSG_ID_UPCM_EMAC_TAG_DATA_ARRIVAL_REQ,


    //////////////////////////////////////////////
    // Destination: ERT_WPR                        //
    //////////////////////////////////////////////

    //ERT_WPR --> ERT_WPR
    MSG_ID_ERT_WPR_ERT_WPR_ES_INSTR_PROC_NTF,
    MSG_ID_ERT_ERLCDL_WPR_ES_INSTR_PROC_NTF,
    //////////////////////////////////////////////
    // Destination: EL2                         //
    //////////////////////////////////////////////

    // EVAL --> EMAC
    MSG_ID_EMAC_AUDRX_ENABLE_REQ,

    /*------------------- EL2_MSG_CODE_END-----------------------*/

    /*  MT6293 EL2 MSG ID  */
    MSG_ID_TXHISR_ERT_POLL_REQ,
    MSG_ID_EMACDL_POLL_REQ,
    MSG_ID_EMACDL_EMACMCH_POLL_REQ,
    MSG_ID_EMACDL_EL2H_POLL_REQ,
    MSG_ID_EMACDL_EL2_POLL_REQ,

    /* EMACDL */
    MSG_ID_EMAC_EMACDL_DRB_CONFIG_IND,
    MSG_ID_EMAC_EMACDL_SUPPORT_RELEASE_IND,
    MSG_ID_EMACDL_EMAC_MAC_CE_IND,
    MSG_ID_EMACDL_ERLCDL_DLSCH_DATA_IND,
    MSG_ID_EMACDL_EMACMCH_DATA_IND,
    /* RA between EMAC and EMACDL */
    MSG_ID_EMACDL_EMAC_RAR_PROC_REQ,
    MSG_ID_EMAC_EMACDL_RAR_PROC_CNF,
    MSG_ID_EMAC_EMACDL_TCRNTI_CR_PROC_REQ,
    MSG_ID_EMACDL_EMAC_TCRNTI_CR_PROC_CNF,
    MSG_ID_EMACDL_EMAC_CCCH_DATA_IND,
    /* DL LMAC interrupt notification ILM */
    MSG_ID_LMAC_EMACDL_RAR_READY_NTF,
    MSG_ID_LMAC_EMACDL_TCRNTI_READY_NTF,
    MSG_ID_LMAC_EMACDL_DATA_READY_NTF,

    MSG_ID_EMACMCH_ERLCDL_MCH_DATA_IND,

    /*  MT6293 EL2 MSG ID (sleep related)  */

    //  MSG_ID_EMAC_EL1_DRX_CYCLE_NTF,
    //  MSG_ID_EMAC_EL1_DRX_CTRL_REQ,
    //  MSG_ID_EMAC_EL1_DRX_CTRL_CNF,
    MSG_ID_EMAC_ERLCUL_WAKEUP_REQ,
    MSG_ID_EMAC_ERLCDL_WAKEUP_REQ,
    MSG_ID_EMAC_EPDCP_WAKEUP_REQ,
    MSG_ID_EMAC_EPDCP_ENABLE_WAKEUP_REQ_IND,
    MSG_ID_EMAC_EPDCP_DISABLE_WAKEUP_REQ_IND,

    // EL1 -> EMACMCH
    MSG_ID_EMACMCH_EL1_MCCH_RCV_MODE_CHANGE_IND,

    // ERRC -> EMACMCH
    MSG_ID_ERRC_EMACMCH_SYNCAREA_CFG_REQ,
    MSG_ID_ERRC_EMACMCH_AREA_CFG_REQ,
    MSG_ID_ERRC_EMACMCH_MXCH_CFG_REQ,
    MSG_ID_ERRC_EMACMCH_MCCH_RCV_MODE_CHANGE_REQ,

    // EL2EM related
    MSG_ID_ERLC_EL2EM_EL2_INTERNAL_ON_REQ,
    MSG_ID_ERLC_EL2EM_EL2_INTERNAL_OFF_REQ,
    MSG_ID_EMAC_EL2EM_EL2_FEAT_DET_LONG_DRX_IND,
    MSG_ID_EMAC_EL2EM_DL_TB_REPORT_IND,
    MSG_ID_EMAC_EL2EM_PMCHS_INFO_IND,

    // DVFS -> EMACDL
    MSG_ID_DVFS_EMAC_IT_UP_GEAR_REQ,
    MSG_ID_DVFS_EMAC_IT_DOWN_GEAR_REQ,
    MSG_ID_MED_EMAC_VOLTE_TIMING_INFO_REQ,

    // RSVAS <-> EL2 related PORTAL
    MSG_ID_RSVAS_EL2HPORTAL_SUSPEND_SERVICE_REQ,
    MSG_ID_RSVAS_EL2HPORTAL_SUSPEND_SERVICE_CNF,
    MSG_ID_RSVAS_EMACDLPORTAL_SUSPEND_SERVICE_REQ,
    MSG_ID_RSVAS_EMACDLPORTAL_SUSPEND_SERVICE_CNF,
    MSG_ID_RSVAS_EL2PORTAL_SUSPEND_SERVICE_REQ,
    MSG_ID_RSVAS_EL2PORTAL_SUSPEND_SERVICE_CNF,

    // ERRC <-> EL2 related PORTAL
    MSG_ID_ERRC_EL2HPORTAL_RELEASE_SERVICE_NTF,
    MSG_ID_ERRC_EMACDLPORTAL_RELEASE_SERVICE_NTF,
    MSG_ID_ERRC_EL2PORTAL_RELEASE_SERVICE_NTF,

    // EL2POW
    MSG_ID_EL2POW_EMACDL_EL2POW_POLL_REQ,
    MSG_ID_EMACDL_EL2_EL2POW_POLL_REQ,
    MSG_ID_EL1_EL2POW_L2COPRO_POWER_ON_IND,
    MSG_ID_EL1_EL2POW_L2COPRO_POWER_OFF_IND,
    MSG_ID_EL1_EL2POW_SCH_CLOSE_RXBRP_IDLE_NTF,
    MSG_ID_EL2POW_USER_L2COPRO_POWER_ON_REQ,
    MSG_ID_EL2POW_USER_L2COPRO_POWER_OFF_REQ,
    MSG_ID_EL2_EL2POW_VRB_VA_SHORTAGE_NTF,
    MSG_ID_EMAC_EL2POW_LMAC_HARQ_RESET_REQ,

    // EL2ICD
    MSG_ID_ICD_EL2ICD_SYSTEM_NTF,
    MSG_ID_EL2ICD_ERTPORTAL_CTRL_NTF,
    MSG_ID_EL2ICD_EMACDLPORTAL_CTRL_NTF,
    MSG_ID_EL2ICD_EL2HPORTAL_CTRL_NTF,
    MSG_ID_EL2ICD_EL2PORTAL_CTRL_NTF,
    MSG_ID_EL2ICD_ERTPORTAL_TIMER_EXPIRY_NTF,
    MSG_ID_EL2ICD_EMACDLPORTAL_TIMER_EXPIRY_NTF,
    MSG_ID_EL2ICD_EL2HPORTAL_TIMER_EXPIRY_NTF,
    MSG_ID_EL2ICD_EL2PORTAL_TIMER_EXPIRY_NTF,

    // 3rd arrow SW protection
    MSG_ID_ATP_EMAC_3RD_ARROW_AUTH_IND,
    MSG_ID_EMAC_EPDCP_3RD_ARROW_AUTH_IND,

MODULE_MSG_END( MSG_ID_EL2_CODE_TAIL )

#endif /* _EL2_MSGID_H */
