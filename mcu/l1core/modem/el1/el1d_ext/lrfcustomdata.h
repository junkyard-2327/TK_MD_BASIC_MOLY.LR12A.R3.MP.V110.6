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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup EL1D_RF_CUSTOM_DATA
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       lrfcustomdata.h
 * @author     LY Chen (MTK04356)
 * @date       2014.12.16
 * @brief      EL1D SHM data header file
 * @details
 ******************************************************************************/

#ifndef  __LRFCUSTOMDATA_H__
#define  __LRFCUSTOMDATA_H__

/*******************************************************************************
 * #include
 ******************************************************************************/
#include "el1d_rf_custom_data.h"  //RF custom data structure definition
#include "el1d_rf_common.h"
#include "lte_custom_drdi.h"

/*******************************************************************************
 * #define (Feature Option)
 ******************************************************************************/
/***************************************************************************************************************************
* Feature     : IS_EL1_DEFAULT_CAL_DATA_ENABLE
* Description : Enable flag for using calibration default values applied on all of DRDI sets
*               This flag is only available when DRDI is enabled but IS_EL1_CALIBRATION_DATA_DRDI_ENABLE is disabled
*               If calibration default values are different for different DRDI sets, 
*               please enable IS_EL1_CALIBRATION_DATA_DRDI_ENABLE to apply desired values in lte_custom_rf.c of each DRDI set
*               |----------------------------------------------------------------------------------------------------------|
* Example     : | IS_EL1_DEFAULT_CAL_DATA_ENABLE | IS_EL1_CALIBRATION_DATA_DRDI_ENABLE |               Note                |
*               |--------------------------------|-------------------------------------|-----------------------------------|
*               |               0                |                  0                  |   Calibration is needed           |
*               |--------------------------------|-------------------------------------|-----------------------------------|
*               |                                |                                     |   Default values defined in       |
*               |               1                |                  0                  |   lrfcustomdata.c will be applied |
*               |                                |                                     |   for all of DRDI sets            |
*               |--------------------------------|-------------------------------------|-----------------------------------|
*               |                                |                                     |   Default values defined in       |
*               |               NA               |                  1                  |   lte_custom_rf.c of each DRDI    | 
*               |                                |                                     |   set will be applied separately  |
*               |----------------------------------------------------------------------------------------------------------|
****************************************************************************************************************************/
#define IS_EL1_DEFAULT_CAL_DATA_ENABLE      0


/*******************************************************************************
 * #define
 ******************************************************************************/
#define LTE_Band_PDATA_PR1(b,s)      PDATA_##b##_PR1_##s
#define LTE_PDATA_PR1(b,s)           LTE_Band_PDATA_PR1(b,s)

#define LTE_Band_PDATA_PR2(b,s)      PDATA_##b##_PR2_##s
#define LTE_PDATA_PR2(b,s)           LTE_Band_PDATA_PR2(b,s)

#define LTE_Band_PDATA_PR3(b,s)      PDATA_##b##_PR3_##s
#define LTE_PDATA_PR3(b,s)           LTE_Band_PDATA_PR3(b,s)

#define LTE_Band_PDATA_PT1(b,s)      PDATA_##b##_PT1_##s
#define LTE_PDATA_PT1(b,s)           LTE_Band_PDATA_PT1(b,s)

#define LTE_Band_PDATA_PT2(b,s)      PDATA_##b##_PT2_##s
#define LTE_PDATA_PT2(b,s)           LTE_Band_PDATA_PT2(b,s)

#define LTE_Band_PDATA_PT3(b,s)      PDATA_##b##_PT3_##s
#define LTE_PDATA_PT3(b,s)           LTE_Band_PDATA_PT3(b,s)

#define LTE_Band_RX_IO(b,s)          b##_RX_IO_SEL_##s
#define LTE_RX_IO(b,s)               LTE_Band_RX_IO(b,s)

#define LTE_Band_RXD_IO(b,s)         b##_RXD_IO_SEL_##s
#define LTE_RXD_IO(b,s)              LTE_Band_RXD_IO(b,s)

#define LTE_Band_TX_IO(b,s)          b##_TX_IO_SEL_##s
#define LTE_TX_IO(b,s)               LTE_Band_TX_IO(b,s)

   //#define LTE_Band_TX_DET_IO(b,s)      b##_TX_DET_IO_SEL_##s
   //#define LTE_TX_DET_IO(b,s)           LTE_Band_TX_DET_IO(b,s)

/*============================================================================*/

