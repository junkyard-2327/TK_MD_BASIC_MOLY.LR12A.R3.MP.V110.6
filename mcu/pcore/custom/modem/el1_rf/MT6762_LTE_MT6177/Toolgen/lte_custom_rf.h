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
 *   lte_custom_rf.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177L LTE FDD/TDD RF
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_171208
 *   Excel Version : Gen93_6177L_1748_v1.0
 *
 *******************************************************************************/


#ifndef  _LTE_CUSTOM_RF_SetDefault_H_
#define  _LTE_CUSTOM_RF_SetDefault_H_
/* ------------------------------------------------------------------------- */


#include "el1d_rf_custom_data.h"
#include "../lte_custom_rf_fe.h"


/*------------------------------------------------------------*/
/*  Single band indiacator definition                         */
/*  BAND_INDICATOR0 ~ BAND_INDICATOR25                        */
/*------------------------------------------------------------*/
#define  BAND_INDICATOR0_SetDefault              LTE_Band1
#define  BAND_INDICATOR1_SetDefault              LTE_Band2
#define  BAND_INDICATOR2_SetDefault              LTE_Band3
#define  BAND_INDICATOR3_SetDefault              LTE_Band4
#define  BAND_INDICATOR4_SetDefault              LTE_Band5
#define  BAND_INDICATOR5_SetDefault              LTE_Band7
#define  BAND_INDICATOR6_SetDefault              LTE_Band8
#define  BAND_INDICATOR7_SetDefault              LTE_Band12
#define  BAND_INDICATOR8_SetDefault              LTE_Band17
#define  BAND_INDICATOR9_SetDefault              LTE_Band20
#define  BAND_INDICATOR10_SetDefault             LTE_Band26
#define  BAND_INDICATOR11_SetDefault             LTE_Band27
#define  BAND_INDICATOR12_SetDefault             LTE_Band28
#define  BAND_INDICATOR13_SetDefault             LTE_Band32
#define  BAND_INDICATOR14_SetDefault             LTE_Band38
#define  BAND_INDICATOR15_SetDefault             LTE_Band39
#define  BAND_INDICATOR16_SetDefault             LTE_Band40
#define  BAND_INDICATOR17_SetDefault             LTE_Band41
#define  BAND_INDICATOR18_SetDefault             LTE_Band34
#define  BAND_INDICATOR19_SetDefault             LTE_BandNone
#define  BAND_INDICATOR20_SetDefault             LTE_BandNone
#define  BAND_INDICATOR21_SetDefault             LTE_BandNone
#define  BAND_INDICATOR22_SetDefault             LTE_BandNone
#define  BAND_INDICATOR23_SetDefault             LTE_BandNone
#define  BAND_INDICATOR24_SetDefault             LTE_BandNone

/*------------------------------------------------------*/
/*  SUPPORT Definition                               */
/*------------------------------------------------------*/
#define  BAND_INDICATOR0_SUPPORT_SetDefault                SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR1_SUPPORT_SetDefault                SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR2_SUPPORT_SetDefault                SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR3_SUPPORT_SetDefault                SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR4_SUPPORT_SetDefault                SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR5_SUPPORT_SetDefault                SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR6_SUPPORT_SetDefault                SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR7_SUPPORT_SetDefault                SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR8_SUPPORT_SetDefault                SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR9_SUPPORT_SetDefault                SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR10_SUPPORT_SetDefault               SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR11_SUPPORT_SetDefault               SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR12_SUPPORT_SetDefault               SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR13_SUPPORT_SetDefault               SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR14_SUPPORT_SetDefault               SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR15_SUPPORT_SetDefault               SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR16_SUPPORT_SetDefault               SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR17_SUPPORT_SetDefault               SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR18_SUPPORT_SetDefault               SW_CAPABILITY_SUPPORT
#define  BAND_INDICATOR19_SUPPORT_SetDefault               SW_CAPABILITY_NOT_SUPPORT
#define  BAND_INDICATOR20_SUPPORT_SetDefault               SW_CAPABILITY_NOT_SUPPORT
#define  BAND_INDICATOR21_SUPPORT_SetDefault               SW_CAPABILITY_NOT_SUPPORT
#define  BAND_INDICATOR22_SUPPORT_SetDefault               SW_CAPABILITY_NOT_SUPPORT
#define  BAND_INDICATOR23_SUPPORT_SetDefault               SW_CAPABILITY_NOT_SUPPORT
#define  BAND_INDICATOR24_SUPPORT_SetDefault               SW_CAPABILITY_NOT_SUPPORT
/*------------------------------------------------------*/
/*  RX_IO_SEL Definition                               */
/*------------------------------------------------------*/
#define  LTE_Band1_RX_IO_SEL_SetDefault                    RX_IO_PRX10
#define  LTE_Band2_RX_IO_SEL_SetDefault                    RX_IO_PRX8
#define  LTE_Band3_RX_IO_SEL_SetDefault                    RX_IO_PRX7
#define  LTE_Band4_RX_IO_SEL_SetDefault                    RX_IO_PRX10
#define  LTE_Band5_RX_IO_SEL_SetDefault                    RX_IO_PRX4
#define  LTE_Band7_RX_IO_SEL_SetDefault                    RX_IO_PRX13
#define  LTE_Band8_RX_IO_SEL_SetDefault                    RX_IO_PRX2
#define  LTE_Band12_RX_IO_SEL_SetDefault                   RX_IO_PRX1
#define  LTE_Band17_RX_IO_SEL_SetDefault                   RX_IO_PRX1
#define  LTE_Band20_RX_IO_SEL_SetDefault                   RX_IO_PRX3
#define  LTE_Band26_RX_IO_SEL_SetDefault                   RX_IO_PRX4
#define  LTE_Band27_RX_IO_SEL_SetDefault                   RX_IO_PRX4
#define  LTE_Band28_RX_IO_SEL_SetDefault                   RX_IO_PRX5
#define  LTE_Band32_RX_IO_SEL_SetDefault                   RX_IO_PRX9
#define  LTE_Band38_RX_IO_SEL_SetDefault                   RX_IO_PRX12
#define  LTE_Band39_RX_IO_SEL_SetDefault                   RX_IO_PRX6
#define  LTE_Band40_RX_IO_SEL_SetDefault                   RX_IO_PRX11
#define  LTE_Band41_RX_IO_SEL_SetDefault                   RX_IO_PRX12
#define  LTE_Band34_RX_IO_SEL_SetDefault                   RX_IO_PRX6

