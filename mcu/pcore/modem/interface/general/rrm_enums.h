/*****************************************************************************
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
*****************************************************************************/

/******************************************************************************
 * Filename:
 * ---------
 *      rrm_enums.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *
 * Author:
 * -------
 * -------
 *
 *=============================================================================
 *                              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *=============================================================================
 ******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#ifndef _RRM_ENUMS_H
#define _RRM_ENUMS_H

/* new add RMC_TIMER enum */
typedef enum
{
    RMC_T3162_TIMER_EXPIRY = 0,
    RMC_T3178_TIMER_EXPIRY,
    RMC_T3186_TIMER_EXPIRY,
    RMC_T3170_TIMER_EXPIRY,
    RMC_T3172_TIMER_EXPIRY,
    RMC_T3174_TIMER_EXPIRY,
    RMC_T3176_TIMER_EXPIRY,
    RMC_SERV_CELL_SI_TIMER_EXPIRY,
    RMC_PSI_SI_TIMER_EXPIRY,
    /* Austin 040402: attempt to receive all PSI before packet access */
    RMC_PSI_READING_TIMER_EXPIRY,   
    RMC_RESEL_PROCESS_TIMER_EXPIRY,
    
    /* Adeline 2008.11.12 */
#ifndef __GERAN_R5__        
    RMC_ABNOR_RESEL_PROCESS_TIMER_EXPIRY,
#endif /* __GERAN_R5__ */
    RMC_OLD_CELL_TIMER_EXPIRY,
    RMC_MAC_TIMER_EXPIRY,
    RMC_PENALTY_BASE_TIMER_EXPIRY,
    RMC_LAST_RESEL_TIMER_EXPIRY,
    RMC_NON_DRX_TIMER_EXPIRY,
    RMC_NC_NON_DRX_TIMER_EXPIRY,
    RMC_MM_NON_DRX_TIMER_EXPIRY,
    RMC_T3200_TIMER_EXPIRY,
    RMC_EMO_TIMER_EXPIRY,
    RMC_T3142_TIMER_EXPIRY,
    RMC_T3146_TIMER_EXPIRY,
    RMC_TMA_TIMER_EXPIRY,

#if defined(__UMTS_RAT__) || defined(__LTE_RAT__)
    RMC_CCO_TIMER_EXPIRY,
    RMC_WAITTIME_TIMER_EXPIRY,
    RMC_STANDBY_GSM_EVAL_TIMER_EXPIRY,
#endif /* defined(__UMTS_RAT__) || defined(__LTE_RAT__) */
#ifdef __UMTS_RAT__
    RMC_ACTIVATIOM_TIME_TIMER_EXPIRY,
#if defined(__WCDMA_PREFERRED__) || defined(__PREFER_HIGH_PRIO_3G_IN_23G_MODE__)
    RMC_WAITTIME_TIMER2_EXPIRY,
#endif /* __WCDMA_PREFERRED__ || __PREFER_HIGH_PRIO_3G_IN_23G_MODE__ */
#endif /* __UMTS_RAT__ */
#if defined(__LTE_RAT__) || defined(__23G_PRI_RESEL_SUPPORT__)
    RMC_T3230_TIMER_EXPIRY,
#endif /* defined(__LTE_RAT__) || defined(__23G_PRI_RESEL_SUPPORT__) */    

#ifdef __3G_CSG_SUPPORT__
    RRM_UMTS_CSG_AUTO_SEARCH_TIMER_EXPIRY,
    RRM_UMTS_CSG_CELL_EVALUATION_TIMER_EXPIRY,
#endif /* __3G_CSG_SUPPORT__ */

#ifdef __LTE_RAT__
    RRM_LTE_CSG_AUTO_SEARCH_TIMER_EXPIRY,
    RRM_LTE_CSG_CELL_EVALUATION_TIMER_EXPIRY,
#endif /* __LTE_RAT__ */

    /* __AUTH_FAIL_BAR_CELL__ */
    RRM_BAR_CELL_TIMER_ID,

    /* REDIRECTION */
#if defined(__GERAN_R6__) || defined (__FDD_REDIRECTION__)
    RCS_REDIRECTION_LIST_SEARCH_TIMER_ID,
#endif /* defined(__GERAN_R6__) || defined (__FDD_REDIRECTION__) */ 
    RCS_FULL_BAND_SEARCH_SEGMENTATION_TIMER_ID,
#ifdef __GERAN_R6__
    RMC_SI2N_TIMER_EXPIRY,
#endif /* __GERAN_R6__ */ 

    /* FAST RECOVERY */
    RRM_FAST_RECOVERY_TIMER_ID,

    /* ================ RMC-CSRR Part =============== */
    RMC_T3122_TIMER_EXPIRY, 
    RMC_T3126_TIMER_EXPIRY, 
    RMC_REEST_TIMER_EXPIRY, 

#ifdef __AGPS_CONTROL_PLANE__
    RMC_APDU_CHECK_TIMER_EXPIRY,
#endif /* __AGPS_CONTROL_PLANE__ */

#ifdef __ETWS_SUPPORT__
    RMC_T3232_TIMER_EXPIRY,
#endif /* __ETWS_SUPPORT__ */

    /* William :20070619 : Add timer for NACC */
#ifdef __GERAN_R4__
    RMC_T3206_EXPIRY,
    RMC_T3208_EXPIRY,
    RMC_T3210_EXPIRY,
    RMC_PSS_TIMER_EXPIRY,
    RMC_PNCD0_TIMER_EXPIRY,
    RMC_PNCD1_TIMER_EXPIRY,
    RMC_PNCD2_TIMER_EXPIRY,
    RMC_PNCD3_TIMER_EXPIRY,
    // Chris, nacc_coding
    RMC_PPS_TIMER_EXPIRY,
#endif /* __GERAN_R4__ */ 

#if defined(__LTE_RAT__) || defined(__UMTS_RAT__)
    /* Event scheduler timer ID for IR barred info. */
    RMC_IR_BARRED_BASE_TIMER_ID,
#endif /* defined(__LTE_RAT__) || defined(__UMTS_RAT__) */

#ifdef __LTE_RAT__
/* __4G_BACKGROUND_SEARCH__ begin */
    RMC_BG_SEARCH_RESEL_TIMER_EXPIRY,
    RMC_BG_SEARCH_AVOID_IR_MEAS_TIMER_EXPIRY,
/* __4G_BACKGROUND_SEARCH__ end */
#endif /* __LTE_RAT__ */

#ifdef __LTE_RAT__
    RMC_T325_TIMER_EXPIRY,
#endif /* __LTE_RAT__ */

#if defined(__UMTS_RAT__) || defined(__LTE_RAT__)
	RMC_RAU_PROTECT_TIMER_EXPIRY,
	RMC_ATP_GUARD_TIMER_EXPIRY,
#endif

#ifdef __LTE_RAT__
		RMC_DELAY_HPS_TIMER_EXPIRY, 
#endif

#ifdef __CMCC_23G_PINGPONG_RESTRAIN__
    RMC_2G3CR_PING_PONG_TIMER_EXPIRY,
    RMC_VIRTUAL_PING_PONG_TIMER_EXPIRY,
#endif

/* should add new timer before TDD only timer below */
#ifdef __2G_PS_REJ_BAR_CELL__
	RMC_PS_BAR_TIMER_EXPIRY,
#endif
#ifdef __2G_CS_REJ_BAR_CELL__
		RMC_CS_BAR_TIMER_EXPIRY,
#endif

#if defined(__TC01__) && defined(__MODEM_EM_MODE__)
    RRM_EM_GAS_SEARCH_INFO_TIMER_ID,
#endif /*__TC01__ && __MODEM_EM_MODE__*/

    RRM_FAKE_CELL_AUTO_REPORT_TIMER_EXPIRY,
    
    RMC_PAGING_RETRY_TIMER_EXPIRY,
    
    #ifdef __MTK_TARGET__
    RRM_EFUSE_TIMER_ID,
	#endif /* __MTK_TARGET__ */
    /* Should add new timer before RRM_BASE_TIMER_ID */
    /* total number of TIMER */
    RRM_BASE_TIMER_ID  
} rmpc_timer_id_enum;

