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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   mml1_core.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   Multi-Mode Multi-RAT Layer1 core interface to MMRF
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
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
 *
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
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _MML1_CORE_H_
#define  _MML1_CORE_H_

/*===============================================================================*/

#include "kal_general_types.h"
#include "mml1_rf_cid.h"
/*===============================================================================*/

extern kal_eventgrpid L1CORE_POC_EG;
extern kal_eventgrpid L1CORE_SHM_EG;
extern kal_eventgrpid MMRF_L1CORE_NvramEvents;

typedef enum
{
   MML1_RF_IMM_SEND_BSI_SYSPLL            = 0x00000001,
   MML1_RF_IMM_READ_BSI_SYSPLL            = 0x00000002,
   MML1_MIPI_IMM_SEND_BSI_SYSPLL          = 0x00000004,
   MML1_MIPI_IMM_READ_BSI_SYSPLL          = 0x00000008,
   MML1_RF_IMM_SEND_BPI_SYSPLL            = 0x00000010,
   MML1_RF_IMM_READ_BPI_OUT_SYSPLL        = 0x00000020,
   MML1_RF_IMM_READ_BPI_SYSPLL            = 0x00000040,
   MML1_RF_IMM_SEND_BPI_MASK_SYSPLL       = 0x00000080,
   MML1_RF_IMM_READ_BPI_MASK_SYSPLL       = 0x00000100,
   MML1_RF_IMM_READ_BPI_CONFLICT_SYSPLL   = 0x00000200,
   MML1_RF_BPI_CONFLICT_RAT_CHECK_SYSPLL  = 0x00000400,
   MML1_RF_BPI_CONFLICT_CHECK_SYSPLL      = 0x00000800,
   MML1_RF_DUMP_BSILOGGER_SYSPLL          = 0x00001000,
   MML1_BBREG_DUMP_CALLBACK_SYSPLL        = 0x00002000,
   MMRF_INIT_PHASE_SYSPLL                 = 0x00004000,
   MMRF_RF_BPI_CONFLICT_CLEAR_SYSPLL      = 0x00008000
}MML1_BSITOP_SYSPLL_FUNC_E;

void MML1_RF_UpdateSupportRAT(void);
kal_bool MML1_RF_CheckSupportRAT(MML1_RF_RAT_T rat_type);

void MML1_RF_Memory_Dump_Init(void);

void MML1_RF_InitPhase1(void);
void MML1_RF_InitPhase2(void);
void MML1_RF_Get_Cal_Data_Download_Info( kal_uint8 rat );

void MML1_RF_CCCI_Register(void);
void MML1_RF_Info_Output_System_Trace(void);

void MML1_RF_L1CoreSHMDataInitPhase1(void);
void MML1_RF_L1coreSHMUpdate2LocalPhase1(void);
void MML1_RF_L1CoreSHMDataInitPhase2(void);
void MML1_RF_L1coreSHMUpdate2LocalPhase2(void);

void MML1_MIPI_Init(void);
void MML1_RF_FE_COMPONENTS_Init(void);

void MMRF_NVRAM_ReadStart(ilm_struct *ilm_ptr);
void MMRF_NVRAM_WriteStart(ilm_struct *ilm_ptr);
void MMRF_NVRAM_ReadEnd(ilm_struct *ilm_ptr);
void MMRF_NVRAM_WriteEnd(ilm_struct *ilm_ptr);

void MMRFTST_UBIN_L1core_WMidDbg(void);

void MML1_RF_DB_Crystal_Type_Check(void);

#if (IS_MML1_ABB_CAL_MOVE_TO_META_TRIGGER)
void MML1_RF_MixedSys_Set_CalData_to_HW(void);
#endif

//MD1&MD3 CC-IRQ API
void MML1_RF_Trigger_CCIRQ_BufferMode(void);

#if IS_MMRF_C2K_ON_MD3_TST_ENABLE               
void MMRF_C2KTST_Handler(ilm_struct *ilm_ptr);
#endif

void MML1_RF_RecordTxPowerInit(void);

//Force vrf18 ON/OFF API
void MML1_RF_BSITOP_SYSPLL_EN(kal_bool syspll_en, MML1_BSITOP_SYSPLL_FUNC_E syspll_en_func);

//RF conflict bypass and clear status
void MML1_RF_BPI_CONFLICT_CLEAR_STATUS(void);

// Inject string parser
void MML1_RF_String_Parser(ilm_struct *ilm_ptr);

//DAT feature
void MMRF_AP_Sensor_Relative_Feature_Init(void);
#if defined(__MTK_TARGET__)
//MIPI,BPI read/write function for EM mode.
void MML1_RF_MIPI_Action_Handler(ilm_struct *ilm_ptr);
void MML1_RF_BPI_Action_Handler(ilm_struct *ilm_ptr);
#endif

#endif /* End of #ifndef _MML1_CORE_H_ */

