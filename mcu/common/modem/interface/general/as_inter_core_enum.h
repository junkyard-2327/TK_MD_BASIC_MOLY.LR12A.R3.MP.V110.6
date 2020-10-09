/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 *   as_inter_core_enum.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __AS_INTER_CORE_ENUM_H__
#define __AS_INTER_CORE_ENUM_H__

/* MACROS ******************************************************************/
#ifdef __REL6__
#define MAX_NUM_EQ_PLMN      16
#else
#define MAX_NUM_EQ_PLMN       6
#endif

#define MAX_NUM_LTE_MEAS_CELL (16)  /* Maximum number of reported cells per frequency */
#define MAX_MEAS_IRAT_FREQ (8)  /* The maximum supported LTE Inter-frequency for measurement.
                                   4 for TDD + 4 for FDD */

#define SIZE_LTE_BAND           8
#define SIZE_LTE_BAND_MASK_TABLE_EXTENDED (256/8) 

#define LTE_INVALID_RSRP (0x7FFF)
#define LTE_INVALID_RSRQ (0x7FFF)

#define LTE_MAX_RSRP (-100)
#define LTE_MIN_RSRP (-660)
#define LTE_MAX_RSRQ (0)
#define LTE_MIN_RSRQ (-100)

#define SIZE_UMTS_FDD_BAND      4
#define SIZE_UMTS_TDD_BAND      2

#define MAX_NR_OF_FDD_CELLS_IN_CELL_LIST (32)
#define MAX_NR_OF_TDD_CELLS_IN_CELL_LIST (32)

#define MAX_NUM_MEASURED_GSM_CELLS 32 /* The maximum number of GSM cells that can be measured in the standby mode. 
                                       * This constant is used between UAS/EAS and GAS. 
                                       */

#define TDD_MAX_NUM_MEASURED_UMTS_CARRIERS (9)

#define FDD_MAX_NUM_MEASURED_UMTS_CARRIERS (6)

#define BLK_LIST_ARRAY_SIZE (63)    /* Size of PCI bitmap array (504/8 = 63) */

/* TYPES DEFINITIONS ********************************************************/

//copied from l3_inc_enums.h
typedef enum
{
    ANY_PLMN                                    = 0,
    GIVEN_PLMN_EXCLUDE_FORBIDDEN_LA_FOR_ROAMING = 1,
    GIVEN_PLMN_ALLOW_ALL_LA                     = 2,
    SEARCH_TYPE_NO_CHANGE                       = 0xFF     /* Used in Regn_status_update_req only */
} plmn_search_type_enum;

//copied from irat_common_enums.h
typedef enum
{
   EUTRAN_DISABLED,
   EUTRAN_ENABLED
} eutran_cap_enum; /* E-UTRAN capability */

/* The following should move to interrat interface file */
typedef enum {
   GSM_BAND_INDICATOR_DCS1800, /* Default */
   GSM_BAND_INDICATOR_PCS1900
} te_gsm_band_indicator;

/* Measured results related: UAS to GAS/EAS */
typedef enum {
   IR_BAR_STATUS_NOT_BARRED,
   IR_BAR_STATUS_BARRED
} te_ir_bar_status;

typedef enum {
   IR_RESEL_CRITERIA3_NOT_SATISFIED,
   IR_RESEL_CRITERIA3_UNKNOWN,
   IR_RESEL_CRITERIA3_SATISFIED
} te_ir_resel_criteria3_status;

typedef enum
{
    GSM_BAND_START  = 0,
    GSM_BAND_P = GSM_BAND_START,
    GSM_BAND_E      = 1,
    GSM_BAND_R      = 2,
    GSM_BAND_1800   = 3,
    GSM_BAND_1900   = 4,
    GSM_BAND_450    = 5,
    GSM_BAND_480    = 6,
    GSM_BAND_850    = 7,
    MAX_GSM_BANDS   = 8,
    UMTS_BAND_START = 9,
    UMTS_BAND       = UMTS_BAND_START,
    INVALID_BAND    = 0xff
}access_technology_type_enum;