typedef enum {
    UMTS_TECH_FDD = 0,
    UMTS_TECH_TDD = 1
} umts_tech_enum;

/* the camped on cell type */
typedef enum
{
    RRM_SUITABLE_CELL = 0,
    RRM_ACCEPTABLE_CELL = 1,
    RRM_NO_CELL = 2
} rrm_cell_type_enum;

/* rrm_la_type_enum should match forbidden_la_type_enum */
typedef enum
{
    RRM_FORBID_LA_FOR_REG_PROV_OF_SERV = 0,
    RRM_FORBID_LA_FOR_ROAMING = 1,
    RRM_UNKNOWN_LA = 2,
    RRM_ALLOWED_LA = 3
/* __ARA_FOR_CELL_SELECTION__ begin */
    ,RRM_FORBID_LA_FOR_NOT_ARA = 4           
/* __ARA_FOR_CELL_SELECTION__ end */ 
} rrm_la_type_enum;

typedef enum
{
    PLMN_LEVEL = 0,
    LA_LEVEL = 1,
    CELL_LEVEL = 2
} rrm_match_cell_level_enum;


typedef enum
{
    RRM_NO_PENDING_ACTION = 0,
    RRM_RATCM_RF_ON_ACTION = 1,
    RRM_RATCM_RF_OFF_ACTION = 2,
    RRM_RATCM_DEACTIVATE_ACTION = 3,
    RRM_RATCM_PLMN_SEARCH_ACTION = 4,
    RRM_RATCM_PLMN_LIST_ACTION = 5,
    RRM_RATCM_PLMN_LIST_STOP_ACTION = 6,
    RRM_RATCM_PLMN_LIST_AFTER_SEARCH_ACTION = 7,
    RRM_RATCM_PLMN_LIST_STOP_AFTER_SEARCH_ACTION = 8,
    RRM_RATCM_REL_SEMA_BEFORE_DEACTIVATE_ACTION = 9,  /* __GEMINI__ */
    RRM_RSVA_FREQ_SCAN_PREEMPT_ACTION = 10,           /* for RSVA */
    RRM_RSVA_PREEMPT_SERVICE_ACTION = 11,           /* for RSVA */    
    RRM_RCS_REDIRECTION_LIST_TIMEOUT = 12,             /* R5R6 */
    RRM_RCS_SUSPEND_FULL_BAND_PLMN_SEARCH = 13,        /* __FAST_ROAMING_SEARCH__ */
    RRM_RATCM_PLMNLIST_ABORT_ACTION = 14,              /* __VSIM_PLMN_LIST__ : report currently recorded PLMNs*/
} rrm_pending_action_enum;

typedef enum
{
    RRM_WAIT_FOR_SIM_POWER_ON_READY = 0,
    RRM_SIM_IS_READY = 1,
    RRM_WAIT_FOR_SIM_READY_IND = 2,
    RRM_PENDING_SIM_READY_IND = 3
} rrm_sim_ready_status_enum;

/* ZY: purpose for composing ucell list  */
typedef enum
{
    IR_LIST_NBR_CELL_LIST, 
    IR_LIST_NBR_CELL_LIST_PLUS_RESEL_LIST_EXCLUDE_2TER_FOR_IR_MEAS,
    IR_LIST_NBR_CELL_LIST_PLUS_RESEL_LIST_INCLUDE_2TER_FOR_IR_MEAS,
    IR_LIST_NBR_CELL_LIST_PLUS_RESEL_LIST_INCLUDE_2TER_FOR_UPDATE_SCSI,
    IR_LIST_REDIRECTION_LIST  /* ZY : R6 redirection */
} compose_ucell_list_purpose_enum;

#ifdef __BAND_BLOCK__
/* For LG band block feature */

typedef enum
{
    BLOCK_GSM_BAND_850 = 0,
    BLOCK_GSM_BAND_900 = 1,
    BLOCK_GSM_BAND_1800 = 2,
    BLOCK_GSM_BAND_1900 = 3
} blocked_band_enum;

typedef enum
{
    RRM_BARRED_CELL_FOR_BAND_BLOCK,
    RRM_ACCEPTABLE_CELL_FOR_BAND_BLOCK,
    RRM_SUITABLE_CELL_FOR_BAND_BLOCK
} rrm_cell_type_for_band_block_enum;

typedef enum 
{
    RRM_BAND_BLOCK_INVALID = 0,
    RRM_BAND_BLOCK_SPECIFIC_MNC = 1,
    RRM_BAND_BLOCK_ALL_MNC_IN_SPECIFIC_MCC = 2,
    RRM_BAND_BLOCK_ALL_MCC = 3
} rrm_band_block_type_enum;

#endif /* __BAND_BLOCK__ */ 

typedef enum
{
    BG_PLMN_LIST_NULL_STATE = 0,
    BG_PLMN_LIST_POWER_SCAN_STATE = 1,
    BG_PLMN_LIST_BEGIN_SEARCH_STATE = 2,
    BG_PLMN_LIST_NBR_BURST_ACCESS_STATE = 3,
    BG_PLMN_LIST_SYNC_FIRST_CELL_BSIC_STATE = 4,
    BG_PLMN_LIST_BURST_ACCESS_STATE = 5,
    BG_PLMN_LIST_REACH_LAST_ARFCN_STATE = 6,
    BG_PLMN_LIST_SUSPEND_STATE = 7,
    BG_PLMN_LIST_PENDING_TO_WAIT_MSG_STATE = 8  /* for RSVA */
} rcs_bg_plmn_list_state_enum;