/*------------------------------------------------------*/
/*  RXD_IO_SEL Definition                               */
/*------------------------------------------------------*/
#define  LTE_Band1_RXD_IO_SEL_SetDefault                   RX_IO_DRX10
#define  LTE_Band2_RXD_IO_SEL_SetDefault                   RX_IO_DRX8
#define  LTE_Band3_RXD_IO_SEL_SetDefault                   RX_IO_DRX7
#define  LTE_Band4_RXD_IO_SEL_SetDefault                   RX_IO_DRX10
#define  LTE_Band5_RXD_IO_SEL_SetDefault                   RX_IO_DRX4
#define  LTE_Band7_RXD_IO_SEL_SetDefault                   RX_IO_DRX13
#define  LTE_Band8_RXD_IO_SEL_SetDefault                   RX_IO_DRX2
#define  LTE_Band12_RXD_IO_SEL_SetDefault                  RX_IO_DRX1
#define  LTE_Band17_RXD_IO_SEL_SetDefault                  RX_IO_DRX1
#define  LTE_Band20_RXD_IO_SEL_SetDefault                  RX_IO_DRX3
#define  LTE_Band26_RXD_IO_SEL_SetDefault                  RX_IO_DRX4
#define  LTE_Band27_RXD_IO_SEL_SetDefault                  RX_IO_DRX4
#define  LTE_Band28_RXD_IO_SEL_SetDefault                  RX_IO_DRX5
#define  LTE_Band32_RXD_IO_SEL_SetDefault                  RX_IO_DRX9
#define  LTE_Band38_RXD_IO_SEL_SetDefault                  RX_IO_DRX12
#define  LTE_Band39_RXD_IO_SEL_SetDefault                  RX_IO_DRX6
#define  LTE_Band40_RXD_IO_SEL_SetDefault                  RX_IO_DRX11
#define  LTE_Band41_RXD_IO_SEL_SetDefault                  RX_IO_DRX12
#define  LTE_Band34_RXD_IO_SEL_SetDefault                  RX_IO_DRX6

/*------------------------------------------------------*/
/*  LTE PDATA PR1 Setting                               */
/*------------------------------------------------------*/
#define  PDATA_LTE_Band1_PR1_SetDefault                    0x00000000
#define  PDATA_LTE_Band2_PR1_SetDefault                    0x00000000
#define  PDATA_LTE_Band3_PR1_SetDefault                    0x00000000
#define  PDATA_LTE_Band4_PR1_SetDefault                    0x00000000
#define  PDATA_LTE_Band5_PR1_SetDefault                    0x00000004
#define  PDATA_LTE_Band7_PR1_SetDefault                    0x00000000
#define  PDATA_LTE_Band8_PR1_SetDefault                    0x00000000
#define  PDATA_LTE_Band12_PR1_SetDefault                   0x00000000
#define  PDATA_LTE_Band17_PR1_SetDefault                   0x00000000
#define  PDATA_LTE_Band20_PR1_SetDefault                   0x00000000
#define  PDATA_LTE_Band26_PR1_SetDefault                   0x00000004
#define  PDATA_LTE_Band27_PR1_SetDefault                   0x00000000
#define  PDATA_LTE_Band28_PR1_SetDefault                   0x00000000
#define  PDATA_LTE_Band32_PR1_SetDefault                   0x00000008
#define  PDATA_LTE_Band38_PR1_SetDefault                   0x00000000
#define  PDATA_LTE_Band39_PR1_SetDefault                   0x00000000
#define  PDATA_LTE_Band40_PR1_SetDefault                   0x00000000
#define  PDATA_LTE_Band41_PR1_SetDefault                   0x00000000
#define  PDATA_LTE_Band34_PR1_SetDefault                   0x00000000

/*------------------------------------------------------*/
/*  LTE PDATA PR2 Setting                               */
/*------------------------------------------------------*/
#define  PDATA_LTE_Band1_PR2_SetDefault                    0x00000000
#define  PDATA_LTE_Band2_PR2_SetDefault                    0x00000000
#define  PDATA_LTE_Band3_PR2_SetDefault                    0x00000000
#define  PDATA_LTE_Band4_PR2_SetDefault                    0x00000000
#define  PDATA_LTE_Band5_PR2_SetDefault                    0x00000004
#define  PDATA_LTE_Band7_PR2_SetDefault                    0x00000000
#define  PDATA_LTE_Band8_PR2_SetDefault                    0x00000000
#define  PDATA_LTE_Band12_PR2_SetDefault                   0x00000000
#define  PDATA_LTE_Band17_PR2_SetDefault                   0x00000000
#define  PDATA_LTE_Band20_PR2_SetDefault                   0x00000000
#define  PDATA_LTE_Band26_PR2_SetDefault                   0x00000004
#define  PDATA_LTE_Band27_PR2_SetDefault                   0x00000000
#define  PDATA_LTE_Band28_PR2_SetDefault                   0x00000000
#define  PDATA_LTE_Band32_PR2_SetDefault                   0x00000008
#define  PDATA_LTE_Band38_PR2_SetDefault                   0x00000000
#define  PDATA_LTE_Band39_PR2_SetDefault                   0x00000000
#define  PDATA_LTE_Band40_PR2_SetDefault                   0x00000000
#define  PDATA_LTE_Band41_PR2_SetDefault                   0x00000000
#define  PDATA_LTE_Band34_PR2_SetDefault                   0x00000000

/*------------------------------------------------------*/
/*  LTE PDATA PR3 Setting                               */
/*------------------------------------------------------*/
#define  PDATA_LTE_Band1_PR3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band2_PR3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band3_PR3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band4_PR3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band5_PR3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band7_PR3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band8_PR3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band12_PR3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band17_PR3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band20_PR3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band26_PR3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band27_PR3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band28_PR3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band32_PR3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band38_PR3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band39_PR3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band40_PR3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band41_PR3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band34_PR3_SetDefault                   LTE_PDATA_OFF

