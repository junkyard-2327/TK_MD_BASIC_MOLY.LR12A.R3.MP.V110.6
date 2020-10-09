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
 *   ipc_struct.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   IP Core ILM structure and interface definition.
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
 * removed!
 * removed!
 * removed!
 * removed!
 *
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
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
#ifndef __INC_IPC_STRUCT_H
#define __INC_IPC_STRUCT_H

#include "hif_ior.h"
#include "hif_mw_msgid.h"
#include "ipcore_upcm_struct.h"
#include "upcm_did.h"
#include "ipc_defs_public.h"
#include "ipc_enums.h"

typedef struct _ipc_filter_rules_t {
    kal_uint8       features; /**< Union of  to indicate which type of filter it is. */
    kal_uint8       ip_type;  /**< Type of IP traffic the filter to apply, see IPC_IP_TYPE_XXX defined for valid values. */
    kal_uint16      priority; /**< Priority will affect the order of filter rules when performing filtering. */
    kal_uint32      valid_fields; /**< Union of IPC_FILTER_BY_XXX to indicate which fields in this structure are valid. */
    kal_uint32      netif_id; /**< Network interface ID to filter. */
    kal_uint32      pdn_id;   /**< [downlink filter ONLY] PDN ID to filter. */
    kal_uint32      ebi;      /**< [downlink filter ONLY] EBI/NSAPI to filter. */
    kal_uint8       proto_idx;  /**< [downlink filter ONLY] Multiple PS use only. */
    kal_uint8       protocol; /**< The protocol used in the data portion of the IP datagram to filter. */

    kal_uint16      src_port; /**< Source port number to filter. */
    kal_uint16      dst_port; /**< Destination port number to filter. */
    kal_uint16      tcp_flags;/**< TCP flags of TCP to filter. */

	union{
		kal_uint8 		addr8[4];
		kal_uint32 		addr32;
	}src_ipv4; /**< Source IPv4 address to filter. */
	union{
		kal_uint8 		addr8[4];
		kal_uint32 		addr32;
	}dst_ipv4; /**< Destination IPv4 address to filter. */

	union{
		kal_uint8 		addr8[16];
		kal_uint32 		addr32[4];
	}src_ipv6; /**< Source IPv6 address to filter. */
	union{
		kal_uint8 		addr8[16];
		kal_uint32 		addr32[4];
	}dst_ipv6; /**< Destination IPv6 address to filter. */

    kal_uint8       icmpv4_type;    /**< Type field of ICMPv4 header to filter. */
    kal_uint8       icmpv6_type;    /**< Type field of ICMPv6 header to filter. */
    kal_uint8       reserved[2];
} ipc_filter_rules_t;

/*
 * IPCore filter_info source descriptor type
 */
typedef enum _ipc_fi_desc_type_e {
    IPC_FI_DESC_TYPE_DID,
    IPC_FI_DESC_TYPE_MAX,
} ipc_fi_desc_type_e;

typedef struct _ipc_filter_info_t {
    kal_uint32      netif_id;   /**< Source Network interface ID */
    kal_int32       ip_id;      /**< ID to query corresponding NMU IP database */
    kal_int16       ebi;        /**< EBI that the packets came from (only valid for DL) */
    kal_uint8       proto_idx;    /**< Index for distinquish different SIM card (only valid when supporting Multiple PS feature */
    kal_uint8       rsvd;
    kal_uint32      data_offset;    /**< The data offset to payload. (The length of IP TCP/UDP header)
                                         Requirement from TH.Cheng LTECSR 2014/11/11 */
    void            *src_desc_ptr;  /**< Descriptor pointer */
    kal_uint32      src_desc_type;  /**< Descriptor type (please refer to ipc_fi_desc_type_e)*/
    kal_uint32      src_desc_indx;  /**< Descriptor internal index, 
                                         for one descriptor containing more than one packets case. */
} ipc_filter_info_t;

/*
 * Local parameter structure for MSG_ID_IPCORE_LINK_UP_IND / MSG_ID_IPCORE_IP_UP_IND / MSG_ID_IPCORE_LINK_UP_RSP / MSG_ID_IPCORE_IP_UP_RSP.
 */