#define LTE_RF_RX_PDATABASE(b,s)                                               \
{  b,                                                                          \
   {  {0x00000000, PDATA_LTE_BANDX_PR0 },                                      \
      {0x00000000, LTE_PDATA_PR1(b,s)},                                        \
      {0x00000000, LTE_PDATA_PR2(b,s)},                                        \
      {0x00000000, LTE_PDATA_PR3(b,s)},                                        \
      {0x00000000, PDATA_LTE_BANDX_PR3B},                                      \
      {0x00000000, PDATA_LTE_BANDX_PR3C}                                       \
   }                                                                           \
}

#define LTE_RF_TX_PDATABASE(b,s)                                               \
{  b,                                                                          \
   {  {0x00000000, PDATA_LTE_BANDX_PT0},                                       \
      {0x00000000, LTE_PDATA_PT1(b,s)},                                        \
      {0x00000000, LTE_PDATA_PT2(b,s)},                                        \
      {0x00000000, LTE_PDATA_PT3(b,s)}                                         \
   }                                                                           \
}

#define LTE_RF_RXIOBASE(b,s)                                                   \
{ b, {LTE_RX_IO(b,s), LTE_RXD_IO(b,s)}                                         \
}

#define LTE_RF_TXIOBASE(b,s)                                                   \
{ b, {LTE_TX_IO(b,s)}                                      \
}

#define LTE_Band_MPR_QPSK1(b,s)      b##_MPR_QPSK1_##s
#define LTE_MPR_QPSK1(b,s)           LTE_Band_MPR_QPSK1(b,s)

#define LTE_Band_MPR_16QAM0(b,s)     b##_MPR_16QAM0_##s
#define LTE_MPR_16QAM0(b,s)          LTE_Band_MPR_16QAM0(b,s)

#define LTE_Band_MPR_16QAM1(b,s)     b##_MPR_16QAM1_##s
#define LTE_MPR_16QAM1(b,s)          LTE_Band_MPR_16QAM1(b,s)

#define LTE_Band_MPR_64QAM0(b,s)     b##_MPR_64QAM0_##s
#define LTE_MPR_64QAM0(b,s)          LTE_Band_MPR_64QAM0(b,s)

#define LTE_Band_MPR_64QAM1(b,s)     b##_MPR_64QAM1_##s
#define LTE_MPR_64QAM1(b,s)          LTE_Band_MPR_64QAM1(b,s)

#define LTE_Band_DELTA_TC0(b,s)      b##_DELTA_TC0_##s
#define LTE_DELTA_TC0(b,s)           LTE_Band_DELTA_TC0(b,s)

#define LTE_Band_DELTA_TC1(b,s)      b##_DELTA_TC1_##s
#define LTE_DELTA_TC1(b,s)           LTE_Band_DELTA_TC1(b,s)

#define LTE_Band_DELTA_TIB(b,s)      b##_DELTA_TIB_##s
#define LTE_DELTA_TIB(b,s)           LTE_Band_DELTA_TIB(b,s)

#define LTE_Band_RES_HNDLR(b,s)      b##_RES_HNDLR_##s
#define LTE_RES_HNDLR(b,s)           LTE_Band_RES_HNDLR(b,s)

#define LTE_RF_MPR_ADJUST(b,s)                                                 \
{ b,  LTE_MPR_QPSK1(b,s), LTE_MPR_16QAM0(b,s), LTE_MPR_16QAM1(b,s),            \
      LTE_MPR_64QAM0(b,s), LTE_MPR_64QAM1(b,s),                                \
      LTE_DELTA_TC0(b,s), LTE_DELTA_TC1(b,s), LTE_DELTA_TIB(b,s),              \
      LTE_RES_HNDLR(b,s)                                                       \
}

/* Intra-CA */
#define LTE_Band_MPR_QPSK0_CA(b,s)      b##_MPR_QPSK0_CA_##s
#define LTE_MPR_QPSK0_CA(b,s)           LTE_Band_MPR_QPSK0_CA(b,s)

#define LTE_Band_MPR_QPSK1_CA(b,s)      b##_MPR_QPSK1_CA_##s
#define LTE_MPR_QPSK1_CA(b,s)           LTE_Band_MPR_QPSK1_CA(b,s)

#define LTE_Band_MPR_16QAM0_CA(b,s)     b##_MPR_16QAM0_CA_##s
#define LTE_MPR_16QAM0_CA(b,s)          LTE_Band_MPR_16QAM0_CA(b,s)

#define LTE_Band_MPR_16QAM1_CA(b,s)     b##_MPR_16QAM1_CA_##s
#define LTE_MPR_16QAM1_CA(b,s)          LTE_Band_MPR_16QAM1_CA(b,s)

#define LTE_Band_MPR_16QAM2_CA(b,s)     b##_MPR_16QAM2_CA_##s
#define LTE_MPR_16QAM2_CA(b,s)          LTE_Band_MPR_16QAM2_CA(b,s)

