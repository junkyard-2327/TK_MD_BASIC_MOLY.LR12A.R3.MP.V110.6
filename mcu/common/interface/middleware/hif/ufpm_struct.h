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

#ifndef _UFPM_STRUCT_H
#define _UFPM_STRUCT_H

#include "hif_mw_msgid.h"
#include "kal_public_api.h"
#include "ufpm_enum.h"
#include "ipc_msgsvc_msgid.h"
#include "ccci_ipc_if.h"
#include "mw_sap.h"
#include "ufpm_usb_struct.h"

#define UFPM_USB_MAP_MAX_SIZE 8

/**************************************
 * UFPM ENUM and Types
 **************************************/
typedef union _ufpm_func_activation_info {
    tethering_activate_meta_info_t tethering_info;
    logging_activate_meta_info_t logging_info;
} ufpm_func_activation_info_t;

typedef union _ufpm_func_deactivation_info {
    tethering_deactivate_meta_info_t tethering_info;
    logging_deactivate_meta_info_t logging_info;
} ufpm_func_deactivation_info_t;

typedef struct _ufpm_usb_property {
    kal_bool isSupport;
    ufpm_func_state_e state;
    ufpm_usb_mapping_t mapTable[UFPM_USB_MAP_MAX_SIZE];
    ufpm_func_activation_info_t activate_meta_info;
    ufpm_func_deactivation_info_t deactivate_meta_info;
} ufpm_usb_property_t;

typedef struct _ufpm_mpu_info {
    kal_uint8 apUsbDomain;                                      // AP USB MPU domain ID
    kal_uint8 mdCldmaDomain;                                    // MD CLDMA MPU domain ID
    kal_uint8 reserved[6];
    kal_uint64 memBank0BaseAddr;                                // Memory bank0 base address
    kal_uint64 memBank0Size;                                    // Memory bank0 size
    kal_uint64 memBank4BaseAddr;                                // Memory bank4 base address
    kal_uint64 memBank4Size;                                    // Memory bank4 size
} ufpm_mpu_info_t;

typedef struct _ufpm_md_fast_path_common_req {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 reserved[3];
} ufpm_md_fast_path_common_req_t;

typedef struct _ufpm_md_fast_path_common_rsp {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 result; // bool
    kal_uint8 reserved[2];
} ufpm_md_fast_path_common_rsp_t;

typedef struct _ufpm_md_fast_path_common_ind {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 reserved[3];
} ufpm_md_fast_path_common_ind_t;

typedef struct _ufpm_notify_md_bus_event_req {
    LOCAL_PARA_HDR
    kal_uint8 state;
    kal_uint8 reserved[3];
} ufpm_notify_md_bus_event_req_t;

typedef struct _ufpm_activate_md_func_req {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 address;                                          // USB address
    kal_uint8 configuration;                                    // USB configuraton number
    kal_uint8 speed;                                            // USB 2.0/3.0
    ufpm_usb_mapping_t ap_usb_map[UFPM_USB_MAP_MAX_SIZE];       // AP released IF/EP
    tethering_activate_meta_info_t tethering_meta_info;         // tethering meta data
    logging_activate_meta_info_t logging_meta_info;             // logging meta data
} ufpm_activate_md_func_req_t;

typedef struct _ufpm_enable_md_func_req {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 reserved[3];
    ufpm_mpu_info_t mpuInfo;
} ufpm_enable_md_func_req_t;

typedef struct _ufpm_send_md_ep0_msg {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 reserved[3];
    kal_uint8 pBuffer[1024]; //hifusb_setup_packet_t packet;
} ufpm_send_md_ep0_msg_t;

typedef struct _ufpm_deactivate_md_func_rsp {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 result; // bool
    kal_uint8 reserved[2];
    tethering_deactivate_meta_info_t tethering_meta_info;
    logging_deactivate_meta_info_t logging_meta_info;
} ufpm_deactivate_md_func_rsp_t;

typedef struct _ufpm_t {
    // USB properties
    ufpm_usb_property_t ufpm_usb_property[UFPM_FUNC_MODE_MAX_NUM];

    // FSM for USB data path
    ufpm_usb_state_e ufpm_usb_sm;

    // USB bus state
    ufpm_bus_state_e ufpm_bus_state;

    // MPU information
    ufpm_mpu_info_t ufpm_mpu_info;

    // USB EP cache table for mapping speed-up. ufpm_ep_mapping_cache_tlb[0][i] for EP IN, ufpm_ep_mapping_cache_tlb[1][i] for EP OUT
    kal_uint8 ufpm_ep_mapping_cache_tlb[2][UFPM_USB_MAP_MAX_SIZE];

    // L4C MSG flag
    kal_bool is_l4c_msg;

    // L4C MSG source ID
    kal_uint8 l4c_src_id;

} ufpm_t;

/**************************************
 * L4C and UFPM Structure
 **************************************/
typedef struct _l4c_ufpm_activate_md_fast_path_req {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 src_id; // l4c source ID
    kal_uint8 reserved[2];
} l4c_ufpm_activate_md_fast_path_req_struct;

typedef struct _l4c_ufpm_enable_md_fast_path_req {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 src_id; // l4c source ID
    kal_uint8 reserved[2];
} l4c_ufpm_enable_md_fast_path_req_struct;

typedef struct _l4c_ufpm_deactivate_md_fast_path_req {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 src_id; // l4c source ID
    kal_uint8 reserved[2];
} l4c_ufpm_deactivate_md_fast_path_req_struct;

typedef struct _l4c_ufpm_disable_md_fast_path_req {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 src_id; // l4c source ID
    kal_uint8 reserved[2];
} l4c_ufpm_disable_md_fast_path_req_struct;

typedef struct _l4c_ufpm_deactivate_md_fast_path_cnf{
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 result; // bool
    kal_uint8 src_id; // l4c source ID
    kal_uint8 reserved[1];
} l4c_ufpm_deactivate_md_fast_path_cnf_struct;

typedef struct _l4c_ufpm_activate_md_fast_path_cnf{
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 result; // bool
    kal_uint8 src_id; // l4c source ID
    kal_uint8 reserved[1];
} l4c_ufpm_activate_md_fast_path_cnf_struct;

typedef struct _l4c_ufpm_disable_md_fast_path_cnf{
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 result; // bool
    kal_uint8 src_id; // l4c source ID
    kal_uint8 reserved[1];
} l4c_ufpm_disable_md_fast_path_cnf_struct;

typedef struct _l4c_ufpm_enable_md_fast_path_cnf{
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 result; // bool
    kal_uint8 src_id; // l4c source ID
    kal_uint8 reserved[1];
} l4c_ufpm_enable_md_fast_path_cnf_struct;

#endif  // _UFPM_STRUCT_H

