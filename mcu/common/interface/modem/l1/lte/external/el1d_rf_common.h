/******************************************************************************
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

/*==============================================================================
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup EL1D_RF_COMMON
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       el1d_rf_common.h
 * @author     LY Chen (MTK04356)
 * @date       2014.12.16
 * @brief      EL1D RF Common
 * @details    serves as default value of undefined macro constants
 *             in lte_custom_rf.h
 ******************************************************************************/

#ifndef __EL1D_RF_COMMON_H__
#define __EL1D_RF_COMMON_H__

/*******************************************************************************
 * #include
 ******************************************************************************/

/*******************************************************************************/
/*                              Common RF Setting                              */
/*******************************************************************************/
/* This part serves as default value of undefined macro constants in lte_custom_rf.h */
/* Aim to accommodate to those difference between RF chips */

//The following definitions are moved to lte_custom_rf.h
//PDATA_LTE_BandNone_XXX
//LTE_BandNone_XXX_IO_SEL

//RF conflict check
#define LTE_RF_CFLT_PIN                 (31)
#define PDATA_LTE_RF_CONFLICT           ((0x1 << LTE_RF_CFLT_PIN) | 0x0000000000000000)

#if LTE_RF_CFLT_PIN < 32
#define PDATA_LTE_RF_CFLT_L             (0x1 << LTE_RF_CFLT_PIN)
#define PDATA_LTE_RF_CFLT_H             (0x00000000)
#elif LTE_RF_CFLT_PIN < 48
#define PDATA_LTE_RF_CFLT_L             (0x00000000)
#define PDATA_LTE_RF_CFLT_H             (0x1 << (LTE_RF_CFLT_PIN - 32))
#else
   #error "invalid LTE_RF_CLFT_PIN, shoulde < 48 for TK6291"
#endif


//PR0 & PT0 is used for RF conflict check
#define PDATA_LTE_BANDX_PR0              0x00000000
#define PDATA_LTE_BANDX_PR0_H            0x00000000
#define PDATA_LTE_BANDX_PT0              0x00000000
#define PDATA_LTE_BANDX_PT0_H            0x00000000

//PR3B is used for special scenario of TDD special subframe
#define PDATA_LTE_BANDX_PR3B             0x00000000
#define PDATA_LTE_BANDX_PR3B_H           0x00000000

//PR3C is used for set RF conflict off
#define PDATA_LTE_BANDX_PR3C             0x00000000
#define PDATA_LTE_BANDX_PR3C_H           0x00000000

//Common PR1~3_H, PT1~3_H, CA setting
//PS: it should be replaced by CA defined BPI_H
#define PDATA_LTE_BANDX_PR1_H            LTE_PDATA_OFF
#define PDATA_LTE_BANDX_PR2_H            LTE_PDATA_OFF
#define PDATA_LTE_BANDX_PR3_H            LTE_PDATA_OFF
#define PDATA_LTE_BANDX_PT1_H            LTE_PDATA_OFF
#define PDATA_LTE_BANDX_PT2_H            LTE_PDATA_OFF
#define PDATA_LTE_BANDX_PT3_H            LTE_PDATA_OFF

/*******************************************************************************/

