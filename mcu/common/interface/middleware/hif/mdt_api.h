/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
 *   mdt_api.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef __MDT_API_H
#define __MDT_API_H

#include "hif_ior.h"
#include "hif_mw_msgid.h"
#include "ipc_api.h"
#include "ipc_defs_public.h"
#include "ipc_enums.h"

#define MDT_DEL_OBJECT_SLEEP_TICKS      KAL_TICKS_10_MSEC
#define MDT_W_LOCK_OBJECT_SLEEP_TICKS   1
/*------------------------------------------------------------------------------
 * Global variables.
 *----------------------------------------------------------------------------*/
extern kal_bool         mdt_is_activated;
extern const kal_uint32 mdt_support_dev_netif_ids[];
extern const kal_uint32 mdt_support_dev_num;

/*------------------------------------------------------------------------------
 * Helper Macro.
 *----------------------------------------------------------------------------*/
#define MDT_IS_UPLINK(_uplink) \
        ((_uplink == KAL_TRUE)? 1 : 0)

/*------------------------------------------------------------------------------
 * Enumeration definition.
 *----------------------------------------------------------------------------*/
typedef enum {
    MDT_ACTION_ADD,
    MDT_ACTION_DELETE,
} mdt_action_e;

/*------------------------------------------------------------------------------
 * Data structure defintion.
 *----------------------------------------------------------------------------*/
typedef struct _nat_rules_t {
    kal_uint16      src_port; /**< Source port number for NAT. */
    kal_uint16      dst_port; /**< Destination port number for NAT. */

	union{
		kal_uint8 		addr8[4];
		kal_uint32 		addr32;
	}src_ipv4; /**< Source IPv4 address for NAT. */
	union{
		kal_uint8 		addr8[4];
		kal_uint32 		addr32;
	}dst_ipv4; /**< Destination IPv4 address for NAT. */
} nat_rules_t;

typedef struct _fastpath_table_t {
    kal_uint8       ip_type;  /**< Type of IP traffic the filter to apply, see IPC_IP_TYPE_XXX defined for valid values. */
    kal_uint8       protocol; /**< The protocol used in the data portion of the IP datagram to filter. */

    kal_uint32      src_netif_id; /**< Network interface ID to filter. */
    kal_uint32      dst_netif_id;

    kal_uint16      src_port; /**< Source port number to filter. */
    kal_uint16      dst_port; /**< Destination port number to filter. */

	union{
		kal_uint8 		addr8[4];
		kal_uint32 		addr32;
	}src_ipv4; /**< Source IPv4 address to filter. */
	union{
		kal_uint8 		addr8[4];
		kal_uint32 		addr32;
	}dst_ipv4; /**< Destination IPv4 address to filter. */

    nat_rules_t nat_rules;

	union{
		kal_uint8 		addr8[16];
		kal_uint32 		addr32[4];
	}src_ipv6; /**< Source IPv6 address to filter. */
	union{
		kal_uint8 		addr8[16];
		kal_uint32 		addr32[4];
	}dst_ipv6; /**< Destination IPv6 address to filter. */
} fastpath_table_t;

typedef struct _mdt_common_des_t {
    kal_uint8       ip_type;
    kal_uint8       action;
    kal_uint8       rule_id;
    kal_uint8       magic_code;
} mdt_common_des_t;

typedef struct _mdt_ipv4_rule_t {
    kal_uint32      src_ip;
    kal_uint32      dst_ip;
    kal_uint16      src_port;
    kal_uint16      dst_port;
    kal_uint8       protocol;
    kal_uint8       in_netif_id;
    kal_uint8       out_netif_id;
    kal_uint8       reserved;
    kal_uint32      src_nat_ip;
    kal_uint32      dst_nat_ip;
    kal_uint16      src_nat_port;
    kal_uint16      dst_nat_port;
} mdt_ipv4_rule_t;

typedef struct _mdt_ipv6_rule_t {
    kal_uint32      src_ip[4];
    kal_uint32      dst_ip[4];
    kal_uint16      src_port;
    kal_uint16      dst_port;
    kal_uint8       protocol;
    kal_uint8       in_netif_id;
    kal_uint8       out_netif_id;
    kal_uint8       reserved;
} mdt_ipv6_rule_t;

