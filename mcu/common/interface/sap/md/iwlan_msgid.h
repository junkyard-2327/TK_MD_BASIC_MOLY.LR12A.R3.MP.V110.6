/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   iwlan_msgid.h
 *
 * Project:
 * --------
 *	 UMOLYA 
 *
 * Description:
 * ------------
 * This module defines the messgae IDs for IWLAN.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 02 06 2020 star.kuo
 * [MOLY00497849] EWIFIRSSITHRCFG query mode
 * EWIFIRSSITHR query mode in LR12A.R3.MP
 *
 * 12 11 2019 larry.liu
 * [MOLY00464618] [LR12A.R3.MP][VoLTE Roaming][IWLAN] Enhanced VoLTE Roaming patch back
 * 	
 * 	Roaming patch for YL
 *
 * 10 22 2019 larry.liu
 * [MOLY00426684] [USCC][IWLAN]Voice Domain Prefer Setting
 * 	
 * 	[Gen93][USCC][IWLAN] Add the setting of VDP, allow only when VDP is 3
 *
 * 09 10 2019 gaosen.zhang
 * [MOLY00439053] [CB70] About ModemKC_log for Commercial market issue
 * 	
 * 	IWLAN for KClog.
 *
 * 08 23 2019 larry.liu
 * [MOLY00433972] [GEN93_MP][IWLAN][TMOUS] AT+ELOCAEN Patch back
 * 	
 * 	[GEN93_MP][IWLAN][TMOUS] AT+ELOCAEN patch
 *
 * 06 20 2019 gaosen.zhang
 * [MOLY00415296] [GATING][MT6771][Sylvia][P0][R3][IOT][Japan][KDDI][VoWiFi][Pre-Test][ST-5.31/32/33] UE established IMS PDN on LTE when WFC already registered
 * 	
 * 	KDDI ECC force HO interface with IMC.
 *
 * 05 06 2019 star.kuo
 * [MOLY00403694] Andriod Q IWLAN refactor sending RPL to AP
 * Andriod Q IWLAN refactor sending RPL to AP
 *
 * 04 25 2019 manoj.goyal
 * [MOLY00401029] To add dpd time support in iwlan during vowifi call fail from hotspot
 * 	
 * 	dpd timer check UT
 *
 * 04 19 2019 mt.tsai
 * [MOLY00366497] [US_DEV][TMO][2019Q2][IWLAN] feature development
 * 	
 * 	[IWLAN][TMOUS] 2019Q2 GID-MTRREQ-6334 SIP part
 * 	[IWLAN][TMOUS][2019Q2] GID-MTRREQ-6334 RTP part
 *
 * 01 28 2019 mt.tsai
 * [MOLY00366497] [US_DEV][IWLAN][TMOUS] 2019Q2 development
 * [IWLAN][TMOUS][2019Q2] GID-MTRREQ-6334 RTP part
 *
 * 01 28 2019 mt.tsai
 * [MOLY00366497] [US_DEV][IWLAN][TMOUS] 2019Q2 development
 * [IWLAN][TMOUS] 2019Q2 GID-MTRREQ-6334 SIP part
 *
 * 09 21 2018 mt.tsai
 * [MOLY00351919] [DSBP] patch back "D-SBP enhancment for all modem" to LR12A.R3.MP
 * 	
 * 	[DSBP] Call for patch back to LR12A.R3.MP @ 9/21
 * 	
 * 	[IWLAN][L4BPWR] PHONE STATE (EFUN) notifiation to IWLAN
 *
 * 06 05 2018 star.kuo
 * [MOLY00322242] When RTP packet loss rate is high, IWLAN requests WO to do DPD
 * VZ_REQ_WIFI_5941812: After RTP report, VzW needs DPD check.
 *
 * 03 14 2018 star.kuo
 * [MOLY00313309] [WW FT][ZION][MT6739][O1][MP2][SQC][VzW][Internal FT][Irvine][V-SMS-008] VoLTE Function - SMS cannot be sent when Advanced Calling is turned OFF
 * Send ILM to L4 for sync. with IMC IMSCFG.
 * NWSEL needs LTE IMS infomation to attach LTE.
 *
 * 03 02 2018 mt.tsai
 * [MOLY00309820] [IWLAN][L4] SSAC information for VoWiFi requirement "VzW_2016Feb_VZ_REQ_VoWiFi_37627"
 * [IWLAN][L4] SSAC information for VoWiFi requirement "VzW_2016Feb_VZ_REQ_VoWiFi_37627"
 *
 * 03 01 2018 hsin-jun.tang
 * [MOLY00309612] [Volunteer Patch][IMS][IWLAN] Dump Runtime Parameters (DRP) to NVRAM
 * [IWLAN] DRP - R3
 *
 * 02 23 2018 hsin-jun.tang
 * [MOLY00309612] [Volunteer Patch][IMS][IWLAN] Dump Runtime Parameters (DRP) to NVRAM
 * [IWLAN] DRP
 *
 * 11 27 2017 jani.manninen
 * [MOLY00283554] [Focus][MT6739][Zion][MP1.5][N1][WW FT][Turkey][Istanbul][IMS][TurkCell][w_call_14] perform airplanemode ON during call behaviour not optimal when VoLTE enabled
 * 	
 * 	Patch back from R3 to UMOLYA
 *
 * 11 07 2017 hsin-jun.tang
 * [MOLY00281306] 1109285：??top??standby??performanceBattery gap is greater than 13% for SMART operator; time:13-15 Hours standby
 * .
 *
 * 11 07 2017 hsin-jun.tang
 * [MOLY00281306] 1109285：??top??standby??performanceBattery gap is greater than 13% for SMART operator; time:13-15 Hours standby
 * [IWLAN] CELLINFO re-arch
 *
 * 09 20 2017 hsin-jun.tang
 * [MOLY00278731] [IWLAN] ATT 17.2 requirement
 * .
 *
 * 09 18 2017 hsin-jun.tang
 * [MOLY00278731] [IWLAN] ATT 17.2 requirement
 * [IWLAN] ATT 17.2 requirement
 *
 * 08 31 2017 jen-ping.huang
 * [MOLY00275074] [IWLAN] MP2.0 DTAG support
 * [IWLAN] DTAG support.
 *
 * 08 21 2017 mt.tsai
 * [MOLY00266685] [GEN93][TMOUS] TMO-US Feature in
 * IWLAN TMO-US IF w/ IMC,LTECSR
 *
 * 08 21 2017 mt.tsai
 * [MOLY00266685] [GEN93][TMOUS] TMO-US Feature in
 * 	
 * 	IWLAN TMO-US IF w/ IMC/LTECSR
 *
 * 08 02 2017 mt.tsai
 * [MOLY00266685] [GEN93][TMOUS] TMO-US Feature in
 * 	
 * 	[GEN93] IWLAN feature config re-arch
 *
 * 07 31 2017 hsin-jun.tang
 * [MOLY00267226] [IWLAN] Sprint
 * [IWLAN] Sprint
 * 	others: 
 * 	1. Fix RJIL PING DNS, get_rsp logic
 * 	2. Fix MSC UT issue after IWLAN re-arch
 *
 * 07 06 2017 jen-ping.huang
 * [MOLY00262310] [GEN93][M3][IWLAN]OM feature/flow development
 * [IWLAN] check WO ready status.
 *
 * 06 30 2017 jen-ping.huang
 * [MOLY00258108] [Bianco][N1][APTG]Can not make a WFC MO call to remote side, will CS Call to remote side
 * [IWLAN] support CS prefer mode RPL.
 *
 * 06 30 2017 mingchun.cheng
 * [MOLY00259507] [Bianco] Migrate WSEM to D2RM
 * .
 *
 * 06 27 2017 hsin-jun.tang
 * [MOLY00259863] [IWLAN] RJIL PING DNS feature
 * [IWLAN] RJIL ping DNS feature
 * 	Others:
 * 	1. Fix config_wifi_monitor 
 * 	2. Remove EOPS
 * 	3. Fix ims_rb_md_rat barring log
 *
 * 06 26 2017 mingchun.cheng
 * [MOLY00259507] [Bianco] Migrate WSEM to D2RM
 *
 * 06 09 2017 hsin-jun.tang
 * [MOLY00256281] [UMOLYA][IWLAN] Orange + VDF feature in
 * [IWLAN] VDF + ORG CL
 *
 * 06 01 2017 jen-ping.huang
 * [MOLY00254172] [GEN93][M3][IWLAN]PCSCP restoration support
 * [IWLAN] MOD DATA CALL IND: support P-CSCF restoration.
 *
 * 05 22 2017 hsin-jun.tang
 * [MOLY00251557] [UMOLYA][IWLAN] AT CMD for configuration set/get
 * [IWLAN] AT CMD for configuration set/get
 *
 * 05 22 2017 hsin-jun.tang
 * [MOLY00250617] [UMOLYA][IWLAN] apply new EPLWTH mechanism
 * [IWLAN] EPLWTH new mechanism
 *
 * 05 10 2017 jen-ping.huang
 * [MOLY00248380] [Bianco][N1][APTG]SIM2 can not register WFC after reboot the phone(repear 5 times)
 * [IWLAN] support sync wifi related ilm to all ps.
 *
 * 05 02 2017 hsin-jun.tang
 * [MOLY00246109] [IWLAN] Bianco MP0.5 RJIL Feature Phase In
 * [IWLAN] 1716.p31 CBr merge to Trunk
 *
 * 04 26 2017 jen-ping.huang
 * RAT throttling.
 *
 * 04 24 2017 jen-ping.huang
 * .
 *
 * 04 08 2017 way.hsu
 * [MOLY00240462] [IWLAN] ERRC IF Sync
 * 	
 * 	IWLAN - ERRC related IF.
 *
 * 04 07 2017 ben.chiu
 * [MOLY00198195] [MT6293][IMS][Volunteer Patch] Gen93 feature development
 * 	
 * 	IMS call status to IWLAN interface
 *
 * 04 06 2017 ben.chiu
 * [MOLY00198195] [MT6293][IMS][Volunteer Patch] Gen93 feature development
 * 	
 * 	IMS dereg from IWLAN (replace RDS AT+EIMSDEREG=4)
 *
 * 04 05 2017 way.hsu
 * [MOLY00239409] [WIPC] merge back to UMOLYA TRUNK
 * WIPC merge for UMOLYA (interface).
 *
 * 04 05 2017 jen-ping.huang
 * [MOLY00221055] [GEN93 PREIT][M2 bug fix][IWLAN]IWLAN VOLTE support integration check in task
 * .
 *
 * 03 31 2017 jen-ping.huang
 * [IWLAN]#3693605.
 *
 * 03 29 2017 jen-ping.huang
 * [IWLAN] M3 UMOLYA patch back.
 *
 * 03 29 2017 jen-ping.huang
 * [IWLAN] M3 UMOLYA patch back.
 *
 * 02 21 2017 jen-ping.huang
 * [MOLY00221055] [GEN93 PREIT][M2 bug fix][IWLAN]IWLAN VOLTE support integration check in task
 * .
 *
 * 02 20 2017 verit.chen
 * [MOLY00228739] [GEN93][M2] for D2/DDM check-in TRUNK
 * for D2/DDM M2 features check-in
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _IWLAN_MSG_ID_H
#define _IWLAN_MSG_ID_H

