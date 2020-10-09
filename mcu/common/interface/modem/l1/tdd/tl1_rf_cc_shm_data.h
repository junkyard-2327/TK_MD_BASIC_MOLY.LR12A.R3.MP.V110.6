/*******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/


/*****************************************************************************
 *
 * Filename:
 * ---------
 *   mml1_rf_cc_shm_data.h
 *
 * Project:
 * --------
 *   TK6291 Project
 *
 * Description:
 * ------------
 *   MMRF share memory data
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*===============================================================================*/

#ifndef _TL1_RF_CC_SHM_DATA_H_
#define _TL1_RF_CC_SHM_DATA_H_

#include "kal_general_types.h"
#include "mmrf_kal.h"

#include "tl1d_custom_drdi.h"
#include "t12193.h"
#include "tl1cal_ast.h"
#include "tl1d_rf_cal_poc_data.h"

#ifdef __TAS_SUPPORT__
#include "tl1d_custom_rf_tas_struct.h"
#endif
typedef struct{
ast_tl1cal_tempdacData_T             dac;
ast_tl1cal_afcData_T                 afc;
ast_tl1cal_capData_T                 capid;
ast_tl1cal_pathlossData_T            agc[3];
ast_tl1cal_txdacData_T               apc[3]; 
ast_tl1cal_txPdData_T                pdcomp[3];
}T_AST_RF_CAL_DATA_T;

typedef T_MIPI_CUSTOMIZATION_STRUCT T_AST_RF_MIPI_DATA_T; 
typedef T_TD_CUSTOMIZATION_STRUCT T_AST_RF_CUSTOM_DATA_T;
typedef T_RF_PROG_SEQ_STRUCT T_AST_RF_TIMING_DATA_T;
typedef TDS_RF_POC_COMP_T T_AST_RF_POC_DATA_T;
typedef T_TD_CUSTOMIZATION_DAT_STRUCT T_AST_RF_DAT_DATA_T;


//Tl1 Custom Data SHM Definition
MMRF_CUSTOM_DECLARE_SHARED_VAR( T_AST_RF_CUSTOM_DATA_T, TDS_RF_COMMON_DATA_SHM);
MMRF_CUSTOM_DECLARE_SHARED_VAR( T_AST_RF_MIPI_DATA_T, TDS_RF_MIPI_DATA_SHM);
MMRF_CUSTOM_DECLARE_SHARED_VAR( T_AST_RF_CAL_DATA_T, TDS_RF_CAL_DATA_SHM);
MMRF_CUSTOM_DECLARE_SHARED_VAR( T_AST_RF_TIMING_DATA_T, TDS_RF_TIMING_DATA_SHM);
MMRF_CUSTOM_DECLARE_SHARED_VAR( T_AST_RF_POC_DATA_T, TDS_RF_POC_DATA_SHM);
#ifdef __TAS_SUPPORT__
MMRF_CUSTOM_DECLARE_SHARED_VAR( T_TD_CUSTOMIZATION_TAS_STRUCT, TDS_RF_TAS_DATA_SHM);
#endif
MMRF_CUSTOM_DECLARE_SHARED_VAR( T_AST_RF_DAT_DATA_T, TDS_RF_DAT_DATA_SHM);

#endif //#ifndef _MML1_RF_CC_SHM_DATA_H_
