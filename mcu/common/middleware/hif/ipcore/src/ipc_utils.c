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
 *   ipc_utils.c
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   IPCore internal utilities.
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
#include "intrCtrl.h"
#include "mw_sap.h"
#include "ipcore_upcm_struct.h"

#include "upcm_did.h"
#include "qmu_bm.h"
#include "qmu_bm_size.h"
#include "qmu_bm_util.h"

#include "ipc_defs.h"
#include "ipc_debug.h"
#include "ipc_utils.h"
#include "ipc_data.h"
#include "ipc_filter.h"

/*------------------------------------------------------------------------------
 * Global variables.
 *----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Helper macro.
 *----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Private function.
 *----------------------------------------------------------------------------*/
kal_bool
ipc_do_gpd_copy(
    kal_uint8              *dst_buffer,
    kal_uint32              dst_max_len,
    kal_uint32             *dst_len_copied,
    qbm_gpd                *src_head_gpd,
    qbm_gpd                *src_tail_gpd)
{
    qbm_gpd    *curr_gpd;
    qbm_gpd    *curr_bd;
    kal_bool    end_of_gpd_list;
    kal_bool    end_of_bd_list;

    if (NULL == dst_buffer || 0 == dst_max_len || NULL == dst_len_copied ||
            NULL == src_head_gpd || NULL == src_tail_gpd) {
        return KAL_FALSE;
    }

    *dst_len_copied = 0;

    end_of_gpd_list = KAL_FALSE;
    for (   curr_gpd = src_head_gpd;
            curr_gpd && !end_of_gpd_list;
            curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd)) {

        end_of_gpd_list = (curr_gpd == src_tail_gpd);
        if (QBM_DES_GET_BDP(curr_gpd)) {

            end_of_bd_list = KAL_FALSE;
            for (   curr_bd = (qbm_gpd *)QBM_DES_GET_DATAPTR(curr_gpd);
                    curr_bd && !end_of_bd_list;
                    curr_bd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_bd)) {

                end_of_bd_list = QBM_DES_GET_EOL(curr_bd);
                if (QBM_DES_GET_DATALEN(curr_bd) > 0) {
                    if (*dst_len_copied + QBM_DES_GET_DATALEN(curr_bd) <= dst_max_len) {
                        /* Invalid source BD */
                        QBM_CACHE_INVALID(QBM_DES_GET_DATAPTR(curr_bd), QBM_DES_GET_DATALEN(curr_bd));

                        kal_mem_cpy(
                                dst_buffer + *dst_len_copied,
                                QBM_DES_GET_DATAPTR(curr_bd),
                                QBM_DES_GET_DATALEN(curr_bd));
                        *dst_len_copied += QBM_DES_GET_DATALEN(curr_bd);
                    } else {
                        return KAL_FALSE;
                    }
                }
            }
        } else {
            if (QBM_DES_GET_DATALEN(curr_gpd) > 0) {
                if (*dst_len_copied + QBM_DES_GET_DATALEN(curr_gpd) <= dst_max_len) {
                    /* Invalid source GPD */
                    QBM_CACHE_INVALID(QBM_DES_GET_DATAPTR(curr_gpd), QBM_DES_GET_DATALEN(curr_gpd));

                    kal_mem_cpy(
                            dst_buffer + *dst_len_copied,
                            QBM_DES_GET_DATAPTR(curr_gpd),
                            QBM_DES_GET_DATALEN(curr_gpd));
                    *dst_len_copied += QBM_DES_GET_DATALEN(curr_gpd);
                } else {
                    return KAL_FALSE;
                }
            }
        }
    }

    /* Flush destination cache */
    QBM_CACHE_FLUSH(dst_buffer, *dst_len_copied);

    return KAL_TRUE;
}

