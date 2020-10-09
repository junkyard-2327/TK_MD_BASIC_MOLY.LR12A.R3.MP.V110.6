/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 *   ipc_data.c
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   IP Core Uplink/Downlink data path implementation.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_public_api.h"
#include "mw_sap.h"
#include "em_msgid.h"
#include "upcm.h"
#include "ipcore_upcm_struct.h"
#include "qmu_bm_util.h"

#include "hif_swla.h"

#include "ipc_data.h"
#include "ipc_debug.h"
#include "ipc_filter.h"
#include "ipc_utils.h"

/*------------------------------------------------------------------------------
 * Global variables.
 *----------------------------------------------------------------------------*/
kal_uint32                  ipc_em_on_s = 0;
kal_bool                    ipc_ul_enable_g = KAL_TRUE;

/* Test loopback mode */
ipc_test_loopback_mode_e    ipc_test_loopback_mode_s = IPC_TEST_LOOPBACK_MODE_OFF;
kal_uint32                  ipc_test_loopback_a_netif_id_s = 0;
kal_uint32                  ipc_test_loopback_b_netif_id_s = 0;

/*------------------------------------------------------------------------------
 * Private data structure.
 *----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Private variables.
 *----------------------------------------------------------------------------*/
static ipc_ul_queue_t           ipc_ul_queues_s[IPC_UL_QUEUE_NUM];
/* All DL queue processing MUST be in IPCore own context */
static ipc_dl_queue_t           ipc_dl_queues_s[IPC_DL_QUEUE_NUM];
kal_bool                        ipc_ul_processing_s = KAL_FALSE;
kal_bool                        ipc_dl_processing_s = KAL_FALSE;
kal_bool                        ipc_ul_reload_retrying_s = KAL_FALSE;

event_scheduler                *ipc_es_ul_throttle_s = NULL; /* Timer for UL throttle mechanism. */

static ipc_ul_throttle_state_e  ipc_ul_throttle_state_s = IPC_UL_THROTTLE_STATE_NONE;
static ipc_ul_throttle_conf_t   ipc_ul_throttle_conf_s = {0, 0, 0};
static eventid                  ipc_eid_ul_throttle_s = NULL; /* Timer for UL throttle mechanism. */
static kal_bool                 ipc_ul_throttle_is_block_latency_concern_s = KAL_FALSE;
static kal_bool                 ipc_ul_throttle_is_ims_emergency_s = KAL_FALSE;
static qbm_gpd*                 ipc_proxy_ipv6_ra_pool[IPC_PROXY_IPV6_RA_POOL_SIZE] = {NULL};
static ipc_mobile_data_info_t   g_mobile_data_info[MAX_SIM_NUM];
static kal_uint8                g_data_sim_slot_idx = 0xFF;

/*------------------------------------------------------------------------------
 * Private functions.
 *----------------------------------------------------------------------------*/
void ipc_dest_ior(
    ipc_io_request_t       *ior)
{
    ipc_io_request_t       *next_ior;

    IPC_ASSERT(ior);
    for (; ior; ior = next_ior) {
        next_ior = ior->next_request;
        if ( ior->first_gpd && ior->last_gpd ) {
            qbmt_dest_q(ior->first_gpd, ior->last_gpd);
        }
    }
}

/*
 * Assumption: netif read lock is acquired.
 */
void ipc_reload_uplink(ipc_netif_t *netif)
{
    kal_bool need_retry;

    hif_data_trace(IPC_UL_RELOAD_UPLINK, 0, netif, netif->config.netif_id, netif->config.ipc_ul_reload_callback_t);

    if (netif->config.ipc_ul_reload_callback_t) {
        /* Clear netif_ul_need_reload before call netif reload cbk */
        ipc_set_netif_ul_set_need_reload(netif, KAL_FALSE);
        need_retry = netif->config.ipc_ul_reload_callback_t(
                                        netif->config.ul_reload_context);

        hif_data_trace(IPC_UL_RELOAD_UPLINK_RESULT, 0, netif, netif->config.netif_id, need_retry);

        ipc_set_netif_ul_reload_retry(netif, need_retry);
    }
}

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
static INLINE void
ipc_mdt_on_downlink()
{
    qbm_gpd     *curr_gpd;
    qbm_gpd     *curr_bd;
    qbm_gpd     *next_gpd;
    kal_bool    end_of_list;
    kal_uint8   *pdata;
    kal_uint32  length;

    /*
     * For MD Direct Tethering, the packets matched tethering rule should be forwarded to different netif.
     */
    if (ipc_mdt_queue_non_empty[KAL_FALSE]) {
        ipc_mdt_routing_packet_list_t  *mdt_gpd_list;
        kal_uint32                      i;

        for (i = 0; i < mdt_support_dev_num; i++) {
            mdt_gpd_list = &(ipc_mdt_packet_routing_queue[0][i]);
            if (NULL != mdt_gpd_list->last_gpd) {
                ipc_pkt_t   pkt;
                kal_uint32  netif_id = mdt_id_to_netif_id(i);

                end_of_list = KAL_FALSE;
                for (curr_gpd = mdt_gpd_list->first_gpd; curr_gpd && !end_of_list; curr_gpd = next_gpd) {
                    next_gpd = QBM_DES_GET_NEXT(curr_gpd);
                    end_of_list = (curr_gpd == mdt_gpd_list->last_gpd);

                    length = QBM_DES_GET_DATALEN(curr_gpd);
                    ipc_get_ip_packet(curr_gpd, &curr_bd, &pdata, &length);

                    if(IPC_HDR_IS_V4(pdata)) {
                        hif_data_trace(IPC_MDT_ON_DOWNLINK_PKT_IPV4, curr_gpd, (pdata[4]<<8|pdata[5]), (pdata[10]<<8|pdata[11]));
                    } else if(IPC_HDR_IS_V6(pdata)){
                        kal_uint8 pprotocal = pdata[6]; //next header
                        //TODO: tmp
//                         ipc_print_IPv6(pdata, curr_gpd, pprotocal, 1);
                    } else {
                        hif_data_trace(IPC_MDT_ON_DOWNLINK_PKT_NON_IPV4V6, curr_gpd, length);
                    }
                }

                pkt.isGPD = KAL_TRUE;
                pkt.head = mdt_gpd_list->first_gpd;
                pkt.tail = mdt_gpd_list->last_gpd;

                hif_data_trace(IPC_MDT_ON_DOWNLINK, netif_id, pkt.head, pkt.tail);
                ipc_send_dl_pkt(&pkt, NULL, netif_id);

                mdt_gpd_list->first_gpd = NULL;
                mdt_gpd_list->last_gpd = NULL;
            }
        }

        ipc_mdt_queue_non_empty[KAL_FALSE] = KAL_FALSE;
    }
}

static INLINE void
ipc_mdt_forward_ul_ior(kal_uint8 ip_type)
{
    qbm_gpd     *curr_gpd;
    qbm_gpd     *curr_bd;
    qbm_gpd     *next_gpd;
    kal_bool    end_of_list;
    kal_uint8   *pdata;
    kal_uint32  length;

    /*
     * For MD Direct Tethering, the packets matched tethering rule should be forwarded to different pdn.
     */
    if (ipc_mdt_queue_non_empty[KAL_TRUE]) {
        ipc_mdt_routing_packet_list_t  *mdt_gpd_list;
        kal_uint32                      i;

        for (i = 0; i < mdt_support_dev_num; i++) {
            mdt_gpd_list = &(ipc_mdt_packet_routing_queue[1][i]);
            if (NULL != mdt_gpd_list->last_gpd) {
                ipc_pkt_t   pkt;
                kal_uint32  netif_id = mdt_id_to_netif_id(i);

                end_of_list = KAL_FALSE;
                for (curr_gpd = mdt_gpd_list->first_gpd; curr_gpd && !end_of_list; curr_gpd = next_gpd) {
                    next_gpd = QBM_DES_GET_NEXT(curr_gpd);
                    end_of_list = (curr_gpd == mdt_gpd_list->last_gpd);

                    length = QBM_DES_GET_DATALEN(curr_gpd);
                    ipc_get_ip_packet(curr_gpd, &curr_bd, &pdata, &length);

                    if(IPC_HDR_IS_V4(pdata)) {
                        hif_data_trace(IPC_MDT_FORWARD_UL_IOR_PKT_IPV4, curr_gpd, (pdata[4]<<8|pdata[5]), (pdata[10]<<8|pdata[11]));
                    } else if(IPC_HDR_IS_V6(pdata)){
                        kal_uint8 pprotocal = pdata[6]; //next header
                        //TODO: tmp
//                         ipc_print_IPv6(pdata, curr_gpd, pprotocal, 0);
                    } else {
                        hif_data_trace(IPC_MDT_FORWARD_UL_IOR_PKT_NON_IPV4V6, curr_gpd, length);
                    }
                }

                pkt.isGPD = KAL_TRUE;
                pkt.head = mdt_gpd_list->first_gpd;
                pkt.tail = mdt_gpd_list->last_gpd;

                hif_data_trace(IPC_MDT_FORWARD_UL_IOR, netif_id, pkt.head, pkt.tail);
                ipc_send_ul_pkt_by_netif_id(&pkt, NULL, netif_id, ip_type);

                mdt_gpd_list->first_gpd = NULL;
                mdt_gpd_list->last_gpd = NULL;
            }
        }

        ipc_mdt_queue_non_empty[KAL_TRUE] = KAL_FALSE;
    }
}

static INLINE void
ipc_gpd_change_gpd_type(qbm_type gpd_type, qbm_gpd *p_gpd, qbm_gpd **pp_out_gpd)
{
    qbm_gpd                *first_gpd, *last_gpd;
    kal_uint8              *src_packet, *dst_packet;
    qbm_gpd                *bd;

    IPC_ASSERT(p_gpd && pp_out_gpd);

    if (gpd_type != QBM_GET_TYPE(p_gpd)) {
        if (1 == qbmt_alloc_q_no_tail(gpd_type, 1, (void **)&first_gpd, (void **)&last_gpd)) {
            if (!QBM_DES_GET_BDP(p_gpd)) {
                src_packet = QBM_DES_GET_DATAPTR(p_gpd);
            } else {
                /* get 1st bd data ptr */
                bd = QBM_DES_GET_DATAPTR(p_gpd);

                /* Loop to trace 1st DL BD with data buffer */
                while (bd && (QBM_DES_GET_DATALEN(bd) == 0)) {
                    bd = (QBM_DES_GET_EOL(bd))?(NULL):((qbm_gpd*)QBM_DES_GET_NEXT(bd));
                }

                /* No any BD have data */
                if (NULL == bd) {
                    hif_trace_error(IPC_TR_CHANGE_GPD_TYPE_ZERO_LENGTH_BD, p_gpd, QBM_DES_GET_DATALEN(p_gpd));
                    *pp_out_gpd = NULL;
                    return;
                }

                src_packet = QBM_DES_GET_DATAPTR(bd);
            }

            ipc_set_gpd_datalen(first_gpd, QBM_DES_GET_DATALEN(p_gpd), (void **)&dst_packet);

            /* Assume the both GPD buffers are continuous. */
            kal_mem_cpy(dst_packet, src_packet, QBM_DES_GET_DATALEN(p_gpd));
            QBM_CACHE_FLUSH(dst_packet, QBM_DES_GET_DATALEN(p_gpd));
            *pp_out_gpd = first_gpd;
        } else {
            hif_trace_error(IPC_TR_CHANGE_GPD_TYPE_ALLOC_GPD_NG, gpd_type, p_gpd);
            *pp_out_gpd = NULL;
            return;
        }
    } else {
        *pp_out_gpd = p_gpd;
        return;
    }
}