/*------------------------------------------------------*/
/*  RX_eLNAIDX Definition                               */
/*------------------------------------------------------*/
#define  LTE_Band1_RX_eLNAIDX_SetDefault                   MML1_FE_ELNA_NONE
#define  LTE_Band2_RX_eLNAIDX_SetDefault                   MML1_FE_ELNA_NONE
#define  LTE_Band3_RX_eLNAIDX_SetDefault                   MML1_FE_ELNA_NONE
#define  LTE_Band4_RX_eLNAIDX_SetDefault                   MML1_FE_ELNA_NONE
#define  LTE_Band5_RX_eLNAIDX_SetDefault                   MML1_FE_ELNA_NONE
#define  LTE_Band7_RX_eLNAIDX_SetDefault                   MML1_FE_ELNA_NONE
#define  LTE_Band8_RX_eLNAIDX_SetDefault                   MML1_FE_ELNA_NONE
#define  LTE_Band12_RX_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band17_RX_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band20_RX_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band26_RX_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band27_RX_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band28_RX_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band32_RX_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band38_RX_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band39_RX_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band40_RX_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band41_RX_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band34_RX_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE

/*------------------------------------------------------*/
/*  RXD_eLNAIDX Definition                               */
/*------------------------------------------------------*/
#define  LTE_Band1_RXD_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band2_RXD_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band3_RXD_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band4_RXD_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band5_RXD_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band7_RXD_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band8_RXD_eLNAIDX_SetDefault                  MML1_FE_ELNA_NONE
#define  LTE_Band12_RXD_eLNAIDX_SetDefault                 MML1_FE_ELNA_NONE
#define  LTE_Band17_RXD_eLNAIDX_SetDefault                 MML1_FE_ELNA_NONE
#define  LTE_Band20_RXD_eLNAIDX_SetDefault                 MML1_FE_ELNA_NONE
#define  LTE_Band26_RXD_eLNAIDX_SetDefault                 MML1_FE_ELNA_NONE
#define  LTE_Band27_RXD_eLNAIDX_SetDefault                 MML1_FE_ELNA_NONE
#define  LTE_Band28_RXD_eLNAIDX_SetDefault                 MML1_FE_ELNA_NONE
#define  LTE_Band32_RXD_eLNAIDX_SetDefault                 MML1_FE_ELNA_NONE
#define  LTE_Band38_RXD_eLNAIDX_SetDefault                 MML1_FE_ELNA_NONE
#define  LTE_Band39_RXD_eLNAIDX_SetDefault                 MML1_FE_ELNA_NONE
#define  LTE_Band40_RXD_eLNAIDX_SetDefault                 MML1_FE_ELNA_NONE
#define  LTE_Band41_RXD_eLNAIDX_SetDefault                 MML1_FE_ELNA_NONE
#define  LTE_Band34_RXD_eLNAIDX_SetDefault                 MML1_FE_ELNA_NONE

/*------------------------------------------------------*/
/*  CCA_Support Definition                               */
/*------------------------------------------------------*/
#define  BAND_INDICATOR0_CCA_Support_SetDefault            NO_CCA_SUPPORT
#define  BAND_INDICATOR1_CCA_Support_SetDefault            NO_CCA_SUPPORT
#define  BAND_INDICATOR2_CCA_Support_SetDefault            CLASS_C_CCA_SUPPORT
#define  BAND_INDICATOR3_CCA_Support_SetDefault            NO_CCA_SUPPORT
#define  BAND_INDICATOR4_CCA_Support_SetDefault            NO_CCA_SUPPORT
#define  BAND_INDICATOR5_CCA_Support_SetDefault            CLASS_C_CCA_SUPPORT
#define  BAND_INDICATOR6_CCA_Support_SetDefault            NO_CCA_SUPPORT
#define  BAND_INDICATOR7_CCA_Support_SetDefault            NO_CCA_SUPPORT
#define  BAND_INDICATOR8_CCA_Support_SetDefault            NO_CCA_SUPPORT
#define  BAND_INDICATOR9_CCA_Support_SetDefault            NO_CCA_SUPPORT
#define  BAND_INDICATOR10_CCA_Support_SetDefault           NO_CCA_SUPPORT
#define  BAND_INDICATOR11_CCA_Support_SetDefault           NO_CCA_SUPPORT
#define  BAND_INDICATOR12_CCA_Support_SetDefault           NO_CCA_SUPPORT
#define  BAND_INDICATOR13_CCA_Support_SetDefault           NO_CCA_SUPPORT
#define  BAND_INDICATOR14_CCA_Support_SetDefault           CLASS_C_CCA_SUPPORT
#define  BAND_INDICATOR15_CCA_Support_SetDefault           CLASS_C_CCA_SUPPORT
#define  BAND_INDICATOR16_CCA_Support_SetDefault           CLASS_C_CCA_SUPPORT
#define  BAND_INDICATOR17_CCA_Support_SetDefault           CLASS_C_CCA_SUPPORT
#define  BAND_INDICATOR18_CCA_Support_SetDefault           NO_CCA_SUPPORT
#define  BAND_INDICATOR19_CCA_Support_SetDefault           NO_CCA_SUPPORT
#define  BAND_INDICATOR20_CCA_Support_SetDefault           NO_CCA_SUPPORT
#define  BAND_INDICATOR21_CCA_Support_SetDefault           NO_CCA_SUPPORT
#define  BAND_INDICATOR22_CCA_Support_SetDefault           NO_CCA_SUPPORT
#define  BAND_INDICATOR23_CCA_Support_SetDefault           NO_CCA_SUPPORT
#define  BAND_INDICATOR24_CCA_Support_SetDefault           NO_CCA_SUPPORT
/*------------------------------------------------------*/
/*  TX_IO_SEL Definition                               */
/*------------------------------------------------------*/
#define  LTE_Band1_TX_IO_SEL_SetDefault                    TX_IO_MB2
#define  LTE_Band2_TX_IO_SEL_SetDefault                    TX_IO_MB2
#define  LTE_Band3_TX_IO_SEL_SetDefault                    TX_IO_MB2
#define  LTE_Band4_TX_IO_SEL_SetDefault                    TX_IO_MB2
#define  LTE_Band5_TX_IO_SEL_SetDefault                    TX_IO_LB1
#define  LTE_Band7_TX_IO_SEL_SetDefault                    TX_IO_HB2
#define  LTE_Band8_TX_IO_SEL_SetDefault                    TX_IO_LB1
#define  LTE_Band12_TX_IO_SEL_SetDefault                   TX_IO_LB1
#define  LTE_Band17_TX_IO_SEL_SetDefault                   TX_IO_LB1
#define  LTE_Band20_TX_IO_SEL_SetDefault                   TX_IO_LB1
#define  LTE_Band26_TX_IO_SEL_SetDefault                   TX_IO_LB1
#define  LTE_Band27_TX_IO_SEL_SetDefault                   TX_IO_LB1
#define  LTE_Band28_TX_IO_SEL_SetDefault                   TX_IO_LB1
#define  LTE_Band32_TX_IO_SEL_SetDefault                   TX_IO_NON_USED
#define  LTE_Band38_TX_IO_SEL_SetDefault                   TX_IO_HB2
#define  LTE_Band39_TX_IO_SEL_SetDefault                   TX_IO_MB2
#define  LTE_Band40_TX_IO_SEL_SetDefault                   TX_IO_HB2
#define  LTE_Band41_TX_IO_SEL_SetDefault                   TX_IO_HB2
#define  LTE_Band34_TX_IO_SEL_SetDefault                   TX_IO_MB2

