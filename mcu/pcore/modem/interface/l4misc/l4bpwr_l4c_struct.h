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


#ifndef  _L4BPWR_L4C_STRUCT_H
#define  _L4BPWR_L4C_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "l4c_common_enum.h"


typedef struct{
    LOCAL_PARA_HDR
    kal_bool sim_lock;
    kal_bool rat_lock;
    l4_op01_action_enum op01_action;
}l4bpwr_l4c_op01_lock_req_struct; 

typedef struct{
    LOCAL_PARA_HDR
    kal_bool result;//reseved
}l4bpwr_l4c_op01_lock_cnf_struct; 

typedef struct {
    LOCAL_PARA_HDR

    /* bitmap: each bit represents one protocol
       1: PS 1 / 2: PS 2  /  3: PS 1 + PS 2  ....
    */
    kal_uint8 target_ps;
} l4bpwr_l4c_service_mode_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    /* L4 might add new parameters here in future  */
} l4bpwr_l4c_service_mode_req_struct;

typedef struct {
    LOCAL_PARA_HDR

    kal_bool  result;
    kal_uint8 cause;    // (Reserved field)
} l4bpwr_l4c_service_mode_cnf_struct;

#endif /* _L4BNW_L4C_STRUCT_H */
