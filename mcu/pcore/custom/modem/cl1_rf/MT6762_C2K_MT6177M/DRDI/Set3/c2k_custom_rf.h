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
 * c2k_custom_rf.h
 *
 * Project:
 * --------
 * C2K
 *
 * Description:
 * ------------
 * Header file containing typedefs and definitions pertaining
 * to the RF custom files.
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

#ifndef _C2K_CUSTOM_RF_Set3_H
#define _C2K_CUSTOM_RF_Set3_H
/************************************************************/
/* Supported Band Class .                                   */
/************************************************************/
#define  CUST_BAND_A_Set3            SYS_BAND_CLASS_0
#define  CUST_BAND_B_Set3            SYS_BAND_CLASS_1
#define  CUST_BAND_C_Set3            SYS_BAND_CLASS_10
#define  CUST_BAND_D_Set3            SYS_BAND_CLASS_NOT_USED
#define  CUST_BAND_E_Set3            SYS_BAND_CLASS_NOT_USED
#define  BAND_A_SUPPORTED_Set3       TRUE
#define  BAND_B_SUPPORTED_Set3       TRUE
#define  BAND_C_SUPPORTED_Set3       TRUE
#define  BAND_D_SUPPORTED_Set3       FALSE
#define  BAND_E_SUPPORTED_Set3       FALSE

/************************************************************/
/* Rx port selection refer to the schematic.                */
/* All options are listed below:                            */
/* PRX1 ~ PRX22/DRX1 ~ DRX22/NONE_USED_PRX                  */
/************************************************************/
#define  BAND_A_RX_IO_SEL_Set3      PRX5
#define  BAND_B_RX_IO_SEL_Set3      PRX7
#define  BAND_C_RX_IO_SEL_Set3      PRX5
#define  BAND_D_RX_IO_SEL_Set3      NONE_USED_PRX
#define  BAND_E_RX_IO_SEL_Set3      NONE_USED_PRX

#define  BAND_A_RXD_IO_SEL_Set3     DRX8
#define  BAND_B_RXD_IO_SEL_Set3     DRX2
#define  BAND_C_RXD_IO_SEL_Set3     DRX8
#define  BAND_D_RXD_IO_SEL_Set3     NONE_USED_DRX
#define  BAND_E_RXD_IO_SEL_Set3     NONE_USED_DRX

/************************************************************/
/* Tx port selection refer to the schematic.                */
/* All options are listed below:                            */
/* TX0_UHB/TX0_HB1~TX0_HB2/TX0_MB1~TX0_MB3/TX0_LB1~TX0_LB4/ */
/* TX1_UHB/TX1_HB/TX1_MB/TX1_LB1~TX1_LB2/                   */
/* TX_IO_NULL                                               */
/************************************************************/
#define  BAND_A_TX_IO_SEL_Set3      TXO5
#define  BAND_B_TX_IO_SEL_Set3      TXO2
#define  BAND_C_TX_IO_SEL_Set3      TXO5
#define  BAND_D_TX_IO_SEL_Set3      TX_IO_NULL
#define  BAND_E_TX_IO_SEL_Set3      TX_IO_NULL

/************************************************************/
/* DET port selection refer to the schematic.               */
/* All options are listed below:                            */
/* TX_DET_IO_DET1/TX_DET_IO_DET2/TX_DET_IO_NULL             */
/************************************************************/
#define  BAND_A_TX_DET_IO_SEL_Set3  C2K_TX_DET_IO_DET1
#define  BAND_B_TX_DET_IO_SEL_Set3  C2K_TX_DET_IO_DET1
#define  BAND_C_TX_DET_IO_SEL_Set3  C2K_TX_DET_IO_DET1
#define  BAND_D_TX_DET_IO_SEL_Set3  C2K_TX_DET_IO_NULL 
#define  BAND_E_TX_DET_IO_SEL_Set3  C2K_TX_DET_IO_NULL

/************************************************************/
/* Event timing parameters in us resolution                 */
/************************************************************/
#define  TC_PR1_Set3                  (0)
#define  TC_PR2_Set3                  (0)
#define  TC_PR2B_Set3                 (0)
#define  TC_PR3_Set3                  (0)

