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
 *   xl1tst_mmrf_interface.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   EL1D interface to Multi-Mode Multi-RAT RF Central Control
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _XL1TST_MMRF_INTERFACE_H_
#define  _XL1TST_MMRF_INTERFACE_H_

/*===============================================================================*/

#include "kal_general_types.h"
#include "mml1_meta_if.h"
#include "mml1_dpd_def.h"

#if __IS_EL1D_DPD_SUPPORT__
   extern void EL1D_DPD_Fac_Start_Cmd_Handler( MMRfTest_StartDpdFacCalMix *p_start_mix );
   extern void EL1D_DPD_Fac_Get_Cmd_Handler( MMRfTest_GetDpdFacCalMix *p_get_mix );
   extern void EL1D_DPD_Fac_Set_Cmd_Handler( MMRfTest_SetDpdFacCalMix *p_set_mix );
   extern void EL1D_DPD_Path_Delay_Search_Set_Cmd_Handler( MMRfTest_SetDpdPathDelaySearchMix *p_set_mix );
   extern void EL1D_DPD_Path_Delay_Search_Start_Cmd_Handler( MMRfTest_StartDpdPathDelaySearchMix * p_start_mix );
   extern void EL1D_DPD_Path_Delay_Search_Get_Cmd_Handler( MMRfTest_GetDpdPathDelaySearchMix * p_get_mix );
#else
   #define EL1D_DPD_Fac_Start_Cmd_Handler               NULL
   #define EL1D_DPD_Fac_Get_Cmd_Handler                 NULL
   #define EL1D_DPD_Fac_Set_Cmd_Handler                 NULL
   #define EL1D_DPD_Path_Delay_Search_Set_Cmd_Handler   NULL
   #define EL1D_DPD_Path_Delay_Search_Start_Cmd_Handler NULL
   #define EL1D_DPD_Path_Delay_Search_Get_Cmd_Handler   NULL
#endif

#if __IS_UL1D_DPD_SUPPORT__ && !defined(__EL1D_COSIM__)
   extern void UL1D_DPD_Fac_Start_Cmd_Handler( MMRfTest_StartDpdFacCalMix *p_start_mix );
   extern void UL1D_DPD_Fac_Get_Cmd_Handler( MMRfTest_GetDpdFacCalMix *p_get_mix );
   extern void UL1D_DPD_Fac_Set_Cmd_Handler( MMRfTest_SetDpdFacCalMix *p_set_mix );
   extern void UL1D_DPD_Set_Apt_Calibration( kal_bool set); //For identify traditional calibration and meta RF tool
   extern void UL1D_DPD_Path_Delay_Search_Set_Cmd_Handler( MMRfTest_SetDpdPathDelaySearchMix *p_set_mix );
   extern void UL1D_DPD_Path_Delay_Search_Start_Cmd_Handler( MMRfTest_StartDpdPathDelaySearchMix * p_start_mix );
   extern void UL1D_DPD_Path_Delay_Search_Get_Cmd_Handler( MMRfTest_GetDpdPathDelaySearchMix * p_get_mix );
   extern void UL1D_DPD_Force_Trad_Cal_OP_Mode_Handler( MMRfTest_ForceTradCalIntoAptModeMix *p_tool_data_mix );
#else
   #define UL1D_DPD_Fac_Start_Cmd_Handler               NULL
   #define UL1D_DPD_Fac_Get_Cmd_Handler                 NULL
   #define UL1D_DPD_Fac_Set_Cmd_Handler                 NULL
   #define UL1D_DPD_Set_Apt_Calibration                 NULL
   #define UL1D_DPD_Path_Delay_Search_Set_Cmd_Handler   NULL
   #define UL1D_DPD_Path_Delay_Search_Start_Cmd_Handler NULL
   #define UL1D_DPD_Path_Delay_Search_Get_Cmd_Handler   NULL 
   #define UL1D_DPD_Force_Trad_Cal_OP_Mode_Handler      NULL
#endif

#if __IS_CL1TST_DPD_SUPPORT__
   extern void CL1TST_DPD_Path_Delay_Search_Get_Cmd_Handler(MMRfTest_GetDpdPathDelaySearchMix *p_get_mix);
   extern void CL1TST_DPD_Path_Delay_Search_Set_Cmd_Handler(MMRfTest_SetDpdPathDelaySearchMix *p_set_mix);
   extern void CL1TST_DPD_Path_Delay_Search_Start_Cmd_Handler(MMRfTest_StartDpdPathDelaySearchMix *p_start_mix);
   extern void CL1TST_DPD_Fac_Set_Cmd_Handler(MMRfTest_SetDpdFacCalMix *p_set_mix);
   extern void CL1TST_DPD_Fac_Get_Cmd_Handler(MMRfTest_GetDpdFacCalMix *p_get_mix);
   extern void CL1TST_DPD_Fac_Start_Cmd_Handler(MMRfTest_StartDpdFacCalMix *p_start_mix);
#else
   #define CL1TST_DPD_Path_Delay_Search_Get_Cmd_Handler	   NULL
   #define CL1TST_DPD_Path_Delay_Search_Set_Cmd_Handler	   NULL
   #define CL1TST_DPD_Path_Delay_Search_Start_Cmd_Handler  NULL
   #define CL1TST_DPD_Fac_Set_Cmd_Handler				   NULL
   #define CL1TST_DPD_Fac_Get_Cmd_Handler	               NULL
   #define CL1TST_DPD_Fac_Start_Cmd_Handler                NULL
#endif

#endif /* End of #ifndef _XL1TST_MMRF_INTERFACE_H_ */
