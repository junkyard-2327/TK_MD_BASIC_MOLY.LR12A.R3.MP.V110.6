/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
 *   irat_common_enums.h
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
 * ==========================================================================
 * $Log:$
 *
 * 03 14 2019 sapna.ks
 * [MOLY00390053] [CODE SYNC] Modem??SRVCC HO fail cause
 * .
 *
 * 06 27 2016 max.mo
 * [MOLY00186735] [L4C-PS][NAS] Sync code from UMOLY to UMOLYA
 * [MOLY00163408] ?TMO-V200F??Anite??2015 Q4?41419?T_Mobile_aSRVCC_5, ??Fail, Status????.
 *
 * 06 02 2016 max.mo
 * [MOLY00163408] ?TMO-V200F??Anite??2015 Q4?41419?T_Mobile_aSRVCC_5, ??Fail, Status????
 * .
 *
 * 02 26 2016 srihari.maddipati
 * [MOLY00162461] 在Android???Modem??Log的需求
 * .
 *
 * 02 05 2016 shih-che.chou
 * [MOLY00162642] [Jade-M][SRLTE][CT 5M A][LTE IOT][FT][CD][HW][CAT]Externel (EE),[ASSERT] file:pcore/modem/lte_sec/enas/emm/ratband/src/emm_ratband_rcv_msg.cpp line:417
 * .
 *
 * 08 13 2015 yc.chen
 * [MOLY00137066] [Jade][MT6755][MP1][CSFB DSDS][In-house FTA][EE][1][PCORE]Assert fail: emm_ratchg.cpp 935 - EMM
 * 	.
 *
 * 05 15 2015 songsong.jia
 * [MOLY00084416] [eCSFB]LU Reduction feature
 * 	.
 *
 * 04 28 2015 doug.shih
 * [MOLY00092508] [MT6291][LTE-C2K] AS Inter RAT feature
 * Fix compiler warning.
 *
 * 04 16 2015 jeffery.chen
 * [MOLY00098964] [UMOLY][UBIN] NAS signaling Phase2 mode switch implementation
 * Rollback due to merge mistake.
 *
 * 04 16 2015 doug.shih
 * [MOLY00092508] [MT6291][LTE-C2K] AS Inter RAT feature
 * Merge C2K AS IRAT - CEL Part (OA domain).
 *
 * 02 23 2015 bob.chiang
 * [MOLY00096607] Sync C2K CR
 * .
 *
 * 12 16 2014 dongqing.qi
 * [MOLY00087344] [UMOLY][TDD][UAS]sync U-Bin CBr to UMOLY TRUNCK
 * .low power(lmeme IRAT interface 1,TODO: no permission to write common/interface/modem/general)
 *
 * 12 15 2014 tsung-wei.tu
 * [MOLY00087619] [UMOLY][Universal Bin] GAS check in
 * .
 *
 * 12 15 2014 henry.lai
 * [MOLY00087668] [MT6291][UBIN] Check in ERRC/CEL modifications
 * .
 *
 * 11 28 2014 bob.chiang
 * [MOLY00083874] [UMOLY][R10][R11] EMM MTC sync code from 6291_DEV to UMOLY trunk
 * - fix cgen error: conn_rel_ind_cause_enum is not defined
 *
 * 11 14 2014 yenchih.yang
 * [MOLY00084256] [MEME] sync MT6291 to UMOLY
 * URR/MEME.
 *
 * 11 12 2014 tsung-wei.tu
 * [MOLY00080211] [MT6291_DEV][MT6291_UESIM_DEV] Check in low power to MT6291_DEV, MT6291_UESIM_DEV
 * Merging GISE low power to UMOLY trunk
 *
 * 07 28 2014 kun-lin.wu
 * [MOLY00073289] [WW FT][Ireland-Dublin][MT6595][4G Gemini][LWG][3][O2][Assert] file:m11301.c line:1554
 *
 * 07 01 2014 ming.shen
 * [MOLY00071033] [WW FT][Russia][MT6595][Beeline] 4G data Icon can not be shown for long time after returning back from 4G after SS services
 * 	.
 *
 * 06 11 2014 dennis.weng
 * [MOLY00068595] [LTE Gemini] add a new trigger IR_NW_FAST_RETURN
 * .
 *
 * 04 18 2014 thomasyt.lee
 * [MOLY00063077] [ERRC][MFROM] Add range check for the number of elements in cco_geran_SI
 * Change MAX_GSM_SYS_INFO_BLOCKS_NUM to 10
 *
 * 01 22 2014 maruco.tu
 * [MOLY00054324] [4G Gemini][Merge] MOLY.MM.GEMINI.DEV Merge back to MOLY
 * Merge LTE GEMINI to MOLY
 *
 * 11 18 2013 carlson.lin
 * [MOLY00046780] [MOLY][SM] LTE Emergency PDN Connection
 * Emergency PDN
 *
 * 09 16 2013 henry.lai
 * [MOLY00037661] [MT6290] GAS development for AFR, L1 measurement control, backup IR measurement mechanism, and meaurement report
 * 	.
 *
 * 07 17 2013 dennis.weng
 * [MOLY00030187] [MT6290] CSFB Enhancement Implementation for Autonomous Fast Return
 * .
 *
 * 05 28 2013 henry.lai
 * [MOLY00023188] [R9MM] Deferred SI13 reading, R11 CR GP-120438, and tick-ms convertion implementation
 * .
 *
 * 05 09 2013 carlson.lin
 * [MOLY00022045] [SM] Format SM codes
 * Format SM code
 *
 * 05 07 2013 carlson.lin
 * [MOLY00018567] [MT7208][NW-UE SIM][MM][TC 13.3.2.1] 4G23 IR_TYPE_SEARCH re-design
 * .
 *
 * 03 27 2013 stanleyhy.chen
 * [MOLY00010443] Code optimization
 * Merge error fixing
 *
 * 03 22 2013 loter.chang
 * [MOLY00011934] LTE MM IT CBr merge to MOLY
 * [MM/EMM] 24.301/24.008 CR Implementation: Interface modification, add TMSI, ECC_PLMN
 *
 * 03 15 2013 stanleyhy.chen
 * [MOLY00009163] LTE Multimode merge back to MOLY
 * Extern the number of LTE standby measurement frequencies from 4 to 8
 *
 * 03 15 2013 birui.li
 * [MOLY00011961] [3G TDD][Multi-mode]merge code from jeff.wu\MOLY_PS.L1.MM.IT to MOLY
 * merge code.
 *
 * 03 14 2013 ye.yuan
 * [MOLY00011961] [3G TDD][Multi-mode]merge code from jeff.wu\MOLY_PS.L1.MM.IT to MOLY
 * .
 *
 * 01 24 2013 jeff.wu
 * [MOLY00009163] LTE Multimode merge back to MOLY
 * Modify macro definition for header inclusion
 *
 * 01 22 2013 c-hua.yang
 * [MOLY00009184] [URR] Multimode Merge to MOLY
 * .
 *
 * 01 11 2013 henry.lai
 * [Henry][Multi-Mode Development] GAS Development and R8 CR Sync
 *
 * 12 12 2012 henry.lai
 * NULL
 * [GAS][Multi-Mode] GAS bug fix check-in
 *
 * 11 07 2012 roy.lin
 * [MOLY00005322] TATAKA merge to MOLY
 * Use "apn_struct", "ip_addr_struct" to replace "irat_apn_struct", "irat_ip_addr_struct".
 *
 * 11 06 2012 ben.chiu
 * [MOLY00005322] TATAKA merge to MOLY
 * [ETCM] merge interface, makefile, codegen related files
 * 1. libParseDbModem.c
 * 2. sap_info.h
 * 3. tcm_eval_struct.h
 * the above file is not merge, waits for DHL & EVAL owner
 *
 ****************************************************************************/