#define  TC_RXD_PR1_Set3              (0)
#define  TC_RXD_PR2_Set3              (0)
#define  TC_RXD_PR2B_Set3             (0)
#define  TC_RXD_PR3_Set3              (0)

#define  TC_PT1_Set3                  (0)
#define  TC_PT2_Set3                  (0)
#define  TC_PT2B_Set3                 (0)
#define  TC_PT3_Set3                  (0)

#define  TC_PTG1_Set3                 (5)
#define  TC_PTG2_Set3                 (0)
#define  TC_PTG2B_Set3                (0)
#define  TC_PTG3_Set3                 (5)

#define  TC_PTPC1_Set3                (5)
#define  TC_PTPC2_Set3                (0)
#define  TC_PTPC2B_Set3               (0)

#define  DC2DC_OFFSET_Set3           (25)

/*------------------------------------*/
/* BPI function for Orion+ in Jade    */
/* (shall be modified in real case)   */
/*------------------------------------*/
/* PRCB : bit  BPI   pin function     */
/*         0    0    (NC)             */
/*         1    1    (NC)             */
/*         2    2    (NC)             */
/*         3    3    (NC)             */
/*         4    4    (NC)             */
/*         5    5    (NC)             */
/*         6    6    (NC)             */
/* ---------------------------------- */
/*         7    7    DRX ASM V1       */
/*         8    8    DRX ASM V2       */
/*         9    9    DRX ASM V3       */
/*         10   10   (NC)             */
/*         11   11   (NC)             */
/*         12   12   DRX Tuner 1      */
/*         13   13   DRX Tuner 2      */
/*         14   14   DRX Tuner 3      */
/*         15   15   DRX Tuner 4      */
/*         16   16   (NC)             */
/*         17   17   (NC)             */
/*         18   18   M/LB DPDT        */
/*         19   19   (NC)             */
/*         20   20   (NC)             */
/*         21   21   (NC)             */
/*         22   22   PDET Switch      */
/* ---------------------------------- */
/*         23   23   Reserved         */
/*         24   24   Reserved         */
/*         25   25   Reserved         */
/*         26   26   Reserved         */
/*         27   27   Reserved         */
/*         28   28   Reserved         */
/*         29   29   Reserved         */
/*         30   30   Reserved         */
/*         31   31   Reserved         */
/*------------------------------------*/
/*------------------------------------------------------------------ */
/* BPI mask and data.                                                */
/*-------------------------------------------------------------------*/
/* -------- PDATA_BAND_A Start ---------*/
#define  PDATA_BAND_A_PR1_Set3       0x0000A000
#define  PDATA_BAND_A_PR2_Set3       0x0000A000
#define  PDATA_BAND_A_PR2B_Set3      0x0000A000
#define  PDATA_BAND_A_PR3_Set3       0x00000000
#define  PDATA_BAND_A_PT1_Set3       0x0000A000
#define  PDATA_BAND_A_PT2_Set3       0x0000A000
#define  PDATA_BAND_A_PT2B_Set3      0x0000A000
#define  PDATA_BAND_A_PT3_Set3       0x00000000
/* -------- PDATA_BAND_A End ---------*/
/* -------- PDATA_BAND_A RXD Start ---*/
#define  PDATA2_BAND_A_PR1_Set3      0x0000A000
#define  PDATA2_BAND_A_PR2_Set3      0x0000A000
#define  PDATA2_BAND_A_PR2B_Set3     0x0000A000
#define  PDATA2_BAND_A_PR3_Set3      0x00000000
/* -------- PDATA_BAND_A RXD End -----*/
/* -------- PDATA_BAND_A_TXGATE Start -----*/
#define  PDATA_BAND_A_PTG1_Set3      0x00000000
#define  PDATA_BAND_A_PTG2_Set3      0x00000000
#define  PDATA_BAND_A_PTG2B_Set3     0x00000000
#define  PDATA_BAND_A_PTG3_Set3      0x00000000
/* -------- PDATA_BAND_A_TXGATE End  -----*/