void ipc_set_gpd_datalen(void* gpd, kal_uint32 datalen, void **payload_ptr)
{
    kal_uint8* data_ptr = NULL;

    IPC_ASSERT(gpd && payload_ptr);

    if (QBM_DES_GET_BDP(gpd)) {
        void* bd;

        /* set bd data ptr */
        bd = QBM_DES_GET_DATAPTR(gpd);

        data_ptr = (kal_uint8*)QBM_DES_GET_DATAPTR(bd);

        /* set bd data len */
        QBM_DES_SET_DATALEN(bd, datalen);

        /* set bd checksum */
        qbm_cal_set_checksum(bd);
    } else
    {
        data_ptr = (kal_uint8*)QBM_DES_GET_DATAPTR(gpd);
    }

    /* set gpd data len */
    QBM_DES_SET_DATALEN(gpd, datalen);

    /* set gpd checksum */
    qbm_cal_set_checksum(gpd);

    *payload_ptr = (void*)(data_ptr);
}

void
ipc_clarify_gpd(
    qbm_gpd *head_gpd,
    qbm_gpd *tail_gpd,
    qbm_gpd **ipv4_head_gpd,
    qbm_gpd **ipv4_tail_gpd,
    qbm_gpd **ipv6_head_gpd,
    qbm_gpd **ipv6_tail_gpd)
{
    kal_bool    end;
    qbm_gpd     *curr_gpd;
    qbm_gpd     *next_gpd;
    qbm_gpd     *curr_bd;
    kal_uint8   *first_buf;

    IPC_ASSERT(ipv4_head_gpd);
    IPC_ASSERT(ipv4_tail_gpd);
    IPC_ASSERT(ipv6_head_gpd);
    IPC_ASSERT(ipv6_tail_gpd);

    *ipv4_head_gpd = *ipv4_tail_gpd = NULL;
    *ipv6_head_gpd = *ipv6_tail_gpd = NULL;

    end = KAL_FALSE;
    for (curr_gpd = head_gpd; curr_gpd && !end; curr_gpd = next_gpd) {
        IPC_ASSERT(QBM_DES_GET_DATAPTR(curr_gpd));

        next_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd);
        end = (curr_gpd == tail_gpd)?KAL_TRUE:KAL_FALSE;

        if (QBM_DES_GET_DATALEN(curr_gpd) == 0)
        {   /* Zero length packet ! Drop this packet ! */
            hif_trace_error(IPC_TR_CLARIFY_ZERO_LENGTH_PKT, curr_gpd, QBM_DES_GET_DATALEN(curr_gpd));
            first_buf = NULL;
        } else
        {
            if (QBM_DES_GET_BDP(curr_gpd))
            {
                curr_bd = (qbm_gpd *)QBM_DES_GET_DATAPTR(curr_gpd);
                /* Loop to trace 1st DL BD with data buffer */
                while (curr_bd && (QBM_DES_GET_DATALEN(curr_bd) == 0))
                {
                    curr_bd = (QBM_DES_GET_EOL(curr_bd))?(NULL):((qbm_gpd*)QBM_DES_GET_NEXT(curr_bd));
                }

                if (curr_bd)
                {
                    first_buf = (kal_uint8 *)QBM_DES_GET_DATAPTR(curr_bd);
                } else
                {
                    hif_trace_error(IPC_TR_CLARIFY_ZERO_LENGTH_BD, curr_gpd, QBM_DES_GET_DATALEN(curr_gpd));
                    first_buf = NULL;
                }
            } else
            {
                first_buf = (kal_uint8 *)QBM_DES_GET_DATAPTR(curr_gpd);
            }
        }

        if (first_buf)
        {
            if (IPC_HDR_IS_V4(first_buf)) {
                if (*ipv4_tail_gpd) {
                    QBM_DES_SET_NEXT((*ipv4_tail_gpd), curr_gpd);
                    *ipv4_tail_gpd = curr_gpd;
                } else {
                    *ipv4_head_gpd = curr_gpd;
                    *ipv4_tail_gpd = curr_gpd;
                }
            } else if (IPC_HDR_IS_V6(first_buf)) {
                if (*ipv6_tail_gpd) {
                    QBM_DES_SET_NEXT((*ipv6_tail_gpd), curr_gpd);
                    *ipv6_tail_gpd = curr_gpd;
                } else {
                    *ipv6_head_gpd = curr_gpd;
                    *ipv6_tail_gpd = curr_gpd;
                }
            } else {
                hif_trace_error(IPC_TR_CLARIFY_NONE_IP_PKT, curr_gpd, QBM_DES_GET_DATALEN(curr_gpd));
                qbmt_dest_q(curr_gpd, curr_gpd);
            }
        } else
        {   /* Always drop curr_gpd for parsing error case */
            hif_trace_info(IPC_TR_CLARIFY_ZERO_LENGTH_PKT_DROP, curr_gpd, QBM_DES_GET_DATALEN(curr_gpd));
            qbmt_dest_q(curr_gpd, curr_gpd);
        }
    }

}

