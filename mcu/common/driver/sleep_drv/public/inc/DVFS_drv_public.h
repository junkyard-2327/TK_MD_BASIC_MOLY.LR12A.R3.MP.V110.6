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
 *    DVFS_drv_public.h
 *
 * Project:
 * --------
 *    UMOLYA
 *
 * Description:
 * ------------
 *    DVFS driver public interface.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DVFS_DRV_PUBLIC_H__
#define __DVFS_DRV_PUBLIC_H__

#if !defined(L1_SIM)
//#define DVFS_FLOW_ONLY  1
#endif

#if defined(__NOMA_ENABLE__)
#define DVFS_FLOW_ONLY  1
#endif

#if defined(MT6771)
    #define DVFS_SUPPORT_2G_WAKEUP_IA_SPEEDUP 1
#else
    #define DVFS_SUPPORT_2G_WAKEUP_IA_SPEEDUP 0
#endif

#if defined(MT6761) || defined(MT6768)
    #define DVFS_SUPPORT_2G_CT_IA_SPEEDUP 1
#else
    #define DVFS_SUPPORT_2G_CT_IA_SPEEDUP 0
#endif

#if defined(MT6761) || defined(MT6768)
    #define DVFS_SUPPORT_LOW_VMD_IA_SPEEDUP 1
#else
    #define DVFS_SUPPORT_LOW_VMD_IA_SPEEDUP 0
#endif

typedef enum {
  DVFS_HW_3G_FDD_EVT0     =  0,
  DVFS_HW_3G_FDD_EVT1     =  1,
  DVFS_HW_3G_FDD_EVT2     =  2,
  DVFS_HW_3G_TDD_IMM_EVT  =  3,
  DVFS_HW_3G_TDD_EVT_SCH  =  4,
  DVFS_HW_3G_C2K_EVT0     =  5,
  DVFS_HW_3G_C2K_EVT1     =  6,
  DVFS_HW_LTE_EVT0        =  7,
  DVFS_HW_LTE_EVT1        =  8,
  DVFS_HW_LTE_EVT2        =  9,
  DVFS_HW_LTE_EVT3        = 10,
  DVFS_HW_LTE_EVT4        = 11,
  DVFS_HW_LTE_EVT5        = 12,
  DVFS_HW_EVT_END = DVFS_HW_LTE_EVT5,
  DVFS_SW_CTRL_EVT        = 13,
  DVFS_SW_PS_EVT          = 14,
  DVFS_SW_LTE_MD_EVT0     = 15,
  DVFS_SW_LTE_MD_EVT1     = 16,
  DVFS_SW_AUD_DRV_EVT     = 17,
  DVFS_SW_AUD_USR_EVT     = 18,
  DVFS_SW_USIP_EVT0       = 19,
  DVFS_SW_USIP_EVT1       = 20,
  DVFS_SW_EL2_EVT         = 21,
  DVFS_SW_C2K_EVT         = 22,
  DVFS_SW_RSV_EVT2        = 23,
  DVFS_EVT_NUM
} DVFS_EVENT_E;

/******************************************************************************
*   Function : void DVFS_init ( void )
*   Description : initialize DVFS HW settings. This function should be executed in VPE 0
*   Parameter : None
*   Return    : None
******************************************************************************/
extern void DVFS_init ( void );  /* called by init.c */

