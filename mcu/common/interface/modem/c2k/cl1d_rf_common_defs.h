/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 * cl1d_rf_common_defs.h
 *
 * Project:
 * --------
 * C2K
 *
 * Description:
 * ------------
 * This file containing common definition for RF driver interface.
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _CL1D_RF_COMMON_DEFS_H_
#define _CL1D_RF_COMMON_DEFS_H_

#include "kal_general_types.h"
/*----------------------------------------------------------------------------
 Global Defines And Macros
----------------------------------------------------------------------------*/
#ifndef TRUE
#define TRUE     (1)
#endif

#ifndef FALSE
#define FALSE    (0)
#endif


#ifndef NULL
#define NULL ((void* )0)
#endif

/** PA mode enumeration */
typedef enum
{
   CL1D_RF_PA_MODE_HIGH = 0,
   CL1D_RF_PA_MODE_MID  = 1,
   CL1D_RF_PA_MODE_LOW  = 2,
   CL1D_RF_PA_MODE_NUM  = 3,
}CL1D_RF_PA_MODE_E;


/** LNA mode enumeration */
typedef enum
{
   CL1D_RF_LNA_MODE0 = 0, /**> LNA highest mode*/
   CL1D_RF_LNA_MODE1 = 1,
   CL1D_RF_LNA_MODE2 = 2,
   CL1D_RF_LNA_MODE3 = 3,
   CL1D_RF_LNA_MODE4 = 4,
   CL1D_RF_LNA_MODE5 = 5,
   CL1D_RF_LNA_MODE6 = 6,
   CL1D_RF_LNA_MODE7 = 7,
   CL1D_RF_LNA_MODE_NUM = 8,
}CL1D_RF_LNA_MODE_E;

/* --------------- ELT LOGGING ------------------*/
/* For RXDFE logging */
typedef enum
{
    RF_TST_RXDFE_FC_TQ = 0,
    RF_TST_RXDFE_FC_IMM,
    RF_TST_RXDFE_FC_ACT,
    RF_TST_RXDFE_FC_WBUF,
    RF_TST_RXDFE_FC_CALTC,

    RF_TST_RXDFE_STIME,
    RF_TST_RXDFE_ATIME,
    
    RF_TST_RXDFE_FC_NUM
} CL1_RF_TST_RXDFE_RG_TYPE_E;

typedef enum
{
    RF_TST_TXDFE_DBG_REG = 0,
    RF_TST_TXDFE_COMP_DC_FI,
    RF_TST_TXDFE_COMP_ASYMM,
    RF_TST_TXDFE_COMP_FDAD,
    RF_TST_TXDFE_AM_PM_LUT,
    RF_TST_TXDFE_TPC_COMN,

    RF_TST_TXDFE_STIME,

    RF_TST_TXDFE_FC_NUM
} CL1_RF_TST_TXDFE_RG_TYPE_E;

typedef enum
{
    RF_TST_TXKDFE_DBG_REG = 0,
    RF_TST_TXKDFE_REF_DBG,
    RF_TST_TXKDFE_DET_DBG,

    RF_TST_TXKDFE_FC_NUM
} CL1_RF_TST_TXKDFE_RG_TYPE_E;
/* --------------- ELT LOGGING ------------------*/


/** C2K RF frequency band type enumeration */
typedef enum
{
    CL1D_RF_FREQ_LOW_BAND  = 0,
    CL1D_RF_FREQ_HIGH_BAND = 1,
    CL1D_RF_FREQ_BAND_NUM  = 2
}CL1D_RF_FREQ_BAND_E;

typedef enum
{
    RF_Band_A=0,
    RF_Band_B,
    RF_Band_C,
    RF_Band_D,
    RF_Band_E,
    RF_Band_NUM_MAX,
    RF_Band_ERR
}CL1D_RF_BAND_E;

typedef enum 
{
///TODO: need to be confirmed !
    RF_RAT_1XRTT=0,
    RF_RAT_EVDO,
    RF_RAT_NUM,
    RF_RAT_INVALID
}CL1D_RF_RAT_E;