/** Define BPI_H [48:32], in general, should be 0x00000000 */
#ifndef    PDATA_LTE_BandNone_PR1_H
   #define PDATA_LTE_BandNone_PR1_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_BandNone_PR2_H
   #define PDATA_LTE_BandNone_PR2_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_BandNone_PR3_H
   #define PDATA_LTE_BandNone_PR3_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_BandNone_PT1_H
   #define PDATA_LTE_BandNone_PT1_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_BandNone_PT2_H
   #define PDATA_LTE_BandNone_PT2_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_BandNone_PT3_H
   #define PDATA_LTE_BandNone_PT3_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_BandNone_PRANT_H
   #define PDATA_LTE_BandNone_PRANT_H    LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_BandNone_PTANT_H
   #define PDATA_LTE_BandNone_PTANT_H    LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band1_PR1_H
   #define PDATA_LTE_Band1_PR1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band1_PR2_H
   #define PDATA_LTE_Band1_PR2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band1_PR3_H
   #define PDATA_LTE_Band1_PR3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band1_PT1_H
   #define PDATA_LTE_Band1_PT1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band1_PT2_H
   #define PDATA_LTE_Band1_PT2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band1_PT3_H
   #define PDATA_LTE_Band1_PT3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band1_PRANT_H
   #define PDATA_LTE_Band1_PRANT_H       LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band1_PTANT_H
   #define PDATA_LTE_Band1_PTANT_H       LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band2_PR1_H
   #define PDATA_LTE_Band2_PR1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band2_PR2_H
   #define PDATA_LTE_Band2_PR2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band2_PR3_H
   #define PDATA_LTE_Band2_PR3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band2_PT1_H
   #define PDATA_LTE_Band2_PT1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band2_PT2_H
   #define PDATA_LTE_Band2_PT2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band2_PT3_H
   #define PDATA_LTE_Band2_PT3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band2_PRANT_H
   #define PDATA_LTE_Band2_PRANT_H       LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band2_PTANT_H
   #define PDATA_LTE_Band2_PTANT_H       LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band3_PR1_H
   #define PDATA_LTE_Band3_PR1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band3_PR2_H
   #define PDATA_LTE_Band3_PR2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band3_PR3_H
   #define PDATA_LTE_Band3_PR3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band3_PT1_H
   #define PDATA_LTE_Band3_PT1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band3_PT2_H
   #define PDATA_LTE_Band3_PT2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band3_PT3_H
   #define PDATA_LTE_Band3_PT3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band3_PRANT_H
   #define PDATA_LTE_Band3_PRANT_H       LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band3_PTANT_H
   #define PDATA_LTE_Band3_PTANT_H       LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band4_PR1_H
   #define PDATA_LTE_Band4_PR1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band4_PR2_H
   #define PDATA_LTE_Band4_PR2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band4_PR3_H
   #define PDATA_LTE_Band4_PR3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band4_PT1_H
   #define PDATA_LTE_Band4_PT1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band4_PT2_H
   #define PDATA_LTE_Band4_PT2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band4_PT3_H
   #define PDATA_LTE_Band4_PT3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band4_PRANT_H
   #define PDATA_LTE_Band4_PRANT_H       LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band4_PTANT_H
   #define PDATA_LTE_Band4_PTANT_H       LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band5_PR1_H
   #define PDATA_LTE_Band5_PR1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band5_PR2_H
   #define PDATA_LTE_Band5_PR2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band5_PR3_H
   #define PDATA_LTE_Band5_PR3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band5_PT1_H
   #define PDATA_LTE_Band5_PT1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band5_PT2_H
   #define PDATA_LTE_Band5_PT2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band5_PT3_H
   #define PDATA_LTE_Band5_PT3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band5_PRANT_H
   #define PDATA_LTE_Band5_PRANT_H       LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band5_PTANT_H
   #define PDATA_LTE_Band5_PTANT_H       LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band6_PR1_H
   #define PDATA_LTE_Band6_PR1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band6_PR2_H
   #define PDATA_LTE_Band6_PR2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band6_PR3_H
   #define PDATA_LTE_Band6_PR3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band6_PT1_H
   #define PDATA_LTE_Band6_PT1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band6_PT2_H
   #define PDATA_LTE_Band6_PT2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band6_PT3_H
   #define PDATA_LTE_Band6_PT3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band6_PRANT_H
   #define PDATA_LTE_Band6_PRANT_H       LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band6_PTANT_H
   #define PDATA_LTE_Band6_PTANT_H       LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band7_PR1_H
   #define PDATA_LTE_Band7_PR1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band7_PR2_H
   #define PDATA_LTE_Band7_PR2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band7_PR3_H
   #define PDATA_LTE_Band7_PR3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band7_PT1_H
   #define PDATA_LTE_Band7_PT1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band7_PT2_H
   #define PDATA_LTE_Band7_PT2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band7_PT3_H
   #define PDATA_LTE_Band7_PT3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band7_PRANT_H
   #define PDATA_LTE_Band7_PRANT_H       LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band7_PTANT_H
   #define PDATA_LTE_Band7_PTANT_H       LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band8_PR1_H
   #define PDATA_LTE_Band8_PR1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band8_PR2_H
   #define PDATA_LTE_Band8_PR2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band8_PR3_H
   #define PDATA_LTE_Band8_PR3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band8_PT1_H
   #define PDATA_LTE_Band8_PT1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band8_PT2_H
   #define PDATA_LTE_Band8_PT2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band8_PT3_H
   #define PDATA_LTE_Band8_PT3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band8_PRANT_H
   #define PDATA_LTE_Band8_PRANT_H       LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band8_PTANT_H
   #define PDATA_LTE_Band8_PTANT_H       LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band9_PR1_H
   #define PDATA_LTE_Band9_PR1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band9_PR2_H
   #define PDATA_LTE_Band9_PR2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band9_PR3_H
   #define PDATA_LTE_Band9_PR3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band9_PT1_H
   #define PDATA_LTE_Band9_PT1_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band9_PT2_H
   #define PDATA_LTE_Band9_PT2_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band9_PT3_H
   #define PDATA_LTE_Band9_PT3_H         LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band9_PRANT_H
   #define PDATA_LTE_Band9_PRANT_H       LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band9_PTANT_H
   #define PDATA_LTE_Band9_PTANT_H       LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band10_PR1_H
   #define PDATA_LTE_Band10_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band10_PR2_H
   #define PDATA_LTE_Band10_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band10_PR3_H
   #define PDATA_LTE_Band10_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band10_PT1_H
   #define PDATA_LTE_Band10_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band10_PT2_H
   #define PDATA_LTE_Band10_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band10_PT3_H
   #define PDATA_LTE_Band10_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band10_PRANT_H
   #define PDATA_LTE_Band10_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band10_PTANT_H
   #define PDATA_LTE_Band10_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band11_PR1_H
   #define PDATA_LTE_Band11_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band11_PR2_H
   #define PDATA_LTE_Band11_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band11_PR3_H
   #define PDATA_LTE_Band11_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band11_PT1_H
   #define PDATA_LTE_Band11_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band11_PT2_H
   #define PDATA_LTE_Band11_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band11_PT3_H
   #define PDATA_LTE_Band11_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band11_PRANT_H
   #define PDATA_LTE_Band11_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band11_PTANT_H
   #define PDATA_LTE_Band11_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band12_PR1_H
   #define PDATA_LTE_Band12_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band12_PR2_H
   #define PDATA_LTE_Band12_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band12_PR3_H
   #define PDATA_LTE_Band12_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band12_PT1_H
   #define PDATA_LTE_Band12_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band12_PT2_H
   #define PDATA_LTE_Band12_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band12_PT3_H
   #define PDATA_LTE_Band12_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band12_PRANT_H
   #define PDATA_LTE_Band12_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band12_PTANT_H
   #define PDATA_LTE_Band12_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band13_PR1_H
   #define PDATA_LTE_Band13_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band13_PR2_H
   #define PDATA_LTE_Band13_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band13_PR3_H
   #define PDATA_LTE_Band13_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band13_PT1_H
   #define PDATA_LTE_Band13_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band13_PT2_H
   #define PDATA_LTE_Band13_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band13_PT3_H
   #define PDATA_LTE_Band13_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band13_PRANT_H
   #define PDATA_LTE_Band13_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band13_PTANT_H
   #define PDATA_LTE_Band13_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band14_PR1_H
   #define PDATA_LTE_Band14_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band14_PR2_H
   #define PDATA_LTE_Band14_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band14_PR3_H
   #define PDATA_LTE_Band14_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band14_PT1_H
   #define PDATA_LTE_Band14_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band14_PT2_H
   #define PDATA_LTE_Band14_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band14_PT3_H
   #define PDATA_LTE_Band14_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band14_PRANT_H
   #define PDATA_LTE_Band14_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band14_PTANT_H
   #define PDATA_LTE_Band14_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band15_PR1_H
   #define PDATA_LTE_Band15_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band15_PR2_H
   #define PDATA_LTE_Band15_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band15_PR3_H
   #define PDATA_LTE_Band15_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band15_PT1_H
   #define PDATA_LTE_Band15_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band15_PT2_H
   #define PDATA_LTE_Band15_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band15_PT3_H
   #define PDATA_LTE_Band15_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band15_PRANT_H
   #define PDATA_LTE_Band15_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band15_PTANT_H
   #define PDATA_LTE_Band15_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band16_PR1_H
   #define PDATA_LTE_Band16_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band16_PR2_H
   #define PDATA_LTE_Band16_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band16_PR3_H
   #define PDATA_LTE_Band16_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band16_PT1_H
   #define PDATA_LTE_Band16_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band16_PT2_H
   #define PDATA_LTE_Band16_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band16_PT3_H
   #define PDATA_LTE_Band16_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band16_PRANT_H
   #define PDATA_LTE_Band16_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band16_PTANT_H
   #define PDATA_LTE_Band16_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band17_PR1_H
   #define PDATA_LTE_Band17_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band17_PR2_H
   #define PDATA_LTE_Band17_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band17_PR3_H
   #define PDATA_LTE_Band17_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band17_PT1_H
   #define PDATA_LTE_Band17_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band17_PT2_H
   #define PDATA_LTE_Band17_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band17_PT3_H
   #define PDATA_LTE_Band17_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band17_PRANT_H
   #define PDATA_LTE_Band17_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band17_PTANT_H
   #define PDATA_LTE_Band17_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band18_PR1_H
   #define PDATA_LTE_Band18_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band18_PR2_H
   #define PDATA_LTE_Band18_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band18_PR3_H
   #define PDATA_LTE_Band18_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band18_PT1_H
   #define PDATA_LTE_Band18_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band18_PT2_H
   #define PDATA_LTE_Band18_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band18_PT3_H
   #define PDATA_LTE_Band18_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band18_PRANT_H
   #define PDATA_LTE_Band18_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band18_PTANT_H
   #define PDATA_LTE_Band18_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band19_PR1_H
   #define PDATA_LTE_Band19_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band19_PR2_H
   #define PDATA_LTE_Band19_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band19_PR3_H
   #define PDATA_LTE_Band19_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band19_PT1_H
   #define PDATA_LTE_Band19_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band19_PT2_H
   #define PDATA_LTE_Band19_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band19_PT3_H
   #define PDATA_LTE_Band19_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band19_PRANT_H
   #define PDATA_LTE_Band19_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band19_PTANT_H
   #define PDATA_LTE_Band19_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band20_PR1_H
   #define PDATA_LTE_Band20_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band20_PR2_H
   #define PDATA_LTE_Band20_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band20_PR3_H
   #define PDATA_LTE_Band20_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band20_PT1_H
   #define PDATA_LTE_Band20_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band20_PT2_H
   #define PDATA_LTE_Band20_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band20_PT3_H
   #define PDATA_LTE_Band20_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band20_PRANT_H
   #define PDATA_LTE_Band20_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band20_PTANT_H
   #define PDATA_LTE_Band20_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band21_PR1_H
   #define PDATA_LTE_Band21_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band21_PR2_H
   #define PDATA_LTE_Band21_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band21_PR3_H
   #define PDATA_LTE_Band21_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band21_PT1_H
   #define PDATA_LTE_Band21_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band21_PT2_H
   #define PDATA_LTE_Band21_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band21_PT3_H
   #define PDATA_LTE_Band21_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band21_PRANT_H
   #define PDATA_LTE_Band21_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band21_PTANT_H
   #define PDATA_LTE_Band21_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band22_PR1_H
   #define PDATA_LTE_Band22_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band22_PR2_H
   #define PDATA_LTE_Band22_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band22_PR3_H
   #define PDATA_LTE_Band22_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band22_PT1_H
   #define PDATA_LTE_Band22_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band22_PT2_H
   #define PDATA_LTE_Band22_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band22_PT3_H
   #define PDATA_LTE_Band22_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band22_PRANT_H
   #define PDATA_LTE_Band22_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band22_PTANT_H
   #define PDATA_LTE_Band22_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band23_PR1_H
   #define PDATA_LTE_Band23_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band23_PR2_H
   #define PDATA_LTE_Band23_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band23_PR3_H
   #define PDATA_LTE_Band23_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band23_PT1_H
   #define PDATA_LTE_Band23_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band23_PT2_H
   #define PDATA_LTE_Band23_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band23_PT3_H
   #define PDATA_LTE_Band23_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band23_PRANT_H
   #define PDATA_LTE_Band23_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band23_PTANT_H
   #define PDATA_LTE_Band23_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band24_PR1_H
   #define PDATA_LTE_Band24_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band24_PR2_H
   #define PDATA_LTE_Band24_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band24_PR3_H
   #define PDATA_LTE_Band24_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band24_PT1_H
   #define PDATA_LTE_Band24_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band24_PT2_H
   #define PDATA_LTE_Band24_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band24_PT3_H
   #define PDATA_LTE_Band24_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band24_PRANT_H
   #define PDATA_LTE_Band24_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band24_PTANT_H
   #define PDATA_LTE_Band24_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band25_PR1_H
   #define PDATA_LTE_Band25_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band25_PR2_H
   #define PDATA_LTE_Band25_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band25_PR3_H
   #define PDATA_LTE_Band25_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band25_PT1_H
   #define PDATA_LTE_Band25_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band25_PT2_H
   #define PDATA_LTE_Band25_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band25_PT3_H
   #define PDATA_LTE_Band25_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band25_PRANT_H
   #define PDATA_LTE_Band25_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band25_PTANT_H
   #define PDATA_LTE_Band25_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band26_PR1_H
   #define PDATA_LTE_Band26_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band26_PR2_H
   #define PDATA_LTE_Band26_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band26_PR3_H
   #define PDATA_LTE_Band26_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band26_PT1_H
   #define PDATA_LTE_Band26_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band26_PT2_H
   #define PDATA_LTE_Band26_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band26_PT3_H
   #define PDATA_LTE_Band26_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band26_PRANT_H
   #define PDATA_LTE_Band26_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band26_PTANT_H
   #define PDATA_LTE_Band26_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band27_PR1_H
   #define PDATA_LTE_Band27_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band27_PR2_H
   #define PDATA_LTE_Band27_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band27_PR3_H
   #define PDATA_LTE_Band27_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band27_PT1_H
   #define PDATA_LTE_Band27_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band27_PT2_H
   #define PDATA_LTE_Band27_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band27_PT3_H
   #define PDATA_LTE_Band27_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band27_PRANT_H
   #define PDATA_LTE_Band27_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band27_PTANT_H
   #define PDATA_LTE_Band27_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band28_PR1_H
   #define PDATA_LTE_Band28_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band28_PR2_H
   #define PDATA_LTE_Band28_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band28_PR3_H
   #define PDATA_LTE_Band28_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band28_PT1_H
   #define PDATA_LTE_Band28_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band28_PT2_H
   #define PDATA_LTE_Band28_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band28_PT3_H
   #define PDATA_LTE_Band28_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band28_PRANT_H
   #define PDATA_LTE_Band28_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band28_PTANT_H
   #define PDATA_LTE_Band28_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band29_PR1_H
   #define PDATA_LTE_Band29_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band29_PR2_H
   #define PDATA_LTE_Band29_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band29_PR3_H
   #define PDATA_LTE_Band29_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band29_PT1_H
   #define PDATA_LTE_Band29_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band29_PT2_H
   #define PDATA_LTE_Band29_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band29_PT3_H
   #define PDATA_LTE_Band29_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band29_PRANT_H
   #define PDATA_LTE_Band29_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band29_PTANT_H
   #define PDATA_LTE_Band29_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band30_PR1_H
   #define PDATA_LTE_Band30_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band30_PR2_H
   #define PDATA_LTE_Band30_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band30_PR3_H
   #define PDATA_LTE_Band30_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band30_PT1_H
   #define PDATA_LTE_Band30_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band30_PT2_H
   #define PDATA_LTE_Band30_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band30_PT3_H
   #define PDATA_LTE_Band30_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band30_PRANT_H
   #define PDATA_LTE_Band30_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band30_PTANT_H
   #define PDATA_LTE_Band30_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band31_PR1_H
   #define PDATA_LTE_Band31_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band31_PR2_H
   #define PDATA_LTE_Band31_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band31_PR3_H
   #define PDATA_LTE_Band31_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band31_PT1_H
   #define PDATA_LTE_Band31_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band31_PT2_H
   #define PDATA_LTE_Band31_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band31_PT3_H
   #define PDATA_LTE_Band31_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band31_PRANT_H
   #define PDATA_LTE_Band31_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band31_PTANT_H
   #define PDATA_LTE_Band31_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band32_PR1_H
   #define PDATA_LTE_Band32_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band32_PR2_H
   #define PDATA_LTE_Band32_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band32_PR3_H
   #define PDATA_LTE_Band32_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band32_PT1_H
   #define PDATA_LTE_Band32_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band32_PT2_H
   #define PDATA_LTE_Band32_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band32_PT3_H
   #define PDATA_LTE_Band32_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band32_PRANT_H
   #define PDATA_LTE_Band32_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band32_PTANT_H
   #define PDATA_LTE_Band32_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band33_PR1_H
   #define PDATA_LTE_Band33_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band33_PR2_H
   #define PDATA_LTE_Band33_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band33_PR3_H
   #define PDATA_LTE_Band33_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band33_PT1_H
   #define PDATA_LTE_Band33_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band33_PT2_H
   #define PDATA_LTE_Band33_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band33_PT3_H
   #define PDATA_LTE_Band33_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band33_PRANT_H
   #define PDATA_LTE_Band33_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band33_PTANT_H
   #define PDATA_LTE_Band33_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band34_PR1_H
   #define PDATA_LTE_Band34_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band34_PR2_H
   #define PDATA_LTE_Band34_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band34_PR3_H
   #define PDATA_LTE_Band34_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band34_PT1_H
   #define PDATA_LTE_Band34_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band34_PT2_H
   #define PDATA_LTE_Band34_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band34_PT3_H
   #define PDATA_LTE_Band34_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band34_PRANT_H
   #define PDATA_LTE_Band34_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band34_PTANT_H
   #define PDATA_LTE_Band34_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band35_PR1_H
   #define PDATA_LTE_Band35_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band35_PR2_H
   #define PDATA_LTE_Band35_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band35_PR3_H
   #define PDATA_LTE_Band35_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band35_PT1_H
   #define PDATA_LTE_Band35_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band35_PT2_H
   #define PDATA_LTE_Band35_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band35_PT3_H
   #define PDATA_LTE_Band35_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band35_PRANT_H
   #define PDATA_LTE_Band35_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band35_PTANT_H
   #define PDATA_LTE_Band35_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band36_PR1_H
   #define PDATA_LTE_Band36_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band36_PR2_H
   #define PDATA_LTE_Band36_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band36_PR3_H
   #define PDATA_LTE_Band36_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band36_PT1_H
   #define PDATA_LTE_Band36_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band36_PT2_H
   #define PDATA_LTE_Band36_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band36_PT3_H
   #define PDATA_LTE_Band36_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band36_PRANT_H
   #define PDATA_LTE_Band36_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band36_PTANT_H
   #define PDATA_LTE_Band36_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band37_PR1_H
   #define PDATA_LTE_Band37_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band37_PR2_H
   #define PDATA_LTE_Band37_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band37_PR3_H
   #define PDATA_LTE_Band37_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band37_PT1_H
   #define PDATA_LTE_Band37_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band37_PT2_H
   #define PDATA_LTE_Band37_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band37_PT3_H
   #define PDATA_LTE_Band37_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band37_PRANT_H
   #define PDATA_LTE_Band37_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band37_PTANT_H
   #define PDATA_LTE_Band37_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band38_PR1_H
   #define PDATA_LTE_Band38_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band38_PR2_H
   #define PDATA_LTE_Band38_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band38_PR3_H
   #define PDATA_LTE_Band38_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band38_PT1_H
   #define PDATA_LTE_Band38_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band38_PT2_H
   #define PDATA_LTE_Band38_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band38_PT3_H
   #define PDATA_LTE_Band38_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band38_PRANT_H
   #define PDATA_LTE_Band38_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band38_PTANT_H
   #define PDATA_LTE_Band38_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band39_PR1_H
   #define PDATA_LTE_Band39_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band39_PR2_H
   #define PDATA_LTE_Band39_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band39_PR3_H
   #define PDATA_LTE_Band39_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band39_PT1_H
   #define PDATA_LTE_Band39_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band39_PT2_H
   #define PDATA_LTE_Band39_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band39_PT3_H
   #define PDATA_LTE_Band39_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band39_PRANT_H
   #define PDATA_LTE_Band39_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band39_PTANT_H
   #define PDATA_LTE_Band39_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band40_PR1_H
   #define PDATA_LTE_Band40_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band40_PR2_H
   #define PDATA_LTE_Band40_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band40_PR3_H
   #define PDATA_LTE_Band40_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band40_PT1_H
   #define PDATA_LTE_Band40_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band40_PT2_H
   #define PDATA_LTE_Band40_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band40_PT3_H
   #define PDATA_LTE_Band40_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band40_PRANT_H
   #define PDATA_LTE_Band40_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band40_PTANT_H
   #define PDATA_LTE_Band40_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band41_PR1_H
   #define PDATA_LTE_Band41_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band41_PR2_H
   #define PDATA_LTE_Band41_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band41_PR3_H
   #define PDATA_LTE_Band41_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band41_PT1_H
   #define PDATA_LTE_Band41_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band41_PT2_H
   #define PDATA_LTE_Band41_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band41_PT3_H
   #define PDATA_LTE_Band41_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band41_PRANT_H
   #define PDATA_LTE_Band41_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band41_PTANT_H
   #define PDATA_LTE_Band41_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band42_PR1_H
   #define PDATA_LTE_Band42_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band42_PR2_H
   #define PDATA_LTE_Band42_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band42_PR3_H
   #define PDATA_LTE_Band42_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band42_PT1_H
   #define PDATA_LTE_Band42_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band42_PT2_H
   #define PDATA_LTE_Band42_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band42_PT3_H
   #define PDATA_LTE_Band42_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band42_PRANT_H
   #define PDATA_LTE_Band42_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band42_PTANT_H
   #define PDATA_LTE_Band42_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band43_PR1_H
   #define PDATA_LTE_Band43_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band43_PR2_H
   #define PDATA_LTE_Band43_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band43_PR3_H
   #define PDATA_LTE_Band43_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band43_PT1_H
   #define PDATA_LTE_Band43_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band43_PT2_H
   #define PDATA_LTE_Band43_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band43_PT3_H
   #define PDATA_LTE_Band43_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band43_PRANT_H
   #define PDATA_LTE_Band43_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band43_PTANT_H
   #define PDATA_LTE_Band43_PTANT_H      LTE_PDATA_OFF
