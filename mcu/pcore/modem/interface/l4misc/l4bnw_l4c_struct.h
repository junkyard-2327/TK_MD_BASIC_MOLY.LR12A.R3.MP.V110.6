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
 *   l4bnw_l4c_struct.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *
 *
 * Author:Allen Hsu
 * -------
 *  
 *   
 *
 * ==========================================================================
 * $Log$
 *
 * 06 19 2019 vend_mtb_mobiveil012
 * [MOLY00414957] [Tinno][U303AF][VZW][phase 1][LTE AT Commands for Test Automation][AT_COM-2.16]  Failed at step 8 : UE failed to verify resspond with the new configuration as set in step 5.
 * 	
 * 	[MOLY00414957][ATP-L4BNW-L4C] REG_ILM instead of CxREG URC
 *
 * 01 11 2019 ravindra.kara
 * [MOLY00377769] [GSMA TS.37][LR12A.R3] block illegal UE for multiple SIM (Interface)
 * Interface Related Files.
 *
 * 12 18 2018 lucien.li
 * [MOLY00372569] [SIMLOCK] Porting SMB LOCK request 8,9,10 (partial released) (L4 part) (.h)
 * 	
 * 	[Interface][SML] L4 part
 *
 * 10 31 2017 lucien.li
 * [MOLY00286407] [L4 & DDM] EGTYPE refactoring
 * [R3] L4C PS action control enhancement
 *
 * 09 15 2017 wenxiu.zhao
 * [MOLY00275991] [CMCC][6293]OP01 LOCK support- L4C part
 * .l4c-15
 *
 *
 ****************************************************************************/


#ifndef  _L4BNW_L4C_STRUCT_H
#define  _L4BNW_L4C_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"

#include "rac_gmss_struct.h"
#include "ps_public_enum.h"
#include "l3_inc_enums.h"
#include "atp_l4b_struct.h"
#include "l4c_common_enum.h"
#include "ddm_l4bnw_struct.h"
#include "rac2l4c_struct.h"


typedef rac_gmss_suspend_egreg_update_ind_struct l4bnw_l4c_suspend_egreg_update_ind_struct;
typedef atp_l4bnw_sim_lock_req_struct l4bnw_l4c_sim_lock_req_struct; //align to atp_l4bnw_sim_lock_req_struct

typedef atp_l4bnw_sim_lock_cnf_struct l4bnw_l4c_sim_lock_cnf_struct; //align to atp_l4bnw_sim_lock_cnf_struct

typedef ddm_l4bnw_ps_type_config_req_struct l4bnw_l4c_ps_type_config_req_struct;
typedef ddm_l4bnw_ps_type_config_cnf_struct l4bnw_l4c_ps_type_config_cnf_struct;
typedef ddm_l4bnw_ps_reattach_config_req_struct l4bnw_l4c_ps_reattach_config_req_struct;


typedef l4crac_reg_state_ind_struct l4bnw_l4c_reg_state_ind_struct;

typedef struct{
    LOCAL_PARA_HDR
    kal_bool protocol_lock;
    l4c_imei_meid_action_enum lock_action;
}l4bnw_l4c_imei_meid_lock_req_struct; 

typedef struct
{
    LOCAL_PARA_HDR
    l4c_service_mode_op_enum op;
} l4bnw_l4c_service_mode_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool result;
} l4bnw_l4c_service_mode_cnf_struct;

#endif /* _L4BNW_L4C_STRUCT_H */