/* -------- PDATA_BAND_B Start ---------*/
#define  PDATA_BAND_B_PR1_Set3       0x00008000
#define  PDATA_BAND_B_PR2_Set3       0x00008000
#define  PDATA_BAND_B_PR2B_Set3      0x00008000
#define  PDATA_BAND_B_PR3_Set3       0x00000000
#define  PDATA_BAND_B_PT1_Set3       0x00008000
#define  PDATA_BAND_B_PT2_Set3       0x00008000
#define  PDATA_BAND_B_PT2B_Set3      0x00008000
#define  PDATA_BAND_B_PT3_Set3       0x00000000
/* -------- PDATA_BAND_B End ---------*/
/* -------- PDATA_BAND_B RXD Start ---*/
#define  PDATA2_BAND_B_PR1_Set3      0x00008000
#define  PDATA2_BAND_B_PR2_Set3      0x00008000
#define  PDATA2_BAND_B_PR2B_Set3     0x00008000
#define  PDATA2_BAND_B_PR3_Set3      0x00000000
/* -------- PDATA_BAND_B RXD End -----*/
/* -------- PDATA_BAND_B_TXGATE Start -----*/
#define  PDATA_BAND_B_PTG1_Set3     0x00000000
#define  PDATA_BAND_B_PTG2_Set3     0x00000000
#define  PDATA_BAND_B_PTG2B_Set3    0x00000000
#define  PDATA_BAND_B_PTG3_Set3     0x00000000
/* -------- PDATA_BAND_B_TXGATE End  -----*/


/* -------- PDATA_BAND_C Start ---------*/
#define  PDATA_BAND_C_PR1_Set3       0x0000A000
#define  PDATA_BAND_C_PR2_Set3       0x0000A000
#define  PDATA_BAND_C_PR2B_Set3      0x0000A000
#define  PDATA_BAND_C_PR3_Set3       0x00000000
#define  PDATA_BAND_C_PT1_Set3       0x0000A000
#define  PDATA_BAND_C_PT2_Set3       0x0000A000
#define  PDATA_BAND_C_PT2B_Set3      0x0000A000
#define  PDATA_BAND_C_PT3_Set3       0x00000000
/* -------- PDATA_BAND_C End ---------*/
/* -------- PDATA_BAND_C RXD Start ---*/
#define  PDATA2_BAND_C_PR1_Set3      0x0000A000
#define  PDATA2_BAND_C_PR2_Set3      0x0000A000
#define  PDATA2_BAND_C_PR2B_Set3     0x0000A000
#define  PDATA2_BAND_C_PR3_Set3      0x00000000
/* -------- PDATA_BAND_C RXD End -----*/
/* -------- PDATA_BAND_C_TXGATE Start -----*/
#define  PDATA_BAND_C_PTG1_Set3     0x00000000
#define  PDATA_BAND_C_PTG2_Set3     0x00000000
#define  PDATA_BAND_C_PTG2B_Set3    0x00000000
#define  PDATA_BAND_C_PTG3_Set3     0x00000000
/* -------- PDATA_BAND_C_TXGATE End  -----*/

/* -------- PDATA_BAND_D Start ---------*/
#define  PDATA_BAND_D_PR1_Set3       0x00000000
#define  PDATA_BAND_D_PR2_Set3       0x00000000
#define  PDATA_BAND_D_PR2B_Set3      0x00000000
#define  PDATA_BAND_D_PR3_Set3       0x00000000
#define  PDATA_BAND_D_PT1_Set3       0x00000000
#define  PDATA_BAND_D_PT2_Set3       0x00000000
#define  PDATA_BAND_D_PT2B_Set3      0x00000000
#define  PDATA_BAND_D_PT3_Set3       0x00000000
/* -------- PDATA_BAND_D End ---------*/
/* -------- PDATA_BAND_D RXD Start ---*/
#define  PDATA2_BAND_D_PR1_Set3      0x00000000
#define  PDATA2_BAND_D_PR2_Set3      0x00000000
#define  PDATA2_BAND_D_PR2B_Set3     0x00000000
#define  PDATA2_BAND_D_PR3_Set3      0x00000000
/* -------- PDATA_BAND_D RXD End -----*/
/* -------- PDATA_BAND_D_TXGATE Start -----*/
#define  PDATA_BAND_D_PTG1_Set3     0x00000000
#define  PDATA_BAND_D_PTG2_Set3     0x00000000
#define  PDATA_BAND_D_PTG2B_Set3    0x00000000
#define  PDATA_BAND_D_PTG3_Set3     0x00000000
/* -------- PDATA_BAND_D_TXGATE End  -----*/