typedef enum
{
    RCS_UNKNOWN_FREQ = 0,
    RCS_JUST_GET_BSIC = 1,
    RCS_WAIT_SI3 = 2,
    RCS_INVALID_CELL = 3,
    RCS_BARRED_CELL = 4,
    RCS_LOW_PRIO_CELL = 5,
    RCS_NORM_PRIO_CELL = 6,
    RCS_EXCEED_BAND_LIMIT_CELL = 7
} rcs_arfcn_type_enum;

typedef enum
{
    RCS_UNKNOWN = 0,
    RCS_LOW_QUALITY = 1,
    RCS_HIGH_QUALITY = 2
} rcs_plmn_quality_enum;

typedef enum
{
    RCS_NO_POWER_SCAN = 0,
    RCS_STORED_LIST_POWER_SCAN = 1,
    RCS_FULL_BAND_POWER_SCAN = 2,
    RCS_WORKING_BAND_POWER_SCAN = 3,
    RCS_BG_FULL_BAND_POWER_SCAN = 4,
    RCS_CGI_REPORTING_POWER_SCAN = 5
} rcs_power_scan_mode_enum;

typedef enum
{
    RCS_MODE_NULL = 0,
    RCS_MODE_I_SEQ_ACCESS_MODE = 1,
    RCS_MODE_II_BURST_ACCESS_MODE = 2,
    RCS_MODE_III_BG_BURST_ACCESS_MODE = 3,
    RCS_MODE_IV_BG_NBR_BURST_ACCESS_MODE = 4,
    RCS_MODE_V_CAMP_ORIG_CELL_MODE       = 5  /* __FAST_RESUME__ */
} rcs_cell_sel_mode_enum;

typedef enum
{
    ANY_PRIORITY_CELL = 0,
    HIGH_PRIORITY_CELL = 1,
    LOW_PRIORITY_CELL = 2
} rcs_cell_priority_enum;

typedef enum
{
    /* the PLMN index less than RCS_MAX_PLMN_INDEX is a valid value */
    RCS_MAX_PLMN_INDEX = MAX_NUM_PLMN_PER_RAT,
    RCS_INVALID_PLMN_INDEX = 0xfe,
    RCS_PLMN_UNKNOWN_INDEX = 0xff
} rcs_plmn_index_enum;

typedef enum
{
    RCS_TRIG_NULL = 0,
    RCS_TRIG_BY_RATCM_PLMN_SEARCH = 1,
    RCS_TRIG_BY_RATCM_PLMN_LIST = 2, /* Refer to PLMN list trig source */
    /* cell reselection failure triggers cell selection */
    RCS_TRIG_BY_CELL_RESEL_FAIL = 3,
    RCS_TRIG_BY_PLMN_LIST_AND_CELL_RESEL_FAIL = 4,
    /* redirection: 3G->2G, or 4G->2G, ..., etc. */
    RCS_TRIG_BY_IR_REDIRECTION = 5,
    RCS_TRIG_BY_PLMN_LIST_AND_IR_REDIRECTION = 6,
    /* redirection 2G->2G */
    RCS_TRIG_BY_2G_REDIRECTION = 7,
    RCS_TRIG_BY_PLMN_LIST_AND_2G_REDIRECTION = 8,
    /* fast recovery */
    RCS_TRIG_BY_FAST_RECOVERY_TIMER_EXPIRED = 9
} rcs_trig_source_enum;

typedef enum
{
    RCS_PLMN_LIST_TRIG_NULL = 0x00,
    RCS_PLMN_LIST_TRIG_BY_NAS = 0x01, /* User PLMN list or MM list*/
    RCS_PLMN_LIST_TRIG_BY_AS = 0x02, /* CSG fingerprint collection */
    RCS_PLMN_LIST_TRIG_BY_NAS_AND_AS = 0x03
} rcs_plmn_list_trig_source_enum;

#ifdef __GEMINI__
typedef enum
{
    /* after resuming, RRM(RCS) should ... */
    RCS_QUEUE_NULL_EVENT = 0,           /* do nothing */
    RCS_QUEUE_PLMN_SEARCH_EVENT = 1,    /* do PLMN search in cell selection state */
    RCS_QUEUE_FG_PLMN_LIST_EVENT = 2,   /* do PLMN list in cell seleciton state */
    RCS_QUEUE_BG_PLMN_LIST_EVENT = 3    /* do PLMN list in inactive state */
} rcs_queued_plmn_event_enum;

/* __GEMINI_IMPROVE__ */
typedef enum
{
    RCS_SHARE_NO_SHARING = 0x0000,
    RCS_SHARE_USING_PEER_SIM1_RESULT = 0x0001,  /* the bit map of sharing SIM1 result, i.e., 0x 0000 0000 0000 0001 */
    RCS_SHARE_USING_PEER_SIM2_RESULT = 0x0002,  /* the bit map of sharing SIM2 result, i.e., 0x 0000 0000 0000 0010 */
    RCS_SHARE_USING_PEER_SIM3_RESULT = 0x0004,  /* the bit map of sharing SIM3 result, i.e., 0x 0000 0000 0000 0100 */
    RCS_SHARE_USING_PEER_SIM4_RESULT = 0x0008,  /* the bit map of sharing SIM4 result, i.e., 0x 0000 0000 0000 1000 */    
    RCS_SHARE_WILL_SHARE_TO_PEER = 0x8000       /* the bit map for sharing to peer, i.e., 0x 1000 0000 0000 0000 */
} rcs_share_scan_status_enum;

#ifdef __UMTS_RAT__
typedef enum
{
    RCS_CELL_SRCH_NULL = 0,         /* there is no RCS procedure shall process */
    RCS_CELL_SRCH_REQUESTING = 1,   /* some RCS procedure shall process, asking RSVA for reserv resource */
    RCS_CELL_SRCH_WAITING = 2,      /* the RCS procedure can't process, it must wait the L1 resource */
    RCS_CELL_SRCH_RUNNING = 3,      /* the RCS procedure is processing */
    RCS_CELL_SRCH_STOPPING = 4      /* the RCS procedure is stopping for release the L1 resource */
} rcs_rsva_cell_srch_status_enum;
#endif /* __UMTS_RAT__ */ 

#endif /* __GEMINI__ */ 

typedef enum
{
    RCS_WAIT_NULL = 0,
    RCS_WAIT_SET_RAT_SERVICE_CNF = 1,   /* for DEACTIVATE_REQ and PLMN_List_stop action !!! */
    RCS_WAIT_CELL_SELECTION_INIT_CNF = 2,
    RCS_WAIT_SEARCH_RF_CNF = 3,         /* pending to wait SEARCH_RF_CNF */
    RCS_WAIT_BSIC_SYNC_CNF = 4,         /* pending to wait BSIC_SYNC_CNF */

/* for RSVA */
    RCS_WAIT_FS_START_CNF = 5,          /* pending to wait FREQ_SCAN_START_CNF */
    RCS_WAIT_FS_ACCEPT_IND = 6,         /* pending to wait FREQ_SCAN_ACCEPT_IND */
    
    RCS_WAIT_OTHERS = 7                 /* reserve for feature use */
} rcs_wait_cnf_type_enum;

