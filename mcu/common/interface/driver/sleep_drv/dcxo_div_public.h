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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   dcxo_div_public.h
 *
 * Project:
 * --------
 *   General with 32K-Less Feature
 *
 * Description:
 * ------------
 *   Provide public API interface of DCXO divider to other modulers for 32k-less control.
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
 *
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/ 
#ifndef __DCXO_DIV_PUBLIC_H__
#define __DCXO_DIV_PUBLIC_H__ 

/* ----- 32K Removal ---------------------------------------------------- */
#if defined(__F32_XOSC_REMOVAL_SUPPORT__)
#define IS_32K_REMOVAL_SUPPORT           1
#define IS_32K_REMOVAL_SUPPORT_DEBUG     1 // debug code/trace for development
#else
#define IS_32K_REMOVAL_SUPPORT           0
#define IS_32K_REMOVAL_SUPPORT_DEBUG     0 // debug code/trace for development
#endif /* __F32_XOSC_REMOVAL_SUPPORT__ */

#if defined(__F32_XOSC_REMOVAL_SUPPORT__)

#include "kal_general_types.h" // for kal type define
#include "kal_public_defs.h"
#include "kal_public_api.h"    // for kal assert define

#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define LPM_DIV_UPDATE_LOCK_SUPPORT
#endif

#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define LPM_DIV_UPDATE_SLEEP_MODE_CONTROL
#endif

#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define LPM_DIV_OFFSET_TRACKING_TEST
#endif

#if defined(__L1_GPS_CO_CLOCK_SUPPORT__)
#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define FPM_DIV_OFFSET_TRACKING_TEST
#endif
#endif

#define LPM_DIV_UPDATE_INVOLVE_FREQ_OFFSET_WHEN_NO_LPM
#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define TIMING_ERROR_HANDLING_WITH_LPM_CNT
#endif

#define ABS_32KLESS(x) ((x) > 0 ? (x) : -(x))

typedef enum
{
   DCXO_DIV_INIT = 0,
   
   DCXO_DIV_L1_TICK,
   DCXO_DIV_L1_UPDATE,
   DCXO_DIV_L1_UPDATE_ONLY_F_OFFSET,
   DCXO_DIV_L1_FORCE_UPDATE,

   DCXO_DIV_UL1_TICK,
   DCXO_DIV_UL1_UPDATE,
   DCXO_DIV_UL1_UPDATE_ONLY_F_OFFSET,
   DCXO_DIV_UL1_FORCE_UPDATE,
   
   DCXO_DIV_TL1_TICK,
   DCXO_DIV_TL1_UPDATE,
   DCXO_DIV_TL1_UPDATE_ONLY_F_OFFSET,   
   DCXO_DIV_TL1_FORCE_UPDATE,

   DCXO_DIV_EL1_TICK,
   DCXO_DIV_EL1_UPDATE,
   DCXO_DIV_EL1_UPDATE_ONLY_F_OFFSET,
   DCXO_DIV_EL1_FORCE_UPDATE,
   DCXO_DIV_EL1_RESET,
   
   DCXO_DIV_CL1_TICK,
   DCXO_DIV_CL1_UPDATE,
   DCXO_DIV_CL1_UPDATE_ONLY_F_OFFSET,
   DCXO_DIV_CL1_FORCE_UPDATE
} DCXO_DIV_UPDATE_MODE;

typedef enum
{
   DCXO_DIV_LPM = 0,
   DCXO_DIV_FPM
} DCXO_DIV_MODE;

#ifdef TIMING_ERROR_HANDLING_WITH_LPM_CNT
typedef enum
{
   DCXO_DIV_GSM = 0,
   DCXO_DIV_USM,
   DCXO_DIV_LTE
} DCXO_DIV_RAT;
#endif
/* Leon: move following APIs from dcxo_div.c to dcxo_div_public.h because those APIs will be called by other modulo includes l1sm/ul1sm/el1sm.c & ostd.c to meet MSBB rule*/
void DCXO_Div_UpdateLPMParam( DCXO_DIV_UPDATE_MODE mode, kal_int32 deltaFreqErr, kal_int32 deltaFreqCAFC, kal_uint8 adjuster );
#ifdef __L1_GPS_CO_CLOCK_SUPPORT__
void DCXO_Div_UpdateFPMParam( DCXO_DIV_UPDATE_MODE mode, kal_int32 FreqOffset );
kal_bool DCXO_Div_CheckFPMUpdate( void );
kal_uint32 DCXO_Div_GetFPMParam( void );
#endif
void DCXO_Div_Init( void );
void DCXO_Div_InitCload( kal_int32 deltaFreq );
void DCXO_Div_ResetLPM(void);
void DCXO_Div_TrcDebug( DCXO_DIV_UPDATE_MODE update_mode, DCXO_DIV_MODE mode );
void DCXO_Div_EnterFPM( kal_bool isFPM, kal_uint8 module );
void DCXO_Div_ChangeDivider_By_Injcmd( kal_uint32 input_mode, kal_uint32 change_value );
kal_bool DCXO_Div_CheckExt32KCrystal( void );
kal_bool DCXO_Div_Is32KLess( void );
kal_bool DCXO_Div_IsCloadReady( void );
kal_bool DCXO_Div_IsClockAlwaysOn( void );
void DCXO_Div_LPM_Counter_Start( void );
void DCXO_Div_LPM_Counter_End( void );
kal_bool DCXO_Div_CheckUpdateCondition( kal_uint8 adjuster );
#ifdef LPM_DIV_UPDATE_INVOLVE_FREQ_OFFSET_WHEN_NO_LPM
kal_bool DCXO_Div_CheckHaveEnterLPM( void );
#endif
#ifdef TIMING_ERROR_HANDLING_WITH_LPM_CNT
kal_bool DCXO_Div_CheckErrorIsOverStable( DCXO_DIV_RAT rat, kal_int32 timingErrABS );
#endif
#ifdef LPM_DIV_OFFSET_TRACKING_TEST
void DCXO_Div_Test_LPMTrackingTrigger( kal_bool Is_trigger, kal_uint32 Trigger_mode );
#endif
#ifdef FPM_DIV_OFFSET_TRACKING_TEST
void DCXO_Div_Test_FPMTrackingTrigger( kal_bool Is_trigger, kal_uint32 Trigger_mode );
#endif
#if defined(MT6763) && !defined(L1_SIM)
kal_bool DCXO_Pmic_Chip_Is_MT6356E2( void );
#endif
/* -----------------------------------------------------------------------------------------------------------------------------------------------*/
#ifdef LPM_DIV_UPDATE_LOCK_SUPPORT
kal_int32 DCXO_Div_GetLPMDeltaFreqErr( void );
kal_uint32 DCXO_Div_GetAccLPMCnt( void );
kal_uint32 DCXO_Div_GetLastUpdateLPMCnt( void );
void DCXO_Div_UpdateLPMParam_Unlock(DCXO_DIV_UPDATE_MODE mode, kal_bool lpmDivUpdated, kal_int32 deltaFreqErr, kal_int32 deltaFreqCAFC, kal_uint8 adjuster );
kal_bool DCXO_Div_CheckUpdateCondition_Lock( kal_uint8 adjuster );
#endif

#endif /* __F32_XOSC_REMOVAL_SUPPORT__ */	 
#endif /* __DCXO_DIV_PUBLIC_H__ */

