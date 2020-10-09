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
 *   ipc_filter.c
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   Packet filtering.
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
 *
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_public_api.h"
#include "intrCtrl.h"
#include "mw_sap.h"
#include "ipcore_upcm_struct.h"
#include "ipc_packet_parser.h"

#if defined (__HIF_CCCI_SUPPORT__)
#include "ccci_if.h"
#endif

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
    #include "mdt_api.h"
#endif

#include "ipc_api.h"
#include "ipc_enums.h"
#include "ipc_defs.h"
#include "ipc_debug.h"
#include "ipc_utils.h"
#include "ipc_filter.h"
#include "ipc_data.h"
#include "ipcore_iph.h"
#include "qmu_bm_util.h"


#include "hif_swla.h"

#if defined(__MTK_MD_DIRECT_TETHERING_SUPPORT__)
    #include "mdt_api.h"
#endif

extern kal_uint16 ipc_calc_tcp_checksum(kal_bool is_ipv4, kal_uint8 *src_addr, kal_uint8 *dst_addr, kal_uint8 *tcp_header, kal_uint32 tcp_len);
extern kal_uint16 ipc_calc_ipv4_checksum(kal_uint8 *ip_header);


typedef struct _ipc_filter_list_t {
    kal_uint32              count;
    ipc_filter_t           *filter_head;
    kal_uint8               ip_type;
} ipc_filter_list_t;

/*------------------------------------------------------------------------------
 * Global variables.
 *----------------------------------------------------------------------------*/
kal_uint32  ipc_dl_valid_packet_len_s;
kal_bool    ipc_is_support_ccci_fast_header_s;
#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
    /* For MD Direct Tethering packet routing queue */
    ipc_mdt_routing_packet_list_t   ipc_mdt_packet_routing_queue[2][IPC_MAX_NETIF_CNT];
    kal_bool                        ipc_mdt_queue_non_empty[2];
#endif

/*------------------------------------------------------------------------------
 * Private variables.
 *----------------------------------------------------------------------------*/
static ipc_filter_t         ipc_filter_pool_s[IPC_MAX_FILTER_CNT];
static kal_bool             ipc_filter_id_s[IPC_MAX_FILTER_CNT];
static kal_uint32           ipc_filter_cnt_s;
static kal_uint32           ipc_filter_magic_number_s;
static kal_int32            ipc_deregistering_filter_id_s[IPC_MAX_FILTER_CNT];
static kal_uint32           ipc_deregistering_filter_cnt_s;
static kal_int32            ipc_retry_deregistering_filter_id_s[IPC_MAX_FILTER_CNT];
static kal_uint32           ipc_retry_deregistering_filter_cnt_s;
/* For downlink */
static ipc_filter_list_t    ipc_dl_registering_filter_list_s[1];
static ipc_filter_list_t    ipc_dl_v4_filter_list_s[1];
static ipc_filter_list_t    ipc_dl_v6_filter_list_s[1];
/* For uplink */
static ipc_filter_list_t    ipc_ul_registering_filter_list_s[1];
static ipc_filter_list_t    ipc_ul_v4_filter_list_s[1];
static ipc_filter_list_t    ipc_ul_v6_filter_list_s[1];
static kal_uint8            g_ipc_qbm_failed_gpd_cnt = 0;

/*------------------------------------------------------------------------------
 * Helper macro.
 *----------------------------------------------------------------------------*/
#define ipc_next_filter_hash(_ip_type) \
            ((_ip_type) & 0x1)

#define _PRIORITY_OF_FILTER(_filter) (_filter->rules.priority)