/*------------------------------------------------------*/
/*  LTE PDATA PT1 Setting                               */
/*------------------------------------------------------*/
#define  PDATA_LTE_Band1_PT1_SetDefault                    0x00000000
#define  PDATA_LTE_Band2_PT1_SetDefault                    0x00000000
#define  PDATA_LTE_Band3_PT1_SetDefault                    0x00000000
#define  PDATA_LTE_Band4_PT1_SetDefault                    0x00000000
#define  PDATA_LTE_Band5_PT1_SetDefault                    0x00000000
#define  PDATA_LTE_Band7_PT1_SetDefault                    0x00000000
#define  PDATA_LTE_Band8_PT1_SetDefault                    0x00000000
#define  PDATA_LTE_Band12_PT1_SetDefault                   0x00000000
#define  PDATA_LTE_Band17_PT1_SetDefault                   0x00000000
#define  PDATA_LTE_Band20_PT1_SetDefault                   0x00000000
#define  PDATA_LTE_Band26_PT1_SetDefault                   0x00000000
#define  PDATA_LTE_Band27_PT1_SetDefault                   0x00000000
#define  PDATA_LTE_Band28_PT1_SetDefault                   0x00000000
#define  PDATA_LTE_Band32_PT1_SetDefault                   0x00000000
#define  PDATA_LTE_Band38_PT1_SetDefault                   0x00000000
#define  PDATA_LTE_Band39_PT1_SetDefault                   0x00000000
#define  PDATA_LTE_Band40_PT1_SetDefault                   0x00000000
#define  PDATA_LTE_Band41_PT1_SetDefault                   0x00000000
#define  PDATA_LTE_Band34_PT1_SetDefault                   0x00000000

/*------------------------------------------------------*/
/*  LTE PDATA PT2 Setting                               */
/*------------------------------------------------------*/
#define  PDATA_LTE_Band1_PT2_SetDefault                    0x00000000
#define  PDATA_LTE_Band2_PT2_SetDefault                    0x00000000
#define  PDATA_LTE_Band3_PT2_SetDefault                    0x00000000
#define  PDATA_LTE_Band4_PT2_SetDefault                    0x00000000
#define  PDATA_LTE_Band5_PT2_SetDefault                    0x00000000
#define  PDATA_LTE_Band7_PT2_SetDefault                    0x00000000
#define  PDATA_LTE_Band8_PT2_SetDefault                    0x00000000
#define  PDATA_LTE_Band12_PT2_SetDefault                   0x00000000
#define  PDATA_LTE_Band17_PT2_SetDefault                   0x00000000
#define  PDATA_LTE_Band20_PT2_SetDefault                   0x00000000
#define  PDATA_LTE_Band26_PT2_SetDefault                   0x00000000
#define  PDATA_LTE_Band27_PT2_SetDefault                   0x00000000
#define  PDATA_LTE_Band28_PT2_SetDefault                   0x00000000
#define  PDATA_LTE_Band32_PT2_SetDefault                   0x00000000
#define  PDATA_LTE_Band38_PT2_SetDefault                   0x00000000
#define  PDATA_LTE_Band39_PT2_SetDefault                   0x00000000
#define  PDATA_LTE_Band40_PT2_SetDefault                   0x00000000
#define  PDATA_LTE_Band41_PT2_SetDefault                   0x00000000
#define  PDATA_LTE_Band34_PT2_SetDefault                   0x00000000

/*------------------------------------------------------*/
/*  LTE PDATA PT3 Setting                               */
/*------------------------------------------------------*/
#define  PDATA_LTE_Band1_PT3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band2_PT3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band3_PT3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band4_PT3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band5_PT3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band7_PT3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band8_PT3_SetDefault                    LTE_PDATA_OFF
#define  PDATA_LTE_Band12_PT3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band17_PT3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band20_PT3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band26_PT3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band27_PT3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band28_PT3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band32_PT3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band38_PT3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band39_PT3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band40_PT3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band41_PT3_SetDefault                   LTE_PDATA_OFF
#define  PDATA_LTE_Band34_PT3_SetDefault                   LTE_PDATA_OFF

/*------------------------------------------------------*/
/*  LTE VM0 Setting                                     */
/*------------------------------------------------------*/
#define  PDATA_LTE_Band1_VM0_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band2_VM0_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band3_VM0_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band4_VM0_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band5_VM0_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band7_VM0_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band8_VM0_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band12_VM0_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band17_VM0_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band20_VM0_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band26_VM0_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band27_VM0_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band28_VM0_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band32_VM0_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band38_VM0_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band39_VM0_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band40_VM0_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band41_VM0_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band34_VM0_SetDefault                   {0,0,0,0,0,0,0,0}

