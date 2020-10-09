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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup EL1D_RF_DEP_DATA
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       mml1_rf_reg_mt6176.h
 * @author     ChunChieh Liao (MTK05759)
 * @date       2015.08.14
 * @brief      MML1 RF CW access definition
 * @details    RF Chip: MT6176
 ******************************************************************************/


#ifndef __MML1_RF_REG_MT6176_H__
#define __MML1_RF_REG_MT6176_H__

/*******************************************************************************
 * #include
 ******************************************************************************/

/*******************************************************************************
 * #define
 ******************************************************************************/
/** RF CW access definition of RF Chip: Orion+ */

#define RF_CW0_SOR_LSB                                                          (19)
#define RF_CW0_SOR_WIDTH                                                        (1)
#define RF_CW0_SOR_MASK                                                         (0x00080000)
#define RF_CW0_SOR_BIT                                                          (0x00080000)

#define RF_CW0_ATPG_TESTMODE_LSB                                                (18)
#define RF_CW0_ATPG_TESTMODE_WIDTH                                              (1)
#define RF_CW0_ATPG_TESTMODE_MASK                                               (0x00040000)
#define RF_CW0_ATPG_TESTMODE_BIT                                                (0x00040000)

#define RF_CW0_SCAN_COMP_MODE_LSB                                               (17)
#define RF_CW0_SCAN_COMP_MODE_WIDTH                                             (1)
#define RF_CW0_SCAN_COMP_MODE_MASK                                              (0x00020000)
#define RF_CW0_SCAN_COMP_MODE_BIT                                               (0x00020000)

#define RF_CW0_FREE_CONTROL_EN_LSB                                              (16)
#define RF_CW0_FREE_CONTROL_EN_WIDTH                                            (1)
#define RF_CW0_FREE_CONTROL_EN_MASK                                             (0x00010000)
#define RF_CW0_FREE_CONTROL_EN_BIT                                              (0x00010000)

#define RF_CW0_SCAN_ENABLE_CONTROL_EN_LSB                                       (15)
#define RF_CW0_SCAN_ENABLE_CONTROL_EN_WIDTH                                     (1)
#define RF_CW0_SCAN_ENABLE_CONTROL_EN_MASK                                      (0x00008000)
#define RF_CW0_SCAN_ENABLE_CONTROL_EN_BIT                                       (0x00008000)

#define RF_CW0_FAB_REF_LSB                                                      (12)
#define RF_CW0_FAB_REF_WIDTH                                                    (2)
#define RF_CW0_FAB_REF_MASK                                                     (0x00003000)

#define RF_CW0_VARIANT_FER_LSB                                                  (8)
#define RF_CW0_VARIANT_FER_WIDTH                                                (4)
#define RF_CW0_VARIANT_FER_MASK                                                 (0x00000F00)

#define RF_CW0_ECO_REF_LSB                                                      (4)
#define RF_CW0_ECO_REF_WIDTH                                                    (4)
#define RF_CW0_ECO_REF_MASK                                                     (0x000000F0)

#define RF_CW0_CHIP_REF_LSB                                                     (0)
#define RF_CW0_CHIP_REF_WIDTH                                                   (4)
#define RF_CW0_CHIP_REF_MASK                                                    (0x0000000F)

#define RF_CW1_MODE_LSB                                                         (16)
#define RF_CW1_MODE_WIDTH                                                       (4)
#define RF_CW1_MODE_MASK                                                        (0x000F0000)

#define RF_CW1_RAT_LSB                                                          (12)
#define RF_CW1_RAT_WIDTH                                                        (4)
#define RF_CW1_RAT_MASK                                                         (0x0000F000)

#define RF_CW1_TRX_LSB                                                          (9)
#define RF_CW1_TRX_WIDTH                                                        (3)
#define RF_CW1_TRX_MASK                                                         (0x00000E00)

#define RF_CW1_STD_LSB                                                          (6)
#define RF_CW1_STD_WIDTH                                                        (3)
#define RF_CW1_STD_MASK                                                         (0x000001C0)

#define RF_CW1_SRX1_ON_LSB                                                      (5)
#define RF_CW1_SRX1_ON_WIDTH                                                    (1)
#define RF_CW1_SRX1_ON_MASK                                                     (0x00000020)
#define RF_CW1_SRX1_ON_BIT                                                      (0x00000020)

#define RF_CW1_SRX2_ON_LSB                                                      (4)
#define RF_CW1_SRX2_ON_WIDTH                                                    (1)
#define RF_CW1_SRX2_ON_MASK                                                     (0x00000010)
#define RF_CW1_SRX2_ON_BIT                                                      (0x00000010)

#define RF_CW1_SRX1_PCC_EN_LSB                                                  (3)
#define RF_CW1_SRX1_PCC_EN_WIDTH                                                (1)
#define RF_CW1_SRX1_PCC_EN_MASK                                                 (0x00000008)
#define RF_CW1_SRX1_PCC_EN_BIT                                                  (0x00000008)

#define RF_CW1_SRX2_PCC_EN_LSB                                                  (2)
#define RF_CW1_SRX2_PCC_EN_WIDTH                                                (1)
#define RF_CW1_SRX2_PCC_EN_MASK                                                 (0x00000004)
#define RF_CW1_SRX2_PCC_EN_BIT                                                  (0x00000004)

#define RF_CW1_Rev_LSB                                                          (0)
#define RF_CW1_Rev_WIDTH                                                        (2)
#define RF_CW1_Rev_MASK                                                         (0x00000003)

#define RF_CW2_DYN_EN_LSB                                                       (19)
#define RF_CW2_DYN_EN_WIDTH                                                     (1)
#define RF_CW2_DYN_EN_MASK                                                      (0x00080000)
#define RF_CW2_DYN_EN_BIT                                                       (0x00080000)

#define RF_CW2_EN_CALFREE_LSB                                                   (18)
#define RF_CW2_EN_CALFREE_WIDTH                                                 (1)
#define RF_CW2_EN_CALFREE_MASK                                                  (0x00040000)
#define RF_CW2_EN_CALFREE_BIT                                                   (0x00040000)

#define RF_CW2_RG_TESTBUSA_EN_LSB                                               (17)
#define RF_CW2_RG_TESTBUSA_EN_WIDTH                                             (1)
#define RF_CW2_RG_TESTBUSA_EN_MASK                                              (0x00020000)
#define RF_CW2_RG_TESTBUSA_EN_BIT                                               (0x00020000)

#define RF_CW2_RG_TESTBUSB_EN_LSB                                               (16)
#define RF_CW2_RG_TESTBUSB_EN_WIDTH                                             (1)
#define RF_CW2_RG_TESTBUSB_EN_MASK                                              (0x00010000)
#define RF_CW2_RG_TESTBUSB_EN_BIT                                               (0x00010000)

#define RF_CW2_RG_TESTBUSC_EN_LSB                                               (15)
#define RF_CW2_RG_TESTBUSC_EN_WIDTH                                             (1)
#define RF_CW2_RG_TESTBUSC_EN_MASK                                              (0x00008000)
#define RF_CW2_RG_TESTBUSC_EN_BIT                                               (0x00008000)

#define RF_CW2_RG_TESTBUSD_EN_LSB                                               (14)
#define RF_CW2_RG_TESTBUSD_EN_WIDTH                                             (1)
#define RF_CW2_RG_TESTBUSD_EN_MASK                                              (0x00004000)
#define RF_CW2_RG_TESTBUSD_EN_BIT                                               (0x00004000)

#define RF_CW3_RG_TOP_REV_LSB                                                   (0)
#define RF_CW3_RG_TOP_REV_WIDTH                                                 (10)
#define RF_CW3_RG_TOP_REV_MASK                                                  (0x000003FF)

#define RF_CW4_RG_GSDLDO_VS_LSB                                                 (17)
#define RF_CW4_RG_GSDLDO_VS_WIDTH                                               (3)
#define RF_CW4_RG_GSDLDO_VS_MASK                                                (0x000E0000)

#define RF_CW4_RG_GSDLDO_MUX_LSB                                                (16)
#define RF_CW4_RG_GSDLDO_MUX_WIDTH                                              (1)
#define RF_CW4_RG_GSDLDO_MUX_MASK                                               (0x00010000)
#define RF_CW4_RG_GSDLDO_MUX_BIT                                                (0x00010000)

#define RF_CW5_ISO_MAN_LSB                                                      (19)
#define RF_CW5_ISO_MAN_WIDTH                                                    (1)
#define RF_CW5_ISO_MAN_MASK                                                     (0x00080000)
#define RF_CW5_ISO_MAN_BIT                                                      (0x00080000)

#define RF_CW5_ISO_STXDIG_MAN_LSB                                               (18)
#define RF_CW5_ISO_STXDIG_MAN_WIDTH                                             (1)
#define RF_CW5_ISO_STXDIG_MAN_MASK                                              (0x00040000)
#define RF_CW5_ISO_STXDIG_MAN_BIT                                               (0x00040000)

#define RF_CW5_ISO_SRXDIG_MAN_LSB                                               (17)
#define RF_CW5_ISO_SRXDIG_MAN_WIDTH                                             (1)
#define RF_CW5_ISO_SRXDIG_MAN_MASK                                              (0x00020000)
#define RF_CW5_ISO_SRXDIG_MAN_BIT                                               (0x00020000)

#define RF_CW5_ISO_TTGDIG_MAN_LSB                                               (16)
#define RF_CW5_ISO_TTGDIG_MAN_WIDTH                                             (1)
#define RF_CW5_ISO_TTGDIG_MAN_MASK                                              (0x00010000)
#define RF_CW5_ISO_TTGDIG_MAN_BIT                                               (0x00010000)

#define RF_CW5_POR_MAN_LSB                                                      (15)
#define RF_CW5_POR_MAN_WIDTH                                                    (1)
#define RF_CW5_POR_MAN_MASK                                                     (0x00008000)
#define RF_CW5_POR_MAN_BIT                                                      (0x00008000)

#define RF_CW5_POR_STXDIG_MAN_LSB                                               (14)
#define RF_CW5_POR_STXDIG_MAN_WIDTH                                             (1)
#define RF_CW5_POR_STXDIG_MAN_MASK                                              (0x00004000)
#define RF_CW5_POR_STXDIG_MAN_BIT                                               (0x00004000)

#define RF_CW5_POR_SRXDIG_MAN_LSB                                               (13)
#define RF_CW5_POR_SRXDIG_MAN_WIDTH                                             (1)
#define RF_CW5_POR_SRXDIG_MAN_MASK                                              (0x00002000)
#define RF_CW5_POR_SRXDIG_MAN_BIT                                               (0x00002000)

#define RF_CW5_POR_TTGDIG_MAN_LSB                                               (12)
#define RF_CW5_POR_TTGDIG_MAN_WIDTH                                             (1)
#define RF_CW5_POR_TTGDIG_MAN_MASK                                              (0x00001000)
#define RF_CW5_POR_TTGDIG_MAN_BIT                                               (0x00001000)

#define RF_CW5_POR_STXDIG_TIME_LSB                                              (10)
#define RF_CW5_POR_STXDIG_TIME_WIDTH                                            (2)
#define RF_CW5_POR_STXDIG_TIME_MASK                                             (0x00000C00)

#define RF_CW5_POR_SRXDIG_TIME_LSB                                              (8)
#define RF_CW5_POR_SRXDIG_TIME_WIDTH                                            (2)
#define RF_CW5_POR_SRXDIG_TIME_MASK                                             (0x00000300)

#define RF_CW5_POR_TTGDIG_TIME_LSB                                              (6)
#define RF_CW5_POR_TTGDIG_TIME_WIDTH                                            (2)
#define RF_CW5_POR_TTGDIG_TIME_MASK                                             (0x000000C0)

#define RF_CW6_TESTMODE_LSB                                                     (19)
#define RF_CW6_TESTMODE_WIDTH                                                   (1)
#define RF_CW6_TESTMODE_MASK                                                    (0x00080000)
#define RF_CW6_TESTMODE_BIT                                                     (0x00080000)

#define RF_CW6_TESTBUSA_LSB                                                     (17)
#define RF_CW6_TESTBUSA_WIDTH                                                   (2)
#define RF_CW6_TESTBUSA_MASK                                                    (0x00060000)

#define RF_CW6_TESTBUSB_LSB                                                     (15)
#define RF_CW6_TESTBUSB_WIDTH                                                   (2)
#define RF_CW6_TESTBUSB_MASK                                                    (0x00018000)

#define RF_CW6_TESTBUSC_LSB                                                     (13)
#define RF_CW6_TESTBUSC_WIDTH                                                   (2)
#define RF_CW6_TESTBUSC_MASK                                                    (0x00006000)

#define RF_CW6_TESTBUSD_LSB                                                     (11)
#define RF_CW6_TESTBUSD_WIDTH                                                   (2)
#define RF_CW6_TESTBUSD_MASK                                                    (0x00001800)

#define RF_CW6_READOUT_MUX_EN_LSB                                               (10)
#define RF_CW6_READOUT_MUX_EN_WIDTH                                             (1)
#define RF_CW6_READOUT_MUX_EN_MASK                                              (0x00000400)
#define RF_CW6_READOUT_MUX_EN_BIT                                               (0x00000400)

#define RF_CW6_WIRE3_READOUT_SEL_LSB                                            (7)
#define RF_CW6_WIRE3_READOUT_SEL_WIDTH                                          (3)
#define RF_CW6_WIRE3_READOUT_SEL_MASK                                           (0x00000380)

#define RF_CW6_RG_AUXOUT_EN_LSB                                                 (6)
#define RF_CW6_RG_AUXOUT_EN_WIDTH                                               (1)
#define RF_CW6_RG_AUXOUT_EN_MASK                                                (0x00000040)
#define RF_CW6_RG_AUXOUT_EN_BIT                                                 (0x00000040)

#define RF_CW6_AUXOUT_SEL_LSB                                                   (3)
#define RF_CW6_AUXOUT_SEL_WIDTH                                                 (3)
#define RF_CW6_AUXOUT_SEL_MASK                                                  (0x00000038)

#define RF_CW6_RG_AUX_TXDRV_LSB                                                 (1)
#define RF_CW6_RG_AUX_TXDRV_WIDTH                                               (2)
#define RF_CW6_RG_AUX_TXDRV_MASK                                                (0x00000006)

#define RF_CW7_CALR_MAN_LSB                                                     (19)
#define RF_CW7_CALR_MAN_WIDTH                                                   (1)
#define RF_CW7_CALR_MAN_MASK                                                    (0x00080000)
#define RF_CW7_CALR_MAN_BIT                                                     (0x00080000)

#define RF_CW7_CALR_ISO_M_LSB                                                   (18)
#define RF_CW7_CALR_ISO_M_WIDTH                                                 (1)
#define RF_CW7_CALR_ISO_M_MASK                                                  (0x00040000)
#define RF_CW7_CALR_ISO_M_BIT                                                   (0x00040000)

#define RF_CW7_CALR_EN_M_LSB                                                    (17)
#define RF_CW7_CALR_EN_M_WIDTH                                                  (1)
#define RF_CW7_CALR_EN_M_MASK                                                   (0x00020000)
#define RF_CW7_CALR_EN_M_BIT                                                    (0x00020000)

#define RF_CW7_CALR_CONST_TEMP_M_LSB                                            (12)
#define RF_CW7_CALR_CONST_TEMP_M_WIDTH                                          (5)
#define RF_CW7_CALR_CONST_TEMP_M_MASK                                           (0x0001F000)

#define RF_CW7_CALR_CONST_FINAL_THADC_MAN_LSB                                   (11)
#define RF_CW7_CALR_CONST_FINAL_THADC_MAN_WIDTH                                 (1)
#define RF_CW7_CALR_CONST_FINAL_THADC_MAN_MASK                                  (0x00000800)
#define RF_CW7_CALR_CONST_FINAL_THADC_MAN_BIT                                   (0x00000800)

#define RF_CW7_CALR_CONST_FINAL_THADC_M_LSB                                     (6)
#define RF_CW7_CALR_CONST_FINAL_THADC_M_WIDTH                                   (5)
#define RF_CW7_CALR_CONST_FINAL_THADC_M_MASK                                    (0x000007C0)

#define RF_CW7_CALR_CONST_FINAL_SRX_TCL_MAN_LSB                                 (5)
#define RF_CW7_CALR_CONST_FINAL_SRX_TCL_MAN_WIDTH                               (1)
#define RF_CW7_CALR_CONST_FINAL_SRX_TCL_MAN_MASK                                (0x00000020)
#define RF_CW7_CALR_CONST_FINAL_SRX_TCL_MAN_BIT                                 (0x00000020)

#define RF_CW7_CALR_CONST_FINAL_SRX_TCL_M_LSB                                   (0)
#define RF_CW7_CALR_CONST_FINAL_SRX_TCL_M_WIDTH                                 (5)
#define RF_CW7_CALR_CONST_FINAL_SRX_TCL_M_MASK                                  (0x0000001F)

#define RF_CW8_RCAL_START_TRG_LSB                                               (19)
#define RF_CW8_RCAL_START_TRG_WIDTH                                             (1)
#define RF_CW8_RCAL_START_TRG_MASK                                              (0x00080000)
#define RF_CW8_RCAL_START_TRG_BIT                                               (0x00080000)

#define RF_CW8_RCAL_DBG_EN_LSB                                                  (18)
#define RF_CW8_RCAL_DBG_EN_WIDTH                                                (1)
#define RF_CW8_RCAL_DBG_EN_MASK                                                 (0x00040000)
#define RF_CW8_RCAL_DBG_EN_BIT                                                  (0x00040000)

#define RF_CW8_RCAL_FINISH_TRG_LSB                                              (17)
#define RF_CW8_RCAL_FINISH_TRG_WIDTH                                            (1)
#define RF_CW8_RCAL_FINISH_TRG_MASK                                             (0x00020000)
#define RF_CW8_RCAL_FINISH_TRG_BIT                                              (0x00020000)

#define RF_CW8_RCAL_INV_LSB                                                     (16)
#define RF_CW8_RCAL_INV_WIDTH                                                   (1)
#define RF_CW8_RCAL_INV_MASK                                                    (0x00010000)
#define RF_CW8_RCAL_INV_BIT                                                     (0x00010000)

#define RF_CW8_RCAL_DLY_CMP_LSB                                                 (8)
#define RF_CW8_RCAL_DLY_CMP_WIDTH                                               (5)
#define RF_CW8_RCAL_DLY_CMP_MASK                                                (0x00001F00)

#define RF_CW8_RG_CALR_RSV_LSB                                                  (2)
#define RF_CW8_RG_CALR_RSV_WIDTH                                                (6)
#define RF_CW8_RG_CALR_RSV_MASK                                                 (0x000000FC)

#define RF_CW8_RG_CALR_VRINT_MUX_LSB                                            (1)
#define RF_CW8_RG_CALR_VRINT_MUX_WIDTH                                          (1)
#define RF_CW8_RG_CALR_VRINT_MUX_MASK                                           (0x00000002)
#define RF_CW8_RG_CALR_VRINT_MUX_BIT                                            (0x00000002)

#define RF_CW8_RG_CALR_RSEL_LSB                                                 (0)
#define RF_CW8_RG_CALR_RSEL_WIDTH                                               (1)
#define RF_CW8_RG_CALR_RSEL_MASK                                                (0x00000001)
#define RF_CW8_RG_CALR_RSEL_BIT                                                 (0x00000001)

#define RF_CW9_CALR_CONST_RO_LSB                                                (15)
#define RF_CW9_CALR_CONST_RO_WIDTH                                              (5)
#define RF_CW9_CALR_CONST_RO_MASK                                               (0x000F8000)

#define RF_CW9_CALR_TCL_R_RO_LSB                                                (10)
#define RF_CW9_CALR_TCL_R_RO_WIDTH                                              (5)
#define RF_CW9_CALR_TCL_R_RO_MASK                                               (0x00007C00)

#define RF_CW9_CALR_OFFSET_THADC_LSB                                            (4)
#define RF_CW9_CALR_OFFSET_THADC_WIDTH                                          (4)
#define RF_CW9_CALR_OFFSET_THADC_MASK                                           (0x000000F0)

#define RF_CW9_CALR_OFFSET_SRX_TCL_LSB                                          (0)
#define RF_CW9_CALR_OFFSET_SRX_TCL_WIDTH                                        (4)
#define RF_CW9_CALR_OFFSET_SRX_TCL_MASK                                         (0x0000000F)

#define RF_CW10_CALR_BG1_RO_LSB                                                 (15)
#define RF_CW10_CALR_BG1_RO_WIDTH                                               (5)
#define RF_CW10_CALR_BG1_RO_MASK                                                (0x000F8000)

#define RF_CW10_CALR_BG2_RO_LSB                                                 (10)
#define RF_CW10_CALR_BG2_RO_WIDTH                                               (5)
#define RF_CW10_CALR_BG2_RO_MASK                                                (0x00007C00)

#define RF_CW10_CALR_BG3_RO_LSB                                                 (5)
#define RF_CW10_CALR_BG3_RO_WIDTH                                               (5)
#define RF_CW10_CALR_BG3_RO_MASK                                                (0x000003E0)

#define RF_CW11_CALR_BG4_RO_LSB                                                 (15)
#define RF_CW11_CALR_BG4_RO_WIDTH                                               (5)
#define RF_CW11_CALR_BG4_RO_MASK                                                (0x000F8000)

#define RF_CW11_CALR_PTAT_RO_LSB                                                (10)
#define RF_CW11_CALR_PTAT_RO_WIDTH                                              (5)
#define RF_CW11_CALR_PTAT_RO_MASK                                               (0x00007C00)

#define RF_CW12_CALR_OFFSET_BG1_LSB                                             (16)
#define RF_CW12_CALR_OFFSET_BG1_WIDTH                                           (4)
#define RF_CW12_CALR_OFFSET_BG1_MASK                                            (0x000F0000)

#define RF_CW12_CALR_OFFSET_BG2_LSB                                             (12)
#define RF_CW12_CALR_OFFSET_BG2_WIDTH                                           (4)
#define RF_CW12_CALR_OFFSET_BG2_MASK                                            (0x0000F000)

#define RF_CW12_CALR_OFFSET_BG3_LSB                                             (8)
#define RF_CW12_CALR_OFFSET_BG3_WIDTH                                           (4)
#define RF_CW12_CALR_OFFSET_BG3_MASK                                            (0x00000F00)

#define RF_CW12_CALR_OFFSET_BG4_LSB                                             (4)
#define RF_CW12_CALR_OFFSET_BG4_WIDTH                                           (4)
#define RF_CW12_CALR_OFFSET_BG4_MASK                                            (0x000000F0)

#define RF_CW12_CALR_OFFSET_PTAT_LSB                                            (0)
#define RF_CW12_CALR_OFFSET_PTAT_WIDTH                                          (4)
#define RF_CW12_CALR_OFFSET_PTAT_MASK                                           (0x0000000F)

#define RF_CW13_RG_BG1_RSEL_VBGR_LSB                                            (16)
#define RF_CW13_RG_BG1_RSEL_VBGR_WIDTH                                          (4)
#define RF_CW13_RG_BG1_RSEL_VBGR_MASK                                           (0x000F0000)

#define RF_CW13_RG_BG2_RSEL_VBGR_LSB                                            (12)
#define RF_CW13_RG_BG2_RSEL_VBGR_WIDTH                                          (4)
#define RF_CW13_RG_BG2_RSEL_VBGR_MASK                                           (0x0000F000)

#define RF_CW13_RG_BG3_RSEL_VBGR_LSB                                            (8)
#define RF_CW13_RG_BG3_RSEL_VBGR_WIDTH                                          (4)
#define RF_CW13_RG_BG3_RSEL_VBGR_MASK                                           (0x00000F00)

#define RF_CW13_RG_BG4_RSEL_VBGR_LSB                                            (4)
#define RF_CW13_RG_BG4_RSEL_VBGR_WIDTH                                          (4)
#define RF_CW13_RG_BG4_RSEL_VBGR_MASK                                           (0x000000F0)

#define RF_CW14_RG_BG1_EN_LSB                                                   (19)
#define RF_CW14_RG_BG1_EN_WIDTH                                                 (1)
#define RF_CW14_RG_BG1_EN_MASK                                                  (0x00080000)
#define RF_CW14_RG_BG1_EN_BIT                                                   (0x00080000)

#define RF_CW14_RG_BG2_EN_LSB                                                   (18)
#define RF_CW14_RG_BG2_EN_WIDTH                                                 (1)
#define RF_CW14_RG_BG2_EN_MASK                                                  (0x00040000)
#define RF_CW14_RG_BG2_EN_BIT                                                   (0x00040000)

#define RF_CW14_RG_BG3_EN_LSB                                                   (17)
#define RF_CW14_RG_BG3_EN_WIDTH                                                 (1)
#define RF_CW14_RG_BG3_EN_MASK                                                  (0x00020000)
#define RF_CW14_RG_BG3_EN_BIT                                                   (0x00020000)

#define RF_CW14_RG_BG4_EN_LSB                                                   (16)
#define RF_CW14_RG_BG4_EN_WIDTH                                                 (1)
#define RF_CW14_RG_BG4_EN_MASK                                                  (0x00010000)
#define RF_CW14_RG_BG4_EN_BIT                                                   (0x00010000)

#define RF_CW14_RG_PTAT_EN_LSB                                                  (15)
#define RF_CW14_RG_PTAT_EN_WIDTH                                                (1)
#define RF_CW14_RG_PTAT_EN_MASK                                                 (0x00008000)
#define RF_CW14_RG_PTAT_EN_BIT                                                  (0x00008000)

#define RF_CW14_RG_BG_SHARE_RX_SRX1_LSB                                         (14)
#define RF_CW14_RG_BG_SHARE_RX_SRX1_WIDTH                                       (1)
#define RF_CW14_RG_BG_SHARE_RX_SRX1_MASK                                        (0x00004000)
#define RF_CW14_RG_BG_SHARE_RX_SRX1_BIT                                         (0x00004000)

#define RF_CW14_RG_TOPBIAS_TEST_MUX_SEL_LSB                                     (10)
#define RF_CW14_RG_TOPBIAS_TEST_MUX_SEL_WIDTH                                   (3)
#define RF_CW14_RG_TOPBIAS_TEST_MUX_SEL_MASK                                    (0x00001C00)

#define RF_CW14_RG_EN_BG1_TEST_IVBGR_LSB                                        (9)
#define RF_CW14_RG_EN_BG1_TEST_IVBGR_WIDTH                                      (1)
#define RF_CW14_RG_EN_BG1_TEST_IVBGR_MASK                                       (0x00000200)
#define RF_CW14_RG_EN_BG1_TEST_IVBGR_BIT                                        (0x00000200)

#define RF_CW14_RG_EN_BG2_TEST_IVBGR_LSB                                        (8)
#define RF_CW14_RG_EN_BG2_TEST_IVBGR_WIDTH                                      (1)
#define RF_CW14_RG_EN_BG2_TEST_IVBGR_MASK                                       (0x00000100)
#define RF_CW14_RG_EN_BG2_TEST_IVBGR_BIT                                        (0x00000100)

#define RF_CW14_RG_EN_BG3_TEST_IVBGR_LSB                                        (7)
#define RF_CW14_RG_EN_BG3_TEST_IVBGR_WIDTH                                      (1)
#define RF_CW14_RG_EN_BG3_TEST_IVBGR_MASK                                       (0x00000080)
#define RF_CW14_RG_EN_BG3_TEST_IVBGR_BIT                                        (0x00000080)

#define RF_CW14_RG_EN_BG4_TEST_IVBGR_LSB                                        (6)
#define RF_CW14_RG_EN_BG4_TEST_IVBGR_WIDTH                                      (1)
#define RF_CW14_RG_EN_BG4_TEST_IVBGR_MASK                                       (0x00000040)
#define RF_CW14_RG_EN_BG4_TEST_IVBGR_BIT                                        (0x00000040)

#define RF_CW14_RG_EN_BG1_TEST_ICONST_LSB                                       (5)
#define RF_CW14_RG_EN_BG1_TEST_ICONST_WIDTH                                     (1)
#define RF_CW14_RG_EN_BG1_TEST_ICONST_MASK                                      (0x00000020)
#define RF_CW14_RG_EN_BG1_TEST_ICONST_BIT                                       (0x00000020)

#define RF_CW14_RG_EN_BG2_TEST_ICONST_LSB                                       (4)
#define RF_CW14_RG_EN_BG2_TEST_ICONST_WIDTH                                     (1)
#define RF_CW14_RG_EN_BG2_TEST_ICONST_MASK                                      (0x00000010)
#define RF_CW14_RG_EN_BG2_TEST_ICONST_BIT                                       (0x00000010)

#define RF_CW14_RG_EN_BG3_TEST_ICONST_LSB                                       (3)
#define RF_CW14_RG_EN_BG3_TEST_ICONST_WIDTH                                     (1)
#define RF_CW14_RG_EN_BG3_TEST_ICONST_MASK                                      (0x00000008)
#define RF_CW14_RG_EN_BG3_TEST_ICONST_BIT                                       (0x00000008)

#define RF_CW14_RG_EN_BG4_TEST_ICONST_LSB                                       (2)
#define RF_CW14_RG_EN_BG4_TEST_ICONST_WIDTH                                     (1)
#define RF_CW14_RG_EN_BG4_TEST_ICONST_MASK                                      (0x00000004)
#define RF_CW14_RG_EN_BG4_TEST_ICONST_BIT                                       (0x00000004)

#define RF_CW14_RG_EN_PTAT_TEST_IPTAT_LSB                                       (1)
#define RF_CW14_RG_EN_PTAT_TEST_IPTAT_WIDTH                                     (1)
#define RF_CW14_RG_EN_PTAT_TEST_IPTAT_MASK                                      (0x00000002)
#define RF_CW14_RG_EN_PTAT_TEST_IPTAT_BIT                                       (0x00000002)

#define RF_CW14_RG_EN_PTAT_TEST_IPCST_LSB                                       (0)
#define RF_CW14_RG_EN_PTAT_TEST_IPCST_WIDTH                                     (1)
#define RF_CW14_RG_EN_PTAT_TEST_IPCST_MASK                                      (0x00000001)
#define RF_CW14_RG_EN_PTAT_TEST_IPCST_BIT                                       (0x00000001)

#define RF_CW15_RG_BIASGEN_TEST_MUX_SEL_LSB                                     (16)
#define RF_CW15_RG_BIASGEN_TEST_MUX_SEL_WIDTH                                   (3)
#define RF_CW15_RG_BIASGEN_TEST_MUX_SEL_MASK                                    (0x00070000)

#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_VBG_EN_LSB                                 (14)
#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_VBG_EN_WIDTH                               (1)
#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_VBG_EN_MASK                                (0x00004000)
#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_VBG_EN_BIT                                 (0x00004000)

#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_VBG_MODE_LSB                               (13)
#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_VBG_MODE_WIDTH                             (1)
#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_VBG_MODE_MASK                              (0x00002000)
#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_VBG_MODE_BIT                               (0x00002000)

#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_BUF_EN_LSB                                 (12)
#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_BUF_EN_WIDTH                               (1)
#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_BUF_EN_MASK                                (0x00001000)
#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_BUF_EN_BIT                                 (0x00001000)

#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_VBG_LSB                                    (8)
#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_VBG_WIDTH                                  (4)
#define RF_CW15_RG_TOPBIAS_LDO_DCCAL_VBG_MASK                                   (0x00000F00)

#define RF_CW15_RG_EN_BG1_LDOVBG_IVBGR_LSB                                      (7)
#define RF_CW15_RG_EN_BG1_LDOVBG_IVBGR_WIDTH                                    (1)
#define RF_CW15_RG_EN_BG1_LDOVBG_IVBGR_MASK                                     (0x00000080)
#define RF_CW15_RG_EN_BG1_LDOVBG_IVBGR_BIT                                      (0x00000080)

#define RF_CW15_RG_EN_BG2_LDOVBG_IVBGR_LSB                                      (6)
#define RF_CW15_RG_EN_BG2_LDOVBG_IVBGR_WIDTH                                    (1)
#define RF_CW15_RG_EN_BG2_LDOVBG_IVBGR_MASK                                     (0x00000040)
#define RF_CW15_RG_EN_BG2_LDOVBG_IVBGR_BIT                                      (0x00000040)

#define RF_CW15_RG_EN_BG3_LDOVBG_IVBGR_LSB                                      (5)
#define RF_CW15_RG_EN_BG3_LDOVBG_IVBGR_WIDTH                                    (1)
#define RF_CW15_RG_EN_BG3_LDOVBG_IVBGR_MASK                                     (0x00000020)
#define RF_CW15_RG_EN_BG3_LDOVBG_IVBGR_BIT                                      (0x00000020)

#define RF_CW15_RG_EN_BG4_LDOVBG_IVBGR_LSB                                      (4)
#define RF_CW15_RG_EN_BG4_LDOVBG_IVBGR_WIDTH                                    (1)
#define RF_CW15_RG_EN_BG4_LDOVBG_IVBGR_MASK                                     (0x00000010)
#define RF_CW15_RG_EN_BG4_LDOVBG_IVBGR_BIT                                      (0x00000010)

#define RF_CW16_TOP_BIAS_MAN_LSB                                                (19)
#define RF_CW16_TOP_BIAS_MAN_WIDTH                                              (1)
#define RF_CW16_TOP_BIAS_MAN_MASK                                               (0x00080000)
#define RF_CW16_TOP_BIAS_MAN_BIT                                                (0x00080000)

#define RF_CW16_RX_BIAS_RXBIAS_BG_M_LSB                                         (14)
#define RF_CW16_RX_BIAS_RXBIAS_BG_M_WIDTH                                       (1)
#define RF_CW16_RX_BIAS_RXBIAS_BG_M_MASK                                        (0x00004000)
#define RF_CW16_RX_BIAS_RXBIAS_BG_M_BIT                                         (0x00004000)

#define RF_CW16_RXIF1_BG_M_LSB                                                  (13)
#define RF_CW16_RXIF1_BG_M_WIDTH                                                (1)
#define RF_CW16_RXIF1_BG_M_MASK                                                 (0x00002000)
#define RF_CW16_RXIF1_BG_M_BIT                                                  (0x00002000)

#define RF_CW16_RXIF2_BG_M_LSB                                                  (12)
#define RF_CW16_RXIF2_BG_M_WIDTH                                                (1)
#define RF_CW16_RXIF2_BG_M_MASK                                                 (0x00001000)
#define RF_CW16_RXIF2_BG_M_BIT                                                  (0x00001000)

#define RF_CW16_RXD_BIAS_RXBIAS_BG_M_LSB                                        (10)
#define RF_CW16_RXD_BIAS_RXBIAS_BG_M_WIDTH                                      (1)
#define RF_CW16_RXD_BIAS_RXBIAS_BG_M_MASK                                       (0x00000400)
#define RF_CW16_RXD_BIAS_RXBIAS_BG_M_BIT                                        (0x00000400)

#define RF_CW16_RXDIF1_BG_M_LSB                                                 (9)
#define RF_CW16_RXDIF1_BG_M_WIDTH                                               (1)
#define RF_CW16_RXDIF1_BG_M_MASK                                                (0x00000200)
#define RF_CW16_RXDIF1_BG_M_BIT                                                 (0x00000200)

#define RF_CW16_RXDIF2_BG_M_LSB                                                 (8)
#define RF_CW16_RXDIF2_BG_M_WIDTH                                               (1)
#define RF_CW16_RXDIF2_BG_M_MASK                                                (0x00000100)
#define RF_CW16_RXDIF2_BG_M_BIT                                                 (0x00000100)

#define RF_CW16_RXRXD_LDO_LNA_CORE_BG_M_LSB                                     (6)
#define RF_CW16_RXRXD_LDO_LNA_CORE_BG_M_WIDTH                                   (1)
#define RF_CW16_RXRXD_LDO_LNA_CORE_BG_M_MASK                                    (0x00000040)
#define RF_CW16_RXRXD_LDO_LNA_CORE_BG_M_BIT                                     (0x00000040)

#define RF_CW16_RXRXD_LDO_LO_CORE_BG_M_LSB                                      (5)
#define RF_CW16_RXRXD_LDO_LO_CORE_BG_M_WIDTH                                    (1)
#define RF_CW16_RXRXD_LDO_LO_CORE_BG_M_MASK                                     (0x00000020)
#define RF_CW16_RXRXD_LDO_LO_CORE_BG_M_BIT                                      (0x00000020)

#define RF_CW16_RXRXD_LDO_BB_CORE_BG_M_LSB                                      (4)
#define RF_CW16_RXRXD_LDO_BB_CORE_BG_M_WIDTH                                    (1)
#define RF_CW16_RXRXD_LDO_BB_CORE_BG_M_MASK                                     (0x00000010)
#define RF_CW16_RXRXD_LDO_BB_CORE_BG_M_BIT                                      (0x00000010)

#define RF_CW17_EN_TTG_LDO_HF_BG_M_LSB                                          (19)
#define RF_CW17_EN_TTG_LDO_HF_BG_M_WIDTH                                        (1)
#define RF_CW17_EN_TTG_LDO_HF_BG_M_MASK                                         (0x00080000)
#define RF_CW17_EN_TTG_LDO_HF_BG_M_BIT                                          (0x00080000)

#define RF_CW17_EN_TTG_LDO_LF_BG_M_LSB                                          (18)
#define RF_CW17_EN_TTG_LDO_LF_BG_M_WIDTH                                        (1)
#define RF_CW17_EN_TTG_LDO_LF_BG_M_MASK                                         (0x00040000)
#define RF_CW17_EN_TTG_LDO_LF_BG_M_BIT                                          (0x00040000)

#define RF_CW17_EN_CALR_BG_M_LSB                                                (16)
#define RF_CW17_EN_CALR_BG_M_WIDTH                                              (1)
#define RF_CW17_EN_CALR_BG_M_MASK                                               (0x00010000)
#define RF_CW17_EN_CALR_BG_M_BIT                                                (0x00010000)

#define RF_CW17_EN_SRX1_BG_M_LSB                                                (15)
#define RF_CW17_EN_SRX1_BG_M_WIDTH                                              (1)
#define RF_CW17_EN_SRX1_BG_M_MASK                                               (0x00008000)
#define RF_CW17_EN_SRX1_BG_M_BIT                                                (0x00008000)

#define RF_CW17_EN_SRX1_CP_BG_M_LSB                                             (14)
#define RF_CW17_EN_SRX1_CP_BG_M_WIDTH                                           (1)
#define RF_CW17_EN_SRX1_CP_BG_M_MASK                                            (0x00004000)
#define RF_CW17_EN_SRX1_CP_BG_M_BIT                                             (0x00004000)

#define RF_CW17_EN_SRX1_VCOBUF_BG_M_LSB                                         (13)
#define RF_CW17_EN_SRX1_VCOBUF_BG_M_WIDTH                                       (1)
#define RF_CW17_EN_SRX1_VCOBUF_BG_M_MASK                                        (0x00002000)
#define RF_CW17_EN_SRX1_VCOBUF_BG_M_BIT                                         (0x00002000)

#define RF_CW17_EN_SRX1_LDO_VCO_BG_M_LSB                                        (12)
#define RF_CW17_EN_SRX1_LDO_VCO_BG_M_WIDTH                                      (1)
#define RF_CW17_EN_SRX1_LDO_VCO_BG_M_MASK                                       (0x00001000)
#define RF_CW17_EN_SRX1_LDO_VCO_BG_M_BIT                                        (0x00001000)

#define RF_CW17_EN_SRX1_LDO_PFD_BG_M_LSB                                        (11)
#define RF_CW17_EN_SRX1_LDO_PFD_BG_M_WIDTH                                      (1)
#define RF_CW17_EN_SRX1_LDO_PFD_BG_M_MASK                                       (0x00000800)
#define RF_CW17_EN_SRX1_LDO_PFD_BG_M_BIT                                        (0x00000800)

#define RF_CW17_EN_SRX1_LDO_MMD_BG_M_LSB                                        (10)
#define RF_CW17_EN_SRX1_LDO_MMD_BG_M_WIDTH                                      (1)
#define RF_CW17_EN_SRX1_LDO_MMD_BG_M_MASK                                       (0x00000400)
#define RF_CW17_EN_SRX1_LDO_MMD_BG_M_BIT                                        (0x00000400)

#define RF_CW17_EN_SRX2_BG_M_LSB                                                (7)
#define RF_CW17_EN_SRX2_BG_M_WIDTH                                              (1)
#define RF_CW17_EN_SRX2_BG_M_MASK                                               (0x00000080)
#define RF_CW17_EN_SRX2_BG_M_BIT                                                (0x00000080)

#define RF_CW17_EN_SRX2_CP_BG_M_LSB                                             (6)
#define RF_CW17_EN_SRX2_CP_BG_M_WIDTH                                           (1)
#define RF_CW17_EN_SRX2_CP_BG_M_MASK                                            (0x00000040)
#define RF_CW17_EN_SRX2_CP_BG_M_BIT                                             (0x00000040)

#define RF_CW17_EN_SRX2_VCOBUF_BG_M_LSB                                         (5)
#define RF_CW17_EN_SRX2_VCOBUF_BG_M_WIDTH                                       (1)
#define RF_CW17_EN_SRX2_VCOBUF_BG_M_MASK                                        (0x00000020)
#define RF_CW17_EN_SRX2_VCOBUF_BG_M_BIT                                         (0x00000020)

#define RF_CW17_EN_SRX2_LDO_VCO_BG_M_LSB                                        (4)
#define RF_CW17_EN_SRX2_LDO_VCO_BG_M_WIDTH                                      (1)
#define RF_CW17_EN_SRX2_LDO_VCO_BG_M_MASK                                       (0x00000010)
#define RF_CW17_EN_SRX2_LDO_VCO_BG_M_BIT                                        (0x00000010)

#define RF_CW17_EN_SRX2_LDO_PFD_BG_M_LSB                                        (3)
#define RF_CW17_EN_SRX2_LDO_PFD_BG_M_WIDTH                                      (1)
#define RF_CW17_EN_SRX2_LDO_PFD_BG_M_MASK                                       (0x00000008)
#define RF_CW17_EN_SRX2_LDO_PFD_BG_M_BIT                                        (0x00000008)

#define RF_CW17_EN_SRX2_LDO_MMD_BG_M_LSB                                        (2)
#define RF_CW17_EN_SRX2_LDO_MMD_BG_M_WIDTH                                      (1)
#define RF_CW17_EN_SRX2_LDO_MMD_BG_M_MASK                                       (0x00000004)
#define RF_CW17_EN_SRX2_LDO_MMD_BG_M_BIT                                        (0x00000004)

#define RF_CW18_TX_MAIN_IVBGR_M_LSB                                             (19)
#define RF_CW18_TX_MAIN_IVBGR_M_WIDTH                                           (1)
#define RF_CW18_TX_MAIN_IVBGR_M_MASK                                            (0x00080000)
#define RF_CW18_TX_MAIN_IVBGR_M_BIT                                             (0x00080000)

#define RF_CW18_TX_MAIN_IPTAT_M_LSB                                             (18)
#define RF_CW18_TX_MAIN_IPTAT_M_WIDTH                                           (1)
#define RF_CW18_TX_MAIN_IPTAT_M_MASK                                            (0x00040000)
#define RF_CW18_TX_MAIN_IPTAT_M_BIT                                             (0x00040000)

#define RF_CW18_TX_RFFE_DRV_ICONST_M_LSB                                        (17)
#define RF_CW18_TX_RFFE_DRV_ICONST_M_WIDTH                                      (1)
#define RF_CW18_TX_RFFE_DRV_ICONST_M_MASK                                       (0x00020000)
#define RF_CW18_TX_RFFE_DRV_ICONST_M_BIT                                        (0x00020000)

#define RF_CW18_TX_RFFE_DRV_IPCST_M_LSB                                         (16)
#define RF_CW18_TX_RFFE_DRV_IPCST_M_WIDTH                                       (1)
#define RF_CW18_TX_RFFE_DRV_IPCST_M_MASK                                        (0x00010000)
#define RF_CW18_TX_RFFE_DRV_IPCST_M_BIT                                         (0x00010000)

#define RF_CW18_TX_LO_FE_FDD_ICONST_M_LSB                                       (15)
#define RF_CW18_TX_LO_FE_FDD_ICONST_M_WIDTH                                     (1)
#define RF_CW18_TX_LO_FE_FDD_ICONST_M_MASK                                      (0x00008000)
#define RF_CW18_TX_LO_FE_FDD_ICONST_M_BIT                                       (0x00008000)

#define RF_CW18_TX_LO_FE_FDD_IPCST_M_LSB                                        (14)
#define RF_CW18_TX_LO_FE_FDD_IPCST_M_WIDTH                                      (1)
#define RF_CW18_TX_LO_FE_FDD_IPCST_M_MASK                                       (0x00004000)
#define RF_CW18_TX_LO_FE_FDD_IPCST_M_BIT                                        (0x00004000)

#define RF_CW18_TX_LO_FE_TDD_ICONST_M_LSB                                       (13)
#define RF_CW18_TX_LO_FE_TDD_ICONST_M_WIDTH                                     (1)
#define RF_CW18_TX_LO_FE_TDD_ICONST_M_MASK                                      (0x00002000)
#define RF_CW18_TX_LO_FE_TDD_ICONST_M_BIT                                       (0x00002000)

#define RF_CW18_TX_LO_FE_TDD_IPCST_M_LSB                                        (12)
#define RF_CW18_TX_LO_FE_TDD_IPCST_M_WIDTH                                      (1)
#define RF_CW18_TX_LO_FE_TDD_IPCST_M_MASK                                       (0x00001000)
#define RF_CW18_TX_LO_FE_TDD_IPCST_M_BIT                                        (0x00001000)

#define RF_CW18_TX_DET_IVBGR_M_LSB                                              (11)
#define RF_CW18_TX_DET_IVBGR_M_WIDTH                                            (1)
#define RF_CW18_TX_DET_IVBGR_M_MASK                                             (0x00000800)
#define RF_CW18_TX_DET_IVBGR_M_BIT                                              (0x00000800)

#define RF_CW18_TX_RFFE_LDO11_IB_M_LSB                                          (10)
#define RF_CW18_TX_RFFE_LDO11_IB_M_WIDTH                                        (1)
#define RF_CW18_TX_RFFE_LDO11_IB_M_MASK                                         (0x00000400)
#define RF_CW18_TX_RFFE_LDO11_IB_M_BIT                                          (0x00000400)

#define RF_CW18_TX_RFFE_LDO15_IB_M_LSB                                          (9)
#define RF_CW18_TX_RFFE_LDO15_IB_M_WIDTH                                        (1)
#define RF_CW18_TX_RFFE_LDO15_IB_M_MASK                                         (0x00000200)
#define RF_CW18_TX_RFFE_LDO15_IB_M_BIT                                          (0x00000200)

#define RF_CW18_TX_LO_LDO11_IB_M_LSB                                            (8)
#define RF_CW18_TX_LO_LDO11_IB_M_WIDTH                                          (1)
#define RF_CW18_TX_LO_LDO11_IB_M_MASK                                           (0x00000100)
#define RF_CW18_TX_LO_LDO11_IB_M_BIT                                            (0x00000100)

#define RF_CW18_TX_LO_LDO15_IB_M_LSB                                            (7)
#define RF_CW18_TX_LO_LDO15_IB_M_WIDTH                                          (1)
#define RF_CW18_TX_LO_LDO15_IB_M_MASK                                           (0x00000080)
#define RF_CW18_TX_LO_LDO15_IB_M_BIT                                            (0x00000080)

#define RF_CW18_TX_ABB_LDO15_IB_M_LSB                                           (6)
#define RF_CW18_TX_ABB_LDO15_IB_M_WIDTH                                         (1)
#define RF_CW18_TX_ABB_LDO15_IB_M_MASK                                          (0x00000040)
#define RF_CW18_TX_ABB_LDO15_IB_M_BIT                                           (0x00000040)

#define RF_CW18_TX_DET_LDO15_IB_M_LSB                                           (5)
#define RF_CW18_TX_DET_LDO15_IB_M_WIDTH                                         (1)
#define RF_CW18_TX_DET_LDO15_IB_M_MASK                                          (0x00000020)
#define RF_CW18_TX_DET_LDO15_IB_M_BIT                                           (0x00000020)

#define RF_CW18_EN_STX_DDLDO_BG_M_LSB                                           (3)
#define RF_CW18_EN_STX_DDLDO_BG_M_WIDTH                                         (1)
#define RF_CW18_EN_STX_DDLDO_BG_M_MASK                                          (0x00000008)
#define RF_CW18_EN_STX_DDLDO_BG_M_BIT                                           (0x00000008)

#define RF_CW18_EN_TS_BG_M_LSB                                                  (1)
#define RF_CW18_EN_TS_BG_M_WIDTH                                                (1)
#define RF_CW18_EN_TS_BG_M_MASK                                                 (0x00000002)
#define RF_CW18_EN_TS_BG_M_BIT                                                  (0x00000002)

#define RF_CW18_EN_TS_LDO_BG_M_LSB                                              (0)
#define RF_CW18_EN_TS_LDO_BG_M_WIDTH                                            (1)
#define RF_CW18_EN_TS_LDO_BG_M_MASK                                             (0x00000001)
#define RF_CW18_EN_TS_LDO_BG_M_BIT                                              (0x00000001)

#define RF_CW19_RG_BG1_CALR_WRITEBACK_LSB                                       (15)
#define RF_CW19_RG_BG1_CALR_WRITEBACK_WIDTH                                     (5)
#define RF_CW19_RG_BG1_CALR_WRITEBACK_MASK                                      (0x000F8000)

#define RF_CW19_RG_BG2_CALR_WRITEBACK_LSB                                       (10)
#define RF_CW19_RG_BG2_CALR_WRITEBACK_WIDTH                                     (5)
#define RF_CW19_RG_BG2_CALR_WRITEBACK_MASK                                      (0x00007C00)

#define RF_CW19_RG_BG3_CALR_WRITEBACK_LSB                                       (5)
#define RF_CW19_RG_BG3_CALR_WRITEBACK_WIDTH                                     (5)
#define RF_CW19_RG_BG3_CALR_WRITEBACK_MASK                                      (0x000003E0)

#define RF_CW20_RG_BG4_CALR_WRITEBACK_LSB                                       (15)
#define RF_CW20_RG_BG4_CALR_WRITEBACK_WIDTH                                     (5)
#define RF_CW20_RG_BG4_CALR_WRITEBACK_MASK                                      (0x000F8000)

#define RF_CW20_RG_PTAT_CALR_WRITEBACK_LSB                                      (10)
#define RF_CW20_RG_PTAT_CALR_WRITEBACK_WIDTH                                    (5)
#define RF_CW20_RG_PTAT_CALR_WRITEBACK_MASK                                     (0x00007C00)

#define RF_CW21_GS_TX_PWR_AWARE_EN_LSB                                          (19)
#define RF_CW21_GS_TX_PWR_AWARE_EN_WIDTH                                        (1)
#define RF_CW21_GS_TX_PWR_AWARE_EN_MASK                                         (0x00080000)
#define RF_CW21_GS_TX_PWR_AWARE_EN_BIT                                          (0x00080000)

#define RF_CW21_GS_INI_PWR_AWARE_EN_LSB                                         (18)
#define RF_CW21_GS_INI_PWR_AWARE_EN_WIDTH                                       (1)
#define RF_CW21_GS_INI_PWR_AWARE_EN_MASK                                        (0x00040000)
#define RF_CW21_GS_INI_PWR_AWARE_EN_BIT                                         (0x00040000)

#define RF_CW21_GS_RX_PWR_AWARE_EN_LSB                                          (17)
#define RF_CW21_GS_RX_PWR_AWARE_EN_WIDTH                                        (1)
#define RF_CW21_GS_RX_PWR_AWARE_EN_MASK                                         (0x00020000)
#define RF_CW21_GS_RX_PWR_AWARE_EN_BIT                                          (0x00020000)

#define RF_CW21_GS_TRX_PWR_AWARE_EN_LSB                                         (16)
#define RF_CW21_GS_TRX_PWR_AWARE_EN_WIDTH                                       (1)
#define RF_CW21_GS_TRX_PWR_AWARE_EN_MASK                                        (0x00010000)
#define RF_CW21_GS_TRX_PWR_AWARE_EN_BIT                                         (0x00010000)

#define RF_CW21_GS_RCAL_PWR_AWARE_EN_LSB                                        (15)
#define RF_CW21_GS_RCAL_PWR_AWARE_EN_WIDTH                                      (1)
#define RF_CW21_GS_RCAL_PWR_AWARE_EN_MASK                                       (0x00008000)
#define RF_CW21_GS_RCAL_PWR_AWARE_EN_BIT                                        (0x00008000)

#define RF_CW21_GS_FM_PWR_AWARE_EN_LSB                                          (14)
#define RF_CW21_GS_FM_PWR_AWARE_EN_WIDTH                                        (1)
#define RF_CW21_GS_FM_PWR_AWARE_EN_MASK                                         (0x00004000)
#define RF_CW21_GS_FM_PWR_AWARE_EN_BIT                                          (0x00004000)

#define RF_CW21_GS_RCCAL_PWR_AWARE_EN_LSB                                       (13)
#define RF_CW21_GS_RCCAL_PWR_AWARE_EN_WIDTH                                     (1)
#define RF_CW21_GS_RCCAL_PWR_AWARE_EN_MASK                                      (0x00002000)
#define RF_CW21_GS_RCCAL_PWR_AWARE_EN_BIT                                       (0x00002000)

#define RF_CW21_GS_THADC_PWR_AWARE_EN_LSB                                       (12)
#define RF_CW21_GS_THADC_PWR_AWARE_EN_WIDTH                                     (1)
#define RF_CW21_GS_THADC_PWR_AWARE_EN_MASK                                      (0x00001000)
#define RF_CW21_GS_THADC_PWR_AWARE_EN_BIT                                       (0x00001000)

#define RF_CW21_GS_KBAND_PWR_AWARE_EN_LSB                                       (11)
#define RF_CW21_GS_KBAND_PWR_AWARE_EN_WIDTH                                     (1)
#define RF_CW21_GS_KBAND_PWR_AWARE_EN_MASK                                      (0x00000800)
#define RF_CW21_GS_KBAND_PWR_AWARE_EN_BIT                                       (0x00000800)

#define RF_CW21_GS_RX1_TPD_PWR_AWARE_EN_LSB                                     (8)
#define RF_CW21_GS_RX1_TPD_PWR_AWARE_EN_WIDTH                                   (1)
#define RF_CW21_GS_RX1_TPD_PWR_AWARE_EN_MASK                                    (0x00000100)
#define RF_CW21_GS_RX1_TPD_PWR_AWARE_EN_BIT                                     (0x00000100)

#define RF_CW21_GS_RXD1_TPD_PWR_AWARE_EN_LSB                                    (7)
#define RF_CW21_GS_RXD1_TPD_PWR_AWARE_EN_WIDTH                                  (1)
#define RF_CW21_GS_RXD1_TPD_PWR_AWARE_EN_MASK                                   (0x00000080)
#define RF_CW21_GS_RXD1_TPD_PWR_AWARE_EN_BIT                                    (0x00000080)

#define RF_CW21_GS_RX2_TPD_PWR_AWARE_EN_LSB                                     (6)
#define RF_CW21_GS_RX2_TPD_PWR_AWARE_EN_WIDTH                                   (1)
#define RF_CW21_GS_RX2_TPD_PWR_AWARE_EN_MASK                                    (0x00000040)
#define RF_CW21_GS_RX2_TPD_PWR_AWARE_EN_BIT                                     (0x00000040)

#define RF_CW21_GS_RXD2_TPD_PWR_AWARE_EN_LSB                                    (5)
#define RF_CW21_GS_RXD2_TPD_PWR_AWARE_EN_WIDTH                                  (1)
#define RF_CW21_GS_RXD2_TPD_PWR_AWARE_EN_MASK                                   (0x00000020)
#define RF_CW21_GS_RXD2_TPD_PWR_AWARE_EN_BIT                                    (0x00000020)

#define RF_CW21_GS_RXDUTYC_PWR_AWARE_EN_LSB                                     (4)
#define RF_CW21_GS_RXDUTYC_PWR_AWARE_EN_WIDTH                                   (1)
#define RF_CW21_GS_RXDUTYC_PWR_AWARE_EN_MASK                                    (0x00000010)
#define RF_CW21_GS_RXDUTYC_PWR_AWARE_EN_BIT                                     (0x00000010)

#define RF_CW22_GS_XO_CAL_EN_MAN_LSB                                            (19)
#define RF_CW22_GS_XO_CAL_EN_MAN_WIDTH                                          (1)
#define RF_CW22_GS_XO_CAL_EN_MAN_MASK                                           (0x00080000)
#define RF_CW22_GS_XO_CAL_EN_MAN_BIT                                            (0x00080000)

#define RF_CW22_GS_XO_CAL_EN_M_LSB                                              (18)
#define RF_CW22_GS_XO_CAL_EN_M_WIDTH                                            (1)
#define RF_CW22_GS_XO_CAL_EN_M_MASK                                             (0x00040000)
#define RF_CW22_GS_XO_CAL_EN_M_BIT                                              (0x00040000)

#define RF_CW22_GS_XO_CALR_CK_EN_M_LSB                                          (17)
#define RF_CW22_GS_XO_CALR_CK_EN_M_WIDTH                                        (1)
#define RF_CW22_GS_XO_CALR_CK_EN_M_MASK                                         (0x00020000)
#define RF_CW22_GS_XO_CALR_CK_EN_M_BIT                                          (0x00020000)

#define RF_CW22_GS_XO_SRX1_EN_MAN_LSB                                           (16)
#define RF_CW22_GS_XO_SRX1_EN_MAN_WIDTH                                         (1)
#define RF_CW22_GS_XO_SRX1_EN_MAN_MASK                                          (0x00010000)
#define RF_CW22_GS_XO_SRX1_EN_MAN_BIT                                           (0x00010000)

#define RF_CW22_GS_XO_SRX1_EN_M_LSB                                             (15)
#define RF_CW22_GS_XO_SRX1_EN_M_WIDTH                                           (1)
#define RF_CW22_GS_XO_SRX1_EN_M_MASK                                            (0x00008000)
#define RF_CW22_GS_XO_SRX1_EN_M_BIT                                             (0x00008000)

#define RF_CW22_GS_XO_SRX1R_CK_EN_M_LSB                                         (14)
#define RF_CW22_GS_XO_SRX1R_CK_EN_M_WIDTH                                       (1)
#define RF_CW22_GS_XO_SRX1R_CK_EN_M_MASK                                        (0x00004000)
#define RF_CW22_GS_XO_SRX1R_CK_EN_M_BIT                                         (0x00004000)

#define RF_CW22_GS_XO_SRX2_EN_MAN_LSB                                           (13)
#define RF_CW22_GS_XO_SRX2_EN_MAN_WIDTH                                         (1)
#define RF_CW22_GS_XO_SRX2_EN_MAN_MASK                                          (0x00002000)
#define RF_CW22_GS_XO_SRX2_EN_MAN_BIT                                           (0x00002000)

#define RF_CW22_GS_XO_SRX2_EN_M_LSB                                             (12)
#define RF_CW22_GS_XO_SRX2_EN_M_WIDTH                                           (1)
#define RF_CW22_GS_XO_SRX2_EN_M_MASK                                            (0x00001000)
#define RF_CW22_GS_XO_SRX2_EN_M_BIT                                             (0x00001000)

#define RF_CW22_GS_XO_SRX2R_CK_EN_M_LSB                                         (11)
#define RF_CW22_GS_XO_SRX2R_CK_EN_M_WIDTH                                       (1)
#define RF_CW22_GS_XO_SRX2R_CK_EN_M_MASK                                        (0x00000800)
#define RF_CW22_GS_XO_SRX2R_CK_EN_M_BIT                                         (0x00000800)

#define RF_CW22_GS_XO_TTG_EN_MAN_LSB                                            (10)
#define RF_CW22_GS_XO_TTG_EN_MAN_WIDTH                                          (1)
#define RF_CW22_GS_XO_TTG_EN_MAN_MASK                                           (0x00000400)
#define RF_CW22_GS_XO_TTG_EN_MAN_BIT                                            (0x00000400)

#define RF_CW22_GS_XO_TTG_EN_M_LSB                                              (9)
#define RF_CW22_GS_XO_TTG_EN_M_WIDTH                                            (1)
#define RF_CW22_GS_XO_TTG_EN_M_MASK                                             (0x00000200)
#define RF_CW22_GS_XO_TTG_EN_M_BIT                                              (0x00000200)

#define RF_CW22_GS_XO_TTGR_CK_EN_M_LSB                                          (8)
#define RF_CW22_GS_XO_TTGR_CK_EN_M_WIDTH                                        (1)
#define RF_CW22_GS_XO_TTGR_CK_EN_M_MASK                                         (0x00000100)
#define RF_CW22_GS_XO_TTGR_CK_EN_M_BIT                                          (0x00000100)

#define RF_CW22_GS_XO_TSOR_EN_MAN_LSB                                           (7)
#define RF_CW22_GS_XO_TSOR_EN_MAN_WIDTH                                         (1)
#define RF_CW22_GS_XO_TSOR_EN_MAN_MASK                                          (0x00000080)
#define RF_CW22_GS_XO_TSOR_EN_MAN_BIT                                           (0x00000080)

#define RF_CW22_GS_XO_TSOR_EN_M_LSB                                             (6)
#define RF_CW22_GS_XO_TSOR_EN_M_WIDTH                                           (1)
#define RF_CW22_GS_XO_TSOR_EN_M_MASK                                            (0x00000040)
#define RF_CW22_GS_XO_TSOR_EN_M_BIT                                             (0x00000040)

#define RF_CW22_GS_XO_TSORR_CK_EN_M_LSB                                         (5)
#define RF_CW22_GS_XO_TSORR_CK_EN_M_WIDTH                                       (1)
#define RF_CW22_GS_XO_TSORR_CK_EN_M_MASK                                        (0x00000020)
#define RF_CW22_GS_XO_TSORR_CK_EN_M_BIT                                         (0x00000020)

#define RF_CW23_GS_AUXOUT_SEL_LSB                                               (0)
#define RF_CW23_GS_AUXOUT_SEL_WIDTH                                             (8)
#define RF_CW23_GS_AUXOUT_SEL_MASK                                              (0x000000FF)

#define RF_CW24_XO_EXTBUF1_MAN_LSB                                              (19)
#define RF_CW24_XO_EXTBUF1_MAN_WIDTH                                            (1)
#define RF_CW24_XO_EXTBUF1_MAN_MASK                                             (0x00080000)
#define RF_CW24_XO_EXTBUF1_MAN_BIT                                              (0x00080000)

#define RF_CW24_XO_EXTBUF1_EN_M_LSB                                             (18)
#define RF_CW24_XO_EXTBUF1_EN_M_WIDTH                                           (1)
#define RF_CW24_XO_EXTBUF1_EN_M_MASK                                            (0x00040000)
#define RF_CW24_XO_EXTBUF1_EN_M_BIT                                             (0x00040000)

#define RF_CW24_XO_EXTBUF2_MAN_LSB                                              (17)
#define RF_CW24_XO_EXTBUF2_MAN_WIDTH                                            (1)
#define RF_CW24_XO_EXTBUF2_MAN_MASK                                             (0x00020000)
#define RF_CW24_XO_EXTBUF2_MAN_BIT                                              (0x00020000)

#define RF_CW24_XO_EXTBUF2_EN_M_LSB                                             (16)
#define RF_CW24_XO_EXTBUF2_EN_M_WIDTH                                           (1)
#define RF_CW24_XO_EXTBUF2_EN_M_MASK                                            (0x00010000)
#define RF_CW24_XO_EXTBUF2_EN_M_BIT                                             (0x00010000)

#define RF_CW24_XO_EXTBUF3_MAN_LSB                                              (15)
#define RF_CW24_XO_EXTBUF3_MAN_WIDTH                                            (1)
#define RF_CW24_XO_EXTBUF3_MAN_MASK                                             (0x00008000)
#define RF_CW24_XO_EXTBUF3_MAN_BIT                                              (0x00008000)

#define RF_CW24_XO_EXTBUF3_EN_M_LSB                                             (14)
#define RF_CW24_XO_EXTBUF3_EN_M_WIDTH                                           (1)
#define RF_CW24_XO_EXTBUF3_EN_M_MASK                                            (0x00004000)
#define RF_CW24_XO_EXTBUF3_EN_M_BIT                                             (0x00004000)

#define RF_CW24_XO_EXTBUF4_MAN_LSB                                              (13)
#define RF_CW24_XO_EXTBUF4_MAN_WIDTH                                            (1)
#define RF_CW24_XO_EXTBUF4_MAN_MASK                                             (0x00002000)
#define RF_CW24_XO_EXTBUF4_MAN_BIT                                              (0x00002000)

#define RF_CW24_XO_EXTBUF4_EN_M_LSB                                             (12)
#define RF_CW24_XO_EXTBUF4_EN_M_WIDTH                                           (1)
#define RF_CW24_XO_EXTBUF4_EN_M_MASK                                            (0x00001000)
#define RF_CW24_XO_EXTBUF4_EN_M_BIT                                             (0x00001000)

#define RF_CW24_XO_EXTBUF1_CKG_MAN_LSB                                          (11)
#define RF_CW24_XO_EXTBUF1_CKG_MAN_WIDTH                                        (1)
#define RF_CW24_XO_EXTBUF1_CKG_MAN_MASK                                         (0x00000800)
#define RF_CW24_XO_EXTBUF1_CKG_MAN_BIT                                          (0x00000800)

#define RF_CW24_XO_EXTBUF1_CKG_EN_M_LSB                                         (10)
#define RF_CW24_XO_EXTBUF1_CKG_EN_M_WIDTH                                       (1)
#define RF_CW24_XO_EXTBUF1_CKG_EN_M_MASK                                        (0x00000400)
#define RF_CW24_XO_EXTBUF1_CKG_EN_M_BIT                                         (0x00000400)

#define RF_CW24_XO_EXTBUF2_CKG_MAN_LSB                                          (9)
#define RF_CW24_XO_EXTBUF2_CKG_MAN_WIDTH                                        (1)
#define RF_CW24_XO_EXTBUF2_CKG_MAN_MASK                                         (0x00000200)
#define RF_CW24_XO_EXTBUF2_CKG_MAN_BIT                                          (0x00000200)

#define RF_CW24_XO_EXTBUF2_CKG_EN_M_LSB                                         (8)
#define RF_CW24_XO_EXTBUF2_CKG_EN_M_WIDTH                                       (1)
#define RF_CW24_XO_EXTBUF2_CKG_EN_M_MASK                                        (0x00000100)
#define RF_CW24_XO_EXTBUF2_CKG_EN_M_BIT                                         (0x00000100)

#define RF_CW24_XO_EXTBUF3_CKG_MAN_LSB                                          (7)
#define RF_CW24_XO_EXTBUF3_CKG_MAN_WIDTH                                        (1)
#define RF_CW24_XO_EXTBUF3_CKG_MAN_MASK                                         (0x00000080)
#define RF_CW24_XO_EXTBUF3_CKG_MAN_BIT                                          (0x00000080)

#define RF_CW24_XO_EXTBUF3_CKG_EN_M_LSB                                         (6)
#define RF_CW24_XO_EXTBUF3_CKG_EN_M_WIDTH                                       (1)
#define RF_CW24_XO_EXTBUF3_CKG_EN_M_MASK                                        (0x00000040)
#define RF_CW24_XO_EXTBUF3_CKG_EN_M_BIT                                         (0x00000040)

#define RF_CW24_XO_EXTBUF4_CKG_MAN_LSB                                          (5)
#define RF_CW24_XO_EXTBUF4_CKG_MAN_WIDTH                                        (1)
#define RF_CW24_XO_EXTBUF4_CKG_MAN_MASK                                         (0x00000020)
#define RF_CW24_XO_EXTBUF4_CKG_MAN_BIT                                          (0x00000020)

#define RF_CW24_XO_EXTBUF4_CKG_EN_M_LSB                                         (4)
#define RF_CW24_XO_EXTBUF4_CKG_EN_M_WIDTH                                       (1)
#define RF_CW24_XO_EXTBUF4_CKG_EN_M_MASK                                        (0x00000010)
#define RF_CW24_XO_EXTBUF4_CKG_EN_M_BIT                                         (0x00000010)

#define RF_CW24_XO_ENBB_MAN_LSB                                                 (3)
#define RF_CW24_XO_ENBB_MAN_WIDTH                                               (1)
#define RF_CW24_XO_ENBB_MAN_MASK                                                (0x00000008)
#define RF_CW24_XO_ENBB_MAN_BIT                                                 (0x00000008)

#define RF_CW24_XO_ENBB_EN_M_LSB                                                (2)
#define RF_CW24_XO_ENBB_EN_M_WIDTH                                              (1)
#define RF_CW24_XO_ENBB_EN_M_MASK                                               (0x00000004)
#define RF_CW24_XO_ENBB_EN_M_BIT                                                (0x00000004)

#define RF_CW24_XO_CLKSEL_MAN_LSB                                               (1)
#define RF_CW24_XO_CLKSEL_MAN_WIDTH                                             (1)
#define RF_CW24_XO_CLKSEL_MAN_MASK                                              (0x00000002)
#define RF_CW24_XO_CLKSEL_MAN_BIT                                               (0x00000002)

#define RF_CW24_XO_CLKSEL_EN_M_LSB                                              (0)
#define RF_CW24_XO_CLKSEL_EN_M_WIDTH                                            (1)
#define RF_CW24_XO_CLKSEL_EN_M_MASK                                             (0x00000001)
#define RF_CW24_XO_CLKSEL_EN_M_BIT                                              (0x00000001)

#define RF_CW25_CALBUF_OPEN_DELAY_CNT_LSB                                       (14)
#define RF_CW25_CALBUF_OPEN_DELAY_CNT_WIDTH                                     (6)
#define RF_CW25_CALBUF_OPEN_DELAY_CNT_MASK                                      (0x000FC000)

#define RF_CW25_SRX1DYNBUF_OPENDELAY_CNT_LSB                                    (12)
#define RF_CW25_SRX1DYNBUF_OPENDELAY_CNT_WIDTH                                  (2)
#define RF_CW25_SRX1DYNBUF_OPENDELAY_CNT_MASK                                   (0x00003000)

#define RF_CW25_SRX2DYNBUF_OPENDELAY_CNT_LSB                                    (10)
#define RF_CW25_SRX2DYNBUF_OPENDELAY_CNT_WIDTH                                  (2)
#define RF_CW25_SRX2DYNBUF_OPENDELAY_CNT_MASK                                   (0x00000C00)

#define RF_CW25_STXDYNBUF_OPENDELAY_CNT_LSB                                     (8)
#define RF_CW25_STXDYNBUF_OPENDELAY_CNT_WIDTH                                   (2)
#define RF_CW25_STXDYNBUF_OPENDELAY_CNT_MASK                                    (0x00000300)

#define RF_CW25_TTGHDYNBUF_OPENDELAY_CNT_LSB                                    (6)
#define RF_CW25_TTGHDYNBUF_OPENDELAY_CNT_WIDTH                                  (2)
#define RF_CW25_TTGHDYNBUF_OPENDELAY_CNT_MASK                                   (0x000000C0)

#define RF_CW25_TSORDYNBUF_OPENDELAY_CNT_LSB                                    (4)
#define RF_CW25_TSORDYNBUF_OPENDELAY_CNT_WIDTH                                  (2)
#define RF_CW25_TSORDYNBUF_OPENDELAY_CNT_MASK                                   (0x00000030)

#define RF_CW25_TTGDYNBUF_OPENDELAY_CNT_LSB                                     (2)
#define RF_CW25_TTGDYNBUF_OPENDELAY_CNT_WIDTH                                   (2)
#define RF_CW25_TTGDYNBUF_OPENDELAY_CNT_MASK                                    (0x0000000C)

#define RF_CW25_DIGDYNBUF_OPENDELAY_CNT_LSB                                     (0)
#define RF_CW25_DIGDYNBUF_OPENDELAY_CNT_WIDTH                                   (2)
#define RF_CW25_DIGDYNBUF_OPENDELAY_CNT_MASK                                    (0x00000003)

#define RF_CW26_CALBUF_CLOSE_DELAY_CNT_LSB                                      (19)
#define RF_CW26_CALBUF_CLOSE_DELAY_CNT_WIDTH                                    (1)
#define RF_CW26_CALBUF_CLOSE_DELAY_CNT_MASK                                     (0x00080000)
#define RF_CW26_CALBUF_CLOSE_DELAY_CNT_BIT                                      (0x00080000)

#define RF_CW26_RG_XO_LDOBUF_BYP_LSB                                            (18)
#define RF_CW26_RG_XO_LDOBUF_BYP_WIDTH                                          (1)
#define RF_CW26_RG_XO_LDOBUF_BYP_MASK                                           (0x00040000)
#define RF_CW26_RG_XO_LDOBUF_BYP_BIT                                            (0x00040000)

#define RF_CW26_DCXO_SWRST_LSB                                                  (17)
#define RF_CW26_DCXO_SWRST_WIDTH                                                (1)
#define RF_CW26_DCXO_SWRST_MASK                                                 (0x00020000)
#define RF_CW26_DCXO_SWRST_BIT                                                  (0x00020000)

#define RF_CW26_RG_XO_EXTBUF1_HD_LSB                                            (15)
#define RF_CW26_RG_XO_EXTBUF1_HD_WIDTH                                          (2)
#define RF_CW26_RG_XO_EXTBUF1_HD_MASK                                           (0x00018000)

#define RF_CW26_RG_XO_EXTBUF2_HD_LSB                                            (12)
#define RF_CW26_RG_XO_EXTBUF2_HD_WIDTH                                          (3)
#define RF_CW26_RG_XO_EXTBUF2_HD_MASK                                           (0x00007000)

#define RF_CW26_RG_XO_EXTBUF3_HD_LSB                                            (10)
#define RF_CW26_RG_XO_EXTBUF3_HD_WIDTH                                          (2)
#define RF_CW26_RG_XO_EXTBUF3_HD_MASK                                           (0x00000C00)

#define RF_CW26_RG_XO_EXTBUF4_HD_LSB                                            (8)
#define RF_CW26_RG_XO_EXTBUF4_HD_WIDTH                                          (2)
#define RF_CW26_RG_XO_EXTBUF4_HD_MASK                                           (0x00000300)

#define RF_CW26_RG_XO_EXTBUF1_ISET_LSB                                          (6)
#define RF_CW26_RG_XO_EXTBUF1_ISET_WIDTH                                        (2)
#define RF_CW26_RG_XO_EXTBUF1_ISET_MASK                                         (0x000000C0)

#define RF_CW26_RG_XO_EXTBUF2_ISET_LSB                                          (4)
#define RF_CW26_RG_XO_EXTBUF2_ISET_WIDTH                                        (2)
#define RF_CW26_RG_XO_EXTBUF2_ISET_MASK                                         (0x00000030)

#define RF_CW26_RG_XO_EXTBUF3_ISET_LSB                                          (2)
#define RF_CW26_RG_XO_EXTBUF3_ISET_WIDTH                                        (2)
#define RF_CW26_RG_XO_EXTBUF3_ISET_MASK                                         (0x0000000C)

#define RF_CW26_RG_XO_EXTBUF4_ISET_LSB                                          (0)
#define RF_CW26_RG_XO_EXTBUF4_ISET_WIDTH                                        (2)
#define RF_CW26_RG_XO_EXTBUF4_ISET_MASK                                         (0x00000003)

#define RF_CW27_DCXO_STATIC_AUX_SEL_LSB                                         (14)
#define RF_CW27_DCXO_STATIC_AUX_SEL_WIDTH                                       (6)
#define RF_CW27_DCXO_STATIC_AUX_SEL_MASK                                        (0x000FC000)

#define RF_CW27_DCXO_AUXOUT_SEL_LSB                                             (2)
#define RF_CW27_DCXO_AUXOUT_SEL_WIDTH                                           (12)
#define RF_CW27_DCXO_AUXOUT_SEL_MASK                                            (0x00003FFC)

#define RF_CW27_XO_32KDIV_RATIO_MAN_LSB                                         (1)
#define RF_CW27_XO_32KDIV_RATIO_MAN_WIDTH                                       (1)
#define RF_CW27_XO_32KDIV_RATIO_MAN_MASK                                        (0x00000002)
#define RF_CW27_XO_32KDIV_RATIO_MAN_BIT                                         (0x00000002)

#define RF_CW27_RG_XO_32KDIV_SEL_LSB                                            (0)
#define RF_CW27_RG_XO_32KDIV_SEL_WIDTH                                          (1)
#define RF_CW27_RG_XO_32KDIV_SEL_MASK                                           (0x00000001)
#define RF_CW27_RG_XO_32KDIV_SEL_BIT                                            (0x00000001)

#define RF_CW28_XO_INTBUF_MAN_LSB                                               (19)
#define RF_CW28_XO_INTBUF_MAN_WIDTH                                             (1)
#define RF_CW28_XO_INTBUF_MAN_MASK                                              (0x00080000)
#define RF_CW28_XO_INTBUF_MAN_BIT                                               (0x00080000)

#define RF_CW28_XO_INT_IBIAS_EN_M_LSB                                           (18)
#define RF_CW28_XO_INT_IBIAS_EN_M_WIDTH                                         (1)
#define RF_CW28_XO_INT_IBIAS_EN_M_MASK                                          (0x00040000)
#define RF_CW28_XO_INT_IBIAS_EN_M_BIT                                           (0x00040000)

#define RF_CW28_XO_INT_CAL_EN_M_LSB                                             (17)
#define RF_CW28_XO_INT_CAL_EN_M_WIDTH                                           (1)
#define RF_CW28_XO_INT_CAL_EN_M_MASK                                            (0x00020000)
#define RF_CW28_XO_INT_CAL_EN_M_BIT                                             (0x00020000)

#define RF_CW28_XO_INT_SRX1_EN_M_LSB                                            (16)
#define RF_CW28_XO_INT_SRX1_EN_M_WIDTH                                          (1)
#define RF_CW28_XO_INT_SRX1_EN_M_MASK                                           (0x00010000)
#define RF_CW28_XO_INT_SRX1_EN_M_BIT                                            (0x00010000)

#define RF_CW28_XO_INT_SRX2_EN_M_LSB                                            (15)
#define RF_CW28_XO_INT_SRX2_EN_M_WIDTH                                          (1)
#define RF_CW28_XO_INT_SRX2_EN_M_MASK                                           (0x00008000)
#define RF_CW28_XO_INT_SRX2_EN_M_BIT                                            (0x00008000)

#define RF_CW28_XO_INT_STX_EN_M_LSB                                             (14)
#define RF_CW28_XO_INT_STX_EN_M_WIDTH                                           (1)
#define RF_CW28_XO_INT_STX_EN_M_MASK                                            (0x00004000)
#define RF_CW28_XO_INT_STX_EN_M_BIT                                             (0x00004000)

#define RF_CW28_XO_INT_TTGH_EN_M_LSB                                            (13)
#define RF_CW28_XO_INT_TTGH_EN_M_WIDTH                                          (1)
#define RF_CW28_XO_INT_TTGH_EN_M_MASK                                           (0x00002000)
#define RF_CW28_XO_INT_TTGH_EN_M_BIT                                            (0x00002000)

#define RF_CW28_XO_INT_TSOR_EN_M_LSB                                            (12)
#define RF_CW28_XO_INT_TSOR_EN_M_WIDTH                                          (1)
#define RF_CW28_XO_INT_TSOR_EN_M_MASK                                           (0x00001000)
#define RF_CW28_XO_INT_TSOR_EN_M_BIT                                            (0x00001000)

#define RF_CW28_XO_INT_TTG_EN_M_LSB                                             (11)
#define RF_CW28_XO_INT_TTG_EN_M_WIDTH                                           (1)
#define RF_CW28_XO_INT_TTG_EN_M_MASK                                            (0x00000800)
#define RF_CW28_XO_INT_TTG_EN_M_BIT                                             (0x00000800)

#define RF_CW28_XO_INT_DIG_EN_M_LSB                                             (10)
#define RF_CW28_XO_INT_DIG_EN_M_WIDTH                                           (1)
#define RF_CW28_XO_INT_DIG_EN_M_MASK                                            (0x00000400)
#define RF_CW28_XO_INT_DIG_EN_M_BIT                                             (0x00000400)

#define RF_CW28_XO_INTBUF_CKG_MAN_LSB                                           (9)
#define RF_CW28_XO_INTBUF_CKG_MAN_WIDTH                                         (1)
#define RF_CW28_XO_INTBUF_CKG_MAN_MASK                                          (0x00000200)
#define RF_CW28_XO_INTBUF_CKG_MAN_BIT                                           (0x00000200)

#define RF_CW28_XO_IBUF_CKG_EN_M_LSB                                            (8)
#define RF_CW28_XO_IBUF_CKG_EN_M_WIDTH                                          (1)
#define RF_CW28_XO_IBUF_CKG_EN_M_MASK                                           (0x00000100)
#define RF_CW28_XO_IBUF_CKG_EN_M_BIT                                            (0x00000100)

#define RF_CW28_XO_CAL_CKG_EN_M_LSB                                             (7)
#define RF_CW28_XO_CAL_CKG_EN_M_WIDTH                                           (1)
#define RF_CW28_XO_CAL_CKG_EN_M_MASK                                            (0x00000080)
#define RF_CW28_XO_CAL_CKG_EN_M_BIT                                             (0x00000080)

#define RF_CW28_XO_SRX1_CKG_EN_M_LSB                                            (6)
#define RF_CW28_XO_SRX1_CKG_EN_M_WIDTH                                          (1)
#define RF_CW28_XO_SRX1_CKG_EN_M_MASK                                           (0x00000040)
#define RF_CW28_XO_SRX1_CKG_EN_M_BIT                                            (0x00000040)

#define RF_CW28_XO_SRX2_CKG_EN_M_LSB                                            (5)
#define RF_CW28_XO_SRX2_CKG_EN_M_WIDTH                                          (1)
#define RF_CW28_XO_SRX2_CKG_EN_M_MASK                                           (0x00000020)
#define RF_CW28_XO_SRX2_CKG_EN_M_BIT                                            (0x00000020)

#define RF_CW28_XO_STX_CKG_EN_M_LSB                                             (4)
#define RF_CW28_XO_STX_CKG_EN_M_WIDTH                                           (1)
#define RF_CW28_XO_STX_CKG_EN_M_MASK                                            (0x00000010)
#define RF_CW28_XO_STX_CKG_EN_M_BIT                                             (0x00000010)

#define RF_CW28_XO_TTGH_CKG_EN_M_LSB                                            (3)
#define RF_CW28_XO_TTGH_CKG_EN_M_WIDTH                                          (1)
#define RF_CW28_XO_TTGH_CKG_EN_M_MASK                                           (0x00000008)
#define RF_CW28_XO_TTGH_CKG_EN_M_BIT                                            (0x00000008)

#define RF_CW28_XO_TSOR_CKG_EN_M_LSB                                            (2)
#define RF_CW28_XO_TSOR_CKG_EN_M_WIDTH                                          (1)
#define RF_CW28_XO_TSOR_CKG_EN_M_MASK                                           (0x00000004)
#define RF_CW28_XO_TSOR_CKG_EN_M_BIT                                            (0x00000004)

#define RF_CW28_XO_TTG_CKG_EN_M_LSB                                             (1)
#define RF_CW28_XO_TTG_CKG_EN_M_WIDTH                                           (1)
#define RF_CW28_XO_TTG_CKG_EN_M_MASK                                            (0x00000002)
#define RF_CW28_XO_TTG_CKG_EN_M_BIT                                             (0x00000002)

#define RF_CW28_XO_DIG_CKG_EN_M_LSB                                             (0)
#define RF_CW28_XO_DIG_CKG_EN_M_WIDTH                                           (1)
#define RF_CW28_XO_DIG_CKG_EN_M_MASK                                            (0x00000001)
#define RF_CW28_XO_DIG_CKG_EN_M_BIT                                             (0x00000001)

#define RF_CW29_RG_XO_CAL_DRIVE_LSB                                             (18)
#define RF_CW29_RG_XO_CAL_DRIVE_WIDTH                                           (2)
#define RF_CW29_RG_XO_CAL_DRIVE_MASK                                            (0x000C0000)

#define RF_CW29_RG_XO_SRX1_DRIVE_LSB                                            (16)
#define RF_CW29_RG_XO_SRX1_DRIVE_WIDTH                                          (2)
#define RF_CW29_RG_XO_SRX1_DRIVE_MASK                                           (0x00030000)

#define RF_CW29_RG_XO_SRX2_DRIVE_LSB                                            (14)
#define RF_CW29_RG_XO_SRX2_DRIVE_WIDTH                                          (2)
#define RF_CW29_RG_XO_SRX2_DRIVE_MASK                                           (0x0000C000)

#define RF_CW29_RG_XO_STX_DRIVE_LSB                                             (12)
#define RF_CW29_RG_XO_STX_DRIVE_WIDTH                                           (2)
#define RF_CW29_RG_XO_STX_DRIVE_MASK                                            (0x00003000)

#define RF_CW29_RG_XO_TTGH_DRIVE_LSB                                            (10)
#define RF_CW29_RG_XO_TTGH_DRIVE_WIDTH                                          (2)
#define RF_CW29_RG_XO_TTGH_DRIVE_MASK                                           (0x00000C00)

#define RF_CW29_RG_XO_TSOR_DRIVE_LSB                                            (8)
#define RF_CW29_RG_XO_TSOR_DRIVE_WIDTH                                          (2)
#define RF_CW29_RG_XO_TSOR_DRIVE_MASK                                           (0x00000300)

#define RF_CW29_RG_XO_TTG_DRIVE_LSB                                             (6)
#define RF_CW29_RG_XO_TTG_DRIVE_WIDTH                                           (2)
#define RF_CW29_RG_XO_TTG_DRIVE_MASK                                            (0x000000C0)

#define RF_CW29_RG_XO_DIG_DRIVE_LSB                                             (4)
#define RF_CW29_RG_XO_DIG_DRIVE_WIDTH                                           (2)
#define RF_CW29_RG_XO_DIG_DRIVE_MASK                                            (0x00000030)

#define RF_CW29_RG_XO_IBUF_ISET_LSB                                             (2)
#define RF_CW29_RG_XO_IBUF_ISET_WIDTH                                           (2)
#define RF_CW29_RG_XO_IBUF_ISET_MASK                                            (0x0000000C)

#define RF_CW29_RG_XO_PBUF_ISET_LSB                                             (0)
#define RF_CW29_RG_XO_PBUF_ISET_WIDTH                                           (2)
#define RF_CW29_RG_XO_PBUF_ISET_MASK                                            (0x00000003)

#define RF_CW30_XO_EN26M_OFFSQ_EN_LSB                                           (19)
#define RF_CW30_XO_EN26M_OFFSQ_EN_WIDTH                                         (1)
#define RF_CW30_XO_EN26M_OFFSQ_EN_MASK                                          (0x00080000)
#define RF_CW30_XO_EN26M_OFFSQ_EN_BIT                                           (0x00080000)

#define RF_CW30_XO_STRUP_MODE_LSB                                               (18)
#define RF_CW30_XO_STRUP_MODE_WIDTH                                             (1)
#define RF_CW30_XO_STRUP_MODE_MASK                                              (0x00040000)
#define RF_CW30_XO_STRUP_MODE_BIT                                               (0x00040000)

#define RF_CW30_DCXO_AAC_MODE_LPM_LSB                                           (16)
#define RF_CW30_DCXO_AAC_MODE_LPM_WIDTH                                         (2)
#define RF_CW30_DCXO_AAC_MODE_LPM_MASK                                          (0x00030000)

#define RF_CW30_DCXO_AAC_MODE_FPM_LSB                                           (14)
#define RF_CW30_DCXO_AAC_MODE_FPM_WIDTH                                         (2)
#define RF_CW30_DCXO_AAC_MODE_FPM_MASK                                          (0x0000C000)

#define RF_CW30_XO_LPM_ISEL_MAN_LSB                                             (9)
#define RF_CW30_XO_LPM_ISEL_MAN_WIDTH                                           (5)
#define RF_CW30_XO_LPM_ISEL_MAN_MASK                                            (0x00003E00)

#define RF_CW30_XO_FPM_ISEL_MAN_LSB                                             (4)
#define RF_CW30_XO_FPM_ISEL_MAN_WIDTH                                           (5)
#define RF_CW30_XO_FPM_ISEL_MAN_MASK                                            (0x000001F0)

#define RF_CW30_XO_AAC_FPM_TIME_LSB                                             (2)
#define RF_CW30_XO_AAC_FPM_TIME_WIDTH                                           (2)
#define RF_CW30_XO_AAC_FPM_TIME_MASK                                            (0x0000000C)

#define RF_CW30_XO_BB_LPM_EN_LSB                                                (1)
#define RF_CW30_XO_BB_LPM_EN_WIDTH                                              (1)
#define RF_CW30_XO_BB_LPM_EN_MASK                                               (0x00000002)
#define RF_CW30_XO_BB_LPM_EN_BIT                                                (0x00000002)

#define RF_CW30_XO_BBLPM_CKSEL_MAN_EN_LSB                                       (0)
#define RF_CW30_XO_BBLPM_CKSEL_MAN_EN_WIDTH                                     (1)
#define RF_CW30_XO_BBLPM_CKSEL_MAN_EN_MASK                                      (0x00000001)
#define RF_CW30_XO_BBLPM_CKSEL_MAN_EN_BIT                                       (0x00000001)

#define RF_CW31_RG_XO_EXTBUF1_VSET_LSB                                          (18)
#define RF_CW31_RG_XO_EXTBUF1_VSET_WIDTH                                        (2)
#define RF_CW31_RG_XO_EXTBUF1_VSET_MASK                                         (0x000C0000)

#define RF_CW31_RG_XO_EXTBUF2_VSET_LSB                                          (16)
#define RF_CW31_RG_XO_EXTBUF2_VSET_WIDTH                                        (2)
#define RF_CW31_RG_XO_EXTBUF2_VSET_MASK                                         (0x00030000)

#define RF_CW31_RG_XO_EXTBUF3_VSET_LSB                                          (14)
#define RF_CW31_RG_XO_EXTBUF3_VSET_WIDTH                                        (2)
#define RF_CW31_RG_XO_EXTBUF3_VSET_MASK                                         (0x0000C000)

#define RF_CW31_RG_XO_EXTBUF4_VSET_LSB                                          (12)
#define RF_CW31_RG_XO_EXTBUF4_VSET_WIDTH                                        (2)
#define RF_CW31_RG_XO_EXTBUF4_VSET_MASK                                         (0x00003000)

#define RF_CW31_RG_XO_EXTBUF1_ENCL_LSB                                          (11)
#define RF_CW31_RG_XO_EXTBUF1_ENCL_WIDTH                                        (1)
#define RF_CW31_RG_XO_EXTBUF1_ENCL_MASK                                         (0x00000800)
#define RF_CW31_RG_XO_EXTBUF1_ENCL_BIT                                          (0x00000800)

#define RF_CW31_RG_XO_EXTBUF1_IBX2_LSB                                          (10)
#define RF_CW31_RG_XO_EXTBUF1_IBX2_WIDTH                                        (1)
#define RF_CW31_RG_XO_EXTBUF1_IBX2_MASK                                         (0x00000400)
#define RF_CW31_RG_XO_EXTBUF1_IBX2_BIT                                          (0x00000400)

#define RF_CW31_RG_XO_EXTBUF1_IX2_LSB                                           (9)
#define RF_CW31_RG_XO_EXTBUF1_IX2_WIDTH                                         (1)
#define RF_CW31_RG_XO_EXTBUF1_IX2_MASK                                          (0x00000200)
#define RF_CW31_RG_XO_EXTBUF1_IX2_BIT                                           (0x00000200)

#define RF_CW31_RG_XO_EXTBUF1_SINE_LSB                                          (8)
#define RF_CW31_RG_XO_EXTBUF1_SINE_WIDTH                                        (1)
#define RF_CW31_RG_XO_EXTBUF1_SINE_MASK                                         (0x00000100)
#define RF_CW31_RG_XO_EXTBUF1_SINE_BIT                                          (0x00000100)

#define RF_CW31_RG_XO_EXTBUF1_FLT_LSB                                           (6)
#define RF_CW31_RG_XO_EXTBUF1_FLT_WIDTH                                         (2)
#define RF_CW31_RG_XO_EXTBUF1_FLT_MASK                                          (0x000000C0)

#define RF_CW31_RG_XO_EXTBUF1_RDEG_LSB                                          (4)
#define RF_CW31_RG_XO_EXTBUF1_RDEG_WIDTH                                        (2)
#define RF_CW31_RG_XO_EXTBUF1_RDEG_MASK                                         (0x00000030)

#define RF_CW31_RG_XO_EXTBUF2_ENCL_LSB                                          (3)
#define RF_CW31_RG_XO_EXTBUF2_ENCL_WIDTH                                        (1)
#define RF_CW31_RG_XO_EXTBUF2_ENCL_MASK                                         (0x00000008)
#define RF_CW31_RG_XO_EXTBUF2_ENCL_BIT                                          (0x00000008)

#define RF_CW31_RG_XO_EXTBUF2_IBX2_LSB                                          (2)
#define RF_CW31_RG_XO_EXTBUF2_IBX2_WIDTH                                        (1)
#define RF_CW31_RG_XO_EXTBUF2_IBX2_MASK                                         (0x00000004)
#define RF_CW31_RG_XO_EXTBUF2_IBX2_BIT                                          (0x00000004)

#define RF_CW31_RG_XO_EXTBUF2_IX2_LSB                                           (1)
#define RF_CW31_RG_XO_EXTBUF2_IX2_WIDTH                                         (1)
#define RF_CW31_RG_XO_EXTBUF2_IX2_MASK                                          (0x00000002)
#define RF_CW31_RG_XO_EXTBUF2_IX2_BIT                                           (0x00000002)

#define RF_CW31_RG_XO_EXTBUF2_BYPFLT_LSB                                        (0)
#define RF_CW31_RG_XO_EXTBUF2_BYPFLT_WIDTH                                      (1)
#define RF_CW31_RG_XO_EXTBUF2_BYPFLT_MASK                                       (0x00000001)
#define RF_CW31_RG_XO_EXTBUF2_BYPFLT_BIT                                        (0x00000001)

#define RF_CW32_RG_XO_EXTBUF3_ENCL_LSB                                          (19)
#define RF_CW32_RG_XO_EXTBUF3_ENCL_WIDTH                                        (1)
#define RF_CW32_RG_XO_EXTBUF3_ENCL_MASK                                         (0x00080000)
#define RF_CW32_RG_XO_EXTBUF3_ENCL_BIT                                          (0x00080000)

#define RF_CW32_RG_XO_EXTBUF3_IBX2_LSB                                          (18)
#define RF_CW32_RG_XO_EXTBUF3_IBX2_WIDTH                                        (1)
#define RF_CW32_RG_XO_EXTBUF3_IBX2_MASK                                         (0x00040000)
#define RF_CW32_RG_XO_EXTBUF3_IBX2_BIT                                          (0x00040000)

#define RF_CW32_RG_XO_EXTBUF3_IX2_LSB                                           (17)
#define RF_CW32_RG_XO_EXTBUF3_IX2_WIDTH                                         (1)
#define RF_CW32_RG_XO_EXTBUF3_IX2_MASK                                          (0x00020000)
#define RF_CW32_RG_XO_EXTBUF3_IX2_BIT                                           (0x00020000)

#define RF_CW32_RG_XO_EXTBUF3_SINE_LSB                                          (16)
#define RF_CW32_RG_XO_EXTBUF3_SINE_WIDTH                                        (1)
#define RF_CW32_RG_XO_EXTBUF3_SINE_MASK                                         (0x00010000)
#define RF_CW32_RG_XO_EXTBUF3_SINE_BIT                                          (0x00010000)

#define RF_CW32_RG_XO_EXTBUF3_FLT_LSB                                           (14)
#define RF_CW32_RG_XO_EXTBUF3_FLT_WIDTH                                         (2)
#define RF_CW32_RG_XO_EXTBUF3_FLT_MASK                                          (0x0000C000)

#define RF_CW32_RG_XO_EXTBUF3_RDEG_LSB                                          (12)
#define RF_CW32_RG_XO_EXTBUF3_RDEG_WIDTH                                        (2)
#define RF_CW32_RG_XO_EXTBUF3_RDEG_MASK                                         (0x00003000)

#define RF_CW32_RG_XO_EXTBUF4_ENCL_LSB                                          (11)
#define RF_CW32_RG_XO_EXTBUF4_ENCL_WIDTH                                        (1)
#define RF_CW32_RG_XO_EXTBUF4_ENCL_MASK                                         (0x00000800)
#define RF_CW32_RG_XO_EXTBUF4_ENCL_BIT                                          (0x00000800)

#define RF_CW32_RG_XO_EXTBUF4_IBX2_LSB                                          (10)
#define RF_CW32_RG_XO_EXTBUF4_IBX2_WIDTH                                        (1)
#define RF_CW32_RG_XO_EXTBUF4_IBX2_MASK                                         (0x00000400)
#define RF_CW32_RG_XO_EXTBUF4_IBX2_BIT                                          (0x00000400)

#define RF_CW32_RG_XO_EXTBUF4_IX2_LSB                                           (9)
#define RF_CW32_RG_XO_EXTBUF4_IX2_WIDTH                                         (1)
#define RF_CW32_RG_XO_EXTBUF4_IX2_MASK                                          (0x00000200)
#define RF_CW32_RG_XO_EXTBUF4_IX2_BIT                                           (0x00000200)

#define RF_CW32_RG_XO_EXTBUF4_SINE_LSB                                          (8)
#define RF_CW32_RG_XO_EXTBUF4_SINE_WIDTH                                        (1)
#define RF_CW32_RG_XO_EXTBUF4_SINE_MASK                                         (0x00000100)
#define RF_CW32_RG_XO_EXTBUF4_SINE_BIT                                          (0x00000100)

#define RF_CW32_RG_XO_EXTBUF4_FLT_LSB                                           (6)
#define RF_CW32_RG_XO_EXTBUF4_FLT_WIDTH                                         (2)
#define RF_CW32_RG_XO_EXTBUF4_FLT_MASK                                          (0x000000C0)

#define RF_CW32_RG_XO_EXTBUF4_RDEG_LSB                                          (4)
#define RF_CW32_RG_XO_EXTBUF4_RDEG_WIDTH                                        (2)
#define RF_CW32_RG_XO_EXTBUF4_RDEG_MASK                                         (0x00000030)

#define RF_CW32_RG_XO_CBANK_SYNC_BYP_LSB                                        (3)
#define RF_CW32_RG_XO_CBANK_SYNC_BYP_WIDTH                                      (1)
#define RF_CW32_RG_XO_CBANK_SYNC_BYP_MASK                                       (0x00000008)
#define RF_CW32_RG_XO_CBANK_SYNC_BYP_BIT                                        (0x00000008)

#define RF_CW32_RG_XO_CBANK_POL_LSB                                             (2)
#define RF_CW32_RG_XO_CBANK_POL_WIDTH                                           (1)
#define RF_CW32_RG_XO_CBANK_POL_MASK                                            (0x00000004)
#define RF_CW32_RG_XO_CBANK_POL_BIT                                             (0x00000004)

#define RF_CW32_RG_XO_CTL_SYNC_BYP_LSB                                          (1)
#define RF_CW32_RG_XO_CTL_SYNC_BYP_WIDTH                                        (1)
#define RF_CW32_RG_XO_CTL_SYNC_BYP_MASK                                         (0x00000002)
#define RF_CW32_RG_XO_CTL_SYNC_BYP_BIT                                          (0x00000002)

#define RF_CW32_RG_XO_CTL_POL_LSB                                               (0)
#define RF_CW32_RG_XO_CTL_POL_WIDTH                                             (1)
#define RF_CW32_RG_XO_CTL_POL_MASK                                              (0x00000001)
#define RF_CW32_RG_XO_CTL_POL_BIT                                               (0x00000001)

#define RF_CW33_XO_FLT_EN_M_LSB                                                 (19)
#define RF_CW33_XO_FLT_EN_M_WIDTH                                               (1)
#define RF_CW33_XO_FLT_EN_M_MASK                                                (0x00080000)
#define RF_CW33_XO_FLT_EN_M_BIT                                                 (0x00080000)

#define RF_CW33_XO_OPMODE_MAN_LSB                                               (18)
#define RF_CW33_XO_OPMODE_MAN_WIDTH                                             (1)
#define RF_CW33_XO_OPMODE_MAN_MASK                                              (0x00040000)
#define RF_CW33_XO_OPMODE_MAN_BIT                                               (0x00040000)

#define RF_CW33_XO_HDDIV2_EN_M_LSB                                              (17)
#define RF_CW33_XO_HDDIV2_EN_M_WIDTH                                            (1)
#define RF_CW33_XO_HDDIV2_EN_M_MASK                                             (0x00020000)
#define RF_CW33_XO_HDDIV2_EN_M_BIT                                              (0x00020000)

#define RF_CW33_XO_HDDIV2_SEL_M_LSB                                             (16)
#define RF_CW33_XO_HDDIV2_SEL_M_WIDTH                                           (1)
#define RF_CW33_XO_HDDIV2_SEL_M_MASK                                            (0x00010000)
#define RF_CW33_XO_HDDIV2_SEL_M_BIT                                             (0x00010000)

#define RF_CW33_XO_LDDIV2_EN_M_LSB                                              (15)
#define RF_CW33_XO_LDDIV2_EN_M_WIDTH                                            (1)
#define RF_CW33_XO_LDDIV2_EN_M_MASK                                             (0x00008000)
#define RF_CW33_XO_LDDIV2_EN_M_BIT                                              (0x00008000)

#define RF_CW33_XO_LDDIV2_SEL_M_LSB                                             (14)
#define RF_CW33_XO_LDDIV2_SEL_M_WIDTH                                           (1)
#define RF_CW33_XO_LDDIV2_SEL_M_MASK                                            (0x00004000)
#define RF_CW33_XO_LDDIV2_SEL_M_BIT                                             (0x00004000)

#define RF_CW33_XO_LPMDIV2_EN_M_LSB                                             (13)
#define RF_CW33_XO_LPMDIV2_EN_M_WIDTH                                           (1)
#define RF_CW33_XO_LPMDIV2_EN_M_MASK                                            (0x00002000)
#define RF_CW33_XO_LPMDIV2_EN_M_BIT                                             (0x00002000)

#define RF_CW33_XO_LPMDIV2_SEL_M_LSB                                            (12)
#define RF_CW33_XO_LPMDIV2_SEL_M_WIDTH                                          (1)
#define RF_CW33_XO_LPMDIV2_SEL_M_MASK                                           (0x00001000)
#define RF_CW33_XO_LPMDIV2_SEL_M_BIT                                            (0x00001000)

#define RF_CW33_XO_PBUF_DITHTD_M_LSB                                            (8)
#define RF_CW33_XO_PBUF_DITHTD_M_WIDTH                                          (4)
#define RF_CW33_XO_PBUF_DITHTD_M_MASK                                           (0x00000F00)

#define RF_CW33_XO_PBUF_DITH_MODE_LSB                                           (6)
#define RF_CW33_XO_PBUF_DITH_MODE_WIDTH                                         (2)
#define RF_CW33_XO_PBUF_DITH_MODE_MASK                                          (0x000000C0)

#define RF_CW33_XO_CBANK_SYNC_MAN_LSB                                           (5)
#define RF_CW33_XO_CBANK_SYNC_MAN_WIDTH                                         (1)
#define RF_CW33_XO_CBANK_SYNC_MAN_MASK                                          (0x00000020)
#define RF_CW33_XO_CBANK_SYNC_MAN_BIT                                           (0x00000020)

#define RF_CW33_XO_CBANK_SYNC_EN_M_LSB                                          (4)
#define RF_CW33_XO_CBANK_SYNC_EN_M_WIDTH                                        (1)
#define RF_CW33_XO_CBANK_SYNC_EN_M_MASK                                         (0x00000010)
#define RF_CW33_XO_CBANK_SYNC_EN_M_BIT                                          (0x00000010)

#define RF_CW33_XO_CAFC_SYNC_EN_M_LSB                                           (3)
#define RF_CW33_XO_CAFC_SYNC_EN_M_WIDTH                                         (1)
#define RF_CW33_XO_CAFC_SYNC_EN_M_MASK                                          (0x00000008)
#define RF_CW33_XO_CAFC_SYNC_EN_M_BIT                                           (0x00000008)

#define RF_CW33_XO_CDAC_SYNC_EN_M_LSB                                           (2)
#define RF_CW33_XO_CDAC_SYNC_EN_M_WIDTH                                         (1)
#define RF_CW33_XO_CDAC_SYNC_EN_M_MASK                                          (0x00000004)
#define RF_CW33_XO_CDAC_SYNC_EN_M_BIT                                           (0x00000004)

#define RF_CW33_XO_CTL_SYNC_MAN_LSB                                             (1)
#define RF_CW33_XO_CTL_SYNC_MAN_WIDTH                                           (1)
#define RF_CW33_XO_CTL_SYNC_MAN_MASK                                            (0x00000002)
#define RF_CW33_XO_CTL_SYNC_MAN_BIT                                             (0x00000002)

#define RF_CW33_XO_CTL_SYNC_EN_M_LSB                                            (0)
#define RF_CW33_XO_CTL_SYNC_EN_M_WIDTH                                          (1)
#define RF_CW33_XO_CTL_SYNC_EN_M_MASK                                           (0x00000001)
#define RF_CW33_XO_CTL_SYNC_EN_M_BIT                                            (0x00000001)

#define RF_CW34_XO_CAFC_FPM_LSB                                                 (7)
#define RF_CW34_XO_CAFC_FPM_WIDTH                                               (13)
#define RF_CW34_XO_CAFC_FPM_MASK                                                (0x000FFF80)

#define RF_CW34_XO_CAFC_LPM_MSB_LSB                                             (0)
#define RF_CW34_XO_CAFC_LPM_MSB_WIDTH                                           (7)
#define RF_CW34_XO_CAFC_LPM_MSB_MASK                                            (0x0000007F)

#define RF_CW35_XO_CAFC_LPM_LSB_LSB                                             (14)
#define RF_CW35_XO_CAFC_LPM_LSB_WIDTH                                           (6)
#define RF_CW35_XO_CAFC_LPM_LSB_MASK                                            (0x000FC000)

#define RF_CW35_XO_32KDIV_NFRAC_LPM_LSB                                         (0)
#define RF_CW35_XO_32KDIV_NFRAC_LPM_WIDTH                                       (14)
#define RF_CW35_XO_32KDIV_NFRAC_LPM_MASK                                        (0x00003FFF)

#define RF_CW36_XO_CDAC_FPM_LSB                                                 (12)
#define RF_CW36_XO_CDAC_FPM_WIDTH                                               (8)
#define RF_CW36_XO_CDAC_FPM_MASK                                                (0x000FF000)

#define RF_CW36_XO_CDAC_LPM_LSB                                                 (4)
#define RF_CW36_XO_CDAC_LPM_WIDTH                                               (8)
#define RF_CW36_XO_CDAC_LPM_MASK                                                (0x00000FF0)

#define RF_CW36_XO_CORE_BYPCAS_LPM_LSB                                          (3)
#define RF_CW36_XO_CORE_BYPCAS_LPM_WIDTH                                        (1)
#define RF_CW36_XO_CORE_BYPCAS_LPM_MASK                                         (0x00000008)
#define RF_CW36_XO_CORE_BYPCAS_LPM_BIT                                          (0x00000008)

#define RF_CW36_XO_CORE_GMX2_LPM_LSB                                            (2)
#define RF_CW36_XO_CORE_GMX2_LPM_WIDTH                                          (1)
#define RF_CW36_XO_CORE_GMX2_LPM_MASK                                           (0x00000004)
#define RF_CW36_XO_CORE_GMX2_LPM_BIT                                            (0x00000004)

#define RF_CW36_XO_CORE_IDAC_LPM_LSB                                            (0)
#define RF_CW36_XO_CORE_IDAC_LPM_WIDTH                                          (2)
#define RF_CW36_XO_CORE_IDAC_LPM_MASK                                           (0x00000003)

#define RF_CW37_XO_26M_CKSEL_LSB                                                (19)
#define RF_CW37_XO_26M_CKSEL_WIDTH                                              (1)
#define RF_CW37_XO_26M_CKSEL_MASK                                               (0x00080000)
#define RF_CW37_XO_26M_CKSEL_BIT                                                (0x00080000)

#define RF_CW37_XO_CBANK_SYNC_DYN_LSB                                           (18)
#define RF_CW37_XO_CBANK_SYNC_DYN_WIDTH                                         (1)
#define RF_CW37_XO_CBANK_SYNC_DYN_MASK                                          (0x00040000)
#define RF_CW37_XO_CBANK_SYNC_DYN_BIT                                           (0x00040000)

#define RF_CW37_XO_26MLP_MAN_EN_LSB                                             (17)
#define RF_CW37_XO_26MLP_MAN_EN_WIDTH                                           (1)
#define RF_CW37_XO_26MLP_MAN_EN_MASK                                            (0x00020000)
#define RF_CW37_XO_26MLP_MAN_EN_BIT                                             (0x00020000)

#define RF_CW37_XO_32KDIV_MAN_LSB                                               (16)
#define RF_CW37_XO_32KDIV_MAN_WIDTH                                             (1)
#define RF_CW37_XO_32KDIV_MAN_MASK                                              (0x00010000)
#define RF_CW37_XO_32KDIV_MAN_BIT                                               (0x00010000)

#define RF_CW37_XO_32KDIV_EN_M_LSB                                              (15)
#define RF_CW37_XO_32KDIV_EN_M_WIDTH                                            (1)
#define RF_CW37_XO_32KDIV_EN_M_MASK                                             (0x00008000)
#define RF_CW37_XO_32KDIV_EN_M_BIT                                              (0x00008000)

#define RF_CW37_XO_26MA32K_EN_M_LSB                                             (14)
#define RF_CW37_XO_26MA32K_EN_M_WIDTH                                           (1)
#define RF_CW37_XO_26MA32K_EN_M_MASK                                            (0x00004000)
#define RF_CW37_XO_26MA32K_EN_M_BIT                                             (0x00004000)

#define RF_CW37_XO_32KDIV_NFRAC_FPM_LSB                                         (0)
#define RF_CW37_XO_32KDIV_NFRAC_FPM_WIDTH                                       (14)
#define RF_CW37_XO_32KDIV_NFRAC_FPM_MASK                                        (0x00003FFF)

#define RF_CW38_XO_CORE_MAN_LSB                                                 (19)
#define RF_CW38_XO_CORE_MAN_WIDTH                                               (1)
#define RF_CW38_XO_CORE_MAN_MASK                                                (0x00080000)
#define RF_CW38_XO_CORE_MAN_BIT                                                 (0x00080000)

#define RF_CW38_XO_CORE_EN_M_LSB                                                (18)
#define RF_CW38_XO_CORE_EN_M_WIDTH                                              (1)
#define RF_CW38_XO_CORE_EN_M_MASK                                               (0x00040000)
#define RF_CW38_XO_CORE_EN_M_BIT                                                (0x00040000)

#define RF_CW38_XO_CORE_IBOOST_EN_M_LSB                                         (17)
#define RF_CW38_XO_CORE_IBOOST_EN_M_WIDTH                                       (1)
#define RF_CW38_XO_CORE_IBOOST_EN_M_MASK                                        (0x00020000)
#define RF_CW38_XO_CORE_IBOOST_EN_M_BIT                                         (0x00020000)

#define RF_CW38_XO_CORE_TURBO_EN_M_LSB                                          (16)
#define RF_CW38_XO_CORE_TURBO_EN_M_WIDTH                                        (1)
#define RF_CW38_XO_CORE_TURBO_EN_M_MASK                                         (0x00010000)
#define RF_CW38_XO_CORE_TURBO_EN_M_BIT                                          (0x00010000)

#define RF_CW38_XO_CORE_AAC_EN_M_LSB                                            (15)
#define RF_CW38_XO_CORE_AAC_EN_M_WIDTH                                          (1)
#define RF_CW38_XO_CORE_AAC_EN_M_MASK                                           (0x00008000)
#define RF_CW38_XO_CORE_AAC_EN_M_BIT                                            (0x00008000)

#define RF_CW38_XO_STARTUP_EN_M_LSB                                             (14)
#define RF_CW38_XO_STARTUP_EN_M_WIDTH                                           (1)
#define RF_CW38_XO_STARTUP_EN_M_MASK                                            (0x00004000)
#define RF_CW38_XO_STARTUP_EN_M_BIT                                             (0x00004000)

#define RF_CW38_XO_CORE_VBFPM_EN_M_LSB                                          (13)
#define RF_CW38_XO_CORE_VBFPM_EN_M_WIDTH                                        (1)
#define RF_CW38_XO_CORE_VBFPM_EN_M_MASK                                         (0x00002000)
#define RF_CW38_XO_CORE_VBFPM_EN_M_BIT                                          (0x00002000)

#define RF_CW38_XO_CORE_VBLPM_EN_M_LSB                                          (12)
#define RF_CW38_XO_CORE_VBLPM_EN_M_WIDTH                                        (1)
#define RF_CW38_XO_CORE_VBLPM_EN_M_MASK                                         (0x00001000)
#define RF_CW38_XO_CORE_VBLPM_EN_M_BIT                                          (0x00001000)

#define RF_CW38_XO_LPMBIAS_EN_M_LSB                                             (11)
#define RF_CW38_XO_LPMBIAS_EN_M_WIDTH                                           (1)
#define RF_CW38_XO_LPMBIAS_EN_M_MASK                                            (0x00000800)
#define RF_CW38_XO_LPMBIAS_EN_M_BIT                                             (0x00000800)

#define RF_CW38_XO_VTCGEN_EN_M_LSB                                              (10)
#define RF_CW38_XO_VTCGEN_EN_M_WIDTH                                            (1)
#define RF_CW38_XO_VTCGEN_EN_M_MASK                                             (0x00000400)
#define RF_CW38_XO_VTCGEN_EN_M_BIT                                              (0x00000400)

#define RF_CW38_XO_IAAC_COMP_EN_M_LSB                                           (9)
#define RF_CW38_XO_IAAC_COMP_EN_M_WIDTH                                         (1)
#define RF_CW38_XO_IAAC_COMP_EN_M_MASK                                          (0x00000200)
#define RF_CW38_XO_IAAC_COMP_EN_M_BIT                                           (0x00000200)

#define RF_CW38_XO_IFPM_COMP_EN_M_LSB                                           (8)
#define RF_CW38_XO_IFPM_COMP_EN_M_WIDTH                                         (1)
#define RF_CW38_XO_IFPM_COMP_EN_M_MASK                                          (0x00000100)
#define RF_CW38_XO_IFPM_COMP_EN_M_BIT                                           (0x00000100)

#define RF_CW38_XO_ILPM_COMP_EN_M_LSB                                           (7)
#define RF_CW38_XO_ILPM_COMP_EN_M_WIDTH                                         (1)
#define RF_CW38_XO_ILPM_COMP_EN_M_MASK                                          (0x00000080)
#define RF_CW38_XO_ILPM_COMP_EN_M_BIT                                           (0x00000080)

#define RF_CW38_XO_LPM_PREBUF_EN_M_LSB                                          (6)
#define RF_CW38_XO_LPM_PREBUF_EN_M_WIDTH                                        (1)
#define RF_CW38_XO_LPM_PREBUF_EN_M_MASK                                         (0x00000040)
#define RF_CW38_XO_LPM_PREBUF_EN_M_BIT                                          (0x00000040)

#define RF_CW38_RG_XO_SYNC_CKPOL_LSB                                            (5)
#define RF_CW38_RG_XO_SYNC_CKPOL_WIDTH                                          (1)
#define RF_CW38_RG_XO_SYNC_CKPOL_MASK                                           (0x00000020)
#define RF_CW38_RG_XO_SYNC_CKPOL_BIT                                            (0x00000020)

#define RF_CW38_XO_PBUF_EN_M_LSB                                                (4)
#define RF_CW38_XO_PBUF_EN_M_WIDTH                                              (1)
#define RF_CW38_XO_PBUF_EN_M_MASK                                               (0x00000010)
#define RF_CW38_XO_PBUF_EN_M_BIT                                                (0x00000010)

#define RF_CW38_XO_CORE_BYPCAS_FPM_LSB                                          (3)
#define RF_CW38_XO_CORE_BYPCAS_FPM_WIDTH                                        (1)
#define RF_CW38_XO_CORE_BYPCAS_FPM_MASK                                         (0x00000008)
#define RF_CW38_XO_CORE_BYPCAS_FPM_BIT                                          (0x00000008)

#define RF_CW38_XO_CORE_GMX2_FPM_LSB                                            (2)
#define RF_CW38_XO_CORE_GMX2_FPM_WIDTH                                          (1)
#define RF_CW38_XO_CORE_GMX2_FPM_MASK                                           (0x00000004)
#define RF_CW38_XO_CORE_GMX2_FPM_BIT                                            (0x00000004)

#define RF_CW38_XO_CORE_IDAC_FPM_LSB                                            (0)
#define RF_CW38_XO_CORE_IDAC_FPM_WIDTH                                          (2)
#define RF_CW38_XO_CORE_IDAC_FPM_MASK                                           (0x00000003)

#define RF_CW39_XO_AAC_COMP_MAN_LSB                                             (19)
#define RF_CW39_XO_AAC_COMP_MAN_WIDTH                                           (1)
#define RF_CW39_XO_AAC_COMP_MAN_MASK                                            (0x00080000)
#define RF_CW39_XO_AAC_COMP_MAN_BIT                                             (0x00080000)

#define RF_CW39_XO_AAC_EN_M_LSB                                                 (18)
#define RF_CW39_XO_AAC_EN_M_WIDTH                                               (1)
#define RF_CW39_XO_AAC_EN_M_MASK                                                (0x00040000)
#define RF_CW39_XO_AAC_EN_M_BIT                                                 (0x00040000)

#define RF_CW39_XO_AAC_MONEN_M_LSB                                              (17)
#define RF_CW39_XO_AAC_MONEN_M_WIDTH                                            (1)
#define RF_CW39_XO_AAC_MONEN_M_MASK                                             (0x00020000)
#define RF_CW39_XO_AAC_MONEN_M_BIT                                              (0x00020000)

#define RF_CW39_XO_COMP_EN_M_LSB                                                (16)
#define RF_CW39_XO_COMP_EN_M_WIDTH                                              (1)
#define RF_CW39_XO_COMP_EN_M_MASK                                               (0x00010000)
#define RF_CW39_XO_COMP_EN_M_BIT                                                (0x00010000)

#define RF_CW39_XO_COMP_TSTEN_M_LSB                                             (15)
#define RF_CW39_XO_COMP_TSTEN_M_WIDTH                                           (1)
#define RF_CW39_XO_COMP_TSTEN_M_MASK                                            (0x00008000)
#define RF_CW39_XO_COMP_TSTEN_M_BIT                                             (0x00008000)

#define RF_CW39_XO_AAC_HV_FPM_LSB                                               (14)
#define RF_CW39_XO_AAC_HV_FPM_WIDTH                                             (1)
#define RF_CW39_XO_AAC_HV_FPM_MASK                                              (0x00004000)
#define RF_CW39_XO_AAC_HV_FPM_BIT                                               (0x00004000)

#define RF_CW39_XO_AAC_IBIAS_FPM_LSB                                            (12)
#define RF_CW39_XO_AAC_IBIAS_FPM_WIDTH                                          (2)
#define RF_CW39_XO_AAC_IBIAS_FPM_MASK                                           (0x00003000)

#define RF_CW39_XO_AAC_VOFST_FPM_LSB                                            (10)
#define RF_CW39_XO_AAC_VOFST_FPM_WIDTH                                          (2)
#define RF_CW39_XO_AAC_VOFST_FPM_MASK                                           (0x00000C00)

#define RF_CW39_XO_AAC_COMP_HV_FPM_LSB                                          (9)
#define RF_CW39_XO_AAC_COMP_HV_FPM_WIDTH                                        (1)
#define RF_CW39_XO_AAC_COMP_HV_FPM_MASK                                         (0x00000200)
#define RF_CW39_XO_AAC_COMP_HV_FPM_BIT                                          (0x00000200)

#define RF_CW39_XO_AAC_VSEL_FPM_LSB                                             (5)
#define RF_CW39_XO_AAC_VSEL_FPM_WIDTH                                           (4)
#define RF_CW39_XO_AAC_VSEL_FPM_MASK                                            (0x000001E0)

#define RF_CW39_XO_AAC_COMP_HV_LPM_LSB                                          (4)
#define RF_CW39_XO_AAC_COMP_HV_LPM_WIDTH                                        (1)
#define RF_CW39_XO_AAC_COMP_HV_LPM_MASK                                         (0x00000010)
#define RF_CW39_XO_AAC_COMP_HV_LPM_BIT                                          (0x00000010)

#define RF_CW39_XO_AAC_VSEL_LPM_LSB                                             (0)
#define RF_CW39_XO_AAC_VSEL_LPM_WIDTH                                           (4)
#define RF_CW39_XO_AAC_VSEL_LPM_MASK                                            (0x0000000F)

#define RF_CW40_XO_AAC_HV_LPM_LSB                                               (19)
#define RF_CW40_XO_AAC_HV_LPM_WIDTH                                             (1)
#define RF_CW40_XO_AAC_HV_LPM_MASK                                              (0x00080000)
#define RF_CW40_XO_AAC_HV_LPM_BIT                                               (0x00080000)

#define RF_CW40_XO_AAC_IBIAS_LPM_LSB                                            (17)
#define RF_CW40_XO_AAC_IBIAS_LPM_WIDTH                                          (2)
#define RF_CW40_XO_AAC_IBIAS_LPM_MASK                                           (0x00060000)

#define RF_CW40_XO_AAC_VOFST_LPM_LSB                                            (15)
#define RF_CW40_XO_AAC_VOFST_LPM_WIDTH                                          (2)
#define RF_CW40_XO_AAC_VOFST_LPM_MASK                                           (0x00018000)

#define RF_CW40_XO_AAC_COMP_POL_LSB                                             (14)
#define RF_CW40_XO_AAC_COMP_POL_WIDTH                                           (1)
#define RF_CW40_XO_AAC_COMP_POL_MASK                                            (0x00004000)
#define RF_CW40_XO_AAC_COMP_POL_BIT                                             (0x00004000)

#define RF_CW40_XO_LDOCAL_EN_LSB                                                (13)
#define RF_CW40_XO_LDOCAL_EN_WIDTH                                              (1)
#define RF_CW40_XO_LDOCAL_EN_MASK                                               (0x00002000)
#define RF_CW40_XO_LDOCAL_EN_BIT                                                (0x00002000)

#define RF_CW40_XO_LDO_MAN_LSB                                                  (12)
#define RF_CW40_XO_LDO_MAN_WIDTH                                                (1)
#define RF_CW40_XO_LDO_MAN_MASK                                                 (0x00001000)
#define RF_CW40_XO_LDO_MAN_BIT                                                  (0x00001000)

#define RF_CW40_XO_LDOTOP_EN_M_LSB                                              (11)
#define RF_CW40_XO_LDOTOP_EN_M_WIDTH                                            (1)
#define RF_CW40_XO_LDOTOP_EN_M_MASK                                             (0x00000800)
#define RF_CW40_XO_LDOTOP_EN_M_BIT                                              (0x00000800)

#define RF_CW40_XO_LDOTOP_BYP_M_LSB                                             (10)
#define RF_CW40_XO_LDOTOP_BYP_M_WIDTH                                           (1)
#define RF_CW40_XO_LDOTOP_BYP_M_MASK                                            (0x00000400)
#define RF_CW40_XO_LDOTOP_BYP_M_BIT                                             (0x00000400)

#define RF_CW40_XO_LDOTOP_VSET_M_LSB                                            (6)
#define RF_CW40_XO_LDOTOP_VSET_M_WIDTH                                          (4)
#define RF_CW40_XO_LDOTOP_VSET_M_MASK                                           (0x000003C0)

#define RF_CW40_XO_LDOVTST_EN_M_LSB                                             (5)
#define RF_CW40_XO_LDOVTST_EN_M_WIDTH                                           (1)
#define RF_CW40_XO_LDOVTST_EN_M_MASK                                            (0x00000020)
#define RF_CW40_XO_LDOVTST_EN_M_BIT                                             (0x00000020)

#define RF_CW40_XO_TEST_VCAL_EN_M_LSB                                           (4)
#define RF_CW40_XO_TEST_VCAL_EN_M_WIDTH                                         (1)
#define RF_CW40_XO_TEST_VCAL_EN_M_MASK                                          (0x00000010)
#define RF_CW40_XO_TEST_VCAL_EN_M_BIT                                           (0x00000010)

#define RF_CW40_XO_VBIST_EN_M_LSB                                               (3)
#define RF_CW40_XO_VBIST_EN_M_WIDTH                                             (1)
#define RF_CW40_XO_VBIST_EN_M_MASK                                              (0x00000008)
#define RF_CW40_XO_VBIST_EN_M_BIT                                               (0x00000008)

#define RF_CW40_XO_LDOBUF_EN_M_LSB                                              (2)
#define RF_CW40_XO_LDOBUF_EN_M_WIDTH                                            (1)
#define RF_CW40_XO_LDOBUF_EN_M_MASK                                             (0x00000004)
#define RF_CW40_XO_LDOBUF_EN_M_BIT                                              (0x00000004)

#define RF_CW40_RG_XO_LDOBUF_VSET_LSB                                           (0)
#define RF_CW40_RG_XO_LDOBUF_VSET_WIDTH                                         (2)
#define RF_CW40_RG_XO_LDOBUF_VSET_MASK                                          (0x00000003)

#define RF_CW41_RG_XO_IBIAS_ISET_LSB                                            (18)
#define RF_CW41_RG_XO_IBIAS_ISET_WIDTH                                          (2)
#define RF_CW41_RG_XO_IBIAS_ISET_MASK                                           (0x000C0000)

#define RF_CW41_RG_XO_LDIBUF_INV_LSB                                            (17)
#define RF_CW41_RG_XO_LDIBUF_INV_WIDTH                                          (1)
#define RF_CW41_RG_XO_LDIBUF_INV_MASK                                           (0x00020000)
#define RF_CW41_RG_XO_LDIBUF_INV_BIT                                            (0x00020000)

#define RF_CW41_RG_XO_CORE_OSCTD_LSB                                            (15)
#define RF_CW41_RG_XO_CORE_OSCTD_WIDTH                                          (2)
#define RF_CW41_RG_XO_CORE_OSCTD_MASK                                           (0x00018000)

#define RF_CW41_RG_XO_LPM_PREBUF_ISET_LSB                                       (13)
#define RF_CW41_RG_XO_LPM_PREBUF_ISET_WIDTH                                     (2)
#define RF_CW41_RG_XO_LPM_PREBUF_ISET_MASK                                      (0x00006000)

#define RF_CW41_RG_XO_ANARST_BUF_BYP_LSB                                        (12)
#define RF_CW41_RG_XO_ANARST_BUF_BYP_WIDTH                                      (1)
#define RF_CW41_RG_XO_ANARST_BUF_BYP_MASK                                       (0x00001000)
#define RF_CW41_RG_XO_ANARST_BUF_BYP_BIT                                        (0x00001000)

#define RF_CW41_RG_XO_ANARST_BYP_LSB                                            (11)
#define RF_CW41_RG_XO_ANARST_BYP_WIDTH                                          (1)
#define RF_CW41_RG_XO_ANARST_BYP_MASK                                           (0x00000800)
#define RF_CW41_RG_XO_ANARST_BYP_BIT                                            (0x00000800)

#define RF_CW41_XO_VTEST_SEL_MUX_LSB                                            (6)
#define RF_CW41_XO_VTEST_SEL_MUX_WIDTH                                          (5)
#define RF_CW41_XO_VTEST_SEL_MUX_MASK                                           (0x000007C0)

#define RF_CW41_RG_DCXOSDLDO_MUX_LSB                                            (5)
#define RF_CW41_RG_DCXOSDLDO_MUX_WIDTH                                          (1)
#define RF_CW41_RG_DCXOSDLDO_MUX_MASK                                           (0x00000020)
#define RF_CW41_RG_DCXOSDLDO_MUX_BIT                                            (0x00000020)

#define RF_CW41_RG_DCXOSDLDO_PLD_LSB                                            (4)
#define RF_CW41_RG_DCXOSDLDO_PLD_WIDTH                                          (1)
#define RF_CW41_RG_DCXOSDLDO_PLD_MASK                                           (0x00000010)
#define RF_CW41_RG_DCXOSDLDO_PLD_BIT                                            (0x00000010)

#define RF_CW41_RG_GLOBAL_LS_BIAS_EN_LSB                                        (3)
#define RF_CW41_RG_GLOBAL_LS_BIAS_EN_WIDTH                                      (1)
#define RF_CW41_RG_GLOBAL_LS_BIAS_EN_MASK                                       (0x00000008)
#define RF_CW41_RG_GLOBAL_LS_BIAS_EN_BIT                                        (0x00000008)

#define RF_CW41_RG_DCXOLPM_GS_ON_LSB                                            (2)
#define RF_CW41_RG_DCXOLPM_GS_ON_WIDTH                                          (1)
#define RF_CW41_RG_DCXOLPM_GS_ON_MASK                                           (0x00000004)
#define RF_CW41_RG_DCXOLPM_GS_ON_BIT                                            (0x00000004)

#define RF_CW41_RG_DCXOSDLDO_VS_LSB                                             (0)
#define RF_CW41_RG_DCXOSDLDO_VS_WIDTH                                           (2)
#define RF_CW41_RG_DCXOSDLDO_VS_MASK                                            (0x00000003)

#define RF_CW42_RG_AFC_BUS_LSB                                                  (7)
#define RF_CW42_RG_AFC_BUS_WIDTH                                                (13)
#define RF_CW42_RG_AFC_BUS_MASK                                                 (0x000FFF80)

#define RF_CW42_RG_AFC_TGSEL_LSB                                                (6)
#define RF_CW42_RG_AFC_TGSEL_WIDTH                                              (1)
#define RF_CW42_RG_AFC_TGSEL_MASK                                               (0x00000040)
#define RF_CW42_RG_AFC_TGSEL_BIT                                                (0x00000040)

#define RF_CW42_RG_AFC_11BS_LSB                                                 (4)
#define RF_CW42_RG_AFC_11BS_WIDTH                                               (2)
#define RF_CW42_RG_AFC_11BS_MASK                                                (0x00000030)

#define RF_CW42_RG_AFCBG_TRIM_LSB                                               (0)
#define RF_CW42_RG_AFCBG_TRIM_WIDTH                                             (4)
#define RF_CW42_RG_AFCBG_TRIM_MASK                                              (0x0000000F)

#define RF_CW43_DCXO_XMODE_LATCH_LSB                                            (19)
#define RF_CW43_DCXO_XMODE_LATCH_WIDTH                                          (1)
#define RF_CW43_DCXO_XMODE_LATCH_MASK                                           (0x00080000)
#define RF_CW43_DCXO_XMODE_LATCH_BIT                                            (0x00080000)

#define RF_CW43_AFC_TG_MAN_LSB                                                  (18)
#define RF_CW43_AFC_TG_MAN_WIDTH                                                (1)
#define RF_CW43_AFC_TG_MAN_MASK                                                 (0x00040000)
#define RF_CW43_AFC_TG_MAN_BIT                                                  (0x00040000)

#define RF_CW43_RG_AFC_GAINSEL_LSB                                              (17)
#define RF_CW43_RG_AFC_GAINSEL_WIDTH                                            (1)
#define RF_CW43_RG_AFC_GAINSEL_MASK                                             (0x00020000)
#define RF_CW43_RG_AFC_GAINSEL_BIT                                              (0x00020000)

#define RF_CW43_RG_AFC_CALI_LSB                                                 (12)
#define RF_CW43_RG_AFC_CALI_WIDTH                                               (5)
#define RF_CW43_RG_AFC_CALI_MASK                                                (0x0001F000)

#define RF_CW43_RG_AFCBUF_TRIM_LSB                                              (8)
#define RF_CW43_RG_AFCBUF_TRIM_WIDTH                                            (4)
#define RF_CW43_RG_AFCBUF_TRIM_MASK                                             (0x00000F00)

#define RF_CW43_RG_AFCBUF_CALI_LSB                                              (4)
#define RF_CW43_RG_AFCBUF_CALI_WIDTH                                            (4)
#define RF_CW43_RG_AFCBUF_CALI_MASK                                             (0x000000F0)

#define RF_CW43_AFCDAC_MAN_EN_LSB                                               (3)
#define RF_CW43_AFCDAC_MAN_EN_WIDTH                                             (1)
#define RF_CW43_AFCDAC_MAN_EN_MASK                                              (0x00000008)
#define RF_CW43_AFCDAC_MAN_EN_BIT                                               (0x00000008)

#define RF_CW43_XMODE_LATCH_RO_LSB                                              (2)
#define RF_CW43_XMODE_LATCH_RO_WIDTH                                            (1)
#define RF_CW43_XMODE_LATCH_RO_MASK                                             (0x00000004)
#define RF_CW43_XMODE_LATCH_RO_BIT                                              (0x00000004)

#define RF_CW43_RG_XO_32KDIV_TEST_EN_LSB                                        (1)
#define RF_CW43_RG_XO_32KDIV_TEST_EN_WIDTH                                      (1)
#define RF_CW43_RG_XO_32KDIV_TEST_EN_MASK                                       (0x00000002)
#define RF_CW43_RG_XO_32KDIV_TEST_EN_BIT                                        (0x00000002)

#define RF_CW43_DCXO_32KDIV_SWRST_LSB                                           (0)
#define RF_CW43_DCXO_32KDIV_SWRST_WIDTH                                         (1)
#define RF_CW43_DCXO_32KDIV_SWRST_MASK                                          (0x00000001)
#define RF_CW43_DCXO_32KDIV_SWRST_BIT                                           (0x00000001)

#define RF_CW45_TTG_ON_TRIG_LSB                                                 (19)
#define RF_CW45_TTG_ON_TRIG_WIDTH                                               (1)
#define RF_CW45_TTG_ON_TRIG_MASK                                                (0x00080000)
#define RF_CW45_TTG_ON_TRIG_BIT                                                 (0x00080000)

#define RF_CW45_TTG_OFF_TRIG_LSB                                                (18)
#define RF_CW45_TTG_OFF_TRIG_WIDTH                                              (1)
#define RF_CW45_TTG_OFF_TRIG_MASK                                               (0x00040000)
#define RF_CW45_TTG_OFF_TRIG_BIT                                                (0x00040000)

#define RF_CW46_TTG_MANUAL_LSB                                                  (19)
#define RF_CW46_TTG_MANUAL_WIDTH                                                (1)
#define RF_CW46_TTG_MANUAL_MASK                                                 (0x00080000)
#define RF_CW46_TTG_MANUAL_BIT                                                  (0x00080000)

#define RF_CW46_TTG_LDO_HF_EN_M_LSB                                             (18)
#define RF_CW46_TTG_LDO_HF_EN_M_WIDTH                                           (1)
#define RF_CW46_TTG_LDO_HF_EN_M_MASK                                            (0x00040000)
#define RF_CW46_TTG_LDO_HF_EN_M_BIT                                             (0x00040000)

#define RF_CW46_TTG_LDO_LF_EN_M_LSB                                             (17)
#define RF_CW46_TTG_LDO_LF_EN_M_WIDTH                                           (1)
#define RF_CW46_TTG_LDO_LF_EN_M_MASK                                            (0x00020000)
#define RF_CW46_TTG_LDO_LF_EN_M_BIT                                             (0x00020000)

#define RF_CW46_TTG_RST_M_LSB                                                   (16)
#define RF_CW46_TTG_RST_M_WIDTH                                                 (1)
#define RF_CW46_TTG_RST_M_MASK                                                  (0x00010000)
#define RF_CW46_TTG_RST_M_BIT                                                   (0x00010000)

#define RF_CW46_TTG_MANUAL2_LSB                                                 (14)
#define RF_CW46_TTG_MANUAL2_WIDTH                                               (1)
#define RF_CW46_TTG_MANUAL2_MASK                                                (0x00004000)
#define RF_CW46_TTG_MANUAL2_BIT                                                 (0x00004000)

#define RF_CW46_TTG_LB_DIV2_EN_M_LSB                                            (13)
#define RF_CW46_TTG_LB_DIV2_EN_M_WIDTH                                          (1)
#define RF_CW46_TTG_LB_DIV2_EN_M_MASK                                           (0x00002000)
#define RF_CW46_TTG_LB_DIV2_EN_M_BIT                                            (0x00002000)

#define RF_CW46_TTG_HF_ENB_M_LSB                                                (12)
#define RF_CW46_TTG_HF_ENB_M_WIDTH                                              (1)
#define RF_CW46_TTG_HF_ENB_M_MASK                                               (0x00001000)
#define RF_CW46_TTG_HF_ENB_M_BIT                                                (0x00001000)

#define RF_CW46_TTG_DIV2_EN_MANUAL_LSB                                          (11)
#define RF_CW46_TTG_DIV2_EN_MANUAL_WIDTH                                        (1)
#define RF_CW46_TTG_DIV2_EN_MANUAL_MASK                                         (0x00000800)
#define RF_CW46_TTG_DIV2_EN_MANUAL_BIT                                          (0x00000800)

#define RF_CW46_TTG_DIV2_EN_M_LSB                                               (10)
#define RF_CW46_TTG_DIV2_EN_M_WIDTH                                             (1)
#define RF_CW46_TTG_DIV2_EN_M_MASK                                              (0x00000400)
#define RF_CW46_TTG_DIV2_EN_M_BIT                                               (0x00000400)

#define RF_CW46_TTG_SDM_MANUAL_LSB                                              (9)
#define RF_CW46_TTG_SDM_MANUAL_WIDTH                                            (1)
#define RF_CW46_TTG_SDM_MANUAL_MASK                                             (0x00000200)
#define RF_CW46_TTG_SDM_MANUAL_BIT                                              (0x00000200)

#define RF_CW46_RG_TTG_SDM_IFM_LSB                                              (8)
#define RF_CW46_RG_TTG_SDM_IFM_WIDTH                                            (1)
#define RF_CW46_RG_TTG_SDM_IFM_MASK                                             (0x00000100)
#define RF_CW46_RG_TTG_SDM_IFM_BIT                                              (0x00000100)

#define RF_CW46_TTG_SDM_DI_EN_M_LSB                                             (7)
#define RF_CW46_TTG_SDM_DI_EN_M_WIDTH                                           (1)
#define RF_CW46_TTG_SDM_DI_EN_M_MASK                                            (0x00000080)
#define RF_CW46_TTG_SDM_DI_EN_M_BIT                                             (0x00000080)

#define RF_CW46_RG_TTG_SDM_DI_LS_LSB                                            (5)
#define RF_CW46_RG_TTG_SDM_DI_LS_WIDTH                                          (2)
#define RF_CW46_RG_TTG_SDM_DI_LS_MASK                                           (0x00000060)

#define RF_CW46_TTG_SDM_ORD_M_LSB                                               (3)
#define RF_CW46_TTG_SDM_ORD_M_WIDTH                                             (2)
#define RF_CW46_TTG_SDM_ORD_M_MASK                                              (0x00000018)

#define RF_CW46_RG_TTG_SDM_OUT_LSB                                              (2)
#define RF_CW46_RG_TTG_SDM_OUT_WIDTH                                            (1)
#define RF_CW46_RG_TTG_SDM_OUT_MASK                                             (0x00000004)
#define RF_CW46_RG_TTG_SDM_OUT_BIT                                              (0x00000004)

#define RF_CW46_RG_TTG_SDM_MODE_LSB                                             (0)
#define RF_CW46_RG_TTG_SDM_MODE_WIDTH                                           (2)
#define RF_CW46_RG_TTG_SDM_MODE_MASK                                            (0x00000003)

#define RF_CW47_RG_TTG_RX_GAIN_CAL_EN_LSB                                       (13)
#define RF_CW47_RG_TTG_RX_GAIN_CAL_EN_WIDTH                                     (1)
#define RF_CW47_RG_TTG_RX_GAIN_CAL_EN_MASK                                      (0x00002000)
#define RF_CW47_RG_TTG_RX_GAIN_CAL_EN_BIT                                       (0x00002000)

#define RF_CW47_RG_TTG_TST_CLK_EN_LSB                                           (12)
#define RF_CW47_RG_TTG_TST_CLK_EN_WIDTH                                         (1)
#define RF_CW47_RG_TTG_TST_CLK_EN_MASK                                          (0x00001000)
#define RF_CW47_RG_TTG_TST_CLK_EN_BIT                                           (0x00001000)

#define RF_CW47_RG_TTG_TST_VDC_EN_LSB                                           (11)
#define RF_CW47_RG_TTG_TST_VDC_EN_WIDTH                                         (1)
#define RF_CW47_RG_TTG_TST_VDC_EN_MASK                                          (0x00000800)
#define RF_CW47_RG_TTG_TST_VDC_EN_BIT                                           (0x00000800)

#define RF_CW47_RG_TTG_TSTCKT_SEL_LSB                                           (9)
#define RF_CW47_RG_TTG_TSTCKT_SEL_WIDTH                                         (2)
#define RF_CW47_RG_TTG_TSTCKT_SEL_MASK                                          (0x00000600)

#define RF_CW47_RG_TTG_VCO_MON_EN_LSB                                           (8)
#define RF_CW47_RG_TTG_VCO_MON_EN_WIDTH                                         (1)
#define RF_CW47_RG_TTG_VCO_MON_EN_MASK                                          (0x00000100)
#define RF_CW47_RG_TTG_VCO_MON_EN_BIT                                           (0x00000100)

#define RF_CW47_RG_TTG_TST_DIV2_EN_LSB                                          (7)
#define RF_CW47_RG_TTG_TST_DIV2_EN_WIDTH                                        (1)
#define RF_CW47_RG_TTG_TST_DIV2_EN_MASK                                         (0x00000080)
#define RF_CW47_RG_TTG_TST_DIV2_EN_BIT                                          (0x00000080)

#define RF_CW47_RG_TTG_LF_CS_LSB                                                (5)
#define RF_CW47_RG_TTG_LF_CS_WIDTH                                              (2)
#define RF_CW47_RG_TTG_LF_CS_MASK                                               (0x00000060)

#define RF_CW47_RG_TTG_LF_C2_LSB                                                (3)
#define RF_CW47_RG_TTG_LF_C2_WIDTH                                              (2)
#define RF_CW47_RG_TTG_LF_C2_MASK                                               (0x00000018)

#define RF_CW47_RG_TTG_LDO_RCODE_LSB                                            (0)
#define RF_CW47_RG_TTG_LDO_RCODE_WIDTH                                          (3)
#define RF_CW47_RG_TTG_LDO_RCODE_MASK                                           (0x00000007)

#define RF_CW48_TTG_VCO_BAND_LSB                                                (12)
#define RF_CW48_TTG_VCO_BAND_WIDTH                                              (8)
#define RF_CW48_TTG_VCO_BAND_MASK                                               (0x000FF000)

#define RF_CW48_TTG_FM_TRIG_LSB                                                 (11)
#define RF_CW48_TTG_FM_TRIG_WIDTH                                               (1)
#define RF_CW48_TTG_FM_TRIG_MASK                                                (0x00000800)
#define RF_CW48_TTG_FM_TRIG_BIT                                                 (0x00000800)

#define RF_CW48_RG_TTG_FM_EN_LSB                                                (10)
#define RF_CW48_RG_TTG_FM_EN_WIDTH                                              (1)
#define RF_CW48_RG_TTG_FM_EN_MASK                                               (0x00000400)
#define RF_CW48_RG_TTG_FM_EN_BIT                                                (0x00000400)

#define RF_CW48_RG_TTG_RESET_LF_LSB                                             (9)
#define RF_CW48_RG_TTG_RESET_LF_WIDTH                                           (1)
#define RF_CW48_RG_TTG_RESET_LF_MASK                                            (0x00000200)
#define RF_CW48_RG_TTG_RESET_LF_BIT                                             (0x00000200)

#define RF_CW48_TTG_AUTOK_KS_LSB                                                (7)
#define RF_CW48_TTG_AUTOK_KS_WIDTH                                              (2)
#define RF_CW48_TTG_AUTOK_KS_MASK                                               (0x00000180)

#define RF_CW48_TTG_AUTOK_KF_LSB                                                (5)
#define RF_CW48_TTG_AUTOK_KF_WIDTH                                              (2)
#define RF_CW48_TTG_AUTOK_KF_MASK                                               (0x00000060)

#define RF_CW48_TTG_AUTOK_EN_LSB                                                (4)
#define RF_CW48_TTG_AUTOK_EN_WIDTH                                              (1)
#define RF_CW48_TTG_AUTOK_EN_MASK                                               (0x00000010)
#define RF_CW48_TTG_AUTOK_EN_BIT                                                (0x00000010)

#define RF_CW48_RG_TTG_TSTLDO_EN_LSB                                            (3)
#define RF_CW48_RG_TTG_TSTLDO_EN_WIDTH                                          (1)
#define RF_CW48_RG_TTG_TSTLDO_EN_MASK                                           (0x00000008)
#define RF_CW48_RG_TTG_TSTLDO_EN_BIT                                            (0x00000008)

#define RF_CW48_RG_TTG_LDO_TST_EN_LSB                                           (2)
#define RF_CW48_RG_TTG_LDO_TST_EN_WIDTH                                         (1)
#define RF_CW48_RG_TTG_LDO_TST_EN_MASK                                          (0x00000004)
#define RF_CW48_RG_TTG_LDO_TST_EN_BIT                                           (0x00000004)

#define RF_CW48_RG_TTG_LDO_TST_SEL_LSB                                          (0)
#define RF_CW48_RG_TTG_LDO_TST_SEL_WIDTH                                        (2)
#define RF_CW48_RG_TTG_LDO_TST_SEL_MASK                                         (0x00000003)

#define RF_CW49_RG_TTG_ICP_LSB                                                  (11)
#define RF_CW49_RG_TTG_ICP_WIDTH                                                (3)
#define RF_CW49_RG_TTG_ICP_MASK                                                 (0x00003800)

#define RF_CW49_RG_TTG_ICP_OFFSET_LSB                                           (9)
#define RF_CW49_RG_TTG_ICP_OFFSET_WIDTH                                         (2)
#define RF_CW49_RG_TTG_ICP_OFFSET_MASK                                          (0x00000600)

#define RF_CW49_RG_TTG_LF_SAMPLE_EN_LSB                                         (8)
#define RF_CW49_RG_TTG_LF_SAMPLE_EN_WIDTH                                       (1)
#define RF_CW49_RG_TTG_LF_SAMPLE_EN_MASK                                        (0x00000100)
#define RF_CW49_RG_TTG_LF_SAMPLE_EN_BIT                                         (0x00000100)

#define RF_CW49_RG_TTG_IOSC_EN_LSB                                              (7)
#define RF_CW49_RG_TTG_IOSC_EN_WIDTH                                            (1)
#define RF_CW49_RG_TTG_IOSC_EN_MASK                                             (0x00000080)
#define RF_CW49_RG_TTG_IOSC_EN_BIT                                              (0x00000080)

#define RF_CW49_RG_TTG_BR_LSB                                                   (4)
#define RF_CW49_RG_TTG_BR_WIDTH                                                 (3)
#define RF_CW49_RG_TTG_BR_MASK                                                  (0x00000070)

#define RF_CW49_RG_TTG_BP2_LSB                                                  (2)
#define RF_CW49_RG_TTG_BP2_WIDTH                                                (2)
#define RF_CW49_RG_TTG_BP2_MASK                                                 (0x0000000C)

#define RF_CW49_RG_TTG_IBAND_RSEL_LSB                                           (0)
#define RF_CW49_RG_TTG_IBAND_RSEL_WIDTH                                         (2)
#define RF_CW49_RG_TTG_IBAND_RSEL_MASK                                          (0x00000003)

#define RF_CW50_TTG_SDM_FRAC_TX_LSB                                             (0)
#define RF_CW50_TTG_SDM_FRAC_TX_WIDTH                                           (20)
#define RF_CW50_TTG_SDM_FRAC_TX_MASK                                            (0x000FFFFF)

#define RF_CW51_TTG_SDM_FRAC_TX_2_LSB                                           (17)
#define RF_CW51_TTG_SDM_FRAC_TX_2_WIDTH                                         (3)
#define RF_CW51_TTG_SDM_FRAC_TX_2_MASK                                          (0x000E0000)

#define RF_CW51_TTG_SDM_INT_TX_LSB                                              (10)
#define RF_CW51_TTG_SDM_INT_TX_WIDTH                                            (7)
#define RF_CW51_TTG_SDM_INT_TX_MASK                                             (0x0001FC00)

#define RF_CW51_TTG_SDM_INT_RX_LSB                                              (3)
#define RF_CW51_TTG_SDM_INT_RX_WIDTH                                            (7)
#define RF_CW51_TTG_SDM_INT_RX_MASK                                             (0x000003F8)

#define RF_CW51_TTG_SDM_FRAC_RX_2_LSB                                           (0)
#define RF_CW51_TTG_SDM_FRAC_RX_2_WIDTH                                         (3)
#define RF_CW51_TTG_SDM_FRAC_RX_2_MASK                                          (0x00000007)

#define RF_CW52_TTG_SDM_FRAC_RX_LSB                                             (0)
#define RF_CW52_TTG_SDM_FRAC_RX_WIDTH                                           (20)
#define RF_CW52_TTG_SDM_FRAC_RX_MASK                                            (0x000FFFFF)

#define RF_CW53_TTG_KBAND_DEBUG_FLAG_SEL_LSB                                    (0)
#define RF_CW53_TTG_KBAND_DEBUG_FLAG_SEL_WIDTH                                  (3)
#define RF_CW53_TTG_KBAND_DEBUG_FLAG_SEL_MASK                                   (0x00000007)

#define RF_CW54_TTG_RX_T1_LSB                                                   (0)
#define RF_CW54_TTG_RX_T1_WIDTH                                                 (10)
#define RF_CW54_TTG_RX_T1_MASK                                                  (0x000003FF)

#define RF_CW55_TTG_TX_T1_LSB                                                   (0)
#define RF_CW55_TTG_TX_T1_WIDTH                                                 (10)
#define RF_CW55_TTG_TX_T1_MASK                                                  (0x000003FF)

#define RF_CW56_RG_TTG_LDO_RCAL_LSB                                             (15)
#define RF_CW56_RG_TTG_LDO_RCAL_WIDTH                                           (5)
#define RF_CW56_RG_TTG_LDO_RCAL_MASK                                            (0x000F8000)

#define RF_CW56_RG_TTG_LDO_RCAL_EN_LSB                                          (14)
#define RF_CW56_RG_TTG_LDO_RCAL_EN_WIDTH                                        (1)
#define RF_CW56_RG_TTG_LDO_RCAL_EN_MASK                                         (0x00004000)
#define RF_CW56_RG_TTG_LDO_RCAL_EN_BIT                                          (0x00004000)

#define RF_CW56_RG_TXTTGDRVR_P_EN_LSB                                           (4)
#define RF_CW56_RG_TXTTGDRVR_P_EN_WIDTH                                         (1)
#define RF_CW56_RG_TXTTGDRVR_P_EN_MASK                                          (0x00000010)
#define RF_CW56_RG_TXTTGDRVR_P_EN_BIT                                           (0x00000010)

#define RF_CW56_RG_TXTTGDRVR_N_EN_LSB                                           (3)
#define RF_CW56_RG_TXTTGDRVR_N_EN_WIDTH                                         (1)
#define RF_CW56_RG_TXTTGDRVR_N_EN_MASK                                          (0x00000008)
#define RF_CW56_RG_TXTTGDRVR_N_EN_BIT                                           (0x00000008)

#define RF_CW56_RG_TXTTGDRV_ATTEN_LSB                                           (0)
#define RF_CW56_RG_TXTTGDRV_ATTEN_WIDTH                                         (3)
#define RF_CW56_RG_TXTTGDRV_ATTEN_MASK                                          (0x00000007)

#define RF_CW57_TX_FDDC_TTGBUF_TON_LSB                                          (10)
#define RF_CW57_TX_FDDC_TTGBUF_TON_WIDTH                                        (10)
#define RF_CW57_TX_FDDC_TTGBUF_TON_MASK                                         (0x000FFC00)

#define RF_CW57_TX_TDDC_TTGBUF_TON_LSB                                          (0)
#define RF_CW57_TX_TDDC_TTGBUF_TON_WIDTH                                        (10)
#define RF_CW57_TX_TDDC_TTGBUF_TON_MASK                                         (0x000003FF)

#define RF_CW58_TX_C2KC_TTGBUF_TON_LSB                                          (10)
#define RF_CW58_TX_C2KC_TTGBUF_TON_WIDTH                                        (10)
#define RF_CW58_TX_C2KC_TTGBUF_TON_MASK                                         (0x000FFC00)

#define RF_CW59_TX_DET_TTGBUF_EN_MANUAL_LSB                                     (1)
#define RF_CW59_TX_DET_TTGBUF_EN_MANUAL_WIDTH                                   (1)
#define RF_CW59_TX_DET_TTGBUF_EN_MANUAL_MASK                                    (0x00000002)
#define RF_CW59_TX_DET_TTGBUF_EN_MANUAL_BIT                                     (0x00000002)

#define RF_CW59_TX_DET_TTGBUF_EN_M_LSB                                          (0)
#define RF_CW59_TX_DET_TTGBUF_EN_M_WIDTH                                        (1)
#define RF_CW59_TX_DET_TTGBUF_EN_M_MASK                                         (0x00000001)
#define RF_CW59_TX_DET_TTGBUF_EN_M_BIT                                          (0x00000001)

#define RF_CW64_RG_THADC_DCMEAS_LSB                                             (17)
#define RF_CW64_RG_THADC_DCMEAS_WIDTH                                           (3)
#define RF_CW64_RG_THADC_DCMEAS_MASK                                            (0x000E0000)

#define RF_CW64_RG_THADC_LDO_DCCAL_EN_LSB                                       (16)
#define RF_CW64_RG_THADC_LDO_DCCAL_EN_WIDTH                                     (1)
#define RF_CW64_RG_THADC_LDO_DCCAL_EN_MASK                                      (0x00010000)
#define RF_CW64_RG_THADC_LDO_DCCAL_EN_BIT                                       (0x00010000)

#define RF_CW64_RG_THADC_LDO_VOUT_LSB                                           (14)
#define RF_CW64_RG_THADC_LDO_VOUT_WIDTH                                         (2)
#define RF_CW64_RG_THADC_LDO_VOUT_MASK                                          (0x0000C000)

#define RF_CW64_RG_THADC_LDO_VREF_RSEL_LSB                                      (10)
#define RF_CW64_RG_THADC_LDO_VREF_RSEL_WIDTH                                    (4)
#define RF_CW64_RG_THADC_LDO_VREF_RSEL_MASK                                     (0x00003C00)

#define RF_CW64_RG_THADC_THFE_MUX_CM_LSB                                        (9)
#define RF_CW64_RG_THADC_THFE_MUX_CM_WIDTH                                      (1)
#define RF_CW64_RG_THADC_THFE_MUX_CM_MASK                                       (0x00000200)
#define RF_CW64_RG_THADC_THFE_MUX_CM_BIT                                        (0x00000200)

#define RF_CW64_RG_THADC_THFE_VCM_LSB                                           (6)
#define RF_CW64_RG_THADC_THFE_VCM_WIDTH                                         (3)
#define RF_CW64_RG_THADC_THFE_VCM_MASK                                          (0x000001C0)

#define RF_CW64_RG_THADC_THFE_VCM_ISEL_LSB                                      (3)
#define RF_CW64_RG_THADC_THFE_VCM_ISEL_WIDTH                                    (3)
#define RF_CW64_RG_THADC_THFE_VCM_ISEL_MASK                                     (0x00000038)

#define RF_CW65_RG_THADC_PGA_GAIN_LSB                                           (16)
#define RF_CW65_RG_THADC_PGA_GAIN_WIDTH                                         (4)
#define RF_CW65_RG_THADC_PGA_GAIN_MASK                                          (0x000F0000)

#define RF_CW65_RG_THADC_PGA_VCM_LSB                                            (14)
#define RF_CW65_RG_THADC_PGA_VCM_WIDTH                                          (2)
#define RF_CW65_RG_THADC_PGA_VCM_MASK                                           (0x0000C000)

#define RF_CW65_RG_THADC_PGA_VCM_ISEL_LSB                                       (11)
#define RF_CW65_RG_THADC_PGA_VCM_ISEL_WIDTH                                     (3)
#define RF_CW65_RG_THADC_PGA_VCM_ISEL_MASK                                      (0x00003800)

#define RF_CW65_RG_THADC_ADC_SIB_LSB                                            (8)
#define RF_CW65_RG_THADC_ADC_SIB_WIDTH                                          (3)
#define RF_CW65_RG_THADC_ADC_SIB_MASK                                           (0x00000700)

#define RF_CW65_RG_THADC_ADCCMP_SIB_LSB                                         (6)
#define RF_CW65_RG_THADC_ADCCMP_SIB_WIDTH                                       (2)
#define RF_CW65_RG_THADC_ADCCMP_SIB_MASK                                        (0x000000C0)

#define RF_CW65_RG_THADC_ADC_VREF_LSB                                           (3)
#define RF_CW65_RG_THADC_ADC_VREF_WIDTH                                         (3)
#define RF_CW65_RG_THADC_ADC_VREF_MASK                                          (0x00000038)

#define RF_CW65_RG_THADC_ADC_VREF_ISEL_LSB                                      (0)
#define RF_CW65_RG_THADC_ADC_VREF_ISEL_WIDTH                                    (3)
#define RF_CW65_RG_THADC_ADC_VREF_ISEL_MASK                                     (0x00000007)

#define RF_CW66_RG_THADC_ADC_TDC_LSB                                            (18)
#define RF_CW66_RG_THADC_ADC_TDC_WIDTH                                          (2)
#define RF_CW66_RG_THADC_ADC_TDC_MASK                                           (0x000C0000)

#define RF_CW66_RG_THADC_ADC_TSTEN_LSB                                          (17)
#define RF_CW66_RG_THADC_ADC_TSTEN_WIDTH                                        (1)
#define RF_CW66_RG_THADC_ADC_TSTEN_MASK                                         (0x00020000)
#define RF_CW66_RG_THADC_ADC_TSTEN_BIT                                          (0x00020000)

#define RF_CW66_RG_THADC_ADC_TSTSEL_LSB                                         (15)
#define RF_CW66_RG_THADC_ADC_TSTSEL_WIDTH                                       (2)
#define RF_CW66_RG_THADC_ADC_TSTSEL_MASK                                        (0x00018000)

#define RF_CW66_RG_THADC_CLK_DIV_LSB                                            (13)
#define RF_CW66_RG_THADC_CLK_DIV_WIDTH                                          (2)
#define RF_CW66_RG_THADC_CLK_DIV_MASK                                           (0x00006000)

#define RF_CW66_RG_THADC_CLK_EDGE_LSB                                           (12)
#define RF_CW66_RG_THADC_CLK_EDGE_WIDTH                                         (1)
#define RF_CW66_RG_THADC_CLK_EDGE_MASK                                          (0x00001000)
#define RF_CW66_RG_THADC_CLK_EDGE_BIT                                           (0x00001000)

#define RF_CW66_RG_THADC_RSV_LSB                                                (0)
#define RF_CW66_RG_THADC_RSV_WIDTH                                              (8)
#define RF_CW66_RG_THADC_RSV_MASK                                               (0x000000FF)

#define RF_CW67_THADC_ISO_MAN_LSB                                               (19)
#define RF_CW67_THADC_ISO_MAN_WIDTH                                             (1)
#define RF_CW67_THADC_ISO_MAN_MASK                                              (0x00080000)
#define RF_CW67_THADC_ISO_MAN_BIT                                               (0x00080000)

#define RF_CW67_THADC_ISO_M_LSB                                                 (18)
#define RF_CW67_THADC_ISO_M_WIDTH                                               (1)
#define RF_CW67_THADC_ISO_M_MASK                                                (0x00040000)
#define RF_CW67_THADC_ISO_M_BIT                                                 (0x00040000)

#define RF_CW67_THADC_LDO_EN_MAN_LSB                                            (17)
#define RF_CW67_THADC_LDO_EN_MAN_WIDTH                                          (1)
#define RF_CW67_THADC_LDO_EN_MAN_MASK                                           (0x00020000)
#define RF_CW67_THADC_LDO_EN_MAN_BIT                                            (0x00020000)

#define RF_CW67_THADC_LDO_EN_M_LSB                                              (16)
#define RF_CW67_THADC_LDO_EN_M_WIDTH                                            (1)
#define RF_CW67_THADC_LDO_EN_M_MASK                                             (0x00010000)
#define RF_CW67_THADC_LDO_EN_M_BIT                                              (0x00010000)

#define RF_CW67_THADC_EN_MAN_LSB                                                (15)
#define RF_CW67_THADC_EN_MAN_WIDTH                                              (1)
#define RF_CW67_THADC_EN_MAN_MASK                                               (0x00008000)
#define RF_CW67_THADC_EN_MAN_BIT                                                (0x00008000)

#define RF_CW67_THADC_EN_M_LSB                                                  (14)
#define RF_CW67_THADC_EN_M_WIDTH                                                (1)
#define RF_CW67_THADC_EN_M_MASK                                                 (0x00004000)
#define RF_CW67_THADC_EN_M_BIT                                                  (0x00004000)

#define RF_CW67_THADC_OUT_EN_MAN_LSB                                            (13)
#define RF_CW67_THADC_OUT_EN_MAN_WIDTH                                          (1)
#define RF_CW67_THADC_OUT_EN_MAN_MASK                                           (0x00002000)
#define RF_CW67_THADC_OUT_EN_MAN_BIT                                            (0x00002000)

#define RF_CW67_THADC_OUT_EN_M_LSB                                              (12)
#define RF_CW67_THADC_OUT_EN_M_WIDTH                                            (1)
#define RF_CW67_THADC_OUT_EN_M_MASK                                             (0x00001000)
#define RF_CW67_THADC_OUT_EN_M_BIT                                              (0x00001000)

#define RF_CW67_THADC_CAL_EN_MAN_LSB                                            (11)
#define RF_CW67_THADC_CAL_EN_MAN_WIDTH                                          (1)
#define RF_CW67_THADC_CAL_EN_MAN_MASK                                           (0x00000800)
#define RF_CW67_THADC_CAL_EN_MAN_BIT                                            (0x00000800)

#define RF_CW67_THADC_CAL_EN_M_LSB                                              (10)
#define RF_CW67_THADC_CAL_EN_M_WIDTH                                            (1)
#define RF_CW67_THADC_CAL_EN_M_MASK                                             (0x00000400)
#define RF_CW67_THADC_CAL_EN_M_BIT                                              (0x00000400)

#define RF_CW67_THADC_MUX_MAN_LSB                                               (9)
#define RF_CW67_THADC_MUX_MAN_WIDTH                                             (1)
#define RF_CW67_THADC_MUX_MAN_MASK                                              (0x00000200)
#define RF_CW67_THADC_MUX_MAN_BIT                                               (0x00000200)

#define RF_CW67_THADC_MUX_M_LSB                                                 (6)
#define RF_CW67_THADC_MUX_M_WIDTH                                               (3)
#define RF_CW67_THADC_MUX_M_MASK                                                (0x000001C0)

#define RF_CW68_THADC_EXT_M_LSB                                                 (19)
#define RF_CW68_THADC_EXT_M_WIDTH                                               (1)
#define RF_CW68_THADC_EXT_M_MASK                                                (0x00080000)
#define RF_CW68_THADC_EXT_M_BIT                                                 (0x00080000)

#define RF_CW68_THADC_SETTLING_LSB                                              (14)
#define RF_CW68_THADC_SETTLING_WIDTH                                            (2)
#define RF_CW68_THADC_SETTLING_MASK                                             (0x0000C000)

#define RF_CW68_THADC_LDO_SETTLING_LSB                                          (12)
#define RF_CW68_THADC_LDO_SETTLING_WIDTH                                        (2)
#define RF_CW68_THADC_LDO_SETTLING_MASK                                         (0x00003000)

#define RF_CW68_THADC_NET_L1RO_LSB                                              (0)
#define RF_CW68_THADC_NET_L1RO_WIDTH                                            (10)
#define RF_CW68_THADC_NET_L1RO_MASK                                             (0x000003FF)

#define RF_CW69_RG_THADC_INI_LSB                                                (10)
#define RF_CW69_RG_THADC_INI_WIDTH                                              (10)
#define RF_CW69_RG_THADC_INI_MASK                                               (0x000FFC00)

#define RF_CW69_RG_TEMP_INI_LSB                                                 (2)
#define RF_CW69_RG_TEMP_INI_WIDTH                                               (8)
#define RF_CW69_RG_TEMP_INI_MASK                                                (0x000003FC)

#define RF_CW69_THADC_FACT_CAL_EN_LSB                                           (0)
#define RF_CW69_THADC_FACT_CAL_EN_WIDTH                                         (1)
#define RF_CW69_THADC_FACT_CAL_EN_MASK                                          (0x00000001)
#define RF_CW69_THADC_FACT_CAL_EN_BIT                                           (0x00000001)

#define RF_CW70_THADC_NET_RO_LSB                                                (10)
#define RF_CW70_THADC_NET_RO_WIDTH                                              (10)
#define RF_CW70_THADC_NET_RO_MASK                                               (0x000FFC00)

#define RF_CW70_THADC_OFFSET_RO_LSB                                             (0)
#define RF_CW70_THADC_OFFSET_RO_WIDTH                                           (10)
#define RF_CW70_THADC_OFFSET_RO_MASK                                            (0x000003FF)

#define RF_CW71_SRX1_VCO1_TSENSOR_RO_LSB                                        (16)
#define RF_CW71_SRX1_VCO1_TSENSOR_RO_WIDTH                                      (4)
#define RF_CW71_SRX1_VCO1_TSENSOR_RO_MASK                                       (0x000F0000)

#define RF_CW71_SRX1_VCO1_TCL_DCSHIFT_LSB                                       (4)
#define RF_CW71_SRX1_VCO1_TCL_DCSHIFT_WIDTH                                     (8)
#define RF_CW71_SRX1_VCO1_TCL_DCSHIFT_MASK                                      (0x00000FF0)

#define RF_CW71_SRX1_VCO1_TCL_COEF_LSB                                          (0)
#define RF_CW71_SRX1_VCO1_TCL_COEF_WIDTH                                        (4)
#define RF_CW71_SRX1_VCO1_TCL_COEF_MASK                                         (0x0000000F)

#define RF_CW72_SRX1_VCO31_TSENSOR_RO_LSB                                       (16)
#define RF_CW72_SRX1_VCO31_TSENSOR_RO_WIDTH                                     (4)
#define RF_CW72_SRX1_VCO31_TSENSOR_RO_MASK                                      (0x000F0000)

#define RF_CW72_SRX1_VCO31_TCL_DCSHIFT_LSB                                      (4)
#define RF_CW72_SRX1_VCO31_TCL_DCSHIFT_WIDTH                                    (8)
#define RF_CW72_SRX1_VCO31_TCL_DCSHIFT_MASK                                     (0x00000FF0)

#define RF_CW72_SRX1_VCO31_TCL_COEF_LSB                                         (0)
#define RF_CW72_SRX1_VCO31_TCL_COEF_WIDTH                                       (4)
#define RF_CW72_SRX1_VCO31_TCL_COEF_MASK                                        (0x0000000F)

#define RF_CW73_SRX2_VCO2_TSENSOR_RO_LSB                                        (16)
#define RF_CW73_SRX2_VCO2_TSENSOR_RO_WIDTH                                      (4)
#define RF_CW73_SRX2_VCO2_TSENSOR_RO_MASK                                       (0x000F0000)

#define RF_CW73_SRX2_VCO2_TCL_DCSHIFT_LSB                                       (4)
#define RF_CW73_SRX2_VCO2_TCL_DCSHIFT_WIDTH                                     (8)
#define RF_CW73_SRX2_VCO2_TCL_DCSHIFT_MASK                                      (0x00000FF0)

#define RF_CW73_SRX2_VCO2_TCL_COEF_LSB                                          (0)
#define RF_CW73_SRX2_VCO2_TCL_COEF_WIDTH                                        (4)
#define RF_CW73_SRX2_VCO2_TCL_COEF_MASK                                         (0x0000000F)

#define RF_CW74_SRX2_VCO32_TSENSOR_RO_LSB                                       (16)
#define RF_CW74_SRX2_VCO32_TSENSOR_RO_WIDTH                                     (4)
#define RF_CW74_SRX2_VCO32_TSENSOR_RO_MASK                                      (0x000F0000)

#define RF_CW74_SRX2_VCO32_TCL_DCSHIFT_LSB                                      (4)
#define RF_CW74_SRX2_VCO32_TCL_DCSHIFT_WIDTH                                    (8)
#define RF_CW74_SRX2_VCO32_TCL_DCSHIFT_MASK                                     (0x00000FF0)

#define RF_CW74_SRX2_VCO32_TCL_COEF_LSB                                         (0)
#define RF_CW74_SRX2_VCO32_TCL_COEF_WIDTH                                       (4)
#define RF_CW74_SRX2_VCO32_TCL_COEF_MASK                                        (0x0000000F)

#define RF_CW128_SRX1_RSV0_LSB                                                  (9)
#define RF_CW128_SRX1_RSV0_WIDTH                                                (11)
#define RF_CW128_SRX1_RSV0_MASK                                                 (0x000FFE00)

#define RF_CW128_SRX1_LO_VSP_HI_LSB                                             (8)
#define RF_CW128_SRX1_LO_VSP_HI_WIDTH                                           (1)
#define RF_CW128_SRX1_LO_VSP_HI_MASK                                            (0x00000100)
#define RF_CW128_SRX1_LO_VSP_HI_BIT                                             (0x00000100)

#define RF_CW128_SRX1_BAND_SUBHI_LSB                                            (7)
#define RF_CW128_SRX1_BAND_SUBHI_WIDTH                                          (1)
#define RF_CW128_SRX1_BAND_SUBHI_MASK                                           (0x00000080)
#define RF_CW128_SRX1_BAND_SUBHI_BIT                                            (0x00000080)

#define RF_CW128_SRX1_BAND_LSB                                                  (0)
#define RF_CW128_SRX1_BAND_WIDTH                                                (6)
#define RF_CW128_SRX1_BAND_MASK                                                 (0x0000003F)

#define RF_CW129_SRX2_RSV0_LSB                                                  (9)
#define RF_CW129_SRX2_RSV0_WIDTH                                                (11)
#define RF_CW129_SRX2_RSV0_MASK                                                 (0x000FFE00)

#define RF_CW129_SRX2_LO_VSP_HI_LSB                                             (8)
#define RF_CW129_SRX2_LO_VSP_HI_WIDTH                                           (1)
#define RF_CW129_SRX2_LO_VSP_HI_MASK                                            (0x00000100)
#define RF_CW129_SRX2_LO_VSP_HI_BIT                                             (0x00000100)

#define RF_CW129_SRX2_BAND_SUBHI_LSB                                            (7)
#define RF_CW129_SRX2_BAND_SUBHI_WIDTH                                          (1)
#define RF_CW129_SRX2_BAND_SUBHI_MASK                                           (0x00000080)
#define RF_CW129_SRX2_BAND_SUBHI_BIT                                            (0x00000080)

#define RF_CW129_SRX2_BAND_LSB                                                  (0)
#define RF_CW129_SRX2_BAND_WIDTH                                                (6)
#define RF_CW129_SRX2_BAND_MASK                                                 (0x0000003F)

#define RF_CW130_SRX1_NINT_LSB                                                  (11)
#define RF_CW130_SRX1_NINT_WIDTH                                                (9)
#define RF_CW130_SRX1_NINT_MASK                                                 (0x000FF800)

#define RF_CW130_SRX1_NFRAC1_LSB                                                (0)
#define RF_CW130_SRX1_NFRAC1_WIDTH                                              (11)
#define RF_CW130_SRX1_NFRAC1_MASK                                               (0x000007FF)

#define RF_CW131_SRX1_NFRAC0_LSB                                                (8)
#define RF_CW131_SRX1_NFRAC0_WIDTH                                              (12)
#define RF_CW131_SRX1_NFRAC0_MASK                                               (0x000FFF00)

#define RF_CW131_SRX1_REF_DOUBLER_EN_LSB                                        (7)
#define RF_CW131_SRX1_REF_DOUBLER_EN_WIDTH                                      (1)
#define RF_CW131_SRX1_REF_DOUBLER_EN_MASK                                       (0x00000080)
#define RF_CW131_SRX1_REF_DOUBLER_EN_BIT                                        (0x00000080)

#define RF_CW131_SRX1_CAL_EN_LSB                                                (5)
#define RF_CW131_SRX1_CAL_EN_WIDTH                                              (1)
#define RF_CW131_SRX1_CAL_EN_MASK                                               (0x00000020)
#define RF_CW131_SRX1_CAL_EN_BIT                                                (0x00000020)

#define RF_CW131_SRX1_CAL_IMM_LSB                                               (4)
#define RF_CW131_SRX1_CAL_IMM_WIDTH                                             (1)
#define RF_CW131_SRX1_CAL_IMM_MASK                                              (0x00000010)
#define RF_CW131_SRX1_CAL_IMM_BIT                                               (0x00000010)

#define RF_CW131_SRX1_VCO1_SEL_LSB                                              (3)
#define RF_CW131_SRX1_VCO1_SEL_WIDTH                                            (1)
#define RF_CW131_SRX1_VCO1_SEL_MASK                                             (0x00000008)
#define RF_CW131_SRX1_VCO1_SEL_BIT                                              (0x00000008)

#define RF_CW131_SRX1_VCO_CFG_LSB                                               (0)
#define RF_CW131_SRX1_VCO_CFG_WIDTH                                             (3)
#define RF_CW131_SRX1_VCO_CFG_MASK                                              (0x00000007)

#define RF_CW132_SRX2_NINT_LSB                                                  (11)
#define RF_CW132_SRX2_NINT_WIDTH                                                (9)
#define RF_CW132_SRX2_NINT_MASK                                                 (0x000FF800)

#define RF_CW132_SRX2_NFRAC1_LSB                                                (0)
#define RF_CW132_SRX2_NFRAC1_WIDTH                                              (11)
#define RF_CW132_SRX2_NFRAC1_MASK                                               (0x000007FF)

#define RF_CW133_SRX2_NFRAC0_LSB                                                (8)
#define RF_CW133_SRX2_NFRAC0_WIDTH                                              (12)
#define RF_CW133_SRX2_NFRAC0_MASK                                               (0x000FFF00)

#define RF_CW133_SRX2_REF_DOUBLER_EN_LSB                                        (7)
#define RF_CW133_SRX2_REF_DOUBLER_EN_WIDTH                                      (1)
#define RF_CW133_SRX2_REF_DOUBLER_EN_MASK                                       (0x00000080)
#define RF_CW133_SRX2_REF_DOUBLER_EN_BIT                                        (0x00000080)

#define RF_CW133_SRX2_CAL_EN_LSB                                                (5)
#define RF_CW133_SRX2_CAL_EN_WIDTH                                              (1)
#define RF_CW133_SRX2_CAL_EN_MASK                                               (0x00000020)
#define RF_CW133_SRX2_CAL_EN_BIT                                                (0x00000020)

#define RF_CW133_SRX2_CAL_IMM_LSB                                               (4)
#define RF_CW133_SRX2_CAL_IMM_WIDTH                                             (1)
#define RF_CW133_SRX2_CAL_IMM_MASK                                              (0x00000010)
#define RF_CW133_SRX2_CAL_IMM_BIT                                               (0x00000010)

#define RF_CW133_SRX2_VCO2_SEL_LSB                                              (3)
#define RF_CW133_SRX2_VCO2_SEL_WIDTH                                            (1)
#define RF_CW133_SRX2_VCO2_SEL_MASK                                             (0x00000008)
#define RF_CW133_SRX2_VCO2_SEL_BIT                                              (0x00000008)

#define RF_CW133_SRX2_VCO_CFG_LSB                                               (0)
#define RF_CW133_SRX2_VCO_CFG_WIDTH                                             (3)
#define RF_CW133_SRX2_VCO_CFG_MASK                                              (0x00000007)

#define RF_CW134_SRX1_VCO_SUB_P_OFFSET_AUTO_LSB                                 (19)
#define RF_CW134_SRX1_VCO_SUB_P_OFFSET_AUTO_WIDTH                               (1)
#define RF_CW134_SRX1_VCO_SUB_P_OFFSET_AUTO_MASK                                (0x00080000)
#define RF_CW134_SRX1_VCO_SUB_P_OFFSET_AUTO_BIT                                 (0x00080000)

#define RF_CW134_SRX1_VCO_SUB_P_OFFSET_EN_LSB                                   (18)
#define RF_CW134_SRX1_VCO_SUB_P_OFFSET_EN_WIDTH                                 (1)
#define RF_CW134_SRX1_VCO_SUB_P_OFFSET_EN_MASK                                  (0x00040000)
#define RF_CW134_SRX1_VCO_SUB_P_OFFSET_EN_BIT                                   (0x00040000)

#define RF_CW134_SRX1_VCO_SUB_T_OFFSET_EN_LSB                                   (17)
#define RF_CW134_SRX1_VCO_SUB_T_OFFSET_EN_WIDTH                                 (1)
#define RF_CW134_SRX1_VCO_SUB_T_OFFSET_EN_MASK                                  (0x00020000)
#define RF_CW134_SRX1_VCO_SUB_T_OFFSET_EN_BIT                                   (0x00020000)

#define RF_CW134_SRX1_VCO_SUB_OFFSET_SIGN_LSB                                   (16)
#define RF_CW134_SRX1_VCO_SUB_OFFSET_SIGN_WIDTH                                 (1)
#define RF_CW134_SRX1_VCO_SUB_OFFSET_SIGN_MASK                                  (0x00010000)
#define RF_CW134_SRX1_VCO_SUB_OFFSET_SIGN_BIT                                   (0x00010000)

#define RF_CW134_SRX1_VCO_SUB_OFFSET_LSB                                        (8)
#define RF_CW134_SRX1_VCO_SUB_OFFSET_WIDTH                                      (8)
#define RF_CW134_SRX1_VCO_SUB_OFFSET_MASK                                       (0x0000FF00)

#define RF_CW134_SRX1_N_OFFSET_EN_LSB                                           (7)
#define RF_CW134_SRX1_N_OFFSET_EN_WIDTH                                         (1)
#define RF_CW134_SRX1_N_OFFSET_EN_MASK                                          (0x00000080)
#define RF_CW134_SRX1_N_OFFSET_EN_BIT                                           (0x00000080)

#define RF_CW134_SRX1_N_OFFSET_SIGN_LSB                                         (6)
#define RF_CW134_SRX1_N_OFFSET_SIGN_WIDTH                                       (1)
#define RF_CW134_SRX1_N_OFFSET_SIGN_MASK                                        (0x00000040)
#define RF_CW134_SRX1_N_OFFSET_SIGN_BIT                                         (0x00000040)

#define RF_CW134_SRX1_NINT_OFFSET_LSB                                           (3)
#define RF_CW134_SRX1_NINT_OFFSET_WIDTH                                         (2)
#define RF_CW134_SRX1_NINT_OFFSET_MASK                                          (0x00000018)

#define RF_CW134_SRX1_NFRAC_OFFSET1_LSB                                         (0)
#define RF_CW134_SRX1_NFRAC_OFFSET1_WIDTH                                       (3)
#define RF_CW134_SRX1_NFRAC_OFFSET1_MASK                                        (0x00000007)

#define RF_CW135_SRX1_NFRAC_OFFSET0_LSB                                         (0)
#define RF_CW135_SRX1_NFRAC_OFFSET0_WIDTH                                       (20)
#define RF_CW135_SRX1_NFRAC_OFFSET0_MASK                                        (0x000FFFFF)

#define RF_CW136_SRX2_VCO_SUB_P_OFFSET_AUTO_LSB                                 (19)
#define RF_CW136_SRX2_VCO_SUB_P_OFFSET_AUTO_WIDTH                               (1)
#define RF_CW136_SRX2_VCO_SUB_P_OFFSET_AUTO_MASK                                (0x00080000)
#define RF_CW136_SRX2_VCO_SUB_P_OFFSET_AUTO_BIT                                 (0x00080000)

#define RF_CW136_SRX2_VCO_SUB_P_OFFSET_EN_LSB                                   (18)
#define RF_CW136_SRX2_VCO_SUB_P_OFFSET_EN_WIDTH                                 (1)
#define RF_CW136_SRX2_VCO_SUB_P_OFFSET_EN_MASK                                  (0x00040000)
#define RF_CW136_SRX2_VCO_SUB_P_OFFSET_EN_BIT                                   (0x00040000)

#define RF_CW136_SRX2_VCO_SUB_T_OFFSET_EN_LSB                                   (17)
#define RF_CW136_SRX2_VCO_SUB_T_OFFSET_EN_WIDTH                                 (1)
#define RF_CW136_SRX2_VCO_SUB_T_OFFSET_EN_MASK                                  (0x00020000)
#define RF_CW136_SRX2_VCO_SUB_T_OFFSET_EN_BIT                                   (0x00020000)

#define RF_CW136_SRX2_VCO_SUB_OFFSET_SIGN_LSB                                   (16)
#define RF_CW136_SRX2_VCO_SUB_OFFSET_SIGN_WIDTH                                 (1)
#define RF_CW136_SRX2_VCO_SUB_OFFSET_SIGN_MASK                                  (0x00010000)
#define RF_CW136_SRX2_VCO_SUB_OFFSET_SIGN_BIT                                   (0x00010000)

#define RF_CW136_SRX2_VCO_SUB_OFFSET_LSB                                        (8)
#define RF_CW136_SRX2_VCO_SUB_OFFSET_WIDTH                                      (8)
#define RF_CW136_SRX2_VCO_SUB_OFFSET_MASK                                       (0x0000FF00)

#define RF_CW136_SRX2_N_OFFSET_EN_LSB                                           (7)
#define RF_CW136_SRX2_N_OFFSET_EN_WIDTH                                         (1)
#define RF_CW136_SRX2_N_OFFSET_EN_MASK                                          (0x00000080)
#define RF_CW136_SRX2_N_OFFSET_EN_BIT                                           (0x00000080)

#define RF_CW136_SRX2_N_OFFSET_SIGN_LSB                                         (6)
#define RF_CW136_SRX2_N_OFFSET_SIGN_WIDTH                                       (1)
#define RF_CW136_SRX2_N_OFFSET_SIGN_MASK                                        (0x00000040)
#define RF_CW136_SRX2_N_OFFSET_SIGN_BIT                                         (0x00000040)

#define RF_CW136_SRX2_NINT_OFFSET_LSB                                           (3)
#define RF_CW136_SRX2_NINT_OFFSET_WIDTH                                         (2)
#define RF_CW136_SRX2_NINT_OFFSET_MASK                                          (0x00000018)

#define RF_CW136_SRX2_NFRAC_OFFSET1_LSB                                         (0)
#define RF_CW136_SRX2_NFRAC_OFFSET1_WIDTH                                       (3)
#define RF_CW136_SRX2_NFRAC_OFFSET1_MASK                                        (0x00000007)

#define RF_CW137_SRX2_NFRAC_OFFSET0_LSB                                         (0)
#define RF_CW137_SRX2_NFRAC_OFFSET0_WIDTH                                       (20)
#define RF_CW137_SRX2_NFRAC_OFFSET0_MASK                                        (0x000FFFFF)

#define RF_CW138_SRX1_2G_CAL_T_LSB                                              (10)
#define RF_CW138_SRX1_2G_CAL_T_WIDTH                                            (10)
#define RF_CW138_SRX1_2G_CAL_T_MASK                                             (0x000FFC00)

#define RF_CW138_SRX1_2G_WARMUP_T_LSB                                           (0)
#define RF_CW138_SRX1_2G_WARMUP_T_WIDTH                                         (10)
#define RF_CW138_SRX1_2G_WARMUP_T_MASK                                          (0x000003FF)

#define RF_CW139_SRX1_FDD_CAL_T_LSB                                             (10)
#define RF_CW139_SRX1_FDD_CAL_T_WIDTH                                           (10)
#define RF_CW139_SRX1_FDD_CAL_T_MASK                                            (0x000FFC00)

#define RF_CW139_SRX1_FDD_WARMUP_T_LSB                                          (0)
#define RF_CW139_SRX1_FDD_WARMUP_T_WIDTH                                        (10)
#define RF_CW139_SRX1_FDD_WARMUP_T_MASK                                         (0x000003FF)

#define RF_CW140_SRX1_TDD_CAL_T_LSB                                             (10)
#define RF_CW140_SRX1_TDD_CAL_T_WIDTH                                           (10)
#define RF_CW140_SRX1_TDD_CAL_T_MASK                                            (0x000FFC00)

#define RF_CW140_SRX1_TDD_WARMUP_T_LSB                                          (0)
#define RF_CW140_SRX1_TDD_WARMUP_T_WIDTH                                        (10)
#define RF_CW140_SRX1_TDD_WARMUP_T_MASK                                         (0x000003FF)

#define RF_CW141_SRX1_C2K_CAL_T_LSB                                             (10)
#define RF_CW141_SRX1_C2K_CAL_T_WIDTH                                           (10)
#define RF_CW141_SRX1_C2K_CAL_T_MASK                                            (0x000FFC00)

#define RF_CW141_SRX1_C2K_WARMUP_T_LSB                                          (0)
#define RF_CW141_SRX1_C2K_WARMUP_T_WIDTH                                        (10)
#define RF_CW141_SRX1_C2K_WARMUP_T_MASK                                         (0x000003FF)

#define RF_CW142_SRX1_LDO_PFD_RBG_LSB                                           (14)
#define RF_CW142_SRX1_LDO_PFD_RBG_WIDTH                                         (5)
#define RF_CW142_SRX1_LDO_PFD_RBG_MASK                                          (0x0007C000)

#define RF_CW142_SRX1_LDO_MMD_RBG_LSB                                           (8)
#define RF_CW142_SRX1_LDO_MMD_RBG_WIDTH                                         (5)
#define RF_CW142_SRX1_LDO_MMD_RBG_MASK                                          (0x00001F00)

#define RF_CW142_SRX1_LDO_VCO_RBG_LSB                                           (2)
#define RF_CW142_SRX1_LDO_VCO_RBG_WIDTH                                         (5)
#define RF_CW142_SRX1_LDO_VCO_RBG_MASK                                          (0x0000007C)

#define RF_CW142_SRX1_LDO_FCOFF_M_LSB                                           (1)
#define RF_CW142_SRX1_LDO_FCOFF_M_WIDTH                                         (1)
#define RF_CW142_SRX1_LDO_FCOFF_M_MASK                                          (0x00000002)
#define RF_CW142_SRX1_LDO_FCOFF_M_BIT                                           (0x00000002)

#define RF_CW142_SRX1_LDO_FCOFF_LSB                                             (0)
#define RF_CW142_SRX1_LDO_FCOFF_WIDTH                                           (1)
#define RF_CW142_SRX1_LDO_FCOFF_MASK                                            (0x00000001)
#define RF_CW142_SRX1_LDO_FCOFF_BIT                                             (0x00000001)

#define RF_CW143_SRX1_LF_SW_EN_LSB                                              (19)
#define RF_CW143_SRX1_LF_SW_EN_WIDTH                                            (1)
#define RF_CW143_SRX1_LF_SW_EN_MASK                                             (0x00080000)
#define RF_CW143_SRX1_LF_SW_EN_BIT                                              (0x00080000)

#define RF_CW143_SRX1_REF_EN_LSB                                                (18)
#define RF_CW143_SRX1_REF_EN_WIDTH                                              (1)
#define RF_CW143_SRX1_REF_EN_MASK                                               (0x00040000)
#define RF_CW143_SRX1_REF_EN_BIT                                                (0x00040000)

#define RF_CW143_SRX1_PFD_EN_LSB                                                (17)
#define RF_CW143_SRX1_PFD_EN_WIDTH                                              (1)
#define RF_CW143_SRX1_PFD_EN_MASK                                               (0x00020000)
#define RF_CW143_SRX1_PFD_EN_BIT                                                (0x00020000)

#define RF_CW143_SRX1_CP_EN_LSB                                                 (16)
#define RF_CW143_SRX1_CP_EN_WIDTH                                               (1)
#define RF_CW143_SRX1_CP_EN_MASK                                                (0x00010000)
#define RF_CW143_SRX1_CP_EN_BIT                                                 (0x00010000)

#define RF_CW143_SRX1_MMD_EN_LSB                                                (15)
#define RF_CW143_SRX1_MMD_EN_WIDTH                                              (1)
#define RF_CW143_SRX1_MMD_EN_MASK                                               (0x00008000)
#define RF_CW143_SRX1_MMD_EN_BIT                                                (0x00008000)

#define RF_CW143_SRX1_VCOBUF_EN_LSB                                             (14)
#define RF_CW143_SRX1_VCOBUF_EN_WIDTH                                           (1)
#define RF_CW143_SRX1_VCOBUF_EN_MASK                                            (0x00004000)
#define RF_CW143_SRX1_VCOBUF_EN_BIT                                             (0x00004000)

#define RF_CW143_SRX1_SUBCKT_EN_M_LSB                                           (13)
#define RF_CW143_SRX1_SUBCKT_EN_M_WIDTH                                         (1)
#define RF_CW143_SRX1_SUBCKT_EN_M_MASK                                          (0x00002000)
#define RF_CW143_SRX1_SUBCKT_EN_M_BIT                                           (0x00002000)

#define RF_CW143_SRX1_TCL_EN_LSB                                                (12)
#define RF_CW143_SRX1_TCL_EN_WIDTH                                              (1)
#define RF_CW143_SRX1_TCL_EN_MASK                                               (0x00001000)
#define RF_CW143_SRX1_TCL_EN_BIT                                                (0x00001000)

#define RF_CW143_SRX1_LDO_VCO31_BYPASS_LSB                                      (11)
#define RF_CW143_SRX1_LDO_VCO31_BYPASS_WIDTH                                    (1)
#define RF_CW143_SRX1_LDO_VCO31_BYPASS_MASK                                     (0x00000800)
#define RF_CW143_SRX1_LDO_VCO31_BYPASS_BIT                                      (0x00000800)

#define RF_CW143_SRX1_LDO_VCO1_BYPASS_LSB                                       (10)
#define RF_CW143_SRX1_LDO_VCO1_BYPASS_WIDTH                                     (1)
#define RF_CW143_SRX1_LDO_VCO1_BYPASS_MASK                                      (0x00000400)
#define RF_CW143_SRX1_LDO_VCO1_BYPASS_BIT                                       (0x00000400)

#define RF_CW143_SRX1_LDO_PFD_EN_M_LSB                                          (9)
#define RF_CW143_SRX1_LDO_PFD_EN_M_WIDTH                                        (1)
#define RF_CW143_SRX1_LDO_PFD_EN_M_MASK                                         (0x00000200)
#define RF_CW143_SRX1_LDO_PFD_EN_M_BIT                                          (0x00000200)

#define RF_CW143_SRX1_LDO_MMD_EN_M_LSB                                          (8)
#define RF_CW143_SRX1_LDO_MMD_EN_M_WIDTH                                        (1)
#define RF_CW143_SRX1_LDO_MMD_EN_M_MASK                                         (0x00000100)
#define RF_CW143_SRX1_LDO_MMD_EN_M_BIT                                          (0x00000100)

#define RF_CW143_SRX1_LDO_VCO_EN_M_LSB                                          (7)
#define RF_CW143_SRX1_LDO_VCO_EN_M_WIDTH                                        (1)
#define RF_CW143_SRX1_LDO_VCO_EN_M_MASK                                         (0x00000080)
#define RF_CW143_SRX1_LDO_VCO_EN_M_BIT                                          (0x00000080)

#define RF_CW143_SRX1_VCO1_EN_M_LSB                                             (6)
#define RF_CW143_SRX1_VCO1_EN_M_WIDTH                                           (1)
#define RF_CW143_SRX1_VCO1_EN_M_MASK                                            (0x00000040)
#define RF_CW143_SRX1_VCO1_EN_M_BIT                                             (0x00000040)

#define RF_CW143_SRX1_VCO31_EN_M_LSB                                            (5)
#define RF_CW143_SRX1_VCO31_EN_M_WIDTH                                          (1)
#define RF_CW143_SRX1_VCO31_EN_M_MASK                                           (0x00000020)
#define RF_CW143_SRX1_VCO31_EN_M_BIT                                            (0x00000020)

#define RF_CW143_SRX1_LDO_PFD_EN_LSB                                            (4)
#define RF_CW143_SRX1_LDO_PFD_EN_WIDTH                                          (1)
#define RF_CW143_SRX1_LDO_PFD_EN_MASK                                           (0x00000010)
#define RF_CW143_SRX1_LDO_PFD_EN_BIT                                            (0x00000010)

#define RF_CW143_SRX1_LDO_MMD_EN_LSB                                            (3)
#define RF_CW143_SRX1_LDO_MMD_EN_WIDTH                                          (1)
#define RF_CW143_SRX1_LDO_MMD_EN_MASK                                           (0x00000008)
#define RF_CW143_SRX1_LDO_MMD_EN_BIT                                            (0x00000008)

#define RF_CW143_SRX1_LDO_VCO_EN_LSB                                            (2)
#define RF_CW143_SRX1_LDO_VCO_EN_WIDTH                                          (1)
#define RF_CW143_SRX1_LDO_VCO_EN_MASK                                           (0x00000004)
#define RF_CW143_SRX1_LDO_VCO_EN_BIT                                            (0x00000004)

#define RF_CW143_SRX1_VCO1_EN_LSB                                               (1)
#define RF_CW143_SRX1_VCO1_EN_WIDTH                                             (1)
#define RF_CW143_SRX1_VCO1_EN_MASK                                              (0x00000002)
#define RF_CW143_SRX1_VCO1_EN_BIT                                               (0x00000002)

#define RF_CW143_SRX1_VCO31_EN_LSB                                              (0)
#define RF_CW143_SRX1_VCO31_EN_WIDTH                                            (1)
#define RF_CW143_SRX1_VCO31_EN_MASK                                             (0x00000001)
#define RF_CW143_SRX1_VCO31_EN_BIT                                              (0x00000001)

#define RF_CW144_SRX1_LDO_LVL_PFD_LSB                                           (18)
#define RF_CW144_SRX1_LDO_LVL_PFD_WIDTH                                         (2)
#define RF_CW144_SRX1_LDO_LVL_PFD_MASK                                          (0x000C0000)

#define RF_CW144_SRX1_LDO_LVL_MMD_LSB                                           (16)
#define RF_CW144_SRX1_LDO_LVL_MMD_WIDTH                                         (2)
#define RF_CW144_SRX1_LDO_LVL_MMD_MASK                                          (0x00030000)

#define RF_CW144_SRX1_TOP_EN_LSB                                                (14)
#define RF_CW144_SRX1_TOP_EN_WIDTH                                              (1)
#define RF_CW144_SRX1_TOP_EN_MASK                                               (0x00004000)
#define RF_CW144_SRX1_TOP_EN_BIT                                                (0x00004000)

#define RF_CW144_SRX1_VCO31_DIV2_EN_LSB                                         (13)
#define RF_CW144_SRX1_VCO31_DIV2_EN_WIDTH                                       (1)
#define RF_CW144_SRX1_VCO31_DIV2_EN_MASK                                        (0x00002000)
#define RF_CW144_SRX1_VCO31_DIV2_EN_BIT                                         (0x00002000)

#define RF_CW144_SRX1_LDO_R_BYPASS_REF_LSB                                      (12)
#define RF_CW144_SRX1_LDO_R_BYPASS_REF_WIDTH                                    (1)
#define RF_CW144_SRX1_LDO_R_BYPASS_REF_MASK                                     (0x00001000)
#define RF_CW144_SRX1_LDO_R_BYPASS_REF_BIT                                      (0x00001000)

#define RF_CW144_SRX1_LDO_R_BYPASS_PFD_LSB                                      (11)
#define RF_CW144_SRX1_LDO_R_BYPASS_PFD_WIDTH                                    (1)
#define RF_CW144_SRX1_LDO_R_BYPASS_PFD_MASK                                     (0x00000800)
#define RF_CW144_SRX1_LDO_R_BYPASS_PFD_BIT                                      (0x00000800)

#define RF_CW144_SRX1_LDO_R_BYPASS_CP_LSB                                       (10)
#define RF_CW144_SRX1_LDO_R_BYPASS_CP_WIDTH                                     (1)
#define RF_CW144_SRX1_LDO_R_BYPASS_CP_MASK                                      (0x00000400)
#define RF_CW144_SRX1_LDO_R_BYPASS_CP_BIT                                       (0x00000400)

#define RF_CW144_SRX1_MMDDRV_VSP_LSB                                            (8)
#define RF_CW144_SRX1_MMDDRV_VSP_WIDTH                                          (2)
#define RF_CW144_SRX1_MMDDRV_VSP_MASK                                           (0x00000300)

#define RF_CW144_SRX1_HBUF_VSP_LSB                                              (6)
#define RF_CW144_SRX1_HBUF_VSP_WIDTH                                            (2)
#define RF_CW144_SRX1_HBUF_VSP_MASK                                             (0x000000C0)

#define RF_CW144_SRX1_LDO_R_BYPASS_MMD_LSB                                      (4)
#define RF_CW144_SRX1_LDO_R_BYPASS_MMD_WIDTH                                    (2)
#define RF_CW144_SRX1_LDO_R_BYPASS_MMD_MASK                                     (0x00000030)

#define RF_CW144_SRX1_LDO_R_BYPASS_RETIMER_LSB                                  (2)
#define RF_CW144_SRX1_LDO_R_BYPASS_RETIMER_WIDTH                                (2)
#define RF_CW144_SRX1_LDO_R_BYPASS_RETIMER_MASK                                 (0x0000000C)

#define RF_CW144_SRX1_LDO_R_BYPASS_SDM_LSB                                      (0)
#define RF_CW144_SRX1_LDO_R_BYPASS_SDM_WIDTH                                    (2)
#define RF_CW144_SRX1_LDO_R_BYPASS_SDM_MASK                                     (0x00000003)

#define RF_CW145_SRX1_DCC_FINISH_M_LSB                                          (19)
#define RF_CW145_SRX1_DCC_FINISH_M_WIDTH                                        (1)
#define RF_CW145_SRX1_DCC_FINISH_M_MASK                                         (0x00080000)
#define RF_CW145_SRX1_DCC_FINISH_M_BIT                                          (0x00080000)

#define RF_CW145_SRX1_DCC_FINISH_LSB                                            (18)
#define RF_CW145_SRX1_DCC_FINISH_WIDTH                                          (1)
#define RF_CW145_SRX1_DCC_FINISH_MASK                                           (0x00040000)
#define RF_CW145_SRX1_DCC_FINISH_BIT                                            (0x00040000)

#define RF_CW145_SRX1_ACFINISH_M_LSB                                            (17)
#define RF_CW145_SRX1_ACFINISH_M_WIDTH                                          (1)
#define RF_CW145_SRX1_ACFINISH_M_MASK                                           (0x00020000)
#define RF_CW145_SRX1_ACFINISH_M_BIT                                            (0x00020000)

#define RF_CW145_SRX1_ACFINISH_LSB                                              (16)
#define RF_CW145_SRX1_ACFINISH_WIDTH                                            (1)
#define RF_CW145_SRX1_ACFINISH_MASK                                             (0x00010000)
#define RF_CW145_SRX1_ACFINISH_BIT                                              (0x00010000)

#define RF_CW145_SRX1_RSV1_LSB                                                  (9)
#define RF_CW145_SRX1_RSV1_WIDTH                                                (4)
#define RF_CW145_SRX1_RSV1_MASK                                                 (0x00001E00)

#define RF_CW145_SRX1_LDO_LVL_VCO31_C2K_LSB                                     (6)
#define RF_CW145_SRX1_LDO_LVL_VCO31_C2K_WIDTH                                   (3)
#define RF_CW145_SRX1_LDO_LVL_VCO31_C2K_MASK                                    (0x000001C0)

#define RF_CW145_SRX1_LDO_LVL_VCO31_2G_LSB                                      (3)
#define RF_CW145_SRX1_LDO_LVL_VCO31_2G_WIDTH                                    (3)
#define RF_CW145_SRX1_LDO_LVL_VCO31_2G_MASK                                     (0x00000038)

#define RF_CW145_SRX1_LDO_LVL_VCO31_CA_LSB                                      (0)
#define RF_CW145_SRX1_LDO_LVL_VCO31_CA_WIDTH                                    (3)
#define RF_CW145_SRX1_LDO_LVL_VCO31_CA_MASK                                     (0x00000007)

#define RF_CW146_SRX1_VCO31_VTUNE_FCAL_C2K_LSB                                  (13)
#define RF_CW146_SRX1_VCO31_VTUNE_FCAL_C2K_WIDTH                                (2)
#define RF_CW146_SRX1_VCO31_VTUNE_FCAL_C2K_MASK                                 (0x00006000)

#define RF_CW146_SRX1_VCO31_VTUNE_FCAL_2G_LSB                                   (11)
#define RF_CW146_SRX1_VCO31_VTUNE_FCAL_2G_WIDTH                                 (2)
#define RF_CW146_SRX1_VCO31_VTUNE_FCAL_2G_MASK                                  (0x00001800)

#define RF_CW146_SRX1_VCO31_VTUNE_FCAL_CA_LSB                                   (9)
#define RF_CW146_SRX1_VCO31_VTUNE_FCAL_CA_WIDTH                                 (2)
#define RF_CW146_SRX1_VCO31_VTUNE_FCAL_CA_MASK                                  (0x00000600)

#define RF_CW146_SRX1_VCO31_VAR_BIAS_C2K_LSB                                    (6)
#define RF_CW146_SRX1_VCO31_VAR_BIAS_C2K_WIDTH                                  (3)
#define RF_CW146_SRX1_VCO31_VAR_BIAS_C2K_MASK                                   (0x000001C0)

#define RF_CW146_SRX1_VCO31_VAR_BIAS_2G_LSB                                     (3)
#define RF_CW146_SRX1_VCO31_VAR_BIAS_2G_WIDTH                                   (3)
#define RF_CW146_SRX1_VCO31_VAR_BIAS_2G_MASK                                    (0x00000038)

#define RF_CW146_SRX1_VCO31_VAR_BIAS_CA_LSB                                     (0)
#define RF_CW146_SRX1_VCO31_VAR_BIAS_CA_WIDTH                                   (3)
#define RF_CW146_SRX1_VCO31_VAR_BIAS_CA_MASK                                    (0x00000007)

#define RF_CW147_SRX1_VCO1_SCA_VSP_INDLR_HP_LSB                                 (18)
#define RF_CW147_SRX1_VCO1_SCA_VSP_INDLR_HP_WIDTH                               (2)
#define RF_CW147_SRX1_VCO1_SCA_VSP_INDLR_HP_MASK                                (0x000C0000)

#define RF_CW147_SRX1_VCO1_SCA_VSP_INDLR_LP_LSB                                 (16)
#define RF_CW147_SRX1_VCO1_SCA_VSP_INDLR_LP_WIDTH                               (2)
#define RF_CW147_SRX1_VCO1_SCA_VSP_INDLR_LP_MASK                                (0x00030000)

#define RF_CW147_SRX1_VCO1_SCA_VSP_INDSM_HP_LSB                                 (14)
#define RF_CW147_SRX1_VCO1_SCA_VSP_INDSM_HP_WIDTH                               (2)
#define RF_CW147_SRX1_VCO1_SCA_VSP_INDSM_HP_MASK                                (0x0000C000)

#define RF_CW147_SRX1_VCO1_SCA_VSP_INDSM_LP_LSB                                 (12)
#define RF_CW147_SRX1_VCO1_SCA_VSP_INDSM_LP_WIDTH                               (2)
#define RF_CW147_SRX1_VCO1_SCA_VSP_INDSM_LP_MASK                                (0x00003000)

#define RF_CW147_SRX1_LDO_LVL_VCO1_INDLR_HP_LSB                                 (9)
#define RF_CW147_SRX1_LDO_LVL_VCO1_INDLR_HP_WIDTH                               (3)
#define RF_CW147_SRX1_LDO_LVL_VCO1_INDLR_HP_MASK                                (0x00000E00)

#define RF_CW147_SRX1_LDO_LVL_VCO1_INDLR_LP_LSB                                 (6)
#define RF_CW147_SRX1_LDO_LVL_VCO1_INDLR_LP_WIDTH                               (3)
#define RF_CW147_SRX1_LDO_LVL_VCO1_INDLR_LP_MASK                                (0x000001C0)

#define RF_CW147_SRX1_LDO_LVL_VCO1_INDSM_HP_LSB                                 (3)
#define RF_CW147_SRX1_LDO_LVL_VCO1_INDSM_HP_WIDTH                               (3)
#define RF_CW147_SRX1_LDO_LVL_VCO1_INDSM_HP_MASK                                (0x00000038)

#define RF_CW147_SRX1_LDO_LVL_VCO1_INDSM_LP_LSB                                 (0)
#define RF_CW147_SRX1_LDO_LVL_VCO1_INDSM_LP_WIDTH                               (3)
#define RF_CW147_SRX1_LDO_LVL_VCO1_INDSM_LP_MASK                                (0x00000007)

#define RF_CW148_SRX1_VCO1_VTUNE_FCAL_INDLR_HP_LSB                              (18)
#define RF_CW148_SRX1_VCO1_VTUNE_FCAL_INDLR_HP_WIDTH                            (2)
#define RF_CW148_SRX1_VCO1_VTUNE_FCAL_INDLR_HP_MASK                             (0x000C0000)

#define RF_CW148_SRX1_VCO1_VTUNE_FCAL_INDLR_LP_LSB                              (16)
#define RF_CW148_SRX1_VCO1_VTUNE_FCAL_INDLR_LP_WIDTH                            (2)
#define RF_CW148_SRX1_VCO1_VTUNE_FCAL_INDLR_LP_MASK                             (0x00030000)

#define RF_CW148_SRX1_VCO1_VTUNE_FCAL_INDSM_HP_LSB                              (14)
#define RF_CW148_SRX1_VCO1_VTUNE_FCAL_INDSM_HP_WIDTH                            (2)
#define RF_CW148_SRX1_VCO1_VTUNE_FCAL_INDSM_HP_MASK                             (0x0000C000)

#define RF_CW148_SRX1_VCO1_VTUNE_FCAL_INDSM_LP_LSB                              (12)
#define RF_CW148_SRX1_VCO1_VTUNE_FCAL_INDSM_LP_WIDTH                            (2)
#define RF_CW148_SRX1_VCO1_VTUNE_FCAL_INDSM_LP_MASK                             (0x00003000)

#define RF_CW148_SRX1_VCO1_VAR_BIAS_INDLR_HP_LSB                                (9)
#define RF_CW148_SRX1_VCO1_VAR_BIAS_INDLR_HP_WIDTH                              (3)
#define RF_CW148_SRX1_VCO1_VAR_BIAS_INDLR_HP_MASK                               (0x00000E00)

#define RF_CW148_SRX1_VCO1_VAR_BIAS_INDLR_LP_LSB                                (6)
#define RF_CW148_SRX1_VCO1_VAR_BIAS_INDLR_LP_WIDTH                              (3)
#define RF_CW148_SRX1_VCO1_VAR_BIAS_INDLR_LP_MASK                               (0x000001C0)

#define RF_CW148_SRX1_VCO1_VAR_BIAS_INDSM_HP_LSB                                (3)
#define RF_CW148_SRX1_VCO1_VAR_BIAS_INDSM_HP_WIDTH                              (3)
#define RF_CW148_SRX1_VCO1_VAR_BIAS_INDSM_HP_MASK                               (0x00000038)

#define RF_CW148_SRX1_VCO1_VAR_BIAS_INDSM_LP_LSB                                (0)
#define RF_CW148_SRX1_VCO1_VAR_BIAS_INDSM_LP_WIDTH                              (3)
#define RF_CW148_SRX1_VCO1_VAR_BIAS_INDSM_LP_MASK                               (0x00000007)

#define RF_CW149_SRX1_VCO1_NV_VSP_R_2G_LSB                                      (18)
#define RF_CW149_SRX1_VCO1_NV_VSP_R_2G_WIDTH                                    (2)
#define RF_CW149_SRX1_VCO1_NV_VSP_R_2G_MASK                                     (0x000C0000)

#define RF_CW149_SRX1_VCO1_NV_VSP_R_TDD_LSB                                     (16)
#define RF_CW149_SRX1_VCO1_NV_VSP_R_TDD_WIDTH                                   (2)
#define RF_CW149_SRX1_VCO1_NV_VSP_R_TDD_MASK                                    (0x00030000)

#define RF_CW149_SRX1_VCO1_SEQACAL_EN_7_LSB                                     (15)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_7_WIDTH                                   (1)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_7_MASK                                    (0x00008000)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_7_BIT                                     (0x00008000)

#define RF_CW149_SRX1_VCO1_SEQACAL_EN_6_LSB                                     (14)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_6_WIDTH                                   (1)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_6_MASK                                    (0x00004000)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_6_BIT                                     (0x00004000)

#define RF_CW149_SRX1_VCO1_SEQACAL_EN_5_LSB                                     (13)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_5_WIDTH                                   (1)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_5_MASK                                    (0x00002000)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_5_BIT                                     (0x00002000)

#define RF_CW149_SRX1_VCO1_SEQACAL_EN_4_LSB                                     (12)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_4_WIDTH                                   (1)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_4_MASK                                    (0x00001000)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_4_BIT                                     (0x00001000)

#define RF_CW149_SRX1_VCO1_SEQACAL_EN_3_LSB                                     (11)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_3_WIDTH                                   (1)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_3_MASK                                    (0x00000800)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_3_BIT                                     (0x00000800)

#define RF_CW149_SRX1_VCO1_SEQACAL_EN_2_LSB                                     (10)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_2_WIDTH                                   (1)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_2_MASK                                    (0x00000400)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_2_BIT                                     (0x00000400)

#define RF_CW149_SRX1_VCO1_SEQACAL_EN_1_LSB                                     (9)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_1_WIDTH                                   (1)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_1_MASK                                    (0x00000200)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_1_BIT                                     (0x00000200)

#define RF_CW149_SRX1_VCO1_SEQACAL_EN_0_LSB                                     (8)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_0_WIDTH                                   (1)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_0_MASK                                    (0x00000100)
#define RF_CW149_SRX1_VCO1_SEQACAL_EN_0_BIT                                     (0x00000100)

#define RF_CW149_SRX1_VCO31_SEQACAL_EN_7_LSB                                    (7)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_7_WIDTH                                  (1)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_7_MASK                                   (0x00000080)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_7_BIT                                    (0x00000080)

#define RF_CW149_SRX1_VCO31_SEQACAL_EN_6_LSB                                    (6)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_6_WIDTH                                  (1)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_6_MASK                                   (0x00000040)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_6_BIT                                    (0x00000040)

#define RF_CW149_SRX1_VCO31_SEQACAL_EN_5_LSB                                    (5)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_5_WIDTH                                  (1)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_5_MASK                                   (0x00000020)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_5_BIT                                    (0x00000020)

#define RF_CW149_SRX1_VCO31_SEQACAL_EN_4_LSB                                    (4)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_4_WIDTH                                  (1)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_4_MASK                                   (0x00000010)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_4_BIT                                    (0x00000010)

#define RF_CW149_SRX1_VCO31_SEQACAL_EN_3_LSB                                    (3)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_3_WIDTH                                  (1)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_3_MASK                                   (0x00000008)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_3_BIT                                    (0x00000008)

#define RF_CW149_SRX1_VCO31_SEQACAL_EN_2_LSB                                    (2)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_2_WIDTH                                  (1)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_2_MASK                                   (0x00000004)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_2_BIT                                    (0x00000004)

#define RF_CW149_SRX1_VCO31_SEQACAL_EN_1_LSB                                    (1)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_1_WIDTH                                  (1)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_1_MASK                                   (0x00000002)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_1_BIT                                    (0x00000002)

#define RF_CW149_SRX1_VCO31_SEQACAL_EN_0_LSB                                    (0)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_0_WIDTH                                  (1)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_0_MASK                                   (0x00000001)
#define RF_CW149_SRX1_VCO31_SEQACAL_EN_0_BIT                                    (0x00000001)

#define RF_CW150_SRX1_VCO1_BUF_VSP5_LSB                                         (15)
#define RF_CW150_SRX1_VCO1_BUF_VSP5_WIDTH                                       (3)
#define RF_CW150_SRX1_VCO1_BUF_VSP5_MASK                                        (0x00038000)

#define RF_CW150_SRX1_VCO1_BUF_VSP4_LSB                                         (12)
#define RF_CW150_SRX1_VCO1_BUF_VSP4_WIDTH                                       (3)
#define RF_CW150_SRX1_VCO1_BUF_VSP4_MASK                                        (0x00007000)

#define RF_CW150_SRX1_VCO1_BUF_VSP3_LSB                                         (9)
#define RF_CW150_SRX1_VCO1_BUF_VSP3_WIDTH                                       (3)
#define RF_CW150_SRX1_VCO1_BUF_VSP3_MASK                                        (0x00000E00)

#define RF_CW150_SRX1_VCO1_BUF_VSP2_LSB                                         (6)
#define RF_CW150_SRX1_VCO1_BUF_VSP2_WIDTH                                       (3)
#define RF_CW150_SRX1_VCO1_BUF_VSP2_MASK                                        (0x000001C0)

#define RF_CW150_SRX1_VCO1_BUF_VSP1_LSB                                         (3)
#define RF_CW150_SRX1_VCO1_BUF_VSP1_WIDTH                                       (3)
#define RF_CW150_SRX1_VCO1_BUF_VSP1_MASK                                        (0x00000038)

#define RF_CW150_SRX1_VCO1_BUF_VSP0_LSB                                         (0)
#define RF_CW150_SRX1_VCO1_BUF_VSP0_WIDTH                                       (3)
#define RF_CW150_SRX1_VCO1_BUF_VSP0_MASK                                        (0x00000007)

#define RF_CW151_SRX1_LO_STG3_VSP_HI_LSB                                        (18)
#define RF_CW151_SRX1_LO_STG3_VSP_HI_WIDTH                                      (2)
#define RF_CW151_SRX1_LO_STG3_VSP_HI_MASK                                       (0x000C0000)

#define RF_CW151_SRX1_LO_STG3_VSP_LO_LSB                                        (16)
#define RF_CW151_SRX1_LO_STG3_VSP_LO_WIDTH                                      (2)
#define RF_CW151_SRX1_LO_STG3_VSP_LO_MASK                                       (0x00030000)

#define RF_CW151_SRX1_VCO31_BUF_CA_VSP_LSB                                      (12)
#define RF_CW151_SRX1_VCO31_BUF_CA_VSP_WIDTH                                    (3)
#define RF_CW151_SRX1_VCO31_BUF_CA_VSP_MASK                                     (0x00007000)

#define RF_CW151_SRX1_VCO31_BUF_2G_VSP_LSB                                      (9)
#define RF_CW151_SRX1_VCO31_BUF_2G_VSP_WIDTH                                    (3)
#define RF_CW151_SRX1_VCO31_BUF_2G_VSP_MASK                                     (0x00000E00)

#define RF_CW151_SRX1_VCO31_BUF_C2K_VSP_LSB                                     (6)
#define RF_CW151_SRX1_VCO31_BUF_C2K_VSP_WIDTH                                   (3)
#define RF_CW151_SRX1_VCO31_BUF_C2K_VSP_MASK                                    (0x000001C0)

#define RF_CW151_SRX1_VCO1_BUF_VSP7_LSB                                         (3)
#define RF_CW151_SRX1_VCO1_BUF_VSP7_WIDTH                                       (3)
#define RF_CW151_SRX1_VCO1_BUF_VSP7_MASK                                        (0x00000038)

#define RF_CW151_SRX1_VCO1_BUF_VSP6_LSB                                         (0)
#define RF_CW151_SRX1_VCO1_BUF_VSP6_WIDTH                                       (3)
#define RF_CW151_SRX1_VCO1_BUF_VSP6_MASK                                        (0x00000007)

#define RF_CW152_SRX1_LO_STG2_VSP_HI_LSB                                        (18)
#define RF_CW152_SRX1_LO_STG2_VSP_HI_WIDTH                                      (2)
#define RF_CW152_SRX1_LO_STG2_VSP_HI_MASK                                       (0x000C0000)

#define RF_CW152_SRX1_LO_STG2_VSP_LO_LSB                                        (16)
#define RF_CW152_SRX1_LO_STG2_VSP_LO_WIDTH                                      (2)
#define RF_CW152_SRX1_LO_STG2_VSP_LO_MASK                                       (0x00030000)

#define RF_CW152_SRX1_LO_STG1_VSP_HI_LSB                                        (14)
#define RF_CW152_SRX1_LO_STG1_VSP_HI_WIDTH                                      (2)
#define RF_CW152_SRX1_LO_STG1_VSP_HI_MASK                                       (0x0000C000)

#define RF_CW152_SRX1_LO_STG1_VSP_LO_LSB                                        (12)
#define RF_CW152_SRX1_LO_STG1_VSP_LO_WIDTH                                      (2)
#define RF_CW152_SRX1_LO_STG1_VSP_LO_MASK                                       (0x00003000)

#define RF_CW152_SRX1_LO_STG0_VSP_HI_LSB                                        (10)
#define RF_CW152_SRX1_LO_STG0_VSP_HI_WIDTH                                      (2)
#define RF_CW152_SRX1_LO_STG0_VSP_HI_MASK                                       (0x00000C00)

#define RF_CW152_SRX1_LO_STG0_VSP_LO_LSB                                        (8)
#define RF_CW152_SRX1_LO_STG0_VSP_LO_WIDTH                                      (2)
#define RF_CW152_SRX1_LO_STG0_VSP_LO_MASK                                       (0x00000300)

#define RF_CW152_SRX1_VCO31_DIV2_CA_VSP_LSB                                     (4)
#define RF_CW152_SRX1_VCO31_DIV2_CA_VSP_WIDTH                                   (2)
#define RF_CW152_SRX1_VCO31_DIV2_CA_VSP_MASK                                    (0x00000030)

#define RF_CW152_SRX1_VCO31_DIV2_2G_VSP_LSB                                     (2)
#define RF_CW152_SRX1_VCO31_DIV2_2G_VSP_WIDTH                                   (2)
#define RF_CW152_SRX1_VCO31_DIV2_2G_VSP_MASK                                    (0x0000000C)

#define RF_CW152_SRX1_VCO31_DIV2_C2K_VSP_LSB                                    (0)
#define RF_CW152_SRX1_VCO31_DIV2_C2K_VSP_WIDTH                                  (2)
#define RF_CW152_SRX1_VCO31_DIV2_C2K_VSP_MASK                                   (0x00000003)

#define RF_CW153_SRX1_DCC_SAR_WAITTIME_LSB                                      (18)
#define RF_CW153_SRX1_DCC_SAR_WAITTIME_WIDTH                                    (2)
#define RF_CW153_SRX1_DCC_SAR_WAITTIME_MASK                                     (0x000C0000)

#define RF_CW153_SRX1_DCC_GAP_WAITTIME_LSB                                      (16)
#define RF_CW153_SRX1_DCC_GAP_WAITTIME_WIDTH                                    (2)
#define RF_CW153_SRX1_DCC_GAP_WAITTIME_MASK                                     (0x00030000)

#define RF_CW153_SRX1_REFDBL_DELAY_0P5EN_LSB                                    (15)
#define RF_CW153_SRX1_REFDBL_DELAY_0P5EN_WIDTH                                  (1)
#define RF_CW153_SRX1_REFDBL_DELAY_0P5EN_MASK                                   (0x00008000)
#define RF_CW153_SRX1_REFDBL_DELAY_0P5EN_BIT                                    (0x00008000)

#define RF_CW153_SRX1_MMDSDM_TEST_EN_LSB                                        (14)
#define RF_CW153_SRX1_MMDSDM_TEST_EN_WIDTH                                      (1)
#define RF_CW153_SRX1_MMDSDM_TEST_EN_MASK                                       (0x00004000)
#define RF_CW153_SRX1_MMDSDM_TEST_EN_BIT                                        (0x00004000)

#define RF_CW153_SRX1_FCAL_FULL_M_LSB                                           (12)
#define RF_CW153_SRX1_FCAL_FULL_M_WIDTH                                         (1)
#define RF_CW153_SRX1_FCAL_FULL_M_MASK                                          (0x00001000)
#define RF_CW153_SRX1_FCAL_FULL_M_BIT                                           (0x00001000)

#define RF_CW153_SRX1_FCAL_PARTIAL_M_LSB                                        (11)
#define RF_CW153_SRX1_FCAL_PARTIAL_M_WIDTH                                      (1)
#define RF_CW153_SRX1_FCAL_PARTIAL_M_MASK                                       (0x00000800)
#define RF_CW153_SRX1_FCAL_PARTIAL_M_BIT                                        (0x00000800)

#define RF_CW153_SRX1_ACAL_M_LSB                                                (10)
#define RF_CW153_SRX1_ACAL_M_WIDTH                                              (1)
#define RF_CW153_SRX1_ACAL_M_MASK                                               (0x00000400)
#define RF_CW153_SRX1_ACAL_M_BIT                                                (0x00000400)

#define RF_CW153_SRX1_REFDBL_CAL_M_LSB                                          (9)
#define RF_CW153_SRX1_REFDBL_CAL_M_WIDTH                                        (1)
#define RF_CW153_SRX1_REFDBL_CAL_M_MASK                                         (0x00000200)
#define RF_CW153_SRX1_REFDBL_CAL_M_BIT                                          (0x00000200)

#define RF_CW153_SRX1_MMD_DELAY_LSB                                             (7)
#define RF_CW153_SRX1_MMD_DELAY_WIDTH                                           (2)
#define RF_CW153_SRX1_MMD_DELAY_MASK                                            (0x00000180)

#define RF_CW153_SRX1_REP_DELAY_LSB                                             (5)
#define RF_CW153_SRX1_REP_DELAY_WIDTH                                           (2)
#define RF_CW153_SRX1_REP_DELAY_MASK                                            (0x00000060)

#define RF_CW153_SRX1_LO_EN_M_LSB                                               (4)
#define RF_CW153_SRX1_LO_EN_M_WIDTH                                             (1)
#define RF_CW153_SRX1_LO_EN_M_MASK                                              (0x00000010)
#define RF_CW153_SRX1_LO_EN_M_BIT                                               (0x00000010)

#define RF_CW153_SRX1_LO_OFFSTA_STAG0_LSB                                       (3)
#define RF_CW153_SRX1_LO_OFFSTA_STAG0_WIDTH                                     (1)
#define RF_CW153_SRX1_LO_OFFSTA_STAG0_MASK                                      (0x00000008)
#define RF_CW153_SRX1_LO_OFFSTA_STAG0_BIT                                       (0x00000008)

#define RF_CW153_SRX1_LO_OFFSTA_STAG1_LSB                                       (2)
#define RF_CW153_SRX1_LO_OFFSTA_STAG1_WIDTH                                     (1)
#define RF_CW153_SRX1_LO_OFFSTA_STAG1_MASK                                      (0x00000004)
#define RF_CW153_SRX1_LO_OFFSTA_STAG1_BIT                                       (0x00000004)

#define RF_CW153_SRX1_LO_OFFSTA_STAG2_LSB                                       (1)
#define RF_CW153_SRX1_LO_OFFSTA_STAG2_WIDTH                                     (1)
#define RF_CW153_SRX1_LO_OFFSTA_STAG2_MASK                                      (0x00000002)
#define RF_CW153_SRX1_LO_OFFSTA_STAG2_BIT                                       (0x00000002)

#define RF_CW153_SRX1_LO_OFFSTA_STAG3_LSB                                       (0)
#define RF_CW153_SRX1_LO_OFFSTA_STAG3_WIDTH                                     (1)
#define RF_CW153_SRX1_LO_OFFSTA_STAG3_MASK                                      (0x00000001)
#define RF_CW153_SRX1_LO_OFFSTA_STAG3_BIT                                       (0x00000001)

#define RF_CW154_SRX1_REFDBL_MAN_LSB                                            (15)
#define RF_CW154_SRX1_REFDBL_MAN_WIDTH                                          (1)
#define RF_CW154_SRX1_REFDBL_MAN_MASK                                           (0x00008000)
#define RF_CW154_SRX1_REFDBL_MAN_BIT                                            (0x00008000)

#define RF_CW154_SRX1_REFDBL_DELAY_LSB                                          (7)
#define RF_CW154_SRX1_REFDBL_DELAY_WIDTH                                        (8)
#define RF_CW154_SRX1_REFDBL_DELAY_MASK                                         (0x00007F80)

#define RF_CW154_SRX1_REFBUF_POLARITY_MAN_LSB                                   (6)
#define RF_CW154_SRX1_REFBUF_POLARITY_MAN_WIDTH                                 (1)
#define RF_CW154_SRX1_REFBUF_POLARITY_MAN_MASK                                  (0x00000040)
#define RF_CW154_SRX1_REFBUF_POLARITY_MAN_BIT                                   (0x00000040)

#define RF_CW154_SRX1_REFBUF_MAN_LSB                                            (5)
#define RF_CW154_SRX1_REFBUF_MAN_WIDTH                                          (1)
#define RF_CW154_SRX1_REFBUF_MAN_MASK                                           (0x00000020)
#define RF_CW154_SRX1_REFBUF_MAN_BIT                                            (0x00000020)

#define RF_CW154_SRX1_REFBUF_POLARITY_LSB                                       (4)
#define RF_CW154_SRX1_REFBUF_POLARITY_WIDTH                                     (1)
#define RF_CW154_SRX1_REFBUF_POLARITY_MASK                                      (0x00000010)
#define RF_CW154_SRX1_REFBUF_POLARITY_BIT                                       (0x00000010)

#define RF_CW154_SRX1_REFBUF_DELAY_LSB                                          (0)
#define RF_CW154_SRX1_REFBUF_DELAY_WIDTH                                        (4)
#define RF_CW154_SRX1_REFBUF_DELAY_MASK                                         (0x0000000F)

#define RF_CW155_SRX1_VCO_SUB_P_MAN_LSB                                         (19)
#define RF_CW155_SRX1_VCO_SUB_P_MAN_WIDTH                                       (1)
#define RF_CW155_SRX1_VCO_SUB_P_MAN_MASK                                        (0x00080000)
#define RF_CW155_SRX1_VCO_SUB_P_MAN_BIT                                         (0x00080000)

#define RF_CW155_SRX1_VCO_SUB_P_LSB                                             (9)
#define RF_CW155_SRX1_VCO_SUB_P_WIDTH                                           (10)
#define RF_CW155_SRX1_VCO_SUB_P_MASK                                            (0x0007FE00)

#define RF_CW155_SRX1_VCO_SUB_T_MAN_LSB                                         (6)
#define RF_CW155_SRX1_VCO_SUB_T_MAN_WIDTH                                       (1)
#define RF_CW155_SRX1_VCO_SUB_T_MAN_MASK                                        (0x00000040)
#define RF_CW155_SRX1_VCO_SUB_T_MAN_BIT                                         (0x00000040)

#define RF_CW155_SRX1_VCO_SUB_T_LSB                                             (0)
#define RF_CW155_SRX1_VCO_SUB_T_WIDTH                                           (6)
#define RF_CW155_SRX1_VCO_SUB_T_MASK                                            (0x0000003F)

#define RF_CW156_SRX1_VCO1_SWL_FCAL_PROT_LSB                                    (19)
#define RF_CW156_SRX1_VCO1_SWL_FCAL_PROT_WIDTH                                  (1)
#define RF_CW156_SRX1_VCO1_SWL_FCAL_PROT_MASK                                   (0x00080000)
#define RF_CW156_SRX1_VCO1_SWL_FCAL_PROT_BIT                                    (0x00080000)

#define RF_CW156_SRX1_FCAL_HALFLSB_SCA_EN_LSB                                   (17)
#define RF_CW156_SRX1_FCAL_HALFLSB_SCA_EN_WIDTH                                 (1)
#define RF_CW156_SRX1_FCAL_HALFLSB_SCA_EN_MASK                                  (0x00020000)
#define RF_CW156_SRX1_FCAL_HALFLSB_SCA_EN_BIT                                   (0x00020000)

#define RF_CW156_SRX1_FCAL_TARGET_MAN_LSB                                       (16)
#define RF_CW156_SRX1_FCAL_TARGET_MAN_WIDTH                                     (1)
#define RF_CW156_SRX1_FCAL_TARGET_MAN_MASK                                      (0x00010000)
#define RF_CW156_SRX1_FCAL_TARGET_MAN_BIT                                       (0x00010000)

#define RF_CW156_SRX1_FCAL_TARGET_LSB                                           (0)
#define RF_CW156_SRX1_FCAL_TARGET_WIDTH                                         (16)
#define RF_CW156_SRX1_FCAL_TARGET_MASK                                          (0x0000FFFF)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_3_LSB                                    (19)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_3_WIDTH                                  (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_3_MASK                                   (0x00080000)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_3_BIT                                    (0x00080000)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_3_LSB                                   (18)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_3_WIDTH                                 (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_3_MASK                                  (0x00040000)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_3_BIT                                   (0x00040000)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_3_LSB                                   (17)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_3_WIDTH                                 (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_3_MASK                                  (0x00020000)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_3_BIT                                   (0x00020000)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_3_LSB                                  (16)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_3_WIDTH                                (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_3_MASK                                 (0x00010000)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_3_BIT                                  (0x00010000)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_3_LSB                                  (15)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_3_WIDTH                                (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_3_MASK                                 (0x00008000)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_3_BIT                                  (0x00008000)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_2_LSB                                    (14)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_2_WIDTH                                  (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_2_MASK                                   (0x00004000)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_2_BIT                                    (0x00004000)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_2_LSB                                   (13)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_2_WIDTH                                 (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_2_MASK                                  (0x00002000)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_2_BIT                                   (0x00002000)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_2_LSB                                   (12)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_2_WIDTH                                 (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_2_MASK                                  (0x00001000)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_2_BIT                                   (0x00001000)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_2_LSB                                  (11)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_2_WIDTH                                (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_2_MASK                                 (0x00000800)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_2_BIT                                  (0x00000800)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_2_LSB                                  (10)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_2_WIDTH                                (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_2_MASK                                 (0x00000400)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_2_BIT                                  (0x00000400)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_1_LSB                                    (9)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_1_WIDTH                                  (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_1_MASK                                   (0x00000200)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_1_BIT                                    (0x00000200)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_1_LSB                                   (8)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_1_WIDTH                                 (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_1_MASK                                  (0x00000100)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_1_BIT                                   (0x00000100)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_1_LSB                                   (7)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_1_WIDTH                                 (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_1_MASK                                  (0x00000080)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_1_BIT                                   (0x00000080)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_1_LSB                                  (6)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_1_WIDTH                                (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_1_MASK                                 (0x00000040)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_1_BIT                                  (0x00000040)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_1_LSB                                  (5)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_1_WIDTH                                (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_1_MASK                                 (0x00000020)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_1_BIT                                  (0x00000020)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_0_LSB                                    (4)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_0_WIDTH                                  (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_0_MASK                                   (0x00000010)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_DCC_0_BIT                                    (0x00000010)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_0_LSB                                   (3)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_0_WIDTH                                 (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_0_MASK                                  (0x00000008)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FCAL_0_BIT                                   (0x00000008)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_0_LSB                                   (2)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_0_WIDTH                                 (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_0_MASK                                  (0x00000004)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_ACAL_0_BIT                                   (0x00000004)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_0_LSB                                  (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_0_WIDTH                                (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_0_MASK                                 (0x00000002)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_PFCAL_0_BIT                                  (0x00000002)

#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_0_LSB                                  (0)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_0_WIDTH                                (1)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_0_MASK                                 (0x00000001)
#define RF_CW157_SRX1_VCO1_CAL_SEQ_FFCAL_0_BIT                                  (0x00000001)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_7_LSB                                    (19)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_7_WIDTH                                  (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_7_MASK                                   (0x00080000)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_7_BIT                                    (0x00080000)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_7_LSB                                   (18)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_7_WIDTH                                 (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_7_MASK                                  (0x00040000)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_7_BIT                                   (0x00040000)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_7_LSB                                   (17)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_7_WIDTH                                 (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_7_MASK                                  (0x00020000)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_7_BIT                                   (0x00020000)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_7_LSB                                  (16)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_7_WIDTH                                (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_7_MASK                                 (0x00010000)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_7_BIT                                  (0x00010000)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_7_LSB                                  (15)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_7_WIDTH                                (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_7_MASK                                 (0x00008000)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_7_BIT                                  (0x00008000)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_6_LSB                                    (14)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_6_WIDTH                                  (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_6_MASK                                   (0x00004000)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_6_BIT                                    (0x00004000)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_6_LSB                                   (13)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_6_WIDTH                                 (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_6_MASK                                  (0x00002000)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_6_BIT                                   (0x00002000)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_6_LSB                                   (12)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_6_WIDTH                                 (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_6_MASK                                  (0x00001000)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_6_BIT                                   (0x00001000)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_6_LSB                                  (11)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_6_WIDTH                                (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_6_MASK                                 (0x00000800)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_6_BIT                                  (0x00000800)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_6_LSB                                  (10)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_6_WIDTH                                (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_6_MASK                                 (0x00000400)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_6_BIT                                  (0x00000400)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_5_LSB                                    (9)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_5_WIDTH                                  (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_5_MASK                                   (0x00000200)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_5_BIT                                    (0x00000200)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_5_LSB                                   (8)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_5_WIDTH                                 (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_5_MASK                                  (0x00000100)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_5_BIT                                   (0x00000100)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_5_LSB                                   (7)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_5_WIDTH                                 (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_5_MASK                                  (0x00000080)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_5_BIT                                   (0x00000080)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_5_LSB                                  (6)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_5_WIDTH                                (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_5_MASK                                 (0x00000040)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_5_BIT                                  (0x00000040)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_5_LSB                                  (5)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_5_WIDTH                                (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_5_MASK                                 (0x00000020)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_5_BIT                                  (0x00000020)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_4_LSB                                    (4)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_4_WIDTH                                  (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_4_MASK                                   (0x00000010)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_DCC_4_BIT                                    (0x00000010)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_4_LSB                                   (3)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_4_WIDTH                                 (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_4_MASK                                  (0x00000008)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FCAL_4_BIT                                   (0x00000008)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_4_LSB                                   (2)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_4_WIDTH                                 (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_4_MASK                                  (0x00000004)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_ACAL_4_BIT                                   (0x00000004)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_4_LSB                                  (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_4_WIDTH                                (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_4_MASK                                 (0x00000002)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_PFCAL_4_BIT                                  (0x00000002)

#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_4_LSB                                  (0)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_4_WIDTH                                (1)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_4_MASK                                 (0x00000001)
#define RF_CW158_SRX1_VCO1_CAL_SEQ_FFCAL_4_BIT                                  (0x00000001)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_3_LSB                                   (19)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_3_WIDTH                                 (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_3_MASK                                  (0x00080000)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_3_BIT                                   (0x00080000)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_3_LSB                                  (18)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_3_WIDTH                                (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_3_MASK                                 (0x00040000)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_3_BIT                                  (0x00040000)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_3_LSB                                  (17)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_3_WIDTH                                (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_3_MASK                                 (0x00020000)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_3_BIT                                  (0x00020000)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_3_LSB                                 (16)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_3_WIDTH                               (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_3_MASK                                (0x00010000)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_3_BIT                                 (0x00010000)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_3_LSB                                 (15)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_3_WIDTH                               (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_3_MASK                                (0x00008000)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_3_BIT                                 (0x00008000)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_2_LSB                                   (14)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_2_WIDTH                                 (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_2_MASK                                  (0x00004000)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_2_BIT                                   (0x00004000)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_2_LSB                                  (13)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_2_WIDTH                                (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_2_MASK                                 (0x00002000)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_2_BIT                                  (0x00002000)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_2_LSB                                  (12)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_2_WIDTH                                (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_2_MASK                                 (0x00001000)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_2_BIT                                  (0x00001000)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_2_LSB                                 (11)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_2_WIDTH                               (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_2_MASK                                (0x00000800)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_2_BIT                                 (0x00000800)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_2_LSB                                 (10)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_2_WIDTH                               (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_2_MASK                                (0x00000400)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_2_BIT                                 (0x00000400)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_1_LSB                                   (9)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_1_WIDTH                                 (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_1_MASK                                  (0x00000200)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_1_BIT                                   (0x00000200)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_1_LSB                                  (8)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_1_WIDTH                                (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_1_MASK                                 (0x00000100)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_1_BIT                                  (0x00000100)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_1_LSB                                  (7)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_1_WIDTH                                (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_1_MASK                                 (0x00000080)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_1_BIT                                  (0x00000080)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_1_LSB                                 (6)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_1_WIDTH                               (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_1_MASK                                (0x00000040)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_1_BIT                                 (0x00000040)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_1_LSB                                 (5)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_1_WIDTH                               (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_1_MASK                                (0x00000020)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_1_BIT                                 (0x00000020)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_0_LSB                                   (4)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_0_WIDTH                                 (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_0_MASK                                  (0x00000010)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_DCC_0_BIT                                   (0x00000010)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_0_LSB                                  (3)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_0_WIDTH                                (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_0_MASK                                 (0x00000008)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FCAL_0_BIT                                  (0x00000008)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_0_LSB                                  (2)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_0_WIDTH                                (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_0_MASK                                 (0x00000004)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_ACAL_0_BIT                                  (0x00000004)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_0_LSB                                 (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_0_WIDTH                               (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_0_MASK                                (0x00000002)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_PFCAL_0_BIT                                 (0x00000002)

#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_0_LSB                                 (0)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_0_WIDTH                               (1)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_0_MASK                                (0x00000001)
#define RF_CW159_SRX1_VCO31_CAL_SEQ_FFCAL_0_BIT                                 (0x00000001)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_7_LSB                                   (19)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_7_WIDTH                                 (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_7_MASK                                  (0x00080000)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_7_BIT                                   (0x00080000)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_7_LSB                                  (18)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_7_WIDTH                                (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_7_MASK                                 (0x00040000)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_7_BIT                                  (0x00040000)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_7_LSB                                  (17)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_7_WIDTH                                (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_7_MASK                                 (0x00020000)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_7_BIT                                  (0x00020000)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_7_LSB                                 (16)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_7_WIDTH                               (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_7_MASK                                (0x00010000)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_7_BIT                                 (0x00010000)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_7_LSB                                 (15)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_7_WIDTH                               (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_7_MASK                                (0x00008000)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_7_BIT                                 (0x00008000)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_6_LSB                                   (14)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_6_WIDTH                                 (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_6_MASK                                  (0x00004000)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_6_BIT                                   (0x00004000)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_6_LSB                                  (13)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_6_WIDTH                                (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_6_MASK                                 (0x00002000)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_6_BIT                                  (0x00002000)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_6_LSB                                  (12)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_6_WIDTH                                (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_6_MASK                                 (0x00001000)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_6_BIT                                  (0x00001000)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_6_LSB                                 (11)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_6_WIDTH                               (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_6_MASK                                (0x00000800)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_6_BIT                                 (0x00000800)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_6_LSB                                 (10)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_6_WIDTH                               (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_6_MASK                                (0x00000400)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_6_BIT                                 (0x00000400)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_5_LSB                                   (9)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_5_WIDTH                                 (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_5_MASK                                  (0x00000200)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_5_BIT                                   (0x00000200)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_5_LSB                                  (8)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_5_WIDTH                                (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_5_MASK                                 (0x00000100)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_5_BIT                                  (0x00000100)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_5_LSB                                  (7)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_5_WIDTH                                (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_5_MASK                                 (0x00000080)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_5_BIT                                  (0x00000080)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_5_LSB                                 (6)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_5_WIDTH                               (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_5_MASK                                (0x00000040)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_5_BIT                                 (0x00000040)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_5_LSB                                 (5)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_5_WIDTH                               (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_5_MASK                                (0x00000020)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_5_BIT                                 (0x00000020)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_4_LSB                                   (4)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_4_WIDTH                                 (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_4_MASK                                  (0x00000010)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_DCC_4_BIT                                   (0x00000010)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_4_LSB                                  (3)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_4_WIDTH                                (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_4_MASK                                 (0x00000008)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FCAL_4_BIT                                  (0x00000008)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_4_LSB                                  (2)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_4_WIDTH                                (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_4_MASK                                 (0x00000004)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_ACAL_4_BIT                                  (0x00000004)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_4_LSB                                 (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_4_WIDTH                               (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_4_MASK                                (0x00000002)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_PFCAL_4_BIT                                 (0x00000002)

#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_4_LSB                                 (0)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_4_WIDTH                               (1)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_4_MASK                                (0x00000001)
#define RF_CW160_SRX1_VCO31_CAL_SEQ_FFCAL_4_BIT                                 (0x00000001)

#define RF_CW161_SRX1_FCFINISH_M_LSB                                            (19)
#define RF_CW161_SRX1_FCFINISH_M_WIDTH                                          (1)
#define RF_CW161_SRX1_FCFINISH_M_MASK                                           (0x00080000)
#define RF_CW161_SRX1_FCFINISH_M_BIT                                            (0x00080000)

#define RF_CW161_SRX1_FCFINISH_LSB                                              (18)
#define RF_CW161_SRX1_FCFINISH_WIDTH                                            (1)
#define RF_CW161_SRX1_FCFINISH_MASK                                             (0x00040000)
#define RF_CW161_SRX1_FCFINISH_BIT                                              (0x00040000)

#define RF_CW161_SRX1_PCAL_RANGE_LSB                                            (15)
#define RF_CW161_SRX1_PCAL_RANGE_WIDTH                                          (3)
#define RF_CW161_SRX1_PCAL_RANGE_MASK                                           (0x00038000)

#define RF_CW161_SRX1_FVCO_CNT_EN_LSB                                           (14)
#define RF_CW161_SRX1_FVCO_CNT_EN_WIDTH                                         (1)
#define RF_CW161_SRX1_FVCO_CNT_EN_MASK                                          (0x00004000)
#define RF_CW161_SRX1_FVCO_CNT_EN_BIT                                           (0x00004000)

#define RF_CW161_SRX1_FCAL_CNT_WIN_LSB                                          (6)
#define RF_CW161_SRX1_FCAL_CNT_WIN_WIDTH                                        (8)
#define RF_CW161_SRX1_FCAL_CNT_WIN_MASK                                         (0x00003FC0)

#define RF_CW161_SRX1_ACAL_VCO_WAITTIME_LSB                                     (4)
#define RF_CW161_SRX1_ACAL_VCO_WAITTIME_WIDTH                                   (2)
#define RF_CW161_SRX1_ACAL_VCO_WAITTIME_MASK                                    (0x00000030)

#define RF_CW161_SRX1_FCAL_VCO_WAITTIME_LSB                                     (2)
#define RF_CW161_SRX1_FCAL_VCO_WAITTIME_WIDTH                                   (2)
#define RF_CW161_SRX1_FCAL_VCO_WAITTIME_MASK                                    (0x0000000C)

#define RF_CW161_SRX1_FCAL_VCO_STARTTIME_LSB                                    (0)
#define RF_CW161_SRX1_FCAL_VCO_STARTTIME_WIDTH                                  (2)
#define RF_CW161_SRX1_FCAL_VCO_STARTTIME_MASK                                   (0x00000003)

#define RF_CW162_SRX1_PCAL_RANGE_TDD_LSB                                        (17)
#define RF_CW162_SRX1_PCAL_RANGE_TDD_WIDTH                                      (3)
#define RF_CW162_SRX1_PCAL_RANGE_TDD_MASK                                       (0x000E0000)

#define RF_CW162_SRX1_TCL_TDD_EN_LSB                                            (16)
#define RF_CW162_SRX1_TCL_TDD_EN_WIDTH                                          (1)
#define RF_CW162_SRX1_TCL_TDD_EN_MASK                                           (0x00010000)
#define RF_CW162_SRX1_TCL_TDD_EN_BIT                                            (0x00010000)

#define RF_CW162_SRX1_TCL_EN_M_LSB                                              (15)
#define RF_CW162_SRX1_TCL_EN_M_WIDTH                                            (1)
#define RF_CW162_SRX1_TCL_EN_M_MASK                                             (0x00008000)
#define RF_CW162_SRX1_TCL_EN_M_BIT                                              (0x00008000)

#define RF_CW162_SRX1_TCL_PRESET_BUF_M_LSB                                      (14)
#define RF_CW162_SRX1_TCL_PRESET_BUF_M_WIDTH                                    (1)
#define RF_CW162_SRX1_TCL_PRESET_BUF_M_MASK                                     (0x00004000)
#define RF_CW162_SRX1_TCL_PRESET_BUF_M_BIT                                      (0x00004000)

#define RF_CW162_SRX1_TCL_PRESET_BUF_EN_LSB                                     (13)
#define RF_CW162_SRX1_TCL_PRESET_BUF_EN_WIDTH                                   (1)
#define RF_CW162_SRX1_TCL_PRESET_BUF_EN_MASK                                    (0x00002000)
#define RF_CW162_SRX1_TCL_PRESET_BUF_EN_BIT                                     (0x00002000)

#define RF_CW162_SRX1_TCL_TEST_M_LSB                                            (12)
#define RF_CW162_SRX1_TCL_TEST_M_WIDTH                                          (1)
#define RF_CW162_SRX1_TCL_TEST_M_MASK                                           (0x00001000)
#define RF_CW162_SRX1_TCL_TEST_M_BIT                                            (0x00001000)

#define RF_CW162_SRX1_TCL_TEST_EN_LSB                                           (11)
#define RF_CW162_SRX1_TCL_TEST_EN_WIDTH                                         (1)
#define RF_CW162_SRX1_TCL_TEST_EN_MASK                                          (0x00000800)
#define RF_CW162_SRX1_TCL_TEST_EN_BIT                                           (0x00000800)

#define RF_CW162_SRX1_TCL_TEST_MODE_LSB                                         (9)
#define RF_CW162_SRX1_TCL_TEST_MODE_WIDTH                                       (2)
#define RF_CW162_SRX1_TCL_TEST_MODE_MASK                                        (0x00000600)

#define RF_CW162_SRX1_SDM_TESTOUT_LSB                                           (8)
#define RF_CW162_SRX1_SDM_TESTOUT_WIDTH                                         (1)
#define RF_CW162_SRX1_SDM_TESTOUT_MASK                                          (0x00000100)
#define RF_CW162_SRX1_SDM_TESTOUT_BIT                                           (0x00000100)

#define RF_CW162_SRX1_SDM_FRAC_MODE_LSB                                         (7)
#define RF_CW162_SRX1_SDM_FRAC_MODE_WIDTH                                       (1)
#define RF_CW162_SRX1_SDM_FRAC_MODE_MASK                                        (0x00000080)
#define RF_CW162_SRX1_SDM_FRAC_MODE_BIT                                         (0x00000080)

#define RF_CW162_SRX1_SDM_EN_LSB                                                (6)
#define RF_CW162_SRX1_SDM_EN_WIDTH                                              (1)
#define RF_CW162_SRX1_SDM_EN_MASK                                               (0x00000040)
#define RF_CW162_SRX1_SDM_EN_BIT                                                (0x00000040)

#define RF_CW162_SRX1_SDM_ORDER_LSB                                             (4)
#define RF_CW162_SRX1_SDM_ORDER_WIDTH                                           (2)
#define RF_CW162_SRX1_SDM_ORDER_MASK                                            (0x00000030)

#define RF_CW162_SRX1_SDM_RSTB_M_LSB                                            (3)
#define RF_CW162_SRX1_SDM_RSTB_M_WIDTH                                          (1)
#define RF_CW162_SRX1_SDM_RSTB_M_MASK                                           (0x00000008)
#define RF_CW162_SRX1_SDM_RSTB_M_BIT                                            (0x00000008)

#define RF_CW162_SRX1_SDM_DITH_EN_LSB                                           (2)
#define RF_CW162_SRX1_SDM_DITH_EN_WIDTH                                         (1)
#define RF_CW162_SRX1_SDM_DITH_EN_MASK                                          (0x00000004)
#define RF_CW162_SRX1_SDM_DITH_EN_BIT                                           (0x00000004)

#define RF_CW162_SRX1_SDM_DITH_BIT_LSB                                          (1)
#define RF_CW162_SRX1_SDM_DITH_BIT_WIDTH                                        (1)
#define RF_CW162_SRX1_SDM_DITH_BIT_MASK                                         (0x00000002)
#define RF_CW162_SRX1_SDM_DITH_BIT_BIT                                          (0x00000002)

#define RF_CW162_SRX1_FCAL_START_WT_EN_LSB                                      (0)
#define RF_CW162_SRX1_FCAL_START_WT_EN_WIDTH                                    (1)
#define RF_CW162_SRX1_FCAL_START_WT_EN_MASK                                     (0x00000001)
#define RF_CW162_SRX1_FCAL_START_WT_EN_BIT                                      (0x00000001)

#define RF_CW163_SRX1_KVCO31_SEL_MAN_LSB                                        (19)
#define RF_CW163_SRX1_KVCO31_SEL_MAN_WIDTH                                      (1)
#define RF_CW163_SRX1_KVCO31_SEL_MAN_MASK                                       (0x00080000)
#define RF_CW163_SRX1_KVCO31_SEL_MAN_BIT                                        (0x00080000)

#define RF_CW163_SRX1_KVCO31_SEL_M_LSB                                          (17)
#define RF_CW163_SRX1_KVCO31_SEL_M_WIDTH                                        (2)
#define RF_CW163_SRX1_KVCO31_SEL_M_MASK                                         (0x00060000)

#define RF_CW163_SRX1_KVCO31_SEL_CA_LSB                                         (15)
#define RF_CW163_SRX1_KVCO31_SEL_CA_WIDTH                                       (2)
#define RF_CW163_SRX1_KVCO31_SEL_CA_MASK                                        (0x00018000)

#define RF_CW163_SRX1_KVCO31_SEL_2G_LSB                                         (13)
#define RF_CW163_SRX1_KVCO31_SEL_2G_WIDTH                                       (2)
#define RF_CW163_SRX1_KVCO31_SEL_2G_MASK                                        (0x00006000)

#define RF_CW163_SRX1_KVCO31_SEL_C2K_LSB                                        (11)
#define RF_CW163_SRX1_KVCO31_SEL_C2K_WIDTH                                      (2)
#define RF_CW163_SRX1_KVCO31_SEL_C2K_MASK                                       (0x00001800)

#define RF_CW163_SRX1_KVCO1_SEL_MAN_LSB                                         (10)
#define RF_CW163_SRX1_KVCO1_SEL_MAN_WIDTH                                       (1)
#define RF_CW163_SRX1_KVCO1_SEL_MAN_MASK                                        (0x00000400)
#define RF_CW163_SRX1_KVCO1_SEL_MAN_BIT                                         (0x00000400)

#define RF_CW163_SRX1_KVCO1_SEL_M_LSB                                           (8)
#define RF_CW163_SRX1_KVCO1_SEL_M_WIDTH                                         (2)
#define RF_CW163_SRX1_KVCO1_SEL_M_MASK                                          (0x00000300)

#define RF_CW163_SRX1_KVCO1_SEL_INDLR_HP_LSB                                    (6)
#define RF_CW163_SRX1_KVCO1_SEL_INDLR_HP_WIDTH                                  (2)
#define RF_CW163_SRX1_KVCO1_SEL_INDLR_HP_MASK                                   (0x000000C0)

#define RF_CW163_SRX1_KVCO1_SEL_INDLR_LP_LSB                                    (4)
#define RF_CW163_SRX1_KVCO1_SEL_INDLR_LP_WIDTH                                  (2)
#define RF_CW163_SRX1_KVCO1_SEL_INDLR_LP_MASK                                   (0x00000030)

#define RF_CW163_SRX1_KVCO1_SEL_INDSM_HP_LSB                                    (2)
#define RF_CW163_SRX1_KVCO1_SEL_INDSM_HP_WIDTH                                  (2)
#define RF_CW163_SRX1_KVCO1_SEL_INDSM_HP_MASK                                   (0x0000000C)

#define RF_CW163_SRX1_KVCO1_SEL_INDSM_LP_LSB                                    (0)
#define RF_CW163_SRX1_KVCO1_SEL_INDSM_LP_WIDTH                                  (2)
#define RF_CW163_SRX1_KVCO1_SEL_INDSM_LP_MASK                                   (0x00000003)

#define RF_CW164_SRX1_VCO_DYN2_3_LSB                                            (19)
#define RF_CW164_SRX1_VCO_DYN2_3_WIDTH                                          (1)
#define RF_CW164_SRX1_VCO_DYN2_3_MASK                                           (0x00080000)
#define RF_CW164_SRX1_VCO_DYN2_3_BIT                                            (0x00080000)

#define RF_CW164_SRX1_VCO_DYN1_3_LSB                                            (18)
#define RF_CW164_SRX1_VCO_DYN1_3_WIDTH                                          (1)
#define RF_CW164_SRX1_VCO_DYN1_3_MASK                                           (0x00040000)
#define RF_CW164_SRX1_VCO_DYN1_3_BIT                                            (0x00040000)

#define RF_CW164_SRX1_VCO_ULPWR_EN_3_LSB                                        (17)
#define RF_CW164_SRX1_VCO_ULPWR_EN_3_WIDTH                                      (1)
#define RF_CW164_SRX1_VCO_ULPWR_EN_3_MASK                                       (0x00020000)
#define RF_CW164_SRX1_VCO_ULPWR_EN_3_BIT                                        (0x00020000)

#define RF_CW164_SRX1_MMD_ULPWR_EN_3_LSB                                        (16)
#define RF_CW164_SRX1_MMD_ULPWR_EN_3_WIDTH                                      (1)
#define RF_CW164_SRX1_MMD_ULPWR_EN_3_MASK                                       (0x00010000)
#define RF_CW164_SRX1_MMD_ULPWR_EN_3_BIT                                        (0x00010000)

#define RF_CW164_SRX1_VCO1_INDSW_ON_3_LSB                                       (15)
#define RF_CW164_SRX1_VCO1_INDSW_ON_3_WIDTH                                     (1)
#define RF_CW164_SRX1_VCO1_INDSW_ON_3_MASK                                      (0x00008000)
#define RF_CW164_SRX1_VCO1_INDSW_ON_3_BIT                                       (0x00008000)

#define RF_CW164_SRX1_VCO_DYN2_2_LSB                                            (14)
#define RF_CW164_SRX1_VCO_DYN2_2_WIDTH                                          (1)
#define RF_CW164_SRX1_VCO_DYN2_2_MASK                                           (0x00004000)
#define RF_CW164_SRX1_VCO_DYN2_2_BIT                                            (0x00004000)

#define RF_CW164_SRX1_VCO_DYN1_2_LSB                                            (13)
#define RF_CW164_SRX1_VCO_DYN1_2_WIDTH                                          (1)
#define RF_CW164_SRX1_VCO_DYN1_2_MASK                                           (0x00002000)
#define RF_CW164_SRX1_VCO_DYN1_2_BIT                                            (0x00002000)

#define RF_CW164_SRX1_VCO_ULPWR_EN_2_LSB                                        (12)
#define RF_CW164_SRX1_VCO_ULPWR_EN_2_WIDTH                                      (1)
#define RF_CW164_SRX1_VCO_ULPWR_EN_2_MASK                                       (0x00001000)
#define RF_CW164_SRX1_VCO_ULPWR_EN_2_BIT                                        (0x00001000)

#define RF_CW164_SRX1_MMD_ULPWR_EN_2_LSB                                        (11)
#define RF_CW164_SRX1_MMD_ULPWR_EN_2_WIDTH                                      (1)
#define RF_CW164_SRX1_MMD_ULPWR_EN_2_MASK                                       (0x00000800)
#define RF_CW164_SRX1_MMD_ULPWR_EN_2_BIT                                        (0x00000800)

#define RF_CW164_SRX1_VCO1_INDSW_ON_2_LSB                                       (10)
#define RF_CW164_SRX1_VCO1_INDSW_ON_2_WIDTH                                     (1)
#define RF_CW164_SRX1_VCO1_INDSW_ON_2_MASK                                      (0x00000400)
#define RF_CW164_SRX1_VCO1_INDSW_ON_2_BIT                                       (0x00000400)

#define RF_CW164_SRX1_VCO_DYN2_1_LSB                                            (9)
#define RF_CW164_SRX1_VCO_DYN2_1_WIDTH                                          (1)
#define RF_CW164_SRX1_VCO_DYN2_1_MASK                                           (0x00000200)
#define RF_CW164_SRX1_VCO_DYN2_1_BIT                                            (0x00000200)

#define RF_CW164_SRX1_VCO_DYN1_1_LSB                                            (8)
#define RF_CW164_SRX1_VCO_DYN1_1_WIDTH                                          (1)
#define RF_CW164_SRX1_VCO_DYN1_1_MASK                                           (0x00000100)
#define RF_CW164_SRX1_VCO_DYN1_1_BIT                                            (0x00000100)

#define RF_CW164_SRX1_VCO_ULPWR_EN_1_LSB                                        (7)
#define RF_CW164_SRX1_VCO_ULPWR_EN_1_WIDTH                                      (1)
#define RF_CW164_SRX1_VCO_ULPWR_EN_1_MASK                                       (0x00000080)
#define RF_CW164_SRX1_VCO_ULPWR_EN_1_BIT                                        (0x00000080)

#define RF_CW164_SRX1_MMD_ULPWR_EN_1_LSB                                        (6)
#define RF_CW164_SRX1_MMD_ULPWR_EN_1_WIDTH                                      (1)
#define RF_CW164_SRX1_MMD_ULPWR_EN_1_MASK                                       (0x00000040)
#define RF_CW164_SRX1_MMD_ULPWR_EN_1_BIT                                        (0x00000040)

#define RF_CW164_SRX1_VCO1_INDSW_ON_1_LSB                                       (5)
#define RF_CW164_SRX1_VCO1_INDSW_ON_1_WIDTH                                     (1)
#define RF_CW164_SRX1_VCO1_INDSW_ON_1_MASK                                      (0x00000020)
#define RF_CW164_SRX1_VCO1_INDSW_ON_1_BIT                                       (0x00000020)

#define RF_CW164_SRX1_VCO_DYN2_0_LSB                                            (4)
#define RF_CW164_SRX1_VCO_DYN2_0_WIDTH                                          (1)
#define RF_CW164_SRX1_VCO_DYN2_0_MASK                                           (0x00000010)
#define RF_CW164_SRX1_VCO_DYN2_0_BIT                                            (0x00000010)

#define RF_CW164_SRX1_VCO_DYN1_0_LSB                                            (3)
#define RF_CW164_SRX1_VCO_DYN1_0_WIDTH                                          (1)
#define RF_CW164_SRX1_VCO_DYN1_0_MASK                                           (0x00000008)
#define RF_CW164_SRX1_VCO_DYN1_0_BIT                                            (0x00000008)

#define RF_CW164_SRX1_VCO_ULPWR_EN_0_LSB                                        (2)
#define RF_CW164_SRX1_VCO_ULPWR_EN_0_WIDTH                                      (1)
#define RF_CW164_SRX1_VCO_ULPWR_EN_0_MASK                                       (0x00000004)
#define RF_CW164_SRX1_VCO_ULPWR_EN_0_BIT                                        (0x00000004)

#define RF_CW164_SRX1_MMD_ULPWR_EN_0_LSB                                        (1)
#define RF_CW164_SRX1_MMD_ULPWR_EN_0_WIDTH                                      (1)
#define RF_CW164_SRX1_MMD_ULPWR_EN_0_MASK                                       (0x00000002)
#define RF_CW164_SRX1_MMD_ULPWR_EN_0_BIT                                        (0x00000002)

#define RF_CW164_SRX1_VCO1_INDSW_ON_0_LSB                                       (0)
#define RF_CW164_SRX1_VCO1_INDSW_ON_0_WIDTH                                     (1)
#define RF_CW164_SRX1_VCO1_INDSW_ON_0_MASK                                      (0x00000001)
#define RF_CW164_SRX1_VCO1_INDSW_ON_0_BIT                                       (0x00000001)

#define RF_CW165_SRX1_VCO_DYN2_7_LSB                                            (19)
#define RF_CW165_SRX1_VCO_DYN2_7_WIDTH                                          (1)
#define RF_CW165_SRX1_VCO_DYN2_7_MASK                                           (0x00080000)
#define RF_CW165_SRX1_VCO_DYN2_7_BIT                                            (0x00080000)

#define RF_CW165_SRX1_VCO_DYN1_7_LSB                                            (18)
#define RF_CW165_SRX1_VCO_DYN1_7_WIDTH                                          (1)
#define RF_CW165_SRX1_VCO_DYN1_7_MASK                                           (0x00040000)
#define RF_CW165_SRX1_VCO_DYN1_7_BIT                                            (0x00040000)

#define RF_CW165_SRX1_VCO_ULPWR_EN_7_LSB                                        (17)
#define RF_CW165_SRX1_VCO_ULPWR_EN_7_WIDTH                                      (1)
#define RF_CW165_SRX1_VCO_ULPWR_EN_7_MASK                                       (0x00020000)
#define RF_CW165_SRX1_VCO_ULPWR_EN_7_BIT                                        (0x00020000)

#define RF_CW165_SRX1_MMD_ULPWR_EN_7_LSB                                        (16)
#define RF_CW165_SRX1_MMD_ULPWR_EN_7_WIDTH                                      (1)
#define RF_CW165_SRX1_MMD_ULPWR_EN_7_MASK                                       (0x00010000)
#define RF_CW165_SRX1_MMD_ULPWR_EN_7_BIT                                        (0x00010000)

#define RF_CW165_SRX1_VCO1_INDSW_ON_7_LSB                                       (15)
#define RF_CW165_SRX1_VCO1_INDSW_ON_7_WIDTH                                     (1)
#define RF_CW165_SRX1_VCO1_INDSW_ON_7_MASK                                      (0x00008000)
#define RF_CW165_SRX1_VCO1_INDSW_ON_7_BIT                                       (0x00008000)

#define RF_CW165_SRX1_VCO_DYN2_6_LSB                                            (14)
#define RF_CW165_SRX1_VCO_DYN2_6_WIDTH                                          (1)
#define RF_CW165_SRX1_VCO_DYN2_6_MASK                                           (0x00004000)
#define RF_CW165_SRX1_VCO_DYN2_6_BIT                                            (0x00004000)

#define RF_CW165_SRX1_VCO_DYN1_6_LSB                                            (13)
#define RF_CW165_SRX1_VCO_DYN1_6_WIDTH                                          (1)
#define RF_CW165_SRX1_VCO_DYN1_6_MASK                                           (0x00002000)
#define RF_CW165_SRX1_VCO_DYN1_6_BIT                                            (0x00002000)

#define RF_CW165_SRX1_VCO_ULPWR_EN_6_LSB                                        (12)
#define RF_CW165_SRX1_VCO_ULPWR_EN_6_WIDTH                                      (1)
#define RF_CW165_SRX1_VCO_ULPWR_EN_6_MASK                                       (0x00001000)
#define RF_CW165_SRX1_VCO_ULPWR_EN_6_BIT                                        (0x00001000)

#define RF_CW165_SRX1_MMD_ULPWR_EN_6_LSB                                        (11)
#define RF_CW165_SRX1_MMD_ULPWR_EN_6_WIDTH                                      (1)
#define RF_CW165_SRX1_MMD_ULPWR_EN_6_MASK                                       (0x00000800)
#define RF_CW165_SRX1_MMD_ULPWR_EN_6_BIT                                        (0x00000800)

#define RF_CW165_SRX1_VCO1_INDSW_ON_6_LSB                                       (10)
#define RF_CW165_SRX1_VCO1_INDSW_ON_6_WIDTH                                     (1)
#define RF_CW165_SRX1_VCO1_INDSW_ON_6_MASK                                      (0x00000400)
#define RF_CW165_SRX1_VCO1_INDSW_ON_6_BIT                                       (0x00000400)

#define RF_CW165_SRX1_VCO_DYN2_5_LSB                                            (9)
#define RF_CW165_SRX1_VCO_DYN2_5_WIDTH                                          (1)
#define RF_CW165_SRX1_VCO_DYN2_5_MASK                                           (0x00000200)
#define RF_CW165_SRX1_VCO_DYN2_5_BIT                                            (0x00000200)

#define RF_CW165_SRX1_VCO_DYN1_5_LSB                                            (8)
#define RF_CW165_SRX1_VCO_DYN1_5_WIDTH                                          (1)
#define RF_CW165_SRX1_VCO_DYN1_5_MASK                                           (0x00000100)
#define RF_CW165_SRX1_VCO_DYN1_5_BIT                                            (0x00000100)

#define RF_CW165_SRX1_VCO_ULPWR_EN_5_LSB                                        (7)
#define RF_CW165_SRX1_VCO_ULPWR_EN_5_WIDTH                                      (1)
#define RF_CW165_SRX1_VCO_ULPWR_EN_5_MASK                                       (0x00000080)
#define RF_CW165_SRX1_VCO_ULPWR_EN_5_BIT                                        (0x00000080)

#define RF_CW165_SRX1_MMD_ULPWR_EN_5_LSB                                        (6)
#define RF_CW165_SRX1_MMD_ULPWR_EN_5_WIDTH                                      (1)
#define RF_CW165_SRX1_MMD_ULPWR_EN_5_MASK                                       (0x00000040)
#define RF_CW165_SRX1_MMD_ULPWR_EN_5_BIT                                        (0x00000040)

#define RF_CW165_SRX1_VCO1_INDSW_ON_5_LSB                                       (5)
#define RF_CW165_SRX1_VCO1_INDSW_ON_5_WIDTH                                     (1)
#define RF_CW165_SRX1_VCO1_INDSW_ON_5_MASK                                      (0x00000020)
#define RF_CW165_SRX1_VCO1_INDSW_ON_5_BIT                                       (0x00000020)

#define RF_CW165_SRX1_VCO_DYN2_4_LSB                                            (4)
#define RF_CW165_SRX1_VCO_DYN2_4_WIDTH                                          (1)
#define RF_CW165_SRX1_VCO_DYN2_4_MASK                                           (0x00000010)
#define RF_CW165_SRX1_VCO_DYN2_4_BIT                                            (0x00000010)

#define RF_CW165_SRX1_VCO_DYN1_4_LSB                                            (3)
#define RF_CW165_SRX1_VCO_DYN1_4_WIDTH                                          (1)
#define RF_CW165_SRX1_VCO_DYN1_4_MASK                                           (0x00000008)
#define RF_CW165_SRX1_VCO_DYN1_4_BIT                                            (0x00000008)

#define RF_CW165_SRX1_VCO_ULPWR_EN_4_LSB                                        (2)
#define RF_CW165_SRX1_VCO_ULPWR_EN_4_WIDTH                                      (1)
#define RF_CW165_SRX1_VCO_ULPWR_EN_4_MASK                                       (0x00000004)
#define RF_CW165_SRX1_VCO_ULPWR_EN_4_BIT                                        (0x00000004)

#define RF_CW165_SRX1_MMD_ULPWR_EN_4_LSB                                        (1)
#define RF_CW165_SRX1_MMD_ULPWR_EN_4_WIDTH                                      (1)
#define RF_CW165_SRX1_MMD_ULPWR_EN_4_MASK                                       (0x00000002)
#define RF_CW165_SRX1_MMD_ULPWR_EN_4_BIT                                        (0x00000002)

#define RF_CW165_SRX1_VCO1_INDSW_ON_4_LSB                                       (0)
#define RF_CW165_SRX1_VCO1_INDSW_ON_4_WIDTH                                     (1)
#define RF_CW165_SRX1_VCO1_INDSW_ON_4_MASK                                      (0x00000001)
#define RF_CW165_SRX1_VCO1_INDSW_ON_4_BIT                                       (0x00000001)

#define RF_CW166_SRX1_VCO31_VAR_R_FINGER_3_LSB                                  (18)
#define RF_CW166_SRX1_VCO31_VAR_R_FINGER_3_WIDTH                                (2)
#define RF_CW166_SRX1_VCO31_VAR_R_FINGER_3_MASK                                 (0x000C0000)

#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_3_LSB                                    (17)
#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_3_WIDTH                                  (1)
#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_3_MASK                                   (0x00020000)
#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_3_BIT                                    (0x00020000)

#define RF_CW166_SRX1_VCO31_VCT2GD_EN_3_LSB                                     (16)
#define RF_CW166_SRX1_VCO31_VCT2GD_EN_3_WIDTH                                   (1)
#define RF_CW166_SRX1_VCO31_VCT2GD_EN_3_MASK                                    (0x00010000)
#define RF_CW166_SRX1_VCO31_VCT2GD_EN_3_BIT                                     (0x00010000)

#define RF_CW166_SRX1_VCO31_INDSW_ON_3_LSB                                      (15)
#define RF_CW166_SRX1_VCO31_INDSW_ON_3_WIDTH                                    (1)
#define RF_CW166_SRX1_VCO31_INDSW_ON_3_MASK                                     (0x00008000)
#define RF_CW166_SRX1_VCO31_INDSW_ON_3_BIT                                      (0x00008000)

#define RF_CW166_SRX1_VCO31_VAR_R_FINGER_2_LSB                                  (13)
#define RF_CW166_SRX1_VCO31_VAR_R_FINGER_2_WIDTH                                (2)
#define RF_CW166_SRX1_VCO31_VAR_R_FINGER_2_MASK                                 (0x00006000)

#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_2_LSB                                    (12)
#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_2_WIDTH                                  (1)
#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_2_MASK                                   (0x00001000)
#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_2_BIT                                    (0x00001000)

#define RF_CW166_SRX1_VCO31_VCT2GD_EN_2_LSB                                     (11)
#define RF_CW166_SRX1_VCO31_VCT2GD_EN_2_WIDTH                                   (1)
#define RF_CW166_SRX1_VCO31_VCT2GD_EN_2_MASK                                    (0x00000800)
#define RF_CW166_SRX1_VCO31_VCT2GD_EN_2_BIT                                     (0x00000800)

#define RF_CW166_SRX1_VCO31_INDSW_ON_2_LSB                                      (10)
#define RF_CW166_SRX1_VCO31_INDSW_ON_2_WIDTH                                    (1)
#define RF_CW166_SRX1_VCO31_INDSW_ON_2_MASK                                     (0x00000400)
#define RF_CW166_SRX1_VCO31_INDSW_ON_2_BIT                                      (0x00000400)

#define RF_CW166_SRX1_VCO31_VAR_R_FINGER_1_LSB                                  (8)
#define RF_CW166_SRX1_VCO31_VAR_R_FINGER_1_WIDTH                                (2)
#define RF_CW166_SRX1_VCO31_VAR_R_FINGER_1_MASK                                 (0x00000300)

#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_1_LSB                                    (7)
#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_1_WIDTH                                  (1)
#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_1_MASK                                   (0x00000080)
#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_1_BIT                                    (0x00000080)

#define RF_CW166_SRX1_VCO31_VCT2GD_EN_1_LSB                                     (6)
#define RF_CW166_SRX1_VCO31_VCT2GD_EN_1_WIDTH                                   (1)
#define RF_CW166_SRX1_VCO31_VCT2GD_EN_1_MASK                                    (0x00000040)
#define RF_CW166_SRX1_VCO31_VCT2GD_EN_1_BIT                                     (0x00000040)

#define RF_CW166_SRX1_VCO31_INDSW_ON_1_LSB                                      (5)
#define RF_CW166_SRX1_VCO31_INDSW_ON_1_WIDTH                                    (1)
#define RF_CW166_SRX1_VCO31_INDSW_ON_1_MASK                                     (0x00000020)
#define RF_CW166_SRX1_VCO31_INDSW_ON_1_BIT                                      (0x00000020)

#define RF_CW166_SRX1_VCO31_VAR_R_FINGER_0_LSB                                  (3)
#define RF_CW166_SRX1_VCO31_VAR_R_FINGER_0_WIDTH                                (2)
#define RF_CW166_SRX1_VCO31_VAR_R_FINGER_0_MASK                                 (0x00000018)

#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_0_LSB                                    (2)
#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_0_WIDTH                                  (1)
#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_0_MASK                                   (0x00000004)
#define RF_CW166_SRX1_VCO31_SCA_VSP_HI_0_BIT                                    (0x00000004)

#define RF_CW166_SRX1_VCO31_VCT2GD_EN_0_LSB                                     (1)
#define RF_CW166_SRX1_VCO31_VCT2GD_EN_0_WIDTH                                   (1)
#define RF_CW166_SRX1_VCO31_VCT2GD_EN_0_MASK                                    (0x00000002)
#define RF_CW166_SRX1_VCO31_VCT2GD_EN_0_BIT                                     (0x00000002)

#define RF_CW166_SRX1_VCO31_INDSW_ON_0_LSB                                      (0)
#define RF_CW166_SRX1_VCO31_INDSW_ON_0_WIDTH                                    (1)
#define RF_CW166_SRX1_VCO31_INDSW_ON_0_MASK                                     (0x00000001)
#define RF_CW166_SRX1_VCO31_INDSW_ON_0_BIT                                      (0x00000001)

#define RF_CW167_SRX1_VCO31_VAR_R_FINGER_7_LSB                                  (18)
#define RF_CW167_SRX1_VCO31_VAR_R_FINGER_7_WIDTH                                (2)
#define RF_CW167_SRX1_VCO31_VAR_R_FINGER_7_MASK                                 (0x000C0000)

#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_7_LSB                                    (17)
#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_7_WIDTH                                  (1)
#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_7_MASK                                   (0x00020000)
#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_7_BIT                                    (0x00020000)

#define RF_CW167_SRX1_VCO31_VCT2GD_EN_7_LSB                                     (16)
#define RF_CW167_SRX1_VCO31_VCT2GD_EN_7_WIDTH                                   (1)
#define RF_CW167_SRX1_VCO31_VCT2GD_EN_7_MASK                                    (0x00010000)
#define RF_CW167_SRX1_VCO31_VCT2GD_EN_7_BIT                                     (0x00010000)

#define RF_CW167_SRX1_VCO31_INDSW_ON_7_LSB                                      (15)
#define RF_CW167_SRX1_VCO31_INDSW_ON_7_WIDTH                                    (1)
#define RF_CW167_SRX1_VCO31_INDSW_ON_7_MASK                                     (0x00008000)
#define RF_CW167_SRX1_VCO31_INDSW_ON_7_BIT                                      (0x00008000)

#define RF_CW167_SRX1_VCO31_VAR_R_FINGER_6_LSB                                  (13)
#define RF_CW167_SRX1_VCO31_VAR_R_FINGER_6_WIDTH                                (2)
#define RF_CW167_SRX1_VCO31_VAR_R_FINGER_6_MASK                                 (0x00006000)

#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_6_LSB                                    (12)
#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_6_WIDTH                                  (1)
#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_6_MASK                                   (0x00001000)
#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_6_BIT                                    (0x00001000)

#define RF_CW167_SRX1_VCO31_VCT2GD_EN_6_LSB                                     (11)
#define RF_CW167_SRX1_VCO31_VCT2GD_EN_6_WIDTH                                   (1)
#define RF_CW167_SRX1_VCO31_VCT2GD_EN_6_MASK                                    (0x00000800)
#define RF_CW167_SRX1_VCO31_VCT2GD_EN_6_BIT                                     (0x00000800)

#define RF_CW167_SRX1_VCO31_INDSW_ON_6_LSB                                      (10)
#define RF_CW167_SRX1_VCO31_INDSW_ON_6_WIDTH                                    (1)
#define RF_CW167_SRX1_VCO31_INDSW_ON_6_MASK                                     (0x00000400)
#define RF_CW167_SRX1_VCO31_INDSW_ON_6_BIT                                      (0x00000400)

#define RF_CW167_SRX1_VCO31_VAR_R_FINGER_5_LSB                                  (8)
#define RF_CW167_SRX1_VCO31_VAR_R_FINGER_5_WIDTH                                (2)
#define RF_CW167_SRX1_VCO31_VAR_R_FINGER_5_MASK                                 (0x00000300)

#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_5_LSB                                    (7)
#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_5_WIDTH                                  (1)
#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_5_MASK                                   (0x00000080)
#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_5_BIT                                    (0x00000080)

#define RF_CW167_SRX1_VCO31_VCT2GD_EN_5_LSB                                     (6)
#define RF_CW167_SRX1_VCO31_VCT2GD_EN_5_WIDTH                                   (1)
#define RF_CW167_SRX1_VCO31_VCT2GD_EN_5_MASK                                    (0x00000040)
#define RF_CW167_SRX1_VCO31_VCT2GD_EN_5_BIT                                     (0x00000040)

#define RF_CW167_SRX1_VCO31_INDSW_ON_5_LSB                                      (5)
#define RF_CW167_SRX1_VCO31_INDSW_ON_5_WIDTH                                    (1)
#define RF_CW167_SRX1_VCO31_INDSW_ON_5_MASK                                     (0x00000020)
#define RF_CW167_SRX1_VCO31_INDSW_ON_5_BIT                                      (0x00000020)

#define RF_CW167_SRX1_VCO31_VAR_R_FINGER_4_LSB                                  (3)
#define RF_CW167_SRX1_VCO31_VAR_R_FINGER_4_WIDTH                                (2)
#define RF_CW167_SRX1_VCO31_VAR_R_FINGER_4_MASK                                 (0x00000018)

#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_4_LSB                                    (2)
#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_4_WIDTH                                  (1)
#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_4_MASK                                   (0x00000004)
#define RF_CW167_SRX1_VCO31_SCA_VSP_HI_4_BIT                                    (0x00000004)

#define RF_CW167_SRX1_VCO31_VCT2GD_EN_4_LSB                                     (1)
#define RF_CW167_SRX1_VCO31_VCT2GD_EN_4_WIDTH                                   (1)
#define RF_CW167_SRX1_VCO31_VCT2GD_EN_4_MASK                                    (0x00000002)
#define RF_CW167_SRX1_VCO31_VCT2GD_EN_4_BIT                                     (0x00000002)

#define RF_CW167_SRX1_VCO31_INDSW_ON_4_LSB                                      (0)
#define RF_CW167_SRX1_VCO31_INDSW_ON_4_WIDTH                                    (1)
#define RF_CW167_SRX1_VCO31_INDSW_ON_4_MASK                                     (0x00000001)
#define RF_CW167_SRX1_VCO31_INDSW_ON_4_BIT                                      (0x00000001)

#define RF_CW168_SRX1_VCO31_I_C2K6_MAN_LSB                                      (19)
#define RF_CW168_SRX1_VCO31_I_C2K6_MAN_WIDTH                                    (1)
#define RF_CW168_SRX1_VCO31_I_C2K6_MAN_MASK                                     (0x00080000)
#define RF_CW168_SRX1_VCO31_I_C2K6_MAN_BIT                                      (0x00080000)

#define RF_CW168_SRX1_VCO31_I_OR_TAR_C2K6_LSB                                   (15)
#define RF_CW168_SRX1_VCO31_I_OR_TAR_C2K6_WIDTH                                 (4)
#define RF_CW168_SRX1_VCO31_I_OR_TAR_C2K6_MASK                                  (0x00078000)

#define RF_CW168_SRX1_VCO31_I_C2K4_MAN_LSB                                      (14)
#define RF_CW168_SRX1_VCO31_I_C2K4_MAN_WIDTH                                    (1)
#define RF_CW168_SRX1_VCO31_I_C2K4_MAN_MASK                                     (0x00004000)
#define RF_CW168_SRX1_VCO31_I_C2K4_MAN_BIT                                      (0x00004000)

#define RF_CW168_SRX1_VCO31_I_OR_TAR_C2K4_LSB                                   (10)
#define RF_CW168_SRX1_VCO31_I_OR_TAR_C2K4_WIDTH                                 (4)
#define RF_CW168_SRX1_VCO31_I_OR_TAR_C2K4_MASK                                  (0x00003C00)

#define RF_CW168_SRX1_VCO31_I_C2K1_MAN_LSB                                      (9)
#define RF_CW168_SRX1_VCO31_I_C2K1_MAN_WIDTH                                    (1)
#define RF_CW168_SRX1_VCO31_I_C2K1_MAN_MASK                                     (0x00000200)
#define RF_CW168_SRX1_VCO31_I_C2K1_MAN_BIT                                      (0x00000200)

#define RF_CW168_SRX1_VCO31_I_OR_TAR_C2K1_LSB                                   (5)
#define RF_CW168_SRX1_VCO31_I_OR_TAR_C2K1_WIDTH                                 (4)
#define RF_CW168_SRX1_VCO31_I_OR_TAR_C2K1_MASK                                  (0x000001E0)

#define RF_CW168_SRX1_VCO31_I_C2K0_MAN_LSB                                      (4)
#define RF_CW168_SRX1_VCO31_I_C2K0_MAN_WIDTH                                    (1)
#define RF_CW168_SRX1_VCO31_I_C2K0_MAN_MASK                                     (0x00000010)
#define RF_CW168_SRX1_VCO31_I_C2K0_MAN_BIT                                      (0x00000010)

#define RF_CW168_SRX1_VCO31_I_OR_TAR_C2K0_LSB                                   (0)
#define RF_CW168_SRX1_VCO31_I_OR_TAR_C2K0_WIDTH                                 (4)
#define RF_CW168_SRX1_VCO31_I_OR_TAR_C2K0_MASK                                  (0x0000000F)

#define RF_CW169_SRX1_VCO31_I_PCS_MAN_LSB                                       (19)
#define RF_CW169_SRX1_VCO31_I_PCS_MAN_WIDTH                                     (1)
#define RF_CW169_SRX1_VCO31_I_PCS_MAN_MASK                                      (0x00080000)
#define RF_CW169_SRX1_VCO31_I_PCS_MAN_BIT                                       (0x00080000)

#define RF_CW169_SRX1_VCO31_I_OR_TAR_PCS_LSB                                    (15)
#define RF_CW169_SRX1_VCO31_I_OR_TAR_PCS_WIDTH                                  (4)
#define RF_CW169_SRX1_VCO31_I_OR_TAR_PCS_MASK                                   (0x00078000)

#define RF_CW169_SRX1_VCO31_I_DCS_MAN_LSB                                       (14)
#define RF_CW169_SRX1_VCO31_I_DCS_MAN_WIDTH                                     (1)
#define RF_CW169_SRX1_VCO31_I_DCS_MAN_MASK                                      (0x00004000)
#define RF_CW169_SRX1_VCO31_I_DCS_MAN_BIT                                       (0x00004000)

#define RF_CW169_SRX1_VCO31_I_OR_TAR_DCS_LSB                                    (10)
#define RF_CW169_SRX1_VCO31_I_OR_TAR_DCS_WIDTH                                  (4)
#define RF_CW169_SRX1_VCO31_I_OR_TAR_DCS_MASK                                   (0x00003C00)

#define RF_CW169_SRX1_VCO31_I_GSM900_MAN_LSB                                    (9)
#define RF_CW169_SRX1_VCO31_I_GSM900_MAN_WIDTH                                  (1)
#define RF_CW169_SRX1_VCO31_I_GSM900_MAN_MASK                                   (0x00000200)
#define RF_CW169_SRX1_VCO31_I_GSM900_MAN_BIT                                    (0x00000200)

#define RF_CW169_SRX1_VCO31_I_OR_TAR_GSM900_LSB                                 (5)
#define RF_CW169_SRX1_VCO31_I_OR_TAR_GSM900_WIDTH                               (4)
#define RF_CW169_SRX1_VCO31_I_OR_TAR_GSM900_MASK                                (0x000001E0)

#define RF_CW169_SRX1_VCO31_I_GSM850_MAN_LSB                                    (4)
#define RF_CW169_SRX1_VCO31_I_GSM850_MAN_WIDTH                                  (1)
#define RF_CW169_SRX1_VCO31_I_GSM850_MAN_MASK                                   (0x00000010)
#define RF_CW169_SRX1_VCO31_I_GSM850_MAN_BIT                                    (0x00000010)

#define RF_CW169_SRX1_VCO31_I_OR_TAR_GSM850_LSB                                 (0)
#define RF_CW169_SRX1_VCO31_I_OR_TAR_GSM850_WIDTH                               (4)
#define RF_CW169_SRX1_VCO31_I_OR_TAR_GSM850_MASK                                (0x0000000F)

#define RF_CW170_SRX1_VCO31_I_INDLR_LO_MAN_LSB                                  (19)
#define RF_CW170_SRX1_VCO31_I_INDLR_LO_MAN_WIDTH                                (1)
#define RF_CW170_SRX1_VCO31_I_INDLR_LO_MAN_MASK                                 (0x00080000)
#define RF_CW170_SRX1_VCO31_I_INDLR_LO_MAN_BIT                                  (0x00080000)

#define RF_CW170_SRX1_VCO31_I_OR_TAR_INDLR_LO_LSB                               (15)
#define RF_CW170_SRX1_VCO31_I_OR_TAR_INDLR_LO_WIDTH                             (4)
#define RF_CW170_SRX1_VCO31_I_OR_TAR_INDLR_LO_MASK                              (0x00078000)

#define RF_CW170_SRX1_VCO31_I_INDLR_HI_MAN_LSB                                  (14)
#define RF_CW170_SRX1_VCO31_I_INDLR_HI_MAN_WIDTH                                (1)
#define RF_CW170_SRX1_VCO31_I_INDLR_HI_MAN_MASK                                 (0x00004000)
#define RF_CW170_SRX1_VCO31_I_INDLR_HI_MAN_BIT                                  (0x00004000)

#define RF_CW170_SRX1_VCO31_I_OR_TAR_INDLR_HI_LSB                               (10)
#define RF_CW170_SRX1_VCO31_I_OR_TAR_INDLR_HI_WIDTH                             (4)
#define RF_CW170_SRX1_VCO31_I_OR_TAR_INDLR_HI_MASK                              (0x00003C00)

#define RF_CW170_SRX1_VCO31_I_INDSM_LO_MAN_LSB                                  (9)
#define RF_CW170_SRX1_VCO31_I_INDSM_LO_MAN_WIDTH                                (1)
#define RF_CW170_SRX1_VCO31_I_INDSM_LO_MAN_MASK                                 (0x00000200)
#define RF_CW170_SRX1_VCO31_I_INDSM_LO_MAN_BIT                                  (0x00000200)

#define RF_CW170_SRX1_VCO31_I_OR_TAR_INDSM_LO_LSB                               (5)
#define RF_CW170_SRX1_VCO31_I_OR_TAR_INDSM_LO_WIDTH                             (4)
#define RF_CW170_SRX1_VCO31_I_OR_TAR_INDSM_LO_MASK                              (0x000001E0)

#define RF_CW170_SRX1_VCO31_I_INDSM_HI_MAN_LSB                                  (4)
#define RF_CW170_SRX1_VCO31_I_INDSM_HI_MAN_WIDTH                                (1)
#define RF_CW170_SRX1_VCO31_I_INDSM_HI_MAN_MASK                                 (0x00000010)
#define RF_CW170_SRX1_VCO31_I_INDSM_HI_MAN_BIT                                  (0x00000010)

#define RF_CW170_SRX1_VCO31_I_OR_TAR_INDSM_HI_LSB                               (0)
#define RF_CW170_SRX1_VCO31_I_OR_TAR_INDSM_HI_WIDTH                             (4)
#define RF_CW170_SRX1_VCO31_I_OR_TAR_INDSM_HI_MASK                              (0x0000000F)

#define RF_CW171_SRX1_VCO1_I_2GLP_MAN_LSB                                       (19)
#define RF_CW171_SRX1_VCO1_I_2GLP_MAN_WIDTH                                     (1)
#define RF_CW171_SRX1_VCO1_I_2GLP_MAN_MASK                                      (0x00080000)
#define RF_CW171_SRX1_VCO1_I_2GLP_MAN_BIT                                       (0x00080000)

#define RF_CW171_SRX1_VCO1_I_2GLP_OR_TAR3_LSB                                   (15)
#define RF_CW171_SRX1_VCO1_I_2GLP_OR_TAR3_WIDTH                                 (4)
#define RF_CW171_SRX1_VCO1_I_2GLP_OR_TAR3_MASK                                  (0x00078000)

#define RF_CW171_SRX1_VCO1_I_2GHP_MAN_LSB                                       (14)
#define RF_CW171_SRX1_VCO1_I_2GHP_MAN_WIDTH                                     (1)
#define RF_CW171_SRX1_VCO1_I_2GHP_MAN_MASK                                      (0x00004000)
#define RF_CW171_SRX1_VCO1_I_2GHP_MAN_BIT                                       (0x00004000)

#define RF_CW171_SRX1_VCO1_I_2GHP_OR_TAR2_LSB                                   (10)
#define RF_CW171_SRX1_VCO1_I_2GHP_OR_TAR2_WIDTH                                 (4)
#define RF_CW171_SRX1_VCO1_I_2GHP_OR_TAR2_MASK                                  (0x00003C00)

#define RF_CW171_SRX1_VCO1_I_C2KL_MAN_LSB                                       (9)
#define RF_CW171_SRX1_VCO1_I_C2KL_MAN_WIDTH                                     (1)
#define RF_CW171_SRX1_VCO1_I_C2KL_MAN_MASK                                      (0x00000200)
#define RF_CW171_SRX1_VCO1_I_C2KL_MAN_BIT                                       (0x00000200)

#define RF_CW171_SRX1_VCO1_I_C2KL_OR_TAR1_LSB                                   (5)
#define RF_CW171_SRX1_VCO1_I_C2KL_OR_TAR1_WIDTH                                 (4)
#define RF_CW171_SRX1_VCO1_I_C2KL_OR_TAR1_MASK                                  (0x000001E0)

#define RF_CW171_SRX1_VCO1_I_C2KH_MAN_LSB                                       (4)
#define RF_CW171_SRX1_VCO1_I_C2KH_MAN_WIDTH                                     (1)
#define RF_CW171_SRX1_VCO1_I_C2KH_MAN_MASK                                      (0x00000010)
#define RF_CW171_SRX1_VCO1_I_C2KH_MAN_BIT                                       (0x00000010)

#define RF_CW171_SRX1_VCO1_I_C2KH_OR_TAR0_LSB                                   (0)
#define RF_CW171_SRX1_VCO1_I_C2KH_OR_TAR0_WIDTH                                 (4)
#define RF_CW171_SRX1_VCO1_I_C2KH_OR_TAR0_MASK                                  (0x0000000F)

#define RF_CW172_SRX1_VCO1_I_INDLR_LO_MAN_LSB                                   (19)
#define RF_CW172_SRX1_VCO1_I_INDLR_LO_MAN_WIDTH                                 (1)
#define RF_CW172_SRX1_VCO1_I_INDLR_LO_MAN_MASK                                  (0x00080000)
#define RF_CW172_SRX1_VCO1_I_INDLR_LO_MAN_BIT                                   (0x00080000)

#define RF_CW172_SRX1_VCO1_I_INDLR_LO_OR_TAR7_LSB                               (15)
#define RF_CW172_SRX1_VCO1_I_INDLR_LO_OR_TAR7_WIDTH                             (4)
#define RF_CW172_SRX1_VCO1_I_INDLR_LO_OR_TAR7_MASK                              (0x00078000)

#define RF_CW172_SRX1_VCO1_I_INDLR_HI_MAN_LSB                                   (14)
#define RF_CW172_SRX1_VCO1_I_INDLR_HI_MAN_WIDTH                                 (1)
#define RF_CW172_SRX1_VCO1_I_INDLR_HI_MAN_MASK                                  (0x00004000)
#define RF_CW172_SRX1_VCO1_I_INDLR_HI_MAN_BIT                                   (0x00004000)

#define RF_CW172_SRX1_VCO1_I_INDLR_HI_OR_TAR6_LSB                               (10)
#define RF_CW172_SRX1_VCO1_I_INDLR_HI_OR_TAR6_WIDTH                             (4)
#define RF_CW172_SRX1_VCO1_I_INDLR_HI_OR_TAR6_MASK                              (0x00003C00)

#define RF_CW172_SRX1_VCO1_I_INDSM_LO_MAN_LSB                                   (9)
#define RF_CW172_SRX1_VCO1_I_INDSM_LO_MAN_WIDTH                                 (1)
#define RF_CW172_SRX1_VCO1_I_INDSM_LO_MAN_MASK                                  (0x00000200)
#define RF_CW172_SRX1_VCO1_I_INDSM_LO_MAN_BIT                                   (0x00000200)

#define RF_CW172_SRX1_VCO1_I_INDSM_LO_OR_TAR5_LSB                               (5)
#define RF_CW172_SRX1_VCO1_I_INDSM_LO_OR_TAR5_WIDTH                             (4)
#define RF_CW172_SRX1_VCO1_I_INDSM_LO_OR_TAR5_MASK                              (0x000001E0)

#define RF_CW172_SRX1_VCO1_I_INDSM_HI_MAN_LSB                                   (4)
#define RF_CW172_SRX1_VCO1_I_INDSM_HI_MAN_WIDTH                                 (1)
#define RF_CW172_SRX1_VCO1_I_INDSM_HI_MAN_MASK                                  (0x00000010)
#define RF_CW172_SRX1_VCO1_I_INDSM_HI_MAN_BIT                                   (0x00000010)

#define RF_CW172_SRX1_VCO1_I_INDSM_HI_OR_TAR4_LSB                               (0)
#define RF_CW172_SRX1_VCO1_I_INDSM_HI_OR_TAR4_WIDTH                             (4)
#define RF_CW172_SRX1_VCO1_I_INDSM_HI_OR_TAR4_MASK                              (0x0000000F)

#define RF_CW173_SRX1_VCO1_ICP_2G_LSB                                           (15)
#define RF_CW173_SRX1_VCO1_ICP_2G_WIDTH                                         (5)
#define RF_CW173_SRX1_VCO1_ICP_2G_MASK                                          (0x000F8000)

#define RF_CW173_SRX1_VCO1_IOFFSET_2G_LSB                                       (10)
#define RF_CW173_SRX1_VCO1_IOFFSET_2G_WIDTH                                     (5)
#define RF_CW173_SRX1_VCO1_IOFFSET_2G_MASK                                      (0x00007C00)

#define RF_CW173_SRX1_VCO31_ICP_2G_LSB                                          (5)
#define RF_CW173_SRX1_VCO31_ICP_2G_WIDTH                                        (5)
#define RF_CW173_SRX1_VCO31_ICP_2G_MASK                                         (0x000003E0)

#define RF_CW173_SRX1_VCO31_IOFFSET_2G_LSB                                      (0)
#define RF_CW173_SRX1_VCO31_IOFFSET_2G_WIDTH                                    (5)
#define RF_CW173_SRX1_VCO31_IOFFSET_2G_MASK                                     (0x0000001F)

#define RF_CW174_SRX1_VCO1_LF_C1_2G_LSB                                         (15)
#define RF_CW174_SRX1_VCO1_LF_C1_2G_WIDTH                                       (5)
#define RF_CW174_SRX1_VCO1_LF_C1_2G_MASK                                        (0x000F8000)

#define RF_CW174_SRX1_VCO1_LF_C2_2G_LSB                                         (10)
#define RF_CW174_SRX1_VCO1_LF_C2_2G_WIDTH                                       (5)
#define RF_CW174_SRX1_VCO1_LF_C2_2G_MASK                                        (0x00007C00)

#define RF_CW174_SRX1_VCO31_LF_C1_2G_LSB                                        (5)
#define RF_CW174_SRX1_VCO31_LF_C1_2G_WIDTH                                      (5)
#define RF_CW174_SRX1_VCO31_LF_C1_2G_MASK                                       (0x000003E0)

#define RF_CW174_SRX1_VCO31_LF_C2_2G_LSB                                        (0)
#define RF_CW174_SRX1_VCO31_LF_C2_2G_WIDTH                                      (5)
#define RF_CW174_SRX1_VCO31_LF_C2_2G_MASK                                       (0x0000001F)

#define RF_CW175_SRX1_LF_C3_LSB                                                 (12)
#define RF_CW175_SRX1_LF_C3_WIDTH                                               (2)
#define RF_CW175_SRX1_LF_C3_MASK                                                (0x00003000)

#define RF_CW175_SRX1_VCO31_LF_R2_PCS_LSB                                       (6)
#define RF_CW175_SRX1_VCO31_LF_R2_PCS_WIDTH                                     (6)
#define RF_CW175_SRX1_VCO31_LF_R2_PCS_MASK                                      (0x00000FC0)

#define RF_CW175_SRX1_VCO1_LF_R2_PCS_LSB                                        (0)
#define RF_CW175_SRX1_VCO1_LF_R2_PCS_WIDTH                                      (6)
#define RF_CW175_SRX1_VCO1_LF_R2_PCS_MASK                                       (0x0000003F)

#define RF_CW176_SRX1_VCO1_LF_R2_DCS_LSB                                        (12)
#define RF_CW176_SRX1_VCO1_LF_R2_DCS_WIDTH                                      (6)
#define RF_CW176_SRX1_VCO1_LF_R2_DCS_MASK                                       (0x0003F000)

#define RF_CW176_SRX1_VCO1_LF_R2_GSM900_LSB                                     (6)
#define RF_CW176_SRX1_VCO1_LF_R2_GSM900_WIDTH                                   (6)
#define RF_CW176_SRX1_VCO1_LF_R2_GSM900_MASK                                    (0x00000FC0)

#define RF_CW176_SRX1_VCO1_LF_R2_GSM850_LSB                                     (0)
#define RF_CW176_SRX1_VCO1_LF_R2_GSM850_WIDTH                                   (6)
#define RF_CW176_SRX1_VCO1_LF_R2_GSM850_MASK                                    (0x0000003F)

#define RF_CW177_SRX1_VCO31_LF_R2_DCS_LSB                                       (12)
#define RF_CW177_SRX1_VCO31_LF_R2_DCS_WIDTH                                     (6)
#define RF_CW177_SRX1_VCO31_LF_R2_DCS_MASK                                      (0x0003F000)

#define RF_CW177_SRX1_VCO31_LF_R2_GSM900_LSB                                    (6)
#define RF_CW177_SRX1_VCO31_LF_R2_GSM900_WIDTH                                  (6)
#define RF_CW177_SRX1_VCO31_LF_R2_GSM900_MASK                                   (0x00000FC0)

#define RF_CW177_SRX1_VCO31_LF_R2_GSM850_LSB                                    (0)
#define RF_CW177_SRX1_VCO31_LF_R2_GSM850_WIDTH                                  (6)
#define RF_CW177_SRX1_VCO31_LF_R2_GSM850_MASK                                   (0x0000003F)

#define RF_CW178_SRX1_VCO1_ICP_FDD_LSB                                          (15)
#define RF_CW178_SRX1_VCO1_ICP_FDD_WIDTH                                        (5)
#define RF_CW178_SRX1_VCO1_ICP_FDD_MASK                                         (0x000F8000)

#define RF_CW178_SRX1_VCO1_IOFFSET_FDD_LSB                                      (10)
#define RF_CW178_SRX1_VCO1_IOFFSET_FDD_WIDTH                                    (5)
#define RF_CW178_SRX1_VCO1_IOFFSET_FDD_MASK                                     (0x00007C00)

#define RF_CW178_SRX1_VCO31_ICP_FDD_LSB                                         (5)
#define RF_CW178_SRX1_VCO31_ICP_FDD_WIDTH                                       (5)
#define RF_CW178_SRX1_VCO31_ICP_FDD_MASK                                        (0x000003E0)

#define RF_CW178_SRX1_VCO31_IOFFSET_FDD_LSB                                     (0)
#define RF_CW178_SRX1_VCO31_IOFFSET_FDD_WIDTH                                   (5)
#define RF_CW178_SRX1_VCO31_IOFFSET_FDD_MASK                                    (0x0000001F)

#define RF_CW179_SRX1_LF_C1_FDD_LSB                                             (11)
#define RF_CW179_SRX1_LF_C1_FDD_WIDTH                                           (5)
#define RF_CW179_SRX1_LF_C1_FDD_MASK                                            (0x0000F800)

#define RF_CW179_SRX1_LF_C2_FDD_LSB                                             (6)
#define RF_CW179_SRX1_LF_C2_FDD_WIDTH                                           (5)
#define RF_CW179_SRX1_LF_C2_FDD_MASK                                            (0x000007C0)

#define RF_CW179_SRX1_LF_R2_FDD_LSB                                             (0)
#define RF_CW179_SRX1_LF_R2_FDD_WIDTH                                           (6)
#define RF_CW179_SRX1_LF_R2_FDD_MASK                                            (0x0000003F)

#define RF_CW180_SRX1_VCO1_ICP_TDD_LSB                                          (15)
#define RF_CW180_SRX1_VCO1_ICP_TDD_WIDTH                                        (5)
#define RF_CW180_SRX1_VCO1_ICP_TDD_MASK                                         (0x000F8000)

#define RF_CW180_SRX1_VCO1_IOFFSET_TDD_LSB                                      (10)
#define RF_CW180_SRX1_VCO1_IOFFSET_TDD_WIDTH                                    (5)
#define RF_CW180_SRX1_VCO1_IOFFSET_TDD_MASK                                     (0x00007C00)

#define RF_CW180_SRX1_VCO31_ICP_TDD_LSB                                         (5)
#define RF_CW180_SRX1_VCO31_ICP_TDD_WIDTH                                       (5)
#define RF_CW180_SRX1_VCO31_ICP_TDD_MASK                                        (0x000003E0)

#define RF_CW180_SRX1_VCO31_IOFFSET_TDD_LSB                                     (0)
#define RF_CW180_SRX1_VCO31_IOFFSET_TDD_WIDTH                                   (5)
#define RF_CW180_SRX1_VCO31_IOFFSET_TDD_MASK                                    (0x0000001F)

#define RF_CW181_SRX1_LF_C1_TDD_LSB                                             (11)
#define RF_CW181_SRX1_LF_C1_TDD_WIDTH                                           (5)
#define RF_CW181_SRX1_LF_C1_TDD_MASK                                            (0x0000F800)

#define RF_CW181_SRX1_LF_C2_TDD_LSB                                             (6)
#define RF_CW181_SRX1_LF_C2_TDD_WIDTH                                           (5)
#define RF_CW181_SRX1_LF_C2_TDD_MASK                                            (0x000007C0)

#define RF_CW181_SRX1_LF_R2_TDD_LSB                                             (0)
#define RF_CW181_SRX1_LF_R2_TDD_WIDTH                                           (6)
#define RF_CW181_SRX1_LF_R2_TDD_MASK                                            (0x0000003F)

#define RF_CW182_SRX1_VCO1_ICP_C2K_LSB                                          (15)
#define RF_CW182_SRX1_VCO1_ICP_C2K_WIDTH                                        (5)
#define RF_CW182_SRX1_VCO1_ICP_C2K_MASK                                         (0x000F8000)

#define RF_CW182_SRX1_VCO1_IOFFSET_C2K_LSB                                      (10)
#define RF_CW182_SRX1_VCO1_IOFFSET_C2K_WIDTH                                    (5)
#define RF_CW182_SRX1_VCO1_IOFFSET_C2K_MASK                                     (0x00007C00)

#define RF_CW182_SRX1_VCO31_ICP_C2K_LSB                                         (5)
#define RF_CW182_SRX1_VCO31_ICP_C2K_WIDTH                                       (5)
#define RF_CW182_SRX1_VCO31_ICP_C2K_MASK                                        (0x000003E0)

#define RF_CW182_SRX1_VCO31_IOFFSET_C2K_LSB                                     (0)
#define RF_CW182_SRX1_VCO31_IOFFSET_C2K_WIDTH                                   (5)
#define RF_CW182_SRX1_VCO31_IOFFSET_C2K_MASK                                    (0x0000001F)

#define RF_CW183_SRX1_LF_C1_C2K_LSB                                             (11)
#define RF_CW183_SRX1_LF_C1_C2K_WIDTH                                           (5)
#define RF_CW183_SRX1_LF_C1_C2K_MASK                                            (0x0000F800)

#define RF_CW183_SRX1_LF_C2_C2K_LSB                                             (6)
#define RF_CW183_SRX1_LF_C2_C2K_WIDTH                                           (5)
#define RF_CW183_SRX1_LF_C2_C2K_MASK                                            (0x000007C0)

#define RF_CW183_SRX1_LF_R2_C2K_LSB                                             (0)
#define RF_CW183_SRX1_LF_R2_C2K_WIDTH                                           (6)
#define RF_CW183_SRX1_LF_R2_C2K_MASK                                            (0x0000003F)

#define RF_CW184_SRX1_TDD_FL_STAGES_LSB                                         (17)
#define RF_CW184_SRX1_TDD_FL_STAGES_WIDTH                                       (3)
#define RF_CW184_SRX1_TDD_FL_STAGES_MASK                                        (0x000E0000)

#define RF_CW184_SRX1_TDD_PFDFL_DELAY_LSB                                       (15)
#define RF_CW184_SRX1_TDD_PFDFL_DELAY_WIDTH                                     (2)
#define RF_CW184_SRX1_TDD_PFDFL_DELAY_MASK                                      (0x00018000)

#define RF_CW184_SRX1_TDD_FL_STG3_TIME_LSB                                      (10)
#define RF_CW184_SRX1_TDD_FL_STG3_TIME_WIDTH                                    (5)
#define RF_CW184_SRX1_TDD_FL_STG3_TIME_MASK                                     (0x00007C00)

#define RF_CW184_SRX1_TDD_FL_STG2_TIME_LSB                                      (7)
#define RF_CW184_SRX1_TDD_FL_STG2_TIME_WIDTH                                    (3)
#define RF_CW184_SRX1_TDD_FL_STG2_TIME_MASK                                     (0x00000380)

#define RF_CW184_SRX1_TDD_FL_STG1_TIME_LSB                                      (4)
#define RF_CW184_SRX1_TDD_FL_STG1_TIME_WIDTH                                    (3)
#define RF_CW184_SRX1_TDD_FL_STG1_TIME_MASK                                     (0x00000070)

#define RF_CW184_SRX1_TDD_FL_STG0_TIME_LSB                                      (0)
#define RF_CW184_SRX1_TDD_FL_STG0_TIME_WIDTH                                    (4)
#define RF_CW184_SRX1_TDD_FL_STG0_TIME_MASK                                     (0x0000000F)

#define RF_CW185_SRX1_2G_FL_STAGES_LSB                                          (17)
#define RF_CW185_SRX1_2G_FL_STAGES_WIDTH                                        (3)
#define RF_CW185_SRX1_2G_FL_STAGES_MASK                                         (0x000E0000)

#define RF_CW185_SRX1_2G_PFDFL_DELAY_LSB                                        (15)
#define RF_CW185_SRX1_2G_PFDFL_DELAY_WIDTH                                      (2)
#define RF_CW185_SRX1_2G_PFDFL_DELAY_MASK                                       (0x00018000)

#define RF_CW185_SRX1_2G_FL_STG3_TIME_LSB                                       (10)
#define RF_CW185_SRX1_2G_FL_STG3_TIME_WIDTH                                     (5)
#define RF_CW185_SRX1_2G_FL_STG3_TIME_MASK                                      (0x00007C00)

#define RF_CW185_SRX1_2G_FL_STG2_TIME_LSB                                       (7)
#define RF_CW185_SRX1_2G_FL_STG2_TIME_WIDTH                                     (3)
#define RF_CW185_SRX1_2G_FL_STG2_TIME_MASK                                      (0x00000380)

#define RF_CW185_SRX1_2G_FL_STG1_TIME_LSB                                       (4)
#define RF_CW185_SRX1_2G_FL_STG1_TIME_WIDTH                                     (3)
#define RF_CW185_SRX1_2G_FL_STG1_TIME_MASK                                      (0x00000070)

#define RF_CW185_SRX1_2G_FL_STG0_TIME_LSB                                       (0)
#define RF_CW185_SRX1_2G_FL_STG0_TIME_WIDTH                                     (4)
#define RF_CW185_SRX1_2G_FL_STG0_TIME_MASK                                      (0x0000000F)

#define RF_CW186_SRX1_FL_STAGE_LSB                                              (17)
#define RF_CW186_SRX1_FL_STAGE_WIDTH                                            (3)
#define RF_CW186_SRX1_FL_STAGE_MASK                                             (0x000E0000)

#define RF_CW186_SRX1_FL_STAGE_M_LSB                                            (16)
#define RF_CW186_SRX1_FL_STAGE_M_WIDTH                                          (1)
#define RF_CW186_SRX1_FL_STAGE_M_MASK                                           (0x00010000)
#define RF_CW186_SRX1_FL_STAGE_M_BIT                                            (0x00010000)

#define RF_CW186_SRX1_TDD_FL_IOFFSET_STG3_CORR_LSB                              (10)
#define RF_CW186_SRX1_TDD_FL_IOFFSET_STG3_CORR_WIDTH                            (5)
#define RF_CW186_SRX1_TDD_FL_IOFFSET_STG3_CORR_MASK                             (0x00007C00)

#define RF_CW186_SRX1_TDD_FL_IOFFSET_STG2_CORR_LSB                              (5)
#define RF_CW186_SRX1_TDD_FL_IOFFSET_STG2_CORR_WIDTH                            (5)
#define RF_CW186_SRX1_TDD_FL_IOFFSET_STG2_CORR_MASK                             (0x000003E0)

#define RF_CW186_SRX1_TDD_FL_IOFFSET_STG01_CORR_LSB                             (0)
#define RF_CW186_SRX1_TDD_FL_IOFFSET_STG01_CORR_WIDTH                           (5)
#define RF_CW186_SRX1_TDD_FL_IOFFSET_STG01_CORR_MASK                            (0x0000001F)

#define RF_CW187_SRX1_2G_FL_IOFFSET_STG3_CORR_LSB                               (10)
#define RF_CW187_SRX1_2G_FL_IOFFSET_STG3_CORR_WIDTH                             (5)
#define RF_CW187_SRX1_2G_FL_IOFFSET_STG3_CORR_MASK                              (0x00007C00)

#define RF_CW187_SRX1_2G_FL_IOFFSET_STG2_CORR_LSB                               (5)
#define RF_CW187_SRX1_2G_FL_IOFFSET_STG2_CORR_WIDTH                             (5)
#define RF_CW187_SRX1_2G_FL_IOFFSET_STG2_CORR_MASK                              (0x000003E0)

#define RF_CW187_SRX1_2G_FL_IOFFSET_STG01_CORR_LSB                              (0)
#define RF_CW187_SRX1_2G_FL_IOFFSET_STG01_CORR_WIDTH                            (5)
#define RF_CW187_SRX1_2G_FL_IOFFSET_STG01_CORR_MASK                             (0x0000001F)

#define RF_CW188_SRX1_TDD_FL_TRXSW_EN_LSB                                       (19)
#define RF_CW188_SRX1_TDD_FL_TRXSW_EN_WIDTH                                     (1)
#define RF_CW188_SRX1_TDD_FL_TRXSW_EN_MASK                                      (0x00080000)
#define RF_CW188_SRX1_TDD_FL_TRXSW_EN_BIT                                       (0x00080000)

#define RF_CW188_SRX1_TDD_FL_FCAL_EN_LSB                                        (18)
#define RF_CW188_SRX1_TDD_FL_FCAL_EN_WIDTH                                      (1)
#define RF_CW188_SRX1_TDD_FL_FCAL_EN_MASK                                       (0x00040000)
#define RF_CW188_SRX1_TDD_FL_FCAL_EN_BIT                                        (0x00040000)

#define RF_CW188_SRX1_TDD_FL_R2_STG3_LSB                                        (12)
#define RF_CW188_SRX1_TDD_FL_R2_STG3_WIDTH                                      (6)
#define RF_CW188_SRX1_TDD_FL_R2_STG3_MASK                                       (0x0003F000)

#define RF_CW188_SRX1_TDD_FL_R2_STG2_LSB                                        (6)
#define RF_CW188_SRX1_TDD_FL_R2_STG2_WIDTH                                      (6)
#define RF_CW188_SRX1_TDD_FL_R2_STG2_MASK                                       (0x00000FC0)

#define RF_CW188_SRX1_TDD_FL_R2_STG01_LSB                                       (0)
#define RF_CW188_SRX1_TDD_FL_R2_STG01_WIDTH                                     (6)
#define RF_CW188_SRX1_TDD_FL_R2_STG01_MASK                                      (0x0000003F)

#define RF_CW189_SRX1_2G_FL_FCAL_EN_LSB                                         (18)
#define RF_CW189_SRX1_2G_FL_FCAL_EN_WIDTH                                       (1)
#define RF_CW189_SRX1_2G_FL_FCAL_EN_MASK                                        (0x00040000)
#define RF_CW189_SRX1_2G_FL_FCAL_EN_BIT                                         (0x00040000)

#define RF_CW189_SRX1_VCO1_PCS_FL_R2_STG3_LSB                                   (12)
#define RF_CW189_SRX1_VCO1_PCS_FL_R2_STG3_WIDTH                                 (6)
#define RF_CW189_SRX1_VCO1_PCS_FL_R2_STG3_MASK                                  (0x0003F000)

#define RF_CW189_SRX1_VCO1_PCS_FL_R2_STG2_LSB                                   (6)
#define RF_CW189_SRX1_VCO1_PCS_FL_R2_STG2_WIDTH                                 (6)
#define RF_CW189_SRX1_VCO1_PCS_FL_R2_STG2_MASK                                  (0x00000FC0)

#define RF_CW189_SRX1_VCO1_PCS_FL_R2_STG01_LSB                                  (0)
#define RF_CW189_SRX1_VCO1_PCS_FL_R2_STG01_WIDTH                                (6)
#define RF_CW189_SRX1_VCO1_PCS_FL_R2_STG01_MASK                                 (0x0000003F)

#define RF_CW190_SRX1_LF_R3_M_LSB                                               (19)
#define RF_CW190_SRX1_LF_R3_M_WIDTH                                             (1)
#define RF_CW190_SRX1_LF_R3_M_MASK                                              (0x00080000)
#define RF_CW190_SRX1_LF_R3_M_BIT                                               (0x00080000)

#define RF_CW190_SRX1_LF_R3_LOW_LSB                                             (18)
#define RF_CW190_SRX1_LF_R3_LOW_WIDTH                                           (1)
#define RF_CW190_SRX1_LF_R3_LOW_MASK                                            (0x00040000)
#define RF_CW190_SRX1_LF_R3_LOW_BIT                                             (0x00040000)

#define RF_CW190_SRX1_VCO1_DCS_FL_R2_STG3_LSB                                   (12)
#define RF_CW190_SRX1_VCO1_DCS_FL_R2_STG3_WIDTH                                 (6)
#define RF_CW190_SRX1_VCO1_DCS_FL_R2_STG3_MASK                                  (0x0003F000)

#define RF_CW190_SRX1_VCO1_DCS_FL_R2_STG2_LSB                                   (6)
#define RF_CW190_SRX1_VCO1_DCS_FL_R2_STG2_WIDTH                                 (6)
#define RF_CW190_SRX1_VCO1_DCS_FL_R2_STG2_MASK                                  (0x00000FC0)

#define RF_CW190_SRX1_VCO1_DCS_FL_R2_STG01_LSB                                  (0)
#define RF_CW190_SRX1_VCO1_DCS_FL_R2_STG01_WIDTH                                (6)
#define RF_CW190_SRX1_VCO1_DCS_FL_R2_STG01_MASK                                 (0x0000003F)

#define RF_CW191_SRX1_VCO1_GSM900_FL_R2_STG3_LSB                                (12)
#define RF_CW191_SRX1_VCO1_GSM900_FL_R2_STG3_WIDTH                              (6)
#define RF_CW191_SRX1_VCO1_GSM900_FL_R2_STG3_MASK                               (0x0003F000)

#define RF_CW191_SRX1_VCO1_GSM900_FL_R2_STG2_LSB                                (6)
#define RF_CW191_SRX1_VCO1_GSM900_FL_R2_STG2_WIDTH                              (6)
#define RF_CW191_SRX1_VCO1_GSM900_FL_R2_STG2_MASK                               (0x00000FC0)

#define RF_CW191_SRX1_VCO1_GSM900_FL_R2_STG01_LSB                               (0)
#define RF_CW191_SRX1_VCO1_GSM900_FL_R2_STG01_WIDTH                             (6)
#define RF_CW191_SRX1_VCO1_GSM900_FL_R2_STG01_MASK                              (0x0000003F)

#define RF_CW192_SRX1_VCO1_GSM850_FL_R2_STG3_LSB                                (12)
#define RF_CW192_SRX1_VCO1_GSM850_FL_R2_STG3_WIDTH                              (6)
#define RF_CW192_SRX1_VCO1_GSM850_FL_R2_STG3_MASK                               (0x0003F000)

#define RF_CW192_SRX1_VCO1_GSM850_FL_R2_STG2_LSB                                (6)
#define RF_CW192_SRX1_VCO1_GSM850_FL_R2_STG2_WIDTH                              (6)
#define RF_CW192_SRX1_VCO1_GSM850_FL_R2_STG2_MASK                               (0x00000FC0)

#define RF_CW192_SRX1_VCO1_GSM850_FL_R2_STG01_LSB                               (0)
#define RF_CW192_SRX1_VCO1_GSM850_FL_R2_STG01_WIDTH                             (6)
#define RF_CW192_SRX1_VCO1_GSM850_FL_R2_STG01_MASK                              (0x0000003F)

#define RF_CW193_SRX1_VCO31_PCS_FL_R2_STG3_LSB                                  (12)
#define RF_CW193_SRX1_VCO31_PCS_FL_R2_STG3_WIDTH                                (6)
#define RF_CW193_SRX1_VCO31_PCS_FL_R2_STG3_MASK                                 (0x0003F000)

#define RF_CW193_SRX1_VCO31_PCS_FL_R2_STG2_LSB                                  (6)
#define RF_CW193_SRX1_VCO31_PCS_FL_R2_STG2_WIDTH                                (6)
#define RF_CW193_SRX1_VCO31_PCS_FL_R2_STG2_MASK                                 (0x00000FC0)

#define RF_CW193_SRX1_VCO31_PCS_FL_R2_STG01_LSB                                 (0)
#define RF_CW193_SRX1_VCO31_PCS_FL_R2_STG01_WIDTH                               (6)
#define RF_CW193_SRX1_VCO31_PCS_FL_R2_STG01_MASK                                (0x0000003F)

#define RF_CW194_SRX1_VCO31_DCS_FL_R2_STG3_LSB                                  (12)
#define RF_CW194_SRX1_VCO31_DCS_FL_R2_STG3_WIDTH                                (6)
#define RF_CW194_SRX1_VCO31_DCS_FL_R2_STG3_MASK                                 (0x0003F000)

#define RF_CW194_SRX1_VCO31_DCS_FL_R2_STG2_LSB                                  (6)
#define RF_CW194_SRX1_VCO31_DCS_FL_R2_STG2_WIDTH                                (6)
#define RF_CW194_SRX1_VCO31_DCS_FL_R2_STG2_MASK                                 (0x00000FC0)

#define RF_CW194_SRX1_VCO31_DCS_FL_R2_STG01_LSB                                 (0)
#define RF_CW194_SRX1_VCO31_DCS_FL_R2_STG01_WIDTH                               (6)
#define RF_CW194_SRX1_VCO31_DCS_FL_R2_STG01_MASK                                (0x0000003F)

#define RF_CW195_SRX1_VCO31_GSM900_FL_R2_STG3_LSB                               (12)
#define RF_CW195_SRX1_VCO31_GSM900_FL_R2_STG3_WIDTH                             (6)
#define RF_CW195_SRX1_VCO31_GSM900_FL_R2_STG3_MASK                              (0x0003F000)

#define RF_CW195_SRX1_VCO31_GSM900_FL_R2_STG2_LSB                               (6)
#define RF_CW195_SRX1_VCO31_GSM900_FL_R2_STG2_WIDTH                             (6)
#define RF_CW195_SRX1_VCO31_GSM900_FL_R2_STG2_MASK                              (0x00000FC0)

#define RF_CW195_SRX1_VCO31_GSM900_FL_R2_STG01_LSB                              (0)
#define RF_CW195_SRX1_VCO31_GSM900_FL_R2_STG01_WIDTH                            (6)
#define RF_CW195_SRX1_VCO31_GSM900_FL_R2_STG01_MASK                             (0x0000003F)

#define RF_CW196_SRX1_VCO31_GSM850_FL_R2_STG3_LSB                               (12)
#define RF_CW196_SRX1_VCO31_GSM850_FL_R2_STG3_WIDTH                             (6)
#define RF_CW196_SRX1_VCO31_GSM850_FL_R2_STG3_MASK                              (0x0003F000)

#define RF_CW196_SRX1_VCO31_GSM850_FL_R2_STG2_LSB                               (6)
#define RF_CW196_SRX1_VCO31_GSM850_FL_R2_STG2_WIDTH                             (6)
#define RF_CW196_SRX1_VCO31_GSM850_FL_R2_STG2_MASK                              (0x00000FC0)

#define RF_CW196_SRX1_VCO31_GSM850_FL_R2_STG01_LSB                              (0)
#define RF_CW196_SRX1_VCO31_GSM850_FL_R2_STG01_WIDTH                            (6)
#define RF_CW196_SRX1_VCO31_GSM850_FL_R2_STG01_MASK                             (0x0000003F)

#define RF_CW197_SRX1_TSENSOR_M_LSB                                             (19)
#define RF_CW197_SRX1_TSENSOR_M_WIDTH                                           (1)
#define RF_CW197_SRX1_TSENSOR_M_MASK                                            (0x00080000)
#define RF_CW197_SRX1_TSENSOR_M_BIT                                             (0x00080000)

#define RF_CW197_SRX1_TSENSOR_LSB                                               (15)
#define RF_CW197_SRX1_TSENSOR_WIDTH                                             (4)
#define RF_CW197_SRX1_TSENSOR_MASK                                              (0x00078000)

#define RF_CW197_SRX1_CALR_CONST_FINAL_TCL_M_LSB                                (14)
#define RF_CW197_SRX1_CALR_CONST_FINAL_TCL_M_WIDTH                              (1)
#define RF_CW197_SRX1_CALR_CONST_FINAL_TCL_M_MASK                               (0x00004000)
#define RF_CW197_SRX1_CALR_CONST_FINAL_TCL_M_BIT                                (0x00004000)

#define RF_CW197_SRX1_CALR_CONST_FINAL_TCL_LSB                                  (11)
#define RF_CW197_SRX1_CALR_CONST_FINAL_TCL_WIDTH                                (3)
#define RF_CW197_SRX1_CALR_CONST_FINAL_TCL_MASK                                 (0x00003800)

#define RF_CW197_SRX1_ACAL_TEMP_STEP_LSB                                        (4)
#define RF_CW197_SRX1_ACAL_TEMP_STEP_WIDTH                                      (7)
#define RF_CW197_SRX1_ACAL_TEMP_STEP_MASK                                       (0x000007F0)

#define RF_CW197_SRX1_ACAL_TEMP_CENTER_LSB                                      (0)
#define RF_CW197_SRX1_ACAL_TEMP_CENTER_WIDTH                                    (4)
#define RF_CW197_SRX1_ACAL_TEMP_CENTER_MASK                                     (0x0000000F)

#define RF_CW198_SRX1_VCO1_SOURCE_TNK5_LSB                                      (15)
#define RF_CW198_SRX1_VCO1_SOURCE_TNK5_WIDTH                                    (3)
#define RF_CW198_SRX1_VCO1_SOURCE_TNK5_MASK                                     (0x00038000)

#define RF_CW198_SRX1_VCO1_SOURCE_TNK4_LSB                                      (12)
#define RF_CW198_SRX1_VCO1_SOURCE_TNK4_WIDTH                                    (3)
#define RF_CW198_SRX1_VCO1_SOURCE_TNK4_MASK                                     (0x00007000)

#define RF_CW198_SRX1_VCO1_SOURCE_TNK3_LSB                                      (9)
#define RF_CW198_SRX1_VCO1_SOURCE_TNK3_WIDTH                                    (3)
#define RF_CW198_SRX1_VCO1_SOURCE_TNK3_MASK                                     (0x00000E00)

#define RF_CW198_SRX1_VCO1_SOURCE_TNK2_LSB                                      (6)
#define RF_CW198_SRX1_VCO1_SOURCE_TNK2_WIDTH                                    (3)
#define RF_CW198_SRX1_VCO1_SOURCE_TNK2_MASK                                     (0x000001C0)

#define RF_CW198_SRX1_VCO1_SOURCE_TNK1_LSB                                      (3)
#define RF_CW198_SRX1_VCO1_SOURCE_TNK1_WIDTH                                    (3)
#define RF_CW198_SRX1_VCO1_SOURCE_TNK1_MASK                                     (0x00000038)

#define RF_CW198_SRX1_VCO1_SOURCE_TNK0_LSB                                      (0)
#define RF_CW198_SRX1_VCO1_SOURCE_TNK0_WIDTH                                    (3)
#define RF_CW198_SRX1_VCO1_SOURCE_TNK0_MASK                                     (0x00000007)

#define RF_CW199_SRX1_VCO31_SOURCE_TNK7_LSB                                     (15)
#define RF_CW199_SRX1_VCO31_SOURCE_TNK7_WIDTH                                   (3)
#define RF_CW199_SRX1_VCO31_SOURCE_TNK7_MASK                                    (0x00038000)

#define RF_CW199_SRX1_VCO31_SOURCE_TNK6_LSB                                     (12)
#define RF_CW199_SRX1_VCO31_SOURCE_TNK6_WIDTH                                   (3)
#define RF_CW199_SRX1_VCO31_SOURCE_TNK6_MASK                                    (0x00007000)

#define RF_CW199_SRX1_VCO1_SOURCE_TNK8_LSB                                      (6)
#define RF_CW199_SRX1_VCO1_SOURCE_TNK8_WIDTH                                    (3)
#define RF_CW199_SRX1_VCO1_SOURCE_TNK8_MASK                                     (0x000001C0)

#define RF_CW199_SRX1_VCO1_SOURCE_TNK7_LSB                                      (3)
#define RF_CW199_SRX1_VCO1_SOURCE_TNK7_WIDTH                                    (3)
#define RF_CW199_SRX1_VCO1_SOURCE_TNK7_MASK                                     (0x00000038)

#define RF_CW199_SRX1_VCO1_SOURCE_TNK6_LSB                                      (0)
#define RF_CW199_SRX1_VCO1_SOURCE_TNK6_WIDTH                                    (3)
#define RF_CW199_SRX1_VCO1_SOURCE_TNK6_MASK                                     (0x00000007)

#define RF_CW200_SRX1_VCO31_SOURCE_TNK5_LSB                                     (15)
#define RF_CW200_SRX1_VCO31_SOURCE_TNK5_WIDTH                                   (3)
#define RF_CW200_SRX1_VCO31_SOURCE_TNK5_MASK                                    (0x00038000)

#define RF_CW200_SRX1_VCO31_SOURCE_TNK4_LSB                                     (12)
#define RF_CW200_SRX1_VCO31_SOURCE_TNK4_WIDTH                                   (3)
#define RF_CW200_SRX1_VCO31_SOURCE_TNK4_MASK                                    (0x00007000)

#define RF_CW200_SRX1_VCO31_SOURCE_TNK3_LSB                                     (9)
#define RF_CW200_SRX1_VCO31_SOURCE_TNK3_WIDTH                                   (3)
#define RF_CW200_SRX1_VCO31_SOURCE_TNK3_MASK                                    (0x00000E00)

#define RF_CW200_SRX1_VCO31_SOURCE_TNK2_LSB                                     (6)
#define RF_CW200_SRX1_VCO31_SOURCE_TNK2_WIDTH                                   (3)
#define RF_CW200_SRX1_VCO31_SOURCE_TNK2_MASK                                    (0x000001C0)

#define RF_CW200_SRX1_VCO31_SOURCE_TNK1_LSB                                     (3)
#define RF_CW200_SRX1_VCO31_SOURCE_TNK1_WIDTH                                   (3)
#define RF_CW200_SRX1_VCO31_SOURCE_TNK1_MASK                                    (0x00000038)

#define RF_CW200_SRX1_VCO31_SOURCE_TNK0_LSB                                     (0)
#define RF_CW200_SRX1_VCO31_SOURCE_TNK0_WIDTH                                   (3)
#define RF_CW200_SRX1_VCO31_SOURCE_TNK0_MASK                                    (0x00000007)

#define RF_CW201_SRX_DYNAMIC_AUXOUT_SEL_LSB                                     (12)
#define RF_CW201_SRX_DYNAMIC_AUXOUT_SEL_WIDTH                                   (8)
#define RF_CW201_SRX_DYNAMIC_AUXOUT_SEL_MASK                                    (0x000FF000)

#define RF_CW201_SRX1_LDO_CAL_EN_LSB                                            (11)
#define RF_CW201_SRX1_LDO_CAL_EN_WIDTH                                          (1)
#define RF_CW201_SRX1_LDO_CAL_EN_MASK                                           (0x00000800)
#define RF_CW201_SRX1_LDO_CAL_EN_BIT                                            (0x00000800)

#define RF_CW201_SRX1_DC_TPT_EN_LSB                                             (10)
#define RF_CW201_SRX1_DC_TPT_EN_WIDTH                                           (1)
#define RF_CW201_SRX1_DC_TPT_EN_MASK                                            (0x00000400)
#define RF_CW201_SRX1_DC_TPT_EN_BIT                                             (0x00000400)

#define RF_CW201_SRX1_TPT_GRP_LSB                                               (7)
#define RF_CW201_SRX1_TPT_GRP_WIDTH                                             (3)
#define RF_CW201_SRX1_TPT_GRP_MASK                                              (0x00000380)

#define RF_CW201_SRX1_TPT_REG_LSB                                               (4)
#define RF_CW201_SRX1_TPT_REG_WIDTH                                             (3)
#define RF_CW201_SRX1_TPT_REG_MASK                                              (0x00000070)

#define RF_CW201_SRX1_VTUNE_FCAL_EN_LSB                                         (1)
#define RF_CW201_SRX1_VTUNE_FCAL_EN_WIDTH                                       (1)
#define RF_CW201_SRX1_VTUNE_FCAL_EN_MASK                                        (0x00000002)
#define RF_CW201_SRX1_VTUNE_FCAL_EN_BIT                                         (0x00000002)

#define RF_CW201_SRX1_VCO_MON_EN_LSB                                            (0)
#define RF_CW201_SRX1_VCO_MON_EN_WIDTH                                          (1)
#define RF_CW201_SRX1_VCO_MON_EN_MASK                                           (0x00000001)
#define RF_CW201_SRX1_VCO_MON_EN_BIT                                            (0x00000001)

#define RF_CW238_SRX2_2G_CAL_T_LSB                                              (10)
#define RF_CW238_SRX2_2G_CAL_T_WIDTH                                            (10)
#define RF_CW238_SRX2_2G_CAL_T_MASK                                             (0x000FFC00)

#define RF_CW238_SRX2_2G_WARMUP_T_LSB                                           (0)
#define RF_CW238_SRX2_2G_WARMUP_T_WIDTH                                         (10)
#define RF_CW238_SRX2_2G_WARMUP_T_MASK                                          (0x000003FF)

#define RF_CW239_SRX2_FDD_CAL_T_LSB                                             (10)
#define RF_CW239_SRX2_FDD_CAL_T_WIDTH                                           (10)
#define RF_CW239_SRX2_FDD_CAL_T_MASK                                            (0x000FFC00)

#define RF_CW239_SRX2_FDD_WARMUP_T_LSB                                          (0)
#define RF_CW239_SRX2_FDD_WARMUP_T_WIDTH                                        (10)
#define RF_CW239_SRX2_FDD_WARMUP_T_MASK                                         (0x000003FF)

#define RF_CW240_SRX2_TDD_CAL_T_LSB                                             (10)
#define RF_CW240_SRX2_TDD_CAL_T_WIDTH                                           (10)
#define RF_CW240_SRX2_TDD_CAL_T_MASK                                            (0x000FFC00)

#define RF_CW240_SRX2_TDD_WARMUP_T_LSB                                          (0)
#define RF_CW240_SRX2_TDD_WARMUP_T_WIDTH                                        (10)
#define RF_CW240_SRX2_TDD_WARMUP_T_MASK                                         (0x000003FF)

#define RF_CW241_SRX2_C2K_CAL_T_LSB                                             (10)
#define RF_CW241_SRX2_C2K_CAL_T_WIDTH                                           (10)
#define RF_CW241_SRX2_C2K_CAL_T_MASK                                            (0x000FFC00)

#define RF_CW241_SRX2_C2K_WARMUP_T_LSB                                          (0)
#define RF_CW241_SRX2_C2K_WARMUP_T_WIDTH                                        (10)
#define RF_CW241_SRX2_C2K_WARMUP_T_MASK                                         (0x000003FF)

#define RF_CW242_SRX2_LDO_PFD_RBG_LSB                                           (14)
#define RF_CW242_SRX2_LDO_PFD_RBG_WIDTH                                         (5)
#define RF_CW242_SRX2_LDO_PFD_RBG_MASK                                          (0x0007C000)

#define RF_CW242_SRX2_LDO_MMD_RBG_LSB                                           (8)
#define RF_CW242_SRX2_LDO_MMD_RBG_WIDTH                                         (5)
#define RF_CW242_SRX2_LDO_MMD_RBG_MASK                                          (0x00001F00)

#define RF_CW242_SRX2_LDO_VCO_RBG_LSB                                           (2)
#define RF_CW242_SRX2_LDO_VCO_RBG_WIDTH                                         (5)
#define RF_CW242_SRX2_LDO_VCO_RBG_MASK                                          (0x0000007C)

#define RF_CW242_SRX2_LDO_FCOFF_M_LSB                                           (1)
#define RF_CW242_SRX2_LDO_FCOFF_M_WIDTH                                         (1)
#define RF_CW242_SRX2_LDO_FCOFF_M_MASK                                          (0x00000002)
#define RF_CW242_SRX2_LDO_FCOFF_M_BIT                                           (0x00000002)

#define RF_CW242_SRX2_LDO_FCOFF_LSB                                             (0)
#define RF_CW242_SRX2_LDO_FCOFF_WIDTH                                           (1)
#define RF_CW242_SRX2_LDO_FCOFF_MASK                                            (0x00000001)
#define RF_CW242_SRX2_LDO_FCOFF_BIT                                             (0x00000001)

#define RF_CW243_SRX2_LF_SW_EN_LSB                                              (19)
#define RF_CW243_SRX2_LF_SW_EN_WIDTH                                            (1)
#define RF_CW243_SRX2_LF_SW_EN_MASK                                             (0x00080000)
#define RF_CW243_SRX2_LF_SW_EN_BIT                                              (0x00080000)

#define RF_CW243_SRX2_REF_EN_LSB                                                (18)
#define RF_CW243_SRX2_REF_EN_WIDTH                                              (1)
#define RF_CW243_SRX2_REF_EN_MASK                                               (0x00040000)
#define RF_CW243_SRX2_REF_EN_BIT                                                (0x00040000)

#define RF_CW243_SRX2_PFD_EN_LSB                                                (17)
#define RF_CW243_SRX2_PFD_EN_WIDTH                                              (1)
#define RF_CW243_SRX2_PFD_EN_MASK                                               (0x00020000)
#define RF_CW243_SRX2_PFD_EN_BIT                                                (0x00020000)

#define RF_CW243_SRX2_CP_EN_LSB                                                 (16)
#define RF_CW243_SRX2_CP_EN_WIDTH                                               (1)
#define RF_CW243_SRX2_CP_EN_MASK                                                (0x00010000)
#define RF_CW243_SRX2_CP_EN_BIT                                                 (0x00010000)

#define RF_CW243_SRX2_MMD_EN_LSB                                                (15)
#define RF_CW243_SRX2_MMD_EN_WIDTH                                              (1)
#define RF_CW243_SRX2_MMD_EN_MASK                                               (0x00008000)
#define RF_CW243_SRX2_MMD_EN_BIT                                                (0x00008000)

#define RF_CW243_SRX2_VCOBUF_EN_LSB                                             (14)
#define RF_CW243_SRX2_VCOBUF_EN_WIDTH                                           (1)
#define RF_CW243_SRX2_VCOBUF_EN_MASK                                            (0x00004000)
#define RF_CW243_SRX2_VCOBUF_EN_BIT                                             (0x00004000)

#define RF_CW243_SRX2_SUBCKT_EN_M_LSB                                           (13)
#define RF_CW243_SRX2_SUBCKT_EN_M_WIDTH                                         (1)
#define RF_CW243_SRX2_SUBCKT_EN_M_MASK                                          (0x00002000)
#define RF_CW243_SRX2_SUBCKT_EN_M_BIT                                           (0x00002000)

#define RF_CW243_SRX2_TCL_EN_LSB                                                (12)
#define RF_CW243_SRX2_TCL_EN_WIDTH                                              (1)
#define RF_CW243_SRX2_TCL_EN_MASK                                               (0x00001000)
#define RF_CW243_SRX2_TCL_EN_BIT                                                (0x00001000)

#define RF_CW243_SRX2_LDO_VCO32_BYPASS_LSB                                      (11)
#define RF_CW243_SRX2_LDO_VCO32_BYPASS_WIDTH                                    (1)
#define RF_CW243_SRX2_LDO_VCO32_BYPASS_MASK                                     (0x00000800)
#define RF_CW243_SRX2_LDO_VCO32_BYPASS_BIT                                      (0x00000800)

#define RF_CW243_SRX2_LDO_VCO2_BYPASS_LSB                                       (10)
#define RF_CW243_SRX2_LDO_VCO2_BYPASS_WIDTH                                     (1)
#define RF_CW243_SRX2_LDO_VCO2_BYPASS_MASK                                      (0x00000400)
#define RF_CW243_SRX2_LDO_VCO2_BYPASS_BIT                                       (0x00000400)

#define RF_CW243_SRX2_LDO_PFD_EN_M_LSB                                          (9)
#define RF_CW243_SRX2_LDO_PFD_EN_M_WIDTH                                        (1)
#define RF_CW243_SRX2_LDO_PFD_EN_M_MASK                                         (0x00000200)
#define RF_CW243_SRX2_LDO_PFD_EN_M_BIT                                          (0x00000200)

#define RF_CW243_SRX2_LDO_MMD_EN_M_LSB                                          (8)
#define RF_CW243_SRX2_LDO_MMD_EN_M_WIDTH                                        (1)
#define RF_CW243_SRX2_LDO_MMD_EN_M_MASK                                         (0x00000100)
#define RF_CW243_SRX2_LDO_MMD_EN_M_BIT                                          (0x00000100)

#define RF_CW243_SRX2_LDO_VCO_EN_M_LSB                                          (7)
#define RF_CW243_SRX2_LDO_VCO_EN_M_WIDTH                                        (1)
#define RF_CW243_SRX2_LDO_VCO_EN_M_MASK                                         (0x00000080)
#define RF_CW243_SRX2_LDO_VCO_EN_M_BIT                                          (0x00000080)

#define RF_CW243_SRX2_VCO2_EN_M_LSB                                             (6)
#define RF_CW243_SRX2_VCO2_EN_M_WIDTH                                           (1)
#define RF_CW243_SRX2_VCO2_EN_M_MASK                                            (0x00000040)
#define RF_CW243_SRX2_VCO2_EN_M_BIT                                             (0x00000040)

#define RF_CW243_SRX2_VCO32_EN_M_LSB                                            (5)
#define RF_CW243_SRX2_VCO32_EN_M_WIDTH                                          (1)
#define RF_CW243_SRX2_VCO32_EN_M_MASK                                           (0x00000020)
#define RF_CW243_SRX2_VCO32_EN_M_BIT                                            (0x00000020)

#define RF_CW243_SRX2_LDO_PFD_EN_LSB                                            (4)
#define RF_CW243_SRX2_LDO_PFD_EN_WIDTH                                          (1)
#define RF_CW243_SRX2_LDO_PFD_EN_MASK                                           (0x00000010)
#define RF_CW243_SRX2_LDO_PFD_EN_BIT                                            (0x00000010)

#define RF_CW243_SRX2_LDO_MMD_EN_LSB                                            (3)
#define RF_CW243_SRX2_LDO_MMD_EN_WIDTH                                          (1)
#define RF_CW243_SRX2_LDO_MMD_EN_MASK                                           (0x00000008)
#define RF_CW243_SRX2_LDO_MMD_EN_BIT                                            (0x00000008)

#define RF_CW243_SRX2_LDO_VCO_EN_LSB                                            (2)
#define RF_CW243_SRX2_LDO_VCO_EN_WIDTH                                          (1)
#define RF_CW243_SRX2_LDO_VCO_EN_MASK                                           (0x00000004)
#define RF_CW243_SRX2_LDO_VCO_EN_BIT                                            (0x00000004)

#define RF_CW243_SRX2_VCO2_EN_LSB                                               (1)
#define RF_CW243_SRX2_VCO2_EN_WIDTH                                             (1)
#define RF_CW243_SRX2_VCO2_EN_MASK                                              (0x00000002)
#define RF_CW243_SRX2_VCO2_EN_BIT                                               (0x00000002)

#define RF_CW243_SRX2_VCO32_EN_LSB                                              (0)
#define RF_CW243_SRX2_VCO32_EN_WIDTH                                            (1)
#define RF_CW243_SRX2_VCO32_EN_MASK                                             (0x00000001)
#define RF_CW243_SRX2_VCO32_EN_BIT                                              (0x00000001)

#define RF_CW244_SRX2_LDO_LVL_PFD_LSB                                           (18)
#define RF_CW244_SRX2_LDO_LVL_PFD_WIDTH                                         (2)
#define RF_CW244_SRX2_LDO_LVL_PFD_MASK                                          (0x000C0000)

#define RF_CW244_SRX2_LDO_LVL_MMD_LSB                                           (16)
#define RF_CW244_SRX2_LDO_LVL_MMD_WIDTH                                         (2)
#define RF_CW244_SRX2_LDO_LVL_MMD_MASK                                          (0x00030000)

#define RF_CW244_SRX2_TOP_EN_LSB                                                (14)
#define RF_CW244_SRX2_TOP_EN_WIDTH                                              (1)
#define RF_CW244_SRX2_TOP_EN_MASK                                               (0x00004000)
#define RF_CW244_SRX2_TOP_EN_BIT                                                (0x00004000)

#define RF_CW244_SRX2_VCO32_DIV2_EN_LSB                                         (13)
#define RF_CW244_SRX2_VCO32_DIV2_EN_WIDTH                                       (1)
#define RF_CW244_SRX2_VCO32_DIV2_EN_MASK                                        (0x00002000)
#define RF_CW244_SRX2_VCO32_DIV2_EN_BIT                                         (0x00002000)

#define RF_CW244_SRX2_LDO_R_BYPASS_REF_LSB                                      (12)
#define RF_CW244_SRX2_LDO_R_BYPASS_REF_WIDTH                                    (1)
#define RF_CW244_SRX2_LDO_R_BYPASS_REF_MASK                                     (0x00001000)
#define RF_CW244_SRX2_LDO_R_BYPASS_REF_BIT                                      (0x00001000)

#define RF_CW244_SRX2_LDO_R_BYPASS_PFD_LSB                                      (11)
#define RF_CW244_SRX2_LDO_R_BYPASS_PFD_WIDTH                                    (1)
#define RF_CW244_SRX2_LDO_R_BYPASS_PFD_MASK                                     (0x00000800)
#define RF_CW244_SRX2_LDO_R_BYPASS_PFD_BIT                                      (0x00000800)

#define RF_CW244_SRX2_LDO_R_BYPASS_CP_LSB                                       (10)
#define RF_CW244_SRX2_LDO_R_BYPASS_CP_WIDTH                                     (1)
#define RF_CW244_SRX2_LDO_R_BYPASS_CP_MASK                                      (0x00000400)
#define RF_CW244_SRX2_LDO_R_BYPASS_CP_BIT                                       (0x00000400)

#define RF_CW244_SRX2_MMDDRV_VSP_LSB                                            (8)
#define RF_CW244_SRX2_MMDDRV_VSP_WIDTH                                          (2)
#define RF_CW244_SRX2_MMDDRV_VSP_MASK                                           (0x00000300)

#define RF_CW244_SRX2_HBUF_VSP_LSB                                              (6)
#define RF_CW244_SRX2_HBUF_VSP_WIDTH                                            (2)
#define RF_CW244_SRX2_HBUF_VSP_MASK                                             (0x000000C0)

#define RF_CW244_SRX2_LDO_R_BYPASS_MMD_LSB                                      (4)
#define RF_CW244_SRX2_LDO_R_BYPASS_MMD_WIDTH                                    (2)
#define RF_CW244_SRX2_LDO_R_BYPASS_MMD_MASK                                     (0x00000030)

#define RF_CW244_SRX2_LDO_R_BYPASS_RETIMER_LSB                                  (2)
#define RF_CW244_SRX2_LDO_R_BYPASS_RETIMER_WIDTH                                (2)
#define RF_CW244_SRX2_LDO_R_BYPASS_RETIMER_MASK                                 (0x0000000C)

#define RF_CW244_SRX2_LDO_R_BYPASS_SDM_LSB                                      (0)
#define RF_CW244_SRX2_LDO_R_BYPASS_SDM_WIDTH                                    (2)
#define RF_CW244_SRX2_LDO_R_BYPASS_SDM_MASK                                     (0x00000003)

#define RF_CW245_SRX2_DCC_FINISH_M_LSB                                          (19)
#define RF_CW245_SRX2_DCC_FINISH_M_WIDTH                                        (1)
#define RF_CW245_SRX2_DCC_FINISH_M_MASK                                         (0x00080000)
#define RF_CW245_SRX2_DCC_FINISH_M_BIT                                          (0x00080000)

#define RF_CW245_SRX2_DCC_FINISH_LSB                                            (18)
#define RF_CW245_SRX2_DCC_FINISH_WIDTH                                          (1)
#define RF_CW245_SRX2_DCC_FINISH_MASK                                           (0x00040000)
#define RF_CW245_SRX2_DCC_FINISH_BIT                                            (0x00040000)

#define RF_CW245_SRX2_ACFINISH_M_LSB                                            (17)
#define RF_CW245_SRX2_ACFINISH_M_WIDTH                                          (1)
#define RF_CW245_SRX2_ACFINISH_M_MASK                                           (0x00020000)
#define RF_CW245_SRX2_ACFINISH_M_BIT                                            (0x00020000)

#define RF_CW245_SRX2_ACFINISH_LSB                                              (16)
#define RF_CW245_SRX2_ACFINISH_WIDTH                                            (1)
#define RF_CW245_SRX2_ACFINISH_MASK                                             (0x00010000)
#define RF_CW245_SRX2_ACFINISH_BIT                                              (0x00010000)

#define RF_CW245_SRX2_RSV1_LSB                                                  (9)
#define RF_CW245_SRX2_RSV1_WIDTH                                                (4)
#define RF_CW245_SRX2_RSV1_MASK                                                 (0x00001E00)

#define RF_CW245_SRX2_LDO_LVL_VCO32_C2K_LSB                                     (6)
#define RF_CW245_SRX2_LDO_LVL_VCO32_C2K_WIDTH                                   (3)
#define RF_CW245_SRX2_LDO_LVL_VCO32_C2K_MASK                                    (0x000001C0)

#define RF_CW245_SRX2_LDO_LVL_VCO32_2G_LSB                                      (3)
#define RF_CW245_SRX2_LDO_LVL_VCO32_2G_WIDTH                                    (3)
#define RF_CW245_SRX2_LDO_LVL_VCO32_2G_MASK                                     (0x00000038)

#define RF_CW245_SRX2_LDO_LVL_VCO32_CA_LSB                                      (0)
#define RF_CW245_SRX2_LDO_LVL_VCO32_CA_WIDTH                                    (3)
#define RF_CW245_SRX2_LDO_LVL_VCO32_CA_MASK                                     (0x00000007)

#define RF_CW246_SRX2_VCO32_VTUNE_FCAL_C2K_LSB                                  (13)
#define RF_CW246_SRX2_VCO32_VTUNE_FCAL_C2K_WIDTH                                (2)
#define RF_CW246_SRX2_VCO32_VTUNE_FCAL_C2K_MASK                                 (0x00006000)

#define RF_CW246_SRX2_VCO32_VTUNE_FCAL_2G_LSB                                   (11)
#define RF_CW246_SRX2_VCO32_VTUNE_FCAL_2G_WIDTH                                 (2)
#define RF_CW246_SRX2_VCO32_VTUNE_FCAL_2G_MASK                                  (0x00001800)

#define RF_CW246_SRX2_VCO32_VTUNE_FCAL_CA_LSB                                   (9)
#define RF_CW246_SRX2_VCO32_VTUNE_FCAL_CA_WIDTH                                 (2)
#define RF_CW246_SRX2_VCO32_VTUNE_FCAL_CA_MASK                                  (0x00000600)

#define RF_CW246_SRX2_VCO32_VAR_BIAS_C2K_LSB                                    (6)
#define RF_CW246_SRX2_VCO32_VAR_BIAS_C2K_WIDTH                                  (3)
#define RF_CW246_SRX2_VCO32_VAR_BIAS_C2K_MASK                                   (0x000001C0)

#define RF_CW246_SRX2_VCO32_VAR_BIAS_2G_LSB                                     (3)
#define RF_CW246_SRX2_VCO32_VAR_BIAS_2G_WIDTH                                   (3)
#define RF_CW246_SRX2_VCO32_VAR_BIAS_2G_MASK                                    (0x00000038)

#define RF_CW246_SRX2_VCO32_VAR_BIAS_CA_LSB                                     (0)
#define RF_CW246_SRX2_VCO32_VAR_BIAS_CA_WIDTH                                   (3)
#define RF_CW246_SRX2_VCO32_VAR_BIAS_CA_MASK                                    (0x00000007)

#define RF_CW247_SRX2_VCO2_SCA_VSP_INDLR_HP_LSB                                 (18)
#define RF_CW247_SRX2_VCO2_SCA_VSP_INDLR_HP_WIDTH                               (2)
#define RF_CW247_SRX2_VCO2_SCA_VSP_INDLR_HP_MASK                                (0x000C0000)

#define RF_CW247_SRX2_VCO2_SCA_VSP_INDLR_LP_LSB                                 (16)
#define RF_CW247_SRX2_VCO2_SCA_VSP_INDLR_LP_WIDTH                               (2)
#define RF_CW247_SRX2_VCO2_SCA_VSP_INDLR_LP_MASK                                (0x00030000)

#define RF_CW247_SRX2_VCO2_SCA_VSP_INDSM_HP_LSB                                 (14)
#define RF_CW247_SRX2_VCO2_SCA_VSP_INDSM_HP_WIDTH                               (2)
#define RF_CW247_SRX2_VCO2_SCA_VSP_INDSM_HP_MASK                                (0x0000C000)

#define RF_CW247_SRX2_VCO2_SCA_VSP_INDSM_LP_LSB                                 (12)
#define RF_CW247_SRX2_VCO2_SCA_VSP_INDSM_LP_WIDTH                               (2)
#define RF_CW247_SRX2_VCO2_SCA_VSP_INDSM_LP_MASK                                (0x00003000)

#define RF_CW247_SRX2_LDO_LVL_VCO2_INDLR_HP_LSB                                 (9)
#define RF_CW247_SRX2_LDO_LVL_VCO2_INDLR_HP_WIDTH                               (3)
#define RF_CW247_SRX2_LDO_LVL_VCO2_INDLR_HP_MASK                                (0x00000E00)

#define RF_CW247_SRX2_LDO_LVL_VCO2_INDLR_LP_LSB                                 (6)
#define RF_CW247_SRX2_LDO_LVL_VCO2_INDLR_LP_WIDTH                               (3)
#define RF_CW247_SRX2_LDO_LVL_VCO2_INDLR_LP_MASK                                (0x000001C0)

#define RF_CW247_SRX2_LDO_LVL_VCO2_INDSM_HP_LSB                                 (3)
#define RF_CW247_SRX2_LDO_LVL_VCO2_INDSM_HP_WIDTH                               (3)
#define RF_CW247_SRX2_LDO_LVL_VCO2_INDSM_HP_MASK                                (0x00000038)

#define RF_CW247_SRX2_LDO_LVL_VCO2_INDSM_LP_LSB                                 (0)
#define RF_CW247_SRX2_LDO_LVL_VCO2_INDSM_LP_WIDTH                               (3)
#define RF_CW247_SRX2_LDO_LVL_VCO2_INDSM_LP_MASK                                (0x00000007)

#define RF_CW248_SRX2_VCO2_VTUNE_FCAL_INDLR_HP_LSB                              (18)
#define RF_CW248_SRX2_VCO2_VTUNE_FCAL_INDLR_HP_WIDTH                            (2)
#define RF_CW248_SRX2_VCO2_VTUNE_FCAL_INDLR_HP_MASK                             (0x000C0000)

#define RF_CW248_SRX2_VCO2_VTUNE_FCAL_INDLR_LP_LSB                              (16)
#define RF_CW248_SRX2_VCO2_VTUNE_FCAL_INDLR_LP_WIDTH                            (2)
#define RF_CW248_SRX2_VCO2_VTUNE_FCAL_INDLR_LP_MASK                             (0x00030000)

#define RF_CW248_SRX2_VCO2_VTUNE_FCAL_INDSM_HP_LSB                              (14)
#define RF_CW248_SRX2_VCO2_VTUNE_FCAL_INDSM_HP_WIDTH                            (2)
#define RF_CW248_SRX2_VCO2_VTUNE_FCAL_INDSM_HP_MASK                             (0x0000C000)

#define RF_CW248_SRX2_VCO2_VTUNE_FCAL_INDSM_LP_LSB                              (12)
#define RF_CW248_SRX2_VCO2_VTUNE_FCAL_INDSM_LP_WIDTH                            (2)
#define RF_CW248_SRX2_VCO2_VTUNE_FCAL_INDSM_LP_MASK                             (0x00003000)

#define RF_CW248_SRX2_VCO2_VAR_BIAS_INDLR_HP_LSB                                (9)
#define RF_CW248_SRX2_VCO2_VAR_BIAS_INDLR_HP_WIDTH                              (3)
#define RF_CW248_SRX2_VCO2_VAR_BIAS_INDLR_HP_MASK                               (0x00000E00)

#define RF_CW248_SRX2_VCO2_VAR_BIAS_INDLR_LP_LSB                                (6)
#define RF_CW248_SRX2_VCO2_VAR_BIAS_INDLR_LP_WIDTH                              (3)
#define RF_CW248_SRX2_VCO2_VAR_BIAS_INDLR_LP_MASK                               (0x000001C0)

#define RF_CW248_SRX2_VCO2_VAR_BIAS_INDSM_HP_LSB                                (3)
#define RF_CW248_SRX2_VCO2_VAR_BIAS_INDSM_HP_WIDTH                              (3)
#define RF_CW248_SRX2_VCO2_VAR_BIAS_INDSM_HP_MASK                               (0x00000038)

#define RF_CW248_SRX2_VCO2_VAR_BIAS_INDSM_LP_LSB                                (0)
#define RF_CW248_SRX2_VCO2_VAR_BIAS_INDSM_LP_WIDTH                              (3)
#define RF_CW248_SRX2_VCO2_VAR_BIAS_INDSM_LP_MASK                               (0x00000007)

#define RF_CW249_SRX2_VCO2_NV_VSP_R_2G_LSB                                      (18)
#define RF_CW249_SRX2_VCO2_NV_VSP_R_2G_WIDTH                                    (2)
#define RF_CW249_SRX2_VCO2_NV_VSP_R_2G_MASK                                     (0x000C0000)

#define RF_CW249_SRX2_VCO2_NV_VSP_R_TDD_LSB                                     (16)
#define RF_CW249_SRX2_VCO2_NV_VSP_R_TDD_WIDTH                                   (2)
#define RF_CW249_SRX2_VCO2_NV_VSP_R_TDD_MASK                                    (0x00030000)

#define RF_CW249_SRX2_VCO2_SEQACAL_EN_7_LSB                                     (15)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_7_WIDTH                                   (1)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_7_MASK                                    (0x00008000)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_7_BIT                                     (0x00008000)

#define RF_CW249_SRX2_VCO2_SEQACAL_EN_6_LSB                                     (14)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_6_WIDTH                                   (1)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_6_MASK                                    (0x00004000)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_6_BIT                                     (0x00004000)

#define RF_CW249_SRX2_VCO2_SEQACAL_EN_5_LSB                                     (13)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_5_WIDTH                                   (1)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_5_MASK                                    (0x00002000)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_5_BIT                                     (0x00002000)

#define RF_CW249_SRX2_VCO2_SEQACAL_EN_4_LSB                                     (12)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_4_WIDTH                                   (1)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_4_MASK                                    (0x00001000)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_4_BIT                                     (0x00001000)

#define RF_CW249_SRX2_VCO2_SEQACAL_EN_3_LSB                                     (11)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_3_WIDTH                                   (1)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_3_MASK                                    (0x00000800)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_3_BIT                                     (0x00000800)

#define RF_CW249_SRX2_VCO2_SEQACAL_EN_2_LSB                                     (10)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_2_WIDTH                                   (1)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_2_MASK                                    (0x00000400)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_2_BIT                                     (0x00000400)

#define RF_CW249_SRX2_VCO2_SEQACAL_EN_1_LSB                                     (9)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_1_WIDTH                                   (1)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_1_MASK                                    (0x00000200)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_1_BIT                                     (0x00000200)

#define RF_CW249_SRX2_VCO2_SEQACAL_EN_0_LSB                                     (8)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_0_WIDTH                                   (1)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_0_MASK                                    (0x00000100)
#define RF_CW249_SRX2_VCO2_SEQACAL_EN_0_BIT                                     (0x00000100)

#define RF_CW249_SRX2_VCO32_SEQACAL_EN_7_LSB                                    (7)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_7_WIDTH                                  (1)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_7_MASK                                   (0x00000080)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_7_BIT                                    (0x00000080)

#define RF_CW249_SRX2_VCO32_SEQACAL_EN_6_LSB                                    (6)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_6_WIDTH                                  (1)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_6_MASK                                   (0x00000040)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_6_BIT                                    (0x00000040)

#define RF_CW249_SRX2_VCO32_SEQACAL_EN_5_LSB                                    (5)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_5_WIDTH                                  (1)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_5_MASK                                   (0x00000020)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_5_BIT                                    (0x00000020)

#define RF_CW249_SRX2_VCO32_SEQACAL_EN_4_LSB                                    (4)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_4_WIDTH                                  (1)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_4_MASK                                   (0x00000010)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_4_BIT                                    (0x00000010)

#define RF_CW249_SRX2_VCO32_SEQACAL_EN_3_LSB                                    (3)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_3_WIDTH                                  (1)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_3_MASK                                   (0x00000008)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_3_BIT                                    (0x00000008)

#define RF_CW249_SRX2_VCO32_SEQACAL_EN_2_LSB                                    (2)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_2_WIDTH                                  (1)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_2_MASK                                   (0x00000004)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_2_BIT                                    (0x00000004)

#define RF_CW249_SRX2_VCO32_SEQACAL_EN_1_LSB                                    (1)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_1_WIDTH                                  (1)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_1_MASK                                   (0x00000002)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_1_BIT                                    (0x00000002)

#define RF_CW249_SRX2_VCO32_SEQACAL_EN_0_LSB                                    (0)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_0_WIDTH                                  (1)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_0_MASK                                   (0x00000001)
#define RF_CW249_SRX2_VCO32_SEQACAL_EN_0_BIT                                    (0x00000001)

#define RF_CW250_SRX2_VCO2_BUF_VSP5_LSB                                         (15)
#define RF_CW250_SRX2_VCO2_BUF_VSP5_WIDTH                                       (3)
#define RF_CW250_SRX2_VCO2_BUF_VSP5_MASK                                        (0x00038000)

#define RF_CW250_SRX2_VCO2_BUF_VSP4_LSB                                         (12)
#define RF_CW250_SRX2_VCO2_BUF_VSP4_WIDTH                                       (3)
#define RF_CW250_SRX2_VCO2_BUF_VSP4_MASK                                        (0x00007000)

#define RF_CW250_SRX2_VCO2_BUF_VSP3_LSB                                         (9)
#define RF_CW250_SRX2_VCO2_BUF_VSP3_WIDTH                                       (3)
#define RF_CW250_SRX2_VCO2_BUF_VSP3_MASK                                        (0x00000E00)

#define RF_CW250_SRX2_VCO2_BUF_VSP2_LSB                                         (6)
#define RF_CW250_SRX2_VCO2_BUF_VSP2_WIDTH                                       (3)
#define RF_CW250_SRX2_VCO2_BUF_VSP2_MASK                                        (0x000001C0)

#define RF_CW250_SRX2_VCO2_BUF_VSP1_LSB                                         (3)
#define RF_CW250_SRX2_VCO2_BUF_VSP1_WIDTH                                       (3)
#define RF_CW250_SRX2_VCO2_BUF_VSP1_MASK                                        (0x00000038)

#define RF_CW250_SRX2_VCO2_BUF_VSP0_LSB                                         (0)
#define RF_CW250_SRX2_VCO2_BUF_VSP0_WIDTH                                       (3)
#define RF_CW250_SRX2_VCO2_BUF_VSP0_MASK                                        (0x00000007)

#define RF_CW251_SRX2_LO_STG3_VSP_HI_LSB                                        (18)
#define RF_CW251_SRX2_LO_STG3_VSP_HI_WIDTH                                      (2)
#define RF_CW251_SRX2_LO_STG3_VSP_HI_MASK                                       (0x000C0000)

#define RF_CW251_SRX2_LO_STG3_VSP_LO_LSB                                        (16)
#define RF_CW251_SRX2_LO_STG3_VSP_LO_WIDTH                                      (2)
#define RF_CW251_SRX2_LO_STG3_VSP_LO_MASK                                       (0x00030000)

#define RF_CW251_SRX2_VCO32_BUF_CA_VSP_LSB                                      (12)
#define RF_CW251_SRX2_VCO32_BUF_CA_VSP_WIDTH                                    (3)
#define RF_CW251_SRX2_VCO32_BUF_CA_VSP_MASK                                     (0x00007000)

#define RF_CW251_SRX2_VCO32_BUF_2G_VSP_LSB                                      (9)
#define RF_CW251_SRX2_VCO32_BUF_2G_VSP_WIDTH                                    (3)
#define RF_CW251_SRX2_VCO32_BUF_2G_VSP_MASK                                     (0x00000E00)

#define RF_CW251_SRX2_VCO32_BUF_C2K_VSP_LSB                                     (6)
#define RF_CW251_SRX2_VCO32_BUF_C2K_VSP_WIDTH                                   (3)
#define RF_CW251_SRX2_VCO32_BUF_C2K_VSP_MASK                                    (0x000001C0)

#define RF_CW251_SRX2_VCO2_BUF_VSP7_LSB                                         (3)
#define RF_CW251_SRX2_VCO2_BUF_VSP7_WIDTH                                       (3)
#define RF_CW251_SRX2_VCO2_BUF_VSP7_MASK                                        (0x00000038)

#define RF_CW251_SRX2_VCO2_BUF_VSP6_LSB                                         (0)
#define RF_CW251_SRX2_VCO2_BUF_VSP6_WIDTH                                       (3)
#define RF_CW251_SRX2_VCO2_BUF_VSP6_MASK                                        (0x00000007)

#define RF_CW252_SRX2_LO_STG2_VSP_HI_LSB                                        (18)
#define RF_CW252_SRX2_LO_STG2_VSP_HI_WIDTH                                      (2)
#define RF_CW252_SRX2_LO_STG2_VSP_HI_MASK                                       (0x000C0000)

#define RF_CW252_SRX2_LO_STG2_VSP_LO_LSB                                        (16)
#define RF_CW252_SRX2_LO_STG2_VSP_LO_WIDTH                                      (2)
#define RF_CW252_SRX2_LO_STG2_VSP_LO_MASK                                       (0x00030000)

#define RF_CW252_SRX2_LO_STG1_VSP_HI_LSB                                        (14)
#define RF_CW252_SRX2_LO_STG1_VSP_HI_WIDTH                                      (2)
#define RF_CW252_SRX2_LO_STG1_VSP_HI_MASK                                       (0x0000C000)

#define RF_CW252_SRX2_LO_STG1_VSP_LO_LSB                                        (12)
#define RF_CW252_SRX2_LO_STG1_VSP_LO_WIDTH                                      (2)
#define RF_CW252_SRX2_LO_STG1_VSP_LO_MASK                                       (0x00003000)

#define RF_CW252_SRX2_LO_STG0_VSP_HI_LSB                                        (10)
#define RF_CW252_SRX2_LO_STG0_VSP_HI_WIDTH                                      (2)
#define RF_CW252_SRX2_LO_STG0_VSP_HI_MASK                                       (0x00000C00)

#define RF_CW252_SRX2_LO_STG0_VSP_LO_LSB                                        (8)
#define RF_CW252_SRX2_LO_STG0_VSP_LO_WIDTH                                      (2)
#define RF_CW252_SRX2_LO_STG0_VSP_LO_MASK                                       (0x00000300)

#define RF_CW252_SRX2_VCO32_DIV2_CA_VSP_LSB                                     (4)
#define RF_CW252_SRX2_VCO32_DIV2_CA_VSP_WIDTH                                   (2)
#define RF_CW252_SRX2_VCO32_DIV2_CA_VSP_MASK                                    (0x00000030)

#define RF_CW252_SRX2_VCO32_DIV2_2G_VSP_LSB                                     (2)
#define RF_CW252_SRX2_VCO32_DIV2_2G_VSP_WIDTH                                   (2)
#define RF_CW252_SRX2_VCO32_DIV2_2G_VSP_MASK                                    (0x0000000C)

#define RF_CW252_SRX2_VCO32_DIV2_C2K_VSP_LSB                                    (0)
#define RF_CW252_SRX2_VCO32_DIV2_C2K_VSP_WIDTH                                  (2)
#define RF_CW252_SRX2_VCO32_DIV2_C2K_VSP_MASK                                   (0x00000003)

#define RF_CW253_SRX2_DCC_SAR_WAITTIME_LSB                                      (18)
#define RF_CW253_SRX2_DCC_SAR_WAITTIME_WIDTH                                    (2)
#define RF_CW253_SRX2_DCC_SAR_WAITTIME_MASK                                     (0x000C0000)

#define RF_CW253_SRX2_DCC_GAP_WAITTIME_LSB                                      (16)
#define RF_CW253_SRX2_DCC_GAP_WAITTIME_WIDTH                                    (2)
#define RF_CW253_SRX2_DCC_GAP_WAITTIME_MASK                                     (0x00030000)

#define RF_CW253_SRX2_REFDBL_DELAY_0P5EN_LSB                                    (15)
#define RF_CW253_SRX2_REFDBL_DELAY_0P5EN_WIDTH                                  (1)
#define RF_CW253_SRX2_REFDBL_DELAY_0P5EN_MASK                                   (0x00008000)
#define RF_CW253_SRX2_REFDBL_DELAY_0P5EN_BIT                                    (0x00008000)

#define RF_CW253_SRX2_MMDSDM_TEST_EN_LSB                                        (14)
#define RF_CW253_SRX2_MMDSDM_TEST_EN_WIDTH                                      (1)
#define RF_CW253_SRX2_MMDSDM_TEST_EN_MASK                                       (0x00004000)
#define RF_CW253_SRX2_MMDSDM_TEST_EN_BIT                                        (0x00004000)

#define RF_CW253_SRX2_FCAL_FULL_M_LSB                                           (12)
#define RF_CW253_SRX2_FCAL_FULL_M_WIDTH                                         (1)
#define RF_CW253_SRX2_FCAL_FULL_M_MASK                                          (0x00001000)
#define RF_CW253_SRX2_FCAL_FULL_M_BIT                                           (0x00001000)

#define RF_CW253_SRX2_FCAL_PARTIAL_M_LSB                                        (11)
#define RF_CW253_SRX2_FCAL_PARTIAL_M_WIDTH                                      (1)
#define RF_CW253_SRX2_FCAL_PARTIAL_M_MASK                                       (0x00000800)
#define RF_CW253_SRX2_FCAL_PARTIAL_M_BIT                                        (0x00000800)

#define RF_CW253_SRX2_ACAL_M_LSB                                                (10)
#define RF_CW253_SRX2_ACAL_M_WIDTH                                              (1)
#define RF_CW253_SRX2_ACAL_M_MASK                                               (0x00000400)
#define RF_CW253_SRX2_ACAL_M_BIT                                                (0x00000400)

#define RF_CW253_SRX2_REFDBL_CAL_M_LSB                                          (9)
#define RF_CW253_SRX2_REFDBL_CAL_M_WIDTH                                        (1)
#define RF_CW253_SRX2_REFDBL_CAL_M_MASK                                         (0x00000200)
#define RF_CW253_SRX2_REFDBL_CAL_M_BIT                                          (0x00000200)

#define RF_CW253_SRX2_MMD_DELAY_LSB                                             (7)
#define RF_CW253_SRX2_MMD_DELAY_WIDTH                                           (2)
#define RF_CW253_SRX2_MMD_DELAY_MASK                                            (0x00000180)

#define RF_CW253_SRX2_REP_DELAY_LSB                                             (5)
#define RF_CW253_SRX2_REP_DELAY_WIDTH                                           (2)
#define RF_CW253_SRX2_REP_DELAY_MASK                                            (0x00000060)

#define RF_CW253_SRX2_LO_EN_M_LSB                                               (4)
#define RF_CW253_SRX2_LO_EN_M_WIDTH                                             (1)
#define RF_CW253_SRX2_LO_EN_M_MASK                                              (0x00000010)
#define RF_CW253_SRX2_LO_EN_M_BIT                                               (0x00000010)

#define RF_CW253_SRX2_LO_OFFSTA_STAG0_LSB                                       (3)
#define RF_CW253_SRX2_LO_OFFSTA_STAG0_WIDTH                                     (1)
#define RF_CW253_SRX2_LO_OFFSTA_STAG0_MASK                                      (0x00000008)
#define RF_CW253_SRX2_LO_OFFSTA_STAG0_BIT                                       (0x00000008)

#define RF_CW253_SRX2_LO_OFFSTA_STAG1_LSB                                       (2)
#define RF_CW253_SRX2_LO_OFFSTA_STAG1_WIDTH                                     (1)
#define RF_CW253_SRX2_LO_OFFSTA_STAG1_MASK                                      (0x00000004)
#define RF_CW253_SRX2_LO_OFFSTA_STAG1_BIT                                       (0x00000004)

#define RF_CW253_SRX2_LO_OFFSTA_STAG2_LSB                                       (1)
#define RF_CW253_SRX2_LO_OFFSTA_STAG2_WIDTH                                     (1)
#define RF_CW253_SRX2_LO_OFFSTA_STAG2_MASK                                      (0x00000002)
#define RF_CW253_SRX2_LO_OFFSTA_STAG2_BIT                                       (0x00000002)

#define RF_CW253_SRX2_LO_OFFSTA_STAG3_LSB                                       (0)
#define RF_CW253_SRX2_LO_OFFSTA_STAG3_WIDTH                                     (1)
#define RF_CW253_SRX2_LO_OFFSTA_STAG3_MASK                                      (0x00000001)
#define RF_CW253_SRX2_LO_OFFSTA_STAG3_BIT                                       (0x00000001)

#define RF_CW254_SRX2_REFDBL_MAN_LSB                                            (15)
#define RF_CW254_SRX2_REFDBL_MAN_WIDTH                                          (1)
#define RF_CW254_SRX2_REFDBL_MAN_MASK                                           (0x00008000)
#define RF_CW254_SRX2_REFDBL_MAN_BIT                                            (0x00008000)

#define RF_CW254_SRX2_REFDBL_DELAY_LSB                                          (7)
#define RF_CW254_SRX2_REFDBL_DELAY_WIDTH                                        (8)
#define RF_CW254_SRX2_REFDBL_DELAY_MASK                                         (0x00007F80)

#define RF_CW254_SRX2_REFBUF_POLARITY_MAN_LSB                                   (6)
#define RF_CW254_SRX2_REFBUF_POLARITY_MAN_WIDTH                                 (1)
#define RF_CW254_SRX2_REFBUF_POLARITY_MAN_MASK                                  (0x00000040)
#define RF_CW254_SRX2_REFBUF_POLARITY_MAN_BIT                                   (0x00000040)

#define RF_CW254_SRX2_REFBUF_MAN_LSB                                            (5)
#define RF_CW254_SRX2_REFBUF_MAN_WIDTH                                          (1)
#define RF_CW254_SRX2_REFBUF_MAN_MASK                                           (0x00000020)
#define RF_CW254_SRX2_REFBUF_MAN_BIT                                            (0x00000020)

#define RF_CW254_SRX2_REFBUF_POLARITY_LSB                                       (4)
#define RF_CW254_SRX2_REFBUF_POLARITY_WIDTH                                     (1)
#define RF_CW254_SRX2_REFBUF_POLARITY_MASK                                      (0x00000010)
#define RF_CW254_SRX2_REFBUF_POLARITY_BIT                                       (0x00000010)

#define RF_CW254_SRX2_REFBUF_DELAY_LSB                                          (0)
#define RF_CW254_SRX2_REFBUF_DELAY_WIDTH                                        (4)
#define RF_CW254_SRX2_REFBUF_DELAY_MASK                                         (0x0000000F)

#define RF_CW255_SRX2_VCO_SUB_P_MAN_LSB                                         (19)
#define RF_CW255_SRX2_VCO_SUB_P_MAN_WIDTH                                       (1)
#define RF_CW255_SRX2_VCO_SUB_P_MAN_MASK                                        (0x00080000)
#define RF_CW255_SRX2_VCO_SUB_P_MAN_BIT                                         (0x00080000)

#define RF_CW255_SRX2_VCO_SUB_P_LSB                                             (9)
#define RF_CW255_SRX2_VCO_SUB_P_WIDTH                                           (10)
#define RF_CW255_SRX2_VCO_SUB_P_MASK                                            (0x0007FE00)

#define RF_CW255_SRX2_VCO_SUB_T_MAN_LSB                                         (6)
#define RF_CW255_SRX2_VCO_SUB_T_MAN_WIDTH                                       (1)
#define RF_CW255_SRX2_VCO_SUB_T_MAN_MASK                                        (0x00000040)
#define RF_CW255_SRX2_VCO_SUB_T_MAN_BIT                                         (0x00000040)

#define RF_CW255_SRX2_VCO_SUB_T_LSB                                             (0)
#define RF_CW255_SRX2_VCO_SUB_T_WIDTH                                           (6)
#define RF_CW255_SRX2_VCO_SUB_T_MASK                                            (0x0000003F)

#define RF_CW256_SRX2_VCO2_SWL_FCAL_PROT_LSB                                    (19)
#define RF_CW256_SRX2_VCO2_SWL_FCAL_PROT_WIDTH                                  (1)
#define RF_CW256_SRX2_VCO2_SWL_FCAL_PROT_MASK                                   (0x00080000)
#define RF_CW256_SRX2_VCO2_SWL_FCAL_PROT_BIT                                    (0x00080000)

#define RF_CW256_SRX2_FCAL_HALFLSB_SCA_EN_LSB                                   (17)
#define RF_CW256_SRX2_FCAL_HALFLSB_SCA_EN_WIDTH                                 (1)
#define RF_CW256_SRX2_FCAL_HALFLSB_SCA_EN_MASK                                  (0x00020000)
#define RF_CW256_SRX2_FCAL_HALFLSB_SCA_EN_BIT                                   (0x00020000)

#define RF_CW256_SRX2_FCAL_TARGET_MAN_LSB                                       (16)
#define RF_CW256_SRX2_FCAL_TARGET_MAN_WIDTH                                     (1)
#define RF_CW256_SRX2_FCAL_TARGET_MAN_MASK                                      (0x00010000)
#define RF_CW256_SRX2_FCAL_TARGET_MAN_BIT                                       (0x00010000)

#define RF_CW256_SRX2_FCAL_TARGET_LSB                                           (0)
#define RF_CW256_SRX2_FCAL_TARGET_WIDTH                                         (16)
#define RF_CW256_SRX2_FCAL_TARGET_MASK                                          (0x0000FFFF)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_3_LSB                                    (19)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_3_WIDTH                                  (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_3_MASK                                   (0x00080000)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_3_BIT                                    (0x00080000)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_3_LSB                                   (18)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_3_WIDTH                                 (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_3_MASK                                  (0x00040000)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_3_BIT                                   (0x00040000)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_3_LSB                                   (17)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_3_WIDTH                                 (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_3_MASK                                  (0x00020000)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_3_BIT                                   (0x00020000)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_3_LSB                                  (16)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_3_WIDTH                                (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_3_MASK                                 (0x00010000)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_3_BIT                                  (0x00010000)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_3_LSB                                  (15)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_3_WIDTH                                (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_3_MASK                                 (0x00008000)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_3_BIT                                  (0x00008000)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_2_LSB                                    (14)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_2_WIDTH                                  (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_2_MASK                                   (0x00004000)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_2_BIT                                    (0x00004000)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_2_LSB                                   (13)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_2_WIDTH                                 (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_2_MASK                                  (0x00002000)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_2_BIT                                   (0x00002000)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_2_LSB                                   (12)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_2_WIDTH                                 (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_2_MASK                                  (0x00001000)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_2_BIT                                   (0x00001000)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_2_LSB                                  (11)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_2_WIDTH                                (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_2_MASK                                 (0x00000800)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_2_BIT                                  (0x00000800)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_2_LSB                                  (10)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_2_WIDTH                                (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_2_MASK                                 (0x00000400)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_2_BIT                                  (0x00000400)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_1_LSB                                    (9)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_1_WIDTH                                  (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_1_MASK                                   (0x00000200)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_1_BIT                                    (0x00000200)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_1_LSB                                   (8)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_1_WIDTH                                 (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_1_MASK                                  (0x00000100)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_1_BIT                                   (0x00000100)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_1_LSB                                   (7)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_1_WIDTH                                 (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_1_MASK                                  (0x00000080)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_1_BIT                                   (0x00000080)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_1_LSB                                  (6)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_1_WIDTH                                (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_1_MASK                                 (0x00000040)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_1_BIT                                  (0x00000040)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_1_LSB                                  (5)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_1_WIDTH                                (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_1_MASK                                 (0x00000020)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_1_BIT                                  (0x00000020)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_0_LSB                                    (4)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_0_WIDTH                                  (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_0_MASK                                   (0x00000010)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_DCC_0_BIT                                    (0x00000010)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_0_LSB                                   (3)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_0_WIDTH                                 (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_0_MASK                                  (0x00000008)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FCAL_0_BIT                                   (0x00000008)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_0_LSB                                   (2)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_0_WIDTH                                 (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_0_MASK                                  (0x00000004)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_ACAL_0_BIT                                   (0x00000004)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_0_LSB                                  (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_0_WIDTH                                (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_0_MASK                                 (0x00000002)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_PFCAL_0_BIT                                  (0x00000002)

#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_0_LSB                                  (0)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_0_WIDTH                                (1)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_0_MASK                                 (0x00000001)
#define RF_CW257_SRX2_VCO2_CAL_SEQ_FFCAL_0_BIT                                  (0x00000001)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_7_LSB                                    (19)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_7_WIDTH                                  (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_7_MASK                                   (0x00080000)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_7_BIT                                    (0x00080000)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_7_LSB                                   (18)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_7_WIDTH                                 (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_7_MASK                                  (0x00040000)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_7_BIT                                   (0x00040000)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_7_LSB                                   (17)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_7_WIDTH                                 (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_7_MASK                                  (0x00020000)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_7_BIT                                   (0x00020000)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_7_LSB                                  (16)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_7_WIDTH                                (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_7_MASK                                 (0x00010000)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_7_BIT                                  (0x00010000)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_7_LSB                                  (15)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_7_WIDTH                                (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_7_MASK                                 (0x00008000)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_7_BIT                                  (0x00008000)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_6_LSB                                    (14)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_6_WIDTH                                  (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_6_MASK                                   (0x00004000)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_6_BIT                                    (0x00004000)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_6_LSB                                   (13)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_6_WIDTH                                 (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_6_MASK                                  (0x00002000)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_6_BIT                                   (0x00002000)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_6_LSB                                   (12)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_6_WIDTH                                 (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_6_MASK                                  (0x00001000)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_6_BIT                                   (0x00001000)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_6_LSB                                  (11)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_6_WIDTH                                (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_6_MASK                                 (0x00000800)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_6_BIT                                  (0x00000800)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_6_LSB                                  (10)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_6_WIDTH                                (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_6_MASK                                 (0x00000400)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_6_BIT                                  (0x00000400)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_5_LSB                                    (9)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_5_WIDTH                                  (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_5_MASK                                   (0x00000200)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_5_BIT                                    (0x00000200)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_5_LSB                                   (8)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_5_WIDTH                                 (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_5_MASK                                  (0x00000100)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_5_BIT                                   (0x00000100)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_5_LSB                                   (7)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_5_WIDTH                                 (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_5_MASK                                  (0x00000080)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_5_BIT                                   (0x00000080)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_5_LSB                                  (6)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_5_WIDTH                                (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_5_MASK                                 (0x00000040)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_5_BIT                                  (0x00000040)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_5_LSB                                  (5)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_5_WIDTH                                (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_5_MASK                                 (0x00000020)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_5_BIT                                  (0x00000020)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_4_LSB                                    (4)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_4_WIDTH                                  (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_4_MASK                                   (0x00000010)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_DCC_4_BIT                                    (0x00000010)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_4_LSB                                   (3)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_4_WIDTH                                 (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_4_MASK                                  (0x00000008)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FCAL_4_BIT                                   (0x00000008)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_4_LSB                                   (2)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_4_WIDTH                                 (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_4_MASK                                  (0x00000004)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_ACAL_4_BIT                                   (0x00000004)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_4_LSB                                  (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_4_WIDTH                                (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_4_MASK                                 (0x00000002)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_PFCAL_4_BIT                                  (0x00000002)

#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_4_LSB                                  (0)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_4_WIDTH                                (1)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_4_MASK                                 (0x00000001)
#define RF_CW258_SRX2_VCO2_CAL_SEQ_FFCAL_4_BIT                                  (0x00000001)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_3_LSB                                   (19)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_3_WIDTH                                 (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_3_MASK                                  (0x00080000)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_3_BIT                                   (0x00080000)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_3_LSB                                  (18)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_3_WIDTH                                (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_3_MASK                                 (0x00040000)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_3_BIT                                  (0x00040000)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_3_LSB                                  (17)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_3_WIDTH                                (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_3_MASK                                 (0x00020000)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_3_BIT                                  (0x00020000)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_3_LSB                                 (16)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_3_WIDTH                               (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_3_MASK                                (0x00010000)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_3_BIT                                 (0x00010000)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_3_LSB                                 (15)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_3_WIDTH                               (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_3_MASK                                (0x00008000)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_3_BIT                                 (0x00008000)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_2_LSB                                   (14)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_2_WIDTH                                 (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_2_MASK                                  (0x00004000)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_2_BIT                                   (0x00004000)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_2_LSB                                  (13)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_2_WIDTH                                (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_2_MASK                                 (0x00002000)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_2_BIT                                  (0x00002000)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_2_LSB                                  (12)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_2_WIDTH                                (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_2_MASK                                 (0x00001000)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_2_BIT                                  (0x00001000)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_2_LSB                                 (11)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_2_WIDTH                               (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_2_MASK                                (0x00000800)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_2_BIT                                 (0x00000800)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_2_LSB                                 (10)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_2_WIDTH                               (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_2_MASK                                (0x00000400)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_2_BIT                                 (0x00000400)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_1_LSB                                   (9)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_1_WIDTH                                 (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_1_MASK                                  (0x00000200)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_1_BIT                                   (0x00000200)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_1_LSB                                  (8)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_1_WIDTH                                (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_1_MASK                                 (0x00000100)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_1_BIT                                  (0x00000100)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_1_LSB                                  (7)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_1_WIDTH                                (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_1_MASK                                 (0x00000080)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_1_BIT                                  (0x00000080)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_1_LSB                                 (6)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_1_WIDTH                               (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_1_MASK                                (0x00000040)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_1_BIT                                 (0x00000040)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_1_LSB                                 (5)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_1_WIDTH                               (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_1_MASK                                (0x00000020)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_1_BIT                                 (0x00000020)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_0_LSB                                   (4)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_0_WIDTH                                 (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_0_MASK                                  (0x00000010)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_DCC_0_BIT                                   (0x00000010)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_0_LSB                                  (3)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_0_WIDTH                                (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_0_MASK                                 (0x00000008)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FCAL_0_BIT                                  (0x00000008)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_0_LSB                                  (2)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_0_WIDTH                                (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_0_MASK                                 (0x00000004)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_ACAL_0_BIT                                  (0x00000004)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_0_LSB                                 (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_0_WIDTH                               (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_0_MASK                                (0x00000002)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_PFCAL_0_BIT                                 (0x00000002)

#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_0_LSB                                 (0)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_0_WIDTH                               (1)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_0_MASK                                (0x00000001)
#define RF_CW259_SRX2_VCO32_CAL_SEQ_FFCAL_0_BIT                                 (0x00000001)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_7_LSB                                   (19)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_7_WIDTH                                 (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_7_MASK                                  (0x00080000)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_7_BIT                                   (0x00080000)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_7_LSB                                  (18)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_7_WIDTH                                (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_7_MASK                                 (0x00040000)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_7_BIT                                  (0x00040000)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_7_LSB                                  (17)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_7_WIDTH                                (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_7_MASK                                 (0x00020000)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_7_BIT                                  (0x00020000)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_7_LSB                                 (16)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_7_WIDTH                               (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_7_MASK                                (0x00010000)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_7_BIT                                 (0x00010000)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_7_LSB                                 (15)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_7_WIDTH                               (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_7_MASK                                (0x00008000)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_7_BIT                                 (0x00008000)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_6_LSB                                   (14)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_6_WIDTH                                 (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_6_MASK                                  (0x00004000)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_6_BIT                                   (0x00004000)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_6_LSB                                  (13)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_6_WIDTH                                (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_6_MASK                                 (0x00002000)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_6_BIT                                  (0x00002000)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_6_LSB                                  (12)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_6_WIDTH                                (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_6_MASK                                 (0x00001000)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_6_BIT                                  (0x00001000)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_6_LSB                                 (11)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_6_WIDTH                               (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_6_MASK                                (0x00000800)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_6_BIT                                 (0x00000800)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_6_LSB                                 (10)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_6_WIDTH                               (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_6_MASK                                (0x00000400)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_6_BIT                                 (0x00000400)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_5_LSB                                   (9)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_5_WIDTH                                 (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_5_MASK                                  (0x00000200)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_5_BIT                                   (0x00000200)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_5_LSB                                  (8)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_5_WIDTH                                (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_5_MASK                                 (0x00000100)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_5_BIT                                  (0x00000100)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_5_LSB                                  (7)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_5_WIDTH                                (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_5_MASK                                 (0x00000080)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_5_BIT                                  (0x00000080)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_5_LSB                                 (6)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_5_WIDTH                               (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_5_MASK                                (0x00000040)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_5_BIT                                 (0x00000040)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_5_LSB                                 (5)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_5_WIDTH                               (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_5_MASK                                (0x00000020)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_5_BIT                                 (0x00000020)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_4_LSB                                   (4)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_4_WIDTH                                 (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_4_MASK                                  (0x00000010)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_DCC_4_BIT                                   (0x00000010)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_4_LSB                                  (3)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_4_WIDTH                                (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_4_MASK                                 (0x00000008)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FCAL_4_BIT                                  (0x00000008)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_4_LSB                                  (2)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_4_WIDTH                                (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_4_MASK                                 (0x00000004)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_ACAL_4_BIT                                  (0x00000004)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_4_LSB                                 (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_4_WIDTH                               (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_4_MASK                                (0x00000002)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_PFCAL_4_BIT                                 (0x00000002)

#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_4_LSB                                 (0)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_4_WIDTH                               (1)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_4_MASK                                (0x00000001)
#define RF_CW260_SRX2_VCO32_CAL_SEQ_FFCAL_4_BIT                                 (0x00000001)

#define RF_CW261_SRX2_FCFINISH_M_LSB                                            (19)
#define RF_CW261_SRX2_FCFINISH_M_WIDTH                                          (1)
#define RF_CW261_SRX2_FCFINISH_M_MASK                                           (0x00080000)
#define RF_CW261_SRX2_FCFINISH_M_BIT                                            (0x00080000)

#define RF_CW261_SRX2_FCFINISH_LSB                                              (18)
#define RF_CW261_SRX2_FCFINISH_WIDTH                                            (1)
#define RF_CW261_SRX2_FCFINISH_MASK                                             (0x00040000)
#define RF_CW261_SRX2_FCFINISH_BIT                                              (0x00040000)

#define RF_CW261_SRX2_PCAL_RANGE_LSB                                            (15)
#define RF_CW261_SRX2_PCAL_RANGE_WIDTH                                          (3)
#define RF_CW261_SRX2_PCAL_RANGE_MASK                                           (0x00038000)

#define RF_CW261_SRX2_FVCO_CNT_EN_LSB                                           (14)
#define RF_CW261_SRX2_FVCO_CNT_EN_WIDTH                                         (1)
#define RF_CW261_SRX2_FVCO_CNT_EN_MASK                                          (0x00004000)
#define RF_CW261_SRX2_FVCO_CNT_EN_BIT                                           (0x00004000)

#define RF_CW261_SRX2_FCAL_CNT_WIN_LSB                                          (6)
#define RF_CW261_SRX2_FCAL_CNT_WIN_WIDTH                                        (8)
#define RF_CW261_SRX2_FCAL_CNT_WIN_MASK                                         (0x00003FC0)

#define RF_CW261_SRX2_ACAL_VCO_WAITTIME_LSB                                     (4)
#define RF_CW261_SRX2_ACAL_VCO_WAITTIME_WIDTH                                   (2)
#define RF_CW261_SRX2_ACAL_VCO_WAITTIME_MASK                                    (0x00000030)

#define RF_CW261_SRX2_FCAL_VCO_WAITTIME_LSB                                     (2)
#define RF_CW261_SRX2_FCAL_VCO_WAITTIME_WIDTH                                   (2)
#define RF_CW261_SRX2_FCAL_VCO_WAITTIME_MASK                                    (0x0000000C)

#define RF_CW261_SRX2_FCAL_VCO_STARTTIME_LSB                                    (0)
#define RF_CW261_SRX2_FCAL_VCO_STARTTIME_WIDTH                                  (2)
#define RF_CW261_SRX2_FCAL_VCO_STARTTIME_MASK                                   (0x00000003)

#define RF_CW262_SRX2_PCAL_RANGE_TDD_LSB                                        (17)
#define RF_CW262_SRX2_PCAL_RANGE_TDD_WIDTH                                      (3)
#define RF_CW262_SRX2_PCAL_RANGE_TDD_MASK                                       (0x000E0000)

#define RF_CW262_SRX2_TCL_TDD_EN_LSB                                            (16)
#define RF_CW262_SRX2_TCL_TDD_EN_WIDTH                                          (1)
#define RF_CW262_SRX2_TCL_TDD_EN_MASK                                           (0x00010000)
#define RF_CW262_SRX2_TCL_TDD_EN_BIT                                            (0x00010000)

#define RF_CW262_SRX2_TCL_EN_M_LSB                                              (15)
#define RF_CW262_SRX2_TCL_EN_M_WIDTH                                            (1)
#define RF_CW262_SRX2_TCL_EN_M_MASK                                             (0x00008000)
#define RF_CW262_SRX2_TCL_EN_M_BIT                                              (0x00008000)

#define RF_CW262_SRX2_TCL_PRESET_BUF_M_LSB                                      (14)
#define RF_CW262_SRX2_TCL_PRESET_BUF_M_WIDTH                                    (1)
#define RF_CW262_SRX2_TCL_PRESET_BUF_M_MASK                                     (0x00004000)
#define RF_CW262_SRX2_TCL_PRESET_BUF_M_BIT                                      (0x00004000)

#define RF_CW262_SRX2_TCL_PRESET_BUF_EN_LSB                                     (13)
#define RF_CW262_SRX2_TCL_PRESET_BUF_EN_WIDTH                                   (1)
#define RF_CW262_SRX2_TCL_PRESET_BUF_EN_MASK                                    (0x00002000)
#define RF_CW262_SRX2_TCL_PRESET_BUF_EN_BIT                                     (0x00002000)

#define RF_CW262_SRX2_TCL_TEST_M_LSB                                            (12)
#define RF_CW262_SRX2_TCL_TEST_M_WIDTH                                          (1)
#define RF_CW262_SRX2_TCL_TEST_M_MASK                                           (0x00001000)
#define RF_CW262_SRX2_TCL_TEST_M_BIT                                            (0x00001000)

#define RF_CW262_SRX2_TCL_TEST_EN_LSB                                           (11)
#define RF_CW262_SRX2_TCL_TEST_EN_WIDTH                                         (1)
#define RF_CW262_SRX2_TCL_TEST_EN_MASK                                          (0x00000800)
#define RF_CW262_SRX2_TCL_TEST_EN_BIT                                           (0x00000800)

#define RF_CW262_SRX2_TCL_TEST_MODE_LSB                                         (9)
#define RF_CW262_SRX2_TCL_TEST_MODE_WIDTH                                       (2)
#define RF_CW262_SRX2_TCL_TEST_MODE_MASK                                        (0x00000600)

#define RF_CW262_SRX2_SDM_TESTOUT_LSB                                           (8)
#define RF_CW262_SRX2_SDM_TESTOUT_WIDTH                                         (1)
#define RF_CW262_SRX2_SDM_TESTOUT_MASK                                          (0x00000100)
#define RF_CW262_SRX2_SDM_TESTOUT_BIT                                           (0x00000100)

#define RF_CW262_SRX2_SDM_FRAC_MODE_LSB                                         (7)
#define RF_CW262_SRX2_SDM_FRAC_MODE_WIDTH                                       (1)
#define RF_CW262_SRX2_SDM_FRAC_MODE_MASK                                        (0x00000080)
#define RF_CW262_SRX2_SDM_FRAC_MODE_BIT                                         (0x00000080)

#define RF_CW262_SRX2_SDM_EN_LSB                                                (6)
#define RF_CW262_SRX2_SDM_EN_WIDTH                                              (1)
#define RF_CW262_SRX2_SDM_EN_MASK                                               (0x00000040)
#define RF_CW262_SRX2_SDM_EN_BIT                                                (0x00000040)

#define RF_CW262_SRX2_SDM_ORDER_LSB                                             (4)
#define RF_CW262_SRX2_SDM_ORDER_WIDTH                                           (2)
#define RF_CW262_SRX2_SDM_ORDER_MASK                                            (0x00000030)

#define RF_CW262_SRX2_SDM_RSTB_M_LSB                                            (3)
#define RF_CW262_SRX2_SDM_RSTB_M_WIDTH                                          (1)
#define RF_CW262_SRX2_SDM_RSTB_M_MASK                                           (0x00000008)
#define RF_CW262_SRX2_SDM_RSTB_M_BIT                                            (0x00000008)

#define RF_CW262_SRX2_SDM_DITH_EN_LSB                                           (2)
#define RF_CW262_SRX2_SDM_DITH_EN_WIDTH                                         (1)
#define RF_CW262_SRX2_SDM_DITH_EN_MASK                                          (0x00000004)
#define RF_CW262_SRX2_SDM_DITH_EN_BIT                                           (0x00000004)

#define RF_CW262_SRX2_SDM_DITH_BIT_LSB                                          (1)
#define RF_CW262_SRX2_SDM_DITH_BIT_WIDTH                                        (1)
#define RF_CW262_SRX2_SDM_DITH_BIT_MASK                                         (0x00000002)
#define RF_CW262_SRX2_SDM_DITH_BIT_BIT                                          (0x00000002)

#define RF_CW262_SRX2_FCAL_START_WT_EN_LSB                                      (0)
#define RF_CW262_SRX2_FCAL_START_WT_EN_WIDTH                                    (1)
#define RF_CW262_SRX2_FCAL_START_WT_EN_MASK                                     (0x00000001)
#define RF_CW262_SRX2_FCAL_START_WT_EN_BIT                                      (0x00000001)

#define RF_CW263_SRX2_KVCO32_SEL_MAN_LSB                                        (19)
#define RF_CW263_SRX2_KVCO32_SEL_MAN_WIDTH                                      (1)
#define RF_CW263_SRX2_KVCO32_SEL_MAN_MASK                                       (0x00080000)
#define RF_CW263_SRX2_KVCO32_SEL_MAN_BIT                                        (0x00080000)

#define RF_CW263_SRX2_KVCO32_SEL_M_LSB                                          (17)
#define RF_CW263_SRX2_KVCO32_SEL_M_WIDTH                                        (2)
#define RF_CW263_SRX2_KVCO32_SEL_M_MASK                                         (0x00060000)

#define RF_CW263_SRX2_KVCO32_SEL_CA_LSB                                         (15)
#define RF_CW263_SRX2_KVCO32_SEL_CA_WIDTH                                       (2)
#define RF_CW263_SRX2_KVCO32_SEL_CA_MASK                                        (0x00018000)

#define RF_CW263_SRX2_KVCO32_SEL_2G_LSB                                         (13)
#define RF_CW263_SRX2_KVCO32_SEL_2G_WIDTH                                       (2)
#define RF_CW263_SRX2_KVCO32_SEL_2G_MASK                                        (0x00006000)

#define RF_CW263_SRX2_KVCO32_SEL_C2K_LSB                                        (11)
#define RF_CW263_SRX2_KVCO32_SEL_C2K_WIDTH                                      (2)
#define RF_CW263_SRX2_KVCO32_SEL_C2K_MASK                                       (0x00001800)

#define RF_CW263_SRX2_KVCO2_SEL_MAN_LSB                                         (10)
#define RF_CW263_SRX2_KVCO2_SEL_MAN_WIDTH                                       (1)
#define RF_CW263_SRX2_KVCO2_SEL_MAN_MASK                                        (0x00000400)
#define RF_CW263_SRX2_KVCO2_SEL_MAN_BIT                                         (0x00000400)

#define RF_CW263_SRX2_KVCO2_SEL_M_LSB                                           (8)
#define RF_CW263_SRX2_KVCO2_SEL_M_WIDTH                                         (2)
#define RF_CW263_SRX2_KVCO2_SEL_M_MASK                                          (0x00000300)

#define RF_CW263_SRX2_KVCO2_SEL_INDLR_HP_LSB                                    (6)
#define RF_CW263_SRX2_KVCO2_SEL_INDLR_HP_WIDTH                                  (2)
#define RF_CW263_SRX2_KVCO2_SEL_INDLR_HP_MASK                                   (0x000000C0)

#define RF_CW263_SRX2_KVCO2_SEL_INDLR_LP_LSB                                    (4)
#define RF_CW263_SRX2_KVCO2_SEL_INDLR_LP_WIDTH                                  (2)
#define RF_CW263_SRX2_KVCO2_SEL_INDLR_LP_MASK                                   (0x00000030)

#define RF_CW263_SRX2_KVCO2_SEL_INDSM_HP_LSB                                    (2)
#define RF_CW263_SRX2_KVCO2_SEL_INDSM_HP_WIDTH                                  (2)
#define RF_CW263_SRX2_KVCO2_SEL_INDSM_HP_MASK                                   (0x0000000C)

#define RF_CW263_SRX2_KVCO2_SEL_INDSM_LP_LSB                                    (0)
#define RF_CW263_SRX2_KVCO2_SEL_INDSM_LP_WIDTH                                  (2)
#define RF_CW263_SRX2_KVCO2_SEL_INDSM_LP_MASK                                   (0x00000003)

#define RF_CW264_SRX2_VCO_DYN2_3_LSB                                            (19)
#define RF_CW264_SRX2_VCO_DYN2_3_WIDTH                                          (1)
#define RF_CW264_SRX2_VCO_DYN2_3_MASK                                           (0x00080000)
#define RF_CW264_SRX2_VCO_DYN2_3_BIT                                            (0x00080000)

#define RF_CW264_SRX2_VCO_DYN1_3_LSB                                            (18)
#define RF_CW264_SRX2_VCO_DYN1_3_WIDTH                                          (1)
#define RF_CW264_SRX2_VCO_DYN1_3_MASK                                           (0x00040000)
#define RF_CW264_SRX2_VCO_DYN1_3_BIT                                            (0x00040000)

#define RF_CW264_SRX2_VCO_ULPWR_EN_3_LSB                                        (17)
#define RF_CW264_SRX2_VCO_ULPWR_EN_3_WIDTH                                      (1)
#define RF_CW264_SRX2_VCO_ULPWR_EN_3_MASK                                       (0x00020000)
#define RF_CW264_SRX2_VCO_ULPWR_EN_3_BIT                                        (0x00020000)

#define RF_CW264_SRX2_MMD_ULPWR_EN_3_LSB                                        (16)
#define RF_CW264_SRX2_MMD_ULPWR_EN_3_WIDTH                                      (1)
#define RF_CW264_SRX2_MMD_ULPWR_EN_3_MASK                                       (0x00010000)
#define RF_CW264_SRX2_MMD_ULPWR_EN_3_BIT                                        (0x00010000)

#define RF_CW264_SRX2_VCO2_INDSW_ON_3_LSB                                       (15)
#define RF_CW264_SRX2_VCO2_INDSW_ON_3_WIDTH                                     (1)
#define RF_CW264_SRX2_VCO2_INDSW_ON_3_MASK                                      (0x00008000)
#define RF_CW264_SRX2_VCO2_INDSW_ON_3_BIT                                       (0x00008000)

#define RF_CW264_SRX2_VCO_DYN2_2_LSB                                            (14)
#define RF_CW264_SRX2_VCO_DYN2_2_WIDTH                                          (1)
#define RF_CW264_SRX2_VCO_DYN2_2_MASK                                           (0x00004000)
#define RF_CW264_SRX2_VCO_DYN2_2_BIT                                            (0x00004000)

#define RF_CW264_SRX2_VCO_DYN1_2_LSB                                            (13)
#define RF_CW264_SRX2_VCO_DYN1_2_WIDTH                                          (1)
#define RF_CW264_SRX2_VCO_DYN1_2_MASK                                           (0x00002000)
#define RF_CW264_SRX2_VCO_DYN1_2_BIT                                            (0x00002000)

#define RF_CW264_SRX2_VCO_ULPWR_EN_2_LSB                                        (12)
#define RF_CW264_SRX2_VCO_ULPWR_EN_2_WIDTH                                      (1)
#define RF_CW264_SRX2_VCO_ULPWR_EN_2_MASK                                       (0x00001000)
#define RF_CW264_SRX2_VCO_ULPWR_EN_2_BIT                                        (0x00001000)

#define RF_CW264_SRX2_MMD_ULPWR_EN_2_LSB                                        (11)
#define RF_CW264_SRX2_MMD_ULPWR_EN_2_WIDTH                                      (1)
#define RF_CW264_SRX2_MMD_ULPWR_EN_2_MASK                                       (0x00000800)
#define RF_CW264_SRX2_MMD_ULPWR_EN_2_BIT                                        (0x00000800)

#define RF_CW264_SRX2_VCO2_INDSW_ON_2_LSB                                       (10)
#define RF_CW264_SRX2_VCO2_INDSW_ON_2_WIDTH                                     (1)
#define RF_CW264_SRX2_VCO2_INDSW_ON_2_MASK                                      (0x00000400)
#define RF_CW264_SRX2_VCO2_INDSW_ON_2_BIT                                       (0x00000400)

#define RF_CW264_SRX2_VCO_DYN2_1_LSB                                            (9)
#define RF_CW264_SRX2_VCO_DYN2_1_WIDTH                                          (1)
#define RF_CW264_SRX2_VCO_DYN2_1_MASK                                           (0x00000200)
#define RF_CW264_SRX2_VCO_DYN2_1_BIT                                            (0x00000200)

#define RF_CW264_SRX2_VCO_DYN1_1_LSB                                            (8)
#define RF_CW264_SRX2_VCO_DYN1_1_WIDTH                                          (1)
#define RF_CW264_SRX2_VCO_DYN1_1_MASK                                           (0x00000100)
#define RF_CW264_SRX2_VCO_DYN1_1_BIT                                            (0x00000100)

#define RF_CW264_SRX2_VCO_ULPWR_EN_1_LSB                                        (7)
#define RF_CW264_SRX2_VCO_ULPWR_EN_1_WIDTH                                      (1)
#define RF_CW264_SRX2_VCO_ULPWR_EN_1_MASK                                       (0x00000080)
#define RF_CW264_SRX2_VCO_ULPWR_EN_1_BIT                                        (0x00000080)

#define RF_CW264_SRX2_MMD_ULPWR_EN_1_LSB                                        (6)
#define RF_CW264_SRX2_MMD_ULPWR_EN_1_WIDTH                                      (1)
#define RF_CW264_SRX2_MMD_ULPWR_EN_1_MASK                                       (0x00000040)
#define RF_CW264_SRX2_MMD_ULPWR_EN_1_BIT                                        (0x00000040)

#define RF_CW264_SRX2_VCO2_INDSW_ON_1_LSB                                       (5)
#define RF_CW264_SRX2_VCO2_INDSW_ON_1_WIDTH                                     (1)
#define RF_CW264_SRX2_VCO2_INDSW_ON_1_MASK                                      (0x00000020)
#define RF_CW264_SRX2_VCO2_INDSW_ON_1_BIT                                       (0x00000020)

#define RF_CW264_SRX2_VCO_DYN2_0_LSB                                            (4)
#define RF_CW264_SRX2_VCO_DYN2_0_WIDTH                                          (1)
#define RF_CW264_SRX2_VCO_DYN2_0_MASK                                           (0x00000010)
#define RF_CW264_SRX2_VCO_DYN2_0_BIT                                            (0x00000010)

#define RF_CW264_SRX2_VCO_DYN1_0_LSB                                            (3)
#define RF_CW264_SRX2_VCO_DYN1_0_WIDTH                                          (1)
#define RF_CW264_SRX2_VCO_DYN1_0_MASK                                           (0x00000008)
#define RF_CW264_SRX2_VCO_DYN1_0_BIT                                            (0x00000008)

#define RF_CW264_SRX2_VCO_ULPWR_EN_0_LSB                                        (2)
#define RF_CW264_SRX2_VCO_ULPWR_EN_0_WIDTH                                      (1)
#define RF_CW264_SRX2_VCO_ULPWR_EN_0_MASK                                       (0x00000004)
#define RF_CW264_SRX2_VCO_ULPWR_EN_0_BIT                                        (0x00000004)

#define RF_CW264_SRX2_MMD_ULPWR_EN_0_LSB                                        (1)
#define RF_CW264_SRX2_MMD_ULPWR_EN_0_WIDTH                                      (1)
#define RF_CW264_SRX2_MMD_ULPWR_EN_0_MASK                                       (0x00000002)
#define RF_CW264_SRX2_MMD_ULPWR_EN_0_BIT                                        (0x00000002)

#define RF_CW264_SRX2_VCO2_INDSW_ON_0_LSB                                       (0)
#define RF_CW264_SRX2_VCO2_INDSW_ON_0_WIDTH                                     (1)
#define RF_CW264_SRX2_VCO2_INDSW_ON_0_MASK                                      (0x00000001)
#define RF_CW264_SRX2_VCO2_INDSW_ON_0_BIT                                       (0x00000001)

#define RF_CW265_SRX2_VCO_DYN2_7_LSB                                            (19)
#define RF_CW265_SRX2_VCO_DYN2_7_WIDTH                                          (1)
#define RF_CW265_SRX2_VCO_DYN2_7_MASK                                           (0x00080000)
#define RF_CW265_SRX2_VCO_DYN2_7_BIT                                            (0x00080000)

#define RF_CW265_SRX2_VCO_DYN1_7_LSB                                            (18)
#define RF_CW265_SRX2_VCO_DYN1_7_WIDTH                                          (1)
#define RF_CW265_SRX2_VCO_DYN1_7_MASK                                           (0x00040000)
#define RF_CW265_SRX2_VCO_DYN1_7_BIT                                            (0x00040000)

#define RF_CW265_SRX2_VCO_ULPWR_EN_7_LSB                                        (17)
#define RF_CW265_SRX2_VCO_ULPWR_EN_7_WIDTH                                      (1)
#define RF_CW265_SRX2_VCO_ULPWR_EN_7_MASK                                       (0x00020000)
#define RF_CW265_SRX2_VCO_ULPWR_EN_7_BIT                                        (0x00020000)

#define RF_CW265_SRX2_MMD_ULPWR_EN_7_LSB                                        (16)
#define RF_CW265_SRX2_MMD_ULPWR_EN_7_WIDTH                                      (1)
#define RF_CW265_SRX2_MMD_ULPWR_EN_7_MASK                                       (0x00010000)
#define RF_CW265_SRX2_MMD_ULPWR_EN_7_BIT                                        (0x00010000)

#define RF_CW265_SRX2_VCO2_INDSW_ON_7_LSB                                       (15)
#define RF_CW265_SRX2_VCO2_INDSW_ON_7_WIDTH                                     (1)
#define RF_CW265_SRX2_VCO2_INDSW_ON_7_MASK                                      (0x00008000)
#define RF_CW265_SRX2_VCO2_INDSW_ON_7_BIT                                       (0x00008000)

#define RF_CW265_SRX2_VCO_DYN2_6_LSB                                            (14)
#define RF_CW265_SRX2_VCO_DYN2_6_WIDTH                                          (1)
#define RF_CW265_SRX2_VCO_DYN2_6_MASK                                           (0x00004000)
#define RF_CW265_SRX2_VCO_DYN2_6_BIT                                            (0x00004000)

#define RF_CW265_SRX2_VCO_DYN1_6_LSB                                            (13)
#define RF_CW265_SRX2_VCO_DYN1_6_WIDTH                                          (1)
#define RF_CW265_SRX2_VCO_DYN1_6_MASK                                           (0x00002000)
#define RF_CW265_SRX2_VCO_DYN1_6_BIT                                            (0x00002000)

#define RF_CW265_SRX2_VCO_ULPWR_EN_6_LSB                                        (12)
#define RF_CW265_SRX2_VCO_ULPWR_EN_6_WIDTH                                      (1)
#define RF_CW265_SRX2_VCO_ULPWR_EN_6_MASK                                       (0x00001000)
#define RF_CW265_SRX2_VCO_ULPWR_EN_6_BIT                                        (0x00001000)

#define RF_CW265_SRX2_MMD_ULPWR_EN_6_LSB                                        (11)
#define RF_CW265_SRX2_MMD_ULPWR_EN_6_WIDTH                                      (1)
#define RF_CW265_SRX2_MMD_ULPWR_EN_6_MASK                                       (0x00000800)
#define RF_CW265_SRX2_MMD_ULPWR_EN_6_BIT                                        (0x00000800)

#define RF_CW265_SRX2_VCO2_INDSW_ON_6_LSB                                       (10)
#define RF_CW265_SRX2_VCO2_INDSW_ON_6_WIDTH                                     (1)
#define RF_CW265_SRX2_VCO2_INDSW_ON_6_MASK                                      (0x00000400)
#define RF_CW265_SRX2_VCO2_INDSW_ON_6_BIT                                       (0x00000400)

#define RF_CW265_SRX2_VCO_DYN2_5_LSB                                            (9)
#define RF_CW265_SRX2_VCO_DYN2_5_WIDTH                                          (1)
#define RF_CW265_SRX2_VCO_DYN2_5_MASK                                           (0x00000200)
#define RF_CW265_SRX2_VCO_DYN2_5_BIT                                            (0x00000200)

#define RF_CW265_SRX2_VCO_DYN1_5_LSB                                            (8)
#define RF_CW265_SRX2_VCO_DYN1_5_WIDTH                                          (1)
#define RF_CW265_SRX2_VCO_DYN1_5_MASK                                           (0x00000100)
#define RF_CW265_SRX2_VCO_DYN1_5_BIT                                            (0x00000100)

#define RF_CW265_SRX2_VCO_ULPWR_EN_5_LSB                                        (7)
#define RF_CW265_SRX2_VCO_ULPWR_EN_5_WIDTH                                      (1)
#define RF_CW265_SRX2_VCO_ULPWR_EN_5_MASK                                       (0x00000080)
#define RF_CW265_SRX2_VCO_ULPWR_EN_5_BIT                                        (0x00000080)

#define RF_CW265_SRX2_MMD_ULPWR_EN_5_LSB                                        (6)
#define RF_CW265_SRX2_MMD_ULPWR_EN_5_WIDTH                                      (1)
#define RF_CW265_SRX2_MMD_ULPWR_EN_5_MASK                                       (0x00000040)
#define RF_CW265_SRX2_MMD_ULPWR_EN_5_BIT                                        (0x00000040)

#define RF_CW265_SRX2_VCO2_INDSW_ON_5_LSB                                       (5)
#define RF_CW265_SRX2_VCO2_INDSW_ON_5_WIDTH                                     (1)
#define RF_CW265_SRX2_VCO2_INDSW_ON_5_MASK                                      (0x00000020)
#define RF_CW265_SRX2_VCO2_INDSW_ON_5_BIT                                       (0x00000020)

#define RF_CW265_SRX2_VCO_DYN2_4_LSB                                            (4)
#define RF_CW265_SRX2_VCO_DYN2_4_WIDTH                                          (1)
#define RF_CW265_SRX2_VCO_DYN2_4_MASK                                           (0x00000010)
#define RF_CW265_SRX2_VCO_DYN2_4_BIT                                            (0x00000010)

#define RF_CW265_SRX2_VCO_DYN1_4_LSB                                            (3)
#define RF_CW265_SRX2_VCO_DYN1_4_WIDTH                                          (1)
#define RF_CW265_SRX2_VCO_DYN1_4_MASK                                           (0x00000008)
#define RF_CW265_SRX2_VCO_DYN1_4_BIT                                            (0x00000008)

#define RF_CW265_SRX2_VCO_ULPWR_EN_4_LSB                                        (2)
#define RF_CW265_SRX2_VCO_ULPWR_EN_4_WIDTH                                      (1)
#define RF_CW265_SRX2_VCO_ULPWR_EN_4_MASK                                       (0x00000004)
#define RF_CW265_SRX2_VCO_ULPWR_EN_4_BIT                                        (0x00000004)

#define RF_CW265_SRX2_MMD_ULPWR_EN_4_LSB                                        (1)
#define RF_CW265_SRX2_MMD_ULPWR_EN_4_WIDTH                                      (1)
#define RF_CW265_SRX2_MMD_ULPWR_EN_4_MASK                                       (0x00000002)
#define RF_CW265_SRX2_MMD_ULPWR_EN_4_BIT                                        (0x00000002)

#define RF_CW265_SRX2_VCO2_INDSW_ON_4_LSB                                       (0)
#define RF_CW265_SRX2_VCO2_INDSW_ON_4_WIDTH                                     (1)
#define RF_CW265_SRX2_VCO2_INDSW_ON_4_MASK                                      (0x00000001)
#define RF_CW265_SRX2_VCO2_INDSW_ON_4_BIT                                       (0x00000001)

#define RF_CW266_SRX2_VCO32_VAR_R_FINGER_3_LSB                                  (18)
#define RF_CW266_SRX2_VCO32_VAR_R_FINGER_3_WIDTH                                (2)
#define RF_CW266_SRX2_VCO32_VAR_R_FINGER_3_MASK                                 (0x000C0000)

#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_3_LSB                                    (17)
#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_3_WIDTH                                  (1)
#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_3_MASK                                   (0x00020000)
#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_3_BIT                                    (0x00020000)

#define RF_CW266_SRX2_VCO32_VCT2GD_EN_3_LSB                                     (16)
#define RF_CW266_SRX2_VCO32_VCT2GD_EN_3_WIDTH                                   (1)
#define RF_CW266_SRX2_VCO32_VCT2GD_EN_3_MASK                                    (0x00010000)
#define RF_CW266_SRX2_VCO32_VCT2GD_EN_3_BIT                                     (0x00010000)

#define RF_CW266_SRX2_VCO32_INDSW_ON_3_LSB                                      (15)
#define RF_CW266_SRX2_VCO32_INDSW_ON_3_WIDTH                                    (1)
#define RF_CW266_SRX2_VCO32_INDSW_ON_3_MASK                                     (0x00008000)
#define RF_CW266_SRX2_VCO32_INDSW_ON_3_BIT                                      (0x00008000)

#define RF_CW266_SRX2_VCO32_VAR_R_FINGER_2_LSB                                  (13)
#define RF_CW266_SRX2_VCO32_VAR_R_FINGER_2_WIDTH                                (2)
#define RF_CW266_SRX2_VCO32_VAR_R_FINGER_2_MASK                                 (0x00006000)

#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_2_LSB                                    (12)
#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_2_WIDTH                                  (1)
#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_2_MASK                                   (0x00001000)
#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_2_BIT                                    (0x00001000)

#define RF_CW266_SRX2_VCO32_VCT2GD_EN_2_LSB                                     (11)
#define RF_CW266_SRX2_VCO32_VCT2GD_EN_2_WIDTH                                   (1)
#define RF_CW266_SRX2_VCO32_VCT2GD_EN_2_MASK                                    (0x00000800)
#define RF_CW266_SRX2_VCO32_VCT2GD_EN_2_BIT                                     (0x00000800)

#define RF_CW266_SRX2_VCO32_INDSW_ON_2_LSB                                      (10)
#define RF_CW266_SRX2_VCO32_INDSW_ON_2_WIDTH                                    (1)
#define RF_CW266_SRX2_VCO32_INDSW_ON_2_MASK                                     (0x00000400)
#define RF_CW266_SRX2_VCO32_INDSW_ON_2_BIT                                      (0x00000400)

#define RF_CW266_SRX2_VCO32_VAR_R_FINGER_1_LSB                                  (8)
#define RF_CW266_SRX2_VCO32_VAR_R_FINGER_1_WIDTH                                (2)
#define RF_CW266_SRX2_VCO32_VAR_R_FINGER_1_MASK                                 (0x00000300)

#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_1_LSB                                    (7)
#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_1_WIDTH                                  (1)
#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_1_MASK                                   (0x00000080)
#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_1_BIT                                    (0x00000080)

#define RF_CW266_SRX2_VCO32_VCT2GD_EN_1_LSB                                     (6)
#define RF_CW266_SRX2_VCO32_VCT2GD_EN_1_WIDTH                                   (1)
#define RF_CW266_SRX2_VCO32_VCT2GD_EN_1_MASK                                    (0x00000040)
#define RF_CW266_SRX2_VCO32_VCT2GD_EN_1_BIT                                     (0x00000040)

#define RF_CW266_SRX2_VCO32_INDSW_ON_1_LSB                                      (5)
#define RF_CW266_SRX2_VCO32_INDSW_ON_1_WIDTH                                    (1)
#define RF_CW266_SRX2_VCO32_INDSW_ON_1_MASK                                     (0x00000020)
#define RF_CW266_SRX2_VCO32_INDSW_ON_1_BIT                                      (0x00000020)

#define RF_CW266_SRX2_VCO32_VAR_R_FINGER_0_LSB                                  (3)
#define RF_CW266_SRX2_VCO32_VAR_R_FINGER_0_WIDTH                                (2)
#define RF_CW266_SRX2_VCO32_VAR_R_FINGER_0_MASK                                 (0x00000018)

#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_0_LSB                                    (2)
#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_0_WIDTH                                  (1)
#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_0_MASK                                   (0x00000004)
#define RF_CW266_SRX2_VCO32_SCA_VSP_HI_0_BIT                                    (0x00000004)

#define RF_CW266_SRX2_VCO32_VCT2GD_EN_0_LSB                                     (1)
#define RF_CW266_SRX2_VCO32_VCT2GD_EN_0_WIDTH                                   (1)
#define RF_CW266_SRX2_VCO32_VCT2GD_EN_0_MASK                                    (0x00000002)
#define RF_CW266_SRX2_VCO32_VCT2GD_EN_0_BIT                                     (0x00000002)

#define RF_CW266_SRX2_VCO32_INDSW_ON_0_LSB                                      (0)
#define RF_CW266_SRX2_VCO32_INDSW_ON_0_WIDTH                                    (1)
#define RF_CW266_SRX2_VCO32_INDSW_ON_0_MASK                                     (0x00000001)
#define RF_CW266_SRX2_VCO32_INDSW_ON_0_BIT                                      (0x00000001)

#define RF_CW267_SRX2_VCO32_VAR_R_FINGER_7_LSB                                  (18)
#define RF_CW267_SRX2_VCO32_VAR_R_FINGER_7_WIDTH                                (2)
#define RF_CW267_SRX2_VCO32_VAR_R_FINGER_7_MASK                                 (0x000C0000)

#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_7_LSB                                    (17)
#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_7_WIDTH                                  (1)
#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_7_MASK                                   (0x00020000)
#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_7_BIT                                    (0x00020000)

#define RF_CW267_SRX2_VCO32_VCT2GD_EN_7_LSB                                     (16)
#define RF_CW267_SRX2_VCO32_VCT2GD_EN_7_WIDTH                                   (1)
#define RF_CW267_SRX2_VCO32_VCT2GD_EN_7_MASK                                    (0x00010000)
#define RF_CW267_SRX2_VCO32_VCT2GD_EN_7_BIT                                     (0x00010000)

#define RF_CW267_SRX2_VCO32_INDSW_ON_7_LSB                                      (15)
#define RF_CW267_SRX2_VCO32_INDSW_ON_7_WIDTH                                    (1)
#define RF_CW267_SRX2_VCO32_INDSW_ON_7_MASK                                     (0x00008000)
#define RF_CW267_SRX2_VCO32_INDSW_ON_7_BIT                                      (0x00008000)

#define RF_CW267_SRX2_VCO32_VAR_R_FINGER_6_LSB                                  (13)
#define RF_CW267_SRX2_VCO32_VAR_R_FINGER_6_WIDTH                                (2)
#define RF_CW267_SRX2_VCO32_VAR_R_FINGER_6_MASK                                 (0x00006000)

#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_6_LSB                                    (12)
#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_6_WIDTH                                  (1)
#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_6_MASK                                   (0x00001000)
#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_6_BIT                                    (0x00001000)

#define RF_CW267_SRX2_VCO32_VCT2GD_EN_6_LSB                                     (11)
#define RF_CW267_SRX2_VCO32_VCT2GD_EN_6_WIDTH                                   (1)
#define RF_CW267_SRX2_VCO32_VCT2GD_EN_6_MASK                                    (0x00000800)
#define RF_CW267_SRX2_VCO32_VCT2GD_EN_6_BIT                                     (0x00000800)

#define RF_CW267_SRX2_VCO32_INDSW_ON_6_LSB                                      (10)
#define RF_CW267_SRX2_VCO32_INDSW_ON_6_WIDTH                                    (1)
#define RF_CW267_SRX2_VCO32_INDSW_ON_6_MASK                                     (0x00000400)
#define RF_CW267_SRX2_VCO32_INDSW_ON_6_BIT                                      (0x00000400)

#define RF_CW267_SRX2_VCO32_VAR_R_FINGER_5_LSB                                  (8)
#define RF_CW267_SRX2_VCO32_VAR_R_FINGER_5_WIDTH                                (2)
#define RF_CW267_SRX2_VCO32_VAR_R_FINGER_5_MASK                                 (0x00000300)

#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_5_LSB                                    (7)
#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_5_WIDTH                                  (1)
#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_5_MASK                                   (0x00000080)
#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_5_BIT                                    (0x00000080)

#define RF_CW267_SRX2_VCO32_VCT2GD_EN_5_LSB                                     (6)
#define RF_CW267_SRX2_VCO32_VCT2GD_EN_5_WIDTH                                   (1)
#define RF_CW267_SRX2_VCO32_VCT2GD_EN_5_MASK                                    (0x00000040)
#define RF_CW267_SRX2_VCO32_VCT2GD_EN_5_BIT                                     (0x00000040)

#define RF_CW267_SRX2_VCO32_INDSW_ON_5_LSB                                      (5)
#define RF_CW267_SRX2_VCO32_INDSW_ON_5_WIDTH                                    (1)
#define RF_CW267_SRX2_VCO32_INDSW_ON_5_MASK                                     (0x00000020)
#define RF_CW267_SRX2_VCO32_INDSW_ON_5_BIT                                      (0x00000020)

#define RF_CW267_SRX2_VCO32_VAR_R_FINGER_4_LSB                                  (3)
#define RF_CW267_SRX2_VCO32_VAR_R_FINGER_4_WIDTH                                (2)
#define RF_CW267_SRX2_VCO32_VAR_R_FINGER_4_MASK                                 (0x00000018)

#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_4_LSB                                    (2)
#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_4_WIDTH                                  (1)
#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_4_MASK                                   (0x00000004)
#define RF_CW267_SRX2_VCO32_SCA_VSP_HI_4_BIT                                    (0x00000004)

#define RF_CW267_SRX2_VCO32_VCT2GD_EN_4_LSB                                     (1)
#define RF_CW267_SRX2_VCO32_VCT2GD_EN_4_WIDTH                                   (1)
#define RF_CW267_SRX2_VCO32_VCT2GD_EN_4_MASK                                    (0x00000002)
#define RF_CW267_SRX2_VCO32_VCT2GD_EN_4_BIT                                     (0x00000002)

#define RF_CW267_SRX2_VCO32_INDSW_ON_4_LSB                                      (0)
#define RF_CW267_SRX2_VCO32_INDSW_ON_4_WIDTH                                    (1)
#define RF_CW267_SRX2_VCO32_INDSW_ON_4_MASK                                     (0x00000001)
#define RF_CW267_SRX2_VCO32_INDSW_ON_4_BIT                                      (0x00000001)

#define RF_CW268_SRX2_VCO32_I_C2K6_MAN_LSB                                      (19)
#define RF_CW268_SRX2_VCO32_I_C2K6_MAN_WIDTH                                    (1)
#define RF_CW268_SRX2_VCO32_I_C2K6_MAN_MASK                                     (0x00080000)
#define RF_CW268_SRX2_VCO32_I_C2K6_MAN_BIT                                      (0x00080000)

#define RF_CW268_SRX2_VCO32_I_OR_TAR_C2K6_LSB                                   (15)
#define RF_CW268_SRX2_VCO32_I_OR_TAR_C2K6_WIDTH                                 (4)
#define RF_CW268_SRX2_VCO32_I_OR_TAR_C2K6_MASK                                  (0x00078000)

#define RF_CW268_SRX2_VCO32_I_C2K4_MAN_LSB                                      (14)
#define RF_CW268_SRX2_VCO32_I_C2K4_MAN_WIDTH                                    (1)
#define RF_CW268_SRX2_VCO32_I_C2K4_MAN_MASK                                     (0x00004000)
#define RF_CW268_SRX2_VCO32_I_C2K4_MAN_BIT                                      (0x00004000)

#define RF_CW268_SRX2_VCO32_I_OR_TAR_C2K4_LSB                                   (10)
#define RF_CW268_SRX2_VCO32_I_OR_TAR_C2K4_WIDTH                                 (4)
#define RF_CW268_SRX2_VCO32_I_OR_TAR_C2K4_MASK                                  (0x00003C00)

#define RF_CW268_SRX2_VCO32_I_C2K1_MAN_LSB                                      (9)
#define RF_CW268_SRX2_VCO32_I_C2K1_MAN_WIDTH                                    (1)
#define RF_CW268_SRX2_VCO32_I_C2K1_MAN_MASK                                     (0x00000200)
#define RF_CW268_SRX2_VCO32_I_C2K1_MAN_BIT                                      (0x00000200)

#define RF_CW268_SRX2_VCO32_I_OR_TAR_C2K1_LSB                                   (5)
#define RF_CW268_SRX2_VCO32_I_OR_TAR_C2K1_WIDTH                                 (4)
#define RF_CW268_SRX2_VCO32_I_OR_TAR_C2K1_MASK                                  (0x000001E0)

#define RF_CW268_SRX2_VCO32_I_C2K0_MAN_LSB                                      (4)
#define RF_CW268_SRX2_VCO32_I_C2K0_MAN_WIDTH                                    (1)
#define RF_CW268_SRX2_VCO32_I_C2K0_MAN_MASK                                     (0x00000010)
#define RF_CW268_SRX2_VCO32_I_C2K0_MAN_BIT                                      (0x00000010)

#define RF_CW268_SRX2_VCO32_I_OR_TAR_C2K0_LSB                                   (0)
#define RF_CW268_SRX2_VCO32_I_OR_TAR_C2K0_WIDTH                                 (4)
#define RF_CW268_SRX2_VCO32_I_OR_TAR_C2K0_MASK                                  (0x0000000F)

#define RF_CW269_SRX2_VCO32_I_PCS_MAN_LSB                                       (19)
#define RF_CW269_SRX2_VCO32_I_PCS_MAN_WIDTH                                     (1)
#define RF_CW269_SRX2_VCO32_I_PCS_MAN_MASK                                      (0x00080000)
#define RF_CW269_SRX2_VCO32_I_PCS_MAN_BIT                                       (0x00080000)

#define RF_CW269_SRX2_VCO32_I_OR_TAR_PCS_LSB                                    (15)
#define RF_CW269_SRX2_VCO32_I_OR_TAR_PCS_WIDTH                                  (4)
#define RF_CW269_SRX2_VCO32_I_OR_TAR_PCS_MASK                                   (0x00078000)

#define RF_CW269_SRX2_VCO32_I_DCS_MAN_LSB                                       (14)
#define RF_CW269_SRX2_VCO32_I_DCS_MAN_WIDTH                                     (1)
#define RF_CW269_SRX2_VCO32_I_DCS_MAN_MASK                                      (0x00004000)
#define RF_CW269_SRX2_VCO32_I_DCS_MAN_BIT                                       (0x00004000)

#define RF_CW269_SRX2_VCO32_I_OR_TAR_DCS_LSB                                    (10)
#define RF_CW269_SRX2_VCO32_I_OR_TAR_DCS_WIDTH                                  (4)
#define RF_CW269_SRX2_VCO32_I_OR_TAR_DCS_MASK                                   (0x00003C00)

#define RF_CW269_SRX2_VCO32_I_GSM900_MAN_LSB                                    (9)
#define RF_CW269_SRX2_VCO32_I_GSM900_MAN_WIDTH                                  (1)
#define RF_CW269_SRX2_VCO32_I_GSM900_MAN_MASK                                   (0x00000200)
#define RF_CW269_SRX2_VCO32_I_GSM900_MAN_BIT                                    (0x00000200)

#define RF_CW269_SRX2_VCO32_I_OR_TAR_GSM900_LSB                                 (5)
#define RF_CW269_SRX2_VCO32_I_OR_TAR_GSM900_WIDTH                               (4)
#define RF_CW269_SRX2_VCO32_I_OR_TAR_GSM900_MASK                                (0x000001E0)

#define RF_CW269_SRX2_VCO32_I_GSM850_MAN_LSB                                    (4)
#define RF_CW269_SRX2_VCO32_I_GSM850_MAN_WIDTH                                  (1)
#define RF_CW269_SRX2_VCO32_I_GSM850_MAN_MASK                                   (0x00000010)
#define RF_CW269_SRX2_VCO32_I_GSM850_MAN_BIT                                    (0x00000010)

#define RF_CW269_SRX2_VCO32_I_OR_TAR_GSM850_LSB                                 (0)
#define RF_CW269_SRX2_VCO32_I_OR_TAR_GSM850_WIDTH                               (4)
#define RF_CW269_SRX2_VCO32_I_OR_TAR_GSM850_MASK                                (0x0000000F)

#define RF_CW270_SRX2_VCO32_I_INDLR_LO_MAN_LSB                                  (19)
#define RF_CW270_SRX2_VCO32_I_INDLR_LO_MAN_WIDTH                                (1)
#define RF_CW270_SRX2_VCO32_I_INDLR_LO_MAN_MASK                                 (0x00080000)
#define RF_CW270_SRX2_VCO32_I_INDLR_LO_MAN_BIT                                  (0x00080000)

#define RF_CW270_SRX2_VCO32_I_OR_TAR_INDLR_LO_LSB                               (15)
#define RF_CW270_SRX2_VCO32_I_OR_TAR_INDLR_LO_WIDTH                             (4)
#define RF_CW270_SRX2_VCO32_I_OR_TAR_INDLR_LO_MASK                              (0x00078000)

#define RF_CW270_SRX2_VCO32_I_INDLR_HI_MAN_LSB                                  (14)
#define RF_CW270_SRX2_VCO32_I_INDLR_HI_MAN_WIDTH                                (1)
#define RF_CW270_SRX2_VCO32_I_INDLR_HI_MAN_MASK                                 (0x00004000)
#define RF_CW270_SRX2_VCO32_I_INDLR_HI_MAN_BIT                                  (0x00004000)

#define RF_CW270_SRX2_VCO32_I_OR_TAR_INDLR_HI_LSB                               (10)
#define RF_CW270_SRX2_VCO32_I_OR_TAR_INDLR_HI_WIDTH                             (4)
#define RF_CW270_SRX2_VCO32_I_OR_TAR_INDLR_HI_MASK                              (0x00003C00)

#define RF_CW270_SRX2_VCO32_I_INDSM_LO_MAN_LSB                                  (9)
#define RF_CW270_SRX2_VCO32_I_INDSM_LO_MAN_WIDTH                                (1)
#define RF_CW270_SRX2_VCO32_I_INDSM_LO_MAN_MASK                                 (0x00000200)
#define RF_CW270_SRX2_VCO32_I_INDSM_LO_MAN_BIT                                  (0x00000200)

#define RF_CW270_SRX2_VCO32_I_OR_TAR_INDSM_LO_LSB                               (5)
#define RF_CW270_SRX2_VCO32_I_OR_TAR_INDSM_LO_WIDTH                             (4)
#define RF_CW270_SRX2_VCO32_I_OR_TAR_INDSM_LO_MASK                              (0x000001E0)

#define RF_CW270_SRX2_VCO32_I_INDSM_HI_MAN_LSB                                  (4)
#define RF_CW270_SRX2_VCO32_I_INDSM_HI_MAN_WIDTH                                (1)
#define RF_CW270_SRX2_VCO32_I_INDSM_HI_MAN_MASK                                 (0x00000010)
#define RF_CW270_SRX2_VCO32_I_INDSM_HI_MAN_BIT                                  (0x00000010)

#define RF_CW270_SRX2_VCO32_I_OR_TAR_INDSM_HI_LSB                               (0)
#define RF_CW270_SRX2_VCO32_I_OR_TAR_INDSM_HI_WIDTH                             (4)
#define RF_CW270_SRX2_VCO32_I_OR_TAR_INDSM_HI_MASK                              (0x0000000F)

#define RF_CW271_SRX2_VCO2_I_2GLP_MAN_LSB                                       (19)
#define RF_CW271_SRX2_VCO2_I_2GLP_MAN_WIDTH                                     (1)
#define RF_CW271_SRX2_VCO2_I_2GLP_MAN_MASK                                      (0x00080000)
#define RF_CW271_SRX2_VCO2_I_2GLP_MAN_BIT                                       (0x00080000)

#define RF_CW271_SRX2_VCO2_I_2GLP_OR_TAR3_LSB                                   (15)
#define RF_CW271_SRX2_VCO2_I_2GLP_OR_TAR3_WIDTH                                 (4)
#define RF_CW271_SRX2_VCO2_I_2GLP_OR_TAR3_MASK                                  (0x00078000)

#define RF_CW271_SRX2_VCO2_I_2GHP_MAN_LSB                                       (14)
#define RF_CW271_SRX2_VCO2_I_2GHP_MAN_WIDTH                                     (1)
#define RF_CW271_SRX2_VCO2_I_2GHP_MAN_MASK                                      (0x00004000)
#define RF_CW271_SRX2_VCO2_I_2GHP_MAN_BIT                                       (0x00004000)

#define RF_CW271_SRX2_VCO2_I_2GHP_OR_TAR2_LSB                                   (10)
#define RF_CW271_SRX2_VCO2_I_2GHP_OR_TAR2_WIDTH                                 (4)
#define RF_CW271_SRX2_VCO2_I_2GHP_OR_TAR2_MASK                                  (0x00003C00)

#define RF_CW271_SRX2_VCO2_I_C2KL_MAN_LSB                                       (9)
#define RF_CW271_SRX2_VCO2_I_C2KL_MAN_WIDTH                                     (1)
#define RF_CW271_SRX2_VCO2_I_C2KL_MAN_MASK                                      (0x00000200)
#define RF_CW271_SRX2_VCO2_I_C2KL_MAN_BIT                                       (0x00000200)

#define RF_CW271_SRX2_VCO2_I_C2KL_OR_TAR1_LSB                                   (5)
#define RF_CW271_SRX2_VCO2_I_C2KL_OR_TAR1_WIDTH                                 (4)
#define RF_CW271_SRX2_VCO2_I_C2KL_OR_TAR1_MASK                                  (0x000001E0)

#define RF_CW271_SRX2_VCO2_I_C2KH_MAN_LSB                                       (4)
#define RF_CW271_SRX2_VCO2_I_C2KH_MAN_WIDTH                                     (1)
#define RF_CW271_SRX2_VCO2_I_C2KH_MAN_MASK                                      (0x00000010)
#define RF_CW271_SRX2_VCO2_I_C2KH_MAN_BIT                                       (0x00000010)

#define RF_CW271_SRX2_VCO2_I_C2KH_OR_TAR0_LSB                                   (0)
#define RF_CW271_SRX2_VCO2_I_C2KH_OR_TAR0_WIDTH                                 (4)
#define RF_CW271_SRX2_VCO2_I_C2KH_OR_TAR0_MASK                                  (0x0000000F)

#define RF_CW272_SRX2_VCO2_I_INDLR_LO_MAN_LSB                                   (19)
#define RF_CW272_SRX2_VCO2_I_INDLR_LO_MAN_WIDTH                                 (1)
#define RF_CW272_SRX2_VCO2_I_INDLR_LO_MAN_MASK                                  (0x00080000)
#define RF_CW272_SRX2_VCO2_I_INDLR_LO_MAN_BIT                                   (0x00080000)

#define RF_CW272_SRX2_VCO2_I_INDLR_LO_OR_TAR7_LSB                               (15)
#define RF_CW272_SRX2_VCO2_I_INDLR_LO_OR_TAR7_WIDTH                             (4)
#define RF_CW272_SRX2_VCO2_I_INDLR_LO_OR_TAR7_MASK                              (0x00078000)

#define RF_CW272_SRX2_VCO2_I_INDLR_HI_MAN_LSB                                   (14)
#define RF_CW272_SRX2_VCO2_I_INDLR_HI_MAN_WIDTH                                 (1)
#define RF_CW272_SRX2_VCO2_I_INDLR_HI_MAN_MASK                                  (0x00004000)
#define RF_CW272_SRX2_VCO2_I_INDLR_HI_MAN_BIT                                   (0x00004000)

#define RF_CW272_SRX2_VCO2_I_INDLR_HI_OR_TAR6_LSB                               (10)
#define RF_CW272_SRX2_VCO2_I_INDLR_HI_OR_TAR6_WIDTH                             (4)
#define RF_CW272_SRX2_VCO2_I_INDLR_HI_OR_TAR6_MASK                              (0x00003C00)

#define RF_CW272_SRX2_VCO2_I_INDSM_LO_MAN_LSB                                   (9)
#define RF_CW272_SRX2_VCO2_I_INDSM_LO_MAN_WIDTH                                 (1)
#define RF_CW272_SRX2_VCO2_I_INDSM_LO_MAN_MASK                                  (0x00000200)
#define RF_CW272_SRX2_VCO2_I_INDSM_LO_MAN_BIT                                   (0x00000200)

#define RF_CW272_SRX2_VCO2_I_INDSM_LO_OR_TAR5_LSB                               (5)
#define RF_CW272_SRX2_VCO2_I_INDSM_LO_OR_TAR5_WIDTH                             (4)
#define RF_CW272_SRX2_VCO2_I_INDSM_LO_OR_TAR5_MASK                              (0x000001E0)

#define RF_CW272_SRX2_VCO2_I_INDSM_HI_MAN_LSB                                   (4)
#define RF_CW272_SRX2_VCO2_I_INDSM_HI_MAN_WIDTH                                 (1)
#define RF_CW272_SRX2_VCO2_I_INDSM_HI_MAN_MASK                                  (0x00000010)
#define RF_CW272_SRX2_VCO2_I_INDSM_HI_MAN_BIT                                   (0x00000010)

#define RF_CW272_SRX2_VCO2_I_INDSM_HI_OR_TAR4_LSB                               (0)
#define RF_CW272_SRX2_VCO2_I_INDSM_HI_OR_TAR4_WIDTH                             (4)
#define RF_CW272_SRX2_VCO2_I_INDSM_HI_OR_TAR4_MASK                              (0x0000000F)

#define RF_CW273_SRX2_VCO2_ICP_2G_LSB                                           (15)
#define RF_CW273_SRX2_VCO2_ICP_2G_WIDTH                                         (5)
#define RF_CW273_SRX2_VCO2_ICP_2G_MASK                                          (0x000F8000)

#define RF_CW273_SRX2_VCO2_IOFFSET_2G_LSB                                       (10)
#define RF_CW273_SRX2_VCO2_IOFFSET_2G_WIDTH                                     (5)
#define RF_CW273_SRX2_VCO2_IOFFSET_2G_MASK                                      (0x00007C00)

#define RF_CW273_SRX2_VCO32_ICP_2G_LSB                                          (5)
#define RF_CW273_SRX2_VCO32_ICP_2G_WIDTH                                        (5)
#define RF_CW273_SRX2_VCO32_ICP_2G_MASK                                         (0x000003E0)

#define RF_CW273_SRX2_VCO32_IOFFSET_2G_LSB                                      (0)
#define RF_CW273_SRX2_VCO32_IOFFSET_2G_WIDTH                                    (5)
#define RF_CW273_SRX2_VCO32_IOFFSET_2G_MASK                                     (0x0000001F)

#define RF_CW274_SRX2_VCO2_LF_C1_2G_LSB                                         (15)
#define RF_CW274_SRX2_VCO2_LF_C1_2G_WIDTH                                       (5)
#define RF_CW274_SRX2_VCO2_LF_C1_2G_MASK                                        (0x000F8000)

#define RF_CW274_SRX2_VCO2_LF_C2_2G_LSB                                         (10)
#define RF_CW274_SRX2_VCO2_LF_C2_2G_WIDTH                                       (5)
#define RF_CW274_SRX2_VCO2_LF_C2_2G_MASK                                        (0x00007C00)

#define RF_CW274_SRX2_VCO32_LF_C1_2G_LSB                                        (5)
#define RF_CW274_SRX2_VCO32_LF_C1_2G_WIDTH                                      (5)
#define RF_CW274_SRX2_VCO32_LF_C1_2G_MASK                                       (0x000003E0)

#define RF_CW274_SRX2_VCO32_LF_C2_2G_LSB                                        (0)
#define RF_CW274_SRX2_VCO32_LF_C2_2G_WIDTH                                      (5)
#define RF_CW274_SRX2_VCO32_LF_C2_2G_MASK                                       (0x0000001F)

#define RF_CW275_SRX2_LF_C3_LSB                                                 (12)
#define RF_CW275_SRX2_LF_C3_WIDTH                                               (2)
#define RF_CW275_SRX2_LF_C3_MASK                                                (0x00003000)

#define RF_CW275_SRX2_VCO32_LF_R2_PCS_LSB                                       (6)
#define RF_CW275_SRX2_VCO32_LF_R2_PCS_WIDTH                                     (6)
#define RF_CW275_SRX2_VCO32_LF_R2_PCS_MASK                                      (0x00000FC0)

#define RF_CW275_SRX2_VCO2_LF_R2_PCS_LSB                                        (0)
#define RF_CW275_SRX2_VCO2_LF_R2_PCS_WIDTH                                      (6)
#define RF_CW275_SRX2_VCO2_LF_R2_PCS_MASK                                       (0x0000003F)

#define RF_CW276_SRX2_VCO2_LF_R2_DCS_LSB                                        (12)
#define RF_CW276_SRX2_VCO2_LF_R2_DCS_WIDTH                                      (6)
#define RF_CW276_SRX2_VCO2_LF_R2_DCS_MASK                                       (0x0003F000)

#define RF_CW276_SRX2_VCO2_LF_R2_GSM900_LSB                                     (6)
#define RF_CW276_SRX2_VCO2_LF_R2_GSM900_WIDTH                                   (6)
#define RF_CW276_SRX2_VCO2_LF_R2_GSM900_MASK                                    (0x00000FC0)

#define RF_CW276_SRX2_VCO2_LF_R2_GSM850_LSB                                     (0)
#define RF_CW276_SRX2_VCO2_LF_R2_GSM850_WIDTH                                   (6)
#define RF_CW276_SRX2_VCO2_LF_R2_GSM850_MASK                                    (0x0000003F)

#define RF_CW277_SRX2_VCO32_LF_R2_DCS_LSB                                       (12)
#define RF_CW277_SRX2_VCO32_LF_R2_DCS_WIDTH                                     (6)
#define RF_CW277_SRX2_VCO32_LF_R2_DCS_MASK                                      (0x0003F000)

#define RF_CW277_SRX2_VCO32_LF_R2_GSM900_LSB                                    (6)
#define RF_CW277_SRX2_VCO32_LF_R2_GSM900_WIDTH                                  (6)
#define RF_CW277_SRX2_VCO32_LF_R2_GSM900_MASK                                   (0x00000FC0)

#define RF_CW277_SRX2_VCO32_LF_R2_GSM850_LSB                                    (0)
#define RF_CW277_SRX2_VCO32_LF_R2_GSM850_WIDTH                                  (6)
#define RF_CW277_SRX2_VCO32_LF_R2_GSM850_MASK                                   (0x0000003F)

#define RF_CW278_SRX2_VCO2_ICP_FDD_LSB                                          (15)
#define RF_CW278_SRX2_VCO2_ICP_FDD_WIDTH                                        (5)
#define RF_CW278_SRX2_VCO2_ICP_FDD_MASK                                         (0x000F8000)

#define RF_CW278_SRX2_VCO2_IOFFSET_FDD_LSB                                      (10)
#define RF_CW278_SRX2_VCO2_IOFFSET_FDD_WIDTH                                    (5)
#define RF_CW278_SRX2_VCO2_IOFFSET_FDD_MASK                                     (0x00007C00)

#define RF_CW278_SRX2_VCO32_ICP_FDD_LSB                                         (5)
#define RF_CW278_SRX2_VCO32_ICP_FDD_WIDTH                                       (5)
#define RF_CW278_SRX2_VCO32_ICP_FDD_MASK                                        (0x000003E0)

#define RF_CW278_SRX2_VCO32_IOFFSET_FDD_LSB                                     (0)
#define RF_CW278_SRX2_VCO32_IOFFSET_FDD_WIDTH                                   (5)
#define RF_CW278_SRX2_VCO32_IOFFSET_FDD_MASK                                    (0x0000001F)

#define RF_CW279_SRX2_LF_C1_FDD_LSB                                             (11)
#define RF_CW279_SRX2_LF_C1_FDD_WIDTH                                           (5)
#define RF_CW279_SRX2_LF_C1_FDD_MASK                                            (0x0000F800)

#define RF_CW279_SRX2_LF_C2_FDD_LSB                                             (6)
#define RF_CW279_SRX2_LF_C2_FDD_WIDTH                                           (5)
#define RF_CW279_SRX2_LF_C2_FDD_MASK                                            (0x000007C0)

#define RF_CW279_SRX2_LF_R2_FDD_LSB                                             (0)
#define RF_CW279_SRX2_LF_R2_FDD_WIDTH                                           (6)
#define RF_CW279_SRX2_LF_R2_FDD_MASK                                            (0x0000003F)

#define RF_CW280_SRX2_VCO2_ICP_TDD_LSB                                          (15)
#define RF_CW280_SRX2_VCO2_ICP_TDD_WIDTH                                        (5)
#define RF_CW280_SRX2_VCO2_ICP_TDD_MASK                                         (0x000F8000)

#define RF_CW280_SRX2_VCO2_IOFFSET_TDD_LSB                                      (10)
#define RF_CW280_SRX2_VCO2_IOFFSET_TDD_WIDTH                                    (5)
#define RF_CW280_SRX2_VCO2_IOFFSET_TDD_MASK                                     (0x00007C00)

#define RF_CW280_SRX2_VCO32_ICP_TDD_LSB                                         (5)
#define RF_CW280_SRX2_VCO32_ICP_TDD_WIDTH                                       (5)
#define RF_CW280_SRX2_VCO32_ICP_TDD_MASK                                        (0x000003E0)

#define RF_CW280_SRX2_VCO32_IOFFSET_TDD_LSB                                     (0)
#define RF_CW280_SRX2_VCO32_IOFFSET_TDD_WIDTH                                   (5)
#define RF_CW280_SRX2_VCO32_IOFFSET_TDD_MASK                                    (0x0000001F)

#define RF_CW281_SRX2_LF_C1_TDD_LSB                                             (11)
#define RF_CW281_SRX2_LF_C1_TDD_WIDTH                                           (5)
#define RF_CW281_SRX2_LF_C1_TDD_MASK                                            (0x0000F800)

#define RF_CW281_SRX2_LF_C2_TDD_LSB                                             (6)
#define RF_CW281_SRX2_LF_C2_TDD_WIDTH                                           (5)
#define RF_CW281_SRX2_LF_C2_TDD_MASK                                            (0x000007C0)

#define RF_CW281_SRX2_LF_R2_TDD_LSB                                             (0)
#define RF_CW281_SRX2_LF_R2_TDD_WIDTH                                           (6)
#define RF_CW281_SRX2_LF_R2_TDD_MASK                                            (0x0000003F)

#define RF_CW282_SRX2_VCO2_ICP_C2K_LSB                                          (15)
#define RF_CW282_SRX2_VCO2_ICP_C2K_WIDTH                                        (5)
#define RF_CW282_SRX2_VCO2_ICP_C2K_MASK                                         (0x000F8000)

#define RF_CW282_SRX2_VCO2_IOFFSET_C2K_LSB                                      (10)
#define RF_CW282_SRX2_VCO2_IOFFSET_C2K_WIDTH                                    (5)
#define RF_CW282_SRX2_VCO2_IOFFSET_C2K_MASK                                     (0x00007C00)

#define RF_CW282_SRX2_VCO32_ICP_C2K_LSB                                         (5)
#define RF_CW282_SRX2_VCO32_ICP_C2K_WIDTH                                       (5)
#define RF_CW282_SRX2_VCO32_ICP_C2K_MASK                                        (0x000003E0)

#define RF_CW282_SRX2_VCO32_IOFFSET_C2K_LSB                                     (0)
#define RF_CW282_SRX2_VCO32_IOFFSET_C2K_WIDTH                                   (5)
#define RF_CW282_SRX2_VCO32_IOFFSET_C2K_MASK                                    (0x0000001F)

#define RF_CW283_SRX2_LF_C1_C2K_LSB                                             (11)
#define RF_CW283_SRX2_LF_C1_C2K_WIDTH                                           (5)
#define RF_CW283_SRX2_LF_C1_C2K_MASK                                            (0x0000F800)

#define RF_CW283_SRX2_LF_C2_C2K_LSB                                             (6)
#define RF_CW283_SRX2_LF_C2_C2K_WIDTH                                           (5)
#define RF_CW283_SRX2_LF_C2_C2K_MASK                                            (0x000007C0)

#define RF_CW283_SRX2_LF_R2_C2K_LSB                                             (0)
#define RF_CW283_SRX2_LF_R2_C2K_WIDTH                                           (6)
#define RF_CW283_SRX2_LF_R2_C2K_MASK                                            (0x0000003F)

#define RF_CW284_SRX2_TDD_FL_STAGES_LSB                                         (17)
#define RF_CW284_SRX2_TDD_FL_STAGES_WIDTH                                       (3)
#define RF_CW284_SRX2_TDD_FL_STAGES_MASK                                        (0x000E0000)

#define RF_CW284_SRX2_TDD_PFDFL_DELAY_LSB                                       (15)
#define RF_CW284_SRX2_TDD_PFDFL_DELAY_WIDTH                                     (2)
#define RF_CW284_SRX2_TDD_PFDFL_DELAY_MASK                                      (0x00018000)

#define RF_CW284_SRX2_TDD_FL_STG3_TIME_LSB                                      (10)
#define RF_CW284_SRX2_TDD_FL_STG3_TIME_WIDTH                                    (5)
#define RF_CW284_SRX2_TDD_FL_STG3_TIME_MASK                                     (0x00007C00)

#define RF_CW284_SRX2_TDD_FL_STG2_TIME_LSB                                      (7)
#define RF_CW284_SRX2_TDD_FL_STG2_TIME_WIDTH                                    (3)
#define RF_CW284_SRX2_TDD_FL_STG2_TIME_MASK                                     (0x00000380)

#define RF_CW284_SRX2_TDD_FL_STG1_TIME_LSB                                      (4)
#define RF_CW284_SRX2_TDD_FL_STG1_TIME_WIDTH                                    (3)
#define RF_CW284_SRX2_TDD_FL_STG1_TIME_MASK                                     (0x00000070)

#define RF_CW284_SRX2_TDD_FL_STG0_TIME_LSB                                      (0)
#define RF_CW284_SRX2_TDD_FL_STG0_TIME_WIDTH                                    (4)
#define RF_CW284_SRX2_TDD_FL_STG0_TIME_MASK                                     (0x0000000F)

#define RF_CW285_SRX2_2G_FL_STAGES_LSB                                          (17)
#define RF_CW285_SRX2_2G_FL_STAGES_WIDTH                                        (3)
#define RF_CW285_SRX2_2G_FL_STAGES_MASK                                         (0x000E0000)

#define RF_CW285_SRX2_2G_PFDFL_DELAY_LSB                                        (15)
#define RF_CW285_SRX2_2G_PFDFL_DELAY_WIDTH                                      (2)
#define RF_CW285_SRX2_2G_PFDFL_DELAY_MASK                                       (0x00018000)

#define RF_CW285_SRX2_2G_FL_STG3_TIME_LSB                                       (10)
#define RF_CW285_SRX2_2G_FL_STG3_TIME_WIDTH                                     (5)
#define RF_CW285_SRX2_2G_FL_STG3_TIME_MASK                                      (0x00007C00)

#define RF_CW285_SRX2_2G_FL_STG2_TIME_LSB                                       (7)
#define RF_CW285_SRX2_2G_FL_STG2_TIME_WIDTH                                     (3)
#define RF_CW285_SRX2_2G_FL_STG2_TIME_MASK                                      (0x00000380)

#define RF_CW285_SRX2_2G_FL_STG1_TIME_LSB                                       (4)
#define RF_CW285_SRX2_2G_FL_STG1_TIME_WIDTH                                     (3)
#define RF_CW285_SRX2_2G_FL_STG1_TIME_MASK                                      (0x00000070)

#define RF_CW285_SRX2_2G_FL_STG0_TIME_LSB                                       (0)
#define RF_CW285_SRX2_2G_FL_STG0_TIME_WIDTH                                     (4)
#define RF_CW285_SRX2_2G_FL_STG0_TIME_MASK                                      (0x0000000F)

#define RF_CW286_SRX2_FL_STAGE_LSB                                              (17)
#define RF_CW286_SRX2_FL_STAGE_WIDTH                                            (3)
#define RF_CW286_SRX2_FL_STAGE_MASK                                             (0x000E0000)

#define RF_CW286_SRX2_FL_STAGE_M_LSB                                            (16)
#define RF_CW286_SRX2_FL_STAGE_M_WIDTH                                          (1)
#define RF_CW286_SRX2_FL_STAGE_M_MASK                                           (0x00010000)
#define RF_CW286_SRX2_FL_STAGE_M_BIT                                            (0x00010000)

#define RF_CW286_SRX2_TDD_FL_IOFFSET_STG3_CORR_LSB                              (10)
#define RF_CW286_SRX2_TDD_FL_IOFFSET_STG3_CORR_WIDTH                            (5)
#define RF_CW286_SRX2_TDD_FL_IOFFSET_STG3_CORR_MASK                             (0x00007C00)

#define RF_CW286_SRX2_TDD_FL_IOFFSET_STG2_CORR_LSB                              (5)
#define RF_CW286_SRX2_TDD_FL_IOFFSET_STG2_CORR_WIDTH                            (5)
#define RF_CW286_SRX2_TDD_FL_IOFFSET_STG2_CORR_MASK                             (0x000003E0)

#define RF_CW286_SRX2_TDD_FL_IOFFSET_STG01_CORR_LSB                             (0)
#define RF_CW286_SRX2_TDD_FL_IOFFSET_STG01_CORR_WIDTH                           (5)
#define RF_CW286_SRX2_TDD_FL_IOFFSET_STG01_CORR_MASK                            (0x0000001F)

#define RF_CW287_SRX2_2G_FL_IOFFSET_STG3_CORR_LSB                               (10)
#define RF_CW287_SRX2_2G_FL_IOFFSET_STG3_CORR_WIDTH                             (5)
#define RF_CW287_SRX2_2G_FL_IOFFSET_STG3_CORR_MASK                              (0x00007C00)

#define RF_CW287_SRX2_2G_FL_IOFFSET_STG2_CORR_LSB                               (5)
#define RF_CW287_SRX2_2G_FL_IOFFSET_STG2_CORR_WIDTH                             (5)
#define RF_CW287_SRX2_2G_FL_IOFFSET_STG2_CORR_MASK                              (0x000003E0)

#define RF_CW287_SRX2_2G_FL_IOFFSET_STG01_CORR_LSB                              (0)
#define RF_CW287_SRX2_2G_FL_IOFFSET_STG01_CORR_WIDTH                            (5)
#define RF_CW287_SRX2_2G_FL_IOFFSET_STG01_CORR_MASK                             (0x0000001F)

#define RF_CW288_SRX2_TDD_FL_TRXSW_EN_LSB                                       (19)
#define RF_CW288_SRX2_TDD_FL_TRXSW_EN_WIDTH                                     (1)
#define RF_CW288_SRX2_TDD_FL_TRXSW_EN_MASK                                      (0x00080000)
#define RF_CW288_SRX2_TDD_FL_TRXSW_EN_BIT                                       (0x00080000)

#define RF_CW288_SRX2_TDD_FL_FCAL_EN_LSB                                        (18)
#define RF_CW288_SRX2_TDD_FL_FCAL_EN_WIDTH                                      (1)
#define RF_CW288_SRX2_TDD_FL_FCAL_EN_MASK                                       (0x00040000)
#define RF_CW288_SRX2_TDD_FL_FCAL_EN_BIT                                        (0x00040000)

#define RF_CW288_SRX2_TDD_FL_R2_STG3_LSB                                        (12)
#define RF_CW288_SRX2_TDD_FL_R2_STG3_WIDTH                                      (6)
#define RF_CW288_SRX2_TDD_FL_R2_STG3_MASK                                       (0x0003F000)

#define RF_CW288_SRX2_TDD_FL_R2_STG2_LSB                                        (6)
#define RF_CW288_SRX2_TDD_FL_R2_STG2_WIDTH                                      (6)
#define RF_CW288_SRX2_TDD_FL_R2_STG2_MASK                                       (0x00000FC0)

#define RF_CW288_SRX2_TDD_FL_R2_STG01_LSB                                       (0)
#define RF_CW288_SRX2_TDD_FL_R2_STG01_WIDTH                                     (6)
#define RF_CW288_SRX2_TDD_FL_R2_STG01_MASK                                      (0x0000003F)

#define RF_CW289_SRX2_2G_FL_FCAL_EN_LSB                                         (18)
#define RF_CW289_SRX2_2G_FL_FCAL_EN_WIDTH                                       (1)
#define RF_CW289_SRX2_2G_FL_FCAL_EN_MASK                                        (0x00040000)
#define RF_CW289_SRX2_2G_FL_FCAL_EN_BIT                                         (0x00040000)

#define RF_CW289_SRX2_VCO2_PCS_FL_R2_STG3_LSB                                   (12)
#define RF_CW289_SRX2_VCO2_PCS_FL_R2_STG3_WIDTH                                 (6)
#define RF_CW289_SRX2_VCO2_PCS_FL_R2_STG3_MASK                                  (0x0003F000)

#define RF_CW289_SRX2_VCO2_PCS_FL_R2_STG2_LSB                                   (6)
#define RF_CW289_SRX2_VCO2_PCS_FL_R2_STG2_WIDTH                                 (6)
#define RF_CW289_SRX2_VCO2_PCS_FL_R2_STG2_MASK                                  (0x00000FC0)

#define RF_CW289_SRX2_VCO2_PCS_FL_R2_STG01_LSB                                  (0)
#define RF_CW289_SRX2_VCO2_PCS_FL_R2_STG01_WIDTH                                (6)
#define RF_CW289_SRX2_VCO2_PCS_FL_R2_STG01_MASK                                 (0x0000003F)

#define RF_CW290_SRX2_LF_R3_M_LSB                                               (19)
#define RF_CW290_SRX2_LF_R3_M_WIDTH                                             (1)
#define RF_CW290_SRX2_LF_R3_M_MASK                                              (0x00080000)
#define RF_CW290_SRX2_LF_R3_M_BIT                                               (0x00080000)

#define RF_CW290_SRX2_LF_R3_LOW_LSB                                             (18)
#define RF_CW290_SRX2_LF_R3_LOW_WIDTH                                           (1)
#define RF_CW290_SRX2_LF_R3_LOW_MASK                                            (0x00040000)
#define RF_CW290_SRX2_LF_R3_LOW_BIT                                             (0x00040000)

#define RF_CW290_SRX2_VCO2_DCS_FL_R2_STG3_LSB                                   (12)
#define RF_CW290_SRX2_VCO2_DCS_FL_R2_STG3_WIDTH                                 (6)
#define RF_CW290_SRX2_VCO2_DCS_FL_R2_STG3_MASK                                  (0x0003F000)

#define RF_CW290_SRX2_VCO2_DCS_FL_R2_STG2_LSB                                   (6)
#define RF_CW290_SRX2_VCO2_DCS_FL_R2_STG2_WIDTH                                 (6)
#define RF_CW290_SRX2_VCO2_DCS_FL_R2_STG2_MASK                                  (0x00000FC0)

#define RF_CW290_SRX2_VCO2_DCS_FL_R2_STG01_LSB                                  (0)
#define RF_CW290_SRX2_VCO2_DCS_FL_R2_STG01_WIDTH                                (6)
#define RF_CW290_SRX2_VCO2_DCS_FL_R2_STG01_MASK                                 (0x0000003F)

#define RF_CW291_SRX2_VCO2_GSM900_FL_R2_STG3_LSB                                (12)
#define RF_CW291_SRX2_VCO2_GSM900_FL_R2_STG3_WIDTH                              (6)
#define RF_CW291_SRX2_VCO2_GSM900_FL_R2_STG3_MASK                               (0x0003F000)

#define RF_CW291_SRX2_VCO2_GSM900_FL_R2_STG2_LSB                                (6)
#define RF_CW291_SRX2_VCO2_GSM900_FL_R2_STG2_WIDTH                              (6)
#define RF_CW291_SRX2_VCO2_GSM900_FL_R2_STG2_MASK                               (0x00000FC0)

#define RF_CW291_SRX2_VCO2_GSM900_FL_R2_STG01_LSB                               (0)
#define RF_CW291_SRX2_VCO2_GSM900_FL_R2_STG01_WIDTH                             (6)
#define RF_CW291_SRX2_VCO2_GSM900_FL_R2_STG01_MASK                              (0x0000003F)

#define RF_CW292_SRX2_VCO2_GSM850_FL_R2_STG3_LSB                                (12)
#define RF_CW292_SRX2_VCO2_GSM850_FL_R2_STG3_WIDTH                              (6)
#define RF_CW292_SRX2_VCO2_GSM850_FL_R2_STG3_MASK                               (0x0003F000)

#define RF_CW292_SRX2_VCO2_GSM850_FL_R2_STG2_LSB                                (6)
#define RF_CW292_SRX2_VCO2_GSM850_FL_R2_STG2_WIDTH                              (6)
#define RF_CW292_SRX2_VCO2_GSM850_FL_R2_STG2_MASK                               (0x00000FC0)

#define RF_CW292_SRX2_VCO2_GSM850_FL_R2_STG01_LSB                               (0)
#define RF_CW292_SRX2_VCO2_GSM850_FL_R2_STG01_WIDTH                             (6)
#define RF_CW292_SRX2_VCO2_GSM850_FL_R2_STG01_MASK                              (0x0000003F)

#define RF_CW293_SRX2_VCO32_PCS_FL_R2_STG3_LSB                                  (12)
#define RF_CW293_SRX2_VCO32_PCS_FL_R2_STG3_WIDTH                                (6)
#define RF_CW293_SRX2_VCO32_PCS_FL_R2_STG3_MASK                                 (0x0003F000)

#define RF_CW293_SRX2_VCO32_PCS_FL_R2_STG2_LSB                                  (6)
#define RF_CW293_SRX2_VCO32_PCS_FL_R2_STG2_WIDTH                                (6)
#define RF_CW293_SRX2_VCO32_PCS_FL_R2_STG2_MASK                                 (0x00000FC0)

#define RF_CW293_SRX2_VCO32_PCS_FL_R2_STG01_LSB                                 (0)
#define RF_CW293_SRX2_VCO32_PCS_FL_R2_STG01_WIDTH                               (6)
#define RF_CW293_SRX2_VCO32_PCS_FL_R2_STG01_MASK                                (0x0000003F)

#define RF_CW294_SRX2_VCO32_DCS_FL_R2_STG3_LSB                                  (12)
#define RF_CW294_SRX2_VCO32_DCS_FL_R2_STG3_WIDTH                                (6)
#define RF_CW294_SRX2_VCO32_DCS_FL_R2_STG3_MASK                                 (0x0003F000)

#define RF_CW294_SRX2_VCO32_DCS_FL_R2_STG2_LSB                                  (6)
#define RF_CW294_SRX2_VCO32_DCS_FL_R2_STG2_WIDTH                                (6)
#define RF_CW294_SRX2_VCO32_DCS_FL_R2_STG2_MASK                                 (0x00000FC0)

#define RF_CW294_SRX2_VCO32_DCS_FL_R2_STG01_LSB                                 (0)
#define RF_CW294_SRX2_VCO32_DCS_FL_R2_STG01_WIDTH                               (6)
#define RF_CW294_SRX2_VCO32_DCS_FL_R2_STG01_MASK                                (0x0000003F)

#define RF_CW295_SRX2_VCO32_GSM900_FL_R2_STG3_LSB                               (12)
#define RF_CW295_SRX2_VCO32_GSM900_FL_R2_STG3_WIDTH                             (6)
#define RF_CW295_SRX2_VCO32_GSM900_FL_R2_STG3_MASK                              (0x0003F000)

#define RF_CW295_SRX2_VCO32_GSM900_FL_R2_STG2_LSB                               (6)
#define RF_CW295_SRX2_VCO32_GSM900_FL_R2_STG2_WIDTH                             (6)
#define RF_CW295_SRX2_VCO32_GSM900_FL_R2_STG2_MASK                              (0x00000FC0)

#define RF_CW295_SRX2_VCO32_GSM900_FL_R2_STG01_LSB                              (0)
#define RF_CW295_SRX2_VCO32_GSM900_FL_R2_STG01_WIDTH                            (6)
#define RF_CW295_SRX2_VCO32_GSM900_FL_R2_STG01_MASK                             (0x0000003F)

#define RF_CW296_SRX2_VCO32_GSM850_FL_R2_STG3_LSB                               (12)
#define RF_CW296_SRX2_VCO32_GSM850_FL_R2_STG3_WIDTH                             (6)
#define RF_CW296_SRX2_VCO32_GSM850_FL_R2_STG3_MASK                              (0x0003F000)

#define RF_CW296_SRX2_VCO32_GSM850_FL_R2_STG2_LSB                               (6)
#define RF_CW296_SRX2_VCO32_GSM850_FL_R2_STG2_WIDTH                             (6)
#define RF_CW296_SRX2_VCO32_GSM850_FL_R2_STG2_MASK                              (0x00000FC0)

#define RF_CW296_SRX2_VCO32_GSM850_FL_R2_STG01_LSB                              (0)
#define RF_CW296_SRX2_VCO32_GSM850_FL_R2_STG01_WIDTH                            (6)
#define RF_CW296_SRX2_VCO32_GSM850_FL_R2_STG01_MASK                             (0x0000003F)

#define RF_CW297_SRX2_TSENSOR_M_LSB                                             (19)
#define RF_CW297_SRX2_TSENSOR_M_WIDTH                                           (1)
#define RF_CW297_SRX2_TSENSOR_M_MASK                                            (0x00080000)
#define RF_CW297_SRX2_TSENSOR_M_BIT                                             (0x00080000)

#define RF_CW297_SRX2_TSENSOR_LSB                                               (15)
#define RF_CW297_SRX2_TSENSOR_WIDTH                                             (4)
#define RF_CW297_SRX2_TSENSOR_MASK                                              (0x00078000)

#define RF_CW297_SRX2_CALR_CONST_FINAL_TCL_M_LSB                                (14)
#define RF_CW297_SRX2_CALR_CONST_FINAL_TCL_M_WIDTH                              (1)
#define RF_CW297_SRX2_CALR_CONST_FINAL_TCL_M_MASK                               (0x00004000)
#define RF_CW297_SRX2_CALR_CONST_FINAL_TCL_M_BIT                                (0x00004000)

#define RF_CW297_SRX2_CALR_CONST_FINAL_TCL_LSB                                  (11)
#define RF_CW297_SRX2_CALR_CONST_FINAL_TCL_WIDTH                                (3)
#define RF_CW297_SRX2_CALR_CONST_FINAL_TCL_MASK                                 (0x00003800)

#define RF_CW297_SRX2_ACAL_TEMP_STEP_LSB                                        (4)
#define RF_CW297_SRX2_ACAL_TEMP_STEP_WIDTH                                      (7)
#define RF_CW297_SRX2_ACAL_TEMP_STEP_MASK                                       (0x000007F0)

#define RF_CW297_SRX2_ACAL_TEMP_CENTER_LSB                                      (0)
#define RF_CW297_SRX2_ACAL_TEMP_CENTER_WIDTH                                    (4)
#define RF_CW297_SRX2_ACAL_TEMP_CENTER_MASK                                     (0x0000000F)

#define RF_CW298_SRX2_VCO2_SOURCE_TNK5_LSB                                      (15)
#define RF_CW298_SRX2_VCO2_SOURCE_TNK5_WIDTH                                    (3)
#define RF_CW298_SRX2_VCO2_SOURCE_TNK5_MASK                                     (0x00038000)

#define RF_CW298_SRX2_VCO2_SOURCE_TNK4_LSB                                      (12)
#define RF_CW298_SRX2_VCO2_SOURCE_TNK4_WIDTH                                    (3)
#define RF_CW298_SRX2_VCO2_SOURCE_TNK4_MASK                                     (0x00007000)

#define RF_CW298_SRX2_VCO2_SOURCE_TNK3_LSB                                      (9)
#define RF_CW298_SRX2_VCO2_SOURCE_TNK3_WIDTH                                    (3)
#define RF_CW298_SRX2_VCO2_SOURCE_TNK3_MASK                                     (0x00000E00)

#define RF_CW298_SRX2_VCO2_SOURCE_TNK2_LSB                                      (6)
#define RF_CW298_SRX2_VCO2_SOURCE_TNK2_WIDTH                                    (3)
#define RF_CW298_SRX2_VCO2_SOURCE_TNK2_MASK                                     (0x000001C0)

#define RF_CW298_SRX2_VCO2_SOURCE_TNK1_LSB                                      (3)
#define RF_CW298_SRX2_VCO2_SOURCE_TNK1_WIDTH                                    (3)
#define RF_CW298_SRX2_VCO2_SOURCE_TNK1_MASK                                     (0x00000038)

#define RF_CW298_SRX2_VCO2_SOURCE_TNK0_LSB                                      (0)
#define RF_CW298_SRX2_VCO2_SOURCE_TNK0_WIDTH                                    (3)
#define RF_CW298_SRX2_VCO2_SOURCE_TNK0_MASK                                     (0x00000007)

#define RF_CW299_SRX2_VCO32_SOURCE_TNK7_LSB                                     (15)
#define RF_CW299_SRX2_VCO32_SOURCE_TNK7_WIDTH                                   (3)
#define RF_CW299_SRX2_VCO32_SOURCE_TNK7_MASK                                    (0x00038000)

#define RF_CW299_SRX2_VCO32_SOURCE_TNK6_LSB                                     (12)
#define RF_CW299_SRX2_VCO32_SOURCE_TNK6_WIDTH                                   (3)
#define RF_CW299_SRX2_VCO32_SOURCE_TNK6_MASK                                    (0x00007000)

#define RF_CW299_SRX2_VCO2_SOURCE_TNK8_LSB                                      (6)
#define RF_CW299_SRX2_VCO2_SOURCE_TNK8_WIDTH                                    (3)
#define RF_CW299_SRX2_VCO2_SOURCE_TNK8_MASK                                     (0x000001C0)

#define RF_CW299_SRX2_VCO2_SOURCE_TNK7_LSB                                      (3)
#define RF_CW299_SRX2_VCO2_SOURCE_TNK7_WIDTH                                    (3)
#define RF_CW299_SRX2_VCO2_SOURCE_TNK7_MASK                                     (0x00000038)

#define RF_CW299_SRX2_VCO2_SOURCE_TNK6_LSB                                      (0)
#define RF_CW299_SRX2_VCO2_SOURCE_TNK6_WIDTH                                    (3)
#define RF_CW299_SRX2_VCO2_SOURCE_TNK6_MASK                                     (0x00000007)

#define RF_CW300_SRX2_VCO32_SOURCE_TNK5_LSB                                     (15)
#define RF_CW300_SRX2_VCO32_SOURCE_TNK5_WIDTH                                   (3)
#define RF_CW300_SRX2_VCO32_SOURCE_TNK5_MASK                                    (0x00038000)

#define RF_CW300_SRX2_VCO32_SOURCE_TNK4_LSB                                     (12)
#define RF_CW300_SRX2_VCO32_SOURCE_TNK4_WIDTH                                   (3)
#define RF_CW300_SRX2_VCO32_SOURCE_TNK4_MASK                                    (0x00007000)

#define RF_CW300_SRX2_VCO32_SOURCE_TNK3_LSB                                     (9)
#define RF_CW300_SRX2_VCO32_SOURCE_TNK3_WIDTH                                   (3)
#define RF_CW300_SRX2_VCO32_SOURCE_TNK3_MASK                                    (0x00000E00)

#define RF_CW300_SRX2_VCO32_SOURCE_TNK2_LSB                                     (6)
#define RF_CW300_SRX2_VCO32_SOURCE_TNK2_WIDTH                                   (3)
#define RF_CW300_SRX2_VCO32_SOURCE_TNK2_MASK                                    (0x000001C0)

#define RF_CW300_SRX2_VCO32_SOURCE_TNK1_LSB                                     (3)
#define RF_CW300_SRX2_VCO32_SOURCE_TNK1_WIDTH                                   (3)
#define RF_CW300_SRX2_VCO32_SOURCE_TNK1_MASK                                    (0x00000038)

#define RF_CW300_SRX2_VCO32_SOURCE_TNK0_LSB                                     (0)
#define RF_CW300_SRX2_VCO32_SOURCE_TNK0_WIDTH                                   (3)
#define RF_CW300_SRX2_VCO32_SOURCE_TNK0_MASK                                    (0x00000007)

#define RF_CW301_xo_cal_ref_ck_dbg_en_LSB                                       (17)
#define RF_CW301_xo_cal_ref_ck_dbg_en_WIDTH                                     (1)
#define RF_CW301_xo_cal_ref_ck_dbg_en_MASK                                      (0x00020000)
#define RF_CW301_xo_cal_ref_ck_dbg_en_BIT                                       (0x00020000)

#define RF_CW301_srx_dynctl_pwr_aware_en_LSB                                    (16)
#define RF_CW301_srx_dynctl_pwr_aware_en_WIDTH                                  (1)
#define RF_CW301_srx_dynctl_pwr_aware_en_MASK                                   (0x00010000)
#define RF_CW301_srx_dynctl_pwr_aware_en_BIT                                    (0x00010000)

#define RF_CW301_srx1_cal_pwr_aware_en_LSB                                      (15)
#define RF_CW301_srx1_cal_pwr_aware_en_WIDTH                                    (1)
#define RF_CW301_srx1_cal_pwr_aware_en_MASK                                     (0x00008000)
#define RF_CW301_srx1_cal_pwr_aware_en_BIT                                      (0x00008000)

#define RF_CW301_srx1_fl_pwr_aware_en_LSB                                       (14)
#define RF_CW301_srx1_fl_pwr_aware_en_WIDTH                                     (1)
#define RF_CW301_srx1_fl_pwr_aware_en_MASK                                      (0x00004000)
#define RF_CW301_srx1_fl_pwr_aware_en_BIT                                       (0x00004000)

#define RF_CW301_srx2_cal_pwr_aware_en_LSB                                      (13)
#define RF_CW301_srx2_cal_pwr_aware_en_WIDTH                                    (1)
#define RF_CW301_srx2_cal_pwr_aware_en_MASK                                     (0x00002000)
#define RF_CW301_srx2_cal_pwr_aware_en_BIT                                      (0x00002000)

#define RF_CW301_srx2_fl_pwr_aware_en_LSB                                       (12)
#define RF_CW301_srx2_fl_pwr_aware_en_WIDTH                                     (1)
#define RF_CW301_srx2_fl_pwr_aware_en_MASK                                      (0x00001000)
#define RF_CW301_srx2_fl_pwr_aware_en_BIT                                       (0x00001000)

#define RF_CW301_SRX2_LDO_CAL_EN_LSB                                            (11)
#define RF_CW301_SRX2_LDO_CAL_EN_WIDTH                                          (1)
#define RF_CW301_SRX2_LDO_CAL_EN_MASK                                           (0x00000800)
#define RF_CW301_SRX2_LDO_CAL_EN_BIT                                            (0x00000800)

#define RF_CW301_SRX2_DC_TPT_EN_LSB                                             (10)
#define RF_CW301_SRX2_DC_TPT_EN_WIDTH                                           (1)
#define RF_CW301_SRX2_DC_TPT_EN_MASK                                            (0x00000400)
#define RF_CW301_SRX2_DC_TPT_EN_BIT                                             (0x00000400)

#define RF_CW301_SRX2_TPT_GRP_LSB                                               (7)
#define RF_CW301_SRX2_TPT_GRP_WIDTH                                             (3)
#define RF_CW301_SRX2_TPT_GRP_MASK                                              (0x00000380)

#define RF_CW301_SRX2_TPT_REG_LSB                                               (4)
#define RF_CW301_SRX2_TPT_REG_WIDTH                                             (3)
#define RF_CW301_SRX2_TPT_REG_MASK                                              (0x00000070)

#define RF_CW301_SRX2_VTUNE_FCAL_EN_LSB                                         (1)
#define RF_CW301_SRX2_VTUNE_FCAL_EN_WIDTH                                       (1)
#define RF_CW301_SRX2_VTUNE_FCAL_EN_MASK                                        (0x00000002)
#define RF_CW301_SRX2_VTUNE_FCAL_EN_BIT                                         (0x00000002)

#define RF_CW301_SRX2_VCO_MON_EN_LSB                                            (0)
#define RF_CW301_SRX2_VCO_MON_EN_WIDTH                                          (1)
#define RF_CW301_SRX2_VCO_MON_EN_MASK                                           (0x00000001)
#define RF_CW301_SRX2_VCO_MON_EN_BIT                                            (0x00000001)

#define RF_320_RX_PATH1_IIP2C_RESERVE_LSB                                       (18)
#define RF_320_RX_PATH1_IIP2C_RESERVE_WIDTH                                     (2)
#define RF_320_RX_PATH1_IIP2C_RESERVE_MASK                                      (0x000C0000)

#define RF_320_RX_PATH1_IIP2C_TXLB_LSB                                          (17)
#define RF_320_RX_PATH1_IIP2C_TXLB_WIDTH                                        (1)
#define RF_320_RX_PATH1_IIP2C_TXLB_MASK                                         (0x00020000)
#define RF_320_RX_PATH1_IIP2C_TXLB_BIT                                          (0x00020000)

#define RF_320_RX_PATH1_IIP2C_TXMB_LSB                                          (16)
#define RF_320_RX_PATH1_IIP2C_TXMB_WIDTH                                        (1)
#define RF_320_RX_PATH1_IIP2C_TXMB_MASK                                         (0x00010000)
#define RF_320_RX_PATH1_IIP2C_TXMB_BIT                                          (0x00010000)

#define RF_320_RX_PATH1_IIP2C_TXHB_LSB                                          (15)
#define RF_320_RX_PATH1_IIP2C_TXHB_WIDTH                                        (1)
#define RF_320_RX_PATH1_IIP2C_TXHB_MASK                                         (0x00008000)
#define RF_320_RX_PATH1_IIP2C_TXHB_BIT                                          (0x00008000)

#define RF_320_RX_PATH1_IIP2C_TXBUFFER_ON_LSB                                   (14)
#define RF_320_RX_PATH1_IIP2C_TXBUFFER_ON_WIDTH                                 (1)
#define RF_320_RX_PATH1_IIP2C_TXBUFFER_ON_MASK                                  (0x00004000)
#define RF_320_RX_PATH1_IIP2C_TXBUFFER_ON_BIT                                   (0x00004000)

#define RF_320_RX_PATH1_IIP2C_RXBUFFER_ON_LSB                                   (13)
#define RF_320_RX_PATH1_IIP2C_RXBUFFER_ON_WIDTH                                 (1)
#define RF_320_RX_PATH1_IIP2C_RXBUFFER_ON_MASK                                  (0x00002000)
#define RF_320_RX_PATH1_IIP2C_RXBUFFER_ON_BIT                                   (0x00002000)

#define RF_320_RX_PATH1_BIAS_OFF_LSB                                            (12)
#define RF_320_RX_PATH1_BIAS_OFF_WIDTH                                          (1)
#define RF_320_RX_PATH1_BIAS_OFF_MASK                                           (0x00001000)
#define RF_320_RX_PATH1_BIAS_OFF_BIT                                            (0x00001000)

#define RF_320_RX_PATH1_LDO_OUT_BB_OFF_LSB                                      (11)
#define RF_320_RX_PATH1_LDO_OUT_BB_OFF_WIDTH                                    (1)
#define RF_320_RX_PATH1_LDO_OUT_BB_OFF_MASK                                     (0x00000800)
#define RF_320_RX_PATH1_LDO_OUT_BB_OFF_BIT                                      (0x00000800)

#define RF_320_RX_PATH1_LDO_CORE_BB_OFF_LSB                                     (10)
#define RF_320_RX_PATH1_LDO_CORE_BB_OFF_WIDTH                                   (1)
#define RF_320_RX_PATH1_LDO_CORE_BB_OFF_MASK                                    (0x00000400)
#define RF_320_RX_PATH1_LDO_CORE_BB_OFF_BIT                                     (0x00000400)

#define RF_320_RX_PATH1_LDO_OUT_LO_OFF_LSB                                      (9)
#define RF_320_RX_PATH1_LDO_OUT_LO_OFF_WIDTH                                    (1)
#define RF_320_RX_PATH1_LDO_OUT_LO_OFF_MASK                                     (0x00000200)
#define RF_320_RX_PATH1_LDO_OUT_LO_OFF_BIT                                      (0x00000200)

#define RF_320_RX_PATH1_LDO_CORE_LO_OFF_LSB                                     (8)
#define RF_320_RX_PATH1_LDO_CORE_LO_OFF_WIDTH                                   (1)
#define RF_320_RX_PATH1_LDO_CORE_LO_OFF_MASK                                    (0x00000100)
#define RF_320_RX_PATH1_LDO_CORE_LO_OFF_BIT                                     (0x00000100)

#define RF_320_RX_PATH1_LDO1_OUT_LNA_OFF_LSB                                    (7)
#define RF_320_RX_PATH1_LDO1_OUT_LNA_OFF_WIDTH                                  (1)
#define RF_320_RX_PATH1_LDO1_OUT_LNA_OFF_MASK                                   (0x00000080)
#define RF_320_RX_PATH1_LDO1_OUT_LNA_OFF_BIT                                    (0x00000080)

#define RF_320_RX_PATH1_LDO1_CORE_LNA_OFF_LSB                                   (6)
#define RF_320_RX_PATH1_LDO1_CORE_LNA_OFF_WIDTH                                 (1)
#define RF_320_RX_PATH1_LDO1_CORE_LNA_OFF_MASK                                  (0x00000040)
#define RF_320_RX_PATH1_LDO1_CORE_LNA_OFF_BIT                                   (0x00000040)

#define RF_320_RX_PATH1_LO_PDIV_OFF_LSB                                         (5)
#define RF_320_RX_PATH1_LO_PDIV_OFF_WIDTH                                       (1)
#define RF_320_RX_PATH1_LO_PDIV_OFF_MASK                                        (0x00000020)
#define RF_320_RX_PATH1_LO_PDIV_OFF_BIT                                         (0x00000020)

#define RF_320_RX_PATH1_LO_IQ_OFF_LSB                                           (4)
#define RF_320_RX_PATH1_LO_IQ_OFF_WIDTH                                         (1)
#define RF_320_RX_PATH1_LO_IQ_OFF_MASK                                          (0x00000010)
#define RF_320_RX_PATH1_LO_IQ_OFF_BIT                                           (0x00000010)

#define RF_320_RX_PATH1_BB_OFF_LSB                                              (3)
#define RF_320_RX_PATH1_BB_OFF_WIDTH                                            (1)
#define RF_320_RX_PATH1_BB_OFF_MASK                                             (0x00000008)
#define RF_320_RX_PATH1_BB_OFF_BIT                                              (0x00000008)

#define RF_320_RX_PATH1_TIA_OFF_LSB                                             (2)
#define RF_320_RX_PATH1_TIA_OFF_WIDTH                                           (1)
#define RF_320_RX_PATH1_TIA_OFF_MASK                                            (0x00000004)
#define RF_320_RX_PATH1_TIA_OFF_BIT                                             (0x00000004)

#define RF_320_RX_PATH1_MIXER_OFF_LSB                                           (1)
#define RF_320_RX_PATH1_MIXER_OFF_WIDTH                                         (1)
#define RF_320_RX_PATH1_MIXER_OFF_MASK                                          (0x00000002)
#define RF_320_RX_PATH1_MIXER_OFF_BIT                                           (0x00000002)

#define RF_320_RX_PATH1_LNA_OFF_LSB                                             (0)
#define RF_320_RX_PATH1_LNA_OFF_WIDTH                                           (1)
#define RF_320_RX_PATH1_LNA_OFF_MASK                                            (0x00000001)
#define RF_320_RX_PATH1_LNA_OFF_BIT                                             (0x00000001)

#define RF_321_RXD_PATH1_BIAS_OFF_LSB                                           (12)
#define RF_321_RXD_PATH1_BIAS_OFF_WIDTH                                         (1)
#define RF_321_RXD_PATH1_BIAS_OFF_MASK                                          (0x00001000)
#define RF_321_RXD_PATH1_BIAS_OFF_BIT                                           (0x00001000)

#define RF_321_RXD_PATH1_LDO_OUT_BB_OFF_LSB                                     (11)
#define RF_321_RXD_PATH1_LDO_OUT_BB_OFF_WIDTH                                   (1)
#define RF_321_RXD_PATH1_LDO_OUT_BB_OFF_MASK                                    (0x00000800)
#define RF_321_RXD_PATH1_LDO_OUT_BB_OFF_BIT                                     (0x00000800)

#define RF_321_RXD_PATH1_LDO_CORE_BB_OFF_LSB                                    (10)
#define RF_321_RXD_PATH1_LDO_CORE_BB_OFF_WIDTH                                  (1)
#define RF_321_RXD_PATH1_LDO_CORE_BB_OFF_MASK                                   (0x00000400)
#define RF_321_RXD_PATH1_LDO_CORE_BB_OFF_BIT                                    (0x00000400)

#define RF_321_RXD_PATH1_LDO_OUT_LO_OFF_LSB                                     (9)
#define RF_321_RXD_PATH1_LDO_OUT_LO_OFF_WIDTH                                   (1)
#define RF_321_RXD_PATH1_LDO_OUT_LO_OFF_MASK                                    (0x00000200)
#define RF_321_RXD_PATH1_LDO_OUT_LO_OFF_BIT                                     (0x00000200)

#define RF_321_RXD_PATH1_LDO_CORE_LO_OFF_LSB                                    (8)
#define RF_321_RXD_PATH1_LDO_CORE_LO_OFF_WIDTH                                  (1)
#define RF_321_RXD_PATH1_LDO_CORE_LO_OFF_MASK                                   (0x00000100)
#define RF_321_RXD_PATH1_LDO_CORE_LO_OFF_BIT                                    (0x00000100)

#define RF_321_RXD_PATH1_LDO_OUT_LNA_OFF_LSB                                    (7)
#define RF_321_RXD_PATH1_LDO_OUT_LNA_OFF_WIDTH                                  (1)
#define RF_321_RXD_PATH1_LDO_OUT_LNA_OFF_MASK                                   (0x00000080)
#define RF_321_RXD_PATH1_LDO_OUT_LNA_OFF_BIT                                    (0x00000080)

#define RF_321_RXD_PATH1_LDO1_CORE_LNA_OFF_LSB                                  (6)
#define RF_321_RXD_PATH1_LDO1_CORE_LNA_OFF_WIDTH                                (1)
#define RF_321_RXD_PATH1_LDO1_CORE_LNA_OFF_MASK                                 (0x00000040)
#define RF_321_RXD_PATH1_LDO1_CORE_LNA_OFF_BIT                                  (0x00000040)

#define RF_321_RXD_PATH1_LO_PDIV_OFF_LSB                                        (5)
#define RF_321_RXD_PATH1_LO_PDIV_OFF_WIDTH                                      (1)
#define RF_321_RXD_PATH1_LO_PDIV_OFF_MASK                                       (0x00000020)
#define RF_321_RXD_PATH1_LO_PDIV_OFF_BIT                                        (0x00000020)

#define RF_321_RXD_PATH1_LO_IQ_OFF_LSB                                          (4)
#define RF_321_RXD_PATH1_LO_IQ_OFF_WIDTH                                        (1)
#define RF_321_RXD_PATH1_LO_IQ_OFF_MASK                                         (0x00000010)
#define RF_321_RXD_PATH1_LO_IQ_OFF_BIT                                          (0x00000010)

#define RF_321_RXD_PATH1_BB_OFF_LSB                                             (3)
#define RF_321_RXD_PATH1_BB_OFF_WIDTH                                           (1)
#define RF_321_RXD_PATH1_BB_OFF_MASK                                            (0x00000008)
#define RF_321_RXD_PATH1_BB_OFF_BIT                                             (0x00000008)

#define RF_321_RXD_PATH1_TIA_OFF_LSB                                            (2)
#define RF_321_RXD_PATH1_TIA_OFF_WIDTH                                          (1)
#define RF_321_RXD_PATH1_TIA_OFF_MASK                                           (0x00000004)
#define RF_321_RXD_PATH1_TIA_OFF_BIT                                            (0x00000004)

#define RF_321_RXD_PATH1_MIXER_OFF_LSB                                          (1)
#define RF_321_RXD_PATH1_MIXER_OFF_WIDTH                                        (1)
#define RF_321_RXD_PATH1_MIXER_OFF_MASK                                         (0x00000002)
#define RF_321_RXD_PATH1_MIXER_OFF_BIT                                          (0x00000002)

#define RF_321_RXD_PATH1_LNA_OFF_LSB                                            (0)
#define RF_321_RXD_PATH1_LNA_OFF_WIDTH                                          (1)
#define RF_321_RXD_PATH1_LNA_OFF_MASK                                           (0x00000001)
#define RF_321_RXD_PATH1_LNA_OFF_BIT                                            (0x00000001)

#define RF_322_RX_PATH1_2G_IRRC_ON_LSB                                          (19)
#define RF_322_RX_PATH1_2G_IRRC_ON_WIDTH                                        (1)
#define RF_322_RX_PATH1_2G_IRRC_ON_MASK                                         (0x00080000)
#define RF_322_RX_PATH1_2G_IRRC_ON_BIT                                          (0x00080000)

#define RF_322_RX_PATH1_LNA_CUR_CTL_LSB                                         (16)
#define RF_322_RX_PATH1_LNA_CUR_CTL_WIDTH                                       (3)
#define RF_322_RX_PATH1_LNA_CUR_CTL_MASK                                        (0x00070000)

#define RF_322_RX_PATH1_LNA_BAND_SEL_LSB                                        (13)
#define RF_322_RX_PATH1_LNA_BAND_SEL_WIDTH                                      (3)
#define RF_322_RX_PATH1_LNA_BAND_SEL_MASK                                       (0x0000E000)

#define RF_322_RX_PATH1_MIXER_LB_LSB                                            (12)
#define RF_322_RX_PATH1_MIXER_LB_WIDTH                                          (1)
#define RF_322_RX_PATH1_MIXER_LB_MASK                                           (0x00001000)
#define RF_322_RX_PATH1_MIXER_LB_BIT                                            (0x00001000)

#define RF_322_RX_PATH1_MIXER_HB_LSB                                            (11)
#define RF_322_RX_PATH1_MIXER_HB_WIDTH                                          (1)
#define RF_322_RX_PATH1_MIXER_HB_MASK                                           (0x00000800)
#define RF_322_RX_PATH1_MIXER_HB_BIT                                            (0x00000800)

#define RF_322_RX_PATH1_LNA_SELECTION_LSB                                       (5)
#define RF_322_RX_PATH1_LNA_SELECTION_WIDTH                                     (6)
#define RF_322_RX_PATH1_LNA_SELECTION_MASK                                      (0x000007E0)

#define RF_322_RX_PATH1_NCCA_EN_LSB                                             (4)
#define RF_322_RX_PATH1_NCCA_EN_WIDTH                                           (1)
#define RF_322_RX_PATH1_NCCA_EN_MASK                                            (0x00000010)
#define RF_322_RX_PATH1_NCCA_EN_BIT                                             (0x00000010)

#define RF_322_RX_PATH1_G4_SELECTION_LSB                                        (3)
#define RF_322_RX_PATH1_G4_SELECTION_WIDTH                                      (1)
#define RF_322_RX_PATH1_G4_SELECTION_MASK                                       (0x00000008)
#define RF_322_RX_PATH1_G4_SELECTION_BIT                                        (0x00000008)

#define RF_322_RX_PATH1_G3_SELECTION_LSB                                        (2)
#define RF_322_RX_PATH1_G3_SELECTION_WIDTH                                      (1)
#define RF_322_RX_PATH1_G3_SELECTION_MASK                                       (0x00000004)
#define RF_322_RX_PATH1_G3_SELECTION_BIT                                        (0x00000004)

#define RF_322_RX_PATH1_G2_SELECTION_LSB                                        (1)
#define RF_322_RX_PATH1_G2_SELECTION_WIDTH                                      (1)
#define RF_322_RX_PATH1_G2_SELECTION_MASK                                       (0x00000002)
#define RF_322_RX_PATH1_G2_SELECTION_BIT                                        (0x00000002)

#define RF_322_RX_PATH1_G1_SELECTION_LSB                                        (0)
#define RF_322_RX_PATH1_G1_SELECTION_WIDTH                                      (1)
#define RF_322_RX_PATH1_G1_SELECTION_MASK                                       (0x00000001)
#define RF_322_RX_PATH1_G1_SELECTION_BIT                                        (0x00000001)

#define RF_323_RX_PATH1_RESERVE_1_LSB                                           (0)
#define RF_323_RX_PATH1_RESERVE_1_WIDTH                                         (20)
#define RF_323_RX_PATH1_RESERVE_1_MASK                                          (0x000FFFFF)

#define RF_324_RXD_PATH1_2G_IRRC_ON_LSB                                         (19)
#define RF_324_RXD_PATH1_2G_IRRC_ON_WIDTH                                       (1)
#define RF_324_RXD_PATH1_2G_IRRC_ON_MASK                                        (0x00080000)
#define RF_324_RXD_PATH1_2G_IRRC_ON_BIT                                         (0x00080000)

#define RF_324_RXD_PATH1_LNA_CUR_CTL_LSB                                        (16)
#define RF_324_RXD_PATH1_LNA_CUR_CTL_WIDTH                                      (3)
#define RF_324_RXD_PATH1_LNA_CUR_CTL_MASK                                       (0x00070000)

#define RF_324_RXD_PATH1_LNA_BAND_SEL_LSB                                       (13)
#define RF_324_RXD_PATH1_LNA_BAND_SEL_WIDTH                                     (3)
#define RF_324_RXD_PATH1_LNA_BAND_SEL_MASK                                      (0x0000E000)

#define RF_324_RXD_PATH1_MIXER_LB_LSB                                           (12)
#define RF_324_RXD_PATH1_MIXER_LB_WIDTH                                         (1)
#define RF_324_RXD_PATH1_MIXER_LB_MASK                                          (0x00001000)
#define RF_324_RXD_PATH1_MIXER_LB_BIT                                           (0x00001000)

#define RF_324_RXD_PATH1_MIXER_HB_LSB                                           (11)
#define RF_324_RXD_PATH1_MIXER_HB_WIDTH                                         (1)
#define RF_324_RXD_PATH1_MIXER_HB_MASK                                          (0x00000800)
#define RF_324_RXD_PATH1_MIXER_HB_BIT                                           (0x00000800)

#define RF_324_RXD_PATH1_LNA_SELECTION_LSB                                      (5)
#define RF_324_RXD_PATH1_LNA_SELECTION_WIDTH                                    (6)
#define RF_324_RXD_PATH1_LNA_SELECTION_MASK                                     (0x000007E0)

#define RF_324_RXD_PATH1_NCCA_EN_LSB                                            (4)
#define RF_324_RXD_PATH1_NCCA_EN_WIDTH                                          (1)
#define RF_324_RXD_PATH1_NCCA_EN_MASK                                           (0x00000010)
#define RF_324_RXD_PATH1_NCCA_EN_BIT                                            (0x00000010)

#define RF_324_RXD_PATH1_G4_SELECTION_LSB                                       (3)
#define RF_324_RXD_PATH1_G4_SELECTION_WIDTH                                     (1)
#define RF_324_RXD_PATH1_G4_SELECTION_MASK                                      (0x00000008)
#define RF_324_RXD_PATH1_G4_SELECTION_BIT                                       (0x00000008)

#define RF_324_RXD_PATH1_G3_SELECTION_LSB                                       (2)
#define RF_324_RXD_PATH1_G3_SELECTION_WIDTH                                     (1)
#define RF_324_RXD_PATH1_G3_SELECTION_MASK                                      (0x00000004)
#define RF_324_RXD_PATH1_G3_SELECTION_BIT                                       (0x00000004)

#define RF_324_RXD_PATH1_G2_SELECTION_LSB                                       (1)
#define RF_324_RXD_PATH1_G2_SELECTION_WIDTH                                     (1)
#define RF_324_RXD_PATH1_G2_SELECTION_MASK                                      (0x00000002)
#define RF_324_RXD_PATH1_G2_SELECTION_BIT                                       (0x00000002)

#define RF_324_RXD_PATH1_G1_SELECTION_LSB                                       (0)
#define RF_324_RXD_PATH1_G1_SELECTION_WIDTH                                     (1)
#define RF_324_RXD_PATH1_G1_SELECTION_MASK                                      (0x00000001)
#define RF_324_RXD_PATH1_G1_SELECTION_BIT                                       (0x00000001)

#define RF_325_RXD_PATH1_RESERVE_1_LSB                                          (0)
#define RF_325_RXD_PATH1_RESERVE_1_WIDTH                                        (20)
#define RF_325_RXD_PATH1_RESERVE_1_MASK                                         (0x000FFFFF)

#define RF_326_RXRXD_LO1_PDIV_OFF_TDDTX_LSB                                     (17)
#define RF_326_RXRXD_LO1_PDIV_OFF_TDDTX_WIDTH                                   (1)
#define RF_326_RXRXD_LO1_PDIV_OFF_TDDTX_MASK                                    (0x00020000)
#define RF_326_RXRXD_LO1_PDIV_OFF_TDDTX_BIT                                     (0x00020000)

#define RF_326_RXRXD_GAIN_SYNC_PATH1_LSB                                        (16)
#define RF_326_RXRXD_GAIN_SYNC_PATH1_WIDTH                                      (1)
#define RF_326_RXRXD_GAIN_SYNC_PATH1_MASK                                       (0x00010000)
#define RF_326_RXRXD_GAIN_SYNC_PATH1_BIT                                        (0x00010000)

#define RF_326_RG_RXDIF1_STG2_BS_LSB                                            (15)
#define RF_326_RG_RXDIF1_STG2_BS_WIDTH                                          (1)
#define RF_326_RG_RXDIF1_STG2_BS_MASK                                           (0x00008000)
#define RF_326_RG_RXDIF1_STG2_BS_BIT                                            (0x00008000)

#define RF_326_RG_RXIF1_STG2_BS_LSB                                             (14)
#define RF_326_RG_RXIF1_STG2_BS_WIDTH                                           (1)
#define RF_326_RG_RXIF1_STG2_BS_MASK                                            (0x00004000)
#define RF_326_RG_RXIF1_STG2_BS_BIT                                             (0x00004000)

#define RF_326_RG_RXDIF1_MODE_LSB                                               (10)
#define RF_326_RG_RXDIF1_MODE_WIDTH                                             (4)
#define RF_326_RG_RXDIF1_MODE_MASK                                              (0x00003C00)

#define RF_326_RG_RXIF1_MODE_LSB                                                (6)
#define RF_326_RG_RXIF1_MODE_WIDTH                                              (4)
#define RF_326_RG_RXIF1_MODE_MASK                                               (0x000003C0)

#define RF_326_RXD_PATH1_TIA_BW_LSB                                             (3)
#define RF_326_RXD_PATH1_TIA_BW_WIDTH                                           (3)
#define RF_326_RXD_PATH1_TIA_BW_MASK                                            (0x00000038)

#define RF_326_RX_PATH1_TIA_BW_LSB                                              (0)
#define RF_326_RX_PATH1_TIA_BW_WIDTH                                            (3)
#define RF_326_RX_PATH1_TIA_BW_MASK                                             (0x00000007)

#define RF_327_RX_PATH2_IIP2C_RESERVE_LSB                                       (18)
#define RF_327_RX_PATH2_IIP2C_RESERVE_WIDTH                                     (2)
#define RF_327_RX_PATH2_IIP2C_RESERVE_MASK                                      (0x000C0000)

#define RF_327_RX_PATH2_IIP2C_TXLB_LSB                                          (17)
#define RF_327_RX_PATH2_IIP2C_TXLB_WIDTH                                        (1)
#define RF_327_RX_PATH2_IIP2C_TXLB_MASK                                         (0x00020000)
#define RF_327_RX_PATH2_IIP2C_TXLB_BIT                                          (0x00020000)

#define RF_327_RX_PATH2_IIP2C_TXMB_LSB                                          (16)
#define RF_327_RX_PATH2_IIP2C_TXMB_WIDTH                                        (1)
#define RF_327_RX_PATH2_IIP2C_TXMB_MASK                                         (0x00010000)
#define RF_327_RX_PATH2_IIP2C_TXMB_BIT                                          (0x00010000)

#define RF_327_RX_PATH2_IIP2C_TXHB_LSB                                          (15)
#define RF_327_RX_PATH2_IIP2C_TXHB_WIDTH                                        (1)
#define RF_327_RX_PATH2_IIP2C_TXHB_MASK                                         (0x00008000)
#define RF_327_RX_PATH2_IIP2C_TXHB_BIT                                          (0x00008000)

#define RF_327_RX_PATH2_IIP2C_TXBUFFER_ON_LSB                                   (14)
#define RF_327_RX_PATH2_IIP2C_TXBUFFER_ON_WIDTH                                 (1)
#define RF_327_RX_PATH2_IIP2C_TXBUFFER_ON_MASK                                  (0x00004000)
#define RF_327_RX_PATH2_IIP2C_TXBUFFER_ON_BIT                                   (0x00004000)

#define RF_327_RX_PATH2_IIP2C_RXBUFFER_ON_LSB                                   (13)
#define RF_327_RX_PATH2_IIP2C_RXBUFFER_ON_WIDTH                                 (1)
#define RF_327_RX_PATH2_IIP2C_RXBUFFER_ON_MASK                                  (0x00002000)
#define RF_327_RX_PATH2_IIP2C_RXBUFFER_ON_BIT                                   (0x00002000)

#define RF_327_RX_PATH2_BIAS_OFF_LSB                                            (12)
#define RF_327_RX_PATH2_BIAS_OFF_WIDTH                                          (1)
#define RF_327_RX_PATH2_BIAS_OFF_MASK                                           (0x00001000)
#define RF_327_RX_PATH2_BIAS_OFF_BIT                                            (0x00001000)

#define RF_327_RX_PATH2_LDO_OUT_BB_OFF_LSB                                      (11)
#define RF_327_RX_PATH2_LDO_OUT_BB_OFF_WIDTH                                    (1)
#define RF_327_RX_PATH2_LDO_OUT_BB_OFF_MASK                                     (0x00000800)
#define RF_327_RX_PATH2_LDO_OUT_BB_OFF_BIT                                      (0x00000800)

#define RF_327_RX_PATH2_LDO_CORE_BB_OFF_LSB                                     (10)
#define RF_327_RX_PATH2_LDO_CORE_BB_OFF_WIDTH                                   (1)
#define RF_327_RX_PATH2_LDO_CORE_BB_OFF_MASK                                    (0x00000400)
#define RF_327_RX_PATH2_LDO_CORE_BB_OFF_BIT                                     (0x00000400)

#define RF_327_RX_PATH2_LDO_OUT_LO_OFF_LSB                                      (9)
#define RF_327_RX_PATH2_LDO_OUT_LO_OFF_WIDTH                                    (1)
#define RF_327_RX_PATH2_LDO_OUT_LO_OFF_MASK                                     (0x00000200)
#define RF_327_RX_PATH2_LDO_OUT_LO_OFF_BIT                                      (0x00000200)

#define RF_327_RX_PATH2_LDO_CORE_LO_OFF_LSB                                     (8)
#define RF_327_RX_PATH2_LDO_CORE_LO_OFF_WIDTH                                   (1)
#define RF_327_RX_PATH2_LDO_CORE_LO_OFF_MASK                                    (0x00000100)
#define RF_327_RX_PATH2_LDO_CORE_LO_OFF_BIT                                     (0x00000100)

#define RF_327_RX_PATH2_LDO2_OUT_LNA_OFF_LSB                                    (7)
#define RF_327_RX_PATH2_LDO2_OUT_LNA_OFF_WIDTH                                  (1)
#define RF_327_RX_PATH2_LDO2_OUT_LNA_OFF_MASK                                   (0x00000080)
#define RF_327_RX_PATH2_LDO2_OUT_LNA_OFF_BIT                                    (0x00000080)

#define RF_327_RX_PATH2_LDO2_CORE_LNA_OFF_LSB                                   (6)
#define RF_327_RX_PATH2_LDO2_CORE_LNA_OFF_WIDTH                                 (1)
#define RF_327_RX_PATH2_LDO2_CORE_LNA_OFF_MASK                                  (0x00000040)
#define RF_327_RX_PATH2_LDO2_CORE_LNA_OFF_BIT                                   (0x00000040)

#define RF_327_RX_PATH2_LO_PDIV_OFF_LSB                                         (5)
#define RF_327_RX_PATH2_LO_PDIV_OFF_WIDTH                                       (1)
#define RF_327_RX_PATH2_LO_PDIV_OFF_MASK                                        (0x00000020)
#define RF_327_RX_PATH2_LO_PDIV_OFF_BIT                                         (0x00000020)

#define RF_327_RX_PATH2_LO_IQ_OFF_LSB                                           (4)
#define RF_327_RX_PATH2_LO_IQ_OFF_WIDTH                                         (1)
#define RF_327_RX_PATH2_LO_IQ_OFF_MASK                                          (0x00000010)
#define RF_327_RX_PATH2_LO_IQ_OFF_BIT                                           (0x00000010)

#define RF_327_RX_PATH2_BB_OFF_LSB                                              (3)
#define RF_327_RX_PATH2_BB_OFF_WIDTH                                            (1)
#define RF_327_RX_PATH2_BB_OFF_MASK                                             (0x00000008)
#define RF_327_RX_PATH2_BB_OFF_BIT                                              (0x00000008)

#define RF_327_RX_PATH2_TIA_OFF_LSB                                             (2)
#define RF_327_RX_PATH2_TIA_OFF_WIDTH                                           (1)
#define RF_327_RX_PATH2_TIA_OFF_MASK                                            (0x00000004)
#define RF_327_RX_PATH2_TIA_OFF_BIT                                             (0x00000004)

#define RF_327_RX_PATH2_MIXER_OFF_LSB                                           (1)
#define RF_327_RX_PATH2_MIXER_OFF_WIDTH                                         (1)
#define RF_327_RX_PATH2_MIXER_OFF_MASK                                          (0x00000002)
#define RF_327_RX_PATH2_MIXER_OFF_BIT                                           (0x00000002)

#define RF_327_RX_PATH2_LNA_OFF_LSB                                             (0)
#define RF_327_RX_PATH2_LNA_OFF_WIDTH                                           (1)
#define RF_327_RX_PATH2_LNA_OFF_MASK                                            (0x00000001)
#define RF_327_RX_PATH2_LNA_OFF_BIT                                             (0x00000001)

#define RF_328_RXD_PATH2_BIAS_OFF_LSB                                           (12)
#define RF_328_RXD_PATH2_BIAS_OFF_WIDTH                                         (1)
#define RF_328_RXD_PATH2_BIAS_OFF_MASK                                          (0x00001000)
#define RF_328_RXD_PATH2_BIAS_OFF_BIT                                           (0x00001000)

#define RF_328_RXD_PATH2_LDO_OUT_BB_OFF_LSB                                     (11)
#define RF_328_RXD_PATH2_LDO_OUT_BB_OFF_WIDTH                                   (1)
#define RF_328_RXD_PATH2_LDO_OUT_BB_OFF_MASK                                    (0x00000800)
#define RF_328_RXD_PATH2_LDO_OUT_BB_OFF_BIT                                     (0x00000800)

#define RF_328_RXD_PATH2_LDO_CORE_BB_OFF_LSB                                    (10)
#define RF_328_RXD_PATH2_LDO_CORE_BB_OFF_WIDTH                                  (1)
#define RF_328_RXD_PATH2_LDO_CORE_BB_OFF_MASK                                   (0x00000400)
#define RF_328_RXD_PATH2_LDO_CORE_BB_OFF_BIT                                    (0x00000400)

#define RF_328_RXD_PATH2_LDO_OUT_LO_OFF_LSB                                     (9)
#define RF_328_RXD_PATH2_LDO_OUT_LO_OFF_WIDTH                                   (1)
#define RF_328_RXD_PATH2_LDO_OUT_LO_OFF_MASK                                    (0x00000200)
#define RF_328_RXD_PATH2_LDO_OUT_LO_OFF_BIT                                     (0x00000200)

#define RF_328_RXD_PATH2_LDO_CORE_LO_OFF_LSB                                    (8)
#define RF_328_RXD_PATH2_LDO_CORE_LO_OFF_WIDTH                                  (1)
#define RF_328_RXD_PATH2_LDO_CORE_LO_OFF_MASK                                   (0x00000100)
#define RF_328_RXD_PATH2_LDO_CORE_LO_OFF_BIT                                    (0x00000100)

#define RF_328_RXD_PATH2_LDO_OUT_LNA_OFF_LSB                                    (7)
#define RF_328_RXD_PATH2_LDO_OUT_LNA_OFF_WIDTH                                  (1)
#define RF_328_RXD_PATH2_LDO_OUT_LNA_OFF_MASK                                   (0x00000080)
#define RF_328_RXD_PATH2_LDO_OUT_LNA_OFF_BIT                                    (0x00000080)

#define RF_328_RXD_PATH2_LDO2_CORE_LNA_OFF_LSB                                  (6)
#define RF_328_RXD_PATH2_LDO2_CORE_LNA_OFF_WIDTH                                (1)
#define RF_328_RXD_PATH2_LDO2_CORE_LNA_OFF_MASK                                 (0x00000040)
#define RF_328_RXD_PATH2_LDO2_CORE_LNA_OFF_BIT                                  (0x00000040)

#define RF_328_RXD_PATH2_LO_PDIV_OFF_LSB                                        (5)
#define RF_328_RXD_PATH2_LO_PDIV_OFF_WIDTH                                      (1)
#define RF_328_RXD_PATH2_LO_PDIV_OFF_MASK                                       (0x00000020)
#define RF_328_RXD_PATH2_LO_PDIV_OFF_BIT                                        (0x00000020)

#define RF_328_RXD_PATH2_LO_IQ_OFF_LSB                                          (4)
#define RF_328_RXD_PATH2_LO_IQ_OFF_WIDTH                                        (1)
#define RF_328_RXD_PATH2_LO_IQ_OFF_MASK                                         (0x00000010)
#define RF_328_RXD_PATH2_LO_IQ_OFF_BIT                                          (0x00000010)

#define RF_328_RXD_PATH2_BB_OFF_LSB                                             (3)
#define RF_328_RXD_PATH2_BB_OFF_WIDTH                                           (1)
#define RF_328_RXD_PATH2_BB_OFF_MASK                                            (0x00000008)
#define RF_328_RXD_PATH2_BB_OFF_BIT                                             (0x00000008)

#define RF_328_RXD_PATH2_TIA_OFF_LSB                                            (2)
#define RF_328_RXD_PATH2_TIA_OFF_WIDTH                                          (1)
#define RF_328_RXD_PATH2_TIA_OFF_MASK                                           (0x00000004)
#define RF_328_RXD_PATH2_TIA_OFF_BIT                                            (0x00000004)

#define RF_328_RXD_PATH2_MIXER_OFF_LSB                                          (1)
#define RF_328_RXD_PATH2_MIXER_OFF_WIDTH                                        (1)
#define RF_328_RXD_PATH2_MIXER_OFF_MASK                                         (0x00000002)
#define RF_328_RXD_PATH2_MIXER_OFF_BIT                                          (0x00000002)

#define RF_328_RXD_PATH2_LNA_OFF_LSB                                            (0)
#define RF_328_RXD_PATH2_LNA_OFF_WIDTH                                          (1)
#define RF_328_RXD_PATH2_LNA_OFF_MASK                                           (0x00000001)
#define RF_328_RXD_PATH2_LNA_OFF_BIT                                            (0x00000001)

#define RF_329_RX_PATH2_2G_IRRC_ON_LSB                                          (19)
#define RF_329_RX_PATH2_2G_IRRC_ON_WIDTH                                        (1)
#define RF_329_RX_PATH2_2G_IRRC_ON_MASK                                         (0x00080000)
#define RF_329_RX_PATH2_2G_IRRC_ON_BIT                                          (0x00080000)

#define RF_329_RX_PATH2_LNA_CUR_CTL_LSB                                         (16)
#define RF_329_RX_PATH2_LNA_CUR_CTL_WIDTH                                       (3)
#define RF_329_RX_PATH2_LNA_CUR_CTL_MASK                                        (0x00070000)

#define RF_329_RX_PATH2_LNA_BAND_SEL_LSB                                        (13)
#define RF_329_RX_PATH2_LNA_BAND_SEL_WIDTH                                      (3)
#define RF_329_RX_PATH2_LNA_BAND_SEL_MASK                                       (0x0000E000)

#define RF_329_RX_PATH2_MIXER_LB_LSB                                            (12)
#define RF_329_RX_PATH2_MIXER_LB_WIDTH                                          (1)
#define RF_329_RX_PATH2_MIXER_LB_MASK                                           (0x00001000)
#define RF_329_RX_PATH2_MIXER_LB_BIT                                            (0x00001000)

#define RF_329_RX_PATH2_MIXER_HB_LSB                                            (11)
#define RF_329_RX_PATH2_MIXER_HB_WIDTH                                          (1)
#define RF_329_RX_PATH2_MIXER_HB_MASK                                           (0x00000800)
#define RF_329_RX_PATH2_MIXER_HB_BIT                                            (0x00000800)

#define RF_329_RX_PATH2_LNA_SELECTION_LSB                                       (5)
#define RF_329_RX_PATH2_LNA_SELECTION_WIDTH                                     (6)
#define RF_329_RX_PATH2_LNA_SELECTION_MASK                                      (0x000007E0)

#define RF_329_RX_PATH2_NCCA_EN_LSB                                             (4)
#define RF_329_RX_PATH2_NCCA_EN_WIDTH                                           (1)
#define RF_329_RX_PATH2_NCCA_EN_MASK                                            (0x00000010)
#define RF_329_RX_PATH2_NCCA_EN_BIT                                             (0x00000010)

#define RF_329_RX_PATH2_G4_SELECTION_LSB                                        (3)
#define RF_329_RX_PATH2_G4_SELECTION_WIDTH                                      (1)
#define RF_329_RX_PATH2_G4_SELECTION_MASK                                       (0x00000008)
#define RF_329_RX_PATH2_G4_SELECTION_BIT                                        (0x00000008)

#define RF_329_RX_PATH2_G3_SELECTION_LSB                                        (2)
#define RF_329_RX_PATH2_G3_SELECTION_WIDTH                                      (1)
#define RF_329_RX_PATH2_G3_SELECTION_MASK                                       (0x00000004)
#define RF_329_RX_PATH2_G3_SELECTION_BIT                                        (0x00000004)

#define RF_329_RX_PATH2_G2_SELECTION_LSB                                        (1)
#define RF_329_RX_PATH2_G2_SELECTION_WIDTH                                      (1)
#define RF_329_RX_PATH2_G2_SELECTION_MASK                                       (0x00000002)
#define RF_329_RX_PATH2_G2_SELECTION_BIT                                        (0x00000002)

#define RF_329_RX_PATH2_G1_SELECTION_LSB                                        (0)
#define RF_329_RX_PATH2_G1_SELECTION_WIDTH                                      (1)
#define RF_329_RX_PATH2_G1_SELECTION_MASK                                       (0x00000001)
#define RF_329_RX_PATH2_G1_SELECTION_BIT                                        (0x00000001)

#define RF_330_RX_PATH2_RESERVE_1_LSB                                           (0)
#define RF_330_RX_PATH2_RESERVE_1_WIDTH                                         (20)
#define RF_330_RX_PATH2_RESERVE_1_MASK                                          (0x000FFFFF)

#define RF_331_RXD_PATH2_2G_IRRC_ON_LSB                                         (19)
#define RF_331_RXD_PATH2_2G_IRRC_ON_WIDTH                                       (1)
#define RF_331_RXD_PATH2_2G_IRRC_ON_MASK                                        (0x00080000)
#define RF_331_RXD_PATH2_2G_IRRC_ON_BIT                                         (0x00080000)

#define RF_331_RXD_PATH2_LNA_CUR_CTL_LSB                                        (16)
#define RF_331_RXD_PATH2_LNA_CUR_CTL_WIDTH                                      (3)
#define RF_331_RXD_PATH2_LNA_CUR_CTL_MASK                                       (0x00070000)

#define RF_331_RXD_PATH2_LNA_BAND_SEL_LSB                                       (13)
#define RF_331_RXD_PATH2_LNA_BAND_SEL_WIDTH                                     (3)
#define RF_331_RXD_PATH2_LNA_BAND_SEL_MASK                                      (0x0000E000)

#define RF_331_RXD_PATH2_MIXER_LB_LSB                                           (12)
#define RF_331_RXD_PATH2_MIXER_LB_WIDTH                                         (1)
#define RF_331_RXD_PATH2_MIXER_LB_MASK                                          (0x00001000)
#define RF_331_RXD_PATH2_MIXER_LB_BIT                                           (0x00001000)

#define RF_331_RXD_PATH2_MIXER_HB_LSB                                           (11)
#define RF_331_RXD_PATH2_MIXER_HB_WIDTH                                         (1)
#define RF_331_RXD_PATH2_MIXER_HB_MASK                                          (0x00000800)
#define RF_331_RXD_PATH2_MIXER_HB_BIT                                           (0x00000800)

#define RF_331_RXD_PATH2_LNA_SELECTION_LSB                                      (5)
#define RF_331_RXD_PATH2_LNA_SELECTION_WIDTH                                    (6)
#define RF_331_RXD_PATH2_LNA_SELECTION_MASK                                     (0x000007E0)

#define RF_331_RXD_PATH2_NCCA_EN_LSB                                            (4)
#define RF_331_RXD_PATH2_NCCA_EN_WIDTH                                          (1)
#define RF_331_RXD_PATH2_NCCA_EN_MASK                                           (0x00000010)
#define RF_331_RXD_PATH2_NCCA_EN_BIT                                            (0x00000010)

#define RF_331_RXD_PATH2_G4_SELECTION_LSB                                       (3)
#define RF_331_RXD_PATH2_G4_SELECTION_WIDTH                                     (1)
#define RF_331_RXD_PATH2_G4_SELECTION_MASK                                      (0x00000008)
#define RF_331_RXD_PATH2_G4_SELECTION_BIT                                       (0x00000008)

#define RF_331_RXD_PATH2_G3_SELECTION_LSB                                       (2)
#define RF_331_RXD_PATH2_G3_SELECTION_WIDTH                                     (1)
#define RF_331_RXD_PATH2_G3_SELECTION_MASK                                      (0x00000004)
#define RF_331_RXD_PATH2_G3_SELECTION_BIT                                       (0x00000004)

#define RF_331_RXD_PATH2_G2_SELECTION_LSB                                       (1)
#define RF_331_RXD_PATH2_G2_SELECTION_WIDTH                                     (1)
#define RF_331_RXD_PATH2_G2_SELECTION_MASK                                      (0x00000002)
#define RF_331_RXD_PATH2_G2_SELECTION_BIT                                       (0x00000002)

#define RF_331_RXD_PATH2_G1_SELECTION_LSB                                       (0)
#define RF_331_RXD_PATH2_G1_SELECTION_WIDTH                                     (1)
#define RF_331_RXD_PATH2_G1_SELECTION_MASK                                      (0x00000001)
#define RF_331_RXD_PATH2_G1_SELECTION_BIT                                       (0x00000001)

#define RF_332_RXD_PATH2_RESERVE_1_LSB                                          (0)
#define RF_332_RXD_PATH2_RESERVE_1_WIDTH                                        (20)
#define RF_332_RXD_PATH2_RESERVE_1_MASK                                         (0x000FFFFF)

#define RF_333_RXRXD_LO2_PDIV_OFF_TDDTX_LSB                                     (17)
#define RF_333_RXRXD_LO2_PDIV_OFF_TDDTX_WIDTH                                   (1)
#define RF_333_RXRXD_LO2_PDIV_OFF_TDDTX_MASK                                    (0x00020000)
#define RF_333_RXRXD_LO2_PDIV_OFF_TDDTX_BIT                                     (0x00020000)

#define RF_333_RXRXD_GAIN_SYNC_PATH2_LSB                                        (16)
#define RF_333_RXRXD_GAIN_SYNC_PATH2_WIDTH                                      (1)
#define RF_333_RXRXD_GAIN_SYNC_PATH2_MASK                                       (0x00010000)
#define RF_333_RXRXD_GAIN_SYNC_PATH2_BIT                                        (0x00010000)

#define RF_333_RG_RXDIF2_STG2_BS_LSB                                            (15)
#define RF_333_RG_RXDIF2_STG2_BS_WIDTH                                          (1)
#define RF_333_RG_RXDIF2_STG2_BS_MASK                                           (0x00008000)
#define RF_333_RG_RXDIF2_STG2_BS_BIT                                            (0x00008000)

#define RF_333_RG_RXIF2_STG2_BS_LSB                                             (14)
#define RF_333_RG_RXIF2_STG2_BS_WIDTH                                           (1)
#define RF_333_RG_RXIF2_STG2_BS_MASK                                            (0x00004000)
#define RF_333_RG_RXIF2_STG2_BS_BIT                                             (0x00004000)

#define RF_333_RG_RXDIF2_MODE_LSB                                               (10)
#define RF_333_RG_RXDIF2_MODE_WIDTH                                             (4)
#define RF_333_RG_RXDIF2_MODE_MASK                                              (0x00003C00)

#define RF_333_RG_RXIF2_MODE_LSB                                                (6)
#define RF_333_RG_RXIF2_MODE_WIDTH                                              (4)
#define RF_333_RG_RXIF2_MODE_MASK                                               (0x000003C0)

#define RF_333_RXD_PATH2_TIA_BW_LSB                                             (3)
#define RF_333_RXD_PATH2_TIA_BW_WIDTH                                           (3)
#define RF_333_RXD_PATH2_TIA_BW_MASK                                            (0x00000038)

#define RF_333_RX_PATH2_TIA_BW_LSB                                              (0)
#define RF_333_RX_PATH2_TIA_BW_WIDTH                                            (3)
#define RF_333_RX_PATH2_TIA_BW_MASK                                             (0x00000007)

#define RF_334_RX_BIAS_MIXER1_IIP2C_EN_LSB                                      (10)
#define RF_334_RX_BIAS_MIXER1_IIP2C_EN_WIDTH                                    (1)
#define RF_334_RX_BIAS_MIXER1_IIP2C_EN_MASK                                     (0x00000400)
#define RF_334_RX_BIAS_MIXER1_IIP2C_EN_BIT                                      (0x00000400)

#define RF_334_RXIF1_GAIN_LSB                                                   (6)
#define RF_334_RXIF1_GAIN_WIDTH                                                 (4)
#define RF_334_RXIF1_GAIN_MASK                                                  (0x000003C0)

#define RF_334_RX_TIA1_GAIN_CONTROL_LSB                                         (3)
#define RF_334_RX_TIA1_GAIN_CONTROL_WIDTH                                       (3)
#define RF_334_RX_TIA1_GAIN_CONTROL_MASK                                        (0x00000038)

#define RF_334_RX_LNA_GAIN_PATH1_LSB                                            (0)
#define RF_334_RX_LNA_GAIN_PATH1_WIDTH                                          (3)
#define RF_334_RX_LNA_GAIN_PATH1_MASK                                           (0x00000007)

#define RF_335_RXIF1_DC_EST_I_LSB                                               (9)
#define RF_335_RXIF1_DC_EST_I_WIDTH                                             (6)
#define RF_335_RXIF1_DC_EST_I_MASK                                              (0x00007E00)

#define RF_335_RXIF1_DC_EST_Q_LSB                                               (3)
#define RF_335_RXIF1_DC_EST_Q_WIDTH                                             (6)
#define RF_335_RXIF1_DC_EST_Q_MASK                                              (0x000001F8)

#define RF_335_RG_RXIF1_POW_DCOC_LSB                                            (2)
#define RF_335_RG_RXIF1_POW_DCOC_WIDTH                                          (1)
#define RF_335_RG_RXIF1_POW_DCOC_MASK                                           (0x00000004)
#define RF_335_RG_RXIF1_POW_DCOC_BIT                                            (0x00000004)

#define RF_335_RXIF1_DCOC_MAN_LSB                                               (1)
#define RF_335_RXIF1_DCOC_MAN_WIDTH                                             (1)
#define RF_335_RXIF1_DCOC_MAN_MASK                                              (0x00000002)
#define RF_335_RXIF1_DCOC_MAN_BIT                                               (0x00000002)

#define RF_335_RXIF1_DAC_CODE_INV_LSB                                           (0)
#define RF_335_RXIF1_DAC_CODE_INV_WIDTH                                         (1)
#define RF_335_RXIF1_DAC_CODE_INV_MASK                                          (0x00000001)
#define RF_335_RXIF1_DAC_CODE_INV_BIT                                           (0x00000001)

#define RF_336_RXD_BIAS_MIXER1_IIP2C_EN_LSB                                     (10)
#define RF_336_RXD_BIAS_MIXER1_IIP2C_EN_WIDTH                                   (1)
#define RF_336_RXD_BIAS_MIXER1_IIP2C_EN_MASK                                    (0x00000400)
#define RF_336_RXD_BIAS_MIXER1_IIP2C_EN_BIT                                     (0x00000400)

#define RF_336_RXDIF1_GAIN_LSB                                                  (6)
#define RF_336_RXDIF1_GAIN_WIDTH                                                (4)
#define RF_336_RXDIF1_GAIN_MASK                                                 (0x000003C0)

#define RF_336_RXD_TIA1_GAIN_CONTROL_LSB                                        (3)
#define RF_336_RXD_TIA1_GAIN_CONTROL_WIDTH                                      (3)
#define RF_336_RXD_TIA1_GAIN_CONTROL_MASK                                       (0x00000038)

#define RF_336_RXD_LNA_GAIN_PATH1_LSB                                           (0)
#define RF_336_RXD_LNA_GAIN_PATH1_WIDTH                                         (3)
#define RF_336_RXD_LNA_GAIN_PATH1_MASK                                          (0x00000007)

#define RF_337_RXDIF1_DC_EST_I_LSB                                              (9)
#define RF_337_RXDIF1_DC_EST_I_WIDTH                                            (6)
#define RF_337_RXDIF1_DC_EST_I_MASK                                             (0x00007E00)

#define RF_337_RXDIF1_DC_EST_Q_LSB                                              (3)
#define RF_337_RXDIF1_DC_EST_Q_WIDTH                                            (6)
#define RF_337_RXDIF1_DC_EST_Q_MASK                                             (0x000001F8)

#define RF_337_RG_RXDIF1_POW_DCOC_LSB                                           (2)
#define RF_337_RG_RXDIF1_POW_DCOC_WIDTH                                         (1)
#define RF_337_RG_RXDIF1_POW_DCOC_MASK                                          (0x00000004)
#define RF_337_RG_RXDIF1_POW_DCOC_BIT                                           (0x00000004)

#define RF_337_RXDIF1_DCOC_MAN_LSB                                              (1)
#define RF_337_RXDIF1_DCOC_MAN_WIDTH                                            (1)
#define RF_337_RXDIF1_DCOC_MAN_MASK                                             (0x00000002)
#define RF_337_RXDIF1_DCOC_MAN_BIT                                              (0x00000002)

#define RF_337_RXDIF1_DAC_CODE_INV_LSB                                          (0)
#define RF_337_RXDIF1_DAC_CODE_INV_WIDTH                                        (1)
#define RF_337_RXDIF1_DAC_CODE_INV_MASK                                         (0x00000001)
#define RF_337_RXDIF1_DAC_CODE_INV_BIT                                          (0x00000001)

#define RF_338_RXRXD_GAIN_LATCH_PATH2_LSB                                       (19)
#define RF_338_RXRXD_GAIN_LATCH_PATH2_WIDTH                                     (1)
#define RF_338_RXRXD_GAIN_LATCH_PATH2_MASK                                      (0x00080000)
#define RF_338_RXRXD_GAIN_LATCH_PATH2_BIT                                       (0x00080000)

#define RF_338_RXRXD_GAIN_LATCH_PATH1_LSB                                       (18)
#define RF_338_RXRXD_GAIN_LATCH_PATH1_WIDTH                                     (1)
#define RF_338_RXRXD_GAIN_LATCH_PATH1_MASK                                      (0x00040000)
#define RF_338_RXRXD_GAIN_LATCH_PATH1_BIT                                       (0x00040000)

#define RF_339_RXD_PATH1_GAIN_DELAY_LSB                                         (10)
#define RF_339_RXD_PATH1_GAIN_DELAY_WIDTH                                       (10)
#define RF_339_RXD_PATH1_GAIN_DELAY_MASK                                        (0x000FFC00)

#define RF_339_RX_PATH1_GAIN_DELAY_LSB                                          (0)
#define RF_339_RX_PATH1_GAIN_DELAY_WIDTH                                        (10)
#define RF_339_RX_PATH1_GAIN_DELAY_MASK                                         (0x000003FF)

#define RF_340_RX_BIAS_MIXER2_IIP2C_EN_LSB                                      (10)
#define RF_340_RX_BIAS_MIXER2_IIP2C_EN_WIDTH                                    (1)
#define RF_340_RX_BIAS_MIXER2_IIP2C_EN_MASK                                     (0x00000400)
#define RF_340_RX_BIAS_MIXER2_IIP2C_EN_BIT                                      (0x00000400)

#define RF_340_RXIF2_GAIN_LSB                                                   (6)
#define RF_340_RXIF2_GAIN_WIDTH                                                 (4)
#define RF_340_RXIF2_GAIN_MASK                                                  (0x000003C0)

#define RF_340_RX_TIA2_GAIN_CONTROL_LSB                                         (3)
#define RF_340_RX_TIA2_GAIN_CONTROL_WIDTH                                       (3)
#define RF_340_RX_TIA2_GAIN_CONTROL_MASK                                        (0x00000038)

#define RF_340_RX_LNA_GAIN_PATH2_LSB                                            (0)
#define RF_340_RX_LNA_GAIN_PATH2_WIDTH                                          (3)
#define RF_340_RX_LNA_GAIN_PATH2_MASK                                           (0x00000007)

#define RF_341_RXIF2_DC_EST_I_LSB                                               (9)
#define RF_341_RXIF2_DC_EST_I_WIDTH                                             (6)
#define RF_341_RXIF2_DC_EST_I_MASK                                              (0x00007E00)

#define RF_341_RXIF2_DC_EST_Q_LSB                                               (3)
#define RF_341_RXIF2_DC_EST_Q_WIDTH                                             (6)
#define RF_341_RXIF2_DC_EST_Q_MASK                                              (0x000001F8)

#define RF_341_RG_RXIF2_POW_DCOC_LSB                                            (2)
#define RF_341_RG_RXIF2_POW_DCOC_WIDTH                                          (1)
#define RF_341_RG_RXIF2_POW_DCOC_MASK                                           (0x00000004)
#define RF_341_RG_RXIF2_POW_DCOC_BIT                                            (0x00000004)

#define RF_341_RXIF2_DCOC_MAN_LSB                                               (1)
#define RF_341_RXIF2_DCOC_MAN_WIDTH                                             (1)
#define RF_341_RXIF2_DCOC_MAN_MASK                                              (0x00000002)
#define RF_341_RXIF2_DCOC_MAN_BIT                                               (0x00000002)

#define RF_341_RXIF2_DAC_CODE_INV_LSB                                           (0)
#define RF_341_RXIF2_DAC_CODE_INV_WIDTH                                         (1)
#define RF_341_RXIF2_DAC_CODE_INV_MASK                                          (0x00000001)
#define RF_341_RXIF2_DAC_CODE_INV_BIT                                           (0x00000001)

#define RF_342_RXD_BIAS_MIXER2_IIP2C_EN_LSB                                     (10)
#define RF_342_RXD_BIAS_MIXER2_IIP2C_EN_WIDTH                                   (1)
#define RF_342_RXD_BIAS_MIXER2_IIP2C_EN_MASK                                    (0x00000400)
#define RF_342_RXD_BIAS_MIXER2_IIP2C_EN_BIT                                     (0x00000400)

#define RF_342_RXDIF2_GAIN_LSB                                                  (6)
#define RF_342_RXDIF2_GAIN_WIDTH                                                (4)
#define RF_342_RXDIF2_GAIN_MASK                                                 (0x000003C0)

#define RF_342_RXD_TIA2_GAIN_CONTROL_LSB                                        (3)
#define RF_342_RXD_TIA2_GAIN_CONTROL_WIDTH                                      (3)
#define RF_342_RXD_TIA2_GAIN_CONTROL_MASK                                       (0x00000038)

#define RF_342_RXD_LNA_GAIN_PATH2_LSB                                           (0)
#define RF_342_RXD_LNA_GAIN_PATH2_WIDTH                                         (3)
#define RF_342_RXD_LNA_GAIN_PATH2_MASK                                          (0x00000007)

#define RF_343_RXDIF2_DC_EST_I_LSB                                              (9)
#define RF_343_RXDIF2_DC_EST_I_WIDTH                                            (6)
#define RF_343_RXDIF2_DC_EST_I_MASK                                             (0x00007E00)

#define RF_343_RXDIF2_DC_EST_Q_LSB                                              (3)
#define RF_343_RXDIF2_DC_EST_Q_WIDTH                                            (6)
#define RF_343_RXDIF2_DC_EST_Q_MASK                                             (0x000001F8)

#define RF_343_RG_RXDIF2_POW_DCOC_LSB                                           (2)
#define RF_343_RG_RXDIF2_POW_DCOC_WIDTH                                         (1)
#define RF_343_RG_RXDIF2_POW_DCOC_MASK                                          (0x00000004)
#define RF_343_RG_RXDIF2_POW_DCOC_BIT                                           (0x00000004)

#define RF_343_RXDIF2_DCOC_MAN_LSB                                              (1)
#define RF_343_RXDIF2_DCOC_MAN_WIDTH                                            (1)
#define RF_343_RXDIF2_DCOC_MAN_MASK                                             (0x00000002)
#define RF_343_RXDIF2_DCOC_MAN_BIT                                              (0x00000002)

#define RF_343_RXDIF2_DAC_CODE_INV_LSB                                          (0)
#define RF_343_RXDIF2_DAC_CODE_INV_WIDTH                                        (1)
#define RF_343_RXDIF2_DAC_CODE_INV_MASK                                         (0x00000001)
#define RF_343_RXDIF2_DAC_CODE_INV_BIT                                          (0x00000001)

#define RF_344_RXDIF2_GAIN_MAN_LSB                                              (5)
#define RF_344_RXDIF2_GAIN_MAN_WIDTH                                            (1)
#define RF_344_RXDIF2_GAIN_MAN_MASK                                             (0x00000020)
#define RF_344_RXDIF2_GAIN_MAN_BIT                                              (0x00000020)

#define RF_344_RXIF2_GAIN_MAN_LSB                                               (4)
#define RF_344_RXIF2_GAIN_MAN_WIDTH                                             (1)
#define RF_344_RXIF2_GAIN_MAN_MASK                                              (0x00000010)
#define RF_344_RXIF2_GAIN_MAN_BIT                                               (0x00000010)

#define RF_344_RXRXD_GAIN_PATH2_MAN_LSB                                         (3)
#define RF_344_RXRXD_GAIN_PATH2_MAN_WIDTH                                       (1)
#define RF_344_RXRXD_GAIN_PATH2_MAN_MASK                                        (0x00000008)
#define RF_344_RXRXD_GAIN_PATH2_MAN_BIT                                         (0x00000008)

#define RF_344_RXDIF1_GAIN_MAN_LSB                                              (2)
#define RF_344_RXDIF1_GAIN_MAN_WIDTH                                            (1)
#define RF_344_RXDIF1_GAIN_MAN_MASK                                             (0x00000004)
#define RF_344_RXDIF1_GAIN_MAN_BIT                                              (0x00000004)

#define RF_344_RXIF1_GAIN_MAN_LSB                                               (1)
#define RF_344_RXIF1_GAIN_MAN_WIDTH                                             (1)
#define RF_344_RXIF1_GAIN_MAN_MASK                                              (0x00000002)
#define RF_344_RXIF1_GAIN_MAN_BIT                                               (0x00000002)

#define RF_344_RXRXD_GAIN_PATH1_MAN_LSB                                         (0)
#define RF_344_RXRXD_GAIN_PATH1_MAN_WIDTH                                       (1)
#define RF_344_RXRXD_GAIN_PATH1_MAN_MASK                                        (0x00000001)
#define RF_344_RXRXD_GAIN_PATH1_MAN_BIT                                         (0x00000001)

#define RF_345_RXD_PATH2_GAIN_DELAY_LSB                                         (10)
#define RF_345_RXD_PATH2_GAIN_DELAY_WIDTH                                       (10)
#define RF_345_RXD_PATH2_GAIN_DELAY_MASK                                        (0x000FFC00)

#define RF_345_RX_PATH2_GAIN_DELAY_LSB                                          (0)
#define RF_345_RX_PATH2_GAIN_DELAY_WIDTH                                        (10)
#define RF_345_RX_PATH2_GAIN_DELAY_MASK                                         (0x000003FF)

#define RF_349_RG_RXD_BIAS_MIXER1_IIP2C_Q_LSB                                   (7)
#define RF_349_RG_RXD_BIAS_MIXER1_IIP2C_Q_WIDTH                                 (7)
#define RF_349_RG_RXD_BIAS_MIXER1_IIP2C_Q_MASK                                  (0x00003F80)

#define RF_349_RG_RXD_BIAS_MIXER1_IIP2C_I_LSB                                   (0)
#define RF_349_RG_RXD_BIAS_MIXER1_IIP2C_I_WIDTH                                 (7)
#define RF_349_RG_RXD_BIAS_MIXER1_IIP2C_I_MASK                                  (0x0000007F)

#define RF_350_RG_RXD_BIAS_MIXER2_IIP2C_Q_LSB                                   (7)
#define RF_350_RG_RXD_BIAS_MIXER2_IIP2C_Q_WIDTH                                 (7)
#define RF_350_RG_RXD_BIAS_MIXER2_IIP2C_Q_MASK                                  (0x00003F80)

#define RF_350_RG_RXD_BIAS_MIXER2_IIP2C_I_LSB                                   (0)
#define RF_350_RG_RXD_BIAS_MIXER2_IIP2C_I_WIDTH                                 (7)
#define RF_350_RG_RXD_BIAS_MIXER2_IIP2C_I_MASK                                  (0x0000007F)

#define RF_353_RX_TIA1_BW_OFFSET_Q_LSB                                          (6)
#define RF_353_RX_TIA1_BW_OFFSET_Q_WIDTH                                        (5)
#define RF_353_RX_TIA1_BW_OFFSET_Q_MASK                                         (0x000007C0)

#define RF_353_RX_TIA1_BW_OFFSET_I_LSB                                          (1)
#define RF_353_RX_TIA1_BW_OFFSET_I_WIDTH                                        (5)
#define RF_353_RX_TIA1_BW_OFFSET_I_MASK                                         (0x0000003E)

#define RF_353_RX_TIA1_BW_CTRL_MAN_LSB                                          (0)
#define RF_353_RX_TIA1_BW_CTRL_MAN_WIDTH                                        (1)
#define RF_353_RX_TIA1_BW_CTRL_MAN_MASK                                         (0x00000001)
#define RF_353_RX_TIA1_BW_CTRL_MAN_BIT                                          (0x00000001)

#define RF_354_RX_TIA1_BW_CTRL1_I_M_LSB                                         (10)
#define RF_354_RX_TIA1_BW_CTRL1_I_M_WIDTH                                       (10)
#define RF_354_RX_TIA1_BW_CTRL1_I_M_MASK                                        (0x000FFC00)

#define RF_354_RX_TIA1_BW_CTRL0_I_M_LSB                                         (0)
#define RF_354_RX_TIA1_BW_CTRL0_I_M_WIDTH                                       (10)
#define RF_354_RX_TIA1_BW_CTRL0_I_M_MASK                                        (0x000003FF)

#define RF_355_RX_TIA1_BW_CTRL1_Q_M_LSB                                         (10)
#define RF_355_RX_TIA1_BW_CTRL1_Q_M_WIDTH                                       (10)
#define RF_355_RX_TIA1_BW_CTRL1_Q_M_MASK                                        (0x000FFC00)

#define RF_355_RX_TIA1_BW_CTRL0_Q_M_LSB                                         (0)
#define RF_355_RX_TIA1_BW_CTRL0_Q_M_WIDTH                                       (10)
#define RF_355_RX_TIA1_BW_CTRL0_Q_M_MASK                                        (0x000003FF)

#define RF_356_RXD_TIA1_BW_OFFSET_Q_LSB                                         (6)
#define RF_356_RXD_TIA1_BW_OFFSET_Q_WIDTH                                       (5)
#define RF_356_RXD_TIA1_BW_OFFSET_Q_MASK                                        (0x000007C0)

#define RF_356_RXD_TIA1_BW_OFFSET_I_LSB                                         (1)
#define RF_356_RXD_TIA1_BW_OFFSET_I_WIDTH                                       (5)
#define RF_356_RXD_TIA1_BW_OFFSET_I_MASK                                        (0x0000003E)

#define RF_356_RXD_TIA1_BW_CTRL_MAN_LSB                                         (0)
#define RF_356_RXD_TIA1_BW_CTRL_MAN_WIDTH                                       (1)
#define RF_356_RXD_TIA1_BW_CTRL_MAN_MASK                                        (0x00000001)
#define RF_356_RXD_TIA1_BW_CTRL_MAN_BIT                                         (0x00000001)

#define RF_357_RXD_TIA1_BW_CTRL1_I_M_LSB                                        (10)
#define RF_357_RXD_TIA1_BW_CTRL1_I_M_WIDTH                                      (10)
#define RF_357_RXD_TIA1_BW_CTRL1_I_M_MASK                                       (0x000FFC00)

#define RF_357_RXD_TIA1_BW_CTRL0_I_M_LSB                                        (0)
#define RF_357_RXD_TIA1_BW_CTRL0_I_M_WIDTH                                      (10)
#define RF_357_RXD_TIA1_BW_CTRL0_I_M_MASK                                       (0x000003FF)

#define RF_358_RXD_TIA1_BW_CTRL1_Q_M_LSB                                        (10)
#define RF_358_RXD_TIA1_BW_CTRL1_Q_M_WIDTH                                      (10)
#define RF_358_RXD_TIA1_BW_CTRL1_Q_M_MASK                                       (0x000FFC00)

#define RF_358_RXD_TIA1_BW_CTRL0_Q_M_LSB                                        (0)
#define RF_358_RXD_TIA1_BW_CTRL0_Q_M_WIDTH                                      (10)
#define RF_358_RXD_TIA1_BW_CTRL0_Q_M_MASK                                       (0x000003FF)

#define RF_359_RX_TIA2_BW_OFFSET_Q_LSB                                          (6)
#define RF_359_RX_TIA2_BW_OFFSET_Q_WIDTH                                        (5)
#define RF_359_RX_TIA2_BW_OFFSET_Q_MASK                                         (0x000007C0)

#define RF_359_RX_TIA2_BW_OFFSET_I_LSB                                          (1)
#define RF_359_RX_TIA2_BW_OFFSET_I_WIDTH                                        (5)
#define RF_359_RX_TIA2_BW_OFFSET_I_MASK                                         (0x0000003E)

#define RF_359_RX_TIA2_BW_CTRL_MAN_LSB                                          (0)
#define RF_359_RX_TIA2_BW_CTRL_MAN_WIDTH                                        (1)
#define RF_359_RX_TIA2_BW_CTRL_MAN_MASK                                         (0x00000001)
#define RF_359_RX_TIA2_BW_CTRL_MAN_BIT                                          (0x00000001)

#define RF_360_RX_TIA2_BW_CTRL1_I_M_LSB                                         (10)
#define RF_360_RX_TIA2_BW_CTRL1_I_M_WIDTH                                       (10)
#define RF_360_RX_TIA2_BW_CTRL1_I_M_MASK                                        (0x000FFC00)

#define RF_360_RX_TIA2_BW_CTRL0_I_M_LSB                                         (0)
#define RF_360_RX_TIA2_BW_CTRL0_I_M_WIDTH                                       (10)
#define RF_360_RX_TIA2_BW_CTRL0_I_M_MASK                                        (0x000003FF)

#define RF_361_RX_TIA2_BW_CTRL1_Q_M_LSB                                         (10)
#define RF_361_RX_TIA2_BW_CTRL1_Q_M_WIDTH                                       (10)
#define RF_361_RX_TIA2_BW_CTRL1_Q_M_MASK                                        (0x000FFC00)

#define RF_361_RX_TIA2_BW_CTRL0_Q_M_LSB                                         (0)
#define RF_361_RX_TIA2_BW_CTRL0_Q_M_WIDTH                                       (10)
#define RF_361_RX_TIA2_BW_CTRL0_Q_M_MASK                                        (0x000003FF)

#define RF_362_RXD_TIA2_BW_OFFSET_Q_LSB                                         (6)
#define RF_362_RXD_TIA2_BW_OFFSET_Q_WIDTH                                       (5)
#define RF_362_RXD_TIA2_BW_OFFSET_Q_MASK                                        (0x000007C0)

#define RF_362_RXD_TIA2_BW_OFFSET_I_LSB                                         (1)
#define RF_362_RXD_TIA2_BW_OFFSET_I_WIDTH                                       (5)
#define RF_362_RXD_TIA2_BW_OFFSET_I_MASK                                        (0x0000003E)

#define RF_362_RXD_TIA2_BW_CTRL_MAN_LSB                                         (0)
#define RF_362_RXD_TIA2_BW_CTRL_MAN_WIDTH                                       (1)
#define RF_362_RXD_TIA2_BW_CTRL_MAN_MASK                                        (0x00000001)
#define RF_362_RXD_TIA2_BW_CTRL_MAN_BIT                                         (0x00000001)

#define RF_363_RXD_TIA2_BW_CTRL1_I_M_LSB                                        (10)
#define RF_363_RXD_TIA2_BW_CTRL1_I_M_WIDTH                                      (10)
#define RF_363_RXD_TIA2_BW_CTRL1_I_M_MASK                                       (0x000FFC00)

#define RF_363_RXD_TIA2_BW_CTRL0_I_M_LSB                                        (0)
#define RF_363_RXD_TIA2_BW_CTRL0_I_M_WIDTH                                      (10)
#define RF_363_RXD_TIA2_BW_CTRL0_I_M_MASK                                       (0x000003FF)

#define RF_364_RXD_TIA2_BW_CTRL1_Q_M_LSB                                        (10)
#define RF_364_RXD_TIA2_BW_CTRL1_Q_M_WIDTH                                      (10)
#define RF_364_RXD_TIA2_BW_CTRL1_Q_M_MASK                                       (0x000FFC00)

#define RF_364_RXD_TIA2_BW_CTRL0_Q_M_LSB                                        (0)
#define RF_364_RXD_TIA2_BW_CTRL0_Q_M_WIDTH                                      (10)
#define RF_364_RXD_TIA2_BW_CTRL0_Q_M_MASK                                       (0x000003FF)

#define RF_367_RXRXD_LDO_BB_FC_OFF_M_LSB                                        (15)
#define RF_367_RXRXD_LDO_BB_FC_OFF_M_WIDTH                                      (1)
#define RF_367_RXRXD_LDO_BB_FC_OFF_M_MASK                                       (0x00008000)
#define RF_367_RXRXD_LDO_BB_FC_OFF_M_BIT                                        (0x00008000)

#define RF_367_RXRXD_LDO_LO_FC_OFF_M_LSB                                        (14)
#define RF_367_RXRXD_LDO_LO_FC_OFF_M_WIDTH                                      (1)
#define RF_367_RXRXD_LDO_LO_FC_OFF_M_MASK                                       (0x00004000)
#define RF_367_RXRXD_LDO_LO_FC_OFF_M_BIT                                        (0x00004000)

#define RF_367_RXRXD_LDO_LNA_FC_OFF_M_LSB                                       (13)
#define RF_367_RXRXD_LDO_LNA_FC_OFF_M_WIDTH                                     (1)
#define RF_367_RXRXD_LDO_LNA_FC_OFF_M_MASK                                      (0x00002000)
#define RF_367_RXRXD_LDO_LNA_FC_OFF_M_BIT                                       (0x00002000)

#define RF_367_RXRXD_LDO_BB_CORE_EN_M_LSB                                       (12)
#define RF_367_RXRXD_LDO_BB_CORE_EN_M_WIDTH                                     (1)
#define RF_367_RXRXD_LDO_BB_CORE_EN_M_MASK                                      (0x00001000)
#define RF_367_RXRXD_LDO_BB_CORE_EN_M_BIT                                       (0x00001000)

#define RF_367_RXRXD_LDO_LO_CORE_EN_M_LSB                                       (11)
#define RF_367_RXRXD_LDO_LO_CORE_EN_M_WIDTH                                     (1)
#define RF_367_RXRXD_LDO_LO_CORE_EN_M_MASK                                      (0x00000800)
#define RF_367_RXRXD_LDO_LO_CORE_EN_M_BIT                                       (0x00000800)

#define RF_367_RXRXD_LDO_LNABIAS_OUT_EN_M_LSB                                   (10)
#define RF_367_RXRXD_LDO_LNABIAS_OUT_EN_M_WIDTH                                 (1)
#define RF_367_RXRXD_LDO_LNABIAS_OUT_EN_M_MASK                                  (0x00000400)
#define RF_367_RXRXD_LDO_LNABIAS_OUT_EN_M_BIT                                   (0x00000400)

#define RF_367_RXD_LDO_G4_LNA_OUT_EN_M_LSB                                      (9)
#define RF_367_RXD_LDO_G4_LNA_OUT_EN_M_WIDTH                                    (1)
#define RF_367_RXD_LDO_G4_LNA_OUT_EN_M_MASK                                     (0x00000200)
#define RF_367_RXD_LDO_G4_LNA_OUT_EN_M_BIT                                      (0x00000200)

#define RF_367_RXD_LDO_G3_LNA_OUT_EN_M_LSB                                      (8)
#define RF_367_RXD_LDO_G3_LNA_OUT_EN_M_WIDTH                                    (1)
#define RF_367_RXD_LDO_G3_LNA_OUT_EN_M_MASK                                     (0x00000100)
#define RF_367_RXD_LDO_G3_LNA_OUT_EN_M_BIT                                      (0x00000100)

#define RF_367_RXD_LDO_G2_LNA_OUT_EN_M_LSB                                      (7)
#define RF_367_RXD_LDO_G2_LNA_OUT_EN_M_WIDTH                                    (1)
#define RF_367_RXD_LDO_G2_LNA_OUT_EN_M_MASK                                     (0x00000080)
#define RF_367_RXD_LDO_G2_LNA_OUT_EN_M_BIT                                      (0x00000080)

#define RF_367_RXD_LDO_G1_LNA_OUT_EN_M_LSB                                      (6)
#define RF_367_RXD_LDO_G1_LNA_OUT_EN_M_WIDTH                                    (1)
#define RF_367_RXD_LDO_G1_LNA_OUT_EN_M_MASK                                     (0x00000040)
#define RF_367_RXD_LDO_G1_LNA_OUT_EN_M_BIT                                      (0x00000040)

#define RF_367_RX_LDO_G4_LNA_OUT_EN_M_LSB                                       (5)
#define RF_367_RX_LDO_G4_LNA_OUT_EN_M_WIDTH                                     (1)
#define RF_367_RX_LDO_G4_LNA_OUT_EN_M_MASK                                      (0x00000020)
#define RF_367_RX_LDO_G4_LNA_OUT_EN_M_BIT                                       (0x00000020)

#define RF_367_RX_LDO_G3_LNA_OUT_EN_M_LSB                                       (4)
#define RF_367_RX_LDO_G3_LNA_OUT_EN_M_WIDTH                                     (1)
#define RF_367_RX_LDO_G3_LNA_OUT_EN_M_MASK                                      (0x00000010)
#define RF_367_RX_LDO_G3_LNA_OUT_EN_M_BIT                                       (0x00000010)

#define RF_367_RX_LDO_G2_LNA_OUT_EN_M_LSB                                       (3)
#define RF_367_RX_LDO_G2_LNA_OUT_EN_M_WIDTH                                     (1)
#define RF_367_RX_LDO_G2_LNA_OUT_EN_M_MASK                                      (0x00000008)
#define RF_367_RX_LDO_G2_LNA_OUT_EN_M_BIT                                       (0x00000008)

#define RF_367_RX_LDO_G1_LNA_OUT_EN_M_LSB                                       (2)
#define RF_367_RX_LDO_G1_LNA_OUT_EN_M_WIDTH                                     (1)
#define RF_367_RX_LDO_G1_LNA_OUT_EN_M_MASK                                      (0x00000004)
#define RF_367_RX_LDO_G1_LNA_OUT_EN_M_BIT                                       (0x00000004)

#define RF_367_RXRXD_LDO_LNA_CORE_EN_M_LSB                                      (1)
#define RF_367_RXRXD_LDO_LNA_CORE_EN_M_WIDTH                                    (1)
#define RF_367_RXRXD_LDO_LNA_CORE_EN_M_MASK                                     (0x00000002)
#define RF_367_RXRXD_LDO_LNA_CORE_EN_M_BIT                                      (0x00000002)

#define RF_367_RXRXD_COMMON_LDO_MAN_LSB                                         (0)
#define RF_367_RXRXD_COMMON_LDO_MAN_WIDTH                                       (1)
#define RF_367_RXRXD_COMMON_LDO_MAN_MASK                                        (0x00000001)
#define RF_367_RXRXD_COMMON_LDO_MAN_BIT                                         (0x00000001)

#define RF_368_RXD_LDO_BB1_OUT_EN_M_LSB                                         (4)
#define RF_368_RXD_LDO_BB1_OUT_EN_M_WIDTH                                       (1)
#define RF_368_RXD_LDO_BB1_OUT_EN_M_MASK                                        (0x00000010)
#define RF_368_RXD_LDO_BB1_OUT_EN_M_BIT                                         (0x00000010)

#define RF_368_RXD_LDO_LO1_OUT_EN_M_LSB                                         (3)
#define RF_368_RXD_LDO_LO1_OUT_EN_M_WIDTH                                       (1)
#define RF_368_RXD_LDO_LO1_OUT_EN_M_MASK                                        (0x00000008)
#define RF_368_RXD_LDO_LO1_OUT_EN_M_BIT                                         (0x00000008)

#define RF_368_RX_LDO_BB1_OUT_EN_M_LSB                                          (2)
#define RF_368_RX_LDO_BB1_OUT_EN_M_WIDTH                                        (1)
#define RF_368_RX_LDO_BB1_OUT_EN_M_MASK                                         (0x00000004)
#define RF_368_RX_LDO_BB1_OUT_EN_M_BIT                                          (0x00000004)

#define RF_368_RX_LDO_LO1_OUT_EN_M_LSB                                          (1)
#define RF_368_RX_LDO_LO1_OUT_EN_M_WIDTH                                        (1)
#define RF_368_RX_LDO_LO1_OUT_EN_M_MASK                                         (0x00000002)
#define RF_368_RX_LDO_LO1_OUT_EN_M_BIT                                          (0x00000002)

#define RF_368_RXRXD_PATH1_LDO_MAN_LSB                                          (0)
#define RF_368_RXRXD_PATH1_LDO_MAN_WIDTH                                        (1)
#define RF_368_RXRXD_PATH1_LDO_MAN_MASK                                         (0x00000001)
#define RF_368_RXRXD_PATH1_LDO_MAN_BIT                                          (0x00000001)

#define RF_369_RXD_LDO_BB2_OUT_EN_M_LSB                                         (4)
#define RF_369_RXD_LDO_BB2_OUT_EN_M_WIDTH                                       (1)
#define RF_369_RXD_LDO_BB2_OUT_EN_M_MASK                                        (0x00000010)
#define RF_369_RXD_LDO_BB2_OUT_EN_M_BIT                                         (0x00000010)

#define RF_369_RXD_LDO_LO2_OUT_EN_M_LSB                                         (3)
#define RF_369_RXD_LDO_LO2_OUT_EN_M_WIDTH                                       (1)
#define RF_369_RXD_LDO_LO2_OUT_EN_M_MASK                                        (0x00000008)
#define RF_369_RXD_LDO_LO2_OUT_EN_M_BIT                                         (0x00000008)

#define RF_369_RX_LDO_BB2_OUT_EN_M_LSB                                          (2)
#define RF_369_RX_LDO_BB2_OUT_EN_M_WIDTH                                        (1)
#define RF_369_RX_LDO_BB2_OUT_EN_M_MASK                                         (0x00000004)
#define RF_369_RX_LDO_BB2_OUT_EN_M_BIT                                          (0x00000004)

#define RF_369_RX_LDO_LO2_OUT_EN_M_LSB                                          (1)
#define RF_369_RX_LDO_LO2_OUT_EN_M_WIDTH                                        (1)
#define RF_369_RX_LDO_LO2_OUT_EN_M_MASK                                         (0x00000002)
#define RF_369_RX_LDO_LO2_OUT_EN_M_BIT                                          (0x00000002)

#define RF_369_RXRXD_PATH2_LDO_MAN_LSB                                          (0)
#define RF_369_RXRXD_PATH2_LDO_MAN_WIDTH                                        (1)
#define RF_369_RXRXD_PATH2_LDO_MAN_MASK                                         (0x00000001)
#define RF_369_RXRXD_PATH2_LDO_MAN_BIT                                          (0x00000001)

#define RF_370_RX_IIP2C_TXBUF_EN_M_LSB                                          (17)
#define RF_370_RX_IIP2C_TXBUF_EN_M_WIDTH                                        (1)
#define RF_370_RX_IIP2C_TXBUF_EN_M_MASK                                         (0x00020000)
#define RF_370_RX_IIP2C_TXBUF_EN_M_BIT                                          (0x00020000)

#define RF_370_RX_LNA_BAND_SEL_G4_M_LSB                                         (14)
#define RF_370_RX_LNA_BAND_SEL_G4_M_WIDTH                                       (3)
#define RF_370_RX_LNA_BAND_SEL_G4_M_MASK                                        (0x0001C000)

#define RF_370_RX_LNA_BAND_SEL_G3_M_LSB                                         (11)
#define RF_370_RX_LNA_BAND_SEL_G3_M_WIDTH                                       (3)
#define RF_370_RX_LNA_BAND_SEL_G3_M_MASK                                        (0x00003800)

#define RF_370_RX_LNA_BAND_SEL_G2_M_LSB                                         (8)
#define RF_370_RX_LNA_BAND_SEL_G2_M_WIDTH                                       (3)
#define RF_370_RX_LNA_BAND_SEL_G2_M_MASK                                        (0x00000700)

#define RF_370_RX_LNA_BAND_SEL_G1_M_LSB                                         (5)
#define RF_370_RX_LNA_BAND_SEL_G1_M_WIDTH                                       (3)
#define RF_370_RX_LNA_BAND_SEL_G1_M_MASK                                        (0x000000E0)

#define RF_370_RX_LNA_IIP2_CAL_EN_G4_M_LSB                                      (4)
#define RF_370_RX_LNA_IIP2_CAL_EN_G4_M_WIDTH                                    (1)
#define RF_370_RX_LNA_IIP2_CAL_EN_G4_M_MASK                                     (0x00000010)
#define RF_370_RX_LNA_IIP2_CAL_EN_G4_M_BIT                                      (0x00000010)

#define RF_370_RX_LNA_IIP2_CAL_EN_G3_M_LSB                                      (3)
#define RF_370_RX_LNA_IIP2_CAL_EN_G3_M_WIDTH                                    (1)
#define RF_370_RX_LNA_IIP2_CAL_EN_G3_M_MASK                                     (0x00000008)
#define RF_370_RX_LNA_IIP2_CAL_EN_G3_M_BIT                                      (0x00000008)

#define RF_370_RX_LNA_IIP2_CAL_EN_G2_M_LSB                                      (2)
#define RF_370_RX_LNA_IIP2_CAL_EN_G2_M_WIDTH                                    (1)
#define RF_370_RX_LNA_IIP2_CAL_EN_G2_M_MASK                                     (0x00000004)
#define RF_370_RX_LNA_IIP2_CAL_EN_G2_M_BIT                                      (0x00000004)

#define RF_370_RX_LNA_IIP2_CAL_EN_G1_M_LSB                                      (1)
#define RF_370_RX_LNA_IIP2_CAL_EN_G1_M_WIDTH                                    (1)
#define RF_370_RX_LNA_IIP2_CAL_EN_G1_M_MASK                                     (0x00000002)
#define RF_370_RX_LNA_IIP2_CAL_EN_G1_M_BIT                                      (0x00000002)

#define RF_370_RXRXD_LNA_MAN_LSB                                                (0)
#define RF_370_RXRXD_LNA_MAN_WIDTH                                              (1)
#define RF_370_RXRXD_LNA_MAN_MASK                                               (0x00000001)
#define RF_370_RXRXD_LNA_MAN_BIT                                                (0x00000001)

#define RF_371_RX_LNA_GAIN_G2_M_LSB                                             (15)
#define RF_371_RX_LNA_GAIN_G2_M_WIDTH                                           (3)
#define RF_371_RX_LNA_GAIN_G2_M_MASK                                            (0x00038000)

#define RF_371_RX_LNA_GAIN_G1_M_LSB                                             (12)
#define RF_371_RX_LNA_GAIN_G1_M_WIDTH                                           (3)
#define RF_371_RX_LNA_GAIN_G1_M_MASK                                            (0x00007000)

#define RF_371_RX_LNA_EN_G2_M_LSB                                               (6)
#define RF_371_RX_LNA_EN_G2_M_WIDTH                                             (6)
#define RF_371_RX_LNA_EN_G2_M_MASK                                              (0x00000FC0)

#define RF_371_RX_LNA_EN_G1_M_LSB                                               (0)
#define RF_371_RX_LNA_EN_G1_M_WIDTH                                             (6)
#define RF_371_RX_LNA_EN_G1_M_MASK                                              (0x0000003F)

#define RF_372_RX_LNA_GAIN_G4_M_LSB                                             (15)
#define RF_372_RX_LNA_GAIN_G4_M_WIDTH                                           (3)
#define RF_372_RX_LNA_GAIN_G4_M_MASK                                            (0x00038000)

#define RF_372_RX_LNA_GAIN_G3_M_LSB                                             (12)
#define RF_372_RX_LNA_GAIN_G3_M_WIDTH                                           (3)
#define RF_372_RX_LNA_GAIN_G3_M_MASK                                            (0x00007000)

#define RF_372_RX_LNA_EN_G4_M_LSB                                               (6)
#define RF_372_RX_LNA_EN_G4_M_WIDTH                                             (6)
#define RF_372_RX_LNA_EN_G4_M_MASK                                              (0x00000FC0)

#define RF_372_RX_LNA_EN_G3_M_LSB                                               (0)
#define RF_372_RX_LNA_EN_G3_M_WIDTH                                             (6)
#define RF_372_RX_LNA_EN_G3_M_MASK                                              (0x0000003F)

#define RF_373_RX_LNA_LPM_M_LSB                                                 (16)
#define RF_373_RX_LNA_LPM_M_WIDTH                                               (1)
#define RF_373_RX_LNA_LPM_M_MASK                                                (0x00010000)
#define RF_373_RX_LNA_LPM_M_BIT                                                 (0x00010000)

#define RF_373_RX_LNA_IRR_CAL_EN_G4_M_LSB                                       (15)
#define RF_373_RX_LNA_IRR_CAL_EN_G4_M_WIDTH                                     (1)
#define RF_373_RX_LNA_IRR_CAL_EN_G4_M_MASK                                      (0x00008000)
#define RF_373_RX_LNA_IRR_CAL_EN_G4_M_BIT                                       (0x00008000)

#define RF_373_RX_LNA_IRR_CAL_EN_G3_M_LSB                                       (14)
#define RF_373_RX_LNA_IRR_CAL_EN_G3_M_WIDTH                                     (1)
#define RF_373_RX_LNA_IRR_CAL_EN_G3_M_MASK                                      (0x00004000)
#define RF_373_RX_LNA_IRR_CAL_EN_G3_M_BIT                                       (0x00004000)

#define RF_373_RX_LNA_IRR_CAL_EN_G2_M_LSB                                       (13)
#define RF_373_RX_LNA_IRR_CAL_EN_G2_M_WIDTH                                     (1)
#define RF_373_RX_LNA_IRR_CAL_EN_G2_M_MASK                                      (0x00002000)
#define RF_373_RX_LNA_IRR_CAL_EN_G2_M_BIT                                       (0x00002000)

#define RF_373_RX_LNA_IRR_CAL_EN_G1_M_LSB                                       (12)
#define RF_373_RX_LNA_IRR_CAL_EN_G1_M_WIDTH                                     (1)
#define RF_373_RX_LNA_IRR_CAL_EN_G1_M_MASK                                      (0x00001000)
#define RF_373_RX_LNA_IRR_CAL_EN_G1_M_BIT                                       (0x00001000)

#define RF_373_RX_LNA_GAIN_NCCA_G4_M_LSB                                        (9)
#define RF_373_RX_LNA_GAIN_NCCA_G4_M_WIDTH                                      (3)
#define RF_373_RX_LNA_GAIN_NCCA_G4_M_MASK                                       (0x00000E00)

#define RF_373_RX_LNA_GAIN_NCCA_G3_M_LSB                                        (6)
#define RF_373_RX_LNA_GAIN_NCCA_G3_M_WIDTH                                      (3)
#define RF_373_RX_LNA_GAIN_NCCA_G3_M_MASK                                       (0x000001C0)

#define RF_373_RX_LNA_GAIN_NCCA_G2_M_LSB                                        (3)
#define RF_373_RX_LNA_GAIN_NCCA_G2_M_WIDTH                                      (3)
#define RF_373_RX_LNA_GAIN_NCCA_G2_M_MASK                                       (0x00000038)

#define RF_373_RX_LNA_GAIN_NCCA_G1_M_LSB                                        (0)
#define RF_373_RX_LNA_GAIN_NCCA_G1_M_WIDTH                                      (3)
#define RF_373_RX_LNA_GAIN_NCCA_G1_M_MASK                                       (0x00000007)

#define RF_374_RX_LNA_ICTL_G4_M_LSB                                             (13)
#define RF_374_RX_LNA_ICTL_G4_M_WIDTH                                           (3)
#define RF_374_RX_LNA_ICTL_G4_M_MASK                                            (0x0000E000)

#define RF_374_RX_LNA_ICTL_G3_M_LSB                                             (10)
#define RF_374_RX_LNA_ICTL_G3_M_WIDTH                                           (3)
#define RF_374_RX_LNA_ICTL_G3_M_MASK                                            (0x00001C00)

#define RF_374_RX_LNA_ICTL_G2_M_LSB                                             (7)
#define RF_374_RX_LNA_ICTL_G2_M_WIDTH                                           (3)
#define RF_374_RX_LNA_ICTL_G2_M_MASK                                            (0x00000380)

#define RF_374_RX_LNA_ICTL_G1_M_LSB                                             (4)
#define RF_374_RX_LNA_ICTL_G1_M_WIDTH                                           (3)
#define RF_374_RX_LNA_ICTL_G1_M_MASK                                            (0x00000070)

#define RF_374_RX_LNA_NCCA_EN_G4_M_LSB                                          (3)
#define RF_374_RX_LNA_NCCA_EN_G4_M_WIDTH                                        (1)
#define RF_374_RX_LNA_NCCA_EN_G4_M_MASK                                         (0x00000008)
#define RF_374_RX_LNA_NCCA_EN_G4_M_BIT                                          (0x00000008)

#define RF_374_RX_LNA_NCCA_EN_G3_M_LSB                                          (2)
#define RF_374_RX_LNA_NCCA_EN_G3_M_WIDTH                                        (1)
#define RF_374_RX_LNA_NCCA_EN_G3_M_MASK                                         (0x00000004)
#define RF_374_RX_LNA_NCCA_EN_G3_M_BIT                                          (0x00000004)

#define RF_374_RX_LNA_NCCA_EN_G2_M_LSB                                          (1)
#define RF_374_RX_LNA_NCCA_EN_G2_M_WIDTH                                        (1)
#define RF_374_RX_LNA_NCCA_EN_G2_M_MASK                                         (0x00000002)
#define RF_374_RX_LNA_NCCA_EN_G2_M_BIT                                          (0x00000002)

#define RF_374_RX_LNA_NCCA_EN_G1_M_LSB                                          (0)
#define RF_374_RX_LNA_NCCA_EN_G1_M_WIDTH                                        (1)
#define RF_374_RX_LNA_NCCA_EN_G1_M_MASK                                         (0x00000001)
#define RF_374_RX_LNA_NCCA_EN_G1_M_BIT                                          (0x00000001)

#define RF_375_RXD_LNA_BAND_SEL_G4_M_LSB                                        (14)
#define RF_375_RXD_LNA_BAND_SEL_G4_M_WIDTH                                      (3)
#define RF_375_RXD_LNA_BAND_SEL_G4_M_MASK                                       (0x0001C000)

#define RF_375_RXD_LNA_BAND_SEL_G3_M_LSB                                        (11)
#define RF_375_RXD_LNA_BAND_SEL_G3_M_WIDTH                                      (3)
#define RF_375_RXD_LNA_BAND_SEL_G3_M_MASK                                       (0x00003800)

#define RF_375_RXD_LNA_BAND_SEL_G2_M_LSB                                        (8)
#define RF_375_RXD_LNA_BAND_SEL_G2_M_WIDTH                                      (3)
#define RF_375_RXD_LNA_BAND_SEL_G2_M_MASK                                       (0x00000700)

#define RF_375_RXD_LNA_BAND_SEL_G1_M_LSB                                        (5)
#define RF_375_RXD_LNA_BAND_SEL_G1_M_WIDTH                                      (3)
#define RF_375_RXD_LNA_BAND_SEL_G1_M_MASK                                       (0x000000E0)

#define RF_376_RXD_LNA_GAIN_G2_M_LSB                                            (15)
#define RF_376_RXD_LNA_GAIN_G2_M_WIDTH                                          (3)
#define RF_376_RXD_LNA_GAIN_G2_M_MASK                                           (0x00038000)

#define RF_376_RXD_LNA_GAIN_G1_M_LSB                                            (12)
#define RF_376_RXD_LNA_GAIN_G1_M_WIDTH                                          (3)
#define RF_376_RXD_LNA_GAIN_G1_M_MASK                                           (0x00007000)

#define RF_376_RXD_LNA_EN_G2_M_LSB                                              (6)
#define RF_376_RXD_LNA_EN_G2_M_WIDTH                                            (6)
#define RF_376_RXD_LNA_EN_G2_M_MASK                                             (0x00000FC0)

#define RF_376_RXD_LNA_EN_G1_M_LSB                                              (0)
#define RF_376_RXD_LNA_EN_G1_M_WIDTH                                            (6)
#define RF_376_RXD_LNA_EN_G1_M_MASK                                             (0x0000003F)

#define RF_377_RXD_LNA_GAIN_G4_M_LSB                                            (15)
#define RF_377_RXD_LNA_GAIN_G4_M_WIDTH                                          (3)
#define RF_377_RXD_LNA_GAIN_G4_M_MASK                                           (0x00038000)

#define RF_377_RXD_LNA_GAIN_G3_M_LSB                                            (12)
#define RF_377_RXD_LNA_GAIN_G3_M_WIDTH                                          (3)
#define RF_377_RXD_LNA_GAIN_G3_M_MASK                                           (0x00007000)

#define RF_377_RXD_LNA_EN_G4_M_LSB                                              (6)
#define RF_377_RXD_LNA_EN_G4_M_WIDTH                                            (6)
#define RF_377_RXD_LNA_EN_G4_M_MASK                                             (0x00000FC0)

#define RF_377_RXD_LNA_EN_G3_M_LSB                                              (0)
#define RF_377_RXD_LNA_EN_G3_M_WIDTH                                            (6)
#define RF_377_RXD_LNA_EN_G3_M_MASK                                             (0x0000003F)

#define RF_378_RXD_LNA_LPM_M_LSB                                                (16)
#define RF_378_RXD_LNA_LPM_M_WIDTH                                              (1)
#define RF_378_RXD_LNA_LPM_M_MASK                                               (0x00010000)
#define RF_378_RXD_LNA_LPM_M_BIT                                                (0x00010000)

#define RF_378_RXD_LNA_IRR_CAL_EN_G4_M_LSB                                      (15)
#define RF_378_RXD_LNA_IRR_CAL_EN_G4_M_WIDTH                                    (1)
#define RF_378_RXD_LNA_IRR_CAL_EN_G4_M_MASK                                     (0x00008000)
#define RF_378_RXD_LNA_IRR_CAL_EN_G4_M_BIT                                      (0x00008000)

#define RF_378_RXD_LNA_IRR_CAL_EN_G3_M_LSB                                      (14)
#define RF_378_RXD_LNA_IRR_CAL_EN_G3_M_WIDTH                                    (1)
#define RF_378_RXD_LNA_IRR_CAL_EN_G3_M_MASK                                     (0x00004000)
#define RF_378_RXD_LNA_IRR_CAL_EN_G3_M_BIT                                      (0x00004000)

#define RF_378_RXD_LNA_IRR_CAL_EN_G2_M_LSB                                      (13)
#define RF_378_RXD_LNA_IRR_CAL_EN_G2_M_WIDTH                                    (1)
#define RF_378_RXD_LNA_IRR_CAL_EN_G2_M_MASK                                     (0x00002000)
#define RF_378_RXD_LNA_IRR_CAL_EN_G2_M_BIT                                      (0x00002000)

#define RF_378_RXD_LNA_IRR_CAL_EN_G1_M_LSB                                      (12)
#define RF_378_RXD_LNA_IRR_CAL_EN_G1_M_WIDTH                                    (1)
#define RF_378_RXD_LNA_IRR_CAL_EN_G1_M_MASK                                     (0x00001000)
#define RF_378_RXD_LNA_IRR_CAL_EN_G1_M_BIT                                      (0x00001000)

#define RF_378_RXD_LNA_GAIN_NCCA_G4_M_LSB                                       (9)
#define RF_378_RXD_LNA_GAIN_NCCA_G4_M_WIDTH                                     (3)
#define RF_378_RXD_LNA_GAIN_NCCA_G4_M_MASK                                      (0x00000E00)

#define RF_378_RXD_LNA_GAIN_NCCA_G3_M_LSB                                       (6)
#define RF_378_RXD_LNA_GAIN_NCCA_G3_M_WIDTH                                     (3)
#define RF_378_RXD_LNA_GAIN_NCCA_G3_M_MASK                                      (0x000001C0)

#define RF_378_RXD_LNA_GAIN_NCCA_G2_M_LSB                                       (3)
#define RF_378_RXD_LNA_GAIN_NCCA_G2_M_WIDTH                                     (3)
#define RF_378_RXD_LNA_GAIN_NCCA_G2_M_MASK                                      (0x00000038)

#define RF_378_RXD_LNA_GAIN_NCCA_G1_M_LSB                                       (0)
#define RF_378_RXD_LNA_GAIN_NCCA_G1_M_WIDTH                                     (3)
#define RF_378_RXD_LNA_GAIN_NCCA_G1_M_MASK                                      (0x00000007)

#define RF_379_RXD_LNA_ICTL_G4_M_LSB                                            (13)
#define RF_379_RXD_LNA_ICTL_G4_M_WIDTH                                          (3)
#define RF_379_RXD_LNA_ICTL_G4_M_MASK                                           (0x0000E000)

#define RF_379_RXD_LNA_ICTL_G3_M_LSB                                            (10)
#define RF_379_RXD_LNA_ICTL_G3_M_WIDTH                                          (3)
#define RF_379_RXD_LNA_ICTL_G3_M_MASK                                           (0x00001C00)

#define RF_379_RXD_LNA_ICTL_G2_M_LSB                                            (7)
#define RF_379_RXD_LNA_ICTL_G2_M_WIDTH                                          (3)
#define RF_379_RXD_LNA_ICTL_G2_M_MASK                                           (0x00000380)

#define RF_379_RXD_LNA_ICTL_G1_M_LSB                                            (4)
#define RF_379_RXD_LNA_ICTL_G1_M_WIDTH                                          (3)
#define RF_379_RXD_LNA_ICTL_G1_M_MASK                                           (0x00000070)

#define RF_379_RXD_LNA_NCCA_EN_G4_M_LSB                                         (3)
#define RF_379_RXD_LNA_NCCA_EN_G4_M_WIDTH                                       (1)
#define RF_379_RXD_LNA_NCCA_EN_G4_M_MASK                                        (0x00000008)
#define RF_379_RXD_LNA_NCCA_EN_G4_M_BIT                                         (0x00000008)

#define RF_379_RXD_LNA_NCCA_EN_G3_M_LSB                                         (2)
#define RF_379_RXD_LNA_NCCA_EN_G3_M_WIDTH                                       (1)
#define RF_379_RXD_LNA_NCCA_EN_G3_M_MASK                                        (0x00000004)
#define RF_379_RXD_LNA_NCCA_EN_G3_M_BIT                                         (0x00000004)

#define RF_379_RXD_LNA_NCCA_EN_G2_M_LSB                                         (1)
#define RF_379_RXD_LNA_NCCA_EN_G2_M_WIDTH                                       (1)
#define RF_379_RXD_LNA_NCCA_EN_G2_M_MASK                                        (0x00000002)
#define RF_379_RXD_LNA_NCCA_EN_G2_M_BIT                                         (0x00000002)

#define RF_379_RXD_LNA_NCCA_EN_G1_M_LSB                                         (0)
#define RF_379_RXD_LNA_NCCA_EN_G1_M_WIDTH                                       (1)
#define RF_379_RXD_LNA_NCCA_EN_G1_M_MASK                                        (0x00000001)
#define RF_379_RXD_LNA_NCCA_EN_G1_M_BIT                                         (0x00000001)

#define RF_380_RXD_TIA1_GAIN_CTRL_M_LSB                                         (7)
#define RF_380_RXD_TIA1_GAIN_CTRL_M_WIDTH                                       (3)
#define RF_380_RXD_TIA1_GAIN_CTRL_M_MASK                                        (0x00000380)

#define RF_380_RXD_TIA1_EN_M_LSB                                                (6)
#define RF_380_RXD_TIA1_EN_M_WIDTH                                              (1)
#define RF_380_RXD_TIA1_EN_M_MASK                                               (0x00000040)
#define RF_380_RXD_TIA1_EN_M_BIT                                                (0x00000040)

#define RF_380_RX_TIA1_GAIN_CTRL_M_LSB                                          (3)
#define RF_380_RX_TIA1_GAIN_CTRL_M_WIDTH                                        (3)
#define RF_380_RX_TIA1_GAIN_CTRL_M_MASK                                         (0x00000038)

#define RF_380_RX_TIA1_EN_M_LSB                                                 (2)
#define RF_380_RX_TIA1_EN_M_WIDTH                                               (1)
#define RF_380_RX_TIA1_EN_M_MASK                                                (0x00000004)
#define RF_380_RX_TIA1_EN_M_BIT                                                 (0x00000004)

#define RF_380_RXRXD_TIA1_MAN_LSB                                               (1)
#define RF_380_RXRXD_TIA1_MAN_WIDTH                                             (1)
#define RF_380_RXRXD_TIA1_MAN_MASK                                              (0x00000002)
#define RF_380_RXRXD_TIA1_MAN_BIT                                               (0x00000002)

#define RF_380_RXRXD_MIXER1_MAN_LSB                                             (0)
#define RF_380_RXRXD_MIXER1_MAN_WIDTH                                           (1)
#define RF_380_RXRXD_MIXER1_MAN_MASK                                            (0x00000001)
#define RF_380_RXRXD_MIXER1_MAN_BIT                                             (0x00000001)

#define RF_381_RX_G4_MIXER1_SRX1L_EN_M_LSB                                      (16)
#define RF_381_RX_G4_MIXER1_SRX1L_EN_M_WIDTH                                    (4)
#define RF_381_RX_G4_MIXER1_SRX1L_EN_M_MASK                                     (0x000F0000)

#define RF_381_RX_G3_MIXER1_SRX1L_EN_M_LSB                                      (12)
#define RF_381_RX_G3_MIXER1_SRX1L_EN_M_WIDTH                                    (4)
#define RF_381_RX_G3_MIXER1_SRX1L_EN_M_MASK                                     (0x0000F000)

#define RF_381_RX_G3_MIXER1_SRX1H_EN_M_LSB                                      (8)
#define RF_381_RX_G3_MIXER1_SRX1H_EN_M_WIDTH                                    (4)
#define RF_381_RX_G3_MIXER1_SRX1H_EN_M_MASK                                     (0x00000F00)

#define RF_381_RX_G2_MIXER1_SRX1H_EN_M_LSB                                      (4)
#define RF_381_RX_G2_MIXER1_SRX1H_EN_M_WIDTH                                    (4)
#define RF_381_RX_G2_MIXER1_SRX1H_EN_M_MASK                                     (0x000000F0)

#define RF_381_RX_G1_MIXER1_SRX1H_EN_M_LSB                                      (0)
#define RF_381_RX_G1_MIXER1_SRX1H_EN_M_WIDTH                                    (4)
#define RF_381_RX_G1_MIXER1_SRX1H_EN_M_MASK                                     (0x0000000F)

#define RF_382_RXD_G4_MIXER1_SRX1L_EN_M_LSB                                     (16)
#define RF_382_RXD_G4_MIXER1_SRX1L_EN_M_WIDTH                                   (4)
#define RF_382_RXD_G4_MIXER1_SRX1L_EN_M_MASK                                    (0x000F0000)

#define RF_382_RXD_G3_MIXER1_SRX1L_EN_M_LSB                                     (12)
#define RF_382_RXD_G3_MIXER1_SRX1L_EN_M_WIDTH                                   (4)
#define RF_382_RXD_G3_MIXER1_SRX1L_EN_M_MASK                                    (0x0000F000)

#define RF_382_RXD_G3_MIXER1_SRX1H_EN_M_LSB                                     (8)
#define RF_382_RXD_G3_MIXER1_SRX1H_EN_M_WIDTH                                   (4)
#define RF_382_RXD_G3_MIXER1_SRX1H_EN_M_MASK                                    (0x00000F00)

#define RF_382_RXD_G2_MIXER1_SRX1H_EN_M_LSB                                     (4)
#define RF_382_RXD_G2_MIXER1_SRX1H_EN_M_WIDTH                                   (4)
#define RF_382_RXD_G2_MIXER1_SRX1H_EN_M_MASK                                    (0x000000F0)

#define RF_382_RXD_G1_MIXER1_SRX1H_EN_M_LSB                                     (0)
#define RF_382_RXD_G1_MIXER1_SRX1H_EN_M_WIDTH                                   (4)
#define RF_382_RXD_G1_MIXER1_SRX1H_EN_M_MASK                                    (0x0000000F)

#define RF_383_RXD_TIA2_GAIN_CTRL_M_LSB                                         (7)
#define RF_383_RXD_TIA2_GAIN_CTRL_M_WIDTH                                       (3)
#define RF_383_RXD_TIA2_GAIN_CTRL_M_MASK                                        (0x00000380)

#define RF_383_RXD_TIA2_EN_M_LSB                                                (6)
#define RF_383_RXD_TIA2_EN_M_WIDTH                                              (1)
#define RF_383_RXD_TIA2_EN_M_MASK                                               (0x00000040)
#define RF_383_RXD_TIA2_EN_M_BIT                                                (0x00000040)

#define RF_383_RX_TIA2_GAIN_CTRL_M_LSB                                          (3)
#define RF_383_RX_TIA2_GAIN_CTRL_M_WIDTH                                        (3)
#define RF_383_RX_TIA2_GAIN_CTRL_M_MASK                                         (0x00000038)

#define RF_383_RX_TIA2_EN_M_LSB                                                 (2)
#define RF_383_RX_TIA2_EN_M_WIDTH                                               (1)
#define RF_383_RX_TIA2_EN_M_MASK                                                (0x00000004)
#define RF_383_RX_TIA2_EN_M_BIT                                                 (0x00000004)

#define RF_383_RXRXD_TIA2_MAN_LSB                                               (1)
#define RF_383_RXRXD_TIA2_MAN_WIDTH                                             (1)
#define RF_383_RXRXD_TIA2_MAN_MASK                                              (0x00000002)
#define RF_383_RXRXD_TIA2_MAN_BIT                                               (0x00000002)

#define RF_383_RXRXD_MIXER2_MAN_LSB                                             (0)
#define RF_383_RXRXD_MIXER2_MAN_WIDTH                                           (1)
#define RF_383_RXRXD_MIXER2_MAN_MASK                                            (0x00000001)
#define RF_383_RXRXD_MIXER2_MAN_BIT                                             (0x00000001)

#define RF_384_RX_G4_MIXER2_SRX2L_EN_M_LSB                                      (16)
#define RF_384_RX_G4_MIXER2_SRX2L_EN_M_WIDTH                                    (4)
#define RF_384_RX_G4_MIXER2_SRX2L_EN_M_MASK                                     (0x000F0000)

#define RF_384_RX_G3_MIXER2_SRX2L_EN_M_LSB                                      (12)
#define RF_384_RX_G3_MIXER2_SRX2L_EN_M_WIDTH                                    (4)
#define RF_384_RX_G3_MIXER2_SRX2L_EN_M_MASK                                     (0x0000F000)

#define RF_384_RX_G2_MIXER2_SRX2H_EN_M_LSB                                      (4)
#define RF_384_RX_G2_MIXER2_SRX2H_EN_M_WIDTH                                    (4)
#define RF_384_RX_G2_MIXER2_SRX2H_EN_M_MASK                                     (0x000000F0)

#define RF_384_RX_G1_MIXER2_SRX2H_EN_M_LSB                                      (0)
#define RF_384_RX_G1_MIXER2_SRX2H_EN_M_WIDTH                                    (4)
#define RF_384_RX_G1_MIXER2_SRX2H_EN_M_MASK                                     (0x0000000F)

#define RF_385_RXD_G4_MIXER2_SRX2L_EN_M_LSB                                     (16)
#define RF_385_RXD_G4_MIXER2_SRX2L_EN_M_WIDTH                                   (4)
#define RF_385_RXD_G4_MIXER2_SRX2L_EN_M_MASK                                    (0x000F0000)

#define RF_385_RXD_G3_MIXER2_SRX2L_EN_M_LSB                                     (12)
#define RF_385_RXD_G3_MIXER2_SRX2L_EN_M_WIDTH                                   (4)
#define RF_385_RXD_G3_MIXER2_SRX2L_EN_M_MASK                                    (0x0000F000)

#define RF_385_RXD_G2_MIXER2_SRX2H_EN_M_LSB                                     (4)
#define RF_385_RXD_G2_MIXER2_SRX2H_EN_M_WIDTH                                   (4)
#define RF_385_RXD_G2_MIXER2_SRX2H_EN_M_MASK                                    (0x000000F0)

#define RF_385_RXD_G1_MIXER2_SRX2H_EN_M_LSB                                     (0)
#define RF_385_RXD_G1_MIXER2_SRX2H_EN_M_WIDTH                                   (4)
#define RF_385_RXD_G1_MIXER2_SRX2H_EN_M_MASK                                    (0x0000000F)

#define RF_386_RXD_TTGIRCAL_EN_M_LSB                                            (10)
#define RF_386_RXD_TTGIRCAL_EN_M_WIDTH                                          (1)
#define RF_386_RXD_TTGIRCAL_EN_M_MASK                                           (0x00000400)
#define RF_386_RXD_TTGIRCAL_EN_M_BIT                                            (0x00000400)

#define RF_386_RXD_G4_TTGBUF_EN_M_LSB                                           (9)
#define RF_386_RXD_G4_TTGBUF_EN_M_WIDTH                                         (1)
#define RF_386_RXD_G4_TTGBUF_EN_M_MASK                                          (0x00000200)
#define RF_386_RXD_G4_TTGBUF_EN_M_BIT                                           (0x00000200)

#define RF_386_RXD_G3_TTGBUF_EN_M_LSB                                           (8)
#define RF_386_RXD_G3_TTGBUF_EN_M_WIDTH                                         (1)
#define RF_386_RXD_G3_TTGBUF_EN_M_MASK                                          (0x00000100)
#define RF_386_RXD_G3_TTGBUF_EN_M_BIT                                           (0x00000100)

#define RF_386_RXD_G2_TTGBUF_EN_M_LSB                                           (7)
#define RF_386_RXD_G2_TTGBUF_EN_M_WIDTH                                         (1)
#define RF_386_RXD_G2_TTGBUF_EN_M_MASK                                          (0x00000080)
#define RF_386_RXD_G2_TTGBUF_EN_M_BIT                                           (0x00000080)

#define RF_386_RXD_G1_TTGBUF_EN_M_LSB                                           (6)
#define RF_386_RXD_G1_TTGBUF_EN_M_WIDTH                                         (1)
#define RF_386_RXD_G1_TTGBUF_EN_M_MASK                                          (0x00000040)
#define RF_386_RXD_G1_TTGBUF_EN_M_BIT                                           (0x00000040)

#define RF_386_RX_TTGIRCAL_EN_M_LSB                                             (5)
#define RF_386_RX_TTGIRCAL_EN_M_WIDTH                                           (1)
#define RF_386_RX_TTGIRCAL_EN_M_MASK                                            (0x00000020)
#define RF_386_RX_TTGIRCAL_EN_M_BIT                                             (0x00000020)

#define RF_386_RX_G4_TTGBUF_EN_M_LSB                                            (4)
#define RF_386_RX_G4_TTGBUF_EN_M_WIDTH                                          (1)
#define RF_386_RX_G4_TTGBUF_EN_M_MASK                                           (0x00000010)
#define RF_386_RX_G4_TTGBUF_EN_M_BIT                                            (0x00000010)

#define RF_386_RX_G3_TTGBUF_EN_M_LSB                                            (3)
#define RF_386_RX_G3_TTGBUF_EN_M_WIDTH                                          (1)
#define RF_386_RX_G3_TTGBUF_EN_M_MASK                                           (0x00000008)
#define RF_386_RX_G3_TTGBUF_EN_M_BIT                                            (0x00000008)

#define RF_386_RX_G2_TTGBUF_EN_M_LSB                                            (2)
#define RF_386_RX_G2_TTGBUF_EN_M_WIDTH                                          (1)
#define RF_386_RX_G2_TTGBUF_EN_M_MASK                                           (0x00000004)
#define RF_386_RX_G2_TTGBUF_EN_M_BIT                                            (0x00000004)

#define RF_386_RX_G1_TTGBUF_EN_M_LSB                                            (1)
#define RF_386_RX_G1_TTGBUF_EN_M_WIDTH                                          (1)
#define RF_386_RX_G1_TTGBUF_EN_M_MASK                                           (0x00000002)
#define RF_386_RX_G1_TTGBUF_EN_M_BIT                                            (0x00000002)

#define RF_386_RXRXD_TTGBUF_MAN_LSB                                             (0)
#define RF_386_RXRXD_TTGBUF_MAN_WIDTH                                           (1)
#define RF_386_RXRXD_TTGBUF_MAN_MASK                                            (0x00000001)
#define RF_386_RXRXD_TTGBUF_MAN_BIT                                             (0x00000001)

#define RF_387_RXD_BIAS_TTGBIAS_EN_M_LSB                                        (16)
#define RF_387_RXD_BIAS_TTGBIAS_EN_M_WIDTH                                      (1)
#define RF_387_RXD_BIAS_TTGBIAS_EN_M_MASK                                       (0x00010000)
#define RF_387_RXD_BIAS_TTGBIAS_EN_M_BIT                                        (0x00010000)

#define RF_387_RXD_BIAS_TPDBIAS_EN_M_LSB                                        (15)
#define RF_387_RXD_BIAS_TPDBIAS_EN_M_WIDTH                                      (1)
#define RF_387_RXD_BIAS_TPDBIAS_EN_M_MASK                                       (0x00008000)
#define RF_387_RXD_BIAS_TPDBIAS_EN_M_BIT                                        (0x00008000)

#define RF_387_RXD_BIAS_TIA2BIAS_EN_M_LSB                                       (14)
#define RF_387_RXD_BIAS_TIA2BIAS_EN_M_WIDTH                                     (1)
#define RF_387_RXD_BIAS_TIA2BIAS_EN_M_MASK                                      (0x00004000)
#define RF_387_RXD_BIAS_TIA2BIAS_EN_M_BIT                                       (0x00004000)

#define RF_387_RXD_BIAS_TIA1BIAS_EN_M_LSB                                       (13)
#define RF_387_RXD_BIAS_TIA1BIAS_EN_M_WIDTH                                     (1)
#define RF_387_RXD_BIAS_TIA1BIAS_EN_M_MASK                                      (0x00002000)
#define RF_387_RXD_BIAS_TIA1BIAS_EN_M_BIT                                       (0x00002000)

#define RF_387_RXD_BIAS_RXBIAS_EN_M_LSB                                         (12)
#define RF_387_RXD_BIAS_RXBIAS_EN_M_WIDTH                                       (1)
#define RF_387_RXD_BIAS_RXBIAS_EN_M_MASK                                        (0x00001000)
#define RF_387_RXD_BIAS_RXBIAS_EN_M_BIT                                         (0x00001000)

#define RF_387_RXD_BIAS_MIXER2_EN_M_LSB                                         (11)
#define RF_387_RXD_BIAS_MIXER2_EN_M_WIDTH                                       (1)
#define RF_387_RXD_BIAS_MIXER2_EN_M_MASK                                        (0x00000800)
#define RF_387_RXD_BIAS_MIXER2_EN_M_BIT                                         (0x00000800)

#define RF_387_RXD_BIAS_MIXER1_EN_M_LSB                                         (10)
#define RF_387_RXD_BIAS_MIXER1_EN_M_WIDTH                                       (1)
#define RF_387_RXD_BIAS_MIXER1_EN_M_MASK                                        (0x00000400)
#define RF_387_RXD_BIAS_MIXER1_EN_M_BIT                                         (0x00000400)

#define RF_387_RXD_BIAS_LNABIAS_EN_M_LSB                                        (9)
#define RF_387_RXD_BIAS_LNABIAS_EN_M_WIDTH                                      (1)
#define RF_387_RXD_BIAS_LNABIAS_EN_M_MASK                                       (0x00000200)
#define RF_387_RXD_BIAS_LNABIAS_EN_M_BIT                                        (0x00000200)

#define RF_387_RX_BIAS_TTGBIAS_EN_M_LSB                                         (8)
#define RF_387_RX_BIAS_TTGBIAS_EN_M_WIDTH                                       (1)
#define RF_387_RX_BIAS_TTGBIAS_EN_M_MASK                                        (0x00000100)
#define RF_387_RX_BIAS_TTGBIAS_EN_M_BIT                                         (0x00000100)

#define RF_387_RX_BIAS_TPDBIAS_EN_M_LSB                                         (7)
#define RF_387_RX_BIAS_TPDBIAS_EN_M_WIDTH                                       (1)
#define RF_387_RX_BIAS_TPDBIAS_EN_M_MASK                                        (0x00000080)
#define RF_387_RX_BIAS_TPDBIAS_EN_M_BIT                                         (0x00000080)

#define RF_387_RX_BIAS_TIA2BIAS_EN_M_LSB                                        (6)
#define RF_387_RX_BIAS_TIA2BIAS_EN_M_WIDTH                                      (1)
#define RF_387_RX_BIAS_TIA2BIAS_EN_M_MASK                                       (0x00000040)
#define RF_387_RX_BIAS_TIA2BIAS_EN_M_BIT                                        (0x00000040)

#define RF_387_RX_BIAS_TIA1BIAS_EN_M_LSB                                        (5)
#define RF_387_RX_BIAS_TIA1BIAS_EN_M_WIDTH                                      (1)
#define RF_387_RX_BIAS_TIA1BIAS_EN_M_MASK                                       (0x00000020)
#define RF_387_RX_BIAS_TIA1BIAS_EN_M_BIT                                        (0x00000020)

#define RF_387_RX_BIAS_RXBIAS_EN_M_LSB                                          (4)
#define RF_387_RX_BIAS_RXBIAS_EN_M_WIDTH                                        (1)
#define RF_387_RX_BIAS_RXBIAS_EN_M_MASK                                         (0x00000010)
#define RF_387_RX_BIAS_RXBIAS_EN_M_BIT                                          (0x00000010)

#define RF_387_RX_BIAS_MIXER2_EN_M_LSB                                          (3)
#define RF_387_RX_BIAS_MIXER2_EN_M_WIDTH                                        (1)
#define RF_387_RX_BIAS_MIXER2_EN_M_MASK                                         (0x00000008)
#define RF_387_RX_BIAS_MIXER2_EN_M_BIT                                          (0x00000008)

#define RF_387_RX_BIAS_MIXER1_EN_M_LSB                                          (2)
#define RF_387_RX_BIAS_MIXER1_EN_M_WIDTH                                        (1)
#define RF_387_RX_BIAS_MIXER1_EN_M_MASK                                         (0x00000004)
#define RF_387_RX_BIAS_MIXER1_EN_M_BIT                                          (0x00000004)

#define RF_387_RX_BIAS_LNABIAS_EN_M_LSB                                         (1)
#define RF_387_RX_BIAS_LNABIAS_EN_M_WIDTH                                       (1)
#define RF_387_RX_BIAS_LNABIAS_EN_M_MASK                                        (0x00000002)
#define RF_387_RX_BIAS_LNABIAS_EN_M_BIT                                         (0x00000002)

#define RF_387_RXRXD_TOPBIAS_MAN_LSB                                            (0)
#define RF_387_RXRXD_TOPBIAS_MAN_WIDTH                                          (1)
#define RF_387_RXRXD_TOPBIAS_MAN_MASK                                           (0x00000001)
#define RF_387_RXRXD_TOPBIAS_MAN_BIT                                            (0x00000001)

#define RF_388_RX_IIP2C_BUFFER_RESERVE_M_LSB                                    (10)
#define RF_388_RX_IIP2C_BUFFER_RESERVE_M_WIDTH                                  (10)
#define RF_388_RX_IIP2C_BUFFER_RESERVE_M_MASK                                   (0x000FFC00)

#define RF_388_IIP2C_SW_RXG4_M_LSB                                              (9)
#define RF_388_IIP2C_SW_RXG4_M_WIDTH                                            (1)
#define RF_388_IIP2C_SW_RXG4_M_MASK                                             (0x00000200)
#define RF_388_IIP2C_SW_RXG4_M_BIT                                              (0x00000200)

#define RF_388_IIP2C_SW_RXG3_M_LSB                                              (8)
#define RF_388_IIP2C_SW_RXG3_M_WIDTH                                            (1)
#define RF_388_IIP2C_SW_RXG3_M_MASK                                             (0x00000100)
#define RF_388_IIP2C_SW_RXG3_M_BIT                                              (0x00000100)

#define RF_388_IIP2C_SW_RXG2_M_LSB                                              (7)
#define RF_388_IIP2C_SW_RXG2_M_WIDTH                                            (1)
#define RF_388_IIP2C_SW_RXG2_M_MASK                                             (0x00000080)
#define RF_388_IIP2C_SW_RXG2_M_BIT                                              (0x00000080)

#define RF_388_IIP2C_SW_RXG1_M_LSB                                              (6)
#define RF_388_IIP2C_SW_RXG1_M_WIDTH                                            (1)
#define RF_388_IIP2C_SW_RXG1_M_MASK                                             (0x00000040)
#define RF_388_IIP2C_SW_RXG1_M_BIT                                              (0x00000040)

#define RF_388_IIP2C_SW_TXLB34_M_LSB                                            (5)
#define RF_388_IIP2C_SW_TXLB34_M_WIDTH                                          (1)
#define RF_388_IIP2C_SW_TXLB34_M_MASK                                           (0x00000020)
#define RF_388_IIP2C_SW_TXLB34_M_BIT                                            (0x00000020)

#define RF_388_IIP2C_SW_TXMB34_M_LSB                                            (4)
#define RF_388_IIP2C_SW_TXMB34_M_WIDTH                                          (1)
#define RF_388_IIP2C_SW_TXMB34_M_MASK                                           (0x00000010)
#define RF_388_IIP2C_SW_TXMB34_M_BIT                                            (0x00000010)

#define RF_388_IIP2C_SW_TXMB12_M_LSB                                            (3)
#define RF_388_IIP2C_SW_TXMB12_M_WIDTH                                          (1)
#define RF_388_IIP2C_SW_TXMB12_M_MASK                                           (0x00000008)
#define RF_388_IIP2C_SW_TXMB12_M_BIT                                            (0x00000008)

#define RF_388_IIP2C_SW_TXHB12_M_LSB                                            (2)
#define RF_388_IIP2C_SW_TXHB12_M_WIDTH                                          (1)
#define RF_388_IIP2C_SW_TXHB12_M_MASK                                           (0x00000004)
#define RF_388_IIP2C_SW_TXHB12_M_BIT                                            (0x00000004)

#define RF_388_TX_TX2RX_LPBK_EN_M_LSB                                           (1)
#define RF_388_TX_TX2RX_LPBK_EN_M_WIDTH                                         (1)
#define RF_388_TX_TX2RX_LPBK_EN_M_MASK                                          (0x00000002)
#define RF_388_TX_TX2RX_LPBK_EN_M_BIT                                           (0x00000002)

#define RF_388_RX_IIP2C_BUFFER_MAN_LSB                                          (0)
#define RF_388_RX_IIP2C_BUFFER_MAN_WIDTH                                        (1)
#define RF_388_RX_IIP2C_BUFFER_MAN_MASK                                         (0x00000001)
#define RF_388_RX_IIP2C_BUFFER_MAN_BIT                                          (0x00000001)

#define RF_389_RG_RXRXD_LDO_BB_TEST_LSB                                         (14)
#define RF_389_RG_RXRXD_LDO_BB_TEST_WIDTH                                       (5)
#define RF_389_RG_RXRXD_LDO_BB_TEST_MASK                                        (0x0007C000)

#define RF_389_RG_RXRXD_LDO_BB_TEST_EN_LSB                                      (13)
#define RF_389_RG_RXRXD_LDO_BB_TEST_EN_WIDTH                                    (1)
#define RF_389_RG_RXRXD_LDO_BB_TEST_EN_MASK                                     (0x00002000)
#define RF_389_RG_RXRXD_LDO_BB_TEST_EN_BIT                                      (0x00002000)

#define RF_389_RXRXD_LDO_BB_FC_EN_LSB                                           (11)
#define RF_389_RXRXD_LDO_BB_FC_EN_WIDTH                                         (1)
#define RF_389_RXRXD_LDO_BB_FC_EN_MASK                                          (0x00000800)
#define RF_389_RXRXD_LDO_BB_FC_EN_BIT                                           (0x00000800)

#define RF_389_RG_RXRXD_LDO_BB_CAL_LSB                                          (10)
#define RF_389_RG_RXRXD_LDO_BB_CAL_WIDTH                                        (1)
#define RF_389_RG_RXRXD_LDO_BB_CAL_MASK                                         (0x00000400)
#define RF_389_RG_RXRXD_LDO_BB_CAL_BIT                                          (0x00000400)

#define RF_389_RG_RXRXD_LDO_BB_BUMPI_LSB                                        (9)
#define RF_389_RG_RXRXD_LDO_BB_BUMPI_WIDTH                                      (1)
#define RF_389_RG_RXRXD_LDO_BB_BUMPI_MASK                                       (0x00000200)
#define RF_389_RG_RXRXD_LDO_BB_BUMPI_BIT                                        (0x00000200)

#define RF_389_RG_RXRXD_LDO_BB_BUMP_LSB                                         (6)
#define RF_389_RG_RXRXD_LDO_BB_BUMP_WIDTH                                       (3)
#define RF_389_RG_RXRXD_LDO_BB_BUMP_MASK                                        (0x000001C0)

#define RF_389_RG_RXRXD_LDO_BB_BGRSEL_LSB                                       (0)
#define RF_389_RG_RXRXD_LDO_BB_BGRSEL_WIDTH                                     (6)
#define RF_389_RG_RXRXD_LDO_BB_BGRSEL_MASK                                      (0x0000003F)

#define RF_390_RG_RXRXD_LDO_LNA_TEST_LSB                                        (14)
#define RF_390_RG_RXRXD_LDO_LNA_TEST_WIDTH                                      (5)
#define RF_390_RG_RXRXD_LDO_LNA_TEST_MASK                                       (0x0007C000)

#define RF_390_RG_RXRXD_LDO_LNA_TEST_EN_LSB                                     (13)
#define RF_390_RG_RXRXD_LDO_LNA_TEST_EN_WIDTH                                   (1)
#define RF_390_RG_RXRXD_LDO_LNA_TEST_EN_MASK                                    (0x00002000)
#define RF_390_RG_RXRXD_LDO_LNA_TEST_EN_BIT                                     (0x00002000)

#define RF_390_RG_RXRXD_LDO_LNA_BYPASS_LSB                                      (12)
#define RF_390_RG_RXRXD_LDO_LNA_BYPASS_WIDTH                                    (1)
#define RF_390_RG_RXRXD_LDO_LNA_BYPASS_MASK                                     (0x00001000)
#define RF_390_RG_RXRXD_LDO_LNA_BYPASS_BIT                                      (0x00001000)

#define RF_390_RXRXD_LDO_LNA_FC_EN_LSB                                          (11)
#define RF_390_RXRXD_LDO_LNA_FC_EN_WIDTH                                        (1)
#define RF_390_RXRXD_LDO_LNA_FC_EN_MASK                                         (0x00000800)
#define RF_390_RXRXD_LDO_LNA_FC_EN_BIT                                          (0x00000800)

#define RF_390_RG_RXRXD_LDO_LNA_CAL_LSB                                         (10)
#define RF_390_RG_RXRXD_LDO_LNA_CAL_WIDTH                                       (1)
#define RF_390_RG_RXRXD_LDO_LNA_CAL_MASK                                        (0x00000400)
#define RF_390_RG_RXRXD_LDO_LNA_CAL_BIT                                         (0x00000400)

#define RF_390_RG_RXRXD_LDO_LNA_BUMPI_LSB                                       (9)
#define RF_390_RG_RXRXD_LDO_LNA_BUMPI_WIDTH                                     (1)
#define RF_390_RG_RXRXD_LDO_LNA_BUMPI_MASK                                      (0x00000200)
#define RF_390_RG_RXRXD_LDO_LNA_BUMPI_BIT                                       (0x00000200)

#define RF_390_RG_RXRXD_LDO_LNA_BUMP_LSB                                        (6)
#define RF_390_RG_RXRXD_LDO_LNA_BUMP_WIDTH                                      (3)
#define RF_390_RG_RXRXD_LDO_LNA_BUMP_MASK                                       (0x000001C0)

#define RF_390_RG_RXRXD_LDO_LNA_BGRSEL_LSB                                      (0)
#define RF_390_RG_RXRXD_LDO_LNA_BGRSEL_WIDTH                                    (6)
#define RF_390_RG_RXRXD_LDO_LNA_BGRSEL_MASK                                     (0x0000003F)

#define RF_391_RG_RXRXD_LDO_LO_TEST_LSB                                         (14)
#define RF_391_RG_RXRXD_LDO_LO_TEST_WIDTH                                       (5)
#define RF_391_RG_RXRXD_LDO_LO_TEST_MASK                                        (0x0007C000)

#define RF_391_RG_RXRXD_LDO_LO_TEST_EN_LSB                                      (13)
#define RF_391_RG_RXRXD_LDO_LO_TEST_EN_WIDTH                                    (1)
#define RF_391_RG_RXRXD_LDO_LO_TEST_EN_MASK                                     (0x00002000)
#define RF_391_RG_RXRXD_LDO_LO_TEST_EN_BIT                                      (0x00002000)

#define RF_391_RG_RXRXD_LDO_LO_BYPASS_LSB                                       (12)
#define RF_391_RG_RXRXD_LDO_LO_BYPASS_WIDTH                                     (1)
#define RF_391_RG_RXRXD_LDO_LO_BYPASS_MASK                                      (0x00001000)
#define RF_391_RG_RXRXD_LDO_LO_BYPASS_BIT                                       (0x00001000)

#define RF_391_RXRXD_LDO_LO_FC_EN_LSB                                           (11)
#define RF_391_RXRXD_LDO_LO_FC_EN_WIDTH                                         (1)
#define RF_391_RXRXD_LDO_LO_FC_EN_MASK                                          (0x00000800)
#define RF_391_RXRXD_LDO_LO_FC_EN_BIT                                           (0x00000800)

#define RF_391_RG_RXRXD_LDO_LO_CAL_LSB                                          (10)
#define RF_391_RG_RXRXD_LDO_LO_CAL_WIDTH                                        (1)
#define RF_391_RG_RXRXD_LDO_LO_CAL_MASK                                         (0x00000400)
#define RF_391_RG_RXRXD_LDO_LO_CAL_BIT                                          (0x00000400)

#define RF_391_RG_RXRXD_LDO_LO_BUMPI_LSB                                        (9)
#define RF_391_RG_RXRXD_LDO_LO_BUMPI_WIDTH                                      (1)
#define RF_391_RG_RXRXD_LDO_LO_BUMPI_MASK                                       (0x00000200)
#define RF_391_RG_RXRXD_LDO_LO_BUMPI_BIT                                        (0x00000200)

#define RF_391_RXRXD_LDO_LO_BUMP_LSB                                            (6)
#define RF_391_RXRXD_LDO_LO_BUMP_WIDTH                                          (3)
#define RF_391_RXRXD_LDO_LO_BUMP_MASK                                           (0x000001C0)

#define RF_391_RG_RXRXD_LDO_LO_BGRSEL_LSB                                       (0)
#define RF_391_RG_RXRXD_LDO_LO_BGRSEL_WIDTH                                     (6)
#define RF_391_RG_RXRXD_LDO_LO_BGRSEL_MASK                                      (0x0000003F)

#define RF_392_RG_RXRXD_LDO_RESERVE_LSB                                         (10)
#define RF_392_RG_RXRXD_LDO_RESERVE_WIDTH                                       (10)
#define RF_392_RG_RXRXD_LDO_RESERVE_MASK                                        (0x000FFC00)

#define RF_392_RXRXD_LDO_EARLY_ON_LSB                                           (0)
#define RF_392_RXRXD_LDO_EARLY_ON_WIDTH                                         (1)
#define RF_392_RXRXD_LDO_EARLY_ON_MASK                                          (0x00000001)
#define RF_392_RXRXD_LDO_EARLY_ON_BIT                                           (0x00000001)

#define RF_393_RG_RXD_LNA_FBR_CTRL_MANUAL_LSB                                   (15)
#define RF_393_RG_RXD_LNA_FBR_CTRL_MANUAL_WIDTH                                 (1)
#define RF_393_RG_RXD_LNA_FBR_CTRL_MANUAL_MASK                                  (0x00008000)
#define RF_393_RG_RXD_LNA_FBR_CTRL_MANUAL_BIT                                   (0x00008000)

#define RF_393_RG_RXD_LNA_FBR_CTRL_LSB                                          (8)
#define RF_393_RG_RXD_LNA_FBR_CTRL_WIDTH                                        (7)
#define RF_393_RG_RXD_LNA_FBR_CTRL_MASK                                         (0x00007F00)

#define RF_393_RG_RX_LNA_FBR_CTRL_MANUAL_LSB                                    (7)
#define RF_393_RG_RX_LNA_FBR_CTRL_MANUAL_WIDTH                                  (1)
#define RF_393_RG_RX_LNA_FBR_CTRL_MANUAL_MASK                                   (0x00000080)
#define RF_393_RG_RX_LNA_FBR_CTRL_MANUAL_BIT                                    (0x00000080)

#define RF_393_RG_RX_LNA_FBR_CTRL_LSB                                           (0)
#define RF_393_RG_RX_LNA_FBR_CTRL_WIDTH                                         (7)
#define RF_393_RG_RX_LNA_FBR_CTRL_MASK                                          (0x0000007F)

#define RF_394_RG_RX_G2_TLF_ENB_LSB                                             (6)
#define RF_394_RG_RX_G2_TLF_ENB_WIDTH                                           (6)
#define RF_394_RG_RX_G2_TLF_ENB_MASK                                            (0x00000FC0)

#define RF_394_RG_RX_G1_TLF_ENB_LSB                                             (0)
#define RF_394_RG_RX_G1_TLF_ENB_WIDTH                                           (6)
#define RF_394_RG_RX_G1_TLF_ENB_MASK                                            (0x0000003F)

#define RF_395_RG_RX_G4_TLF_ENB_LSB                                             (6)
#define RF_395_RG_RX_G4_TLF_ENB_WIDTH                                           (6)
#define RF_395_RG_RX_G4_TLF_ENB_MASK                                            (0x00000FC0)

#define RF_395_RG_RX_G3_TLF_ENB_LSB                                             (0)
#define RF_395_RG_RX_G3_TLF_ENB_WIDTH                                           (6)
#define RF_395_RG_RX_G3_TLF_ENB_MASK                                            (0x0000003F)

#define RF_396_RG_RX_TTGBUF_TEST_LSB                                            (15)
#define RF_396_RG_RX_TTGBUF_TEST_WIDTH                                          (2)
#define RF_396_RG_RX_TTGBUF_TEST_MASK                                           (0x00018000)

#define RF_396_RG_RX_TTGBUF_RBUMP2_LSB                                          (12)
#define RF_396_RG_RX_TTGBUF_RBUMP2_WIDTH                                        (3)
#define RF_396_RG_RX_TTGBUF_RBUMP2_MASK                                         (0x00007000)

#define RF_396_RG_RX_TTGBUF_IBUMP_LSB                                           (9)
#define RF_396_RG_RX_TTGBUF_IBUMP_WIDTH                                         (3)
#define RF_396_RG_RX_TTGBUF_IBUMP_MASK                                          (0x00000E00)

#define RF_396_RG_RX_TTGBUF_GAIN_LSB                                            (5)
#define RF_396_RG_RX_TTGBUF_GAIN_WIDTH                                          (4)
#define RF_396_RG_RX_TTGBUF_GAIN_MASK                                           (0x000001E0)

#define RF_396_RG_RX_TTGBUF_CD_GAIN_LSB                                         (2)
#define RF_396_RG_RX_TTGBUF_CD_GAIN_WIDTH                                       (3)
#define RF_396_RG_RX_TTGBUF_CD_GAIN_MASK                                        (0x0000001C)

#define RF_396_RG_RXRXD_MIXER_LO_VDD_SEL_LSB                                    (0)
#define RF_396_RG_RXRXD_MIXER_LO_VDD_SEL_WIDTH                                  (2)
#define RF_396_RG_RXRXD_MIXER_LO_VDD_SEL_MASK                                   (0x00000003)

#define RF_397_RG_RXD_TTGBUF_TEST_LSB                                           (15)
#define RF_397_RG_RXD_TTGBUF_TEST_WIDTH                                         (2)
#define RF_397_RG_RXD_TTGBUF_TEST_MASK                                          (0x00018000)

#define RF_397_RG_RXD_TTGBUF_RBUMP2_LSB                                         (12)
#define RF_397_RG_RXD_TTGBUF_RBUMP2_WIDTH                                       (3)
#define RF_397_RG_RXD_TTGBUF_RBUMP2_MASK                                        (0x00007000)

#define RF_397_RG_RXD_TTGBUF_IBUMP_LSB                                          (9)
#define RF_397_RG_RXD_TTGBUF_IBUMP_WIDTH                                        (3)
#define RF_397_RG_RXD_TTGBUF_IBUMP_MASK                                         (0x00000E00)

#define RF_397_RG_RXD_TTGBUF_GAIN_LSB                                           (5)
#define RF_397_RG_RXD_TTGBUF_GAIN_WIDTH                                         (4)
#define RF_397_RG_RXD_TTGBUF_GAIN_MASK                                          (0x000001E0)

#define RF_397_RG_RXD_TTGBUF_CD_GAIN_LSB                                        (2)
#define RF_397_RG_RXD_TTGBUF_CD_GAIN_WIDTH                                      (3)
#define RF_397_RG_RXD_TTGBUF_CD_GAIN_MASK                                       (0x0000001C)

#define RF_398_RG_RX_DRV_SEL_LSB                                                (4)
#define RF_398_RG_RX_DRV_SEL_WIDTH                                              (2)
#define RF_398_RG_RX_DRV_SEL_MASK                                               (0x00000030)

#define RF_398_RG_RX_TTGBUF_SE_ON_LSB                                           (3)
#define RF_398_RG_RX_TTGBUF_SE_ON_WIDTH                                         (1)
#define RF_398_RG_RX_TTGBUF_SE_ON_MASK                                          (0x00000008)
#define RF_398_RG_RX_TTGBUF_SE_ON_BIT                                           (0x00000008)

#define RF_398_RG_RX_TTGBUF_DRV_ATTEN_LSB                                       (0)
#define RF_398_RG_RX_TTGBUF_DRV_ATTEN_WIDTH                                     (3)
#define RF_398_RG_RX_TTGBUF_DRV_ATTEN_MASK                                      (0x00000007)

#define RF_399_RG_RXD_BIAS_MIXER1_VBIAS_SEL_LSB                                 (10)
#define RF_399_RG_RXD_BIAS_MIXER1_VBIAS_SEL_WIDTH                               (4)
#define RF_399_RG_RXD_BIAS_MIXER1_VBIAS_SEL_MASK                                (0x00003C00)

#define RF_399_RG_RXD_BIAS_MIXER1_IIP2C_RSLN_LSB                                (7)
#define RF_399_RG_RXD_BIAS_MIXER1_IIP2C_RSLN_WIDTH                              (3)
#define RF_399_RG_RXD_BIAS_MIXER1_IIP2C_RSLN_MASK                               (0x00000380)

#define RF_399_RG_RX_BIAS_MIXER1_VBIAS_SEL_LSB                                  (3)
#define RF_399_RG_RX_BIAS_MIXER1_VBIAS_SEL_WIDTH                                (4)
#define RF_399_RG_RX_BIAS_MIXER1_VBIAS_SEL_MASK                                 (0x00000078)

#define RF_399_RG_RX_BIAS_MIXER1_IIP2C_RSLN_LSB                                 (0)
#define RF_399_RG_RX_BIAS_MIXER1_IIP2C_RSLN_WIDTH                               (3)
#define RF_399_RG_RX_BIAS_MIXER1_IIP2C_RSLN_MASK                                (0x00000007)

#define RF_400_RG_RXD_BIAS_MIXER2_VBIAS_SEL_LSB                                 (10)
#define RF_400_RG_RXD_BIAS_MIXER2_VBIAS_SEL_WIDTH                               (4)
#define RF_400_RG_RXD_BIAS_MIXER2_VBIAS_SEL_MASK                                (0x00003C00)

#define RF_400_RG_RXD_BIAS_MIXER2_IIP2C_RSLN_LSB                                (7)
#define RF_400_RG_RXD_BIAS_MIXER2_IIP2C_RSLN_WIDTH                              (3)
#define RF_400_RG_RXD_BIAS_MIXER2_IIP2C_RSLN_MASK                               (0x00000380)

#define RF_400_RG_RX_BIAS_MIXER2_VBIAS_SEL_LSB                                  (3)
#define RF_400_RG_RX_BIAS_MIXER2_VBIAS_SEL_WIDTH                                (4)
#define RF_400_RG_RX_BIAS_MIXER2_VBIAS_SEL_MASK                                 (0x00000078)

#define RF_400_RG_RX_BIAS_MIXER2_IIP2C_RSLN_LSB                                 (0)
#define RF_400_RG_RX_BIAS_MIXER2_IIP2C_RSLN_WIDTH                               (3)
#define RF_400_RG_RX_BIAS_MIXER2_IIP2C_RSLN_MASK                                (0x00000007)

#define RF_401_RG_RX_BIAS_VCM_SEL_LSB                                           (8)
#define RF_401_RG_RX_BIAS_VCM_SEL_WIDTH                                         (7)
#define RF_401_RG_RX_BIAS_VCM_SEL_MASK                                          (0x00007F00)

#define RF_401_RG_RX_BIAS_TIABIAS_CUR_LSB                                       (4)
#define RF_401_RG_RX_BIAS_TIABIAS_CUR_WIDTH                                     (4)
#define RF_401_RG_RX_BIAS_TIABIAS_CUR_MASK                                      (0x000000F0)

#define RF_401_RG_RX_BIAS_LNABIAS_CUR_LSB                                       (0)
#define RF_401_RG_RX_BIAS_LNABIAS_CUR_WIDTH                                     (4)
#define RF_401_RG_RX_BIAS_LNABIAS_CUR_MASK                                      (0x0000000F)

#define RF_402_RG_RXD_BIAS_VCM_SEL_LSB                                          (8)
#define RF_402_RG_RXD_BIAS_VCM_SEL_WIDTH                                        (7)
#define RF_402_RG_RXD_BIAS_VCM_SEL_MASK                                         (0x00007F00)

#define RF_402_RG_RXD_BIAS_TIABIAS_CUR_LSB                                      (4)
#define RF_402_RG_RXD_BIAS_TIABIAS_CUR_WIDTH                                    (4)
#define RF_402_RG_RXD_BIAS_TIABIAS_CUR_MASK                                     (0x000000F0)

#define RF_402_RG_RXD_BIAS_LNABIAS_CUR_LSB                                      (0)
#define RF_402_RG_RXD_BIAS_LNABIAS_CUR_WIDTH                                    (4)
#define RF_402_RG_RXD_BIAS_LNABIAS_CUR_MASK                                     (0x0000000F)

#define RF_403_RG_RX_TOP_TEST_RIGHT_LSB                                         (3)
#define RF_403_RG_RX_TOP_TEST_RIGHT_WIDTH                                       (16)
#define RF_403_RG_RX_TOP_TEST_RIGHT_MASK                                        (0x0007FFF8)

#define RF_403_RG_RX_ABB1_TEST_LSB                                              (0)
#define RF_403_RG_RX_ABB1_TEST_WIDTH                                            (3)
#define RF_403_RG_RX_ABB1_TEST_MASK                                             (0x00000007)

#define RF_404_RG_RX_TOP_TEST_LEFT_LSB                                          (3)
#define RF_404_RG_RX_TOP_TEST_LEFT_WIDTH                                        (16)
#define RF_404_RG_RX_TOP_TEST_LEFT_MASK                                         (0x0007FFF8)

#define RF_404_RG_RX_ABB2_TEST_LSB                                              (0)
#define RF_404_RG_RX_ABB2_TEST_WIDTH                                            (3)
#define RF_404_RG_RX_ABB2_TEST_MASK                                             (0x00000007)

#define RF_405_RG_RXD_LNA_RESERVE_LSB                                           (10)
#define RF_405_RG_RXD_LNA_RESERVE_WIDTH                                         (10)
#define RF_405_RG_RXD_LNA_RESERVE_MASK                                          (0x000FFC00)

#define RF_405_RG_RX_LNA_RESERVE_LSB                                            (0)
#define RF_405_RG_RX_LNA_RESERVE_WIDTH                                          (10)
#define RF_405_RG_RX_LNA_RESERVE_MASK                                           (0x000003FF)

#define RF_406_RG_RXD_TTGBUF_RESERVE_LSB                                        (10)
#define RF_406_RG_RXD_TTGBUF_RESERVE_WIDTH                                      (10)
#define RF_406_RG_RXD_TTGBUF_RESERVE_MASK                                       (0x000FFC00)

#define RF_406_RG_RX_TTGBUF_RESERVE_LSB                                         (0)
#define RF_406_RG_RX_TTGBUF_RESERVE_WIDTH                                       (10)
#define RF_406_RG_RX_TTGBUF_RESERVE_MASK                                        (0x000003FF)

#define RF_407_RG_RXRXD_MIXER1_RESERVE_LSB                                      (0)
#define RF_407_RG_RXRXD_MIXER1_RESERVE_WIDTH                                    (10)
#define RF_407_RG_RXRXD_MIXER1_RESERVE_MASK                                     (0x000003FF)

#define RF_408_RG_RXD_TIA1_RESERVE_LSB                                          (10)
#define RF_408_RG_RXD_TIA1_RESERVE_WIDTH                                        (10)
#define RF_408_RG_RXD_TIA1_RESERVE_MASK                                         (0x000FFC00)

#define RF_408_RG_RX_TIA1_RESERVE_LSB                                           (0)
#define RF_408_RG_RX_TIA1_RESERVE_WIDTH                                         (10)
#define RF_408_RG_RX_TIA1_RESERVE_MASK                                          (0x000003FF)

#define RF_409_RG_RXRXD_MIXER2_RESERVE_LSB                                      (0)
#define RF_409_RG_RXRXD_MIXER2_RESERVE_WIDTH                                    (10)
#define RF_409_RG_RXRXD_MIXER2_RESERVE_MASK                                     (0x000003FF)

#define RF_410_RG_RXD_TIA2_RESERVE_LSB                                          (10)
#define RF_410_RG_RXD_TIA2_RESERVE_WIDTH                                        (10)
#define RF_410_RG_RXD_TIA2_RESERVE_MASK                                         (0x000FFC00)

#define RF_410_RG_RX_TIA2_RESERVE_LSB                                           (0)
#define RF_410_RG_RX_TIA2_RESERVE_WIDTH                                         (10)
#define RF_410_RG_RX_TIA2_RESERVE_MASK                                          (0x000003FF)

#define RF_411_RG_RXRXD_LDO_MMD_BYPASS_LSB                                      (3)
#define RF_411_RG_RXRXD_LDO_MMD_BYPASS_WIDTH                                    (1)
#define RF_411_RG_RXRXD_LDO_MMD_BYPASS_MASK                                     (0x00000008)
#define RF_411_RG_RXRXD_LDO_MMD_BYPASS_BIT                                      (0x00000008)

#define RF_411_RXRXD_LDO_LO_BUMP_FCAL_LSB                                       (0)
#define RF_411_RXRXD_LDO_LO_BUMP_FCAL_WIDTH                                     (3)
#define RF_411_RXRXD_LDO_LO_BUMP_FCAL_MASK                                      (0x00000007)

#define RF_413_RG_RX1_BYPASS_ABB_LSB                                            (12)
#define RF_413_RG_RX1_BYPASS_ABB_WIDTH                                          (1)
#define RF_413_RG_RX1_BYPASS_ABB_MASK                                           (0x00001000)
#define RF_413_RG_RX1_BYPASS_ABB_BIT                                            (0x00001000)

#define RF_413_RX_TIA1_CAP_HALF_LSB                                             (11)
#define RF_413_RX_TIA1_CAP_HALF_WIDTH                                           (1)
#define RF_413_RX_TIA1_CAP_HALF_MASK                                            (0x00000800)
#define RF_413_RX_TIA1_CAP_HALF_BIT                                             (0x00000800)

#define RF_413_RG_RX_TIA1_OPOUT_BIAS_LSB                                        (9)
#define RF_413_RG_RX_TIA1_OPOUT_BIAS_WIDTH                                      (2)
#define RF_413_RG_RX_TIA1_OPOUT_BIAS_MASK                                       (0x00000600)

#define RF_413_RG_RX_TIA1_OPIN_BIAS_LSB                                         (7)
#define RF_413_RG_RX_TIA1_OPIN_BIAS_WIDTH                                       (2)
#define RF_413_RG_RX_TIA1_OPIN_BIAS_MASK                                        (0x00000180)

#define RF_413_RX_MIXER1_SLICE_ON_LSB                                           (3)
#define RF_413_RX_MIXER1_SLICE_ON_WIDTH                                         (4)
#define RF_413_RX_MIXER1_SLICE_ON_MASK                                          (0x00000078)

#define RF_413_RG_RX_TIA1_LPM_LSB                                               (2)
#define RF_413_RG_RX_TIA1_LPM_WIDTH                                             (1)
#define RF_413_RG_RX_TIA1_LPM_MASK                                              (0x00000004)
#define RF_413_RG_RX_TIA1_LPM_BIT                                               (0x00000004)

#define RF_413_RX_MIXER1_LPM_LSB                                                (1)
#define RF_413_RX_MIXER1_LPM_WIDTH                                              (1)
#define RF_413_RX_MIXER1_LPM_MASK                                               (0x00000002)
#define RF_413_RX_MIXER1_LPM_BIT                                                (0x00000002)

#define RF_413_RX1_LNA_LPM_LSB                                                  (0)
#define RF_413_RX1_LNA_LPM_WIDTH                                                (1)
#define RF_413_RX1_LNA_LPM_MASK                                                 (0x00000001)
#define RF_413_RX1_LNA_LPM_BIT                                                  (0x00000001)

#define RF_414_RG_RXD1_BYPASS_ABB_LSB                                           (12)
#define RF_414_RG_RXD1_BYPASS_ABB_WIDTH                                         (1)
#define RF_414_RG_RXD1_BYPASS_ABB_MASK                                          (0x00001000)
#define RF_414_RG_RXD1_BYPASS_ABB_BIT                                           (0x00001000)

#define RF_414_RXD_TIA1_CAP_HALF_LSB                                            (11)
#define RF_414_RXD_TIA1_CAP_HALF_WIDTH                                          (1)
#define RF_414_RXD_TIA1_CAP_HALF_MASK                                           (0x00000800)
#define RF_414_RXD_TIA1_CAP_HALF_BIT                                            (0x00000800)

#define RF_414_RG_RXD_TIA1_OPOUT_BIAS_LSB                                       (9)
#define RF_414_RG_RXD_TIA1_OPOUT_BIAS_WIDTH                                     (2)
#define RF_414_RG_RXD_TIA1_OPOUT_BIAS_MASK                                      (0x00000600)

#define RF_414_RG_RXD_TIA1_OPIN_BIAS_LSB                                        (7)
#define RF_414_RG_RXD_TIA1_OPIN_BIAS_WIDTH                                      (2)
#define RF_414_RG_RXD_TIA1_OPIN_BIAS_MASK                                       (0x00000180)

#define RF_414_RXD_MIXER1_SLICE_ON_LSB                                          (3)
#define RF_414_RXD_MIXER1_SLICE_ON_WIDTH                                        (4)
#define RF_414_RXD_MIXER1_SLICE_ON_MASK                                         (0x00000078)

#define RF_414_RG_RXD_TIA1_LPM_LSB                                              (2)
#define RF_414_RG_RXD_TIA1_LPM_WIDTH                                            (1)
#define RF_414_RG_RXD_TIA1_LPM_MASK                                             (0x00000004)
#define RF_414_RG_RXD_TIA1_LPM_BIT                                              (0x00000004)

#define RF_414_RXD_MIXER1_LPM_LSB                                               (1)
#define RF_414_RXD_MIXER1_LPM_WIDTH                                             (1)
#define RF_414_RXD_MIXER1_LPM_MASK                                              (0x00000002)
#define RF_414_RXD_MIXER1_LPM_BIT                                               (0x00000002)

#define RF_414_RXD1_LNA_LPM_LSB                                                 (0)
#define RF_414_RXD1_LNA_LPM_WIDTH                                               (1)
#define RF_414_RXD1_LNA_LPM_MASK                                                (0x00000001)
#define RF_414_RXD1_LNA_LPM_BIT                                                 (0x00000001)

#define RF_415_RG_RX2_BYPASS_ABB_LSB                                            (12)
#define RF_415_RG_RX2_BYPASS_ABB_WIDTH                                          (1)
#define RF_415_RG_RX2_BYPASS_ABB_MASK                                           (0x00001000)
#define RF_415_RG_RX2_BYPASS_ABB_BIT                                            (0x00001000)

#define RF_415_RX_TIA2_CAP_HALF_LSB                                             (11)
#define RF_415_RX_TIA2_CAP_HALF_WIDTH                                           (1)
#define RF_415_RX_TIA2_CAP_HALF_MASK                                            (0x00000800)
#define RF_415_RX_TIA2_CAP_HALF_BIT                                             (0x00000800)

#define RF_415_RG_RX_TIA2_OPOUT_BIAS_LSB                                        (9)
#define RF_415_RG_RX_TIA2_OPOUT_BIAS_WIDTH                                      (2)
#define RF_415_RG_RX_TIA2_OPOUT_BIAS_MASK                                       (0x00000600)

#define RF_415_RG_RX_TIA2_OPIN_BIAS_LSB                                         (7)
#define RF_415_RG_RX_TIA2_OPIN_BIAS_WIDTH                                       (2)
#define RF_415_RG_RX_TIA2_OPIN_BIAS_MASK                                        (0x00000180)

#define RF_415_RX_MIXER2_SLICE_ON_LSB                                           (3)
#define RF_415_RX_MIXER2_SLICE_ON_WIDTH                                         (4)
#define RF_415_RX_MIXER2_SLICE_ON_MASK                                          (0x00000078)

#define RF_415_RG_RX_TIA2_LPM_LSB                                               (2)
#define RF_415_RG_RX_TIA2_LPM_WIDTH                                             (1)
#define RF_415_RG_RX_TIA2_LPM_MASK                                              (0x00000004)
#define RF_415_RG_RX_TIA2_LPM_BIT                                               (0x00000004)

#define RF_415_RX_MIXER2_LPM_LSB                                                (1)
#define RF_415_RX_MIXER2_LPM_WIDTH                                              (1)
#define RF_415_RX_MIXER2_LPM_MASK                                               (0x00000002)
#define RF_415_RX_MIXER2_LPM_BIT                                                (0x00000002)

#define RF_415_RX2_LNA_LPM_LSB                                                  (0)
#define RF_415_RX2_LNA_LPM_WIDTH                                                (1)
#define RF_415_RX2_LNA_LPM_MASK                                                 (0x00000001)
#define RF_415_RX2_LNA_LPM_BIT                                                  (0x00000001)

#define RF_416_RG_RXD2_BYPASS_ABB_LSB                                           (12)
#define RF_416_RG_RXD2_BYPASS_ABB_WIDTH                                         (1)
#define RF_416_RG_RXD2_BYPASS_ABB_MASK                                          (0x00001000)
#define RF_416_RG_RXD2_BYPASS_ABB_BIT                                           (0x00001000)

#define RF_416_RXD_TIA2_CAP_HALF_LSB                                            (11)
#define RF_416_RXD_TIA2_CAP_HALF_WIDTH                                          (1)
#define RF_416_RXD_TIA2_CAP_HALF_MASK                                           (0x00000800)
#define RF_416_RXD_TIA2_CAP_HALF_BIT                                            (0x00000800)

#define RF_416_RG_RXD_TIA2_OPOUT_BIAS_LSB                                       (9)
#define RF_416_RG_RXD_TIA2_OPOUT_BIAS_WIDTH                                     (2)
#define RF_416_RG_RXD_TIA2_OPOUT_BIAS_MASK                                      (0x00000600)

#define RF_416_RG_RXD_TIA2_OPIN_BIAS_LSB                                        (7)
#define RF_416_RG_RXD_TIA2_OPIN_BIAS_WIDTH                                      (2)
#define RF_416_RG_RXD_TIA2_OPIN_BIAS_MASK                                       (0x00000180)

#define RF_416_RXD_MIXER2_SLICE_ON_LSB                                          (3)
#define RF_416_RXD_MIXER2_SLICE_ON_WIDTH                                        (4)
#define RF_416_RXD_MIXER2_SLICE_ON_MASK                                         (0x00000078)

#define RF_416_RG_RXD_TIA2_LPM_LSB                                              (2)
#define RF_416_RG_RXD_TIA2_LPM_WIDTH                                            (1)
#define RF_416_RG_RXD_TIA2_LPM_MASK                                             (0x00000004)
#define RF_416_RG_RXD_TIA2_LPM_BIT                                              (0x00000004)

#define RF_416_RXD_MIXER2_LPM_LSB                                               (1)
#define RF_416_RXD_MIXER2_LPM_WIDTH                                             (1)
#define RF_416_RXD_MIXER2_LPM_MASK                                              (0x00000002)
#define RF_416_RXD_MIXER2_LPM_BIT                                               (0x00000002)

#define RF_416_RXD2_LNA_LPM_LSB                                                 (0)
#define RF_416_RXD2_LNA_LPM_WIDTH                                               (1)
#define RF_416_RXD2_LNA_LPM_MASK                                                (0x00000001)
#define RF_416_RXD2_LNA_LPM_BIT                                                 (0x00000001)

#define RF_419_RX_WPD1_Y_RO_LSB                                                 (9)
#define RF_419_RX_WPD1_Y_RO_WIDTH                                               (11)
#define RF_419_RX_WPD1_Y_RO_MASK                                                (0x000FFE00)

#define RF_419_RX_WPD1_L_RO_LSB                                                 (2)
#define RF_419_RX_WPD1_L_RO_WIDTH                                               (7)
#define RF_419_RX_WPD1_L_RO_MASK                                                (0x000001FC)

#define RF_419_RX_WPD1_READY_RO_LSB                                             (1)
#define RF_419_RX_WPD1_READY_RO_WIDTH                                           (1)
#define RF_419_RX_WPD1_READY_RO_MASK                                            (0x00000002)
#define RF_419_RX_WPD1_READY_RO_BIT                                             (0x00000002)

#define RF_420_RX_WPD2_Y_RO_LSB                                                 (9)
#define RF_420_RX_WPD2_Y_RO_WIDTH                                               (11)
#define RF_420_RX_WPD2_Y_RO_MASK                                                (0x000FFE00)

#define RF_420_RX_WPD2_L_RO_LSB                                                 (2)
#define RF_420_RX_WPD2_L_RO_WIDTH                                               (7)
#define RF_420_RX_WPD2_L_RO_MASK                                                (0x000001FC)

#define RF_420_RX_WPD2_READY_RO_LSB                                             (1)
#define RF_420_RX_WPD2_READY_RO_WIDTH                                           (1)
#define RF_420_RX_WPD2_READY_RO_MASK                                            (0x00000002)
#define RF_420_RX_WPD2_READY_RO_BIT                                             (0x00000002)

#define RF_421_RX_WPD1_OUT_READY_RO_LSB                                         (19)
#define RF_421_RX_WPD1_OUT_READY_RO_WIDTH                                       (1)
#define RF_421_RX_WPD1_OUT_READY_RO_MASK                                        (0x00080000)
#define RF_421_RX_WPD1_OUT_READY_RO_BIT                                         (0x00080000)

#define RF_421_RXD_WPD1_OUT_READY_RO_LSB                                        (18)
#define RF_421_RXD_WPD1_OUT_READY_RO_WIDTH                                      (1)
#define RF_421_RXD_WPD1_OUT_READY_RO_MASK                                       (0x00040000)
#define RF_421_RXD_WPD1_OUT_READY_RO_BIT                                        (0x00040000)

#define RF_421_RX_WPD1_OUT_RO_LSB                                               (12)
#define RF_421_RX_WPD1_OUT_RO_WIDTH                                             (6)
#define RF_421_RX_WPD1_OUT_RO_MASK                                              (0x0003F000)

#define RF_421_RXD_WPD1_OUT_RO_LSB                                              (6)
#define RF_421_RXD_WPD1_OUT_RO_WIDTH                                            (6)
#define RF_421_RXD_WPD1_OUT_RO_MASK                                             (0x00000FC0)

#define RF_422_RX_WPD2_OUT_READY_RO_LSB                                         (19)
#define RF_422_RX_WPD2_OUT_READY_RO_WIDTH                                       (1)
#define RF_422_RX_WPD2_OUT_READY_RO_MASK                                        (0x00080000)
#define RF_422_RX_WPD2_OUT_READY_RO_BIT                                         (0x00080000)

#define RF_422_RXD_WPD2_OUT_READY_RO_LSB                                        (18)
#define RF_422_RXD_WPD2_OUT_READY_RO_WIDTH                                      (1)
#define RF_422_RXD_WPD2_OUT_READY_RO_MASK                                       (0x00040000)
#define RF_422_RXD_WPD2_OUT_READY_RO_BIT                                        (0x00040000)

#define RF_422_RX_WPD2_OUT_RO_LSB                                               (12)
#define RF_422_RX_WPD2_OUT_RO_WIDTH                                             (6)
#define RF_422_RX_WPD2_OUT_RO_MASK                                              (0x0003F000)

#define RF_422_RXD_WPD2_OUT_RO_LSB                                              (6)
#define RF_422_RXD_WPD2_OUT_RO_WIDTH                                            (6)
#define RF_422_RXD_WPD2_OUT_RO_MASK                                             (0x00000FC0)

#define RF_423_RX_WPD1_TRIGGER_LSB                                              (19)
#define RF_423_RX_WPD1_TRIGGER_WIDTH                                            (1)
#define RF_423_RX_WPD1_TRIGGER_MASK                                             (0x00080000)
#define RF_423_RX_WPD1_TRIGGER_BIT                                              (0x00080000)

#define RF_423_RX_WPD1_DELAY_LSB                                                (16)
#define RF_423_RX_WPD1_DELAY_WIDTH                                              (3)
#define RF_423_RX_WPD1_DELAY_MASK                                               (0x00070000)

#define RF_423_RX_WPD1_MIN_LSB                                                  (12)
#define RF_423_RX_WPD1_MIN_WIDTH                                                (4)
#define RF_423_RX_WPD1_MIN_MASK                                                 (0x0000F000)

#define RF_423_RX_WPD1_SLOTS_LSB                                                (7)
#define RF_423_RX_WPD1_SLOTS_WIDTH                                              (5)
#define RF_423_RX_WPD1_SLOTS_MASK                                               (0x00000F80)

#define RF_423_RX_WPD1_REPEATS_LSB                                              (3)
#define RF_423_RX_WPD1_REPEATS_WIDTH                                            (4)
#define RF_423_RX_WPD1_REPEATS_MASK                                             (0x00000078)

#define RF_423_RX_WPD1_SAR_BIT_TIME_LSB                                         (0)
#define RF_423_RX_WPD1_SAR_BIT_TIME_WIDTH                                       (3)
#define RF_423_RX_WPD1_SAR_BIT_TIME_MASK                                        (0x00000007)

#define RF_424_RX_WPD1_FLIP_LSB                                                 (19)
#define RF_424_RX_WPD1_FLIP_WIDTH                                               (1)
#define RF_424_RX_WPD1_FLIP_MASK                                                (0x00080000)
#define RF_424_RX_WPD1_FLIP_BIT                                                 (0x00080000)

#define RF_424_RX_WPD1_DCOC_BIT_TIME_LSB                                        (17)
#define RF_424_RX_WPD1_DCOC_BIT_TIME_WIDTH                                      (2)
#define RF_424_RX_WPD1_DCOC_BIT_TIME_MASK                                       (0x00060000)

#define RF_424_RX_WPD1_DCOC_MAN_LSB                                             (16)
#define RF_424_RX_WPD1_DCOC_MAN_WIDTH                                           (1)
#define RF_424_RX_WPD1_DCOC_MAN_MASK                                            (0x00010000)
#define RF_424_RX_WPD1_DCOC_MAN_BIT                                             (0x00010000)

#define RF_424_RX_WPD1_EN_M_LSB                                                 (15)
#define RF_424_RX_WPD1_EN_M_WIDTH                                               (1)
#define RF_424_RX_WPD1_EN_M_MASK                                                (0x00008000)
#define RF_424_RX_WPD1_EN_M_BIT                                                 (0x00008000)

#define RF_424_RX_WPD1_DCOC_M_LSB                                               (11)
#define RF_424_RX_WPD1_DCOC_M_WIDTH                                             (4)
#define RF_424_RX_WPD1_DCOC_M_MASK                                              (0x00007800)

#define RF_424_RX_WPD1_OFF_LSB                                                  (10)
#define RF_424_RX_WPD1_OFF_WIDTH                                                (1)
#define RF_424_RX_WPD1_OFF_MASK                                                 (0x00000400)
#define RF_424_RX_WPD1_OFF_BIT                                                  (0x00000400)

#define RF_424_RX_WPD1_HWCG_BYPASS_LSB                                          (9)
#define RF_424_RX_WPD1_HWCG_BYPASS_WIDTH                                        (1)
#define RF_424_RX_WPD1_HWCG_BYPASS_MASK                                         (0x00000200)
#define RF_424_RX_WPD1_HWCG_BYPASS_BIT                                          (0x00000200)

#define RF_424_RX_WPD1_MAN_LSB                                                  (8)
#define RF_424_RX_WPD1_MAN_WIDTH                                                (1)
#define RF_424_RX_WPD1_MAN_MASK                                                 (0x00000100)
#define RF_424_RX_WPD1_MAN_BIT                                                  (0x00000100)

#define RF_424_RX_WPD1_IQ_SEL_LSB                                               (7)
#define RF_424_RX_WPD1_IQ_SEL_WIDTH                                             (1)
#define RF_424_RX_WPD1_IQ_SEL_MASK                                              (0x00000080)
#define RF_424_RX_WPD1_IQ_SEL_BIT                                               (0x00000080)

#define RF_425_RG_RX_WPD1_HP_LSB                                                (19)
#define RF_425_RG_RX_WPD1_HP_WIDTH                                              (1)
#define RF_425_RG_RX_WPD1_HP_MASK                                               (0x00080000)
#define RF_425_RG_RX_WPD1_HP_BIT                                                (0x00080000)

#define RF_425_RG_RX_WPD1_GBUMP_LSB                                             (17)
#define RF_425_RG_RX_WPD1_GBUMP_WIDTH                                           (2)
#define RF_425_RG_RX_WPD1_GBUMP_MASK                                            (0x00060000)

#define RF_425_RG_RX_WPD1_IBUMP_LSB                                             (15)
#define RF_425_RG_RX_WPD1_IBUMP_WIDTH                                           (2)
#define RF_425_RG_RX_WPD1_IBUMP_MASK                                            (0x00018000)

#define RF_425_RG_RX_WPD1_VCM_LSB                                               (13)
#define RF_425_RG_RX_WPD1_VCM_WIDTH                                             (2)
#define RF_425_RG_RX_WPD1_VCM_MASK                                              (0x00006000)

#define RF_425_RG_RX_WPD1_TEST_LSB                                              (10)
#define RF_425_RG_RX_WPD1_TEST_WIDTH                                            (3)
#define RF_425_RG_RX_WPD1_TEST_MASK                                             (0x00001C00)

#define RF_425_RG_RX_WPD1_CB_OUT_LSB                                            (8)
#define RF_425_RG_RX_WPD1_CB_OUT_WIDTH                                          (2)
#define RF_425_RG_RX_WPD1_CB_OUT_MASK                                           (0x00000300)

#define RF_425_RG_RX_WPD1_RTRIM_EN1_LSB                                         (7)
#define RF_425_RG_RX_WPD1_RTRIM_EN1_WIDTH                                       (1)
#define RF_425_RG_RX_WPD1_RTRIM_EN1_MASK                                        (0x00000080)
#define RF_425_RG_RX_WPD1_RTRIM_EN1_BIT                                         (0x00000080)

#define RF_425_RG_RX_WPD1_RTRIM_EN2_LSB                                         (6)
#define RF_425_RG_RX_WPD1_RTRIM_EN2_WIDTH                                       (1)
#define RF_425_RG_RX_WPD1_RTRIM_EN2_MASK                                        (0x00000040)
#define RF_425_RG_RX_WPD1_RTRIM_EN2_BIT                                         (0x00000040)

#define RF_426_RX_WPD2_TRIGGER_LSB                                              (19)
#define RF_426_RX_WPD2_TRIGGER_WIDTH                                            (1)
#define RF_426_RX_WPD2_TRIGGER_MASK                                             (0x00080000)
#define RF_426_RX_WPD2_TRIGGER_BIT                                              (0x00080000)

#define RF_426_RX_WPD2_DELAY_LSB                                                (16)
#define RF_426_RX_WPD2_DELAY_WIDTH                                              (3)
#define RF_426_RX_WPD2_DELAY_MASK                                               (0x00070000)

#define RF_426_RX_WPD2_MIN_LSB                                                  (12)
#define RF_426_RX_WPD2_MIN_WIDTH                                                (4)
#define RF_426_RX_WPD2_MIN_MASK                                                 (0x0000F000)

#define RF_426_RX_WPD2_SLOTS_LSB                                                (7)
#define RF_426_RX_WPD2_SLOTS_WIDTH                                              (5)
#define RF_426_RX_WPD2_SLOTS_MASK                                               (0x00000F80)

#define RF_426_RX_WPD2_REPEATS_LSB                                              (3)
#define RF_426_RX_WPD2_REPEATS_WIDTH                                            (4)
#define RF_426_RX_WPD2_REPEATS_MASK                                             (0x00000078)

#define RF_426_RX_WPD2_SAR_BIT_TIME_LSB                                         (0)
#define RF_426_RX_WPD2_SAR_BIT_TIME_WIDTH                                       (3)
#define RF_426_RX_WPD2_SAR_BIT_TIME_MASK                                        (0x00000007)

#define RF_427_RX_WPD2_FLIP_LSB                                                 (19)
#define RF_427_RX_WPD2_FLIP_WIDTH                                               (1)
#define RF_427_RX_WPD2_FLIP_MASK                                                (0x00080000)
#define RF_427_RX_WPD2_FLIP_BIT                                                 (0x00080000)

#define RF_427_RX_WPD2_DCOC_BIT_TIME_LSB                                        (17)
#define RF_427_RX_WPD2_DCOC_BIT_TIME_WIDTH                                      (2)
#define RF_427_RX_WPD2_DCOC_BIT_TIME_MASK                                       (0x00060000)

#define RF_427_RX_WPD2_DCOC_MAN_LSB                                             (16)
#define RF_427_RX_WPD2_DCOC_MAN_WIDTH                                           (1)
#define RF_427_RX_WPD2_DCOC_MAN_MASK                                            (0x00010000)
#define RF_427_RX_WPD2_DCOC_MAN_BIT                                             (0x00010000)

#define RF_427_RX_WPD2_EN_M_LSB                                                 (15)
#define RF_427_RX_WPD2_EN_M_WIDTH                                               (1)
#define RF_427_RX_WPD2_EN_M_MASK                                                (0x00008000)
#define RF_427_RX_WPD2_EN_M_BIT                                                 (0x00008000)

#define RF_427_RX_WPD2_DCOC_M_LSB                                               (11)
#define RF_427_RX_WPD2_DCOC_M_WIDTH                                             (4)
#define RF_427_RX_WPD2_DCOC_M_MASK                                              (0x00007800)

#define RF_427_RX_WPD2_OFF_LSB                                                  (10)
#define RF_427_RX_WPD2_OFF_WIDTH                                                (1)
#define RF_427_RX_WPD2_OFF_MASK                                                 (0x00000400)
#define RF_427_RX_WPD2_OFF_BIT                                                  (0x00000400)

#define RF_427_RX_WPD2_HWCG_BYPASS_LSB                                          (9)
#define RF_427_RX_WPD2_HWCG_BYPASS_WIDTH                                        (1)
#define RF_427_RX_WPD2_HWCG_BYPASS_MASK                                         (0x00000200)
#define RF_427_RX_WPD2_HWCG_BYPASS_BIT                                          (0x00000200)

#define RF_427_RX_WPD2_MAN_LSB                                                  (8)
#define RF_427_RX_WPD2_MAN_WIDTH                                                (1)
#define RF_427_RX_WPD2_MAN_MASK                                                 (0x00000100)
#define RF_427_RX_WPD2_MAN_BIT                                                  (0x00000100)

#define RF_427_RX_WPD2_IQ_SEL_LSB                                               (7)
#define RF_427_RX_WPD2_IQ_SEL_WIDTH                                             (1)
#define RF_427_RX_WPD2_IQ_SEL_MASK                                              (0x00000080)
#define RF_427_RX_WPD2_IQ_SEL_BIT                                               (0x00000080)

#define RF_428_RG_RX_WPD2_HP_LSB                                                (19)
#define RF_428_RG_RX_WPD2_HP_WIDTH                                              (1)
#define RF_428_RG_RX_WPD2_HP_MASK                                               (0x00080000)
#define RF_428_RG_RX_WPD2_HP_BIT                                                (0x00080000)

#define RF_428_RG_RX_WPD2_GBUMP_LSB                                             (17)
#define RF_428_RG_RX_WPD2_GBUMP_WIDTH                                           (2)
#define RF_428_RG_RX_WPD2_GBUMP_MASK                                            (0x00060000)

#define RF_428_RG_RX_WPD2_IBUMP_LSB                                             (15)
#define RF_428_RG_RX_WPD2_IBUMP_WIDTH                                           (2)
#define RF_428_RG_RX_WPD2_IBUMP_MASK                                            (0x00018000)

#define RF_428_RG_RX_WPD2_VCM_LSB                                               (13)
#define RF_428_RG_RX_WPD2_VCM_WIDTH                                             (2)
#define RF_428_RG_RX_WPD2_VCM_MASK                                              (0x00006000)

#define RF_428_RG_RX_WPD2_TEST_LSB                                              (10)
#define RF_428_RG_RX_WPD2_TEST_WIDTH                                            (3)
#define RF_428_RG_RX_WPD2_TEST_MASK                                             (0x00001C00)

#define RF_428_RG_RX_WPD2_CB_OUT_LSB                                            (8)
#define RF_428_RG_RX_WPD2_CB_OUT_WIDTH                                          (2)
#define RF_428_RG_RX_WPD2_CB_OUT_MASK                                           (0x00000300)

#define RF_428_RG_RX_WPD2_RTRIM_EN1_LSB                                         (7)
#define RF_428_RG_RX_WPD2_RTRIM_EN1_WIDTH                                       (1)
#define RF_428_RG_RX_WPD2_RTRIM_EN1_MASK                                        (0x00000080)
#define RF_428_RG_RX_WPD2_RTRIM_EN1_BIT                                         (0x00000080)

#define RF_428_RG_RX_WPD2_RTRIM_EN2_LSB                                         (6)
#define RF_428_RG_RX_WPD2_RTRIM_EN2_WIDTH                                       (1)
#define RF_428_RG_RX_WPD2_RTRIM_EN2_MASK                                        (0x00000040)
#define RF_428_RG_RX_WPD2_RTRIM_EN2_BIT                                         (0x00000040)

#define RF_429_RXD_WPD1_TRIGGER_LSB                                             (19)
#define RF_429_RXD_WPD1_TRIGGER_WIDTH                                           (1)
#define RF_429_RXD_WPD1_TRIGGER_MASK                                            (0x00080000)
#define RF_429_RXD_WPD1_TRIGGER_BIT                                             (0x00080000)

#define RF_429_RXD_WPD1_DELAY_LSB                                               (16)
#define RF_429_RXD_WPD1_DELAY_WIDTH                                             (3)
#define RF_429_RXD_WPD1_DELAY_MASK                                              (0x00070000)

#define RF_429_RXD_WPD1_MIN_LSB                                                 (12)
#define RF_429_RXD_WPD1_MIN_WIDTH                                               (4)
#define RF_429_RXD_WPD1_MIN_MASK                                                (0x0000F000)

#define RF_429_RXD_WPD1_SLOTS_LSB                                               (7)
#define RF_429_RXD_WPD1_SLOTS_WIDTH                                             (5)
#define RF_429_RXD_WPD1_SLOTS_MASK                                              (0x00000F80)

#define RF_429_RXD_WPD1_REPEATS_LSB                                             (3)
#define RF_429_RXD_WPD1_REPEATS_WIDTH                                           (4)
#define RF_429_RXD_WPD1_REPEATS_MASK                                            (0x00000078)

#define RF_429_RXD_WPD1_SAR_BIT_TIME_LSB                                        (0)
#define RF_429_RXD_WPD1_SAR_BIT_TIME_WIDTH                                      (3)
#define RF_429_RXD_WPD1_SAR_BIT_TIME_MASK                                       (0x00000007)

#define RF_430_RXD_WPD1_FLIP_LSB                                                (19)
#define RF_430_RXD_WPD1_FLIP_WIDTH                                              (1)
#define RF_430_RXD_WPD1_FLIP_MASK                                               (0x00080000)
#define RF_430_RXD_WPD1_FLIP_BIT                                                (0x00080000)

#define RF_430_RXD_WPD1_DCOC_BIT_TIME_LSB                                       (17)
#define RF_430_RXD_WPD1_DCOC_BIT_TIME_WIDTH                                     (2)
#define RF_430_RXD_WPD1_DCOC_BIT_TIME_MASK                                      (0x00060000)

#define RF_430_RXD_WPD1_DCOC_MAN_LSB                                            (16)
#define RF_430_RXD_WPD1_DCOC_MAN_WIDTH                                          (1)
#define RF_430_RXD_WPD1_DCOC_MAN_MASK                                           (0x00010000)
#define RF_430_RXD_WPD1_DCOC_MAN_BIT                                            (0x00010000)

#define RF_430_RXD_WPD1_EN_M_LSB                                                (15)
#define RF_430_RXD_WPD1_EN_M_WIDTH                                              (1)
#define RF_430_RXD_WPD1_EN_M_MASK                                               (0x00008000)
#define RF_430_RXD_WPD1_EN_M_BIT                                                (0x00008000)

#define RF_430_RXD_WPD1_DCOC_M_LSB                                              (11)
#define RF_430_RXD_WPD1_DCOC_M_WIDTH                                            (4)
#define RF_430_RXD_WPD1_DCOC_M_MASK                                             (0x00007800)

#define RF_430_RXD_WPD1_OFF_LSB                                                 (10)
#define RF_430_RXD_WPD1_OFF_WIDTH                                               (1)
#define RF_430_RXD_WPD1_OFF_MASK                                                (0x00000400)
#define RF_430_RXD_WPD1_OFF_BIT                                                 (0x00000400)

#define RF_430_RXD_WPD1_HWCG_BYPASS_LSB                                         (9)
#define RF_430_RXD_WPD1_HWCG_BYPASS_WIDTH                                       (1)
#define RF_430_RXD_WPD1_HWCG_BYPASS_MASK                                        (0x00000200)
#define RF_430_RXD_WPD1_HWCG_BYPASS_BIT                                         (0x00000200)

#define RF_430_RXD_WPD1_MAN_LSB                                                 (8)
#define RF_430_RXD_WPD1_MAN_WIDTH                                               (1)
#define RF_430_RXD_WPD1_MAN_MASK                                                (0x00000100)
#define RF_430_RXD_WPD1_MAN_BIT                                                 (0x00000100)

#define RF_430_RXD_WPD1_IQ_SEL_LSB                                              (7)
#define RF_430_RXD_WPD1_IQ_SEL_WIDTH                                            (1)
#define RF_430_RXD_WPD1_IQ_SEL_MASK                                             (0x00000080)
#define RF_430_RXD_WPD1_IQ_SEL_BIT                                              (0x00000080)

#define RF_431_RG_RXD_WPD1_HP_LSB                                               (19)
#define RF_431_RG_RXD_WPD1_HP_WIDTH                                             (1)
#define RF_431_RG_RXD_WPD1_HP_MASK                                              (0x00080000)
#define RF_431_RG_RXD_WPD1_HP_BIT                                               (0x00080000)

#define RF_431_RG_RXD_WPD1_GBUMP_LSB                                            (17)
#define RF_431_RG_RXD_WPD1_GBUMP_WIDTH                                          (2)
#define RF_431_RG_RXD_WPD1_GBUMP_MASK                                           (0x00060000)

#define RF_431_RG_RXD_WPD1_IBUMP_LSB                                            (15)
#define RF_431_RG_RXD_WPD1_IBUMP_WIDTH                                          (2)
#define RF_431_RG_RXD_WPD1_IBUMP_MASK                                           (0x00018000)

#define RF_431_RG_RXD_WPD1_VCM_LSB                                              (13)
#define RF_431_RG_RXD_WPD1_VCM_WIDTH                                            (2)
#define RF_431_RG_RXD_WPD1_VCM_MASK                                             (0x00006000)

#define RF_431_RG_RXD_WPD1_TEST_LSB                                             (10)
#define RF_431_RG_RXD_WPD1_TEST_WIDTH                                           (3)
#define RF_431_RG_RXD_WPD1_TEST_MASK                                            (0x00001C00)

#define RF_431_RG_RXD_WPD1_CB_OUT_LSB                                           (8)
#define RF_431_RG_RXD_WPD1_CB_OUT_WIDTH                                         (2)
#define RF_431_RG_RXD_WPD1_CB_OUT_MASK                                          (0x00000300)

#define RF_431_RG_RXD_WPD1_RTRIM_EN1_LSB                                        (7)
#define RF_431_RG_RXD_WPD1_RTRIM_EN1_WIDTH                                      (1)
#define RF_431_RG_RXD_WPD1_RTRIM_EN1_MASK                                       (0x00000080)
#define RF_431_RG_RXD_WPD1_RTRIM_EN1_BIT                                        (0x00000080)

#define RF_431_RG_RXD_WPD1_RTRIM_EN2_LSB                                        (6)
#define RF_431_RG_RXD_WPD1_RTRIM_EN2_WIDTH                                      (1)
#define RF_431_RG_RXD_WPD1_RTRIM_EN2_MASK                                       (0x00000040)
#define RF_431_RG_RXD_WPD1_RTRIM_EN2_BIT                                        (0x00000040)

#define RF_432_RXD_WPD2_TRIGGER_LSB                                             (19)
#define RF_432_RXD_WPD2_TRIGGER_WIDTH                                           (1)
#define RF_432_RXD_WPD2_TRIGGER_MASK                                            (0x00080000)
#define RF_432_RXD_WPD2_TRIGGER_BIT                                             (0x00080000)

#define RF_432_RXD_WPD2_DELAY_LSB                                               (16)
#define RF_432_RXD_WPD2_DELAY_WIDTH                                             (3)
#define RF_432_RXD_WPD2_DELAY_MASK                                              (0x00070000)

#define RF_432_RXD_WPD2_MIN_LSB                                                 (12)
#define RF_432_RXD_WPD2_MIN_WIDTH                                               (4)
#define RF_432_RXD_WPD2_MIN_MASK                                                (0x0000F000)

#define RF_432_RXD_WPD2_SLOTS_LSB                                               (7)
#define RF_432_RXD_WPD2_SLOTS_WIDTH                                             (5)
#define RF_432_RXD_WPD2_SLOTS_MASK                                              (0x00000F80)

#define RF_432_RXD_WPD2_REPEATS_LSB                                             (3)
#define RF_432_RXD_WPD2_REPEATS_WIDTH                                           (4)
#define RF_432_RXD_WPD2_REPEATS_MASK                                            (0x00000078)

#define RF_432_RXD_WPD2_SAR_BIT_TIME_LSB                                        (0)
#define RF_432_RXD_WPD2_SAR_BIT_TIME_WIDTH                                      (3)
#define RF_432_RXD_WPD2_SAR_BIT_TIME_MASK                                       (0x00000007)

#define RF_433_RXD_WPD2_FLIP_LSB                                                (19)
#define RF_433_RXD_WPD2_FLIP_WIDTH                                              (1)
#define RF_433_RXD_WPD2_FLIP_MASK                                               (0x00080000)
#define RF_433_RXD_WPD2_FLIP_BIT                                                (0x00080000)

#define RF_433_RXD_WPD2_DCOC_BIT_TIME_LSB                                       (17)
#define RF_433_RXD_WPD2_DCOC_BIT_TIME_WIDTH                                     (2)
#define RF_433_RXD_WPD2_DCOC_BIT_TIME_MASK                                      (0x00060000)

#define RF_433_RXD_WPD2_DCOC_MAN_LSB                                            (16)
#define RF_433_RXD_WPD2_DCOC_MAN_WIDTH                                          (1)
#define RF_433_RXD_WPD2_DCOC_MAN_MASK                                           (0x00010000)
#define RF_433_RXD_WPD2_DCOC_MAN_BIT                                            (0x00010000)

#define RF_433_RXD_WPD2_EN_M_LSB                                                (15)
#define RF_433_RXD_WPD2_EN_M_WIDTH                                              (1)
#define RF_433_RXD_WPD2_EN_M_MASK                                               (0x00008000)
#define RF_433_RXD_WPD2_EN_M_BIT                                                (0x00008000)

#define RF_433_RXD_WPD2_DCOC_M_LSB                                              (11)
#define RF_433_RXD_WPD2_DCOC_M_WIDTH                                            (4)
#define RF_433_RXD_WPD2_DCOC_M_MASK                                             (0x00007800)

#define RF_433_RXD_WPD2_OFF_LSB                                                 (10)
#define RF_433_RXD_WPD2_OFF_WIDTH                                               (1)
#define RF_433_RXD_WPD2_OFF_MASK                                                (0x00000400)
#define RF_433_RXD_WPD2_OFF_BIT                                                 (0x00000400)

#define RF_433_RXD_WPD2_HWCG_BYPASS_LSB                                         (9)
#define RF_433_RXD_WPD2_HWCG_BYPASS_WIDTH                                       (1)
#define RF_433_RXD_WPD2_HWCG_BYPASS_MASK                                        (0x00000200)
#define RF_433_RXD_WPD2_HWCG_BYPASS_BIT                                         (0x00000200)

#define RF_433_RXD_WPD2_MAN_LSB                                                 (8)
#define RF_433_RXD_WPD2_MAN_WIDTH                                               (1)
#define RF_433_RXD_WPD2_MAN_MASK                                                (0x00000100)
#define RF_433_RXD_WPD2_MAN_BIT                                                 (0x00000100)

#define RF_433_RXD_WPD2_IQ_SEL_LSB                                              (7)
#define RF_433_RXD_WPD2_IQ_SEL_WIDTH                                            (1)
#define RF_433_RXD_WPD2_IQ_SEL_MASK                                             (0x00000080)
#define RF_433_RXD_WPD2_IQ_SEL_BIT                                              (0x00000080)

#define RF_434_RG_RXD_WPD2_HP_LSB                                               (19)
#define RF_434_RG_RXD_WPD2_HP_WIDTH                                             (1)
#define RF_434_RG_RXD_WPD2_HP_MASK                                              (0x00080000)
#define RF_434_RG_RXD_WPD2_HP_BIT                                               (0x00080000)

#define RF_434_RG_RXD_WPD2_GBUMP_LSB                                            (17)
#define RF_434_RG_RXD_WPD2_GBUMP_WIDTH                                          (2)
#define RF_434_RG_RXD_WPD2_GBUMP_MASK                                           (0x00060000)

#define RF_434_RG_RXD_WPD2_IBUMP_LSB                                            (15)
#define RF_434_RG_RXD_WPD2_IBUMP_WIDTH                                          (2)
#define RF_434_RG_RXD_WPD2_IBUMP_MASK                                           (0x00018000)

#define RF_434_RG_RXD_WPD2_VCM_LSB                                              (13)
#define RF_434_RG_RXD_WPD2_VCM_WIDTH                                            (2)
#define RF_434_RG_RXD_WPD2_VCM_MASK                                             (0x00006000)

#define RF_434_RG_RXD_WPD2_TEST_LSB                                             (10)
#define RF_434_RG_RXD_WPD2_TEST_WIDTH                                           (3)
#define RF_434_RG_RXD_WPD2_TEST_MASK                                            (0x00001C00)

#define RF_434_RG_RXD_WPD2_CB_OUT_LSB                                           (8)
#define RF_434_RG_RXD_WPD2_CB_OUT_WIDTH                                         (2)
#define RF_434_RG_RXD_WPD2_CB_OUT_MASK                                          (0x00000300)

#define RF_434_RG_RXD_WPD2_RTRIM_EN1_LSB                                        (7)
#define RF_434_RG_RXD_WPD2_RTRIM_EN1_WIDTH                                      (1)
#define RF_434_RG_RXD_WPD2_RTRIM_EN1_MASK                                       (0x00000080)
#define RF_434_RG_RXD_WPD2_RTRIM_EN1_BIT                                        (0x00000080)

#define RF_434_RG_RXD_WPD2_RTRIM_EN2_LSB                                        (6)
#define RF_434_RG_RXD_WPD2_RTRIM_EN2_WIDTH                                      (1)
#define RF_434_RG_RXD_WPD2_RTRIM_EN2_MASK                                       (0x00000040)
#define RF_434_RG_RXD_WPD2_RTRIM_EN2_BIT                                        (0x00000040)

#define RF_435_RXD_WPD1_Y_RO_LSB                                                (9)
#define RF_435_RXD_WPD1_Y_RO_WIDTH                                              (11)
#define RF_435_RXD_WPD1_Y_RO_MASK                                               (0x000FFE00)

#define RF_435_RXD_WPD1_L_RO_LSB                                                (2)
#define RF_435_RXD_WPD1_L_RO_WIDTH                                              (7)
#define RF_435_RXD_WPD1_L_RO_MASK                                               (0x000001FC)

#define RF_435_RXD_WPD1_READY_RO_LSB                                            (1)
#define RF_435_RXD_WPD1_READY_RO_WIDTH                                          (1)
#define RF_435_RXD_WPD1_READY_RO_MASK                                           (0x00000002)
#define RF_435_RXD_WPD1_READY_RO_BIT                                            (0x00000002)

#define RF_436_RXD_WPD2_Y_RO_LSB                                                (9)
#define RF_436_RXD_WPD2_Y_RO_WIDTH                                              (11)
#define RF_436_RXD_WPD2_Y_RO_MASK                                               (0x000FFE00)

#define RF_436_RXD_WPD2_L_RO_LSB                                                (2)
#define RF_436_RXD_WPD2_L_RO_WIDTH                                              (7)
#define RF_436_RXD_WPD2_L_RO_MASK                                               (0x000001FC)

#define RF_436_RXD_WPD2_READY_RO_LSB                                            (1)
#define RF_436_RXD_WPD2_READY_RO_WIDTH                                          (1)
#define RF_436_RXD_WPD2_READY_RO_MASK                                           (0x00000002)
#define RF_436_RXD_WPD2_READY_RO_BIT                                            (0x00000002)

#define RF_445_RCK_PERIOD1_32X_LSB                                              (17)
#define RF_445_RCK_PERIOD1_32X_WIDTH                                            (3)
#define RF_445_RCK_PERIOD1_32X_MASK                                             (0x000E0000)

#define RF_445_RCK_PERIOD2_1X_LSB                                               (15)
#define RF_445_RCK_PERIOD2_1X_WIDTH                                             (2)
#define RF_445_RCK_PERIOD2_1X_MASK                                              (0x00018000)

#define RF_445_RCK_PERIOD3_1X_LSB                                               (10)
#define RF_445_RCK_PERIOD3_1X_WIDTH                                             (5)
#define RF_445_RCK_PERIOD3_1X_MASK                                              (0x00007C00)

#define RF_445_RCK_PERIOD4_1X_LSB                                               (5)
#define RF_445_RCK_PERIOD4_1X_WIDTH                                             (5)
#define RF_445_RCK_PERIOD4_1X_MASK                                              (0x000003E0)

#define RF_445_RCK_PERIOD5_8X_LSB                                               (3)
#define RF_445_RCK_PERIOD5_8X_WIDTH                                             (2)
#define RF_445_RCK_PERIOD5_8X_MASK                                              (0x00000018)

#define RF_445_RCK_PERIOD6_1X_LSB                                               (0)
#define RF_445_RCK_PERIOD6_1X_WIDTH                                             (3)
#define RF_445_RCK_PERIOD6_1X_MASK                                              (0x00000007)

#define RF_446_RXIF_RCK_MAN_LSB                                                 (19)
#define RF_446_RXIF_RCK_MAN_WIDTH                                               (1)
#define RF_446_RXIF_RCK_MAN_MASK                                                (0x00080000)
#define RF_446_RXIF_RCK_MAN_BIT                                                 (0x00080000)

#define RF_446_RXIF_RCK_MODE_M_LSB                                              (18)
#define RF_446_RXIF_RCK_MODE_M_WIDTH                                            (1)
#define RF_446_RXIF_RCK_MODE_M_MASK                                             (0x00040000)
#define RF_446_RXIF_RCK_MODE_M_BIT                                              (0x00040000)

#define RF_446_RXIF_RCK_POW_M_LSB                                               (17)
#define RF_446_RXIF_RCK_POW_M_WIDTH                                             (1)
#define RF_446_RXIF_RCK_POW_M_MASK                                              (0x00020000)
#define RF_446_RXIF_RCK_POW_M_BIT                                               (0x00020000)

#define RF_446_RCKOUT_SEL_MAN_LSB                                               (16)
#define RF_446_RCKOUT_SEL_MAN_WIDTH                                             (1)
#define RF_446_RCKOUT_SEL_MAN_MASK                                              (0x00010000)
#define RF_446_RCKOUT_SEL_MAN_BIT                                               (0x00010000)

#define RF_446_RCKOUT_SEL_M_LSB                                                 (15)
#define RF_446_RCKOUT_SEL_M_WIDTH                                               (1)
#define RF_446_RCKOUT_SEL_M_MASK                                                (0x00008000)
#define RF_446_RCKOUT_SEL_M_BIT                                                 (0x00008000)

#define RF_447_DG_RXIF_RCK_LSB                                                  (14)
#define RF_447_DG_RXIF_RCK_WIDTH                                                (6)
#define RF_447_DG_RXIF_RCK_MASK                                                 (0x000FC000)

#define RF_447_RXIF_RCK_CAL_LSB                                                 (8)
#define RF_447_RXIF_RCK_CAL_WIDTH                                               (6)
#define RF_447_RXIF_RCK_CAL_MASK                                                (0x00003F00)

#define RF_448_RXIF1_POW_MAN_LSB                                                (19)
#define RF_448_RXIF1_POW_MAN_WIDTH                                              (1)
#define RF_448_RXIF1_POW_MAN_MASK                                               (0x00080000)
#define RF_448_RXIF1_POW_MAN_BIT                                                (0x00080000)

#define RF_448_RXIF1_EN_M_LSB                                                   (18)
#define RF_448_RXIF1_EN_M_WIDTH                                                 (1)
#define RF_448_RXIF1_EN_M_MASK                                                  (0x00040000)
#define RF_448_RXIF1_EN_M_BIT                                                   (0x00040000)

#define RF_448_RG_RXIF1_CUR_LSB                                                 (9)
#define RF_448_RG_RXIF1_CUR_WIDTH                                               (9)
#define RF_448_RG_RXIF1_CUR_MASK                                                (0x0003FE00)

#define RF_448_RG_REV_RXIF1_STG2_BS_LSB                                         (8)
#define RF_448_RG_REV_RXIF1_STG2_BS_WIDTH                                       (1)
#define RF_448_RG_REV_RXIF1_STG2_BS_MASK                                        (0x00000100)
#define RF_448_RG_REV_RXIF1_STG2_BS_BIT                                         (0x00000100)

#define RF_448_RG_REV_RXIF1_GAIN_LSB                                            (4)
#define RF_448_RG_REV_RXIF1_GAIN_WIDTH                                          (4)
#define RF_448_RG_REV_RXIF1_GAIN_MASK                                           (0x000000F0)

#define RF_448_RG_REV_RXIF1_MODE_LSB                                            (0)
#define RF_448_RG_REV_RXIF1_MODE_WIDTH                                          (4)
#define RF_448_RG_REV_RXIF1_MODE_MASK                                           (0x0000000F)

#define RF_449_RG_RXIF1_VCMCTRL_LSB                                             (18)
#define RF_449_RG_RXIF1_VCMCTRL_WIDTH                                           (2)
#define RF_449_RG_RXIF1_VCMCTRL_MASK                                            (0x000C0000)

#define RF_449_RG_RXIF1_POW_STG1_LSB                                            (17)
#define RF_449_RG_RXIF1_POW_STG1_WIDTH                                          (1)
#define RF_449_RG_RXIF1_POW_STG1_MASK                                           (0x00020000)
#define RF_449_RG_RXIF1_POW_STG1_BIT                                            (0x00020000)

#define RF_449_RG_RXIF1_POW_STG2_LSB                                            (16)
#define RF_449_RG_RXIF1_POW_STG2_WIDTH                                          (1)
#define RF_449_RG_RXIF1_POW_STG2_MASK                                           (0x00010000)
#define RF_449_RG_RXIF1_POW_STG2_BIT                                            (0x00010000)

#define RF_449_RG_RXIF1_STG1_TESTSW_LSB                                         (15)
#define RF_449_RG_RXIF1_STG1_TESTSW_WIDTH                                       (1)
#define RF_449_RG_RXIF1_STG1_TESTSW_MASK                                        (0x00008000)
#define RF_449_RG_RXIF1_STG1_TESTSW_BIT                                         (0x00008000)

#define RF_449_RG_RXIF1_REV_LSB                                                 (7)
#define RF_449_RG_RXIF1_REV_WIDTH                                               (8)
#define RF_449_RG_RXIF1_REV_MASK                                                (0x00007F80)

#define RF_449_RG_RXIF1_TXLPBK_EN_LSB                                           (5)
#define RF_449_RG_RXIF1_TXLPBK_EN_WIDTH                                         (1)
#define RF_449_RG_RXIF1_TXLPBK_EN_MASK                                          (0x00000020)
#define RF_449_RG_RXIF1_TXLPBK_EN_BIT                                           (0x00000020)

#define RF_450_RXIF1_RCKI_M_LSB                                                 (14)
#define RF_450_RXIF1_RCKI_M_WIDTH                                               (6)
#define RF_450_RXIF1_RCKI_M_MASK                                                (0x000FC000)

#define RF_450_RXIF1_RCKQ_M_LSB                                                 (8)
#define RF_450_RXIF1_RCKQ_M_WIDTH                                               (6)
#define RF_450_RXIF1_RCKQ_M_MASK                                                (0x00003F00)

#define RF_450_RXIF1_RCKCODE_MAN_LSB                                            (7)
#define RF_450_RXIF1_RCKCODE_MAN_WIDTH                                          (1)
#define RF_450_RXIF1_RCKCODE_MAN_MASK                                           (0x00000080)
#define RF_450_RXIF1_RCKCODE_MAN_BIT                                            (0x00000080)

#define RF_451_RXIF1_RCKI_SHIFT_LSB                                             (15)
#define RF_451_RXIF1_RCKI_SHIFT_WIDTH                                           (5)
#define RF_451_RXIF1_RCKI_SHIFT_MASK                                            (0x000F8000)

#define RF_451_RXIF1_RCKQ_SHIFT_LSB                                             (10)
#define RF_451_RXIF1_RCKQ_SHIFT_WIDTH                                           (5)
#define RF_451_RXIF1_RCKQ_SHIFT_MASK                                            (0x00007C00)

#define RF_452_RXIF2_POW_MAN_LSB                                                (19)
#define RF_452_RXIF2_POW_MAN_WIDTH                                              (1)
#define RF_452_RXIF2_POW_MAN_MASK                                               (0x00080000)
#define RF_452_RXIF2_POW_MAN_BIT                                                (0x00080000)

#define RF_452_RXIF2_EN_M_LSB                                                   (18)
#define RF_452_RXIF2_EN_M_WIDTH                                                 (1)
#define RF_452_RXIF2_EN_M_MASK                                                  (0x00040000)
#define RF_452_RXIF2_EN_M_BIT                                                   (0x00040000)

#define RF_452_RG_RXIF2_CUR_LSB                                                 (9)
#define RF_452_RG_RXIF2_CUR_WIDTH                                               (9)
#define RF_452_RG_RXIF2_CUR_MASK                                                (0x0003FE00)

#define RF_452_RG_REV_RXIF2_STG2_BS_LSB                                         (8)
#define RF_452_RG_REV_RXIF2_STG2_BS_WIDTH                                       (1)
#define RF_452_RG_REV_RXIF2_STG2_BS_MASK                                        (0x00000100)
#define RF_452_RG_REV_RXIF2_STG2_BS_BIT                                         (0x00000100)

#define RF_452_RG_REV_RXIF2_GAIN_LSB                                            (4)
#define RF_452_RG_REV_RXIF2_GAIN_WIDTH                                          (4)
#define RF_452_RG_REV_RXIF2_GAIN_MASK                                           (0x000000F0)

#define RF_452_RG_REV_RXIF2_MODE_LSB                                            (0)
#define RF_452_RG_REV_RXIF2_MODE_WIDTH                                          (4)
#define RF_452_RG_REV_RXIF2_MODE_MASK                                           (0x0000000F)

#define RF_453_RG_RXIF2_VCMCTRL_LSB                                             (18)
#define RF_453_RG_RXIF2_VCMCTRL_WIDTH                                           (2)
#define RF_453_RG_RXIF2_VCMCTRL_MASK                                            (0x000C0000)

#define RF_453_RG_RXIF2_POW_STG1_LSB                                            (17)
#define RF_453_RG_RXIF2_POW_STG1_WIDTH                                          (1)
#define RF_453_RG_RXIF2_POW_STG1_MASK                                           (0x00020000)
#define RF_453_RG_RXIF2_POW_STG1_BIT                                            (0x00020000)

#define RF_453_RG_RXIF2_POW_STG2_LSB                                            (16)
#define RF_453_RG_RXIF2_POW_STG2_WIDTH                                          (1)
#define RF_453_RG_RXIF2_POW_STG2_MASK                                           (0x00010000)
#define RF_453_RG_RXIF2_POW_STG2_BIT                                            (0x00010000)

#define RF_453_RG_RXIF2_STG1_TESTSW_LSB                                         (15)
#define RF_453_RG_RXIF2_STG1_TESTSW_WIDTH                                       (1)
#define RF_453_RG_RXIF2_STG1_TESTSW_MASK                                        (0x00008000)
#define RF_453_RG_RXIF2_STG1_TESTSW_BIT                                         (0x00008000)

#define RF_453_RG_RXIF2_REV_LSB                                                 (7)
#define RF_453_RG_RXIF2_REV_WIDTH                                               (8)
#define RF_453_RG_RXIF2_REV_MASK                                                (0x00007F80)

#define RF_454_RXIF2_RCKI_M_LSB                                                 (14)
#define RF_454_RXIF2_RCKI_M_WIDTH                                               (6)
#define RF_454_RXIF2_RCKI_M_MASK                                                (0x000FC000)

#define RF_454_RXIF2_RCKQ_M_LSB                                                 (8)
#define RF_454_RXIF2_RCKQ_M_WIDTH                                               (6)
#define RF_454_RXIF2_RCKQ_M_MASK                                                (0x00003F00)

#define RF_454_RXIF2_RCKCODE_MAN_LSB                                            (7)
#define RF_454_RXIF2_RCKCODE_MAN_WIDTH                                          (1)
#define RF_454_RXIF2_RCKCODE_MAN_MASK                                           (0x00000080)
#define RF_454_RXIF2_RCKCODE_MAN_BIT                                            (0x00000080)

#define RF_455_RXIF2_RCKI_SHIFT_LSB                                             (15)
#define RF_455_RXIF2_RCKI_SHIFT_WIDTH                                           (5)
#define RF_455_RXIF2_RCKI_SHIFT_MASK                                            (0x000F8000)

#define RF_455_RXIF2_RCKQ_SHIFT_LSB                                             (10)
#define RF_455_RXIF2_RCKQ_SHIFT_WIDTH                                           (5)
#define RF_455_RXIF2_RCKQ_SHIFT_MASK                                            (0x00007C00)

#define RF_456_RXDIF1_POW_MAN_LSB                                               (19)
#define RF_456_RXDIF1_POW_MAN_WIDTH                                             (1)
#define RF_456_RXDIF1_POW_MAN_MASK                                              (0x00080000)
#define RF_456_RXDIF1_POW_MAN_BIT                                               (0x00080000)

#define RF_456_RXDIF1_EN_M_LSB                                                  (18)
#define RF_456_RXDIF1_EN_M_WIDTH                                                (1)
#define RF_456_RXDIF1_EN_M_MASK                                                 (0x00040000)
#define RF_456_RXDIF1_EN_M_BIT                                                  (0x00040000)

#define RF_456_RG_RXDIF1_CUR_LSB                                                (9)
#define RF_456_RG_RXDIF1_CUR_WIDTH                                              (9)
#define RF_456_RG_RXDIF1_CUR_MASK                                               (0x0003FE00)

#define RF_456_RG_REV_RXDIF1_STG2_BS_LSB                                        (8)
#define RF_456_RG_REV_RXDIF1_STG2_BS_WIDTH                                      (1)
#define RF_456_RG_REV_RXDIF1_STG2_BS_MASK                                       (0x00000100)
#define RF_456_RG_REV_RXDIF1_STG2_BS_BIT                                        (0x00000100)

#define RF_456_RG_REV_RXDIF1_GAIN_LSB                                           (4)
#define RF_456_RG_REV_RXDIF1_GAIN_WIDTH                                         (4)
#define RF_456_RG_REV_RXDIF1_GAIN_MASK                                          (0x000000F0)

#define RF_456_RG_REV_RXDIF1_MODE_LSB                                           (0)
#define RF_456_RG_REV_RXDIF1_MODE_WIDTH                                         (4)
#define RF_456_RG_REV_RXDIF1_MODE_MASK                                          (0x0000000F)

#define RF_457_RG_RXDIF1_VCMCTRL_LSB                                            (18)
#define RF_457_RG_RXDIF1_VCMCTRL_WIDTH                                          (2)
#define RF_457_RG_RXDIF1_VCMCTRL_MASK                                           (0x000C0000)

#define RF_457_RG_RXDIF1_POW_STG1_LSB                                           (17)
#define RF_457_RG_RXDIF1_POW_STG1_WIDTH                                         (1)
#define RF_457_RG_RXDIF1_POW_STG1_MASK                                          (0x00020000)
#define RF_457_RG_RXDIF1_POW_STG1_BIT                                           (0x00020000)

#define RF_457_RG_RXDIF1_POW_STG2_LSB                                           (16)
#define RF_457_RG_RXDIF1_POW_STG2_WIDTH                                         (1)
#define RF_457_RG_RXDIF1_POW_STG2_MASK                                          (0x00010000)
#define RF_457_RG_RXDIF1_POW_STG2_BIT                                           (0x00010000)

#define RF_457_RG_RXDIF1_STG1_TESTSW_LSB                                        (15)
#define RF_457_RG_RXDIF1_STG1_TESTSW_WIDTH                                      (1)
#define RF_457_RG_RXDIF1_STG1_TESTSW_MASK                                       (0x00008000)
#define RF_457_RG_RXDIF1_STG1_TESTSW_BIT                                        (0x00008000)

#define RF_457_RG_RXDIF1_REV_LSB                                                (7)
#define RF_457_RG_RXDIF1_REV_WIDTH                                              (8)
#define RF_457_RG_RXDIF1_REV_MASK                                               (0x00007F80)

#define RF_458_RXDIF1_RCKI_M_LSB                                                (14)
#define RF_458_RXDIF1_RCKI_M_WIDTH                                              (6)
#define RF_458_RXDIF1_RCKI_M_MASK                                               (0x000FC000)

#define RF_458_RXDIF1_RCKQ_M_LSB                                                (8)
#define RF_458_RXDIF1_RCKQ_M_WIDTH                                              (6)
#define RF_458_RXDIF1_RCKQ_M_MASK                                               (0x00003F00)

#define RF_458_RXDIF1_RCKCODE_MAN_LSB                                           (7)
#define RF_458_RXDIF1_RCKCODE_MAN_WIDTH                                         (1)
#define RF_458_RXDIF1_RCKCODE_MAN_MASK                                          (0x00000080)
#define RF_458_RXDIF1_RCKCODE_MAN_BIT                                           (0x00000080)

#define RF_459_RXDIF1_RCKI_SHIFT_LSB                                            (15)
#define RF_459_RXDIF1_RCKI_SHIFT_WIDTH                                          (5)
#define RF_459_RXDIF1_RCKI_SHIFT_MASK                                           (0x000F8000)

#define RF_459_RXDIF1_RCKQ_SHIFT_LSB                                            (10)
#define RF_459_RXDIF1_RCKQ_SHIFT_WIDTH                                          (5)
#define RF_459_RXDIF1_RCKQ_SHIFT_MASK                                           (0x00007C00)

#define RF_460_RXDIF2_POW_MAN_LSB                                               (19)
#define RF_460_RXDIF2_POW_MAN_WIDTH                                             (1)
#define RF_460_RXDIF2_POW_MAN_MASK                                              (0x00080000)
#define RF_460_RXDIF2_POW_MAN_BIT                                               (0x00080000)

#define RF_460_RXDIF2_EN_M_LSB                                                  (18)
#define RF_460_RXDIF2_EN_M_WIDTH                                                (1)
#define RF_460_RXDIF2_EN_M_MASK                                                 (0x00040000)
#define RF_460_RXDIF2_EN_M_BIT                                                  (0x00040000)

#define RF_460_RG_RXDIF2_CUR_LSB                                                (9)
#define RF_460_RG_RXDIF2_CUR_WIDTH                                              (9)
#define RF_460_RG_RXDIF2_CUR_MASK                                               (0x0003FE00)

#define RF_460_RG_REV_RXDIF2_STG2_BS_LSB                                        (8)
#define RF_460_RG_REV_RXDIF2_STG2_BS_WIDTH                                      (1)
#define RF_460_RG_REV_RXDIF2_STG2_BS_MASK                                       (0x00000100)
#define RF_460_RG_REV_RXDIF2_STG2_BS_BIT                                        (0x00000100)

#define RF_460_RG_REV_RXDIF2_GAIN_LSB                                           (4)
#define RF_460_RG_REV_RXDIF2_GAIN_WIDTH                                         (4)
#define RF_460_RG_REV_RXDIF2_GAIN_MASK                                          (0x000000F0)

#define RF_460_RG_REV_RXDIF2_MODE_LSB                                           (0)
#define RF_460_RG_REV_RXDIF2_MODE_WIDTH                                         (4)
#define RF_460_RG_REV_RXDIF2_MODE_MASK                                          (0x0000000F)

#define RF_461_RG_RXDIF2_VCMCTRL_LSB                                            (18)
#define RF_461_RG_RXDIF2_VCMCTRL_WIDTH                                          (2)
#define RF_461_RG_RXDIF2_VCMCTRL_MASK                                           (0x000C0000)

#define RF_461_RG_RXDIF2_POW_STG1_LSB                                           (17)
#define RF_461_RG_RXDIF2_POW_STG1_WIDTH                                         (1)
#define RF_461_RG_RXDIF2_POW_STG1_MASK                                          (0x00020000)
#define RF_461_RG_RXDIF2_POW_STG1_BIT                                           (0x00020000)

#define RF_461_RG_RXDIF2_POW_STG2_LSB                                           (16)
#define RF_461_RG_RXDIF2_POW_STG2_WIDTH                                         (1)
#define RF_461_RG_RXDIF2_POW_STG2_MASK                                          (0x00010000)
#define RF_461_RG_RXDIF2_POW_STG2_BIT                                           (0x00010000)

#define RF_461_RG_RXDIF2_STG1_TESTSW_LSB                                        (15)
#define RF_461_RG_RXDIF2_STG1_TESTSW_WIDTH                                      (1)
#define RF_461_RG_RXDIF2_STG1_TESTSW_MASK                                       (0x00008000)
#define RF_461_RG_RXDIF2_STG1_TESTSW_BIT                                        (0x00008000)

#define RF_461_RG_RXDIF2_REV_LSB                                                (7)
#define RF_461_RG_RXDIF2_REV_WIDTH                                              (8)
#define RF_461_RG_RXDIF2_REV_MASK                                               (0x00007F80)

#define RF_462_RXDIF2_RCKI_M_LSB                                                (14)
#define RF_462_RXDIF2_RCKI_M_WIDTH                                              (6)
#define RF_462_RXDIF2_RCKI_M_MASK                                               (0x000FC000)

#define RF_462_RXDIF2_RCKQ_M_LSB                                                (8)
#define RF_462_RXDIF2_RCKQ_M_WIDTH                                              (6)
#define RF_462_RXDIF2_RCKQ_M_MASK                                               (0x00003F00)

#define RF_462_RXDIF2_RCKCODE_MAN_LSB                                           (7)
#define RF_462_RXDIF2_RCKCODE_MAN_WIDTH                                         (1)
#define RF_462_RXDIF2_RCKCODE_MAN_MASK                                          (0x00000080)
#define RF_462_RXDIF2_RCKCODE_MAN_BIT                                           (0x00000080)

#define RF_463_RXDIF2_RCKI_SHIFT_LSB                                            (15)
#define RF_463_RXDIF2_RCKI_SHIFT_WIDTH                                          (5)
#define RF_463_RXDIF2_RCKI_SHIFT_MASK                                           (0x000F8000)

#define RF_463_RXDIF2_RCKQ_SHIFT_LSB                                            (10)
#define RF_463_RXDIF2_RCKQ_SHIFT_WIDTH                                          (5)
#define RF_463_RXDIF2_RCKQ_SHIFT_MASK                                           (0x00007C00)

#define RF_466_RX1_2GW_TTGBUF_TON_LSB                                           (10)
#define RF_466_RX1_2GW_TTGBUF_TON_WIDTH                                         (10)
#define RF_466_RX1_2GW_TTGBUF_TON_MASK                                          (0x000FFC00)

#define RF_466_RX1_2GW_TON_LSB                                                  (0)
#define RF_466_RX1_2GW_TON_WIDTH                                                (10)
#define RF_466_RX1_2GW_TON_MASK                                                 (0x000003FF)

#define RF_467_RX1_FDDC_TRCK_LSB                                                (10)
#define RF_467_RX1_FDDC_TRCK_WIDTH                                              (10)
#define RF_467_RX1_FDDC_TRCK_MASK                                               (0x000FFC00)

#define RF_467_RX1_FDDC_TON_LSB                                                 (0)
#define RF_467_RX1_FDDC_TON_WIDTH                                               (10)
#define RF_467_RX1_FDDC_TON_MASK                                                (0x000003FF)

#define RF_468_RX1_FDDC_TTGBUF_TON_LSB                                          (10)
#define RF_468_RX1_FDDC_TTGBUF_TON_WIDTH                                        (10)
#define RF_468_RX1_FDDC_TTGBUF_TON_MASK                                         (0x000FFC00)

#define RF_468_RX1_FDDW_TON_LSB                                                 (0)
#define RF_468_RX1_FDDW_TON_WIDTH                                               (10)
#define RF_468_RX1_FDDW_TON_MASK                                                (0x000003FF)

#define RF_469_RX1_DUTYC_TON_LSB                                                (10)
#define RF_469_RX1_DUTYC_TON_WIDTH                                              (10)
#define RF_469_RX1_DUTYC_TON_MASK                                               (0x000FFC00)

#define RF_469_RX1_FDDC_TPD_TON_LSB                                             (0)
#define RF_469_RX1_FDDC_TPD_TON_WIDTH                                           (10)
#define RF_469_RX1_FDDC_TPD_TON_MASK                                            (0x000003FF)

#define RF_470_RX1_TDDC_TRCK_LSB                                                (10)
#define RF_470_RX1_TDDC_TRCK_WIDTH                                              (10)
#define RF_470_RX1_TDDC_TRCK_MASK                                               (0x000FFC00)

#define RF_470_RX1_TDDC_TON_LSB                                                 (0)
#define RF_470_RX1_TDDC_TON_WIDTH                                               (10)
#define RF_470_RX1_TDDC_TON_MASK                                                (0x000003FF)

#define RF_471_RX1_TDDC_TTGBUF_TON_LSB                                          (10)
#define RF_471_RX1_TDDC_TTGBUF_TON_WIDTH                                        (10)
#define RF_471_RX1_TDDC_TTGBUF_TON_MASK                                         (0x000FFC00)

#define RF_471_RX1_TDDW_TON_LSB                                                 (0)
#define RF_471_RX1_TDDW_TON_WIDTH                                               (10)
#define RF_471_RX1_TDDW_TON_MASK                                                (0x000003FF)

#define RF_472_RX1_TDDC_TPD_TON_LSB                                             (0)
#define RF_472_RX1_TDDC_TPD_TON_WIDTH                                           (10)
#define RF_472_RX1_TDDC_TPD_TON_MASK                                            (0x000003FF)

#define RF_473_RG_RX_BIAS_MIXER1_IIP2C_Q_LSB                                    (8)
#define RF_473_RG_RX_BIAS_MIXER1_IIP2C_Q_WIDTH                                  (7)
#define RF_473_RG_RX_BIAS_MIXER1_IIP2C_Q_MASK                                   (0x00007F00)

#define RF_473_RG_RX_BIAS_MIXER1_IIP2C_I_LSB                                    (1)
#define RF_473_RG_RX_BIAS_MIXER1_IIP2C_I_WIDTH                                  (7)
#define RF_473_RG_RX_BIAS_MIXER1_IIP2C_I_MASK                                   (0x000000FE)

#define RF_474_RX1_WARM_TON_TRIGGER_M_LSB                                       (4)
#define RF_474_RX1_WARM_TON_TRIGGER_M_WIDTH                                     (1)
#define RF_474_RX1_WARM_TON_TRIGGER_M_MASK                                      (0x00000010)
#define RF_474_RX1_WARM_TON_TRIGGER_M_BIT                                       (0x00000010)

#define RF_474_RX1_CAL_TPD_TON_TRIGGER_M_LSB                                    (3)
#define RF_474_RX1_CAL_TPD_TON_TRIGGER_M_WIDTH                                  (1)
#define RF_474_RX1_CAL_TPD_TON_TRIGGER_M_MASK                                   (0x00000008)
#define RF_474_RX1_CAL_TPD_TON_TRIGGER_M_BIT                                    (0x00000008)

#define RF_474_RX1_CAL_TTGBUF_TON_TRIGGER_M_LSB                                 (2)
#define RF_474_RX1_CAL_TTGBUF_TON_TRIGGER_M_WIDTH                               (1)
#define RF_474_RX1_CAL_TTGBUF_TON_TRIGGER_M_MASK                                (0x00000004)
#define RF_474_RX1_CAL_TTGBUF_TON_TRIGGER_M_BIT                                 (0x00000004)

#define RF_474_RX1_CAL_TRCK_TRIGGER_M_LSB                                       (1)
#define RF_474_RX1_CAL_TRCK_TRIGGER_M_WIDTH                                     (1)
#define RF_474_RX1_CAL_TRCK_TRIGGER_M_MASK                                      (0x00000002)
#define RF_474_RX1_CAL_TRCK_TRIGGER_M_BIT                                       (0x00000002)

#define RF_474_RX1_CAL_TON_TRIGGER_M_LSB                                        (0)
#define RF_474_RX1_CAL_TON_TRIGGER_M_WIDTH                                      (1)
#define RF_474_RX1_CAL_TON_TRIGGER_M_MASK                                       (0x00000001)
#define RF_474_RX1_CAL_TON_TRIGGER_M_BIT                                        (0x00000001)

#define RF_475_RX2_2GW_TTGBUF_TON_LSB                                           (10)
#define RF_475_RX2_2GW_TTGBUF_TON_WIDTH                                         (10)
#define RF_475_RX2_2GW_TTGBUF_TON_MASK                                          (0x000FFC00)

#define RF_475_RX2_2GW_TON_LSB                                                  (0)
#define RF_475_RX2_2GW_TON_WIDTH                                                (10)
#define RF_475_RX2_2GW_TON_MASK                                                 (0x000003FF)

#define RF_476_RX2_FDDC_TRCK_LSB                                                (10)
#define RF_476_RX2_FDDC_TRCK_WIDTH                                              (10)
#define RF_476_RX2_FDDC_TRCK_MASK                                               (0x000FFC00)

#define RF_476_RX2_FDDC_TON_LSB                                                 (0)
#define RF_476_RX2_FDDC_TON_WIDTH                                               (10)
#define RF_476_RX2_FDDC_TON_MASK                                                (0x000003FF)

#define RF_477_RX2_FDDC_TTGBUF_TON_LSB                                          (10)
#define RF_477_RX2_FDDC_TTGBUF_TON_WIDTH                                        (10)
#define RF_477_RX2_FDDC_TTGBUF_TON_MASK                                         (0x000FFC00)

#define RF_477_RX2_FDDW_TON_LSB                                                 (0)
#define RF_477_RX2_FDDW_TON_WIDTH                                               (10)
#define RF_477_RX2_FDDW_TON_MASK                                                (0x000003FF)

#define RF_478_RX2_FDDC_TPD_TON_LSB                                             (0)
#define RF_478_RX2_FDDC_TPD_TON_WIDTH                                           (10)
#define RF_478_RX2_FDDC_TPD_TON_MASK                                            (0x000003FF)

#define RF_479_RX2_TDDC_TRCK_LSB                                                (10)
#define RF_479_RX2_TDDC_TRCK_WIDTH                                              (10)
#define RF_479_RX2_TDDC_TRCK_MASK                                               (0x000FFC00)

#define RF_479_RX2_TDDC_TON_LSB                                                 (0)
#define RF_479_RX2_TDDC_TON_WIDTH                                               (10)
#define RF_479_RX2_TDDC_TON_MASK                                                (0x000003FF)

#define RF_480_RX2_TDDC_TTGBUF_TON_LSB                                          (10)
#define RF_480_RX2_TDDC_TTGBUF_TON_WIDTH                                        (10)
#define RF_480_RX2_TDDC_TTGBUF_TON_MASK                                         (0x000FFC00)

#define RF_480_RX2_TDDW_TON_LSB                                                 (0)
#define RF_480_RX2_TDDW_TON_WIDTH                                               (10)
#define RF_480_RX2_TDDW_TON_MASK                                                (0x000003FF)

#define RF_481_RX2_TDDC_TPD_TON_LSB                                             (0)
#define RF_481_RX2_TDDC_TPD_TON_WIDTH                                           (10)
#define RF_481_RX2_TDDC_TPD_TON_MASK                                            (0x000003FF)

#define RF_482_RG_RX_BIAS_MIXER2_IIP2C_Q_LSB                                    (8)
#define RF_482_RG_RX_BIAS_MIXER2_IIP2C_Q_WIDTH                                  (7)
#define RF_482_RG_RX_BIAS_MIXER2_IIP2C_Q_MASK                                   (0x00007F00)

#define RF_482_RG_RX_BIAS_MIXER2_IIP2C_I_LSB                                    (1)
#define RF_482_RG_RX_BIAS_MIXER2_IIP2C_I_WIDTH                                  (7)
#define RF_482_RG_RX_BIAS_MIXER2_IIP2C_I_MASK                                   (0x000000FE)

#define RF_483_RX2_WARM_TON_TRIGGER_M_LSB                                       (4)
#define RF_483_RX2_WARM_TON_TRIGGER_M_WIDTH                                     (1)
#define RF_483_RX2_WARM_TON_TRIGGER_M_MASK                                      (0x00000010)
#define RF_483_RX2_WARM_TON_TRIGGER_M_BIT                                       (0x00000010)

#define RF_483_RX2_CAL_TPD_TON_TRIGGER_M_LSB                                    (3)
#define RF_483_RX2_CAL_TPD_TON_TRIGGER_M_WIDTH                                  (1)
#define RF_483_RX2_CAL_TPD_TON_TRIGGER_M_MASK                                   (0x00000008)
#define RF_483_RX2_CAL_TPD_TON_TRIGGER_M_BIT                                    (0x00000008)

#define RF_483_RX2_CAL_TTGBUF_TON_TRIGGER_M_LSB                                 (2)
#define RF_483_RX2_CAL_TTGBUF_TON_TRIGGER_M_WIDTH                               (1)
#define RF_483_RX2_CAL_TTGBUF_TON_TRIGGER_M_MASK                                (0x00000004)
#define RF_483_RX2_CAL_TTGBUF_TON_TRIGGER_M_BIT                                 (0x00000004)

#define RF_483_RX2_CAL_TRCK_TRIGGER_M_LSB                                       (1)
#define RF_483_RX2_CAL_TRCK_TRIGGER_M_WIDTH                                     (1)
#define RF_483_RX2_CAL_TRCK_TRIGGER_M_MASK                                      (0x00000002)
#define RF_483_RX2_CAL_TRCK_TRIGGER_M_BIT                                       (0x00000002)

#define RF_483_RX2_CAL_TON_TRIGGER_M_LSB                                        (0)
#define RF_483_RX2_CAL_TON_TRIGGER_M_WIDTH                                      (1)
#define RF_483_RX2_CAL_TON_TRIGGER_M_MASK                                       (0x00000001)
#define RF_483_RX2_CAL_TON_TRIGGER_M_BIT                                        (0x00000001)

#define RF_486_RXRXD_LDO_LO_BUMP_FF_SHIFT_LSB                                   (16)
#define RF_486_RXRXD_LDO_LO_BUMP_FF_SHIFT_WIDTH                                 (3)
#define RF_486_RXRXD_LDO_LO_BUMP_FF_SHIFT_MASK                                  (0x00070000)

#define RF_486_RXRXD_LDO_LO_BUMP_SS_SHIFT_LSB                                   (13)
#define RF_486_RXRXD_LDO_LO_BUMP_SS_SHIFT_WIDTH                                 (3)
#define RF_486_RXRXD_LDO_LO_BUMP_SS_SHIFT_MASK                                  (0x0000E000)

#define RF_486_RXLO1H_MANUAL_EN_LSB                                             (12)
#define RF_486_RXLO1H_MANUAL_EN_WIDTH                                           (1)
#define RF_486_RXLO1H_MANUAL_EN_MASK                                            (0x00001000)
#define RF_486_RXLO1H_MANUAL_EN_BIT                                             (0x00001000)

#define RF_486_PDIV1H_EN_LSB                                                    (8)
#define RF_486_PDIV1H_EN_WIDTH                                                  (4)
#define RF_486_PDIV1H_EN_MASK                                                   (0x00000F00)

#define RF_486_IQDIV_MRX1H_EN_LSB                                               (4)
#define RF_486_IQDIV_MRX1H_EN_WIDTH                                             (4)
#define RF_486_IQDIV_MRX1H_EN_MASK                                              (0x000000F0)

#define RF_486_IQDIV_DRX1H_EN_LSB                                               (0)
#define RF_486_IQDIV_DRX1H_EN_WIDTH                                             (4)
#define RF_486_IQDIV_DRX1H_EN_MASK                                              (0x0000000F)

#define RF_487_RXLO2H_MANUAL_EN_LSB                                             (12)
#define RF_487_RXLO2H_MANUAL_EN_WIDTH                                           (1)
#define RF_487_RXLO2H_MANUAL_EN_MASK                                            (0x00001000)
#define RF_487_RXLO2H_MANUAL_EN_BIT                                             (0x00001000)

#define RF_487_PDIV2H_EN_LSB                                                    (8)
#define RF_487_PDIV2H_EN_WIDTH                                                  (4)
#define RF_487_PDIV2H_EN_MASK                                                   (0x00000F00)

#define RF_487_IQDIV_MRX2H_EN_LSB                                               (4)
#define RF_487_IQDIV_MRX2H_EN_WIDTH                                             (4)
#define RF_487_IQDIV_MRX2H_EN_MASK                                              (0x000000F0)

#define RF_487_IQDIV_DRX2H_EN_LSB                                               (0)
#define RF_487_IQDIV_DRX2H_EN_WIDTH                                             (4)
#define RF_487_IQDIV_DRX2H_EN_MASK                                              (0x0000000F)

#define RF_488_RXLO1L_MANUAL_EN_LSB                                             (12)
#define RF_488_RXLO1L_MANUAL_EN_WIDTH                                           (1)
#define RF_488_RXLO1L_MANUAL_EN_MASK                                            (0x00001000)
#define RF_488_RXLO1L_MANUAL_EN_BIT                                             (0x00001000)

#define RF_488_PDIV1L_EN_LSB                                                    (8)
#define RF_488_PDIV1L_EN_WIDTH                                                  (4)
#define RF_488_PDIV1L_EN_MASK                                                   (0x00000F00)

#define RF_488_IQDIV_MRX1L_EN_LSB                                               (4)
#define RF_488_IQDIV_MRX1L_EN_WIDTH                                             (4)
#define RF_488_IQDIV_MRX1L_EN_MASK                                              (0x000000F0)

#define RF_488_IQDIV_DRX1L_EN_LSB                                               (0)
#define RF_488_IQDIV_DRX1L_EN_WIDTH                                             (4)
#define RF_488_IQDIV_DRX1L_EN_MASK                                              (0x0000000F)

#define RF_489_RXLO2L_MANUAL_EN_LSB                                             (12)
#define RF_489_RXLO2L_MANUAL_EN_WIDTH                                           (1)
#define RF_489_RXLO2L_MANUAL_EN_MASK                                            (0x00001000)
#define RF_489_RXLO2L_MANUAL_EN_BIT                                             (0x00001000)

#define RF_489_PDIV2L_EN_LSB                                                    (8)
#define RF_489_PDIV2L_EN_WIDTH                                                  (4)
#define RF_489_PDIV2L_EN_MASK                                                   (0x00000F00)

#define RF_489_IQDIV_MRX2L_EN_LSB                                               (4)
#define RF_489_IQDIV_MRX2L_EN_WIDTH                                             (4)
#define RF_489_IQDIV_MRX2L_EN_MASK                                              (0x000000F0)

#define RF_489_IQDIV_DRX2L_EN_LSB                                               (0)
#define RF_489_IQDIV_DRX2L_EN_WIDTH                                             (4)
#define RF_489_IQDIV_DRX2L_EN_MASK                                              (0x0000000F)

#define RF_490_MRXLO1H_SLICE_EN_LSB                                             (0)
#define RF_490_MRXLO1H_SLICE_EN_WIDTH                                           (13)
#define RF_490_MRXLO1H_SLICE_EN_MASK                                            (0x00001FFF)

#define RF_491_DRXLO1H_SLICE_EN_LSB                                             (0)
#define RF_491_DRXLO1H_SLICE_EN_WIDTH                                           (13)
#define RF_491_DRXLO1H_SLICE_EN_MASK                                            (0x00001FFF)

#define RF_492_MRXLO2H_SLICE_EN_LSB                                             (9)
#define RF_492_MRXLO2H_SLICE_EN_WIDTH                                           (9)
#define RF_492_MRXLO2H_SLICE_EN_MASK                                            (0x0003FE00)

#define RF_492_DRXLO2H_SLICE_EN_LSB                                             (0)
#define RF_492_DRXLO2H_SLICE_EN_WIDTH                                           (9)
#define RF_492_DRXLO2H_SLICE_EN_MASK                                            (0x000001FF)

#define RF_493_MRXLO1L_SLICE_EN_LSB                                             (9)
#define RF_493_MRXLO1L_SLICE_EN_WIDTH                                           (9)
#define RF_493_MRXLO1L_SLICE_EN_MASK                                            (0x0003FE00)

#define RF_493_DRXLO1L_SLICE_EN_LSB                                             (0)
#define RF_493_DRXLO1L_SLICE_EN_WIDTH                                           (9)
#define RF_493_DRXLO1L_SLICE_EN_MASK                                            (0x000001FF)

#define RF_494_MRXLO2L_SLICE_EN_LSB                                             (9)
#define RF_494_MRXLO2L_SLICE_EN_WIDTH                                           (9)
#define RF_494_MRXLO2L_SLICE_EN_MASK                                            (0x0003FE00)

#define RF_494_DRXLO2L_SLICE_EN_LSB                                             (0)
#define RF_494_DRXLO2L_SLICE_EN_WIDTH                                           (9)
#define RF_494_DRXLO2L_SLICE_EN_MASK                                            (0x000001FF)

#define RF_495_RXLO1_EN_LSB                                                     (15)
#define RF_495_RXLO1_EN_WIDTH                                                   (2)
#define RF_495_RXLO1_EN_MASK                                                    (0x00018000)

#define RF_495_RXLO1_VCOH_EN_LSB                                                (12)
#define RF_495_RXLO1_VCOH_EN_WIDTH                                              (1)
#define RF_495_RXLO1_VCOH_EN_MASK                                               (0x00001000)
#define RF_495_RXLO1_VCOH_EN_BIT                                                (0x00001000)

#define RF_495_RG_RXLO1_DIV1_EN_LSB                                             (11)
#define RF_495_RG_RXLO1_DIV1_EN_WIDTH                                           (1)
#define RF_495_RG_RXLO1_DIV1_EN_MASK                                            (0x00000800)
#define RF_495_RG_RXLO1_DIV1_EN_BIT                                             (0x00000800)

#define RF_495_RG_RXLO1_DIV2_EN_LSB                                             (10)
#define RF_495_RG_RXLO1_DIV2_EN_WIDTH                                           (1)
#define RF_495_RG_RXLO1_DIV2_EN_MASK                                            (0x00000400)
#define RF_495_RG_RXLO1_DIV2_EN_BIT                                             (0x00000400)

#define RF_495_RG_RXLO1_DIV3_EN_LSB                                             (9)
#define RF_495_RG_RXLO1_DIV3_EN_WIDTH                                           (1)
#define RF_495_RG_RXLO1_DIV3_EN_MASK                                            (0x00000200)
#define RF_495_RG_RXLO1_DIV3_EN_BIT                                             (0x00000200)

#define RF_495_RG_RXLO1_DIV4_EN_LSB                                             (8)
#define RF_495_RG_RXLO1_DIV4_EN_WIDTH                                           (1)
#define RF_495_RG_RXLO1_DIV4_EN_MASK                                            (0x00000100)
#define RF_495_RG_RXLO1_DIV4_EN_BIT                                             (0x00000100)

#define RF_495_RG_RXLO1_DIV5_EN_LSB                                             (7)
#define RF_495_RG_RXLO1_DIV5_EN_WIDTH                                           (1)
#define RF_495_RG_RXLO1_DIV5_EN_MASK                                            (0x00000080)
#define RF_495_RG_RXLO1_DIV5_EN_BIT                                             (0x00000080)

#define RF_495_RG_RXLO1_DIV1P5_EN_LSB                                           (6)
#define RF_495_RG_RXLO1_DIV1P5_EN_WIDTH                                         (1)
#define RF_495_RG_RXLO1_DIV1P5_EN_MASK                                          (0x00000040)
#define RF_495_RG_RXLO1_DIV1P5_EN_BIT                                           (0x00000040)

#define RF_496_RXLO1_DUTYCAL_TYPE_LSB                                           (19)
#define RF_496_RXLO1_DUTYCAL_TYPE_WIDTH                                         (1)
#define RF_496_RXLO1_DUTYCAL_TYPE_MASK                                          (0x00080000)
#define RF_496_RXLO1_DUTYCAL_TYPE_BIT                                           (0x00080000)

#define RF_496_RXLO1_DUTYCAL_SW_LSB                                             (18)
#define RF_496_RXLO1_DUTYCAL_SW_WIDTH                                           (1)
#define RF_496_RXLO1_DUTYCAL_SW_MASK                                            (0x00040000)
#define RF_496_RXLO1_DUTYCAL_SW_BIT                                             (0x00040000)

#define RF_496_RXLO1_DUTYCAL_CLK_LSB                                            (17)
#define RF_496_RXLO1_DUTYCAL_CLK_WIDTH                                          (1)
#define RF_496_RXLO1_DUTYCAL_CLK_MASK                                           (0x00020000)
#define RF_496_RXLO1_DUTYCAL_CLK_BIT                                            (0x00020000)

#define RF_496_RXLO1_DUTYCAL_TRIGGER_LSB                                        (16)
#define RF_496_RXLO1_DUTYCAL_TRIGGER_WIDTH                                      (1)
#define RF_496_RXLO1_DUTYCAL_TRIGGER_MASK                                       (0x00010000)
#define RF_496_RXLO1_DUTYCAL_TRIGGER_BIT                                        (0x00010000)

#define RF_496_RXLO1_DUTYCAL_EN_LSB                                             (15)
#define RF_496_RXLO1_DUTYCAL_EN_WIDTH                                           (1)
#define RF_496_RXLO1_DUTYCAL_EN_MASK                                            (0x00008000)
#define RF_496_RXLO1_DUTYCAL_EN_BIT                                             (0x00008000)

#define RF_496_RG_RXLO1_DUTYCAL_SWAP_LSB                                        (14)
#define RF_496_RG_RXLO1_DUTYCAL_SWAP_WIDTH                                      (1)
#define RF_496_RG_RXLO1_DUTYCAL_SWAP_MASK                                       (0x00004000)
#define RF_496_RG_RXLO1_DUTYCAL_SWAP_BIT                                        (0x00004000)

#define RF_496_RXLO1_DUTY_OFFSET_LSB                                            (8)
#define RF_496_RXLO1_DUTY_OFFSET_WIDTH                                          (6)
#define RF_496_RXLO1_DUTY_OFFSET_MASK                                           (0x00003F00)

#define RF_496_RXLO1_DUTY_LSB                                                   (0)
#define RF_496_RXLO1_DUTY_WIDTH                                                 (8)
#define RF_496_RXLO1_DUTY_MASK                                                  (0x000000FF)

#define RF_497_RG_RXLO1_DUTYCAL_VTUNE_READ_LSB                                  (9)
#define RF_497_RG_RXLO1_DUTYCAL_VTUNE_READ_WIDTH                                (1)
#define RF_497_RG_RXLO1_DUTYCAL_VTUNE_READ_MASK                                 (0x00000200)
#define RF_497_RG_RXLO1_DUTYCAL_VTUNE_READ_BIT                                  (0x00000200)

#define RF_497_AD_RXLO1_COMPOUT_LSB                                             (8)
#define RF_497_AD_RXLO1_COMPOUT_WIDTH                                           (1)
#define RF_497_AD_RXLO1_COMPOUT_MASK                                            (0x00000100)
#define RF_497_AD_RXLO1_COMPOUT_BIT                                             (0x00000100)

#define RF_497_RXLO1_DUTYCAL_NET_LSB                                            (0)
#define RF_497_RXLO1_DUTYCAL_NET_WIDTH                                          (8)
#define RF_497_RXLO1_DUTYCAL_NET_MASK                                           (0x000000FF)

#define RF_499_RXLO2_EN_LSB                                                     (13)
#define RF_499_RXLO2_EN_WIDTH                                                   (2)
#define RF_499_RXLO2_EN_MASK                                                    (0x00006000)

#define RF_499_RXLO2_VCOH_EN_LSB                                                (5)
#define RF_499_RXLO2_VCOH_EN_WIDTH                                              (1)
#define RF_499_RXLO2_VCOH_EN_MASK                                               (0x00000020)
#define RF_499_RXLO2_VCOH_EN_BIT                                                (0x00000020)

#define RF_499_RG_RXLO2_DIV1_EN_LSB                                             (4)
#define RF_499_RG_RXLO2_DIV1_EN_WIDTH                                           (1)
#define RF_499_RG_RXLO2_DIV1_EN_MASK                                            (0x00000010)
#define RF_499_RG_RXLO2_DIV1_EN_BIT                                             (0x00000010)

#define RF_499_RG_RXLO2_DIV2_EN_LSB                                             (3)
#define RF_499_RG_RXLO2_DIV2_EN_WIDTH                                           (1)
#define RF_499_RG_RXLO2_DIV2_EN_MASK                                            (0x00000008)
#define RF_499_RG_RXLO2_DIV2_EN_BIT                                             (0x00000008)

#define RF_499_RG_RXLO2_DIV3_EN_LSB                                             (2)
#define RF_499_RG_RXLO2_DIV3_EN_WIDTH                                           (1)
#define RF_499_RG_RXLO2_DIV3_EN_MASK                                            (0x00000004)
#define RF_499_RG_RXLO2_DIV3_EN_BIT                                             (0x00000004)

#define RF_499_RG_RXLO2_DIV4_EN_LSB                                             (1)
#define RF_499_RG_RXLO2_DIV4_EN_WIDTH                                           (1)
#define RF_499_RG_RXLO2_DIV4_EN_MASK                                            (0x00000002)
#define RF_499_RG_RXLO2_DIV4_EN_BIT                                             (0x00000002)

#define RF_499_RG_RXLO2_DIV5_EN_LSB                                             (0)
#define RF_499_RG_RXLO2_DIV5_EN_WIDTH                                           (1)
#define RF_499_RG_RXLO2_DIV5_EN_MASK                                            (0x00000001)
#define RF_499_RG_RXLO2_DIV5_EN_BIT                                             (0x00000001)

#define RF_CW511_BAND_STX_LSB                                                   (14)
#define RF_CW511_BAND_STX_WIDTH                                                 (6)
#define RF_CW511_BAND_STX_MASK                                                  (0x000FC000)

#define RF_CW511_STX_DCO_CFG_LSB                                                (9)
#define RF_CW511_STX_DCO_CFG_WIDTH                                              (5)
#define RF_CW511_STX_DCO_CFG_MASK                                               (0x00003E00)

#define RF_CW511_DBL_EN_3_4G_LSB                                                (8)
#define RF_CW511_DBL_EN_3_4G_WIDTH                                              (1)
#define RF_CW511_DBL_EN_3_4G_MASK                                               (0x00000100)
#define RF_CW511_DBL_EN_3_4G_BIT                                                (0x00000100)

#define RF_CW511_FEB_DIV_EN_LSB                                                 (7)
#define RF_CW511_FEB_DIV_EN_WIDTH                                               (1)
#define RF_CW511_FEB_DIV_EN_MASK                                                (0x00000080)
#define RF_CW511_FEB_DIV_EN_BIT                                                 (0x00000080)

#define RF_CW511_DCO_CLKSDM_DIV_LSB                                             (5)
#define RF_CW511_DCO_CLKSDM_DIV_WIDTH                                           (2)
#define RF_CW511_DCO_CLKSDM_DIV_MASK                                            (0x00000060)

#define RF_CW511_TX_RELOCK_LPM_LSB                                              (1)
#define RF_CW511_TX_RELOCK_LPM_WIDTH                                            (1)
#define RF_CW511_TX_RELOCK_LPM_MASK                                             (0x00000002)
#define RF_CW511_TX_RELOCK_LPM_BIT                                              (0x00000002)

#define RF_CW511_STX_CORNER_DET_EN_LSB                                          (0)
#define RF_CW511_STX_CORNER_DET_EN_WIDTH                                        (1)
#define RF_CW511_STX_CORNER_DET_EN_MASK                                         (0x00000001)
#define RF_CW511_STX_CORNER_DET_EN_BIT                                          (0x00000001)

#define RF_CW512_STX_DDLDO_VS_LSB                                               (10)
#define RF_CW512_STX_DDLDO_VS_WIDTH                                             (3)
#define RF_CW512_STX_DDLDO_VS_MASK                                              (0x00001C00)

#define RF_CW512_STX_DDLDO_MAN_LSB                                              (8)
#define RF_CW512_STX_DDLDO_MAN_WIDTH                                            (1)
#define RF_CW512_STX_DDLDO_MAN_MASK                                             (0x00000100)
#define RF_CW512_STX_DDLDO_MAN_BIT                                              (0x00000100)

#define RF_CW512_STX_DDLDO_EN_MAN_LSB                                           (7)
#define RF_CW512_STX_DDLDO_EN_MAN_WIDTH                                         (1)
#define RF_CW512_STX_DDLDO_EN_MAN_MASK                                          (0x00000080)
#define RF_CW512_STX_DDLDO_EN_MAN_BIT                                           (0x00000080)

#define RF_CW512_RG_STX_DDLDO_TEST_LSB                                          (5)
#define RF_CW512_RG_STX_DDLDO_TEST_WIDTH                                        (2)
#define RF_CW512_RG_STX_DDLDO_TEST_MASK                                         (0x00000060)

#define RF_CW513_STX_2G_T23_LSB                                                 (10)
#define RF_CW513_STX_2G_T23_WIDTH                                               (10)
#define RF_CW513_STX_2G_T23_MASK                                                (0x000FFC00)

#define RF_CW513_STX_2G_T23B_LSB                                                (0)
#define RF_CW513_STX_2G_T23B_WIDTH                                              (10)
#define RF_CW513_STX_2G_T23B_MASK                                               (0x000003FF)

#define RF_CW514_STX_2G_T23C_LSB                                                (10)
#define RF_CW514_STX_2G_T23C_WIDTH                                              (10)
#define RF_CW514_STX_2G_T23C_MASK                                               (0x000FFC00)

#define RF_CW514_STX_2G_T23C_EN_LSB                                             (2)
#define RF_CW514_STX_2G_T23C_EN_WIDTH                                           (1)
#define RF_CW514_STX_2G_T23C_EN_MASK                                            (0x00000004)
#define RF_CW514_STX_2G_T23C_EN_BIT                                             (0x00000004)

#define RF_CW514_STX_2G_T23B_EN_LSB                                             (1)
#define RF_CW514_STX_2G_T23B_EN_WIDTH                                           (1)
#define RF_CW514_STX_2G_T23B_EN_MASK                                            (0x00000002)
#define RF_CW514_STX_2G_T23B_EN_BIT                                             (0x00000002)

#define RF_CW514_STX_2G_T23_EN_LSB                                              (0)
#define RF_CW514_STX_2G_T23_EN_WIDTH                                            (1)
#define RF_CW514_STX_2G_T23_EN_MASK                                             (0x00000001)
#define RF_CW514_STX_2G_T23_EN_BIT                                              (0x00000001)

#define RF_CW515_STX_FDD_T16_LSB                                                (10)
#define RF_CW515_STX_FDD_T16_WIDTH                                              (10)
#define RF_CW515_STX_FDD_T16_MASK                                               (0x000FFC00)

#define RF_CW515_STX_FDD_T16B_LSB                                               (0)
#define RF_CW515_STX_FDD_T16B_WIDTH                                             (10)
#define RF_CW515_STX_FDD_T16B_MASK                                              (0x000003FF)

#define RF_CW516_STX_FDD_T16C_LSB                                               (10)
#define RF_CW516_STX_FDD_T16C_WIDTH                                             (10)
#define RF_CW516_STX_FDD_T16C_MASK                                              (0x000FFC00)

#define RF_CW516_STX_FDD_T16C_EN_LSB                                            (2)
#define RF_CW516_STX_FDD_T16C_EN_WIDTH                                          (1)
#define RF_CW516_STX_FDD_T16C_EN_MASK                                           (0x00000004)
#define RF_CW516_STX_FDD_T16C_EN_BIT                                            (0x00000004)

#define RF_CW516_STX_FDD_T16B_EN_LSB                                            (1)
#define RF_CW516_STX_FDD_T16B_EN_WIDTH                                          (1)
#define RF_CW516_STX_FDD_T16B_EN_MASK                                           (0x00000002)
#define RF_CW516_STX_FDD_T16B_EN_BIT                                            (0x00000002)

#define RF_CW516_STX_FDD_T16_EN_LSB                                             (0)
#define RF_CW516_STX_FDD_T16_EN_WIDTH                                           (1)
#define RF_CW516_STX_FDD_T16_EN_MASK                                            (0x00000001)
#define RF_CW516_STX_FDD_T16_EN_BIT                                             (0x00000001)

#define RF_CW517_CNT_ISO_STX_ANA_LSB                                            (16)
#define RF_CW517_CNT_ISO_STX_ANA_WIDTH                                          (4)
#define RF_CW517_CNT_ISO_STX_ANA_MASK                                           (0x000F0000)

#define RF_CW517_ISO_SX_ANA_MAN_LSB                                             (15)
#define RF_CW517_ISO_SX_ANA_MAN_WIDTH                                           (1)
#define RF_CW517_ISO_SX_ANA_MAN_MASK                                            (0x00008000)
#define RF_CW517_ISO_SX_ANA_MAN_BIT                                             (0x00008000)

#define RF_CW517_ISO_SX_ANA_3WIRE_EN_LSB                                        (14)
#define RF_CW517_ISO_SX_ANA_3WIRE_EN_WIDTH                                      (1)
#define RF_CW517_ISO_SX_ANA_3WIRE_EN_MASK                                       (0x00004000)
#define RF_CW517_ISO_SX_ANA_3WIRE_EN_BIT                                        (0x00004000)

#define RF_CW517_ISO_CLKREF_26_52_MAN_EN_LSB                                    (13)
#define RF_CW517_ISO_CLKREF_26_52_MAN_EN_WIDTH                                  (1)
#define RF_CW517_ISO_CLKREF_26_52_MAN_EN_MASK                                   (0x00002000)
#define RF_CW517_ISO_CLKREF_26_52_MAN_EN_BIT                                    (0x00002000)

#define RF_CW517_ISO_CLKREF_26_52_MAN_LSB                                       (12)
#define RF_CW517_ISO_CLKREF_26_52_MAN_WIDTH                                     (1)
#define RF_CW517_ISO_CLKREF_26_52_MAN_MASK                                      (0x00001000)
#define RF_CW517_ISO_CLKREF_26_52_MAN_BIT                                       (0x00001000)

#define RF_CW517_XO_STX_EN_MAN_EN_LSB                                           (11)
#define RF_CW517_XO_STX_EN_MAN_EN_WIDTH                                         (1)
#define RF_CW517_XO_STX_EN_MAN_EN_MASK                                          (0x00000800)
#define RF_CW517_XO_STX_EN_MAN_EN_BIT                                           (0x00000800)

#define RF_CW517_XO_STX_EN_MAN_LSB                                              (10)
#define RF_CW517_XO_STX_EN_MAN_WIDTH                                            (1)
#define RF_CW517_XO_STX_EN_MAN_MASK                                             (0x00000400)
#define RF_CW517_XO_STX_EN_MAN_BIT                                              (0x00000400)

#define RF_CW517_XO_STXR_CK_EN_MAN_EN_LSB                                       (9)
#define RF_CW517_XO_STXR_CK_EN_MAN_EN_WIDTH                                     (1)
#define RF_CW517_XO_STXR_CK_EN_MAN_EN_MASK                                      (0x00000200)
#define RF_CW517_XO_STXR_CK_EN_MAN_EN_BIT                                       (0x00000200)

#define RF_CW517_XO_STXR_CK_EN_MAN_LSB                                          (8)
#define RF_CW517_XO_STXR_CK_EN_MAN_WIDTH                                        (1)
#define RF_CW517_XO_STXR_CK_EN_MAN_MASK                                         (0x00000100)
#define RF_CW517_XO_STXR_CK_EN_MAN_BIT                                          (0x00000100)

#define RF_CW517_DCOCK_ON_LSB                                                   (2)
#define RF_CW517_DCOCK_ON_WIDTH                                                 (1)
#define RF_CW517_DCOCK_ON_MASK                                                  (0x00000004)
#define RF_CW517_DCOCK_ON_BIT                                                   (0x00000004)

#define RF_CW517_REFCLK_ON_LSB                                                  (1)
#define RF_CW517_REFCLK_ON_WIDTH                                                (1)
#define RF_CW517_REFCLK_ON_MASK                                                 (0x00000002)
#define RF_CW517_REFCLK_ON_BIT                                                  (0x00000002)

#define RF_CW517_REFCLK_26_52_ON_LSB                                            (0)
#define RF_CW517_REFCLK_26_52_ON_WIDTH                                          (1)
#define RF_CW517_REFCLK_26_52_ON_MASK                                           (0x00000001)
#define RF_CW517_REFCLK_26_52_ON_BIT                                            (0x00000001)

#define RF_CW518_TDC_ENCODER_MAJORVOTE_LSB                                      (19)
#define RF_CW518_TDC_ENCODER_MAJORVOTE_WIDTH                                    (1)
#define RF_CW518_TDC_ENCODER_MAJORVOTE_MASK                                     (0x00080000)
#define RF_CW518_TDC_ENCODER_MAJORVOTE_BIT                                      (0x00080000)

#define RF_CW518_TDC_DEM_MODE_LSB                                               (18)
#define RF_CW518_TDC_DEM_MODE_WIDTH                                             (1)
#define RF_CW518_TDC_DEM_MODE_MASK                                              (0x00040000)
#define RF_CW518_TDC_DEM_MODE_BIT                                               (0x00040000)

#define RF_CW518_TDC_HIGH_CURRENT_MODE_LSB                                      (17)
#define RF_CW518_TDC_HIGH_CURRENT_MODE_WIDTH                                    (1)
#define RF_CW518_TDC_HIGH_CURRENT_MODE_MASK                                     (0x00020000)
#define RF_CW518_TDC_HIGH_CURRENT_MODE_BIT                                      (0x00020000)

#define RF_CW518_RG_TDC_DITHER_INC_LSB                                          (15)
#define RF_CW518_RG_TDC_DITHER_INC_WIDTH                                        (2)
#define RF_CW518_RG_TDC_DITHER_INC_MASK                                         (0x00018000)

#define RF_CW518_TDC_ENCODER_DOMINO_LSB                                         (14)
#define RF_CW518_TDC_ENCODER_DOMINO_WIDTH                                       (1)
#define RF_CW518_TDC_ENCODER_DOMINO_MASK                                        (0x00004000)
#define RF_CW518_TDC_ENCODER_DOMINO_BIT                                         (0x00004000)

#define RF_CW518_TDC_ENCODER_QMIN_LSB                                           (8)
#define RF_CW518_TDC_ENCODER_QMIN_WIDTH                                         (6)
#define RF_CW518_TDC_ENCODER_QMIN_MASK                                          (0x00003F00)

#define RF_CW518_TDC_ENCODER_SEL_LSB                                            (7)
#define RF_CW518_TDC_ENCODER_SEL_WIDTH                                          (1)
#define RF_CW518_TDC_ENCODER_SEL_MASK                                           (0x00000080)
#define RF_CW518_TDC_ENCODER_SEL_BIT                                            (0x00000080)

#define RF_CW518_RG_TDC_FLIPSIGN_LSB                                            (6)
#define RF_CW518_RG_TDC_FLIPSIGN_WIDTH                                          (1)
#define RF_CW518_RG_TDC_FLIPSIGN_MASK                                           (0x00000040)
#define RF_CW518_RG_TDC_FLIPSIGN_BIT                                            (0x00000040)

#define RF_CW518_RG_LDO_TDC_IS_52M_LSB                                          (4)
#define RF_CW518_RG_LDO_TDC_IS_52M_WIDTH                                        (2)
#define RF_CW518_RG_LDO_TDC_IS_52M_MASK                                         (0x00000030)

#define RF_CW518_RG_LDO_TDC_IS_LSB                                              (2)
#define RF_CW518_RG_LDO_TDC_IS_WIDTH                                            (2)
#define RF_CW518_RG_LDO_TDC_IS_MASK                                             (0x0000000C)

#define RF_CW518_RG_LDO_TDC_VS_LSB                                              (0)
#define RF_CW518_RG_LDO_TDC_VS_WIDTH                                            (2)
#define RF_CW518_RG_LDO_TDC_VS_MASK                                             (0x00000003)

#define RF_CW519_TDC_LATCH_INV_LSB                                              (19)
#define RF_CW519_TDC_LATCH_INV_WIDTH                                            (1)
#define RF_CW519_TDC_LATCH_INV_MASK                                             (0x00080000)
#define RF_CW519_TDC_LATCH_INV_BIT                                              (0x00080000)

#define RF_CW519_PM_LATCH_INV_LSB                                               (18)
#define RF_CW519_PM_LATCH_INV_WIDTH                                             (1)
#define RF_CW519_PM_LATCH_INV_MASK                                              (0x00040000)
#define RF_CW519_PM_LATCH_INV_BIT                                               (0x00040000)

#define RF_CW519_TDC_DITHER_MODE_LSB                                            (17)
#define RF_CW519_TDC_DITHER_MODE_WIDTH                                          (1)
#define RF_CW519_TDC_DITHER_MODE_MASK                                           (0x00020000)
#define RF_CW519_TDC_DITHER_MODE_BIT                                            (0x00020000)

#define RF_CW519_RG_TDC_DISABLE_LSB                                             (16)
#define RF_CW519_RG_TDC_DISABLE_WIDTH                                           (1)
#define RF_CW519_RG_TDC_DISABLE_MASK                                            (0x00010000)
#define RF_CW519_RG_TDC_DISABLE_BIT                                             (0x00010000)

#define RF_CW519_RG_TDC_EXT_KICK_LSB                                            (15)
#define RF_CW519_RG_TDC_EXT_KICK_WIDTH                                          (1)
#define RF_CW519_RG_TDC_EXT_KICK_MASK                                           (0x00008000)
#define RF_CW519_RG_TDC_EXT_KICK_BIT                                            (0x00008000)

#define RF_CW519_RG_TDC_EXT_EN_LSB                                              (14)
#define RF_CW519_RG_TDC_EXT_EN_WIDTH                                            (1)
#define RF_CW519_RG_TDC_EXT_EN_MASK                                             (0x00004000)
#define RF_CW519_RG_TDC_EXT_EN_BIT                                              (0x00004000)

#define RF_CW519_TDC_ENCODER_QMAX_LSB                                           (8)
#define RF_CW519_TDC_ENCODER_QMAX_WIDTH                                         (6)
#define RF_CW519_TDC_ENCODER_QMAX_MASK                                          (0x00003F00)

#define RF_CW519_RG_TDC_DELAY_INC_LSB                                           (7)
#define RF_CW519_RG_TDC_DELAY_INC_WIDTH                                         (1)
#define RF_CW519_RG_TDC_DELAY_INC_MASK                                          (0x00000080)
#define RF_CW519_RG_TDC_DELAY_INC_BIT                                           (0x00000080)

#define RF_CW519_TDC_OS_LSB                                                     (3)
#define RF_CW519_TDC_OS_WIDTH                                                   (4)
#define RF_CW519_TDC_OS_MASK                                                    (0x00000078)

#define RF_CW519_RG_TDC_DC_TEST_LSB                                             (1)
#define RF_CW519_RG_TDC_DC_TEST_WIDTH                                           (2)
#define RF_CW519_RG_TDC_DC_TEST_MASK                                            (0x00000006)

#define RF_CW520_TDC_MAN_LSB                                                    (19)
#define RF_CW520_TDC_MAN_WIDTH                                                  (1)
#define RF_CW520_TDC_MAN_MASK                                                   (0x00080000)
#define RF_CW520_TDC_MAN_BIT                                                    (0x00080000)

#define RF_CW520_TDC_3WIRE_EN_LSB                                               (18)
#define RF_CW520_TDC_3WIRE_EN_WIDTH                                             (1)
#define RF_CW520_TDC_3WIRE_EN_MASK                                              (0x00040000)
#define RF_CW520_TDC_3WIRE_EN_BIT                                               (0x00040000)

#define RF_CW520_RG_26M_DUTY_SEL_LSB                                            (13)
#define RF_CW520_RG_26M_DUTY_SEL_WIDTH                                          (5)
#define RF_CW520_RG_26M_DUTY_SEL_MASK                                           (0x0003E000)

#define RF_CW520_RG_52M_DUTY_SEL_LSB                                            (10)
#define RF_CW520_RG_52M_DUTY_SEL_WIDTH                                          (3)
#define RF_CW520_RG_52M_DUTY_SEL_MASK                                           (0x00001C00)

#define RF_CW521_WBAND_EN_LSB                                                   (19)
#define RF_CW521_WBAND_EN_WIDTH                                                 (1)
#define RF_CW521_WBAND_EN_MASK                                                  (0x00080000)
#define RF_CW521_WBAND_EN_BIT                                                   (0x00080000)

#define RF_CW521_LF_CHKSUM_EN_LSB                                               (18)
#define RF_CW521_LF_CHKSUM_EN_WIDTH                                             (1)
#define RF_CW521_LF_CHKSUM_EN_MASK                                              (0x00040000)
#define RF_CW521_LF_CHKSUM_EN_BIT                                               (0x00040000)

#define RF_CW521_LF_KFRAC_LSB                                                   (15)
#define RF_CW521_LF_KFRAC_WIDTH                                                 (3)
#define RF_CW521_LF_KFRAC_MASK                                                  (0x00038000)

#define RF_CW521_LF_K0_2G_LSB                                                   (13)
#define RF_CW521_LF_K0_2G_WIDTH                                                 (2)
#define RF_CW521_LF_K0_2G_MASK                                                  (0x00006000)

#define RF_CW521_LF_FINE_LSB                                                    (9)
#define RF_CW521_LF_FINE_WIDTH                                                  (4)
#define RF_CW521_LF_FINE_MASK                                                   (0x00001E00)

#define RF_CW521_LF_OFFSET_26M_LSB                                              (0)
#define RF_CW521_LF_OFFSET_26M_WIDTH                                            (9)
#define RF_CW521_LF_OFFSET_26M_MASK                                             (0x000001FF)

#define RF_CW522_LF_KDCO_TEST_SEL_LSB                                           (18)
#define RF_CW522_LF_KDCO_TEST_SEL_WIDTH                                         (2)
#define RF_CW522_LF_KDCO_TEST_SEL_MASK                                          (0x000C0000)

#define RF_CW522_LF_KDCO_TEST_EN_LSB                                            (17)
#define RF_CW522_LF_KDCO_TEST_EN_WIDTH                                          (1)
#define RF_CW522_LF_KDCO_TEST_EN_MASK                                           (0x00020000)
#define RF_CW522_LF_KDCO_TEST_EN_BIT                                            (0x00020000)

#define RF_CW522_LF_OUT_STDB_SEL_LSB                                            (9)
#define RF_CW522_LF_OUT_STDB_SEL_WIDTH                                          (4)
#define RF_CW522_LF_OUT_STDB_SEL_MASK                                           (0x00001E00)

#define RF_CW522_LF_KDCO_TEST_FIXED_LSB                                         (1)
#define RF_CW522_LF_KDCO_TEST_FIXED_WIDTH                                       (8)
#define RF_CW522_LF_KDCO_TEST_FIXED_MASK                                        (0x000001FE)

#define RF_CW522_LF_TYPE_LSB                                                    (0)
#define RF_CW522_LF_TYPE_WIDTH                                                  (1)
#define RF_CW522_LF_TYPE_MASK                                                   (0x00000001)
#define RF_CW522_LF_TYPE_BIT                                                    (0x00000001)

#define RF_CW523_ADPLL_BIST_MODE_LSB                                            (19)
#define RF_CW523_ADPLL_BIST_MODE_WIDTH                                          (1)
#define RF_CW523_ADPLL_BIST_MODE_MASK                                           (0x00080000)
#define RF_CW523_ADPLL_BIST_MODE_BIT                                            (0x00080000)

#define RF_CW523_BIST_PAT_LEN_LSB                                               (17)
#define RF_CW523_BIST_PAT_LEN_WIDTH                                             (2)
#define RF_CW523_BIST_PAT_LEN_MASK                                              (0x00060000)

#define RF_CW523_LF_KDCO_TEST_OFFSET_LSB                                        (9)
#define RF_CW523_LF_KDCO_TEST_OFFSET_WIDTH                                      (7)
#define RF_CW523_LF_KDCO_TEST_OFFSET_MASK                                       (0x0000FE00)

#define RF_CW523_LF_KDCO_TEST_FRAC_LSB                                          (0)
#define RF_CW523_LF_KDCO_TEST_FRAC_WIDTH                                        (9)
#define RF_CW523_LF_KDCO_TEST_FRAC_MASK                                         (0x000001FF)

#define RF_CW524_LF_TSW1_LSB                                                    (17)
#define RF_CW524_LF_TSW1_WIDTH                                                  (3)
#define RF_CW524_LF_TSW1_MASK                                                   (0x000E0000)

#define RF_CW524_LF_TSW2_LSB                                                    (13)
#define RF_CW524_LF_TSW2_WIDTH                                                  (4)
#define RF_CW524_LF_TSW2_MASK                                                   (0x0001E000)

#define RF_CW524_LF_BWX2_2G_LSB                                                 (12)
#define RF_CW524_LF_BWX2_2G_WIDTH                                               (1)
#define RF_CW524_LF_BWX2_2G_MASK                                                (0x00001000)
#define RF_CW524_LF_BWX2_2G_BIT                                                 (0x00001000)

#define RF_CW524_LF_BWX2_3G_LSB                                                 (11)
#define RF_CW524_LF_BWX2_3G_WIDTH                                               (1)
#define RF_CW524_LF_BWX2_3G_MASK                                                (0x00000800)
#define RF_CW524_LF_BWX2_3G_BIT                                                 (0x00000800)

#define RF_CW524_GS_EN_2G_LSB                                                   (10)
#define RF_CW524_GS_EN_2G_WIDTH                                                 (1)
#define RF_CW524_GS_EN_2G_MASK                                                  (0x00000400)
#define RF_CW524_GS_EN_2G_BIT                                                   (0x00000400)

#define RF_CW524_GS_EN_3G_LSB                                                   (9)
#define RF_CW524_GS_EN_3G_WIDTH                                                 (1)
#define RF_CW524_GS_EN_3G_MASK                                                  (0x00000200)
#define RF_CW524_GS_EN_3G_BIT                                                   (0x00000200)

#define RF_CW524_LF_K0_3G_LSB                                                   (7)
#define RF_CW524_LF_K0_3G_WIDTH                                                 (2)
#define RF_CW524_LF_K0_3G_MASK                                                  (0x00000180)

#define RF_CW524_KG_MAN_LSB                                                     (1)
#define RF_CW524_KG_MAN_WIDTH                                                   (6)
#define RF_CW524_KG_MAN_MASK                                                    (0x0000007E)

#define RF_CW524_KG_MAN_EN_LSB                                                  (0)
#define RF_CW524_KG_MAN_EN_WIDTH                                                (1)
#define RF_CW524_KG_MAN_EN_MASK                                                 (0x00000001)
#define RF_CW524_KG_MAN_EN_BIT                                                  (0x00000001)

#define RF_CW525_LF_TSW1_3G_52M_LSB                                             (17)
#define RF_CW525_LF_TSW1_3G_52M_WIDTH                                           (3)
#define RF_CW525_LF_TSW1_3G_52M_MASK                                            (0x000E0000)

#define RF_CW525_LF_IPATH_GAIN_OFS_LSB                                          (15)
#define RF_CW525_LF_IPATH_GAIN_OFS_WIDTH                                        (2)
#define RF_CW525_LF_IPATH_GAIN_OFS_MASK                                         (0x00018000)

#define RF_CW525_LF_OFFSET_52M_LSB                                              (0)
#define RF_CW525_LF_OFFSET_52M_WIDTH                                            (9)
#define RF_CW525_LF_OFFSET_52M_MASK                                             (0x000001FF)

#define RF_CW526_DCO_L12_ratio_LSB                                              (13)
#define RF_CW526_DCO_L12_ratio_WIDTH                                            (7)
#define RF_CW526_DCO_L12_ratio_MASK                                             (0x000FE000)

#define RF_CW526_RG_CKREF_SYNC_EN_LSB                                           (12)
#define RF_CW526_RG_CKREF_SYNC_EN_WIDTH                                         (1)
#define RF_CW526_RG_CKREF_SYNC_EN_MASK                                          (0x00001000)
#define RF_CW526_RG_CKREF_SYNC_EN_BIT                                           (0x00001000)

#define RF_CW526_ADD_SSCG_THO_LSB                                               (3)
#define RF_CW526_ADD_SSCG_THO_WIDTH                                             (1)
#define RF_CW526_ADD_SSCG_THO_MASK                                              (0x00000008)
#define RF_CW526_ADD_SSCG_THO_BIT                                               (0x00000008)

#define RF_CW526_RG_SSCG_TD_LSB                                                 (2)
#define RF_CW526_RG_SSCG_TD_WIDTH                                               (1)
#define RF_CW526_RG_SSCG_TD_MASK                                                (0x00000004)
#define RF_CW526_RG_SSCG_TD_BIT                                                 (0x00000004)

#define RF_CW526_RG_EN_SSCG_LSB                                                 (1)
#define RF_CW526_RG_EN_SSCG_WIDTH                                               (1)
#define RF_CW526_RG_EN_SSCG_MASK                                                (0x00000002)
#define RF_CW526_RG_EN_SSCG_BIT                                                 (0x00000002)

#define RF_CW526_RG_EN_SSCG_CK_LSB                                              (0)
#define RF_CW526_RG_EN_SSCG_CK_WIDTH                                            (1)
#define RF_CW526_RG_EN_SSCG_CK_MASK                                             (0x00000001)
#define RF_CW526_RG_EN_SSCG_CK_BIT                                              (0x00000001)

#define RF_CW527_PM_LPDLY_NUM_LSB                                               (18)
#define RF_CW527_PM_LPDLY_NUM_WIDTH                                             (2)
#define RF_CW527_PM_LPDLY_NUM_MASK                                              (0x000C0000)

#define RF_CW527_PM_HPDLY_NUM_LSB                                               (16)
#define RF_CW527_PM_HPDLY_NUM_WIDTH                                             (2)
#define RF_CW527_PM_HPDLY_NUM_MASK                                              (0x00030000)

#define RF_CW527_LF_S2S1S0_LSB                                                  (13)
#define RF_CW527_LF_S2S1S0_WIDTH                                                (3)
#define RF_CW527_LF_S2S1S0_MASK                                                 (0x0000E000)

#define RF_CW527_PM_PWR_AWARE_DIS_LSB                                           (7)
#define RF_CW527_PM_PWR_AWARE_DIS_WIDTH                                         (1)
#define RF_CW527_PM_PWR_AWARE_DIS_MASK                                          (0x00000080)
#define RF_CW527_PM_PWR_AWARE_DIS_BIT                                           (0x00000080)

#define RF_CW527_PM_OLT_MODE_LSB                                                (6)
#define RF_CW527_PM_OLT_MODE_WIDTH                                              (1)
#define RF_CW527_PM_OLT_MODE_MASK                                               (0x00000040)
#define RF_CW527_PM_OLT_MODE_BIT                                                (0x00000040)

#define RF_CW527_PM_FLTR_SORB_LSB                                               (5)
#define RF_CW527_PM_FLTR_SORB_WIDTH                                             (1)
#define RF_CW527_PM_FLTR_SORB_MASK                                              (0x00000020)
#define RF_CW527_PM_FLTR_SORB_BIT                                               (0x00000020)

#define RF_CW527_PM_BSI_FIFO_DEPTH_LSB                                          (0)
#define RF_CW527_PM_BSI_FIFO_DEPTH_WIDTH                                        (5)
#define RF_CW527_PM_BSI_FIFO_DEPTH_MASK                                         (0x0000001F)

#define RF_CW528_RG_DD_MON_SEL_LSB                                              (12)
#define RF_CW528_RG_DD_MON_SEL_WIDTH                                            (7)
#define RF_CW528_RG_DD_MON_SEL_MASK                                             (0x0007F000)

#define RF_CW528_DCODEM_MAN_EN_LSB                                              (11)
#define RF_CW528_DCODEM_MAN_EN_WIDTH                                            (1)
#define RF_CW528_DCODEM_MAN_EN_MASK                                             (0x00000800)
#define RF_CW528_DCODEM_MAN_EN_BIT                                              (0x00000800)

#define RF_CW528_DCODEM_MAN_LSB                                                 (10)
#define RF_CW528_DCODEM_MAN_WIDTH                                               (1)
#define RF_CW528_DCODEM_MAN_MASK                                                (0x00000400)
#define RF_CW528_DCODEM_MAN_BIT                                                 (0x00000400)

#define RF_CW528_DEM_CHUNK_LSB                                                  (2)
#define RF_CW528_DEM_CHUNK_WIDTH                                                (7)
#define RF_CW528_DEM_CHUNK_MASK                                                 (0x000001FC)

#define RF_CW528_DCODEM_EN_LSB                                                  (1)
#define RF_CW528_DCODEM_EN_WIDTH                                                (1)
#define RF_CW528_DCODEM_EN_MASK                                                 (0x00000002)
#define RF_CW528_DCODEM_EN_BIT                                                  (0x00000002)

#define RF_CW528_DCOSDM_EN_LSB                                                  (0)
#define RF_CW528_DCOSDM_EN_WIDTH                                                (1)
#define RF_CW528_DCOSDM_EN_MASK                                                 (0x00000001)
#define RF_CW528_DCOSDM_EN_BIT                                                  (0x00000001)

#define RF_CW529_DCO_SCAK_CODETYP_LSB                                           (8)
#define RF_CW529_DCO_SCAK_CODETYP_WIDTH                                         (12)
#define RF_CW529_DCO_SCAK_CODETYP_MASK                                          (0x000FFF00)

#define RF_CW529_LDO_DCO_FCOFF_MAN_LSB                                          (7)
#define RF_CW529_LDO_DCO_FCOFF_MAN_WIDTH                                        (1)
#define RF_CW529_LDO_DCO_FCOFF_MAN_MASK                                         (0x00000080)
#define RF_CW529_LDO_DCO_FCOFF_MAN_BIT                                          (0x00000080)

#define RF_CW529_LDO_DCO_FCOFF_MAN_EN_LSB                                       (6)
#define RF_CW529_LDO_DCO_FCOFF_MAN_EN_WIDTH                                     (1)
#define RF_CW529_LDO_DCO_FCOFF_MAN_EN_MASK                                      (0x00000040)
#define RF_CW529_LDO_DCO_FCOFF_MAN_EN_BIT                                       (0x00000040)

#define RF_CW529_LDO_DCO_RFILTER_SEL_LSB                                        (4)
#define RF_CW529_LDO_DCO_RFILTER_SEL_WIDTH                                      (2)
#define RF_CW529_LDO_DCO_RFILTER_SEL_MASK                                       (0x00000030)

#define RF_CW530_DCO2_MAN_LSB                                                   (18)
#define RF_CW530_DCO2_MAN_WIDTH                                                 (1)
#define RF_CW530_DCO2_MAN_MASK                                                  (0x00040000)
#define RF_CW530_DCO2_MAN_BIT                                                   (0x00040000)

#define RF_CW530_DCO_MAN_LSB                                                    (17)
#define RF_CW530_DCO_MAN_WIDTH                                                  (1)
#define RF_CW530_DCO_MAN_MASK                                                   (0x00020000)
#define RF_CW530_DCO_MAN_BIT                                                    (0x00020000)

#define RF_CW530_DCO2_3WIRE_EN_LSB                                              (16)
#define RF_CW530_DCO2_3WIRE_EN_WIDTH                                            (1)
#define RF_CW530_DCO2_3WIRE_EN_MASK                                             (0x00010000)
#define RF_CW530_DCO2_3WIRE_EN_BIT                                              (0x00010000)

#define RF_CW530_DCO_3WIRE_EN_LSB                                               (15)
#define RF_CW530_DCO_3WIRE_EN_WIDTH                                             (1)
#define RF_CW530_DCO_3WIRE_EN_MASK                                              (0x00008000)
#define RF_CW530_DCO_3WIRE_EN_BIT                                               (0x00008000)

#define RF_CW530_LDO_DCO_FCOFF_DLY_LSB                                          (12)
#define RF_CW530_LDO_DCO_FCOFF_DLY_WIDTH                                        (3)
#define RF_CW530_LDO_DCO_FCOFF_DLY_MASK                                         (0x00007000)

#define RF_CW530_LDO_DCO_FC_KEEP_LSB                                            (11)
#define RF_CW530_LDO_DCO_FC_KEEP_WIDTH                                          (1)
#define RF_CW530_LDO_DCO_FC_KEEP_MASK                                           (0x00000800)
#define RF_CW530_LDO_DCO_FC_KEEP_BIT                                            (0x00000800)

#define RF_CW530_RG_LDO_DCO_VS_LSB                                              (6)
#define RF_CW530_RG_LDO_DCO_VS_WIDTH                                            (3)
#define RF_CW530_RG_LDO_DCO_VS_MASK                                             (0x000001C0)

#define RF_CW530_RG_DCO_DIV68_VS_LSB                                            (4)
#define RF_CW530_RG_DCO_DIV68_VS_WIDTH                                          (2)
#define RF_CW530_RG_DCO_DIV68_VS_MASK                                           (0x00000030)

#define RF_CW530_DCO_DIV68_3WIRE_EN_LSB                                         (3)
#define RF_CW530_DCO_DIV68_3WIRE_EN_WIDTH                                       (1)
#define RF_CW530_DCO_DIV68_3WIRE_EN_MASK                                        (0x00000008)
#define RF_CW530_DCO_DIV68_3WIRE_EN_BIT                                         (0x00000008)

#define RF_CW530_RG_STX_MON_BUF_EN_LSB                                          (2)
#define RF_CW530_RG_STX_MON_BUF_EN_WIDTH                                        (1)
#define RF_CW530_RG_STX_MON_BUF_EN_MASK                                         (0x00000004)
#define RF_CW530_RG_STX_MON_BUF_EN_BIT                                          (0x00000004)

#define RF_CW530_RG_STX_MON_BUF_VS_LSB                                          (0)
#define RF_CW530_RG_STX_MON_BUF_VS_WIDTH                                        (2)
#define RF_CW530_RG_STX_MON_BUF_VS_MASK                                         (0x00000003)

#define RF_CW531_DCO_DIV68_EN_DLY_LSB                                           (17)
#define RF_CW531_DCO_DIV68_EN_DLY_WIDTH                                         (3)
#define RF_CW531_DCO_DIV68_EN_DLY_MASK                                          (0x000E0000)

#define RF_CW531_DCO_SCAK_SAR_BIT_LSB                                           (16)
#define RF_CW531_DCO_SCAK_SAR_BIT_WIDTH                                         (1)
#define RF_CW531_DCO_SCAK_SAR_BIT_MASK                                          (0x00010000)
#define RF_CW531_DCO_SCAK_SAR_BIT_BIT                                           (0x00010000)

#define RF_CW531_DCO_SCAK_M_F_LSB                                               (14)
#define RF_CW531_DCO_SCAK_M_F_WIDTH                                             (2)
#define RF_CW531_DCO_SCAK_M_F_MASK                                              (0x0000C000)

#define RF_CW531_DCO_SCAK_M_C3_LSB                                              (12)
#define RF_CW531_DCO_SCAK_M_C3_WIDTH                                            (2)
#define RF_CW531_DCO_SCAK_M_C3_MASK                                             (0x00003000)

#define RF_CW531_DCO_SCAK_M_C2_LSB                                              (10)
#define RF_CW531_DCO_SCAK_M_C2_WIDTH                                            (2)
#define RF_CW531_DCO_SCAK_M_C2_MASK                                             (0x00000C00)

#define RF_CW531_DCO_SCAK_M_C1_LSB                                              (8)
#define RF_CW531_DCO_SCAK_M_C1_WIDTH                                            (2)
#define RF_CW531_DCO_SCAK_M_C1_MASK                                             (0x00000300)

#define RF_CW531_RG_DCO_VSEL_SCA_LSB                                            (6)
#define RF_CW531_RG_DCO_VSEL_SCA_WIDTH                                          (2)
#define RF_CW531_RG_DCO_VSEL_SCA_MASK                                           (0x000000C0)

#define RF_CW531_DCO_SCAK_SAR_BIT2_LSB                                          (4)
#define RF_CW531_DCO_SCAK_SAR_BIT2_WIDTH                                        (1)
#define RF_CW531_DCO_SCAK_SAR_BIT2_MASK                                         (0x00000010)
#define RF_CW531_DCO_SCAK_SAR_BIT2_BIT                                          (0x00000010)

#define RF_CW531_DCO_SCAK_2ND_C_EN_LSB                                          (3)
#define RF_CW531_DCO_SCAK_2ND_C_EN_WIDTH                                        (1)
#define RF_CW531_DCO_SCAK_2ND_C_EN_MASK                                         (0x00000008)
#define RF_CW531_DCO_SCAK_2ND_C_EN_BIT                                          (0x00000008)

#define RF_CW532_DCO_BUF_MAN_LSB                                                (19)
#define RF_CW532_DCO_BUF_MAN_WIDTH                                              (1)
#define RF_CW532_DCO_BUF_MAN_MASK                                               (0x00080000)
#define RF_CW532_DCO_BUF_MAN_BIT                                                (0x00080000)

#define RF_CW532_DCO_BUF_3WIRE_EN_LSB                                           (18)
#define RF_CW532_DCO_BUF_3WIRE_EN_WIDTH                                         (1)
#define RF_CW532_DCO_BUF_3WIRE_EN_MASK                                          (0x00040000)
#define RF_CW532_DCO_BUF_3WIRE_EN_BIT                                           (0x00040000)

#define RF_CW532_DCO2G_PREBUF_MAN_LSB                                           (17)
#define RF_CW532_DCO2G_PREBUF_MAN_WIDTH                                         (1)
#define RF_CW532_DCO2G_PREBUF_MAN_MASK                                          (0x00020000)
#define RF_CW532_DCO2G_PREBUF_MAN_BIT                                           (0x00020000)

#define RF_CW532_DCO2G_PREBUF_3WIRE_EN_LSB                                      (16)
#define RF_CW532_DCO2G_PREBUF_3WIRE_EN_WIDTH                                    (1)
#define RF_CW532_DCO2G_PREBUF_3WIRE_EN_MASK                                     (0x00010000)
#define RF_CW532_DCO2G_PREBUF_3WIRE_EN_BIT                                      (0x00010000)

#define RF_CW532_DCO2G_PREBUF_VS_LSB                                            (14)
#define RF_CW532_DCO2G_PREBUF_VS_WIDTH                                          (2)
#define RF_CW532_DCO2G_PREBUF_VS_MASK                                           (0x0000C000)

#define RF_CW532_RG_DCOH_BUF_VS_LSB                                             (4)
#define RF_CW532_RG_DCOH_BUF_VS_WIDTH                                           (2)
#define RF_CW532_RG_DCOH_BUF_VS_MASK                                            (0x00000030)

#define RF_CW532_RG_DCOL_BUF_VS_LSB                                             (2)
#define RF_CW532_RG_DCOL_BUF_VS_WIDTH                                           (2)
#define RF_CW532_RG_DCOL_BUF_VS_MASK                                            (0x0000000C)

#define RF_CW532_RG_DCO2G_BUF_VS_LSB                                            (0)
#define RF_CW532_RG_DCO2G_BUF_VS_WIDTH                                          (2)
#define RF_CW532_RG_DCO2G_BUF_VS_MASK                                           (0x00000003)

#define RF_CW533_DCO_2G_EN_9_LSB                                                (19)
#define RF_CW533_DCO_2G_EN_9_WIDTH                                              (1)
#define RF_CW533_DCO_2G_EN_9_MASK                                               (0x00080000)
#define RF_CW533_DCO_2G_EN_9_BIT                                                (0x00080000)

#define RF_CW533_DCO_L12_FLAG_9_LSB                                             (18)
#define RF_CW533_DCO_L12_FLAG_9_WIDTH                                           (1)
#define RF_CW533_DCO_L12_FLAG_9_MASK                                            (0x00040000)
#define RF_CW533_DCO_L12_FLAG_9_BIT                                             (0x00040000)

#define RF_CW533_DCO_2G_EN_8_LSB                                                (17)
#define RF_CW533_DCO_2G_EN_8_WIDTH                                              (1)
#define RF_CW533_DCO_2G_EN_8_MASK                                               (0x00020000)
#define RF_CW533_DCO_2G_EN_8_BIT                                                (0x00020000)

#define RF_CW533_DCO_L12_FLAG_8_LSB                                             (16)
#define RF_CW533_DCO_L12_FLAG_8_WIDTH                                           (1)
#define RF_CW533_DCO_L12_FLAG_8_MASK                                            (0x00010000)
#define RF_CW533_DCO_L12_FLAG_8_BIT                                             (0x00010000)

#define RF_CW533_DCO_2G_EN_7_LSB                                                (15)
#define RF_CW533_DCO_2G_EN_7_WIDTH                                              (1)
#define RF_CW533_DCO_2G_EN_7_MASK                                               (0x00008000)
#define RF_CW533_DCO_2G_EN_7_BIT                                                (0x00008000)

#define RF_CW533_DCO_L12_FLAG_7_LSB                                             (14)
#define RF_CW533_DCO_L12_FLAG_7_WIDTH                                           (1)
#define RF_CW533_DCO_L12_FLAG_7_MASK                                            (0x00004000)
#define RF_CW533_DCO_L12_FLAG_7_BIT                                             (0x00004000)

#define RF_CW533_DCO_2G_EN_6_LSB                                                (13)
#define RF_CW533_DCO_2G_EN_6_WIDTH                                              (1)
#define RF_CW533_DCO_2G_EN_6_MASK                                               (0x00002000)
#define RF_CW533_DCO_2G_EN_6_BIT                                                (0x00002000)

#define RF_CW533_DCO_L12_FLAG_6_LSB                                             (12)
#define RF_CW533_DCO_L12_FLAG_6_WIDTH                                           (1)
#define RF_CW533_DCO_L12_FLAG_6_MASK                                            (0x00001000)
#define RF_CW533_DCO_L12_FLAG_6_BIT                                             (0x00001000)

#define RF_CW533_DCO_2G_EN_5_LSB                                                (11)
#define RF_CW533_DCO_2G_EN_5_WIDTH                                              (1)
#define RF_CW533_DCO_2G_EN_5_MASK                                               (0x00000800)
#define RF_CW533_DCO_2G_EN_5_BIT                                                (0x00000800)

#define RF_CW533_DCO_L12_FLAG_5_LSB                                             (10)
#define RF_CW533_DCO_L12_FLAG_5_WIDTH                                           (1)
#define RF_CW533_DCO_L12_FLAG_5_MASK                                            (0x00000400)
#define RF_CW533_DCO_L12_FLAG_5_BIT                                             (0x00000400)

#define RF_CW533_DCO_2G_EN_4_LSB                                                (9)
#define RF_CW533_DCO_2G_EN_4_WIDTH                                              (1)
#define RF_CW533_DCO_2G_EN_4_MASK                                               (0x00000200)
#define RF_CW533_DCO_2G_EN_4_BIT                                                (0x00000200)

#define RF_CW533_DCO_L12_FLAG_4_LSB                                             (8)
#define RF_CW533_DCO_L12_FLAG_4_WIDTH                                           (1)
#define RF_CW533_DCO_L12_FLAG_4_MASK                                            (0x00000100)
#define RF_CW533_DCO_L12_FLAG_4_BIT                                             (0x00000100)

#define RF_CW533_DCO_2G_EN_3_LSB                                                (7)
#define RF_CW533_DCO_2G_EN_3_WIDTH                                              (1)
#define RF_CW533_DCO_2G_EN_3_MASK                                               (0x00000080)
#define RF_CW533_DCO_2G_EN_3_BIT                                                (0x00000080)

#define RF_CW533_DCO_L12_FLAG_3_LSB                                             (6)
#define RF_CW533_DCO_L12_FLAG_3_WIDTH                                           (1)
#define RF_CW533_DCO_L12_FLAG_3_MASK                                            (0x00000040)
#define RF_CW533_DCO_L12_FLAG_3_BIT                                             (0x00000040)

#define RF_CW533_DCO_2G_EN_2_LSB                                                (5)
#define RF_CW533_DCO_2G_EN_2_WIDTH                                              (1)
#define RF_CW533_DCO_2G_EN_2_MASK                                               (0x00000020)
#define RF_CW533_DCO_2G_EN_2_BIT                                                (0x00000020)

#define RF_CW533_DCO_L12_FLAG_2_LSB                                             (4)
#define RF_CW533_DCO_L12_FLAG_2_WIDTH                                           (1)
#define RF_CW533_DCO_L12_FLAG_2_MASK                                            (0x00000010)
#define RF_CW533_DCO_L12_FLAG_2_BIT                                             (0x00000010)

#define RF_CW533_DCO_2G_EN_1_LSB                                                (3)
#define RF_CW533_DCO_2G_EN_1_WIDTH                                              (1)
#define RF_CW533_DCO_2G_EN_1_MASK                                               (0x00000008)
#define RF_CW533_DCO_2G_EN_1_BIT                                                (0x00000008)

#define RF_CW533_DCO_L12_FLAG_1_LSB                                             (2)
#define RF_CW533_DCO_L12_FLAG_1_WIDTH                                           (1)
#define RF_CW533_DCO_L12_FLAG_1_MASK                                            (0x00000004)
#define RF_CW533_DCO_L12_FLAG_1_BIT                                             (0x00000004)

#define RF_CW533_DCO_2G_EN_0_LSB                                                (1)
#define RF_CW533_DCO_2G_EN_0_WIDTH                                              (1)
#define RF_CW533_DCO_2G_EN_0_MASK                                               (0x00000002)
#define RF_CW533_DCO_2G_EN_0_BIT                                                (0x00000002)

#define RF_CW533_DCO_L12_FLAG_0_LSB                                             (0)
#define RF_CW533_DCO_L12_FLAG_0_WIDTH                                           (1)
#define RF_CW533_DCO_L12_FLAG_0_MASK                                            (0x00000001)
#define RF_CW533_DCO_L12_FLAG_0_BIT                                             (0x00000001)

#define RF_CW534_DCO_2G_EN_19_LSB                                               (19)
#define RF_CW534_DCO_2G_EN_19_WIDTH                                             (1)
#define RF_CW534_DCO_2G_EN_19_MASK                                              (0x00080000)
#define RF_CW534_DCO_2G_EN_19_BIT                                               (0x00080000)

#define RF_CW534_DCO_L12_FLAG_19_LSB                                            (18)
#define RF_CW534_DCO_L12_FLAG_19_WIDTH                                          (1)
#define RF_CW534_DCO_L12_FLAG_19_MASK                                           (0x00040000)
#define RF_CW534_DCO_L12_FLAG_19_BIT                                            (0x00040000)

#define RF_CW534_DCO_2G_EN_18_LSB                                               (17)
#define RF_CW534_DCO_2G_EN_18_WIDTH                                             (1)
#define RF_CW534_DCO_2G_EN_18_MASK                                              (0x00020000)
#define RF_CW534_DCO_2G_EN_18_BIT                                               (0x00020000)

#define RF_CW534_DCO_L12_FLAG_18_LSB                                            (16)
#define RF_CW534_DCO_L12_FLAG_18_WIDTH                                          (1)
#define RF_CW534_DCO_L12_FLAG_18_MASK                                           (0x00010000)
#define RF_CW534_DCO_L12_FLAG_18_BIT                                            (0x00010000)

#define RF_CW534_DCO_2G_EN_17_LSB                                               (15)
#define RF_CW534_DCO_2G_EN_17_WIDTH                                             (1)
#define RF_CW534_DCO_2G_EN_17_MASK                                              (0x00008000)
#define RF_CW534_DCO_2G_EN_17_BIT                                               (0x00008000)

#define RF_CW534_DCO_L12_FLAG_17_LSB                                            (14)
#define RF_CW534_DCO_L12_FLAG_17_WIDTH                                          (1)
#define RF_CW534_DCO_L12_FLAG_17_MASK                                           (0x00004000)
#define RF_CW534_DCO_L12_FLAG_17_BIT                                            (0x00004000)

#define RF_CW534_DCO_2G_EN_16_LSB                                               (13)
#define RF_CW534_DCO_2G_EN_16_WIDTH                                             (1)
#define RF_CW534_DCO_2G_EN_16_MASK                                              (0x00002000)
#define RF_CW534_DCO_2G_EN_16_BIT                                               (0x00002000)

#define RF_CW534_DCO_L12_FLAG_16_LSB                                            (12)
#define RF_CW534_DCO_L12_FLAG_16_WIDTH                                          (1)
#define RF_CW534_DCO_L12_FLAG_16_MASK                                           (0x00001000)
#define RF_CW534_DCO_L12_FLAG_16_BIT                                            (0x00001000)

#define RF_CW534_DCO_2G_EN_15_LSB                                               (11)
#define RF_CW534_DCO_2G_EN_15_WIDTH                                             (1)
#define RF_CW534_DCO_2G_EN_15_MASK                                              (0x00000800)
#define RF_CW534_DCO_2G_EN_15_BIT                                               (0x00000800)

#define RF_CW534_DCO_L12_FLAG_15_LSB                                            (10)
#define RF_CW534_DCO_L12_FLAG_15_WIDTH                                          (1)
#define RF_CW534_DCO_L12_FLAG_15_MASK                                           (0x00000400)
#define RF_CW534_DCO_L12_FLAG_15_BIT                                            (0x00000400)

#define RF_CW534_DCO_2G_EN_14_LSB                                               (9)
#define RF_CW534_DCO_2G_EN_14_WIDTH                                             (1)
#define RF_CW534_DCO_2G_EN_14_MASK                                              (0x00000200)
#define RF_CW534_DCO_2G_EN_14_BIT                                               (0x00000200)

#define RF_CW534_DCO_L12_FLAG_14_LSB                                            (8)
#define RF_CW534_DCO_L12_FLAG_14_WIDTH                                          (1)
#define RF_CW534_DCO_L12_FLAG_14_MASK                                           (0x00000100)
#define RF_CW534_DCO_L12_FLAG_14_BIT                                            (0x00000100)

#define RF_CW534_DCO_2G_EN_13_LSB                                               (7)
#define RF_CW534_DCO_2G_EN_13_WIDTH                                             (1)
#define RF_CW534_DCO_2G_EN_13_MASK                                              (0x00000080)
#define RF_CW534_DCO_2G_EN_13_BIT                                               (0x00000080)

#define RF_CW534_DCO_L12_FLAG_13_LSB                                            (6)
#define RF_CW534_DCO_L12_FLAG_13_WIDTH                                          (1)
#define RF_CW534_DCO_L12_FLAG_13_MASK                                           (0x00000040)
#define RF_CW534_DCO_L12_FLAG_13_BIT                                            (0x00000040)

#define RF_CW534_DCO_2G_EN_12_LSB                                               (5)
#define RF_CW534_DCO_2G_EN_12_WIDTH                                             (1)
#define RF_CW534_DCO_2G_EN_12_MASK                                              (0x00000020)
#define RF_CW534_DCO_2G_EN_12_BIT                                               (0x00000020)

#define RF_CW534_DCO_L12_FLAG_12_LSB                                            (4)
#define RF_CW534_DCO_L12_FLAG_12_WIDTH                                          (1)
#define RF_CW534_DCO_L12_FLAG_12_MASK                                           (0x00000010)
#define RF_CW534_DCO_L12_FLAG_12_BIT                                            (0x00000010)

#define RF_CW534_DCO_2G_EN_11_LSB                                               (3)
#define RF_CW534_DCO_2G_EN_11_WIDTH                                             (1)
#define RF_CW534_DCO_2G_EN_11_MASK                                              (0x00000008)
#define RF_CW534_DCO_2G_EN_11_BIT                                               (0x00000008)

#define RF_CW534_DCO_L12_FLAG_11_LSB                                            (2)
#define RF_CW534_DCO_L12_FLAG_11_WIDTH                                          (1)
#define RF_CW534_DCO_L12_FLAG_11_MASK                                           (0x00000004)
#define RF_CW534_DCO_L12_FLAG_11_BIT                                            (0x00000004)

#define RF_CW534_DCO_2G_EN_10_LSB                                               (1)
#define RF_CW534_DCO_2G_EN_10_WIDTH                                             (1)
#define RF_CW534_DCO_2G_EN_10_MASK                                              (0x00000002)
#define RF_CW534_DCO_2G_EN_10_BIT                                               (0x00000002)

#define RF_CW534_DCO_L12_FLAG_10_LSB                                            (0)
#define RF_CW534_DCO_L12_FLAG_10_WIDTH                                          (1)
#define RF_CW534_DCO_L12_FLAG_10_MASK                                           (0x00000001)
#define RF_CW534_DCO_L12_FLAG_10_BIT                                            (0x00000001)

#define RF_CW535_DCO_2G_EN_29_LSB                                               (19)
#define RF_CW535_DCO_2G_EN_29_WIDTH                                             (1)
#define RF_CW535_DCO_2G_EN_29_MASK                                              (0x00080000)
#define RF_CW535_DCO_2G_EN_29_BIT                                               (0x00080000)

#define RF_CW535_DCO_L12_FLAG_29_LSB                                            (18)
#define RF_CW535_DCO_L12_FLAG_29_WIDTH                                          (1)
#define RF_CW535_DCO_L12_FLAG_29_MASK                                           (0x00040000)
#define RF_CW535_DCO_L12_FLAG_29_BIT                                            (0x00040000)

#define RF_CW535_DCO_2G_EN_28_LSB                                               (17)
#define RF_CW535_DCO_2G_EN_28_WIDTH                                             (1)
#define RF_CW535_DCO_2G_EN_28_MASK                                              (0x00020000)
#define RF_CW535_DCO_2G_EN_28_BIT                                               (0x00020000)

#define RF_CW535_DCO_L12_FLAG_28_LSB                                            (16)
#define RF_CW535_DCO_L12_FLAG_28_WIDTH                                          (1)
#define RF_CW535_DCO_L12_FLAG_28_MASK                                           (0x00010000)
#define RF_CW535_DCO_L12_FLAG_28_BIT                                            (0x00010000)

#define RF_CW535_DCO_2G_EN_27_LSB                                               (15)
#define RF_CW535_DCO_2G_EN_27_WIDTH                                             (1)
#define RF_CW535_DCO_2G_EN_27_MASK                                              (0x00008000)
#define RF_CW535_DCO_2G_EN_27_BIT                                               (0x00008000)

#define RF_CW535_DCO_L12_FLAG_27_LSB                                            (14)
#define RF_CW535_DCO_L12_FLAG_27_WIDTH                                          (1)
#define RF_CW535_DCO_L12_FLAG_27_MASK                                           (0x00004000)
#define RF_CW535_DCO_L12_FLAG_27_BIT                                            (0x00004000)

#define RF_CW535_DCO_2G_EN_26_LSB                                               (13)
#define RF_CW535_DCO_2G_EN_26_WIDTH                                             (1)
#define RF_CW535_DCO_2G_EN_26_MASK                                              (0x00002000)
#define RF_CW535_DCO_2G_EN_26_BIT                                               (0x00002000)

#define RF_CW535_DCO_L12_FLAG_26_LSB                                            (12)
#define RF_CW535_DCO_L12_FLAG_26_WIDTH                                          (1)
#define RF_CW535_DCO_L12_FLAG_26_MASK                                           (0x00001000)
#define RF_CW535_DCO_L12_FLAG_26_BIT                                            (0x00001000)

#define RF_CW535_DCO_2G_EN_25_LSB                                               (11)
#define RF_CW535_DCO_2G_EN_25_WIDTH                                             (1)
#define RF_CW535_DCO_2G_EN_25_MASK                                              (0x00000800)
#define RF_CW535_DCO_2G_EN_25_BIT                                               (0x00000800)

#define RF_CW535_DCO_L12_FLAG_25_LSB                                            (10)
#define RF_CW535_DCO_L12_FLAG_25_WIDTH                                          (1)
#define RF_CW535_DCO_L12_FLAG_25_MASK                                           (0x00000400)
#define RF_CW535_DCO_L12_FLAG_25_BIT                                            (0x00000400)

#define RF_CW535_DCO_2G_EN_24_LSB                                               (9)
#define RF_CW535_DCO_2G_EN_24_WIDTH                                             (1)
#define RF_CW535_DCO_2G_EN_24_MASK                                              (0x00000200)
#define RF_CW535_DCO_2G_EN_24_BIT                                               (0x00000200)

#define RF_CW535_DCO_L12_FLAG_24_LSB                                            (8)
#define RF_CW535_DCO_L12_FLAG_24_WIDTH                                          (1)
#define RF_CW535_DCO_L12_FLAG_24_MASK                                           (0x00000100)
#define RF_CW535_DCO_L12_FLAG_24_BIT                                            (0x00000100)

#define RF_CW535_DCO_2G_EN_23_LSB                                               (7)
#define RF_CW535_DCO_2G_EN_23_WIDTH                                             (1)
#define RF_CW535_DCO_2G_EN_23_MASK                                              (0x00000080)
#define RF_CW535_DCO_2G_EN_23_BIT                                               (0x00000080)

#define RF_CW535_DCO_L12_FLAG_23_LSB                                            (6)
#define RF_CW535_DCO_L12_FLAG_23_WIDTH                                          (1)
#define RF_CW535_DCO_L12_FLAG_23_MASK                                           (0x00000040)
#define RF_CW535_DCO_L12_FLAG_23_BIT                                            (0x00000040)

#define RF_CW535_DCO_2G_EN_22_LSB                                               (5)
#define RF_CW535_DCO_2G_EN_22_WIDTH                                             (1)
#define RF_CW535_DCO_2G_EN_22_MASK                                              (0x00000020)
#define RF_CW535_DCO_2G_EN_22_BIT                                               (0x00000020)

#define RF_CW535_DCO_L12_FLAG_22_LSB                                            (4)
#define RF_CW535_DCO_L12_FLAG_22_WIDTH                                          (1)
#define RF_CW535_DCO_L12_FLAG_22_MASK                                           (0x00000010)
#define RF_CW535_DCO_L12_FLAG_22_BIT                                            (0x00000010)

#define RF_CW535_DCO_2G_EN_21_LSB                                               (3)
#define RF_CW535_DCO_2G_EN_21_WIDTH                                             (1)
#define RF_CW535_DCO_2G_EN_21_MASK                                              (0x00000008)
#define RF_CW535_DCO_2G_EN_21_BIT                                               (0x00000008)

#define RF_CW535_DCO_L12_FLAG_21_LSB                                            (2)
#define RF_CW535_DCO_L12_FLAG_21_WIDTH                                          (1)
#define RF_CW535_DCO_L12_FLAG_21_MASK                                           (0x00000004)
#define RF_CW535_DCO_L12_FLAG_21_BIT                                            (0x00000004)

#define RF_CW535_DCO_2G_EN_20_LSB                                               (1)
#define RF_CW535_DCO_2G_EN_20_WIDTH                                             (1)
#define RF_CW535_DCO_2G_EN_20_MASK                                              (0x00000002)
#define RF_CW535_DCO_2G_EN_20_BIT                                               (0x00000002)

#define RF_CW535_DCO_L12_FLAG_20_LSB                                            (0)
#define RF_CW535_DCO_L12_FLAG_20_WIDTH                                          (1)
#define RF_CW535_DCO_L12_FLAG_20_MASK                                           (0x00000001)
#define RF_CW535_DCO_L12_FLAG_20_BIT                                            (0x00000001)

#define RF_CW536_DCO_ACAL_TARGET_4_LSB                                          (16)
#define RF_CW536_DCO_ACAL_TARGET_4_WIDTH                                        (4)
#define RF_CW536_DCO_ACAL_TARGET_4_MASK                                         (0x000F0000)

#define RF_CW536_DCO_ACAL_TARGET_3_LSB                                          (12)
#define RF_CW536_DCO_ACAL_TARGET_3_WIDTH                                        (4)
#define RF_CW536_DCO_ACAL_TARGET_3_MASK                                         (0x0000F000)

#define RF_CW536_DCO_ACAL_TARGET_2_LSB                                          (8)
#define RF_CW536_DCO_ACAL_TARGET_2_WIDTH                                        (4)
#define RF_CW536_DCO_ACAL_TARGET_2_MASK                                         (0x00000F00)

#define RF_CW536_DCO_ACAL_TARGET_1_LSB                                          (4)
#define RF_CW536_DCO_ACAL_TARGET_1_WIDTH                                        (4)
#define RF_CW536_DCO_ACAL_TARGET_1_MASK                                         (0x000000F0)

#define RF_CW536_DCO_ACAL_TARGET_0_LSB                                          (0)
#define RF_CW536_DCO_ACAL_TARGET_0_WIDTH                                        (4)
#define RF_CW536_DCO_ACAL_TARGET_0_MASK                                         (0x0000000F)

#define RF_CW537_DCO_ACAL_TARGET_9_LSB                                          (16)
#define RF_CW537_DCO_ACAL_TARGET_9_WIDTH                                        (4)
#define RF_CW537_DCO_ACAL_TARGET_9_MASK                                         (0x000F0000)

#define RF_CW537_DCO_ACAL_TARGET_8_LSB                                          (12)
#define RF_CW537_DCO_ACAL_TARGET_8_WIDTH                                        (4)
#define RF_CW537_DCO_ACAL_TARGET_8_MASK                                         (0x0000F000)

#define RF_CW537_DCO_ACAL_TARGET_7_LSB                                          (8)
#define RF_CW537_DCO_ACAL_TARGET_7_WIDTH                                        (4)
#define RF_CW537_DCO_ACAL_TARGET_7_MASK                                         (0x00000F00)

#define RF_CW537_DCO_ACAL_TARGET_6_LSB                                          (4)
#define RF_CW537_DCO_ACAL_TARGET_6_WIDTH                                        (4)
#define RF_CW537_DCO_ACAL_TARGET_6_MASK                                         (0x000000F0)

#define RF_CW537_DCO_ACAL_TARGET_5_LSB                                          (0)
#define RF_CW537_DCO_ACAL_TARGET_5_WIDTH                                        (4)
#define RF_CW537_DCO_ACAL_TARGET_5_MASK                                         (0x0000000F)

#define RF_CW538_DCO_ACAL_TARGET_14_LSB                                         (16)
#define RF_CW538_DCO_ACAL_TARGET_14_WIDTH                                       (4)
#define RF_CW538_DCO_ACAL_TARGET_14_MASK                                        (0x000F0000)

#define RF_CW538_DCO_ACAL_TARGET_13_LSB                                         (12)
#define RF_CW538_DCO_ACAL_TARGET_13_WIDTH                                       (4)
#define RF_CW538_DCO_ACAL_TARGET_13_MASK                                        (0x0000F000)

#define RF_CW538_DCO_ACAL_TARGET_12_LSB                                         (8)
#define RF_CW538_DCO_ACAL_TARGET_12_WIDTH                                       (4)
#define RF_CW538_DCO_ACAL_TARGET_12_MASK                                        (0x00000F00)

#define RF_CW538_DCO_ACAL_TARGET_11_LSB                                         (4)
#define RF_CW538_DCO_ACAL_TARGET_11_WIDTH                                       (4)
#define RF_CW538_DCO_ACAL_TARGET_11_MASK                                        (0x000000F0)

#define RF_CW538_DCO_ACAL_TARGET_10_LSB                                         (0)
#define RF_CW538_DCO_ACAL_TARGET_10_WIDTH                                       (4)
#define RF_CW538_DCO_ACAL_TARGET_10_MASK                                        (0x0000000F)

#define RF_CW539_DCO_ACAL_TARGET_19_LSB                                         (16)
#define RF_CW539_DCO_ACAL_TARGET_19_WIDTH                                       (4)
#define RF_CW539_DCO_ACAL_TARGET_19_MASK                                        (0x000F0000)

#define RF_CW539_DCO_ACAL_TARGET_18_LSB                                         (12)
#define RF_CW539_DCO_ACAL_TARGET_18_WIDTH                                       (4)
#define RF_CW539_DCO_ACAL_TARGET_18_MASK                                        (0x0000F000)

#define RF_CW539_DCO_ACAL_TARGET_17_LSB                                         (8)
#define RF_CW539_DCO_ACAL_TARGET_17_WIDTH                                       (4)
#define RF_CW539_DCO_ACAL_TARGET_17_MASK                                        (0x00000F00)

#define RF_CW539_DCO_ACAL_TARGET_16_LSB                                         (4)
#define RF_CW539_DCO_ACAL_TARGET_16_WIDTH                                       (4)
#define RF_CW539_DCO_ACAL_TARGET_16_MASK                                        (0x000000F0)

#define RF_CW539_DCO_ACAL_TARGET_15_LSB                                         (0)
#define RF_CW539_DCO_ACAL_TARGET_15_WIDTH                                       (4)
#define RF_CW539_DCO_ACAL_TARGET_15_MASK                                        (0x0000000F)

#define RF_CW540_DCO_ACAL_TARGET_24_LSB                                         (16)
#define RF_CW540_DCO_ACAL_TARGET_24_WIDTH                                       (4)
#define RF_CW540_DCO_ACAL_TARGET_24_MASK                                        (0x000F0000)

#define RF_CW540_DCO_ACAL_TARGET_23_LSB                                         (12)
#define RF_CW540_DCO_ACAL_TARGET_23_WIDTH                                       (4)
#define RF_CW540_DCO_ACAL_TARGET_23_MASK                                        (0x0000F000)

#define RF_CW540_DCO_ACAL_TARGET_22_LSB                                         (8)
#define RF_CW540_DCO_ACAL_TARGET_22_WIDTH                                       (4)
#define RF_CW540_DCO_ACAL_TARGET_22_MASK                                        (0x00000F00)

#define RF_CW540_DCO_ACAL_TARGET_21_LSB                                         (4)
#define RF_CW540_DCO_ACAL_TARGET_21_WIDTH                                       (4)
#define RF_CW540_DCO_ACAL_TARGET_21_MASK                                        (0x000000F0)

#define RF_CW540_DCO_ACAL_TARGET_20_LSB                                         (0)
#define RF_CW540_DCO_ACAL_TARGET_20_WIDTH                                       (4)
#define RF_CW540_DCO_ACAL_TARGET_20_MASK                                        (0x0000000F)

#define RF_CW541_DCO_ACAL_TARGET_29_LSB                                         (16)
#define RF_CW541_DCO_ACAL_TARGET_29_WIDTH                                       (4)
#define RF_CW541_DCO_ACAL_TARGET_29_MASK                                        (0x000F0000)

#define RF_CW541_DCO_ACAL_TARGET_28_LSB                                         (12)
#define RF_CW541_DCO_ACAL_TARGET_28_WIDTH                                       (4)
#define RF_CW541_DCO_ACAL_TARGET_28_MASK                                        (0x0000F000)

#define RF_CW541_DCO_ACAL_TARGET_27_LSB                                         (8)
#define RF_CW541_DCO_ACAL_TARGET_27_WIDTH                                       (4)
#define RF_CW541_DCO_ACAL_TARGET_27_MASK                                        (0x00000F00)

#define RF_CW541_DCO_ACAL_TARGET_26_LSB                                         (4)
#define RF_CW541_DCO_ACAL_TARGET_26_WIDTH                                       (4)
#define RF_CW541_DCO_ACAL_TARGET_26_MASK                                        (0x000000F0)

#define RF_CW541_DCO_ACAL_TARGET_25_LSB                                         (0)
#define RF_CW541_DCO_ACAL_TARGET_25_WIDTH                                       (4)
#define RF_CW541_DCO_ACAL_TARGET_25_MASK                                        (0x0000000F)

#define RF_CW542_DCO_ACAL_TRIG_MAN_LSB                                          (19)
#define RF_CW542_DCO_ACAL_TRIG_MAN_WIDTH                                        (1)
#define RF_CW542_DCO_ACAL_TRIG_MAN_MASK                                         (0x00080000)
#define RF_CW542_DCO_ACAL_TRIG_MAN_BIT                                          (0x00080000)

#define RF_CW542_DCO_ACAL_EN_LSB                                                (18)
#define RF_CW542_DCO_ACAL_EN_WIDTH                                              (1)
#define RF_CW542_DCO_ACAL_EN_MASK                                               (0x00040000)
#define RF_CW542_DCO_ACAL_EN_BIT                                                (0x00040000)

#define RF_CW542_DCO_ACAL_DCOIS_INIT_LSB                                        (14)
#define RF_CW542_DCO_ACAL_DCOIS_INIT_WIDTH                                      (4)
#define RF_CW542_DCO_ACAL_DCOIS_INIT_MASK                                       (0x0003C000)

#define RF_CW542_DCO_IS_MAN_EN_LSB                                              (13)
#define RF_CW542_DCO_IS_MAN_EN_WIDTH                                            (1)
#define RF_CW542_DCO_IS_MAN_EN_MASK                                             (0x00002000)
#define RF_CW542_DCO_IS_MAN_EN_BIT                                              (0x00002000)

#define RF_CW542_DCO_ACAL_WAITTIME_LSB                                          (11)
#define RF_CW542_DCO_ACAL_WAITTIME_WIDTH                                        (2)
#define RF_CW542_DCO_ACAL_WAITTIME_MASK                                         (0x00001800)

#define RF_CW542_DCO_PD_EN_LSB                                                  (10)
#define RF_CW542_DCO_PD_EN_WIDTH                                                (1)
#define RF_CW542_DCO_PD_EN_MASK                                                 (0x00000400)
#define RF_CW542_DCO_PD_EN_BIT                                                  (0x00000400)

#define RF_CW542_DCO_COMP_EN_LSB                                                (9)
#define RF_CW542_DCO_COMP_EN_WIDTH                                              (1)
#define RF_CW542_DCO_COMP_EN_MASK                                               (0x00000200)
#define RF_CW542_DCO_COMP_EN_BIT                                                (0x00000200)

#define RF_CW542_DCO_TEST_PD_EN_LSB                                             (8)
#define RF_CW542_DCO_TEST_PD_EN_WIDTH                                           (1)
#define RF_CW542_DCO_TEST_PD_EN_MASK                                            (0x00000100)
#define RF_CW542_DCO_TEST_PD_EN_BIT                                             (0x00000100)

#define RF_CW542_DCO_SCA_OUT_LOCK_LSB                                           (0)
#define RF_CW542_DCO_SCA_OUT_LOCK_WIDTH                                         (1)
#define RF_CW542_DCO_SCA_OUT_LOCK_MASK                                          (0x00000001)
#define RF_CW542_DCO_SCA_OUT_LOCK_BIT                                           (0x00000001)

#define RF_CW543_DCOH_TARGET_BIAS_MAN_EN_LSB                                    (9)
#define RF_CW543_DCOH_TARGET_BIAS_MAN_EN_WIDTH                                  (1)
#define RF_CW543_DCOH_TARGET_BIAS_MAN_EN_MASK                                   (0x00000200)
#define RF_CW543_DCOH_TARGET_BIAS_MAN_EN_BIT                                    (0x00000200)

#define RF_CW543_DCOH_TARGET_BIAS_MAN_LSB                                       (5)
#define RF_CW543_DCOH_TARGET_BIAS_MAN_WIDTH                                     (4)
#define RF_CW543_DCOH_TARGET_BIAS_MAN_MASK                                      (0x000001E0)

#define RF_CW543_DCOL_TARGET_BIAS_MAN_EN_LSB                                    (4)
#define RF_CW543_DCOL_TARGET_BIAS_MAN_EN_WIDTH                                  (1)
#define RF_CW543_DCOL_TARGET_BIAS_MAN_EN_MASK                                   (0x00000010)
#define RF_CW543_DCOL_TARGET_BIAS_MAN_EN_BIT                                    (0x00000010)

#define RF_CW543_DCOL_TARGET_BIAS_MAN_LSB                                       (0)
#define RF_CW543_DCOL_TARGET_BIAS_MAN_WIDTH                                     (4)
#define RF_CW543_DCOL_TARGET_BIAS_MAN_MASK                                      (0x0000000F)

#define RF_CW544_DCO_TAILSCA_3WIRE_LSB                                          (16)
#define RF_CW544_DCO_TAILSCA_3WIRE_WIDTH                                        (4)
#define RF_CW544_DCO_TAILSCA_3WIRE_MASK                                         (0x000F0000)

#define RF_CW544_DCO_TAILSCA_MAN_EN_LSB                                         (15)
#define RF_CW544_DCO_TAILSCA_MAN_EN_WIDTH                                       (1)
#define RF_CW544_DCO_TAILSCA_MAN_EN_MASK                                        (0x00008000)
#define RF_CW544_DCO_TAILSCA_MAN_EN_BIT                                         (0x00008000)

#define RF_CW544_DCOH_TAILSCA_OFFSET_LSB                                        (11)
#define RF_CW544_DCOH_TAILSCA_OFFSET_WIDTH                                      (4)
#define RF_CW544_DCOH_TAILSCA_OFFSET_MASK                                       (0x00007800)

#define RF_CW544_DCOL_TAILSCA_OFFSET_LSB                                        (7)
#define RF_CW544_DCOL_TAILSCA_OFFSET_WIDTH                                      (4)
#define RF_CW544_DCOL_TAILSCA_OFFSET_MASK                                       (0x00000780)

#define RF_CW544_DCO_TAILSCA_UPDATE_EN_LSB                                      (6)
#define RF_CW544_DCO_TAILSCA_UPDATE_EN_WIDTH                                    (1)
#define RF_CW544_DCO_TAILSCA_UPDATE_EN_MASK                                     (0x00000040)
#define RF_CW544_DCO_TAILSCA_UPDATE_EN_BIT                                      (0x00000040)

#define RF_CW544_DCO2G_TAILSCA_OFFSET_LSB                                       (2)
#define RF_CW544_DCO2G_TAILSCA_OFFSET_WIDTH                                     (4)
#define RF_CW544_DCO2G_TAILSCA_OFFSET_MASK                                      (0x0000003C)

#define RF_CW545_RG_DCOH_DELAY_INC_LSB                                          (17)
#define RF_CW545_RG_DCOH_DELAY_INC_WIDTH                                        (3)
#define RF_CW545_RG_DCOH_DELAY_INC_MASK                                         (0x000E0000)

#define RF_CW545_RG_DCOL_DELAY_INC_LSB                                          (14)
#define RF_CW545_RG_DCOL_DELAY_INC_WIDTH                                        (3)
#define RF_CW545_RG_DCOL_DELAY_INC_MASK                                         (0x0001C000)

#define RF_CW545_RG_DCO2G_DELAY_INC_LSB                                         (11)
#define RF_CW545_RG_DCO2G_DELAY_INC_WIDTH                                       (3)
#define RF_CW545_RG_DCO2G_DELAY_INC_MASK                                        (0x00003800)

#define RF_CW545_RG_DCODC_TEST_LSB                                              (0)
#define RF_CW545_RG_DCODC_TEST_WIDTH                                            (10)
#define RF_CW545_RG_DCODC_TEST_MASK                                             (0x000003FF)

#define RF_CW546_DCO_SCA_SET_F_LSB                                              (13)
#define RF_CW546_DCO_SCA_SET_F_WIDTH                                            (6)
#define RF_CW546_DCO_SCA_SET_F_MASK                                             (0x0007E000)

#define RF_CW546_DCO_SCA_SET_C_LSB                                              (1)
#define RF_CW546_DCO_SCA_SET_C_WIDTH                                            (12)
#define RF_CW546_DCO_SCA_SET_C_MASK                                             (0x00001FFE)

#define RF_CW546_DCO_SCA_SET_LSB                                                (0)
#define RF_CW546_DCO_SCA_SET_WIDTH                                              (1)
#define RF_CW546_DCO_SCA_SET_MASK                                               (0x00000001)
#define RF_CW546_DCO_SCA_SET_BIT                                                (0x00000001)

#define RF_CW548_MMD_SDM_OUT_LSB                                                (19)
#define RF_CW548_MMD_SDM_OUT_WIDTH                                              (1)
#define RF_CW548_MMD_SDM_OUT_MASK                                               (0x00080000)
#define RF_CW548_MMD_SDM_OUT_BIT                                                (0x00080000)

#define RF_CW548_MMD_SDM_IFM_LSB                                                (18)
#define RF_CW548_MMD_SDM_IFM_WIDTH                                              (1)
#define RF_CW548_MMD_SDM_IFM_MASK                                               (0x00040000)
#define RF_CW548_MMD_SDM_IFM_BIT                                                (0x00040000)

#define RF_CW548_MMD_SDM_ORD_LSB                                                (16)
#define RF_CW548_MMD_SDM_ORD_WIDTH                                              (2)
#define RF_CW548_MMD_SDM_ORD_MASK                                               (0x00030000)

#define RF_CW548_RG_MMD_52M_DUTY_AUTO_LSB                                       (15)
#define RF_CW548_RG_MMD_52M_DUTY_AUTO_WIDTH                                     (1)
#define RF_CW548_RG_MMD_52M_DUTY_AUTO_MASK                                      (0x00008000)
#define RF_CW548_RG_MMD_52M_DUTY_AUTO_BIT                                       (0x00008000)

#define RF_CW548_MMD_DIV_VS_MAN_EN_LSB                                          (13)
#define RF_CW548_MMD_DIV_VS_MAN_EN_WIDTH                                        (1)
#define RF_CW548_MMD_DIV_VS_MAN_EN_MASK                                         (0x00002000)
#define RF_CW548_MMD_DIV_VS_MAN_EN_BIT                                          (0x00002000)

#define RF_CW548_RG_MMD_DC_TEST_LSB                                             (11)
#define RF_CW548_RG_MMD_DC_TEST_WIDTH                                           (2)
#define RF_CW548_RG_MMD_DC_TEST_MASK                                            (0x00001800)

#define RF_CW548_RG_MMD_D_VS_LSB                                                (9)
#define RF_CW548_RG_MMD_D_VS_WIDTH                                              (2)
#define RF_CW548_RG_MMD_D_VS_MASK                                               (0x00000600)

#define RF_CW548_RG_MMD_RETIME_VS_LSB                                           (7)
#define RF_CW548_RG_MMD_RETIME_VS_WIDTH                                         (2)
#define RF_CW548_RG_MMD_RETIME_VS_MASK                                          (0x00000180)

#define RF_CW548_MMD_DIV_VS_3WIRE_LSB                                           (5)
#define RF_CW548_MMD_DIV_VS_3WIRE_WIDTH                                         (2)
#define RF_CW548_MMD_DIV_VS_3WIRE_MASK                                          (0x00000060)

#define RF_CW548_RG_LDO_MMD_VS_LSB                                              (2)
#define RF_CW548_RG_LDO_MMD_VS_WIDTH                                            (3)
#define RF_CW548_RG_LDO_MMD_VS_MASK                                             (0x0000001C)

#define RF_CW548_MMD_MAN_LSB                                                    (1)
#define RF_CW548_MMD_MAN_WIDTH                                                  (1)
#define RF_CW548_MMD_MAN_MASK                                                   (0x00000002)
#define RF_CW548_MMD_MAN_BIT                                                    (0x00000002)

#define RF_CW548_LDO_MMD_3WIRE_EN_LSB                                           (0)
#define RF_CW548_LDO_MMD_3WIRE_EN_WIDTH                                         (1)
#define RF_CW548_LDO_MMD_3WIRE_EN_MASK                                          (0x00000001)
#define RF_CW548_LDO_MMD_3WIRE_EN_BIT                                           (0x00000001)

#define RF_CW549_MMD_SDM_NINT_LSB                                               (12)
#define RF_CW549_MMD_SDM_NINT_WIDTH                                             (8)
#define RF_CW549_MMD_SDM_NINT_MASK                                              (0x000FF000)

#define RF_CW549_MMD_SDM_NFRAC_LSB                                              (0)
#define RF_CW549_MMD_SDM_NFRAC_WIDTH                                            (12)
#define RF_CW549_MMD_SDM_NFRAC_MASK                                             (0x00000FFF)

#define RF_CW550_MMD_SDM_NFRAC_2_LSB                                            (9)
#define RF_CW550_MMD_SDM_NFRAC_2_WIDTH                                          (11)
#define RF_CW550_MMD_SDM_NFRAC_2_MASK                                           (0x000FFE00)

#define RF_CW550_MMD_SDM_DI_EN_LSB                                              (0)
#define RF_CW550_MMD_SDM_DI_EN_WIDTH                                            (1)
#define RF_CW550_MMD_SDM_DI_EN_MASK                                             (0x00000001)
#define RF_CW550_MMD_SDM_DI_EN_BIT                                              (0x00000001)

#define RF_CW551_MMD_SDM_NINT1_LSB                                              (12)
#define RF_CW551_MMD_SDM_NINT1_WIDTH                                            (8)
#define RF_CW551_MMD_SDM_NINT1_MASK                                             (0x000FF000)

#define RF_CW551_MMD_SDM_NFRAC1_LSB                                             (0)
#define RF_CW551_MMD_SDM_NFRAC1_WIDTH                                           (12)
#define RF_CW551_MMD_SDM_NFRAC1_MASK                                            (0x00000FFF)

#define RF_CW552_MMD_SDM_NFRAC1_2_LSB                                           (9)
#define RF_CW552_MMD_SDM_NFRAC1_2_WIDTH                                         (11)
#define RF_CW552_MMD_SDM_NFRAC1_2_MASK                                          (0x000FFE00)

#define RF_CW552_DCO_SCAK_NOFFSET_LSB                                           (2)
#define RF_CW552_DCO_SCAK_NOFFSET_WIDTH                                         (4)
#define RF_CW552_DCO_SCAK_NOFFSET_MASK                                          (0x0000003C)

#define RF_CW552_MMD_SDM_DI_LS_LSB                                              (0)
#define RF_CW552_MMD_SDM_DI_LS_WIDTH                                            (2)
#define RF_CW552_MMD_SDM_DI_LS_MASK                                             (0x00000003)

#define RF_CW556_DA_OFFSET_26M_LSB                                              (12)
#define RF_CW556_DA_OFFSET_26M_WIDTH                                            (8)
#define RF_CW556_DA_OFFSET_26M_MASK                                             (0x000FF000)

#define RF_CW556_DA_OFFSET_52M_LSB                                              (4)
#define RF_CW556_DA_OFFSET_52M_WIDTH                                            (8)
#define RF_CW556_DA_OFFSET_52M_MASK                                             (0x00000FF0)

#define RF_CW557_DEM_CHUNK_GMSK_OW_LSB                                          (19)
#define RF_CW557_DEM_CHUNK_GMSK_OW_WIDTH                                        (1)
#define RF_CW557_DEM_CHUNK_GMSK_OW_MASK                                         (0x00080000)
#define RF_CW557_DEM_CHUNK_GMSK_OW_BIT                                          (0x00080000)

#define RF_CW557_DEM_CHUNK_GMSK_3WIRE_LSB                                       (12)
#define RF_CW557_DEM_CHUNK_GMSK_3WIRE_WIDTH                                     (7)
#define RF_CW557_DEM_CHUNK_GMSK_3WIRE_MASK                                      (0x0007F000)

#define RF_CW558_KDCO_MCAL1_26M_LSB                                             (18)
#define RF_CW558_KDCO_MCAL1_26M_WIDTH                                           (2)
#define RF_CW558_KDCO_MCAL1_26M_MASK                                            (0x000C0000)

#define RF_CW558_KDCO_MCAL2_26M_LSB                                             (16)
#define RF_CW558_KDCO_MCAL2_26M_WIDTH                                           (2)
#define RF_CW558_KDCO_MCAL2_26M_MASK                                            (0x00030000)

#define RF_CW558_KDCO_FLIPSIGN_LSB                                              (15)
#define RF_CW558_KDCO_FLIPSIGN_WIDTH                                            (1)
#define RF_CW558_KDCO_FLIPSIGN_MASK                                             (0x00008000)
#define RF_CW558_KDCO_FLIPSIGN_BIT                                              (0x00008000)

#define RF_CW558_KDCO_INV_3WIRE_LSB                                             (1)
#define RF_CW558_KDCO_INV_3WIRE_WIDTH                                           (14)
#define RF_CW558_KDCO_INV_3WIRE_MASK                                            (0x00007FFE)

#define RF_CW558_KDCO_INV_OW_LSB                                                (0)
#define RF_CW558_KDCO_INV_OW_WIDTH                                              (1)
#define RF_CW558_KDCO_INV_OW_MASK                                               (0x00000001)
#define RF_CW558_KDCO_INV_OW_BIT                                                (0x00000001)

#define RF_CW559_KDCO_MCAL1_52M_LSB                                             (18)
#define RF_CW559_KDCO_MCAL1_52M_WIDTH                                           (2)
#define RF_CW559_KDCO_MCAL1_52M_MASK                                            (0x000C0000)

#define RF_CW559_KDCO_MCAL2_52M_LSB                                             (16)
#define RF_CW559_KDCO_MCAL2_52M_WIDTH                                           (2)
#define RF_CW559_KDCO_MCAL2_52M_MASK                                            (0x00030000)

#define RF_CW559_KDCO_KEEP_LSB                                                  (11)
#define RF_CW559_KDCO_KEEP_WIDTH                                                (1)
#define RF_CW559_KDCO_KEEP_MASK                                                 (0x00000800)
#define RF_CW559_KDCO_KEEP_BIT                                                  (0x00000800)

#define RF_CW559_KDCO_NCAL_LSB                                                  (9)
#define RF_CW559_KDCO_NCAL_WIDTH                                                (2)
#define RF_CW559_KDCO_NCAL_MASK                                                 (0x00000600)

#define RF_CW559_KDCO_SCALE_LSB                                                 (1)
#define RF_CW559_KDCO_SCALE_WIDTH                                               (6)
#define RF_CW559_KDCO_SCALE_MASK                                                (0x0000007E)

#define RF_CW561_STX_TCL_DAC_FS_LSB                                             (18)
#define RF_CW561_STX_TCL_DAC_FS_WIDTH                                           (2)
#define RF_CW561_STX_TCL_DAC_FS_MASK                                            (0x000C0000)

#define RF_CW561_STX_TCL_GAIN_LSB                                               (14)
#define RF_CW561_STX_TCL_GAIN_WIDTH                                             (4)
#define RF_CW561_STX_TCL_GAIN_MASK                                              (0x0003C000)

#define RF_CW561_TCL_DAC_SEL_LSB                                                (13)
#define RF_CW561_TCL_DAC_SEL_WIDTH                                              (1)
#define RF_CW561_TCL_DAC_SEL_MASK                                               (0x00002000)
#define RF_CW561_TCL_DAC_SEL_BIT                                                (0x00002000)

#define RF_CW561_TCL_DAC_M_LSB                                                  (5)
#define RF_CW561_TCL_DAC_M_WIDTH                                                (8)
#define RF_CW561_TCL_DAC_M_MASK                                                 (0x00001FE0)

#define RF_CW561_STX_TCL_SDM_LSB                                                (4)
#define RF_CW561_STX_TCL_SDM_WIDTH                                              (1)
#define RF_CW561_STX_TCL_SDM_MASK                                               (0x00000010)
#define RF_CW561_STX_TCL_SDM_BIT                                                (0x00000010)

#define RF_CW561_TCL_INT_OW_EN_LSB                                              (3)
#define RF_CW561_TCL_INT_OW_EN_WIDTH                                            (1)
#define RF_CW561_TCL_INT_OW_EN_MASK                                             (0x00000008)
#define RF_CW561_TCL_INT_OW_EN_BIT                                              (0x00000008)

#define RF_CW561_STX_TCL_SX_LSB                                                 (2)
#define RF_CW561_STX_TCL_SX_WIDTH                                               (1)
#define RF_CW561_STX_TCL_SX_MASK                                                (0x00000004)
#define RF_CW561_STX_TCL_SX_BIT                                                 (0x00000004)

#define RF_CW561_STX_TCL_LSB                                                    (1)
#define RF_CW561_STX_TCL_WIDTH                                                  (1)
#define RF_CW561_STX_TCL_MASK                                                   (0x00000002)
#define RF_CW561_STX_TCL_BIT                                                    (0x00000002)

#define RF_CW561_TCL_OW_EN_LSB                                                  (0)
#define RF_CW561_TCL_OW_EN_WIDTH                                                (1)
#define RF_CW561_TCL_OW_EN_MASK                                                 (0x00000001)
#define RF_CW561_TCL_OW_EN_BIT                                                  (0x00000001)

#define RF_CW562_CNT_TCL_EN_LSB                                                 (15)
#define RF_CW562_CNT_TCL_EN_WIDTH                                               (5)
#define RF_CW562_CNT_TCL_EN_MASK                                                (0x000F8000)

#define RF_CW562_TCL_GAIN_S_LSB                                                 (10)
#define RF_CW562_TCL_GAIN_S_WIDTH                                               (1)
#define RF_CW562_TCL_GAIN_S_MASK                                                (0x00000400)
#define RF_CW562_TCL_GAIN_S_BIT                                                 (0x00000400)

#define RF_CW562_TCL_INI_LSB                                                    (2)
#define RF_CW562_TCL_INI_WIDTH                                                  (8)
#define RF_CW562_TCL_INI_MASK                                                   (0x000003FC)

#define RF_CW562_TCL_INI_MAN_LSB                                                (1)
#define RF_CW562_TCL_INI_MAN_WIDTH                                              (1)
#define RF_CW562_TCL_INI_MAN_MASK                                               (0x00000002)
#define RF_CW562_TCL_INI_MAN_BIT                                                (0x00000002)

#define RF_CW562_TCL_INT_OW_OFF_LSB                                             (0)
#define RF_CW562_TCL_INT_OW_OFF_WIDTH                                           (1)
#define RF_CW562_TCL_INT_OW_OFF_MASK                                            (0x00000001)
#define RF_CW562_TCL_INT_OW_OFF_BIT                                             (0x00000001)

#define RF_CW563_CNT_TCL_PC_EN_LSB                                              (15)
#define RF_CW563_CNT_TCL_PC_EN_WIDTH                                            (5)
#define RF_CW563_CNT_TCL_PC_EN_MASK                                             (0x000F8000)

#define RF_CW563_STX_TCL_REF_SEL_LSB                                            (13)
#define RF_CW563_STX_TCL_REF_SEL_WIDTH                                          (1)
#define RF_CW563_STX_TCL_REF_SEL_MASK                                           (0x00002000)
#define RF_CW563_STX_TCL_REF_SEL_BIT                                            (0x00002000)

#define RF_CW563_STX_TCL_REF_M_LSB                                              (5)
#define RF_CW563_STX_TCL_REF_M_WIDTH                                            (8)
#define RF_CW563_STX_TCL_REF_M_MASK                                             (0x00001FE0)

#define RF_CW563_STX_TCL_VTH_LSB                                                (0)
#define RF_CW563_STX_TCL_VTH_WIDTH                                              (5)
#define RF_CW563_STX_TCL_VTH_MASK                                               (0x0000001F)

#define RF_CW564_STX_ACAL_LT_BIAS_LSB                                           (15)
#define RF_CW564_STX_ACAL_LT_BIAS_WIDTH                                         (3)
#define RF_CW564_STX_ACAL_LT_BIAS_MASK                                          (0x00038000)

#define RF_CW564_DCOH_TCL_CONV_OFFSET_LSB                                       (7)
#define RF_CW564_DCOH_TCL_CONV_OFFSET_WIDTH                                     (8)
#define RF_CW564_DCOH_TCL_CONV_OFFSET_MASK                                      (0x00007F80)

#define RF_CW564_DCOH_TCL_TRANGE_LSB                                            (0)
#define RF_CW564_DCOH_TCL_TRANGE_WIDTH                                          (7)
#define RF_CW564_DCOH_TCL_TRANGE_MASK                                           (0x0000007F)

#define RF_CW565_STX_ACAL_HT_BIAS_LSB                                           (18)
#define RF_CW565_STX_ACAL_HT_BIAS_WIDTH                                         (2)
#define RF_CW565_STX_ACAL_HT_BIAS_MASK                                          (0x000C0000)

#define RF_CW565_STX_ACAL_NT_BIAS_LSB                                           (15)
#define RF_CW565_STX_ACAL_NT_BIAS_WIDTH                                         (3)
#define RF_CW565_STX_ACAL_NT_BIAS_MASK                                          (0x00038000)

#define RF_CW565_DCOL_TCL_CONV_OFFSET_LSB                                       (7)
#define RF_CW565_DCOL_TCL_CONV_OFFSET_WIDTH                                     (8)
#define RF_CW565_DCOL_TCL_CONV_OFFSET_MASK                                      (0x00007F80)

#define RF_CW565_DCOL_TCL_TRANGE_LSB                                            (0)
#define RF_CW565_DCOL_TCL_TRANGE_WIDTH                                          (7)
#define RF_CW565_DCOL_TCL_TRANGE_MASK                                           (0x0000007F)

#define RF_CW566_TCL_HW_OFFSET_A_LSB                                            (14)
#define RF_CW566_TCL_HW_OFFSET_A_WIDTH                                          (6)
#define RF_CW566_TCL_HW_OFFSET_A_MASK                                           (0x000FC000)

#define RF_CW566_TCL_HW_OFFSET_B_LSB                                            (0)
#define RF_CW566_TCL_HW_OFFSET_B_WIDTH                                          (9)
#define RF_CW566_TCL_HW_OFFSET_B_MASK                                           (0x000001FF)

#define RF_CW567_TCL_HW_OFFSET_C_LSB                                            (14)
#define RF_CW567_TCL_HW_OFFSET_C_WIDTH                                          (6)
#define RF_CW567_TCL_HW_OFFSET_C_MASK                                           (0x000FC000)

#define RF_CW567_TCL_HW_OFFSET_D_LSB                                            (0)
#define RF_CW567_TCL_HW_OFFSET_D_WIDTH                                          (9)
#define RF_CW567_TCL_HW_OFFSET_D_MASK                                           (0x000001FF)

#define RF_CW568_DCC_DELTA_NC_LSB                                               (9)
#define RF_CW568_DCC_DELTA_NC_WIDTH                                             (11)
#define RF_CW568_DCC_DELTA_NC_MASK                                              (0x000FFE00)

#define RF_CW568_DCC_EST_EN_LSB                                                 (0)
#define RF_CW568_DCC_EST_EN_WIDTH                                               (1)
#define RF_CW568_DCC_EST_EN_MASK                                                (0x00000001)
#define RF_CW568_DCC_EST_EN_BIT                                                 (0x00000001)

#define RF_CW569_TDC_RATIO_RO_LSB                                               (9)
#define RF_CW569_TDC_RATIO_RO_WIDTH                                             (11)
#define RF_CW569_TDC_RATIO_RO_MASK                                              (0x000FFE00)

#define RF_CW570_DCC_DELTA_TDC_OUT_RO_LSB                                       (6)
#define RF_CW570_DCC_DELTA_TDC_OUT_RO_WIDTH                                     (14)
#define RF_CW570_DCC_DELTA_TDC_OUT_RO_MASK                                      (0x000FFFC0)

#define RF_CW570_DCC_EVEN_ODD_ID_RO_LSB                                         (5)
#define RF_CW570_DCC_EVEN_ODD_ID_RO_WIDTH                                       (1)
#define RF_CW570_DCC_EVEN_ODD_ID_RO_MASK                                        (0x00000020)
#define RF_CW570_DCC_EVEN_ODD_ID_RO_BIT                                         (0x00000020)

#define RF_CW571_DCC_DISABLE_LSB                                                (19)
#define RF_CW571_DCC_DISABLE_WIDTH                                              (1)
#define RF_CW571_DCC_DISABLE_MASK                                               (0x00080000)
#define RF_CW571_DCC_DISABLE_BIT                                                (0x00080000)

#define RF_CW572_RG_STX_DCOHLDO_RCAL_LSB                                        (15)
#define RF_CW572_RG_STX_DCOHLDO_RCAL_WIDTH                                      (5)
#define RF_CW572_RG_STX_DCOHLDO_RCAL_MASK                                       (0x000F8000)

#define RF_CW572_RG_STX_DCOHLDO_RCAL_EN_LSB                                     (14)
#define RF_CW572_RG_STX_DCOHLDO_RCAL_EN_WIDTH                                   (1)
#define RF_CW572_RG_STX_DCOHLDO_RCAL_EN_MASK                                    (0x00004000)
#define RF_CW572_RG_STX_DCOHLDO_RCAL_EN_BIT                                     (0x00004000)

#define RF_CW572_RG_STX_DCOLLDO_RCAL_LSB                                        (9)
#define RF_CW572_RG_STX_DCOLLDO_RCAL_WIDTH                                      (5)
#define RF_CW572_RG_STX_DCOLLDO_RCAL_MASK                                       (0x00003E00)

#define RF_CW572_RG_STX_DCOLLDO_RCAL_EN_LSB                                     (8)
#define RF_CW572_RG_STX_DCOLLDO_RCAL_EN_WIDTH                                   (1)
#define RF_CW572_RG_STX_DCOLLDO_RCAL_EN_MASK                                    (0x00000100)
#define RF_CW572_RG_STX_DCOLLDO_RCAL_EN_BIT                                     (0x00000100)

#define RF_CW572_RG_STX_DCO2GLDO_RCAL_LSB                                       (3)
#define RF_CW572_RG_STX_DCO2GLDO_RCAL_WIDTH                                     (5)
#define RF_CW572_RG_STX_DCO2GLDO_RCAL_MASK                                      (0x000000F8)

#define RF_CW572_RG_STX_DCO2GLDO_RCAL_EN_LSB                                    (2)
#define RF_CW572_RG_STX_DCO2GLDO_RCAL_EN_WIDTH                                  (1)
#define RF_CW572_RG_STX_DCO2GLDO_RCAL_EN_MASK                                   (0x00000004)
#define RF_CW572_RG_STX_DCO2GLDO_RCAL_EN_BIT                                    (0x00000004)

#define RF_CW573_RG_STX_MMDLDO_RCAL_LSB                                         (15)
#define RF_CW573_RG_STX_MMDLDO_RCAL_WIDTH                                       (5)
#define RF_CW573_RG_STX_MMDLDO_RCAL_MASK                                        (0x000F8000)

#define RF_CW573_RG_STX_MMDLDO_RCAL_EN_LSB                                      (14)
#define RF_CW573_RG_STX_MMDLDO_RCAL_EN_WIDTH                                    (1)
#define RF_CW573_RG_STX_MMDLDO_RCAL_EN_MASK                                     (0x00004000)
#define RF_CW573_RG_STX_MMDLDO_RCAL_EN_BIT                                      (0x00004000)

#define RF_CW573_RG_STX_MMDLVLDO_RCAL_LSB                                       (9)
#define RF_CW573_RG_STX_MMDLVLDO_RCAL_WIDTH                                     (5)
#define RF_CW573_RG_STX_MMDLVLDO_RCAL_MASK                                      (0x00003E00)

#define RF_CW573_RG_STX_MMDLVLDO_RCAL_EN_LSB                                    (8)
#define RF_CW573_RG_STX_MMDLVLDO_RCAL_EN_WIDTH                                  (1)
#define RF_CW573_RG_STX_MMDLVLDO_RCAL_EN_MASK                                   (0x00000100)
#define RF_CW573_RG_STX_MMDLVLDO_RCAL_EN_BIT                                    (0x00000100)

#define RF_CW573_RG_STX_TDCLDO_RCAL_LSB                                         (3)
#define RF_CW573_RG_STX_TDCLDO_RCAL_WIDTH                                       (5)
#define RF_CW573_RG_STX_TDCLDO_RCAL_MASK                                        (0x000000F8)

#define RF_CW573_RG_STX_TDCLDO_RCAL_EN_LSB                                      (2)
#define RF_CW573_RG_STX_TDCLDO_RCAL_EN_WIDTH                                    (1)
#define RF_CW573_RG_STX_TDCLDO_RCAL_EN_MASK                                     (0x00000004)
#define RF_CW573_RG_STX_TDCLDO_RCAL_EN_BIT                                      (0x00000004)

#define RF_CW574_RG_STX_DDLDO_RCAL_LSB                                          (15)
#define RF_CW574_RG_STX_DDLDO_RCAL_WIDTH                                        (5)
#define RF_CW574_RG_STX_DDLDO_RCAL_MASK                                         (0x000F8000)

#define RF_CW574_RG_STX_DDLDO_RCAL_EN_LSB                                       (14)
#define RF_CW574_RG_STX_DDLDO_RCAL_EN_WIDTH                                     (1)
#define RF_CW574_RG_STX_DDLDO_RCAL_EN_MASK                                      (0x00004000)
#define RF_CW574_RG_STX_DDLDO_RCAL_EN_BIT                                       (0x00004000)

#define RF_CW574_STX_BG_MAN_LSB                                                 (6)
#define RF_CW574_STX_BG_MAN_WIDTH                                               (1)
#define RF_CW574_STX_BG_MAN_MASK                                                (0x00000040)
#define RF_CW574_STX_BG_MAN_BIT                                                 (0x00000040)

#define RF_CW574_EN_STX_DCOHLDO_BG_M_LSB                                        (5)
#define RF_CW574_EN_STX_DCOHLDO_BG_M_WIDTH                                      (1)
#define RF_CW574_EN_STX_DCOHLDO_BG_M_MASK                                       (0x00000020)
#define RF_CW574_EN_STX_DCOHLDO_BG_M_BIT                                        (0x00000020)

#define RF_CW574_EN_STX_DCOLLDO_BG_M_LSB                                        (4)
#define RF_CW574_EN_STX_DCOLLDO_BG_M_WIDTH                                      (1)
#define RF_CW574_EN_STX_DCOLLDO_BG_M_MASK                                       (0x00000010)
#define RF_CW574_EN_STX_DCOLLDO_BG_M_BIT                                        (0x00000010)

#define RF_CW574_EN_STX_DCO2GLDO_BG_M_LSB                                       (3)
#define RF_CW574_EN_STX_DCO2GLDO_BG_M_WIDTH                                     (1)
#define RF_CW574_EN_STX_DCO2GLDO_BG_M_MASK                                      (0x00000008)
#define RF_CW574_EN_STX_DCO2GLDO_BG_M_BIT                                       (0x00000008)

#define RF_CW574_EN_STX_MMDLDO_BG_M_LSB                                         (2)
#define RF_CW574_EN_STX_MMDLDO_BG_M_WIDTH                                       (1)
#define RF_CW574_EN_STX_MMDLDO_BG_M_MASK                                        (0x00000004)
#define RF_CW574_EN_STX_MMDLDO_BG_M_BIT                                         (0x00000004)

#define RF_CW574_EN_STX_MMDLVLDO_BG_M_LSB                                       (1)
#define RF_CW574_EN_STX_MMDLVLDO_BG_M_WIDTH                                     (1)
#define RF_CW574_EN_STX_MMDLVLDO_BG_M_MASK                                      (0x00000002)
#define RF_CW574_EN_STX_MMDLVLDO_BG_M_BIT                                       (0x00000002)

#define RF_CW574_EN_STX_TDCLDO_BG_M_LSB                                         (0)
#define RF_CW574_EN_STX_TDCLDO_BG_M_WIDTH                                       (1)
#define RF_CW574_EN_STX_TDCLDO_BG_M_MASK                                        (0x00000001)
#define RF_CW574_EN_STX_TDCLDO_BG_M_BIT                                         (0x00000001)

#define RF_CW575_STX_MMDLVLDO_MAN_LSB                                           (19)
#define RF_CW575_STX_MMDLVLDO_MAN_WIDTH                                         (1)
#define RF_CW575_STX_MMDLVLDO_MAN_MASK                                          (0x00080000)
#define RF_CW575_STX_MMDLVLDO_MAN_BIT                                           (0x00080000)

#define RF_CW575_STX_MMDLVLDO_EN_3WIRE_LSB                                      (18)
#define RF_CW575_STX_MMDLVLDO_EN_3WIRE_WIDTH                                    (1)
#define RF_CW575_STX_MMDLVLDO_EN_3WIRE_MASK                                     (0x00040000)
#define RF_CW575_STX_MMDLVLDO_EN_3WIRE_BIT                                      (0x00040000)

#define RF_CW575_LVLDO_MMD_VS_LSB                                               (15)
#define RF_CW575_LVLDO_MMD_VS_WIDTH                                             (3)
#define RF_CW575_LVLDO_MMD_VS_MASK                                              (0x00038000)

#define RF_CW575_STX_TDCLVLDO_MAN_LSB                                           (14)
#define RF_CW575_STX_TDCLVLDO_MAN_WIDTH                                         (1)
#define RF_CW575_STX_TDCLVLDO_MAN_MASK                                          (0x00004000)
#define RF_CW575_STX_TDCLVLDO_MAN_BIT                                           (0x00004000)

#define RF_CW575_STX_TDCLVLDO_EN_3WIRE_LSB                                      (13)
#define RF_CW575_STX_TDCLVLDO_EN_3WIRE_WIDTH                                    (1)
#define RF_CW575_STX_TDCLVLDO_EN_3WIRE_MASK                                     (0x00002000)
#define RF_CW575_STX_TDCLVLDO_EN_3WIRE_BIT                                      (0x00002000)

#define RF_CW575_STX_DCOH_SXBUF_LVLDO_MAN_LSB                                   (9)
#define RF_CW575_STX_DCOH_SXBUF_LVLDO_MAN_WIDTH                                 (1)
#define RF_CW575_STX_DCOH_SXBUF_LVLDO_MAN_MASK                                  (0x00000200)
#define RF_CW575_STX_DCOH_SXBUF_LVLDO_MAN_BIT                                   (0x00000200)

#define RF_CW575_STX_DCOH_SXBUF_LVLDO_EN_3WIRE_LSB                              (8)
#define RF_CW575_STX_DCOH_SXBUF_LVLDO_EN_3WIRE_WIDTH                            (1)
#define RF_CW575_STX_DCOH_SXBUF_LVLDO_EN_3WIRE_MASK                             (0x00000100)
#define RF_CW575_STX_DCOH_SXBUF_LVLDO_EN_3WIRE_BIT                              (0x00000100)

#define RF_CW575_STX_DCOL_SXBUF_LVLDO_MAN_LSB                                   (7)
#define RF_CW575_STX_DCOL_SXBUF_LVLDO_MAN_WIDTH                                 (1)
#define RF_CW575_STX_DCOL_SXBUF_LVLDO_MAN_MASK                                  (0x00000080)
#define RF_CW575_STX_DCOL_SXBUF_LVLDO_MAN_BIT                                   (0x00000080)

#define RF_CW575_STX_DCOL_SXBUF_LVLDO_EN_3WIRE_LSB                              (6)
#define RF_CW575_STX_DCOL_SXBUF_LVLDO_EN_3WIRE_WIDTH                            (1)
#define RF_CW575_STX_DCOL_SXBUF_LVLDO_EN_3WIRE_MASK                             (0x00000040)
#define RF_CW575_STX_DCOL_SXBUF_LVLDO_EN_3WIRE_BIT                              (0x00000040)

#define RF_CW576_RG_TDC_OUT_TYP_LSB                                             (7)
#define RF_CW576_RG_TDC_OUT_TYP_WIDTH                                           (13)
#define RF_CW576_RG_TDC_OUT_TYP_MASK                                            (0x000FFF80)

#define RF_CW576_RG_SS_FLAG_MAN_LSB                                             (5)
#define RF_CW576_RG_SS_FLAG_MAN_WIDTH                                           (1)
#define RF_CW576_RG_SS_FLAG_MAN_MASK                                            (0x00000020)
#define RF_CW576_RG_SS_FLAG_MAN_BIT                                             (0x00000020)

#define RF_CW576_RG_SS_FLAG_3WIRE_LSB                                           (4)
#define RF_CW576_RG_SS_FLAG_3WIRE_WIDTH                                         (1)
#define RF_CW576_RG_SS_FLAG_3WIRE_MASK                                          (0x00000010)
#define RF_CW576_RG_SS_FLAG_3WIRE_BIT                                           (0x00000010)

#define RF_CW576_RG_FF_FLAG_MAN_LSB                                             (3)
#define RF_CW576_RG_FF_FLAG_MAN_WIDTH                                           (1)
#define RF_CW576_RG_FF_FLAG_MAN_MASK                                            (0x00000008)
#define RF_CW576_RG_FF_FLAG_MAN_BIT                                             (0x00000008)

#define RF_CW576_RG_FF_FLAG_3WIRE_LSB                                           (2)
#define RF_CW576_RG_FF_FLAG_3WIRE_WIDTH                                         (1)
#define RF_CW576_RG_FF_FLAG_3WIRE_MASK                                          (0x00000004)
#define RF_CW576_RG_FF_FLAG_3WIRE_BIT                                           (0x00000004)

#define RF_CW577_RG_TDC_OUT_OFFSET_SS_LSB                                       (10)
#define RF_CW577_RG_TDC_OUT_OFFSET_SS_WIDTH                                     (10)
#define RF_CW577_RG_TDC_OUT_OFFSET_SS_MASK                                      (0x000FFC00)

#define RF_CW577_RG_TDC_OUT_OFFSET_FF_LSB                                       (0)
#define RF_CW577_RG_TDC_OUT_OFFSET_FF_WIDTH                                     (10)
#define RF_CW577_RG_TDC_OUT_OFFSET_FF_MASK                                      (0x000003FF)

#define RF_CW578_RG_STX_HT_COMP_LSB                                             (14)
#define RF_CW578_RG_STX_HT_COMP_WIDTH                                           (6)
#define RF_CW578_RG_STX_HT_COMP_MASK                                            (0x000FC000)

#define RF_CW578_RG_STX_LT_COMP_LSB                                             (8)
#define RF_CW578_RG_STX_LT_COMP_WIDTH                                           (6)
#define RF_CW578_RG_STX_LT_COMP_MASK                                            (0x00003F00)

#define RF_CW578_RG_CORNER_VS_OFFSET_LSB                                        (0)
#define RF_CW578_RG_CORNER_VS_OFFSET_WIDTH                                      (3)
#define RF_CW578_RG_CORNER_VS_OFFSET_MASK                                       (0x00000007)

#define RF_CW579_RG_STX_TDC_OUT_HT_OFFSET_LSB                                   (10)
#define RF_CW579_RG_STX_TDC_OUT_HT_OFFSET_WIDTH                                 (10)
#define RF_CW579_RG_STX_TDC_OUT_HT_OFFSET_MASK                                  (0x000FFC00)

#define RF_CW579_RG_STX_TDC_OUT_LT_OFFSET_LSB                                   (0)
#define RF_CW579_RG_STX_TDC_OUT_LT_OFFSET_WIDTH                                 (10)
#define RF_CW579_RG_STX_TDC_OUT_LT_OFFSET_MASK                                  (0x000003FF)

#define RF_CW580_STX_SCA_BIST_EN_LSB                                            (19)
#define RF_CW580_STX_SCA_BIST_EN_WIDTH                                          (1)
#define RF_CW580_STX_SCA_BIST_EN_MASK                                           (0x00080000)
#define RF_CW580_STX_SCA_BIST_EN_BIT                                            (0x00080000)

#define RF_CW580_STX_SCA_BIST_NC_LSB                                            (16)
#define RF_CW580_STX_SCA_BIST_NC_WIDTH                                          (3)
#define RF_CW580_STX_SCA_BIST_NC_MASK                                           (0x00070000)

#define RF_CW580_STX_SCA_BIST_CG_EN_LSB                                         (0)
#define RF_CW580_STX_SCA_BIST_CG_EN_WIDTH                                       (1)
#define RF_CW580_STX_SCA_BIST_CG_EN_MASK                                        (0x00000001)
#define RF_CW580_STX_SCA_BIST_CG_EN_BIT                                         (0x00000001)

#define RF_CW581_STX_SCA_BIST_COUNT_LSB                                         (2)
#define RF_CW581_STX_SCA_BIST_COUNT_WIDTH                                       (18)
#define RF_CW581_STX_SCA_BIST_COUNT_MASK                                        (0x000FFFFC)

#define RF_CW581_FF_FLAG_RO_LSB                                                 (1)
#define RF_CW581_FF_FLAG_RO_WIDTH                                               (1)
#define RF_CW581_FF_FLAG_RO_MASK                                                (0x00000002)
#define RF_CW581_FF_FLAG_RO_BIT                                                 (0x00000002)

#define RF_CW581_SS_FLAG_RO_LSB                                                 (0)
#define RF_CW581_SS_FLAG_RO_WIDTH                                               (1)
#define RF_CW581_SS_FLAG_RO_MASK                                                (0x00000001)
#define RF_CW581_SS_FLAG_RO_BIT                                                 (0x00000001)

#define RF_CW704_TX_RESERVED_LSB                                                (4)
#define RF_CW704_TX_RESERVED_WIDTH                                              (16)
#define RF_CW704_TX_RESERVED_MASK                                               (0x000FFFF0)

#define RF_CW704_TXPF_LSB                                                       (3)
#define RF_CW704_TXPF_WIDTH                                                     (1)
#define RF_CW704_TXPF_MASK                                                      (0x00000008)
#define RF_CW704_TXPF_BIT                                                       (0x00000008)

#define RF_CW704_TX_DYN_LPM_EVM_LSB                                             (1)
#define RF_CW704_TX_DYN_LPM_EVM_WIDTH                                           (1)
#define RF_CW704_TX_DYN_LPM_EVM_MASK                                            (0x00000002)
#define RF_CW704_TX_DYN_LPM_EVM_BIT                                             (0x00000002)

#define RF_CW704_TX_DYN_LPM_OOB_LSB                                             (0)
#define RF_CW704_TX_DYN_LPM_OOB_WIDTH                                           (1)
#define RF_CW704_TX_DYN_LPM_OOB_MASK                                            (0x00000001)
#define RF_CW704_TX_DYN_LPM_OOB_BIT                                             (0x00000001)

#define RF_CW705_TX_DET_MEAS_SEL_LSB                                            (17)
#define RF_CW705_TX_DET_MEAS_SEL_WIDTH                                          (3)
#define RF_CW705_TX_DET_MEAS_SEL_MASK                                           (0x000E0000)

#define RF_CW705_RG_TX_DET_PGA2_GAIN_LSB                                        (12)
#define RF_CW705_RG_TX_DET_PGA2_GAIN_WIDTH                                      (2)
#define RF_CW705_RG_TX_DET_PGA2_GAIN_MASK                                       (0x00003000)

#define RF_CW705_RG_TX_DET_PGA_CSEL_LSB                                         (7)
#define RF_CW705_RG_TX_DET_PGA_CSEL_WIDTH                                       (5)
#define RF_CW705_RG_TX_DET_PGA_CSEL_MASK                                        (0x00000F80)

#define RF_CW705_TX_DET_EN_TZ_LOWGAIN_LSB                                       (6)
#define RF_CW705_TX_DET_EN_TZ_LOWGAIN_WIDTH                                     (1)
#define RF_CW705_TX_DET_EN_TZ_LOWGAIN_MASK                                      (0x00000040)
#define RF_CW705_TX_DET_EN_TZ_LOWGAIN_BIT                                       (0x00000040)

#define RF_CW705_TX_DET_TZ_12K_EN_LSB                                           (5)
#define RF_CW705_TX_DET_TZ_12K_EN_WIDTH                                         (1)
#define RF_CW705_TX_DET_TZ_12K_EN_MASK                                          (0x00000020)
#define RF_CW705_TX_DET_TZ_12K_EN_BIT                                           (0x00000020)

#define RF_CW705_TX_DET_TZ_96K_EN_LSB                                           (4)
#define RF_CW705_TX_DET_TZ_96K_EN_WIDTH                                         (1)
#define RF_CW705_TX_DET_TZ_96K_EN_MASK                                          (0x00000010)
#define RF_CW705_TX_DET_TZ_96K_EN_BIT                                           (0x00000010)

#define RF_CW705_TX_DET_PGAG_LSB                                                (0)
#define RF_CW705_TX_DET_PGAG_WIDTH                                              (4)
#define RF_CW705_TX_DET_PGAG_MASK                                               (0x0000000F)

#define RF_CW706_RG_TX_DPD_MODE_LSB                                             (19)
#define RF_CW706_RG_TX_DPD_MODE_WIDTH                                           (1)
#define RF_CW706_RG_TX_DPD_MODE_MASK                                            (0x00080000)
#define RF_CW706_RG_TX_DPD_MODE_BIT                                             (0x00080000)

#define RF_CW706_TX_PGA_GAIN_LSB                                                (15)
#define RF_CW706_TX_PGA_GAIN_WIDTH                                              (4)
#define RF_CW706_TX_PGA_GAIN_MASK                                               (0x00078000)

#define RF_CW706_TX_MODDRV_AB_SEL_LSB                                           (14)
#define RF_CW706_TX_MODDRV_AB_SEL_WIDTH                                         (1)
#define RF_CW706_TX_MODDRV_AB_SEL_MASK                                          (0x00004000)
#define RF_CW706_TX_MODDRV_AB_SEL_BIT                                           (0x00004000)

#define RF_CW706_TX_MODDRV_SLICES_LSB                                           (10)
#define RF_CW706_TX_MODDRV_SLICES_WIDTH                                         (4)
#define RF_CW706_TX_MODDRV_SLICES_MASK                                          (0x00003C00)

#define RF_CW706_TX_MODDRV_UNIT_LSB                                             (6)
#define RF_CW706_TX_MODDRV_UNIT_WIDTH                                           (4)
#define RF_CW706_TX_MODDRV_UNIT_MASK                                            (0x000003C0)

#define RF_CW706_RG_TX_MODDRV_ATTN_LSB                                          (0)
#define RF_CW706_RG_TX_MODDRV_ATTN_WIDTH                                        (6)
#define RF_CW706_RG_TX_MODDRV_ATTN_MASK                                         (0x0000003F)

#define RF_CW707_RG_TX_HRM_EN_LSB                                               (13)
#define RF_CW707_RG_TX_HRM_EN_WIDTH                                             (1)
#define RF_CW707_RG_TX_HRM_EN_MASK                                              (0x00002000)
#define RF_CW707_RG_TX_HRM_EN_BIT                                               (0x00002000)

#define RF_CW707_RG_TX_HB_BSEL_LSB                                              (10)
#define RF_CW707_RG_TX_HB_BSEL_WIDTH                                            (3)
#define RF_CW707_RG_TX_HB_BSEL_MASK                                             (0x00001C00)

#define RF_CW707_RG_TX_MB_BSEL_LSB                                              (5)
#define RF_CW707_RG_TX_MB_BSEL_WIDTH                                            (5)
#define RF_CW707_RG_TX_MB_BSEL_MASK                                             (0x000003E0)

#define RF_CW707_RG_TX_LB_BSEL_LSB                                              (0)
#define RF_CW707_RG_TX_LB_BSEL_WIDTH                                            (5)
#define RF_CW707_RG_TX_LB_BSEL_MASK                                             (0x0000001F)

#define RF_CW710_TX_LPF_GAIN_MAN_LSB                                            (19)
#define RF_CW710_TX_LPF_GAIN_MAN_WIDTH                                          (1)
#define RF_CW710_TX_LPF_GAIN_MAN_MASK                                           (0x00080000)
#define RF_CW710_TX_LPF_GAIN_MAN_BIT                                            (0x00080000)

#define RF_CW710_TX_LPF_GAIN_M_LSB                                              (17)
#define RF_CW710_TX_LPF_GAIN_M_WIDTH                                            (2)
#define RF_CW710_TX_LPF_GAIN_M_MASK                                             (0x00060000)

#define RF_CW710_TX_LPF_GAIN_LIN_LSB                                            (15)
#define RF_CW710_TX_LPF_GAIN_LIN_WIDTH                                          (2)
#define RF_CW710_TX_LPF_GAIN_LIN_MASK                                           (0x00018000)

#define RF_CW710_TX_LPF_GAIN_DPD_LSB                                            (13)
#define RF_CW710_TX_LPF_GAIN_DPD_WIDTH                                          (2)
#define RF_CW710_TX_LPF_GAIN_DPD_MASK                                           (0x00006000)

#define RF_CW710_RG_TX_LPF_BW3_EN_LSB                                           (12)
#define RF_CW710_RG_TX_LPF_BW3_EN_WIDTH                                         (1)
#define RF_CW710_RG_TX_LPF_BW3_EN_MASK                                          (0x00001000)
#define RF_CW710_RG_TX_LPF_BW3_EN_BIT                                           (0x00001000)

#define RF_CW710_RG_TX_LPF_OPIB1_LSB                                            (8)
#define RF_CW710_RG_TX_LPF_OPIB1_WIDTH                                          (4)
#define RF_CW710_RG_TX_LPF_OPIB1_MASK                                           (0x00000F00)

#define RF_CW710_RG_TX_LPF_OPIB2_LSB                                            (4)
#define RF_CW710_RG_TX_LPF_OPIB2_WIDTH                                          (4)
#define RF_CW710_RG_TX_LPF_OPIB2_MASK                                           (0x000000F0)

#define RF_CW710_RG_TX_LPF_RSEL_LSB                                             (0)
#define RF_CW710_RG_TX_LPF_RSEL_WIDTH                                           (4)
#define RF_CW710_RG_TX_LPF_RSEL_MASK                                            (0x0000000F)

#define RF_CW711_RG_TX_RFLPBK_ATTN_SEL_LSB                                      (11)
#define RF_CW711_RG_TX_RFLPBK_ATTN_SEL_WIDTH                                    (3)
#define RF_CW711_RG_TX_RFLPBK_ATTN_SEL_MASK                                     (0x00003800)

#define RF_CW711_TX_LPF_CAL_EN_LSB                                              (10)
#define RF_CW711_TX_LPF_CAL_EN_WIDTH                                            (1)
#define RF_CW711_TX_LPF_CAL_EN_MASK                                             (0x00000400)
#define RF_CW711_TX_LPF_CAL_EN_BIT                                              (0x00000400)

#define RF_CW711_RG_TX_TX2RX_LPBK_EN_LSB                                        (9)
#define RF_CW711_RG_TX_TX2RX_LPBK_EN_WIDTH                                      (1)
#define RF_CW711_RG_TX_TX2RX_LPBK_EN_MASK                                       (0x00000200)
#define RF_CW711_RG_TX_TX2RX_LPBK_EN_BIT                                        (0x00000200)

#define RF_CW711_RG_TX_DET_RCVRBUF_EN_LSB                                       (8)
#define RF_CW711_RG_TX_DET_RCVRBUF_EN_WIDTH                                     (1)
#define RF_CW711_RG_TX_DET_RCVRBUF_EN_MASK                                      (0x00000100)
#define RF_CW711_RG_TX_DET_RCVRBUF_EN_BIT                                       (0x00000100)

#define RF_CW711_RG_TX_DET_TTGBUF_LB_EN_LSB                                     (7)
#define RF_CW711_RG_TX_DET_TTGBUF_LB_EN_WIDTH                                   (1)
#define RF_CW711_RG_TX_DET_TTGBUF_LB_EN_MASK                                    (0x00000080)
#define RF_CW711_RG_TX_DET_TTGBUF_LB_EN_BIT                                     (0x00000080)

#define RF_CW711_RG_TX_DET_TTGBUF_EN_LSB                                        (6)
#define RF_CW711_RG_TX_DET_TTGBUF_EN_WIDTH                                      (1)
#define RF_CW711_RG_TX_DET_TTGBUF_EN_MASK                                       (0x00000040)
#define RF_CW711_RG_TX_DET_TTGBUF_EN_BIT                                        (0x00000040)

#define RF_CW711_RG_TX_RFLPBK_EN_LSB                                            (5)
#define RF_CW711_RG_TX_RFLPBK_EN_WIDTH                                          (1)
#define RF_CW711_RG_TX_RFLPBK_EN_MASK                                           (0x00000020)
#define RF_CW711_RG_TX_RFLPBK_EN_BIT                                            (0x00000020)

#define RF_CW711_RG_TX_BBLPBK_EN_LSB                                            (4)
#define RF_CW711_RG_TX_BBLPBK_EN_WIDTH                                          (1)
#define RF_CW711_RG_TX_BBLPBK_EN_MASK                                           (0x00000010)
#define RF_CW711_RG_TX_BBLPBK_EN_BIT                                            (0x00000010)

#define RF_CW711_RG_TX_DAC_LPBK_EN_LSB                                          (3)
#define RF_CW711_RG_TX_DAC_LPBK_EN_WIDTH                                        (1)
#define RF_CW711_RG_TX_DAC_LPBK_EN_MASK                                         (0x00000008)
#define RF_CW711_RG_TX_DAC_LPBK_EN_BIT                                          (0x00000008)

#define RF_CW711_RG_TX_DET_LB2RX_EN_LSB                                         (2)
#define RF_CW711_RG_TX_DET_LB2RX_EN_WIDTH                                       (1)
#define RF_CW711_RG_TX_DET_LB2RX_EN_MASK                                        (0x00000004)
#define RF_CW711_RG_TX_DET_LB2RX_EN_BIT                                         (0x00000004)

#define RF_CW711_RG_TX_DET_SBM_EN_LSB                                           (1)
#define RF_CW711_RG_TX_DET_SBM_EN_WIDTH                                         (1)
#define RF_CW711_RG_TX_DET_SBM_EN_MASK                                          (0x00000002)
#define RF_CW711_RG_TX_DET_SBM_EN_BIT                                           (0x00000002)

#define RF_CW711_RG_TX_BBLPBK_SWAPIQ_LSB                                        (0)
#define RF_CW711_RG_TX_BBLPBK_SWAPIQ_WIDTH                                      (1)
#define RF_CW711_RG_TX_BBLPBK_SWAPIQ_MASK                                       (0x00000001)
#define RF_CW711_RG_TX_BBLPBK_SWAPIQ_BIT                                        (0x00000001)

#define RF_CW712_RG_TX_DRV_B_VCAS_LSB                                           (17)
#define RF_CW712_RG_TX_DRV_B_VCAS_WIDTH                                         (3)
#define RF_CW712_RG_TX_DRV_B_VCAS_MASK                                          (0x000E0000)

#define RF_CW712_RG_TX_2G_ATTN_LSB                                              (14)
#define RF_CW712_RG_TX_2G_ATTN_WIDTH                                            (3)
#define RF_CW712_RG_TX_2G_ATTN_MASK                                             (0x0001C000)

#define RF_CW712_RG_TX_MOD_BIAS_LSB                                             (10)
#define RF_CW712_RG_TX_MOD_BIAS_WIDTH                                           (4)
#define RF_CW712_RG_TX_MOD_BIAS_MASK                                            (0x00003C00)

#define RF_CW712_RG_TX_LPF_UWB_LSB                                              (9)
#define RF_CW712_RG_TX_LPF_UWB_WIDTH                                            (1)
#define RF_CW712_RG_TX_LPF_UWB_MASK                                             (0x00000200)
#define RF_CW712_RG_TX_LPF_UWB_BIT                                              (0x00000200)

#define RF_CW712_RG_TX_RCF_VS_LSB                                               (7)
#define RF_CW712_RG_TX_RCF_VS_WIDTH                                             (2)
#define RF_CW712_RG_TX_RCF_VS_MASK                                              (0x00000180)

#define RF_CW712_RG_TX_LO_TANK_BIAS_LSB                                         (4)
#define RF_CW712_RG_TX_LO_TANK_BIAS_WIDTH                                       (3)
#define RF_CW712_RG_TX_LO_TANK_BIAS_MASK                                        (0x00000070)

#define RF_CW712_RG_TX_LO_FE_FB_BIAS_LSB                                        (1)
#define RF_CW712_RG_TX_LO_FE_FB_BIAS_WIDTH                                      (3)
#define RF_CW712_RG_TX_LO_FE_FB_BIAS_MASK                                       (0x0000000E)

#define RF_CW713_TX_DET_ANT_SEL_DEF_LSB                                         (19)
#define RF_CW713_TX_DET_ANT_SEL_DEF_WIDTH                                       (1)
#define RF_CW713_TX_DET_ANT_SEL_DEF_MASK                                        (0x00080000)
#define RF_CW713_TX_DET_ANT_SEL_DEF_BIT                                         (0x00080000)

#define RF_CW713_TX_GMSK_LINRAMP_LSB                                            (18)
#define RF_CW713_TX_GMSK_LINRAMP_WIDTH                                          (1)
#define RF_CW713_TX_GMSK_LINRAMP_MASK                                           (0x00040000)
#define RF_CW713_TX_GMSK_LINRAMP_BIT                                            (0x00040000)

#define RF_CW713_RG_TX_BSELVOFF_LSB                                             (16)
#define RF_CW713_RG_TX_BSELVOFF_WIDTH                                           (2)
#define RF_CW713_RG_TX_BSELVOFF_MASK                                            (0x00030000)

#define RF_CW713_RG_TX_LO_FE_BIAS_TC_LSB                                        (12)
#define RF_CW713_RG_TX_LO_FE_BIAS_TC_WIDTH                                      (4)
#define RF_CW713_RG_TX_LO_FE_BIAS_TC_MASK                                       (0x0000F000)

#define RF_CW713_RG_TX_LO_IM_Z_LSB                                              (8)
#define RF_CW713_RG_TX_LO_IM_Z_WIDTH                                            (4)
#define RF_CW713_RG_TX_LO_IM_Z_MASK                                             (0x00000F00)

#define RF_CW713_RG_TX_LO_RE_Z_LSB                                              (4)
#define RF_CW713_RG_TX_LO_RE_Z_WIDTH                                            (4)
#define RF_CW713_RG_TX_LO_RE_Z_MASK                                             (0x000000F0)

#define RF_CW713_RG_TX_LB_GMSK_BUF_HPM_LSB                                      (1)
#define RF_CW713_RG_TX_LB_GMSK_BUF_HPM_WIDTH                                    (1)
#define RF_CW713_RG_TX_LB_GMSK_BUF_HPM_MASK                                     (0x00000002)
#define RF_CW713_RG_TX_LB_GMSK_BUF_HPM_BIT                                      (0x00000002)

#define RF_CW713_RG_TX_MB_GMSK_BUF_HPM_LSB                                      (0)
#define RF_CW713_RG_TX_MB_GMSK_BUF_HPM_WIDTH                                    (1)
#define RF_CW713_RG_TX_MB_GMSK_BUF_HPM_MASK                                     (0x00000001)
#define RF_CW713_RG_TX_MB_GMSK_BUF_HPM_BIT                                      (0x00000001)

#define RF_CW714_TX_LO_CAP_ARRAY_LSB                                            (11)
#define RF_CW714_TX_LO_CAP_ARRAY_WIDTH                                          (7)
#define RF_CW714_TX_LO_CAP_ARRAY_MASK                                           (0x0003F800)

#define RF_CW714_TX_LO_IND_SW_LSB                                               (10)
#define RF_CW714_TX_LO_IND_SW_WIDTH                                             (1)
#define RF_CW714_TX_LO_IND_SW_MASK                                              (0x00000400)
#define RF_CW714_TX_LO_IND_SW_BIT                                               (0x00000400)

#define RF_CW714_TX_LO_FE_IN_BIAS_LPM_LSB                                       (5)
#define RF_CW714_TX_LO_FE_IN_BIAS_LPM_WIDTH                                     (5)
#define RF_CW714_TX_LO_FE_IN_BIAS_LPM_MASK                                      (0x000003E0)

#define RF_CW714_TX_LO_FE_IN_BIAS_HPM_LSB                                       (0)
#define RF_CW714_TX_LO_FE_IN_BIAS_HPM_WIDTH                                     (5)
#define RF_CW714_TX_LO_FE_IN_BIAS_HPM_MASK                                      (0x0000001F)

#define RF_CW715_TX_DET_PGA_MAN_LSB                                             (14)
#define RF_CW715_TX_DET_PGA_MAN_WIDTH                                           (1)
#define RF_CW715_TX_DET_PGA_MAN_MASK                                            (0x00004000)
#define RF_CW715_TX_DET_PGA_MAN_BIT                                             (0x00004000)

#define RF_CW715_TX_DET_PGA1_EN_M_LSB                                           (13)
#define RF_CW715_TX_DET_PGA1_EN_M_WIDTH                                         (1)
#define RF_CW715_TX_DET_PGA1_EN_M_MASK                                          (0x00002000)
#define RF_CW715_TX_DET_PGA1_EN_M_BIT                                           (0x00002000)

#define RF_CW715_TX_DET_PGA2_EN_M_LSB                                           (12)
#define RF_CW715_TX_DET_PGA2_EN_M_WIDTH                                         (1)
#define RF_CW715_TX_DET_PGA2_EN_M_MASK                                          (0x00001000)
#define RF_CW715_TX_DET_PGA2_EN_M_BIT                                           (0x00001000)

#define RF_CW715_TX_DET_ANT_SEL_MAN_LSB                                         (11)
#define RF_CW715_TX_DET_ANT_SEL_MAN_WIDTH                                       (1)
#define RF_CW715_TX_DET_ANT_SEL_MAN_MASK                                        (0x00000800)
#define RF_CW715_TX_DET_ANT_SEL_MAN_BIT                                         (0x00000800)

#define RF_CW715_TX_DET_ANT_SEL_M_LSB                                           (10)
#define RF_CW715_TX_DET_ANT_SEL_M_WIDTH                                         (1)
#define RF_CW715_TX_DET_ANT_SEL_M_MASK                                          (0x00000400)
#define RF_CW715_TX_DET_ANT_SEL_M_BIT                                           (0x00000400)

#define RF_CW715_TX_RAT_MAN_LSB                                                 (7)
#define RF_CW715_TX_RAT_MAN_WIDTH                                               (1)
#define RF_CW715_TX_RAT_MAN_MASK                                                (0x00000080)
#define RF_CW715_TX_RAT_MAN_BIT                                                 (0x00000080)

#define RF_CW715_TX_TRIG_PWR_AWARE_EN_LSB                                       (4)
#define RF_CW715_TX_TRIG_PWR_AWARE_EN_WIDTH                                     (1)
#define RF_CW715_TX_TRIG_PWR_AWARE_EN_MASK                                      (0x00000010)
#define RF_CW715_TX_TRIG_PWR_AWARE_EN_BIT                                       (0x00000010)

#define RF_CW715_TX_FDDBUF_WARM_EN_LSB                                          (3)
#define RF_CW715_TX_FDDBUF_WARM_EN_WIDTH                                        (1)
#define RF_CW715_TX_FDDBUF_WARM_EN_MASK                                         (0x00000008)
#define RF_CW715_TX_FDDBUF_WARM_EN_BIT                                          (0x00000008)

#define RF_CW715_TX_TDDBUF_WARM_EN_LSB                                          (2)
#define RF_CW715_TX_TDDBUF_WARM_EN_WIDTH                                        (1)
#define RF_CW715_TX_TDDBUF_WARM_EN_MASK                                         (0x00000004)
#define RF_CW715_TX_TDDBUF_WARM_EN_BIT                                          (0x00000004)

#define RF_CW715_TX_XO_CALR_CK_EN_MAN_LSB                                       (1)
#define RF_CW715_TX_XO_CALR_CK_EN_MAN_WIDTH                                     (1)
#define RF_CW715_TX_XO_CALR_CK_EN_MAN_MASK                                      (0x00000002)
#define RF_CW715_TX_XO_CALR_CK_EN_MAN_BIT                                       (0x00000002)

#define RF_CW715_TX_XO_CALR_CK_EN_M_LSB                                         (0)
#define RF_CW715_TX_XO_CALR_CK_EN_M_WIDTH                                       (1)
#define RF_CW715_TX_XO_CALR_CK_EN_M_MASK                                        (0x00000001)
#define RF_CW715_TX_XO_CALR_CK_EN_M_BIT                                         (0x00000001)

#define RF_CW716_TX_BAND_M_LSB                                                  (4)
#define RF_CW716_TX_BAND_M_WIDTH                                                (6)
#define RF_CW716_TX_BAND_M_MASK                                                 (0x000003F0)

#define RF_CW716_TX_SRX1_PCC_EN_LSB                                             (3)
#define RF_CW716_TX_SRX1_PCC_EN_WIDTH                                           (1)
#define RF_CW716_TX_SRX1_PCC_EN_MASK                                            (0x00000008)
#define RF_CW716_TX_SRX1_PCC_EN_BIT                                             (0x00000008)

#define RF_CW716_TX_SRX2_PCC_EN_LSB                                             (2)
#define RF_CW716_TX_SRX2_PCC_EN_WIDTH                                           (1)
#define RF_CW716_TX_SRX2_PCC_EN_MASK                                            (0x00000004)
#define RF_CW716_TX_SRX2_PCC_EN_BIT                                             (0x00000004)

#define RF_CW716_TX_SRX_PCC_SRC_SEL_LSB                                         (1)
#define RF_CW716_TX_SRX_PCC_SRC_SEL_WIDTH                                       (1)
#define RF_CW716_TX_SRX_PCC_SRC_SEL_MASK                                        (0x00000002)
#define RF_CW716_TX_SRX_PCC_SRC_SEL_BIT                                         (0x00000002)

#define RF_CW716_TX_BAND_SRC_SEL_LSB                                            (0)
#define RF_CW716_TX_BAND_SRC_SEL_WIDTH                                          (1)
#define RF_CW716_TX_BAND_SRC_SEL_MASK                                           (0x00000001)
#define RF_CW716_TX_BAND_SRC_SEL_BIT                                            (0x00000001)

#define RF_CW718_TXPF2_MAN_LSB                                                  (2)
#define RF_CW718_TXPF2_MAN_WIDTH                                                (1)
#define RF_CW718_TXPF2_MAN_MASK                                                 (0x00000004)
#define RF_CW718_TXPF2_MAN_BIT                                                  (0x00000004)

#define RF_CW718_TXPF2_M_LSB                                                    (1)
#define RF_CW718_TXPF2_M_WIDTH                                                  (1)
#define RF_CW718_TXPF2_M_MASK                                                   (0x00000002)
#define RF_CW718_TXPF2_M_BIT                                                    (0x00000002)

#define RF_CW718_TXPF2_LSB                                                      (0)
#define RF_CW718_TXPF2_WIDTH                                                    (1)
#define RF_CW718_TXPF2_MASK                                                     (0x00000001)
#define RF_CW718_TXPF2_BIT                                                      (0x00000001)

#define RF_CW720_TX_LDO_MAN_LSB                                                 (19)
#define RF_CW720_TX_LDO_MAN_WIDTH                                               (1)
#define RF_CW720_TX_LDO_MAN_MASK                                                (0x00080000)
#define RF_CW720_TX_LDO_MAN_BIT                                                 (0x00080000)

#define RF_CW720_TX_RFFE_LDO15_CORE_EN_M_LSB                                    (16)
#define RF_CW720_TX_RFFE_LDO15_CORE_EN_M_WIDTH                                  (1)
#define RF_CW720_TX_RFFE_LDO15_CORE_EN_M_MASK                                   (0x00010000)
#define RF_CW720_TX_RFFE_LDO15_CORE_EN_M_BIT                                    (0x00010000)

#define RF_CW720_TX_RFFE_LDO15_OUT_3_EN_M_LSB                                   (15)
#define RF_CW720_TX_RFFE_LDO15_OUT_3_EN_M_WIDTH                                 (1)
#define RF_CW720_TX_RFFE_LDO15_OUT_3_EN_M_MASK                                  (0x00008000)
#define RF_CW720_TX_RFFE_LDO15_OUT_3_EN_M_BIT                                   (0x00008000)

#define RF_CW720_TX_RFFE_LDO15_OUT_2_EN_M_LSB                                   (14)
#define RF_CW720_TX_RFFE_LDO15_OUT_2_EN_M_WIDTH                                 (1)
#define RF_CW720_TX_RFFE_LDO15_OUT_2_EN_M_MASK                                  (0x00004000)
#define RF_CW720_TX_RFFE_LDO15_OUT_2_EN_M_BIT                                   (0x00004000)

#define RF_CW720_TX_RFFE_LDO15_OUT_1_EN_M_LSB                                   (13)
#define RF_CW720_TX_RFFE_LDO15_OUT_1_EN_M_WIDTH                                 (1)
#define RF_CW720_TX_RFFE_LDO15_OUT_1_EN_M_MASK                                  (0x00002000)
#define RF_CW720_TX_RFFE_LDO15_OUT_1_EN_M_BIT                                   (0x00002000)

#define RF_CW720_TX_RFFE_LDO11_CORE_EN_M_LSB                                    (12)
#define RF_CW720_TX_RFFE_LDO11_CORE_EN_M_WIDTH                                  (1)
#define RF_CW720_TX_RFFE_LDO11_CORE_EN_M_MASK                                   (0x00001000)
#define RF_CW720_TX_RFFE_LDO11_CORE_EN_M_BIT                                    (0x00001000)

#define RF_CW720_TX_RFFE_LDO11_OUT_EN_M_LSB                                     (11)
#define RF_CW720_TX_RFFE_LDO11_OUT_EN_M_WIDTH                                   (1)
#define RF_CW720_TX_RFFE_LDO11_OUT_EN_M_MASK                                    (0x00000800)
#define RF_CW720_TX_RFFE_LDO11_OUT_EN_M_BIT                                     (0x00000800)

#define RF_CW720_TX_LO_LDO15_CORE_EN_M_LSB                                      (10)
#define RF_CW720_TX_LO_LDO15_CORE_EN_M_WIDTH                                    (1)
#define RF_CW720_TX_LO_LDO15_CORE_EN_M_MASK                                     (0x00000400)
#define RF_CW720_TX_LO_LDO15_CORE_EN_M_BIT                                      (0x00000400)

#define RF_CW720_TX_LO_LDO15_OUT_EN_M_LSB                                       (9)
#define RF_CW720_TX_LO_LDO15_OUT_EN_M_WIDTH                                     (1)
#define RF_CW720_TX_LO_LDO15_OUT_EN_M_MASK                                      (0x00000200)
#define RF_CW720_TX_LO_LDO15_OUT_EN_M_BIT                                       (0x00000200)

#define RF_CW720_TX_LO_DCOBUF_LDO15_OUT_EN_M_LSB                                (8)
#define RF_CW720_TX_LO_DCOBUF_LDO15_OUT_EN_M_WIDTH                              (1)
#define RF_CW720_TX_LO_DCOBUF_LDO15_OUT_EN_M_MASK                               (0x00000100)
#define RF_CW720_TX_LO_DCOBUF_LDO15_OUT_EN_M_BIT                                (0x00000100)

#define RF_CW720_TX_LO_LDO11_CORE_EN_M_LSB                                      (7)
#define RF_CW720_TX_LO_LDO11_CORE_EN_M_WIDTH                                    (1)
#define RF_CW720_TX_LO_LDO11_CORE_EN_M_MASK                                     (0x00000080)
#define RF_CW720_TX_LO_LDO11_CORE_EN_M_BIT                                      (0x00000080)

#define RF_CW720_TX_LO_DCOBUF_LDO11_OUT_EN_M_LSB                                (6)
#define RF_CW720_TX_LO_DCOBUF_LDO11_OUT_EN_M_WIDTH                              (1)
#define RF_CW720_TX_LO_DCOBUF_LDO11_OUT_EN_M_MASK                               (0x00000040)
#define RF_CW720_TX_LO_DCOBUF_LDO11_OUT_EN_M_BIT                                (0x00000040)

#define RF_CW720_TX_ABB_LDO15_CORE_EN_M_LSB                                     (5)
#define RF_CW720_TX_ABB_LDO15_CORE_EN_M_WIDTH                                   (1)
#define RF_CW720_TX_ABB_LDO15_CORE_EN_M_MASK                                    (0x00000020)
#define RF_CW720_TX_ABB_LDO15_CORE_EN_M_BIT                                     (0x00000020)

#define RF_CW720_TX_ABB_LDO15_OUT_EN_M_LSB                                      (4)
#define RF_CW720_TX_ABB_LDO15_OUT_EN_M_WIDTH                                    (1)
#define RF_CW720_TX_ABB_LDO15_OUT_EN_M_MASK                                     (0x00000010)
#define RF_CW720_TX_ABB_LDO15_OUT_EN_M_BIT                                      (0x00000010)

#define RF_CW720_TX_DET_LDO15_CORE_EN_M_LSB                                     (3)
#define RF_CW720_TX_DET_LDO15_CORE_EN_M_WIDTH                                   (1)
#define RF_CW720_TX_DET_LDO15_CORE_EN_M_MASK                                    (0x00000008)
#define RF_CW720_TX_DET_LDO15_CORE_EN_M_BIT                                     (0x00000008)

#define RF_CW720_TX_DET_LDO15_OUT_EN_M_LSB                                      (2)
#define RF_CW720_TX_DET_LDO15_OUT_EN_M_WIDTH                                    (1)
#define RF_CW720_TX_DET_LDO15_OUT_EN_M_MASK                                     (0x00000004)
#define RF_CW720_TX_DET_LDO15_OUT_EN_M_BIT                                      (0x00000004)

#define RF_CW720_TX_BIAS_MAN_LSB                                                (1)
#define RF_CW720_TX_BIAS_MAN_WIDTH                                              (1)
#define RF_CW720_TX_BIAS_MAN_MASK                                               (0x00000002)
#define RF_CW720_TX_BIAS_MAN_BIT                                                (0x00000002)

#define RF_CW720_TX_BIAS_EN_M_LSB                                               (0)
#define RF_CW720_TX_BIAS_EN_M_WIDTH                                             (1)
#define RF_CW720_TX_BIAS_EN_M_MASK                                              (0x00000001)
#define RF_CW720_TX_BIAS_EN_M_BIT                                               (0x00000001)

#define RF_CW721_TX_MOD_MAN_LSB                                                 (16)
#define RF_CW721_TX_MOD_MAN_WIDTH                                               (1)
#define RF_CW721_TX_MOD_MAN_MASK                                                (0x00010000)
#define RF_CW721_TX_MOD_MAN_BIT                                                 (0x00010000)

#define RF_CW721_TX_HB_MOD_AVBB_EN_M_LSB                                        (15)
#define RF_CW721_TX_HB_MOD_AVBB_EN_M_WIDTH                                      (1)
#define RF_CW721_TX_HB_MOD_AVBB_EN_M_MASK                                       (0x00008000)
#define RF_CW721_TX_HB_MOD_AVBB_EN_M_BIT                                        (0x00008000)

#define RF_CW721_TX_MB_MOD_AVBB_EN_M_LSB                                        (14)
#define RF_CW721_TX_MB_MOD_AVBB_EN_M_WIDTH                                      (1)
#define RF_CW721_TX_MB_MOD_AVBB_EN_M_MASK                                       (0x00004000)
#define RF_CW721_TX_MB_MOD_AVBB_EN_M_BIT                                        (0x00004000)

#define RF_CW721_TX_LB_MOD_AVBB_EN_M_LSB                                        (13)
#define RF_CW721_TX_LB_MOD_AVBB_EN_M_WIDTH                                      (1)
#define RF_CW721_TX_LB_MOD_AVBB_EN_M_MASK                                       (0x00002000)
#define RF_CW721_TX_LB_MOD_AVBB_EN_M_BIT                                        (0x00002000)

#define RF_CW721_TX_HB_MOD_BIAS_EN_M_LSB                                        (12)
#define RF_CW721_TX_HB_MOD_BIAS_EN_M_WIDTH                                      (1)
#define RF_CW721_TX_HB_MOD_BIAS_EN_M_MASK                                       (0x00001000)
#define RF_CW721_TX_HB_MOD_BIAS_EN_M_BIT                                        (0x00001000)

#define RF_CW721_TX_MB_MOD_BIAS_EN_M_LSB                                        (11)
#define RF_CW721_TX_MB_MOD_BIAS_EN_M_WIDTH                                      (1)
#define RF_CW721_TX_MB_MOD_BIAS_EN_M_MASK                                       (0x00000800)
#define RF_CW721_TX_MB_MOD_BIAS_EN_M_BIT                                        (0x00000800)

#define RF_CW721_TX_LB_MOD_BIAS_EN_M_LSB                                        (10)
#define RF_CW721_TX_LB_MOD_BIAS_EN_M_WIDTH                                      (1)
#define RF_CW721_TX_LB_MOD_BIAS_EN_M_MASK                                       (0x00000400)
#define RF_CW721_TX_LB_MOD_BIAS_EN_M_BIT                                        (0x00000400)

#define RF_CW721_TX_RFFE_MAN_LSB                                                (9)
#define RF_CW721_TX_RFFE_MAN_WIDTH                                              (1)
#define RF_CW721_TX_RFFE_MAN_MASK                                               (0x00000200)
#define RF_CW721_TX_RFFE_MAN_BIT                                                (0x00000200)

#define RF_CW721_TX_HB_RFFE_EN_M_LSB                                            (8)
#define RF_CW721_TX_HB_RFFE_EN_M_WIDTH                                          (1)
#define RF_CW721_TX_HB_RFFE_EN_M_MASK                                           (0x00000100)
#define RF_CW721_TX_HB_RFFE_EN_M_BIT                                            (0x00000100)

#define RF_CW721_TX_MB_RFFE_EN_M_LSB                                            (7)
#define RF_CW721_TX_MB_RFFE_EN_M_WIDTH                                          (1)
#define RF_CW721_TX_MB_RFFE_EN_M_MASK                                           (0x00000080)
#define RF_CW721_TX_MB_RFFE_EN_M_BIT                                            (0x00000080)

#define RF_CW721_TX_LB_RFFE_EN_M_LSB                                            (6)
#define RF_CW721_TX_LB_RFFE_EN_M_WIDTH                                          (1)
#define RF_CW721_TX_LB_RFFE_EN_M_MASK                                           (0x00000040)
#define RF_CW721_TX_LB_RFFE_EN_M_BIT                                            (0x00000040)

#define RF_CW722_TX_LO_MAN_LSB                                                  (19)
#define RF_CW722_TX_LO_MAN_WIDTH                                                (1)
#define RF_CW722_TX_LO_MAN_MASK                                                 (0x00080000)
#define RF_CW722_TX_LO_MAN_BIT                                                  (0x00080000)

#define RF_CW722_TX_LOBUF_MAN_LSB                                               (17)
#define RF_CW722_TX_LOBUF_MAN_WIDTH                                             (1)
#define RF_CW722_TX_LOBUF_MAN_MASK                                              (0x00020000)
#define RF_CW722_TX_LOBUF_MAN_BIT                                               (0x00020000)

#define RF_CW722_TX_DCO_SEL_HL_MAN_LSB                                          (16)
#define RF_CW722_TX_DCO_SEL_HL_MAN_WIDTH                                        (1)
#define RF_CW722_TX_DCO_SEL_HL_MAN_MASK                                         (0x00010000)
#define RF_CW722_TX_DCO_SEL_HL_MAN_BIT                                          (0x00010000)

#define RF_CW722_TX_DCO_SEL_HL_M_LSB                                            (15)
#define RF_CW722_TX_DCO_SEL_HL_M_WIDTH                                          (1)
#define RF_CW722_TX_DCO_SEL_HL_M_MASK                                           (0x00008000)
#define RF_CW722_TX_DCO_SEL_HL_M_BIT                                            (0x00008000)

#define RF_CW722_TX_LO_LBGMSK_EN_M_LSB                                          (14)
#define RF_CW722_TX_LO_LBGMSK_EN_M_WIDTH                                        (1)
#define RF_CW722_TX_LO_LBGMSK_EN_M_MASK                                         (0x00004000)
#define RF_CW722_TX_LO_LBGMSK_EN_M_BIT                                          (0x00004000)

#define RF_CW722_TX_LO_MBGMSK_EN_M_LSB                                          (13)
#define RF_CW722_TX_LO_MBGMSK_EN_M_WIDTH                                        (1)
#define RF_CW722_TX_LO_MBGMSK_EN_M_MASK                                         (0x00002000)
#define RF_CW722_TX_LO_MBGMSK_EN_M_BIT                                          (0x00002000)

#define RF_CW722_TX_RFFE_LBGMSK_EN_M_LSB                                        (12)
#define RF_CW722_TX_RFFE_LBGMSK_EN_M_WIDTH                                      (1)
#define RF_CW722_TX_RFFE_LBGMSK_EN_M_MASK                                       (0x00001000)
#define RF_CW722_TX_RFFE_LBGMSK_EN_M_BIT                                        (0x00001000)

#define RF_CW722_TX_RFFE_MBGMSK_EN_M_LSB                                        (11)
#define RF_CW722_TX_RFFE_MBGMSK_EN_M_WIDTH                                      (1)
#define RF_CW722_TX_RFFE_MBGMSK_EN_M_MASK                                       (0x00000800)
#define RF_CW722_TX_RFFE_MBGMSK_EN_M_BIT                                        (0x00000800)

#define RF_CW722_TX_LO_FE_HDIV2_LB_EN_M_LSB                                     (10)
#define RF_CW722_TX_LO_FE_HDIV2_LB_EN_M_WIDTH                                   (1)
#define RF_CW722_TX_LO_FE_HDIV2_LB_EN_M_MASK                                    (0x00000400)
#define RF_CW722_TX_LO_FE_HDIV2_LB_EN_M_BIT                                     (0x00000400)

#define RF_CW722_TX_LO_FE_HBUF_LB_EN_M_LSB                                      (9)
#define RF_CW722_TX_LO_FE_HBUF_LB_EN_M_WIDTH                                    (1)
#define RF_CW722_TX_LO_FE_HBUF_LB_EN_M_MASK                                     (0x00000200)
#define RF_CW722_TX_LO_FE_HBUF_LB_EN_M_BIT                                      (0x00000200)

#define RF_CW722_TX_LO_FE_HDIV2_MB_EN_M_LSB                                     (8)
#define RF_CW722_TX_LO_FE_HDIV2_MB_EN_M_WIDTH                                   (1)
#define RF_CW722_TX_LO_FE_HDIV2_MB_EN_M_MASK                                    (0x00000100)
#define RF_CW722_TX_LO_FE_HDIV2_MB_EN_M_BIT                                     (0x00000100)

#define RF_CW722_TX_LO_FE_LDIV2_LB_EN_M_LSB                                     (7)
#define RF_CW722_TX_LO_FE_LDIV2_LB_EN_M_WIDTH                                   (1)
#define RF_CW722_TX_LO_FE_LDIV2_LB_EN_M_MASK                                    (0x00000080)
#define RF_CW722_TX_LO_FE_LDIV2_LB_EN_M_BIT                                     (0x00000080)

#define RF_CW722_TX_LO_FE_LBUF_LB_EN_M_LSB                                      (6)
#define RF_CW722_TX_LO_FE_LBUF_LB_EN_M_WIDTH                                    (1)
#define RF_CW722_TX_LO_FE_LBUF_LB_EN_M_MASK                                     (0x00000040)
#define RF_CW722_TX_LO_FE_LBUF_LB_EN_M_BIT                                      (0x00000040)

#define RF_CW722_TX_LO_FE_LDIV2_MB_EN_M_LSB                                     (5)
#define RF_CW722_TX_LO_FE_LDIV2_MB_EN_M_WIDTH                                   (1)
#define RF_CW722_TX_LO_FE_LDIV2_MB_EN_M_MASK                                    (0x00000020)
#define RF_CW722_TX_LO_FE_LDIV2_MB_EN_M_BIT                                     (0x00000020)

#define RF_CW722_TX_LO_FE_LBUF_HB_EN_M_LSB                                      (4)
#define RF_CW722_TX_LO_FE_LBUF_HB_EN_M_WIDTH                                    (1)
#define RF_CW722_TX_LO_FE_LBUF_HB_EN_M_MASK                                     (0x00000010)
#define RF_CW722_TX_LO_FE_LBUF_HB_EN_M_BIT                                      (0x00000010)

#define RF_CW722_TX_LO_TDD_DIV2_LB_EN_M_LSB                                     (3)
#define RF_CW722_TX_LO_TDD_DIV2_LB_EN_M_WIDTH                                   (1)
#define RF_CW722_TX_LO_TDD_DIV2_LB_EN_M_MASK                                    (0x00000008)
#define RF_CW722_TX_LO_TDD_DIV2_LB_EN_M_BIT                                     (0x00000008)

#define RF_CW722_TX_LO_TDD_BUF_LB_EN_M_LSB                                      (2)
#define RF_CW722_TX_LO_TDD_BUF_LB_EN_M_WIDTH                                    (1)
#define RF_CW722_TX_LO_TDD_BUF_LB_EN_M_MASK                                     (0x00000004)
#define RF_CW722_TX_LO_TDD_BUF_LB_EN_M_BIT                                      (0x00000004)

#define RF_CW722_TX_LO_TDD_BUF_MB_EN_M_LSB                                      (1)
#define RF_CW722_TX_LO_TDD_BUF_MB_EN_M_WIDTH                                    (1)
#define RF_CW722_TX_LO_TDD_BUF_MB_EN_M_MASK                                     (0x00000002)
#define RF_CW722_TX_LO_TDD_BUF_MB_EN_M_BIT                                      (0x00000002)

#define RF_CW722_TX_LO_TDD_BUF_HB_EN_M_LSB                                      (0)
#define RF_CW722_TX_LO_TDD_BUF_HB_EN_M_WIDTH                                    (1)
#define RF_CW722_TX_LO_TDD_BUF_HB_EN_M_MASK                                     (0x00000001)
#define RF_CW722_TX_LO_TDD_BUF_HB_EN_M_BIT                                      (0x00000001)

#define RF_CW723_TX_LO_DIV2_EN_M_LSB                                            (19)
#define RF_CW723_TX_LO_DIV2_EN_M_WIDTH                                          (1)
#define RF_CW723_TX_LO_DIV2_EN_M_MASK                                           (0x00080000)
#define RF_CW723_TX_LO_DIV2_EN_M_BIT                                            (0x00080000)

#define RF_CW723_TX_LO_FE_2GDIV2_LB_EN_M_LSB                                    (18)
#define RF_CW723_TX_LO_FE_2GDIV2_LB_EN_M_WIDTH                                  (1)
#define RF_CW723_TX_LO_FE_2GDIV2_LB_EN_M_MASK                                   (0x00040000)
#define RF_CW723_TX_LO_FE_2GDIV2_LB_EN_M_BIT                                    (0x00040000)

#define RF_CW723_TX_LO_FE_2GDIV2_MB_EN_M_LSB                                    (17)
#define RF_CW723_TX_LO_FE_2GDIV2_MB_EN_M_WIDTH                                  (1)
#define RF_CW723_TX_LO_FE_2GDIV2_MB_EN_M_MASK                                   (0x00020000)
#define RF_CW723_TX_LO_FE_2GDIV2_MB_EN_M_BIT                                    (0x00020000)

#define RF_CW723_TX_LO_LB_DIV2_EN_MAN_LSB                                       (16)
#define RF_CW723_TX_LO_LB_DIV2_EN_MAN_WIDTH                                     (1)
#define RF_CW723_TX_LO_LB_DIV2_EN_MAN_MASK                                      (0x00010000)
#define RF_CW723_TX_LO_LB_DIV2_EN_MAN_BIT                                       (0x00010000)

#define RF_CW723_TX_LO_LB_DIV2_EN_M_LSB                                         (15)
#define RF_CW723_TX_LO_LB_DIV2_EN_M_WIDTH                                       (1)
#define RF_CW723_TX_LO_LB_DIV2_EN_M_MASK                                        (0x00008000)
#define RF_CW723_TX_LO_LB_DIV2_EN_M_BIT                                         (0x00008000)

#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_MANUAL_LSB                             (14)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_MANUAL_WIDTH                           (1)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_MANUAL_MASK                            (0x00004000)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_MANUAL_BIT                             (0x00004000)

#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_LTETDD_LSB                             (13)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_LTETDD_WIDTH                           (1)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_LTETDD_MASK                            (0x00002000)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_LTETDD_BIT                             (0x00002000)

#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_LTEFDD_LSB                             (12)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_LTEFDD_WIDTH                           (1)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_LTEFDD_MASK                            (0x00001000)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_LTEFDD_BIT                             (0x00001000)

#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_C2K_LSB                                (11)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_C2K_WIDTH                              (1)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_C2K_MASK                               (0x00000800)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_C2K_BIT                                (0x00000800)

#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_TDSCDMA_LSB                            (10)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_TDSCDMA_WIDTH                          (1)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_TDSCDMA_MASK                           (0x00000400)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_TDSCDMA_BIT                            (0x00000400)

#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_WCDMA_LSB                              (9)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_WCDMA_WIDTH                            (1)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_WCDMA_MASK                             (0x00000200)
#define RF_CW723_TX_LO_DCOBUF_LDO_SEL_EN_WCDMA_BIT                              (0x00000200)

#define RF_CW723_TX_LO_GMSK_IPATH_EN_LSB                                        (1)
#define RF_CW723_TX_LO_GMSK_IPATH_EN_WIDTH                                      (1)
#define RF_CW723_TX_LO_GMSK_IPATH_EN_MASK                                       (0x00000002)
#define RF_CW723_TX_LO_GMSK_IPATH_EN_BIT                                        (0x00000002)

#define RF_CW723_TX_LO_GMSK_QPATH_EN_LSB                                        (0)
#define RF_CW723_TX_LO_GMSK_QPATH_EN_WIDTH                                      (1)
#define RF_CW723_TX_LO_GMSK_QPATH_EN_MASK                                       (0x00000001)
#define RF_CW723_TX_LO_GMSK_QPATH_EN_BIT                                        (0x00000001)

#define RF_CW725_T_TX_CAL_TX_EN_LSB                                             (10)
#define RF_CW725_T_TX_CAL_TX_EN_WIDTH                                           (10)
#define RF_CW725_T_TX_CAL_TX_EN_MASK                                            (0x000FFC00)

#define RF_CW725_T_TX_CAL_TXLDO_EN_LSB                                          (0)
#define RF_CW725_T_TX_CAL_TXLDO_EN_WIDTH                                        (10)
#define RF_CW725_T_TX_CAL_TXLDO_EN_MASK                                         (0x000003FF)

#define RF_CW726_T_TX_CAL_LO_EN_LSB                                             (10)
#define RF_CW726_T_TX_CAL_LO_EN_WIDTH                                           (10)
#define RF_CW726_T_TX_CAL_LO_EN_MASK                                            (0x000FFC00)

#define RF_CW726_T_TX_CAL_LOLDO_EN_LSB                                          (0)
#define RF_CW726_T_TX_CAL_LOLDO_EN_WIDTH                                        (10)
#define RF_CW726_T_TX_CAL_LOLDO_EN_MASK                                         (0x000003FF)

#define RF_CW727_T_TX_CAL_DET_EN_LSB                                            (10)
#define RF_CW727_T_TX_CAL_DET_EN_WIDTH                                          (10)
#define RF_CW727_T_TX_CAL_DET_EN_MASK                                           (0x000FFC00)

#define RF_CW727_T_TX_CAL_DETLDO_EN_LSB                                         (0)
#define RF_CW727_T_TX_CAL_DETLDO_EN_WIDTH                                       (10)
#define RF_CW727_T_TX_CAL_DETLDO_EN_MASK                                        (0x000003FF)

#define RF_CW728_T_TX_CAL_LOCAL_EN_LSB                                          (10)
#define RF_CW728_T_TX_CAL_LOCAL_EN_WIDTH                                        (10)
#define RF_CW728_T_TX_CAL_LOCAL_EN_MASK                                         (0x000FFC00)

#define RF_CW728_T_TX_CAL_LOCAL_START_LSB                                       (0)
#define RF_CW728_T_TX_CAL_LOCAL_START_WIDTH                                     (10)
#define RF_CW728_T_TX_CAL_LOCAL_START_MASK                                      (0x000003FF)

#define RF_CW730_T_TX_BURST_TX_EN_LSB                                           (10)
#define RF_CW730_T_TX_BURST_TX_EN_WIDTH                                         (10)
#define RF_CW730_T_TX_BURST_TX_EN_MASK                                          (0x000FFC00)

#define RF_CW730_T_TX_BURST_LO_EN_LSB                                           (0)
#define RF_CW730_T_TX_BURST_LO_EN_WIDTH                                         (10)
#define RF_CW730_T_TX_BURST_LO_EN_MASK                                          (0x000003FF)

#define RF_CW731_T_TX_WARM_TXLDO_EN_LSB                                         (10)
#define RF_CW731_T_TX_WARM_TXLDO_EN_WIDTH                                       (10)
#define RF_CW731_T_TX_WARM_TXLDO_EN_MASK                                        (0x000FFC00)

#define RF_CW731_T_TX_WARM_LOLDO_EN_LSB                                         (0)
#define RF_CW731_T_TX_WARM_LOLDO_EN_WIDTH                                       (10)
#define RF_CW731_T_TX_WARM_LOLDO_EN_MASK                                        (0x000003FF)

#define RF_CW732_T_TX_DET_CDCOC_START_LSB                                       (10)
#define RF_CW732_T_TX_DET_CDCOC_START_WIDTH                                     (10)
#define RF_CW732_T_TX_DET_CDCOC_START_MASK                                      (0x000FFC00)

#define RF_CW732_T_TX_WARM_DETLDO_EN_LSB                                        (0)
#define RF_CW732_T_TX_WARM_DETLDO_EN_WIDTH                                      (10)
#define RF_CW732_T_TX_WARM_DETLDO_EN_MASK                                       (0x000003FF)

#define RF_CW733_T_TX_SLEEP_TX_OFF_LSB                                          (10)
#define RF_CW733_T_TX_SLEEP_TX_OFF_WIDTH                                        (10)
#define RF_CW733_T_TX_SLEEP_TX_OFF_MASK                                         (0x000FFC00)

#define RF_CW733_T_TX_SLEEP_LO_OFF_LSB                                          (0)
#define RF_CW733_T_TX_SLEEP_LO_OFF_WIDTH                                        (10)
#define RF_CW733_T_TX_SLEEP_LO_OFF_MASK                                         (0x000003FF)

#define RF_CW735_T_TX_CAL_TX_EN_M_LSB                                           (13)
#define RF_CW735_T_TX_CAL_TX_EN_M_WIDTH                                         (1)
#define RF_CW735_T_TX_CAL_TX_EN_M_MASK                                          (0x00002000)
#define RF_CW735_T_TX_CAL_TX_EN_M_BIT                                           (0x00002000)

#define RF_CW735_T_TX_CAL_TXLDO_EN_M_LSB                                        (12)
#define RF_CW735_T_TX_CAL_TXLDO_EN_M_WIDTH                                      (1)
#define RF_CW735_T_TX_CAL_TXLDO_EN_M_MASK                                       (0x00001000)
#define RF_CW735_T_TX_CAL_TXLDO_EN_M_BIT                                        (0x00001000)

#define RF_CW735_T_TX_CAL_LO_EN_M_LSB                                           (11)
#define RF_CW735_T_TX_CAL_LO_EN_M_WIDTH                                         (1)
#define RF_CW735_T_TX_CAL_LO_EN_M_MASK                                          (0x00000800)
#define RF_CW735_T_TX_CAL_LO_EN_M_BIT                                           (0x00000800)

#define RF_CW735_T_TX_CAL_LOLDO_EN_M_LSB                                        (10)
#define RF_CW735_T_TX_CAL_LOLDO_EN_M_WIDTH                                      (1)
#define RF_CW735_T_TX_CAL_LOLDO_EN_M_MASK                                       (0x00000400)
#define RF_CW735_T_TX_CAL_LOLDO_EN_M_BIT                                        (0x00000400)

#define RF_CW735_T_TX_CAL_DET_EN_M_LSB                                          (9)
#define RF_CW735_T_TX_CAL_DET_EN_M_WIDTH                                        (1)
#define RF_CW735_T_TX_CAL_DET_EN_M_MASK                                         (0x00000200)
#define RF_CW735_T_TX_CAL_DET_EN_M_BIT                                          (0x00000200)

#define RF_CW735_T_TX_CAL_DETLDO_EN_M_LSB                                       (8)
#define RF_CW735_T_TX_CAL_DETLDO_EN_M_WIDTH                                     (1)
#define RF_CW735_T_TX_CAL_DETLDO_EN_M_MASK                                      (0x00000100)
#define RF_CW735_T_TX_CAL_DETLDO_EN_M_BIT                                       (0x00000100)

#define RF_CW735_T_TX_CAL_LOCAL_EN_M_LSB                                        (7)
#define RF_CW735_T_TX_CAL_LOCAL_EN_M_WIDTH                                      (1)
#define RF_CW735_T_TX_CAL_LOCAL_EN_M_MASK                                       (0x00000080)
#define RF_CW735_T_TX_CAL_LOCAL_EN_M_BIT                                        (0x00000080)

#define RF_CW735_T_TX_CAL_LOCAL_START_M_LSB                                     (6)
#define RF_CW735_T_TX_CAL_LOCAL_START_M_WIDTH                                   (1)
#define RF_CW735_T_TX_CAL_LOCAL_START_M_MASK                                    (0x00000040)
#define RF_CW735_T_TX_CAL_LOCAL_START_M_BIT                                     (0x00000040)

#define RF_CW735_T_TX_BURST_TX_EN_M_LSB                                         (5)
#define RF_CW735_T_TX_BURST_TX_EN_M_WIDTH                                       (1)
#define RF_CW735_T_TX_BURST_TX_EN_M_MASK                                        (0x00000020)
#define RF_CW735_T_TX_BURST_TX_EN_M_BIT                                         (0x00000020)

#define RF_CW735_T_TX_BURST_LO_EN_M_LSB                                         (4)
#define RF_CW735_T_TX_BURST_LO_EN_M_WIDTH                                       (1)
#define RF_CW735_T_TX_BURST_LO_EN_M_MASK                                        (0x00000010)
#define RF_CW735_T_TX_BURST_LO_EN_M_BIT                                         (0x00000010)

#define RF_CW735_T_TX_WARM_TXLDO_EN_M_LSB                                       (3)
#define RF_CW735_T_TX_WARM_TXLDO_EN_M_WIDTH                                     (1)
#define RF_CW735_T_TX_WARM_TXLDO_EN_M_MASK                                      (0x00000008)
#define RF_CW735_T_TX_WARM_TXLDO_EN_M_BIT                                       (0x00000008)

#define RF_CW735_T_TX_WARM_LOLDO_EN_M_LSB                                       (2)
#define RF_CW735_T_TX_WARM_LOLDO_EN_M_WIDTH                                     (1)
#define RF_CW735_T_TX_WARM_LOLDO_EN_M_MASK                                      (0x00000004)
#define RF_CW735_T_TX_WARM_LOLDO_EN_M_BIT                                       (0x00000004)

#define RF_CW735_T_TX_DET_CDCOC_START_M_LSB                                     (1)
#define RF_CW735_T_TX_DET_CDCOC_START_M_WIDTH                                   (1)
#define RF_CW735_T_TX_DET_CDCOC_START_M_MASK                                    (0x00000002)
#define RF_CW735_T_TX_DET_CDCOC_START_M_BIT                                     (0x00000002)

#define RF_CW735_T_TX_WARM_DETLDO_EN_M_LSB                                      (0)
#define RF_CW735_T_TX_WARM_DETLDO_EN_M_WIDTH                                    (1)
#define RF_CW735_T_TX_WARM_DETLDO_EN_M_MASK                                     (0x00000001)
#define RF_CW735_T_TX_WARM_DETLDO_EN_M_BIT                                      (0x00000001)

#define RF_CW736_ABB_ON_DEL_LSB                                                 (15)
#define RF_CW736_ABB_ON_DEL_WIDTH                                               (5)
#define RF_CW736_ABB_ON_DEL_MASK                                                (0x000F8000)

#define RF_CW736_ABB_OFF_DEL_LSB                                                (10)
#define RF_CW736_ABB_OFF_DEL_WIDTH                                              (5)
#define RF_CW736_ABB_OFF_DEL_MASK                                               (0x00007C00)

#define RF_CW736_RCF_ON_DEL_LSB                                                 (5)
#define RF_CW736_RCF_ON_DEL_WIDTH                                               (5)
#define RF_CW736_RCF_ON_DEL_MASK                                                (0x000003E0)

#define RF_CW736_RCF_OFF_DEL_LSB                                                (0)
#define RF_CW736_RCF_OFF_DEL_WIDTH                                              (5)
#define RF_CW736_RCF_OFF_DEL_MASK                                               (0x0000001F)

#define RF_CW737_MODDRV_ON_DEL_LSB                                              (15)
#define RF_CW737_MODDRV_ON_DEL_WIDTH                                            (5)
#define RF_CW737_MODDRV_ON_DEL_MASK                                             (0x000F8000)

#define RF_CW737_MODDRV_OFF_DEL_LSB                                             (10)
#define RF_CW737_MODDRV_OFF_DEL_WIDTH                                           (5)
#define RF_CW737_MODDRV_OFF_DEL_MASK                                            (0x00007C00)

#define RF_CW737_BIAS_OFF_DEL_LSB                                               (0)
#define RF_CW737_BIAS_OFF_DEL_WIDTH                                             (5)
#define RF_CW737_BIAS_OFF_DEL_MASK                                              (0x0000001F)

#define RF_CW738_ABB_ON_DEL_M_LSB                                               (6)
#define RF_CW738_ABB_ON_DEL_M_WIDTH                                             (1)
#define RF_CW738_ABB_ON_DEL_M_MASK                                              (0x00000040)
#define RF_CW738_ABB_ON_DEL_M_BIT                                               (0x00000040)

#define RF_CW738_ABB_OFF_DEL_M_LSB                                              (5)
#define RF_CW738_ABB_OFF_DEL_M_WIDTH                                            (1)
#define RF_CW738_ABB_OFF_DEL_M_MASK                                             (0x00000020)
#define RF_CW738_ABB_OFF_DEL_M_BIT                                              (0x00000020)

#define RF_CW738_RCF_ON_DEL_M_LSB                                               (4)
#define RF_CW738_RCF_ON_DEL_M_WIDTH                                             (1)
#define RF_CW738_RCF_ON_DEL_M_MASK                                              (0x00000010)
#define RF_CW738_RCF_ON_DEL_M_BIT                                               (0x00000010)

#define RF_CW738_RCF_OFF_DEL_M_LSB                                              (3)
#define RF_CW738_RCF_OFF_DEL_M_WIDTH                                            (1)
#define RF_CW738_RCF_OFF_DEL_M_MASK                                             (0x00000008)
#define RF_CW738_RCF_OFF_DEL_M_BIT                                              (0x00000008)

#define RF_CW738_MODDRV_ON_DEL_M_LSB                                            (2)
#define RF_CW738_MODDRV_ON_DEL_M_WIDTH                                          (1)
#define RF_CW738_MODDRV_ON_DEL_M_MASK                                           (0x00000004)
#define RF_CW738_MODDRV_ON_DEL_M_BIT                                            (0x00000004)

#define RF_CW738_MODDRV_OFF_DEL_M_LSB                                           (1)
#define RF_CW738_MODDRV_OFF_DEL_M_WIDTH                                         (1)
#define RF_CW738_MODDRV_OFF_DEL_M_MASK                                          (0x00000002)
#define RF_CW738_MODDRV_OFF_DEL_M_BIT                                           (0x00000002)

#define RF_CW738_BIAS_OFF_DEL_M_LSB                                             (0)
#define RF_CW738_BIAS_OFF_DEL_M_WIDTH                                           (1)
#define RF_CW738_BIAS_OFF_DEL_M_MASK                                            (0x00000001)
#define RF_CW738_BIAS_OFF_DEL_M_BIT                                             (0x00000001)

#define RF_CW740_TX_DET_ON_DLY_WCDMA_T2_LSB                                     (10)
#define RF_CW740_TX_DET_ON_DLY_WCDMA_T2_WIDTH                                   (10)
#define RF_CW740_TX_DET_ON_DLY_WCDMA_T2_MASK                                    (0x000FFC00)

#define RF_CW740_TX_DET_ON_DLY_WCDMA_T1_LSB                                     (0)
#define RF_CW740_TX_DET_ON_DLY_WCDMA_T1_WIDTH                                   (10)
#define RF_CW740_TX_DET_ON_DLY_WCDMA_T1_MASK                                    (0x000003FF)

#define RF_CW741_TX_DET_ON_DLY_WCDMA_T4_LSB                                     (10)
#define RF_CW741_TX_DET_ON_DLY_WCDMA_T4_WIDTH                                   (10)
#define RF_CW741_TX_DET_ON_DLY_WCDMA_T4_MASK                                    (0x000FFC00)

#define RF_CW741_TX_DET_ON_DLY_WCDMA_T3_LSB                                     (0)
#define RF_CW741_TX_DET_ON_DLY_WCDMA_T3_WIDTH                                   (10)
#define RF_CW741_TX_DET_ON_DLY_WCDMA_T3_MASK                                    (0x000003FF)

#define RF_CW742_TX_DET_ON_DLY_WCDMA_T5_LSB                                     (0)
#define RF_CW742_TX_DET_ON_DLY_WCDMA_T5_WIDTH                                   (10)
#define RF_CW742_TX_DET_ON_DLY_WCDMA_T5_MASK                                    (0x000003FF)

#define RF_CW743_TX_DET_ON_DLY_GGE_T4_LSB                                       (10)
#define RF_CW743_TX_DET_ON_DLY_GGE_T4_WIDTH                                     (10)
#define RF_CW743_TX_DET_ON_DLY_GGE_T4_MASK                                      (0x000FFC00)

#define RF_CW743_TX_DET_ON_DLY_GGE_T1_LSB                                       (0)
#define RF_CW743_TX_DET_ON_DLY_GGE_T1_WIDTH                                     (10)
#define RF_CW743_TX_DET_ON_DLY_GGE_T1_MASK                                      (0x000003FF)

#define RF_CW744_TX_DET_ON_DLY_GGE_T5_LSB                                       (0)
#define RF_CW744_TX_DET_ON_DLY_GGE_T5_WIDTH                                     (10)
#define RF_CW744_TX_DET_ON_DLY_GGE_T5_MASK                                      (0x000003FF)

#define RF_CW745_TX_DET_ON_DLY_TDSCDMA_T4_LSB                                   (10)
#define RF_CW745_TX_DET_ON_DLY_TDSCDMA_T4_WIDTH                                 (10)
#define RF_CW745_TX_DET_ON_DLY_TDSCDMA_T4_MASK                                  (0x000FFC00)

#define RF_CW745_TX_DET_ON_DLY_TDSCDMA_T1_LSB                                   (0)
#define RF_CW745_TX_DET_ON_DLY_TDSCDMA_T1_WIDTH                                 (10)
#define RF_CW745_TX_DET_ON_DLY_TDSCDMA_T1_MASK                                  (0x000003FF)

#define RF_CW746_TX_DET_ON_DLY_TDSCDMA_T5_LSB                                   (0)
#define RF_CW746_TX_DET_ON_DLY_TDSCDMA_T5_WIDTH                                 (10)
#define RF_CW746_TX_DET_ON_DLY_TDSCDMA_T5_MASK                                  (0x000003FF)

#define RF_CW747_TX_DET_ON_DLY_LTE_T1_LSB                                       (0)
#define RF_CW747_TX_DET_ON_DLY_LTE_T1_WIDTH                                     (15)
#define RF_CW747_TX_DET_ON_DLY_LTE_T1_MASK                                      (0x00007FFF)

#define RF_CW748_TX_DET_ON_DLY_LTE_T2_LSB                                       (0)
#define RF_CW748_TX_DET_ON_DLY_LTE_T2_WIDTH                                     (15)
#define RF_CW748_TX_DET_ON_DLY_LTE_T2_MASK                                      (0x00007FFF)

#define RF_CW749_TX_DET_ON_DLY_LTE_T3_LSB                                       (0)
#define RF_CW749_TX_DET_ON_DLY_LTE_T3_WIDTH                                     (15)
#define RF_CW749_TX_DET_ON_DLY_LTE_T3_MASK                                      (0x00007FFF)

#define RF_CW750_TX_DET_ON_DLY_LTE_T4_LSB                                       (0)
#define RF_CW750_TX_DET_ON_DLY_LTE_T4_WIDTH                                     (15)
#define RF_CW750_TX_DET_ON_DLY_LTE_T4_MASK                                      (0x00007FFF)

#define RF_CW751_TX_DET_ON_DLY_LTE_T5_LSB                                       (0)
#define RF_CW751_TX_DET_ON_DLY_LTE_T5_WIDTH                                     (15)
#define RF_CW751_TX_DET_ON_DLY_LTE_T5_MASK                                      (0x00007FFF)

#define RF_CW752_TX_DET_ON_DLY_C2K_T1_LSB                                       (0)
#define RF_CW752_TX_DET_ON_DLY_C2K_T1_WIDTH                                     (15)
#define RF_CW752_TX_DET_ON_DLY_C2K_T1_MASK                                      (0x00007FFF)

#define RF_CW753_TX_DET_ON_DLY_C2K_T2_LSB                                       (0)
#define RF_CW753_TX_DET_ON_DLY_C2K_T2_WIDTH                                     (15)
#define RF_CW753_TX_DET_ON_DLY_C2K_T2_MASK                                      (0x00007FFF)

#define RF_CW754_TX_DET_ON_DLY_C2K_T3_LSB                                       (0)
#define RF_CW754_TX_DET_ON_DLY_C2K_T3_WIDTH                                     (15)
#define RF_CW754_TX_DET_ON_DLY_C2K_T3_MASK                                      (0x00007FFF)

#define RF_CW755_TX_DET_ON_DLY_C2K_T4_LSB                                       (0)
#define RF_CW755_TX_DET_ON_DLY_C2K_T4_WIDTH                                     (15)
#define RF_CW755_TX_DET_ON_DLY_C2K_T4_MASK                                      (0x00007FFF)

#define RF_CW756_TX_DET_ON_DLY_C2K_T5_LSB                                       (0)
#define RF_CW756_TX_DET_ON_DLY_C2K_T5_WIDTH                                     (15)
#define RF_CW756_TX_DET_ON_DLY_C2K_T5_MASK                                      (0x00007FFF)

#define RF_CW757_TX_DET_AT_SWITCH_DLY_GGE_LSB                                   (10)
#define RF_CW757_TX_DET_AT_SWITCH_DLY_GGE_WIDTH                                 (10)
#define RF_CW757_TX_DET_AT_SWITCH_DLY_GGE_MASK                                  (0x000FFC00)

#define RF_CW757_TX_DET_AT_SWITCH_DLY_WCDMA_LSB                                 (0)
#define RF_CW757_TX_DET_AT_SWITCH_DLY_WCDMA_WIDTH                               (10)
#define RF_CW757_TX_DET_AT_SWITCH_DLY_WCDMA_MASK                                (0x000003FF)

#define RF_CW758_TX_DET_AT_SWITCH_DLY_TDSCDMA_LSB                               (0)
#define RF_CW758_TX_DET_AT_SWITCH_DLY_TDSCDMA_WIDTH                             (10)
#define RF_CW758_TX_DET_AT_SWITCH_DLY_TDSCDMA_MASK                              (0x000003FF)

#define RF_CW759_TX_DET_AT_SWITCH_DLY_LTE_LSB                                   (0)
#define RF_CW759_TX_DET_AT_SWITCH_DLY_LTE_WIDTH                                 (15)
#define RF_CW759_TX_DET_AT_SWITCH_DLY_LTE_MASK                                  (0x00007FFF)

#define RF_CW760_TX_DET_AT_SWITCH_DLY_C2K_LSB                                   (0)
#define RF_CW760_TX_DET_AT_SWITCH_DLY_C2K_WIDTH                                 (15)
#define RF_CW760_TX_DET_AT_SWITCH_DLY_C2K_MASK                                  (0x00007FFF)

#define RF_CW761_TX_DET_MEAS_DLY_WCDMA_T1_LSB                                   (0)
#define RF_CW761_TX_DET_MEAS_DLY_WCDMA_T1_WIDTH                                 (15)
#define RF_CW761_TX_DET_MEAS_DLY_WCDMA_T1_MASK                                  (0x00007FFF)

#define RF_CW762_TX_DET_MEAS_DLY_WCDMA_T2_LSB                                   (0)
#define RF_CW762_TX_DET_MEAS_DLY_WCDMA_T2_WIDTH                                 (15)
#define RF_CW762_TX_DET_MEAS_DLY_WCDMA_T2_MASK                                  (0x00007FFF)

#define RF_CW763_TX_DET_MEAS_DLY_WCDMA_T3_LSB                                   (0)
#define RF_CW763_TX_DET_MEAS_DLY_WCDMA_T3_WIDTH                                 (15)
#define RF_CW763_TX_DET_MEAS_DLY_WCDMA_T3_MASK                                  (0x00007FFF)

#define RF_CW764_TX_DET_MEAS_DLY_WCDMA_T4_LSB                                   (0)
#define RF_CW764_TX_DET_MEAS_DLY_WCDMA_T4_WIDTH                                 (15)
#define RF_CW764_TX_DET_MEAS_DLY_WCDMA_T4_MASK                                  (0x00007FFF)

#define RF_CW765_TX_DET_MEAS_DLY_WCDMA_T5_LSB                                   (0)
#define RF_CW765_TX_DET_MEAS_DLY_WCDMA_T5_WIDTH                                 (15)
#define RF_CW765_TX_DET_MEAS_DLY_WCDMA_T5_MASK                                  (0x00007FFF)

#define RF_CW766_TX_DET_MEAS_DLY_GGE_T1_LSB                                     (0)
#define RF_CW766_TX_DET_MEAS_DLY_GGE_T1_WIDTH                                   (15)
#define RF_CW766_TX_DET_MEAS_DLY_GGE_T1_MASK                                    (0x00007FFF)

#define RF_CW767_TX_DET_MEAS_DLY_GGE_T4_LSB                                     (0)
#define RF_CW767_TX_DET_MEAS_DLY_GGE_T4_WIDTH                                   (15)
#define RF_CW767_TX_DET_MEAS_DLY_GGE_T4_MASK                                    (0x00007FFF)

#define RF_CW768_TX_DET_MEAS_DLY_GGE_T5_LSB                                     (0)
#define RF_CW768_TX_DET_MEAS_DLY_GGE_T5_WIDTH                                   (15)
#define RF_CW768_TX_DET_MEAS_DLY_GGE_T5_MASK                                    (0x00007FFF)

#define RF_CW769_TX_DET_MEAS_DLY_TDSCDMA_T1_LSB                                 (0)
#define RF_CW769_TX_DET_MEAS_DLY_TDSCDMA_T1_WIDTH                               (15)
#define RF_CW769_TX_DET_MEAS_DLY_TDSCDMA_T1_MASK                                (0x00007FFF)

#define RF_CW770_TX_DET_MEAS_DLY_TDSCDMA_T4_LSB                                 (0)
#define RF_CW770_TX_DET_MEAS_DLY_TDSCDMA_T4_WIDTH                               (15)
#define RF_CW770_TX_DET_MEAS_DLY_TDSCDMA_T4_MASK                                (0x00007FFF)

#define RF_CW771_TX_DET_MEAS_DLY_TDSCDMA_T5_LSB                                 (0)
#define RF_CW771_TX_DET_MEAS_DLY_TDSCDMA_T5_WIDTH                               (15)
#define RF_CW771_TX_DET_MEAS_DLY_TDSCDMA_T5_MASK                                (0x00007FFF)

#define RF_CW772_TX_DET_MEAS_DLY_LTE_T1_LSB                                     (0)
#define RF_CW772_TX_DET_MEAS_DLY_LTE_T1_WIDTH                                   (15)
#define RF_CW772_TX_DET_MEAS_DLY_LTE_T1_MASK                                    (0x00007FFF)

#define RF_CW773_TX_DET_MEAS_DLY_LTE_T2_LSB                                     (0)
#define RF_CW773_TX_DET_MEAS_DLY_LTE_T2_WIDTH                                   (15)
#define RF_CW773_TX_DET_MEAS_DLY_LTE_T2_MASK                                    (0x00007FFF)

#define RF_CW774_TX_DET_MEAS_DLY_LTE_T3_LSB                                     (0)
#define RF_CW774_TX_DET_MEAS_DLY_LTE_T3_WIDTH                                   (15)
#define RF_CW774_TX_DET_MEAS_DLY_LTE_T3_MASK                                    (0x00007FFF)

#define RF_CW775_TX_DET_MEAS_DLY_LTE_T4_LSB                                     (0)
#define RF_CW775_TX_DET_MEAS_DLY_LTE_T4_WIDTH                                   (15)
#define RF_CW775_TX_DET_MEAS_DLY_LTE_T4_MASK                                    (0x00007FFF)

#define RF_CW776_TX_DET_MEAS_DLY_LTE_T5_LSB                                     (0)
#define RF_CW776_TX_DET_MEAS_DLY_LTE_T5_WIDTH                                   (15)
#define RF_CW776_TX_DET_MEAS_DLY_LTE_T5_MASK                                    (0x00007FFF)

#define RF_CW777_TX_DET_MEAS_DLY_C2K_T1_LSB                                     (0)
#define RF_CW777_TX_DET_MEAS_DLY_C2K_T1_WIDTH                                   (15)
#define RF_CW777_TX_DET_MEAS_DLY_C2K_T1_MASK                                    (0x00007FFF)

#define RF_CW778_TX_DET_MEAS_DLY_C2K_T2_LSB                                     (0)
#define RF_CW778_TX_DET_MEAS_DLY_C2K_T2_WIDTH                                   (15)
#define RF_CW778_TX_DET_MEAS_DLY_C2K_T2_MASK                                    (0x00007FFF)

#define RF_CW779_TX_DET_MEAS_DLY_C2K_T3_LSB                                     (0)
#define RF_CW779_TX_DET_MEAS_DLY_C2K_T3_WIDTH                                   (15)
#define RF_CW779_TX_DET_MEAS_DLY_C2K_T3_MASK                                    (0x00007FFF)

#define RF_CW780_TX_DET_MEAS_DLY_C2K_T4_LSB                                     (0)
#define RF_CW780_TX_DET_MEAS_DLY_C2K_T4_WIDTH                                   (15)
#define RF_CW780_TX_DET_MEAS_DLY_C2K_T4_MASK                                    (0x00007FFF)

#define RF_CW781_TX_DET_MEAS_DLY_C2K_T5_LSB                                     (0)
#define RF_CW781_TX_DET_MEAS_DLY_C2K_T5_WIDTH                                   (15)
#define RF_CW781_TX_DET_MEAS_DLY_C2K_T5_MASK                                    (0x00007FFF)

#define RF_CW785_RG_TX_DET_TESTSEL_LSB                                          (16)
#define RF_CW785_RG_TX_DET_TESTSEL_WIDTH                                        (4)
#define RF_CW785_RG_TX_DET_TESTSEL_MASK                                         (0x000F0000)

#define RF_CW785_RG_TX_VMON_EN_LSB                                              (12)
#define RF_CW785_RG_TX_VMON_EN_WIDTH                                            (3)
#define RF_CW785_RG_TX_VMON_EN_MASK                                             (0x00007000)

#define RF_CW785_RG_TX_RFFE_BIAS_VMON_SEL_LSB                                   (9)
#define RF_CW785_RG_TX_RFFE_BIAS_VMON_SEL_WIDTH                                 (3)
#define RF_CW785_RG_TX_RFFE_BIAS_VMON_SEL_MASK                                  (0x00000E00)

#define RF_CW785_RG_TX_HB_VMON_SEL_LSB                                          (6)
#define RF_CW785_RG_TX_HB_VMON_SEL_WIDTH                                        (3)
#define RF_CW785_RG_TX_HB_VMON_SEL_MASK                                         (0x000001C0)

#define RF_CW785_RG_TX_MB_VMON_SEL_LSB                                          (3)
#define RF_CW785_RG_TX_MB_VMON_SEL_WIDTH                                        (3)
#define RF_CW785_RG_TX_MB_VMON_SEL_MASK                                         (0x00000038)

#define RF_CW785_RG_TX_LB_VMON_SEL_LSB                                          (0)
#define RF_CW785_RG_TX_LB_VMON_SEL_WIDTH                                        (3)
#define RF_CW785_RG_TX_LB_VMON_SEL_MASK                                         (0x00000007)

#define RF_CW786_RG_TX_RFFE_SPARE2_LSB                                          (10)
#define RF_CW786_RG_TX_RFFE_SPARE2_WIDTH                                        (10)
#define RF_CW786_RG_TX_RFFE_SPARE2_MASK                                         (0x000FFC00)

#define RF_CW786_RG_TX_RFFE_SPARE1_LSB                                          (0)
#define RF_CW786_RG_TX_RFFE_SPARE1_WIDTH                                        (10)
#define RF_CW786_RG_TX_RFFE_SPARE1_MASK                                         (0x000003FF)

#define RF_CW786_RG_TX_PGA_FORCE_LIN_LSB                                        (13)
#define RF_CW786_RG_TX_PGA_FORCE_LIN_WIDTH                                      (1)
#define RF_CW786_RG_TX_PGA_FORCE_LIN_MASK                                       (0x00002000)

#define RF_CW787_TX_LPF_RCCAL_CSEL_LSB                                          (12)
#define RF_CW787_TX_LPF_RCCAL_CSEL_WIDTH                                        (8)
#define RF_CW787_TX_LPF_RCCAL_CSEL_MASK                                         (0x000FF000)

#define RF_CW787_TX_LPF_CSEL2_SHIFT_LSB                                         (6)
#define RF_CW787_TX_LPF_CSEL2_SHIFT_WIDTH                                       (6)
#define RF_CW787_TX_LPF_CSEL2_SHIFT_MASK                                        (0x00000FC0)

#define RF_CW787_TX_LPF_CSEL1_SHIFT_LSB                                         (0)
#define RF_CW787_TX_LPF_CSEL1_SHIFT_WIDTH                                       (6)
#define RF_CW787_TX_LPF_CSEL1_SHIFT_MASK                                        (0x0000003F)

#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_LTEFDD_LSB                              (16)
#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_LTEFDD_WIDTH                            (4)
#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_LTEFDD_MASK                             (0x000F0000)

#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_TDSCDMA_LSB                             (12)
#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_TDSCDMA_WIDTH                           (4)
#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_TDSCDMA_MASK                            (0x0000F000)

#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_WCDMA_LSB                               (8)
#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_WCDMA_WIDTH                             (4)
#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_WCDMA_MASK                              (0x00000F00)

#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_EDGE_LSB                                (4)
#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_EDGE_WIDTH                              (4)
#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_EDGE_MASK                               (0x000000F0)

#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_GMSK_LSB                                (0)
#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_GMSK_WIDTH                              (4)
#define RF_CW789_TX_RFFE_DRV_LDO_THRESH_GMSK_MASK                               (0x0000000F)

#define RF_CW790_TX_RFFE_DRV_LDO_THRESH_MANUAL_LSB                              (8)
#define RF_CW790_TX_RFFE_DRV_LDO_THRESH_MANUAL_WIDTH                            (4)
#define RF_CW790_TX_RFFE_DRV_LDO_THRESH_MANUAL_MASK                             (0x00000F00)

#define RF_CW790_TX_RFFE_DRV_LDO_THRESH_C2K_LSB                                 (4)
#define RF_CW790_TX_RFFE_DRV_LDO_THRESH_C2K_WIDTH                               (4)
#define RF_CW790_TX_RFFE_DRV_LDO_THRESH_C2K_MASK                                (0x000000F0)

#define RF_CW790_TX_RFFE_DRV_LDO_THRESH_LTETDD_LSB                              (0)
#define RF_CW790_TX_RFFE_DRV_LDO_THRESH_LTETDD_WIDTH                            (4)
#define RF_CW790_TX_RFFE_DRV_LDO_THRESH_LTETDD_MASK                             (0x0000000F)

#define RF_CW792_TX_DET_LDO15_LPM_EN_LSB                                        (9)
#define RF_CW792_TX_DET_LDO15_LPM_EN_WIDTH                                      (1)
#define RF_CW792_TX_DET_LDO15_LPM_EN_MASK                                       (0x00000200)
#define RF_CW792_TX_DET_LDO15_LPM_EN_BIT                                        (0x00000200)

#define RF_CW792_TX_LO_LDO15_LPM_EN_LSB                                         (8)
#define RF_CW792_TX_LO_LDO15_LPM_EN_WIDTH                                       (1)
#define RF_CW792_TX_LO_LDO15_LPM_EN_MASK                                        (0x00000100)
#define RF_CW792_TX_LO_LDO15_LPM_EN_BIT                                         (0x00000100)

#define RF_CW792_TX_LO_LDO11_LPM_EN_LSB                                         (7)
#define RF_CW792_TX_LO_LDO11_LPM_EN_WIDTH                                       (1)
#define RF_CW792_TX_LO_LDO11_LPM_EN_MASK                                        (0x00000080)
#define RF_CW792_TX_LO_LDO11_LPM_EN_BIT                                         (0x00000080)

#define RF_CW792_TX_LO_DIV_LDO15_LPM_EN_LSB                                     (6)
#define RF_CW792_TX_LO_DIV_LDO15_LPM_EN_WIDTH                                   (1)
#define RF_CW792_TX_LO_DIV_LDO15_LPM_EN_MASK                                    (0x00000040)
#define RF_CW792_TX_LO_DIV_LDO15_LPM_EN_BIT                                     (0x00000040)

#define RF_CW792_TX_ABB_LDO15_LPM_EN_LSB                                        (5)
#define RF_CW792_TX_ABB_LDO15_LPM_EN_WIDTH                                      (1)
#define RF_CW792_TX_ABB_LDO15_LPM_EN_MASK                                       (0x00000020)
#define RF_CW792_TX_ABB_LDO15_LPM_EN_BIT                                        (0x00000020)

#define RF_CW792_TX_RFFE_LDO15_LPM_EN_LSB                                       (4)
#define RF_CW792_TX_RFFE_LDO15_LPM_EN_WIDTH                                     (1)
#define RF_CW792_TX_RFFE_LDO15_LPM_EN_MASK                                      (0x00000010)
#define RF_CW792_TX_RFFE_LDO15_LPM_EN_BIT                                       (0x00000010)

#define RF_CW792_TX_RFFE_LDO11_LPM_EN_LSB                                       (3)
#define RF_CW792_TX_RFFE_LDO11_LPM_EN_WIDTH                                     (1)
#define RF_CW792_TX_RFFE_LDO11_LPM_EN_MASK                                      (0x00000008)
#define RF_CW792_TX_RFFE_LDO11_LPM_EN_BIT                                       (0x00000008)

#define RF_CW792_TX_LO_DCOBUF_LDO_SEL_LPM_LSB                                   (0)
#define RF_CW792_TX_LO_DCOBUF_LDO_SEL_LPM_WIDTH                                 (1)
#define RF_CW792_TX_LO_DCOBUF_LDO_SEL_LPM_MASK                                  (0x00000001)
#define RF_CW792_TX_LO_DCOBUF_LDO_SEL_LPM_BIT                                   (0x00000001)

#define RF_CW793_RG_TX_RCF_CSEL_LSB                                             (4)
#define RF_CW793_RG_TX_RCF_CSEL_WIDTH                                           (7)
#define RF_CW793_RG_TX_RCF_CSEL_MASK                                            (0x000007F0)

#define RF_CW793_RG_TX_RCF_RSEL_LSB                                             (0)
#define RF_CW793_RG_TX_RCF_RSEL_WIDTH                                           (4)
#define RF_CW793_RG_TX_RCF_RSEL_MASK                                            (0x0000000F)

#define RF_CW794_TX_BAL_RESA_BACT_LSB                                           (15)
#define RF_CW794_TX_BAL_RESA_BACT_WIDTH                                         (5)
#define RF_CW794_TX_BAL_RESA_BACT_MASK                                          (0x000F8000)

#define RF_CW794_TX_BAL_RESA_AACT_LSB                                           (10)
#define RF_CW794_TX_BAL_RESA_AACT_WIDTH                                         (5)
#define RF_CW794_TX_BAL_RESA_AACT_MASK                                          (0x00007C00)

#define RF_CW794_TX_BAL_RESB_BACT_LSB                                           (5)
#define RF_CW794_TX_BAL_RESB_BACT_WIDTH                                         (5)
#define RF_CW794_TX_BAL_RESB_BACT_MASK                                          (0x000003E0)

#define RF_CW794_TX_BAL_RESB_AACT_LSB                                           (0)
#define RF_CW794_TX_BAL_RESB_AACT_WIDTH                                         (5)
#define RF_CW794_TX_BAL_RESB_AACT_MASK                                          (0x0000001F)

#define RF_CW795_TX_BAL_C1_AACT_LSB                                             (12)
#define RF_CW795_TX_BAL_C1_AACT_WIDTH                                           (6)
#define RF_CW795_TX_BAL_C1_AACT_MASK                                            (0x0003F000)

#define RF_CW795_TX_BAL_CAPA_AACT_LSB                                           (6)
#define RF_CW795_TX_BAL_CAPA_AACT_WIDTH                                         (6)
#define RF_CW795_TX_BAL_CAPA_AACT_MASK                                          (0x00000FC0)

#define RF_CW795_TX_BAL_CAPB_AACT_LSB                                           (0)
#define RF_CW795_TX_BAL_CAPB_AACT_WIDTH                                         (6)
#define RF_CW795_TX_BAL_CAPB_AACT_MASK                                          (0x0000003F)

#define RF_CW796_TX_BAL_C1_BACT_LSB                                             (12)
#define RF_CW796_TX_BAL_C1_BACT_WIDTH                                           (6)
#define RF_CW796_TX_BAL_C1_BACT_MASK                                            (0x0003F000)

#define RF_CW796_TX_BAL_CAPA_BACT_LSB                                           (6)
#define RF_CW796_TX_BAL_CAPA_BACT_WIDTH                                         (6)
#define RF_CW796_TX_BAL_CAPA_BACT_MASK                                          (0x00000FC0)

#define RF_CW796_TX_BAL_CAPB_BACT_LSB                                           (0)
#define RF_CW796_TX_BAL_CAPB_BACT_WIDTH                                         (6)
#define RF_CW796_TX_BAL_CAPB_BACT_MASK                                          (0x0000003F)

#define RF_CW797_TX_DRVA_BMA_LIN_LSB                                            (12)
#define RF_CW797_TX_DRVA_BMA_LIN_WIDTH                                          (6)
#define RF_CW797_TX_DRVA_BMA_LIN_MASK                                           (0x0003F000)

#define RF_CW797_TX_DRVB_BMA_LIN_LSB                                            (6)
#define RF_CW797_TX_DRVB_BMA_LIN_WIDTH                                          (6)
#define RF_CW797_TX_DRVB_BMA_LIN_MASK                                           (0x00000FC0)

#define RF_CW797_TX_DRVA_BMC_LIN_LSB                                            (3)
#define RF_CW797_TX_DRVA_BMC_LIN_WIDTH                                          (3)
#define RF_CW797_TX_DRVA_BMC_LIN_MASK                                           (0x00000038)

#define RF_CW797_TX_DRVB_BMC_LIN_LSB                                            (0)
#define RF_CW797_TX_DRVB_BMC_LIN_WIDTH                                          (3)
#define RF_CW797_TX_DRVB_BMC_LIN_MASK                                           (0x00000007)

#define RF_CW798_RG_TX_BIAS_CTRL_LSB                                            (8)
#define RF_CW798_RG_TX_BIAS_CTRL_WIDTH                                          (12)
#define RF_CW798_RG_TX_BIAS_CTRL_MASK                                           (0x000FFF00)

#define RF_CW798_RG_TX_DRV_IPROG_OVERR_TC_LSB                                   (4)
#define RF_CW798_RG_TX_DRV_IPROG_OVERR_TC_WIDTH                                 (4)
#define RF_CW798_RG_TX_DRV_IPROG_OVERR_TC_MASK                                  (0x000000F0)

#define RF_CW798_RG_TX_DRV_IPROG_TC_LSB                                         (0)
#define RF_CW798_RG_TX_DRV_IPROG_TC_WIDTH                                       (4)
#define RF_CW798_RG_TX_DRV_IPROG_TC_MASK                                        (0x0000000F)

#define RF_CW799_TX_DRV_BMA_DPD_LSB                                             (4)
#define RF_CW799_TX_DRV_BMA_DPD_WIDTH                                           (6)
#define RF_CW799_TX_DRV_BMA_DPD_MASK                                            (0x000003F0)

#define RF_CW799_TX_DRV_BMC_DPD_LSB                                             (0)
#define RF_CW799_TX_DRV_BMC_DPD_WIDTH                                           (3)
#define RF_CW799_TX_DRV_BMC_DPD_MASK                                            (0x00000007)

#define RF_CW800_TX_LO_INPUTSLICE_EN_LSB                                        (19)
#define RF_CW800_TX_LO_INPUTSLICE_EN_WIDTH                                      (1)
#define RF_CW800_TX_LO_INPUTSLICE_EN_MASK                                       (0x00080000)
#define RF_CW800_TX_LO_INPUTSLICE_EN_BIT                                        (0x00080000)

#define RF_CW800_TX_LO_INPUTSLICES_A_LSB                                        (15)
#define RF_CW800_TX_LO_INPUTSLICES_A_WIDTH                                      (4)
#define RF_CW800_TX_LO_INPUTSLICES_A_MASK                                       (0x00078000)

#define RF_CW800_TX_LO_INPUTSLICES_B_LSB                                        (12)
#define RF_CW800_TX_LO_INPUTSLICES_B_WIDTH                                      (3)
#define RF_CW800_TX_LO_INPUTSLICES_B_MASK                                       (0x00007000)

#define RF_CW800_TX_LO_SUBSLICING_THRESH3_LSB                                   (8)
#define RF_CW800_TX_LO_SUBSLICING_THRESH3_WIDTH                                 (4)
#define RF_CW800_TX_LO_SUBSLICING_THRESH3_MASK                                  (0x00000F00)

#define RF_CW800_TX_LO_SUBSLICING_THRESH2_LSB                                   (4)
#define RF_CW800_TX_LO_SUBSLICING_THRESH2_WIDTH                                 (4)
#define RF_CW800_TX_LO_SUBSLICING_THRESH2_MASK                                  (0x000000F0)

#define RF_CW800_TX_LO_SUBSLICING_THRESH1_LSB                                   (0)
#define RF_CW800_TX_LO_SUBSLICING_THRESH1_WIDTH                                 (4)
#define RF_CW800_TX_LO_SUBSLICING_THRESH1_MASK                                  (0x0000000F)

#define RF_CW801_TX_LO_CASC_BIAS_BUF_HB_LSB                                     (15)
#define RF_CW801_TX_LO_CASC_BIAS_BUF_HB_WIDTH                                   (3)
#define RF_CW801_TX_LO_CASC_BIAS_BUF_HB_MASK                                    (0x00038000)

#define RF_CW801_TX_LO_CASC_BIAS_BUF_MB_LSB                                     (12)
#define RF_CW801_TX_LO_CASC_BIAS_BUF_MB_WIDTH                                   (3)
#define RF_CW801_TX_LO_CASC_BIAS_BUF_MB_MASK                                    (0x00007000)

#define RF_CW801_TX_LO_CASC_BIAS_BUF_LB_LSB                                     (9)
#define RF_CW801_TX_LO_CASC_BIAS_BUF_LB_WIDTH                                   (3)
#define RF_CW801_TX_LO_CASC_BIAS_BUF_LB_MASK                                    (0x00000E00)

#define RF_CW801_TX_LO_CASC_BIAS_DIV2_MB_LSB                                    (6)
#define RF_CW801_TX_LO_CASC_BIAS_DIV2_MB_WIDTH                                  (3)
#define RF_CW801_TX_LO_CASC_BIAS_DIV2_MB_MASK                                   (0x000001C0)

#define RF_CW801_TX_LO_CASC_BIAS_DIV2_LB_LSB                                    (3)
#define RF_CW801_TX_LO_CASC_BIAS_DIV2_LB_WIDTH                                  (3)
#define RF_CW801_TX_LO_CASC_BIAS_DIV2_LB_MASK                                   (0x00000038)

#define RF_CW801_TX_LO_CASC_BIAS_M_LSB                                          (0)
#define RF_CW801_TX_LO_CASC_BIAS_M_WIDTH                                        (3)
#define RF_CW801_TX_LO_CASC_BIAS_M_MASK                                         (0x00000007)

#define RF_CW802_TX_LO_AMP_TARGET_DEF_LSB                                       (15)
#define RF_CW802_TX_LO_AMP_TARGET_DEF_WIDTH                                     (5)
#define RF_CW802_TX_LO_AMP_TARGET_DEF_MASK                                      (0x000F8000)

#define RF_CW802_TX_LO_MAX_OFFSET_LSB                                           (10)
#define RF_CW802_TX_LO_MAX_OFFSET_WIDTH                                         (5)
#define RF_CW802_TX_LO_MAX_OFFSET_MASK                                          (0x00007C00)

#define RF_CW802_TX_LO_IND_SW1_LSB                                              (9)
#define RF_CW802_TX_LO_IND_SW1_WIDTH                                            (1)
#define RF_CW802_TX_LO_IND_SW1_MASK                                             (0x00000200)
#define RF_CW802_TX_LO_IND_SW1_BIT                                              (0x00000200)

#define RF_CW802_TX_LO_IND_SW2_LSB                                              (8)
#define RF_CW802_TX_LO_IND_SW2_WIDTH                                            (1)
#define RF_CW802_TX_LO_IND_SW2_MASK                                             (0x00000100)
#define RF_CW802_TX_LO_IND_SW2_BIT                                              (0x00000100)

#define RF_CW802_TX_LO_TDEL_SCA_CHANGE_LSB                                      (5)
#define RF_CW802_TX_LO_TDEL_SCA_CHANGE_WIDTH                                    (3)
#define RF_CW802_TX_LO_TDEL_SCA_CHANGE_MASK                                     (0x000000E0)

#define RF_CW802_TX_LO_TDEL_BIAS_CHANGE_LSB                                     (2)
#define RF_CW802_TX_LO_TDEL_BIAS_CHANGE_WIDTH                                   (3)
#define RF_CW802_TX_LO_TDEL_BIAS_CHANGE_MASK                                    (0x0000001C)

#define RF_CW802_TX_LO_CAL_PWR_AWARE_EN_LSB                                     (1)
#define RF_CW802_TX_LO_CAL_PWR_AWARE_EN_WIDTH                                   (1)
#define RF_CW802_TX_LO_CAL_PWR_AWARE_EN_MASK                                    (0x00000002)
#define RF_CW802_TX_LO_CAL_PWR_AWARE_EN_BIT                                     (0x00000002)

#define RF_CW802_TX_LO_CAL_MAN_LSB                                              (0)
#define RF_CW802_TX_LO_CAL_MAN_WIDTH                                            (1)
#define RF_CW802_TX_LO_CAL_MAN_MASK                                             (0x00000001)
#define RF_CW802_TX_LO_CAL_MAN_BIT                                              (0x00000001)

#define RF_CW803_TX_LO_CAP_ARRAY_INIT1_LSB                                      (13)
#define RF_CW803_TX_LO_CAP_ARRAY_INIT1_WIDTH                                    (7)
#define RF_CW803_TX_LO_CAP_ARRAY_INIT1_MASK                                     (0x000FE000)

#define RF_CW803_TX_LO_CAP_ARRAY_INIT2_LSB                                      (6)
#define RF_CW803_TX_LO_CAP_ARRAY_INIT2_WIDTH                                    (7)
#define RF_CW803_TX_LO_CAP_ARRAY_INIT2_MASK                                     (0x00001FC0)

#define RF_CW803_TX_LO_CAL_PWR_UP_CAL_EN_LSB                                    (5)
#define RF_CW803_TX_LO_CAL_PWR_UP_CAL_EN_WIDTH                                  (1)
#define RF_CW803_TX_LO_CAL_PWR_UP_CAL_EN_MASK                                   (0x00000020)
#define RF_CW803_TX_LO_CAL_PWR_UP_CAL_EN_BIT                                    (0x00000020)

#define RF_CW803_TX_LO_FE_IN_BIAS_INIT_LSB                                      (0)
#define RF_CW803_TX_LO_FE_IN_BIAS_INIT_WIDTH                                    (5)
#define RF_CW803_TX_LO_FE_IN_BIAS_INIT_MASK                                     (0x0000001F)

#define RF_CW804_TX_LO_IND_SW_M_LSB                                             (19)
#define RF_CW804_TX_LO_IND_SW_M_WIDTH                                           (1)
#define RF_CW804_TX_LO_IND_SW_M_MASK                                            (0x00080000)
#define RF_CW804_TX_LO_IND_SW_M_BIT                                             (0x00080000)

#define RF_CW804_TX_LO_COMP_EN_M_LSB                                            (18)
#define RF_CW804_TX_LO_COMP_EN_M_WIDTH                                          (1)
#define RF_CW804_TX_LO_COMP_EN_M_MASK                                           (0x00040000)
#define RF_CW804_TX_LO_COMP_EN_M_BIT                                            (0x00040000)

#define RF_CW804_TX_LO_CAP_ARRAY_M_LSB                                          (11)
#define RF_CW804_TX_LO_CAP_ARRAY_M_WIDTH                                        (7)
#define RF_CW804_TX_LO_CAP_ARRAY_M_MASK                                         (0x0003F800)

#define RF_CW804_TX_LO_COMP_RST_M_LSB                                           (10)
#define RF_CW804_TX_LO_COMP_RST_M_WIDTH                                         (1)
#define RF_CW804_TX_LO_COMP_RST_M_MASK                                          (0x00000400)
#define RF_CW804_TX_LO_COMP_RST_M_BIT                                           (0x00000400)

#define RF_CW804_TX_LO_IN_BIAS_M_LSB                                            (5)
#define RF_CW804_TX_LO_IN_BIAS_M_WIDTH                                          (5)
#define RF_CW804_TX_LO_IN_BIAS_M_MASK                                           (0x000003E0)

#define RF_CW804_TX_LO_AMP_TARGET_M_LSB                                         (0)
#define RF_CW804_TX_LO_AMP_TARGET_M_WIDTH                                       (5)
#define RF_CW804_TX_LO_AMP_TARGET_M_MASK                                        (0x0000001F)

#define RF_CW805_TX_LO_CAPCAL_FAIL_RO_LSB                                       (17)
#define RF_CW805_TX_LO_CAPCAL_FAIL_RO_WIDTH                                     (1)
#define RF_CW805_TX_LO_CAPCAL_FAIL_RO_MASK                                      (0x00020000)
#define RF_CW805_TX_LO_CAPCAL_FAIL_RO_BIT                                       (0x00020000)

#define RF_CW805_TX_LO_CAPCAL_DONE_RO_LSB                                       (16)
#define RF_CW805_TX_LO_CAPCAL_DONE_RO_WIDTH                                     (1)
#define RF_CW805_TX_LO_CAPCAL_DONE_RO_MASK                                      (0x00010000)
#define RF_CW805_TX_LO_CAPCAL_DONE_RO_BIT                                       (0x00010000)

#define RF_CW805_TX_LO_CAPCAL_SEL_IND_SW_RO_LSB                                 (15)
#define RF_CW805_TX_LO_CAPCAL_SEL_IND_SW_RO_WIDTH                               (1)
#define RF_CW805_TX_LO_CAPCAL_SEL_IND_SW_RO_MASK                                (0x00008000)
#define RF_CW805_TX_LO_CAPCAL_SEL_IND_SW_RO_BIT                                 (0x00008000)

#define RF_CW805_TX_LO_CAPCAL_PEAK_CAP_RO_LSB                                   (8)
#define RF_CW805_TX_LO_CAPCAL_PEAK_CAP_RO_WIDTH                                 (7)
#define RF_CW805_TX_LO_CAPCAL_PEAK_CAP_RO_MASK                                  (0x00007F00)

#define RF_CW805_TX_LO_IN_BIAS_CAL_RO_LSB                                       (0)
#define RF_CW805_TX_LO_IN_BIAS_CAL_RO_WIDTH                                     (5)
#define RF_CW805_TX_LO_IN_BIAS_CAL_RO_MASK                                      (0x0000001F)

#define RF_CW806_TXDET_CDCOC_FINISH_TRG_LSB                                     (16)
#define RF_CW806_TXDET_CDCOC_FINISH_TRG_WIDTH                                   (1)
#define RF_CW806_TXDET_CDCOC_FINISH_TRG_MASK                                    (0x00010000)
#define RF_CW806_TXDET_CDCOC_FINISH_TRG_BIT                                     (0x00010000)

#define RF_CW806_TXDET_CDCOC_WAIT_COUNT_LSB                                     (8)
#define RF_CW806_TXDET_CDCOC_WAIT_COUNT_WIDTH                                   (8)
#define RF_CW806_TXDET_CDCOC_WAIT_COUNT_MASK                                    (0x0000FF00)

#define RF_CW806_TXDET_CDCOC_PWR_AWARE_LSB                                      (3)
#define RF_CW806_TXDET_CDCOC_PWR_AWARE_WIDTH                                    (1)
#define RF_CW806_TXDET_CDCOC_PWR_AWARE_MASK                                     (0x00000008)
#define RF_CW806_TXDET_CDCOC_PWR_AWARE_BIT                                      (0x00000008)

#define RF_CW806_TXDET_CDCOC_MAN_LSB                                            (2)
#define RF_CW806_TXDET_CDCOC_MAN_WIDTH                                          (1)
#define RF_CW806_TXDET_CDCOC_MAN_MASK                                           (0x00000004)
#define RF_CW806_TXDET_CDCOC_MAN_BIT                                            (0x00000004)

#define RF_CW806_TXDET_CDCOC_DC_INV_LSB                                         (1)
#define RF_CW806_TXDET_CDCOC_DC_INV_WIDTH                                       (1)
#define RF_CW806_TXDET_CDCOC_DC_INV_MASK                                        (0x00000002)
#define RF_CW806_TXDET_CDCOC_DC_INV_BIT                                         (0x00000002)

#define RF_CW806_TXDET_CDCOC_ADC_SEL_INV_LSB                                    (0)
#define RF_CW806_TXDET_CDCOC_ADC_SEL_INV_WIDTH                                  (1)
#define RF_CW806_TXDET_CDCOC_ADC_SEL_INV_MASK                                   (0x00000001)
#define RF_CW806_TXDET_CDCOC_ADC_SEL_INV_BIT                                    (0x00000001)

#define RF_CW807_TXDET_CDCOC_I1_M_LSB                                           (15)
#define RF_CW807_TXDET_CDCOC_I1_M_WIDTH                                         (5)
#define RF_CW807_TXDET_CDCOC_I1_M_MASK                                          (0x000F8000)

#define RF_CW807_TXDET_CDCOC_Q1_M_LSB                                           (10)
#define RF_CW807_TXDET_CDCOC_Q1_M_WIDTH                                         (5)
#define RF_CW807_TXDET_CDCOC_Q1_M_MASK                                          (0x00007C00)

#define RF_CW807_TXDET_CDCOC_I2_M_LSB                                           (5)
#define RF_CW807_TXDET_CDCOC_I2_M_WIDTH                                         (5)
#define RF_CW807_TXDET_CDCOC_I2_M_MASK                                          (0x000003E0)

#define RF_CW807_TXDET_CDCOC_Q2_M_LSB                                           (0)
#define RF_CW807_TXDET_CDCOC_Q2_M_WIDTH                                         (5)
#define RF_CW807_TXDET_CDCOC_Q2_M_MASK                                          (0x0000001F)

#define RF_CW808_TXDET_CDCOC_I3_M_LSB                                           (15)
#define RF_CW808_TXDET_CDCOC_I3_M_WIDTH                                         (5)
#define RF_CW808_TXDET_CDCOC_I3_M_MASK                                          (0x000F8000)

#define RF_CW808_TXDET_CDCOC_Q3_M_LSB                                           (10)
#define RF_CW808_TXDET_CDCOC_Q3_M_WIDTH                                         (5)
#define RF_CW808_TXDET_CDCOC_Q3_M_MASK                                          (0x00007C00)

#define RF_CW808_TXDET_CDCOC_I4_M_LSB                                           (5)
#define RF_CW808_TXDET_CDCOC_I4_M_WIDTH                                         (5)
#define RF_CW808_TXDET_CDCOC_I4_M_MASK                                          (0x000003E0)

#define RF_CW808_TXDET_CDCOC_Q4_M_LSB                                           (0)
#define RF_CW808_TXDET_CDCOC_Q4_M_WIDTH                                         (5)
#define RF_CW808_TXDET_CDCOC_Q4_M_MASK                                          (0x0000001F)

#define RF_CW809_TXDET_CDCOC_GAIN_SET2_LSB                                      (13)
#define RF_CW809_TXDET_CDCOC_GAIN_SET2_WIDTH                                    (7)
#define RF_CW809_TXDET_CDCOC_GAIN_SET2_MASK                                     (0x000FE000)

#define RF_CW809_TXDET_CDCOC_GAIN_SET1_LSB                                      (0)
#define RF_CW809_TXDET_CDCOC_GAIN_SET1_WIDTH                                    (7)
#define RF_CW809_TXDET_CDCOC_GAIN_SET1_MASK                                     (0x0000007F)

#define RF_CW810_TXDET_CDCOC_GAIN_SET4_LSB                                      (13)
#define RF_CW810_TXDET_CDCOC_GAIN_SET4_WIDTH                                    (7)
#define RF_CW810_TXDET_CDCOC_GAIN_SET4_MASK                                     (0x000FE000)

#define RF_CW810_TXDET_CDCOC_GAIN_SET3_LSB                                      (0)
#define RF_CW810_TXDET_CDCOC_GAIN_SET3_WIDTH                                    (7)
#define RF_CW810_TXDET_CDCOC_GAIN_SET3_MASK                                     (0x0000007F)

#define RF_CW811_TXDET_CDCOC_RESULT_I1_RO_LSB                                   (15)
#define RF_CW811_TXDET_CDCOC_RESULT_I1_RO_WIDTH                                 (5)
#define RF_CW811_TXDET_CDCOC_RESULT_I1_RO_MASK                                  (0x000F8000)

#define RF_CW811_TXDET_CDCOC_RESULT_Q1_RO_LSB                                   (10)
#define RF_CW811_TXDET_CDCOC_RESULT_Q1_RO_WIDTH                                 (5)
#define RF_CW811_TXDET_CDCOC_RESULT_Q1_RO_MASK                                  (0x00007C00)

#define RF_CW811_TXDET_CDCOC_RESULT_I2_RO_LSB                                   (5)
#define RF_CW811_TXDET_CDCOC_RESULT_I2_RO_WIDTH                                 (5)
#define RF_CW811_TXDET_CDCOC_RESULT_I2_RO_MASK                                  (0x000003E0)

#define RF_CW811_TXDET_CDCOC_RESULT_Q2_RO_LSB                                   (0)
#define RF_CW811_TXDET_CDCOC_RESULT_Q2_RO_WIDTH                                 (5)
#define RF_CW811_TXDET_CDCOC_RESULT_Q2_RO_MASK                                  (0x0000001F)

#define RF_CW812_TXDET_CDCOC_RESULT_I3_RO_LSB                                   (15)
#define RF_CW812_TXDET_CDCOC_RESULT_I3_RO_WIDTH                                 (5)
#define RF_CW812_TXDET_CDCOC_RESULT_I3_RO_MASK                                  (0x000F8000)

#define RF_CW812_TXDET_CDCOC_RESULT_Q3_RO_LSB                                   (10)
#define RF_CW812_TXDET_CDCOC_RESULT_Q3_RO_WIDTH                                 (5)
#define RF_CW812_TXDET_CDCOC_RESULT_Q3_RO_MASK                                  (0x00007C00)

#define RF_CW812_TXDET_CDCOC_RESULT_I4_RO_LSB                                   (5)
#define RF_CW812_TXDET_CDCOC_RESULT_I4_RO_WIDTH                                 (5)
#define RF_CW812_TXDET_CDCOC_RESULT_I4_RO_MASK                                  (0x000003E0)

#define RF_CW812_TXDET_CDCOC_RESULT_Q4_RO_LSB                                   (0)
#define RF_CW812_TXDET_CDCOC_RESULT_Q4_RO_WIDTH                                 (5)
#define RF_CW812_TXDET_CDCOC_RESULT_Q4_RO_MASK                                  (0x0000001F)

#define RF_CW813_RG_TX_LDO_SPARE_LSB                                            (12)
#define RF_CW813_RG_TX_LDO_SPARE_WIDTH                                          (8)
#define RF_CW813_RG_TX_LDO_SPARE_MASK                                           (0x000FF000)

#define RF_CW813_RG_TX_DET_LDO15_VS_LSB                                         (9)
#define RF_CW813_RG_TX_DET_LDO15_VS_WIDTH                                       (3)
#define RF_CW813_RG_TX_DET_LDO15_VS_MASK                                        (0x00000E00)

#define RF_CW813_RG_TX_ABB_LDO15_VS_LSB                                         (6)
#define RF_CW813_RG_TX_ABB_LDO15_VS_WIDTH                                       (3)
#define RF_CW813_RG_TX_ABB_LDO15_VS_MASK                                        (0x000001C0)

#define RF_CW813_RG_TX_RFFE_LDO15_VS_LSB                                        (3)
#define RF_CW813_RG_TX_RFFE_LDO15_VS_WIDTH                                      (3)
#define RF_CW813_RG_TX_RFFE_LDO15_VS_MASK                                       (0x00000038)

#define RF_CW813_RG_TX_RFFE_LDO11_VS_LSB                                        (0)
#define RF_CW813_RG_TX_RFFE_LDO11_VS_WIDTH                                      (3)
#define RF_CW813_RG_TX_RFFE_LDO11_VS_MASK                                       (0x00000007)

#define RF_CW814_TX_LO_CAL_CAP_COMP_INV_LSB                                     (13)
#define RF_CW814_TX_LO_CAL_CAP_COMP_INV_WIDTH                                   (1)
#define RF_CW814_TX_LO_CAL_CAP_COMP_INV_MASK                                    (0x00002000)
#define RF_CW814_TX_LO_CAL_CAP_COMP_INV_BIT                                     (0x00002000)

#define RF_CW814_TX_LO_CAL_BIAS_COMP_INV_LSB                                    (12)
#define RF_CW814_TX_LO_CAL_BIAS_COMP_INV_WIDTH                                  (1)
#define RF_CW814_TX_LO_CAL_BIAS_COMP_INV_MASK                                   (0x00001000)
#define RF_CW814_TX_LO_CAL_BIAS_COMP_INV_BIT                                    (0x00001000)

#define RF_CW814_RG_TX_LO_DIV2_VS_LSB                                           (10)
#define RF_CW814_RG_TX_LO_DIV2_VS_WIDTH                                         (2)
#define RF_CW814_RG_TX_LO_DIV2_VS_MASK                                          (0x00000C00)

#define RF_CW814_RG_TX_LO_INBUF_VS_LSB                                          (8)
#define RF_CW814_RG_TX_LO_INBUF_VS_WIDTH                                        (2)
#define RF_CW814_RG_TX_LO_INBUF_VS_MASK                                         (0x00000300)

#define RF_CW814_RG_TX_LO_G25_VS_LSB                                            (6)
#define RF_CW814_RG_TX_LO_G25_VS_WIDTH                                          (2)
#define RF_CW814_RG_TX_LO_G25_VS_MASK                                           (0x000000C0)

#define RF_CW814_RG_TX_LO_LDO15_VS_LSB                                          (3)
#define RF_CW814_RG_TX_LO_LDO15_VS_WIDTH                                        (3)
#define RF_CW814_RG_TX_LO_LDO15_VS_MASK                                         (0x00000038)

#define RF_CW814_RG_TX_LO_LDO11_VS_LSB                                          (0)
#define RF_CW814_RG_TX_LO_LDO11_VS_WIDTH                                        (3)
#define RF_CW814_RG_TX_LO_LDO11_VS_MASK                                         (0x00000007)

#define RF_CW815_RG_TX_LO_LDO_REF_RCAL_LSB                                      (9)
#define RF_CW815_RG_TX_LO_LDO_REF_RCAL_WIDTH                                    (3)
#define RF_CW815_RG_TX_LO_LDO_REF_RCAL_MASK                                     (0x00000E00)

#define RF_CW815_RG_TX_RFFE_LDO_REF_RCAL_LSB                                    (6)
#define RF_CW815_RG_TX_RFFE_LDO_REF_RCAL_WIDTH                                  (3)
#define RF_CW815_RG_TX_RFFE_LDO_REF_RCAL_MASK                                   (0x000001C0)

#define RF_CW815_RG_TX_ABB_LDO_REF_RCAL_LSB                                     (3)
#define RF_CW815_RG_TX_ABB_LDO_REF_RCAL_WIDTH                                   (3)
#define RF_CW815_RG_TX_ABB_LDO_REF_RCAL_MASK                                    (0x00000038)

#define RF_CW815_RG_TX_DET_LDO_REF_RCAL_LSB                                     (0)
#define RF_CW815_RG_TX_DET_LDO_REF_RCAL_WIDTH                                   (3)
#define RF_CW815_RG_TX_DET_LDO_REF_RCAL_MASK                                    (0x00000007)

#define RF_CW816_TXDET_ALWAYS_ON_LSB                                            (10)
#define RF_CW816_TXDET_ALWAYS_ON_WIDTH                                          (1)
#define RF_CW816_TXDET_ALWAYS_ON_MASK                                           (0x00000400)
#define RF_CW816_TXDET_ALWAYS_ON_BIT                                            (0x00000400)

#define RF_CW816_RG_TX_DET_TTGBUF_GAIN_LSB                                      (7)
#define RF_CW816_RG_TX_DET_TTGBUF_GAIN_WIDTH                                    (3)
#define RF_CW816_RG_TX_DET_TTGBUF_GAIN_MASK                                     (0x00000380)

#define RF_CW816_RG_TX_DET_LOBIAS_CTRL_LSB                                      (5)
#define RF_CW816_RG_TX_DET_LOBIAS_CTRL_WIDTH                                    (2)
#define RF_CW816_RG_TX_DET_LOBIAS_CTRL_MASK                                     (0x00000060)

#define RF_CW816_RG_TX_DET_LBACUR_SEL_LSB                                       (3)
#define RF_CW816_RG_TX_DET_LBACUR_SEL_WIDTH                                     (2)
#define RF_CW816_RG_TX_DET_LBACUR_SEL_MASK                                      (0x00000018)

#define RF_CW816_RG_TX_DET_CDCOC_R_LSB                                          (1)
#define RF_CW816_RG_TX_DET_CDCOC_R_WIDTH                                        (2)
#define RF_CW816_RG_TX_DET_CDCOC_R_MASK                                         (0x00000006)

#define RF_CW816_RG_TX_DET_CDCOC_DAC_OFF_LSB                                    (0)
#define RF_CW816_RG_TX_DET_CDCOC_DAC_OFF_WIDTH                                  (1)
#define RF_CW816_RG_TX_DET_CDCOC_DAC_OFF_MASK                                   (0x00000001)
#define RF_CW816_RG_TX_DET_CDCOC_DAC_OFF_BIT                                    (0x00000001)

#define RF_CW818_RG_TX_DET_SPARE_LSB                                            (13)
#define RF_CW818_RG_TX_DET_SPARE_WIDTH                                          (7)
#define RF_CW818_RG_TX_DET_SPARE_MASK                                           (0x000FE000)

#define RF_CW818_TX_DET_FE_MAN_LSB                                              (9)
#define RF_CW818_TX_DET_FE_MAN_WIDTH                                            (1)
#define RF_CW818_TX_DET_FE_MAN_MASK                                             (0x00000200)
#define RF_CW818_TX_DET_FE_MAN_BIT                                              (0x00000200)

#define RF_CW818_TX_DET_FE_EN_M_LSB                                             (8)
#define RF_CW818_TX_DET_FE_EN_M_WIDTH                                           (1)
#define RF_CW818_TX_DET_FE_EN_M_MASK                                            (0x00000100)
#define RF_CW818_TX_DET_FE_EN_M_BIT                                             (0x00000100)

#define RF_CW818_TX_DET_TZ_EN_M_LSB                                             (7)
#define RF_CW818_TX_DET_TZ_EN_M_WIDTH                                           (1)
#define RF_CW818_TX_DET_TZ_EN_M_MASK                                            (0x00000080)
#define RF_CW818_TX_DET_TZ_EN_M_BIT                                             (0x00000080)

#define RF_CW818_TX_DET_DETPATH_DIV_EN_M_LSB                                    (6)
#define RF_CW818_TX_DET_DETPATH_DIV_EN_M_WIDTH                                  (1)
#define RF_CW818_TX_DET_DETPATH_DIV_EN_M_MASK                                   (0x00000040)
#define RF_CW818_TX_DET_DETPATH_DIV_EN_M_BIT                                    (0x00000040)

#define RF_CW818_RG_TX_DET_TTGBIAS_SEL_LSB                                      (4)
#define RF_CW818_RG_TX_DET_TTGBIAS_SEL_WIDTH                                    (2)
#define RF_CW818_RG_TX_DET_TTGBIAS_SEL_MASK                                     (0x00000030)

#define RF_CW818_RG_TX_DET_PGAVCM_LSB                                           (2)
#define RF_CW818_RG_TX_DET_PGAVCM_WIDTH                                         (2)
#define RF_CW818_RG_TX_DET_PGAVCM_MASK                                          (0x0000000C)

#define RF_CW818_RG_TX_DET_TZVCM_LSB                                            (0)
#define RF_CW818_RG_TX_DET_TZVCM_WIDTH                                          (2)
#define RF_CW818_RG_TX_DET_TZVCM_MASK                                           (0x00000003)

#define RF_CW819_RG_TX_ABB_SPARE_LSB                                            (12)
#define RF_CW819_RG_TX_ABB_SPARE_WIDTH                                          (8)
#define RF_CW819_RG_TX_ABB_SPARE_MASK                                           (0x000FF000)

#define RF_CW819_RG_TX_LPF_VCMSEL_LSB                                           (0)
#define RF_CW819_RG_TX_LPF_VCMSEL_WIDTH                                         (3)
#define RF_CW819_RG_TX_LPF_VCMSEL_MASK                                          (0x00000007)

#define RF_CW820_TX_LO_DETPATH_MAN_LSB                                          (4)
#define RF_CW820_TX_LO_DETPATH_MAN_WIDTH                                        (1)
#define RF_CW820_TX_LO_DETPATH_MAN_MASK                                         (0x00000010)
#define RF_CW820_TX_LO_DETPATH_MAN_BIT                                          (0x00000010)

#define RF_CW820_TX_LO_DETPATH_HB_M_LSB                                         (3)
#define RF_CW820_TX_LO_DETPATH_HB_M_WIDTH                                       (1)
#define RF_CW820_TX_LO_DETPATH_HB_M_MASK                                        (0x00000008)
#define RF_CW820_TX_LO_DETPATH_HB_M_BIT                                         (0x00000008)

#define RF_CW820_TX_LO_DETPATH_MB_M_LSB                                         (2)
#define RF_CW820_TX_LO_DETPATH_MB_M_WIDTH                                       (1)
#define RF_CW820_TX_LO_DETPATH_MB_M_MASK                                        (0x00000004)
#define RF_CW820_TX_LO_DETPATH_MB_M_BIT                                         (0x00000004)

#define RF_CW820_TX_LO_DETPATH_LB1_M_LSB                                        (1)
#define RF_CW820_TX_LO_DETPATH_LB1_M_WIDTH                                      (1)
#define RF_CW820_TX_LO_DETPATH_LB1_M_MASK                                       (0x00000002)
#define RF_CW820_TX_LO_DETPATH_LB1_M_BIT                                        (0x00000002)

#define RF_CW820_TX_LO_DETPATH_LB2_M_LSB                                        (0)
#define RF_CW820_TX_LO_DETPATH_LB2_M_WIDTH                                      (1)
#define RF_CW820_TX_LO_DETPATH_LB2_M_MASK                                       (0x00000001)
#define RF_CW820_TX_LO_DETPATH_LB2_M_BIT                                        (0x00000001)

#define RF_CW821_TX_GAIN_MAN_LSB                                                (19)
#define RF_CW821_TX_GAIN_MAN_WIDTH                                              (1)
#define RF_CW821_TX_GAIN_MAN_MASK                                               (0x00080000)
#define RF_CW821_TX_GAIN_MAN_BIT                                                (0x00080000)

#define RF_CW821_TX_LPF_BIAS_A_EN_M_LSB                                         (14)
#define RF_CW821_TX_LPF_BIAS_A_EN_M_WIDTH                                       (4)
#define RF_CW821_TX_LPF_BIAS_A_EN_M_MASK                                        (0x0003C000)

#define RF_CW821_TX_LPF_BIAS_B_EN_M_LSB                                         (12)
#define RF_CW821_TX_LPF_BIAS_B_EN_M_WIDTH                                       (2)
#define RF_CW821_TX_LPF_BIAS_B_EN_M_MASK                                        (0x00003000)

#define RF_CW821_TX_LPF_I_A_EN_M_LSB                                            (8)
#define RF_CW821_TX_LPF_I_A_EN_M_WIDTH                                          (4)
#define RF_CW821_TX_LPF_I_A_EN_M_MASK                                           (0x00000F00)

#define RF_CW821_TX_LPF_Q_A_EN_M_LSB                                            (4)
#define RF_CW821_TX_LPF_Q_A_EN_M_WIDTH                                          (4)
#define RF_CW821_TX_LPF_Q_A_EN_M_MASK                                           (0x000000F0)

#define RF_CW821_TX_LPF_I_B_EN_M_LSB                                            (2)
#define RF_CW821_TX_LPF_I_B_EN_M_WIDTH                                          (2)
#define RF_CW821_TX_LPF_I_B_EN_M_MASK                                           (0x0000000C)

#define RF_CW821_TX_LPF_Q_B_EN_M_LSB                                            (0)
#define RF_CW821_TX_LPF_Q_B_EN_M_WIDTH                                          (2)
#define RF_CW821_TX_LPF_Q_B_EN_M_MASK                                           (0x00000003)

#define RF_CW822_TX_RCF_SLICE_A_EN_M_LSB                                        (16)
#define RF_CW822_TX_RCF_SLICE_A_EN_M_WIDTH                                      (4)
#define RF_CW822_TX_RCF_SLICE_A_EN_M_MASK                                       (0x000F0000)

#define RF_CW822_TX_RCF_SLICE_B_EN_M_LSB                                        (14)
#define RF_CW822_TX_RCF_SLICE_B_EN_M_WIDTH                                      (2)
#define RF_CW822_TX_RCF_SLICE_B_EN_M_MASK                                       (0x0000C000)

#define RF_CW822_TX_MODDRV_SLICE_A_EN_M_LSB                                     (10)
#define RF_CW822_TX_MODDRV_SLICE_A_EN_M_WIDTH                                   (4)
#define RF_CW822_TX_MODDRV_SLICE_A_EN_M_MASK                                    (0x00003C00)

#define RF_CW822_TX_MODDRV_SLICE_B_EN_M_LSB                                     (7)
#define RF_CW822_TX_MODDRV_SLICE_B_EN_M_WIDTH                                   (3)
#define RF_CW822_TX_MODDRV_SLICE_B_EN_M_MASK                                    (0x00000380)

#define RF_CW822_TX_LO_SLICE_A_EN_M_LSB                                         (3)
#define RF_CW822_TX_LO_SLICE_A_EN_M_WIDTH                                       (4)
#define RF_CW822_TX_LO_SLICE_A_EN_M_MASK                                        (0x00000078)

#define RF_CW822_TX_LO_SLICE_B_EN_M_LSB                                         (0)
#define RF_CW822_TX_LO_SLICE_B_EN_M_WIDTH                                       (3)
#define RF_CW822_TX_LO_SLICE_B_EN_M_MASK                                        (0x00000007)

#define RF_CW829_TX_AUXOUT_SEL_LSB                                              (0)
#define RF_CW829_TX_AUXOUT_SEL_WIDTH                                            (8)
#define RF_CW829_TX_AUXOUT_SEL_MASK                                             (0x000000FF)

/*******************************************************************************
 * typedef
 ******************************************************************************/
/** Structure Prototypes can be seen by other files**/

/*******************************************************************************
 * Global Functions Prototype (Interface)
 ******************************************************************************/
/** Function Prototypes can be used by other files **/

#endif /*__MML1_RF_REG_MT6176_H__*/

/* Doxygen Group End ***************************************************//**@}*/