#ifndef _IRAT_COMMON_ENUMS_H
#define _IRAT_COMMON_ENUMS_H

#include "as_inter_core_enum.h"
#include "irat_common_enums_public.h"    //TODO: CL#948941, l1core asinterface build error

/* MACROS ******************************************************************/
/* MAX Values */
#define STADNBY_GSM_MAX_BSIC_NUM 32

#define MAX_NUM_CSG_FREQ (8) /* Maximum number used for 3G4 Autonumous CSG Search */
#define MAX_NUM_ECELL_MEAS_RESULT (8)

/* Maximum number used for 2G or 3G to LTE redirection information */
#define PCI_BITMAP_MAX_NUM (63)

#define MAX_NUM_CSG_CARRIERS 8
#define MAX_NR_OF_CSG_CELLS_IN_CELL_LIST 8

#if (defined(__UMTS_R5__) && (defined(__GERAN_R5__)))
#define MAX_GSM_SYS_INFO_BLOCKS_NUM (10)
#endif

#define MAX_TARGET_GSM_CELLS_NUM (96)

/* Maximun size of GSM list for 4G2 IR direction */
#define MAX_BYTE_OF_GSM_ARFCN (128)

/* Used for IR Handover */
#define MAX_LEN_HO_TO_UTRAN_MSG (251)          /* Octets */
#define MAX_LEN_UTRAN_HANDOVER_INFO_MSG (251)  /* Octets */
#define NAS_SECURITY_PARAM_LEN (6)

