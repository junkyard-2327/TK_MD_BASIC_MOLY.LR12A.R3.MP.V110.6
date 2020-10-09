/******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   ratdm_export_api.h
 *
 * Project:
 * --------------------------------------------------------
 *
 *
 * Description:
 * --------------------------------------------------------
 *
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 11 08 2019 willy-wj.chen
 * [MOLY00457857] [SI1][Talbot][Q0][C2K][OM6M][C2K Regression]speed of switching data from CU to CT is slower than Xiaomi9SE
 * 	
 * 	[R3.MP][RATDM] Add DNS query API for EMM to enhance gemini design.
 *
 * 06 11 2019 andy-wc.chang
 * [MOLY00412906] [Merlot][Q0][BSP+] SIM1 registers VoLTE in more 30 sec
 * 	
 * 	[LR12A][R3] queue RA - queue did between gap of UPCM and RATDM bearer act
 *
 * 09 04 2018 andy-wc.chang
 * [MOLY00348611] [Bwb180620-218]【?信VoLTE??】【?网??】[OC1-北京][PS][?信]主卡移?VoLTE+副卡?信VoLTE,??机A主卡通??程中?送短信至??机B主卡，短信提示“正在?送”2分?后，??机A掉?（1/1h）
 * RATDM API for checking whether other SIM has ongoing call
 *
 * 07 10 2018 willy-wj.chen
 * [MOLY00337945] [R3.MP][EL2][MT6761][Merlot][O1][MP3][FT][India][Delhi][VoLTE][RJIO][IDEA][Auto][Android Linux Script][SST] Modem Warning: +EWARNING: [1][643] dpcopro_mmu_drv.c #992; (timestamp: 650294582) VRB:1.ofs:0x107.pv:0x282DFC4 rfail pidx:0x340
 * 	
 * 	[MOLY00337945][R3.MP][EL2][MT6761][Merlot][O1][MP3][FT][India][Delhi][VoLTE][RJIO][IDEA][Auto][Android Linux Script][SST] Modem Warning: +EWARNING: [1][643] dpcopro_mmu_drv.c #992; (timestamp: 650294582) VRB:1.ofs:0x107.pv:0x282DFC4 rfail pidx:0x340.
 *
 * 07 10 2018 willy-wj.chen
 * [MOLY00337945][R3.MP][EL2][MT6761][Merlot][O1][MP3][FT][India][Delhi][VoLTE][RJIO][IDEA][Auto][Android Linux Script][SST] Modem Warning: +EWARNING: [1][643] dpcopro_mmu_drv.c #992; (timestamp: 650294582) VRB:1.ofs:0x107.pv:0x282DFC4 rfail pidx:0x340.
 *
 * 03 12 2018 chin-wei.hsu
 * [MOLY00312809] 【Top】【TH-CNX-DCO66_Bugs1289305】【FT】DUT1 SIM2 video call DUT2 SIM1, DUT2 can not access the Internet after connecting
 * [R3] when network interface unbind PDN, clear epsb queue whose default EBI is linked to this PDN.
 *
 * 01 09 2018 chin-wei.hsu
 * [MOLY00299863] [PVT must resolve] 微信??包慢?? - keep alive
 * [R3][UPCM][RATDM] UPCM_FEATURE_301.
 *
 * 09 15 2017 rajesh.sastry
 * [MOLY00278405] [Gen93] Fixed UPCM FLOW ID implementation for GSM/WCDMA RAT
 *
 * 07 06 2017 timothy.yao
 * [MOLY00261868] [6293]UL SIT new handling
 * new SIT handling (to TRUNK)
 * 	 - UPCM / RATDM.
 *
 * 05 10 2017 timothy.yao
 * [MOLY00248481] [BIANCO][MT6763][RDIT][FT][FDD][CU][SH][SIM1:CU][SIM2:NA][ASSERT] file:mcu/pcore/modem/el2/ert/emux/src/emux.c line:467
 * 1. fix IRAT data resume issue. 
 *   (1) SIT bias
 *   (2) add UG -> LTE rollback proc
 *   (3) modify LTE -> UG rollback procedure.
 *
 * 04 26 2017 xiaokai.liu
 * [MOLY00244013] [Gen93][TDD 3G] RATDM Code SMP
 * .
 *
 * 04 20 2017 chin-wei.hsu
 * [MOLY00241877] [UMOLYA][TRUNK][UPCM][RATDM] Build warning removal
 * Remove unused function.
 *
 * 04 18 2017 chin-wei.hsu
 * [MOLY00243037] [BIANCO][MT6763][RDIT][FT][FDD][CU][SZ][SIM1:CU][SIM2:CU] Externel (EE),[ASSERT] file:mcu/pcore/modem/nas/ratdm/cmn_data/secure/ratdm_ratadp.c line:377
 * Reset EPSB info in RATDM when UPCM resume.
 *
 * 03 30 2017 chin-wei.hsu
 * [MOLY00238716] [Gen93] 6M RATDM Multiple PS feature sync
 * [CMN-DATA] L+L, Multiple PS merge from Head Hsu's CBr
 *
 * 03 23 2017 chin-wei.hsu
 * [MOLY00237294] [MT6293][UPCM] Forced SW path
 * Fix typo.
 *
 * 03 23 2017 chin-wei.hsu
 * [MOLY00237294] [MT6293][UPCM] Forced SW path
 * [trunk] Forced SW path for EBI/PDN.
 *
 * 02 16 2017 steve.kao
 * [MOLY00230062] [UMOLYA] M-PS related interface changes for UPCM, RATDM, and EPDCP
 * [M-PS][RATDM][Common].
 * 	1. add protocol_idx into callback interfaces, 
 * 	2. one set of UPCM UL SIT per SIM.
 *
 * 09 26 2016 ravitej.ballakur
 * [MOLY00195360] [3G][RATDM][PDCP] - Gen93 3G RATDM and PDCP code modification for new HW and MCU Archi
 * 	Merging 2G and WCDMA RATDM and PDCP changes from merge_CBr.
 *
 * 08 03 2016 ravitej.ballakur
 * [MOLY00195360] [3G][RATDM][PDCP] - Gen93 3G RATDM and PDCP code modification for new HW and MCU Archi
 * 3G RATDM and PDCP changes.
 * 07 27 2016 jeremy.chen
 * [MOLY00190683] [UMOLYA][6293] EL2 merge back to UMOLYA TRUNK & PS DEV
 * [EL2][OA] merge UPCM/RATDM
 * 09 26 2016 cammie.yang
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [TRUNK] UPCM/RATDM/EPDCP feature integrations from PS.DEV
 *
 * 07 20 2016 head.hsu
 * [MOLY00182559] [MT6292][LWA] U-Plane Development: ePDCP and RATDM
 * 	(RATDM default off)
 * 	[RATDM] LWA support
 * 	1. WLAN/ePDCP UP control message
 * 	2. RATDM_LWA_ENABLE
 * 	3. wrap CCMSG_ID_SYSMSGSVC with __CCCIDEV_SUPPORT__
 *
 *
 * 05 20 2015 head.hsu
 * [MOLY00089131] [MT6291 Gemini] L+W+W+W code revision check in
 * 	;RATDM/RABM/PDCP/CSR part check-in
 *
 * 02 13 2015 yungfu.chen
 * [MOLY00091822] RATDM reorganization
 *
 * 12 23 2013 yungfu.chen
 * [MOLY00047398] [MT6582LTE][WWFT][UK][Vodafone][EE] CSFB performance anlysis [only for UKFT]
 *
 ******************************************************************************/