typedef struct _mdt_tag_info_t {
    kal_uint8   in_netif_id;
    kal_uint8   out_netif_id;
    kal_uint16  port;
} mdt_tag_info_t;

typedef struct _mdt_track_rule_t {
    kal_uint32          src_addr[4];
    kal_uint32          dst_addr[4];
    kal_uint16          src_port;
    kal_uint16          dst_port;
    kal_uint16          ip_id;
    kal_uint8           protocol;
    kal_uint8           reserved;
} mdt_track_rule_t;

/* ILM structures definition for Data Usage */
typedef struct _mdt_global_alert_t {
    kal_uint32     trans_id;
    kal_uint32     status;                 //unused
    kal_uint64     measure_buffer_size;
    kal_uint8      mdt_id;
} mdt_global_alert_t;

typedef struct _mdt_iquota_t {
    kal_uint32     trans_id;
    kal_uint32     status;                 //unused
    kal_uint64     limit_buffer_size;
    kal_uint8      mdt_id;
    kal_uint8      reserved[3];
} mdt_iquota_t;

typedef struct _mdt_data_usage_cmd_struct {
    LOCAL_PARA_HDR
    kal_uint32 cmd;
} mdt_data_usage_cmd_struct;

typedef struct _mdt_set_global_alert_req_struct {
    LOCAL_PARA_HDR
    kal_uint32 cmd;
    mdt_global_alert_t ga;
} mdt_set_global_alert_req_struct;

typedef struct _mdt_alert_global_alert_ind_struct {
    LOCAL_PARA_HDR
    kal_uint32 cmd;
    mdt_global_alert_t ga;
} mdt_alert_global_alert_ind_struct;

typedef struct _mdt_set_iquota_req_struct {
    LOCAL_PARA_HDR
    kal_uint32 cmd;
    mdt_iquota_t iq;
} mdt_set_iquota_req_struct;

typedef struct _mdt_alert_iquota_ind_struct {
    LOCAL_PARA_HDR
    kal_uint32 cmd;
    mdt_iquota_t iq;
} mdt_alert_iquota_ind_struct;

typedef struct _mdt_del_iquota_req_struct {
    LOCAL_PARA_HDR
    kal_uint32 cmd;
    mdt_iquota_t iq;
} mdt_del_iquota_req_struct;

/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/
kal_bool mdt_init(void);
kal_bool mdt_reset(void);
kal_uint32 mdt_id_to_netif_id(kal_uint8 id);
kal_int16 netif_id_to_mdt_id(kal_uint32 netif_id);
void mdt_on_ilm(ilm_struct *ilm);
kal_int32 mdt_enable(void);
kal_int32 mdt_disable(void);
kal_int32 mdt_activate(void);
kal_int32 mdt_deactivate(void);
kal_bool mdt_check_route(kal_bool uplink, kal_uint8 ip_type, ipc_pkt_des_t *pkt_des, kal_uint32 in_netif_id, kal_uint32 *out_netif_id, kal_uint8 *rule_id);

/*!
 * Update global alert data usage base on the received packet.
 *
 * @param   packet_len [IN] Length of the packet
 * @param   netif_id [IN] netif_id for the packet.
 */
void mdt_update_global_alert_data_usage(kal_uint32 packet_len, kal_uint32 netif_id);

/*!
 * Update iquota data usage base on the received packet.
 *
 * @param   uplink [IN] Is uplink traffic. false for downlink traffic.
 * @param   in_netif_id [IN] Source netif_id for the packet.
 * @param   out_netif_id [IN] Destination netif_id for the packet.
 * @param   protocol [IN] Protocol of the packet
 * @param   packet_len [IN] Length of the packet
 */
void mdt_update_iquota_data_usage(kal_bool uplink, kal_uint32 in_netif_id, kal_uint32 out_netif_id, kal_uint8 protocol, kal_uint32 packet_len);

/*!
 * Check if the packet is recorded on track table.
 *
 * @param   uplink [IN] Is uplink traffic. false for downlink traffic.
 * @param   pkt_des [IN] Descriptor of the packet.
 */
void mdt_track_packet(kal_bool uplink, ipc_pkt_des_t *pkt_des);

#endif