/* Used for IR Redirection (ts_eutra_redirect_info) */
#define MAX_UAS_EAS_REDIRECT_FREQ_NUM (8)

/* NAS Array Length */
#define UGSM_TI_IE_LEN  2 // according to 24.007 11.2.3.1.3
#define CK_LEN          16
#define IK_LEN          16
#define KC_LEN          8
#define KC128_LEN       16
#define PTMSI_LEN       4 /* not include P-TMSI Mobile IE header (0xF4) */
#define PTMSI_SIG_LEN   3
#define RAI_LEN         6
#define LAI_LEN         5
#define MS_ID_LEN       8
#define TMSI_LEN      4

/* TYPES DEFINITIONS ********************************************************/
typedef enum
{
    IR_RESULT_SUCCESS   = 0,             //Inter-RAT change is successful.
    IR_RESULT_FAILURE   = 1,             //Inter-RAT change is failed in target RAT.
    IR_RESULT_REJECT    = 2,             //Inter-RAT change is rejected in source RAT.
    IR_RESULT_SUCCESS_FORCED_BY_NAS = 3, //Inter-RAT change is forced to success in target NAS.
    IR_RESULT_GEMINI_SUSPEND_REJECT = 4  // Inter-RAT change is rejected due to gemini suspend
} irat_result_enum;

typedef enum
{
    IR_SM_VIEW_SUCCESS,
    IR_SM_VIEW_FAIL,
    IR_SM_VIEW_SUCCESS_BUT_23G_RAT_UNKNOWN, // due to 4G23 IR_TYPE_SEARCH
    IR_SM_VIEW_NOT_REVELENT_TO_SM //ex: CCO stage 1, from SM's point of view, CCO stage 1 does not mean anything, SM does not need to do anything, SM just need to relay this msg.
} irat_sm_view_result_enum;