static INLINE void
ipc_ior_change_gpd_type(qbm_type gpd_type, ipc_io_request_t *p_ior, ipc_io_request_t **pp_out_ior)
{
    qbm_gpd                *curr_gpd, *next_gpd;
    qbm_gpd                *out_first_gpd;
    qbm_gpd                *out_curr_gpd, *out_prev_gpd;
    kal_bool                end_of_list = KAL_FALSE;

    out_first_gpd = NULL;
    out_curr_gpd = out_prev_gpd = NULL;
    for (curr_gpd = p_ior->first_gpd; curr_gpd && !end_of_list; curr_gpd = next_gpd) {
        next_gpd = QBM_DES_GET_NEXT(curr_gpd);
        end_of_list = (curr_gpd == p_ior->last_gpd);

        ipc_gpd_change_gpd_type(gpd_type, curr_gpd, &out_curr_gpd);

        if (out_curr_gpd) {
            if (!out_first_gpd) {
                out_first_gpd = out_curr_gpd;
            }

            if (out_prev_gpd) {
                QBM_DES_SET_NEXT(out_prev_gpd, out_curr_gpd);
            }

            out_prev_gpd = out_curr_gpd;
        }
    }

    if (out_first_gpd) {
        *pp_out_ior = (ipc_io_request_t *)QBM_DES_GET_SW_CTRL_FIELD(out_first_gpd);
        kal_mem_set(*pp_out_ior, 0, sizeof(ipc_io_request_t));
        (*pp_out_ior)->first_gpd = out_first_gpd;
        (*pp_out_ior)->last_gpd = out_prev_gpd;
        (*pp_out_ior)->ip_type = p_ior->ip_type;
    } else {
        *pp_out_ior = NULL;
    }

    hif_data_trace(IPC_IOR_CHANGE_GPD_TYPE, gpd_type, p_ior, *pp_out_ior);
}

static INLINE void
ipc_ior_list_change_gpd_type(qbm_type gpd_type, ipc_io_request_t *ior, ipc_io_request_t **pp_out_ior)
{
    ipc_io_request_t       *next_ior;
    ipc_io_request_t       *out_curr_ior, *out_prev_ior;

    *pp_out_ior = NULL;
    out_curr_ior = out_prev_ior = NULL;
    for (; ior; ior = next_ior) {
        next_ior = ior->next_request;
        IPC_ASSERT(ior->first_gpd && ior->last_gpd);

        ipc_ior_change_gpd_type(gpd_type, ior, &out_curr_ior);

        if (out_curr_ior) {
            if (!*pp_out_ior) {
                *pp_out_ior = out_curr_ior;
            }

            if (out_prev_ior) {
                out_prev_ior->next_request = out_curr_ior;
            }

            out_prev_ior = out_curr_ior;
        }
    } /* end of for (ior) */

    if (out_prev_ior) {
        out_prev_ior->next_request = NULL;
    }
}
#endif

/*
 * Assumption: netif read lock is acquired.
 */
static void ipc_forward_ul_ior(ipc_netif_t *netif, ipc_io_request_t *ior)
{
#if IPC_PEER == IPC_PEER_NULL_DROP
    /*
         * Drop all uplink packets (Only for test purpose).
         */
    hif_data_trace(IPC_UL_DROP_UL_IOR, 0, netif, ior);

    ipc_dest_ior(ior);
#elif IPC_PEER == IPC_PEER_NULL_LOOPBACK
    /*
         * Loopback uplink packets. (Only for test purpose).
         */
    if (NULL != netif->config.ipc_dlink_callback_t) {
        hif_data_trace(IPC_UL_LOOPBACK_UL_IOR, 0, netif, ior, netif->config.ipc_dlink_callback_t);
        netif->config.ipc_dlink_callback_t(netif->config.callback_context, ior);
    } else {
        hif_data_trace(IPC_UL_LOOPBACK_UL_IOR_DROP, 0, netif, ior, netif->config.ipc_dlink_callback_t);
        ipc_dest_ior(ior);
    }
#else
    ipc_session_t          *session;
    ipc_io_request_t       *next_ior;
    qbm_gpd                *ipv4_first_gpd;
    qbm_gpd                *ipv4_last_gpd;
    qbm_gpd                *ipv6_first_gpd;
    qbm_gpd                *ipv6_last_gpd;

    for (; ior; ior = next_ior) {
        next_ior = ior->next_request;
        if ( ior->first_gpd && ior->last_gpd ) {
            if (ior->ip_type != IPC_IP_TYPE_MIXED) {
                qbm_gpd *first_gpd;
                qbm_gpd *last_gpd;

                first_gpd = ior->first_gpd;
                last_gpd = ior->last_gpd;

                hif_data_trace(IPC_UL_HANDLE_UL_GPD_LIST, ior->ip_type, netif->config.netif_id, first_gpd, last_gpd);

                /*
                             * HIF network interface told IPv4 or IPv6 case.
                             */
                ipc_do_ul_filter(   ior->ip_type,
                                    netif->config.netif_id,
                                    &first_gpd,
                                    &last_gpd);
            #if defined(__MD_DIRECT_TETHERING_SUPPORT__)
                ipc_mdt_forward_ul_ior(ior->ip_type);

                /* For IPC_F_LAN netif, send packet to netif instead of upcm. */
                if ( (first_gpd) &&
                     (netif->config.features & IPC_F_LAN) ) {
                    ipc_pkt_t   pkt;

                    pkt.isGPD = KAL_TRUE;
                    pkt.head = first_gpd;
                    pkt.tail = last_gpd;
                    ipc_send_dl_pkt(&pkt, NULL, netif->lan_netif->config.netif_id);
                    return;
                }
            #endif

                if (first_gpd) {
                    session = ipc_find_session_by_netif(netif, ior->ip_type);
                    if (session) {

                        hif_data_trace(IPC_UL_FORWARD_UL_SDU, ior->ip_type, session->context, first_gpd, last_gpd);

                        IPC_FORWARD_UL_SDU(
                            (ip_type_e)ior->ip_type, /* ip_type */
                            session->context, /* pdn_id */
                            first_gpd, /* p_head */
                            last_gpd); /* p_tail */
                        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
                    } else {
                        hif_trace_error(IPC_TR_UL_DROP_FOR_SESSION_DEACT, netif->config.netif_id, ior, ior->ip_type);
                        qbmt_dest_q(first_gpd, last_gpd);
                    }
                }
            } else {
                /*
                              * HIF network interface cannot tell IPv4 or IPv6 case.
                              * Classify GPD into IPv4 and IPv6 lists, and then send them to wireless network respectively.
                              */
                /* ipv4_first_gpd / ipv4_last_gpd / ipv6_first_gpd / ipv6_last_gpd are initiated in this procedure */
                ipc_clarify_gpd(    ior->first_gpd,
                                    ior->last_gpd,
                                    &ipv4_first_gpd,
                                    &ipv4_last_gpd,
                                    &ipv6_first_gpd,
                                    &ipv6_last_gpd);

                if (ipv4_first_gpd) {

                    hif_data_trace(IPC_UL_HANDLE_IPV4_UL_GPD_LIST, ior->ip_type, netif->config.netif_id, ipv4_first_gpd, ipv4_last_gpd);

                    ipc_do_ul_filter(   IPC_IP_TYPE_IPV4,
                                        netif->config.netif_id,
                                        &ipv4_first_gpd,
                                        &ipv4_last_gpd);
                #if defined(__MD_DIRECT_TETHERING_SUPPORT__)
                    ipc_mdt_forward_ul_ior(ior->ip_type);

                    /* For IPC_F_LAN netif, send packet to netif instead of upcm. */
                    if ( (ipv4_first_gpd) &&
                         (netif->config.features & IPC_F_LAN) ) {
                        ipc_pkt_t   pkt;

                        pkt.isGPD = KAL_TRUE;
                        pkt.head = ipv4_first_gpd;
                        pkt.tail = ipv4_last_gpd;
                        ipc_send_dl_pkt(&pkt, NULL, netif->lan_netif->config.netif_id);
                        return;
                    }
                #endif

                    if (ipv4_first_gpd) {
                        session = ipc_find_session_by_netif(netif, IPC_IP_TYPE_IPV4);
                        if (session) {

                            hif_data_trace(IPC_UL_FORWARD_IPV4_UL_SDU, ior->ip_type, session->context, ipv4_first_gpd, ipv4_last_gpd);

                            IPC_FORWARD_UL_SDU(
                                (ip_type_e)IPC_IP_TYPE_IPV4, /* ip_type */
                                session->context, /* pdn_id */
                                ipv4_first_gpd, /* p_head */
                                ipv4_last_gpd); /* p_tail */
                            IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
                        } else {
                            hif_trace_error(IPC_TR_UL_DROP_FOR_SESSION_DEACT, netif->config.netif_id, ior, IPC_IP_TYPE_IPV4);
                            qbmt_dest_q(ipv4_first_gpd, ipv4_last_gpd);
                        }
                    }
                }

                if (ipv6_first_gpd) {

                    hif_data_trace(IPC_UL_HANDLE_IPV6_UL_GPD_LIST, ior->ip_type, netif->config.netif_id, ipv6_first_gpd, ipv6_last_gpd);

                    ipc_do_ul_filter(   IPC_IP_TYPE_IPV6,
                                        netif->config.netif_id,
                                        &ipv6_first_gpd,
                                        &ipv6_last_gpd);
                #if defined(__MD_DIRECT_TETHERING_SUPPORT__)
                    ipc_mdt_forward_ul_ior(ior->ip_type);

                    /* For IPC_F_LAN netif, send packet to netif instead of upcm. */
                    if ( (ipv6_first_gpd) &&
                         (netif->config.features & IPC_F_LAN) ) {
                        ipc_pkt_t   pkt;

                        pkt.isGPD = KAL_TRUE;
                        pkt.head = ipv6_first_gpd;
                        pkt.tail = ipv6_last_gpd;
                        ipc_send_dl_pkt(&pkt, NULL, netif->lan_netif->config.netif_id);
                        return;
                    }
                #endif

                    if (ipv6_first_gpd) {
                        session = ipc_find_session_by_netif(netif, IPC_IP_TYPE_IPV6);
                        if (session) {

                            hif_data_trace(IPC_UL_FORWARD_IPV6_UL_SDU, ior->ip_type, session->context, ipv6_first_gpd, ipv6_last_gpd);

                            IPC_FORWARD_UL_SDU(
                                (ip_type_e)IPC_IP_TYPE_IPV6, /* ip_type */
                                session->context, /* pdn_id */
                                ipv6_first_gpd, /* p_head */
                                ipv6_last_gpd); /* p_tail */
                            IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
                        } else {
                            hif_trace_error(IPC_TR_UL_DROP_FOR_SESSION_DEACT, netif->config.netif_id, ior, IPC_IP_TYPE_IPV6);
                            qbmt_dest_q(ipv6_first_gpd, ipv6_last_gpd);
                        }
                    }
                }
            } /* end of HIF network interface cannot tell IPv4 or IPv6 case. */
        } else {
            hif_trace_error(IPC_TR_UL_DROP_FOR_INVALID_IOR, netif->config.netif_id, ior, ior->first_gpd, ior->last_gpd);
            IPC_ASSERT(KAL_FALSE);
        }
    } /* end of for (ior) */
#endif
}

