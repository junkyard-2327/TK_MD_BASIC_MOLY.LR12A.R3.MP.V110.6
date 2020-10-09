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
 *   d2pm_wo_struct.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *  
 *   
 *
 * ==========================================================================
 *
 ****************************************************************************/

#ifndef  _D2PM_WO_STRUCT_H_
#define  _D2PM_WO_STRUCT_H_

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ps_public_enum.h"
#include "d2pm_public_defs.h"
#include "netinfo_common_struct.h"

// Implementation
/*******************************************************************************
* D2PM to WO REQ                                                              *
*******************************************************************************/
typedef struct
{
    kal_uint32 src_id;
}d2pm_wo_comm_prv_struct;

typedef ip_info_struct d2pm_wo_ip_info_struct;
typedef net_info_struct d2pm_wo_net_info_struct;
typedef if_info_struct d2pm_wo_if_info_struct;

typedef struct
{
    kal_uint32 src_id;
    d2pm_wo_ip_info_struct ip_info;
    d2pm_wo_if_info_struct if_info;
    kal_bool pcscf_restore;
    kal_bool fb_cid_present;
    kal_uint32 fb_cid;
}d2pm_wo_act_data_call_req_prv_struct;

typedef d2pm_wo_comm_prv_struct d2pm_wo_deact_data_call_req_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_abort_data_call_req_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_mod_data_call_req_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_get_data_call_list_req_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_get_dynamic_param_req_prv_struct;

typedef struct
{
    kal_uint32    src_id;
    kal_uint32    linked_pfid;
}d2pm_wo_set_packet_filter_req_prv_struct;

/*******************************************************************************
* WO TO D2PM CNF                                                              *
*******************************************************************************/
typedef d2pm_wo_comm_prv_struct d2pm_wo_act_data_call_cnf_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_deact_data_call_cnf_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_abort_data_call_cnf_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_mod_data_call_cnf_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_get_data_call_list_cnf_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_get_dynamic_param_cnf_prv_struct;

/*******************************************************************************
* WO TO D2PM IND                                                              *
*******************************************************************************/
typedef struct
{
    kal_uint32 src_id;
    kal_uint8  apn[APN_STRING_LEN];
    d2pm_wo_net_info_struct net_info;
}d2pm_wo_get_dynamic_param_ind_prv_struct;

typedef struct
{
    kal_uint32 src_id;
    d2pm_wo_ip_info_struct ip_info;
}d2pm_wo_get_pdp_address_ind_prv_struct;

typedef d2pm_wo_comm_prv_struct d2pm_wo_pdn_disconn_ind_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_pdn_nw_act_ind_prv_struct;
typedef d2pm_wo_pdn_disconn_ind_prv_struct d2pm_wo_pdn_nw_deact_ind_prv_struct;    // D2PM uses this one
typedef d2pm_wo_comm_prv_struct d2pm_wo_get_data_call_list_ind_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_get_secondary_dynamic_param_ind_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_get_qos_ind_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_get_tft_ind_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_get_packet_filter_ind_prv_struct;
typedef d2pm_wo_comm_prv_struct d2pm_wo_mod_data_call_ind_prv_struct;

#endif /* _D2PM_WO_STRUCT_H */