/******************************************************************************
*   Function : kal_bool DVFS_lock ( kal_uint32 lock ) 
*   Description : this function is called when locking DVFS or PTP
*   Parameter : kal_uint32 lock: the type of lock, ptp or dvfs set in 32 bits
*               [0]  lock MIPS,   [1]  OBSOLETE,  [2]  lock VMD,   [3]  lock VMODEM,  [4] lock PTP monitor mode,    [5] OBSOLETE,  [6] lock VDSP,    [7] lock BRP 
*               [16] unlock MIPS, [17] OBSOLETE, [18] unlock VMD, [19] unlock VODEM, [20] unlock PTP monitor mode, [21] OBSOLETE, [22] unlock VDSP, [23] unlock BRP
*               - Lock:
*               AT+EGCMD=60, 4, "00000004" : lock VMD
*               AT+EGCMD=60, 4, "00000005" : lock MIPS & VMD
*               AT+EGCMD=60, 4, "00000008" : lock VMODEM
*               AT+EGCMD=60, 4, "00000010" : lock PTP monitor mode
*               AT+EGCMD=60, 4, "00000040" : lock VDSP PLL 
*               AT+EGCMD=60, 4, "00000080" : lock BRP PLL 
*               - Unlock:
*               AT+EGCMD=60, 4, "00040000" : unlock VMD if possible
*               AT+EGCMD=60, 4, "00050000" : unlock MIPS (& VMD if possible)
*               AT+EGCMD=60, 4, "00080000" : unlock VMODEM
*               AT+EGCMD=60, 4, "00100000" : unlock PTP monitor mode
*               AT+EGCMD=60, 4, "00400000" : unlock VDSP PLL 
*               AT+EGCMD=60, 4, "00800000" : unlock BRP PLL 
*   Return    : KAL_TRUE: OK, KAL_FLASE: ERROR
******************************************************************************/
extern kal_bool DVFS_lock ( const kal_uint32 lock ); /* for AT cmd */

/******************************************************************************
*   Function : DVFS_atcmd_PLL_control
*   Description : This API will trigger frequency meter to measure PLL for debug
*   Parameter : kal_uint32 data_len, kal_uint8 *data_str from AT+EGCMD
*   Return    : kal_bool: KAL_TRUE/KAL_FALSE
*   Note      : - Read through frequency meter
*               AT+EGCMD=62, 2, "0000" : PLL_FrequencyMeter_GetFreq(PLL_FM_MDMCU_PLL);
*               AT+EGCMD=62, 2, "0001" : PLL_FrequencyMeter_GetFreq(PLL_FM_MDVDSP_PLL);
*               AT+EGCMD=62, 2, "0002" : PLL_FrequencyMeter_GetFreq(PLL_FM_MDBRP_PLL);
*               AT+EGCMD=62, 2, "0003" : PLL_FrequencyMeter_GetFreq(PLL_FM_MDTX_PLL);
*
******************************************************************************/
extern kal_bool DVFS_atcmd_PLL_control( kal_uint32 data_len, kal_uint8 *data_str );

/******************************************************************************
*   Function : DVFS_md_atcmd_PMIC_control
*   Description : This API will dump all PMIC information
*   Parameter : None
*   Return    : kal_bool: KAL_TRUE
*   Note      : - Read
******************************************************************************/
extern kal_bool DVFS_md_atcmd_PMIC_control( kal_uint32 data_len, kal_uint8 *data_str );

/******************************************************************************
*   Function : DVFS_atcmd_dump_hw_reg
*   Description : This API will dump registers in dvfs_con or dvfs_rc 
*   Parameter : kal_uint32 data_len, kal_uint8 *data_str from AT+EGCMD
*   Return    : kal_bool: KAL_TRUE
*   Note      : - Read
*               AT+EGCMD=68,1,"00": Dump dvfs_con registers
*               AT+EGCMD=68,1,"01": Dump dvfs_rc registers
******************************************************************************/
extern kal_bool DVFS_atcmd_dump_hw_reg(kal_uint32 data_len, kal_uint8 *data_str);

/******************************************************************************
*   Function : DVFS_exception_data_read( void )
*   Description : This API will be called when system exception occurs.
*   Parameter : None
*   Return    : DVFS status 
*   Note      : [31]   : 1 if DVFS encoutered error, 0 otherwise.
*               [30:0] : DVFS driver internal use.
******************************************************************************/
extern kal_uint32 DVFS_exception_data_read( void );
#endif