/* -------- PDATA_BAND_E Start ---------*/
#define  PDATA_BAND_E_PR1_Set3       0x00000000
#define  PDATA_BAND_E_PR2_Set3       0x00000000
#define  PDATA_BAND_E_PR2B_Set3      0x00000000
#define  PDATA_BAND_E_PR3_Set3       0x00000000
#define  PDATA_BAND_E_PT1_Set3       0x00000000
#define  PDATA_BAND_E_PT2_Set3       0x00000000
#define  PDATA_BAND_E_PT2B_Set3      0x00000000
#define  PDATA_BAND_E_PT3_Set3       0x00000000
/* -------- PDATA_BAND_E End ---------*/
/* -------- PDATA_BAND_E RXD Start ---*/
#define  PDATA2_BAND_E_PR1_Set3      0x00000000
#define  PDATA2_BAND_E_PR2_Set3      0x00000000
#define  PDATA2_BAND_E_PR2B_Set3     0x00000000
#define  PDATA2_BAND_E_PR3_Set3      0x00000000
/* -------- PDATA_BAND_E RXD End -----*/
/* -------- PDATA_BAND_E_TXGATE Start -----*/
#define  PDATA_BAND_E_PTG1_Set3     0x00000000
#define  PDATA_BAND_E_PTG2_Set3     0x00000000
#define  PDATA_BAND_E_PTG2B_Set3    0x00000000
#define  PDATA_BAND_E_PTG3_Set3     0x00000000
/* -------- PDATA_BAND_E_TXGATE End  -----*/

/*******************************************************/
/* Rx diversity path enable.                           */
/* TRUE - RX diversity path is enabled.                */
/* FALSE - RX diversity path is disabled.              */
/*******************************************************/
#define  RX_DIVERSITY_ENABLE_BAND_A_Set3 TRUE
#define  RX_DIVERSITY_ENABLE_BAND_B_Set3 TRUE
#define  RX_DIVERSITY_ENABLE_BAND_C_Set3 TRUE
#define  RX_DIVERSITY_ENABLE_BAND_D_Set3 TRUE
#define  RX_DIVERSITY_ENABLE_BAND_E_Set3 TRUE

/*******************************************************/
/* Rx diversity path enable.                           */
/* TRUE - RX diversity path is enabled.                */
/* FALSE - RX diversity path is disabled.              */
/*******************************************************/
#define  RX_DIVERSITY_ONLY_TEST_ENABLE_BAND_A_Set3 FALSE
#define  RX_DIVERSITY_ONLY_TEST_ENABLE_BAND_B_Set3 FALSE
#define  RX_DIVERSITY_ONLY_TEST_ENABLE_BAND_C_Set3 FALSE
#define  RX_DIVERSITY_ONLY_TEST_ENABLE_BAND_D_Set3 FALSE
#define  RX_DIVERSITY_ONLY_TEST_ENABLE_BAND_E_Set3 FALSE

/*******************************************************/
/* PA Vdd control source               */
/* DC2DC/PMIC/BATT/ETM */
/*******************************************************/
#define  PA_VDD_SOURCE_SEL_BAND_A_Set3          VPA_SOURCE_HW_PMIC
#define  PA_VDD_SOURCE_SEL_BAND_B_Set3          VPA_SOURCE_HW_PMIC
#define  PA_VDD_SOURCE_SEL_BAND_C_Set3          VPA_SOURCE_HW_PMIC
#define  PA_VDD_SOURCE_SEL_BAND_D_Set3          VPA_SOURCE_HW_PMIC
#define  PA_VDD_SOURCE_SEL_BAND_E_Set3          VPA_SOURCE_HW_PMIC

/*******************************************************/
/* For the RF chip internal temperature measurement.   */
/* TRUE - use RF internal ADC to measure.              */
/* FALSE - do not use RF internal ADC to measure.      */
/*******************************************************/
#define  TEMPERATURE_MEAS_EN_Set3        TRUE
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
#endif
#endif /* _C2K_CUSTOM_RF_Set3_H */
/*----------------------------------------------------------------------------
 End of File
----------------------------------------------------------------------------*/