/*------------------------------------------------------*/
/*  LTE VM1 Setting                                     */
/*------------------------------------------------------*/
#define  PDATA_LTE_Band1_VM1_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band2_VM1_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band3_VM1_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band4_VM1_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band5_VM1_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band7_VM1_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band8_VM1_SetDefault                    {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band12_VM1_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band17_VM1_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band20_VM1_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band26_VM1_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band27_VM1_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band28_VM1_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band32_VM1_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band38_VM1_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band39_VM1_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band40_VM1_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band41_VM1_SetDefault                   {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band34_VM1_SetDefault                   {0,0,0,0,0,0,0,0}


/*--------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------*/

/*-----------------------------------*/
/* Definition for the band splitting */
/*-----------------------------------*/
// How to set the band-splitting frequency?
// For example, the DL frequencies of the 1st and 2nd sub-bands are 758~780.4MHz and 780.5~802.9MHz, so we define
// BAND_SPLIT_INDICATOR1_DL_END1 as 7805 [ = (780.4+0.1)*10 ]
// BAND_SPLIT_INDICATOR1_DL_END2 as 8030 [ = (802.9+0.1)*10 ]

// [Note]
// 1. The unit for the frequency definition is 100kHz
// 2. BAND_SPLIT_INDICATOR1_DL_ENDn defines the end DL frequency of each part of splitting band PLUS 0.1 MHz
// 3. Since there are only TWO sub-bands, BAND_SPLIT_INDICATOR1_DL_END3 should be 0
// 4. The way to define the UL frequency is the same as the way DL does

// [Example]
// BAND_SPLIT_INDICATOR0               LTE_Band28
// BAND_SPLIT_INDICATOR0_NUM           2   // the num of part of splitting band
// BAND_SPLIT_INDICATOR0_Part1_DL_END  7805   // the end DL frequency of the 1st part of splitting band PLUS 0.1MHz, unit: 100KHz, set to 0 if no part is split
// BAND_SPLIT_INDICATOR0_Part2_DL_END  8030   // the end DL frequency of the 2nd part of splitting band PLUS 0.1MHz, unit: 100KHz, set to 0 if no part is split
// BAND_SPLIT_INDICATOR0_Part3_DL_END  0   // the end DL frequency of the 3rd part of splitting band PLUS 0.1MHz, unit: 100KHz, set to 0 if no part is split or only two parts are split
// BAND_SPLIT_INDICATOR0_Part1_UL_END  7255   // the end UL frequency of the 1st part of splitting band PLUS 0.1MHz, unit: 100KHz, set to 0 if no part is split
// BAND_SPLIT_INDICATOR0_Part2_UL_END  7480   // the end UL frequency of the 2nd part of splitting band PLUS 0.1MHz, unit: 100KHz, set to 0 if no part is split
// BAND_SPLIT_INDICATOR0_Part3_UL_END  0   // the end UL frequency of the 3rd part of splitting band PLUS 0.1MHz, unit: 100KHz, set to 0 if no part is split or only two parts are split


/*-------------------------*/
/* 0th Split Band Settings */
/*-------------------------*/
#define  BAND_SPLIT_INDICATOR0_SetDefault                  LTE_Band28
#define  BAND_SPLIT_INDICATOR0_NUM_SetDefault              2
#define  BAND_SPLIT_INDICATOR0_Part1_DL_END_SetDefault     7805
#define  BAND_SPLIT_INDICATOR0_Part2_DL_END_SetDefault     8030
#define  BAND_SPLIT_INDICATOR0_Part3_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR0_Part1_UL_END_SetDefault     7255
#define  BAND_SPLIT_INDICATOR0_Part2_UL_END_SetDefault     7480
#define  BAND_SPLIT_INDICATOR0_Part3_UL_END_SetDefault     0
/*-------------------------*/
/* 1th Split Band Settings */
/*-------------------------*/
#define  BAND_SPLIT_INDICATOR1_SetDefault                  LTE_BandNone
#define  BAND_SPLIT_INDICATOR1_NUM_SetDefault              0
#define  BAND_SPLIT_INDICATOR1_Part1_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR1_Part2_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR1_Part3_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR1_Part1_UL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR1_Part2_UL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR1_Part3_UL_END_SetDefault     0
/*-------------------------*/
/* 2th Split Band Settings */
/*-------------------------*/
#define  BAND_SPLIT_INDICATOR2_SetDefault                  LTE_BandNone
#define  BAND_SPLIT_INDICATOR2_NUM_SetDefault              0
#define  BAND_SPLIT_INDICATOR2_Part1_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR2_Part2_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR2_Part3_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR2_Part1_UL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR2_Part2_UL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR2_Part3_UL_END_SetDefault     0
/*-------------------------*/
/* 3th Split Band Settings */
/*-------------------------*/
#define  BAND_SPLIT_INDICATOR3_SetDefault                  LTE_BandNone
#define  BAND_SPLIT_INDICATOR3_NUM_SetDefault              0
#define  BAND_SPLIT_INDICATOR3_Part1_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR3_Part2_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR3_Part3_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR3_Part1_UL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR3_Part2_UL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR3_Part3_UL_END_SetDefault     0
/*-------------------------*/
/* 4th Split Band Settings */
/*-------------------------*/
#define  BAND_SPLIT_INDICATOR4_SetDefault                  LTE_BandNone
#define  BAND_SPLIT_INDICATOR4_NUM_SetDefault              0
#define  BAND_SPLIT_INDICATOR4_Part1_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR4_Part2_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR4_Part3_DL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR4_Part1_UL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR4_Part2_UL_END_SetDefault     0
#define  BAND_SPLIT_INDICATOR4_Part3_UL_END_SetDefault     0

