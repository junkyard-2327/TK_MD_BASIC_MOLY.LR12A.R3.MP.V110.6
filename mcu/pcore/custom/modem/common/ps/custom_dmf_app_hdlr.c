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

/*****************************************************************************
 * Filename:
 * ---------
 * custom_dmf_app_hdlr.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is for customized DMF APP handler/callback functions
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 10 30 2019 danny.kuo
 * [MOLY00455868] DMF Customization Framework
 * .
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"

#include "sim_exported_enum.h"
#include "mte_if.h"

#include "l3_inc_enums.h"

#include "atp_dmf_struct.h"
#include "custom_dmf_app.h"

#include "dmf_public_event.h"
#include "dmf_public_api.h"

kal_uint32 event_attach_request = 0;
kal_uint32 event_attach_success = 0;
kal_uint32 event_attach_fail = 0;

kal_bool dmf_custom_at_req_handler(protocol_id_enum ps_id, atp_mt_dmf_cmd_req_struct *req_struct)
{
/*
    if (req_struct->app_id == DEFAULT_CUST_APP_ID)
    {
        if (req_struct->p.custom_app_cmd_req.cause == 2)
        {
            dmf_custom_attach_count_cnf_struct attach_count;

            attach_count.cause = 2;
            kal_mem_cpy(attach_count.event, req_struct->p.custom_app_cmd_req.event, 100);
            attach_count.event_len = strlen(attach_count.event);
            attach_count.lte_attach_request_count = event_attach_request;
            attach_count.lte_attach_success_count = event_attach_success;
            attach_count.lte_attach_fail_count = event_attach_fail;

            // send +EDMFAPP: <APP_ID>, <cause>, <event>, <lte_attach_request_count>, <lte_attach_success_count>, <lte_attach_fail_count>
            dmf_send_at_rsp(req_struct->ch_id, ps_id, DEFAULT_CUST_APP_ID, 
                    PROXY_CMD_INTERMEDIATE_RSP, DMF_CUSTOM_ATTACH_COUNT_CNF, &attach_count, sizeof(dmf_custom_attach_count_cnf_struct));

            // send AT Response : OK
            dmf_send_at_final_rsp(req_struct->ch_id, ps_id, DEFAULT_CUST_APP_ID, PROXY_CMD_FAIL);

            event_attach_request = 0;
            event_attach_success = 0;
            event_attach_fail = 0;
        }
        else
        {
            // send AT Response : ERROR
            dmf_send_at_final_rsp(req_struct->ch_id, ps_id, DEFAULT_CUST_APP_ID, PROXY_CMD_FAIL);
        }
        return KAL_TRUE;
    }
*/
    // if the reuest is not handled by this function, return KAL_FALSE        
    return KAL_FALSE;
}

void dmf_event_cmcc_eps_attach_info_handler (dmf_event_struct *event)
{
/*
    dmf_event_cmcc_eps_attach_struct *attach_info;
    dmf_custom_attach_count_ind_struct attach_count;

    attach_info = (dmf_event_cmcc_eps_attach_struct*) event->data;

    if (attach_info->attach_event == DMF_CMCC_EPS_ATTACH_REQUEST)
    {
        event_attach_request++;
    }
    else if (attach_info->attach_event == DMF_CMCC_EPS_ATTACH_SUCCESS)
    {
        event_attach_success++;
    }
    else if (attach_info->attach_event == DMF_CMCC_EPS_ATTACH_FAIL)
    {
        if ( (attach_info->attach_reject_cause == EMM_CAUSE_IMSI_UNKNOWN_IN_HSS) ||
                (attach_info->attach_reject_cause == EMM_CAUSE_ILLEGAL_UE) ||
                (attach_info->attach_reject_cause == EMM_CAUSE_ILLEGAL_ME) ||
                (attach_info->attach_reject_cause == EMM_CAUSE_EPS_NOT_ALLOWED) ||
                (attach_info->attach_reject_cause == EMM_CAUSE_EPS_NON_EPS_NOT_ALLOWED) ||
                (attach_info->attach_reject_cause == EMM_CAUSE_NO_SUITABLE_CELL_IN_TA) ||
                (attach_info->attach_reject_cause == EMM_CAUSE_ESM_FAILURE) )
        {
            event_attach_success++;
        }
        else
        {
            event_attach_fail++;
        }
    }

    attach_count.cause = 1;
    kal_mem_cpy(attach_count.event, "This is sample code for event", sizeof("This is sample code for event"));
    attach_count.event_len = strlen(attach_count.event);
    attach_count.lte_attach_request_count = event_attach_request;
    attach_count.lte_attach_success_count = event_attach_success;
    attach_count.lte_attach_fail_count = event_attach_fail;

    // send +EDMFAPP: <APP_ID>, <cause>, <event>, <lte_attach_request_count>, <lte_attach_success_count>, <lte_attach_fail_count>
    dmf_send_at_urc(DEFAULT_CUST_APP_ID, event->ps_id, DMF_CUSTOM_ATTACH_COUNT_IND, &attach_count, sizeof(dmf_custom_attach_count_ind_struct));
*/
}