#include "module_msg_range.h"

MODULE_MSG_BEGIN( MSG_ID_IWLAN_CODE_BEGIN )

/****************************************************************************
*                 <1> Desitnation: IWLAN 
****************************************************************************/
// <1.1> From ERRC
    // LWI
    MSG_ID_IWLAN_ERRC_LWI_STEER_STATUS_IND = MSG_ID_IWLAN_CODE_BEGIN,
    MSG_ID_IWLAN_ERRC_WLAN_PARAMETER_IND,

    // LWA
    MSG_ID_IWLAN_ERRC_WLAN_LWA_CONNECT_IND,
    MSG_ID_IWLAN_ERRC_WLAN_LWA_DISCONNECT_IND,
    MSG_ID_IWLAN_ERRC_WLAN_MEASUREMENT_IND,
    MSG_ID_IWLAN_ERRC_WLAN_MEASUREMENT_STOP_IND,

// <1.2> From WIPC
    // LWI
    MSG_ID_CS_IWLAN_ASSOCIATE_REQ,
    MSG_ID_IWLAN_WLFW_LWI_CONF_CNF,
    MSG_ID_IWLAN_WLFW_LWI_START_STOP_CNF,
    MSG_ID_IWLAN_WLFW_LWI_MEAS_IND,
    MSG_ID_IWLAN_WLFW_MEAS_CAPA_FAIL_IND,
    // LWA
    MSG_ID_WIPC_IWLAN_WLAN_MEASUREMENT_REQ,
    MSG_ID_WIPC_IWLAN_WLAN_LWA_CONNECT_RSP,
    MSG_ID_WIPC_IWLAN_WLAN_LWA_DISCONNECT_RSP,
    MSG_ID_WIPC_IWLAN_WLAN_LWA_LOST_REQ,