#ifndef _RATDM_EXPORT_API_H
#define _RATDM_EXPORT_API_H

/* KAL - RTOS Abstraction Layer */
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "qmu_bm.h"
#include "upcm_ul_sit.h"
#include "upcm_did.h"
#include "ue_testmode_struct.h"

typedef struct
{
	qbm_gpd *p_pri_head; // priority SDU head.
    qbm_gpd *p_pri_tail; // priority SDU tail.
    qbm_gpd *p_head; // normal SDU head.
    qbm_gpd *p_tail; // normal SDU tail.
} ratcmn_ul_sdu_t;
typedef ratcmn_ul_sdu_t ratdm_lte_ul_sdu_t;


typedef struct
{
    kal_uint32  sit_idx;
    kal_uint32  nml_start;
    kal_uint32  nml_num;
    kal_uint32  nml_sz;
    
    kal_uint32  pri_start;
    kal_uint32  pri_num;
    kal_uint32  pri_sz;
} ratcmn_ul_sdu_93_t;
//typedef ratcmn_ul_sdu_93_t  ratdm_lte_ul_sdu_93_t;

typedef struct 
{
    kal_uint32 rb_idx;
	upcm_did *p_head;
	upcm_did *p_tail;
}ratdm_dlvr_data_t;
/* MACRO DEFINITION */
/*! @brief define predefined bearer id for EMBMS data plane.
 *  Data plane uses this virtual bearer id (4) on EMBMS packets. */