typedef enum
{
    IR_TRANSFER_BEARER_PRIMARY_PDP_CONTEXT    = 0x00,
    IR_TRANSFER_BEARER_DEFAULT_EPS_CONTEXT    = IR_TRANSFER_BEARER_PRIMARY_PDP_CONTEXT,
    IR_TRANSFER_BEARER_SECONDARY_PDP_CONTEXT  = 0x01,
    IR_TRANSFER_BEARER_DEDICATED_EPS_CONTEXT  = IR_TRANSFER_BEARER_SECONDARY_PDP_CONTEXT,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_NSAPI_NOT_VALID,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_PDP_ADDR_TYPE_NOT_VALID,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_TFT_VALIDATE_FAIL,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_NO_23G_QOS,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_NO_23G_TI,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_NO_2G_LLC_SAPI,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_NO_2G_RADIO_PRIORITY,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_NO_EPS_QOS,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_EXCEED_GPRS_MAX_PDP_SUPPORT_KILL_QCI_1_TO_4,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_EXCEED_GPRS_MAX_PDP_SUPPORT_KILL_QCI_5_TO_9_SECONDARY,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_EXCEED_GPRS_MAX_PDP_SUPPORT_KILL_QCI_5_TO_9_PRIMARY,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_PRIMARY_MAPPED_FAILED,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_EMC_BEARER_NOT_ALLOWED,
    IR_TRANSFER_BEARER_REJECTED_BY_SM_DUE_TO_4G23_IMS_PDN_LOCAL_RELEASE,
} irat_transfer_bearer_type_enum;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef enum
{
    RAT_TYPE_GAS,            // GERAN
    RAT_TYPE_UAS_FDD,        // UTRAN (FDD mode)
    RAT_TYPE_UAS_TDD,        // UTRAN (TDD mode)
    RAT_TYPE_EAS,            // E-UTRAN (LTE)
    RAT_TYPE_GAS_UAS_TBD,    // if 4G23 irat_type == IR_TYPE_SEARCH, LTE rat does not know which target rat will be chosen.
    RAT_TYPE_CAS,            // CDMA2000
    RAT_TYPE_NONE            // For invalid value, add new RAT aboue it.
} rat_type_enum;

typedef enum
{
    BEARER_MAP_INVALID, // no such bearer
    BEARER_MAP_ACTIVE, // bearer mapping success
    BEARER_MAP_FAILED, // bearer mapping failure and local released
    BEARER_MAP_FAILED_DUE_TO_DETACH, // bearer mapping failure because new MM is detached.
    BEARER_MAP_FAILED_DUE_TO_CURRENT_SIM_NOT_HAVE_CONTEXT_MEMORY, // for example, if ESM context transfer to MOD_SM, but context memory is occupied by MOD_SM_2, that means MOD_SM_2 has PDP and hense MOD_SM cannot activate any PDP
    BEARER_MAP_FAILED_DUE_TO_NSAPI_NOT_VALID,
    BEARER_MAP_FAILED_DUE_TO_PDP_ADDR_TYPE_NOT_VALID,
    BEARER_MAP_FAILED_DUE_TO_TFT_VALIDATE_FAIL,
    BEARER_MAP_FAILED_DUE_TO_NO_23G_QOS,
    BEARER_MAP_FAILED_DUE_TO_NO_23G_TI,
    BEARER_MAP_FAILED_DUE_TO_NO_2G_LLC_SAPI,
    BEARER_MAP_FAILED_DUE_TO_NO_2G_RADIO_PRIORITY,
    BEARER_MAP_FAILED_DUE_TO_NO_EPS_QOS,
    BEARER_MAP_FAILED_DUE_TO_EXCEED_GPRS_MAX_PDP_SUPPORT_KILL_QCI_1_TO_4,
    BEARER_MAP_FAILED_DUE_TO_EXCEED_GPRS_MAX_PDP_SUPPORT_KILL_QCI_5_TO_9_SECONDARY,
    BEARER_MAP_FAILED_DUE_TO_EXCEED_GPRS_MAX_PDP_SUPPORT_KILL_QCI_5_TO_9_PRIMARY,
    BEARER_MAP_FAILED_DUE_TO_PRIMARY_MAPPED_FAILED,
    BEARER_MAP_FAILED_DUE_TO_EMC_BEARER_NOT_ALLOWED,
    BEARER_MAP_FAILED_DUE_TO_4G23_IMS_LOCAL_RELEASE,
    //BEARER_MAP_LOCAL_RELEASE // bearer local released
} bearer_mapping_result_enum;

