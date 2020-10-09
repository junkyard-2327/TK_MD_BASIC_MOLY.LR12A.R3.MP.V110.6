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
 *   ddm_l4bnw_struct.h
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
 * $Log$
 *
 * 10 09 2018 zhili.guo
 * [MOLY00351595] [Rose][Sylvia][P0][BSP+][TE-MTBF]md1:(MCU_core1.vpe0.tc0(VPE2)) [Fatal error(task)] err_code1:0x00000305 err_code2:0x88880160 err_code3:0xCCCCCCCC MD Offender:L4
 * Merge RAT_IND in DDM and IMSM
 *
 * 10 31 2017 lucien.li
 * [MOLY00286407] [L4 & DDM] EGTYPE refactoring
 * [R3] L4C PS action control enhancement
 *
 * 09 19 2017 allen.hsu
 * [MOLY00276268] [6293][Power-on/NW] R2 refine
 * add network state in network_info.
 *
 *
 *
 ****************************************************************************/


#ifndef  _DDM_L4BNW_STRUCT_H
#define  _DDM_L4BNW_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "l3_inc_enums_public.h"
#include "l4bnw_public_struct.h"
#include "ps_public_enum.h"

//typedef struct {
//    LOCAL_PARA_HDR

    /** Only expects the below values from rat_enum: 
     *    RAT_NONE     = 0,
     *    RAT_GSM      = 1,
     *    RAT_UMTS     = 2,
     *    RAT_LTE      = 4,    
     *    RAT_C2K      = 16,
     *    RAT_1xRTT    = 32,
     *    RAT_HRPD     = 64,
     */
 //   rat_enum currently_attached_rat;
//    l4bnw_public_attached_network_info_struct attached_network_info;
//} ddm_l4bnw_attached_rat_ind_struct;


typedef struct {
    LOCAL_PARA_HDR
    l4_ps_type_config_enum  ps_type;
    kal_bool    follow_on_request;      // TS 24.008 -FOR, make GMM prolong an established PS signalling connection
} ddm_l4bnw_ps_type_config_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4_ps_config_result_enum   result;
} ddm_l4bnw_ps_type_config_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool    is_reattach;
} ddm_l4bnw_ps_reattach_config_req_struct;


#endif /* _DDM_L4BNW_STRUCT_H */