#endif

#ifndef    PDATA_LTE_Band44_PR1_H
   #define PDATA_LTE_Band44_PR1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band44_PR2_H
   #define PDATA_LTE_Band44_PR2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band44_PR3_H
   #define PDATA_LTE_Band44_PR3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band44_PT1_H
   #define PDATA_LTE_Band44_PT1_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band44_PT2_H
   #define PDATA_LTE_Band44_PT2_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band44_PT3_H
   #define PDATA_LTE_Band44_PT3_H        LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band44_PRANT_H
   #define PDATA_LTE_Band44_PRANT_H      LTE_PDATA_OFF
#endif
#ifndef    PDATA_LTE_Band44_PTANT_H
   #define PDATA_LTE_Band44_PTANT_H      LTE_PDATA_OFF
#endif



/** IO Port Setting */

#define IO_NON_USED(tp,sb)          tp##_IO_##sb##1

/* Define BANDx_RX_IO_SEL */
#ifndef BAND1_RX_IO_SEL
   #define BAND1_RX_IO_SEL          IO_NON_USED(RX,MB)
#endif
#ifndef BAND2_RX_IO_SEL
   #define BAND2_RX_IO_SEL          IO_NON_USED(RX,MB)
#endif
#ifndef BAND3_RX_IO_SEL
   #define BAND3_RX_IO_SEL          IO_NON_USED(RX,MB)