static void ipc_on_process_ul_ior_list(ipc_ul_queue_t *q)
{
    ipc_internal_ior_t     *head_ior = q->ior_head;
    ipc_internal_ior_t     *curr_ior = NULL;
    ipc_internal_ior_t     *next_ior = NULL;
    ipc_netif_t            *netif = NULL;
    qbm_gpd                *head_gpd_p = NULL;
    qbm_gpd                *tail_gpd_p =  NULL;
    kal_uint8              prev_pdnid = 0;
    kal_uint8              prev_iptype = 0;
    qbm_gpd                *head_gpd_ebi_p = NULL;
    qbm_gpd                *tail_gpd_ebi_p =  NULL;
    kal_uint8              prev_ebi = 0;

    for (curr_ior = head_ior; curr_ior; curr_ior = next_ior) {
        next_ior = (ipc_internal_ior_t *)(curr_ior->public.next_request);

        if (0 == curr_ior->public.reserved[0]) {
            /* IOR of ipc_uplink() */
            hif_data_trace(IPC_UL_ON_PROCESS_NORMAL_IOR, 0, curr_ior, curr_ior->netif);

            if ( (NULL == next_ior) ||
                 (0 != next_ior->public.reserved[0]) ||
                 (head_ior->netif != next_ior->netif) ) {

                curr_ior->public.next_request = NULL;

                netif = head_ior->netif;
                IPC_R_LOCK_OBJECT(netif, ipc_spinlock_g);
                if (netif) {
                    /*
                     * Reload uplink buffers for the network inteface.
                     */
                    ipc_reload_uplink(netif);

                #if defined(__MD_DIRECT_TETHERING_SUPPORT__)
                    if ( (netif->config.features & IPC_F_LAN) &&
                         !(netif->config.features & IPC_F_TETHERING_ROUTE)) {
                        /*
                         * Direct Tethering
                         * The UL IOR from CCMNI-LAN should be directly send to RNDIS.
                         */
                        ipc_io_request_t   *lan_ior = &(head_ior->public);
                        ipc_netif_t        *lan_netif;

                        lan_netif = netif->lan_netif;
                        IPC_R_LOCK_OBJECT(lan_netif, ipc_spinlock_g);
                        if (lan_netif) {

                            /*
                             * 2015/12/14 Eric.Hsieh
                             * RXSPD has no enough header room for USB DL path.
                             * Since there is no throughput requirement, do memcpy to QBM_TYPE_HIF_DL GPD.
                             */
//                             ipc_ior_list_change_gpd_type(QBM_TYPE_HIF_DL, lan_ior, &lan_ior);
                            hif_data_trace(IPC_MDT_LAN_DIRECT_SEND_DL_IOR, 0, netif->config.netif_id, lan_netif->config.netif_id, lan_ior);

                            /* Destroy old IOR list */
                            ipc_dest_ior(&(head_ior->public));

                            lan_netif->config.ipc_dlink_callback_t(
                                    lan_netif->config.callback_context,
                                    lan_ior);

                            IPC_R_UNLOCK_OBJECT(lan_netif, ipc_spinlock_g);
                        } else {
                            hif_trace_error(IPC_TR_MDT_DROP_FOR_LAN_NETIF_DETACH, head_ior->public.ip_type, head_ior);
                            ipc_dest_ior(&(head_ior->public));
                        }
                    } else {
                        /*
                        */
                        ipc_forward_ul_ior(
                                netif,
                                &(head_ior->public));
                    }
                #else
                    /*
                     */
                    ipc_forward_ul_ior(
                            netif,
                            &(head_ior->public));
                #endif

                    IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
                } else {
                    hif_trace_error(IPC_TR_UL_DROP_FOR_INVALID_NETIF, head_ior->netif, &(head_ior->public));
                    ipc_dest_ior(&(head_ior->public));
                }

                head_ior = next_ior;
            }
        } else {
            /* IOR of ipc_send_ul_pkt() & ipc_send_ul_pkt_by_pdn() */
            IPC_ASSERT(head_ior == curr_ior);

            if (curr_ior->public.ip_type == 0xFF) {
                if ((NULL == head_gpd_ebi_p) && (NULL == tail_gpd_ebi_p))
                {
                    head_gpd_ebi_p = curr_ior->public.first_gpd;
                    tail_gpd_ebi_p = curr_ior->public.last_gpd;
                    prev_ebi = curr_ior->ebi;
                } else {
                    if (prev_ebi == curr_ior->ebi) {
                        /*same Ebi packet,need to group here*/
                        QBM_DES_SET_NEXT(tail_gpd_ebi_p, curr_ior->public.first_gpd);
                        tail_gpd_ebi_p = curr_ior->public.last_gpd;
                        hif_data_trace(IPC_UL_CLUB_PKT_B4_FORWARD, prev_ebi, head_gpd_ebi_p, tail_gpd_ebi_p);
                    } else {
                        hif_data_trace(IPC_UL_SEND_PKT_FORWARD, prev_ebi, head_gpd_ebi_p, tail_gpd_ebi_p);
                        /* Sent to UPCM by EBI */
                        IPC_FORWARD_UL_SDU_BY_EBI(prev_ebi, head_gpd_ebi_p, tail_gpd_ebi_p);
                        head_gpd_ebi_p = curr_ior->public.first_gpd;
                        tail_gpd_ebi_p = curr_ior->public.last_gpd;
                        prev_ebi = curr_ior->ebi;
                    }
                }
            } else {
                if ((NULL == head_gpd_p) && (NULL == tail_gpd_p))
                {
                    head_gpd_p = curr_ior->public.first_gpd;
                    tail_gpd_p = curr_ior->public.last_gpd;
                    prev_pdnid = curr_ior->pdn;
                    prev_iptype = curr_ior->public.ip_type;
                } else {
                    if ((prev_pdnid == curr_ior->pdn) && (prev_iptype == curr_ior->public.ip_type)) {
                        /*same PDN & IP packet,need to group here*/
                        QBM_DES_SET_NEXT(tail_gpd_p, curr_ior->public.first_gpd);
                        tail_gpd_p = curr_ior->public.last_gpd;
                        hif_data_trace(IPC_UL_CLUB_PKT_BY_PDN_B4_FORWARD, prev_pdnid, prev_iptype, head_gpd_p, tail_gpd_p);
                    } else {
                        hif_data_trace(IPC_UL_SEND_PKT_BY_PDN_FORWARD, prev_pdnid, prev_iptype, head_gpd_p, tail_gpd_p);
                        /* Sent to UPCM by PDN */
                        IPC_FORWARD_UL_SDU((kal_uint8)prev_iptype, prev_pdnid, head_gpd_p, tail_gpd_p);
                        head_gpd_p = curr_ior->public.first_gpd;
                        tail_gpd_p = curr_ior->public.last_gpd;
                        prev_pdnid = curr_ior->pdn;
                        prev_iptype = curr_ior->public.ip_type;
                    }
                }
            }

            head_ior = next_ior;
        }
    }
    
    if (NULL != head_gpd_ebi_p) {
         hif_data_trace(IPC_UL_SEND_PKT_FORWARD, prev_ebi, head_gpd_ebi_p, tail_gpd_ebi_p);
         /* Sent to UPCM by EBI */
         IPC_FORWARD_UL_SDU_BY_EBI(prev_ebi, head_gpd_ebi_p, tail_gpd_ebi_p);
    }

    if (NULL != head_gpd_p ) {
         hif_data_trace(IPC_UL_SEND_PKT_BY_PDN_FORWARD, prev_pdnid, prev_iptype, head_gpd_p, tail_gpd_p);
         /* Sent to UPCM by PDN */
         IPC_FORWARD_UL_SDU((kal_uint8)prev_iptype, prev_pdnid, head_gpd_p, tail_gpd_p);
    }
}

static void ipc_start_ul_throttle_timer(kal_uint32 elapse_time);
#ifndef ATEST_SYS_IPCORE
static
#endif
void ipc_ul_throttle_timeout(void *event_hf_param)
{
    kal_bool                to_send_msg;

#ifndef ATEST_SYS_IPCORE
    IPC_ASSERT(ipc_eid_ul_throttle_s);
    ipc_eid_ul_throttle_s = NULL;
#endif

    hif_data_trace(IPC_TR_TIMER_UL_THROTTLE_TIMEOUT, kal_get_systicks(),
                    ipc_ul_throttle_state_s,
                    ipc_ul_throttle_conf_s.enabled,
                    ipc_ul_throttle_conf_s.active_period_100ms,
                    ipc_ul_throttle_conf_s.suspend_period_100ms);

    if (ipc_ul_throttle_conf_s.enabled) {
        if (IPC_UL_THROTTLE_STATE_ACTIVE == ipc_ul_throttle_state_s) {
            /* UL throttle state: ACTIVE -> SUSPEND */
            ipc_start_ul_throttle_timer(ipc_ul_throttle_conf_s.suspend_period_100ms * KAL_TICKS_100_MSEC);
            ipc_ul_throttle_state_s = IPC_UL_THROTTLE_STATE_SUSPEND;
        } else if (IPC_UL_THROTTLE_STATE_SUSPEND == ipc_ul_throttle_state_s) {
            /* UL throttle state: SUSPEND -> ACTIVE */
            ipc_start_ul_throttle_timer(ipc_ul_throttle_conf_s.active_period_100ms * KAL_TICKS_100_MSEC);
            ipc_ul_throttle_state_s = IPC_UL_THROTTLE_STATE_ACTIVE;

            /*
             * IPCORE need to process ul queue if ul pending queue is not empty
             */
            IPC_SPIN_LOCK(ipc_spinlock_g);
            to_send_msg = ( (!ipc_ul_processing_s) &&
                            (!ipc_are_ul_queues_empty()) );
            if (to_send_msg) {
                ipc_ul_processing_s = KAL_TRUE;
            }
            IPC_SPIN_UNLOCK(ipc_spinlock_g);

            /*
             * Switch to IPCORE context.
             */
            if (to_send_msg) {
                msg_send6(MOD_NIL, /* src_mod_id */
                          MOD_IPCORE, /* dest_mod_id */
                          IPCORE_SAP, /* sap_id */
                          MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ, /* msg_id */
                          NULL, /* local_para_ptr */
                          NULL); /* peer_buff_ptr */
            }
        } else {
            IPC_ASSERT(KAL_FALSE);
        }

        /* For EM ELT update info*/
        ipc_em_send_ul_throttle_status();
    }
}