#define LTE_Band_MPR_64QAM0_CA(b,s)     b##_MPR_64QAM0_CA_##s
#define LTE_MPR_64QAM0_CA(b,s)          LTE_Band_MPR_64QAM0_CA(b,s)

#define LTE_Band_MPR_64QAM1_CA(b,s)     b##_MPR_64QAM1_CA_##s
#define LTE_MPR_64QAM1_CA(b,s)          LTE_Band_MPR_64QAM1_CA(b,s)

#define LTE_Band_DELTA_TC0_CA(b,s)      b##_DELTA_TC0_CA_##s
#define LTE_DELTA_TC0_CA(b,s)           LTE_Band_DELTA_TC0_CA(b,s)

#define LTE_Band_DELTA_TC1_CA(b,s)      b##_DELTA_TC1_CA_##s
#define LTE_DELTA_TC1_CA(b,s)           LTE_Band_DELTA_TC1_CA(b,s)

#define LTE_Band_DELTA_TIB_CA(b,s)      b##_DELTA_TIB_CA_##s
#define LTE_DELTA_TIB_CA(b,s)           LTE_Band_DELTA_TIB_CA(b,s)

#define LTE_Band_RES_HNDLR_CA(b,s)      b##_RES_HNDLR_CA_##s
#define LTE_RES_HNDLR_CA(b,s)           LTE_Band_RES_HNDLR_CA(b,s)

#define LTE_RF_MPR_ADJUST_CA(b,s)                                              \
{ b,  LTE_MPR_QPSK0_CA(b,s), LTE_MPR_QPSK1_CA(b,s), LTE_MPR_16QAM0_CA(b,s),    \
      LTE_MPR_16QAM1_CA(b,s), LTE_MPR_16QAM2_CA(b,s),                          \
      LTE_MPR_64QAM0_CA(b,s), LTE_MPR_64QAM1_CA(b,s),                          \
      LTE_DELTA_TC0_CA(b,s), LTE_DELTA_TC1_CA(b,s), LTE_DELTA_TIB_CA(b,s),     \
      LTE_RES_HNDLR_CA(b,s)                                                    \
}

/* HPUE Intra-CA */
#define LTE_Band_MPR_QPSK0_HPUE_CA(b,s)      b##_MPR_QPSK0_HPUE_CA_##s
#define LTE_MPR_QPSK0_HPUE_CA(b,s)           LTE_Band_MPR_QPSK0_HPUE_CA(b,s)

#define LTE_Band_MPR_QPSK1_HPUE_CA(b,s)      b##_MPR_QPSK1_HPUE_CA_##s
#define LTE_MPR_QPSK1_HPUE_CA(b,s)           LTE_Band_MPR_QPSK1_HPUE_CA(b,s)

#define LTE_Band_MPR_16QAM0_HPUE_CA(b,s)     b##_MPR_16QAM0_HPUE_CA_##s
#define LTE_MPR_16QAM0_HPUE_CA(b,s)          LTE_Band_MPR_16QAM0_HPUE_CA(b,s)

#define LTE_Band_MPR_16QAM1_HPUE_CA(b,s)     b##_MPR_16QAM1_HPUE_CA_##s
#define LTE_MPR_16QAM1_HPUE_CA(b,s)          LTE_Band_MPR_16QAM1_HPUE_CA(b,s)

#define LTE_Band_MPR_16QAM2_HPUE_CA(b,s)     b##_MPR_16QAM2_HPUE_CA_##s
#define LTE_MPR_16QAM2_HPUE_CA(b,s)          LTE_Band_MPR_16QAM2_HPUE_CA(b,s)

#define LTE_Band_MPR_64QAM0_HPUE_CA(b,s)     b##_MPR_64QAM0_HPUE_CA_##s
#define LTE_MPR_64QAM0_HPUE_CA(b,s)          LTE_Band_MPR_64QAM0_HPUE_CA(b,s)

#define LTE_Band_MPR_64QAM1_HPUE_CA(b,s)     b##_MPR_64QAM1_HPUE_CA_##s
#define LTE_MPR_64QAM1_HPUE_CA(b,s)          LTE_Band_MPR_64QAM1_HPUE_CA(b,s)

#define LTE_Band_DELTA_TC0_HPUE_CA(b,s)      b##_DELTA_TC0_HPUE_CA_##s
#define LTE_DELTA_TC0_HPUE_CA(b,s)           LTE_Band_DELTA_TC0_HPUE_CA(b,s)

#define LTE_Band_DELTA_TC1_HPUE_CA(b,s)      b##_DELTA_TC1_HPUE_CA_##s
#define LTE_DELTA_TC1_HPUE_CA(b,s)           LTE_Band_DELTA_TC1_HPUE_CA(b,s)