static void ipc_print_invalid_len_pkt_trace(
    ipc_pkt_des_t      *pkt_des)
{
    kal_uint8  *ip_packet = pkt_des->packet;
    kal_uint32  packet_len = pkt_des->packet_len;

    // packet info
    switch (pkt_des->des_type) {
        case IPC_PKT_DES_TYPE_DID:
            hif_data_trace(IPC_DL_INVALID_LEN_CHK_DID, UPCM_DID_GET_FLOW(pkt_des->did), pkt_des->psn, packet_len, ipc_dl_valid_packet_len_s);
            break;
        case IPC_PKT_DES_TYPE_GPD:
        case IPC_PKT_DES_TYPE_SPD:
            hif_data_trace(IPC_DL_INVALID_LEN_CHK, pkt_des->gpd, pkt_des->bd, packet_len, ipc_dl_valid_packet_len_s);
            break;
        default:
            // can't reach here
            IPC_ASSERT(KAL_FALSE);
            break;
    }

    // dump ip header
    hif_data_trace(IPC_DL_INVALID_LEN_PKT_IP_HDR, 0, IPC_NE_GET_4B(ip_packet));
    hif_data_trace(IPC_DL_INVALID_LEN_PKT_IP_HDR, 1, IPC_NE_GET_4B(ip_packet+4));
    hif_data_trace(IPC_DL_INVALID_LEN_PKT_IP_HDR, 2, IPC_NE_GET_4B(ip_packet+8));
    hif_data_trace(IPC_DL_INVALID_LEN_PKT_IP_HDR, 3, IPC_NE_GET_4B(ip_packet+12));
    hif_data_trace(IPC_DL_INVALID_LEN_PKT_IP_HDR, 4, IPC_NE_GET_4B(ip_packet+16));
}

static void ipc_print_matched_pkt_trace(
    kal_bool            uplink,
    ipc_pkt_des_t      *pkt_des,
    kal_uint8           match_result,
    kal_uint8           mdt_rule_id)
{
    switch (pkt_des->des_type) {
        case IPC_PKT_DES_TYPE_META:
            hif_data_trace(IPC_UL_PKT_FILTER_RESULT_META, pkt_des->meta->psn, match_result, mdt_rule_id);
            break;
        case IPC_PKT_DES_TYPE_DID:
            hif_data_trace(IPC_DL_PKT_FILTER_RESULT_DID, UPCM_DID_GET_FLOW(pkt_des->did), pkt_des->psn, match_result, mdt_rule_id);
            break;
        case IPC_PKT_DES_TYPE_GPD:
            hif_data_trace(IPC_PKT_FILTER_RESULT_GPD, uplink, pkt_des->gpd, match_result, mdt_rule_id);
            break;
        case IPC_PKT_DES_TYPE_SPD:
            hif_data_trace(IPC_PKT_FILTER_RESULT_SPD, uplink, match_result, mdt_rule_id);
            break;
        default:
            // can't reach here
            IPC_ASSERT(KAL_FALSE);
            break;
    }
}

void ipc_print_pkt_trace(
    kal_bool            uplink,
    ipc_pkt_des_t      *pkt_des,
    kal_uint8           match_result,
    kal_uint8           mdt_rule_id)
{
    switch (match_result) {
        case IPC_PKT_DO_FILTER_INVALID_LEN:
            ipc_print_invalid_len_pkt_trace(pkt_des);
            break;
        case IPC_PKT_DO_FILTER_MATCHED:
        case IPC_PKT_DO_FILTER_BWM_MATCHED:
        case IPC_PKT_DO_FILTER_MDT_MATCHED:
        case IPC_PKT_DO_FILTER_HANDLE_FRAG:
            ipc_print_matched_pkt_trace(uplink, pkt_des, match_result, mdt_rule_id);
            break;
        default:
            break;
    }
}

