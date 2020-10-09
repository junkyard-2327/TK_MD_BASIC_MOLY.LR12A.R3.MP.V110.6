/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 * Filename:
 * ---------
 *   drv_bsi.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   BSI-PMIC (Baseband Serial Interface - Power Management Integrated Circuit) Driver
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 14 2013 ansel.liao
 * [MOLY00033702] [6290 MOLY] MDTOPSM request LTETOPSM BSI clock
 * Integration change.
 *
 * 04 08 2013 yu-hung.huang
 * [MOLY00013724] [MT6290 Bring-up]
 * [TRUNK] bsi driver update and  bsispi init cmm add
 *
 * 03 06 2013 yu-hung.huang
 * [MOLY00011206] BSI-PMIC Driver
 * [TRUNK] add failWrite BSI-PMIC API for reset test
 *
 * 03 06 2013 yu-hung.huang
 * [MOLY00011206] BSI-PMIC Driver
 * [TRUNK] BSI-PMIC driver update after testing on MT6339 ES1
 *
 * 03 01 2013 yu-hung.huang
 * [MOLY00011206] BSI-PMIC Driver
 * [TRUNK] add BSI-PMIC driver design and .mak
 ****************************************************************************/
#include "drv_features_bsi.h"
#include "drv_comm.h"

#include "drv_bsi.h"
#include "intrCtrl.h"

#include "kal_general_types.h"
#include "kal_public_api.h"