#define LTE_Band_DELTA_TIB_HPUE_CA(b,s)      b##_DELTA_TIB_HPUE_CA_##s
#define LTE_DELTA_TIB_HPUE_CA(b,s)           LTE_Band_DELTA_TIB(b,s)

#define LTE_Band_RES_HNDLR_HPUE_CA(b,s)      b##_RES_HNDLR_HPUE_CA_##s
#define LTE_RES_HNDLR_HPUE_CA(b,s)           LTE_Band_RES_HNDLR_HPUE_CA(b,s)

#define LTE_BAND_PC2_TPOS(b,s)          HPUE_##b##_PC2_TPOS_##s
#define LTE_HPUE_PC2_TPOS(b,s)          LTE_BAND_PC2_TPOS(b,s)

#define LTE_BAND_PC3_TPOS(b,s)          HPUE_##b##_PC3_TPOS_##s
#define LTE_HPUE_PC3_TPOS(b,s)          LTE_BAND_PC3_TPOS(b,s)

#define LTE_RF_MPR_ADJUST_HPUE_CA(b,s)                                                          \
{ b,  LTE_MPR_QPSK0_HPUE_CA(b,s),  LTE_MPR_QPSK1_HPUE_CA(b,s),  LTE_MPR_16QAM0_HPUE_CA(b,s),    \
      LTE_MPR_16QAM1_HPUE_CA(b,s), LTE_MPR_16QAM2_HPUE_CA(b,s),                                 \
      LTE_MPR_64QAM0_HPUE_CA(b,s), LTE_MPR_64QAM1_HPUE_CA(b,s),                                 \
      LTE_DELTA_TC0_HPUE_CA(b,s),  LTE_DELTA_TC1_HPUE_CA(b,s),  LTE_DELTA_TIB_HPUE_CA(b,s),     \
      LTE_RES_HNDLR_HPUE_CA(b,s)                                                                \
}

/*******************************************************************************
 * Typedef
 ******************************************************************************/

/*******************************************************************************
 * Constant
 ******************************************************************************/
#define LTE_CCA_SPBF_NS_DEFAULT                             0
#define LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT                0
#define LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT                0
#define LTE_CCA_SPBF_APT_DEFAULT                            0
#define LTE_CCA_SPBF_ET_DEFAULT                             0
#define LTE_CCA_SPBF_DPD_DEFAULT                            0

#define LTE_BandNone_CCA_SPBF_NO_0_NS                                    LTE_CCA_SPBF_NS_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_0_NS_PCC_RB_THRE                        LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_0_NS_SCC_RB_THRE                        LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_0_NS_SPBF_APT                           LTE_CCA_SPBF_APT_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_0_NS_SPBF_ET                            LTE_CCA_SPBF_ET_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_0_NS_SPBF_DPD                           LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_BandNone_CCA_SPBF_NO_1_NS                                    LTE_CCA_SPBF_NS_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_1_NS_PCC_RB_THRE                        LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_1_NS_SCC_RB_THRE                        LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_1_NS_SPBF_APT                           LTE_CCA_SPBF_APT_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_1_NS_SPBF_ET                            LTE_CCA_SPBF_ET_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_1_NS_SPBF_DPD                           LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_BandNone_CCA_SPBF_NO_2_NS                                    LTE_CCA_SPBF_NS_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_2_NS_PCC_RB_THRE                        LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_2_NS_SCC_RB_THRE                        LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_2_NS_SPBF_APT                           LTE_CCA_SPBF_APT_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_2_NS_SPBF_ET                            LTE_CCA_SPBF_ET_DEFAULT
#define LTE_BandNone_CCA_SPBF_NO_2_NS_SPBF_DPD                           LTE_CCA_SPBF_DPD_DEFAULT
                 
