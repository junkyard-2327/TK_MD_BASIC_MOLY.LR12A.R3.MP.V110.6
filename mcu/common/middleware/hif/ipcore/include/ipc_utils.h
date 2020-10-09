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
 *   ipc_utils.h
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#ifndef __INC_IPC_UTILS_H
#define __INC_IPC_UTILS_H

#include "kal_public_api.h"
#if defined (__HIF_CCCI_SUPPORT__)
#include "ccci_if.h"
#endif

#include "ipc_api.h"
#include "ipc_object.h"

#include "tst_msgid.h"

/*------------------------------------------------------------------------------
 * Data structure defintion.
 *----------------------------------------------------------------------------*/
#define IPC_PKT_DUMP_DEFAULT_SIZE (3000)
#define MSG_IPC_DL_RAW_DATA (MSG_ID_DHL_UPCM_IMS_DL_RAW_DATA)
#define MSG_IPC_UL_RAW_DATA (MSG_ID_DHL_UPCM_IMS_UL_RAW_DATA)

#define IPC_DL_PKT_DUMP(buf_p, len) \
    ipc_packet_dump_continues_buff(MSG_IPC_DL_RAW_DATA, MOD_IPCORE, buf_p, len)

#define IPC_UL_PKT_DUMP(buf_p, len) \
    ipc_packet_dump_continues_buff(MSG_IPC_UL_RAW_DATA, MOD_IPCORE, buf_p, len)

/*------------------------------------------------------------------------------
 * Function prototype.
 *----------------------------------------------------------------------------*/
/*!
 * Internal API to set GPD data length.
 *
 * @param   gpd [IN] GPD to set data length.
 * @param   datalen [IN] data length to set.
 * @param   payload_ptr [OUT] Pointer of payload to return.
 *
 * @return  KAL_TRUE if succeeded, KAL_FALSE otherwise.
 */
void ipc_set_gpd_datalen(void* gpd, kal_uint32 datalen, void **payload_ptr);

/*!
 * Internal API to copy buffers in the GPD list to the buffer prepared by caller.
 *
 * @param   dst_buffer [OUT] Destination buffer to copy to, which is prepared by caller.
 * @param   dst_max_len [IN] Size of the destination buffer prepared by caller in bytes.
 * @param   dst_len_copied [OUT] Number of bytes copied to the destination buffer.
 * @param   src_head_gpd [IN] Head of the GPD list with source buffers to copy from.
 * @param   src_tail_gpd [IN] Tail of the GPD list with source buffers to copy from.
 *
 * @return  KAL_TRUE if succeeded, KAL_FALSE otherwise.
 */
kal_bool ipc_do_gpd_copy(kal_uint8 *dst_buffer, kal_uint32 dst_max_len, kal_uint32 *dst_len_copied, qbm_gpd *src_head_gpd, qbm_gpd *src_tail_gpd);

/*!
 * Internal API to classify IPv4v6 GPD list into seperate IPv4 & IPv6 GPD lists.
 *
 * @param   head_gpd [IN] Head of the source IPv4v6 GPD list.
 * @param   tail_gpd [IN] Tail of the source IPv4v6 GPD list.
 * @param   ipv4_head_gpd [OUT] Head of the classified IPv4 GPD list.
 * @param   ipv4_tail_gpd [OUT] Tail of the classified IPv4 GPD list.
 * @param   ipv6_head_gpd [OUT] Head of the classified IPv6 GPD list.
 * @param   ipv6_tail_gpd [OUT] Tail of the classified IPv6 GPD list.
 */
void ipc_clarify_gpd(qbm_gpd *head_gpd, qbm_gpd *tail_gpd, qbm_gpd **ipv4_head_gpd, qbm_gpd **ipv4_tail_gpd, qbm_gpd **ipv6_head_gpd, qbm_gpd **ipv6_tail_gpd);

/*!
 * Print packet info for identifying the certain packet.
 *
 * @param   uplink [IN] The packet is uplink or downlink.
 * @param   pkt_des [IN] Descriptor of the packet.
 * @param   match_result [IN] The IPCore filtering result of this packet.
 * @param   mdt_rule_id [IN] The matched MDT rule id. Only valid when match_result == 3 (IPC_PKT_DO_FILTER_MDT_MATCHED)
 */
void ipc_print_pkt_trace(kal_bool uplink, ipc_pkt_des_t *pkt_des, kal_bool match_result, kal_uint8 mdt_rule_id);

