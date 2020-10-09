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
*  LAWS PRINIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   custom_emm_config.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file is used to define the EMM configuration.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifdef __EMM_ENABLE__

#ifndef _CUSTOM_EMM_CONFIG_H
#define _CUSTOM_EMM_CONFIG_H

#include "kal_general_types.h"
#include "ps_public_utility.h"
#include "l3_inc_enums.h"
#include "l3_inc_local.h"

#define DEFAULT_FTAI_EXPR_TIME      43200       // the clear period of FTAI list, default setting is 43200 seconds(12 hours)
#define CUSTOM_T3402_VALUE          120         // customized T3402 value (120 seconds)

#define DEFAULT_DETACH_RETRY_MAX_COUNTER 5      // TS24.301 5.5.2.2.4 abnormal case (c) five attempts
#define CUSTOM_EMM_T_PLMNLIST_REL        5      // default is 5 sec, minimum is 2 sec

#define CUSTOM_EMM_T_IGNORE_PS_PAGING    15     //default 15s, suggest 12 ~ 50

#define DEFAULT_RATBAND_REL_CONN_TIME    2000   // Unit of RATBAND_REL_CONN_TIMER is milisecond. Customize default length of RATBAND_REL_CONN_TIMER to 2 sec

#define CUSTOM_EMM_T_CSFB_USER_RSP   7   // default is 7 sec
#define CUSTOM_EMM_T_IGNORE_SAME_NUMBER_OF_CS_SERVICE_NOTIFICATION   3   // default is 3 sec

#define CUSTOM_NW_DET_ENH_MAX_COUNTER    3      // customized counter for NW detach abnormal case b convert to re-attach
#define CUSTOM_NW_DET_ENH_MAX_INTERVAL_TIME    3600      // customized interval time for NW detach abnormal case b convert to re-attach

#define CUSTOM_T3410_VALUE          30          // unit: sec. default 30s, so that one can extend T3410 length with SBP control only
#define CUSTOM_EMM_PS_HIGH_SEM_REL_EXTD   100   //default is 100 millisec
#define CUSTOM_EMM_T_QUEUE_PS_PAGING 10 //default 8s, suggest not lower than 8s
#define CUSTOM_EMM_T_ACTIVE_QUEUE_PS_PAGING 0 //default 0s : always active queue paging, value > 0 : deactive queue paging when timer timeout
#define CUSTOM_EMM_T_RELEASE_PAGING_SEMAPHORE   100   //default is 100 millisec
#define CUSTOM_EMM_T_OBSERVATION_PAGING        7      // default is 7 sec
#define CUSTOM_EMM_T_PS_PAGING_PROTECT_EXTEND_MAX        5000      // default max is 5000 millisec

#define CUSTOM_NAS_RECOVERY_TAU_MAX_COUNT    3      //customized count for maximum number of recovery sync TAU done with NW. Value 0 indicates No sync TAU done

/*************************************************************************
* Variable
*************************************************************************/
extern const kal_char* emm_proc_fail_handling_op_list[];
extern const kal_uint8 EMM_PROC_FAIL_HANDLING_OP_NUM;
extern const plmn_id_op_struct plmn_op_map_list[];
extern const kal_uint32 CUSTOM_PLMN_OP_LIST_NUM;
extern const kal_char* emm_custom_get_short_t3417ext_op_list[];
extern const kal_uint16 EMM_CUSTOM_GET_SHORT_T3417EXT_OP_NUM;
extern const kal_char* emm_custom_get_queue_ps_paging_op_list[];
extern const kal_uint16 EMM_CUSTOM_GET_QUEUE_PS_PAGING_OP_NUM;
extern const kal_char* emm_custom_get_auth_rej_not_bar_cell_op_list[];
extern const kal_uint16 EMM_CUSTOM_GET_AUTH_REJ_NOT_BAR_CELL_OP_NUM;

/*************************************************************************
* Function
*************************************************************************/
extern kal_uint32 emm_custom_get_ftai_timer_length(kal_uint8 *mccmnc);

extern kal_uint32 emm_custom_get_detach_retry_max_counter(kal_uint8 *mccmnc);

extern emm_cause_enum emm_custom_get_customize_cause(emm_msg_type_enum emm_msg, emm_cause_enum emm_cause, kal_bool is_hplmn, 
                                                     kal_bool is_test_sim, protocol_id_enum protocol_id, kal_uint8 *mccmnc);

extern kal_bool emm_custom_get_t3402_nw_detach_other_cause(emm_cause_enum emm_cause, kal_uint32 *cust_t3402);
extern kal_uint32 emm_custom_get_plmn_list_local_release_timer_length();

extern kal_uint8 emm_custom_get_nw_det_enh_max_counter();
extern kal_uint32 emm_custom_get_nw_det_enh_max_interval_time();
extern kal_bool emm_custom_is_nw_det_enh_cause(emm_cause_enum emm_cause, kal_uint8 *mccmnc);

extern kal_uint32 emm_custom_get_ignore_ps_paging_timer_length();
extern kal_uint32 emm_custom_get_csfb_user_rsp_timer_length();
extern kal_uint32 emm_custom_get_ignore_same_number_of_cs_service_notification_timer_length();

extern kal_uint32 emm_custom_get_t_ratband_rel_conn_timer_length();
extern kal_uint32 emm_custom_get_t3410_timer_length();
extern kal_uint32 emm_custom_get_ps_high_sem_rel_extd_timer_length();
extern kal_uint32 emm_custom_get_queue_ps_paging_timer_length();
extern kal_uint32 emm_custom_get_active_queue_ps_paging_timer_length();
extern kal_uint32 emm_custom_get_release_paging_semaphore_timer_length();
extern kal_uint32 emm_custom_get_observation_paging_timer_length();
extern kal_uint32 emm_custom_get_ps_paging_protect_extend_max_value();
extern kal_uint8 emm_custom_get_nas_recovery_tau_max_counter();

#endif /* _CUSTOM_EMM_CONFIG_H */

#endif /* __EMM_ENABLE__ */