#define LTE_Band1_CCA_SPBF_NO_0_NS                                       1
#define LTE_Band1_CCA_SPBF_NO_0_NS_PCC_RB_THRE                           3
#define LTE_Band1_CCA_SPBF_NO_0_NS_SCC_RB_THRE                           8
#define LTE_Band1_CCA_SPBF_NO_0_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band1_CCA_SPBF_NO_0_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band1_CCA_SPBF_NO_0_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band1_CCA_SPBF_NO_1_NS                                       2
#define LTE_Band1_CCA_SPBF_NO_1_NS_PCC_RB_THRE                           3
#define LTE_Band1_CCA_SPBF_NO_1_NS_SCC_RB_THRE                           3
#define LTE_Band1_CCA_SPBF_NO_1_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band1_CCA_SPBF_NO_1_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band1_CCA_SPBF_NO_1_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band1_CCA_SPBF_NO_2_NS                                       3
#define LTE_Band1_CCA_SPBF_NO_2_NS_PCC_RB_THRE                           3
#define LTE_Band1_CCA_SPBF_NO_2_NS_SCC_RB_THRE                           3
#define LTE_Band1_CCA_SPBF_NO_2_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band1_CCA_SPBF_NO_2_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band1_CCA_SPBF_NO_2_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                    
#define LTE_Band2_CCA_SPBF_NO_0_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_0_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_0_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_0_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_0_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_0_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band2_CCA_SPBF_NO_1_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_1_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_1_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_1_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_1_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_1_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band2_CCA_SPBF_NO_2_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_2_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_2_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_2_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_2_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band2_CCA_SPBF_NO_2_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                    
#define LTE_Band3_CCA_SPBF_NO_0_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_0_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_0_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_0_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_0_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_0_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band3_CCA_SPBF_NO_1_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_1_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_1_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_1_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_1_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_1_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band3_CCA_SPBF_NO_2_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_2_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_2_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_2_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_2_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band3_CCA_SPBF_NO_2_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band4_CCA_SPBF_NO_0_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_0_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_0_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_0_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_0_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_0_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band4_CCA_SPBF_NO_1_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_1_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_1_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_1_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_1_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_1_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band4_CCA_SPBF_NO_2_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_2_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_2_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_2_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_2_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band4_CCA_SPBF_NO_2_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band5_CCA_SPBF_NO_0_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_0_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_0_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_0_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_0_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_0_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band5_CCA_SPBF_NO_1_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_1_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_1_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_1_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_1_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_1_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band5_CCA_SPBF_NO_2_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_2_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_2_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_2_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_2_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band5_CCA_SPBF_NO_2_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band6_CCA_SPBF_NO_0_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_0_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_0_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_0_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_0_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_0_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band6_CCA_SPBF_NO_1_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_1_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_1_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_1_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_1_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_1_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band6_CCA_SPBF_NO_2_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_2_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_2_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_2_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_2_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band6_CCA_SPBF_NO_2_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band7_CCA_SPBF_NO_0_NS                                       6
#define LTE_Band7_CCA_SPBF_NO_0_NS_PCC_RB_THRE                           30
#define LTE_Band7_CCA_SPBF_NO_0_NS_SCC_RB_THRE                           0
#define LTE_Band7_CCA_SPBF_NO_0_NS_SPBF_APT                              192
#define LTE_Band7_CCA_SPBF_NO_0_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band7_CCA_SPBF_NO_0_NS_SPBF_DPD                              192
                                                                     
#define LTE_Band7_CCA_SPBF_NO_1_NS                                       31
#define LTE_Band7_CCA_SPBF_NO_1_NS_PCC_RB_THRE                           2
#define LTE_Band7_CCA_SPBF_NO_1_NS_SCC_RB_THRE                           0
#define LTE_Band7_CCA_SPBF_NO_1_NS_SPBF_APT                              192
#define LTE_Band7_CCA_SPBF_NO_1_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band7_CCA_SPBF_NO_1_NS_SPBF_DPD                              192
                                                                     
#define LTE_Band7_CCA_SPBF_NO_2_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band7_CCA_SPBF_NO_2_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band7_CCA_SPBF_NO_2_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band7_CCA_SPBF_NO_2_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band7_CCA_SPBF_NO_2_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band7_CCA_SPBF_NO_2_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band8_CCA_SPBF_NO_0_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_0_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_0_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_0_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_0_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_0_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band8_CCA_SPBF_NO_1_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_1_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_1_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_1_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_1_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_1_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band8_CCA_SPBF_NO_2_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_2_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_2_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_2_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_2_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band8_CCA_SPBF_NO_2_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band9_CCA_SPBF_NO_0_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_0_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_0_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_0_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_0_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_0_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band9_CCA_SPBF_NO_1_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_1_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_1_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_1_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_1_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_1_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band9_CCA_SPBF_NO_2_NS                                       LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_2_NS_PCC_RB_THRE                           LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_2_NS_SCC_RB_THRE                           LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_2_NS_SPBF_APT                              LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_2_NS_SPBF_ET                               LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band9_CCA_SPBF_NO_2_NS_SPBF_DPD                              LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band10_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band10_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band10_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band10_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band11_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band11_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band11_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band11_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band12_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band12_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band12_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band12_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band13_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band13_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band13_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band13_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band14_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band14_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band14_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band14_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band17_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band17_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band17_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band17_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band18_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band18_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band18_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band18_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band19_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band19_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band19_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band19_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                    
#define LTE_Band20_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                                                                     
#define LTE_Band20_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band20_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band20_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band21_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band21_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band21_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band21_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band22_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band22_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band22_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band22_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band23_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band23_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band23_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band23_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band24_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band24_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band24_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band24_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band25_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band25_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band25_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band25_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band26_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band26_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band26_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band26_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band27_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band27_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band27_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band27_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band28_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band28_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band28_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band28_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band29_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band29_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band29_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band29_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band30_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band30_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band30_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band30_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band32_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band32_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band32_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band32_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band33_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band33_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band33_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band33_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band34_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band34_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band34_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band34_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band35_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band35_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band35_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band35_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band36_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band36_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band36_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band36_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band37_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band37_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band37_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band37_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band38_CCA_SPBF_NO_0_NS                                      5
#define LTE_Band38_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          40
#define LTE_Band38_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          0
#define LTE_Band38_CCA_SPBF_NO_0_NS_SPBF_APT                             384
#define LTE_Band38_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band38_CCA_SPBF_NO_0_NS_SPBF_DPD                             320