// <1.3> To WIPC
    // LWA
    MSG_ID_WIPC_IWLAN_WLAN_LWA_CONNECT_IND,
    MSG_ID_WIPC_IWLAN_WLAN_LWA_DISCONNECT_IND,
    MSG_ID_WIPC_IWLAN_WLAN_MEASUREMENT_IND,
    MSG_ID_WIPC_IWLAN_WLAN_MEASUREMENT_STOP_IND,

// <1.3> From ATP
    MSG_ID_ATP_IWLAN_WLAN_CAPABILITY_REQ,
    MSG_ID_ATP_IWLAN_IMSCFG_REQ,
    MSG_ID_ATP_IWLAN_L4_IMSCFG_RSP,
    MSG_ID_ATP_IWLAN_L4_PLWTHCFG_RSP,
    MSG_ID_ATP_IWLAN_L4_CELLSIG_QUERY_RSP,
    MSG_ID_ATP_IWLAN_L4_CELLTECH_QUERY_RSP,
    MSG_ID_ATP_IWLAN_L4_CELLSIG_URCRPT_REQ,
    MSG_ID_ATP_IWLAN_L4_CELLTECH_URCRPT_REQ,
    MSG_ID_ATP_IWLAN_L4_EXT_CELLTECH_URCRPT_REQ,
    MSG_ID_ATP_IWLAN_L4_SRVSPEC_ACC_URCRPT_REQ,
    MSG_ID_ATP_IWLAN_L4_VOPS_URCRPT_REQ,
    MSG_ID_ATP_IWLAN_L4_PLWTH_URCRPT_REQ,
    MSG_ID_ATP_IWLAN_L4_ECEVDP_URCRPT_REQ,    
    MSG_ID_ATP_IWLAN_ESRVSTATE_REQ,
    MSG_ID_ATP_IWLAN_ECNCFG_REQ,
    MSG_ID_ATP_IWLAN_EWIFIEN_REQ,
    MSG_ID_ATP_IWLAN_EWFCPREF_REQ,
    MSG_ID_ATP_IWLAN_EWIFIASC_REQ,
    MSG_ID_ATP_IWLAN_ELOCAEN_REQ,
    MSG_ID_ATP_IWLAN_EWIFISIGLVL_REQ,
    MSG_ID_ATP_IWLAN_EWIFIRSSITHR_REQ,
    MSG_ID_ATP_IWLAN_EIWLCFGSET_REQ,
    MSG_ID_ATP_IWLAN_EIWLCFGGET_REQ,       
    MSG_ID_ATP_IWLAN_EIMSGEO_REQ,
    MSG_ID_ATP_IWLAN_EIWLPING_REQ,
    MSG_ID_ATP_IWLAN_EPVSSET_REQ,
    MSG_ID_ATP_IWLAN_EPVSGET_REQ,
    MSG_ID_ATP_IWLAN_EIRAT_STATUS_REQ,
    MSG_ID_ATP_IWLAN_EIMSRCSCONN_REQ,
    MSG_ID_ATP_IWLAN_EIWLPLEN_REQ,
    MSG_ID_ATP_IWLAN_EFUN_REQ,
    MSG_ID_ATP_IWLAN_SIP_CALL_PROGRESS_REQ,    
    MSG_ID_ATP_IWLAN_DUMP_RUNTIME_PARA_REQ, // AT+ECFGDRP 
