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

#ifndef __NETINFO_COMMON_STRUCT_H__
#define __NETINFO_COMMON_STRUCT_H__

#include "kal_public_defs.h"
#include "atcmd_struct.h"
#include "l3_inc_enums_public.h"

#define MAX_ADDR_BUF_NUM 10

typedef enum {
    INTERFACE_TYPE_NONE,
    INTERFACE_TYPE_CCMNI,
} interface_type_enum;

typedef struct
{
    kal_bool                                PDPv4_addr_present;
    kal_uint8                               PDPv4_addr[IPV4_ADDR_LEN];
    kal_int32                               PDPv4_netmask;
    kal_bool                                PDPv6_addr_present;
    kal_uint8                               PDPv6_addr[IPV6_ADDR_LEN];
    kal_int32                               PDPv6_prefix;
} ip_info_struct;

typedef struct
{
    kal_bool                                bearer_id_present;
    kal_uint32                              bearer_id;
    kal_bool                                local_addr_and_subnet_mask_present;
    at_addr_and_mask_struct                 local_addr_and_subnet_mask;
    kal_bool                                gw_addr_present;
    at_addr_struct                          gw_addr;
    kal_uint32                              pcscfv4_num;
    kal_uint8                               pcscfv4_addr[MAX_ADDR_BUF_NUM][IPV4_ADDR_LEN];
    kal_uint32                              pcscfv6_num;
    kal_uint8                               pcscfv6_addr[MAX_ADDR_BUF_NUM][IPV6_ADDR_LEN];
    kal_uint32                              dnsv4_num;
    kal_uint8                               dnsv4_addr[MAX_ADDR_BUF_NUM][IPV4_ADDR_LEN];
    kal_uint32                              dnsv6_num;
    kal_uint8                               dnsv6_addr[MAX_ADDR_BUF_NUM][IPV6_ADDR_LEN];
    kal_bool                                IM_CN_Signalling_Flag_present;
    atcmd_IM_CN_Signalling_Flag_enum        IM_CN_Signalling_Flag;
    kal_bool                                IPv4_MTU_present;
    kal_uint32                              IPv4_MTU;
    kal_bool                                QCI_present;
    kal_uint32                              QCI;
    kal_bool                                network_interface_id_present;
    kal_uint32                              network_interface_id; // get byipc_get_netif_id_from_l2p_chid(IPC_NETIF_ID_LHIF_BEGIN, interface_id.network_interface_id)
} net_info_struct;

typedef struct
{
    kal_bool                                QCI_present;
    kal_uint32                              QCI;
    kal_bool                                DL_GBR_present;
    kal_uint32                              DL_GBR;
    kal_bool                                UL_GBR_present;
    kal_uint32                              UL_GBR;
    kal_bool                                DL_MBR_present;
    kal_uint32                              DL_MBR;
    kal_bool                                UL_MBR_present;
    kal_uint32                              UL_MBR;
    kal_bool                                DL_AMBR_present;
    kal_uint32                              DL_AMBR;
    kal_bool                                UL_AMBR_present;
    kal_uint32                              UL_AMBR;
}QosInfo_t;

typedef struct
{
    kal_bool                                packet_filter_identifier_present;
    kal_uint32                              packet_filter_identifier;                                           // integer type
    kal_bool                                evaluation_precedence_index_present;
    kal_uint32                              evaluation_precedence_index;                                        // integer type
    kal_bool                                remote_address_and_subnet_mask_present;
    pdp_addr_len_enum                       remote_address_and_subnet_mask_len;
    kal_uint8                               remote_address_and_subnet_mask[MAXIMUM_POSSIBLE_ADDR_LEN * 2];        // string type
    kal_bool                                protocol_number_next_header_present;
    kal_uint32                              protocol_number_next_header;                                        // integer type
    kal_bool                                local_port_range_present;
    kal_uint8                               local_port_range[LOCAL_PORT_RANGE_STRING_LEN];                      // string type
    kal_bool                                remote_port_range_present;
    kal_uint8                               remote_port_range[REMOTE_PORT_RANGE_STRING_LEN];                    // string type
    kal_bool                                ipsec_spi_present;
    kal_uint32                              ipsec_spi;                                                          // numeric value
    kal_bool                                tos_traffic_class_and_mask_present;
    kal_uint8                               tos_traffic_class_and_mask[TOS_TRAFFIC_CLASS_AND_MASK_STRING_LEN];  // string type
    kal_bool                                flow_label_present;
    kal_uint32                              flow_label;                                                         // numeric value
    kal_bool                                direction_present;
    atcmd_direction_enum                    direction;                                                          // integer type
    kal_bool                                NW_packet_filter_Identifier_present;
    kal_uint32                              NW_packet_filter_Identifier;                                        // integer type
    kal_bool                                local_address_and_subnet_mask_present;
    pdp_addr_len_enum                       local_address_and_subnet_mask_len;
    kal_uint8                               local_address_and_subnet_mask[MAXIMUM_POSSIBLE_ADDR_LEN * 2];       // string type
}PktFilter_t;

typedef struct
{
    kal_bool ims_info_present;
    rat_enum current_rat;
    pdp_addr_type_enum pdp_addr_type;
    kal_uint32 primary_cid;
    kal_uint32 bearer_id;
    atcmd_IM_CN_Signalling_Flag_enum        IM_CN_Signalling_Flag;
    QosInfo_t qos; 
    kal_uint8 tft_count;
    PktFilter_t tft[16];
    kal_uint16 cgact_error_cause; 
}ims_info_struct;

typedef struct {
    kal_uint32 if_type;
    kal_uint32 if_id;
} if_info_struct;

typedef enum {
    RETRYTIME_RESERVED_START = 0xFFFF0000,
    RETRYTIME_NO_RETRY = 0xFFFFFFFF, //infinite
    RETRYTIME_RESERVED_END = 0xFFFFFFFF,
} retrytime_enum;

typedef enum {
    RETRY_CAUSE_UNKNOWN = 0,
    RETRY_CAUSE_MAX = 0xFFFFFFFF,
} retry_cause_enum;

typedef struct {
    kal_bool retrytime_present;
    kal_uint32 retrytime;              
    retry_cause_enum cause;
} retry_info_struct;

#endif /* __NETINFO_COMMON_STRUCT_H__ */