ipc_si_hif_type_e ipc_get_hif_type_from_netif_id(kal_uint32 netif_id)
{
    if (IPC_INVALID_NETIF_ID == netif_id) {
        return IPC_SI_HIF_TYPE_IGR;
    }

    switch (netif_id & 0xFFFFFF00) {
        case IPC_NETIF_ID_LHIF_BEGIN:
            return IPC_SI_HIF_TYPE_LHIF;
        case IPC_NETIF_ID_ETH_BEGIN:
            return IPC_SI_HIF_TYPE_USB;
        default:
            /*can't reach here*/
            IPC_ASSERT(KAL_FALSE);
            return IPC_SI_HIF_TYPE_IGR;
    }
}

void ipc_pkt_set_si_hif_type(
    upcm_did           *did,
    ipc_si_hif_type_e   hif_type,
    kal_uint32         *p_curr_si_idx)
{
    upcm_did_si                *sit;
    kal_uint32                  pkt_start_idx;
    kal_bool                    end_of_seg_list;

    IPC_ASSERT( (did) && (p_curr_si_idx) );

    sit = UPCM_DID_GET_SIT_PTR(did);
    pkt_start_idx = *p_curr_si_idx;

    IPC_ASSERT( pkt_start_idx < UPCM_DID_MAX_SIT_ENT_NUM );

    if (IPC_SI_HIF_TYPE_IGR == hif_type) {
        ipc_packet_dump_did_one_packet(did, &pkt_start_idx);
        pkt_start_idx = *p_curr_si_idx;
    }

    end_of_seg_list = KAL_FALSE;
    for ( *p_curr_si_idx = pkt_start_idx;
          *p_curr_si_idx < UPCM_DID_MAX_SIT_ENT_NUM && !end_of_seg_list;
          (*p_curr_si_idx) ++) {
        upcm_did_si *curr_si = &sit[*p_curr_si_idx];

        end_of_seg_list = UPCM_DID_SI_GET_EOL(curr_si);
        UPCM_DID_SI_SET_HIF_TYPE(curr_si, hif_type);
        if (IPC_SI_HIF_TYPE_IGR == hif_type) {
            upcm_did_si_free_data_buf(curr_si);
            /* We have to clear sit length if hif_type is IGNORE.               */
            /* Then, we can use this condition to skip these sit entries if the */
            /* sit is already processed last time and HIF refuse to send.       */
            UPCM_DID_SI_SET_LEN(curr_si, 0);
        }
    }
}