// <1.4> From D2RM
    MSG_ID_D2RM_IWLAN_WANS_RPL_UPDATE_REQ,
    MSG_ID_D2RM_IWLAN_WANS_RPL_UPDATE_RSP,
    MSG_ID_D2RM_IWLAN_WANS_PDNINFO_RPT_IND,
    MSG_ID_D2RM_IWLAN_WANS_IMSCFG_HOCMP_IND,
    MSG_ID_D2RM_IWLAN_WANS_WROVEIN_TRTL_REQ,
    MSG_ID_D2RM_IWLAN_WANS_WROVEOUT_TRTL_REQ,

// <1.5> From IMC
    MSG_ID_IMC_IWLAN_IMS_DEREG_RSP,
    MSG_ID_IMC_IWLAN_IMS_CALL_STATUS_REQ,
    MSG_ID_IMC_IWLAN_CALL_MEDIA_INFO_REQ,
    MSG_ID_IMC_IWLAN_REG_RAN_PRIO_UPDATE_REQ,
    MSG_ID_IMC_IWLAN_IMS_ROAMING_STATUS_REQ,
    MSG_ID_IMC_IWLAN_WIFI_SERVICE_FAIL_REQ,
    MSG_ID_IMC_IWLAN_IMS_ECC_HO_REQ,

// <1.6> From SDM
	MSG_ID_IWLAN_SDM_ECSCM_INFO_REQ,