/*-------------------------*/
/* LTE_Band28-Part1 Split Band Settings */
/*-------------------------*/
#define  LTE_Band28_Part1_RX_TBL_IDX_SetDefault            TBL_IDX12
#define  LTE_Band28_Part1_TX_TBL_IDX_SetDefault            TBL_IDX12
/*-------------------------*/
/* LTE_Band28-Part2 Split Band Settings */
/*-------------------------*/
#define  LTE_Band28_Part2_RX_TBL_IDX_SetDefault            TBL_IDX25
#define  LTE_Band28_Part2_TX_TBL_IDX_SetDefault            TBL_IDX28
#define  LTE_Band28_Part2_RX_IO_SEL_SetDefault             RX_IO_PRX5
#define  LTE_Band28_Part2_RXD_IO_SEL_SetDefault            RX_IO_DRX5
#define  LTE_Band28_Part2_TX_IO_SEL_SetDefault             TX_IO_LB1
#define  PDATA_LTE_Band28_Part2_PR1_SetDefault             0x00000002
#define  PDATA_LTE_Band28_Part2_PR2_SetDefault             0x00000002
#define  PDATA_LTE_Band28_Part2_PR3_SetDefault             LTE_PDATA_OFF
#define  PDATA_LTE_Band28_Part2_PT1_SetDefault             0x00000000
#define  PDATA_LTE_Band28_Part2_PT2_SetDefault             0x00000000
#define  PDATA_LTE_Band28_Part2_PT3_SetDefault             LTE_PDATA_OFF
#define  PDATA_LTE_Band28_Part2_VM0_SetDefault             {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band28_Part2_VM1_SetDefault             {0,0,0,0,0,0,0,0}
/*-------------------------*/
/* LTE_Band28-Part3 Split Band Settings */
/*-------------------------*/
#define  LTE_Band28_Part3_RX_TBL_IDX_SetDefault            TBL_IDX_INVALID
#define  LTE_Band28_Part3_TX_TBL_IDX_SetDefault            TBL_IDX_INVALID
#define  LTE_Band28_Part3_RX_IO_SEL_SetDefault             RX_IO_NON_USED
#define  LTE_Band28_Part3_RXD_IO_SEL_SetDefault            RXD_IO_NON_USED
#define  LTE_Band28_Part3_TX_IO_SEL_SetDefault             TX_IO_NON_USED
#define  PDATA_LTE_Band28_Part3_PR1_SetDefault             0x00000000
#define  PDATA_LTE_Band28_Part3_PR2_SetDefault             0x00000000
#define  PDATA_LTE_Band28_Part3_PR3_SetDefault             LTE_PDATA_OFF
#define  PDATA_LTE_Band28_Part3_PT1_SetDefault             0x00000000
#define  PDATA_LTE_Band28_Part3_PT2_SetDefault             0x00000000
#define  PDATA_LTE_Band28_Part3_PT3_SetDefault             LTE_PDATA_OFF
#define  PDATA_LTE_Band28_Part3_VM0_SetDefault             {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band28_Part3_VM1_SetDefault             {0,0,0,0,0,0,0,0}
/*--------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------*/
/*  Definition for Filter mode                          */
/*------------------------------------------------------*/
/*----------------------------------*/
/* 0th Band Setting for Filter mode */
/*----------------------------------*/
#define  BAND_FILTER_INDICATOR0_SetDefault                 LTE_Band38
#define  BAND_FILTER_INDICATOR0_POWER_COMP_SetDefault      512 
#define  BAND_FILTER_INDICATOR0_COUPLER_COMP_SetDefault    512 
/*----------------------------------*/
/* 1th Band Setting for Filter mode */
/*----------------------------------*/
#define  BAND_FILTER_INDICATOR1_SetDefault                 LTE_Band40
#define  BAND_FILTER_INDICATOR1_POWER_COMP_SetDefault      512 
#define  BAND_FILTER_INDICATOR1_COUPLER_COMP_SetDefault    512 
/*----------------------------------*/
/* 2th Band Setting for Filter mode */
/*----------------------------------*/
#define  BAND_FILTER_INDICATOR2_SetDefault                 LTE_Band41
#define  BAND_FILTER_INDICATOR2_POWER_COMP_SetDefault      512 
#define  BAND_FILTER_INDICATOR2_COUPLER_COMP_SetDefault    512 
/*----------------------------------*/
/* 3th Band Setting for Filter mode */
/*----------------------------------*/
#define  BAND_FILTER_INDICATOR3_SetDefault                 LTE_BandNone
#define  BAND_FILTER_INDICATOR3_POWER_COMP_SetDefault      0 
#define  BAND_FILTER_INDICATOR3_COUPLER_COMP_SetDefault    0 
/*----------------------------------*/
/* 4th Band Setting for Filter mode */
/*----------------------------------*/
#define  BAND_FILTER_INDICATOR4_SetDefault                 LTE_BandNone
#define  BAND_FILTER_INDICATOR4_POWER_COMP_SetDefault      0 
#define  BAND_FILTER_INDICATOR4_COUPLER_COMP_SetDefault    0 