kal_bool ipc_copy_gpd_to_did(
    qbm_gpd            *src_head_gpd,
    qbm_gpd            *src_tail_gpd,
    upcm_did           *did,
    ipc_si_hif_type_e   hif_type)
{
    qbm_gpd        *curr_gpd;
    qbm_gpd        *curr_bd;
    kal_bool        end_of_gpd_list;
    kal_bool        end_of_bd_list;
    upcm_did_si    *sit;
    upcm_did_si    *curr_si;
    kal_uint32      curr_si_idx;
    kal_uint8      *dst_buffer;
    kal_uint8       packet_cnt = 0;
    kal_uint32      dst_len_copied;
    kal_uint32      dst_max_len;

    IPC_ASSERT(src_head_gpd && src_tail_gpd && did);

    sit = UPCM_DID_GET_SIT_PTR(did);
    curr_si_idx = 0;

    end_of_gpd_list = KAL_FALSE;
    for (   curr_gpd = src_head_gpd;
            curr_gpd && !end_of_gpd_list;
            curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd), curr_si_idx++) {

        IPC_ASSERT(curr_si_idx < UPCM_DID_MAX_SIT_ENT_NUM);
        curr_si = &sit[curr_si_idx];

        dst_max_len = QBM_DES_GET_DATALEN(curr_gpd);
        if (0 == dst_max_len) {
            hif_trace_error(IPC_TR_COPY_GPD_TO_DID_ZERO_LENGTH_GPD, curr_gpd);
            continue;
        }
        dst_buffer = IPC_ALLOCATE_PRBM(dst_max_len, IPC_PRB_DL_ID);
        dst_len_copied = 0;
        if (!dst_buffer) {
            hif_trace_error(IPC_TR_COPY_GPD_TO_DID_ZERO_ALLOC_PRB_NG, curr_gpd, src_tail_gpd);
            goto done;
        }

        end_of_gpd_list = (curr_gpd == src_tail_gpd);
        if (QBM_DES_GET_BDP(curr_gpd)) {

            end_of_bd_list = KAL_FALSE;
            for (   curr_bd = (qbm_gpd *)QBM_DES_GET_DATAPTR(curr_gpd);
                    curr_bd && !end_of_bd_list;
                    curr_bd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_bd)) {

                end_of_bd_list = QBM_DES_GET_EOL(curr_bd);
                if (QBM_DES_GET_DATALEN(curr_bd) > 0) {
                    if (dst_len_copied + QBM_DES_GET_DATALEN(curr_bd) <= dst_max_len) {
                        /* Invalid source BD */
                        QBM_CACHE_INVALID(QBM_DES_GET_DATAPTR(curr_bd), QBM_DES_GET_DATALEN(curr_bd));

                        kal_mem_cpy(
                                dst_buffer + dst_len_copied,
                                QBM_DES_GET_DATAPTR(curr_bd),
                                QBM_DES_GET_DATALEN(curr_bd));
                        dst_len_copied += QBM_DES_GET_DATALEN(curr_bd);
                    } else {
                        hif_trace_error(IPC_TR_COPY_GPD_TO_DID_GPD_LENGTH_NG, curr_gpd);
                        IPC_FREE_PRBM(dst_buffer, dst_max_len, IPC_PRB_DL_ID);
                        continue;
                    }
                }
            }
        } else {
            if (QBM_DES_GET_DATALEN(curr_gpd) > 0) {
                if (dst_len_copied + QBM_DES_GET_DATALEN(curr_gpd) <= dst_max_len) {
                    /* Invalid source GPD */
                    QBM_CACHE_INVALID(QBM_DES_GET_DATAPTR(curr_gpd), QBM_DES_GET_DATALEN(curr_gpd));

                    kal_mem_cpy(
                            dst_buffer + dst_len_copied,
                            QBM_DES_GET_DATAPTR(curr_gpd),
                            QBM_DES_GET_DATALEN(curr_gpd));
                    dst_len_copied += QBM_DES_GET_DATALEN(curr_gpd);
                } else {
                    hif_trace_error(IPC_TR_COPY_GPD_TO_DID_GPD_LENGTH_NG, curr_gpd);
                    IPC_FREE_PRBM(dst_buffer, dst_max_len, IPC_PRB_DL_ID);
                    continue;
                }
            }
        }

        /* Flush destination cache */
        QBM_CACHE_FLUSH(dst_buffer, dst_len_copied);

        kal_mem_set(curr_si, 0, sizeof(upcm_did_si));
        UPCM_DID_SI_SET_EOL(curr_si);
        UPCM_DID_SI_SET_F(curr_si);
        UPCM_DID_SI_SET_LEN(curr_si, dst_max_len);
        UPCM_DID_SI_SET_DATAPTR(curr_si, dst_buffer);
        UPCM_DID_SI_SET_HIF_TYPE(curr_si, hif_type);

        packet_cnt ++;
    }

done:
    if (packet_cnt) {
        UPCM_DID_SET_PKT_NUM(did, packet_cnt);
        UPCM_DID_SET_SEG_NUM(did, packet_cnt);

        return KAL_TRUE;
    } else {
        return KAL_FALSE;
    }
}