// <1.7> From SSDS
    MSG_ID_SSDS_IWLAN_XCAP_CAPA_IND,
/****************************************************************************
*                 <2> Desitnation: WMOB
****************************************************************************/
    MSG_ID_WMOB_WMOB_LWI_STAT_REQ,
    MSG_ID_EVHD_WMOB_LWX_LWI_STEER_IND,
    MSG_ID_EVHD_WMOB_LWX_LWI_PARA_IND,
    MSG_ID_EVHD_WMOB_LWX_LWI_STEER_STATUS_REQ,
    MSG_ID_EVHD_WMOB_LWX_WLAN_CAPABILITY_REQ,
    MSG_ID_EVHD_WMOB_LWX_ERRC_WLAN_LWA_CONNECT_IND,
    MSG_ID_EVHD_WMOB_LWX_ERRC_WLAN_LWA_CONNECT_RSP,
    MSG_ID_EVHD_WMOB_LWX_ERRC_WLAN_LWA_DISCONNECT_IND,
    MSG_ID_EVHD_WMOB_LWX_ERRC_WLAN_LWA_DISCONNECT_RSP,
    MSG_ID_EVHD_WMOB_LWX_ERRC_WLAN_MEASUREMENT_IND,
    MSG_ID_EVHD_WMOB_LWX_ERRC_WLAN_MEASUREMENT_STOP_IND,
    MSG_ID_EVHD_WMOB_LWX_ERRC_WLAN_MEASUREMENT_REQ,
    MSG_ID_EVHD_WMOB_LWX_ERRC_WLAN_LWA_LOST_REQ,

    MSG_ID_EVHD_WMOB_LWX_CS_ASSOCIATE_REQ,
    MSG_ID_EVHD_WMOB_LWX_WLFW_LWI_CONF_REQ,
    MSG_ID_EVHD_WMOB_LWX_WLFW_LWI_CONF_CNF,
    MSG_ID_EVHD_WMOB_LWX_WLFW_LWI_START_STOP_REQ,
    MSG_ID_EVHD_WMOB_LWX_WLFW_LWI_START_STOP_CNF,
    MSG_ID_EVHD_WMOB_LWX_WLFW_LWI_MEAS_IND,
    MSG_ID_EVHD_WMOB_LWX_WLFW_MEAS_CAPA_FAIL_IND,
    MSG_ID_EVHD_WMOB_LWX_LWAD_WLAN_MEASUREMENT_REQ,
    MSG_ID_EVHD_WMOB_LWX_LWAD_WLAN_LWA_CONNECT_IND,
    MSG_ID_EVHD_WMOB_LWX_LWAD_WLAN_LWA_CONNECT_RSP,
    MSG_ID_EVHD_WMOB_LWX_LWAD_WLAN_LWA_DISCONNECT_IND,
    MSG_ID_EVHD_WMOB_LWX_LWAD_WLAN_LWA_DISCONNECT_RSP,
    MSG_ID_EVHD_WMOB_LWX_LWAD_WLAN_LWA_LOST_REQ,
    MSG_ID_EVHD_WMOB_LWX_LWAD_WLAN_MEASUREMENT_IND,
    MSG_ID_EVHD_WMOB_LWX_LWAD_WLAN_MEASUREMENT_STOP_IND,

    MSG_ID_EVHD_WMOB_LWX_CS_WLAN_CAPABILITY_REQ,

    MSG_ID_WMOB_LWX_LWX_STAT_REQ,
    MSG_ID_WMOB_LWX_LWI_STEER_REQ,
    MSG_ID_EVHD_WMOB_TMR_TO_IND,
    MSG_ID_EVHD_WMOB_SIM_READY_IND,
    MSG_ID_EVHD_WMOB_SIM_ERROR_IND,

    /*Desitnation: WMOB WANS*/
    MSG_ID_EVHD_WMOB_WANS_TMR_TO_IND,
    MSG_ID_EVHD_WMOB_WANS_CELLREG_INFO_REQ, //+EGREG
    MSG_ID_EVHD_WMOB_WANS_DATASRVSTATE_INFO_REQ, //FWK
    MSG_ID_EVHD_WMOB_WANS_DATAROAMSTATE_INFO_REQ, //FWK
    MSG_ID_EVHD_WMOB_WANS_EOPS_INFO_REQ, //+EOPS
    MSG_ID_EVHD_WMOB_WANS_SIGLEVEL_INFO_REQ, //+ECSQ
    MSG_ID_EVHD_WMOB_WANS_VOPSRPT_INFO_REQ, //+CIREPI
    MSG_ID_EVHD_WMOB_WANS_SSACBAR_INFO_REQ, //+ESSAC
    MSG_ID_EVHD_WMOB_WANS_PCSCFPING_INFO_REQ, //LTECSR
    MSG_ID_EVHD_WMOB_WANS_WIFISRVSTATE_INFO_REQ, //WfcD
    MSG_ID_EVHD_WMOB_WANS_WIFISIGLVL_INFO_REQ, //WfcD
    MSG_ID_EVHD_WMOB_WANS_EPDGPING_INFO_REQ, //ePDG
    MSG_ID_EVHD_WMOB_WANS_IMSCFG_REQ, //ATP
    MSG_ID_EVHD_WMOB_WANS_L4_IMSCFG_RSP, // ATP
    MSG_ID_EVHD_WMOB_WANS_WFCPREF_CFG_REQ, //ATP: for wfc_pref & wfc_wpref_en
    MSG_ID_EVHD_WMOB_WANS_WIFIUI_CFG_REQ,
    MSG_ID_EVHD_WMOB_WANS_DATAROAMUI_CFG_REQ,
    MSG_ID_EVHD_WMOB_WANS_ECSCM_INFO_REQ, //+ECSCM
    MSG_ID_EVHD_WMOB_WANS_CALLSTATE_INFO_REQ,
    //MSG_ID_EVHD_WMOB_WANS_CALLQUALITY_INFO_REQ, //LTECSR: RTP info
    MSG_ID_WSEM_WMOB_WANS_ACTPDN_INFO_REQ,    
    MSG_ID_EVHD_WMOB_WANS_L4_PLWTHCFG_RSP,
    MSG_ID_EVHD_WMOB_WANS_L4_CELLSIG_QUERY_RSP,
    MSG_ID_EVHD_WMOB_WANS_L4_CELLTECH_QUERY_RSP,
    MSG_ID_EVHD_WMOB_WANS_L4_CELLSIG_URCRPT_REQ,
    MSG_ID_EVHD_WMOB_WANS_L4_CELLTECH_URCRPT_REQ,
    MSG_ID_EVHD_WMOB_WANS_L4_EXT_CELLTECH_URCRPT_REQ,
    MSG_ID_EVHD_WMOB_WANS_L4_SRVSPEC_ACC_URCRPT_REQ,
    MSG_ID_EVHD_WMOB_WANS_L4_VOPS_URCRPT_REQ,
    MSG_ID_EVHD_WMOB_WANS_L4_PLWTH_URCRPT_REQ,
    MSG_ID_EVHD_WMOB_WANS_L4BNW_ATTACHED_RAT_IND,
    MSG_ID_EVHD_WMOB_WANS_L4_ECEVDP_URCRPT_REQ,
    MSG_ID_EVHD_WMOB_WANS_ESRVSTATE_REQ,
    MSG_ID_EVHD_WMOB_WANS_ECNCFG_REQ,
    MSG_ID_EVHD_WMOB_WANS_EWIFIEN_REQ,
    MSG_ID_EVHD_WMOB_WANS_EWFCPREF_REQ,
    MSG_ID_EVHD_WMOB_WANS_EWIFIASC_REQ,
    MSG_ID_EVHD_WMOB_WANS_ELOCAEN_REQ,
    MSG_ID_EVHD_WMOB_WANS_EWIFISIGLVL_REQ,
    MSG_ID_EVHD_WMOB_WANS_EWIFIRSSITHR_REQ,
    MSG_ID_EVHD_WMOB_WANS_EIWLCFGSET_REQ,
    MSG_ID_EVHD_WMOB_WANS_EIWLCFGGET_REQ,
    MSG_ID_EVHD_WMOB_WANS_EPVSSET_REQ,
    MSG_ID_EVHD_WMOB_WANS_EPVSGET_REQ,
    MSG_ID_EVHD_WMOB_WANS_EIRAT_STATUS_REQ,

    MSG_ID_EVHD_WMOB_WANS_WIFIMON_CFG_IND,
    MSG_ID_EVHD_WMOB_WANS_WIFISTA_REQ,
    MSG_ID_EVHD_WMOB_WANS_EIWLPLEN_REQ,    // AT+EIWLPLEN
    MSG_ID_EVHD_WMOB_WANS_EIWLPL_IND,      // URC+EIWLPL

    //MSG_ID_EVHD_WMOB_PKTINFO_CFG_REQ,
    //MSG_ID_EVHD_WMOB_PKTINFO_CFG_CNF,
    //MSG_ID_EVHD_WMOB_PKTINFO_RPT_IND,
    MSG_ID_EVHD_WMOB_WANS_LTECSR_INFO_CFG_REQ,
    MSG_ID_EVHD_WMOB_WANS_LTECSR_INFO_CFG_CNF,
    MSG_ID_EVHD_WMOB_WANS_LTECSR_INFO_RPT_IND,

    MSG_ID_EVHD_WMOB_WANS_LTECSR_INFO_QUERY_REQ,
    MSG_ID_EVHD_WMOB_WANS_LTECSR_INFO_QUERY_CNF,
    MSG_ID_EVHD_WMOB_WANS_LTECSR_INFO_QUERY_IND,

    // From WO
    MSG_ID_EVHD_WMOB_WANS_WO_STATUS_IND,
    MSG_ID_EVHD_WMOB_WANS_WO_DPD_CNF,
    
    MSG_ID_EVHD_WMOB_WANS_ATP_EIMSGEO_IND, // +EIMSGEO
    MSG_ID_EVHD_WMOB_WANS_ATP_EIMSGEO_REQ, // AT+EIMSGEO

    MSG_ID_EVHD_WMOB_WANS_ATP_EWFCRVOUT_IND, // +EWFCRVOUT
    MSG_ID_EVHD_WMOB_WANS_ATP_EIWLPING_IND, //+EIWLPING
    MSG_ID_EVHD_WMOB_WANS_ATP_EIWLPING_REQ, //AT+EIWLPING
    MSG_ID_EVHD_WMOB_WANS_ATP_EIMSRCSCONN_REQ, //AT+EIMSRCSCONN

    MSG_ID_EVHD_WMOB_WANS_RPL_UPDATE_REQ,
    MSG_ID_EVHD_WMOB_WANS_RPL_UPDATE_RSP,
    MSG_ID_EVHD_WMOB_WANS_PDNINFO_RPT_IND,
    MSG_ID_EVHD_WMOB_WANS_IMSCFG_HOCMP_IND,
    MSG_ID_EVHD_WMOB_WANS_WROVEOUT_TRTL_REQ,
    MSG_ID_EVHD_WMOB_WANS_WROVEIN_TRTL_REQ,

    MSG_ID_EVHD_WMOB_WANS_IMS_CALL_STATUS_REQ,
    MSG_ID_EVHD_WMOB_WANS_REG_RAN_PRIO_UPDATE_REQ,
    MSG_ID_EVHD_WMOB_WANS_WIFI_SERVICE_FAIL_REQ,
    MSG_ID_EVHD_WMOB_WANS_IMS_ECC_HO_REQ,

    MSG_ID_EVHD_WMOB_ME_DSBP_RECONFIGURE_REQ,
    MSG_ID_EVHD_WMOB_WANS_L4C_SET_PWL_THRHD_CNF,
    MSG_ID_EVHD_WMOB_WANS_L4C_IWLAN_PWR_LEVEL_IND,    
    MSG_ID_EVHD_WMOB_WANS_L4C_IMS_SYS_INFO_IND,

    MSG_ID_EVHD_WMOB_WANS_SIP_CALL_PROGRESS_REQ,
    MSG_ID_EVHD_WMOB_WANS_CALL_MEDIA_INFO_REQ,
    MSG_ID_EVHD_WMOB_WANS_DUMP_RUNTIME_PARA_REQ, // AT+ECFGDRP 
    
    MSG_ID_EVHD_WMOB_WANS_PHONE_STATE_REQ,       // from L4BPWR
    MSG_ID_EVHD_WMOB_WANS_ROAMING_STATUS_REQ,
    MSG_ID_EVHD_WMOB_WANS_XCAP_CAPA_IND,         // from SSDS for KClog