/*-------------------------------------------------------*/
/* CCA_Support Filter Mode Settings                              */
/*-------------------------------------------------------*/
#define  BAND_FILTER_INDICATOR0_CCA_Support_SetDefault     CLASS_C_CCA_SUPPORT
#define  BAND_FILTER_INDICATOR1_CCA_Support_SetDefault     CLASS_C_CCA_SUPPORT
#define  BAND_FILTER_INDICATOR2_CCA_Support_SetDefault     CLASS_C_CCA_SUPPORT
#define  BAND_FILTER_INDICATOR3_CCA_Support_SetDefault     NO_CCA_SUPPORT
#define  BAND_FILTER_INDICATOR4_CCA_Support_SetDefault     NO_CCA_SUPPORT
/*-------------------------------------------------------*/
/* Filter_TX_IO_SEL Filter Mode Settings                              */
/*-------------------------------------------------------*/
#define  LTE_Band38_Filter_TX_IO_SEL_SetDefault            TX_IO_HB2
#define  LTE_Band40_Filter_TX_IO_SEL_SetDefault            TX_IO_HB2
#define  LTE_Band41_Filter_TX_IO_SEL_SetDefault            TX_IO_HB2
/*-------------------------------------------------------*/
/* Filter_PT1 Filter Mode Settings                              */
/*-------------------------------------------------------*/
#define  PDATA_LTE_Band38_Filter_PT1_SetDefault            0x00000000
#define  PDATA_LTE_Band40_Filter_PT1_SetDefault            0x00000000
#define  PDATA_LTE_Band41_Filter_PT1_SetDefault            0x00000000
/*-------------------------------------------------------*/
/* Filter_PT2 Filter Mode Settings                              */
/*-------------------------------------------------------*/
#define  PDATA_LTE_Band38_Filter_PT2_SetDefault            0x00000000
#define  PDATA_LTE_Band40_Filter_PT2_SetDefault            0x00000000
#define  PDATA_LTE_Band41_Filter_PT2_SetDefault            0x00000000
/*-------------------------------------------------------*/
/* Filter_PT3 Filter Mode Settings                              */
/*-------------------------------------------------------*/
#define  PDATA_LTE_Band38_Filter_PT3_SetDefault            LTE_PDATA_OFF
#define  PDATA_LTE_Band40_Filter_PT3_SetDefault            LTE_PDATA_OFF
#define  PDATA_LTE_Band41_Filter_PT3_SetDefault            LTE_PDATA_OFF
/*-------------------------------------------------------*/
/* Filter_VM0 Filter Mode Settings                              */
/*-------------------------------------------------------*/
#define  PDATA_LTE_Band38_Filter_VM0_SetDefault            {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band40_Filter_VM0_SetDefault            {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band41_Filter_VM0_SetDefault            {0,0,0,0,0,0,0,0}
/*-------------------------------------------------------*/
/* Filter_VM1 Filter Mode Settings                              */
/*-------------------------------------------------------*/
#define  PDATA_LTE_Band38_Filter_VM1_SetDefault            {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band40_Filter_VM1_SetDefault            {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_Band41_Filter_VM1_SetDefault            {0,0,0,0,0,0,0,0}
/*-------------------------------------------------------*/
/* Filter_TBL_IDX Filter Mode Settings                              */
/*-------------------------------------------------------*/
#define  LTE_Band38_Filter_TBL_IDX_SetDefault              TBL_IDX25
#define  LTE_Band40_Filter_TBL_IDX_SetDefault              TBL_IDX26
#define  LTE_Band41_Filter_TBL_IDX_SetDefault              TBL_IDX27
/*-------------------------------------------------------*/
/* Bypass_TBL_IDX Filter Mode Settings                              */
/*-------------------------------------------------------*/
#define  LTE_Band38_Bypass_TBL_IDX_SetDefault              TBL_IDX14
#define  LTE_Band40_Bypass_TBL_IDX_SetDefault              TBL_IDX16
#define  LTE_Band41_Bypass_TBL_IDX_SetDefault              TBL_IDX17

/*-------------------------------------------------------*/
/*   BAND_PARTIAL_INDICATOR_SetDefault                        */
/*-------------------------------------------------------*/
#define  BAND_PARTIAL_INDICATOR0_SetDefault                LTE_BandNone
#define  BAND_PARTIAL_INDICATOR1_SetDefault                LTE_BandNone
#define  BAND_PARTIAL_INDICATOR2_SetDefault                LTE_BandNone
#define  BAND_PARTIAL_INDICATOR3_SetDefault                LTE_BandNone
#define  BAND_PARTIAL_INDICATOR4_SetDefault                LTE_BandNone


/*-------------------------------------------------------*/
/*  Define frequency range for partial band              */
/*-------------------------------------------------------*/
//  Supported freq range for 0th partial band
#define  BAND_PARTIAL_INDICATOR0_START_SetDefault          0
#define  BAND_PARTIAL_INDICATOR0_END_SetDefault            0

//  Supported freq range for 1th partial band
#define  BAND_PARTIAL_INDICATOR1_START_SetDefault          0
#define  BAND_PARTIAL_INDICATOR1_END_SetDefault            0

//  Supported freq range for 2th partial band
#define  BAND_PARTIAL_INDICATOR2_START_SetDefault          0
#define  BAND_PARTIAL_INDICATOR2_END_SetDefault            0

//  Supported freq range for 3th partial band
#define  BAND_PARTIAL_INDICATOR3_START_SetDefault          0
#define  BAND_PARTIAL_INDICATOR3_END_SetDefault            0

//  Supported freq range for 4th partial band
#define  BAND_PARTIAL_INDICATOR4_START_SetDefault          0
#define  BAND_PARTIAL_INDICATOR4_END_SetDefault            0



/*------------------------------------------------------*/
/*  HPUT Definition                                     */
/*------------------------------------------------------*/
#define  LTE_HPUE_ENA_SetDefault                 SW_CAPABILITY_SUPPORT

/*------------------------------------------------------*/
/*  BAND_HPUE_INDICATOR0 ~ BAND_HPUE_INDICATOR4         */
/*------------------------------------------------------*/
#define  BAND_HPUE_INDICATOR0_SetDefault         LTE_Band41
#define  BAND_HPUE_INDICATOR1_SetDefault         LTE_BandNone
#define  BAND_HPUE_INDICATOR2_SetDefault         LTE_BandNone
#define  BAND_HPUE_INDICATOR3_SetDefault         LTE_BandNone
#define  BAND_HPUE_INDICATOR4_SetDefault         LTE_BandNone