void ipc_pkt_free_si_data_buf(
    upcm_did           *did,
    kal_uint32         *p_curr_si_idx)
{
    upcm_did_si                *sit;
    kal_uint32                  pkt_start_idx;
    kal_bool                    end_of_seg_list;

    IPC_ASSERT( (did) && (p_curr_si_idx) );

    sit = UPCM_DID_GET_SIT_PTR(did);
    pkt_start_idx = *p_curr_si_idx;

    IPC_ASSERT( pkt_start_idx < UPCM_DID_MAX_SIT_ENT_NUM );

    ipc_packet_dump_did_one_packet(did, &pkt_start_idx);
    pkt_start_idx = *p_curr_si_idx;

    end_of_seg_list = KAL_FALSE;
    for ( *p_curr_si_idx = pkt_start_idx;
          *p_curr_si_idx < UPCM_DID_MAX_SIT_ENT_NUM && !end_of_seg_list;
          (*p_curr_si_idx) ++) {
        upcm_did_si *curr_si = &sit[*p_curr_si_idx];

        end_of_seg_list = UPCM_DID_SI_GET_EOL(curr_si);
        UPCM_DID_SI_SET_HIF_TYPE(curr_si, IPC_SI_HIF_TYPE_IGR);
        upcm_did_si_free_data_buf(curr_si);
    }
}

void ipc_fill_did_si_from_meta(upcm_did *dst_did, kal_uint32 *p_si_idx, lhif_meta_tbl_t *src_meta, ipc_si_hif_type_e hif_type)
{
    upcm_did_si    *sit;
    upcm_did_si    *si;
    kal_uint8       base_psn, psn;
    kal_uint32      num_igr_si;
    kal_uint32      i;

    IPC_ASSERT(dst_did && src_meta && p_si_idx);
    IPC_ASSERT(*p_si_idx < UPCM_DID_MAX_SIT_ENT_NUM);

    base_psn = UPCM_DID_GET_COUNT_L(dst_did);
    psn = src_meta->psn;

    num_igr_si = psn - (base_psn + *p_si_idx);
    IPC_ASSERT((*p_si_idx + num_igr_si) < UPCM_DID_MAX_SIT_ENT_NUM);

    /* Fill IGR packet to SIs for PSN correction */
    sit = UPCM_DID_GET_SIT_PTR(dst_did);
    for (i = 0; i < num_igr_si; i++) {
        si = &(sit[*p_si_idx + i]);
        UPCM_DID_SI_SET_EOL(si);
        UPCM_DID_SI_CLR_F(si);
        UPCM_DID_SI_SET_HIF_TYPE(si, IPC_SI_HIF_TYPE_IGR);
    }

    /* Fill the packet to the right position based on its PSN */
    *p_si_idx += num_igr_si;
    si = &(sit[*p_si_idx]);
    UPCM_DID_SI_SET_EOL(si);
    UPCM_DID_SI_SET_F(si);
    UPCM_DID_SI_SET_LEN(si, src_meta->length);
    UPCM_DID_SI_SET_DATAPTR(si, src_meta->vrb_addr);
    UPCM_DID_SI_SET_HIF_TYPE(si, hif_type);

    UPCM_DID_SET_PKT_NUM(dst_did, UPCM_DID_GET_PKT_NUM(dst_did) + 1);
    UPCM_DID_SET_SEG_NUM(dst_did, UPCM_DID_GET_SEG_NUM(dst_did) + 1);
    (*p_si_idx) ++;
}

void ipc_dest_meta_list(kal_uint32 start_idx, kal_uint32 end_idx, LHIF_QUEUE_TYPE queue_type)
{
    kal_uint32              read_idx = start_idx;
    lhif_meta_tbl_t        *meta_tbl;
    lhif_meta_tbl_t        *meta;
    kal_uint16              tbl_size;

    IPC_QUERY_META_TABLE((kal_uint32 **)&meta_tbl, &tbl_size, queue_type);
    do {
        meta = &meta_tbl[read_idx];
        if (!meta->ignore) {
            meta->ignore = 1;
            IPC_FREE_META_VRB(meta);
        }
        read_idx ++;
        if (read_idx == tbl_size) {
            read_idx = 0;
        }
    } while (read_idx != end_idx);
}

