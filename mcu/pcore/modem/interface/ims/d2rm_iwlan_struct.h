/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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

#ifndef __D2RM_IWLAN_STRUCT_H__
#define __D2RM_IWLAN_STRUCT_H__ 

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_trace.h"
#include "sbp_public_utility.h"
#include "ps_public_utility.h"
#include "dhl_def.h"

#include "sim_ps_struct.h"
#include "pdn_public_defs.h"

typedef enum {
    RPL_3GPP_RAT_ALL = 0,
    RPL_3GPP_RAT_23G,
    RPL_3GPP_RAT_4G,
} rpl_3gpp_rat_specified_e;

typedef struct {
    iwlan_pdn_apn_type_e type;
    iwlan_rpl_param_struct rpl_param;
    kal_uint8 rpl_eran[IWLAN_RAN_TYPE_CNT][RPL_RAN_PRIOR_MAX];
    kal_uint32 rpl_seq;
    kal_bool on_cell_dreg;    //if == KAL_TRUE means PDN on cellular should be dreg
    kal_bool on_wlan_dreg;    //if == KAL_TRUE means PDN on wlan should be dreg
    rpl_3gpp_rat_specified_e rpl_3gpp_rat_specified_initial; 
    rpl_3gpp_rat_specified_e rpl_3gpp_rat_specified_handover;
    kal_bool wifi_asc_state;  //if == KAL_TURE means wifi assoc, KAL_FALSE means wifi deassoc
    kal_bool cell_no_ps;
} d2rm_iwlan_rpl_struct;

typedef struct {
    LOCAL_PARA_HDR
    iwlan_rpl_evnt_e event;
    d2rm_iwlan_rpl_struct rpl;
} d2rm_iwlan_wans_rpl_update_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    iwlan_pdn_apn_type_e type;
} d2rm_d2rm_wans_rpl_update_ind_struct;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct {
    LOCAL_PARA_HDR

    iwlan_pdn_apn_type_e type;
    rpl_reqtype_e        req;
    iwlan_ran_e          ran;
    kal_uint32           cause;
} d2rm_iwlan_wans_rpl_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    iwlan_pdn_apn_type_e type;
    kal_uint32  rpl_seq;
} d2rm_iwlan_wans_rpl_update_rsp_struct;

typedef struct {
    LOCAL_PARA_HDR
        
    kal_uint8 cid;
    kal_uint8 eran;
    kal_bool is_act;
    iwlan_pdn_apn_type_e apntype;
    kal_uint32 default_bid;
} d2rm_iwlan_wans_pdninfo_rpt_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
        
    kal_uint32 rpl_seq;
} d2rm_iwlan_wans_imscfg_hocmp_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    iwlan_pdn_apn_type_e type;
} d2rm_iwlan_wans_rove_trtl_req_struct;

typedef d2rm_iwlan_wans_rove_trtl_req_struct d2rm_iwlan_wans_wroveout_trtl_req_struct;
typedef d2rm_iwlan_wans_rove_trtl_req_struct d2rm_iwlan_wans_wrovein_trtl_req_struct;

#endif // __IWLAN_STRUCT_H__