#endif
#ifndef BAND4_RX_IO_SEL
   #define BAND4_RX_IO_SEL          IO_NON_USED(RX,MB)
#endif
#ifndef BAND5_RX_IO_SEL
   #define BAND5_RX_IO_SEL          IO_NON_USED(RX,LB)
#endif
#ifndef BAND6_RX_IO_SEL
   #define BAND6_RX_IO_SEL          IO_NON_USED(RX,LB)
#endif
#ifndef BAND7_RX_IO_SEL
   #define BAND7_RX_IO_SEL          IO_NON_USED(RX,HB)
#endif
#ifndef BAND8_RX_IO_SEL
   #define BAND8_RX_IO_SEL          IO_NON_USED(RX,LB)
#endif
#ifndef BAND9_RX_IO_SEL
   #define BAND9_RX_IO_SEL          IO_NON_USED(RX,MB)
#endif
#ifndef BAND11_RX_IO_SEL
   #define BAND11_RX_IO_SEL         IO_NON_USED(RX,MB)
#endif
#ifndef BAND12_RX_IO_SEL
   #define BAND12_RX_IO_SEL         IO_NON_USED(RX,LB)
#endif
#ifndef BAND13_RX_IO_SEL
   #define BAND13_RX_IO_SEL         IO_NON_USED(RX,LB)
#endif
#ifndef BAND14_RX_IO_SEL
   #define BAND14_RX_IO_SEL         IO_NON_USED(RX,LB)
#endif
#ifndef BAND17_RX_IO_SEL
   #define BAND17_RX_IO_SEL         IO_NON_USED(RX,LB)
#endif
#ifndef BAND18_RX_IO_SEL
   #define BAND18_RX_IO_SEL         IO_NON_USED(RX,LB)