/*-----------------------------------------------------------------------*
* FUNCTION
*  drv_bsi_pmic_init
*
* DESCRIPTION
*  This function is to initialize BSI SPI controller for PMIC.
*
* PARAMETERS
*  None.
*
* RETURNS
*  None.
*
*------------------------------------------------------------------------*/
void drv_bsi_pmic_init(void)
{
    kal_uint32 setting;

    DRV_WriteReg32(0xBF300114, DRV_Reg32(0xBF300114) | 0x6); // LPHYCTL_HREADY_ENABLE
    DRV_WriteReg32(0xBF200114, DRV_Reg32(0xBF200114) | 0x4); // LPHYCTL_INTERRUPT_ENABLE

    setting = (DRV_BSI_MIPI_EN << BSISPI_MIPI_EN_OFFSET);
    setting |= (DRV_BSI_MODE << BSISPI_BSI_MODE_OFFSET);
    setting |= (DRV_BSI_SINGLE_DIR << BSISPI_SINGLE_DIR_OFFSET);
    setting |= (DRV_BSI_CLSNINT_EN << BSISPI_CLSNINT_EN_OFFSET);
    setting |= (DRV_BSI_DBG_EN << BSISPI_DBG_EN_OFFSET);
    setting |= (DRV_BSI_READ_PHASE << BSISPI_READ_PHASE_OFFSET);
    setting |= (DRV_BSI_RESET_MODE << BSISPI_RESET_MODE_OFFSET);
    setting |= (DRV_BSI_IO_MODE << BSISPI_IO_MODE_OFFSET);
    setting |= (DRV_BSI_SW_CS_SEL << BSISPI_SW_CS_SEL_OFFSET);
    DRV_WriteReg32(BSISPI_PORT_PARAM_REG, setting);

#if DRV_BSI_CS0_SUPPORT
    setting = (DRV_BSI_CLK_POL0 << BSISPI_CLK_POL_OFFSET);
    setting |= (DRV_BSI_CLK_SPD0 << BSISPI_CLK_SPD_OFFSET);
    setting |= (DRV_BSI_CS0_LEN << BSISPI_CS_LEN_OFFSET);
    setting |= (DRV_BSI_CS0_POL << BSISPI_CS_POL_OFFSET);
    setting |= (DRV_BSI_RD_CLK_SPD0 << BSISPI_RD_CLK_SPD_OFFSET);
    setting |= (DRV_BSI_RD_TRANS_CLKON0 << BSISPI_RD_TRANS_CLKON_OFFSET);
    setting |= (DRV_BSI_RD_TRANS_LEN0 << BSISPI_RD_TRANS_LEN_OFFSET);
    setting |= (DRV_BSI_IDLE_CNT0 << BSISPI_IDLE_CNT_OFFSET);
    setting |= (DRV_BSI_WLEN0 << BSISPI_WLEN_OFFSET);
    DRV_WriteReg32(BSISPI_IC0_PARAM1_REG, setting);
    
    setting = (DRV_BSI_RD_TRANS_CS0_WAVEFORM << BSISPI_RD_TRANS_CS_WAVEFORM_OFFSET);
    setting |= (DRV_BSI_RD_RDATA_CS0_POL << BSISPI_RD_RDATA_CS_POL_OFFSET);
    setting |= (DRV_BSI_RD_WLEN0 << BSISPI_RD_WLEN_OFFSET);
    setting |= (DRV_BSI_RD_RLEN0 << BSISPI_RD_RLEN_OFFSET);
    DRV_WriteReg32(BSISPI_IC0_PARAM2_REG, setting);
#endif

/*#if DRV_BSI_CS1_SUPPORT
    setting = (DRV_BSI_CLK_POL1 << BSISPI_CLK_POL_OFFSET);
    setting |= (DRV_BSI_CLK_SPD1 << BSISPI_CLK_SPD_OFFSET);
    setting |= (DRV_BSI_CS1_LEN << BSISPI_CS_LEN_OFFSET);
    setting |= (DRV_BSI_CS1_POL << BSISPI_CS_POL_OFFSET);
    setting |= (DRV_BSI_RD_CLK_SPD1 << BSISPI_RD_CLK_SPD_OFFSET);
    setting |= (DRV_BSI_RD_TRANS_CLKON1 << BSISPI_RD_TRANS_CLKON_OFFSET);
    setting |= (DRV_BSI_RD_TRANS_LEN1 << BSISPI_RD_TRANS_LEN_OFFSET);
    setting |= (DRV_BSI_IDLE_CNT1 << BSISPI_IDLE_CNT_OFFSET);
    setting |= (DRV_BSI_WLEN1 << BSISPI_WLEN_OFFSET);
    DRV_WriteReg32(BSISPI_IC1_PARAM1_REG, setting);
    
    setting = (DRV_BSI_RD_TRANS_CS1_WAVEFORM << BSISPI_RD_TRANS_CS_WAVEFORM_OFFSET);
    setting |= (DRV_BSI_RD_RDATA_CS1_POL << BSISPI_RD_RDATA_CS_POL_OFFSET);
    setting |= (DRV_BSI_RD_WLEN1 << BSISPI_RD_WLEN_OFFSET);
    setting |= (DRV_BSI_RD_RLEN1 << BSISPI_RD_RLEN_OFFSET);
    DRV_WriteReg32(BSISPI_IC1_PARAM2_REG, setting);
#endif*/

#if A60386_TARGET
    // for A60386 only: set A60386 before a read event
    drv_bsi_a60386_reg_write(0x010, 0x2);
#endif

}

/*-----------------------------------------------------------------------*
* FUNCTION
*  drv_bsi_pmic6339_reg_write
*
* DESCRIPTION
*  This function is to write MT6339 PMIC register through BSI.
*
* PARAMETERS
*  reg  - MT6339 PMIC register address. (8 bits)
*  val  - data to be written into MT6339 PMIC address. (16 bits)
*
* RETURNS
*  None
*
*------------------------------------------------------------------------*/
void drv_bsi_pmic6339_reg_write(kal_uint8 reg, kal_uint16 val)
{
    kal_uint32 counter = 0;

    while (GET_BSI_IMM_STATUS()) {
        counter++;
        if (counter > 100000) {
            ASSERT(0);
        }
    }
    SET_BSI_IMM_CTRL(DRV_BSI_PORT_SEL, DRV_BSI_CS_SEL, BSI_WRITE_EVENT);
    SET_BSI_IMM_WRITE_DATA(((reg << (DRV_BSI_RD_RLEN0+1)) | (val)));
}

