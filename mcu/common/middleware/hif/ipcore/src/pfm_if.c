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

/*******************************************************************************
 * Filename:
 * ---------
 *   pfm_if.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Packet Filter Manager public interface implementation.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *                 HISTORY
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_public_api.h"
#include "ipc_api.h"
#include "intrCtrl.h"
#include "ccci_ipc_msgid.h"

#include "mw_sap.h"
#include "ipc_debug.h"

#include "pfm_struct.h"
#include "pfm_defs.h"
#include "pfm_enums.h"
#include "pfm_object.h"

/*------------------------------------------------------------------------------
 * Global variables.
 *----------------------------------------------------------------------------*/
kal_spinlockid pfm_spinlock_g = NULL;
/*------------------------------------------------------------------------------
 * Helper macro.
 *----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Private data structure.
 *----------------------------------------------------------------------------*/
typedef void (*pfm_register_parser_func_t)(void *, kal_uint32, kal_bool);
typedef void (*pfm_deregister_callback_func_t)(kal_int32);

typedef struct _pfm_internal_filter_set_t {
    PFM_DECLARE_OBJECT

    kal_uint32  filter_set_id;
    kal_int32   filter_cnt;
    kal_int32   filters[PFM_FILTER_SET_MAX_SIZE];
} pfm_internal_filter_set_t;

/*------------------------------------------------------------------------------
 * Private variables.
 *----------------------------------------------------------------------------*/
const static pfm_register_parser_func_t pfm_register_parser_func_list_s[] = {
    #undef PFM_FILTER_SET_FEATURE_NAME
    #undef PFM_FILTER_SET_PREFIX
    #define PFM_FILTER_SET_FEATURE_NAME(_name) 
    #define PFM_FILTER_SET_PREFIX(_prefix) pfm_ ## _prefix ## _register_parser,
    #include "pfm_config.h"

};

const static pfm_deregister_callback_func_t pfm_deregister_callback_func_list_s[] = {
    #undef PFM_FILTER_SET_FEATURE_NAME
    #undef PFM_FILTER_SET_PREFIX
    #define PFM_FILTER_SET_FEATURE_NAME(_name) 
    #define PFM_FILTER_SET_PREFIX(_prefix) pfm_ ## _prefix ## _deregister_callback,
    #include "pfm_config.h"

};

static pfm_internal_filter_set_t pfm_ul_filter_set_list_s[NUM_OF_PFM_FILTER_SET_ID];
static pfm_internal_filter_set_t pfm_dl_filter_set_list_s[NUM_OF_PFM_FILTER_SET_ID];
static pfm_internal_filter_set_t *pfm_fsl_set_s[] = {pfm_dl_filter_set_list_s, pfm_ul_filter_set_list_s};

/*------------------------------------------------------------------------------
 * Private fucntions.
 *----------------------------------------------------------------------------*/
pfm_internal_filter_set_t *
pfm_get_filter_set_by_id(
    pfm_internal_filter_set_t  *filter_set_list,
    kal_uint32                  list_size,
    kal_uint32                  filter_set_id)
{
    pfm_internal_filter_set_t    *filter_set;

    if ( (NULL == filter_set_list) ||
         (filter_set_id >= list_size) ) {
        hif_trace_error(PFM_TR_GET_FILTER_SET_INVALID_PARAMS, filter_set_list, list_size, filter_set_id);
        return NULL;
    }

    filter_set = &filter_set_list[filter_set_id];

    if (!PFM_IS_VALID_OBJECT(filter_set)) {
        hif_trace_info(PFM_TR_GET_FILTER_SET_NEW_FILTER_SET, filter_set_list, filter_set_id, filter_set);
        PFM_INIT_OBJECT_BEGIN(filter_set, pfm_spinlock_g);

        filter_set->filter_set_id = filter_set_id;
        filter_set->filter_cnt = 0;
        kal_mem_set(filter_set->filters, -1, sizeof(filter_set->filters));

        PFM_INIT_OBJECT_END(filter_set, pfm_spinlock_g);
        return filter_set;
    }
    return filter_set;
}

