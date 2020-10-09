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

 /*******************************************************************************
 * Filename:
 * ---------
 *   em_nwsel_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_NWSEL_PUBLIC_STRUCT_H
#define _EM_NWSEL_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "em_nwsel_common_public_struct.h"

#include "kal_public_defs.h"

#define MMRR_MAX_NUM_PRIORITY_PLMNS  20
#define MMRR_MAX_NUM_AVAILABLE_PLMNS 20

#define MMRR_PLMN_INFO_LOW_QUALITY_PLMN    1
#define MMRR_PLMN_INFO_HIGH_QUALITY_PLMN   0
#define MMRR_PLMN_INFO_QUALITY_PLMN_OFFSET 7

#define MMRR_PLMN_INFO_RAT_LTE             2
#define MMRR_PLMN_INFO_RAT_UMTS            1
#define MMRR_PLMN_INFO_RAT_GSM             0
#define MMRR_PLMN_INFO_RAT_OFFSET          3

#define MMRR_PLMN_INFO_OTHER_PLMN          4
#define MMRR_PLMN_INFO_OPLMN               3
#define MMRR_PLMN_INFO_UPLMN               2
#define MMRR_PLMN_INFO_PLMNSEL             1
#define MMRR_PLMN_INFO_HPLMN               0

#define MMRR_MAX_NUM_HPLMN_RAT_DATA          16
#define MMRR_MAX_NUM_OPLMN_RAT_DATA          200
#define MMRR_MAX_NUM_STATIC_APPLMN_RAT_DATA  384
#define MMRR_MAX_NUM_DYNAMIC_APPLMM_RAT_DATA 96

typedef enum {
    EM_CELL_TYPE_SUITABLE       = 0,
    EM_CELL_TYPE_ACCEPTABLE     = 1,
    EM_CELL_TYPE_CAMPED_NOT_ALLOWED = 2,
    EM_CELL_TYPE_NOT_APPLICABLE = 3
} em_as_cell_type_enum;

typedef struct
{
    kal_uint8 mcc1;
    kal_uint8 mcc2;
    kal_uint8 mcc3;
    kal_uint8 mnc1;
    kal_uint8 mnc2;
    kal_uint8 mnc3;
    em_as_cell_type_enum cell_type;
} em_multi_plmn_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 is_higher_pri_plmn_srch; /* indicate that if the higher priority PLMN search is performing */
    kal_uint8 hp_timeout_timer; /* higher priority PLMN search timer (6 mins per unit) */
    kal_uint8 hp_count_down_timer; /* higher priority PLMN search count down timer (6 mins per unit) */
    kal_uint8 rplmn[6]; /* RPLMN */
    kal_uint8 eq_plmn[5][6]; /* 1~5 equivalent PLMNs (6 digits for each PLMN ID) */
    kal_uint8 forbid_plmn[4][6]; /* 1~4 forbidden PLMNs (6 digits for each PLMN ID) */
    kal_uint8 mnc_length;
    /* Gibran 20090525: Added for Network Sharing multiple PLMN and DSAC */
    /* #define MAX_NUM_MULTI_PLMN    6 */
    kal_uint8 multi_plmn_count;
    em_multi_plmn_struct multi_plmn_id[6];
    kal_uint32 min_hplmn_search_period;
    kal_uint8 hplmn[6];
    kal_uint8 previous_rplmn[6];
    kal_uint8 requested_plmn[6];
    kal_uint8 plmn_sel_mode;
} em_nwsel_plmn_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 rplmn[6];
    kal_uint8 plmn_sel_mode;
    kal_uint8 loss_rat;
} em_nwsel_plmn_loss_info_ind_struct;  //add for auto test tool

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 result;
    kal_uint8 plmn_sel_mode;
    kal_uint8 search_rat;
} em_nwsel_plmn_search_cnf_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    /* TS 24.301 subclause 4.5
     * As an implementation option, the UE may start a timer for enabling E-UTRA  when the UE's attach attempt
     * counter or tracking area updating attempt counter reaches 5 and the UE disables E-UTRA capability for cases
     * described in subclauses 5.5.1.3.4.3, 5.5.1.3.6, 5.5.3.3.4.3 and 5.5.3.3.6.
     */
    kal_uint32 eutran_disable_timer_value; /* seconds */

    /* TS 23.122 subclause 3.1
     * If MS that has disabled its E-UTRA capability re-enables it when PLMN selection is performed, then the MS
     * should, for duration of timer TD, memorize the PLMNs where E-UTRA capability was disabled as PLMNs where voice
     * service was not possible.
     */
    kal_uint32 eutran_disable_td_timer_value; /* seconds */

    /* Clear Codes Data requirement - Telcel (Mexico)
     * Clear codes 23 & 33: ESM reject cause #29 and #33 happens 3 times, then disable EUTRAN for 2hrs.
     * After 2 hrs, enable EUTRAN and search 4G.
     */
    kal_uint32 eutran_disable_esm_timer_value; /* seconds */

    /* In FT experience, UE will be rejected with cause #15 in 4G if 23G only SIM is used.
     * In the end, even UE can't camp on 4G cell, AS may measure LTE cell frequently
     * and fail the power consumption test. For power saving purpose, if UE is rejected with #15
     * in HPLMN, disable EUTRAN in HPLMN for 12hr
     *
     * For CHT 3G only SIM card, UE may also be reject with cause #13 in 4G.
     */
    kal_uint32 eutran_disable_for_rej_in_hplmn_timer_value; /* seconds */

    /* When UE loss coverage or in limited service state
     * UE will start recovery timer and perform plmn search after timer expiry
     */
    kal_uint32 recovery_timer_value; /* seconds */

    /* When UE registers to VPLMN, UE will start high priority plmn search timer.
     * UE will attempt to perform plmn search for higher priority plmn after timer expiry
     */
    kal_uint32 high_prio_search_timer_value; /* seconds */

    /* Reset abnormal LAI list after timer expiry */
    kal_uint32 retry_abnormal_lai_timer_value; /* seconds */

    /* Reset abnormal RAI list after timer expiry */
    kal_uint32 retry_abnormal_rai_timer_value; /* seconds */

    /* MTC t3245 timer */
    kal_uint32 t3245_timer_value; /* seconds */
} em_nwsel_timer_info_ind_struct;
typedef enum
{
    EM_EUTRAN_NOT_DISABLE,
    EM_NO_USIM,
    EM_SIM_INVALID_FOR_PS,
    EM_NO_PS_ATTACH_REQ,
    EM_CS_NOT_AVAILABLE,
    EM_REJ_AS_GPRS_FPLMN,
    EM_REJ_AS_16_17_22,
    EM_REJ_AS_18,
    EM_REJ_AS_13_15,
    EM_REJ_AS_ESM_FPLMN,
    EM_REJ_CS_ABNORMAL,
    EM_REJ_PS_ABNORMAL,
    EM_CSFB_UNAVAILABLE,
    EM_NO_IMS_SUPPORT,
    EM_NO_IMS_AND_CSFB_SUPPORT,
    EM_IMS_UNREGISTERED,
    EM_IMS_UNREGISTERED_PS_ABNORMAL,
    EM_CUSTOM_DISABLED_PLMN,
    EM_REJ_AS_42,
}em_nwsel_eutran_disable_cause;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    plmn_struct plmn_id;
    em_nwsel_eutran_disable_cause cause;
} em_nwsel_eutran_disable_info_ind_struct;