typedef enum
{
    RCS_PLMN_LIST_NONE      = 0,
    RCS_PLMN_LIST_STORED    = 1,
    RCS_PLMN_LIST_NORMAL    = 2
} rcs_list_type_enum;

typedef enum
{
    RCS_FULL_BAND_SCAN_INVALID,
    RCS_FULL_BAND_SCAN_IN_PROGRESS,
    RCS_FULL_BAND_SCAN_SUSPENDED,
    RCS_FULL_BAND_SCAN_FINISHED,
} rcs_full_band_scan_status_enum;

typedef enum
{
    APP_UPLINK_SENDING_NOT_ALLOWED = 0, /* initial value or RR connection is released */
    APP_UPLINK_SENDING_ALLOWED = 1,     /* when receiving first DL app data */
    APP_UPLINK_SENDING_SUSPEND = 2      /* when receiving RR manage. mesg */
} app_uplink_sending_status_enum;

typedef enum
{
    GSM_MODE,
    GPRS_CCCH_MODE,
    GPRS_PMO_CCCH_MODE,
    GPRS_PCCCH_MODE
} meas_mode_enum;

typedef enum
{
    GPRS_NC_MEAS,
#ifdef __R99__
    GPRS_EXT_MEAS,
    GPRS_ENH_MEAS
#else /* __R99__ */ 
    GPRS_EXT_MEAS
#endif /* __R99__ */ 
} meas_type_enum;

typedef enum
{
    ENH_MR,
    NORMAL_MR
} meas_rp_enum;

#define _ENH_PARAMS_SRC_ENUM
typedef enum
{
    SRC_INVALID,
    SRC_SI,
    SRC_MI,
    SRC_PSI,
    SRC_PMO,
    SRC_DEFAULT
} enh_params_src_enum;

typedef enum
{
    LAYER_DEFAULT,
    LAYER_BROADCAST,
    LAYER_INDIVIDUAL
} meas_params_layer_enum;

typedef enum
{
    CS_CONTEXT = 0,
    PS_CONTEXT,
    CS_AND_PS_CONTEXT
} DES_CONTEXT;  /* destination context */

typedef enum NC_MODE
{
    NC0 = 0,
    NC1,
    NC2,
    NC_RESET,
    
    /* StanleyHY: the initial value of SI2Q (only used by SI2Q) */
    NC_NULL 
} NC_MODE;

typedef enum NC_PARAM_SRC
{
    NC_DAFAULT_VALUE = 0,
    NC_SI2Q,
    NC_SI13,
    NC_PSI5,
    NC_PMO_PCCO
} NC_PARAM_SRC;

typedef enum EM_MODE
{
    EM0 = 0,
    EM1,
    EM_RESERV,
    EM_RESET
} EM_MODE;

typedef enum BSIC_MODE  /* 03-29-2003, add */
{
    PRIORITY_MODE = 0,
    REASSERT_MODE,
    SECOND_PRIORITY_MODE
} BSIC_MODE;

typedef enum
{
    SORT_PURPOSE_BSIC_GENERAL = 0,
    SORT_PURPOSE_MEAS_REP,
    SORT_PURPOSE_ENH_MEAS_REP,
    SORT_PURPOSE_BSIC_DEDI_RECONFIRM
    /*QJZH:[D][2010.05.22] redundant code*/
    //SORT_PURPOSE_ATTEMP_COUNTER
} SORT_PURPOSE;

typedef enum RMC_INDIV_PARA_SRC
{
    RMC_INDIV_PARA_SRC_PMO,
    RMC_INDIV_PARA_SRC_PCCO
} RMC_INDIV_PARA_SRC;

typedef enum INDIV_PARA_HDL_STATUS
{
    INDIV_PARA_HDL_NOT_DECODE = 0,
    INDIV_PARA_HDL_NOT_APPLIED,
    INDIV_PARA_HDL_PARTIAL_APPLIED_WO_SI2T,
    INDIV_PARA_HDL_PARTIAL_APPLIED_WITH_SI2T,
    INDIV_PARA_HDL_ALL_APPLIED
} INDIV_PARA_HDL_STATUS;

typedef enum RMPC_MEAS_TRANS_ID
{
    RMPC_TRANSACTION_ID_0 = 0,
    RMPC_TRANSACTION_ID_1
} RMPC_MEAS_TRANS_ID;

typedef enum EXT_REPORTING_TYPE
{
    EXT_REPORTING_TYPE1 = 0,
    EXT_REPORTING_TYPE2,
    EXT_REPORTING_TYPE3,
    EXT_REPORTING_TYPE_RESERV
} EXT_REPORTING_TYPE;

typedef enum RMPC_IS_HOPPING
{
    RMPC_NOT_HOPPING = 0,
    RMPC_HOPPING
} RMPC_IS_HOPPING;

typedef enum BA_UPDATE_TYPE
{
    RESEL_START,
    RESEL_END,
    NORM_BA_UPDATE
} BA_UPDATE_TYPE;

typedef enum
{
    UMTS_PARA_FROM_SI2T = 0,
    UMTS_PARA_FROM_SI2Q = 1,
    UMTS_PARA_FROM_PSI3Q = 2,
    UMTS_PARA_FROM_PSI5 = 3,
    UMTS_PARA_FROM_MI = 4,
    UMTS_PARA_FROM_PMO = 5,
    UMTS_PARA_FROM_PCCO = 6
} umts_para_src_enum;

#if defined(__LTE_RAT__) || defined(__23G_PRI_RESEL_SUPPORT__)
typedef enum
{
   PRIO_COMPARISON_INVALID,
   PRIO_COMPARISON_LOWER,
   PRIO_COMPARISON_HIGHER
} prio_comparison_enum;

#endif /* defined(__LTE_RAT__) || defined(__23G_PRI_RESEL_SUPPORT__) */

typedef enum
{
    EMR_CAUSE_NULL,
    EMR_CAUSE_NO_BSIC_INFO,
    EMR_CAUSE_BSIC_INFO_NOT_COMPLETE,
    EMR_CAUSE_BA_NOT_FULL,
    EMR_CAUSE_BA_IND_NOT_MATCH
} emr_not_allow_cause_enum;

typedef enum NBR_RESET_CAUSE
{
    BSIC_CHANGE,
    BSIC_DECODE_FAILURE,
    BSIC_EXCEEDING_ATTEMPT_COUNTER,
    NBCCH_DECODE_FAILURE
} NBR_RESET_CAUSE;

typedef enum
{
    NCELL_SRC_INVALID,
    NCELL_SRC_SI2,      /* SEL_PARAM: 0 */
    NCELL_SRC_SI5,      /* SEL_PARAM: 0 */
    NCELL_SRC_SI2N,     /* SEL_PARAM: 1 */
    NCELL_SRC_PSI,      /* SEL_PARAM: 1 */
    NCELL_SRC_PMO_PCCO  /* SEL_PARAM: 1 */
} NCELL_PARAM_SRC;