typedef struct _ipc_link_handshake_msg_t {
    LOCAL_PARA_HDR
    kal_uint32      netif_id;   /**< Unique ID to identified corresponding host network interface */
    kal_int32       ip_id;      /**< ID to query corresponding NMU IP database */
    kal_uint8       ip_type;    /**< Type of IP datagrams, see IPC_IP_TYPE_XXX defined for valid values. */
    kal_uint8       rsvd[3];
} ipc_link_handshake_msg_t;

/*
 * IPCore link req type definition
 */
typedef enum _ipc_link_req_type_e {
    IPC_LINK_REQ_TYPE_NORMAL,
    IPC_LINK_REQ_TYPE_MDT,
} ipc_link_req_type_e;

/*
 * Local parameter structure for MSG_ID_IPCORE_LINK_UP_REQ / MSG_ID_IPCORE_LINK_DOWN_REQ / MSG_ID_IPCORE_IP_UP_REQ / MSG_ID_IPCORE_IP_DOWN_REQ.
 */
typedef struct _ipc_link_req_t {
    LOCAL_PARA_HDR
    void           *callback_context;   /**< Context regisered in to ipc_attach(). */
    kal_uint8       ip_type;            /**< Type of IP datagrams, see IPC_IP_TYPE_XXX defined for valid values. */
    kal_uint8       rsvd[3];
    ipc_link_req_type_e req_type;
} ipc_link_req_t;

/*
 * Local parameter structure for MSG_ID_IPCORE_LHIFCORE_QUEUE_MAPPING_REQ/RSP.
 */
typedef struct _ipc_lhifcore_q_mapping_msg_t {
    LOCAL_PARA_HDR
    ipcore_upcm_pdn_bind_ind_struct bind_ind;           /**< PDN binding information */
    module_type                     bind_src_mod_id;    /**< PDN binding ILM src module ID */
    kal_uint32                      netif_features;     /**< Binding netif features */
    void                           *callback_context;   /**< Context regisered in to ipc_attach(). */
    ipc_netif_type_e                netif_type;         /**< Type of netif for ccmni queue mapping, see ipc_netif_type_e defined for valid values */
} ipc_lhifcore_q_mapping_msg_t;

/*
 * Local parameter structure for MSG_ID_IPCORE_DL_PACKET_FILTERED_REQ and MSG_ID_IPCORE_UL_PACKET_FILTERED_REQ.
 */
typedef struct _ipc_packet_filtered_req_t
{
    LOCAL_PARA_HDR

    void       *context;
    kal_int32	filter_id;
    void       *head_gpd;
    void       *tail_gpd;
    kal_uint32  length;
} ipc_packet_filtered_req_t;

/*
 * Local parameter structure for MSG_ID_IPCORE_DL_PACKET_FILTERED_WITH_INFO_REQ and MSG_ID_IPCORE_UL_PACKET_FILTERED_WITH_INFO_REQ.
 */
typedef struct _ipc_packet_filtered_with_info_req_t
{
    LOCAL_PARA_HDR

    ipc_filter_info_t    info;
    void                *context;
    kal_int32	         filter_id;
    void                *head_gpd;
    void                *tail_gpd;
    kal_uint32           length;
} ipc_packet_filtered_with_info_req_t;

/*
 * Local parameter structure for MSG_ID_IPCORE_QUERY_INFO_CNF.
 */
typedef struct _ipc_netif_info_t
{
    kal_uint32 netif_id;    /**< Unique ID for corresponding host network interface */
} ipc_netif_info_t;

typedef struct _ipc_netif_list_t
{
    kal_uint32 netif_cnt;                       /* Attached netif count */
    ipc_netif_info_t list[IPC_MAX_NETIF_CNT];   /* Information of each attached netif */
} ipc_netif_list_t;

typedef struct _ipc_query_info_t
{
    LOCAL_PARA_HDR

    ipc_netif_list_t netif; /* Network interface information */

} ipc_query_info_t;

/*
 * IP CORE notification type definition
 *
 */