typedef enum
{
    HO_FROM_LTE_TYPE_INVALID,
    HO_FROM_LTE_TYPE_PS_HO,
    HO_FROM_LTE_TYPE_SRVCC_HO,
    HO_FROM_LTE_TYPE_PS_SRVCC_HO
} ho_from_lte_type_enum;

typedef enum
{
    GAS_CIPHER_ALGO_INVALID,
    GAS_CIPHER_ALGO_KC,
    GAS_CIPHER_ALGO_KC128
} gas_cipher_algo_enum;

typedef enum
{
    DOMAIN_ID_INVALID,
    DOMAIN_ID_PS_PRESENCE,
    DOMAIN_ID_CS_PRESENCE
} sec_ctxt_domain_id_enum;

typedef enum
{
    MT_CSFB_TYPE_INVALID,
    MT_CSFB_TYPE_STMSI_TMSI,
    MT_CSFB_TYPE_IMSI
} mt_csfb_type_enum;

typedef enum
{
    LOOPBACK_MODE_DEACTIVATE,
    LOOPBACK_MODE_ACTIVATE_A,
    LOOPBACK_MODE_ACTIVATE_B,
    LOOPBACK_MODE_ACTIVATE_C,
    LOOPBACK_MODE_CLOSELOOP_A,
    LOOPBACK_MODE_CLOSELOOP_B,
    LOOPBACK_MODE_CLOSELOOP_C
} loopback_mode_status_enum;

typedef enum
{
    TAU_NOT_REQUIRED,
    TAU_REQUIRED,
    TAU_COMB_TALA_IMSI_ATTACH
} tau_required_enum;

#if 0 // use the one defined in l3_inc_enums.h instead
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/* Merged from GSM / UMTS Multimode development branch **********/
typedef enum
{
   UMTS_UNDEFINED_MODE,
   UMTS_FDD_MODE,
   UMTS_TDD_MODE
} te_umts_mode;

typedef enum {
   AUTO_SEARCH_START = 0x00,
   AUTO_SEARCH_RESUME = 0x01,
   AUTO_SEARCH_STOP = 0x02
} auto_search_cmd_enum;

typedef enum {
   SEARCH_STATUS_SUSPENDED = 0x00,
   SEARCH_STATUS_FINISHED = 0x01,
   SEARCH_STATUS_STOPPED = 0x02
} search_status_enum;

/**
 * @brief 
 *     te_ir_handover_status specifies the result of inter-RAT handover 
 *     procedure 
 *     . 
 */
typedef enum
{
   /* Handover message is correct or procedure is success */
   IR_HANDOVER_STATUS_NORMAL_EVENT,
   /* Applicable during Evaluation only */
   IR_HANDOVER_STATUS_FREQUENCY_NOT_IMPLEMENTED,
   /* Applicable only for Activation procedure
    * HO to GSM: Handover procedure failed due to lower layer failure at GSM.
    * HO to UTRAN: Failure to establish channels on cell(s) required for handover
    *              at any point during handover activation procedure.
    */
   IR_HANDOVER_STATUS_PHYSICAL_CHANNEL_FAILURE,
   /* Applicable during Evaluation procedure
    * Handover procedure failed due to inconsitent/missing parameters protocol
    * error. 
    */
   IR_HANDOVER_STATUS_PROTOCOL_ERROR,
   /* Applicable only during Evaluation procedure
    * HO to GSM: Handover message has a channel mode configuration which is not
    *            supported
    * HO to UTRAN : Predefined configuration not read or default configuration 
    *               not implemented. 
    */
   IR_HANDOVER_STATUS_UNSUPPORTED_CONFIGURATION,
   /* Applicable only for activation procedure, e.g. abort CS connection by UAS */
   IR_HANDOVER_STATUS_UNSPICIFIED_ERROR
} te_ir_handover_status;