#define _FEATURES_CONTAIN(_rules, _name) \
        (IPC_FILTER_FEATURE_ ## _name == ((_rules)->features & IPC_FILTER_FEATURE_ ## _name))

#define _RULES_CONTAIN(_rules, _name) \
        (IPC_FILTER_BY_ ## _name == ((_rules)->valid_fields & IPC_FILTER_BY_ ## _name))

#define _RULES_CONTAIN_IPV4(_rules) \
        (IPC_IP_TYPE_IPV4 == (_rules)->ip_type || IPC_IP_TYPE_MIXED == (_rules)->ip_type)

#define _RULES_CONTAIN_IPV6(_rules) \
        (IPC_IP_TYPE_IPV6 == (_rules)->ip_type || IPC_IP_TYPE_MIXED == (_rules)->ip_type)

#define _IS_UNSUPPORTED_PROTOCOL(_protocol) \
        ((IPC_HDR_PROT_UDP != (_protocol)) && (IPC_HDR_PROT_TCP != (_protocol)) && (IPC_HDR_PROT_ICMP != (_protocol)) && (IPC_HDR_PROT_ICMPV6 != (_protocol)))

/*------------------------------------------------------------------------------
 * Private function.
 *----------------------------------------------------------------------------*/
kal_bool
ipc_validate_rules(
    kal_bool                uplink,
    ipc_filter_rules_t     *rules)
{
    if (_FEATURES_CONTAIN(rules, WC)) {
        /* Pass other checking if it's WC filter. */
        return KAL_TRUE;
    }

    if (0 == rules->valid_fields) {
        hif_trace_error(IPC_TR_INVALID_RULES_ZERO_VALID_FIELD);
        return KAL_FALSE;
    }

    if (    (KAL_TRUE == uplink) &&
            (   _RULES_CONTAIN(rules, EBI)      /* EBI is used for downlink filter only */ ||
                _RULES_CONTAIN(rules, PDN_ID)   /* PDN ID is used in downlink filter only */)
        ) {
        hif_trace_error(IPC_TR_INVALID_RULES_FOR_UL, uplink, rules->valid_fields, rules->ip_type);
        return KAL_FALSE;
    }

    if ( (KAL_FALSE == uplink) &&
         !( _RULES_CONTAIN(rules, EBI) || _RULES_CONTAIN(rules, PDN_ID) || _FEATURES_CONTAIN(rules, PFM_DL) ) ) {
        /*
         * [Gen93] downlink filter must contain either EBI or PDN_ID in filter rule,
         * except the one registered through PFM. (to support Garbage Filter)
         */
        hif_trace_error(IPC_TR_INVALID_RULES_FOR_DL, uplink, rules->valid_fields, rules->ip_type);
        return KAL_FALSE;
    }

    if ( (IPC_IP_TYPE_IPV4 == rules->ip_type) &&
         (( (KAL_TRUE == uplink) ||
            ((KAL_FALSE == uplink)&& !_RULES_CONTAIN(rules, EBI))) &&
          !_RULES_CONTAIN(rules, NETIF_ID) &&
          !_RULES_CONTAIN(rules, PROTOCOL) &&
          !_RULES_CONTAIN(rules, SRC_PORT) && !_RULES_CONTAIN(rules, DST_PORT) &&
          !_RULES_CONTAIN(rules, SRC_IPV4) && !_RULES_CONTAIN(rules, DST_IPV4) &&
          !_RULES_CONTAIN(rules, ICMPV4_TYPE)) ) {
        hif_trace_error(IPC_TR_INVALID_RULES_FOR_IPV4, uplink, rules->valid_fields, rules->ip_type);
        return KAL_FALSE;
    }

    if ( (IPC_IP_TYPE_IPV6 == rules->ip_type) &&
         (( (KAL_TRUE == uplink) ||
            ((KAL_FALSE == uplink)&& !_RULES_CONTAIN(rules, EBI))) &&
          !_RULES_CONTAIN(rules, NETIF_ID) &&
          !_RULES_CONTAIN(rules, PROTOCOL) &&
          !_RULES_CONTAIN(rules, SRC_PORT) && !_RULES_CONTAIN(rules, DST_PORT) &&
          !_RULES_CONTAIN(rules, SRC_IPV6) && !_RULES_CONTAIN(rules, DST_IPV6) &&
          !_RULES_CONTAIN(rules, ICMPV6_TYPE)) ) {
        hif_trace_error(IPC_TR_INVALID_RULES_FOR_IPV6, uplink, rules->valid_fields, rules->ip_type);
        return KAL_FALSE;
    }

    if ( _RULES_CONTAIN(rules, PROTOCOL) && _IS_UNSUPPORTED_PROTOCOL(rules->protocol) ) {
        hif_trace_error(IPC_TR_INVALID_RULES_FOR_UNSUPPORTED_PROTOCOL, rules->protocol);
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

kal_int32
ipc_new_filter_id(
    kal_bool                uplink,
    ipc_filter_rules_t     *rules,
    void                   *callback_func,
    module_type             module_id)
{
    kal_uint32  i;

    IPC_ASSERT(KAL_FALSE == kal_if_hisr());

    if ( (NULL == rules) ||
         (!_FEATURES_CONTAIN(rules, BWM) && NULL == callback_func && MOD_NIL == module_id) ) {
        hif_trace_error(IPC_TR_NEW_FILTER_INVALID_PARAMS, rules, callback_func, module_id);
        goto fail;
    }

    IPC_SPIN_LOCK(ipc_spinlock_g);
    if (ipc_filter_cnt_s >= IPC_MAX_FILTER_CNT) {
        IPC_SPIN_UNLOCK(ipc_spinlock_g);
        goto fail;
    }

    for (i = 0; i < IPC_MAX_FILTER_CNT; i++) {
        if (KAL_FALSE == ipc_filter_id_s[i]) {
            ipc_filter_cnt_s ++;
            ipc_filter_id_s[i] = KAL_TRUE;
            ipc_filter_magic_number_s ++;
            IPC_SPIN_UNLOCK(ipc_spinlock_g);

            return i;
        }
    }

fail:
    hif_trace_error(IPC_TR_NEW_FILTER_UNAVAILABLE);
    ipc_ut_set_error(IPC_UT_REGISTER_FILTER_NG);
    return IPC_INVALID_FILTER_ID;
}

ipc_filter_t *
ipc_new_filter(
    kal_int32               filter_id,
    ipc_filter_t           *filter_pool,
    kal_uint32              pool_size,
    ipc_filter_rules_t     *rules,
    kal_bool                callback_with_info,
    void                   *callback_func,
    void                   *callback_context,
    module_type             module_id)
{
    ipc_filter_t    *filter;

    filter = filter_pool + filter_id;

    IPC_ASSERT(filter->filter_id == IPC_INVALID_FILTER_ID);
    filter->filter_id = filter_id;
    filter->is_updated_to_list = KAL_FALSE;

    kal_mem_cpy( &(filter->rules), rules, sizeof(*rules) );

    IPC_MASK_PROTOID_ON_PDNID(filter->rules.pdn_id, filter->rules.proto_idx);
    IPC_MASK_PROTOID_ON_PDNID(filter->rules.ebi, filter->rules.proto_idx);

    filter->callback_with_info = callback_with_info;
    filter->callback_func = callback_func;
    filter->module_id = module_id;
    if (MOD_NIL == module_id) {
        filter->callback_context = callback_context;
        filter->module_context = NULL;
    } else {
        filter->callback_context = filter;
        filter->module_context = callback_context;
    }

    kal_mem_set(filter->next_filter_map, 0, sizeof(filter->next_filter_map));
    return filter;
}

void
ipc_del_filter(
    ipc_filter_t    *filter)
{

    if (filter) {
        IPC_SPIN_LOCK(ipc_spinlock_g);
        IPC_ASSERT(ipc_filter_cnt_s > 0);
        ipc_filter_cnt_s --;
        ipc_filter_id_s[filter->filter_id] = KAL_FALSE;
        ipc_filter_magic_number_s ++;
        filter->filter_id = IPC_INVALID_FILTER_ID;
        IPC_SPIN_UNLOCK(ipc_spinlock_g);
    } else {
        hif_trace_error(IPC_TR_DEL_FILTER_INVALID_OBJECT, filter);
    }
}

ipc_filter_t *
ipc_find_filter_by_id(
    ipc_filter_t           *filter_pool,
    kal_int32               filter_id)
{
    IPC_ASSERT(0 <= filter_id && IPC_MAX_FILTER_CNT > filter_id);
    return (filter_pool + filter_id);
}

kal_bool
ipc_add_filter_to_registering_list(
    ipc_filter_list_t   *list,
    ipc_filter_t        *filter)
{
    ipc_filter_t        *tmp;
    kal_bool             is_first_filter;

    IPC_ASSERT(list && filter);

    IPC_SPIN_LOCK(ipc_spinlock_g);
    is_first_filter = (NULL == list->filter_head);
    tmp = list->filter_head;
    list->filter_head = filter;
    filter->next_filter_map[0] = tmp;
    IPC_SPIN_UNLOCK(ipc_spinlock_g);

    return is_first_filter;
}

void
ipc_get_filter_list_from_registering_list(
    ipc_filter_t      **ul_filter,
    ipc_filter_t      **dl_filter)
{
    IPC_ASSERT(ul_filter && dl_filter);

    IPC_SPIN_LOCK(ipc_spinlock_g);
    *ul_filter = ipc_ul_registering_filter_list_s->filter_head;
    ipc_ul_registering_filter_list_s->filter_head = NULL;

    *dl_filter = ipc_dl_registering_filter_list_s->filter_head;
    ipc_dl_registering_filter_list_s->filter_head = NULL;
    IPC_SPIN_UNLOCK(ipc_spinlock_g);
}

void
ipc_add_filter_to_list(
    ipc_filter_list_t   *list,
    ipc_filter_t        *filter,
    kal_uint8            ip_type)
{
    ipc_filter_t   *curr_filter;
    ipc_filter_t   *prev_filter;

    prev_filter = NULL;
    if (list) {
        if (!list->filter_head) {
            list->filter_head = filter;
            list->count++;
        } else {
            curr_filter = list->filter_head;
            while (curr_filter) {
                if (_PRIORITY_OF_FILTER(curr_filter) >= _PRIORITY_OF_FILTER(filter)) {
                    /* Insert the filter to this position. */
                    if (prev_filter) {
                        /* It's not the head of the list. */
                        filter->next_filter_map[ipc_next_filter_hash(ip_type)] = curr_filter;
                        prev_filter->next_filter_map[ipc_next_filter_hash(ip_type)] = filter;

                        list->count++;
                    } else {
                        /* Insert to the head of the list. */
                        filter->next_filter_map[ipc_next_filter_hash(ip_type)] = curr_filter;
                        list->filter_head = filter;

                        list->count++;
                    }
                    break;
                } else if (!curr_filter->next_filter_map[ipc_next_filter_hash(ip_type)]) {
                    /* The current filter is the last one. Insert the filter after it. */
                    curr_filter->next_filter_map[ipc_next_filter_hash(ip_type)] = filter;

                    list->count++;
                    break;
                } else {
                    /* Keep searching */
                    prev_filter = curr_filter;
                    curr_filter = curr_filter->next_filter_map[ipc_next_filter_hash(ip_type)];
                }
            }
        }
    } else {
        IPC_ASSERT(KAL_FALSE);
    }
}

void
ipc_remove_filter_from_list(
    ipc_filter_list_t   *list,
    ipc_filter_t        *filter,
    kal_uint8            ip_type)
{
    ipc_filter_t   *curr_filter;
    ipc_filter_t   *prev_filter;

    prev_filter = NULL;
    if (list) {
        curr_filter = list->filter_head;
        while (curr_filter) {
            if (curr_filter == filter) {
                /* Found the filter! */
                if (prev_filter) {
                    /* It's not the head of the list. */
                    prev_filter->next_filter_map[ipc_next_filter_hash(ip_type)] = curr_filter->next_filter_map[ipc_next_filter_hash(ip_type)];

                    list->count--;
                } else {
                    /* Remove the head of the list. */
                    list->filter_head = curr_filter->next_filter_map[ipc_next_filter_hash(ip_type)];
                    list->count--;
                }
                break;
            } else {
                /* Keep searching */
                prev_filter = curr_filter;
                curr_filter = curr_filter->next_filter_map[ipc_next_filter_hash(ip_type)];
            }
        }
    } else {
        IPC_ASSERT(KAL_FALSE);
    }
}

INLINE kal_bool
ipc_get_ip_packet(
    qbm_gpd        *desc,   /* GPD to get IP header */
    qbm_gpd       **bd,     /* BD of IP header pointer (NULL if not exist) */
    kal_uint8     **buffer, /* IP header pointer */
    kal_uint32     *length  /* GPD total length */)
{
    IPC_ASSERT(desc);
    IPC_ASSERT(bd);
    IPC_ASSERT(buffer);
    IPC_ASSERT(length);

    *bd = NULL;
    *length = QBM_DES_GET_DATALEN(desc);

    if (QBM_DES_GET_BDP(desc)) {
        desc = (qbm_gpd *)QBM_DES_GET_DATAPTR(desc);
        while (0 == QBM_DES_GET_DATALEN(desc)) {
            if (!QBM_DES_GET_EOL(desc)) {
                desc = (qbm_gpd *)QBM_DES_GET_NEXT(desc);
            } else {
                IPC_ASSERT(KAL_FALSE);
                return KAL_FALSE;
            }
        }
        /* Found : record BD pointer */
        *bd = desc;
    }

    *buffer = (kal_uint8*)QBM_DES_GET_DATAPTR(desc);

    return KAL_TRUE;
}

static INLINE ipc_match_result_e
ipc_match_ipv4_rules(
    ipc_filter_rules_t *rules,
    ipc_packet_info_t *content)
{
    ipc_match_result_e  ret = IPC_MATCH_RESULT_NOT_MATCHED;

    /* << Start to compare multi-byte IPv4 header content, content dividing issue need to handle >> */
    /* --------------------------------------------------------------------------------------- */

    if (_RULES_CONTAIN(rules, SRC_IPV4))
    {
        if (!(content->info_valid_fields & IPC_FILTER_BY_SRC_IPV4))
        {
            goto not_matched;
        }

        /* Compare content */
        if (content->src_addr[0] != rules->src_ipv4.addr32)// uint32 compare
        {
            goto not_matched;
        }
    }

    if (_RULES_CONTAIN(rules, DST_IPV4))
    {
        if (!(content->info_valid_fields & IPC_FILTER_BY_DST_IPV4))
        {
            goto not_matched;
        }

        /* Compare content */
        if (content->dst_addr[0] != rules->dst_ipv4.addr32)// uint32 compare
        {
            goto not_matched;
        }
    }

    if (_RULES_CONTAIN(rules, PROTOCOL))
    {
        if (!(content->info_valid_fields & IPC_FILTER_BY_PROTOCOL))
        {
            goto not_matched;
        }

        if (content->protocol != rules->protocol)
        {
            goto not_matched;
        }

        /* For IPv4, we are not handle fragment packets with different protocol. */
        if (content->fragment) {
            if (!_FEATURES_CONTAIN(rules, FRAG)) {
                goto not_matched;
            } else {
                ret |= IPC_MATCH_RESULT_FRAG_MATCHED;
            }
        }

        /* L4 packet content */
        switch (rules->protocol)
        {
            case IPC_HDR_PROT_UDP:
            case IPC_HDR_PROT_TCP:
            {
                /* -------------------------------------------------------------------------------------- */

                if (_RULES_CONTAIN(rules, SRC_PORT))
                {
                    if (!(content->info_valid_fields & IPC_FILTER_BY_SRC_PORT))
                    {
                        goto not_matched;
                    }

                    /* Compare content */
                    if (content->src_port != rules->src_port)
                    {
                        goto not_matched;
                    }
                }
                if (_RULES_CONTAIN(rules, DST_PORT))
                {
                    if (!(content->info_valid_fields & IPC_FILTER_BY_DST_PORT))
                    {
                        goto not_matched;
                    }

                    /* Compare content */
                    if (content->dst_port != rules->dst_port)
                    {
                        goto not_matched;
                    }
                }
                if (_RULES_CONTAIN(rules, TCP_FLAGS)) {
                    if (  (IPC_HDR_PROT_TCP != rules->protocol) ||
                         !(content->info_valid_fields & IPC_FILTER_BY_TCP_FLAGS) ) {
                        goto not_matched;
                    }

                    /* Compare content */
                    if (content->tcp_flags != rules->tcp_flags)
                    {
                        goto not_matched;
                    }
                }

                /* -------------------------------------------------------------------------------------- */
                break;
            }
            case IPC_HDR_PROT_ICMP:
            {
                /* -------------------------------------------------------------------------------------- */

                if (_RULES_CONTAIN(rules, ICMPV4_TYPE))
                {
                    if (!(content->info_valid_fields & IPC_FILTER_BY_ICMPV4_TYPE))
                    {
                        goto not_matched;
                    }

                    /* Compare content */
                    if (content->icmpv4_type != rules->icmpv4_type)
                    {
                        goto not_matched;
                    }
                }

                /* -------------------------------------------------------------------------------------- */
                break;
            }
            default:
                /* No L4 content checking rule, pass it directly */
                break;
        }
    }

    ret |= IPC_MATCH_RESULT_MATCHED;
    return ret;

not_matched:
    if (0 == (ret & IPC_MATCH_RESULT_FRAG_MATCHED)) {
        ret = IPC_MATCH_RESULT_NOT_MATCHED;
    }
    return ret;
}

static INLINE ipc_match_result_e
ipc_match_ipv6_rules(
    ipc_filter_rules_t *rules,
    ipc_packet_info_t *content)
{
    ipc_match_result_e  ret = IPC_MATCH_RESULT_NOT_MATCHED;

    /* << Start to compare multi-byte IPv4 header content, content dividing issue need to handle >> */
    /* --------------------------------------------------------------------------------------- */

    if (_RULES_CONTAIN(rules, SRC_IPV6))
    {
        if (!(content->info_valid_fields & IPC_FILTER_BY_SRC_IPV6))
        {
            goto not_matched;
        }

        /* Compare content */
        if (content->src_addr[0] != rules->src_ipv6.addr32[0])// uint32 compare
        {
            goto not_matched;
        }
        if (content->src_addr[1] != rules->src_ipv6.addr32[1])// uint32 compare
        {
            goto not_matched;
        }
        if (content->src_addr[2] != rules->src_ipv6.addr32[2])// uint32 compare
        {
            goto not_matched;
        }
        if (content->src_addr[3] != rules->src_ipv6.addr32[3])// uint32 compare
        {
            goto not_matched;
        }
    }

    if (_RULES_CONTAIN(rules, DST_IPV6))
    {
        if (!(content->info_valid_fields & IPC_FILTER_BY_DST_IPV6))
        {
            goto not_matched;
        }

        /* Compare content */
        if (content->dst_addr[0] != rules->dst_ipv6.addr32[0])// uint32 compare
        {
            goto not_matched;
        }
        if (content->dst_addr[1] != rules->dst_ipv6.addr32[1])// uint32 compare
        {
            goto not_matched;
        }
        if (content->dst_addr[2] != rules->dst_ipv6.addr32[2])// uint32 compare
        {
            goto not_matched;
        }
        if (content->dst_addr[3] != rules->dst_ipv6.addr32[3])// uint32 compare
        {
            goto not_matched;
        }
    }

    if (_RULES_CONTAIN(rules, PROTOCOL))
    {
        /* We only compare protocol for the first IPv6 fragment packets. */
        if (content->fragment) {
            if (!_FEATURES_CONTAIN(rules, FRAG)) {
                goto not_matched;
            } else {
                ret |= IPC_MATCH_RESULT_FRAG_MATCHED;
            }
        }

        if (!(content->info_valid_fields & IPC_FILTER_BY_PROTOCOL))
        {
            goto not_matched;
        }

        if (content->protocol != rules->protocol)/* Protocol not match */
        {
            goto not_matched;
        }

        /* L4 packet content */
        switch (rules->protocol)
        {
            case IPC_HDR_PROT_UDP:
            case IPC_HDR_PROT_TCP:
            {
                /* -------------------------------------------------------------------------------------- */

                if (_RULES_CONTAIN(rules, SRC_PORT))
                {
                    if (!(content->info_valid_fields & IPC_FILTER_BY_SRC_PORT))
                    {
                        goto not_matched;
                    }

                    /* Compare content */
                    if (content->src_port != rules->src_port)
                    {
                        goto not_matched;
                    }
                }
                if (_RULES_CONTAIN(rules, DST_PORT))
                {
                    if (!(content->info_valid_fields & IPC_FILTER_BY_DST_PORT))
                    {
                        goto not_matched;
                    }

                    /* Compare content */
                    if (content->dst_port != rules->dst_port)
                    {
                        goto not_matched;
                    }
                }
                if (_RULES_CONTAIN(rules, TCP_FLAGS)) {
                    if (  (IPC_HDR_PROT_TCP != rules->protocol) ||
                         !(content->info_valid_fields & IPC_FILTER_BY_TCP_FLAGS) ) {
                        goto not_matched;
                    }

                    /* Compare content */
                    if (content->tcp_flags != rules->tcp_flags)
                    {
                        goto not_matched;
                    }
                }

                /* -------------------------------------------------------------------------------------- */
                break;
            }
            case IPC_HDR_PROT_ICMPV6:
            {
                /* -------------------------------------------------------------------------------------- */

                if (_RULES_CONTAIN(rules, ICMPV6_TYPE))
                {
                    if (!(content->info_valid_fields & IPC_FILTER_BY_ICMPV6_TYPE))
                    {
                        goto not_matched;
                    }

                    /* Compare content */
                    if (content->icmpv6_type != rules->icmpv6_type)
                    {
                        goto not_matched;
                    }
                }

                /* -------------------------------------------------------------------------------------- */
                break;
            }
            default:
                /* No L4 content checking rule, pass it directly */
                break;
        }
    }

    ret |= IPC_MATCH_RESULT_MATCHED;
    return ret;

not_matched:
    if (0 == (ret & IPC_MATCH_RESULT_FRAG_MATCHED)) {
        ret = IPC_MATCH_RESULT_NOT_MATCHED;
    }
    return ret;
}


/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/
void ipc_filter_init(void)
{
    kal_uint32  idx;
    static ipc_filter_list_t  *fls_v4_set[] = {ipc_ul_v4_filter_list_s, ipc_dl_v4_filter_list_s};
    static ipc_filter_list_t  *fls_v6_set[] = {ipc_ul_v6_filter_list_s, ipc_dl_v6_filter_list_s};

#if defined(__MTK_TARGET__)
    IPC_ASSERT(sizeof(ipc_filter_t) % 4 == 0);
    IPC_ASSERT(sizeof(ipc_filter_list_t) % 4 == 0);
#endif

    kal_mem_set( ipc_filter_pool_s, 0, sizeof(ipc_filter_pool_s) );
    for (idx = 0; idx < IPC_MAX_FILTER_CNT; idx++) {
        ipc_filter_pool_s[idx].filter_id = IPC_INVALID_FILTER_ID;
        ipc_deregistering_filter_id_s[idx] = IPC_INVALID_FILTER_ID;
        ipc_retry_deregistering_filter_id_s[idx] = IPC_INVALID_FILTER_ID;
    }
    kal_mem_set(ipc_filter_id_s, 0, sizeof(ipc_filter_id_s));
    ipc_filter_cnt_s = 0;
    ipc_filter_magic_number_s = 0;
    ipc_deregistering_filter_cnt_s = 0;
    ipc_retry_deregistering_filter_cnt_s = 0;

    kal_mem_set(ipc_dl_registering_filter_list_s, 0, sizeof(ipc_filter_list_t));
    kal_mem_set(ipc_ul_registering_filter_list_s, 0, sizeof(ipc_filter_list_t));

    for (idx = 0; idx < sizeof(fls_v4_set) / sizeof(ipc_filter_list_t*); idx++) {
        kal_mem_set( fls_v4_set[idx], 0, sizeof(ipc_filter_list_t) );
        fls_v4_set[idx]->ip_type = IPC_IP_TYPE_IPV4;
    }
    for (idx = 0; idx < sizeof(fls_v6_set) / sizeof(ipc_filter_list_t*); idx++) {
        kal_mem_set( fls_v6_set[idx], 0, sizeof(ipc_filter_list_t) );
        fls_v6_set[idx]->ip_type = IPC_IP_TYPE_IPV6;
    }

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
    kal_mem_set(ipc_mdt_packet_routing_queue, 0, sizeof(ipc_mdt_packet_routing_queue));
    kal_mem_set(ipc_mdt_queue_non_empty, 0, sizeof(ipc_mdt_queue_non_empty));
#endif
}

kal_int32
ipc_register_filter(
    ipc_filter_t           *filter,
    kal_bool                uplink)
{
    ipc_filter_rules_t     *rules;
    kal_bool                with_ipv4;
    kal_bool                with_ipv6;

    IPC_ASSERT(filter);

    rules = &(filter->rules);

    /* [Gen93] Set forced SW path when registering filter. */
    if (_RULES_CONTAIN(rules, PDN_ID)) {
        IPC_FORCED_SW_PATH_BY_PDN(rules->pdn_id, KAL_TRUE);
    }
    if (_RULES_CONTAIN(rules, EBI)) {
        IPC_FORCED_SW_PATH_BY_EBI(rules->ebi, KAL_TRUE);
    }
    /*
     * [Gen93] For DL filters registered through PFM and without PDN/EBI,
     * set forced SW path to all bearers (to support Garbage Filter).
     */
    if ( (KAL_FALSE == uplink) &&
         _FEATURES_CONTAIN(rules, PFM_DL) &&
         !( _RULES_CONTAIN(rules, EBI) || _RULES_CONTAIN(rules, PDN_ID) ) ) {
        IPC_FORCED_SW_PATH_ALL(KAL_TRUE);
    }

    /* WC filter should be added to both lists (ipv4 & ipv6). */
    with_ipv4 = _RULES_CONTAIN_IPV4(rules) || _FEATURES_CONTAIN(rules, WC);
    with_ipv6 = _RULES_CONTAIN_IPV6(rules) || _FEATURES_CONTAIN(rules, WC);
    hif_trace_info(IPC_TR_REGISTER_FILTER_OK, uplink, filter->filter_id, rules->features, rules->ip_type, rules->valid_fields, with_ipv4, with_ipv6);

    IPC_ASSERT( 0 <= _PRIORITY_OF_FILTER(filter) &&
                _PRIORITY_OF_FILTER(filter) < ((KAL_TRUE == uplink)? MAX_IPC_UL_FILTER_PRIORITY:
                                                                     MAX_IPC_DL_FILTER_PRIORITY) );

    if (with_ipv4) {
        ipc_add_filter_to_list(
            (KAL_TRUE == uplink)?  ipc_ul_v4_filter_list_s:
                                   ipc_dl_v4_filter_list_s,
            filter, IPC_IP_TYPE_IPV4);
        hif_trace_info(IPC_TR_REGISTER_FILTER_ADD_TO_LIST, filter->filter_id, 4, uplink);
    }
    if (with_ipv6) {
        ipc_add_filter_to_list(
            (KAL_TRUE == uplink)?   ipc_ul_v6_filter_list_s:
                                    ipc_dl_v6_filter_list_s,
            filter, IPC_IP_TYPE_IPV6);
        hif_trace_info(IPC_TR_REGISTER_FILTER_ADD_TO_LIST, filter->filter_id, 6, uplink);
    }

    /* Set flag after filter is added to list*/
    filter->is_updated_to_list = KAL_TRUE;
    
    return filter->filter_id;
}

kal_int32
ipc_register_filter_by_ilm(
    kal_bool                uplink,
    kal_bool                callback_with_info,
    ipc_filter_rules_t     *rules,
    void                   *callback_func,
    void                   *callback_context,
    module_type             module_id)
{
    ipc_filter_t   *filter;
    kal_int32       filter_id;
    kal_bool        to_send_msg;

    if (!ipc_validate_rules(uplink, rules)) {
        hif_trace_error(IPC_TR_REGISTER_FILTER_VALIDATE_FAIL, uplink);
        ipc_ut_set_error(IPC_UT_REGISTER_FILTER_VALIDATE_FAIL);
        return IPC_INVALID_FILTER_ID;
    }

    filter_id = ipc_new_filter_id(uplink, rules, callback_func, module_id);

    if (filter_id >= 0) {
        filter = ipc_new_filter(
                    filter_id,
                    ipc_filter_pool_s,
                    IPC_MAX_FILTER_CNT,
                    rules,
                    callback_with_info,
                    callback_func,
                    callback_context,
                    module_id);

        to_send_msg = ipc_add_filter_to_registering_list(
                                (uplink) ? ipc_ul_registering_filter_list_s :
                                           ipc_dl_registering_filter_list_s,
                                filter);

        if (to_send_msg) {
            ipc_register_filter_req_struct_t   *req_msg_p;

            req_msg_p = (ipc_register_filter_req_struct_t *)construct_local_para(sizeof(ipc_register_filter_req_struct_t), TD_RESET);
            IPC_ASSERT(req_msg_p);

            req_msg_p->filter_id = filter_id;
            req_msg_p->uplink = uplink;
            req_msg_p->callback_with_info = callback_with_info;
            req_msg_p->callback_func = callback_func;
            req_msg_p->callback_context = callback_context;
            req_msg_p->module_id = module_id;

            kal_mem_cpy(&(req_msg_p->rules), rules, sizeof(ipc_filter_rules_t));

            msg_send6(
                    #ifdef ATEST_SYS_IPCORE
                        MOD_NIL, /* src_mod_id */
                    #else
                        module_id, /* src_mod_id */
                    #endif
                        MOD_IPCORE, /* dest_mod_id */
                        IPCORE_USER_SENSITIVE_SAP, /* sap_id */
                        MSG_ID_IPCORE_REGISTER_FILTER_REQ, /* msg_id */
                        (local_para_struct *)req_msg_p, /* local_para_ptr */
                        NULL); /* peer_buff_ptr */
        } else {
            /* Dump filter structure (ILM like) when registering ILM aggregated. */
            ipc_register_filter_req_struct_t    tmp;
            ipc_register_filter_req_struct_t   *req_msg_p = &tmp;

            req_msg_p->msg_len = sizeof(ipc_register_filter_req_struct_t);
            req_msg_p->filter_id = filter_id;
            req_msg_p->uplink = uplink;
            req_msg_p->callback_with_info = callback_with_info;
            req_msg_p->callback_func = callback_func;
            req_msg_p->callback_context = callback_context;
            req_msg_p->module_id = module_id;

            kal_mem_cpy(&(req_msg_p->rules), rules, sizeof(ipc_filter_rules_t));

            dhl_log_primitive6(
                            #ifdef ATEST_SYS_IPCORE
                                MOD_NIL, /* src_mod_id */
                            #else
                                module_id, /* src_mod_id */
                            #endif
                                MOD_IPCORE, /* dest_mod_id */
                                IPCORE_USER_SENSITIVE_SAP, /* sap_id */
                                MSG_ID_IPCORE_REGISTER_FILTER_REQ, /* msg_id */
                                (local_para_struct *)req_msg_p, /* local_para_ptr */
                                NULL); /* peer_buff_ptr */
        }
    } else {
        hif_trace_info(IPC_TR_REGISTER_FILTER_NG);
        ipc_ut_set_error(IPC_UT_REGISTER_FILTER_NG);
        return IPC_INVALID_FILTER_ID;
    }

    return filter_id;
}

void
ipc_register_filter_req_handler(local_para_struct *local_para_ptr)
{
    ipc_filter_t       *filter_list[2];
    ipc_filter_t       *curr_filter, *next_filter;
    kal_uint32          i;

    ipc_get_filter_list_from_registering_list(&filter_list[0], &filter_list[1]);

    for (i = 0; i < 2; i++) {
        curr_filter = filter_list[i];
        while (curr_filter) {
            next_filter = curr_filter->next_filter_map[0];
            curr_filter->next_filter_map[0] = NULL;
            ipc_register_filter(curr_filter, (0 == i) ? KAL_TRUE : KAL_FALSE);

            curr_filter = next_filter;
        }
    }
}

void
ipc_deregister_filter(
    kal_int32      filter_id)
{
    ipc_filter_t   *filter;
    ipc_filter_rules_t *rules;
    kal_bool        with_ipv4;
    kal_bool        with_ipv6;

    filter = ipc_find_filter_by_id(ipc_filter_pool_s, filter_id);
    if (filter && (filter->filter_id != IPC_INVALID_FILTER_ID)) {

        /* Check if the filter is already stored to IPcore internal list. */
        if(filter->is_updated_to_list != KAL_TRUE) {
            ipc_retry_deregistering_filter_id_s[ipc_retry_deregistering_filter_cnt_s] = filter->filter_id;
            ipc_retry_deregistering_filter_cnt_s++;
            hif_trace_info(IPC_TR_REMOVE_DL_FILTER_RETRY, filter->filter_id);
            return;
        }

        rules = &(filter->rules);

        /* [Gen93] Clear forced SW path when deregistering filter. */
        if (_RULES_CONTAIN(rules, PDN_ID)) {
            IPC_FORCED_SW_PATH_BY_PDN(rules->pdn_id, KAL_FALSE);
        }
        if (_RULES_CONTAIN(rules, EBI)) {
            IPC_FORCED_SW_PATH_BY_EBI(rules->ebi, KAL_FALSE);
        }
        /*
         * [Gen93] For DL filters registered through PFM and without PDN/EBI,
         * clear forced SW path to all bearers (to support Garbage Filter).
         */
        if (  _FEATURES_CONTAIN(rules, PFM_DL) &&
              !( _RULES_CONTAIN(rules, EBI) || _RULES_CONTAIN(rules, PDN_ID) ) ) {
            IPC_FORCED_SW_PATH_ALL(KAL_FALSE);
        }

        with_ipv4 = _RULES_CONTAIN_IPV4(rules) || _FEATURES_CONTAIN(rules, WC);
        with_ipv6 = _RULES_CONTAIN_IPV6(rules) || _FEATURES_CONTAIN(rules, WC);
        hif_trace_info(IPC_TR_DEREGISTER_FILTER_INFO, filter->filter_id, rules->features, rules->valid_fields, with_ipv4, with_ipv6);

        if (with_ipv4) {
            /* Remove from UL filter list */
            ipc_remove_filter_from_list(ipc_ul_v4_filter_list_s, filter, IPC_IP_TYPE_IPV4);
            /* Remove from DL filter list */
            ipc_remove_filter_from_list(ipc_dl_v4_filter_list_s, filter, IPC_IP_TYPE_IPV4);
            hif_trace_info(IPC_TR_REMOVE_DL_FILTER_FROM_LIST, filter->filter_id, 4);
        }
        if (with_ipv6) {
            /* Remove from UL filter list */
            ipc_remove_filter_from_list(ipc_ul_v6_filter_list_s, filter, IPC_IP_TYPE_IPV6);
            /* Remove from DL filter list */
            ipc_remove_filter_from_list(ipc_dl_v6_filter_list_s, filter, IPC_IP_TYPE_IPV6);
            hif_trace_info(IPC_TR_REMOVE_DL_FILTER_FROM_LIST, filter->filter_id, 6);
        }

        ipc_del_filter(filter);
    } else {
        hif_trace_error(IPC_TR_DEREGISTER_FILTER_NOT_FOUND, filter_id);
        ipc_ut_set_error(IPC_UT_DEREGISTER_FILTER_NOT_FOUND);
    }
}

void
ipc_deregister_filter_by_ilm(
    kal_int32      filter_id)
{
    kal_bool        to_send_msg;
    module_type     module_id = kal_get_active_module_id();

    if (0 > filter_id || IPC_MAX_FILTER_CNT <= filter_id) {
        hif_trace_error(IPC_TR_DEREGISTER_FILTER_WITH_INVALID_ID, filter_id);
        ipc_ut_set_error(IPC_UT_DEREGISTER_FILTER_WITH_INVALID_ID);
        return;
    }

    IPC_SPIN_LOCK(ipc_spinlock_g);
    to_send_msg = (0 == ipc_deregistering_filter_cnt_s);
    ipc_deregistering_filter_id_s[ipc_deregistering_filter_cnt_s] = filter_id;
    ipc_deregistering_filter_cnt_s ++;
    IPC_SPIN_UNLOCK(ipc_spinlock_g);

    if (to_send_msg) {
        ipc_deregister_filter_req_struct_t     *req_msg_p;

        req_msg_p = (ipc_deregister_filter_req_struct_t *)construct_local_para(sizeof(ipc_deregister_filter_req_struct_t), TD_RESET);
        IPC_ASSERT(req_msg_p);

        req_msg_p->filter_id = filter_id;

        msg_send6(
                #ifdef ATEST_SYS_IPCORE
                    MOD_NIL, /* src_mod_id */
                #else
                    module_id, /* src_mod_id */
                #endif
                    MOD_IPCORE, /* dest_mod_id */
                    IPCORE_SAP, /* sap_id */
                    MSG_ID_IPCORE_DEREGISTER_FILTER_REQ, /* msg_id */
                    (local_para_struct *)req_msg_p, /* local_para_ptr */
                    NULL); /* peer_buff_ptr */
    } else {
        /* Dump filter structure (ILM like) when registering ILM aggregated. */
        ipc_deregister_filter_req_struct_t      tmp;
        ipc_deregister_filter_req_struct_t     *req_msg_p = &tmp;

        req_msg_p->msg_len = sizeof(ipc_deregister_filter_req_struct_t);
        req_msg_p->filter_id = filter_id;

        dhl_log_primitive6(
                        #ifdef ATEST_SYS_IPCORE
                            MOD_NIL, /* src_mod_id */
                        #else
                            module_id, /* src_mod_id */
                        #endif
                            MOD_IPCORE, /* dest_mod_id */
                            IPCORE_SAP, /* sap_id */
                            MSG_ID_IPCORE_DEREGISTER_FILTER_REQ, /* msg_id */
                            (local_para_struct *)req_msg_p, /* local_para_ptr */
                            NULL); /* peer_buff_ptr */
    }

}

void
ipc_deregister_filter_req_handler(local_para_struct *local_para_ptr)
{
    static kal_int32    deregistering_filter_id[IPC_MAX_FILTER_CNT];
    kal_uint32          deregistering_filter_cnt;
    kal_uint32          i;
    kal_bool            to_send_msg;

    IPC_SPIN_LOCK(ipc_spinlock_g);
    deregistering_filter_cnt = ipc_deregistering_filter_cnt_s;
    ipc_deregistering_filter_cnt_s = 0;
    for (i = 0; i < deregistering_filter_cnt; i++) {
        IPC_ASSERT(ipc_deregistering_filter_id_s[i] >= 0);
        deregistering_filter_id[i] = ipc_deregistering_filter_id_s[i];
        ipc_deregistering_filter_id_s[i] = IPC_INVALID_FILTER_ID;
    }
    IPC_SPIN_UNLOCK(ipc_spinlock_g);

    for (i = 0; i < deregistering_filter_cnt; i++) {
        IPC_ASSERT(deregistering_filter_id[i] >= 0);
        ipc_deregister_filter(deregistering_filter_id[i]);
    }

    /* If retry list is not NULL, insert retry ids back to ipc_deregistering_filter_id_s*/
    if(ipc_retry_deregistering_filter_cnt_s != 0) {
        IPC_SPIN_LOCK(ipc_spinlock_g);
        to_send_msg = (0 == ipc_deregistering_filter_cnt_s);
        for (i = 0; i < ipc_retry_deregistering_filter_cnt_s; i++) {
            IPC_ASSERT(ipc_retry_deregistering_filter_id_s[i] >= 0);
            ipc_deregistering_filter_id_s[ipc_deregistering_filter_cnt_s] = ipc_retry_deregistering_filter_id_s[i];
            ipc_retry_deregistering_filter_id_s[i] = IPC_INVALID_FILTER_ID;
            ipc_deregistering_filter_cnt_s++;
        }
        ipc_retry_deregistering_filter_cnt_s = 0;
        IPC_SPIN_UNLOCK(ipc_spinlock_g);

        if (to_send_msg) {
            ipc_deregister_filter_req_struct_t     *req_msg_p;
            ilm_struct  ilm;

            req_msg_p = (ipc_deregister_filter_req_struct_t *)construct_local_para(sizeof(ipc_deregister_filter_req_struct_t), TD_RESET);
            IPC_ASSERT(req_msg_p);

            req_msg_p->filter_id = IPC_INVALID_FILTER_ID;

        #ifdef ATEST_SYS_IPCORE
            ilm.src_mod_id = MOD_NIL;
        #else
            ilm.src_mod_id = MOD_IPCORE;
        #endif
            ilm.dest_mod_id = MOD_IPCORE;
            ilm.msg_id = MSG_ID_IPCORE_DEREGISTER_FILTER_REQ;
            ilm.local_para_ptr = (local_para_struct *)req_msg_p;
            ilm.peer_buff_ptr = NULL;
            ilm.sap_id = IPCORE_SAP;

            /* Be careful that this message should send to IPcore's external queue, */
            /* Otherwise, it will block in infinite loop for processing internal message. */
            msg_send_ext_queue(&ilm);

        }
        else {
            /* Dump filter structure (ILM like) when registering ILM aggregated. */
            ipc_deregister_filter_req_struct_t      tmp;
            ipc_deregister_filter_req_struct_t     *req_msg_p = &tmp;

            req_msg_p->msg_len = sizeof(ipc_deregister_filter_req_struct_t);
            req_msg_p->filter_id = IPC_INVALID_FILTER_ID;

            dhl_log_primitive6(
                            #ifdef ATEST_SYS_IPCORE
                                MOD_NIL, /* src_mod_id */
                            #else
                                MOD_IPCORE, /* src_mod_id */
                            #endif
                                MOD_IPCORE, /* dest_mod_id */
                                IPCORE_SAP, /* sap_id */
                                MSG_ID_IPCORE_DEREGISTER_FILTER_REQ, /* msg_id */
                                (local_para_struct *)req_msg_p, /* local_para_ptr */
                                NULL); /* peer_buff_ptr */
        }
    }
}

static INLINE void
ipc_gpd_unite(
    kal_bool    uplink,
    qbm_gpd     *p_gpd_in,
    qbm_gpd     **pp_gpd_out)
{
    IPC_ASSERT(p_gpd_in);
    IPC_ASSERT(pp_gpd_out);

    /*
        *   =============================================================
        *   Check if this GPD is needed to unite:
        *
        *   1. This GPD has BD list.
        *   2. First BD (containing data) does not have full data within it.
        *   =============================================================
        */
    {
        qbm_gpd* bd;

        if (!QBM_DES_GET_BDP(p_gpd_in))
        {
            goto no_change;
        }

        /* get 1st bd data ptr */
        bd = QBM_DES_GET_DATAPTR(p_gpd_in);

        /* Loop to trace 1st DL BD with data buffer */
        while (bd && (QBM_DES_GET_DATALEN(bd) == 0))
        {
            bd = (QBM_DES_GET_EOL(bd))?(NULL):((qbm_gpd*)QBM_DES_GET_NEXT(bd));
        }

        /* No any BD have data */
        if (NULL == bd)
        {
            hif_trace_error(IPC_TR_GPD_UNITE_NULL_BD_LIST, uplink, p_gpd_in);
            goto no_change;
        }

        if (QBM_DES_GET_DATALEN(p_gpd_in) == QBM_DES_GET_DATALEN(bd))
        {
            goto no_change;
        }
    }

    /*
        *   =============================================================
        *   This packet is divided into several pieces of data segment, unite them into single one.
        *   =============================================================
        */
    {
        kal_uint32  total_len;
        kal_uint32  copied_len;
        kal_uint8   *p_buff;

        total_len = QBM_DES_GET_DATALEN(p_gpd_in);

        if (total_len == 0)
        {
            hif_trace_error(IPC_TR_GPD_UNITE_ZERO_LENGTH_GPD, uplink, p_gpd_in);
            goto no_change;
        }

        if (1 != qbmt_alloc_q_no_tail(
                        (KAL_TRUE == uplink)?QBM_TYPE_NET_UL_SHRD/*UL*/:QBM_TYPE_NET_DL/*DL*/, /* type */
                        1, /* buff_num */
                        (void**)pp_gpd_out, /* pp_head */
                        (void**)pp_gpd_out  /* pp_tail */))
        {   /* Allocation fail */
            hif_trace_error(IPC_TR_GPD_UNITE_ALLOC_GPD_NG, uplink, p_gpd_in, total_len);
            goto unite_failed;
        }

        /* Copy data from input GPD to output GPD */
        IPC_ASSERT(*pp_gpd_out);
        ipc_set_gpd_datalen(*pp_gpd_out, total_len, (void**)&p_buff);
        IPC_ASSERT(p_buff);

        if (KAL_TRUE != ipc_do_gpd_copy(    p_buff,
                                            total_len,
                                            &copied_len,
                                            p_gpd_in,
                                            p_gpd_in))
        {   /* data copy fail */
            hif_trace_error(IPC_TR_GPD_UNITE_GPD_COPY_NG, uplink, p_buff, total_len, copied_len, p_gpd_in);
            /* Free allocated new GPD */
            qbmt_dest_q(*pp_gpd_out, *pp_gpd_out);
            goto unite_failed;
        }

        /* Sync SW control field from UPCM for DL traffic */
        if (KAL_FALSE == uplink)
        {   /* SW control field is from UPCM */
            kal_mem_cpy(    (void*)QBM_DES_GET_SW_CTRL_FIELD(*pp_gpd_out),
                            (void*)QBM_DES_GET_SW_CTRL_FIELD(p_gpd_in),
                            sizeof(upcm_dlvr_dl_info_t));
        }
    }

   /*
        *   =============================================================
        *   Unite done : return new GPD.
        *   =============================================================
        */
    hif_data_trace(IPC_GE_UNITED_GPD, uplink, p_gpd_in, *pp_gpd_out, QBM_DES_GET_DATALEN(*pp_gpd_out));
    IPC_ASSERT(*pp_gpd_out);
    return;

no_change:
    *pp_gpd_out = p_gpd_in;
    return;

unite_failed:
    hif_trace_error(IPC_TR_GPD_UNITE_FAILED, uplink, p_gpd_in);

    *pp_gpd_out = NULL;
    return;
}

static INLINE void
ipc_si_unite_to_gpd(
    kal_bool        uplink,
    upcm_did       *did,
    kal_uint32      curr_si_idx,
    kal_uint32      pkt_len,
    qbm_gpd       **pp_gpd_out)
{
    kal_uint8                  *p_gpd_data;
    upcm_did_si                *sit = UPCM_DID_GET_SIT_PTR(did);
    kal_uint32                  pkt_start_idx = curr_si_idx;
    kal_uint8                  *src_buffer;
    kal_uint32                  dst_len_copied;
    kal_bool                    end_of_seg_list;

    IPC_ASSERT( (did) &&
                (pkt_start_idx < UPCM_DID_MAX_SIT_ENT_NUM) );

    if (1 != qbmt_alloc_q_no_tail(
                (KAL_TRUE == uplink)?QBM_TYPE_NET_UL_SHRD/*UL*/:QBM_TYPE_NET_DL/*DL*/, /* type */
                1, /* buff_num */
                (void**)pp_gpd_out, /* pp_head */
                (void**)pp_gpd_out  /* pp_tail */))
    {   /* Allocation fail */
        hif_trace_error(IPC_TR_SI_UNITE_ALLOC_GPD_NG, uplink, did, curr_si_idx, pkt_len);
        *pp_gpd_out = NULL;
        return;
    }

    IPC_ASSERT(*pp_gpd_out);
    ipc_set_gpd_datalen(*pp_gpd_out, pkt_len, (void**)&p_gpd_data);
    IPC_ASSERT(p_gpd_data);

    dst_len_copied = 0;
    end_of_seg_list = KAL_FALSE;
    for ( curr_si_idx = pkt_start_idx;
          curr_si_idx < UPCM_DID_MAX_SIT_ENT_NUM && !end_of_seg_list;
          curr_si_idx ++) {
        upcm_did_si *curr_si = &sit[curr_si_idx];

        end_of_seg_list = UPCM_DID_SI_GET_EOL(curr_si);
        if (UPCM_DID_SI_GET_LEN(curr_si)) {
            src_buffer = ((kal_uint8*)UPCM_DID_SI_GET_DATAPTR(curr_si)) + UPCM_DID_SI_GET_OFFSET(curr_si);
            QBM_CACHE_INVALID(src_buffer, UPCM_DID_SI_GET_LEN(curr_si));
            kal_mem_cpy(p_gpd_data + dst_len_copied, src_buffer, UPCM_DID_SI_GET_LEN(curr_si));
            dst_len_copied += UPCM_DID_SI_GET_LEN(curr_si);
        }
    }

    QBM_CACHE_FLUSH(p_gpd_data, dst_len_copied);
    return;
}

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
static INLINE void
ipc_mdt_push_gpd_to_routing_queue(
    kal_bool            uplink,
    kal_uint32          netif_id,
    qbm_gpd            *gpd)
{
    ipc_mdt_routing_packet_list_t  *list;
    kal_int16                       mdt_id;

    mdt_id = 0;
    //TODO: tmp
//     mdt_id = netif_id_to_mdt_id(netif_id);
    if (mdt_id < 0) {
        IPC_ASSERT(KAL_FALSE);
        return;
    }

    list = &ipc_mdt_packet_routing_queue[uplink][mdt_id];
    ipc_mdt_queue_non_empty[uplink] = KAL_TRUE;

    if (list->last_gpd) {
        QBM_DES_SET_NEXT(list->last_gpd, gpd);
        list->last_gpd = gpd;
    } else {
        list->first_gpd = gpd;
        list->last_gpd = gpd;
    }
}

static INLINE kal_bool
ipc_mdt_check_route(
    kal_bool            uplink,
    ipc_pkt_des_t      *pkt_des,
    kal_uint32          netif_id)
{
    ipc_packet_info_t  *packet_info;
    kal_uint32          packet_len;
    kal_uint8          *ip_packet;
    //TODO: tmp rule_id
    kal_uint8           rule_id;

    IPC_ASSERT(pkt_des);

    packet_info = pkt_des->packet_info;
    packet_len = pkt_des->packet_len;
    ip_packet = pkt_des->packet;

    /* For NOT_MATCHED & BWM_MATCHED cases, check MDT routing. */
    if (mdt_is_activated && !packet_info->fragment) {
        kal_uint32  out_netif_id = 0;
        kal_bool    ret = KAL_FALSE;

        if ( (packet_info->info_valid_fields & IPC_FILTER_BY_PROTOCOL) &&
                (packet_info->protocol == IPC_HDR_PROT_TCP || packet_info->protocol == IPC_HDR_PROT_UDP) ) {
            if (IPC_HDR_IS_V4(ip_packet)) {
                ret = mdt_check_route(uplink, IPC_IP_TYPE_IPV4, pkt_des, netif_id, &out_netif_id, &rule_id);
            } else {
                ret = mdt_check_route(uplink, IPC_IP_TYPE_IPV6, pkt_des, netif_id, &out_netif_id, &rule_id);
            }
        }

        packet_info->out_netif_id = out_netif_id;

        if (ret) {
            /* If MDT check route return KAL_TRUE, then update the global alert data usage. */
            mdt_update_global_alert_data_usage(packet_len, netif_id);
            mdt_update_global_alert_data_usage(packet_len, out_netif_id);

            /* If MDT check route return KAL_TRUE, then update the iquota network data usage. */
            mdt_update_iquota_data_usage(uplink, netif_id, out_netif_id, packet_info->protocol, packet_len);
        }

        return ret;
    }

    return KAL_FALSE;
}

static INLINE qbm_spd *
ipc_mdt_mirror_spd(
    qbm_spd            *p_origin_spd,
    kal_bool           *mirror_spd_pie_idx,
    kal_uint8           mdt_matched_num)
{
    //TODO: TMP
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
#else
    return NULL;
#endif
}
#endif

static INLINE ipc_pkt_do_filter_result_e
ipc_pkt_do_one_filter(
    kal_bool            uplink,
    kal_uint8           ip_type,
    ipc_packet_info_t  *packet_info,
    ipc_filter_t       *filter,
    kal_uint32          pdn_id,
    kal_uint32          netif_id,
    kal_uint8           ebi_info,
    ipc_filter_t      **matched_filter,
    ipc_filter_info_t  *filter_info)
{
    ipc_pkt_do_filter_result_e  ret;
    ipc_match_result_e  matched = IPC_MATCH_RESULT_NOT_MATCHED;

    /* Check if its the Wild Card filter */
    if (_FEATURES_CONTAIN(&filter->rules, WC)) {
        goto filter_matched;
    }

    /* PDN ID is only valid for downlink filter */
    if ((KAL_FALSE == uplink) &&
        _RULES_CONTAIN(&filter->rules, PDN_ID) &&
        pdn_id != filter->rules.pdn_id) {
        ret = IPC_PKT_DO_FILTER_NOT_MATCHED;
        goto done; /* Skip the filter if PDN ID mismatched. */
    }

    if (_RULES_CONTAIN(&filter->rules, NETIF_ID) &&
        netif_id != filter->rules.netif_id) {
        ret = IPC_PKT_DO_FILTER_NOT_MATCHED;
        goto done;   /* Skip the filter if Network interface ID mismatched. */
    }

    /*
    *        1. ebi is only valid for downlink filter
    *        2. (2013/11/4) According to UPCM comment, EBI is only brought in first GPD of GPD list.
    *        3. (2015/1/14)  EBI info in the 1st GPD is recorded before filtering. (saved in ebi_info)
    */
    if ((KAL_FALSE == uplink) &&
        _RULES_CONTAIN(&filter->rules, EBI) &&
        ebi_info != filter->rules.ebi) {
        ret = IPC_PKT_DO_FILTER_NOT_MATCHED;
        goto done;
    }

    do {
        /* Check for IP version : single byte check, no content dividing issue */
        if (IPC_IP_TYPE_IPV4 == ip_type) {
            if (_RULES_CONTAIN_IPV4(&filter->rules)) {
                matched = ipc_match_ipv4_rules(&filter->rules, packet_info);
            }
        } else {
            if (_RULES_CONTAIN_IPV6(&filter->rules)) {
                matched = ipc_match_ipv6_rules(&filter->rules, packet_info);
            }
        }
    } while (0);

    if (!matched) {
        ret = IPC_PKT_DO_FILTER_NOT_MATCHED;
        goto done;
    }

filter_matched:
    hif_data_trace(IPC_GE_FILTER_RULE_MATCHED, 0, &filter->rules, filter->rules.features, filter->rules.valid_fields);

    if (0 != (matched & IPC_MATCH_RESULT_FRAG_MATCHED)) {
        /*
         * Handle "FRAG_MATCHED" fragment packets.
         * Note that the filter should be set to support fragment.
         */
        IPC_ASSERT(_FEATURES_CONTAIN(&filter->rules, FRAG));

        *matched_filter = filter;

        ret = IPC_PKT_DO_FILTER_HANDLE_FRAG;
        goto done;
    }

    if (_FEATURES_CONTAIN(&filter->rules, BWM)) {
        /* For BWM filter, there is no filter callback funtion, so it's not necessary to cache filter info. */

        ret = IPC_PKT_DO_FILTER_BWM_MATCHED;
        goto done;
    }

    *matched_filter = filter;

    if (KAL_TRUE == filter->callback_with_info) {
        /* Fill filter_info */
        ipc_netif_t *netif;

        filter_info->netif_id = netif_id;

        netif = ipc_find_netif(netif_id);
        if (netif) {
            filter_info->ip_id = ipc_map_netif_to_ip_id(netif);
            IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
        } else {
            filter_info->ip_id = -1;
        }

        /*
         *      1. ebi is only valid for downlink filter
         *      2. (2013/11/4)  According to UPCM comment, EBI is only brought in first GPD of GPD list.
         */
        if (KAL_FALSE == uplink) {
            filter_info->ebi = ebi_info;

            IPC_RETRIEVE_PROTOID_FROM_PDNID(filter_info->ebi, filter_info->proto_idx);
            IPC_UNMASK_PROTOID_FROM_PDNID(filter_info->ebi);
        } else {
            filter_info->ebi = -1;
        }
        /*
         * (2014/11/11) Based on LTECSR's requirement, carry RTP data_offset info to them.
         */
        filter_info->data_offset = packet_info->data_offset;
    }

    ret = IPC_PKT_DO_FILTER_MATCHED;
    goto done;

done:
    if (_FEATURES_CONTAIN(&filter->rules, CLONE) && (IPC_PKT_DO_FILTER_MATCHED == ret)) {
        ret = IPC_PKT_DO_FILTER_HANDLE_CLONE;
        hif_trace_info(IPC_TR_FILTER_MATCHED_CLONED);
    }

    return ret;
}

static INLINE ipc_pkt_do_filter_result_e
ipc_pkt_do_filter(
    kal_bool            uplink,
    ipc_filter_list_t **fls_set_p,
    kal_uint32          fls_set_cnt,
    kal_uint8           session_type,
    kal_uint32          pdn_id,
    kal_uint32          netif_id,
    kal_uint8           ebi_info,// for record ebi, which is saved in the 1st GPD
    ipc_pkt_des_t      *packet_des)
{
    ipc_filter_list_t          *filter_list;
    kal_uint8                   filter_list_type;
    ipc_filter_t               *filter;
    kal_uint32                  fls_idx;
    ipc_pkt_do_filter_result_e  ret = IPC_PKT_DO_FILTER_NOT_MATCHED;
    kal_uint8                   mdt_rule_id = 0;
    kal_uint8                   ip_type;

    /* Alias local parameter */
    kal_uint8                  *ip_packet = packet_des->packet;
    kal_uint32                  packet_len = packet_des->packet_len;
    qbm_gpd                    *curr_gpd = packet_des->gpd;
    qbm_gpd                    *curr_bd = packet_des->bd;
    ipc_filter_t              **matched_filter = packet_des->matched_filter;
    ipc_filter_info_t          *filter_info = packet_des->filter_info;
    ipc_packet_info_t          *packet_info = packet_des->packet_info;
    upcm_did                   *did = packet_des->did;
    kal_uint32                  pkt_start_si_idx = packet_des->pkt_start_idx;
    kal_bool                    get_pkt_info = packet_des->is_packet_info; //No need to parse packet again if TRUE

#if (IPC_DL_INVALID_LEN_DROP_EN)
    if ( (!uplink) &&
         (packet_len > ipc_dl_valid_packet_len_s) ) {
        ret = IPC_PKT_DO_FILTER_INVALID_LEN;
        goto done;
    }
#endif

    filter_list = NULL;// init per GPD start

    #if defined(__MD_DIRECT_TETHERING_SUPPORT__)
        /*
         * When MD Direct Tethering is activated, we need packet_info for every packets.
         */
        if (mdt_is_activated && !get_pkt_info) {
            // get packet info
            if (IPC_PKT_DES_TYPE_GPD == packet_des->des_type) {
                IPC_ASSERT(ip_packet && curr_gpd);
                ipc_get_packet_info_gpd(ip_packet, curr_gpd, curr_bd, packet_info);
            } else if (IPC_PKT_DES_TYPE_DID == packet_des->des_type) {
                IPC_ASSERT(ip_packet && did);
                ipc_get_packet_info_did(ip_packet, did, pkt_start_si_idx, packet_info);
            } else {
                IPC_ASSERT(ip_packet);
                ipc_get_packet_info(ip_packet, packet_len, packet_info);
            }
            get_pkt_info = KAL_TRUE;// already get info, get info GPD

            /* Check if the packet should be tracked */
            if (uplink) {
                mdt_track_packet(uplink, packet_des);
            }
        }
    #endif

    for (fls_idx = 0; fls_idx < fls_set_cnt; fls_idx++) {
        filter_list = fls_set_p[fls_idx];

        if (!filter_list || 0 == filter_list->count) {
            continue; /* Skip empty filter list. */
        }

        filter_list_type = filter_list->ip_type;

        if (IPC_IP_TYPE_IPV4 == session_type) {
            if (IPC_IP_TYPE_IPV4 != filter_list_type) {
                continue; /* Skip the filter list if IP type mismatched. */
            }
        } else if (IPC_IP_TYPE_IPV6 == session_type) {
            if (IPC_IP_TYPE_IPV6 != filter_list_type) {
                continue; /* Skip the filter list if IP type mismatched. */
            }
        }

        if (KAL_FALSE == get_pkt_info)
        {
            // get packet info
            if (IPC_PKT_DES_TYPE_GPD == packet_des->des_type) {
                IPC_ASSERT(ip_packet && curr_gpd);
                ipc_get_packet_info_gpd(ip_packet, curr_gpd, curr_bd, packet_info);
            } else if (IPC_PKT_DES_TYPE_DID == packet_des->des_type) {
                IPC_ASSERT(ip_packet && did);
                ipc_get_packet_info_did(ip_packet, did, pkt_start_si_idx, packet_info);
            } else {
                IPC_ASSERT(ip_packet);
                ipc_get_packet_info(ip_packet, packet_len, packet_info);
            }
            get_pkt_info = KAL_TRUE;// already get info, get info GPD
        }

        for (filter = filter_list->filter_head; filter;
             filter = filter->next_filter_map[ipc_next_filter_hash(filter_list_type)]) {

            /* Check for IP version : single byte check, no content dividing issue */
            if ( IPC_HDR_IS_V4(ip_packet) ) {
                ip_type = IPC_IP_TYPE_IPV4;
            } else {
                ip_type = IPC_IP_TYPE_IPV6;
            }
            ret = ipc_pkt_do_one_filter(uplink, ip_type, packet_info, filter, pdn_id, netif_id, ebi_info, matched_filter, filter_info);

            if (IPC_PKT_DO_FILTER_NOT_MATCHED != ret) {
                if (IPC_PKT_DO_FILTER_BWM_MATCHED == ret || IPC_PKT_DO_FILTER_HANDLE_CLONE == ret) {
                    goto mdt_check_route;
                } else {
                    goto done;
                }
            }
        }
    } /* for each filter_list, fls_idx */

    ret = IPC_PKT_DO_FILTER_NOT_MATCHED;
    goto mdt_check_route;

mdt_check_route:
#if defined(__MTK_MD_DIRECT_TETHERING_SUPPORT__)
    /* For NOT_MATCHED & BWM_MATCHED cases, check MDT routing before return. */
    if (ipc_mdt_check_route(uplink, packet_des, netif_id)) {
        hif_data_trace(IPC_MDT_CHECK_ROUTE_MATCHED, 0, curr_gpd, packet_info->out_netif_id);
        ret = IPC_PKT_DO_FILTER_MDT_MATCHED;
    }
#endif
    goto done;

done:
    ipc_print_pkt_trace(uplink, packet_des, (kal_uint8)ret, mdt_rule_id);

    return ret;
}

static INLINE void
ipc_call_filter_cbk(
    kal_bool            uplink,
    qbm_gpd            *p_head,
    qbm_gpd            *p_tail,
    kal_uint16          callback_gpd_data_len,
    ipc_filter_t       *filter,
    ipc_filter_info_t  *filter_info)
{
    IPC_ASSERT(p_head && p_tail);
    IPC_ASSERT(filter);
    IPC_ASSERT(filter_info);

    hif_data_trace(IPC_GE_FILTER_OUT_INFO, uplink, filter->callback_context, filter->filter_id);
    hif_data_trace(IPC_GE_FILTER_OUT_GPD, uplink, p_head, p_tail, callback_gpd_data_len);

    if (KAL_TRUE == filter->callback_with_info)
    {
        ipc_filter_with_info_callback_t callback_func;

        callback_func = (ipc_filter_with_info_callback_t)(filter->callback_func);

        callback_func(      filter_info,
                            filter->callback_context,
                            filter->filter_id,
                            p_head,
                            p_tail,
                            (kal_uint32)callback_gpd_data_len   );
    } else
    {
        ipc_filter_callback_t callback_func;

        callback_func = (ipc_filter_callback_t)(filter->callback_func);

        callback_func(      filter->callback_context,
                            filter->filter_id,
                            p_head,
                            p_tail,
                            (kal_uint32)callback_gpd_data_len   );
    }
}

static INLINE kal_uint32
ipc_spd_do_filter(
    kal_bool            uplink,
    ipc_filter_list_t **fls_set_p,
    kal_uint32          fls_set_cnt,
    kal_uint8           session_type,
    kal_uint32          pdn_id,
    kal_uint32          netif_id,
    kal_uint8           ebi_info,// for record ebi, which is saved in the 1st GPD
    qbm_gpd            *curr_gpd)
{
    kal_uint8          *ip_packet = NULL;
    kal_uint32          length;
    ipc_filter_t       *filter;
    ipc_filter_info_t   filter_info;
    ipc_packet_info_t   packet_info;
    qbm_spd_pi         *p_spd_pi;
    qbm_spd_pie        *p_spd_pie = NULL;// spd payload info element
    qbm_spd_pie        *p_prev_spd_pie;
    kal_uint8           idx;
    kal_uint32          payload_len = 0;
    kal_uint16          packet_num = 0;
    kal_uint16          remain_packet_num = 0; // the num of packets not filtered out
    ipc_pkt_do_filter_result_e  result;
    ipc_pkt_des_t       packet_des;
#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
    kal_uint8           mdt_matched_num = 0;
    kal_bool            mirror_spd_pie_idx[QBM_SPD_MAX_PKTNUM];
    kal_uint32          mdt_out_netif_id = 0;

    kal_mem_set(mirror_spd_pie_idx, 0, sizeof(mirror_spd_pie_idx));
#endif

    /* SPD only supports for downlink traffic. */
    IPC_ASSERT(!uplink);

    /* Init packet_des */
    kal_mem_set(&packet_des, 0, sizeof(ipc_pkt_des_t));
    packet_des.des_type = IPC_PKT_DES_TYPE_SPD;
    packet_des.matched_filter = &filter;
    packet_des.filter_info = &filter_info;
    packet_des.packet_info = &packet_info;

    ip_packet = QBM_DES_GET_DATAPTR(curr_gpd);
    length = QBM_DES_GET_DATALEN(curr_gpd);
    IPC_ASSERT(length > 0);
    p_spd_pi = QBM_SPD_GET_PI((qbm_spd *)curr_gpd);
    p_prev_spd_pie = NULL;

    packet_num = QBM_SPD_PI_GET_PKTNUM(p_spd_pi);
    IPC_ASSERT(packet_num > 0);

    hif_data_trace(IPC_GE_SPD_DO_FILTER, 0, curr_gpd, length, packet_num);
    remain_packet_num = 0;
    for (idx = 0; idx < packet_num; idx++) {
        if (idx == 0) {
            p_spd_pie = QBM_SPD_PI_GET_FIRST_PIE(p_spd_pi);
        } else {
            ip_packet = QBM_SPD_PAYLOAD_NEXT(ip_packet, payload_len);
            p_spd_pie = QBM_SPD_PIE_NEXT(p_spd_pie);
        }

        payload_len = QBM_SPD_PIE_GET_PAYLOAD_LEN(p_spd_pie);

        /* Bypass the packets with IGR bit set. */
        if (!QBM_SPD_PIE_GET_IGR(p_spd_pie)) {
            IPC_ASSERT(payload_len > 0);

            /* Fill packet_des */
            packet_des.packet = ip_packet;
            packet_des.packet_len = payload_len;

            result = ipc_pkt_do_filter(uplink, fls_set_p, fls_set_cnt, session_type, pdn_id, netif_id, ebi_info, &packet_des);

            if ( (IPC_PKT_DO_FILTER_MATCHED == result) ||
                 (IPC_PKT_DO_FILTER_INVALID_LEN == result) ||
                 (IPC_PKT_DO_FILTER_MDT_MATCHED == result) ) {
                hif_data_trace(IPC_GE_SPD_ENTRY_IGR_INFO, uplink, curr_gpd, idx, payload_len);

                QBM_SPD_PIE_SET_IGR(p_spd_pie);
                length -= payload_len;

                if (QBM_SPD_PIE_GET_EOL(p_spd_pie) && (NULL != p_prev_spd_pie)) {
                    /* Move the EOL bit to the previous SPD entry */
                    IPC_ASSERT(remain_packet_num > 0);

                    QBM_SPD_PIE_SET_EOL(p_prev_spd_pie);
                }

                if (IPC_PKT_DO_FILTER_MATCHED == result) {
                    qbm_gpd    *callback_gpd_p;
                    kal_uint8  *callback_gpd_data_p;
                    /*
                     * 1. A packet is indivisible from the SPD, so we need to allocate a GPD for it.
                     * 2. Uplink SPD is not used.
                     * 3. (2014/8/13 Stan.Chen) Use QBM_TYPE_NET_DL, if it use out, use QBM_TYPE_HIF_DL instead.
                     * 4. (2016/10/14 Wen-Jiunn.Liu) QBM_TYPE_HIF_DL is not provided anymore in Gen93.
                     */
                    if (1 != qbmt_alloc_q_no_tail(
                                (KAL_TRUE == uplink)?QBM_TYPE_NET_UL_SHRD/*UL*/:QBM_TYPE_NET_DL/*DL*/, /* type */
                                1, /* buff_num */
                                (void**)&callback_gpd_p, /* pp_head */
                                (void**)&callback_gpd_p  /* pp_tail */)) {
                        hif_trace_error(IPC_TR_DO_FILTER_ALLOC_GPD_NG, uplink, 0, curr_gpd, idx, payload_len);
                        continue;
                    }

                    /* Copy data from SPD payload to output GPD */
                    IPC_ASSERT(callback_gpd_p);
                    ipc_set_gpd_datalen(callback_gpd_p, payload_len, (void**)&callback_gpd_data_p);
                    IPC_ASSERT(callback_gpd_data_p);

                    QBM_CACHE_INVALID(ip_packet, payload_len);
                    kal_mem_cpy(callback_gpd_data_p, ip_packet, payload_len);
                    QBM_CACHE_FLUSH(callback_gpd_data_p, payload_len);

                    /* Forward GPD by filter's callback function */
                    ipc_call_filter_cbk(uplink, callback_gpd_p, callback_gpd_p, payload_len, filter, &filter_info);
            #if defined(__MD_DIRECT_TETHERING_SUPPORT__)
                } else if (IPC_PKT_DO_FILTER_MDT_MATCHED == result) {
                    mdt_matched_num++;
                    mirror_spd_pie_idx[idx] = KAL_TRUE;
                    mdt_out_netif_id = packet_info.out_netif_id;
            #endif
                }
            } else {
                remain_packet_num ++;
                p_prev_spd_pie = p_spd_pie;
            }
        }

        if (QBM_SPD_PIE_GET_EOL(p_spd_pie)) {
            /* end of packet list */
            break;
        }
    }

    /* If there is no remain packet, then the SPD's Transfer Data Length should be zero. */
    IPC_ASSERT( (0 != remain_packet_num) || (0 == length) );

    /* Update SPD's Transfer Data Length */
    QBM_DES_SET_DATALEN(curr_gpd, length);

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
    /* Mirror the SPD if there is any packet routing to direct path. */
    if (mdt_matched_num) {
        qbm_spd *p_mirror_spd;

        p_mirror_spd = ipc_mdt_mirror_spd((qbm_spd *)curr_gpd, mirror_spd_pie_idx, mdt_matched_num);
        IPC_ASSERT(p_mirror_spd);

        ipc_mdt_push_gpd_to_routing_queue(uplink, mdt_out_netif_id, (qbm_gpd *)p_mirror_spd);
    }
#endif

    return remain_packet_num;
}

static INLINE void
ipc_gpd_list_del_entry(
    qbm_gpd           **p_first_gpd,
    qbm_gpd           **p_last_gpd,
    qbm_gpd           **p_curr_gpd,
    qbm_gpd           **p_prev_gpd,
    qbm_gpd           **p_next_gpd)
{
    if (*p_curr_gpd == *p_first_gpd) {
        if (*p_curr_gpd == *p_last_gpd) {
            *p_first_gpd = NULL;
            *p_last_gpd = NULL;
        } else {
            IPC_ASSERT(*p_next_gpd);
            *p_first_gpd = *p_next_gpd;
        }
        *p_prev_gpd = NULL;
    } else {
        IPC_ASSERT(*p_prev_gpd);
        if (*p_curr_gpd == *p_last_gpd) {
            *p_last_gpd = *p_prev_gpd;
            QBM_DES_SET_NEXT(*p_prev_gpd, NULL);
        } else {
            IPC_ASSERT(*p_next_gpd);
            QBM_DES_SET_NEXT(*p_prev_gpd, *p_next_gpd);
        }
    }
    QBM_DES_SET_NEXT(*p_curr_gpd, NULL);
}

static INLINE kal_uint16
ipc_do_filter(
    kal_bool            uplink,
    ipc_filter_list_t **fls_set_p,
    kal_uint32          fls_set_cnt,
    kal_uint8           session_type,
    kal_uint32          pdn_id,
    kal_uint32          netif_id,
    qbm_gpd           **pp_head,
    qbm_gpd           **pp_tail)
{
    qbm_gpd            *first_gpd;
    qbm_gpd            *last_gpd;
    qbm_gpd            *curr_gpd;
    qbm_gpd            *prev_gpd;
    qbm_gpd            *next_gpd;
    qbm_gpd            *curr_bd = NULL;
    kal_bool            end_of_list;
    kal_uint8           ebi_info = 0;// for record ebi, which is saved in the 1st GPD
    kal_uint8          *ip_packet = NULL;
    kal_uint32          length;
    ipc_filter_t       *filter;
    ipc_filter_info_t   filter_info;
    ipc_packet_info_t   packet_info;
    kal_bool            spd;
    kal_uint8           remain_packet_num = 0; // the num of packets not filtered out
    kal_uint32          total_remain_packet_num = 0; // the total num of packets not filtered out
    ipc_pkt_do_filter_result_e  result;
    ipc_pkt_des_t       packet_des;


    first_gpd = *pp_head;
    last_gpd = *pp_tail;

    if (first_gpd) {
        ebi_info = ((upcm_dlvr_dl_info_t *)QBM_DES_GET_SW_CTRL_FIELD(first_gpd))->ebi;
    }

    prev_gpd = NULL;
    end_of_list = (NULL == first_gpd);

    /* Init packet_des */
    kal_mem_set(&packet_des, 0, sizeof(ipc_pkt_des_t));
    packet_des.des_type = IPC_PKT_DES_TYPE_GPD;
    packet_des.matched_filter = &filter;
    packet_des.filter_info = &filter_info;
    packet_des.packet_info = &packet_info;

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
    {
        /*
         * Check ipc_mdt_packet_routing_queue has been set to 0 or not.
         * It should be done before calling ipc_do_filter().
         */
        kal_uint32  i;

        for (i = 0; i < IPC_MAX_NETIF_CNT; i++) {
            IPC_ASSERT( (ipc_mdt_packet_routing_queue[uplink][i].first_gpd == NULL) &&
                        (ipc_mdt_packet_routing_queue[uplink][i].last_gpd == NULL) );
        }
        IPC_ASSERT(!ipc_mdt_queue_non_empty[uplink]);
    }
#endif

    for (curr_gpd = first_gpd; curr_gpd && !end_of_list; curr_gpd = next_gpd)
    {
        spd = (QBM_DES_GET_PDT(curr_gpd) != 0);

        next_gpd = QBM_DES_GET_NEXT(curr_gpd);
        end_of_list = (curr_gpd == last_gpd);

        result = IPC_PKT_DO_FILTER_NONE;// reset for each GPD

        if (spd){
            /*
             * It's SPD (PDT != 0)
             * Need to traverse all of the packets in it.
             */
            remain_packet_num = ipc_spd_do_filter(uplink, fls_set_p, fls_set_cnt, session_type, pdn_id, netif_id, ebi_info, curr_gpd);

            if (0 == remain_packet_num) {
                /*
                 * All packets of the SPD were filtered out,
                 * extract the SPD from the list.
                 */
                ipc_gpd_list_del_entry(&first_gpd, &last_gpd, &curr_gpd, &prev_gpd, &next_gpd);

                /* Destroy SPD since there is no packet remained. */
                hif_data_trace(IPC_GE_SPD_ALL_IGR_INFO, uplink, curr_gpd, QBM_SPD_PI_GET_PKTNUM(QBM_SPD_GET_PI((qbm_spd *)curr_gpd)));
                qbmt_dest_q(curr_gpd, curr_gpd);
            } else {
                /* Update prev_gpd if the curr_gpd is not deleted from the list. */
                prev_gpd = curr_gpd;
                total_remain_packet_num += remain_packet_num;
            }
        } else {
            /*
             * It's GPD (PDT == 0)
             * There is only one packet, so just do it.
             */
            /*
             * For DL 3G packet, packet content might be divided in several pieces in BD list.
             * To handle this situation, IPCore MUST aware this during packet content checking.
             */
            if (KAL_TRUE != ipc_get_ip_packet(curr_gpd, &curr_bd, &ip_packet, &length))
            {
                hif_trace_error(IPC_TR_DO_FILTER_INVALID_GPD, curr_gpd);
                result = IPC_PKT_DO_FILTER_ERROR;
            } else {
                /* Fill packet_des */
                packet_des.packet = ip_packet;
                packet_des.packet_len = length;
                packet_des.gpd = curr_gpd;
                packet_des.bd = curr_bd;

                result = ipc_pkt_do_filter(uplink, fls_set_p, fls_set_cnt, session_type, pdn_id, netif_id, ebi_info, &packet_des);
            }

            if (IPC_PKT_DO_FILTER_MATCHED == result) {
                /* Delete curr_gpd from the list */
                ipc_gpd_list_del_entry(&first_gpd, &last_gpd, &curr_gpd, &prev_gpd, &next_gpd);

                {
                    /* Forward "curr_gpd" to callback function */
                    qbm_gpd *callback_gpd_p;

                    length = QBM_DES_GET_DATALEN(curr_gpd);

                    if (KAL_TRUE == uplink)
                    {   /* For UL GPD, NO unite issue */
                        callback_gpd_p = curr_gpd;
                    } else {
                        /* For DL GPD, do unite before actually calling callback functions */
                        ipc_gpd_unite(uplink, curr_gpd, &callback_gpd_p);

                        if (callback_gpd_p != curr_gpd)
                        {
                            hif_data_trace( IPC_GE_DO_FILTER_GPD_UPDATE,
                                    uplink,
                                    curr_gpd,
                                    callback_gpd_p,
                                    (callback_gpd_p)?(QBM_DES_GET_DATALEN(callback_gpd_p)):0);

                            /* Always destroy "curr_gpd" */
                            QBM_DES_SET_NEXT(curr_gpd, NULL);
                            qbmt_dest_q(curr_gpd, curr_gpd);
                        }

                        if (!callback_gpd_p) {
                            hif_data_trace(IPC_GE_UNITE_FAIL_DROP, length, curr_gpd);
                            hif_data_trace(IPC_GE_UNITE_FAIL_DROP_INFO, filter->filter_id,
                                    curr_gpd,
                                    pdn_id,
                                    netif_id);
                            continue;
                        }
                    }

                    /* Forward GPD by filter's callback function */
                    ipc_call_filter_cbk(uplink, callback_gpd_p, callback_gpd_p, length, filter, &filter_info);
                }
			} else if (IPC_PKT_DO_FILTER_HANDLE_FRAG == result) {
				qbm_gpd                    *callback_gpd_p;
				ipc_frag_refilter_info_t    info;

				/* Delete curr_gpd from the list */
                ipc_gpd_list_del_entry(&first_gpd, &last_gpd, &curr_gpd, &prev_gpd, &next_gpd);
				ipc_gpd_unite(uplink, curr_gpd, &callback_gpd_p);

				if (callback_gpd_p != curr_gpd) {
					/* Always destroy "curr_gpd" */
					QBM_DES_SET_NEXT(curr_gpd, NULL);
					qbmt_dest_q(curr_gpd, curr_gpd);
				}

                info.netif_id = netif_id;
                info.pdn_id = pdn_id;
                info.uplink = KAL_FALSE;
                info.packet_info = &packet_info;
                info.filter_id = filter->filter_id;
                info.filter_magic_number = ipc_filter_magic_number_s;
                ((upcm_dlvr_dl_info_t *)QBM_DES_GET_SW_CTRL_FIELD(callback_gpd_p))->ebi = ebi_info;

                ipc_fragment_defrag(callback_gpd_p, &info, (IPC_HDR_IS_V4(ip_packet)) ? IPC_IP_TYPE_IPV4 : IPC_IP_TYPE_IPV6);

			} else if (IPC_PKT_DO_FILTER_INVALID_LEN == result) {
                /* Delete curr_gpd from the list & destroy the GPD */
                ipc_gpd_list_del_entry(&first_gpd, &last_gpd, &curr_gpd, &prev_gpd, &next_gpd);
                qbmt_dest_q(curr_gpd, curr_gpd);
        #if defined(__MD_DIRECT_TETHERING_SUPPORT__)
            } else if (IPC_PKT_DO_FILTER_MDT_MATCHED == result) {
                /* Delete curr_gpd from the list & push the GPD to MDT queue */
                ipc_gpd_list_del_entry(&first_gpd, &last_gpd, &curr_gpd, &prev_gpd, &next_gpd);
                ipc_mdt_push_gpd_to_routing_queue(uplink, packet_info.out_netif_id, curr_gpd);
        #endif
            } else {
                /* Update prev_gpd if the curr_gpd is not deleted from the list. */
                prev_gpd = curr_gpd;
                total_remain_packet_num ++;
                total_remain_packet_num |= IPC_HAS_GPD_MASK;
            }
        }

    } /* for each GPD, curr_gpd */

    *pp_head = first_gpd;
    *pp_tail = last_gpd;

    return total_remain_packet_num;
}

kal_uint16
ipc_do_ul_filter(
    kal_uint8       session_type,
    kal_uint32      netif_id,
    qbm_gpd       **pp_head,
    qbm_gpd       **pp_tail)
{
    static ipc_filter_list_t   *fls_set[] = {ipc_ul_v4_filter_list_s, ipc_ul_v6_filter_list_s};

	return ipc_do_filter(KAL_TRUE, fls_set, sizeof(fls_set)/sizeof(ipc_filter_list_t*), session_type, 0, netif_id, pp_head, pp_tail);
}

kal_uint16
ipc_do_dl_filter(
    kal_uint8       session_type,
    kal_uint32      netif_id,
    kal_uint32      pdn_id,
    qbm_gpd       **pp_head,
    qbm_gpd       **pp_tail)
{
    static ipc_filter_list_t   *fls_set[] = {ipc_dl_v4_filter_list_s, ipc_dl_v6_filter_list_s};

	return ipc_do_filter(KAL_FALSE, fls_set, sizeof(fls_set)/sizeof(ipc_filter_list_t*), session_type, pdn_id, netif_id, pp_head, pp_tail);
}

void
ipc_frag_refilter(
    kal_uint8                   ip_type,
    ipc_frag_refilter_info_t   *info,
    qbm_gpd                    *p_head,
    qbm_gpd                    *p_tail)
{
    static ipc_filter_list_t   *fls_ul_set[] = {ipc_ul_v4_filter_list_s, ipc_ul_v6_filter_list_s};
    static ipc_filter_list_t   *fls_dl_set[] = {ipc_dl_v4_filter_list_s, ipc_dl_v6_filter_list_s};

    ipc_pkt_do_filter_result_e  match_result;
    kal_uint8                   ebi_info;
    qbm_gpd                    *curr_bd = NULL;
    kal_uint8                  *ip_packet = NULL;
    kal_uint32                  length;
    ipc_pkt_des_t               packet_des;
    ipc_filter_t               *filter;
    ipc_filter_t               *matched_filter;
    ipc_filter_info_t           filter_info;

    IPC_ASSERT(p_head && p_tail && info);

    if (p_head) {
        ebi_info = ((upcm_dlvr_dl_info_t *)QBM_DES_GET_SW_CTRL_FIELD(p_head))->ebi;
    }

    /* Set fragment to KAL_FALSE */
    info->packet_info->fragment = KAL_FALSE;

    /*
     * If filter lists haven't been changed (magic number hasn't changed),
     * do Quick-Refiltering: only match the original matched filter.
     */
    if (info->filter_magic_number == ipc_filter_magic_number_s) {
        filter = ipc_find_filter_by_id(ipc_filter_pool_s, info->filter_id);
        IPC_ASSERT(filter);

        match_result = ipc_pkt_do_one_filter(info->uplink,
                                        ip_type,
                                        info->packet_info,
                                        filter,
                                        info->pdn_id,
                                        info->netif_id,
                                        ebi_info,
                                        &matched_filter,
                                        &filter_info);

        if (match_result) {
            IPC_ASSERT(matched_filter == filter);
            IPC_ASSERT(IPC_PKT_DO_FILTER_HANDLE_FRAG != match_result);

            length = QBM_DES_GET_DATALEN(p_head);
            goto match_done;
        }
    }

    /*
     * Refiltering: go through all filters
     */

    /* Init packet_des */
    kal_mem_set(&packet_des, 0, sizeof(ipc_pkt_des_t));
    packet_des.des_type = IPC_PKT_DES_TYPE_GPD;
    packet_des.matched_filter = &filter;
    packet_des.filter_info = &filter_info;
    packet_des.packet_info = info->packet_info;
    packet_des.is_packet_info = KAL_TRUE;

    if (KAL_TRUE != ipc_get_ip_packet(p_head, &curr_bd, &ip_packet, &length))
    {
        IPC_ASSERT(KAL_FALSE);
    }

    /* Fill packet_des */
    packet_des.packet = ip_packet;
    packet_des.packet_len = length;
    packet_des.gpd = p_head;
    packet_des.bd = curr_bd;

    /* Clear fragment indicator in packet_info */
    packet_des.packet_info->fragment = KAL_FALSE;

    if (info->uplink) {
        match_result = ipc_pkt_do_filter(   KAL_TRUE,
                                            fls_ul_set,
                                            sizeof(fls_ul_set)/sizeof(ipc_filter_list_t*),
                                            ip_type,
                                            info->pdn_id,
                                            info->netif_id,
                                            ebi_info,
                                            &packet_des);
    } else {
        match_result = ipc_pkt_do_filter(   KAL_FALSE,
                                            fls_dl_set,
                                            sizeof(fls_dl_set)/sizeof(ipc_filter_list_t*),
                                            ip_type,
                                            info->pdn_id,
                                            info->netif_id,
                                            ebi_info,
                                            &packet_des);
    }

match_done:
    switch (match_result) {
        ipc_pkt_t   pkt;

        case IPC_PKT_DO_FILTER_MATCHED:
            ipc_call_filter_cbk(info->uplink, p_head, p_tail, length, filter, &filter_info);
            break;
        case IPC_PKT_DO_FILTER_NOT_MATCHED:
        case IPC_PKT_DO_FILTER_BWM_MATCHED:
            pkt.buf_type = IPC_PKT_DES_TYPE_GPD;
            pkt.head = p_head;
            pkt.tail = p_tail;

            if (info->uplink) {
                ipc_send_ul_pkt_by_netif_id(&pkt, NULL, info->netif_id, ip_type);
            } else {
                ipc_send_dl_pkt_in_did_internal(&pkt, NULL, info->netif_id);
            }
            break;
        default:
            IPC_ASSERT(KAL_FALSE);
            break;
    }
}

void ipc_frag_send_pkt(
    kal_uint8                   ip_type,
    ipc_frag_refilter_info_t   *info,
    qbm_gpd                    *p_head,
    qbm_gpd                    *p_tail)
{
    ipc_pkt_t   pkt;

    IPC_ASSERT(p_head && p_tail && info);

    pkt.buf_type = IPC_PKT_DES_TYPE_GPD;
    pkt.head = p_head;
    pkt.tail = p_tail;

    if (info->uplink) {
        ipc_send_ul_pkt_by_netif_id(&pkt, NULL, info->netif_id, ip_type);
    } else {
        ipc_send_dl_pkt_in_did_internal(&pkt, NULL, info->netif_id);
    }
}

void
ipc_forward_packet_by_msg(
    msg_type       msg_id,
    void           *context,
    kal_int32       filter_id,
    qbm_gpd        *head_gpd,
    qbm_gpd        *tail_gpd,
    kal_uint32      length)
{
    ipc_filter_t   *filter = (ipc_filter_t *)context;
    ipc_packet_filtered_req_t *req;

    req = (ipc_packet_filtered_req_t *)construct_local_para(sizeof(ipc_packet_filtered_req_t), TD_RESET);
    req->context = filter->module_context;
    req->filter_id = filter_id;
    req->head_gpd = head_gpd;
    req->tail_gpd = tail_gpd;
    req->length = length;

    msg_send6(
#ifdef ATEST_SYS_IPCORE
                MOD_NIL, /* src_mod_id */
#else
                MOD_IPCORE, /* src_mod_id */
#endif
                filter->module_id, /* dest_mod_id */
                IPCORE_SAP, /* sap_id */
                msg_id, /* msg_id */
                (local_para_struct *)req, /* local_para_ptr */
                NULL); /* peer_buff_ptr */
}

void
ipc_forward_packet_with_info_by_msg(
    msg_type             msg_id,
    ipc_filter_info_t   *info_p,
    void                *context,
    kal_int32            filter_id,
    qbm_gpd             *head_gpd,
    qbm_gpd             *tail_gpd,
    kal_uint32           length)
{
    ipc_filter_t   *filter = (ipc_filter_t *)context;
    ipc_packet_filtered_with_info_req_t *req;

    req = (ipc_packet_filtered_with_info_req_t *)construct_local_para(sizeof(ipc_packet_filtered_with_info_req_t), TD_RESET);
    kal_mem_cpy(&(req->info), info_p, sizeof(ipc_filter_info_t));
    req->context = filter->module_context;
    req->filter_id = filter_id;
    req->head_gpd = head_gpd;
    req->tail_gpd = tail_gpd;
    req->length = length;

    msg_send6(
#ifdef ATEST_SYS_IPCORE
                MOD_NIL, /* src_mod_id */
#else
                MOD_IPCORE, /* src_mod_id */
#endif
                filter->module_id, /* dest_mod_id */
                IPCORE_SAP, /* sap_id */
                msg_id, /* msg_id */
                (local_para_struct *)req, /* local_para_ptr */
                NULL); /* peer_buff_ptr */
}

void
ipc_forward_ul_packet_by_msg(
        void           *context,
        kal_int32       filter_id,
        qbm_gpd        *head_gpd,
        qbm_gpd        *tail_gpd,
        kal_uint32      length)
{
    ipc_forward_packet_by_msg(
        MSG_ID_IPCORE_UL_PACKET_FILTERED_REQ,
        context,
        filter_id,
        head_gpd,
        tail_gpd,
        length
        );
}

void
ipc_forward_dl_packet_by_msg(
        void           *context,
        kal_int32       filter_id,
        qbm_gpd        *head_gpd,
        qbm_gpd        *tail_gpd,
        kal_uint32      length)
{
    ipc_forward_packet_by_msg(
        MSG_ID_IPCORE_DL_PACKET_FILTERED_REQ,
        context,
        filter_id,
        head_gpd,
        tail_gpd,
        length
        );
}

void
ipc_forward_ul_packet_with_info_by_msg(
        ipc_filter_info_t   *info_p,
        void                *context,
        kal_int32            filter_id,
        qbm_gpd             *head_gpd,
        qbm_gpd             *tail_gpd,
        kal_uint32           length)
{
    ipc_forward_packet_with_info_by_msg(
        MSG_ID_IPCORE_UL_PACKET_FILTERED_WITH_INFO_REQ,
        info_p,
        context,
        filter_id,
        head_gpd,
        tail_gpd,
        length
        );
}

void
ipc_forward_dl_packet_with_info_by_msg(
        ipc_filter_info_t   *info_p,
        void                *context,
        kal_int32            filter_id,
        qbm_gpd             *head_gpd,
        qbm_gpd             *tail_gpd,
        kal_uint32           length)
{
    ipc_forward_packet_with_info_by_msg(
        MSG_ID_IPCORE_DL_PACKET_FILTERED_WITH_INFO_REQ,
        info_p,
        context,
        filter_id,
        head_gpd,
        tail_gpd,
        length
        );
}

/*------------------------------------------------------------------------------
 * Public functions. (Gen93)
 *----------------------------------------------------------------------------*/
kal_uint16
ipc_meta_do_filter(
    kal_uint8               ip_type,
    kal_uint32              netif_id,
    lhif_meta_tbl_t        *meta,
    ipc_mdt_mirror_des_t   *mdt_mirror_des)
{
    kal_uint8                  *ip_packet = meta->vrb_addr;
    kal_uint32                  length = meta->length;
    ipc_filter_t               *filter;
    ipc_filter_info_t           filter_info;
    ipc_packet_info_t           packet_info;
    ipc_pkt_do_filter_result_e  result;
    ipc_pkt_des_t               packet_des;
    kal_bool                    uplink = KAL_TRUE; // Meta is for uplink only.

    static ipc_filter_list_t   *fls_set[] = {ipc_ul_v4_filter_list_s, ipc_ul_v6_filter_list_s};

    /* Fill packet_des */
    kal_mem_set(&packet_des, 0, sizeof(ipc_pkt_des_t));
    packet_des.des_type = IPC_PKT_DES_TYPE_META;
    packet_des.packet = ip_packet;
    packet_des.packet_len = length;
    packet_des.meta = meta;
    packet_des.matched_filter = &filter;
    packet_des.filter_info = &filter_info;
    packet_des.packet_info = &packet_info;

    result = ipc_pkt_do_filter(KAL_TRUE, fls_set, sizeof(fls_set)/sizeof(ipc_filter_list_t*), ip_type, 0, netif_id, 0, &packet_des);

    switch (result) {
        qbm_gpd    *callback_gpd_p;
        kal_uint8  *callback_gpd_data_p;

        case IPC_PKT_DO_FILTER_MATCHED:
        case IPC_PKT_DO_FILTER_HANDLE_FRAG:
        case IPC_PKT_DO_FILTER_HANDLE_CLONE:
            /*
             * 1. A packet is indivisible from the meta, so we need to allocate a GPD for it.
             * 2. Meta is for uplink only.
             */
            if (1 != qbmt_alloc_q_no_tail(
                        (KAL_TRUE == uplink)?QBM_TYPE_NET_UL_SHRD/*UL*/:QBM_TYPE_NET_DL/*DL*/, /* type */
                        1, /* buff_num */
                        (void**)&callback_gpd_p, /* pp_head */
                        (void**)&callback_gpd_p  /* pp_tail */)) {
                hif_trace_error(IPC_TR_META_DO_FILTER_ALLOC_GPD_NG, uplink, meta);
                return 0;
            }

            /* Copy data from UL META to output GPD */
            IPC_ASSERT(callback_gpd_p);
            ipc_set_gpd_datalen(callback_gpd_p, length, (void**)&callback_gpd_data_p);
            IPC_ASSERT(callback_gpd_data_p);

            QBM_CACHE_INVALID(ip_packet, length);
            kal_mem_cpy(callback_gpd_data_p, ip_packet, length);
            QBM_CACHE_FLUSH(callback_gpd_data_p, length);

            if ((IPC_PKT_DO_FILTER_MATCHED == result) ||
                (IPC_PKT_DO_FILTER_HANDLE_CLONE == result)) {
                /* Forward GPD by filter's callback function */
                ipc_call_filter_cbk(KAL_TRUE, callback_gpd_p, callback_gpd_p, length, filter, &filter_info);
            } else {
                /* Forward GPD to ipc_fragment sub-module to handle fragment. */
                ipc_frag_refilter_info_t    info;

                info.netif_id = netif_id;
                info.pdn_id = IPC_INVALID_PDN_ID;
                info.uplink = KAL_TRUE;
                info.packet_info = &packet_info;
                info.filter_id = filter->filter_id;
                info.filter_magic_number = ipc_filter_magic_number_s;

                ipc_fragment_defrag(callback_gpd_p, &info, ((ip_type == IPC_IP_TYPE_IPV4) ? KAL_TRUE : KAL_FALSE) );
            }
            if (IPC_PKT_DO_FILTER_HANDLE_CLONE == result) {
                return 1;
            } else {
                meta->ignore = KAL_TRUE;
                IPC_FREE_META_VRB(meta);
                return 0;
            }

        case IPC_PKT_DO_FILTER_INVALID_LEN:
            meta->ignore = KAL_TRUE;
            IPC_FREE_META_VRB(meta);
            return 0;

    #if defined(__MD_DIRECT_TETHERING_SUPPORT__)
        case IPC_PKT_DO_FILTER_MDT_MATCHED:
            ipc_mdt_set_pdn_id_in_meta(mdt_mirror_des, meta, packet_info.out_netif_id, ip_type);
            return 0;
    #endif

        case IPC_PKT_DO_FILTER_NOT_MATCHED:
        case IPC_PKT_DO_FILTER_BWM_MATCHED:
        default:
            return 1;
    }
}

kal_uint16
ipc_did_do_filter(
    kal_uint8               session_type,
    kal_uint32              netif_id,
    kal_uint32              pdn_id,
    upcm_did               *did)
{
    kal_uint8                  *ip_packet;
    kal_uint8                   ip_type;
    kal_uint32                  packet_len;
    ipc_filter_t               *filter;
    ipc_filter_info_t           filter_info;
    ipc_packet_info_t           packet_info;
    ipc_pkt_do_filter_result_e  result;
    ipc_pkt_des_t               packet_des;
    kal_uint8                   pkt_num, seg_num;
    kal_uint16                  base_psn;
    kal_uint8                   remain_pkt_cnt = 0;
    kal_uint8                   total_pkt_cnt = 0;
    kal_uint8                   remain_seg_cnt = 0;
    upcm_did_si                *sit;
    upcm_did_si                *curr_si;
    kal_uint32                  pkt_start_idx;
    kal_uint32                  curr_idx;
    kal_bool                    uplink = KAL_FALSE; // DID is for uplink only.
    kal_uint8                   comm_buff[16];// max is ipv6 src/dest addr
    kal_uint8                  *comm_continuous_p = NULL;
    ipc_si_hif_type_e           hif_type;
    kal_uint8                   ebi_info;
    kal_uint8                   bypass_seg_num = 0; /* the number of sit which is ignore && zero length and to be skipped*/

    static ipc_filter_list_t   *fls_set[] = {ipc_dl_v4_filter_list_s, ipc_dl_v6_filter_list_s};

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
    ipc_mdt_mirror_des_t        mdt_mirror_des[IPC_MDT_MAX_DEVICE_NUM];
    kal_bool                    is_mirror_did = KAL_FALSE;
    kal_uint32                  i;

    kal_mem_set(mdt_mirror_des, 0, sizeof(mdt_mirror_des));
    for (i = 0; i < IPC_MDT_MAX_DEVICE_NUM; i++) {
        mdt_mirror_des[i].netif_id = IPC_INVALID_NETIF_ID;
    }
#endif

    IPC_ASSERT(did);

    pkt_num = UPCM_DID_GET_PKT_NUM(did);
    seg_num = UPCM_DID_GET_SEG_NUM(did);    /* this num only count valid seg number in DID */
    base_psn = UPCM_DID_GET_COUNT_L(did);
    sit = UPCM_DID_GET_SIT_PTR(did);
    ebi_info = (kal_uint8)UPCM_DID_GET_SW_CTRL_FIELD(did);

    /* Init packet_des */
    kal_mem_set(&packet_des, 0, sizeof(ipc_pkt_des_t));
    packet_des.des_type = IPC_PKT_DES_TYPE_DID;
    packet_des.matched_filter = &filter;
    packet_des.filter_info = &filter_info;
    packet_des.packet_info = &packet_info;

    hif_type = ipc_get_hif_type_from_netif_id(netif_id);
    curr_idx = 0;
    while (curr_idx < (seg_num + bypass_seg_num)) {
        IPC_ASSERT(curr_idx < UPCM_DID_MAX_SIT_ENT_NUM);
        curr_si = &sit[curr_idx];

        if((IPC_SI_HIF_TYPE_IGR == UPCM_DID_SI_GET_HIF_TYPE(curr_si)) && (UPCM_DID_SI_GET_LEN(curr_si) == 0))
        {
            /* if we found the hif_type is ignore and sit length is 0,
               it means this sit entry is processed last time because of HIF retry.
               So we have to skip the sit entry and update totoal sit entries for while loop */
            hif_data_trace(IPC_DL_DO_FILTER_DID_ZERO_SIT, curr_idx, bypass_seg_num+1, seg_num);
            curr_idx++;
            bypass_seg_num++;
            continue;
        }

        /* SIT length should not be zero */
        IPC_ASSERT(UPCM_DID_SI_GET_LEN(curr_si));

        pkt_start_idx = curr_idx;
        ip_packet = (kal_uint8 *)UPCM_DID_SI_GET_DATAPTR(curr_si) + UPCM_DID_SI_GET_OFFSET(curr_si);

        /* Can't get packet length from the descriptor, so get it from IP header instead. */
        if (KAL_TRUE != ipc_get_continuous_content_did(ip_packet, 0, did, curr_idx, 6, &comm_continuous_p, comm_buff))
        {
            hif_trace_error(IPC_TR_DID_GET_PKT_LENGTH_FAILED, ip_packet, did, curr_idx);
            result = IPC_PKT_DO_FILTER_ERROR;
            goto process_pkt;
        }
        if (IPC_HDR_IS_V4(comm_continuous_p)) {
            packet_len = IPC_HDR_V4_GET_TOTAL_LENGTH(comm_continuous_p);
            ip_type = IPC_IP_TYPE_IPV4;
        } else if (IPC_HDR_IS_V6(comm_continuous_p)) {
            packet_len = IPC_HDR_V6_GET_LENGTH(comm_continuous_p) + IPC_HDR_V6_HEADER_SIZE;
			ip_type = IPC_IP_TYPE_IPV6;
        } else {
            result = IPC_PKT_DO_FILTER_ERROR;
            goto process_pkt;
        }

        /* Fill packet_des */
        packet_des.packet = ip_packet;
        packet_des.packet_len = packet_len;
        packet_des.did = did;
        packet_des.pkt_start_idx = pkt_start_idx;
        packet_des.psn = base_psn + total_pkt_cnt;

        result = ipc_pkt_do_filter(KAL_FALSE, fls_set, sizeof(fls_set)/sizeof(ipc_filter_list_t*), ip_type, pdn_id, netif_id, ebi_info, &packet_des);

process_pkt:
        switch (result) {
            qbm_gpd    *callback_gpd_p;

            case IPC_PKT_DO_FILTER_HANDLE_CLONE:
            case IPC_PKT_DO_FILTER_MATCHED:
                ipc_si_unite_to_gpd(uplink, did, curr_idx, packet_des.packet_len, &callback_gpd_p);
                if (IPC_PKT_DO_FILTER_MATCHED == result) {
                ipc_pkt_set_si_hif_type(did, IPC_SI_HIF_TYPE_IGR, &curr_idx);
                } else {
                    ipc_pkt_set_si_hif_type(did, hif_type, &curr_idx);
                    remain_seg_cnt += curr_idx - pkt_start_idx;
                    remain_pkt_cnt ++;
                    hif_trace_info(IPC_TR_FILTER_MATCHED_CLONED_DEFAULT_PATH);
                }

                if (callback_gpd_p) {
                    if(KAL_TRUE == filter->callback_with_info)
                    {
                        filter_info.src_desc_ptr = (void*) did;
                        filter_info.src_desc_type = IPC_FI_DESC_TYPE_DID; 
                        filter_info.src_desc_indx = pkt_start_idx;
                    }
                    /* Forward GPD by filter's callback function */
                    ipc_call_filter_cbk(KAL_FALSE, callback_gpd_p, callback_gpd_p, packet_len, filter, &filter_info);
                }
                break;

            case IPC_PKT_DO_FILTER_INVALID_LEN:
                ipc_pkt_set_si_hif_type(did, IPC_SI_HIF_TYPE_IGR, &curr_idx);
                break;

            case IPC_PKT_DO_FILTER_HANDLE_FRAG:
                ipc_si_unite_to_gpd(uplink, did, curr_idx, packet_des.packet_len, &callback_gpd_p);
                ipc_pkt_set_si_hif_type(did, IPC_SI_HIF_TYPE_IGR, &curr_idx);

                if (callback_gpd_p) {
                    /* Forward GPD to ipc_fragment sub-module to handle fragment. */
                    ipc_frag_refilter_info_t    info;

                    info.netif_id = netif_id;
                    info.pdn_id = pdn_id;
                    info.uplink = KAL_FALSE;
                    info.packet_info = &packet_info;
                    info.filter_id = filter->filter_id;
                    info.filter_magic_number = ipc_filter_magic_number_s;
                    ((upcm_dlvr_dl_info_t *)QBM_DES_GET_SW_CTRL_FIELD(callback_gpd_p))->ebi = ebi_info;

                    ipc_fragment_defrag(callback_gpd_p, &info, ((ip_type == IPC_IP_TYPE_IPV4) ? KAL_TRUE : KAL_FALSE) );
                }
                break;

        #if defined(__MD_DIRECT_TETHERING_SUPPORT__)
            case IPC_PKT_DO_FILTER_MDT_MATCHED:
                if (!ipc_mdt_set_pkt_in_did_mirror_des(mdt_mirror_des, did, &curr_idx, packet_info.out_netif_id)) {
                    /*
                     * Direct path is not available.
                     * Send packets to default route (indirect path).
                     */
                    ipc_pkt_set_si_hif_type(did, hif_type, &curr_idx);

                    remain_seg_cnt += curr_idx - pkt_start_idx;
                    remain_pkt_cnt ++;
                    break;
                }
                is_mirror_did = KAL_TRUE;
                break;
        #endif

            case IPC_PKT_DO_FILTER_NOT_MATCHED:
            case IPC_PKT_DO_FILTER_BWM_MATCHED:
            default:
                ipc_pkt_set_si_hif_type(did, hif_type, &curr_idx);

                remain_seg_cnt += curr_idx - pkt_start_idx;
                remain_pkt_cnt ++;
                break;
        }
        total_pkt_cnt ++;
    }

    IPC_ASSERT(remain_pkt_cnt <= pkt_num);
    IPC_ASSERT(total_pkt_cnt == pkt_num);
    IPC_ASSERT(remain_seg_cnt <= seg_num);

    UPCM_DID_SET_PKT_NUM(did, remain_pkt_cnt);
    UPCM_DID_SET_SEG_NUM(did, remain_seg_cnt);

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
    if (is_mirror_did) {
        for (i = 0; i < IPC_MDT_MAX_DEVICE_NUM; i++) {
            if (mdt_mirror_des[i].mirror_did) {
                ipc_pkt_t           pkt;

                ipc_mdt_mirror_did(&(mdt_mirror_des[i]), did);
                IPC_ASSERT(mdt_mirror_des[i].netif_id != IPC_INVALID_NETIF_ID);

                pkt.buf_type = IPC_PKT_DES_TYPE_DID;
                pkt.did_head = mdt_mirror_des[i].mirror_did;
                pkt.did_tail = mdt_mirror_des[i].mirror_did;

                ipc_send_dl_pkt_in_did_internal(&pkt, NULL, mdt_mirror_des[i].netif_id);
            }
        }
    }
#endif

    return remain_pkt_cnt;
}


static void ipc_fill_tcpip_header_in_gpd(kal_uint8 ip_type, qbm_gpd *p_gpd, kal_uint8* p_tcp_hdr_in, kal_uint8* p_ip_hdr_in, kal_uint8 ref_index, kal_uint8 tcp_flag)
{
    void* p_bd = NULL;
    kal_uint32 ip_header_len = 0;
    kal_uint32 tcp_header_len = 0;
    kal_uint32 total_len = 0;
    kal_uint8 *tcp_header = NULL;
    kal_uint8 *ip_header = NULL;
    kal_uint8 *src_addr = NULL;
    kal_uint8 *dst_addr = NULL;
    kal_uint16 sum16 = 0;
    kal_bool is_ipv4;
    kal_uint16 ipid = 0;
    
    ip_header_len = (ip_type == IPC_IP_TYPE_IPV4) ? IPC_HDR_V4_HEADER_SIZE : IPC_HDR_V6_HEADER_SIZE;
    is_ipv4 = (ip_type == IPC_IP_TYPE_IPV4) ? KAL_TRUE : KAL_FALSE;
    tcp_header_len = IPC_HDR_TCP_HEADER_SIZE;
    total_len = ip_header_len + tcp_header_len;

    IPC_ASSERT(p_gpd);

    p_bd = QBM_DES_GET_DATAPTR(p_gpd);
    ip_header = QBM_DES_GET_DATAPTR(p_bd);
    tcp_header = ip_header + ip_header_len;

    if (ip_type == IPC_IP_TYPE_IPV4) {
        src_addr = IPC_HDR_V4_GET_DST_ADDR(p_ip_hdr_in);
        dst_addr = IPC_HDR_V4_GET_SRC_ADDR(p_ip_hdr_in);
        ipid = IPC_HDR_V4_GET_IDENTITY(p_ip_hdr_in);
    } else if (ip_type == IPC_IP_TYPE_IPV6) {
        src_addr = IPC_HDR_V6_GET_DST_ADDR(p_ip_hdr_in);
        dst_addr = IPC_HDR_V6_GET_SRC_ADDR(p_ip_hdr_in);
    } else {
        /* unknown packet type */
        DEBUG_ASSERT(0);
        return;
    }

    /* Fill TCP header */
    IPC_HDR_TCP_SET_SRC_PORT(tcp_header, IPC_HDR_TCP_GET_DST_PORT(p_tcp_hdr_in));
    IPC_HDR_TCP_SET_DST_PORT(tcp_header, IPC_HDR_TCP_GET_SRC_PORT(p_tcp_hdr_in));
    IPC_HDR_TCP_SET_SEQ_NUM(tcp_header, IPC_HDR_TCP_GET_ACK_NUM(p_tcp_hdr_in) + ref_index);
    if(IPC_HDR_TCP_FLAG_RST == tcp_flag){
        IPC_HDR_TCP_SET_ACK_NUM(tcp_header, 0);
    }else{
        IPC_HDR_TCP_SET_ACK_NUM(tcp_header, (IPC_HDR_TCP_GET_SEQ_NUM(p_tcp_hdr_in)+1));
    }
    IPC_HDR_TCP_SET_OFFSET(tcp_header, IPC_HDR_TCP_HEADER_SIZE);
    IPC_HDR_TCP_SET_RESERVED(tcp_header, 0);
    IPC_HDR_TCP_SET_FLAGS(tcp_header, tcp_flag);
    IPC_HDR_TCP_SET_WINDOW(tcp_header, 0);
    IPC_HDR_TCP_SET_CHECKSUM(tcp_header, 0);
    IPC_HDR_TCP_SET_URGENT_PTR(tcp_header, 0);
    sum16 = ipc_calc_tcp_checksum(is_ipv4, src_addr, dst_addr, tcp_header, tcp_header_len);
    IPC_HDR_TCP_SET_CHECKSUM(tcp_header, sum16);

    /* Fill IP header */
    if (is_ipv4) {
        IPC_HDR_V4_RESET_VER_IHL_DSCP_ECN(ip_header);
        IPC_HDR_V4_SET_TOTAL_LENGTH(ip_header, total_len);
        IPC_HDR_V4_SET_IDENTITY(ip_header, (ipid+ref_index)); /* reference peer IPID */
        IPC_HDR_V4_SET_FLAGS(ip_header, 0x2); /* Set Do Not Fragment */
        IPC_HDR_V4_SET_FRAG_OFFSET(ip_header, 0);
        IPC_HDR_V4_SET_TTL(ip_header, IPC_DEF_TTL);
        IPC_HDR_V4_SET_PROTOCOL(ip_header, IPC_HDR_PROT_TCP);
        IPC_HDR_V4_SET_HEADER_CHECKSUM(ip_header, 0);
        IPC_HDR_V4_SET_SRC_ADDR(ip_header, src_addr);
        IPC_HDR_V4_SET_DST_ADDR(ip_header, dst_addr);
        sum16 = ipc_calc_ipv4_checksum(ip_header);
        IPC_HDR_V4_SET_HEADER_CHECKSUM(ip_header, sum16);
    } else {
        IPC_HDR_V6_RESET_VER_TC_FL(ip_header);
        IPC_HDR_V6_SET_TC(ip_header, IPC_HDR_V6_GET_TC(p_ip_hdr_in));
        IPC_HDR_V6_SET_FLOW_LABEL(ip_header, IPC_HDR_V6_GET_FLOW_LABEL(p_ip_hdr_in));
        IPC_HDR_V6_SET_LENGTH(ip_header, (total_len - ip_header_len));
        IPC_HDR_V6_SET_NH_TYPE(ip_header, IPC_HDR_PROT_TCP);
        IPC_HDR_V6_SET_HOP_LIMIT(ip_header, IPC_HDR_V6_GET_HOP_LIMIT(p_ip_hdr_in));
        IPC_HDR_V6_SET_SRC_ADDR(ip_header, src_addr);
        IPC_HDR_V6_SET_DST_ADDR(ip_header, dst_addr);
    }

    /* Flush GPD and BD */
    QBM_CACHE_FLUSH(ip_header, total_len);
    QBM_DES_SET_DATALEN(p_bd, total_len);
    qbm_cal_set_checksum(p_bd);
    QBM_DES_SET_DATALEN(p_gpd, total_len);
    qbm_cal_set_checksum(p_gpd);

    return;
}


static void ipc_filter_handler_for_tcp_rst(kal_uint8 *p_packet, ipc_packet_info_t packet_info, kal_uint8 pdn_sim_id)
{
    kal_uint8 *p_tcp_header = NULL;
    kal_uint8 ip_type = IPC_IP_TYPE_INVALID;
    kal_uint8 gpd_num = 0;
    qbm_gpd *p_head = NULL;
    qbm_gpd *p_tail = NULL;
    ipc_pkt_t ipc_pkt;
    kal_bool result = KAL_TRUE;

    /* Alias */
    if (IPC_HDR_IS_V4(p_packet)) {
        ip_type = IPC_IP_TYPE_IPV4;
    } else if (IPC_HDR_IS_V6(p_packet)) {
        ip_type = IPC_IP_TYPE_IPV6;
    } else {
        /* unknown packet type */
        hif_trace_info(IPC_TR_DROP_HDLR_UNKNOWN_IPTYPE, __FUNCTION__);
        return;
    }
    p_tcp_header = p_packet + packet_info.l4_offset;

    /* Determine Response:
     * If received [ACK], response [RST]
     * If received [FIN,ACK], response [ACK] + [FIN,ACK]
     * If received [SYN], response [ACK] + [RST]
     */
    if(packet_info.tcp_flags & (IPC_HDR_TCP_FLAG_FIN | IPC_HDR_TCP_FLAG_SYN)){
        gpd_num = 2;
        if(gpd_num != qbmt_alloc_q(QBM_TYPE_NET_UL, gpd_num, (void**)&p_head, (void**)&p_tail)){
            if(p_head && p_tail){
                g_ipc_qbm_failed_gpd_cnt++;
                qbmt_dest_q(p_head, p_tail);
            }
            hif_trace_info(IPC_TR_DL_DID_B4_DROP_GPD_ALLOC_NG_CNT, __FUNCTION__, __LINE__, g_ipc_qbm_failed_gpd_cnt);
            return;
        }

        /* 1st GPD : [ACK]*/
        ipc_fill_tcpip_header_in_gpd(ip_type, p_head, p_tcp_header, p_packet, 0, IPC_HDR_TCP_FLAG_ACK);
        
        /* 2nd GPD : [FIN,ACK] or [RST] */
        if(packet_info.tcp_flags & IPC_HDR_TCP_FLAG_FIN){
            ipc_fill_tcpip_header_in_gpd(ip_type, p_tail, p_tcp_header, p_packet, 0, IPC_HDR_TCP_FLAG_ACK | IPC_HDR_TCP_FLAG_FIN);
        }else{
            ipc_fill_tcpip_header_in_gpd(ip_type, p_tail, p_tcp_header, p_packet, 0, IPC_HDR_TCP_FLAG_RST);
        }
    }else{
        gpd_num = 1;
        if(gpd_num != qbmt_alloc_q(QBM_TYPE_NET_UL, gpd_num, (void**)&p_head, (void**)&p_tail)){
            hif_trace_info(IPC_TR_DL_DID_B4_DROP_GPD_ALLOC_NG, __FUNCTION__, __LINE__);
            return;
        }
        /* [RST] packet only */
        ipc_fill_tcpip_header_in_gpd(ip_type, p_head, p_tcp_header, p_packet, 0, IPC_HDR_TCP_FLAG_RST);
    }

    /* Send response */
    if(p_head && p_tail){
        kal_mem_set(&ipc_pkt, 0, sizeof(ipc_pkt));
        ipc_pkt.isGPD = KAL_TRUE;
        ipc_pkt.head = p_head;
        ipc_pkt.tail = p_tail;
        hif_trace_info(IPC_TR_DL_DID_B4_DROP_SEND_UL_GPD, __FUNCTION__, p_head, p_tail);
        result = ipc_send_ul_pkt_by_pdn(&ipc_pkt, NULL, pdn_sim_id, ip_type);
        if(KAL_FALSE == result){
            qbmt_dest_q(p_head, p_tail);
        }
    }

}



static void ipc_filter_handle_tcp_rst_in_packet_info(kal_uint8* p_packet, kal_uint32 len, kal_uint8 pdn_sim_id) {
    ipc_packet_info_t packet_info;
    kal_bool result =  KAL_FALSE;

    /* Parsing packet first */
    kal_mem_set(&packet_info , 0, sizeof(ipc_packet_info_t));
    result = ipc_get_packet_info(p_packet, len, &packet_info);
    if(KAL_FALSE == result){
        hif_trace_info(IPC_TR_DROP_HDLR_PKT_INFO_NG, __FUNCTION__);
        return;
    }

    switch(packet_info.protocol){
        case IPC_HDR_PROT_TCP:
        {           
            if( (IPC_HDR_TCP_FLAG_RST == (packet_info.tcp_flags & IPC_HDR_TCP_FLAG_RST)) || (!packet_info.tcp_flags) ){
                /* Skipped if received [RST] packet */
                break;
            }
            ipc_filter_handler_for_tcp_rst(p_packet, packet_info, pdn_sim_id);
            break;
        }
        default :
        {
            /* Protocol not support log */
            hif_trace_info(IPC_TR_DROP_HDLR_NG_PROTO, __FUNCTION__, packet_info.protocol);
            break;
        }
    }
}

static void ipc_filter_update_sit_idx_by_skip_segment(upcm_did *did, kal_uint32 *p_curr_si_idx)
{
    kal_bool end_of_seg_list;
    upcm_did_si *sit;
    kal_uint32 pkt_start_idx;

    IPC_ASSERT((did) && (p_curr_si_idx));
    sit = UPCM_DID_GET_SIT_PTR(did);
    pkt_start_idx = *p_curr_si_idx;

    IPC_ASSERT( pkt_start_idx < UPCM_DID_MAX_SIT_ENT_NUM );

    end_of_seg_list = KAL_FALSE;

    for ( *p_curr_si_idx = pkt_start_idx;
          *p_curr_si_idx < UPCM_DID_MAX_SIT_ENT_NUM && !end_of_seg_list;
          (*p_curr_si_idx) ++) {
        upcm_did_si *curr_si = &sit[*p_curr_si_idx];
        end_of_seg_list = UPCM_DID_SI_GET_EOL(curr_si);
    }

}

void ipc_downlink_drop_packet_handler(kal_uint32 pdn_id, upcm_did *p_head, upcm_did *p_tail) {
	upcm_did           *did = NULL;
    upcm_did           *next_did = NULL;
    kal_bool           end_of_list = KAL_FALSE;
    upcm_did_si        *curr_si = NULL;
    kal_uint8          comm_buff[16] = { 0 };
    kal_uint8          *comm_continuous_p = NULL;
	kal_uint8          seg_num = 0;
    upcm_did_si        *sit = NULL;
	kal_uint32         curr_idx = 0;
    kal_uint8          *ip_packet = NULL;
	kal_uint32         packet_len = 0;
    
    if ( (p_head == NULL) || (p_tail == NULL) ) {
        return;
    }

    end_of_list = KAL_FALSE;
    for (did = p_head; did && !end_of_list; did = next_did) {
        next_did = UPCM_DID_GET_NEXT(did);
        end_of_list = (did == p_tail);
        
        /*operate on each did*/
        IPC_ASSERT(did);
        seg_num = UPCM_DID_GET_SEG_NUM(did);
        sit = UPCM_DID_GET_SIT_PTR(did);
        
        curr_idx = 0;
        while (curr_idx < seg_num) {
            curr_si = &sit[curr_idx];
            if(IPC_SI_HIF_TYPE_IGR != UPCM_DID_SI_GET_HIF_TYPE(curr_si)) {
                IPC_ASSERT(UPCM_DID_SI_GET_LEN(curr_si));
                ip_packet = (kal_uint8 *)UPCM_DID_SI_GET_DATAPTR(curr_si) + UPCM_DID_SI_GET_OFFSET(curr_si);
                if(KAL_TRUE == ipc_get_continuous_content_did(ip_packet, 0, did, curr_idx, 6, &comm_continuous_p, comm_buff)) {
                    if (IPC_HDR_IS_V4(comm_continuous_p)) {
                        packet_len = IPC_HDR_V4_GET_TOTAL_LENGTH(comm_continuous_p);
                    } else if (IPC_HDR_IS_V6(comm_continuous_p)) {
                        packet_len = IPC_HDR_V6_GET_LENGTH(comm_continuous_p) + IPC_HDR_V6_HEADER_SIZE;
                    }
                    /*get packet info & check tcp flags*/
                    ipc_filter_handle_tcp_rst_in_packet_info(ip_packet, packet_len, pdn_id);
                    ipc_filter_update_sit_idx_by_skip_segment(did, &curr_idx);         
                }else {
					ipc_filter_update_sit_idx_by_skip_segment(did, &curr_idx);
				}
            } else {
                curr_idx++;
            }         
        }
    }

}

kal_bool ipc_filter_did_chk_is_icmp6_ra(kal_uint8* comm_continuous_p, kal_uint8* ip_packet, kal_uint32 pkt_start_idx, upcm_did* did) 
{
    ipc_packet_info_t packet_info;

    if(!(IPC_HDR_IS_V6(comm_continuous_p)) || !ipc_get_packet_info_did(ip_packet, did, pkt_start_idx, &packet_info)) {
        return KAL_FALSE;
    }

    return ((packet_info.icmpv6_type == IPC_HDR_ICMP6_TYPE_RA)? KAL_TRUE:KAL_FALSE);
}

kal_bool ipc_on_downlink_ra_proxy(kal_uint32 pdn_id, upcm_did *p_head, upcm_did *p_tail) 
{
    kal_bool result = KAL_FALSE;
    upcm_did *did;
    upcm_did *next_did;
    kal_bool end_of_list;
    upcm_did_si *curr_si;
    kal_uint32 pkt_start_idx;
    kal_uint8 comm_buff[16]; // max is ipv6 src/dest addr
    kal_uint8 *comm_continuous_p = NULL;
    kal_uint8 seg_num = 0;
    upcm_did_si *sit;
    kal_uint32 curr_idx;
    kal_uint8 *ip_packet;
    kal_uint32 packet_len;
    qbm_gpd *ra_gpd_p;
    end_of_list = KAL_FALSE;

    for (did = p_head; did && !end_of_list; did = next_did) {
        next_did = UPCM_DID_GET_NEXT(did);
        end_of_list = (did == p_tail);

        /* operate on each did */
        IPC_ASSERT(did);
        seg_num = UPCM_DID_GET_SEG_NUM(did);
        sit = UPCM_DID_GET_SIT_PTR(did);

        curr_idx = 0;
        while (curr_idx < seg_num) {
            curr_si = &sit[curr_idx];

            /* check for not ignore */
            if (IPC_SI_HIF_TYPE_IGR != UPCM_DID_SI_GET_HIF_TYPE(curr_si)) {
                IPC_ASSERT(UPCM_DID_SI_GET_LEN(curr_si));
                pkt_start_idx = curr_idx;
                ip_packet = (kal_uint8 *)UPCM_DID_SI_GET_DATAPTR(curr_si) + UPCM_DID_SI_GET_OFFSET(curr_si);

                if (KAL_TRUE == ipc_get_continuous_content_did(ip_packet, 0, did, curr_idx, 6, &comm_continuous_p, comm_buff)) {
                    /* call did ra check */
                    if (ipc_filter_did_chk_is_icmp6_ra(comm_continuous_p, ip_packet, pkt_start_idx, did)) {
                        ipc_proxy_ipv6_ra_pool_push(pdn_id, NULL);
                        packet_len = IPC_HDR_V6_GET_LENGTH(comm_continuous_p) + IPC_HDR_V6_HEADER_SIZE;
                        ipc_si_unite_to_gpd(KAL_FALSE, did, curr_idx, packet_len, &ra_gpd_p);
                        ipc_filter_update_sit_idx_by_skip_segment(did, &curr_idx);

                        if (ra_gpd_p) {
                            ipc_proxy_ipv6_ra_pool_push(pdn_id, ra_gpd_p);
                            result = KAL_TRUE;
                        } else {
                            result = KAL_FALSE;
                        }
                        hif_trace_info(IPC_ON_DOWNLINK_RA_RPOXY_GPD, pdn_id, ra_gpd_p);
                    } else {
                        ipc_filter_update_sit_idx_by_skip_segment(did, &curr_idx);
                    }
                } else {
                    ipc_filter_update_sit_idx_by_skip_segment(did, &curr_idx);
                }
            } else {
                curr_idx++;
            }
        }
    }

    hif_trace_info(IPC_ON_DOWNLINK_RA_RPOXY);
    return result;
}
