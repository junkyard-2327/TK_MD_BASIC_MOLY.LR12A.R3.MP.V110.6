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
 *   tcm_eval_enums.h 
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   common enum definition between TCM and EVAL module
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 03 13 2019 rex.wu
 * [MOLY00387272] [Gen93][LR12A.R3.MP][US_DEV][VzW][2018_OCT][Interface] Add EPS_REQ_TYPE_HANDOVER_OF_EMERGENCY related handling[Gen93][LR12A.R3.MP][LR12A.R3.MP.2019.2ND.US.DEV][ESM] Add EPS_REQ_TYPE_HANDOVER_OF_EMERGENCY related handling
 * 	
 * 	[Gen93][LR12A.R3.MP][Interface] Add EPS_REQ_TYPE_HANDOVER_OF_EMERGENCY and related codes
 *
 * 09 26 2016 vera.yeh
 * [MOLY00205116] [6293][ESM][TFTLIB] new feature/re-arch item porting to UMOLYA trunk
 * [ESM][OA] PS.DEV proting to UMOLYA.Trunk.
 * 	1. wlan offload IEI/interface/enum/structure
 * 	2. iLM rename for GEMINI_suspend/resume
 * 	3. LTE QCI default value
 *
 * 11 06 2012 yu.huang
 * [MOLY00005322] TATAKA merge to MOLY
 * [EVAL] Add EVAL related interfaces and common strust
 ****************************************************************************/


#ifndef  _TCM_EVAL_ENUMS_INC
#define  _TCM_EVAL_ENUMS_INC


#include "ps_public_struct.h"
#include "l3_inc_enums.h"

#define MAX_APN_LEN                     100


/***** common enum definition *****/
typedef enum
{
    TCMESM_REQ_REASON_NULL,
    TCMESM_REQ_REASON_REGISTER,
    TCMESM_REQ_REASON_ADD_PDN_CONN,
    TCMESM_REQ_REASON_ALLOC_BEARER_RSC,
    TCMESM_REQ_REASON_MOD_BEARER_RSC,
    TCMESM_REQ_REASON_DEACT_DED_BEARER,
    TCMESM_REQ_REASON_RMV_PDN_CONN

} tcmesm_req_reason_enum;


typedef enum
{
    EPS_REQ_TYPE_INITIAL_REQ = 1,
    EPS_REQ_TYPE_HANDOVER    = 2,
    EPS_REQ_TYPE_EMERGENCY   = 4,
    EPS_REQ_TYPE_HANDOVER_OF_EMERGENCY = 6 //24.008 CR2996_R14_C1-165109 handover of emergency bearer services
} eps_req_type_enum;


typedef enum
{
    EPS_PDN_TYPE_NONE   = 0,
    EPS_PDN_TYPE_IPV4   = 1,
    EPS_PDN_TYPE_IPV6   = 2,
    EPS_PDN_TYPE_IPV4V6 = 3

} eps_pdn_type_enum;


typedef enum
{
	WLAN_OFFLOAD_IND_3G4G_PROHIBIT 			= 0,
	WLAN_OFFLOAD_IND_3G_PROHIBIT_4G_ALLOW 	= 1,
	WLAN_OFFLOAD_IND_3G_ALLOW_4G_PROHIBIT 	= 2,
	WLAN_OFFLOAD_IND_3G4G_ALLOW 			= 3
} wlan_offload_ind_enum;


typedef enum
{
    TCMESM_EPSB_NONE,
    TCMESM_EPSB_ACTIVE,
    TCMESM_EPSB_MODIFY

} tcmesm_epsb_act_enum;


typedef enum
{
    TCMESM_MOD_NONE,
    TCMESM_MOD_QOS,
    TCMESM_MOD_TFT,
    TCMESM_MOD_QOS_TFT
    
} tcmesm_mod_type_enum;


typedef enum
{
    TCMESM_PROC_NONE,
    TCMESM_PROC_SUCCESS_IN_L4_VIEW,
    TCMESM_PROC_FAILURE_IN_L4_VIEW
    
} tcmesm_proc_result_enum;


#endif   /* ----- #ifndef _TCM_EVAL_ENUMS_INC ----- */

