/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2017
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
 *   ipc_mdt.c
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   MD Direct Tethering API of IPCore
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

#include "ipc_mdt.h"
#include "ipc_data.h"
#include "ipc_utils.h"
#include "ipc_object.h"

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)

/*------------------------------------------------------------------------------
 * Helper macro.
 *----------------------------------------------------------------------------*/
#define ipc_mdt_fill_pdn_id_into_meta(_ip_type, _mirror_des, _netif_id, _meta) ipc_fill_session_info_into_meta(_ip_type, _mirror_des->pdn_ids[IPC_IP_TYPE_IPV4], _mirror_des->pdn_ids[IPC_IP_TYPE_IPV6], _netif_id, _meta)

/*------------------------------------------------------------------------------
 * Global variables.
 *----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Private data structure.
 *----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Private functions.
 *----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Public functions.
 *----------------------------------------------------------------------------*/

void ipc_mdt_lan_on_did_downlink(ipc_mdt_lan_des_t *lan_des_array)
{
    kal_uint32      i;

    for (i = 0; i < IPC_MDT_MAX_DEVICE_NUM; i++) {
        ipc_mdt_lan_des_t  *lan_des = &lan_des_array[i];
        ipc_pkt_t           pkt;

        if (lan_des->is_did) {
            IPC_ASSERT(lan_des->dst_netif_id != IPC_INVALID_NETIF_ID);

            pkt.buf_type = IPC_PKT_DES_TYPE_DID;
            pkt.did_head = lan_des->did;
            pkt.did_tail = lan_des->did;

            ipc_send_dl_pkt_in_did_internal(&pkt, NULL, lan_des->dst_netif_id);
        }
    }
}

/*
 * Assumption: netif read lock is acquired.
 */
kal_bool ipc_mdt_fill_did_si_from_meta(ipc_mdt_lan_des_t *lan_des_array, lhif_meta_tbl_t *src_meta, kal_uint32 src_netif_id, ipc_netif_t *src_netif)
{
    kal_uint32      i;

    for (i = 0; i < IPC_MDT_MAX_DEVICE_NUM; i++) {
        ipc_mdt_lan_des_t  *lan_des = &lan_des_array[i];

        if (src_netif_id == lan_des->src_netif_id) {
            if (lan_des->is_did) {
                ipc_fill_did_si_from_meta(lan_des->did, &(lan_des->curr_si_idx), src_meta, lan_des->hif_type);
                return KAL_TRUE;
            } else {
                return KAL_FALSE;
            }
        } else if (IPC_INVALID_NETIF_ID == lan_des->src_netif_id) {
            /* The first lan-routed packet in the META list */
            ipc_netif_t    *netif;

            netif = src_netif->lan_netif;
            IPC_R_LOCK_OBJECT(netif, ipc_spinlock_g);
            if (netif) {
                lan_des->did = upcm_did_alloc_one();
                if (lan_des->did) {
                    /* Init lan_des */
                    lan_des->is_did = KAL_TRUE;
                    lan_des->dst_netif_id = netif->config.netif_id;
                    lan_des->src_netif_id = src_netif_id;
                    lan_des->hif_type = ipc_get_hif_type_from_netif_id(lan_des->dst_netif_id);

                    /* Init DID: Set FLOW and COUNT-L */
                    UPCM_DID_SET_FLOW(lan_des->did, 0);
                    UPCM_DID_SET_COUNT_L(lan_des->did, src_meta->psn);
                    ipc_fill_did_si_from_meta(lan_des->did, &(lan_des->curr_si_idx), src_meta, lan_des->hif_type);

                    IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
                    return KAL_TRUE;
                } else {
                    /* Fail to allocate DID */
                    lan_des->is_did = KAL_FALSE;
                    lan_des->src_netif_id = src_netif_id;

                    IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
                    return KAL_FALSE;
                }
            } else {
                /* Fail to get netif read lock */
                lan_des->is_did = KAL_FALSE;
                lan_des->src_netif_id = src_netif_id;
                return KAL_FALSE;
            }
        }
    }
}

