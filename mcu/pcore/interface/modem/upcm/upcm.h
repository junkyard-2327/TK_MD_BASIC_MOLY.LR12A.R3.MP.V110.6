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
 *   upcm.h
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
 * -------
 *   
 *
 * ==========================================================================
 * $Log$
 *
 * 11 08 2019 willy-wj.chen
 * [MOLY00457637] [UPCM]??不同小?下网?待机耗?情?，??耗?明?大于?比机
 * 	
 * 	[R3.MP][UPCM] add data arrival time API for control plane enhancement (port from 95).
 *
 * 09 20 2019 brian.wu
 * [MOLY00441507] [Gen93] Network related optimization -- arrow 2nd & 3rd
 * 	
 * 	1. arrow 2nd & xxx feature dev.
 * 	2. arrow 3rd emac notify part.
 *
 * 09 16 2019 willy-wj.chen
 * [MOLY00436796] [Gen93] DSDA-like feature check in
 * 	
 * 	[R3.MP] port upcm_is_ul_ims_data_ongoing from 95 to 93 for DSDA-like feature.
 *
 * 08 27 2019 andy-wc.chang
 * [MOLY00434515] [B190414-819]王者?耀游??程卡?，网?延?450 (?常出?，或?日多次复?)
 * 	
 * 	[LR12A][R3][UPCM] paging session early release
 *
 * 03 14 2019 wei.liao
 * [MOLY00391466] 4G游??延优化信息申?
 * 	
 * 	Internet PDN notify.
 *
 * 03 14 2019 chin-wei.hsu
 * [MOLY00390389] [Gemini][L+L][Gen93][Interface][sync R2 to R3] A2 trigger network release (Interface part)
 * 	
 * 	[fake A2] prediction Internet API.
 *
 * 10 22 2018 chin-wei.hsu
 * [MOLY00353320] modem mini dump去除用??人?私信息
 * [UPCM] remove sensitive data.
 *
 * 10 12 2018 chin-wei.hsu
 * [MOLY00357502] [MDMI] Patch back "MDMI/ICD" from VZW.DCP.SQC.DEV to LR12A.R3.MP
 * 	
 * 	[UPCM] ICD.
 *
 * 02 22 2018 chin-wei.hsu
 * [MOLY00309246] 1237333：[IN-FT_DC066] [R2_EVT1] [L+L] [Free_Test] [Kochi] DUT takes approx. 30 sec time to register on IMS after Emergency call failed with JIO operator.
 * [R3] queue RS on IMS EBI.
 *
 * 02 21 2018 chin-wei.hsu
 * [MOLY00309009] [PVT must resolve] 微信??包慢?? for Gen93
 * [R3][UPCM-307] internal feature.
 *
 * 01 09 2018 chin-wei.hsu
 * [MOLY00299863] [PVT must resolve] 微信??包慢?? - keep alive
 * [R3][UPCM][RATDM] UPCM_FEATURE_301.
 *
 * 08 29 2017 chin-wei.hsu
 * [MOLY00274358] [6293] Adapt UPCM Throughput EM to 6293 DL architecture.
 * [TRUNK] DL throughput for EM.
 *
 * 08 23 2017 chin-wei.hsu
 * [MOLY00273240] [Gen93] New API to set forced SW path to all bearers at once
 * [TRUNK] forced sw path on/off all
 *
 * 08 09 2017 chin-wei.hsu
 * [MOLY00269663] [Gen 93][LR11.MP5 to UMOLYA code sync] UPCM provides IMS statistics for NWSEL
 * [TRUNK] UPCM add ims ebi tx/rx statistic query API.
 *
 * 07 06 2017 timothy.yao
 * [MOLY00261868] [6293]UL SIT new handling
 * new SIT handling (to TRUNK)
 * 	 - UPCM / RATDM.
 *
 * 04 07 2017 timothy.yao
 * [MOLY00240413] [BIANCO][MT6763][RDIT][PHONE][Overnight][HQ][MTBF][Lab][Ericsson][ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_mmu_drv.c line:1200
 * bugfix: IRAT HO data handling. (TRUNK only)
 * 	
 * 	- if RAT protocol not handled, target RAT can perform UL.
 * 	  --> UPCM trigger RATDM. (new)
 * 	
 * 	- if RAT protocol handled, source RAT shall perform rollback.
 * 	  --> then UPCM can trigger RATDM. (exist)
 *
 * 03 23 2017 chin-wei.hsu
 * [MOLY00237294] [MT6293][UPCM] Forced SW path
 * [trunk] Forced SW path for EBI/PDN.
 *
 * 03 22 2017 steve.kao
 * [MOLY00230062] [UMOLYA] M-PS related interface changes for UPCM, RATDM, and EPDCP
 * 	
 * 	[UMOLYA][TRUNK][UPCM][RATDM][M-PS] Add "protocol_idx" for upcm_get_pending_ul_data_status().
 *
 * 03 22 2017 steve.kao
 * [MOLY00230062] [UMOLYA] M-PS related interface changes for UPCM, RATDM, and EPDCP
 * 	
 * 	[UMOLYA][UMOLYA][UPCM][M-PS] Add "protocol_idx" into the interface of upcm_query_epsb_txrx_statistics().
 *
 * 02 16 2017 steve.kao
 * [MOLY00230062] [UMOLYA] M-PS related interface changes for UPCM, RATDM, and EPDCP
 * 	
 * 	[M-PS][UPCM] 
 * 	1. add protocol_idx into callback interfaces, 
 * 	2. one set of UPCM UL SIT per SIM.
 *
 * 10 07 2016 cammie.yang
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [TRUNK][UPCM] fix incorrect input type of upcm_reg_cbk_dlvr_dl_sdu
 *
 * 09 26 2016 cammie.yang
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [TRUNK] UPCM/RATDM/EPDCP feature integrations from PS.DEV
 *
 * 01 23 2014 clark.peng
 * [MOLY00047398] [MT6582LTE][WWFT][UK][Vodafone][EE] CSFB performance anlysis [only for UKFT]
 * Implementation of upcm_get_pending_ul_data_status() based on timestamp difference (3sec)
 *
 * 07 17 2013 moja.hsu
 * [MOLY00030111] Add UPCM Tx/Rx statistics query API
 * .
 *
 * 05 16 2013 moja.hsu
 * [MOLY00007625] Maintain code
 * Back out changelist 156018
 * patch for QMU_BM/UPCM/RATADP/TFT_PF trace
 *
 * 05 15 2013 moja.hsu
 * [MOLY00007625] Maintain code
 * add tft_pf/qmu_bm/upcm/ratadp trace
 *
 * 01 14 2013 moja.hsu
 * [MOLY00007625] Maintain code
 * add upcm_rcv_ul_by_ebi and add EBI for DL Deliver for IMS requirement.
 ****************************************************************************/
/*
 * =====================================================================================
 *
 *       Filename:  upcm.h
 *
 *    Description:  UPCM (User plane connection manager exported header file)
 *
 *        Created: 2012/3/19 嚙磕嚙踝蕭 11:20:22
 *
 *        Author:  mtk01641 (moja)
 * =====================================================================================
 */
#ifndef  UPCM_INC
#define  UPCM_INC

#include "kal_public_api.h"
#include "qmu_bm.h"
#include "upcm_enum.h"
#include "upcm_did.h"
#include "lhif_if.h"

//#include "upcm_ul_sit.h"

/******************************
  *          feature control                       *
  *****************************/
#define UPCM_FEATURE_301 1
#if UPCM_FEATURE_301
#define NO_INTERNET_ILM_FOR_EMAC 1
#endif

#define UPCM_FEATURE_FAKE_A2 1
#define UPCM_FEATURE_ICD 1
#define UPCM_PAGING_EARLY_RELEASE 1

#if defined(__MTK_INTERNAL_ENG_USER__) ||  defined(__GAME_LATENCY_OPT_2ND_ARROW__)
#define UPCM_FEATURE_VIP 1 // very important packet should be put in pri-SIT
#else
#define UPCM_FEATURE_VIP 0
#endif

#if defined(__MTK_INTERNAL_ENG_USER__) ||  defined(__GAME_LATENCY_OPT_3RD_ARROW__)
#define UPCM_FEATURE_VIP_NOTIFY_EL2 1 // notify EL2 that VIP is received by UPCM
#else
#define UPCM_FEATURE_VIP_NOTIFY_EL2 0	
#endif

/*
 * lte tick source notify callback prototype.
 * is_lte_tick: KAL_TRUE - has LTE tick.
 *              KAL_FLAE - may no LTE tick.
 */
typedef void (*upcm_nofify_lte_tick_f)(kal_bool is_lte_tick);
typedef void (*upcm_dlvr_dl_sdu_93_f)(kal_uint32 pdn_id, upcm_did* p_head, upcm_did* p_tail, kal_uint8 protocol_idx);

/**
 * @brief upcm_init Init UPCM module.
 *
 * @return TRUE  
 */
kal_bool upcm_init(void);

/**
 * @brief upcm_reset 
 * Reset UPCM module.
 *
 * @return TRUE  
 *
 * @return 
 */
kal_bool upcm_reset(void);

/**
 * @brief upcm_on_ilm 
 * Receive ILM message
 *
 * @param ilm
 */
void upcm_on_ilm(ilm_struct *p_ilm);


/**
 * @brief upcm_rcv_ul_sdu 
 * Receive UL SDUs. UL SDU are GPD list.
 *
 * @param ip_type the UL SDU IP type. may help UPCM go quick path if the IP type is known.
 * @param pdn_id PDN Connection ID
 * @param p_head SDU list head. (GPD based)
 * @param p_tail SDU list tail. (GPD based)
 *
 * for 93:
 *  - GPD-based, for LTE-CSR (ex: GPD).
 *  - PIT-based, for VRB.
 */
void upcm_rcv_ul_sdu_93_gpd(ip_type_e ip_type, kal_uint32 pdn_id, qbm_gpd* p_head, qbm_gpd* p_tail, kal_uint8 protocol_idx);
void upcm_rcv_ul_sdu_93(kal_uint16 pit_start, kal_uint16 pit_end, LHIF_QUEUE_TYPE queue_type);

/**
Ensure set/clear should be paired
is_forced_sw_path will +1 or -1 count but is_forced_sw_path can not directly change path
UPCM will use count to determine SW-path or not
if count=0, direct path
if count!=0, inderect(sw) path
ebi/pdn: 
is_forced_sw_path: TRUE(set forced SW path)/FALSE(clear forced SW path)
protocol_id: 
**/
void upcm_forced_sw_path_by_ebi(kal_uint32 ebi, kal_bool is_forced_sw_path, kal_uint8 protocol_idx);
void upcm_forced_sw_path_by_pdn(kal_uint32 pdn, kal_bool is_forced_sw_path, kal_uint8 protocol_idx);
void upcm_forced_sw_path_all(kal_bool is_forced_sw_path);


/**
 * @brief upcm_rcv_ul_sdu_by_ebi 
 * Receive UL SDUs on specified EBI. The Function will bypass TFT Process.
 * But for inter-rat case, the data will enter suspend queue, so TFT Process will be applied.
 * It can't be called on test loopback mode.
 *
 * @param ebi
 * @param p_head
 * @param p_tail
 */
void upcm_rcv_ul_sdu_by_ebi_93_gpd(kal_uint32 ebi, qbm_gpd* p_head, qbm_gpd* p_tail, kal_uint8 protocol_idx);
void upcm_rcv_ul_sdu_by_ebi_93(kal_uint32 ebi, void *p_data, kal_uint32 len, kal_uint8 protocol_idx);


/**
 * @brief upcm_reg_cbk_notify_lte_tick
 * Register callback function.
 * For get if there is a LTE tick source.
 *
 * @param pf_notify callback function.
 */
void upcm_reg_cbk_notify_lte_tick(upcm_nofify_lte_tick_f pf_notify);

/**
 * @brief upcm_reg_cbk_dlvr_dl_sdu 
 * Register callback for deliver DL SDUs.
 *
 * @param pf_dlvr_sdu
 */
void upcm_reg_cbk_dlvr_dl_sdu(upcm_dlvr_dl_sdu_93_f pf_dlvr_sdu);

#if defined(__SENSITIVE_DATA_MOSAIC__)
/**
 * @brief upcm_module_clean
 * clean sensitive context 
 *
 * @param 
 */
void upcm_module_clean();
#endif

typedef struct
{
    /* tx/rx bytes */
    kal_uint64 tx_bytes;
    kal_uint64 rx_bytes;
} single_epsb_txrx_info_struct;

typedef struct
{
    single_epsb_txrx_info_struct txrx_info[MAX_EPSB_NUM];
} upcm_query_epsb_statistics_struct;

/**
 * @brief upcm_query_epsb_txrx_statistics 
 * Query UPCM tx/rx statistics.
 * If the connection is deactivated, it will give the last value of previous activate.
 *
 * @param query_result
 */
void upcm_query_epsb_txrx_statistics(upcm_query_epsb_statistics_struct *query_result, kal_uint8 protocol_idx);

/**
 * @brief upcm_query_epsb_ims_ebi_tx_rx_statistics 
 * Query tx/rx statistics of the IMS ebi.
 * If the connection is deactivated, it will give the last value of previous activate.
 *
 * @param query_result
 */
#ifdef __MULTIPLE_PS__
kal_uint64 upcm_query_epsb_ims_ebi_tx_rx_statistics(kal_uint8 sim_idx);
#else
kal_uint64 upcm_query_epsb_ims_ebi_tx_rx_statistics(void);
#endif




/**
 * @brief upcm_get_pending_ul_data_status 
 * Predict pending UL data of each NSAPI/EBI by checking if there is UL data
 * within past UPCM_UL_DATA_INTERVAL_TO_TRIGGER_SR.
 * 
 * @return 16-bit bitmap for each NSAPI/EBI.
 *  If it predicts this NSAPI/EBI has UL data, the corresponding bit is set to 1.
 *  Otherwise, the corresponding bit is set to 0.
 *  For example, if there is pending UL data for NSAPI/EBI 5~15, 
 *  then the return value will be 0xFFE0.
 */
kal_uint16 upcm_get_pending_ul_data_status(kal_uint8 protocol_idx);

#if UPCM_FEATURE_FAKE_A2
/**
 * @brief upcm_predict_internet_data_on_going 
 * predict potential internet data is ongoing
 * If query main-ps and internet PDN has data in previous time, return TRUE.
 * If query non-main-ps, return FALSE.
 *
 * @param protocol_idx
 *
 * @return bool
 *    KAL_TURE: the possibility of ongoing interent data is high
 *    KAL_FALSE: the possiblilty of ongoing internet data is low
 */
kal_bool upcm_predict_internet_data_is_ongoing(kal_uint8 protocol_idx);
#endif

/**
 * @brief upcm_latest_time_of_[UL/DL]_[internet/ims]_data 
 * provide the latest UL/DL data arrival time of Internet/IMS data
 * These APIs are needed by control plane modules, e.g. RRC, MSPM, EMM, and SBP.
 *  RRC: to decide whether to trigger fake A2 to release RRC Connection.
 *  EMM: to enhance V-Con in the scenario of Paging+TAU (V-Con feature)
 *  MSPM: to decide leave V-Con to Con or Idle (V-Con feature)
 *  SBP: to help decide whether turn off screen (data dormant feature)
 *
 * @param protocol_idx
 *
 * @return kal_uint32
 *    the latest UL/DL data arrival time of Internet/IMS data in millisecond
 */
kal_uint32 upcm_latest_time_of_internet_data(kal_uint8 protocol_idx);
kal_uint32 upcm_latest_time_of_UL_internet_data(kal_uint8 protocol_idx);
kal_uint32 upcm_latest_time_of_DL_internet_data(kal_uint8 protocol_idx);
kal_uint32 upcm_latest_time_of_UL_ims_data(kal_uint8 protocol_idx);
kal_uint32 upcm_latest_time_of_DL_ims_data(kal_uint8 protocol_idx);

/**
 * @brief upcm_is_ul_[internet/ims]_data_ongoing 
 * UL data is ongoing or not
 * Checks whether SDU Information Table (SIT) is empty or not. 
 * UL packet in SIT would be cleared when sent to NW successfully.
 *
 * @param protocol_idx
 *
 * @return bool
 *    KAL_TURE: SIT is not empty, i.e. some packets are being sent.
 *    KAL_FALSE: SIT is empty, i.e. no packets are being sent.
 */
kal_bool upcm_is_ul_internet_data_ongoing(kal_uint8 protocol_idx);
kal_bool upcm_is_ul_ims_data_ongoing(kal_uint8 protocol_idx);

/**
 * @brief UPCM_HAS_[DL/UL]_[INTERNET/IMS]_Data_IN_MS
 * Check whether there's data in given milliseconds.
 * For UL, duration can be >= 0.
 * For DL, duration should be > 0.
 *
 * @param protocol_idx, duration_ms
 *
 * @return bool
 *  For UL 
 *    if duration_ms == 0
 *      KAL_TURE: there are data in Internet/IMS SIT, i.e. some packets are not sent to NW or Acked yet.
 *      KAL_FALSE: there's no data in Internet/IMS SIT.
 *    if duration_ms > 0
 *      KAL_TURE: there are data in given milliseconds.
 *      KAL_FALSE: there's no data in given milliseconds.
 *  For DL 
 *    if duration_ms == 0 (invalid parameter)
 *      KAL_TURE: -
 *      KAL_FALSE: always false.
 *    if duration_ms > 0
 *      KAL_TURE: there are data in given milliseconds.
 *      KAL_FALSE: there's no data in given milliseconds.
 */
#define UPCM_HAS_DL_INTERNET_DATA_IN_MS(_protocol_idx, _dl_duration_ms) (upcm_latest_time_of_DL_internet_data(_protocol_idx)<(_dl_duration_ms)) 
#define UPCM_HAS_DL_IMS_DATA_IN_MS(_protocol_idx, _dl_duration_ms) (upcm_latest_time_of_DL_ims_data(_protocol_idx)<(_dl_duration_ms)) 
#define UPCM_HAS_UL_INTERNET_DATA_IN_MS(_protocol_idx, _ul_duration_ms) \
        ((_ul_duration_ms==0)? upcm_is_ul_internet_data_ongoing(_protocol_idx) : upcm_latest_time_of_UL_internet_data(_protocol_idx)<(_ul_duration_ms))
#define UPCM_HAS_UL_IMS_DATA_IN_MS(_protocol_idx, _ul_duration_ms) \
        ((_ul_duration_ms==0)? upcm_is_ul_ims_data_ongoing(_protocol_idx) : upcm_latest_time_of_UL_ims_data(_protocol_idx)<(_ul_duration_ms))
#define UPCM_HAS_DL_UL_INTERNET_DATA_IN_MS(_protocol_idx, _dl_duration_ms, _ul_duration_ms) \
        (UPCM_HAS_DL_INTERNET_DATA_IN_MS(_protocol_idx, _dl_duration_ms) || \
         UPCM_HAS_UL_INTERNET_DATA_IN_MS(_protocol_idx, _ul_duration_ms))
#define UPCM_HAS_DL_UL_IMS_DATA_IN_MS(_protocol_idx, _dl_duration_ms, _ul_duration_ms) \
        (UPCM_HAS_DL_IMS_DATA_IN_MS(_protocol_idx, _dl_duration_ms) || \
         UPCM_HAS_UL_IMS_DATA_IN_MS(_protocol_idx, _ul_duration_ms))
#define UPCM_HAS_DL_UL_DATA_IN_MS(_protocol_idx, _dl_duration_ms, _ul_duration_ms) \
        (UPCM_HAS_DL_UL_INTERNET_DATA_IN_MS(_protocol_idx, _dl_duration_ms, _ul_duration_ms) || \
         UPCM_HAS_DL_UL_IMS_DATA_IN_MS(_protocol_idx, _dl_duration_ms, _ul_duration_ms))

#if UPCM_FEATURE_301
typedef enum
{
    UPCM_KEEP_CONNECTED_DISABLE    = 0x0,
    UPCM_KEEP_CONNECTED_EL2_ONLY   = 0x1,
    UPCM_KEEP_CONNECTED_RATDM_ONLY = 0x2,
    UPCM_KEEP_CONNECTED_UPCM_ONLY  = 0x4,
    UPCM_KEEP_CONNECTED_UPCM_RATDM = (UPCM_KEEP_CONNECTED_UPCM_ONLY | UPCM_KEEP_CONNECTED_RATDM_ONLY),
    UPCM_KEEP_CONNECTED_EL2_RATDM  = (UPCM_KEEP_CONNECTED_EL2_ONLY | UPCM_KEEP_CONNECTED_RATDM_ONLY)
} upcm_keep_connected_mode_e;

kal_bool is_keep_connected_data_working();
#if NO_INTERNET_ILM_FOR_EMAC
void upcm_send_internet_disconnect_notify();
#endif
#endif


#define GET_SIT_TABLE_INFO_PRI(_info) \
    (((_info)>>31) & 0x1)
#define GET_SIT_TABLE_INFO_IDX(_info) \
    ((_info) & 0x7FFFFFFF)

#define GET_FREE_ENTRY_INFO_START(_info) \
    (((_info)>>16) & 0xFFFF)
#define GET_FREE_ENTRY_INFO_END(_info) \
    ((_info) & 0xFFFF)

void upcm_free_sit_entry_wi_free_buf(kal_uint32 sit_table_info, kal_uint32 free_entry_info, 
                              kal_uint32 task_id, kal_uint8 protocol_idx);

void upcm_free_sit_entry_wo_free_buf(kal_uint32 sit_table_info, kal_uint32 free_entry_info, 
                              kal_uint32 task_id, kal_uint8 protocol_idx);

void upcm_add_rx_statistics(kal_uint32 ebi, kal_uint32 bytes, kal_uint8 protocol_idx);

qbm_gpd* upcm_copy_pkt_to_gpd(kal_uint16 len, kal_uint32 addr);

void upcm_send_ims_sdu_drop_ind_to_imc(kal_uint32 drop_type, kal_uint8 protocol_idx);

/**
 * @brief upcm_is_active_protocol 
 *  
 * 
 * @return TRUE/FALSE
 *  TRUE: at lease one EPSB act
 *  FALSE: otherwise 
 */
kal_bool upcm_is_active_protocol(kal_uint8 protocol_idx);
#endif   /* ----- #ifndef UPCM_INC  ----- */