typedef enum {
    BACKGROUND_ATUO_LIST = 0,
    BACKGROUND_MANUAL_LIST = 1
} background_list_type;

typedef struct
{
    kal_uint8 plmn_id[3];
    kal_uint8 rat;
}nwsel_em_pplmn_rat_struct;

typedef struct
{
    kal_uint8 plmn_id[3];
    kal_uint8 plmn_details;  /* b8, Signal Quality: 0-Signal HIGH, 1-Signal LOW
                                b5-b4, RAT: 00-GSM, 01-UMTS.
                                b3-b1, PLMN Category: 000-HPLMN, 001-PREFERRED PLMN, 010-USER Preferred PLMN,
                                                      011-OPERATOR Preferred PLMN, 100-OTHER PLMN */
    kal_uint8 signal_strength;
}nwsel_em_detail_plmn_info_struct;

typedef struct
{
    kal_uint32       time_scan_start;
    kal_uint32       time_scan_end;
    kal_uint16       band_ind;
    kal_uint16       dl_arfcn;   //For GSM, dl_arfcn should be 0xFFFF.
    kal_uint16       ul_arfcn;   //For GSM, ul_arfcn should be 0xFFFF.
    kal_uint16       gsm_bsic;   //For UMTS/LTE, gsm_bsic should be 0xFFFF.
    kal_uint16       gsm_arfcn;  //For UMTS/LTE, gsm_arfcn should be 0xFFFF.
}nwsel_em_detail_plmn_freq_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 network_selection_mode; /* 0-Auto,1-Manual,2-Limited */
    kal_uint8 rat;
    background_list_type service_search;
    kal_uint16 num_pplmns;
    nwsel_em_pplmn_rat_struct pplmns[MMRR_MAX_NUM_PRIORITY_PLMNS];  /* Amazon Software Reqirements Specification request 20 pplmn/rat combinations */
} em_nwsel_plmn_list_req_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 network_selection_mode;
    kal_bool  search_complete;
    background_list_type service_search;
    kal_uint8 num_available_plmns;
    nwsel_em_detail_plmn_info_struct info[MMRR_MAX_NUM_AVAILABLE_PLMNS];
    nwsel_em_detail_plmn_freq_struct info_freq[MMRR_MAX_NUM_AVAILABLE_PLMNS];
    kal_uint32 curr_sys_tick;
    wall_clock curr_wall_clock; 
} em_nwsel_plmn_list_cnf_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 network_selection_mode;
    nwsel_em_pplmn_rat_struct requested_plmn;
} em_nwsel_plmn_search_req_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_bool result;
    kal_uint8 num_available_plmns;
    nwsel_em_detail_plmn_info_struct info[MMRR_MAX_NUM_AVAILABLE_PLMNS];
} em_nwsel_plmn_search_cnf_info_type2_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint16 num_of_plmn;
    nwsel_em_pplmn_rat_struct plmn_rat_info[MMRR_MAX_NUM_HPLMN_RAT_DATA];
} em_nwsel_hplmn_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint16 num_of_plmn;
    nwsel_em_pplmn_rat_struct plmn_rat_info[MMRR_MAX_NUM_OPLMN_RAT_DATA];
} em_nwsel_oplmn_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint16 num_of_plmn;
    nwsel_em_pplmn_rat_struct plmn_rat_info[MMRR_MAX_NUM_STATIC_APPLMN_RAT_DATA];
} em_nwsel_static_applmn_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint16 num_of_plmn;
    nwsel_em_pplmn_rat_struct plmn_rat_info[MMRR_MAX_NUM_DYNAMIC_APPLMM_RAT_DATA];
} em_nwsel_dynamic_applmn_info_ind_struct;


#endif /* _EM_NWSEL_PUBLIC_STRUCT_H */

