/*!
 *  @file ufpm_struct.h
 *  @author Bo-Kai Huang <bo-kai.haung@mediatek.com>
 *  @version 1.0
 *  @section LICENSE
 *
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
 *  @section DESCRIPTION
 *  This file provides main definitions of usbcore
 */

#ifndef _UFPM_USB_STRUCT_H
#define _UFPM_USB_STRUCT_H

#include "hif_mw_msgid.h"
#include "kal_public_api.h"
#include "ipc_msgsvc_msgid.h"
#include "mw_sap.h"
#include "ufpm_enum.h"

/**************************************************
 * Tehtering RNDIS Data Structure
 **************************************************/
typedef struct _tethering_net_stats_s {
    kal_uint64 rx_packets;      // Total packets received
    kal_uint64 tx_packets;      // Total packets transmitted
    kal_uint64 rx_errors;       // Bad packets received
    kal_uint64 tx_errors;       // Packet transmit problems
    kal_uint64 rx_dropped;      // No space in Linux buffers
    kal_uint64 tx_dropped;      // No space available in Linux
    kal_uint64 rx_frame_errors; // Recv'd frame alignment error
} tethering_net_stats_t;

typedef struct _tethering_activate_meta_info {
    kal_uint32 init_msg_max_transfer_size;
    kal_uint32 init_cmplt_max_packets_per_transfer;
    kal_uint32 init_cmplt_max_transfer_size;
    kal_uint32 init_cmplt_packet_alignment_factor;
    kal_uint8 host_mac_addr[6];
    kal_uint8 reserved1[2];
    kal_uint8 device_mac_addr[6];
    kal_uint8 reserved2[2];
    tethering_net_stats_t net_stats;
} tethering_activate_meta_info_t;

typedef struct _tethering_deactivate_meta_info_t {
    tethering_net_stats_t net_stats;
} tethering_deactivate_meta_info_t;

/**************************************************
 * Logging ACM Data Structure
 **************************************************/

typedef struct _logging_activate_meta_info {
    kal_uint8 reserved1[8];  
} logging_activate_meta_info_t;

typedef struct _logging_deactivate_meta_info_t {
    kal_uint8 reserved1[8];
} logging_deactivate_meta_info_t;


/***************************************************
 * UFPM Function Common Data Structure
 ***************************************************/
#if 0 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#define EP0_MSG_DATA_BUF_SIZE  1024
#define EP0_MSG_INTR_BUF_SIZE  64
typedef struct _ufpm_send_ap_ep0_msg {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 reserved[3];
    kal_uint32 ep0_data_len;
    kal_uint8 ep0Buffer[EP0_MSG_DATA_BUF_SIZE];
    kal_uint32 int_data_len;
    kal_uint8 intBuffer[EP0_MSG_INTR_BUF_SIZE];
} ufpm_send_ap_ep0_msg_t;

typedef struct _ufpm_usb_mapping {
    kal_uint8 type;
    kal_uint8 map;
    kal_uint16 maxPktSize;  // Max packet size of the endpoint
    kal_uint32 queue_config;    // QMU queue configuration for MD USB driver
} ufpm_usb_mapping_t;

#endif  // _UFPM_USB_H

