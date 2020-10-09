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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * ddm_common_struct.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _DDM_COMMON_STRUCT_H
#define _DDM_COMMON_STRUCT_H

#include "kal_public_defs.h"
#include "d2pm_public_defs.h"
#include "atcmd_struct.h"
#include "netinfo_common_struct.h"

#define MAX_PCSCF_NUMBER 6

typedef enum {
    DDM_APN_TYPE_UNKNOWN      = 0x00000000,
    DDM_APN_TYPE_DEFAULT      = 0x00000001,
    DDM_APN_TYPE_IMS          = 0x00000002,
    DDM_APN_TYPE_MMS          = 0x00000004,
    DDM_APN_TYPE_SUPL         = 0x00000008,
    DDM_APN_TYPE_DUN          = 0x00000010,
    DDM_APN_TYPE_HIPRI        = 0x00000020,
    DDM_APN_TYPE_FOTA         = 0x00000040,
    DDM_APN_TYPE_CBS          = 0x00000080,
    DDM_APN_TYPE_EMERGENCY    = 0x00000100,
    DDM_APN_TYPE_IA           = 0x00000200,
    DDM_APN_TYPE_DM           = 0x00000400,
    DDM_APN_TYPE_WAP          = 0x00000800,
    DDM_APN_TYPE_NET          = 0x00001000,
    DDM_APN_TYPE_CMMAIL       = 0x00002000,
    DDM_APN_TYPE_TETHERING    = 0x00004000,
    DDM_APN_TYPE_RCSE         = 0x00008000,
    DDM_APN_TYPE_XCAP         = 0x00010000,
    DDM_APN_TYPE_RCS          = 0x00020000,
    DDM_APN_TYPE_RCS_PCSCF    = 0x00040000,
    DDM_APN_TYPE_VSIM         = 0x00080000,
} ddm_apn_type_enum;

/*Enum used by DDM to inform L4BPDN, about the PS_SERVICE_TYPE (MMS, XCAP etc.,)*/
typedef enum
{
    PS_SERVICE_TYPE_NONE = 0,
    PS_SERVICE_TYPE_MMS = 1
}ps_service_type_enum;

typedef struct {
    kal_uint32  apn_type_activate;  /* ddm_apn_type */
    kal_uint32  apn_type_all;       /* ddm_apn_type */
} apn_type_info_struct;

typedef struct {
     kal_uint32 network_interface_id;
} network_interface_id_info_struct;

typedef enum
{
    //   DDM_RES_SUCC_RETRY, not exist
    DDM_RES_NONE = D2PM_RES_NONE,
    DDM_RES_FAIL = D2PM_RES_FAIL,
    DDM_RES_SUCC = D2PM_RES_SUCC,
    // a subsequent CID
    DDM_RES_FAIL_ABORT = D2PM_RES_FAIL_ABORT,
    DDM_RES_SUCC_ABORT = D2PM_RES_SUCC_ABORT,
    DDM_RES_FAIL_CONT = D2PM_RES_FAIL_CONT,
    DDM_RES_SUCC_CONT = D2PM_RES_SUCC_CONT,
    // otherwise
    DDM_RES_REJ = D2PM_RES_REJ,
    DDM_RES_RETRY = D2PM_RES_RETRY,
    DDM_RES_MAX = 0x7FFFFFFF
}ddm_res_enum;

// => Common strcuture
typedef atcmd_request_type_enum ddm_req_type_enum;
//typedef at_cgpaddr_ind_struct ddm_ip_info_struct;    // [GT] NOT to use at_cmd format for Wi-Fi, etc.
typedef ip_info_struct ddm_ip_info_struct;
//typedef at_cgcontrdp_ind_struct ddm_net_info_struct;    // [GT] NOT to use at_cmd format for Wi-Fi, etc.
typedef net_info_struct ddm_net_info_struct;
typedef retry_info_struct ddm_retry_info_struct;

typedef ims_info_struct ddm_ims_info_struct;
// => AT Command interface
typedef at_cgact_req_struct ddm_get_data_call_list_req_struct;
typedef at_cgact_ind_struct ddm_get_data_call_list_cnf_struct;
typedef at_cgact_ind_struct ddm_get_data_call_list_ind_struct;
typedef at_cgcontrdp_req_struct ddm_get_dynamic_param_req_struct;
typedef at_cgcontrdp_ind_struct ddm_get_dynamic_param_cnf_struct;
typedef at_cgcontrdp_ind_struct ddm_get_dynamic_param_ind_struct;
typedef at_cgscontrdp_req_struct ddm_get_secondary_dynamic_param_req_struct;
typedef at_cgscontrdp_ind_struct ddm_get_secondary_dynamic_param_cnf_struct;
typedef at_cgscontrdp_ind_struct ddm_get_secondary_dynamic_param_ind_struct;
typedef at_cgpaddr_req_struct ddm_get_pdp_address_req_struct;
typedef at_cgpaddr_ind_struct ddm_get_pdp_address_cnf_struct;
typedef at_cgpaddr_ind_struct ddm_get_pdp_address_ind_struct;
typedef at_cgeqosrdp_req_struct ddm_get_qos_req_struct;
typedef at_cgeqosrdp_ind_struct ddm_get_qos_cnf_struct;
typedef at_cgeqosrdp_ind_struct ddm_get_qos_ind_struct;
typedef at_cgtftrdp_req_struct ddm_get_tft_req_struct;
typedef at_cgtftrdp_ind_struct ddm_get_tft_cnf_struct;
typedef at_cgtftrdp_ind_struct ddm_get_tft_ind_struct;
typedef at_eglnkpf_req_struct ddm_set_packet_filter_req_struct;
typedef at_cgtftrdp_ind_struct ddm_set_packet_filter_cnf_struct;
typedef at_cgtftrdp_ind_struct ddm_set_packet_filter_ind_struct;
typedef at_eglnkpf_req_struct ddm_get_packet_filter_req_struct;
typedef at_eglnkpf_ind_struct ddm_get_packet_filter_cnf_struct;
typedef at_eglnkpf_ind_struct ddm_get_packet_filter_ind_struct;
typedef at_cgcmod_req_struct ddm_modify_data_call_req_struct;
typedef at_cmd_cnf_struct ddm_modify_data_call_cnf_struct;    // [GT] at_cgcmod_req_struct does NOT exist
typedef at_cmd_cnf_struct ddm_modify_data_call_ind_struct;    // [GT] at_cgcmod_req_struct does NOT exist

#endif // _DDM_COMMON_STRUCT_H