#define MBMS_DEFAULT_EBI (4)

#define LTE_DRB_RB_IDX_MIN (2)

/* FLOW ID for WCDMA */
#define WCDMA_FLOW_ID  13


/* EXPORT FUNCTIONS */
/* RABM/PDCP/RATDM */
extern void ratdm_rabm_callback_increment_rx_data_octets(kal_uint8 tcm_cid, kal_uint64 increment_value, kal_uint8 sim_interface);
extern void ratdm_rabm_callback_reset_rx_data_octets(kal_uint8 tcm_cid, kal_uint8 sim_interface);
extern void ratdm_rabm_callback_set_new_vr_value(kal_uint8 nsapi, kal_uint16 new_vr_value, kal_uint8 sim_interface);
extern void ratdm_deliver_dl_data(ratdm_dlvr_data_t *p_data, kal_uint8 sim_idx);
extern void ratdm_fdd_rabm_callback_increment_proc_data_req();
extern void ratdm_tdd_rabm_callback_increment_proc_data_req();

/* SNDCP */
extern void ratdm_sndcp_callback_increment_proc_data_req();

/* UPCM */
/* Multimode Callback Function */
typedef void (*ratdm_lte_dlvr_dl_sdu_f)(kal_uint32 ebi, upcm_did *p_head, upcm_did *p_tail, kal_uint8 protocol_idx);
//typedef void (*ratdm_lte_rollback_sdu_f)(kal_uint32 ebi, qbm_gpd *p_head, qbm_gpd *p_tail);
typedef void (*ratdm_lte_rollback_sit_f)(kal_uint32 ebi, kal_uint8 protocol_idx, kal_uint32 pri_start, kal_uint32 pri_end, kal_uint32 nml_start, kal_uint32 nml_end); // for 93.
typedef void (*ratdm_notify_lte_tick_f)(kal_bool is_lte_tick);
typedef void (*ratdm_notify_ebi_sit_mapping_f)(kal_uint32 ebid, kal_uint32 sit_idx, kal_uint8 protocol_idx);
typedef void (*ratdm_ind_test_loop_f)(testloop_cfg_struct *p_cfg, kal_uint8 protocol_idx);
typedef void (*ratdm_ind_va_shortage_f)(kal_uint32 vrb_id, kal_uint32 next_add_fail_addr);
typedef void (*ratdm_ind_lte_act_nsapi_f)(kal_uint32 ebi, kal_uint32 protocol_idx);