typedef enum _ipc_ntfy_type_e {
    IPC_NTFY_TYPE_INVALID,
    IPC_NTFY_TYPE_MIN,
    IPC_NTFY_TYPE_ATTACH,
    IPC_NTFY_TYPE_DETACH,
    IPC_NTFY_TYPE_IP_DOWN,
    IPC_NTFY_TYPE_IP_UP,
    IPC_NTFY_TYPE_LINK_DOWN,
    IPC_NTFY_TYPE_LINK_UP,
    IPC_NTFY_TYPE_MAX,
} ipc_ntfy_type_e;

/*
 * Parameter for IP CORE status change notifications
 *
 */
typedef struct _ipc_ntfy_param_t
{
    ipc_ntfy_type_e ntfy_type;  /**< Notify type to indicate */
    kal_int32       ntfy_id;    /**< Notify ID allocated in ipc_register_ntfy(). */
    void            *context;   /**< Context regisered in ipc_register_ntfy(). */

    kal_uint32      netif_id;   /**< Unique ID to identified corresponding host network interface */
    kal_int32       ip_id;      /**< ID to query corresponding NMU IP database */
} ipc_ntfy_param_t;

/*
 * Local parameter structure for MSG_ID_LMS_NETIF_ATTACH
 */
typedef struct _lms_ipc_ntfy_t {
    LOCAL_PARA_HDR
    ipc_ntfy_param_t ipc_ntfy_para;
} lms_ipc_ntfy_t;

/*
 * Paremeter for IPCore UL throttle configuration
 */
typedef struct _ipc_ul_throttle_conf_t
{
    kal_uint8       enabled;                    /**< 0 to disable IPCORE UL throttle mechanism; otherwise, others to enable. */
    kal_uint8       active_period_100ms;        /**< active period of UL throttle, minimum unit: 100ms.*/
    kal_uint8       suspend_period_100ms;       /**< suspend period of UL throttle, minimum unit: 100ms.*/
    kal_uint8       features;                    /**< feature option of UL throttle, please refer IPC_THROTTLE_FEATURE_XX */
} ipc_ul_throttle_conf_t;

/*
 * IPCORE UL throttle state enum
 */
typedef enum _ipc_ul_throttle_state_e {
    IPC_UL_THROTTLE_STATE_NONE,
    IPC_UL_THROTTLE_STATE_ACTIVE,
    IPC_UL_THROTTLE_STATE_SUSPEND,
} ipc_ul_throttle_state_e;

/*
 * Local parameter structure for MSG_ID_IPCORE_SET_UL_THROTTLE
 */
typedef struct _ipc_set_ul_throttle_param_t {
    LOCAL_PARA_HDR

    ipc_ul_throttle_conf_t conf;
} ipc_set_ul_throttle_param_t;

/*
 * Local EM structure for MSG_ID_EM_IPC_UL_THROTTLE_STATUS_IND
 */
typedef struct _em_ipc_ul_throttle_status_ind_struct_t
{
    LOCAL_PARA_HDR
    ipc_ul_throttle_state_e throttle_state;
    ipc_ul_throttle_conf_t throttle_conf;
} em_ipc_ul_throttle_status_ind_struct_t;

/*
 * Local parameter structure for MSG_ID_IPCORE_VDM_IMS_EMERGENCY_CALL_IND
 */
typedef struct _ipc_vdm_ims_emergency_call_ind_struct_t
{
    LOCAL_PARA_HDR
    kal_bool is_calling;
} ipc_vdm_ims_emergency_call_ind_struct_t;

/*
 * Local parameter structure for MSG_ID_IPCORE_REGISTER_FILTER_REQ
 */
typedef struct _ipc_register_filter_req_struct_t
{
    LOCAL_PARA_HDR
    kal_int32               filter_id;
    kal_bool                uplink;
    kal_bool                callback_with_info;
    ipc_filter_rules_t      rules;
    void                   *callback_func;
    void                   *callback_context;
    module_type             module_id;
} ipc_register_filter_req_struct_t;

/*
 * Local parameter structure for MSG_ID_IPCORE_DEREGISTER_FILTER_REQ
 */