#endif
#ifndef BAND19_RX_IO_SEL
   #define BAND19_RX_IO_SEL         IO_NON_USED(RX,LB)
#endif
#ifndef BAND20_RX_IO_SEL
   #define BAND20_RX_IO_SEL         IO_NON_USED(RX,LB)
#endif
#ifndef BAND21_RX_IO_SEL
   #define BAND21_RX_IO_SEL         IO_NON_USED(RX,MB)
#endif
#ifndef BAND25_RX_IO_SEL
   #define BAND25_RX_IO_SEL         IO_NON_USED(RX,MB)
#endif
#ifndef BAND26_RX_IO_SEL
   #define BAND26_RX_IO_SEL         IO_NON_USED(RX,LB)
#endif
#ifndef BAND28_RX_IO_SEL
   #define BAND28_RX_IO_SEL         IO_NON_USED(RX,LB)
#endif
#ifndef BAND34_RX_IO_SEL
   #define BAND34_RX_IO_SEL         IO_NON_USED(RX,MB)
#endif
#ifndef BAND38_RX_IO_SEL
   #define BAND38_RX_IO_SEL         IO_NON_USED(RX,HB)
#endif
#ifndef BAND39_RX_IO_SEL
   #define BAND39_RX_IO_SEL         IO_NON_USED(RX,MB)
#endif
#ifndef BAND40_RX_IO_SEL
   #define BAND40_RX_IO_SEL         IO_NON_USED(RX,HB)
#endif
#ifndef BAND41_RX_IO_SEL
   #define BAND41_RX_IO_SEL         IO_NON_USED(RX,HB)
#endif

/* Define BANDx_RXD_IO_SEL */
#ifndef BAND1_RXD_IO_SEL
   #define BAND1_RXD_IO_SEL         IO_NON_USED(RXD,MB)
#endif
#ifndef BAND2_RXD_IO_SEL
   #define BAND2_RXD_IO_SEL         IO_NON_USED(RXD,MB)
#endif
#ifndef BAND3_RXD_IO_SEL
   #define BAND3_RXD_IO_SEL         IO_NON_USED(RXD,MB)
#endif
#ifndef BAND4_RXD_IO_SEL
   #define BAND4_RXD_IO_SEL         IO_NON_USED(RXD,MB)
#endif
#ifndef BAND5_RXD_IO_SEL
   #define BAND5_RXD_IO_SEL         IO_NON_USED(RXD,LB)
#endif
#ifndef BAND6_RXD_IO_SEL
   #define BAND6_RXD_IO_SEL         IO_NON_USED(RXD,LB)
#endif
#ifndef BAND7_RXD_IO_SEL
   #define BAND7_RXD_IO_SEL         IO_NON_USED(RXD,HB)
#endif
#ifndef BAND8_RXD_IO_SEL
   #define BAND8_RXD_IO_SEL         IO_NON_USED(RXD,LB)
#endif
#ifndef BAND9_RXD_IO_SEL
   #define BAND9_RXD_IO_SEL         IO_NON_USED(RXD,MB)
#endif
#ifndef BAND11_RXD_IO_SEL
   #define BAND11_RXD_IO_SEL        IO_NON_USED(RXD,MB)
#endif
#ifndef BAND12_RXD_IO_SEL
   #define BAND12_RXD_IO_SEL        IO_NON_USED(RXD,LB)
#endif
#ifndef BAND13_RXD_IO_SEL
   #define BAND13_RXD_IO_SEL        IO_NON_USED(RXD,LB)
#endif
#ifndef BAND14_RXD_IO_SEL
   #define BAND14_RXD_IO_SEL        IO_NON_USED(RXD,LB)
#endif
#ifndef BAND17_RXD_IO_SEL
   #define BAND17_RXD_IO_SEL        IO_NON_USED(RXD,LB)
#endif
#ifndef BAND18_RXD_IO_SEL
   #define BAND18_RXD_IO_SEL        IO_NON_USED(RXD,LB)
#endif
#ifndef BAND19_RXD_IO_SEL
   #define BAND19_RXD_IO_SEL        IO_NON_USED(RXD,LB)
#endif
#ifndef BAND20_RXD_IO_SEL
   #define BAND20_RXD_IO_SEL        IO_NON_USED(RXD,LB)
#endif
#ifndef BAND21_RXD_IO_SEL
   #define BAND21_RXD_IO_SEL        IO_NON_USED(RXD,MB)
#endif
#ifndef BAND25_RXD_IO_SEL
   #define BAND25_RXD_IO_SEL        IO_NON_USED(RXD,MB)
#endif
#ifndef BAND26_RXD_IO_SEL
   #define BAND26_RXD_IO_SEL        IO_NON_USED(RXD,LB)
#endif
#ifndef BAND28_RXD_IO_SEL
   #define BAND28_RXD_IO_SEL        IO_NON_USED(RXD,LB)
#endif
#ifndef BAND34_RXD_IO_SEL
   #define BAND34_RXD_IO_SEL        IO_NON_USED(RXD,MB)
#endif
#ifndef BAND38_RXD_IO_SEL
   #define BAND38_RXD_IO_SEL        IO_NON_USED(RXD,HB)
#endif
#ifndef BAND39_RXD_IO_SEL
   #define BAND39_RXD_IO_SEL        IO_NON_USED(RXD,MB)
#endif
#ifndef BAND40_RXD_IO_SEL
   #define BAND40_RXD_IO_SEL        IO_NON_USED(RXD,HB)
#endif
#ifndef BAND41_RXD_IO_SEL
   #define BAND41_RXD_IO_SEL        IO_NON_USED(RXD,HB)
#endif

/* Define BANDx_TX_IO_SEL */
#ifndef BAND1_TX_IO_SEL
   #define BAND1_TX_IO_SEL          IO_NON_USED(TX,MB)
#endif
#ifndef BAND2_TX_IO_SEL
   #define BAND2_TX_IO_SEL          IO_NON_USED(TX,MB)
#endif
#ifndef BAND3_TX_IO_SEL
   #define BAND3_TX_IO_SEL          IO_NON_USED(TX,MB)
#endif
#ifndef BAND4_TX_IO_SEL
   #define BAND4_TX_IO_SEL          IO_NON_USED(TX,MB)
#endif
#ifndef BAND5_TX_IO_SEL
   #define BAND5_TX_IO_SEL          IO_NON_USED(TX,LB)
#endif
#ifndef BAND6_TX_IO_SEL
   #define BAND6_TX_IO_SEL          IO_NON_USED(TX,LB)
#endif
#ifndef BAND7_TX_IO_SEL
   #define BAND7_TX_IO_SEL          IO_NON_USED(TX,HB)
#endif
#ifndef BAND8_TX_IO_SEL
   #define BAND8_TX_IO_SEL          IO_NON_USED(TX,LB)
#endif
#ifndef BAND9_TX_IO_SEL
   #define BAND9_TX_IO_SEL          IO_NON_USED(TX,MB)
#endif
#ifndef BAND11_TX_IO_SEL
   #define BAND11_TX_IO_SEL         IO_NON_USED(TX,MB)
#endif
#ifndef BAND12_TX_IO_SEL
   #define BAND12_TX_IO_SEL         IO_NON_USED(TX,LB)
#endif
#ifndef BAND13_TX_IO_SEL
   #define BAND13_TX_IO_SEL         IO_NON_USED(TX,LB)
#endif
#ifndef BAND14_TX_IO_SEL
   #define BAND14_TX_IO_SEL         IO_NON_USED(TX,LB)
#endif
#ifndef BAND17_TX_IO_SEL
   #define BAND17_TX_IO_SEL         IO_NON_USED(TX,LB)