#define LTE_Band38_CCA_SPBF_NO_1_NS                                      31
#define LTE_Band38_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          1
#define LTE_Band38_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          0
#define LTE_Band38_CCA_SPBF_NO_1_NS_SPBF_APT                             256
#define LTE_Band38_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band38_CCA_SPBF_NO_1_NS_SPBF_DPD                             256

#define LTE_Band38_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band38_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band38_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band38_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band38_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band38_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band39_CCA_SPBF_NO_0_NS                                      7
#define LTE_Band39_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          10
#define LTE_Band39_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          15
#define LTE_Band39_CCA_SPBF_NO_0_NS_SPBF_APT                             384
#define LTE_Band39_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band39_CCA_SPBF_NO_0_NS_SPBF_DPD                             384

#define LTE_Band39_CCA_SPBF_NO_1_NS                                      31
#define LTE_Band39_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          1
#define LTE_Band39_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          0
#define LTE_Band39_CCA_SPBF_NO_1_NS_SPBF_APT                             256
#define LTE_Band39_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band39_CCA_SPBF_NO_1_NS_SPBF_DPD                             256

#define LTE_Band39_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band39_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band39_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band39_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band39_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band39_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band40_CCA_SPBF_NO_0_NS                                      31
#define LTE_Band40_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          1
#define LTE_Band40_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          0
#define LTE_Band40_CCA_SPBF_NO_0_NS_SPBF_APT                             384
#define LTE_Band40_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band40_CCA_SPBF_NO_0_NS_SPBF_DPD                             384

#define LTE_Band40_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band40_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band40_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band40_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band40_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band40_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band40_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band40_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band40_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band40_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band40_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band40_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band41_CCA_SPBF_NO_0_NS                                      4
#define LTE_Band41_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          20
#define LTE_Band41_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          30
#define LTE_Band41_CCA_SPBF_NO_0_NS_SPBF_APT                             192
#define LTE_Band41_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band41_CCA_SPBF_NO_0_NS_SPBF_DPD                             192

#define LTE_Band41_CCA_SPBF_NO_1_NS                                      31
#define LTE_Band41_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          1
#define LTE_Band41_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          0
#define LTE_Band41_CCA_SPBF_NO_1_NS_SPBF_APT                             384
#define LTE_Band41_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band41_CCA_SPBF_NO_1_NS_SPBF_DPD                             0

#define LTE_Band41_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band41_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band41_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band41_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band41_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band41_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band42_CCA_SPBF_NO_0_NS                                      31
#define LTE_Band42_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          2
#define LTE_Band42_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          2
#define LTE_Band42_CCA_SPBF_NO_0_NS_SPBF_APT                             192
#define LTE_Band42_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band42_CCA_SPBF_NO_0_NS_SPBF_DPD                             192

#define LTE_Band42_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band42_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band42_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band42_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band42_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band42_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band42_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band42_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band42_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band42_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band42_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band42_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band43_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band43_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band43_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band43_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band44_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band44_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band44_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band44_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band66_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band66_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band66_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band66_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band71_CCA_SPBF_NO_0_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_0_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_0_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_0_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_0_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_0_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band71_CCA_SPBF_NO_1_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_1_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_1_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_1_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_1_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_1_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT

#define LTE_Band71_CCA_SPBF_NO_2_NS                                      LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_2_NS_PCC_RB_THRE                          LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_2_NS_SCC_RB_THRE                          LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_2_NS_SPBF_APT                             LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_2_NS_SPBF_ET                              LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band71_CCA_SPBF_NO_2_NS_SPBF_DPD                             LTE_CCA_SPBF_DPD_DEFAULT
                   
#define LTE_Band252_CCA_SPBF_NO_0_NS                                     LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_0_NS_PCC_RB_THRE                         LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_0_NS_SCC_RB_THRE                         LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_0_NS_SPBF_APT                            LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_0_NS_SPBF_ET                             LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_0_NS_SPBF_DPD                            LTE_CCA_SPBF_DPD_DEFAULT
                                                             