typedef enum
{
   EL1_BANDWIDTH_6_RB,
   EL1_BANDWIDTH_15_RB,
   EL1_BANDWIDTH_25_RB,
   EL1_BANDWIDTH_50_RB,
   EL1_BANDWIDTH_75_RB,
   EL1_BANDWIDTH_100_RB,
   EL1_BANDWIDTH_INVALID
} eas_bandwidth_enum;

/* This enumeration represents whether evaluation or activation for the target 
 * E-UTRA is cell is successful, failure, or CCO timer timeout (only used by 
 * cell change order procedure).
 */
typedef enum
{
   IR_CELL_RESELECTION_SUCCESS,
   IR_CELL_RESELECTION_FAILURE,
   IR_CELL_RESELECTION_TIMEOUT
} te_ir_cell_reselection_status;

typedef enum {
   IR_CELL_RESELECTION,
   IR_CELL_CHANGE_ORDER,
   IR_REDIRECTION
#ifdef __CMCC_STD_FR__
   ,IR_STD_FR
#endif
   ,IR_AUTO_FAST_RETURN
   ,IR_NW_FAST_RETURN
   ,IR_BG_SRCH
   ,IR_HSR_CR
   ,IR_UMTS_FAST_RETURN
} te_ir_cell_change_trigger;

/* Define for Evaluation or Activation Failed Type */
typedef enum
{
   IR_INITIAL_VALUE   = 0x00,
   NEVER_ALLOWED      = 0x01,  //For Frequency Band Not Support Case.
   PLMN_ID_MISMATCHED = 0x02,   
   LA_NOT_ALLOWED     = 0x03,
   CELL_BARRED        = 0x04,
   TEMP_FAILURE       = 0x05,
   CRITERIA3_NOT_SATISFIED = 0x06,
   TA_NOT_ALLOWED     = 0x07,
   CELL_BARRED_FREQ   = 0x08,
   CELL_BARRED_RESV_OPERATOR = 0x09,
   CELL_BARRED_RESV_OPERATOR_FREQ = 0x0A,
   CSG_NOT_ALLOWED    = 0x0B,
   GEMINI_FAILURE     = 0x0C,
   NAS_REJECT         = 0x0D,
   SECTOR_VALIDATION_FAILURE = 0x0E,
   NOT_STABLE = 0x0F,
   BLACK_CELL = 0x10 
} te_eval_activate_fail_type;

typedef enum
{
    IR_REJECT_NONE,                     //When irat_result != IR_RESULT_REJECT
    IR_REJECT_SET_RAT,                  //RATCM SET RAT action ongoing
    IR_REJECT_PLMN_SEARCH,              //RATCM PLMN SEARCH action ongoing
    IR_REJECT_RF_OFF,                   //RATCM RF OFF action ongoing
    IR_REJECT_DEACTIVATE,               //RATCM DEACTIVATE for IR search action ongoing
    IR_REJECT_PS_DETACH,                //MM PS Detach ongoing
    IR_REJECT_ONGOING_CM_SERVICE        //MM has ongoing CM service
} irat_reject_cause_enum;

typedef enum {
   REPORT_CGI_STOP  = 0x00,
   REPORT_CGI_START = 0x01
} report_cgi_req_type_enum;

typedef enum {
   ACQ_CGI_SUCCESS             = 0x00,
   ACQ_CGI_FAIL_CELL_FOUND     = 0x01,
   ACQ_CGI_FAIL_CELL_NOT_FOUND = 0x02
} cgi_info_status_enum;

typedef enum
{
    MEAS_SCALE_FACTOR_NOT_AVAILABLE = 0,
    MEAS_SCALE_FACTOR_CONFIG1 = 1,
    MEAS_SCALE_FACTOR_CONFIG2 = 2
} meas_scale_factor_enum;

typedef enum {
   LCSCE_EUTRA_CELL_NOT_FOUND,                   // LTE info available and triggered meansurements, but no LTE cell found.
   LCSCE_EUTRA_RESEL_CRIT_NOT_MET,               // UE in idle and LTE measurments are going on, but cell reselection criterin not met.
   LCSCE_NO_REASON_TO_UPDATE
}LCSCE_REASON_NOT_MOVING_TO_LTE;

#endif /* __AS_INTER_CORE_ENUM_H__ */