static void ipc_start_ul_throttle_timer(kal_uint32 elapse_time)
{
#ifndef ATEST_SYS_IPCORE
    IPC_ASSERT(ipc_es_ul_throttle_s && elapse_time);

    ipc_eid_ul_throttle_s =
        evshed_set_event(ipc_es_ul_throttle_s,
                         ipc_ul_throttle_timeout,
                         NULL,
                         elapse_time);

    IPC_ASSERT(ipc_eid_ul_throttle_s);
    hif_data_trace(IPC_TR_START_UL_THROTTLE_TIMER, kal_get_systicks(), elapse_time);
#endif
}

/*------------------------------------------------------------------------------
 * Private functions. (Gen93)
 *----------------------------------------------------------------------------*/
static INLINE ipc_ul_queue_priority_e
ipc_get_queue_priority_from_lhif_queue_type(LHIF_QUEUE_TYPE lhif_q_type)
{
    switch (lhif_q_type) {
        case LHIF_HWQ_AP_UL_Q0:
            return IPC_UL_QUEUE_PRIORITY_LOW;
        case LHIF_HWQ_AP_UL_Q1:
            return IPC_UL_QUEUE_PRIORITY_HIGH;
        default:
            /*can't reach here*/
            IPC_ASSERT(KAL_FALSE);
            return IPC_UL_QUEUE_PRIORITY_LOW;
    }
}

/*
 * Assumption: UL queue write lock is acquired.
 * This function should be very light. MUST NOT do any heavy jobs.
 */
static INLINE kal_bool
ipc_is_ul_queue_allowed_to_send(ipc_ul_queue_t *queue)
{
    kal_bool ret = KAL_FALSE;

    if (0 == queue->cnt) {
        return KAL_FALSE;
    }

    switch (queue->queue_type) {
        case IPC_UL_QUEUE_TYPE_IOR:
            ret = (NULL != queue->ior_head);
            break;
        case IPC_UL_QUEUE_TYPE_META:
            ret = (0 <= queue->meta_head);
            break;
        default:
            /*can't reach here*/
            IPC_ASSERT(KAL_FALSE);
            return KAL_FALSE;
    }

    switch (queue->priority) {
        case IPC_UL_QUEUE_PRIORITY_HIGH:
            return ( ret && (!ipc_ul_throttle_is_block_latency_concern_s || ipc_ul_throttle_is_ims_emergency_s) );
        case IPC_UL_QUEUE_PRIORITY_LOW:
            return ( ret && (ipc_ul_throttle_state_s != IPC_UL_THROTTLE_STATE_SUSPEND) && ipc_ul_enable_g );
        default:
            /*can't reach here*/
            IPC_ASSERT(KAL_FALSE);
            return KAL_FALSE;
    }
}

static INLINE kal_uint32
ipc_get_netif_id_from_meta(lhif_meta_tbl_t *meta)
{
    kal_uint32      netif_id = meta->net_if;

    switch (meta->net_type) {
        case LHIF_NET_TYPE_LHIF:
            netif_id |= IPC_NETIF_ID_LHIF_BEGIN;
            break;
        case LHIF_NET_TYPE_RNDIS:
            netif_id |= IPC_NETIF_ID_ETH_BEGIN;
            break;
        case LHIF_NET_TYPE_MBIM:
            netif_id |= IPC_NETIF_ID_MBIM_BEGIN;
            break;
        default:
            /* Unexpected netif net_type. */
            netif_id = IPC_INVALID_NETIF_ID;
            break;
    }

    return netif_id;
}

static INLINE void
ipc_get_pdn_id_from_netif(kal_uint32 *ipv4_pdn_id, kal_uint32 *ipv6_pdn_id, ipc_netif_t *netif)
{
    ipc_session_t      *session;

    /* Get the IPv4 PDN ID of the netif */
    session = ipc_find_session_by_netif(netif, IPC_IP_TYPE_IPV4);
    if (session) {
        IPC_ASSERT((session->context & 0xFFFFFF00) == 0);

        *ipv4_pdn_id = session->context;

        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
    } else {
        *ipv4_pdn_id = IPC_INVALID_PDN_ID;
    }

    /* Get the IPv6 PDN ID of the netif */
    session = ipc_find_session_by_netif(netif, IPC_IP_TYPE_IPV6);
    if (session) {
        IPC_ASSERT((session->context & 0xFFFFFF00) == 0);

        *ipv6_pdn_id = session->context;

        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
    } else {
        *ipv6_pdn_id = IPC_INVALID_PDN_ID;
    }
}

static INLINE kal_uint8
ipc_get_ip_type_from_meta(lhif_meta_tbl_t *meta)
{
    /*
     * 2016/11/29 Cammie.Yang
     * Invalidate the first 64B of uplink packets to eliminate the duplicate cache-invalid effort in UPCM.
     */
    QBM_CACHE_INVALID(meta->vrb_addr, 64);
    if (IPC_HDR_IS_V4(meta->vrb_addr)) {
        return IPC_IP_TYPE_IPV4;
    } else if (IPC_HDR_IS_V6(meta->vrb_addr)) {
        return IPC_IP_TYPE_IPV6;
    } else {
        /* Unexpected packets, which is neither IPv4 or IPv6 */
        return IPC_IP_TYPE_INVALID;
    }
}

/*
 * Assumption: UL queue write lock is acquired.
 * This function should be very light. MUST NOT do any heavy jobs.
 */
static void
ipc_clear_ior_queue(ipc_ul_queue_t *q)
{
    q->cnt = 0;
    q->pending_cnt = 0;
    q->ior_head = NULL;
    q->ior_tail = NULL;
}

/*
 * Assumption: UL queue write lock is acquired.
 * This function should be very light. MUST NOT do any heavy jobs.
 */
static void
ipc_clear_meta_queue(ipc_ul_queue_t *q)
{
    q->cnt = 0;
    q->pending_cnt = 0;
    q->meta_head = IPC_UL_QUEUE_META_INVALID_VALUE;
    q->meta_tail = IPC_UL_QUEUE_META_INVALID_VALUE;
}

static void ipc_on_process_ul_meta_table(ipc_ul_queue_t *q)
{
    kal_uint16              start_idx, read_idx, end_idx;
    LHIF_QUEUE_TYPE         queue_type;
    lhif_meta_tbl_t        *meta_tbl;
    lhif_meta_tbl_t        *meta;
    kal_uint16              tbl_size;
    kal_uint32              netif_id, prev_netif_id;
    ipc_netif_t            *netif = NULL;
    kal_uint8               ip_type;
    kal_uint32              ipv4_pdn_id, ipv6_pdn_id;

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
    kal_uint32              i;
    kal_uint32              netif_features;

    static ipc_mdt_lan_des_t        ap_to_host_des[IPC_MDT_MAX_DEVICE_NUM];
    static ipc_mdt_lan_des_t        host_to_ap_des[IPC_MDT_MAX_DEVICE_NUM];
    static ipc_mdt_mirror_des_t     mdt_mirror_des[IPC_MDT_MAX_DEVICE_NUM];

    kal_mem_set(ap_to_host_des, 0, sizeof(ap_to_host_des));
    kal_mem_set(host_to_ap_des, 0, sizeof(host_to_ap_des));
    kal_mem_set(mdt_mirror_des, 0, sizeof(mdt_mirror_des));
    for (i = 0; i < IPC_MDT_MAX_DEVICE_NUM; i++) {
        ap_to_host_des[i].dst_netif_id = IPC_INVALID_NETIF_ID;
        ap_to_host_des[i].src_netif_id = IPC_INVALID_NETIF_ID;
        host_to_ap_des[i].dst_netif_id = IPC_INVALID_NETIF_ID;
        host_to_ap_des[i].src_netif_id = IPC_INVALID_NETIF_ID;

        mdt_mirror_des[i].netif_id = IPC_INVALID_NETIF_ID;
        mdt_mirror_des[i].pdn_ids[0] = IPC_INVALID_NETIF_ID;
        mdt_mirror_des[i].pdn_ids[1] = IPC_INVALID_NETIF_ID;
    }
#else
    ipc_mdt_mirror_des_t        *mdt_mirror_des = NULL;
#endif

    IPC_ASSERT(q);
    start_idx = read_idx = q->meta_head;
    end_idx = q->meta_tail;
    queue_type = q->meta_queue_type;

    IPC_QUERY_META_TABLE((kal_uint32 **)&meta_tbl, &tbl_size, queue_type);

    prev_netif_id = IPC_INVALID_NETIF_ID;
    ipv4_pdn_id = IPC_INVALID_PDN_ID;
    ipv6_pdn_id = IPC_INVALID_PDN_ID;

    do {
        meta = &meta_tbl[read_idx];

        /* Filter & route packets */
        if ( !meta->ignore &&
             (LHIF_NET_TYPE_PDCP_LBA != meta->net_type) &&
             (LHIF_NET_TYPE_PDCP_LBB != meta->net_type) ) {
            netif_id = ipc_get_netif_id_from_meta(meta);

            if (netif_id != prev_netif_id) {
                prev_netif_id = netif_id;

                if (netif) {
                    IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
                }
                netif = ipc_find_netif(netif_id);
                if (netif) {
                    ipc_get_pdn_id_from_netif(&ipv4_pdn_id, &ipv6_pdn_id, netif);
                } else {
                    ipv4_pdn_id = IPC_INVALID_NETIF_ID;
                    ipv6_pdn_id = IPC_INVALID_NETIF_ID;
                }
            }
            if (netif) {
            #if defined(__MD_DIRECT_TETHERING_SUPPORT__)
                netif_features = netif->config.features;
                if ( (netif_features & IPC_F_LAN) &&
                     !(netif_features & IPC_F_TETHERING_ROUTE)) {
                    ipc_pkt_des_t packet_des;

                    /* Fill packet_des */
                    kal_mem_set(&packet_des, 0, sizeof(ipc_pkt_des_t));
                    packet_des.des_type = IPC_PKT_DES_TYPE_META;
                    packet_des.packet = meta->vrb_addr;
                    packet_des.packet_len = meta->length;
                    packet_des.meta = meta;

                    /* Check if the packet should be tracked */
                    mdt_track_packet(KAL_FALSE, &packet_des);

                    /*
                     * Direct Tethering
                     * The UL IOR from LHIF-LAN should be directly send to RNDIS.
                     */
                    meta->ignore = 1;
                    if (!ipc_mdt_fill_did_si_from_meta(ap_to_host_des, meta, netif_id, netif)) {
                        hif_trace_error(IPC_TR_META_UL_DROP_FOR_LAN_DID_ALLOC_FAIL, netif->config.netif_id, meta, ip_type);
                        IPC_FREE_META_VRB(meta);
                    }
                } else {
                    ip_type = ipc_get_ip_type_from_meta(meta);
                    if (IPC_IP_TYPE_INVALID != ip_type) {
                        if (ipc_meta_do_filter(ip_type, netif_id, meta, mdt_mirror_des)) {
                            if (netif_features & IPC_F_LAN) {
                                meta->ignore = 1;
                                if (!ipc_mdt_fill_did_si_from_meta(host_to_ap_des, meta, netif_id, netif)) {
                                    hif_trace_error(IPC_TR_META_UL_DROP_FOR_LAN_DID_ALLOC_FAIL, netif->config.netif_id, meta, ip_type);
                                    IPC_FREE_META_VRB(meta);
                                }
                            } else {
                                ipc_fill_session_info_into_meta(ip_type, ipv4_pdn_id, ipv6_pdn_id, netif_id, meta);
                            }
                        }
                    } else {
                        hif_trace_error(IPC_TR_META_UL_DROP_FOR_NONE_IP_PKT, netif_id, read_idx, queue_type);
                        meta->ignore = 1;
                        IPC_FREE_META_VRB(meta);
                    }
                }
            #else
                ip_type = ipc_get_ip_type_from_meta(meta);
                if (IPC_IP_TYPE_INVALID != ip_type) {
                    if (ipc_meta_do_filter(ip_type, netif_id, meta, mdt_mirror_des)) {
                        ipc_fill_session_info_into_meta(ip_type, ipv4_pdn_id, ipv6_pdn_id, netif_id, meta);
                    }
                } else {
                    hif_trace_error(IPC_TR_META_UL_DROP_FOR_NONE_IP_PKT, netif_id, read_idx, queue_type);
                    meta->ignore = 1;
                    IPC_FREE_META_VRB(meta);
                }
            #endif
            } else {
                hif_trace_error(IPC_TR_META_UL_DROP_FOR_INVALID_NETIF, netif_id, read_idx, queue_type);
                meta->ignore = 1;
                IPC_FREE_META_VRB(meta);
            }
        }
        read_idx ++;
        if (read_idx == tbl_size) {
            read_idx = 0;
        }
    } while (read_idx != end_idx);

    if (netif) {
        IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
    }

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
    /* For IPC_F_LAN netif, send packet to netif instead of upcm. */
    ipc_mdt_lan_on_did_downlink(ap_to_host_des);
    ipc_mdt_lan_on_did_downlink(host_to_ap_des);
#endif

    hif_data_trace(IPC_UL_FORWARD_META, start_idx, end_idx, queue_type);
    IPC_FORWARD_UL_META(q->meta_head, q->meta_tail, q->meta_queue_type);
}