#define LTE_Band252_CCA_SPBF_NO_1_NS                                     LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_1_NS_PCC_RB_THRE                         LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_1_NS_SCC_RB_THRE                         LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_1_NS_SPBF_APT                            LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_1_NS_SPBF_ET                             LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_1_NS_SPBF_DPD                            LTE_CCA_SPBF_DPD_DEFAULT
                                                             
#define LTE_Band252_CCA_SPBF_NO_2_NS                                     LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_2_NS_PCC_RB_THRE                         LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_2_NS_SCC_RB_THRE                         LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_2_NS_SPBF_APT                            LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_2_NS_SPBF_ET                             LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band252_CCA_SPBF_NO_2_NS_SPBF_DPD                            LTE_CCA_SPBF_DPD_DEFAULT
                                                             
#define LTE_Band255_CCA_SPBF_NO_0_NS                                     LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_0_NS_PCC_RB_THRE                         LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_0_NS_SCC_RB_THRE                         LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_0_NS_SPBF_APT                            LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_0_NS_SPBF_ET                             LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_0_NS_SPBF_DPD                            LTE_CCA_SPBF_DPD_DEFAULT
                                                             
#define LTE_Band255_CCA_SPBF_NO_1_NS                                     LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_1_NS_PCC_RB_THRE                         LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_1_NS_SCC_RB_THRE                         LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_1_NS_SPBF_APT                            LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_1_NS_SPBF_ET                             LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_1_NS_SPBF_DPD                            LTE_CCA_SPBF_DPD_DEFAULT
                                                             
#define LTE_Band255_CCA_SPBF_NO_2_NS                                     LTE_CCA_SPBF_NS_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_2_NS_PCC_RB_THRE                         LTE_CCA_SPBF_NS_PCC_RB_THRES_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_2_NS_SCC_RB_THRE                         LTE_CCA_SPBF_NS_SCC_RB_THRES_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_2_NS_SPBF_APT                            LTE_CCA_SPBF_APT_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_2_NS_SPBF_ET                             LTE_CCA_SPBF_ET_DEFAULT
#define LTE_Band255_CCA_SPBF_NO_2_NS_SPBF_DPD                            LTE_CCA_SPBF_DPD_DEFAULT

/** Additional TX Power Backoff Parameters for B38 5MHz **/
#define LTE_Band38_SPBF_POWER_BACKOFF_ENABLE                0
#define LTE_Band38_SPBF_RB_LEN_SPECIAL_HANDLE               1
#define LTE_Band38_SPBF_RB_THRES_SPECIAL_HANDLE             608   //19dBm, (unit:1/32 db)
#define LTE_Band38_SPBF_POWER_SPECIAL_HANDLE                32    //-1dBm, (unit:-1/32 db)

#define LTE_RAMP_DEFAULT_VALUE_TBL_SIZE       65
#define LTE_PAOCTLVL_DEFAULT_VALUE_TBL_SIZE   65
#define LTE_RSSITYPE1_DEFAULT_VALUE_TBL_SIZE  65
#define LTE_RSSITYPE2_DEFAULT_VALUE_TBL_SIZE   1
#define LTE_FILTER_DEFAULT_TBL_SIZE            8

#define LTE_RouteDefault                      0xFFFF

#define LTE_EXTEND_NT_POWER_BACKOFF_ENABLE     0

#if defined(__VPA_FEATURE_ENABLE__)
/**VPA threshold feature for AudioNoise**/
#define LTE_TDD_VPA_THRESHOLD                 22
#endif

/*******************************************************************************
 * Structure
 ******************************************************************************/
typedef struct
{
   LTE_Band band;
   kal_uint16 subband_freq[CAL_EARFCN_SECTION_LTE];
} LTE_CAL_SUBBAND_INFO_T;

typedef struct
{
   kal_uint32 band;
   LTE_sRAMP_DEFAULT ramp_tbl;
}LTE_sRAMP_DEFAULT_TBL_T;

typedef struct
{
   kal_uint32 band;
   LTE_sPAOCTLVL_DEFAULT pacotlvl_tbl;
}LTE_sPAOCTLVL_DEFAULT_TBL_T;

typedef struct
{
   kal_uint32 band;
   const LTE_RX_PL_ROUTE_TYPE1_T* rssi_type1_tbl;
}LTE_RX_PL_ROUTE_TYPE1_DEFAULT_TBL_T;

typedef struct
{
   kal_uint32 band;
   const LTE_RX_PL_ROUTE_TYPE2_T* rssi_type2_tbl;
}LTE_RX_PL_ROUTE_TYPE2_DEFAULT_TBL_T;