#endif
#ifndef BAND18_TX_IO_SEL
   #define BAND18_TX_IO_SEL         IO_NON_USED(TX,LB)
#endif
#ifndef BAND19_TX_IO_SEL
   #define BAND19_TX_IO_SEL         IO_NON_USED(TX,LB)
#endif
#ifndef BAND20_TX_IO_SEL
   #define BAND20_TX_IO_SEL         IO_NON_USED(TX,LB)
#endif
#ifndef BAND21_TX_IO_SEL
   #define BAND21_TX_IO_SEL         IO_NON_USED(TX,MB)
#endif
#ifndef BAND25_TX_IO_SEL
   #define BAND25_TX_IO_SEL         IO_NON_USED(TX,MB)
#endif
#ifndef BAND26_TX_IO_SEL
   #define BAND26_TX_IO_SEL         IO_NON_USED(TX,LB)
#endif
#ifndef BAND28_TX_IO_SEL
   #define BAND28_TX_IO_SEL         IO_NON_USED(TX,LB)
#endif
#ifndef BAND34_TX_IO_SEL
   #define BAND34_TX_IO_SEL         IO_NON_USED(TX,MB)
#endif
#ifndef BAND38_TX_IO_SEL
   #define BAND38_TX_IO_SEL         IO_NON_USED(TX,HB)
#endif
#ifndef BAND39_TX_IO_SEL
   #define BAND39_TX_IO_SEL         IO_NON_USED(TX,MB)
#endif
#ifndef BAND40_TX_IO_SEL
   #define BAND40_TX_IO_SEL         IO_NON_USED(TX,HB)
#endif
#ifndef BAND41_TX_IO_SEL
   #define BAND41_TX_IO_SEL         IO_NON_USED(TX,HB)
#endif

/* Define LTE_Bandx_RX_IO_SEL */
#ifndef LTE_Band1_RX_IO_SEL
   #define LTE_Band1_RX_IO_SEL      LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band2_RX_IO_SEL
   #define LTE_Band2_RX_IO_SEL      LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band3_RX_IO_SEL
   #define LTE_Band3_RX_IO_SEL      LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band4_RX_IO_SEL
   #define LTE_Band4_RX_IO_SEL      LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band5_RX_IO_SEL
   #define LTE_Band5_RX_IO_SEL      LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band6_RX_IO_SEL
   #define LTE_Band6_RX_IO_SEL      LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band7_RX_IO_SEL
   #define LTE_Band7_RX_IO_SEL      LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band8_RX_IO_SEL
   #define LTE_Band8_RX_IO_SEL      LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band9_RX_IO_SEL
   #define LTE_Band9_RX_IO_SEL      LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band11_RX_IO_SEL
   #define LTE_Band11_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band12_RX_IO_SEL
   #define LTE_Band12_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band13_RX_IO_SEL
   #define LTE_Band13_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band14_RX_IO_SEL
   #define LTE_Band14_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band17_RX_IO_SEL
   #define LTE_Band17_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band18_RX_IO_SEL
   #define LTE_Band18_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band19_RX_IO_SEL
   #define LTE_Band19_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band20_RX_IO_SEL
   #define LTE_Band20_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band21_RX_IO_SEL
   #define LTE_Band21_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band25_RX_IO_SEL
   #define LTE_Band25_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band26_RX_IO_SEL
   #define LTE_Band26_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band28_RX_IO_SEL
   #define LTE_Band28_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band34_RX_IO_SEL
   #define LTE_Band34_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band38_RX_IO_SEL
   #define LTE_Band38_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band39_RX_IO_SEL
   #define LTE_Band39_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band40_RX_IO_SEL
   #define LTE_Band40_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif
#ifndef LTE_Band41_RX_IO_SEL
   #define LTE_Band41_RX_IO_SEL     LTE_BandNone_RX_IO_SEL
#endif

/* Define LTE_Bandx_RXD_IO_SEL */
#ifndef LTE_Band1_RXD_IO_SEL
   #define LTE_Band1_RXD_IO_SEL     LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band2_RXD_IO_SEL
   #define LTE_Band2_RXD_IO_SEL     LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band3_RXD_IO_SEL
   #define LTE_Band3_RXD_IO_SEL     LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band4_RXD_IO_SEL
   #define LTE_Band4_RXD_IO_SEL     LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band5_RXD_IO_SEL
   #define LTE_Band5_RXD_IO_SEL     LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band6_RXD_IO_SEL
   #define LTE_Band6_RXD_IO_SEL     LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band7_RXD_IO_SEL
   #define LTE_Band7_RXD_IO_SEL     LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band8_RXD_IO_SEL
   #define LTE_Band8_RXD_IO_SEL     LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band9_RXD_IO_SEL
   #define LTE_Band9_RXD_IO_SEL     LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band11_RXD_IO_SEL
   #define LTE_Band11_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band12_RXD_IO_SEL
   #define LTE_Band12_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band13_RXD_IO_SEL
   #define LTE_Band13_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band14_RXD_IO_SEL
   #define LTE_Band14_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band17_RXD_IO_SEL
   #define LTE_Band17_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band18_RXD_IO_SEL
   #define LTE_Band18_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band19_RXD_IO_SEL
   #define LTE_Band19_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band20_RXD_IO_SEL
   #define LTE_Band20_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band21_RXD_IO_SEL
   #define LTE_Band21_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band25_RXD_IO_SEL
   #define LTE_Band25_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band26_RXD_IO_SEL
   #define LTE_Band26_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band28_RXD_IO_SEL
   #define LTE_Band28_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band34_RXD_IO_SEL
   #define LTE_Band34_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band38_RXD_IO_SEL
   #define LTE_Band38_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band39_RXD_IO_SEL
   #define LTE_Band39_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band40_RXD_IO_SEL
   #define LTE_Band40_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif
#ifndef LTE_Band41_RXD_IO_SEL
   #define LTE_Band41_RXD_IO_SEL    LTE_BandNone_RXD_IO_SEL
#endif

/* Define LTE_Bandx_TX_IO_SEL */
#ifndef LTE_Band1_TX_IO_SEL
   #define LTE_Band1_TX_IO_SEL      LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band2_TX_IO_SEL
   #define LTE_Band2_TX_IO_SEL      LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band3_TX_IO_SEL
   #define LTE_Band3_TX_IO_SEL      LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band4_TX_IO_SEL
   #define LTE_Band4_TX_IO_SEL      LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band5_TX_IO_SEL
   #define LTE_Band5_TX_IO_SEL      LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band6_TX_IO_SEL
   #define LTE_Band6_TX_IO_SEL      LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band7_TX_IO_SEL
   #define LTE_Band7_TX_IO_SEL      LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band8_TX_IO_SEL
   #define LTE_Band8_TX_IO_SEL      LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band9_TX_IO_SEL
   #define LTE_Band9_TX_IO_SEL      LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band11_TX_IO_SEL
   #define LTE_Band11_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band12_TX_IO_SEL
   #define LTE_Band12_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band13_TX_IO_SEL
   #define LTE_Band13_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band14_TX_IO_SEL
   #define LTE_Band14_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band17_TX_IO_SEL
   #define LTE_Band17_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band18_TX_IO_SEL
   #define LTE_Band18_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band19_TX_IO_SEL
   #define LTE_Band19_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band20_TX_IO_SEL
   #define LTE_Band20_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band21_TX_IO_SEL
   #define LTE_Band21_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band25_TX_IO_SEL
   #define LTE_Band25_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band26_TX_IO_SEL
   #define LTE_Band26_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band28_TX_IO_SEL
   #define LTE_Band28_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band29_TX_IO_SEL
   #define LTE_Band29_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band30_TX_IO_SEL
   #define LTE_Band30_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band34_TX_IO_SEL
   #define LTE_Band34_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band38_TX_IO_SEL
   #define LTE_Band38_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band39_TX_IO_SEL
   #define LTE_Band39_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band40_TX_IO_SEL
   #define LTE_Band40_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif
#ifndef LTE_Band41_TX_IO_SEL
   #define LTE_Band41_TX_IO_SEL     LTE_BandNone_TX_IO_SEL
#endif

/* Define LTE_Bandx_TX_DET_IO_SEL */
#ifndef LTE_Band1_TX_DET_IO_SEL
   #define LTE_Band1_TX_DET_IO_SEL    LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band2_TX_DET_IO_SEL
   #define LTE_Band2_TX_DET_IO_SEL    LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band3_TX_DET_IO_SEL
   #define LTE_Band3_TX_DET_IO_SEL    LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band4_TX_DET_IO_SEL
   #define LTE_Band4_TX_DET_IO_SEL    LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band5_TX_DET_IO_SEL
   #define LTE_Band5_TX_DET_IO_SEL    LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band6_TX_DET_IO_SEL
   #define LTE_Band6_TX_DET_IO_SEL    LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band7_TX_DET_IO_SEL
   #define LTE_Band7_TX_DET_IO_SEL    LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band8_TX_DET_IO_SEL
   #define LTE_Band8_TX_DET_IO_SEL    LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band9_TX_DET_IO_SEL
   #define LTE_Band9_TX_DET_IO_SEL    LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band11_TX_DET_IO_SEL
   #define LTE_Band11_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band12_TX_DET_IO_SEL
   #define LTE_Band12_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band13_TX_DET_IO_SEL
   #define LTE_Band13_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band14_TX_DET_IO_SEL
   #define LTE_Band14_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band17_TX_DET_IO_SEL
   #define LTE_Band17_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band18_TX_DET_IO_SEL
   #define LTE_Band18_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band19_TX_DET_IO_SEL
   #define LTE_Band19_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band20_TX_DET_IO_SEL
   #define LTE_Band20_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band21_TX_DET_IO_SEL
   #define LTE_Band21_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band25_TX_DET_IO_SEL
   #define LTE_Band25_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band26_TX_DET_IO_SEL
   #define LTE_Band26_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band28_TX_DET_IO_SEL
   #define LTE_Band28_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band29_TX_DET_IO_SEL
   #define LTE_Band29_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band30_TX_DET_IO_SEL
   #define LTE_Band30_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band34_TX_DET_IO_SEL
   #define LTE_Band34_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band38_TX_DET_IO_SEL
   #define LTE_Band38_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band39_TX_DET_IO_SEL
   #define LTE_Band39_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band40_TX_DET_IO_SEL
   #define LTE_Band40_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif
#ifndef LTE_Band41_TX_DET_IO_SEL
   #define LTE_Band41_TX_DET_IO_SEL   LTE_BandNone_TX_DET_IO_SEL
#endif


/* Define LTE_Bandx_MPR_QPSK1 */
#ifndef LTE_Band1_MPR_QPSK1
   #define LTE_Band1_MPR_QPSK1      LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band2_MPR_QPSK1
   #define LTE_Band2_MPR_QPSK1      LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band3_MPR_QPSK1
   #define LTE_Band3_MPR_QPSK1      LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band4_MPR_QPSK1
   #define LTE_Band4_MPR_QPSK1      LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band5_MPR_QPSK1
   #define LTE_Band5_MPR_QPSK1      LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band6_MPR_QPSK1
   #define LTE_Band6_MPR_QPSK1      LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band7_MPR_QPSK1
   #define LTE_Band7_MPR_QPSK1      LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band8_MPR_QPSK1
   #define LTE_Band8_MPR_QPSK1      LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band9_MPR_QPSK1
   #define LTE_Band9_MPR_QPSK1      LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band11_MPR_QPSK1
   #define LTE_Band11_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band12_MPR_QPSK1
   #define LTE_Band12_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band13_MPR_QPSK1
   #define LTE_Band13_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band14_MPR_QPSK1
   #define LTE_Band14_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band17_MPR_QPSK1
   #define LTE_Band17_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band18_MPR_QPSK1
   #define LTE_Band18_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band19_MPR_QPSK1
   #define LTE_Band19_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band20_MPR_QPSK1
   #define LTE_Band20_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band21_MPR_QPSK1
   #define LTE_Band21_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band25_MPR_QPSK1
   #define LTE_Band25_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band26_MPR_QPSK1
   #define LTE_Band26_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band28_MPR_QPSK1
   #define LTE_Band28_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band34_MPR_QPSK1
   #define LTE_Band34_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band38_MPR_QPSK1
   #define LTE_Band38_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band39_MPR_QPSK1
   #define LTE_Band39_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band40_MPR_QPSK1
   #define LTE_Band40_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif
#ifndef LTE_Band41_MPR_QPSK1
   #define LTE_Band41_MPR_QPSK1     LTE_BandNone_MPR_QPSK1
#endif

/* Define LTE_Bandx_MPR_16QAM0 */
#ifndef LTE_Band1_MPR_16QAM0
   #define LTE_Band1_MPR_16QAM0     LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band2_MPR_16QAM0
   #define LTE_Band2_MPR_16QAM0     LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band3_MPR_16QAM0
   #define LTE_Band3_MPR_16QAM0     LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band4_MPR_16QAM0
   #define LTE_Band4_MPR_16QAM0     LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band5_MPR_16QAM0
   #define LTE_Band5_MPR_16QAM0     LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band6_MPR_16QAM0
   #define LTE_Band6_MPR_16QAM0     LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band7_MPR_16QAM0
   #define LTE_Band7_MPR_16QAM0     LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band8_MPR_16QAM0
   #define LTE_Band8_MPR_16QAM0     LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band9_MPR_16QAM0
   #define LTE_Band9_MPR_16QAM0     LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band11_MPR_16QAM0
   #define LTE_Band11_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band12_MPR_16QAM0
   #define LTE_Band12_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band13_MPR_16QAM0
   #define LTE_Band13_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band14_MPR_16QAM0
   #define LTE_Band14_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band17_MPR_16QAM0
   #define LTE_Band17_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band18_MPR_16QAM0
   #define LTE_Band18_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band19_MPR_16QAM0
   #define LTE_Band19_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band20_MPR_16QAM0
   #define LTE_Band20_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band21_MPR_16QAM0
   #define LTE_Band21_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band25_MPR_16QAM0
   #define LTE_Band25_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band26_MPR_16QAM0
   #define LTE_Band26_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band28_MPR_16QAM0
   #define LTE_Band28_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band34_MPR_16QAM0
   #define LTE_Band34_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band38_MPR_16QAM0
   #define LTE_Band38_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band39_MPR_16QAM0
   #define LTE_Band39_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band40_MPR_16QAM0
   #define LTE_Band40_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif
#ifndef LTE_Band41_MPR_16QAM0
   #define LTE_Band41_MPR_16QAM0    LTE_BandNone_MPR_16QAM0
#endif

