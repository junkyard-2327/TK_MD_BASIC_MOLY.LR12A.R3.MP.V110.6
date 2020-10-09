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
 *   ipc_filter.h
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#ifndef __INC_IPC_FILTER_H
#define __INC_IPC_FILTER_H

#include "kal_public_api.h"

#include "ipc_api.h"
#include "ipc_object.h"
#include "ipc_mdt.h"

typedef enum _ipc_match_result_e {
    IPC_MATCH_RESULT_NOT_MATCHED    = 0x0000,
    IPC_MATCH_RESULT_MATCHED        = 0x0001,
    IPC_MATCH_RESULT_FRAG_MATCHED   = 0x0010,
} ipc_match_result_e;

typedef enum _ipc_pkt_do_filter_result_e {
    IPC_PKT_DO_FILTER_NOT_MATCHED = 0,
    IPC_PKT_DO_FILTER_MATCHED = 1,
    IPC_PKT_DO_FILTER_BWM_MATCHED = 2,
    IPC_PKT_DO_FILTER_MDT_MATCHED = 3,
    IPC_PKT_DO_FILTER_INVALID_LEN = 4,
    IPC_PKT_DO_FILTER_HANDLE_FRAG = 5,
    IPC_PKT_DO_FILTER_HANDLE_CLONE = 6,
    IPC_PKT_DO_FILTER_ERROR,
    IPC_PKT_DO_FILTER_NONE
} ipc_pkt_do_filter_result_e;

/*------------------------------------------------------------------------------
 * Data structure defintion.
 *----------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Function prototype.
 *----------------------------------------------------------------------------*/

/*!
 * Initialize IP packet filtering resources.
 */
void ipc_filter_init(void);

/*!
 * Send ILM to indicate registering a filter for uplink or downlink traffic.
 *
 * @param   uplink [IN] Is uplink filter rule. false for downlink filter rule
 * @param   callback_with_info [IN] Does callback function needs pass information as parameter or not
 * @param   rules [IN] Rules to filter of downlink IP datagrams.
 * @param   callback_func [IN] Function to call if a downlink IP datagram matched specified rules.
 * @param   callback_context [IN] Context to pass in the callback function.
 * @param   module_id [IN] Destination module ID to handle the IP datagram.
 *
 * @return Zero or postive value as filter ID if registration succeeded, negative value otherwise.
 */
kal_int32
ipc_register_filter_by_ilm(
    kal_bool                uplink,
    kal_bool                callback_with_info,
    ipc_filter_rules_t     *rules,
    void                   *callback_func,
    void                   *callback_context,
    module_type             module_id);

/*!
 * ILM handler for MSG_ID_IPCORE_REGISTER_FILTER_REQ.
 *
 * @param   local_para_ptr [IN] local parameter for the ILM.
 */
void ipc_register_filter_req_handler(local_para_struct *local_para_ptr);

/*!
 * Send ILM to remove the filter from uplink or downlink traffic.
 *
 * @param   filter_id [IN] filter ID to remove.
 */
void ipc_deregister_filter_by_ilm(kal_int32 filter_id);

/*!
 * ILM handler for MSG_ID_IPCORE_DEREGISTER_FILTER_REQ.
 *
 * @param   local_para_ptr [IN] local parameter for the ILM.
 */
void ipc_deregister_filter_req_handler(local_para_struct *local_para_ptr);

/*!
 * Do filter for uplink traffic.
 *
 * @param   session_type [IN] Type of PDN session where the GPDs are (only V4 or V6 are allowed).
 * @param   netif_id [IN] Network interface ID where the GPD's come from.
 * @param   pp_head [IN|OUT] header of a list of GPD's.
 * @param   pp_tail [IN|OUT] tail of a list of GPD's.
 *
 * @return  the number of remained packets, which are not filterd out.
 */
kal_uint16
ipc_do_ul_filter(
    kal_uint8       session_type,
    kal_uint32      netif_id,
    qbm_gpd       **pp_head,
    qbm_gpd       **pp_tail);

/*!
 * Do filter for downlink traffic.
 *
 * @param   session_type [IN] Type of PDN session where the GPD's come from.
 * @param   netif_id [IN] Network interface ID where the GPD's come to.
 * @param   pdn_id [IN] PDN ID where the GPD's come from.
 * @param   pp_head [IN|OUT] header of a list of GPD's.
 * @param   pp_tail [IN|OUT] tail of a list of GPD's.
 *
 * @return  the number of remained packets, which are not filterd out.
 */
kal_uint16
ipc_do_dl_filter(
    kal_uint8       session_type,
    kal_uint32      netif_id,
    kal_uint32      pdn_id,
    qbm_gpd       **pp_head,
    qbm_gpd       **pp_tail);