#if defined(__GAS_INTERNAL_IT__) || (defined(__MODEM_EM_MODE__) && defined(__CHANNEL_LOCK__))
typedef enum
{
    RR_REDIRECTION_OFF,
    RR_REDIRECTION_GSM,
    RR_REDIRECTION_FDD,
    RR_REDIRECTION_TDD, /* TDD current is not supported */
    RR_REDIRECTION_LTE
} redirection_it_test_enum;

typedef enum
{
    RR_CCO_OFF                = 0,
    RR_CCO_GSM_WITH_IM_REL    = 1,
    RR_CCO_GSM_WO_IM_REL      = 2,
    RR_CCO_FDD_WITH_IM_REL    = 3,
    RR_CCO_FDD_WO_IM_REL      = 4,
    RR_CCO_TDD_WITH_IM_REL    = 5,   /* TDD current is not supported */
    RR_CCO_TDD_WO_IM_REL      = 6,  /* TDD current is not supported */
    RR_CCO_LTE_WITH_IM_REL    = 7,    
    RR_CCO_LTE_WO_IM_REL      = 8
} cco_it_test_enum;
#endif /* defined(__GAS_INTERNAL_IT__) || (defined(__MODEM_EM_MODE__) && defined(__CHANNEL_LOCK__)) */

typedef enum
{
    REPORT_TYPE_VALID_BSIC_GSM_CELL
    , REPORT_TYPE_INVALID_BSIC_GSM_CELL
#ifdef __UMTS_RAT__    
    , REPORT_TYPE_UMTS_CELL
    , REPORT_TYPE_UMTS_FREQ
#endif /* __UMTS_RAT__ */
#ifdef __LTE_RAT__
    , REPORT_TYPE_LTE_CELL
#endif /* __LTE_RAT__ */
} report_candidate_type_enum;

typedef enum
{
    MEAS_REPORT_INFO_TYPE_INVALID
    , MEAS_REPORT_INFO_TYPE_MR
    , MEAS_REPORT_INFO_TYPE_EMR
#ifdef __PS_SERVICE__
    , MEAS_REPORT_INFO_TYPE_PMR
    , MEAS_REPORT_INFO_TYPE_PEMR
    , MEAS_REPORT_INFO_TYPE_PCCN
#endif /*  __PS_SERVICE__ */
} meas_report_info_type_enum;

typedef enum
{
    PCCN_TARGET_CELL_INVALID
    , PCCN_GSM_TARGET_CELL
#ifdef __UMTS_RAT__
    , PCCN_UMTS_NORMAL_TARGET_CELL
#endif /* __UMTS_RAT__ */
#ifdef __LTE_RAT__
    , PCCN_LTE_NORMAL_TARGET_CELL
#endif /* __LTE_RAT__ */
} pccn_target_cell_type_enum;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* 0 */ 

typedef enum
{
    RMC_TBF_UPLINK_ASSIGN,
    RMC_TBF_DOWNLINK_ASSIGN
}
rmc_assign_type;

typedef enum
{
    RMC_INVALID_CHANNEL,
    RMC_FIRST_HR_CHANNEL,
    RMC_SEC_HR_CHANNEL
}
rmc_partial_rel_chan_enum;

typedef enum
{
    CS_CONN_NONE,
    CS_CONN_L2_REL_IND,
    CS_CONN_RR_REL_REQ,
    CS_CONN_T3110_EXP,
    CS_CONN_L2_ERROR_REEST,
    CS_CONN_NW_REL,
    /* ZY, revise RR rel/abort scheme in access state */
    CS_CONN_ABORT_REQ,
    /* Adeline 2009.4.24: for PCCO procedure */
    T3174_TIMER_EXPIRY,
    CCO_TIMER_EXPIRY,
    DEACTIVATE_REQ,
    PLMN_SEARCH_REQ,
    PEER_AS_ABORT_REQ
} cs_conn_disc_cause_enum;

#if defined(__CS_SERVICE__) && defined(__PS_SERVICE__)
typedef enum
{
    RMC_EMERGENCY_CALL = 0,
    RMC_MO_CALL = 0,
    RMC_CALL_RE_ESTABLISHMENT = 0,
    RMC_LOCATION_AREA_UPDATE,
    RMC_MO_SMS,
    RMC_OTHER_PROCEDURE_ON_SDCCH,
    RMC_MO_VOICE_BROADCAST_OR_GROUP_CALL,
    RMC_MT_CS_CONNECTION,
    RMC_DTM_NO_SUPPORTED
} gprs_suspension_cause_enum;
#endif /* defined(__CS_SERVICE__) && defined(__PS_SERVICE__) */ 

typedef enum
{
    RMC_DL,
    RMC_BI
}
DIRECTION;

typedef enum
{
    S_RMC_CIPHERING_OFF = 0,
    S_RMC_CIPHER_ALGO_5_1,
    S_RMC_CIPHER_ALGO_5_2,
    S_RMC_CIPHER_ALGO_5_3,
    S_RMC_CIPHER_ALGO_5_4,
    S_RMC_CIPHER_ALGO_5_5,
    S_RMC_CIPHER_ALGO_5_6,
    S_RMC_CIPHER_ALGO_5_7
}
CIPHER_ALGO_TYPE;

typedef enum
{
    RMC_NOT_CIPHERED_MODE = 0,
    RMC_CIPHERED_MODE
}
MS_CIPHER_MODE_ENUM;

/* Use channel_mode_enum in mpal_common_interface.h */
#if 0   /* Claire del */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* 0 */ 

typedef enum
{
    RMC_FIRST_CHANNEL,
    RMC_SECOND_CHANNEL,
    RMC_BOTH_CHANNELS
}
CHAN_NUMBER_ENUM;