extern void ratdm_ratadp_init(void);
//extern void ratdm_ratadp_queue_ulsdus(ratdm_nsapi_context_struct *nsapi_context_ptr, ratcmn_ul_sdu_93_t *p_sdus);
extern void ratdm_ratadp_free_ulsdus_93(ratcmn_ul_sdu_93_t *p_sdus, kal_uint8 protocol_idx);
extern void ratdm_ratadp_drop_sdu_in_sit(upcm_ul_sit_t *p_sit, kal_uint32 start, kal_uint32 num);
extern void ratdm_ratadp_rcv_ul_sdu_93(kal_uint32 ebi, ratcmn_ul_sdu_93_t *p_sdus, kal_uint8 protocol_idx);
extern void ratdm_ratadp_set_forced_sw_path(kal_uint32 ebi, kal_bool is_dl_forced_indirect_path, kal_uint8 protocol_idx);

//extern void ratdm_ratadp_reset_epsb_queue(kal_uint8 protocol_idx);
//extern void ratdm_ratadp_reg_cbk_rollback_sdu(ratdm_lte_rollback_sdu_f pf_rollback_sdu);
extern void ratdm_ratadp_reg_cbk_rollback_sit(ratdm_lte_rollback_sit_f pf_rollback_sdu);
extern void ratdm_ratadp_reg_cbk_dlvr_dl_sdu(ratdm_lte_dlvr_dl_sdu_f pf_dlvr_dl_sdu);
extern void ratdm_reg_cbk_notify_lte_tick(ratdm_notify_lte_tick_f pf_notify);
extern void ratdm_ratadp_reg_cbk_sit_mapping(ratdm_notify_ebi_sit_mapping_f pf_notify);
extern void ratdm_ratadp_reg_cbk_ind_testloop(ratdm_ind_test_loop_f pf_ind);
extern void ratdm_ratadp_reg_cbk_ind_va_shortage(ratdm_ind_va_shortage_f pf_ind);
extern void ratdm_ratadp_reg_cbk_ind_lte_act_nsapi(ratdm_ind_lte_act_nsapi_f pf_ind);
extern void ratdm_ratadp_testloop_rsp(kal_uint32 is_success, kal_uint8 protocol_idx);
extern void ratdm_ratadp_bind_ind(kal_uint32 pdn_id, kal_uint32 netif, kal_uint8 protocol_idx);
extern void ratdm_ratadp_unbind_ind(kal_uint32 pdn_id, kal_uint8 protocol_idx);
void ratdm_ratadp_bearer_act_ind(kal_uint32 bearer_id, kal_uint32 pdn_id, kal_uint8 protocol_idx);
void ratdm_ratadp_bearer_deact_ind(kal_uint32 bearer_id, kal_uint8 protocol_idx);
extern void ratdm_lte_keep_connected_idle_leave_req(kal_uint8 protocol_idx);
extern kal_bool ratdm_lte_is_other_sim_ongoing_call(kal_uint8 protocol_idx);
extern void ratdm_ratadp_free_epsb_ul_queue(kal_uint8 nsapi, kal_uint8 sim_idx);
extern void ratdm_ratadp_free_epsb_all_rat(kal_uint8 nsapi, kal_uint8 sim_idx);

extern void ratdm_reg_cbk_notify_lwa_wifi_tick(ratdm_notify_lte_tick_f pf_notify);
extern kal_uint8 ratdm_autogen_sim_idx();


/**
 * @brief ratdm_ratadp_if_dns_query_in_all_epsb_queue 
 *   Search all RATDM LTE queue to check whether there's DNS query packet queued
 *
 * @param protocol_idx
 *   Index to SIM card
 * @return 
 *   KAL_TRUE: there's DNS query queued in RATDM LTE
 *   KAL_FALSE: there's no DNS query queued in RATDM LTE
 * @Usage
 *   Please call this function when RATDM_LTE is in IDLE state, i.e. 
 *      between IDLE_ENTER_REQ and IDLE_LEAVE_REQ
 */
extern kal_bool ratdm_ratadp_if_dns_query_in_all_epsb_queue(kal_uint8 protocol_idx);
#endif /* _RATDM_EXPORT_API_H */