/* Define LTE_Bandx_MPR_16QAM1 */
#ifndef LTE_Band1_MPR_16QAM1
   #define LTE_Band1_MPR_16QAM1     LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band2_MPR_16QAM1
   #define LTE_Band2_MPR_16QAM1     LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band3_MPR_16QAM1
   #define LTE_Band3_MPR_16QAM1     LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band4_MPR_16QAM1
   #define LTE_Band4_MPR_16QAM1     LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band5_MPR_16QAM1
   #define LTE_Band5_MPR_16QAM1     LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band6_MPR_16QAM1
   #define LTE_Band6_MPR_16QAM1     LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band7_MPR_16QAM1
   #define LTE_Band7_MPR_16QAM1     LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band8_MPR_16QAM1
   #define LTE_Band8_MPR_16QAM1     LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band9_MPR_16QAM1
   #define LTE_Band9_MPR_16QAM1     LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band11_MPR_16QAM1
   #define LTE_Band11_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band12_MPR_16QAM1
   #define LTE_Band12_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band13_MPR_16QAM1
   #define LTE_Band13_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band14_MPR_16QAM1
   #define LTE_Band14_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band17_MPR_16QAM1
   #define LTE_Band17_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band18_MPR_16QAM1
   #define LTE_Band18_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band19_MPR_16QAM1
   #define LTE_Band19_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band20_MPR_16QAM1
   #define LTE_Band20_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band21_MPR_16QAM1
   #define LTE_Band21_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band25_MPR_16QAM1
   #define LTE_Band25_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band26_MPR_16QAM1
   #define LTE_Band26_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band28_MPR_16QAM1
   #define LTE_Band28_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band34_MPR_16QAM1
   #define LTE_Band34_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band38_MPR_16QAM1
   #define LTE_Band38_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band39_MPR_16QAM1
   #define LTE_Band39_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band40_MPR_16QAM1
   #define LTE_Band40_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif
#ifndef LTE_Band41_MPR_16QAM1
   #define LTE_Band41_MPR_16QAM1    LTE_BandNone_MPR_16QAM1
#endif

/* Define LTE_Bandx_DELTA_TC0 */
#ifndef LTE_Band1_DELTA_TC0
   #define LTE_Band1_DELTA_TC0      LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band2_DELTA_TC0
   #define LTE_Band2_DELTA_TC0      LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band3_DELTA_TC0
   #define LTE_Band3_DELTA_TC0      LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band4_DELTA_TC0
   #define LTE_Band4_DELTA_TC0      LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band5_DELTA_TC0
   #define LTE_Band5_DELTA_TC0      LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band6_DELTA_TC0
   #define LTE_Band6_DELTA_TC0      LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band7_DELTA_TC0
   #define LTE_Band7_DELTA_TC0      LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band8_DELTA_TC0
   #define LTE_Band8_DELTA_TC0      LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band9_DELTA_TC0
   #define LTE_Band9_DELTA_TC0      LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band11_DELTA_TC0
   #define LTE_Band11_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band12_DELTA_TC0
   #define LTE_Band12_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band13_DELTA_TC0
   #define LTE_Band13_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band14_DELTA_TC0
   #define LTE_Band14_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band17_DELTA_TC0
   #define LTE_Band17_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band18_DELTA_TC0
   #define LTE_Band18_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band19_DELTA_TC0
   #define LTE_Band19_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band20_DELTA_TC0
   #define LTE_Band20_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band21_DELTA_TC0
   #define LTE_Band21_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band25_DELTA_TC0
   #define LTE_Band25_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band26_DELTA_TC0
   #define LTE_Band26_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band28_DELTA_TC0
   #define LTE_Band28_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band34_DELTA_TC0
   #define LTE_Band34_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band38_DELTA_TC0
   #define LTE_Band38_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band39_DELTA_TC0
   #define LTE_Band39_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band40_DELTA_TC0
   #define LTE_Band40_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif
#ifndef LTE_Band41_DELTA_TC0
   #define LTE_Band41_DELTA_TC0     LTE_BandNone_DELTA_TC0
#endif

/* Define LTE_Bandx_DELTA_TC1 */
#ifndef LTE_Band1_DELTA_TC1
   #define LTE_Band1_DELTA_TC1      LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band2_DELTA_TC1
   #define LTE_Band2_DELTA_TC1      LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band3_DELTA_TC1
   #define LTE_Band3_DELTA_TC1      LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band4_DELTA_TC1
   #define LTE_Band4_DELTA_TC1      LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band5_DELTA_TC1
   #define LTE_Band5_DELTA_TC1      LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band6_DELTA_TC1
   #define LTE_Band6_DELTA_TC1      LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band7_DELTA_TC1
   #define LTE_Band7_DELTA_TC1      LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band8_DELTA_TC1
   #define LTE_Band8_DELTA_TC1      LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band9_DELTA_TC1
   #define LTE_Band9_DELTA_TC1      LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band11_DELTA_TC1
   #define LTE_Band11_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band12_DELTA_TC1
   #define LTE_Band12_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band13_DELTA_TC1
   #define LTE_Band13_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band14_DELTA_TC1
   #define LTE_Band14_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band17_DELTA_TC1
   #define LTE_Band17_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band18_DELTA_TC1
   #define LTE_Band18_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band19_DELTA_TC1
   #define LTE_Band19_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band20_DELTA_TC1
   #define LTE_Band20_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band21_DELTA_TC1
   #define LTE_Band21_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band25_DELTA_TC1
   #define LTE_Band25_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band26_DELTA_TC1
   #define LTE_Band26_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band28_DELTA_TC1
   #define LTE_Band28_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band34_DELTA_TC1
   #define LTE_Band34_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band38_DELTA_TC1
   #define LTE_Band38_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band39_DELTA_TC1
   #define LTE_Band39_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band40_DELTA_TC1
   #define LTE_Band40_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif
#ifndef LTE_Band41_DELTA_TC1
   #define LTE_Band41_DELTA_TC1     LTE_BandNone_DELTA_TC1
#endif

/* Define LTE_AMPR */
#define LTE_AMPR_NS1                1
#define LTE_AMPR_NS2                2
#define LTE_AMPR_NS3                3
#define LTE_AMPR_NS4                4
#define LTE_AMPR_NS5                5
#define LTE_AMPR_NS6                6
#define LTE_AMPR_NS7                7
#define LTE_AMPR_NS8                8
#define LTE_AMPR_NS9                9
#define LTE_AMPR_NS10               10
#define LTE_AMPR_NS11               11
#define LTE_AMPR_NS121314           12
#define LTE_AMPR_NS15               15
#define LTE_AMPR_NS16               16
#define LTE_AMPR_NS17               17
#define LTE_AMPR_NS18               18
#define LTE_AMPR_NS19               19
#define LTE_AMPR_NS20               20
#define LTE_AMPR_NS21               21
#define LTE_AMPR_NS22               22
#define LTE_AMPR_NS23               23
#define LTE_AMPR_NS24               24
#define LTE_AMPR_NS25               25
#define LTE_AMPR_NS26               26

//DRDI use, in the end of LTE_AMPRAdjustTbl_All
#define LTE_BandMax_AMPR_NS        { LTE_BandMax, 0, {{0}} },
#define LTE_AMPR_NS_DEFAULT        { LTE_BandNone, 0, {{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }} }

#define LTE_HPUE_TPOS_ENA_SetDefault                  0
#define HPUE_LTE_BandNone_PC2_TPOS_SetDefault         0
#define HPUE_LTE_BandNone_PC3_TPOS_SetDefault         0


/*******************************************************************************
 * #define
 ******************************************************************************/


/*******************************************************************************
 * Typedef
 ******************************************************************************/

/*******************************************************************************
 * Constant
 ******************************************************************************/

/*******************************************************************************
 * Global variables (Extern)
 ******************************************************************************/




/*******************************************************************************
 * Global Functions Prototype (Interface)
 ******************************************************************************/


#endif /*__EL1D_RF_COMMON_H__*/

/* Doxygen Group End ***************************************************//**@}*/
