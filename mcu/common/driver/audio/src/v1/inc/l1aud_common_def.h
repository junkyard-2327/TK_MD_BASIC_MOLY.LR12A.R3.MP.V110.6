/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2011
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
 * audio_def.h
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 *  The common definition used in audio module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *==============================================================================
 *******************************************************************************/

#ifndef __L1AUD_COMMON_DEF_H
#define __L1AUD_COMMON_DEF_H

#include "kal_public_api.h"
#include "reg_base.h"
//#define SHAREG2_base                (0xA77A0000)//(L1_BASE_MADDR_SHARE_D1)    //the same as L1_BASE_MADDR_SHARE_D1
//#define DPRAM_CPU_base              (0xA7400000)//(L1_BASE_MADDR_DM_IDMA)    //FIXIT: the same as L1_BASE_MADDR_DM_IDMA
//#define IDMA_base                   (0xA7200000)//(L1_BASE_MADDR_CM_IDMA)    //FIXIT: the same as L1_BASE_MADDR_CM_IDMA

//#if defined(__CDMA2000_RAT__)
#define __C2K_SPEECH_SUPPORT__
#define _C2K_DTX_SUPPORT_ (0)
//#else
//#define C2K_SDRV_DISABLE
//#endif

//#define __FAKE_C2K_LOOPBACK__
//#define __FAKE_3G_LOOPBACK__

#ifdef __FAKE_3G_LOOPBACK__
#ifndef  __CSHSPA_SUPPORT__
#define __CSHSPA_SUPPORT__
#endif
#endif

#define SHARE_base (AFE_SHARED_REGISTER_BASE)

typedef volatile unsigned short* DPRAMADDR;
typedef volatile unsigned long*  APBADDR32;                             /* APB addr is 32 bits                           */
typedef volatile unsigned short* APBADDR;                               /* APB addr is 32 bits                           */

//#define __VOLTE_SUPPORT__


/*
#define IDMA_LONG_ADDR           ((APBADDR32)IDMA_LONG)
#define IDMA_SHORT_ADDR          ((DPRAMADDR)IDMA_SHORT)
#define DSP_CM_ADDR(page,addr)   ((APBADDR32)(IDMA_CM0+((page)<<16)+((addr)<<2)))
#define DSP_PM_ADDR(page,addr)   ((DPRAMADDR)(IDMA_PM0+((page)<<16)+((addr)<<1)))
#define DSP_DM_ADDR(page,addr)   ((DPRAMADDR)(IDMA_DM0+((page)<<16)+((addr)<<1)))*/

#define AUD_1TICK(tick)          (tick * ((KAL_TICKS_10_MSEC) >> 1))       /* New Tick Transfer   1tick       */
#define AUD_10TICK(tick)         (tick * (KAL_TICKS_50_MSEC))               /* New Tick Transfer  10tick      */


/* -------------------------------------------------------------------------- */
/* Data Type Definition                                                       */
/* -------------------------------------------------------------------------- */
#ifndef uint16
typedef kal_uint16   uint16;
typedef kal_int16    int16;
typedef kal_uint32   uint32;
typedef kal_int32    int32;
typedef kal_uint8    uint8;
typedef kal_int8     int8;
typedef kal_bool     bool;
#define true         (kal_bool)(1==1)
#define false        (kal_bool)(1==0)
#endif

/* -------------------------------------------------------------------------- */
/* DSP Share Registers                                                        */
/* -------------------------------------------------------------------------- */
// #if defined(MT6280) || defined(MT6589)

/* -------------------------------------------------------------------------- */
/* Internal definition of audio module                                        */
/* -------------------------------------------------------------------------- */

// no audio close delay, phase it out 
// #define AUDIO_CLOSE_DELAY 500 //500 ms, unit is 10ms


#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 


//change mcu and dsp share memory to internal memory, always define after MT6256
// #if defined(MT6280) || defined(MT6589) || defined(MT6572)
// #define _DSP_INTERSHAREMEM_EN_ // only using in audio, so phase it out
#define L1AUDIO_IDMA_ALL_ADDRESS_MODE
// #endif


// For <65nm, dsp coefficients need to reload after sleep. This are always happen after 80, so remove the redundant 
#define __RELOAD_HW_COEFF__  (1)


#if defined(__L1_GPS_CO_CLOCK_SUPPORT__)
#define _MODEM_RESYNC_2G_
#endif


#define _2G_DSP_SMR_SUPPORT_


#if defined(_2G_DSP_SMR_SUPPORT_)// Notice these , _MODEM_RESYNC_2G_ and _2G_DSP_SMR_SUPPORT_, are exclusive.
#undef _MODEM_RESYNC_2G_
#endif


#if defined(__L1_GPS_CO_CLOCK_SUPPORT__)
#define _MODEM_RESYNC_3G_
#endif
#if defined(_MODEM_RESYNC_3G_) 
//3G FDD Modem Resync
extern void      UL1D_Speech_Resync_Reset_Time_Offset();
extern kal_int16 UL1D_Speech_Resync_Get_Time_Offset();
extern void      UL1D_Speech_Resync_Update_Time_Offset(kal_bool direction);
//3G TDD Modem Resync
extern void      TL1C_Reset_Time_Drift();
extern kal_int16 TL1C_Get_Time_Drift();
extern void      TL1C_Update_Time_Drift(kal_bool direction);
#endif
/* -------------------------------------------------------------------------- */
/* Assertion check                                                            */
/* -------------------------------------------------------------------------- */
#define ASSERT_REBOOT(st)  EXT_ASSERT(st,0,0,0)
#define DSP_DATA_CARD_INTERFACE_SUPPORT  (defined(MT6280))


/* -------------------------------------------------------------------------- */
/* Internal Audio Definition                                                  */
/* -------------------------------------------------------------------------- */
#define __AUDIO_POWERON_RESET_DSP__


#if defined(__HIF_CCCI_SUPPORT__)
#define __CCCI_OVER_SDIO_SUPPORT__ //currently only MT6290
#endif


#if defined(MT6290)
#define DATA_CARD_DISABLE_INTERNAL 0
#endif


//Reduce VoLTE DL delay. Remove DL HISR.
#define __REDUCE_VOLTE_DL_DELAY__
//Modem Logging Feature Option
#define __MODEM_LOGGING_SUPPORT__

#if defined(__EVS_SUPPORT__)
#define __EVS_CODEC_SUPPORT__
#endif //#if defined(__EVS_SUPPORT__)

#endif //__COMMON_DEF_H