typedef struct _ipc_deregister_filter_req_struct_t
{
    LOCAL_PARA_HDR
    kal_int32               filter_id;
} ipc_deregister_filter_req_struct_t;

typedef struct _d2cm_ipcore_info_ind_struct
{
    LOCAL_PARA_HDR
    kal_int32        netif_id;
} d2cm_ipcore_info_ind_struct;

/*
 * Local parameter structure for MSG_ID_ATP_IPCORE_ECNCFG_REQ
 */
typedef struct _atp_ipcore_ecncfg_req_struct_t
{
    LOCAL_PARA_HDR
    kal_bool          result;             /**< KAL_FALSE for error in ATP parsing, ipcore don't handle */
    kal_uint8         mobile_data;        /**< mobile_data  1:ON and 0:OFF */
} atp_ipcore_ecncfg_req_struct_t;

/*
 * Local parameter structure for MSG_ID_ATP_IPCORE_EDALLOW_REQ
 */
typedef struct _atp_ipcore_edallow_req_struct_t
{
    LOCAL_PARA_HDR
    kal_bool          result;            /**< KAL_FALSE for error in ATP parsing,ipcore don't handle */
    kal_uint8         edallow_value;     /**< sim data off(0)/allow(1) 2:preferred sim */
    kal_uint8         para;              /**< prefer_sim_slot 0:no SIM slot pref, 1:1st sim slot.. */
} atp_ipcore_edallow_req_struct_t;

/*------------------------------------------------------------------------------
 * DHL logging structure
 *----------------------------------------------------------------------------*/
/* typedef void ipcore_code_begin_struct; */
typedef ipc_link_req_t ipcore_link_up_req_struct;
typedef ipc_link_req_t ipcore_link_down_req_struct;
typedef ipc_lhifcore_q_mapping_msg_t ipcore_lhifcore_queue_mapping_req_struct;
typedef ipc_lhifcore_q_mapping_msg_t ipcore_lhifcore_queue_mapping_rsp_struct;
/* typedef void lms_dl_sdu_struct; */
typedef lms_ipc_ntfy_t lms_netif_attach_struct;
/* typedef void ipcore_process_ul_queue_req_struct; */
/* typedef void ipcore_retry_ul_reload_req_struct; */
typedef ipc_packet_filtered_req_t ipcore_dl_packet_filtered_req_struct;
typedef ipc_packet_filtered_req_t ipcore_ul_packet_filtered_req_struct;
typedef ipc_link_req_t ipcore_ip_up_req_struct;
typedef ipc_link_req_t ipcore_ip_down_req_struct;
typedef ipc_link_handshake_msg_t ipcore_link_up_ind_struct;
typedef ipc_link_handshake_msg_t ipcore_ip_up_ind_struct;
typedef ipc_link_handshake_msg_t ipcore_link_up_rsp_struct;
typedef ipc_link_handshake_msg_t ipcore_ip_up_rsp_struct;
/* typedef void ipcore_query_info_req_struct; */
typedef ipc_query_info_t ipcore_query_info_cnf_struct;
typedef ipc_packet_filtered_with_info_req_t ipcore_dl_packet_filtered_with_info_req_struct;
typedef ipc_packet_filtered_with_info_req_t ipcore_ul_packet_filtered_with_info_req_struct;
typedef ipc_set_ul_throttle_param_t ipcore_set_ul_throttle_struct;
typedef em_ipc_ul_throttle_status_ind_struct_t em_ipc_ul_throttle_status_ind_struct;
typedef ipc_vdm_ims_emergency_call_ind_struct_t ipcore_vdm_ims_emergency_call_ind_struct;
typedef ipc_register_filter_req_struct_t ipcore_register_filter_req_struct;
typedef ipc_deregister_filter_req_struct_t ipcore_deregister_filter_req_struct;
typedef atp_ipcore_ecncfg_req_struct_t atp_ipcore_ecncfg_req_struct;
typedef atp_ipcore_edallow_req_struct_t atp_ipcore_edallow_req_struct;
#endif /* __INC_IPC_STRUCT_H */
