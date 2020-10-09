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
 *   ddm_eval_struct.h
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
 * 02 13 2018 dennis.tsai
 * [MOLY00307270] [R3][top]【彩信】设卡1为主卡，用电信卡2发彩信发不出去
 * add ddm_eval mms pdn session control.
 *
 * 01 15 2018 zanya.peng
 * [MOLY00302408] [Zion][MT6739][O1][MP2][RDIT][VzW][LTE][DR][5.5_IMSRoam]RRCConnectionRequest TimeOut when T3417 10th expired.
 * 	
 * 	.
 *
 * 10 30 2017 dennis.tsai
 * add t3346 feature.
 * 
 ****************************************************************************/

#ifndef  _DDM_EVAL_STRUCT_H
#define  _DDM_EVAL_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"

#include "atcmd_struct.h"
#include "ps_public_enum.h"

#include "ps_public_struct.h"

typedef enum
{
	T_T3346,
	T_THROTTLING

}ddm_eval_backoff_timer_id_enum;


typedef struct {
    LOCAL_PARA_HDR
    at_cabtsri_ind_struct cabtsri_ind;
	ddm_eval_backoff_timer_id_enum backoff_timer_id;

} ddm_eval_cabtsri_ind_struct ;

typedef enum
{
    SERVICE_IS_MMS,
    SERVICE_MAX = 0x7FFFFFFF
} ddm_eval_ps_service_enum;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool                          state;                       // KAL_TRUE : service start, KAL_FALSE : service end
    ddm_eval_ps_service_enum      ps_service;
} ddm_eval_ps_service_notify_req_struct;

#endif
