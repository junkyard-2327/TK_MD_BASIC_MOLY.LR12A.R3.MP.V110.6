/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
 * l4c_eons_context.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file comprises context for EONS
 *
 * Author:
 * -------
 *
 ****************************************************************************/

#ifndef _L4C_EONS_CONTEXT_H
#define _L4C_EONS_CONTEXT_H

#include "kal_general_types.h"
#include "layer4_context.h"
#include "ps_public_enum.h"


#ifdef __EONS_SUPPORT__


#define MAX_EONS_TABLE_SIZE 50


#define NUM_EONS_SIM_FILES 2

#define EONS_OPL_MIN_REC_LEN 8
#define EONS_PNN_MIN_REC_LEN 3

#define EONS_FULL_NW_NAME_TAG 0X43
#define EONS_SHORT_NW_NAME_TAG 0X45
#define EONS_ADDITIONAL_INFO_TAG 0X80

typedef enum {
    EONS_STATE_INIT,
    EONS_STATE_SIM_NOT_ALLOW, /* Disabled by APE or SIM */
    EONS_STATE_READY,
    EONS_STATE_REFRESH,
    EONS_STATE_REFRESH_PENDING
} eons_state_enum;

typedef enum {
    EONS_SIM_NO_SUPPORT,
    EONS_SIM_PNN_SUPPORT = 0x01,
    EONS_SIM_OPL_SUPPORT = 0x02,
    EONS_SIM_OPL_PNN_SUPPORT = EONS_SIM_PNN_SUPPORT|EONS_SIM_OPL_SUPPORT,
} eons_file_support_enum;

typedef enum {
    EONS_OPL_IDX = 0,
    EONS_PNN_IDX
} eons_file_idx_enum;

typedef struct
{
    kal_uint8 rec_size;
    kal_uint8 num_of_rec;
} l4c_eons_file_info_struct;

typedef struct
{
    kal_uint8 plmn_id[MAX_PLMN_LEN + 1];
    kal_uint16 area_code_start; /*lac_or_tac_value*/
    kal_uint16 area_code_end;
    kal_uint8 pnn_index;
    kal_uint8 long_dcs; /* smsal_dcs_enum */
    kal_uint8 long_oper_str[MAX_NW_NAME_LEN + 1];
    kal_uint8 short_dcs; /* smsal_dcs_enum */
    kal_uint8 short_oper_str[MAX_NW_NAME_LEN + 1];
} l4c_eons_table_struct;

typedef struct
{
    kal_bool is_eons_enabled;
    eons_state_enum eons_state;
    kal_uint8 is_opl_pnn_support;
    l4c_eons_file_info_struct eons_sim_file_info[NUM_EONS_SIM_FILES];
    kal_uint8 eons_curr_record;
    kal_uint8 eons_table_size;
    l4c_eons_table_struct *eons_table;
    kal_bool is_next_mod_startup_needed;
} l4c_eons_context_struct;

extern l4c_eons_context_struct l4c_eons_cntxt_g[L4_MAX_SIM_NUM];
extern l4c_eons_context_struct *l4c_eons_ptr;
#define EONS_PTR     l4c_eons_ptr

#endif

#endif /* _L4C_EONS_CONTEXT_H */