static INLINE void ipc_clear_did_queue(ipc_did_queue_t *did_queue)
{
    did_queue->did_head = NULL;
    did_queue->did_tail = NULL;
}

static INLINE void ipc_push_did_list_to_did_queue(ipc_did_queue_t *did_queue, upcm_did *did_head, upcm_did *did_tail)
{
    upcm_did      **did_queue_head = &(did_queue->did_head);
    upcm_did      **did_queue_tail = &(did_queue->did_tail);

    if (*did_queue_tail) {
        UPCM_DID_SET_NEXT(*did_queue_tail, did_head);
        *did_queue_tail = did_tail;
    } else {
        *did_queue_head = did_head;
        *did_queue_tail = did_tail;
    }
}

/*
 * Assumption: netif read lock is acquired.
 */
static kal_bool ipc_forward_dl_did_default(kal_uint8 ip_type, ipc_netif_t *netif, kal_uint32 pdn_id, upcm_did *did)
{
    kal_bool            dl_cbk_ret = KAL_TRUE;
    kal_uint32          netif_id = netif->config.netif_id;
    kal_uint16          pkt_num_to_netif;

    pkt_num_to_netif = ipc_did_do_filter(ip_type, netif_id, pdn_id, did);
    if (pkt_num_to_netif) {
        hif_data_trace(IPC_DL_FWD_DL_CALLBACK_DID, pkt_num_to_netif, netif_id);

        HIF_SWLA_START("ID3");
        dl_cbk_ret = netif->config.ipc_dlink_did_cb_t(
                netif->config.callback_context,
                did);
        HIF_SWLA_STOP("ID3");
    }

    return dl_cbk_ret;
}

/*
 * Assumption: netif read lock is acquired.
 */
static kal_bool ipc_forward_dl_did_wo_filter(kal_uint8 ip_type, ipc_netif_t *netif, kal_uint32 pdn_id, upcm_did *did)
{
    kal_bool            dl_cbk_ret = KAL_TRUE;

    hif_data_trace(IPC_DL_FWD_DL_CALLBACK_DID_WO_FILTER, UPCM_DID_GET_PKT_NUM(did), netif->config.netif_id);

    HIF_SWLA_START("ID3");
    dl_cbk_ret = netif->config.ipc_dlink_did_cb_t(
            netif->config.callback_context,
            did);
    HIF_SWLA_STOP("ID3");

    return dl_cbk_ret;
}

typedef kal_bool (*ipc_fw_dl_did_f)(kal_uint8 ip_type, ipc_netif_t *netif, kal_uint32 pdn_id, upcm_did *did);
typedef void (*ipc_enq_retry_dl_did_f)(upcm_did *did_head, upcm_did *did_tail, kal_uint32 queue_idx);

/*
 * Assumption: netif read lock is acquired.
 */
static ipc_fw_dl_did_f ipc_fw_dl_did_f_dispatcher_s[IPC_DID_QUEUE_TYPE_MAX] = {ipc_forward_dl_did_default,
                                                                               ipc_forward_dl_did_wo_filter,
                                                                               ipc_forward_dl_did_wo_filter};

/*
 * Assumption: netif read lock is acquired.
 */
static ipc_enq_retry_dl_did_f ipc_enq_retry_dl_did_f_dispatcher_s[IPC_DID_QUEUE_TYPE_MAX] = {ipc_did_enqueue_default_queue,
                                                                                             ipc_did_enqueue_wo_filter_queue,
                                                                                             ipc_did_enqueue_mdt_queue};

/*
 * Assumption: netif read lock is acquired.
 */
static void ipc_on_process_dl_did_list(kal_uint8 ip_type, ipc_netif_t *netif, kal_uint32 pdn_id, ipc_did_queue_type_e queue_type, upcm_did *did_head, upcm_did *did_tail)
{
    upcm_did           *did;
    upcm_did           *prev_did = NULL;
    upcm_did           *next_did;
    kal_bool            end_of_list;
    kal_bool            dl_cbk_ret = KAL_TRUE;
    kal_uint32          dl_queue_idx = _IPC_GET_DL_QUEUE_INDEX(pdn_id, KAL_FALSE);

    IPC_ASSERT(netif && did_head && did_tail);

    end_of_list = KAL_FALSE;
    for (did = did_head; did && !end_of_list; did = next_did) {
        next_did = UPCM_DID_GET_NEXT(did);
        end_of_list = (did == did_tail);

        if (IPC_DID_QUEUE_TYPE_DEFAULT == queue_type) {
            hif_data_trace(IPC_DL_PROCESS_DL_DID, UPCM_DID_GET_FLOW(did),
                                                  UPCM_DID_GET_COUNT_L(did),
                                                 (UPCM_DID_GET_COUNT_L(did) + UPCM_DID_GET_PKT_NUM(did) - 1),
                                                  UPCM_DID_GET_SEG_NUM(did),
                                                  did,
                                                  pdn_id);
        }

        dl_cbk_ret = (ipc_fw_dl_did_f_dispatcher_s[queue_type])(ip_type, netif, pdn_id, did);
        if (!dl_cbk_ret) {
            /*
             * The netif is not able to receive DID for now.
             * Queue all remaining DID to DL queue (IPC_DID_QUEUE_TYPE_WO_FILTER).
             */
            break;
        }

        prev_did = did;
    }

    if (did && !dl_cbk_ret) {
        kal_bool            to_send_msg;

        hif_data_trace(IPC_DL_ON_DID_DOWNLINK_PENDING, did, did_tail);

        if (did != did_head) {
            /* Free DID which have been sent */
            if (prev_did) {
                IPC_ASSERT(UPCM_DID_GET_NEXT(prev_did) == did);
                UPCM_DID_SET_NEXT(prev_did, NULL);
            }
            upcm_did_dest_q(did_head, prev_did);
        }

        /* Enqueue all remaining DID */
        (ipc_enq_retry_dl_did_f_dispatcher_s[queue_type])(did, did_tail, dl_queue_idx);

        /* Send ILM to IPCore for processing DL queue */
        IPC_SPIN_LOCK(ipc_spinlock_g);
        to_send_msg = (!ipc_dl_processing_s);
        ipc_dl_processing_s = KAL_TRUE;
        IPC_SPIN_UNLOCK(ipc_spinlock_g);

        /*
         * Switch to IPCORE context.
         */
        if (to_send_msg) {
            msg_send6(  MOD_NIL, /* src_mod_id */
                        MOD_IPCORE, /* dest_mod_id */
                        IPCORE_DATAPATH_SAP, /* sap_id */
                        MSG_ID_IPCORE_PROCESS_DL_QUEUE_REQ, /* msg_id */
                        NULL, /* local_para_ptr */
                        NULL); /* peer_buff_ptr */
        }
    } else {
        upcm_did_dest_q(did_head, did_tail);
    }

    return;
}

/* Unused static function */
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
#endif
/*------------------------------------------------------------------------------
 * Public functions.
 *----------------------------------------------------------------------------*/