void pfm_delete_filter_set(
    pfm_internal_filter_set_t   *filter_set)
{
    hif_trace_info(PFM_TR_DEL_FILTER_SET_BEGIN, filter_set);
    PFM_DEINIT_OBJECT_BEGIN(filter_set, pfm_spinlock_g);
    if (filter_set) {
        PFM_DEINIT_OBJECT_END(filter_set, pfm_spinlock_g);
    } else {
        PFM_ASSERT(KAL_FALSE);
    }
}

void pfm_dispatch_register_cmd(local_para_struct *local_para_ptr)
{
    pfm_filter_set_t   *fs;
    kal_uint8          *filters_buf;
    kal_bool            uplink;

    if (!local_para_ptr) {
        hif_trace_error(PFM_TR_DISPATCH_REGISTER_CMD_NULL_PARAMS);
        return;
    }

    fs = (pfm_filter_set_t *)local_para_ptr;
    filters_buf = (kal_uint8 *)(fs + 1);
    uplink = (fs->uplink == 1)? KAL_TRUE:KAL_FALSE;

    if ( (fs->filter_set_id >= NUM_OF_PFM_FILTER_SET_ID) ||
         (fs->filter_cnt <= 0) ) {
        hif_trace_error(PFM_TR_DISPATCH_REGISTER_CMD_INVALID_PARAMS, local_para_ptr, fs->filter_set_id, fs->filter_cnt);
        return;
    }

    hif_trace_info(PFM_TR_DISPATCH_REGISTER_CMD_BEGIN, fs->filter_set_id, fs->filter_cnt);
    /* Dispatch to pfm_xxx_register_parser() */
    pfm_register_parser_func_list_s[fs->filter_set_id](filters_buf, fs->filter_cnt, uplink);
}

void pfm_deregister_filter(
    kal_bool                        uplink,
    pfm_internal_filter_set_t      *filter_set,
    kal_int32                       filter_id)
{
    kal_int32           ipc_filter_id;

    if ( !filter_set || (filter_id < 0) || (filter_id >= PFM_FILTER_SET_MAX_SIZE)|| (filter_set->filter_cnt == 0) ) {
        hif_trace_error(PFM_TR_DEREG_FILTER_WITH_INVALID_PARAMS, uplink, filter_set, filter_id);
        PFM_ASSERT(KAL_FALSE);
        return;
    }

    ipc_filter_id = filter_set->filters[filter_id];
    hif_trace_info(PFM_TR_DEREG_FILTER_BEGIN, uplink, filter_set, filter_id, ipc_filter_id);
    if (-1 != ipc_filter_id) {
        if (uplink) {
            ipc_deregister_ul_filter(ipc_filter_id);
        } else {
            ipc_deregister_dl_filter(ipc_filter_id);
        }
        filter_set->filters[filter_id] = -1;
        filter_set->filter_cnt--;
    } else {
        PFM_ASSERT(KAL_FALSE);
    }
}

void pfm_deregister_filters(local_para_struct *local_para_ptr)
{
    pfm_filter_set_t   *fs;
    kal_int32          *filters_buf;

    pfm_internal_filter_set_t  *filter_set;
    kal_int32                   idx;

    if (!local_para_ptr) {
        hif_trace_error(PFM_TR_DEREG_FILTERS_NULL_PARAMS);
        return;
    }

    fs = (pfm_filter_set_t *)local_para_ptr;
    filters_buf = (kal_int32 *)(fs + 1);

    if ( (fs->filter_set_id >= NUM_OF_PFM_FILTER_SET_ID) ||
         (fs->filter_cnt == 0) ) {
        hif_trace_error(PFM_TR_DEREG_FILTERS_INVALID_PARAMS, local_para_ptr, fs->filter_set_id, fs->filter_cnt);
        PFM_ASSERT(KAL_FALSE);
        return;
    }

    filter_set = pfm_get_filter_set_by_id(pfm_fsl_set_s[fs->uplink], NUM_OF_PFM_FILTER_SET_ID, fs->filter_set_id);
    if (filter_set) {
        hif_trace_info(PFM_TR_DEREG_FILTERS_INFO, fs->uplink, fs->filter_set_id, fs->filter_cnt);
        if (-1 == fs->filter_cnt) {
            /* Deregister all filters. */
            for (idx = 0; idx < PFM_FILTER_SET_MAX_SIZE; idx++) {
                if (-1 != filter_set->filters[idx]) {
                    pfm_deregister_filter((fs->uplink == 1)?KAL_TRUE:KAL_FALSE, filter_set, idx);
                    pfm_deregister_callback_func_list_s[fs->filter_set_id](idx);
                    if (0 == filter_set->filter_cnt) {
                        pfm_delete_filter_set(filter_set);
                        break;
                    }
                }
            }
        } else {
            /* Deregister the specified filters. */
            if (fs->filter_cnt <= filter_set->filter_cnt) {
                for (idx = 0; idx < fs->filter_cnt; idx++) {
                    pfm_deregister_filter((fs->uplink == 1)?KAL_TRUE:KAL_FALSE, filter_set, filters_buf[idx]);
                    pfm_deregister_callback_func_list_s[fs->filter_set_id](idx);
                    if (0 == filter_set->filter_cnt) {
                        PFM_ASSERT(idx == (fs->filter_cnt - 1));
                        pfm_delete_filter_set(filter_set);
                    }
                }
            } else {
                PFM_ASSERT(KAL_FALSE);
            }
        }
    } else {
        hif_trace_error(PFM_TR_DEREG_FILTERS_FILTER_SET_NOT_FOUND, fs->uplink, fs->filter_set_id);
    }
}