/* End Claire add */

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifndef __GERAN_R5__        
/* under construction !*/
#endif /* __GERAN_R5__ */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __UMTS_RAT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __23G_PRI_RESEL_SUPPORT__
/* under construction !*/
#endif /* __23G_PRI_RESEL_SUPPORT__ */
/* under construction !*/
#endif /* __UMTS_RAT__ */ 
/* under construction !*/
#ifdef __3G_CSG_SUPPORT__
/* under construction !*/
/* under construction !*/
#endif /* __3G_CSG_SUPPORT__ */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __GERAN_R6__
/* under construction !*/
/* under construction !*/
#endif /* __GERAN_R6__ */ 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __AGPS_CONTROL_PLANE__
/* under construction !*/
#endif /* __AGPS_CONTROL_PLANE__ */
/* under construction !*/
#ifdef __ETWS_SUPPORT__
/* under construction !*/
#endif /* __ETWS_SUPPORT__ */
/* under construction !*/
/* under construction !*/
#ifdef __GERAN_R4__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __GERAN_R4__ */ 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/* Adeline 2008.12.30 */
typedef enum
{
    CC_NULL,
    CC_NORMAL_BEGIN = CC_NULL,
    CC_NORMAL_C1_BASED,
    CC_NORMAL_C2_BASED,
    CC_NORMAL_C32_BASED,
    CC_NORMAL_RLC_TRIGGER,
    CC_NORMAL_END,
    CC_ABNORMAL_BEGIN = CC_NORMAL_END,
    CC_ABNORMAL_DSF_TRIGGER,
    CC_ABNORMAL_CBA_TRIGGER,
    CC_ABNORMAL_SI_TRIGGER,
    CC_ABNORMAL__T3126_TRIGGER,
    CC_ABNORMAL_RLC_TRIGGER,
    CC_ABNORMAL_END,
    CC_NW_CTRL_BEGIN = CC_ABNORMAL_END,
    CC_NW_CTRL_PCCO,
    CC_NW_CTRL_PS_HO,
    CC_NW_CTRL_END,
    CC_CALL_RE_EST_TRIGGER
    /* ZY : R6 redirection */
#if defined(__FDD_REDIRECTION__) || defined(__UMTS_R6__)
    , CC_NW_CTRL_REDIRECTION
#endif /* defined(__FDD_REDIRECTION__) || defined(__UMTS_R6__) */
#if defined(__UMTS_RAT__)&& defined(__CMCC_STD_FR__)
	  ,CC_NW_CTRL_STD_FR
#endif
#ifdef __LTE_RAT__
    , CC_MS_CTRL_LTE_AUTO_FAST_RETURN
    , CC_NW_CTRL_REDIRECTION_AFTER_CSFB
    , CC_MS_CTRL_LTE_BG_SRCH
    , CC_IR_HSR_CR
#endif /* __LTE_RAT__ */
#if defined(__UMTS_RAT__) && defined(__TC7__CS__SUPPORT__)
    , CC_MS_CTRL_UMTS_FAST_RETURN
#endif
} CELL_CHANGE_TYPE_ENUM;

typedef enum
{
    CELL_CHANGE_NULL_PHASE = 0,
    CELL_CHANGE_SERV_BSIC_REQ_PHASE,
    CELL_CHANGE_ABORTING_PHASE,
    CELL_CHANGE_NEIGHBOUR_BSIC_REQ_PHASE,
    CELL_CHANGE_NEIGHBOUR_SI_COLLECTION_PHASE,
    /* for PCCO only */
    CELL_CHANGE_SERV_SI_COLLECTION_PHASE,
    CELL_CHANGE_WAIT_FOR_CONTENTION_PHASE
} CELL_CHANGE_PHASE_ENUM;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#ifdef __CB__

/* 040116 , we need to isolate the enum value from
   RR to MPAL for bug fix: error memory write ( CB data 
   for CBCH_MODE_NORMAL and CBCH_MODE_EXTENDED */
enum
{
    CBCH_MODE_NORMAL = 0,
    CBCH_MODE_EXTENDED,
    CBCH_MODE_INVALID
};  /* CBCh mode */

enum
{
    CBCH_MODE_INVALID_TO_MPAL = 0,
    CBCH_MODE_NORMAL_TO_MPAL,
    CBCH_MODE_EXTENDED_TO_MPAL
};  /* CBCh mode */

enum
{
    CBCH_START = 0,
    CBCH_STOP
};  /* The definition of cb action */

enum
{
    CBCH_ACCEPT = 0,
    CBCH_IGNORE
};

enum
{
    CB_STATE_OFF = 0,
    CB_STATE_ON
};  /* The definition of cbchState */

enum
{
    CB_NO_DRX_MODE = 0,
    CB_DRX_MODE,
    /* Peter:[CB] The following two enum is not used ?? */
    CB_FIRST_DRX_MODE,
    CB_SECOND_DRX_MODE
};  /* The definition of scheduleMode */

enum
{
    CB_1CB = 0,
    CB_2B,
    CB_3B,
    CB_4B,
    CB_1SB = 8,
    CB_NB = 15
};  /* The definition of sequence number coding */

enum
{
    CB_CB_MESSAGE = 0,
    CB_SCHEDULE_MESSAGE
};  /* CBS Message Type1 */

enum
{
    CB_DWNLD = 0,
    CB_DISPLAY
};  /* CBS Message Type2 */

/* Byron: 2005/12/14: For schedule CB message handling */
typedef enum
{
    CB_NO_SCB_RECEIVED = 0,
    CB_FIRST_SCB_RECEIVED,
    CB_SCB_CAN_BE_USED
} scb_enum; /* CBS Message Type2 */

#endif /* __CB__ */ 

/* ZY: add for AMR-WB */
typedef enum
{
    AMR_NON = 0,            /* for non-AMR channel mode */
    AMR_NB                  /* for AMR narrow band channel mode */
#ifdef __AMRWB_LINK_SUPPORT__
        , AMR_WB            /* for AMR wide band channel mode */
#endif 
} channel_mode_status_enum; /* it is used for checking multirate configuration */

/* ZY : R6 redirection */
#if defined(__GERAN_R6__) || defined(__UMTS_R6__) || defined (__FDD_REDIRECTION__) || defined(__LTE_RAT__)
typedef enum
{
    REDIRECT_TO_GSM = 0,
    REDIRECT_TO_UTRAN_FDD = 1,
    REDIRECT_TO_UTRAN_TDD = 2,
    REDIRECT_TO_LTE = 3
} redirection_enum;
#endif /* defined(__GERAN_R6__) || defined(__UMTS_R6__) || defined (__FDD_REDIRECTION__) || defined(__LTE_RAT__) */

typedef enum
{
    IMM_ASGN_VALID_SUCCESS,
    IMM_ASGN_VALID_FAIL,
    IMM_ASGN_VALID_IGNORE
} imm_asgn_valid_enum;

