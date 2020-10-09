/*****************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2012
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
 *   kpalv_data.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *  Keep alive context structure definitions
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 *
 *
 ****************************************************************************/
#ifndef __INC_KPALV_DATA_H
#define __INC_KPALV_DATA_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kpalv_struct.h"
#include "kpalv_ut.h"

#ifdef ATEST_SYS_KPALV
#define KPALV_SEND_KEEP_ALIVE_NOTIFY_CNF    kpalv_ut_send_keep_alive_notify
#define KPALV_SEND_KEEP_ALIVE_NOTIFY_URC    kpalv_ut_send_keep_alive_notify_urc
#else
#define KPALV_SEND_KEEP_ALIVE_NOTIFY_CNF    kpalv_send_keep_alive_notify
#define KPALV_SEND_KEEP_ALIVE_NOTIFY_URC    kpalv_send_keep_alive_notify_urc
#endif


#define KPALV_KEEP_ALIVE_DATA_LENGTH        1
#define KPALV_KEEP_ALIVE_IPV4_PACKET        40 /* ipv4:20 + tcp:20 */
#define KPALV_KEEP_ALIVE_IPV6_PACKET        60 /* ipv6:40 + tcp:20 */

#define KPALV_KEEP_ALIVE_IPV4_UDP_PACKET        28 /* ipv4:20 + udp:8 */
#define KPALV_KEEP_ALIVE_IPV6_UDP_PACKET        48 /* ipv6:40 + udp:8 */

#define KPALV_KEEP_ALIVE_V4_PACKET_LENGTH  (KPALV_KEEP_ALIVE_IPV4_PACKET + KPALV_KEEP_ALIVE_DATA_LENGTH)
#define KPALV_KEEP_ALIVE_V6_PACKET_LENGTH  (KPALV_KEEP_ALIVE_IPV6_PACKET + KPALV_KEEP_ALIVE_DATA_LENGTH)

#define KPALV_KEEP_ALIVE_V4_UDP_PACKET_LENGTH  (KPALV_KEEP_ALIVE_IPV4_UDP_PACKET + KPALV_KEEP_ALIVE_DATA_LENGTH)
#define KPALV_KEEP_ALIVE_V6_UDP_PACKET_LENGTH  (KPALV_KEEP_ALIVE_IPV6_UDP_PACKET + KPALV_KEEP_ALIVE_DATA_LENGTH)

/** this is the index value for idle timer for connection 0 */
#define IDLE_TIMER_INDEX_VALUE_START    5 

/** this is the index value for retry timer for connection 0 */
#define RETRY_TIMER_INDEX_VALUE_START   10

typedef struct {
    kal_bool            is_enable;                              /**< keep-alive enabled or disabled */
    kpalv_req_ip_type_e ip_type;                                /**< ipv4/v6 tcp udp type */
    kal_uint32          netif_id;                               /**< ap module attached to nw_interface_id */
    kal_uint8           src_ipv4_addr[KPALV_IPV4_ADDR_LEN];     /**< IPV4 src addr */
    kal_uint8           dst_ipv4_addr[KPALV_IPV4_ADDR_LEN];     /**< IPV4 dst addr */
    kal_uint8           src_ipv6_addr[KPALV_IPV6_ADDR_LEN];     /**< IPV6 src addr */
    kal_uint8           dst_ipv6_addr[KPALV_IPV6_ADDR_LEN];     /**< IPV6 dst addr */
    kal_uint16          src_port;                               /**< src port */
    kal_uint16          dst_port;                               /**< dst port */
    kal_uint16          idle_time;                              /**< idle time in sec */
    kal_uint16          probe_interval;                         /**< retry time in sec */
    kal_uint8           max_retry_cnt;                          /**< number of retries */
} kpalv_keep_alive_at_cmd_info_struct;

typedef struct {
    kal_uint32          pdn_id;                          /**< get ipc_find_pdn_id_by_netif_id */
    kal_uint8           ps_id;                           /**< get ipc_find_pdn_id_by_netif_id */
    kal_uint8           curr_retry_attempt;              /**< curr retry count */
    kal_int32           ul_filter_id;                    /**< UL filter id */
    kal_int32           dl_filter_id;                    /**< DL filter id */
    event_scheduler     *idle_timer_scheduler;           /**< T1 event schduler */
    event_scheduler     *retry_timer_scheduler;          /**< T2 event scheduler */
    eventid             eid_idle_timer;                  /**< T1 event id */
    eventid             eid_retry_timer;                 /**< T2 event id */
} kpalv_keep_alive_control_struct;

typedef struct {
    kal_bool            is_already_updated;                                                  /**< received first UL packet from AP or not */
    kal_uint8           ipv4_tcp_keep_alive_packet[KPALV_KEEP_ALIVE_V4_PACKET_LENGTH];       /**< ipv4 keep-alive ready buffer */
    kal_uint8           ipv6_tcp_keep_alive_packet[KPALV_KEEP_ALIVE_V6_PACKET_LENGTH];       /**< ipv6 keep-alive ready buffer */
    kal_uint8           ipv4_udp_keep_alive_packet[KPALV_KEEP_ALIVE_V4_UDP_PACKET_LENGTH];   /**< ipv4 udp keep-alive ready buffer */
    kal_uint8           ipv6_udp_keep_alive_packet[KPALV_KEEP_ALIVE_V6_UDP_PACKET_LENGTH];   /**< ipv6 udp keep-alive ready buffer */
} kpalv_keep_alive_data_struct;

typedef struct {
    kpalv_keep_alive_at_cmd_info_struct     at_info;
    kpalv_keep_alive_control_struct         control_info;
    kal_bool                                is_cntx_valid;
    kpalv_md_kpalive_state_e                status;
    kpalv_keep_alive_data_struct            data_info;
} kpalv_keep_alive_struct;


#endif /* __INC_KPALV_DATA_H */