kal_bool pfm_register_filter(
    kal_uint32              filter_set_id,
    kal_int32               filter_id,
    kal_bool                uplink,
    kal_bool                callback,
    kal_bool                with_info,
    ipc_filter_rules_t     *rules,
    void                   *callback_func,
    void                   *callback_context,
    module_type             callback_module)
{
    pfm_internal_filter_set_t  *filter_set;
    kal_int32                   ret;

    if ( (filter_set_id < 0) || (filter_set_id >= NUM_OF_PFM_FILTER_SET_ID) ||
         (filter_id < 0) || (filter_id >= PFM_FILTER_SET_MAX_SIZE) ||
         (!rules) ) {
        hif_trace_error(PFM_TR_REG_FILTER_INVALID_PARAMS, filter_set_id, filter_id, rules);
        PFM_ASSERT(KAL_FALSE);
        return KAL_FALSE;
    }

    filter_set = pfm_get_filter_set_by_id(pfm_fsl_set_s[uplink], NUM_OF_PFM_FILTER_SET_ID, filter_set_id);
    if (filter_set) {
        /* Deregister the filter if the filter_id has been used. */
        if (-1 != filter_set->filters[filter_id]) {
            pfm_deregister_filter(uplink, filter_set, filter_id);
        }

        if (KAL_FALSE == uplink) {
            rules->features |= IPC_FILTER_FEATURE_PFM_DL;
        }

        /* Call corresponding register API */
        if (uplink) {
            if (callback) {
                if (with_info) {
                    ret = ipc_register_ul_filter_with_info_cbk(rules, callback_func, callback_context);
                } else {
                    ret = ipc_register_ul_filter_cbk(rules, callback_func, callback_context);
                }
            } else {
                if (with_info) {
                    ret = ipc_register_ul_filter_with_info_msg(rules, callback_module, callback_context);
                } else {
                    ret = ipc_register_ul_filter_msg(rules, callback_module, callback_context);
                }
            }
        } else {
            if (callback) {
                if (with_info) {
                    ret = ipc_register_dl_filter_with_info_cbk(rules, callback_func, callback_context);
                } else {
                    ret = ipc_register_dl_filter_cbk(rules, callback_func, callback_context);
                }
            } else {
                if (with_info) {
                    ret = ipc_register_dl_filter_with_info_msg(rules, callback_module, callback_context);
                } else {
                    ret = ipc_register_dl_filter_msg(rules, callback_module, callback_context);
                }
            }
        }

        /* Check if registering is succeeded or not. */
        if (PFM_IPC_REGISTER_FILTER_FAIL != ret) {
            filter_set->filters[filter_id] = ret;
            filter_set->filter_cnt++;
        } else {
            hif_trace_error(PFM_TR_REG_FILTER_FAILED);
            return KAL_FALSE;
        }
    } else {
        hif_trace_error(PFM_TR_REG_FILTER_FILTER_SET_NOT_FOUND, uplink, filter_set_id);
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

kal_bool pfm_register_filter_cbk(
    kal_uint32              filter_set_id,
    kal_int32               filter_id,
    kal_bool                uplink,
    ipc_filter_rules_t     *rules,
    ipc_filter_callback_t   callback_func,
    void                   *callback_context)
{
    hif_trace_info(PFM_TR_REG_FILTER_CBK_BEGIN, filter_set_id, filter_id, uplink, rules, callback_func, callback_context);
    return pfm_register_filter(filter_set_id, filter_id, uplink, KAL_TRUE, KAL_FALSE, rules, callback_func, callback_context, MOD_NIL);
}

kal_bool pfm_register_filter_msg(
    kal_uint32              filter_set_id,
    kal_int32               filter_id,
    kal_bool                uplink,
    ipc_filter_rules_t     *rules,
    module_type             callback_module,
    void                   *callback_context)
{
    hif_trace_info(PFM_TR_REG_FILTER_MSG_BEGIN, filter_set_id, filter_id, uplink, rules, callback_module, callback_context);
    return pfm_register_filter(filter_set_id, filter_id, uplink, KAL_FALSE, KAL_FALSE, rules, NULL, callback_context, callback_module);
}

kal_bool pfm_register_filter_with_info_cbk(
    kal_uint32                        filter_set_id,
    kal_int32                         filter_id,
    kal_bool                          uplink,
    ipc_filter_rules_t               *rules,
    ipc_filter_with_info_callback_t   callback_func,
    void                             *callback_context)
{
    hif_trace_info(PFM_TR_REG_FILTER_WITH_INFO_CBK_BEGIN, filter_set_id, filter_id, uplink, rules, callback_func, callback_context);
    return pfm_register_filter(filter_set_id, filter_id, uplink, KAL_TRUE, KAL_TRUE, rules, callback_func, callback_context, MOD_NIL);
}

kal_bool pfm_register_filter_with_info_msg(
    kal_uint32              filter_set_id,
    kal_int32               filter_id,
    kal_bool                uplink,
    ipc_filter_rules_t     *rules,
    module_type             callback_module,
    void                   *callback_context)
{
    hif_trace_info(PFM_TR_REG_FILTER_WITH_INFO_MSG_BEGIN, filter_set_id, filter_id, uplink, rules, callback_module, callback_context);
    return pfm_register_filter(filter_set_id, filter_id, uplink, KAL_FALSE, KAL_TRUE, rules, NULL, callback_context, callback_module);
}

void pfm_matched_packet_trace(kal_int16 ebi, kal_uint8 *p_data, kal_uint32 bytes){
    kal_uint32   i = 0;
    kal_uint32  *p_dump = (kal_uint32 *)((int)p_data & (~0x3)); //4-bytes alignment

    hif_data_trace(PFM_GE_MATCHED_PACKET_INFO, ebi, (p_data[4]<<8|p_data[5]), (p_data[10]<<8|p_data[11]));
    for (i = 0; i*4 < bytes; i = i+4 ){
        hif_data_trace(PFM_GE_MATCHED_PACKET_DUMP, i*4, p_dump[i], p_dump[i+1], p_dump[i+2], p_dump[i+3]);
    }
}

void pfm_spinlock_init()
{
    PFM_ASSERT(!pfm_spinlock_g);
    pfm_spinlock_g = kal_create_spinlock(PFM_LOCK_NAME);
}

static kal_bool pfm_ap_fin_ack_reduction_handler(void)
{
    pfm_filter_set_t *p_filter_set = NULL;

    p_filter_set = (pfm_filter_set_t *)construct_local_para(sizeof(pfm_filter_set_t), TD_RESET);
    if (NULL == p_filter_set) {
        hif_trace_error(PFM_TR_FIN_ACK_FILTER_ALLOCATE_FAILED);
        return KAL_FALSE;
    }

    p_filter_set->filter_set_id = PFM_FIN_ACK_FILTER_SET_ID;
    p_filter_set->filter_cnt = 1;
    p_filter_set->uplink = KAL_FALSE;

    if (KAL_FALSE == msg_send6(kal_get_active_module_id(), MOD_IPCORE, IPCORE_SAP, MSG_ID_PFM_REGISTER_FILTER_REQ, (local_para_struct *)p_filter_set, NULL)) {
        hif_trace_error(PFM_TR_FIN_ACK_FILTER_SEND_ILM_FAILED);\
        return KAL_FALSE;
    }

    hif_trace_info(PFM_TR_FIN_ACK_FILTER_FIN_ACK_FILTER_REQ, p_filter_set->filter_set_id);
    return KAL_TRUE;
}

static void pfm_ap_suspend_handler(kal_uint32 bm_cmd)
{
    hif_trace_info(PFM_TR_FIN_ACK_FILTER_RECEIVED_AP_SUSPEND_CMD, bm_cmd);

    if (bm_cmd == PFM_AP_CMD_NONE) {
        /* no additional action */
        return;
    }

    if (bm_cmd & PFM_AP_CMD_FIN_ACK_REDUCTION) {
        if (KAL_FALSE == pfm_ap_fin_ack_reduction_handler()) {
            /* pfm_ap_fin_ack_reduction_handler failed */
            return;
        }
    }

    return;
}

static void pfm_ap_wakeup_handler()
{
    pfm_deregister_callback_func_list_s[PFM_FIN_ACK_FILTER_SET_ID](1);
    return;
}

static void pfm_ap_status_parser(local_para_struct *p_local_param)
{
    pfmApStatusInd *p_ap_status = (pfmApStatusInd *)p_local_param;

    ASSERT(NULL != p_ap_status);

    hif_trace_info(PFM_TR_FIN_ACK_FILTER_RECEIVED_AP_STATUS,
                   (p_ap_status->em_ap_status == PFM_AP_STATUS_SUSPEND) ? "suspend":"resume");
    switch(p_ap_status->em_ap_status) {
        case PFM_AP_STATUS_SUSPEND :
            pfm_ap_suspend_handler(p_ap_status->bm_cmd);
            break;
        case PFM_AP_STATUS_WAKE_UP :
            pfm_ap_wakeup_handler();
            break;
        default :
            /* unsupported status */
            hif_trace_error(PFM_TR_FIN_ACK_FILTER_RECEIVED_AP_INVALID_STATUS);
            break;
    }

    return;
}

/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/
void pfm_on_ilm(ilm_struct *ilm)
{
    ASSERT(NULL != ilm);

    switch (ilm->msg_id) {
        case MSG_ID_PFM_REGISTER_FILTER_REQ:
            pfm_dispatch_register_cmd(ilm->local_para_ptr);
            break;
        case MSG_ID_PFM_DEREGISTER_FILTER_REQ:
            pfm_deregister_filters(ilm->local_para_ptr);
            break;
        case MSG_ID_AP_STATUS_IND:
            pfm_ap_status_parser(ilm->local_para_ptr);
            break;
        default:
            break;
    }
}

kal_bool pfm_init(void)
{
    kal_uint32 i = 0;

    /* Init the static structure */
    kal_mem_set(pfm_ul_filter_set_list_s, 0, sizeof(pfm_ul_filter_set_list_s));
    kal_mem_set(pfm_dl_filter_set_list_s, 0, sizeof(pfm_dl_filter_set_list_s));

    for (i = 0; i < NUM_OF_PFM_FILTER_SET_ID; i++) {
        kal_mem_set(pfm_ul_filter_set_list_s[i].filters, -1, sizeof(kal_int32) * PFM_FILTER_SET_MAX_SIZE);
        kal_mem_set(pfm_dl_filter_set_list_s[i].filters, -1, sizeof(kal_int32) * PFM_FILTER_SET_MAX_SIZE);
    }

    pfm_spinlock_init();

    return KAL_TRUE;
}

kal_bool pfm_reset(void)
{
    kal_uint32 i = 0;

    /* Init the static structure */
    kal_mem_set(pfm_ul_filter_set_list_s, 0, sizeof(pfm_ul_filter_set_list_s));
    kal_mem_set(pfm_dl_filter_set_list_s, 0, sizeof(pfm_dl_filter_set_list_s));

    for (i = 0; i < NUM_OF_PFM_FILTER_SET_ID; i++) {
        kal_mem_set(pfm_ul_filter_set_list_s[i].filters, -1, sizeof(kal_int32) * PFM_FILTER_SET_MAX_SIZE);
        kal_mem_set(pfm_dl_filter_set_list_s[i].filters, -1, sizeof(kal_int32) * PFM_FILTER_SET_MAX_SIZE);
    }

    return KAL_TRUE;
}