/*
 * The following shall be removed after EMM check-in their structures into em_emm_public_struct.h
 */
#include "l3_inc_enums.h"

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum            em_info;
	
    /* [MOLY00170623] VzW MDMI KPI - emmFailureCauseEvent*/
    kal_bool                is_attach_rej_cause_valid;
    emm_cause_enum          emm_attach_rej_cause;

    /* CHR requirement - event(only one can be true)*/
    kal_bool                is_attach_request;
    kal_bool                is_attach_accept;
    kal_bool                is_attach_reject;
    kal_bool                is_t3410_expiry;
    kal_bool                is_tau_reject;
    kal_bool                is_imsi_paging;
    kal_bool                is_nw_detach;

    /* CHR requirement - value*/
    // valid when is_attach_reject is KAL_TRUE
    emm_attach_type_enum    attach_type;
    // valid when is_tau_reject is KAL_TRUE
    emm_update_type_enum    tau_type;
    emm_cause_enum          emm_tau_rej_cause;
    // always valid
    kal_bool                is_data_sim;
} em_emm_reg_event_info_ind_struct;


void dmf_custom_emm_em_reg_event_info_handler(const mte_rule_t *mte_rule, void* msg, kal_uint32 msg_size)
{
/*
    protocol_id_enum ps_id;
    ilm_struct *ilm_ptr = (ilm_struct*) msg;
    em_emm_reg_event_info_ind_struct *em_msg_ptr;
    dmf_custom_attach_count_ind_struct attach_count;

    em_msg_ptr = (em_emm_reg_event_info_ind_struct*) ilm_ptr->local_para_ptr;            
    ps_id = ilm_ptr->src_mod_id - MOD_EMM;

    if (em_msg_ptr->is_attach_request)
    {
        event_attach_request++;
    }
    else if (em_msg_ptr->is_attach_accept)
    {
        event_attach_success++;
    }
    else if (em_msg_ptr->is_attach_reject)
    {
        if ( (em_msg_ptr->emm_attach_rej_cause == EMM_CAUSE_IMSI_UNKNOWN_IN_HSS) ||
                (em_msg_ptr->emm_attach_rej_cause == EMM_CAUSE_ILLEGAL_UE) ||
                (em_msg_ptr->emm_attach_rej_cause == EMM_CAUSE_ILLEGAL_ME) ||
                (em_msg_ptr->emm_attach_rej_cause == EMM_CAUSE_EPS_NOT_ALLOWED) ||
                (em_msg_ptr->emm_attach_rej_cause == EMM_CAUSE_EPS_NON_EPS_NOT_ALLOWED) ||
                (em_msg_ptr->emm_attach_rej_cause == EMM_CAUSE_NO_SUITABLE_CELL_IN_TA) ||
                (em_msg_ptr->emm_attach_rej_cause == EMM_CAUSE_ESM_FAILURE) )
        {
            event_attach_success++;
        }
        else
        {
            event_attach_fail++;
        }
    }
    else
    {
        return;
    }

    attach_count.cause = 1;
    kal_mem_cpy(attach_count.event, "This is sample code for event cause 2", sizeof("This is sample code for event cause 2"));
    attach_count.event_len = strlen(attach_count.event);
    attach_count.lte_attach_request_count = event_attach_request;
    attach_count.lte_attach_success_count = event_attach_success;
    attach_count.lte_attach_fail_count = event_attach_fail;

    // send +EDMFAPP: <APP_ID>, <cause>, <event>, <lte_attach_request_count>, <lte_attach_success_count>, <lte_attach_fail_count>
    dmf_send_at_urc(DEFAULT_CUST_APP_ID, ps_id, DMF_CUSTOM_ATTACH_COUNT_IND, &attach_count, sizeof(dmf_custom_attach_count_ind_struct));

*/
}