/*---------------------------------------------------------------------------------------------*/
/* This following part serves as default value of undefined macro constants in lte_custom_rf.h */
/* DO NOT MODIFY!!!                                                                            */
/*---------------------------------------------------------------------------------------------*/
#define PDATA_LTE_BandNone_PR1_SetDefault                                               LTE_PDATA_OFF
#define PDATA_LTE_BandNone_PR2_SetDefault                                               LTE_PDATA_OFF
#define PDATA_LTE_BandNone_PR3_SetDefault                                               LTE_PDATA_OFF
#define PDATA_LTE_BandNone_PT1_SetDefault                                               LTE_PDATA_OFF
#define PDATA_LTE_BandNone_PT2_SetDefault                                               LTE_PDATA_OFF
#define PDATA_LTE_BandNone_PT3_SetDefault                                               LTE_PDATA_OFF
#define PDATA_LTE_BandNone_PRANT_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_PTANT_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_2_PR1_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_2_PR2_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_2_PR3_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_2_PT1_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_2_PT2_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_2_PT3_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_3_PR1_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_3_PR2_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_3_PR3_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_VM0_SetDefault                                               {0,0,0,0,0,0,0,0}
#define PDATA_LTE_BandNone_VM1_SetDefault                                               {0,0,0,0,0,0,0,0}
#define PDATA_LTE_BandNone_3_PT1_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_3_PT2_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_3_PT3_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_FILTER_PR1_SetDefault                                        LTE_PDATA_OFF
#define PDATA_LTE_BandNone_FILTER_PR2_SetDefault                                        LTE_PDATA_OFF
#define PDATA_LTE_BandNone_FILTER_PR3_SetDefault                                        LTE_PDATA_OFF
#define PDATA_LTE_BandNone_FILTER_PT1_SetDefault                                        LTE_PDATA_OFF
#define PDATA_LTE_BandNone_FILTER_PT2_SetDefault                                        LTE_PDATA_OFF
#define PDATA_LTE_BandNone_FILTER_PT3_SetDefault                                        LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS1_SetDefault                                              LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS2_SetDefault                                              LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS3_SetDefault                                              LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS4_SetDefault                                              LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS5_SetDefault                                              LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS6_SetDefault                                              LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS7_SetDefault                                              LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS8_SetDefault                                              LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS9_SetDefault                                              LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS10_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS11_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS12_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS13_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS14_SetDefault                                             LTE_PDATA_OFF
#define PDATA_LTE_BandNone_TAS15_SetDefault                                             LTE_PDATA_OFF
#define LTE_BandNone_RX_IO_SEL_SetDefault                                               RX_IO_NON_USED
#define LTE_BandNone_RXD_IO_SEL_SetDefault                                              RXD_IO_NON_USED
#define LTE_BandNone_TX_IO_SEL_SetDefault                                               TX_IO_NON_USED
#define LTE_BandNone_TX_DET_IO_SEL_SetDefault                                           TX_DET_IO_DET1
#define LTE_BandNone_Part1_RX_TBL_IDX_SetDefault                                        TBL_IDX_INVALID
#define LTE_BandNone_Part2_RX_TBL_IDX_SetDefault                                        TBL_IDX_INVALID
#define LTE_BandNone_Part3_RX_TBL_IDX_SetDefault                                        TBL_IDX_INVALID
#define LTE_BandNone_Part1_TX_TBL_IDX_SetDefault                                        TBL_IDX_INVALID
#define LTE_BandNone_Part2_TX_TBL_IDX_SetDefault                                        TBL_IDX_INVALID
#define LTE_BandNone_Part3_TX_TBL_IDX_SetDefault                                        TBL_IDX_INVALID
#define LTE_BandNone_RX_eLNAIDX_SetDefault                                              MML1_FE_ELNA_NONE
#define LTE_BandNone_RXD_eLNAIDX_SetDefault                                             MML1_FE_ELNA_NONE
#define LTE_BandNone_Filter_RX_IO_SEL_SetDefault                                        RX_IO_NON_USED
#define LTE_BandNone_Filter_RXD_IO_SEL_SetDefault                                       RXD_IO_NON_USED
#define LTE_BandNone_Filter_TX_IO_SEL_SetDefault                                        TX_IO_NON_USED
#define LTE_BandNone_Filter_TX_DET_IO_SEL_SetDefault                                    TX_DET_IO_DET1
#define PDATA_LTE_BandNone_Filter_PR1_SetDefault                                        LTE_PDATA_OFF
#define PDATA_LTE_BandNone_Filter_PR2_SetDefault                                        LTE_PDATA_OFF
#define PDATA_LTE_BandNone_Filter_PR3_SetDefault                                        LTE_PDATA_OFF
#define PDATA_LTE_BandNone_Filter_PT1_SetDefault                                        LTE_PDATA_OFF
#define PDATA_LTE_BandNone_Filter_PT2_SetDefault                                        LTE_PDATA_OFF
#define PDATA_LTE_BandNone_Filter_PT3_SetDefault                                        LTE_PDATA_OFF
#define LTE_BandNone_Filter_TBL_IDX_SetDefault                                          TBL_IDX_INVALID
#define LTE_BandNone_Bypass_TBL_IDX_SetDefault                                          TBL_IDX_INVALID
#define BAND_INDICATOR_NONE_SetDefault                                                  LTE_BandNone
#define PDATA_LTE_BandNone_Filter_VM0_SetDefault                                        {0,0,0,0,0,0,0,0}
#define PDATA_LTE_BandNone_Filter_VM1_SetDefault                                        {0,0,0,0,0,0,0,0}
#define PDATA_LTE_BandNone_1_PFREQ_SetDefault                                           0
#define PDATA_LTE_BandNone_1_PRANT_SetDefault                                           LTE_PDATA_OFF
#define PDATA_LTE_BandNone_1_PTANT_SetDefault                                           LTE_PDATA_OFF
#define PDATA_LTE_BandNone_2_PFREQ_SetDefault                                           0
#define PDATA_LTE_BandNone_2_PRANT_SetDefault                                           LTE_PDATA_OFF
#define PDATA_LTE_BandNone_2_PTANT_SetDefault                                           LTE_PDATA_OFF
#define PDATA_LTE_BandNone_3_PFREQ_SetDefault                                           0
#define PDATA_LTE_BandNone_3_PRANT_SetDefault                                           LTE_PDATA_OFF
#define PDATA_LTE_BandNone_3_PTANT_SetDefault                                           LTE_PDATA_OFF
#define PDATA_LTE_BandNone_4_PFREQ_SetDefault                                           0
#define PDATA_LTE_BandNone_4_PRANT_SetDefault                                           LTE_PDATA_OFF
#define PDATA_LTE_BandNone_4_PTANT_SetDefault                                           LTE_PDATA_OFF
#define PDATA_LTE_BandNone_5_PFREQ_SetDefault                                           0
#define PDATA_LTE_BandNone_5_PRANT_SetDefault                                           LTE_PDATA_OFF
#define PDATA_LTE_BandNone_5_PTANT_SetDefault                                           LTE_PDATA_OFF






/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/* ------------------------------------------------------------------------- */
#endif