/* define Cdma Band type */
typedef enum
{
  CL1D_RF_BAND_CLASS_0 = 0,   /* 800 MHz cellular band       */
  CL1D_RF_BAND_CLASS_1,       /* 1.8 to 2.0 GHz band     */
  CL1D_RF_BAND_CLASS_2,       /* 872 to 960 MHz TACS band    */
  CL1D_RF_BAND_CLASS_3,       /* 832 to 925 MHz JTACS band   */
  CL1D_RF_BAND_CLASS_4,       /* 1.75 to 1.87 GHz Korean PCS */
  CL1D_RF_BAND_CLASS_5,       /* 450 MHz NMT band            */
  CL1D_RF_BAND_CLASS_6,       /* 2 GHz IMT-2000 band         */
  CL1D_RF_BAND_CLASS_7,       /* 700 MHz band                */
  CL1D_RF_BAND_CLASS_8,       /* 1800 MHz band               */
  CL1D_RF_BAND_CLASS_9,       /* 900 MHz band                */
  CL1D_RF_BAND_CLASS_10,      /* Secondary 800 MHz NMT band  */
  CL1D_RF_BAND_CLASS_11,      /* 400 MHz European PARM band  */
  CL1D_RF_BAND_CLASS_12,      /* 800 MHz PAMR band           */
  CL1D_RF_BAND_CLASS_13,      /* 2.5 GHz IMT-2000            */
  CL1D_RF_BAND_CLASS_14,      /* US PCS 1.9 GHz band         */
  CL1D_RF_BAND_CLASS_15,      /* AWS band                    */
  CL1D_RF_BAND_CLASS_16,      /* US 2.5 GHz band             */
  CL1D_RF_BAND_CLASS_17,      /* US 2.5GHz Forward Link Only Band */
  CL1D_RF_BAND_CLASS_18,      /* 700 MHz Public Safety Band  */
  CL1D_RF_BAND_CLASS_19,      /* Lower 700 MHz Band */
  CL1D_RF_BAND_CLASS_20,      /* L-Band */
  CL1D_RF_BAND_CLASS_MAX,
  CL1D_RF_BAND_CLASS_NOT_USED = CL1D_RF_BAND_CLASS_MAX,
  CL1D_RF_BAND_CLASS_UNSUPPORTED /* MUST be DIFFERENT than CL1D_RF_BAND_CLASS_MAX / CL1D_RF_BAND_CLASS_NOT_USED */
} CL1D_RF_BAND_CLASS_TYPE_E;

#define CL1D_RF_SUB_CLASS_MAX  16

#define CL1D_RF_SUB_CLASS_0_SUPPORTED    0x80000000
#define CL1D_RF_SUB_CLASS_1_SUPPORTED    (1<<30)
#define CL1D_RF_SUB_CLASS_2_SUPPORTED    (1<<29)
#define CL1D_RF_SUB_CLASS_3_SUPPORTED    (1<<28)
#define CL1D_RF_SUB_CLASS_4_SUPPORTED    (1<<27)
#define CL1D_RF_SUB_CLASS_5_SUPPORTED    (1<<26)
#define CL1D_RF_SUB_CLASS_6_SUPPORTED    (1<<25)
#define CL1D_RF_SUB_CLASS_7_SUPPORTED    (1<<24)
#define CL1D_RF_SUB_CLASS_8_SUPPORTED    (1<<23)
#define CL1D_RF_SUB_CLASS_9_SUPPORTED    (1<<22)
#define CL1D_RF_SUB_CLASS_10_SUPPORTED   (1<<21)
#define CL1D_RF_SUB_CLASS_11_SUPPORTED   (1<<20)
#define CL1D_RF_SUB_CLASS_12_SUPPORTED   (1<<19)
#define CL1D_RF_SUB_CLASS_13_SUPPORTED   (1<<18)
#define CL1D_RF_SUB_CLASS_14_SUPPORTED   (1<<17)
#define CL1D_RF_SUB_CLASS_15_SUPPORTED   (1<<16)

