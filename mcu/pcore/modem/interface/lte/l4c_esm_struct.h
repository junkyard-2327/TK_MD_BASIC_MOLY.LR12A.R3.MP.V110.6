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
 *   l4c_esm_struct.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   message and common structure definition between L4C and ESM module
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 04 16 2015 jeffery.chen
 * [MOLY00098964] [UMOLY][UBIN] NAS signaling Phase2 mode switch implementation
 * Max's cl1159418: merge c2k related code..
 *
 ****************************************************************************/


#ifndef  L4C_ESM_STRUCT_INC
#define  L4C_ESM_STRUCT_INC

#include "l3_inc_local.h"
#include "irat_common_struct.h"
#include "l3_inc_enums.h"
#include "sm2l4c_struct.h"
#include "c2k_irat_msg_struct.h"


/** 
  * According to Multimode interRAT message processing rules, 
  * the receiving module, said... the MOD_A, need to process this message in the following way  
  * - (1) Relay this interRAT message to next module, said... the MOD_B, first
  * - (2) then MOD_A can start to do processing of this message
  * because when a RD designs a new MM iRAT feature, he/she will assume others process these messages in this way
  * this rules make sures the interRAT message flow is as expected
  */
typedef struct 
{
    LOCAL_PARA_HDR
    irat_type_enum              irat_type;
    rat_type_enum               source_rat;
    rat_type_enum               target_rat;
    emm2mm_irat_info_struct     emm_info;
    esm2sm_irat_info_struct     esm_info;
    void                        *as_info_ptr;

} l4cesm_rat_change_ind_struct;

/** 
  * According to Multimode interRAT message processing rules, 
  * the receiving module, said... the MOD_A, need to process this message in the following way  
  * - (1) Relay this interRAT message to next module, said... the MOD_B, first
  * - (2) then MOD_A can start to do processing of this message
  * because when a RD designs a new MM iRAT feature, he/she will assume others process these messages in this way
  * this rules make sures the interRAT message flow is as expected
  */
typedef struct
{
    LOCAL_PARA_HDR
    irat_type_enum              irat_type;
    rat_type_enum               source_rat;
    rat_type_enum               target_rat;
    irat_result_enum            irat_result;
    void                        *as_info_ptr;
    kal_bool                    resync;
} l4cesm_rat_change_rsp_struct;

/** 
  * According to Multimode interRAT message processing rules, 
  * the receiving module, said... the MOD_A, need to process this message in the following way  
  * - (1) Relay this interRAT message to next module, said... the MOD_B, first
  * - (2) then MOD_A can start to do processing of this message
  * because when a RD designs a new MM iRAT feature, he/she will assume others process these messages in this way
  * this rules make sures the interRAT message flow is as expected
  */
typedef struct
{
    LOCAL_PARA_HDR
    irat_type_enum              irat_type;
    rat_type_enum               source_rat;
    rat_type_enum               target_rat;
    mm2emm_irat_info_struct     mm_info;
    sm2esm_irat_info_struct     sm_info;
    void                        *as_info_ptr;

} l4cesm_rat_change_req_struct;

/** 
  * According to Multimode interRAT message processing rules, 
  * the receiving module, said... the MOD_A, need to process this message in the following way  
  * - (1) Relay this interRAT message to next module, said... the MOD_B, first
  * - (2) then MOD_A can start to do processing of this message
  * because when a RD designs a new MM iRAT feature, he/she will assume others process these messages in this way
  * this rules make sures the interRAT message flow is as expected
  */
typedef struct
{
    LOCAL_PARA_HDR
    irat_type_enum              irat_type;
    rat_type_enum               source_rat;
    rat_type_enum               target_rat;
    irat_result_enum            irat_result;
    void                        *as_info_ptr;
    kal_bool                    is_attach_needed;
} l4cesm_rat_change_cnf_struct;

#ifdef __SGLTE__ 
typedef struct
{
    LOCAL_PARA_HDR
    rat_enum                        source_rat;
    rat_enum                        target_rat;
    emm_mm_context_info_struct      mm_info;
    sm2esm_irat_info_struct         sm_info;
} l4c_esm_ps_switch_context_transfer_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    rat_enum                        source_rat;
    rat_enum                        target_rat;
    emm_mm_context_info_struct      emm_info;
    esm2sm_irat_info_struct         esm_info;
} l4c_esm_ps_switch_context_transfer_ind_struct;

typedef l4c_ps_switch_context_transfer_cnf_struct l4c_esm_ps_switch_context_transfer_rsp_struct;

#endif /* __SGLTE__  */


#endif   /* ----- #ifndef L4C_ESM_STRUCT_INC ----- */