kal_bool ipc_mdt_set_pdn_id_in_meta(ipc_mdt_mirror_des_t *mirror_des_array, lhif_meta_tbl_t *meta, kal_uint32 netif_id, kal_uint8 ip_type)
{
    kal_uint32      i;

    for (i = 0; i < IPC_MDT_MAX_DEVICE_NUM; i++) {
        ipc_mdt_mirror_des_t   *mirror_des = &mirror_des_array[i];

        if (netif_id == mirror_des->netif_id) {
            if (IPC_INVALID_PDN_ID != mirror_des->pdn_ids[ipc_session_type_hash(ip_type)]) {
                ipc_mdt_fill_pdn_id_into_meta(ip_type, mirror_des, netif_id, meta);
                return KAL_TRUE;
            } else {
                return KAL_FALSE;
            }
        } else if (IPC_INVALID_NETIF_ID == mirror_des->netif_id) {
            /* The first MDT_MATCHED packet in the META list */
            ipc_netif_t    *netif;

            netif = ipc_find_netif(netif_id);
            if (netif) {
                /* Init mirror_des */
                mirror_des->netif_id = netif_id;
                mirror_des->pdn_ids[ipc_session_type_hash(IPC_IP_TYPE_IPV4)] = ipc_map_netif_to_pdn_id(netif, IPC_IP_TYPE_IPV4);
                mirror_des->pdn_ids[ipc_session_type_hash(IPC_IP_TYPE_IPV6)] = ipc_map_netif_to_pdn_id(netif, IPC_IP_TYPE_IPV6);

                ipc_mdt_fill_pdn_id_into_meta(ip_type, mirror_des, netif_id, meta);
                IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
                return KAL_TRUE;
            } else {
                /* Fail to get netif read lock */
                mirror_des->netif_id = netif_id;
                return KAL_FALSE;
            }
        }
    }
}

kal_bool ipc_mdt_set_pkt_in_did_mirror_des(ipc_mdt_mirror_des_t *mirror_des_array, upcm_did *did, kal_uint32 *p_curr_si_idx, kal_uint32 netif_id)
{
    kal_uint32      i;
    kal_uint32      pkt_start_idx = *p_curr_si_idx;

    for (i = 0; i < IPC_MDT_MAX_DEVICE_NUM; i++) {
        ipc_mdt_mirror_des_t   *mirror_des = &mirror_des_array[i];

        if (netif_id == mirror_des->netif_id) {
            if (mirror_des->mirror_did) {
                ipc_pkt_set_si_hif_type(did, mirror_des->hif_type, p_curr_si_idx);
                mirror_des->seg_num += *p_curr_si_idx - pkt_start_idx;
                mirror_des->pkt_num ++;
                return KAL_TRUE;
            } else {
                return KAL_FALSE;
            }
        } else if (IPC_INVALID_NETIF_ID == mirror_des->netif_id) {
            /* The first MDT_MATCHED packet in the DID */
            mirror_des->mirror_did = upcm_did_alloc_one();
            if (mirror_des->mirror_did) {
                /* Init mirror_des */
                mirror_des->netif_id = netif_id;
                mirror_des->hif_type = ipc_get_hif_type_from_netif_id(netif_id);

                ipc_pkt_set_si_hif_type(did, mirror_des->hif_type, p_curr_si_idx);
                mirror_des->seg_num += *p_curr_si_idx - pkt_start_idx;
                mirror_des->pkt_num ++;
                return KAL_TRUE;
            } else {
                /* Fail to allocate DID for direct path */
                mirror_des->netif_id = netif_id;
                return KAL_FALSE;
            }
        }
    }

    /* More than IPC_MDT_MAX_DEVICE_NUM direct path device. */
    IPC_ASSERT(KAL_FALSE);
    return KAL_FALSE;
}

void ipc_mdt_mirror_did(ipc_mdt_mirror_des_t *mirror_des, upcm_did *src_did)
{
    kal_mem_cpy(mirror_des->mirror_did, src_did, sizeof(upcm_did));

    UPCM_DID_SET_PKT_NUM(mirror_des->mirror_did, mirror_des->pkt_num);
    UPCM_DID_SET_SEG_NUM(mirror_des->mirror_did, mirror_des->seg_num);
}

void ipc_mdt_push_did_to_mdt_queue(upcm_did *did, kal_uint32 pdn_id)
{
    kal_bool to_send_msg;

    ipc_did_enqueue_mdt_queue(did, did, pdn_id);

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

#endif
