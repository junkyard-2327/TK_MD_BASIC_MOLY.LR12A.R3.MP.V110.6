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
 *      rlc_enums.h
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

#ifndef _RLC_ENUMS_H
#define _RLC_ENUMS_H

//for test mode
typedef enum
{
    GPRS_TEST_MODE_A,
    GPRS_TEST_MODE_B,
    EGPRS_SRB_LOOPBACK_MODE
} gprs_test_mode;

typedef enum
{
    RLC_HO_IDLE,
    RLC_HO_START,
    RLC_HO_STATE_NUM
} rlc_ho_mode;

typedef enum
{
    RLC_UNLOCKED_UL,
    RLC_LOCK_UL_WAIT_FOR_XID,
    RLC_UL_Q_FLUSHED,
    RLC_XID_IN_Q,
    RLC_NUM_XID_STATE
} rlc_psho_xid_state_enum;

#include "l3_inc_enums.h"
typedef enum {
    RLC_TX_SUCCESS =  DC_Status_SUCCESS ,
    RLC_TX_FAIL = DC_Status_Normal_FAILURE,
    RLC_TX_FAIL_WITH_CELL_RESEL = DC_Status_GAS_CellResel_Discard,
    RLC_TX_FAIL_CCO_ACTIVATION_TIME_ONGOING = DC_Status_RLC_CCO_Activation_Time_Ongoing,
    RLC_TX_FAIL_WITH_GPRS_RESUME = DC_Status_GAS_RLC_GPRS_Resume_Discard,    /*SM/MM ask RLC to send CNF to LLC if RLC discard signalling pdu when GPRS_RESUME */
    RLC_TX_FAIL_NO_CELL_COVERAGE = DC_Status_RLC_No_Cell_Coverage_Discard
#ifdef __MULTIPLE_PS__
    ,
    RLC_TX_FAIL_GEMINI_PS_ACTIVE = DC_Status_Gemini_Fail
#endif /* __MULTIPLE_PS__ */
} rlc_tx_status_enum;

#ifdef __EGPRS_MODE__
typedef enum
{
    RLC_DECODE_OK,
    RLC_NACK_BLOCK,
    RLC_INVALID_BITMAP,
    RLC_INVALID_SSN
} rlc_decode_bitmap_result;
#endif /* __EGPRS_MODE__ */ /* __EPSK_TX__ */

typedef enum
{
    RLC_IDLE,
    RLC_OPEN_PEND,
    RLC_TRANSFER,
    RLC_REL_PEND,
    RLC_UL_TEST_MODE,
    RLC_NUM_STATES
} rlc_state_enum;

typedef enum
{
    RLC_DL_IDLE,
    RLC_DL_TRANSFER,
    RLC_DL_REL_PEND,
    RLC_DL_TEST_MODE,
    RLC_DL_NUM_STATES
} rlc_dl_state_enum;

typedef enum
{
    RLC_ACKED,
    RLC_NACKED,
    RLC_PEND_ACK,
    RLC_NEW_BLK
        //,
        // RLC_BLK_TO_DELETE
} rlc_blk_state_enum;

typedef enum
{
    RLC_RESOLVED,
    RLC_INPROGRESS
} rlc_phase_cont_enum;

typedef enum
{
    RLC_NO,
    RLC_YES
} rlc_bool_enum;

typedef enum
{
    RLC_PFI_BEST_EFFORT = 0,
    RLC_PFI_SIGNAL
} rlc_pfi_type;

typedef enum
{
    RLC_ACCESS_ALLOW = 0,
    RLC_ACCESS_NOT_ALLOW,
    RLC_ACCESS_T3142_RUNNING,
    RLC_ACCESS_NOT_ALLOW_AND_T3142_RUNNING
}
rlc_access_state_enum;

typedef enum
{
    PREVIOUS_BLK,
    CURRENT_BLK,
    NEXT_BLK
} reseg_blk_type_enum;

typedef enum
{   /* shall sync with RLC_TIMER_NUM_MSGS value */
    RLC_T3182_TIMER_ID = 0,
#ifndef __REMOVE_FA__
    RLC_T3184_TIMER_ID,
#endif /* __REMOVE_FA__ */

    RLC_READY_TIMER_ID, /* Vincent: new add */
#ifdef __GERAN_R4__
    RLC_T3185_TIMER_ID,
#endif /* __GERAN_R4__ */
    RLC_PS_CONF_TIMER_ID,
    RLC_EVENT_TIMER_ID,
    RLC_TIMER_NUM_MSGS
} rlc_timer_id_enum;    /* RLC_TIMER Message Type */

#ifdef __EGPRS_MODE__
typedef enum
{
    PUN_SCHEME1,
    PUN_SCHEME2,
    PUN_SCHEME3
} pun_scheme_enum;
#endif /* __EGPRS_MODE__ */ 

typedef enum
{
    RLC_ACKED_BLK_RETRANS_FLUSH,
    CONTENTION_RESOLVED_FLUSH,
    CS_CHANGED_FLUSH,
    ULTBF_END_FLUSH,
    RLC_NACK_FLUSH,
    STALL_CHANGED_FLUSH,
    UNACK_CV0_FLUSH,
    EXT_ULTBF_FLUSH,
    MAC_FLUSH_ALL,
    TBF_CHANGED_IN_PSHO_FLUSH,
    NO_FLUSH
} flush_cause_enum;

typedef enum
{
    RLC_TBF_SWITCH_FAIL,
    RLC_TBF_SWITCH_NO_TBF,
    RLC_TBF_SWITCH_SUCCESS,
    RLC_TBF_SWITCH_ADD_NEW_TBF,
    RCL_TBF_SWTICH_NO
} rlc_tbf_switch_enum;

/* typedef enum
   {
   RLC_RES_REQ_IDLE = 0,
   RLC_RES_REQ_WAIT 
   } rlc_res_req_state_enum; */
   
/* typedef enum{
   RLC_EVENT_TIMER_ID = 3182
   }RLC_TIMER_ID_ENUM; */

#endif /* _RLC_ENUMS_H */