/****************************************************************************
*                 <4> Desitnation: EVHD
****************************************************************************/
    /* from WMOB */
    MSG_ID_EVHD_WMOB_WANS_CELL_SIGLEVEL_THRCGF_IND,
    MSG_ID_EVHD_WMOB_WANS_WIFI_SIGLEVEL_THRCGF_IND,
    MSG_ID_EVHD_WMOB_WANS_CALLQUALITY_THRCGF_IND,
    MSG_ID_EVHD_WMOB_WANS_CELLREG_INFO_QUERY_IND,
    MSG_ID_EVHD_WMOB_WANS_EOPS_INFO_QUERY_IND,
    MSG_ID_EVHD_WMOB_WANS_SIGLEVEL_INFO_QUERY_IND,
    MSG_ID_EVHD_WMOB_WANS_SIGLEVEL_INFO_QUERY_REQ,
    MSG_ID_EVHD_WMOB_WANS_CALLQUALITY_INFO_QUERY_IND,
    MSG_ID_EVHD_WMOB_WANS_CALLQUALITY_INFO_QUERY_REQ,
    MSG_ID_EVHD_WMOB_WANS_IMC_IMSCFG_IND,             // To IMC
    MSG_ID_EVHD_WMOB_WANS_IMC_IMS_RATAVAIL_IND,
    MSG_ID_EVHD_WMOB_WANS_ATP_IMSCFG_IND,             // To ATP
    MSG_ID_EVHD_WMOB_WANS_ATP_PLWTHCFG_IND,
    MSG_ID_EVHD_WMOB_WANS_ATP_CELLSIG_QUERY_IND,
    
    MSG_ID_EVHD_WSEM_EWIFIPDNACT_IND,
    MSG_ID_EVHD_WMOB_WANS_EWIFIEN_SYNCPS_IND,
    MSG_ID_EVHD_WMOB_WANS_EWIFIASC_SYNCPS_IND,
    MSG_ID_EVHD_WMOB_WANS_EWIFISIGLVL_SYNCPS_IND,
    MSG_ID_EVHD_WMOB_WANS_EIWLCFGSET_IND, // for AT RSP
    MSG_ID_EVHD_WMOB_WANS_EIWLCFGGET_IND, // for AT RSP
    MSG_ID_EVHD_WMOB_WANS_EPVSSET_IND, // for AT RSP
    MSG_ID_EVHD_WMOB_WANS_EPVSGET_IND, // for AT RSP

    MSG_ID_EVHD_WSEM_IMC_IMS_DEREG_IND,              // To IMC
    MSG_ID_EVHD_WMOB_WANS_RPL_UPDATE_IND,            // To D2RM

    MSG_ID_EVHD_WMOB_ME_DSBP_RECONFIGURE_CNF,
    MSG_ID_EVHD_WMOB_WANS_L4C_SET_PWL_THRHD_REQ,     // To L4C
    MSG_ID_EVHD_WMOB_WANS_L4C_IMS_CAP_IND,           // To L4C

    MSG_ID_EVHD_WMOB_WANS_PHONE_STATE_CNF,           // To L4BPWR
    MSG_ID_EVHD_WMOB_WANS_WO_DPD_REQ,                // To WO
    MSG_ID_EVHD_WMOB_WANS_IMS_ECC_HO_RSP,            // To IMC