static INLINE void ipc_pdump_get_length(kal_uint8* buf_p, kal_uint32 buffer_len, kal_uint32* pkt_length)
{
    if(buffer_len >= 6)
    {
        /* check ip version and get ip packet length from header*/
        QBM_CACHE_INVALID((kal_uint8*)(buf_p), 6);      //including ipv6 payload length

        if (IPC_HDR_IS_V4(buf_p))
        {
            *pkt_length = IPC_HDR_V4_GET_TOTAL_LENGTH(buf_p);
        }
        else if (IPC_HDR_IS_V6(buf_p))
        {
            *pkt_length = IPC_HDR_V6_GET_LENGTH(buf_p) + IPC_HDR_V6_HEADER_SIZE;
        }
        else
        {
            *pkt_length = 0;
        }
    }
    else
    {
        *pkt_length = 0;
    }
}

void ipc_packet_dump_continues_buff(msg_type msg_id, module_type src_mod, kal_uint8* buf_p, kal_uint32 pkt_len)
{
    ilm_struct ilm;
    kal_uint8 *dump_info_p;
    peer_buff_struct* peer_ptr = NULL;
    kal_uint16 peer_buf_len;

    /* fill ilm paramter */
    ilm.src_mod_id = src_mod;
    ilm.dest_mod_id = MOD_DHL;
    ilm.sap_id = IPCORE_USER_SENSITIVE_SAP;
    ilm.msg_id = msg_id;

    if (pkt_len == 0) {
        return;
    }

    if (pkt_len > IPC_PKT_DUMP_DEFAULT_SIZE) {
        pkt_len = IPC_PKT_DUMP_DEFAULT_SIZE;
    }

    /* allocate peer buffer and reset to 0 */
    peer_ptr = construct_peer_buff(sizeof(kal_uint8) * pkt_len,
                                   0,
                                   0,
                                   TD_RESET);
    dump_info_p = (kal_uint8*) get_peer_buff_pdu(peer_ptr, &peer_buf_len);

    /* copy packet content */
    QBM_CACHE_INVALID((kal_uint8*)(buf_p), pkt_len);
    kal_mem_cpy(dump_info_p, buf_p, peer_buf_len);

    ilm.local_para_ptr = NULL;
    ilm.peer_buff_ptr = peer_ptr;

    /* send to DHL */
    dhl_log_primitive(&ilm);

    destroy_ilm(&ilm);
}

void ipc_packet_dump_continues_buff_gpd_list(qbm_gpd *first_gpd, qbm_gpd *last_gpd, kal_bool uplink)
{
    qbm_gpd    *curr_gpd;
    qbm_gpd    *next_gpd;
    qbm_gpd    *bd;
    kal_uint8  *p_packet;
    kal_uint32  packet_len;
    kal_bool    end_of_gpd_list;

    IPC_ASSERT(first_gpd && last_gpd);

    end_of_gpd_list = KAL_FALSE;
    for (curr_gpd = first_gpd; curr_gpd && !end_of_gpd_list; curr_gpd = next_gpd) {
        next_gpd = QBM_DES_GET_NEXT(curr_gpd);
        end_of_gpd_list = (curr_gpd == last_gpd);

        packet_len = QBM_DES_GET_DATALEN(curr_gpd);
        bd = QBM_DES_GET_DATAPTR(curr_gpd);
        if ( (0 != packet_len) && (packet_len == QBM_DES_GET_DATALEN(bd)) ) {
            p_packet = QBM_DES_GET_DATAPTR(bd);
            if (uplink) {
                IPC_UL_PKT_DUMP(p_packet, packet_len);
            } else {
                IPC_DL_PKT_DUMP(p_packet, packet_len);
            }
        }
    }
}

void ipc_packet_dump_w_peerbuf(msg_type msg_id, module_type src_mod, peer_buff_struct* peer_buf_p)
{
    ilm_struct ilm;

    /* fill ilm paramter */
    ilm.src_mod_id = src_mod;
    ilm.dest_mod_id = MOD_DHL;
    ilm.sap_id = IPCORE_USER_SENSITIVE_SAP;
    ilm.msg_id = msg_id;

    ilm.local_para_ptr = NULL;
    ilm.peer_buff_ptr = peer_buf_p;

    /* send to DHL */
    dhl_log_primitive(&ilm);

    destroy_ilm(&ilm);
}