void ipc_on_process_ul_queue(void)
{
    kal_uint32                      i;
    ipc_ul_queue_t                  tmp_queue;
    kal_bool                        to_send_pkt;

    HIF_SWLA_START("IU2");

    IPC_SPIN_LOCK(ipc_spinlock_g);
    ipc_ul_processing_s = KAL_FALSE;
    IPC_SPIN_UNLOCK(ipc_spinlock_g);

    hif_data_trace(IPC_UL_PROCESS_UPLINK_QUEUE);

    for (i = 0; i < IPC_UL_QUEUE_NUM; i++) {
        ipc_ul_queue_t *q = &ipc_ul_queues_s[i];
        to_send_pkt = KAL_FALSE;

        /*
         * Check whether the ul queue is allowed to sent or not.
         * If yes, dequeue the queue.
         */
        IPC_W_LOCK_OBJECT(q, ipc_spinlock_g);
        if (q) {
            kal_mem_cpy(&tmp_queue, q, sizeof(ipc_ul_queue_t));
            if (ipc_is_ul_queue_allowed_to_send(q)) {
                q->ipc_clear_callback_t(q);
                to_send_pkt = KAL_TRUE;
            } else {
                q->pending_cnt = q->cnt;
            }
            IPC_W_UNLOCK_OBJECT(q, ipc_spinlock_g);

            if (to_send_pkt) {
                /* Process the queue by calling it's cbk */
                tmp_queue.ipc_process_callback_t(&tmp_queue);
            } else if (tmp_queue.pending_cnt) {
                hif_data_trace(IPC_UL_DEQUEUE_UPLINK_QUEUE, tmp_queue.queue_type, tmp_queue.priority, tmp_queue.pending_cnt);
            }
        } else {
            IPC_ASSERT(KAL_FALSE);
        }
    }

    HIF_SWLA_STOP("IU2");
}

void ipc_on_retry_ul_reload(void)
{
    kal_uint64      netif_bit_ids;
    kal_uint64      lbs; /* least significant bit set to 1 */
    ipc_netif_t    *netif;

    IPC_SPIN_LOCK(ipc_spinlock_g);
    ipc_ul_reload_retrying_s = KAL_FALSE;
    IPC_SPIN_UNLOCK(ipc_spinlock_g);

    netif_bit_ids = ipc_get_all_netif_ul_reload_retry();

    hif_data_trace(IPC_UL_ON_RETRY_RELOAD, 0, netif_bit_ids);

    while (netif_bit_ids) {
        lbs = netif_bit_ids & ((~netif_bit_ids) + 1);
        netif_bit_ids &= (~lbs);

        netif = ipc_find_netif_by_bit_id(lbs);

        hif_data_trace(IPC_UL_ON_RETRY_RELOAD_FOR_NETIF, 0, netif, lbs);

        if (netif) {
            ipc_reload_uplink(netif);
            IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
        }
    }
}

void ipc_on_downlink(kal_uint32 pdn_id, qbm_gpd *p_head, qbm_gpd *p_tail)
{
    ipc_session_t              *session;
    ipc_netif_t                *netif;
    ipc_io_request_t           *ior;
    kal_uint8                   session_type;
    kal_uint32                  netif_id;
    

    HIF_SWLA_START("ID1");

    IPC_ASSERT(p_head);
    IPC_ASSERT(p_tail);

    hif_data_trace(IPC_DL_ON_DOWNLINK, pdn_id, p_head, p_tail);

    session = ipc_find_session_by_context(pdn_id);
    if (session) {
        netif = session->netif;
        session_type = session->type;
        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

        /* Get network interface information for following operations */
        IPC_R_LOCK_OBJECT(netif, ipc_spinlock_g);
        if (netif)
        {
            netif_id = netif->config.netif_id;
            IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
        } else
        {
            kal_uint8   ip_id = 0xff;

            IPC_R_LOCK_OBJECT(session, ipc_spinlock_g);
            if (session)
            {
                ip_id = (kal_uint8)session->ip_id;
                IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
            }

            hif_trace_error(IPC_TR_DL_DROP_FOR_NETIF_INFO_LOCK_FAIL, pdn_id, ip_id, session_type, p_head, p_tail);
            goto drop;
        }

        /* Do DL filter */
        ipc_do_dl_filter(session_type, netif_id, pdn_id, &p_head, &p_tail);

    #if defined(__MD_DIRECT_TETHERING_SUPPORT__)
        /* Send packets in ipc_mdt_packet_routing_queue */
        ipc_mdt_on_downlink();
    #endif

        if (NULL == p_head || NULL == p_tail)
        {
            hif_data_trace(IPC_DL_ON_DOWNLINK_FILTER_OUT, 0, session_type, netif_id);
            IPC_ASSERT(NULL == p_head && NULL == p_tail);
            goto done;
        }

        /* Send DL traffic */
        IPC_R_LOCK_OBJECT(netif, ipc_spinlock_g);
        if (netif)
        {
            ior = (ipc_io_request_t *)QBM_DES_GET_SW_CTRL_FIELD(p_head);
            ior->next_request = NULL;
            ior->first_gpd = p_head;
            ior->last_gpd = p_tail;
            ior->ip_type = session_type;
            ior->qos_priority = 0;

            hif_data_trace(IPC_DL_ON_DOWNLINK_CALLBACK_INFO, pdn_id, session_type, netif_id);
            hif_data_trace(IPC_DL_ON_DOWNLINK_CALLBACK_GPD, pdn_id, p_head, p_tail);

            HIF_SWLA_START("ID3");
            netif->config.ipc_dlink_callback_t(
                netif->config.callback_context,
                ior);
            HIF_SWLA_STOP("ID3");

            IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
            goto done;
        } else
        {
            kal_uint8   ip_id = 0xff;

            IPC_R_LOCK_OBJECT(session, ipc_spinlock_g);
            if (session)
            {
                ip_id = (kal_uint8)session->ip_id;
                IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
            }
            hif_trace_error(IPC_TR_DL_DROP_FOR_NETIF_DETACH, pdn_id, ip_id, session_type, p_head, p_tail);
            goto drop;
        }
    } else
    {
        hif_trace_error(IPC_TR_DL_DROP_FOR_INVALID_SESSION, pdn_id, p_head, p_tail);        
    }

drop:
    qbmt_dest_q(p_head, p_tail); /* Discard packets if something wrong. */

done:

    HIF_SWLA_STOP("ID1");
    return;
}

void ipc_on_downlink_multiple_ps(kal_uint32 pdn_id, qbm_gpd *p_head, qbm_gpd *p_tail, kal_uint8 proto_idx)
{
    upcm_dlvr_dl_info_t *p_info = (upcm_dlvr_dl_info_t *)QBM_DES_GET_SW_CTRL_FIELD(p_head);

    hif_data_trace(IPC_DL_ON_DOWNLINK_MULTI_PS, pdn_id, proto_idx);

    IPC_MASK_PROTOID_ON_PDNID(pdn_id, proto_idx);
    IPC_MASK_PROTOID_ON_PDNID(p_info->ebi, proto_idx);
    ipc_on_downlink(pdn_id, p_head, p_tail);
}

void ipc_timer_init()
{
    ipc_es_ul_throttle_s = evshed_create(
                            "IPC_UL_THROTTLE", /* timer_name: event scheduler name */
                            MOD_IPCORE, /* dest_mod_id: system sends timeout message to this module when event scheduler timeout happens */
                            0, /* fuzz */
                            0); /* max_delay_ticks */

    if (ipc_es_ul_throttle_s) {
        evshed_set_index(ipc_es_ul_throttle_s, IPC_ES_INDEX_UL_THROTTLE);
    } else {
        IPC_ASSERT(KAL_FALSE);
    }
}

void ipc_set_ul_throttle(local_para_struct *local_para_ptr)
{
    ipc_set_ul_throttle_param_t *param = (ipc_set_ul_throttle_param_t *)local_para_ptr;
    ipc_ul_throttle_conf_t *conf = (ipc_ul_throttle_conf_t *)(&(param->conf));
    kal_bool                to_send_msg;

    hif_trace_info(IPC_TR_SET_UL_THROTTLE_BEGIN, ipc_ul_throttle_state_s, conf->enabled, conf->active_period_100ms, conf->suspend_period_100ms, conf->features);

    // Cancel original timer.
    if (NULL != ipc_eid_ul_throttle_s) {
        ipc_ul_throttle_conf_s.enabled = KAL_FALSE;
        evshed_cancel_event(ipc_es_ul_throttle_s, &ipc_eid_ul_throttle_s);
        ipc_eid_ul_throttle_s = NULL;
    }

    if (conf->enabled) {
        /* Enable IPC UL throttle. */
        IPC_ASSERT(conf->active_period_100ms && conf->suspend_period_100ms);

        kal_mem_cpy(&ipc_ul_throttle_conf_s, conf, sizeof(ipc_ul_throttle_conf_t));
        /* Check if its the SUSPEND-FOREVER mode. (active:suspend = 1:255) */
        if ( (1 == ipc_ul_throttle_conf_s.active_period_100ms) &&
             (255 == ipc_ul_throttle_conf_s.suspend_period_100ms) ) {
            /* It's SUSPEND-FOREVER mode */
            ipc_ul_throttle_state_s = IPC_UL_THROTTLE_STATE_SUSPEND;
        } else {
            // Start new timer.
            ipc_start_ul_throttle_timer(ipc_ul_throttle_conf_s.active_period_100ms * KAL_TICKS_100_MSEC);
            ipc_ul_throttle_state_s = IPC_UL_THROTTLE_STATE_ACTIVE;
        }

        /* Check block-latency-concern enable bit */
        if (1 == (conf->features & IPC_THROTTLE_FEATURE_BLOCK_LANTENCY_CONCERN)) {
            IPC_ASSERT(255 == ipc_ul_throttle_conf_s.suspend_period_100ms);
            ipc_ul_throttle_is_block_latency_concern_s = KAL_TRUE;
        } else {
            ipc_ul_throttle_is_block_latency_concern_s = KAL_FALSE;
        }
    } else {
        /* Disable IPC UL throttle. */
        kal_mem_set(&ipc_ul_throttle_conf_s, 0, sizeof(ipc_ul_throttle_conf_t));

        ipc_ul_throttle_state_s = IPC_UL_THROTTLE_STATE_NONE;
        ipc_ul_throttle_is_block_latency_concern_s = KAL_FALSE;

        /*
         * IPCORE need to process ul queue if ul pending queue is not empty
         */
        IPC_SPIN_LOCK(ipc_spinlock_g);
        to_send_msg = ( (!ipc_ul_processing_s) &&
                        (!ipc_are_ul_queues_empty()) );
        if (to_send_msg) {
            ipc_ul_processing_s = KAL_TRUE;
        }
        IPC_SPIN_UNLOCK(ipc_spinlock_g);

        /*
         * Switch to IPCORE context.
         */
        if (to_send_msg) {
            msg_send6(MOD_NIL, /* src_mod_id */
                      MOD_IPCORE, /* dest_mod_id */
                      IPCORE_SAP, /* sap_id */
                      MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ, /* msg_id */
                      NULL, /* local_para_ptr */
                      NULL); /* peer_buff_ptr */
        }
    }
    hif_trace_info(IPC_TR_SET_UL_THROTTLE_END, ipc_ul_throttle_state_s, ipc_ul_throttle_conf_s.enabled, ipc_ul_throttle_conf_s.active_period_100ms, ipc_ul_throttle_conf_s.suspend_period_100ms, ipc_ul_throttle_is_block_latency_concern_s);

    /* For EM ELT update info*/
    ipc_em_send_ul_throttle_status();
}