/* ACS refactoring: trace with enum */
typedef enum
{
    /* Ignore Message */
    ACS_IGNORE_MSG_FOR_SUBSTATE_NOT_MATCH,
    ACS_IGNORE_IA_FOR_TBF_DEDI_NOT_MATCH,
    ACS_IGNORE_IA_FOR_ALLOC_TYPE_NOT_MATCH,
    ACS_IGNORE_IA_FOR_MEAS_MODE_NOT_MATCH,
    ACS_IGNORE_IA_FOR_REQ_REF_NOT_MATCH,
    ACS_IGNORE_IA_FOR_EXT_RA_NOT_MATCH,
    ACS_IGNORE_IA_FOR_PKT_CHANNEL_DESC_NOT_VALID,
    ACS_IGNORE_IA_FOR_MA_NOT_VALID,
    ACS_IGNORE_IA_FOR_1ST_TMA_NOT_VALID,
    ACS_IGNORE_IA_FOR_2ND_TMA_NOT_VALID,
    ACS_IGNORE_IA_FOR_FREQ_PARM_NOT_VALID,
    ACS_IGNORE_PAR_FOR_PUAS_RECEIVED,
    ACS_IGNORE_PUAS_FOR_PERSISTANCE_LEVEL_NOT_VALID,
    ACS_IGNORE_PUAS_FOR_MSG_LEN_NOT_VALID,
    
    /* Abort Access Proc */
    ACS_ABORT_ACS_PROC_FOR_FREQUENCY_NOT_VALID,   

    /* Deny Access Request */
    ACS_DENY_ACS_REQ_FOR_WAIT_IND_TIMER_IS_RUNNING,
    ACS_DENY_ACS_REQ_FOR_RP_OR_CTRL_CLASS_NOT_ALLOW,
    
    /* Error */
    ACS_ERROR_RACH_MAX_RETRANS,    
    
    /* Other Info */
    ACS_CMP_EXT_RA_MATCH,
    ACS_CMP_EXT_RA_NOT_MATCH,
    ACS_STORE_1ST_TMA,
    ACS_RECEIVE_DL_IA,
    ACS_RECEIVE_EGPRS_PUAS
} acs_trace_cause_enum;

#ifdef __ETWS_SUPPORT__
typedef enum
{
    ETWS_EARTHQUAKE = 0,
    ETWS_TSUNAMI = 1,
    ETWS_BOTH = 2,
    ETWS_TEST = 3,
    ETWS_OTHERS = 4,
    ETWS_RESERVED
} warning_type_enum;

typedef enum
{
    ETWS_STOP = 0,
    ETWS_START
} etws_recv_status_enum;

#endif /* __ETWS_SUPPORT__ */

typedef enum
{
    RMC_NORMAL_MEASUREMENT,
    RMC_EXT_MEASUREMENT
}
rmc_measurement_type;

typedef enum
{
    RMC_RR_NORMAL_EVENT,
    RMC_ABNORM_REL_UNSPECIFIED,
    RMC_ABNORM_REL_CHL_UNACCEPTABLE,
    RMC_ABNORM_REL_TIMER_EXPIRED,
    RMC_ABNORM_REL_NO_ACTIVITY_ON_RADIO_PATH,
    RMC_PREEMPTVE_REL,
    RMC_UTRAN_PRECONF_UNKNOWN,
    RMC_HO_IMPOS_TIM_ADV_OUT_OF_RANGE = 0x08,
    RMC_CH_MODE_UNACCEP,
    RMC_FREQ_NOT_IMPLEMENTED,
    RMC_LOWER_LAYER_FAILURE = 0x0c,
    RMC_CALL_ALREADY_CLEARED = 0x41,
    RMC_SEMANTIC_INCORR_MSG = 0x5f,
    RMC_INVALID_MAND_INF = 0x60,
    RMC_MT_NON_EXIS_OR_NOT_IMP,
    RMC_MT_NOT_COMPAT_WITH_PROT_STATE,
    RMC_COND_IE_ERROR = 0x64,
    RMC_NO_CELL_ALLOC_AVAILABLE,
    RMC_PROTOCOL_ERROR_UNSPECIFIED = 0x6f
} rmc_rr_cause;

typedef enum
{
    RMC_ASGN_CMD,
    RMC_PDCH_ASGN,
    RMC_IMM_ASGN,
    RMC_IMM_ASGN_EXT,
    RMC_ADDTNL_ASGN,
    //RMC_PRTL_REL,
    RMC_HO_CMD,
    RMC_FREQ_REDEF,
    RMC_CHMODE_CHNG,
    RMC_CIPHER_MODE,
    RMC_HO_CMD_FROM_UTRAN,
    RMC_HO_CMD_TO_UTRAN,
    RMC_HO_CMD_FROM_EUTRAN
} rmc_ded_asgn_type;

#if (defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__))
typedef enum
{
    EM_ASSGN_CMD_MSG_TYPE,
    EM_CHANNEL_RELEASE_MSG_TYPE,
    EM_ADDTNL_ASSGN_MSG_TYPE,
    EM_CLASSMARK_ENQUIRY_MSG_TYPE,
    EM_CIPHER_MODE_CMD_MSG_TYPE,
    EM_CONFIG_CHANGE_MSG_TYPE,
    EM_HANDOVER_CMD_MSG_TYPE,
    EM_FREQ_REDEF_MSG_TYPE,
    EM_CHAN_MODE_MOD_MSG_TYPE,
    EM_CELL_SELECTION
}
rr_em_ded_asgn_type;
#endif /* (defined(__MODEM_EM_MODE__) || defined(__SLIM_MODEM_EM_MODE__)) */

/* info type 5 codes used in scheduling info of SI 9 */
typedef enum
{
    SI_1_SCHEDULE,
    SI_2_SCHEDULE,
    SI_2_BIS_SCHEDULE,
    SI_2_TER_SCHEDULE,
    SI_3_SCHEDULE,
    SI_4_SCHEDULE,
    SI_7_SCHEDULE,
    SI_8_SCHEDULE,
    SI_9_SCHEDULE,
    SI_13_SCHEDULE
}
rr_info_type_5_schd_type;

typedef enum
{
    RR_MEAS_INFO_MSG_TYPE = 0x05,
    RR_ENH_MEAS_REP_MSG_TYPE = 0x04
} rr_short_peer_msg_type;

typedef enum
{
    TEST_CLOSE_TCH_LOOP_MSG_TYPE = 0x0,
    TEST_CLOSE_TCH_LOOP_ACK_MSG_TYPE = 0x01,
    TEST_CLOSE_MULTI_LOOP_MSG_TYPE = 0x20,
    TEST_CLOSE_MULTI_LOOP_ACK_MSG_TYPE = 0x21,
    TEST_OPEN_LOOP_MSG_TYPE = 0x06,
    TEST_OPEN_MULTI_LOOP_MSG_TYPE = 0x22,
    TEST_OPEN_MULTI_LOOP_ACK_MSG_TYPE = 0x23,
    TEST_DAI_TEST_MSG_TYPE = 0x14,
    TEST_RESET_MS_POSITIONING_STORED_INFO_MSG_TYPE = 0x26,
    TEST_RESET_UE_POSITIONING_STORED_INFO_MSG_TYPE = 0x48    
}
rr_test_peer_msg_type;

typedef enum
{
    rr_single_slot_cmd,
    rr_multi_slot_cmd
}
rr_loop_cmd_type;

typedef enum
{
    RR_PAGE_RESPONSE_LEN = 16,
    RR_CLASSMARK_CHANGE_LEN = 10,
    RR_GPRS_SUSPEND_REQUEST_LEN = 13,
    RR_CLASSMARK_IE_LEN = 5
}
rr_peer_ie_len_type;

