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
 *   dcxo_div.h
 *
 * Project:
 * --------
 *   MTK6250
 *
 * Description:
 * ------------
 *   CSMM 32KHz-less setting.
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 *
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/ 
#ifndef DCXO_DIV_H
#define DCXO_DIV_H

#if defined(__F32_XOSC_REMOVAL_SUPPORT__)

#include "dcxo_div_public.h"
#if !(defined(__MAUI_BASIC__)||defined(__UDVT__))
#ifndef GEN_FOR_PC
#include "TrcMod.h"
#endif
#endif

#include "kal_public_defs.h"  /* for kal_atomic define */

#if defined(TK6291) || defined(MT6755) || defined(MT6797)
#define LPM_CNT_TK6291
#elif defined(ELBRUS)
#define LPM_CNT_MT6292
#elif defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define LPM_CNT_MT6293
#else
#error "Please check LPM counter in new project"
#endif
#define MAX_LPM_COUNTER_ADJUSTER 4
/* 392(.-4Hz) over 2.12(sec, PG9) will introduce 16(qbits) error */
/* From the procedure, this threshold is about 1 qbit error after PG2  */
#define DCXO_DIV_UPDATE_TH (6272*2*2048/50)    /* /5 for WR8 project (~5x echips timing error in 3G); /50 for <10 echips */
#define DCXO_DIV_FRAC_FACTOR_14 7573
#define DCXO_DIV_FRAC_FACTOR_12 1893

#if defined(LPM_CNT_TK6291) || defined(LPM_CNT_MT6292) || defined(LPM_CNT_MT6293) 
#define FRACTIONAL_DIVIDER_14BIT
#endif

#ifdef LPM_DIV_OFFSET_TRACKING_TEST
#define LPM_DIV_OFFSET_23G_VAR1                     100*4        // *4 for divider from 12bit to 14bit
#define LPM_DIV_OFFSET_23G_VAR2                     200*4
#define LPM_DIV_OFFSET_4G_VAR1                      7*4
#define LPM_DIV_OFFSET_4G_VAR2                      13*4
#define LPM_DIV_OFFSET_START                        10*60000000  //after 10mins from boot up, trigger divider offset  
#define LPM_DIV_OFFSET_DURATION                     6*60000000   //each 6mins trigger divider offset
#endif

#ifdef FPM_DIV_OFFSET_TRACKING_TEST
#define FPM_DIV_OFFSET_23G_VAR1                     100*4        // *4 for divider from 12bit to 14bit
#define FPM_DIV_OFFSET_23G_VAR2                     300*4
#define FPM_DIV_OFFSET_4G_VAR1                      7*4
#define FPM_DIV_OFFSET_4G_VAR2                      13*4
#define FPM_DIV_OFFSET_START                        5*60000000  //after 2mins from trigger test, trigger divider offset
#define FPM_DIV_OFFSET_DURATION                     2*60000000   //each 2mins trigger divider offset
#define FPM_DIV_OFFSET_LOCK_DURATION                10000000 // Set 10s for always using offset value 
#endif

#ifdef TIMING_ERROR_HANDLING_WITH_LPM_CNT
#define ECHIP_TS_FREQUENCY_HZ                       30720 // echip & Ts unit is 30.72MHz; where value = *1000 [MHz]
#if defined(FRACTIONAL_DIVIDER_14BIT)
#define DIV_RESOLUTION                              77    // 12-bit 1 divider 0.308ppm; 14-bit 1 divider 0.077ppm; where value = *1000 [ppm]
#else
#define DIV_RESOLUTION                              308   // 12-bit 1 divider 0.308ppm; 14-bit 1 divider 0.077ppm; where value = *1000 [ppm]
#endif
#define NORM_PARA                                   1000  // normalize calcuated theoretical error; where normlized value = *1000 [echip or Ts]  
#endif

#if defined(__MAUI_BASIC__)||defined(__UDVT__)
/* null API */
#define DCXO_DIV_DBG_UPDATE_R32K( var1, var2, var3, var4, var5 )
#define DCXO_DIV_DBG_ENTER_26MHz_FPM( var1, var2, var3 )
#define DCXO_DIV_DBG_UPDATE( var1, var2, var3 )
#define DCXO_DIV_DBG_UPDATE_UNLOCK( var1, var2, var3, var4 )
#define DCXO_DIV_LPM_CNT_UPDATE( var1, var2, var3 )
#define DCXO_DIV_DBG_Check( var1, var2 )
#define DCXO_DIV_LPM_CNT_END( var1, var2, var3, var4, var5 )
#define DCXO_DIV_PCM_CNT( var1, var2 )
#define DCXO_DIV_DBG_LOG( var1, var2, var3 )
#define DCXO_DIV_ATOMIC_PROTECT( var1, var2, var3, var4 )
#endif

#define DCXO_IDEAL_26MHZ                      26000000
#define DCXO_IDEAL_32KHZ                      32768
#define DCXO_IDEAL_32KHZ_ORDER                15      /* 32768 = 2^15 */

#if defined(FRACTIONAL_DIVIDER_14BIT)
#define DCXO_DIVIDER_ACCU_BIT                 14      /* 14 bit accumulater fractional divider */
#else
#define DCXO_DIVIDER_ACCU_BIT                 12      /* 12 bit accumulater fractional divider */
#endif