void ipc_packet_dump_did_one_packet(upcm_did *did, kal_uint32 *p_curr_si_idx)
{
    upcm_did_si                *sit;
    upcm_did_si                *curr_si;
    kal_uint32                  pkt_start_idx;
    kal_bool                    end_of_seg_list;
    kal_uint32                  packet_len;
    kal_uint32                  pkt_offset = 0;
    kal_uint32                  si_len;
    kal_uint8                  *buf_p;
    kal_uint8                  *dump_info_p = NULL;
    peer_buff_struct           *peer_ptr = NULL;
    kal_uint16                  peer_buf_len;


    IPC_ASSERT( (did) && (p_curr_si_idx) );

    sit = UPCM_DID_GET_SIT_PTR(did);
    curr_si = &sit[*p_curr_si_idx];
    buf_p = (kal_uint8*)UPCM_DID_SI_GET_DATAPTR(curr_si) + UPCM_DID_SI_GET_OFFSET(curr_si);
    si_len = UPCM_DID_SI_GET_LEN(curr_si);
    pkt_start_idx = *p_curr_si_idx;

    IPC_ASSERT( pkt_start_idx < UPCM_DID_MAX_SIT_ENT_NUM );

    ipc_pdump_get_length(buf_p, si_len, &packet_len);
    if(packet_len == 0 || packet_len > IPC_PKT_DUMP_DEFAULT_SIZE) {
        /* Invalid packet length, use default size instead */
        packet_len = IPC_PKT_DUMP_DEFAULT_SIZE;
    }
    peer_ptr = construct_peer_buff(sizeof(kal_uint8) * packet_len,
                                   0,
                                   0,
                                   TD_RESET);
    dump_info_p = (kal_uint8*) get_peer_buff_pdu(peer_ptr, &peer_buf_len);
    pkt_offset = 0;

    end_of_seg_list = KAL_FALSE;
    while (*p_curr_si_idx < UPCM_DID_MAX_SIT_ENT_NUM) {
        curr_si = &sit[*p_curr_si_idx];
        buf_p = (kal_uint8*)UPCM_DID_SI_GET_DATAPTR(curr_si) + UPCM_DID_SI_GET_OFFSET(curr_si);
        si_len = UPCM_DID_SI_GET_LEN(curr_si);
        end_of_seg_list = UPCM_DID_SI_GET_EOL(curr_si);

        /* copy packet content */
        if (si_len <= peer_buf_len) {
            QBM_CACHE_INVALID((kal_uint8*)(buf_p), si_len);
            kal_mem_cpy(dump_info_p + pkt_offset, buf_p, si_len);
            pkt_offset += si_len;
            peer_buf_len -= si_len;
        }

        if (!end_of_seg_list) {
            (*p_curr_si_idx) ++;
        } else {
            break;
        }
    }

    /* send to DHL */
    ipc_packet_dump_w_peerbuf(MSG_IPC_DL_RAW_DATA, MOD_IPCORE, peer_ptr);
}

void ipc_packet_dump_did(upcm_did* did_head, upcm_did* did_tail, ipc_si_hif_type_e hif_type)
{
    upcm_did    *did;
    upcm_did    *next_did;
    kal_bool    end_of_list;
    kal_uint32  seg_num;
    kal_uint32  cur_si_idx;
    upcm_did_si *did_si;
    kal_bool    free_all;

    /* chek if DID input is NULL */
    ASSERT(did_head && did_tail);

    free_all = (IPC_SI_HIF_TYPE_MAX == hif_type);

    end_of_list = KAL_FALSE;
    for(did = did_head; did && !end_of_list; did = next_did)
    {
        next_did = UPCM_DID_GET_NEXT(did);
        end_of_list = (did == did_tail)?KAL_TRUE:KAL_FALSE;

        seg_num = UPCM_DID_GET_SEG_NUM(did);

        for(cur_si_idx = 0 ; cur_si_idx < seg_num; cur_si_idx++ )
        {
            did_si = &did->sit[cur_si_idx];

            /* skip si if hif_type is not equal to specified value*/
            if ( (hif_type != UPCM_DID_SI_GET_HIF_TYPE(did_si)) && !free_all ) continue;

            ipc_packet_dump_did_one_packet(did, &cur_si_idx);
        }
    }
}