typedef enum {
   IR_FREQUENCY_NOT_IMPLEMENTED,
   IR_NO_RESPONSE_ON_TARGET_CELL,
   IR_REJECT_ON_TARGET_CELL,
   /* 3G failed reason */
   IR_CONFIGURATION_UNACCEPTABLE,
   IR_PHYSICAL_CHANNEL_FAILURE,
   /* for Gemini */
   IR_SUSPENDING_DURING_IR_CELL_RESEL,
   IR_CELL_CHANGE_FAIL_REASON_NONE
} te_ir_cell_change_fail_reason_enum;

typedef enum
{
   GAS_UAS_REDIRECTION_INFO = 0x00,
   EAS_UAS_REDIRECTION_INFO = 0x01,
   UAS_GAS_REDIRECTION_INFO = 0x02,
   EAS_GAS_REDIRECTION_INFO = 0x03
} te_ir_redirection_type;

#ifdef __SRVCC_CELL_INFO__
typedef enum
{
   IR_HANDOVER_PHY_FAIL_SUBCAUSE_NONE = 0x00,
   IR_HANDOVER_PHY_FAIL_SUBCAUSE_TIME_ADV_OUT_OF_RANGE,
   IR_HANDOVER_PHY_FAIL_SUBCAUSE_N200_TIMEOUT,
   IR_HANDOVER_PHY_FAIL_SUBCAUSE_T3124_TIMEOUT,
   IR_HANDOVER_PHY_FAIL_SUBCAUSE_CONTENTION_RES_FAIL,
   IR_HANDOVER_PHY_FAIL_SUBCAUSE_OTHER
}te_ir_handover_phy_fail_subcause;
#endif /* __SRVCC_CELL_INFO__*/


#if (defined(__UMTS_R5__) && defined(__GERAN_R5__))
typedef enum{
   GERAN_SysInfo_None,
   GERAN_SysInfo_SI,
   GERAN_SysInfo_PSI
} GERAN_SysInfoType;
#endif

typedef enum {
   CIPHER_STATUS_NOT_STARTED,
   CIPHER_STATUS_STARTED
} te_cn_domain_cipher_status;

typedef enum
{
   IMSI_PAGING_TYPE,
   TMSI_PAGING_TYPE
} paging_type_enum; /* paging for CSFB */

typedef enum
{
   UNKNOWN_SERVICE_TYPE,
   CALL_SERVICE_TYPE,
   SS_SERVICE_TYPE,
   LCS_SERVICE_TYPE
} csfb_service_type_enum; /* service type for MO/MT CSFB */

typedef enum
{
   CSFB_IND_NONE,
   CSFB_IND_MO,
   CSFB_IND_MT
} csfb_indicator_enum; /* paging for CSFB */


typedef enum
{
   NORMAL_CELL = 0x00,
   CSG_CELL    = 0x01,
   HYBRID_CELL = 0x02
} csg_access_mode_enum;

typedef enum
{
	BEARER_SERVICE_TYPE_NORMAL = 0,
	BEARER_SERVICE_TYPE_EMERGENCY
} bearer_service_type_enum;

typedef enum
{
    CONN_REL_IND_CAUSE_OTHER,
    CONN_REL_IND_CAUSE_CSFB_HIGH   /* 36.331 ReleaseCause */
} conn_rel_ind_cause_enum;

typedef enum
{
    C2K_IRAT_ATTACH_SUCCESS = 0,
    C2K_IRAT_ATTACH_FAILURE
} c2k_irat_attach_result_enum;


/* __ALPS02506878_SUPPORT__ */
typedef enum{
  IR_CALL_TYPE_MO,
  IR_CALL_TYPE_MT,
  IR_CALL_TYPE_EMERGENCY,
  IR_CALL_TYPE_INVALID
} te_ir_call_type;

#endif /* _IRAT_COMMON_ENUMS_H */