/****************************************************************************
*                 <5> UT
****************************************************************************/
#ifdef __IWLAN_UT__
    MSG_ID_IWLAN_WLFW_LWI_CONF_REQ,
    MSG_ID_IWLAN_WLFW_LWI_START_STOP_REQ,
    MSG_ID_WIPC_IWLAN_WLAN_LWA_CONNECT_IND,
    MSG_ID_WIPC_IWLAN_WLAN_LWA_DISCONNECT_IND,
    MSG_ID_WIPC_IWLAN_WLAN_MEASUREMENT_IND,
    MSG_ID_WIPC_IWLAN_WLAN_MEASUREMENT_STOP_IND,
    MSG_ID_IWLAN_ERRC_WLAN_MEASUREMENT_REQ,
    MSG_ID_IWLAN_ERRC_WLAN_LWA_CONNECT_RSP,
    MSG_ID_IWLAN_ERRC_WLAN_LWA_DISCONNECT_RSP,
    MSG_ID_IWLAN_ERRC_WLAN_LWA_LOST_REQ,
#endif
    MSG_ID_IWLAN_IWLAN_CONFIG_LWX_REQ,
    MSG_ID_IWLAN_IWLAN_QUERY_LWX_REQ,
    MSG_ID_IWLAN_IWLAN_QUERY_LWX_CNF,
    MSG_ID_IWLAN_WMOB_ILM_IT_EXT2INT_REQ,
    MSG_ID_IWLAN_WMOB_ILM_IT_INT2EXT_REQ,
    MSG_ID_IWLAN_WMOB_ILM_IT_EXT_REQ,    
    MSG_ID_IWLAN_IWLAN_UT_DSBP_CALLBACK_REQ,
    MSG_ID_EVHD_WMOB_UT_DSBP_CALLBACK_REQ,
    MSG_ID_EVHD_WMOB_UT_CONFIG_IND,

MODULE_MSG_END( MSG_ID_IWLAN_CODE_TAIL )

#endif  //_IWLAN_MSG_ID_H