void ipc_em_send_ul_throttle_status(void)
{
#ifdef __EM_MODE__
    em_ipc_ul_throttle_status_ind_struct_t *em_info_ptr;
    ilm_struct ilm;

    if (ipc_em_on_s) {
        em_info_ptr = (em_ipc_ul_throttle_status_ind_struct_t *)
                        construct_local_para(sizeof(em_ipc_ul_throttle_status_ind_struct_t), TD_RESET);

        kal_mem_cpy(&(em_info_ptr->throttle_conf), &ipc_ul_throttle_conf_s, sizeof(ipc_ul_throttle_conf_t));
        em_info_ptr->throttle_state = ipc_ul_throttle_state_s;

        ilm.src_mod_id     = MOD_IPCORE;
        ilm.dest_mod_id    = MOD_DHL;
        ilm.msg_id         = MSG_ID_EM_IPC_UL_THROTTLE_STATUS_IND;
        ilm.sap_id         = IPCORE_SAP;
        ilm.local_para_ptr = (local_para_struct *)em_info_ptr;
        ilm.peer_buff_ptr  = NULL;

        dhl_EM_logger(&ilm);
        destroy_ilm(&ilm);
    }
#endif
}

void ipc_ims_emergency_call_ind_handler(local_para_struct *local_para_ptr)
{
    ipc_vdm_ims_emergency_call_ind_struct_t *p = (ipc_vdm_ims_emergency_call_ind_struct_t *)local_para_ptr;
    kal_bool                to_send_msg;

    hif_data_trace(IPC_UL_THROTTLE_IMS_EMERGEMCY_IND, ipc_ul_throttle_is_ims_emergency_s, p->is_calling);

    ipc_ul_throttle_is_ims_emergency_s = p->is_calling;

    if (ipc_ul_throttle_is_ims_emergency_s) {
        /*
         * IPCORE need to process ul queue if ul pending queue is not empty
         */
        IPC_SPIN_LOCK(ipc_spinlock_g);
        to_send_msg = ( (!ipc_ul_processing_s) &&
                        (!ipc_are_ul_queues_empty()) );
        if (to_send_msg) {
            ipc_ul_processing_s = KAL_TRUE;
        }
        IPC_SPIN_UNLOCK(ipc_spinlock_g);

        /*
         * Switch to IPCORE context.
         */
        if (to_send_msg) {
            msg_send6(MOD_NIL, /* src_mod_id */
                      MOD_IPCORE, /* dest_mod_id */
                      IPCORE_SAP, /* sap_id */
                      MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ, /* msg_id */
                      NULL, /* local_para_ptr */
                      NULL); /* peer_buff_ptr */
        }
    }
}

/*------------------------------------------------------------------------------
 * Public functions. (Gen93)
 *----------------------------------------------------------------------------*/
kal_bool ipc_queue_init()
{
    int i_type, i_priority;

    /* Init UL queues */
    for (i_type = 0; i_type < IPC_UL_QUEUE_TYPE_MAX; i_type++) {
        for (i_priority = 0; i_priority < IPC_UL_QUEUE_PRIORITY_MAX; i_priority++) {
            ipc_ul_queue_t *ul_queue = &ipc_ul_queues_s[_IPC_GET_UL_QUEUE_INDEX(i_type, i_priority)];

            kal_mem_set(ul_queue, 0, sizeof(ipc_ul_queue_t));
            if (!IPC_IS_VALID_OBJECT(ul_queue)) {
                IPC_INIT_OBJECT_BEGIN(ul_queue, ipc_spinlock_g);

                ul_queue->queue_type = i_type;
                ul_queue->priority = i_priority;
                if (IPC_UL_QUEUE_TYPE_META == i_type) {
                    switch (i_priority) {
                        case IPC_UL_QUEUE_PRIORITY_HIGH:
                            ul_queue->meta_queue_type = LHIF_HWQ_AP_UL_Q1;
                            break;
                        case IPC_UL_QUEUE_PRIORITY_LOW:
                            ul_queue->meta_queue_type = LHIF_HWQ_AP_UL_Q0;
                            break;
                        default:
                            /*can't reach here*/
                            IPC_ASSERT(KAL_FALSE);
                            return KAL_FALSE;
                    }

                    ul_queue->meta_queue_size = IPC_UL_QUEUE_META_INVALID_VALUE;
                    ul_queue->meta_head = IPC_UL_QUEUE_META_INVALID_VALUE;
                    ul_queue->meta_tail = IPC_UL_QUEUE_META_INVALID_VALUE;
                    ul_queue->ipc_clear_callback_t = ipc_clear_meta_queue;
                    ul_queue->ipc_process_callback_t = ipc_on_process_ul_meta_table;
                } else {
                    ul_queue->ipc_clear_callback_t = ipc_clear_ior_queue;
                    ul_queue->ipc_process_callback_t = ipc_on_process_ul_ior_list;
                }
                IPC_INIT_OBJECT_END(ul_queue, ipc_spinlock_g);
            }
        }
    }


    /* Init DL queues */
    kal_mem_set(ipc_dl_queues_s, 0, sizeof(ipc_dl_queues_s));

    return KAL_TRUE;
}

/*
 * Assumption: ipc_spinlock_g is acquired.
 * This function should be very light. MUST NOT do any heavy jobs.
 */
kal_bool ipc_are_ul_queues_empty()
{
    kal_bool    ret = KAL_TRUE;
    kal_uint32  i;

    for (i = 0; i < IPC_UL_QUEUE_NUM; i++) {
        ipc_ul_queue_t *q = &ipc_ul_queues_s[i];

        ret &= (q->cnt == 0);
    }

    return ret;
}

void ipc_fill_session_info_into_meta(kal_uint8 ip_type, kal_uint32 ipv4_pdn_id, kal_uint32 ipv6_pdn_id, kal_uint32 netif_id, lhif_meta_tbl_t *meta)
{
    kal_uint32      pdn_id;
    kal_uint32      proto_idx;

    pdn_id = (IPC_IP_TYPE_IPV4 == ip_type) ? ipv4_pdn_id : ipv6_pdn_id;

    if (IPC_INVALID_PDN_ID != pdn_id) {
        IPC_RETRIEVE_PROTOID_FROM_PDNID(pdn_id, proto_idx);
        IPC_UNMASK_PROTOID_FROM_PDNID(pdn_id);
        meta->pdn = pdn_id;
        meta->protocol_idx = proto_idx;
    } else {
        hif_trace_error(IPC_TR_META_UL_DROP_FOR_SESSION_DEACT, netif_id, meta, ip_type);
        meta->ignore = 1;
        IPC_FREE_META_VRB(meta);
    }
}

void ipc_push_ior_list_to_ior_queue(ipc_io_request_t *head_ior, ipc_io_request_t *tail_ior, kal_uint32 ior_cnt, ipc_ul_queue_priority_e q_priority)
{
    ipc_ul_queue_t             *q;

    IPC_ASSERT(head_ior && tail_ior);

    q = &ipc_ul_queues_s[_IPC_GET_UL_QUEUE_INDEX(IPC_UL_QUEUE_TYPE_IOR, q_priority)];

    IPC_W_LOCK_OBJECT(q, ipc_spinlock_g);
    if (q) {
        if (q->ior_tail) {
            q->ior_tail->public.next_request = head_ior;
            q->ior_tail = (ipc_internal_ior_t *)tail_ior;
        } else {
            q->ior_head = (ipc_internal_ior_t *)head_ior;
            q->ior_tail = (ipc_internal_ior_t *)tail_ior;
        }

        q->cnt += ior_cnt;
        IPC_W_UNLOCK_OBJECT(q, ipc_spinlock_g);
    } else {
        IPC_ASSERT(KAL_FALSE);
    }
}

void ipc_push_meta_list_to_meta_queue(kal_uint16 start_idx, kal_uint16 end_idx, LHIF_QUEUE_TYPE q_type)
{
    ipc_ul_queue_priority_e     q_priority;
    ipc_ul_queue_t             *q;

    q_priority = ipc_get_queue_priority_from_lhif_queue_type(q_type);
    q = &ipc_ul_queues_s[_IPC_GET_UL_QUEUE_INDEX(IPC_UL_QUEUE_TYPE_META, q_priority)];

    IPC_W_LOCK_OBJECT(q, ipc_spinlock_g);
    if (q) {
        IPC_ASSERT(q->meta_queue_type == q_type);

        /*
         * Since the LHIF API can't use in INIT stage,
         * get meta_queue_size when the first uplink packet arrived.
         */
        if (IPC_UL_QUEUE_META_INVALID_VALUE == q->meta_queue_size) {
            kal_uint32     *base_addr;
            kal_uint16      tbl_size;

            IPC_QUERY_META_TABLE(&base_addr, &tbl_size, q_type);
            q->meta_queue_size = tbl_size;
        }

        if (IPC_UL_QUEUE_META_INVALID_VALUE == q->meta_tail) {
            q->meta_head = start_idx;
            q->meta_tail = end_idx;
        } else {
            IPC_ASSERT(start_idx == q->meta_tail);
            q->meta_tail = end_idx;
        }

        q->cnt = (q->meta_tail >= q->meta_head)? (q->meta_tail - q->meta_head):(q->meta_queue_size - q->meta_head + q->meta_tail);
        IPC_W_UNLOCK_OBJECT(q, ipc_spinlock_g);
    } else {
        IPC_ASSERT(KAL_FALSE);
    }
}

void ipc_did_enqueue_wo_filter_queue(upcm_did *did_head, upcm_did *did_tail, kal_uint32 queue_idx)
{
    ipc_dl_queue_t     *dl_queue = &(ipc_dl_queues_s[queue_idx]);

    ipc_push_did_list_to_did_queue(&(dl_queue->did_queues[IPC_DID_QUEUE_TYPE_WO_FILTER]), did_head, did_tail);
}

void ipc_did_enqueue_mdt_queue(upcm_did *did_head, upcm_did *did_tail, kal_uint32 queue_idx)
{
    ipc_dl_queue_t     *dl_queue = &(ipc_dl_queues_s[queue_idx]);

    ipc_push_did_list_to_did_queue(&(dl_queue->did_queues[IPC_DID_QUEUE_TYPE_MDT]), did_head, did_tail);
}

void ipc_did_enqueue_default_queue(upcm_did *did_head, upcm_did *did_tail, kal_uint32 queue_idx)
{
    ipc_dl_queue_t     *dl_queue = &(ipc_dl_queues_s[queue_idx]);

    ipc_push_did_list_to_did_queue(&(dl_queue->did_queues[IPC_DID_QUEUE_TYPE_DEFAULT]), did_head, did_tail);
}