/*!
 * Internal API to get hif type of the netif from the netif_id
 *
 * @param   netif_id [IN] The id of the netif.
 *
 * @return  the hif type of the netif.
 */
ipc_si_hif_type_e ipc_get_hif_type_from_netif_id(kal_uint32 netif_id);

/*!
 * Internal API to set hif type of all SI entries of the packet.
 *
 * @param   did [IN] The DID contained the packet.
 * @param   hif_type [IN] The hif type to set.
 * @param   p_curr_si_idx [IN|OUT] The current SI idx.
 */
void ipc_pkt_set_si_hif_type(upcm_did *did, ipc_si_hif_type_e hif_type, kal_uint32 *p_curr_si_idx);

/*!
 * Internal API to copy GPD list to DID.
 *
 * @param   src_head_gpd [IN] The head of the source GPD list.
 * @param   src_tail_gpd [IN] The tail of the source GPD list.
 * @param   did [IN] The destination DID.
 * @param   hif_type [IN] The hif type to set.
 */
kal_bool ipc_copy_gpd_to_did(qbm_gpd *src_head_gpd, qbm_gpd *src_tail_gpd, upcm_did *did, ipc_si_hif_type_e hif_type);

/*!
 * Internal API to set hif type of all SI entries of the packet as IGR and free the data buffer.
 *
 * @param   did [IN] The DID contained the packet.
 * @param   p_curr_si_idx [IN|OUT] The current SI idx.
 */
void ipc_pkt_free_si_data_buf(upcm_did *did, kal_uint32 *p_curr_si_idx);

/*!
 * Internal API to fill DID/SI descriptor based on the META descriptor.
 *
 * @param   dst_did [IN] The destination DID.
 * @param   p_si_idx [IN|OUT] The pointer of the current SI index.
 * @param   src_meta [IN] The source META.
 * @param   hif_type [IN] The hif type of the destination netif.
 */
void ipc_fill_did_si_from_meta(upcm_did *dst_did, kal_uint32 *p_si_idx, lhif_meta_tbl_t *src_meta, ipc_si_hif_type_e hif_type);

/*!
 * Internal API to free the VRB of a list of META.
 *
 * @param   start_idx [IN] The start index of the META list.
 * @param   end_idx [IN] The end index of the META list.
 * @param   queue_type [IN] The queue type the queue of the META list.
 */
void ipc_dest_meta_list(kal_uint32 start_idx, kal_uint32 end_idx, LHIF_QUEUE_TYPE queue_type);

/*!
 * Internal API to dump raw packet content with continuous buffer.
 *
 * @param   msg_id [IN] DHL message ID.
 * @param   src_mod [IN] Module ID of message source.
 * @param   buf_p [IN] The buffer address of packet.
 * @param   pkt_len [IN] The length of packet to be dumped.
 */
void ipc_packet_dump_continues_buff(msg_type msg_id, module_type src_mod, kal_uint8* buf_p, kal_uint32 pkt_len);

/*!
 * Internal API to dump all raw packets' content within a GPD list.
 * Note that it can only support GPD type with continuous buffer.
 *
 * @param   first_gpd [IN] The head of the GPD list.
 * @param   last_gpd [IN] The tail of the GPD list.
 * @param   uplink [IN] The packets are uplink or downlink.
 */
void ipc_packet_dump_continues_buff_gpd_list(qbm_gpd *first_gpd, qbm_gpd *last_gpd, kal_bool uplink);

/*!
 * Internal API to dump raw packet content without allocating local parameter.
 * @param   msg_id [IN] DHL message ID.
 * @param   src_mod [IN] Module ID of message source.
 * @param   local_para_p [IN] The address of local parameter.
 */
void ipc_packet_dump_w_localparam(msg_type msg_id, module_type src_mod, local_para_struct* local_para_p);

/*!
 * Internal API to dump the packet's raw content within a DID.
 * @param   did [IN] DID descriptor.
 * @param   p_curr_si_idx [IN|OUT] The current SI index.
 */
void ipc_packet_dump_did_one_packet(upcm_did *did, kal_uint32 *p_curr_si_idx);

/*!
 * Internal API to dump all packets' raw content within a DID list.
 * @param   did_head [IN] DID descriptor head.
 * @param   did_tail [IN] DID descriptor tail.
 * @param   hif_type [IN] Specified hif_type to be dumped within a DID list.
 */
void ipc_packet_dump_did(upcm_did* did_head, upcm_did* did_tail, ipc_si_hif_type_e hif_type);

#endif /* __INC_IPC_UTILS_H */