/*******************************************************************************
 * Global variables (Extern)
 ******************************************************************************/

/** RF custom data (raw data from .h) */

extern const     ERF_RX_PDATABASE_T        ERF_RX_PDATABASE_BandNone;
extern const     ERF_TX_PDATABASE_T        ERF_TX_PDATABASE_BandNone;
extern const     ERF_RXIOBASE_T            ERF_RF_RXIOBASE_BandNone;
extern const     ERF_TXIOBASE_T            ERF_RF_TXIOBASE_BandNone;

extern /*const*/ LTE_EVT_TIME_OFST_TABLE_T ERF_EVT_TIME_OFST_TABLE;

extern /*const*/ LTE_ANT_ROUTE_DATABASE_T  LTE_ANT_ROUTE_DATABASE_SetDefault;

extern           LTE_VPA_SOURCE_DATABASE_T   LTE_VPA_SOURCE_CONFIG_DATABASE;
#if IS_LTE_RF_DL_CA_SUPPORT || IS_LTE_RF_UL_CA_SUPPORT
extern const     LTE_CA_CFG_E              LTE_CA_CFG_IND_RELEASE[LTE_TARGET_MAX_SUPPORT_CA_BAND_NUM];
#endif
extern           ERF_PARTIAL_BAND_IND_T    ERF_RF_PARTIAL_BAND_IND[LTE_PARTIAL_BAND_SUPPORT_NUM];

//Transmint Antenna Selection Feature
extern /*const*/ LTE_RF_TAS_FORCE_PARAMETER_T      ERF_TAS_FORCE_PARAMETER;

#if IS_4G_HPUE_FEATURE_SUPPORT
extern /*const*/ LTE_RF_HPUE_PARAMETER_T     ERF_HPUE_PARAMETER;
   #if IS_4G_HPUE_FEATURE_CA_SUPPORT
extern /*const*/ LTE_RF_HPUE_CA_CAPABILITY_T ERF_HPUE_CA_CAPABILITY;
   #endif
#endif

#if defined (__LTE_INTERFERENCE_CHECK_SUPPORT__)
extern LTE_RF_INTERFERENCE_FREQUENCY_T LTE_RF_INTERFERENCE_FREQUENCY_A;
extern LTE_RF_INTERFERENCE_FREQUENCY_T LTE_RF_INTERFERENCE_FREQUENCY_B;
#endif

//cal default value
extern const LTE_sRAMP_DEFAULT_TBL_T              LTE_RampData_Pool[LTE_RAMP_DEFAULT_VALUE_TBL_SIZE];
extern const LTE_sPAOCTLVL_DEFAULT_TBL_T          LTE_PaOctLvl_Pool[LTE_PAOCTLVL_DEFAULT_VALUE_TBL_SIZE];
extern const LTE_RX_PL_ROUTE_TYPE1_DEFAULT_TBL_T  LTE_RSSIGainTblType1_Pool[LTE_RSSITYPE1_DEFAULT_VALUE_TBL_SIZE];
extern const LTE_RX_PL_ROUTE_TYPE2_DEFAULT_TBL_T  LTE_RSSIGainTblType2_Pool[LTE_RSSITYPE2_DEFAULT_VALUE_TBL_SIZE];
extern const LTE_sRAMP_DEFAULT_TBL_T              LTE_FILTER_RampData_Pool[LTE_FILTER_DEFAULT_TBL_SIZE];
extern const LTE_sPAOCTLVL_DEFAULT_TBL_T          LTE_FILTER_PaOctLevTable_Pool[LTE_FILTER_DEFAULT_TBL_SIZE];
extern LTE_TemperatureDac_T                 TempDacTable;

/******************************************************************************
 * Dynamic Radio-setting Dedicated Image
 *
 * Description: extern global variables for EPHY calculation
 ******************************************************************************/
extern LTE_DRDI_DEBUG_INFO_T LTE_DRDI_DEBUG_INFO;
extern kal_bool              el1_custom_dynamic_init_enable;
extern kal_bool              el1_custom_dynamic_cal_init_enable;
extern kal_uint16            el1_custom_total_set_nums;
extern kal_uint16            el1_custom_total_real_set_nums;
/*------------- Dynamic Radio-setting Dedicated Image -------------*/



/*******************************************************************************
 * Global Functions Prototype (Interface)
 ******************************************************************************/
void EL1D_RF_Update_Default_UL_Subband_Info(LTE_Band band, LTE_sRAMPDATA* p_ramp_data);
void EL1D_RF_Update_Default_DL_Subband_Info(LTE_Band band, kal_uint16* p_subband_freq);


#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#endif //__LRFCUSTOMDATA_H__

/* Doxygen Group End ***************************************************//**@}*/
