/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
 *   ratcm_cse_struct.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log:$
 *
 * 05 07 2019 yanjuan.feng
 * [MOLY00403615] [CODE SYNC] 快速获取2/3/4G指定band下或者特定频点list下所有cell的信号强度和质量 - Interface
 * 	
 * 	.3G interface
 *
 * 06 28 2016 sherry.kuo
 * [MOLY00187005] [MM/RATCM] UMOLY sync to UMOLYA
 * sync CL2304944.
 *
 * 04 26 2016 sherry.kuo
 * [MOLY00175925] sync LR11 to UMOLY
 * .
 *
 * 06 18 2015 james-chi-ju.chang
 * [MOLY00122048] [6795] Request new feature to improve registration time of roaming case
 * 	.
 *
 * 12 15 2014 kun-lin.wu
 * [MOLY00078268] [UMOLY][R10][R11][MOLY CR] PS5 NAS check-in 6291_DEV and 6291_UESIM_DEV
 * 	.
 *
 * 05 31 2013 ye.yuan
 * [MOLY00024492] [Change Feature] CISE CSG code optimization
 * <saved by Perforce>
 *
 * 03 27 2013 c-hua.yang
 * [MOLY00009184] [URR] Multimode Merge to MOLY
 * .
 * 
 * 10 03 2012 rachel.liu
 * [MOLY00004236] [interface][service][kal]remove stack_ltlcom.h
 * .
 *
 * 01 30 2012 nicky.chou
 * removed!
 * .
 *
 * 11 08 2011 nicky.chou
 * removed!
 * .
 *
 * 12 16 2010 nicky.chou
 * removed!
 * .
 *
 * 10 20 2010 cosine.jheng
 * removed!
 * [RATCM][RHR]Check in ratcm file in uas\interface
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * Add copyright header.
 ****************************************************************************/

#ifndef _RATCM_CSE_STRUCT_H
#define _RATCM_CSE_STRUCT_H

/* MAUI_02828210, redundant header removal */
#include "ratcm_cse_enums.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "mcd_l3_inc_struct.h"
#include "l3_inc_local.h"

typedef struct
{
    LOCAL_PARA_HDR

    plmn_id_struct plmn_id;
} ratcm_cse_plmn_list_update_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR

    as_plmn_list_struct plmn_list;
    scan_type_enum scan_type;
    plmn_list_result_enum cause;
    freq_scan_3g_output_struct freq_scan_3g_output;
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
} ratcm_cse_plmn_list_cnf_struct;


typedef struct 
{ 
    LOCAL_PARA_HDR 
    kal_uint8 multi_plmn_count; 
    plmn_id_struct multi_plmn_id[MAX_NUM_MULTI_PLMN]; 
    as_cell_type_enum multi_cell_type[MAX_NUM_MULTI_PLMN];
    found_ind_source_enum source;
} ratcm_cse_plmn_found_ind_struct;


/* Jethro: Since RATCM_CSE_PLMN_LIST_STOP_CNF is an empty message, no structure is required for this message. */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#if defined(__3G_CSG_SUPPORT__) || defined(__LTE_RAT__)
typedef struct
{
    LOCAL_PARA_HDR

    as_csg_list_struct csg_list;
} ratcm_cse_csg_list_cnf_struct;
#endif

#endif /* _RATCM_CSE_STRUCT_H */
