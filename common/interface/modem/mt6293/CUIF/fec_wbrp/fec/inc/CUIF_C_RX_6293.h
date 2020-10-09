/******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/

/******************************************************************************
 *
 * Filename:
 * ---------
 *   CUIF_C_RX_6293.h
 *
 * Project:
 * --------
 *   MT6293 Project
 *
 * Description:
 * ------------
 *   MT6293 C2K RX CUIF header file
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef __CUIF_C_RX_6293_H__
#define __CUIF_C_RX_6293_H__


#ifndef _FEC_ADDR_FORMAT_MT6293_H_
#define _FEC_ADDR_FORMAT_MT6293_H_

typedef volatile unsigned short* SRAMADDR;         /* SRAM addr is 16 bits  */
typedef volatile unsigned short  SRAMDATA;         /* SRAM data is 16 bits  */
typedef volatile unsigned short* APBADDR;          /* APB addr is 16 bits   */
typedef volatile unsigned short  APBDATA;          /* APB data is 16 bits   */
typedef volatile unsigned long*  APBADDR32;        /* APB addr is 32 bits   */
typedef volatile unsigned long   APBDATA32;        /* APB data is 32 bits   */
typedef volatile unsigned short* DPRAMADDR;        /* DPRAM addr is 16 bits */
typedef volatile signed   short* DPRAMADDR_S;      /* DPRAM addr is 16 bits */
typedef volatile unsigned short  DPRAMDATA;        /* DPRAM data is 16 bits */
#endif


#define FEC_CRX_REG_FIELD_SET(rEG, fIELD, vALUE)       (((UINT32)(vALUE) << rEG##_##fIELD##_LSB) & ( rEG##_##fIELD##_MASK ))
#define FEC_CRX_REG_FIELD_GET(vALUE,fIELD)             ((UINT32)(((vALUE) & ( fIELD##_M )) >> ( fIELD##_P )))
#define FEC_CRX_CUIF_FIELD_SET(fIELD, vALUE)           (((UINT32)(vALUE) << fIELD##_P) & ( fIELD##_M ))


// ---------- CAGC_INI_STA bit-field ----------
#define AGC_INI_FSM_HALF_EN_P                     (0)
#define AGC_INI_FSM_HALF_EN_L                     (1)
#define AGC_INI_FSM_HALF_EN_M                     (0x00000001)

#define AGC_INI_FSM_P                             (1)
#define AGC_INI_FSM_L                             (2)
#define AGC_INI_FSM_M                             (0x00000006)

#define AGC_INI_MODE_P                            (3)
#define AGC_INI_MODE_L                            (1)
#define AGC_INI_MODE_M                            (0x00000008)

#define AGC_INI_IIP2_EN_P                         (4)
#define AGC_INI_IIP2_EN_L                         (1)
#define AGC_INI_IIP2_EN_M                         (0x00000010)

#define AGC_INI_INIT_RF_GAIN_SEL_P                (5)
#define AGC_INI_INIT_RF_GAIN_SEL_L                (1)
#define AGC_INI_INIT_RF_GAIN_SEL_M                (0x00000020)

#define AGC_INI_FAST_FSM_NUM_P                    (6)
#define AGC_INI_FAST_FSM_NUM_L                    (3)
#define AGC_INI_FAST_FSM_NUM_M                    (0x000001C0)

#define AGC_INI_RF_BAND_IDX_P                     (9)
#define AGC_INI_RF_BAND_IDX_L                     (3)
#define AGC_INI_RF_BAND_IDX_M                     (0x7 << AGC_INI_RF_BAND_IDX_P)

#define AGC_INI_RF_FREQ_BAND_P                    (12)
#define AGC_INI_RF_FREQ_BAND_L                    (1)
#define AGC_INI_RF_FREQ_BAND_M                    (0x1 << AGC_INI_RF_FREQ_BAND_P)

#define AGC_INI_RF_ARX_ENABLE_P                   (13)
#define AGC_INI_RF_ARX_ENABLE_L                   (1)
#define AGC_INI_RF_ARX_ENABLE_M                   (0x1 << AGC_INI_RF_ARX_ENABLE_P)

#define AGC_INI_RF_TIER_1_ENABLE_P                (14)
#define AGC_INI_RF_TIER_1_ENABLE_L                (1)
#define AGC_INI_RF_TIER_1_ENABLE_M                (0x1 << AGC_INI_RF_TIER_1_ENABLE_P)

// ---------- CAGC_ELAN_SEL bit-field ----------
#define AGC_ELNA_SEL_ELNA_EN_P                    (0)
#define AGC_ELNA_SEL_ELNA_EN_L                    (1)
#define AGC_ELNA_SEL_ELNA_EN_M                    (0x1 << AGC_ELNA_SEL_ELNA_EN_P)

#define AGC_ELNA_SEL_ELNA_MODE_P                  (1)
#define AGC_ELNA_SEL_ELNA_MODE_L                  (2)
#define AGC_ELNA_SEL_ELNA_MODE_M                  (0x3 << AGC_ELNA_SEL_ELNA_MODE_P)

#define AGC_ELNA_SEL_ELNA_CTRL_SEL_P              (3)
#define AGC_ELNA_SEL_ELNA_CTRL_SEL_L              (1)
#define AGC_ELNA_SEL_ELNA_CTRL_SEL_M              (0x1 << AGC_ELNA_SEL_ELNA_CTRL_SEL_P)

// ---------- CAGC_CFG bit-field ----------
#define AGC_CFG_FSM_P                             (0)
#define AGC_CFG_FSM_L                             (4)
#define AGC_CFG_FSM_M                             (0xF << AGC_CFG_FSM_P)

#define AGC_CFG_FSM_VLD_P                         (4)
#define AGC_CFG_FSM_VLD_L                         (4)
#define AGC_CFG_FSM_VLD_M                         (0xF << AGC_CFG_FSM_VLD_P)

#define AGC_CFG_PWR_MODE_P                        (8)
#define AGC_CFG_PWR_MODE_L                        (4)
#define AGC_CFG_PWR_MODE_M                        (0xF << AGC_CFG_PWR_MODE_P)

#define AGC_CFG_PWR_MODE_VLD_P                    (12)
#define AGC_CFG_PWR_MODE_VLD_L                    (4)
#define AGC_CFG_PWR_MODE_VLD_M                    (0xF << AGC_CFG_PWR_MODE_VLD_P)

#endif // __CUIF_C_RX_6293_H__


