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
 *   ipc_data.h
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef __INC_IPC_MDT_H
#define __INC_IPC_MDT_H

#include "kal_public_api.h"
#include "ipc_defs.h"

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
    #include "mdt_api.h"
#endif

#include "ipc_session.h"

/*------------------------------------------------------------------------------
 * Internal data structure defintion.
 *----------------------------------------------------------------------------*/
#define IPC_MDT_MAX_DEVICE_NUM 2 /* USB and WiFi */

typedef struct _ipc_mdt_mirror_des_t {
    kal_uint32          netif_id;
    union {
        struct {
            kal_uint8           mdt_matched_num;
            kal_bool            mirror_spd_pie_idx[QBM_SPD_MAX_PKTNUM];
        };
        struct {
            kal_uint32          pdn_ids[IPC_SESSION_MAP_SIZE];
        };
        struct {
            kal_uint8           pkt_num;
            kal_uint8           seg_num;
            ipc_si_hif_type_e   hif_type;
            upcm_did           *mirror_did;
        };
    };
} ipc_mdt_mirror_des_t;

typedef struct _ipc_mdt_routing_packet_list_t {
    qbm_gpd *first_gpd;
    qbm_gpd *last_gpd;
} ipc_mdt_routing_packet_list_t;

typedef struct _ipc_mdt_lan_des_t {
    kal_bool            is_did;
    kal_uint32          dst_netif_id;
    kal_uint32          src_netif_id;
    ipc_si_hif_type_e   hif_type;
    upcm_did           *did;
    kal_uint32          curr_si_idx;
} ipc_mdt_lan_des_t;

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
/*------------------------------------------------------------------------------
 * Global variables.
 *----------------------------------------------------------------------------*/
extern ipc_mdt_routing_packet_list_t    ipc_mdt_packet_routing_queue[2][IPC_MAX_NETIF_CNT];
extern kal_bool                         ipc_mdt_queue_non_empty[2];

/*------------------------------------------------------------------------------
 * General Function prototype.
 *----------------------------------------------------------------------------*/

/*!
 * Downlink data path entrance function for lan NETIF.
 *
 * @param   lan_des_array [IN] lan_des array of all MDT devices.
 */
void ipc_mdt_lan_on_did_downlink(ipc_mdt_lan_des_t *lan_des_array);

/*
 * Fill the DID/SIT descriptor from the META.
 *
 * @param   lan_des_array [IN] lan_des array of all MDT devices.
 * @param   src_meta [IN] The META of the packet.
 * @param   src_netif_id [IN] The id of the netif of the source lan device.
 * @param   src_netif [IN] The pointer of the source netif.
 *
 * @return  KAL_TRUE if successful, KAL_FALSE otherwise.
 */
kal_bool ipc_mdt_fill_did_si_from_meta(ipc_mdt_lan_des_t *lan_des_array, lhif_meta_tbl_t *src_meta, kal_uint32 src_netif_id, ipc_netif_t *src_netif);

/*!
 * Set the corresponding PDN id into META of the packet which is about to use MDT Direct Path.
 *
 * @param   mirror_des_array [IN] mirror_des array of all MDT devices.
 * @param   META [IN] The META of the packet.
 * @param   netif_id [IN] The id of the netif of the routed MDT device.
 * @param   ip_type [IN] The IP type of the packet.
 *
 * @return  return KAL_TRUE for the packet is available to use the direct path, otherwise return KAL_FALSE.
 */
kal_bool ipc_mdt_set_pdn_id_in_meta(ipc_mdt_mirror_des_t *mirror_des_array, lhif_meta_tbl_t *meta, kal_uint32 netif_id, kal_uint8 ip_type);

/*!
 * Mark the mirror descriptor and DID to indicate the packet is about to use MDT Direct Path.
 *
 * @param   mirror_des_array [IN] mirror_des array of all MDT devices.
 * @param   did [IN] DID of the packet.
 * @param   p_curr_si_idx [IN|OUT] The started SIT index of the packet.
 * @param   netif_id [IN] The id of the netif of the routed MDT device.
 *
 * @return  return KAL_TRUE for the packet is marked to use the direct path, otherwise return KAL_FALSE.
 */
kal_bool ipc_mdt_set_pkt_in_did_mirror_des(ipc_mdt_mirror_des_t *mirror_des_array, upcm_did *did, kal_uint32 *p_curr_si_idx, kal_uint32 netif_id);

/*!
 * Mirror the DID with the correct packet and segment numbers of the corresponding hif type.
 *
 * @param   mirror_des [IN] mirror_des of the MDT device.
 * @param   src_did [IN] The source DID.
 */
void ipc_mdt_mirror_did(ipc_mdt_mirror_des_t *mirror_des, upcm_did *src_did);

/*!
 * Push the DID to Downlink IPC_DID_QUEUE_TYPE_MDT queue.
 *
 * @param   did [IN] DID of the packet.
 * @param   pdn_id [IN] PDN ID where the DID comes from.
 */
void ipc_mdt_push_did_to_mdt_queue(upcm_did *did, kal_uint32 pdn_id);

#endif /* __MD_DIRECT_TETHERING_SUPPORT__) */
#endif /* __INC_IPC_MDT_H */