/*-----------------------------------------------------------------------*
* FUNCTION
*  drv_bsi_pmic6339_reg_failWrite
*  (Only for BSI reset testing, not for normal use)
*
* DESCRIPTION
*  This function is to write MT6339 PMIC register through BSI
*  with incorrect number of transfer bits.
*
* PARAMETERS
*  reg  - MT6339 PMIC register address. (8 bits)
*  val  - data to be written into MT6339 PMIC address. (16 bits)
*
* RETURNS
*  None
*
*------------------------------------------------------------------------*/
void drv_bsi_pmic6339_reg_failWrite(kal_uint8 reg, kal_uint16 val)
{
    kal_uint32 counter = 0, setting;

    // Incorrect config
    while (GET_BSI_IMM_STATUS()) {
        counter++;
        if (counter > 100000) {
            ASSERT(0);
        }
    }
    setting = (DRV_BSI_CLK_POL0 << BSISPI_CLK_POL_OFFSET);
    setting |= (DRV_BSI_CLK_SPD0 << BSISPI_CLK_SPD_OFFSET);
    setting |= (DRV_BSI_CS0_LEN << BSISPI_CS_LEN_OFFSET);
    setting |= (DRV_BSI_CS0_POL << BSISPI_CS_POL_OFFSET);
    setting |= (DRV_BSI_RD_CLK_SPD0 << BSISPI_RD_CLK_SPD_OFFSET);
    setting |= (DRV_BSI_RD_TRANS_CLKON0 << BSISPI_RD_TRANS_CLKON_OFFSET);
    setting |= (DRV_BSI_RD_TRANS_LEN0 << BSISPI_RD_TRANS_LEN_OFFSET);
    setting |= (DRV_BSI_IDLE_CNT0 << BSISPI_IDLE_CNT_OFFSET);
    setting |= ((DRV_BSI_WLEN0 - 8) << BSISPI_WLEN_OFFSET); // missing 8 bits
    DRV_WriteReg32(BSISPI_IC0_PARAM1_REG, setting);

    // Fail write
    while (GET_BSI_IMM_STATUS()) {
        counter++;
        if (counter > 100000) {
            ASSERT(0);
        }
    }
    SET_BSI_IMM_CTRL(DRV_BSI_PORT_SEL, DRV_BSI_CS_SEL, BSI_WRITE_EVENT);
    SET_BSI_IMM_WRITE_DATA(((reg << (DRV_BSI_RD_RLEN0+1)) | (val)));

    // Return to original correct config
    while (GET_BSI_IMM_STATUS()) {
        counter++;
        if (counter > 100000) {
            ASSERT(0);
        }
    }
    setting = (DRV_BSI_CLK_POL0 << BSISPI_CLK_POL_OFFSET);
    setting |= (DRV_BSI_CLK_SPD0 << BSISPI_CLK_SPD_OFFSET);
    setting |= (DRV_BSI_CS0_LEN << BSISPI_CS_LEN_OFFSET);
    setting |= (DRV_BSI_CS0_POL << BSISPI_CS_POL_OFFSET);
    setting |= (DRV_BSI_RD_CLK_SPD0 << BSISPI_RD_CLK_SPD_OFFSET);
    setting |= (DRV_BSI_RD_TRANS_CLKON0 << BSISPI_RD_TRANS_CLKON_OFFSET);
    setting |= (DRV_BSI_RD_TRANS_LEN0 << BSISPI_RD_TRANS_LEN_OFFSET);
    setting |= (DRV_BSI_IDLE_CNT0 << BSISPI_IDLE_CNT_OFFSET);
    setting |= (DRV_BSI_WLEN0 << BSISPI_WLEN_OFFSET);
    DRV_WriteReg32(BSISPI_IC0_PARAM1_REG, setting);
}