#define DCXO_DIVISOR                          793 

#if defined(LPM_CNT_TK6291)
#define LPM_COUNTER_VALUE        ((volatile kal_uint32*)0xF00D052C) /* This is accumulated value computed by HW, so no need to do additional accumlation. */
#elif defined(LPM_CNT_MT6292)
#define LPM_COUNTER_VALUE        ((volatile kal_uint32*)0xA00D052C) /* 0xA non-bufferable,  0xB bufferable */
#elif defined(LPM_CNT_MT6293)
#define LPM_CONTROL              ((volatile kal_uint32*)0xA0130900) 
#define LPM_COUNTER_VALUE        ((volatile kal_uint32*)0xA0130904)
#else
/* no define */
#endif

typedef struct
{
   kal_bool     divider_is_updated; /* flag for divider is update or not, main used for LPM, when flag is TRUE, then call MML1_RF_SetDCXOFreqLPM()*/
   kal_int32    deltaFreq_Old;      /* Old delta of frequency on low power mode */
   kal_int32    deltaFreq_New;
   kal_int32    initFreq_Cload;

   kal_uint32   R_32k;
   kal_uint32   R_32k_integer;
   kal_uint32   R_32k_fractional;
   kal_uint32   R_32k_fractional_old; /* For record last updated divider value*/ 
   #if defined(LPM_CNT_MT6292) || defined(LPM_CNT_MT6293)
   kal_atomic_int32   atomic_cnt;     /* For atomic flag usage */
   DCXO_DIV_UPDATE_MODE atomic_lock_mode;
   #endif
} DCXO_DIV;

typedef struct
{
   kal_bool     is_started;
   #ifdef LPM_DIV_UPDATE_LOCK_SUPPORT
   kal_bool     lock_update_flag;
   #endif
   kal_uint32   acc_lpm_cnt;
   #ifdef LPM_DIV_UPDATE_INVOLVE_FREQ_OFFSET_WHEN_NO_LPM
   kal_uint32   acc_lpm_cnt_old;
   #endif
   kal_uint32   last_lpm_cnt;           /* error handle */   
   kal_uint32   last_update_time;
   kal_uint32   last_update_attempt[MAX_LPM_COUNTER_ADJUSTER];
   kal_uint32   spm_pcm_timer_cnt;
} LPM_COUNTER;

typedef struct
{
   kal_bool     ext_32k_exist_check;
   kal_bool     ext_32k_exist;         /* External 32k crystal exist */
   kal_bool     init_cload; 
   kal_bool     clockAlwaysOn;
#if defined(LPM_CNT_TK6291) || defined(LPM_CNT_MT6292) || defined(LPM_CNT_MT6293)
   kal_bool     MMRF_check_result;     /* for MML1_RF_Is_CoTMS_OnPMIC_Platform_Check() */
#endif   
} DCXO_DIV_STATUS;

#ifdef TIMING_ERROR_HANDLING_WITH_LPM_CNT
typedef struct
{
   kal_uint32   acc_lpm_cnt_3Gcheck;
   kal_uint32   acc_lpm_cnt_4Gcheck;
} DCXO_ERROR_HANDLING;
#endif

#ifdef LPM_DIV_OFFSET_TRACKING_TEST
typedef struct
{
   kal_bool     Is_trigger;
   /* LPM: 0 for 2/3G; 1 for 4G */
   /* FPM: 1 for 2G; 2 for 3G_FDD; 4 for 3G_TFF; 8 for 4G */ 
   kal_uint32   Trigger_mode;
   kal_uint32   Trigger_FRC;         
   kal_uint32   FRC_run_stage;      
   kal_uint32   FRC_run_last;   
   kal_uint32   FRC_temp;
} DCXO_DIV_TRACKING;   
#endif

#ifdef FPM_DIV_OFFSET_TRACKING_TEST
typedef struct
{
   kal_bool            Is_trigger;
   kal_bool            Is_offset_lock;
   kal_uint32          Trigger_mode;  /* 1 for 2G; 2 for 3G_FDD; 4 for 3G_TFF; 8 for 4G*/
   kal_uint32          Trigger_FRC;         
   kal_uint32          FRC_run_stage;      
   kal_uint32          FRC_run_last;   
   kal_uint32          FRC_temp;
   kal_uint32          FRC_run_lock_timestamp;
} DCXO_FPM_DIV_TRACKING;   
#endif

#ifdef LPM_DIV_UPDATE_SLEEP_MODE_CONTROL
void DCXO_Div_MML1_RF_SetDCXOFreqLPM( void );
#endif
#if (defined(LPM_CNT_TK6291) || defined(LPM_CNT_MT6292) || defined(LPM_CNT_MT6293)) && defined(__CDMA2000_RAT__) 
kal_bool DCXO_Div_Spinlock_ShareMem( kal_bool IsFlowGoing, kal_uint32 CheckMode );
#endif

#endif /* __F32_XOSC_REMOVAL_SUPPORT__ */

extern kal_bool OSTD_Is3gEnabled (void);

#endif /* DCXO_DIV_H */