void ipc_on_did_downlink(kal_uint32 pdn_id, ipc_did_queue_type_e queue_type, upcm_did *did_head, upcm_did *did_tail)
{
    ipc_session_t          *session;
    ipc_netif_t            *netif;
    kal_uint8               session_type;

    HIF_SWLA_START("ID1");

    IPC_ASSERT(did_head && did_tail);

    session = ipc_find_session_by_context(pdn_id);
    if (session) {
        netif = session->netif;
        session_type = session->type;
        IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

        /* Send DL traffic */
        IPC_R_LOCK_OBJECT(netif, ipc_spinlock_g);
        if (netif)
        {
            /* Send DL traffic after DL filtering */
            ipc_on_process_dl_did_list(session_type, netif, pdn_id, queue_type, did_head, did_tail);

            IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
            goto done;
        } else
        {
            kal_uint8   ip_id = 0xff;

            IPC_R_LOCK_OBJECT(session, ipc_spinlock_g);
            if (session)
            {
                ip_id = (kal_uint8)session->ip_id;
                IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
            }
            hif_trace_error(IPC_TR_DL_DID_DROP_FOR_NETIF_INFO_LOCK_FAIL, pdn_id, ip_id, session_type, did_head, did_tail);
            goto drop;
        }
    } else {
        kal_bool       is_skip = KAL_FALSE;
        hif_trace_error(IPC_TR_DL_DID_DROP_FOR_INVALID_SESSION, pdn_id, did_head, did_tail);
        is_skip = ipc_get_need_skip_tcp_rst();
        hif_trace_info(IPC_TR_NEED_RUN_TCP_RST, is_skip);
        if(is_skip == KAL_FALSE)
        {
            /*only skip when no data SIM or DATA-SIM mobile data is off*/
            ipc_downlink_drop_packet_handler(pdn_id, did_head, did_tail);
        }
        goto drop;
    }

drop:
    ipc_on_downlink_ra_proxy(pdn_id, did_head, did_tail);   /*< Store RA for IPv6 here */
    IPC_FREE_DID_W_DATABUF(did_head, did_tail, IPC_SI_HIF_TYPE_MAX);

done:
    HIF_SWLA_STOP("ID1");
    return;
}

void ipc_on_did_downlink_multiple_ps(kal_uint32 pdn_id, upcm_did *did_head, upcm_did *did_tail, kal_uint8 proto_idx)
{
    IPC_MASK_PROTOID_ON_PDNID(pdn_id, proto_idx);
    ipc_did_downlink_enqueue(pdn_id, did_head, did_tail);
}

void ipc_on_did_downlink_test_mode(kal_uint32 pdn_id, upcm_did *did_head, upcm_did *did_tail, kal_uint8 proto_idx)
{
    upcm_did           *did;
    upcm_did           *next_did;
    kal_bool            end_of_list;
    kal_bool            to_send_msg;

    IPC_ASSERT(did_head && did_tail);

    hif_data_trace(IPC_DL_ON_DID_DOWNLINK_TEST_LOOPBACK, pdn_id, did_head, did_tail, ipc_test_loopback_mode_s);

    end_of_list = KAL_FALSE;
    for (did = did_head; did && !end_of_list; did = next_did) {
        next_did = UPCM_DID_GET_NEXT(did);
        end_of_list = (did == did_tail);

        if (IPC_TEST_LOOPBACK_MODE_A == ipc_test_loopback_mode_s) {
            UPCM_DID_SET_SW_CTRL_FIELD(did, ipc_test_loopback_a_netif_id_s);
        } else {
            UPCM_DID_SET_FLOW(did, pdn_id);
            UPCM_DID_SET_SW_CTRL_FIELD(did, ipc_test_loopback_b_netif_id_s);
        }
    }

    /* Enqueue DID to DID queue */
    ipc_did_enqueue_wo_filter_queue(did_head, did_tail, _IPC_GET_DL_QUEUE_INDEX(0, KAL_TRUE));

    /* Send ILM to IPCore for processing DL queue */
    IPC_SPIN_LOCK(ipc_spinlock_g);
    to_send_msg = (!ipc_dl_processing_s);
    ipc_dl_processing_s = KAL_TRUE;
    IPC_SPIN_UNLOCK(ipc_spinlock_g);

    /*
     * Switch to IPCORE context.
     */
    if (to_send_msg) {
        msg_send6(  kal_get_active_module_id(), /* src_mod_id */
                    MOD_IPCORE, /* dest_mod_id */
                    IPCORE_DATAPATH_SAP, /* sap_id */
                    MSG_ID_IPCORE_PROCESS_DL_QUEUE_REQ, /* msg_id */
                    NULL, /* local_para_ptr */
                    NULL); /* peer_buff_ptr */
    }
}

void ipc_did_downlink_enqueue(kal_uint32 pdn_id, upcm_did *did_head, upcm_did *did_tail)
{
    ipc_dl_queue_t         *dl_queue;
    kal_bool                to_send_msg;

    hif_data_trace(IPC_DL_ON_DID_DOWNLINK, pdn_id, did_head, did_tail);

    dl_queue = &ipc_dl_queues_s[_IPC_GET_DL_QUEUE_INDEX(pdn_id, KAL_FALSE)];
    ipc_push_did_list_to_did_queue(&(dl_queue->did_queues[IPC_DID_QUEUE_TYPE_DEFAULT]), did_head, did_tail);

    /* Send ILM to IPCore for processing DL queue */
    IPC_SPIN_LOCK(ipc_spinlock_g);
    to_send_msg = (!ipc_dl_processing_s);
    ipc_dl_processing_s = KAL_TRUE;
    IPC_SPIN_UNLOCK(ipc_spinlock_g);

    if (to_send_msg) {
        msg_send6(  kal_get_active_module_id(), /* src_mod_id */
                    MOD_IPCORE, /* dest_mod_id */
                    IPCORE_DATAPATH_SAP, /* sap_id */
                    MSG_ID_IPCORE_PROCESS_DL_QUEUE_REQ, /* msg_id */
                    NULL, /* local_para_ptr */
                    NULL); /* peer_buff_ptr */
    }
}

void ipc_did_downlink_dequeue()
{
    kal_uint32              pdn_id;
    ipc_did_queue_type_e    queue_type;
    upcm_did               *did_head;
    upcm_did               *did_tail;
    ipc_dl_queue_t         *dl_queue;

    ipc_dl_processing_s = KAL_FALSE;
    for (pdn_id = 0; pdn_id < IPC_MAX_SESSION_CNT; pdn_id++) {
        for (queue_type = 0; queue_type < IPC_DID_QUEUE_TYPE_MAX; queue_type++) {
            dl_queue = &(ipc_dl_queues_s[_IPC_GET_DL_QUEUE_INDEX(pdn_id, KAL_FALSE)]);

            did_head = dl_queue->did_queues[queue_type].did_head;
            did_tail = dl_queue->did_queues[queue_type].did_tail;
            if (did_head) {
                ipc_clear_did_queue(&(dl_queue->did_queues[queue_type]));
                ipc_on_did_downlink(pdn_id, queue_type, did_head, did_tail);
            }
        }
    }

    /*
     * Dequeue the "send_dl" did_queue.
     * Note that only IPC_DID_QUEUE_TYPE_WO_FILTER queue should be used.
     */
    dl_queue = &(ipc_dl_queues_s[_IPC_GET_DL_QUEUE_INDEX(0, KAL_TRUE)]);

    did_head = dl_queue->did_queues[IPC_DID_QUEUE_TYPE_WO_FILTER].did_head;
    did_tail = dl_queue->did_queues[IPC_DID_QUEUE_TYPE_WO_FILTER].did_tail;
    if (did_head) {
        ipc_pkt_t   pkt;
        upcm_did   *did;
        upcm_did   *next_did;
        kal_bool    end_of_list;

        /* Clear Q before processing it */
        ipc_clear_did_queue(&(dl_queue->did_queues[IPC_DID_QUEUE_TYPE_WO_FILTER]));

        end_of_list = KAL_FALSE;
        for (did = did_head; did && !end_of_list; did = next_did) {
            next_did = UPCM_DID_GET_NEXT(did);
            end_of_list = (did == did_tail);

            if ( (end_of_list) ||
                 (UPCM_DID_GET_SW_CTRL_FIELD(did_head) != UPCM_DID_GET_SW_CTRL_FIELD(next_did)) ) {
                pkt.buf_type = IPC_PKT_DES_TYPE_DID;
                pkt.did_head = did_head;
                pkt.did_tail = did;

                ipc_send_dl_pkt_in_did_internal(&pkt, NULL, UPCM_DID_GET_SW_CTRL_FIELD(did_head));

                did_head = next_did;
            }
        }
    }
}

void ipc_proxy_ipv6_ra_pool_push(kal_uint32 pdn_id, qbm_gpd* gpd)
{
    qbm_gpd* old_gpd;

    ASSERT(pdn_id < IPC_PROXY_IPV6_RA_POOL_SIZE);

    old_gpd = ipc_proxy_ipv6_ra_pool[pdn_id];

    if(old_gpd) {
        qbmt_dest_q(old_gpd, old_gpd);
    }

    ipc_proxy_ipv6_ra_pool[pdn_id] = gpd;
}

qbm_gpd* ipc_proxy_ipv6_ra_pool_pop(kal_uint32 pdn_id)
{
    qbm_gpd* gpd;

    ASSERT(pdn_id < IPC_PROXY_IPV6_RA_POOL_SIZE);

    gpd = ipc_proxy_ipv6_ra_pool[pdn_id];
    ipc_proxy_ipv6_ra_pool[pdn_id] = NULL;

    return gpd;
}

void ipc_set_mobile_data_info(kal_uint8 sim_idx, kal_uint8 mobile_data)
{
    g_mobile_data_info[sim_idx].mobile_data = mobile_data;
    hif_trace_info(IPC_TR_SET_MOB_DATA_INFO, sim_idx, mobile_data);
}

void ipc_set_data_allowed_info(kal_uint8 sim_idx, kal_uint8 edallow_val, kal_uint8 para)
{
    /*enable*/
    if (edallow_val == 1) {
        g_data_sim_slot_idx = sim_idx;
    }
    if (edallow_val == 2) {
        kal_uint8 to_simidx = 0;
        if (para > 0) {
            to_simidx = para - 1;
            g_data_sim_slot_idx = to_simidx;
        } else {
            /** no sim slot is preferred for data SIM */
            g_data_sim_slot_idx = 0xFF;
        }
    }
    hif_trace_info(IPC_TR_SET_EDALLOW_DATA_INFO, g_data_sim_slot_idx);
}

kal_bool ipc_get_need_skip_tcp_rst(void) 
{
    kal_uint8 data_enabled = 0;
    if (g_data_sim_slot_idx == 0xFF) {
        /** there is no data SIM , return TRUE to skip tcp rst*/
        return KAL_TRUE;
    }
    data_enabled = g_mobile_data_info[g_data_sim_slot_idx].mobile_data;
    if (data_enabled == 0) {
        /** data SIM mobile data is off, return TRUE to skip tcp rst */
        return KAL_TRUE;
    }
    return KAL_FALSE;
}