typedef enum
{
    /* MS->NW */
    RR__CIPHER_MODE_COMPLETE,
    RR__ASSIGNMENT_COMPLETE,
    RR__ASSIGNMENT_FAILURE,
    RR__HANDOVER_COMPLETE,
    RR__HANDOVER_FAILURE,
    RR__EXTENDED_MEASUREMENT_REPORT,
    RR__MEASUREMENT_REPORT,
    RR__ENHANCED_MEASUREMENT_REPORT,
    RR__CHANNEL_MODE_MODIFY_ACKNOWLEDGE,
    RR__CHANNEL_REQUEST,
    RR__CLASSMARK_CHANGE,
    RR__UTRAN_CLASSMARK_CHANGE,
    RR__RR_STATUS,
    RR__GPRS_SUSPEND_REQUEST,
    RR__PAGING_RESPONSE,

    /* NW->MS */
    RR__ADDITIONAL_ASSIGNMENT,
    RR__IMMEDIATE_ASSIGNMENT,
    RR__IMMEDIATE_ASSIGNMENT_EXTENDED,
    RR__IMMEDIATE_ASSIGNMENT_REJ,
    RR__CIPHER_MODE_COMMAND,
    RR__ASSIGNMENT_COMMAND,
    RR__PDCH_ASSIGNMENT_COMMAND,
    RR__HANDOVER_COMMAND,
    RR__PHYSICAL_INFORMATION,
    RR__CHANNEL_RELEASE,
    RR__PAGING_REQUEST_TYPE_1,
    RR__PAGING_REQUEST_TYPE_2,
    RR__PAGING_REQUEST_TYPE_3,
    RR__EXTENDED_MEASUREMENT_ORDER,
    RR__MEASUREMENT_INFORMATION,
    RR__CHANNEL_MODE_MODIFY,
    RR__CLASSMARK_ENQUIRY,
    RR__FREQUENCY_REDEFINITION,
    RR__INTER_SYSTEM_TO_UTRAN_HANDOVER_COMMAND,
    /* NW->MS, system information */
    RR__SI_1,
    RR__SI_2,
    RR__SI_2BIS,
    RR__SI_2TER,
    RR__SI_2QUATER,
    RR__SI_2N,
    RR__SI_3,
    RR__SI_4,
    RR__SI_5,
    RR__SI_5BIS,
    RR__SI_5TER,
    RR__SI_6,
    RR__SI_7,
    RR__SI_8,
    RR__SI_9,
    RR__SI_13,

    /* Both Direction */
    RR__APPLICATION_INFO
} rr_peer_msg_name_enum;

typedef enum
{
  NO_VAL,
  SI_NO_MSG,
  SI_INVALID_LEN,
  SI_CELL_ALLOC,
  SI_RACH_CTRL_PARAMS,
  SI_NEIGHBOR_CELL_LIST,
  SI_NCC_PERMITTED,
  SI_EXT_NEIGHBOR_CELL_LIST,
  SI_CELL_ID,
  SI_LA_ID,
  SI_CTRL_CHAN_PARAMS,
  SI_BCCH_CELL_OPTIONS,
  SI_CELL_SEL_PARAMS,
  SI_3_REST_OCTETS,
  SI_CBCH_PARAMS,
  SI_4_REST_OCTETS,
  SI_SACCH_CELL_OPTIONS,
  SI_SKIP_IND,
  SI_PROTOCOL_DISCRIMINATOR,
  SI_GPRS_MA_IE,
  SI_NC_MEAS_ORDER,
  SI_GPRS_CELL_OPTIONS,
  SI_GPRS_PWR_CTRL_PARAMS,
  SI_PBCCH_DESCR,
  SI_FLD_ZERO_LEN,
  SI_SCHED_INFO,
  SI_9_REST_OCTETS
}
si_msg_fld_enum;

typedef enum
{
  MSG_ALREADY_DECODED,
  MSG_DECODED_SUCCESS
}
si_msg_decode_status_enum;

typedef enum
{
  RMC_TMA_NO_MEANING = 0,
  RMC_TMA_FIRST_MESSAGE
}
rmc_tma_value;

typedef enum
{
  RMC_IAR_NONE = 0,
  RMC_IAR_EGPRS_UL_ASGN,
  RMC_IAR_BEF_TIME_FREQ_PRESENT,
  RMC_IAR_UL_ASGN
}
rmc_iar_first_two_bit_value;

typedef enum
{
  RMC_IAR_PKT_UL_ASGN = 0xc,
  RMC_IAR_PKT_DL_ASGN,

  /* Lanslo 20060413: fix Phx29 R99 phone fail in 41.2.3.1 and 41.2.3.2 (2nd part will be dropped) */
#ifdef __R99__
#ifdef __EGPRS_MODE__
  RMC_IAR_SEC_PART_PKT_ASGN2 =0xf,
  RMC_IAR_PKT_EGPRS_UL_ASGN = 0x4,
#else /* __EGPRS_MODE__ */
  RMC_IAR_SEC_PART_PKT_ASGN2 =0xf,
#endif /* __EGPRS_MODE__ */
#endif /* __R99__ */

  RMC_IAR_SEC_PART_PKT_ASGN =0xe

#if 0
#ifdef __EGPRS_MODE__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else /* __EGPRS_MODE__ */
/* under construction !*/
#endif /* __EGPRS_MODE__ */   
#endif /* 0 */   
  /* eo Lanslo 20060413 */
}
rmc_iar_pkt_asgn_type;

typedef enum
{
   /* Only reset the serving cell parameters. Neighbor cell meas info and PCCO raw data are not reset */
   MEAS_RESET_SERV_PARAM,
   
   /* Reset all meas parameters including the serving cell parameters, neighbor cell meas info, and PCCO raw data */
   MEAS_RESET_ALL_PARAM,

   /* Used for UT to reset parameters but not send MSG_ID_RR_MPAL_SET_GISE_CONTEXT_REQ to MPAL. */
   MEAS_UNIT_TEST_RESET
} meas_reset_scope_enum;

typedef enum
{
    GAS_AGPS_RESET,
    GAS_AGNSS_RESET
}
gas_reset_ms_positioning_tech;

typedef enum
{
    RR_TIMER_NOT_RUNNING,
    RR_TIMER_TIME_OUT
}TIMER_STATE;

#ifdef __CMCC_23G_PINGPONG_RESTRAIN__
typedef enum
{
	RRM_PING_PONG_INIT,
	RRM_PING_PONG_STAGE_1,
	RRM_PING_PONG_STAGE_2
}ping_pong_stage_enum;

/*virtual pp exit*/
typedef enum
{
	IR_VIRTUAL_INIT,
	IR_VIRTUAL_FROM_2G_TO_3G,
	IR_VIRTUAL_FROM_3G_TO_2G
}virtual_ir_status_enum;
#endif

#ifdef __MTK_TARGET__
typedef enum
{
    RRM_SET_RAT_MODE,
    RRM_PLMN_SEARCH,
    RRM_STANDBY_MEAS,
    RRM_NONE
}rrm_efuse_enum;
#endif /* __MTK_TARGET__ */

#endif /* _RRM_ENUMS_H */