/*-----------------------------------------------------------------------*
* FUNCTION
*  drv_bsi_pmic6339_reg_read
*
* DESCRIPTION
*  This function is to read MT6339 PMIC register through BSI.
*
* PARAMETERS
*  reg  - MT6339 PMIC register address. (8 bits)
*
* RETURNS
*  value which from MT6339 PMIC address. (16 bits)
*
*------------------------------------------------------------------------*/
kal_uint16 drv_bsi_pmic6339_reg_read(kal_uint8 reg)
{
    kal_uint32 counter = 0;

    while (GET_BSI_IMM_STATUS()) {
        counter++;
        if (counter > 100000) {
            ASSERT(0);
        }
    }
    SET_BSI_IMM_CTRL(DRV_BSI_PORT_SEL, DRV_BSI_CS_SEL, BSI_READ_EVENT);
    SET_BSI_IMM_WRITE_DATA((BSI_READ_EVENT << DRV_BSI_RD_WLEN0) | reg);
    counter = 0;
    while (!GET_BSI_IMM_RD_INT_STATUS()) {
        counter++;
        if (counter > 100000) {
            ASSERT(0);
        }
    }
    CLEAR_IMM_RDINT_STS;

    return (kal_uint16)GET_BSI_IMM_READ_DATA_3100();
}

/*-----------------------------------------------------------------------*
* FUNCTION
*  drv_bsi_a60386_reg_write
*
* DESCRIPTION
*  This function is to write A60386 register through BSI.
*
* PARAMETERS
*  reg  - A60386 register address. (12 bits)
*  val  - data to be written into A60386 address. (16 bits)
*
* RETURNS
*  None
*
*------------------------------------------------------------------------*/
void drv_bsi_a60386_reg_write(kal_uint16 reg, kal_uint16 val)
{
    kal_uint32 counter = 0;

    // check address is 12 bits only
    if (reg > 0x1FFF)
        ASSERT(0);

    while (GET_BSI_IMM_STATUS()) {
        counter++;
        if (counter > 100000) {
            ASSERT(0);
        }
    }
    SET_BSI_IMM_CTRL(DRV_BSI_PORT_SEL, DRV_BSI_CS_SEL, BSI_WRITE_EVENT);
    SET_BSI_IMM_WRITE_DATA(((reg << (DRV_BSI_RD_RLEN0+1)) | (val)));
}

/*-----------------------------------------------------------------------*
* FUNCTION
*  drv_bsi_a60386_reg_read
*
* DESCRIPTION
*  This function is to read A60386 register through BSI.
*
* PARAMETERS
*  reg  - A60386 register address. (12 bits)
*
* RETURNS
*  value which from A60386 address. (16 bits)
*
*------------------------------------------------------------------------*/
kal_uint16 drv_bsi_a60386_reg_read(kal_uint16 reg)
{
    kal_uint32 counter = 0;

    // check address is 12 bits only
    if (reg > 0x1FFF)
        ASSERT(0);

    while (GET_BSI_IMM_STATUS()) {
        counter++;
        if (counter > 100000) {
            ASSERT(0);
        }
    }
    SET_BSI_IMM_CTRL(DRV_BSI_PORT_SEL, DRV_BSI_CS_SEL, BSI_READ_EVENT);
    SET_BSI_IMM_WRITE_DATA((BSI_READ_EVENT << DRV_BSI_RD_WLEN0) | reg);
    counter = 0;
    while (!GET_BSI_IMM_RD_INT_STATUS()) {
        counter++;
        if (counter > 100000) {
            ASSERT(0);
        }
    }
    CLEAR_IMM_RDINT_STS;

    return (kal_uint16)GET_BSI_IMM_READ_DATA_3100();
}