#define CL1D_RF_SUB_CLASS_0_UNSUPPORTED  (0<<31)
#define CL1D_RF_SUB_CLASS_1_UNSUPPORTED  (0<<30)
#define CL1D_RF_SUB_CLASS_2_UNSUPPORTED  (0<<29)
#define CL1D_RF_SUB_CLASS_3_UNSUPPORTED  (0<<28)
#define CL1D_RF_SUB_CLASS_4_UNSUPPORTED  (0<<27)
#define CL1D_RF_SUB_CLASS_5_UNSUPPORTED  (0<<26)
#define CL1D_RF_SUB_CLASS_6_UNSUPPORTED  (0<<25)
#define CL1D_RF_SUB_CLASS_7_UNSUPPORTED  (0<<24)
#define CL1D_RF_SUB_CLASS_8_UNSUPPORTED  (0<<23)
#define CL1D_RF_SUB_CLASS_9_UNSUPPORTED  (0<<22)
#define CL1D_RF_SUB_CLASS_10_UNSUPPORTED (0<<21)
#define CL1D_RF_SUB_CLASS_11_UNSUPPORTED (0<<20)
#define CL1D_RF_SUB_CLASS_12_UNSUPPORTED (0<<19)
#define CL1D_RF_SUB_CLASS_13_UNSUPPORTED (0<<18)
#define CL1D_RF_SUB_CLASS_14_UNSUPPORTED (0<<17)
#define CL1D_RF_SUB_CLASS_15_UNSUPPORTED (0<<16)

#define CL1D_RF_SUB_CLASS_ALL_SUPPORTED  0xffff0000
#define CL1D_RF_SUB_CLASS_NONE_SUPPORTED 0x00000000

#ifndef BIT0
#define BIT0     0x01
#define BIT1     0x02
#define BIT2     0x04
#define BIT3     0x08
#define BIT4     0x10
#define BIT5     0x20
#define BIT6     0x40
#define BIT7     0x80
#define BIT8     0x100
#define BIT9     0x200
#define BIT10    0x400
#define BIT11    0x800
#define BIT12    0x1000
#define BIT13    0x2000
#define BIT14    0x4000
#define BIT15    0x8000
#define BIT16    0x10000UL
#define BIT17    0x20000UL
#define BIT18    0x40000UL
#define BIT19    0x80000UL
#define BIT20    0x100000UL
#define BIT21    0x200000UL
#define BIT22    0x400000UL
#define BIT23    0x800000UL
#define BIT24    0x1000000UL
#define BIT25    0x2000000UL
#define BIT26    0x4000000UL
#define BIT27    0x8000000UL
#define BIT28    0x10000000UL
#define BIT29    0x20000000UL
#define BIT30    0x40000000UL
#define BIT31    0x80000000UL
#endif

/* Handy macros */
#ifndef MAX
#define MAX(x,y)  (( (x) > (y) ) ? (x) : (y))
#endif

#ifndef MIN
#define MIN(x,y)  (( (x) < (y) ) ? (x) : (y))
#endif

#ifndef M_Q9
#define M_Q9(vALUE)       ((kal_int32)((vALUE) * (1 << 9)))
#endif

#ifndef M_Q9ToQ0
#define M_Q9ToQ0(vALUE)   ((vALUE) >> 9)
#endif

/** uS and nS to C2K chips: 1 c2k chip = 1/1.228 uS */
#ifndef M_UsToChips
#define M_UsToChips(uS)          (((uS) * 1228 + 1000 - 1) / 1000)
#endif

#ifndef M_NsToChips
#define M_NsToChips(nS)          (((nS) * 1228 * 1000 + 1000 * 1000 - 1) / 1000 * 1000)
#endif

#ifndef M_ChipsToUs
#define M_ChipsToUs(cHIPS)       (((cHIPS) * 1000 + 1228 - 1) / 1228)
#endif

#ifndef M_UsToChips8x
#define M_UsToChips8x(uS)        (((uS) * 1228)*8 / 1000)
#endif


/* Internal options */
#ifndef L1_SIM
#define __CL1_RF_IT_ON_TARGET__ 	1
#else
#undef __CL1_RF_IT_ON_TARGET__
#endif

#endif