/*!
 * Do filter for uplink traffic in META format.
 *
 * @param   ip_type [IN] The IP type of the packet.
 * @param   netif_id [IN] Network interface ID where the META's come from.
 * @param   meta [IN] the META of the packet.
 * @param   mirror_des [IN] mirror_des array of all MDT devices.
 *
 * @return  1 if the packet is not filtered out, 0 otherwise.
 */
kal_uint16
ipc_meta_do_filter(
    kal_uint8               ip_type,
    kal_uint32              netif_id,
    lhif_meta_tbl_t        *meta,
    ipc_mdt_mirror_des_t   *mdt_mirror_des);

/*!
 * Do filter for downlink traffic in DID format.
 *
 * @param   session_type [IN] Type of PDN session where the GPDs are (only V4 or V6 are allowed).
 * @param   netif_id [IN] Network interface ID where the GPD's come from.
 * @param   pdn_id [IN] PDN ID where the GPD's come from.
 * @param   did [IN|OUT] the DID of the packet.
 *
 * @return  the number of remained packets, which are not filterd out.
 */
kal_uint16
ipc_did_do_filter(
    kal_uint8               session_type,
    kal_uint32              netif_id,
    kal_uint32              pdn_id,
    upcm_did               *did);

/*!
 * Forward packet filtered to specified module.
 * Note that, it's for IPCORE internal use only.
 */
void 
ipc_forward_packet_by_msg(
        msg_type        msg_id,
        void           *context, 
        kal_int32       filter_id,
        qbm_gpd        *head_gpd, 
        qbm_gpd        *tail_gpd, 
        kal_uint32      length);

/*!
 * Forward uplink packet filtered to specified module.
 * Note that, it's for IPCORE internal use only.
 */
void 
ipc_forward_ul_packet_by_msg(
        void           *context, 
        kal_int32       filter_id,
        qbm_gpd        *head_gpd, 
        qbm_gpd        *tail_gpd, 
        kal_uint32      length);

/*!
 * Forward downlink packet filtered to specified module.
 * Note that, it's for IPCORE internal use only.
 */
void 
ipc_forward_dl_packet_by_msg(
        void           *context, 
        kal_int32       filter_id,
        qbm_gpd        *head_gpd, 
        qbm_gpd        *tail_gpd, 
        kal_uint32      length);

/*!
 * Forward packet filtered to specified module (with information).
 * Note that, it's for IPCORE internal use only.
 */
void 
ipc_forward_packet_with_info_by_msg(
        msg_type                 msg_id,
        ipc_filter_info_t       *info_p,
        void                    *context, 
        kal_int32                filter_id,
        qbm_gpd                 *head_gpd, 
        qbm_gpd                 *tail_gpd, 
        kal_uint32               length);

/*!
 * Forward uplink packet filtered to specified module (with information).
 * Note that, it's for IPCORE internal use only.
 */
void 
ipc_forward_ul_packet_with_info_by_msg(
        ipc_filter_info_t       *info_p,
        void                    *context, 
        kal_int32                filter_id,
        qbm_gpd                 *head_gpd, 
        qbm_gpd                 *tail_gpd, 
        kal_uint32               length);

/*!
 * Forward downlink packet filtered to specified module (with information).
 * Note that, it's for IPCORE internal use only.
 */
void 
ipc_forward_dl_packet_with_info_by_msg(
        ipc_filter_info_t       *info_p,
        void                    *context, 
        kal_int32                filter_id,
        qbm_gpd                 *head_gpd, 
        qbm_gpd                 *tail_gpd, 
        kal_uint32               length);

/**
 * Check for current DID contains ICMPv6 RA packets
 * @param   comm_continuous_p         [IN] comm_continuous_p
 * @param   ip_packet                [IN] IP contents from DID entry
 * @param   pkt_start_idx            [IN] current sit entry idx
 * @param   did                      [IN] currnet DL DID
 *
 * @return  the ip packet is RA type or not.
 */
kal_bool ipc_filter_did_chk_is_icmp6_ra(kal_uint8* comm_continuous_p, kal_uint8* ip_packet, kal_uint32 pkt_start_idx, upcm_did* did);


/**
 * Check for current DID list contains ICMPv6 RA packets
 * @param   pdn_id         [IN] comm_continuous_p
 * @param   p_head          [IN] DID head
 * @param   p_tail          [IN] DID tail
 *
 * @return  the RA ip packet is foudn in DID list .
 */
kal_bool ipc_on_downlink_ra_proxy(kal_uint32 pdn_id, upcm_did *p_head, upcm_did *p_tail);

#endif /* __INC_IPC_FILTER_H */
