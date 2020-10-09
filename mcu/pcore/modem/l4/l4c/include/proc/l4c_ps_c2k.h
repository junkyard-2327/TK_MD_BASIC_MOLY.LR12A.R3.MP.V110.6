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
 * l4c_ps_c2k.h
 *
 * Project:
 * --------
 *   DENALI
 *
 * Description:
 * ------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *****************************************************************************/

#ifndef _L4C_PS_C2K_H
#define _L4C_PS_C2K_H

#ifdef __CDMA2000_RAT__

#include "l4c_context.h"
#include "kal_public_api.h"
#include "mmi_sm_enums.h"
#include "mmi_l3_enums.h"
#include "ps_public_enum.h"
#include "ppp_l4_enums.h"
#include "l4c_common_enum.h"
#include "tcm_context.h"
#include "c2k_irat_msg_struct.h"
#include "irat_common_enums.h"
#include "l4c_esm_struct.h"
#include "rac2l4c_struct.h"

typedef struct{
    LOCAL_PARA_HDR
    l4c_c2k_irat_context_struct l4c_c2k_context;
}l4c_c2k_ut_check_context_ind_struct;


typedef struct{
    LOCAL_PARA_HDR
    l4c_c2k_lwcg_irat_context_struct l4c_c2k_lwcg_context;
}l4c_c2k_ut_check_lwcg_context_ind_struct;


extern kal_bool l4c_c2k_l2c_as_irat_hdlr();

extern void l4c_c2k_lte_rat_change_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_lte_c2k_rat_change_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_attach_result_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_c2k_send_rat_change_cnf_to_c2k(irat_result_enum err_code, kal_bool resync, kal_bool is_irat_success);

extern void l4c_c2k_config_irat_state(l4c_c2k_irat_state_enum new_state);

extern void l4c_c2k_config_c2k_to_lte_src_rat(irat_ps_type_enum new_rat);

extern void l4c_c2k_record_l2c_stage_1_temp_info(l4cesm_rat_change_ind_struct *rat_change_ind_msg);
extern void l4c_c2k_record_c2l_stage_1_temp_info(l4cesm_rat_change_cnf_struct *rat_change_cnf_msg);

extern void l4c_c2k_clear_c2l_irat_related_context();

extern void l4c_c2k_rat_select_ind_hdlr(l4crac_rat_select_ind_struct *rat_select_ind);

extern void l4crac_gmss_stop_search_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);


#endif

#endif /* #ifndef _L4C_PS_C2K_H */

