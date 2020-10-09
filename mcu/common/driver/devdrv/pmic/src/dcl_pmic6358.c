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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *     dcl_pmic6358.c
 *
 * Project:
 * --------
 *     MOLY Software
 *
 * Description:
 * ------------
 *     This file is for PMIC 6358
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 * HISTORY
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
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#if defined(FPGA_CTP)
#include <common.h>
#endif

#include "reg_base.h"
#include "drv_comm.h"
#include "init.h"
#include "dcl.h"
#include "dcl_pmu_sw.h"
#include "pmic_wrap.h"
#include "kal_public_api.h"
#include "us_timer.h"

#if defined(PMIC_6358_REG_API)

// Start PMIC_UNIT_TEST
//#define PMIC_UNIT_TEST
// ARM Section RW/RO/ZI Use Internal SRAM
#define PMIC_INTERNAL_SRAM

#if !defined(__FUE__)
#define SAVEANDSETIRQMASK()      SaveAndSetIRQMask()
#define RESTOREIRQMASK(mask)     RestoreIRQMask(mask)
#else /*defined(__FUE__)*/
#define SAVEANDSETIRQMASK()      0
#define RESTOREIRQMASK(mask)     {}
#endif /*defined(__FUE__)*/

#define PMIC_MAX_REG_NUM                0x3a00 // 0x0000~0x3a00

//////////////////////////////////////////////////
//                Exported APIs                 //
//////////////////////////////////////////////////

extern DCL_UINT16 dcl_pmic_byte_return_nolock(DCL_UINT16 addr);
extern DCL_UINT16 dcl_pmic_byte_return(DCL_UINT16 addr);
extern void dcl_pmic_byte_write_nolock(DCL_UINT16 addr, DCL_UINT16 val);
extern void dcl_pmic_byte_write(DCL_UINT16 addr, DCL_UINT16 val);
extern DCL_BOOL dcl_pmic_init_done_query(void);
typedef enum
{
    AUXADC_READ_INIT = 0,
    AUXADC_READ_REQUEST = 1,
    AUXADC_READ_READY = 2,
    AUXADC_READ_BUSY = 3,
    AUXADC_READ_DATA = 4
}AUXADC_FSM;

typedef struct
{
    kal_uint32 command_flag;
    kal_uint32 reg_before_write;
    kal_uint32 write_value;
    kal_uint32 address_offset;
    kal_uint32 reg_mask;
    kal_uint32 reg_shift;
    kal_uint32 reg_addr;
    kal_uint32 reg_data;
}PMIC_REG_LOG;

AUXADC_FSM AUXADC_Status = AUXADC_READ_INIT;
PMIC_REG_LOG pmic_reg_log;

#if (defined(__MTK_TARGET__) && defined(PMIC_INTERNAL_SRAM))
__attribute__ ((zero_init))
#endif /* __MTK_TARGET__ */

kal_uint8 pmic_hw_version;
kal_uint8 pmic_sw_version;
kal_uint16 pmic_reg[PMIC_MAX_REG_NUM];
DCL_BOOL pmic_init_done = DCL_FALSE;

kal_spinlockid dcl_pmic_access_spinlock;
extern kal_spinlockid dcl_pmic_control_spinlock;

const PMIC_FLAG_TABLE_ENTRY pmic_flags_table[] =
{
    {MT6358_HWCID,		PMIC_HWCID_MASK,		PMIC_HWCID_SHIFT,		},
    {MT6358_SWCID,		PMIC_SWCID_MASK,		PMIC_SWCID_SHIFT,		},
    {MT6358_TOP_CON,		PMIC_RG_SRCLKEN_IN0_EN_MASK,		PMIC_RG_SRCLKEN_IN0_EN_SHIFT,		},
    {MT6358_TOP_CON,		PMIC_RG_SRCLKEN_IN1_EN_MASK,		PMIC_RG_SRCLKEN_IN1_EN_SHIFT,		},
    {MT6358_TOP_CON,		PMIC_RG_SRCLKEN_IN0_HW_MODE_MASK,		PMIC_RG_SRCLKEN_IN0_HW_MODE_SHIFT,		},
    {MT6358_TOP_CON,		PMIC_RG_SRCLKEN_IN1_HW_MODE_MASK,		PMIC_RG_SRCLKEN_IN1_HW_MODE_SHIFT,		},
    {MT6358_BUCK_TOP_ELR1,		PMIC_RG_BUCK_VMODEM_VOSEL_LIMIT_SEL_MASK,		PMIC_RG_BUCK_VMODEM_VOSEL_LIMIT_SEL_SHIFT,		},
    {MT6358_BUCK_TOP_ELR1,		PMIC_RG_BUCK_VPA_VOSEL_LIMIT_SEL_MASK,		PMIC_RG_BUCK_VPA_VOSEL_LIMIT_SEL_SHIFT,		},
    {MT6358_BUCK_VCORE_CON1,		PMIC_RG_BUCK_VCORE_VOSEL_SLEEP_MASK,		PMIC_RG_BUCK_VCORE_VOSEL_SLEEP_SHIFT,		},
    {MT6358_BUCK_VCORE_DBG0,		PMIC_DA_VCORE_VOSEL_MASK,		PMIC_DA_VCORE_VOSEL_SHIFT,		},
    {MT6358_BUCK_VCORE_DBG0,		PMIC_DA_VCORE_VOSEL_GRAY_MASK,		PMIC_DA_VCORE_VOSEL_GRAY_SHIFT,		},
    {MT6358_BUCK_VCORE_ELR0,		PMIC_RG_BUCK_VCORE_VOSEL_MASK,		PMIC_RG_BUCK_VCORE_VOSEL_SHIFT,		},
    {MT6358_BUCK_VMODEM_CON0,		PMIC_RG_BUCK_VMODEM_EN_MASK,		PMIC_RG_BUCK_VMODEM_EN_SHIFT,		},
    {MT6358_BUCK_VMODEM_CON0,		PMIC_RG_BUCK_VMODEM_LP_MASK,		PMIC_RG_BUCK_VMODEM_LP_SHIFT,		},
    {MT6358_BUCK_VMODEM_CON1,		PMIC_RG_BUCK_VMODEM_VOSEL_SLEEP_MASK,		PMIC_RG_BUCK_VMODEM_VOSEL_SLEEP_SHIFT,		},
    {MT6358_BUCK_VMODEM_ELR0,		PMIC_RG_BUCK_VMODEM_VOSEL_MASK,		PMIC_RG_BUCK_VMODEM_VOSEL_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_EN,		PMIC_RG_BUCK_VMODEM_SW_OP_EN_MASK,		PMIC_RG_BUCK_VMODEM_SW_OP_EN_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_EN,		PMIC_RG_BUCK_VMODEM_HW0_OP_EN_MASK,		PMIC_RG_BUCK_VMODEM_HW0_OP_EN_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_EN,		PMIC_RG_BUCK_VMODEM_HW1_OP_EN_MASK,		PMIC_RG_BUCK_VMODEM_HW1_OP_EN_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_EN,		PMIC_RG_BUCK_VMODEM_HW2_OP_EN_MASK,		PMIC_RG_BUCK_VMODEM_HW2_OP_EN_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_EN_SET,		PMIC_RG_BUCK_VMODEM_OP_EN_SET_MASK,		PMIC_RG_BUCK_VMODEM_OP_EN_SET_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_EN_CLR,		PMIC_RG_BUCK_VMODEM_OP_EN_CLR_MASK,		PMIC_RG_BUCK_VMODEM_OP_EN_CLR_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_CFG,		PMIC_RG_BUCK_VMODEM_HW0_OP_CFG_MASK,		PMIC_RG_BUCK_VMODEM_HW0_OP_CFG_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_CFG,		PMIC_RG_BUCK_VMODEM_HW1_OP_CFG_MASK,		PMIC_RG_BUCK_VMODEM_HW1_OP_CFG_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_CFG,		PMIC_RG_BUCK_VMODEM_HW2_OP_CFG_MASK,		PMIC_RG_BUCK_VMODEM_HW2_OP_CFG_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_CFG,		PMIC_RG_BUCK_VMODEM_ON_OP_MASK,		PMIC_RG_BUCK_VMODEM_ON_OP_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_CFG,		PMIC_RG_BUCK_VMODEM_LP_OP_MASK,		PMIC_RG_BUCK_VMODEM_LP_OP_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_CFG_SET,		PMIC_RG_BUCK_VMODEM_OP_CFG_SET_MASK,		PMIC_RG_BUCK_VMODEM_OP_CFG_SET_SHIFT,		},
    {MT6358_BUCK_VMODEM_OP_CFG_CLR,		PMIC_RG_BUCK_VMODEM_OP_CFG_CLR_MASK,		PMIC_RG_BUCK_VMODEM_OP_CFG_CLR_SHIFT,		},
    {MT6358_BUCK_VMODEM_DBG0,		PMIC_DA_VMODEM_VOSEL_MASK,		PMIC_DA_VMODEM_VOSEL_SHIFT,		},
    {MT6358_BUCK_VMODEM_DBG0,		PMIC_DA_VMODEM_VOSEL_GRAY_MASK,		PMIC_DA_VMODEM_VOSEL_GRAY_SHIFT,		},
    {MT6358_BUCK_VMODEM_DBG1,		PMIC_DA_VMODEM_EN_MASK,		PMIC_DA_VMODEM_EN_SHIFT,		},
    {MT6358_BUCK_VMODEM_DBG1,		PMIC_DA_VMODEM_STB_MASK,		PMIC_DA_VMODEM_STB_SHIFT,		},
    {MT6358_BUCK_VS1_VOTER,		PMIC_RG_BUCK_VS1_VOTER_EN_MASK,		PMIC_RG_BUCK_VS1_VOTER_EN_SHIFT,		},
    {MT6358_BUCK_VS1_VOTER_SET,		PMIC_RG_BUCK_VS1_VOTER_EN_SET_MASK,		PMIC_RG_BUCK_VS1_VOTER_EN_SET_SHIFT,		},
    {MT6358_BUCK_VS1_VOTER_CLR,		PMIC_RG_BUCK_VS1_VOTER_EN_CLR_MASK,		PMIC_RG_BUCK_VS1_VOTER_EN_CLR_SHIFT,		},
    {MT6358_BUCK_VS1_VOTER_CFG,		PMIC_RG_BUCK_VS1_VOTER_VOSEL_MASK,		PMIC_RG_BUCK_VS1_VOTER_VOSEL_SHIFT,		},
    {MT6358_BUCK_VS2_CON1,		PMIC_RG_BUCK_VS2_VOSEL_SLEEP_MASK,		PMIC_RG_BUCK_VS2_VOSEL_SLEEP_SHIFT,		},
    {MT6358_BUCK_VS2_VOTER,		PMIC_RG_BUCK_VS2_VOTER_EN_MASK,		PMIC_RG_BUCK_VS2_VOTER_EN_SHIFT,		},
    {MT6358_BUCK_VS2_VOTER_SET,		PMIC_RG_BUCK_VS2_VOTER_EN_SET_MASK,		PMIC_RG_BUCK_VS2_VOTER_EN_SET_SHIFT,		},
    {MT6358_BUCK_VS2_VOTER_CLR,		PMIC_RG_BUCK_VS2_VOTER_EN_CLR_MASK,		PMIC_RG_BUCK_VS2_VOTER_EN_CLR_SHIFT,		},
    {MT6358_BUCK_VS2_VOTER_CFG,		PMIC_RG_BUCK_VS2_VOTER_VOSEL_MASK,		PMIC_RG_BUCK_VS2_VOTER_VOSEL_SHIFT,		},
    {MT6358_BUCK_VS2_ELR0,		PMIC_RG_BUCK_VS2_VOSEL_MASK,		PMIC_RG_BUCK_VS2_VOSEL_SHIFT,		},
    {MT6358_BUCK_VPA_CON0,		PMIC_RG_BUCK_VPA_EN_MASK,		PMIC_RG_BUCK_VPA_EN_SHIFT,		},
    {MT6358_BUCK_VPA_CON1,		PMIC_RG_BUCK_VPA_VOSEL_MASK,		PMIC_RG_BUCK_VPA_VOSEL_SHIFT,		},
    {MT6358_SMPS_ANA_CON1,		PMIC_RG_VMODEM_SLEEP_VOLTAGE_MASK,		PMIC_RG_VMODEM_SLEEP_VOLTAGE_SHIFT,		},
    {MT6358_VCORE_VGPU_ANA_CON0,		PMIC_RG_VCORE_FPWM_MASK,		PMIC_RG_VCORE_FPWM_SHIFT,		},
    {MT6358_VCORE_VGPU_ANA_CON0,		PMIC_RG_VCORE_FCOT_MASK,		PMIC_RG_VCORE_FCOT_SHIFT,		},
    {MT6358_VMODEM_ANA_CON0,		PMIC_RG_VMODEM_FPWM_MASK,		PMIC_RG_VMODEM_FPWM_SHIFT,		},
    {MT6358_VMODEM_ANA_CON0,		PMIC_RG_VMODEM_FCOT_MASK,		PMIC_RG_VMODEM_FCOT_SHIFT,		},
    {MT6358_VS2_ANA_CON2,		PMIC_RG_VS2_FPWM_MASK,		PMIC_RG_VS2_FPWM_SHIFT,		},
    {MT6358_VPA_ANA_CON0,		PMIC_RG_VPA_MODESET_MASK,		PMIC_RG_VPA_MODESET_SHIFT,		},
    {MT6358_LDO_VSRAM_CON2,		PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_MASK,		PMIC_RG_LDO_VSRAM_OTHERS_VOSEL_SHIFT,		},
    {MT6358_LDO_VSIM1_CON0,		PMIC_RG_LDO_VSIM1_EN_MASK,		PMIC_RG_LDO_VSIM1_EN_SHIFT,		},
    {MT6358_LDO_VSIM1_CON0,		PMIC_RG_LDO_VSIM1_LP_MASK,		PMIC_RG_LDO_VSIM1_LP_SHIFT,		},
    {MT6358_LDO_VSIM1_OP_EN,		PMIC_RG_LDO_VSIM1_SW_OP_EN_MASK,		PMIC_RG_LDO_VSIM1_SW_OP_EN_SHIFT,		},
    {MT6358_LDO_VSIM1_OP_EN,		PMIC_RG_LDO_VSIM1_HW0_OP_EN_MASK,		PMIC_RG_LDO_VSIM1_HW0_OP_EN_SHIFT,		},
    {MT6358_LDO_VSIM1_OP_EN,		PMIC_RG_LDO_VSIM1_HW1_OP_EN_MASK,		PMIC_RG_LDO_VSIM1_HW1_OP_EN_SHIFT,		},
    {MT6358_LDO_VSIM1_OP_EN,		PMIC_RG_LDO_VSIM1_HW2_OP_EN_MASK,		PMIC_RG_LDO_VSIM1_HW2_OP_EN_SHIFT,		},
    {MT6358_LDO_VSIM1_OP_EN_SET,		PMIC_RG_LDO_VSIM1_OP_EN_SET_MASK,		PMIC_RG_LDO_VSIM1_OP_EN_SET_SHIFT,		},
    {MT6358_LDO_VSIM1_OP_EN_CLR,		PMIC_RG_LDO_VSIM1_OP_EN_CLR_MASK,		PMIC_RG_LDO_VSIM1_OP_EN_CLR_SHIFT,		},
    {MT6358_LDO_VSIM1_OP_CFG,		PMIC_RG_LDO_VSIM1_HW0_OP_CFG_MASK,		PMIC_RG_LDO_VSIM1_HW0_OP_CFG_SHIFT,		},
    {MT6358_LDO_VSIM1_OP_CFG,		PMIC_RG_LDO_VSIM1_HW1_OP_CFG_MASK,		PMIC_RG_LDO_VSIM1_HW1_OP_CFG_SHIFT,		},
    {MT6358_LDO_VSIM1_OP_CFG,		PMIC_RG_LDO_VSIM1_HW2_OP_CFG_MASK,		PMIC_RG_LDO_VSIM1_HW2_OP_CFG_SHIFT,		},
    {MT6358_LDO_VSIM1_OP_CFG_SET,		PMIC_RG_LDO_VSIM1_OP_CFG_SET_MASK,		PMIC_RG_LDO_VSIM1_OP_CFG_SET_SHIFT,		},
    {MT6358_LDO_VSIM1_OP_CFG_CLR,		PMIC_RG_LDO_VSIM1_OP_CFG_CLR_MASK,		PMIC_RG_LDO_VSIM1_OP_CFG_CLR_SHIFT,		},
    {MT6358_LDO_VSIM1_CON2,		PMIC_RG_LDO_VSIM1_OCFB_EN_MASK,		PMIC_RG_LDO_VSIM1_OCFB_EN_SHIFT,		},
    {MT6358_LDO_VSIM1_CON2,		PMIC_DA_VSIM1_OCFB_EN_MASK,		PMIC_DA_VSIM1_OCFB_EN_SHIFT,		},
    {MT6358_VSIM1_ANA_CON0,		PMIC_RG_VSIM1_VOSEL_MASK,		PMIC_RG_VSIM1_VOSEL_SHIFT,		},
    {MT6358_LDO_VSIM2_CON0,		PMIC_RG_LDO_VSIM2_EN_MASK,		PMIC_RG_LDO_VSIM2_EN_SHIFT,		},
    {MT6358_LDO_VSIM2_CON0,		PMIC_RG_LDO_VSIM2_LP_MASK,		PMIC_RG_LDO_VSIM2_LP_SHIFT,		},
    {MT6358_LDO_VSIM2_OP_EN,		PMIC_RG_LDO_VSIM2_SW_OP_EN_MASK,		PMIC_RG_LDO_VSIM2_SW_OP_EN_SHIFT,		},
    {MT6358_LDO_VSIM2_OP_EN,		PMIC_RG_LDO_VSIM2_HW0_OP_EN_MASK,		PMIC_RG_LDO_VSIM2_HW0_OP_EN_SHIFT,		},
    {MT6358_LDO_VSIM2_OP_EN,		PMIC_RG_LDO_VSIM2_HW1_OP_EN_MASK,		PMIC_RG_LDO_VSIM2_HW1_OP_EN_SHIFT,		},
    {MT6358_LDO_VSIM2_OP_EN,		PMIC_RG_LDO_VSIM2_HW2_OP_EN_MASK,		PMIC_RG_LDO_VSIM2_HW2_OP_EN_SHIFT,		},
    {MT6358_LDO_VSIM2_OP_EN_SET,		PMIC_RG_LDO_VSIM2_OP_EN_SET_MASK,		PMIC_RG_LDO_VSIM2_OP_EN_SET_SHIFT,		},
    {MT6358_LDO_VSIM2_OP_EN_CLR,		PMIC_RG_LDO_VSIM2_OP_EN_CLR_MASK,		PMIC_RG_LDO_VSIM2_OP_EN_CLR_SHIFT,		},
    {MT6358_LDO_VSIM2_OP_CFG,		PMIC_RG_LDO_VSIM2_HW0_OP_CFG_MASK,		PMIC_RG_LDO_VSIM2_HW0_OP_CFG_SHIFT,		},
    {MT6358_LDO_VSIM2_OP_CFG,		PMIC_RG_LDO_VSIM2_HW1_OP_CFG_MASK,		PMIC_RG_LDO_VSIM2_HW1_OP_CFG_SHIFT,		},
    {MT6358_LDO_VSIM2_OP_CFG,		PMIC_RG_LDO_VSIM2_HW2_OP_CFG_MASK,		PMIC_RG_LDO_VSIM2_HW2_OP_CFG_SHIFT,		},
    {MT6358_LDO_VSIM2_OP_CFG_SET,		PMIC_RG_LDO_VSIM2_OP_CFG_SET_MASK,		PMIC_RG_LDO_VSIM2_OP_CFG_SET_SHIFT,		},
    {MT6358_LDO_VSIM2_OP_CFG_CLR,		PMIC_RG_LDO_VSIM2_OP_CFG_CLR_MASK,		PMIC_RG_LDO_VSIM2_OP_CFG_CLR_SHIFT,		},
    {MT6358_LDO_VSIM2_CON2,		PMIC_RG_LDO_VSIM2_OCFB_EN_MASK,		PMIC_RG_LDO_VSIM2_OCFB_EN_SHIFT,		},
    {MT6358_LDO_VSIM2_CON2,		PMIC_DA_VSIM2_OCFB_EN_MASK,		PMIC_DA_VSIM2_OCFB_EN_SHIFT,		},
    {MT6358_VSIM2_ANA_CON0,		PMIC_RG_VSIM2_VOSEL_MASK,		PMIC_RG_VSIM2_VOSEL_SHIFT,		},
    {MT6358_LDO_VFE28_CON0,		PMIC_RG_LDO_VFE28_EN_MASK,		PMIC_RG_LDO_VFE28_EN_SHIFT,		},
    {MT6358_LDO_VFE28_CON0,		PMIC_RG_LDO_VFE28_LP_MASK,		PMIC_RG_LDO_VFE28_LP_SHIFT,		},
    {MT6358_LDO_VFE28_OP_EN,		PMIC_RG_LDO_VFE28_SW_OP_EN_MASK,		PMIC_RG_LDO_VFE28_SW_OP_EN_SHIFT,		},
    {MT6358_LDO_VFE28_OP_EN,		PMIC_RG_LDO_VFE28_HW0_OP_EN_MASK,		PMIC_RG_LDO_VFE28_HW0_OP_EN_SHIFT,		},
    {MT6358_LDO_VFE28_OP_EN,		PMIC_RG_LDO_VFE28_HW1_OP_EN_MASK,		PMIC_RG_LDO_VFE28_HW1_OP_EN_SHIFT,		},
    {MT6358_LDO_VFE28_OP_EN,		PMIC_RG_LDO_VFE28_HW2_OP_EN_MASK,		PMIC_RG_LDO_VFE28_HW2_OP_EN_SHIFT,		},
    {MT6358_LDO_VFE28_OP_EN_SET,		PMIC_RG_LDO_VFE28_OP_EN_SET_MASK,		PMIC_RG_LDO_VFE28_OP_EN_SET_SHIFT,		},
    {MT6358_LDO_VFE28_OP_EN_CLR,		PMIC_RG_LDO_VFE28_OP_EN_CLR_MASK,		PMIC_RG_LDO_VFE28_OP_EN_CLR_SHIFT,		},
    {MT6358_LDO_VFE28_OP_CFG,		PMIC_RG_LDO_VFE28_HW0_OP_CFG_MASK,		PMIC_RG_LDO_VFE28_HW0_OP_CFG_SHIFT,		},
    {MT6358_LDO_VFE28_OP_CFG,		PMIC_RG_LDO_VFE28_HW1_OP_CFG_MASK,		PMIC_RG_LDO_VFE28_HW1_OP_CFG_SHIFT,		},
    {MT6358_LDO_VFE28_OP_CFG,		PMIC_RG_LDO_VFE28_HW2_OP_CFG_MASK,		PMIC_RG_LDO_VFE28_HW2_OP_CFG_SHIFT,		},
    {MT6358_LDO_VFE28_OP_CFG,		PMIC_RG_LDO_VFE28_ON_OP_MASK,		PMIC_RG_LDO_VFE28_ON_OP_SHIFT,		},
    {MT6358_LDO_VFE28_OP_CFG,		PMIC_RG_LDO_VFE28_LP_OP_MASK,		PMIC_RG_LDO_VFE28_LP_OP_SHIFT,		},
    {MT6358_LDO_VFE28_OP_CFG_SET,		PMIC_RG_LDO_VFE28_OP_CFG_SET_MASK,		PMIC_RG_LDO_VFE28_OP_CFG_SET_SHIFT,		},
    {MT6358_LDO_VFE28_OP_CFG_CLR,		PMIC_RG_LDO_VFE28_OP_CFG_CLR_MASK,		PMIC_RG_LDO_VFE28_OP_CFG_CLR_SHIFT,		},
    {MT6358_LDO_VFE28_CON1,		PMIC_DA_VFE28_MODE_MASK,		PMIC_DA_VFE28_MODE_SHIFT,		},
    {MT6358_LDO_VFE28_CON1,		PMIC_DA_VFE28_EN_MASK,		PMIC_DA_VFE28_EN_SHIFT,		},
    {MT6358_LDO_VFE28_CON2,		PMIC_RG_LDO_VFE28_OCFB_EN_MASK,		PMIC_RG_LDO_VFE28_OCFB_EN_SHIFT,		},
    {MT6358_LDO_VFE28_CON2,		PMIC_DA_VFE28_OCFB_EN_MASK,		PMIC_DA_VFE28_OCFB_EN_SHIFT,		},
    {MT6358_LDO_VRF18_CON0,		PMIC_RG_LDO_VRF18_EN_MASK,		PMIC_RG_LDO_VRF18_EN_SHIFT,		},
    {MT6358_LDO_VRF18_CON0,		PMIC_RG_LDO_VRF18_LP_MASK,		PMIC_RG_LDO_VRF18_LP_SHIFT,		},
    {MT6358_LDO_VRF18_OP_EN,		PMIC_RG_LDO_VRF18_SW_OP_EN_MASK,		PMIC_RG_LDO_VRF18_SW_OP_EN_SHIFT,		},
    {MT6358_LDO_VRF18_OP_EN,		PMIC_RG_LDO_VRF18_HW0_OP_EN_MASK,		PMIC_RG_LDO_VRF18_HW0_OP_EN_SHIFT,		},
    {MT6358_LDO_VRF18_OP_EN,		PMIC_RG_LDO_VRF18_HW1_OP_EN_MASK,		PMIC_RG_LDO_VRF18_HW1_OP_EN_SHIFT,		},
    {MT6358_LDO_VRF18_OP_EN,		PMIC_RG_LDO_VRF18_HW2_OP_EN_MASK,		PMIC_RG_LDO_VRF18_HW2_OP_EN_SHIFT,		},
    {MT6358_LDO_VRF18_OP_EN_SET,		PMIC_RG_LDO_VRF18_OP_EN_SET_MASK,		PMIC_RG_LDO_VRF18_OP_EN_SET_SHIFT,		},
    {MT6358_LDO_VRF18_OP_EN_CLR,		PMIC_RG_LDO_VRF18_OP_EN_CLR_MASK,		PMIC_RG_LDO_VRF18_OP_EN_CLR_SHIFT,		},
    {MT6358_LDO_VRF18_OP_CFG,		PMIC_RG_LDO_VRF18_HW0_OP_CFG_MASK,		PMIC_RG_LDO_VRF18_HW0_OP_CFG_SHIFT,		},
    {MT6358_LDO_VRF18_OP_CFG,		PMIC_RG_LDO_VRF18_HW1_OP_CFG_MASK,		PMIC_RG_LDO_VRF18_HW1_OP_CFG_SHIFT,		},
    {MT6358_LDO_VRF18_OP_CFG,		PMIC_RG_LDO_VRF18_HW2_OP_CFG_MASK,		PMIC_RG_LDO_VRF18_HW2_OP_CFG_SHIFT,		},
    {MT6358_LDO_VRF18_OP_CFG_SET,		PMIC_RG_LDO_VRF18_OP_CFG_SET_MASK,		PMIC_RG_LDO_VRF18_OP_CFG_SET_SHIFT,		},
    {MT6358_LDO_VRF18_OP_CFG_CLR,		PMIC_RG_LDO_VRF18_OP_CFG_CLR_MASK,		PMIC_RG_LDO_VRF18_OP_CFG_CLR_SHIFT,		},
    {MT6358_LDO_VRF18_CON1,		PMIC_DA_VRF18_MODE_MASK,		PMIC_DA_VRF18_MODE_SHIFT,		},
    {MT6358_LDO_VRF18_CON1,		PMIC_DA_VRF18_EN_MASK,		PMIC_DA_VRF18_EN_SHIFT,		},
    {MT6358_LDO_VRF18_CON2,		PMIC_RG_LDO_VRF18_OCFB_EN_MASK,		PMIC_RG_LDO_VRF18_OCFB_EN_SHIFT,		},
    {MT6358_LDO_VRF18_CON2,		PMIC_DA_VRF18_OCFB_EN_MASK,		PMIC_DA_VRF18_OCFB_EN_SHIFT,		},
    {MT6358_LDO_VRF12_CON0,		PMIC_RG_LDO_VRF12_EN_MASK,		PMIC_RG_LDO_VRF12_EN_SHIFT,		},
    {MT6358_LDO_VRF12_CON0,		PMIC_RG_LDO_VRF12_LP_MASK,		PMIC_RG_LDO_VRF12_LP_SHIFT,		},
    {MT6358_LDO_VRF12_OP_EN,		PMIC_RG_LDO_VRF12_SW_OP_EN_MASK,		PMIC_RG_LDO_VRF12_SW_OP_EN_SHIFT,		},
    {MT6358_LDO_VRF12_OP_EN,		PMIC_RG_LDO_VRF12_HW0_OP_EN_MASK,		PMIC_RG_LDO_VRF12_HW0_OP_EN_SHIFT,		},
    {MT6358_LDO_VRF12_OP_EN,		PMIC_RG_LDO_VRF12_HW1_OP_EN_MASK,		PMIC_RG_LDO_VRF12_HW1_OP_EN_SHIFT,		},
    {MT6358_LDO_VRF12_OP_EN,		PMIC_RG_LDO_VRF12_HW2_OP_EN_MASK,		PMIC_RG_LDO_VRF12_HW2_OP_EN_SHIFT,		},
    {MT6358_LDO_VRF12_OP_EN_SET,		PMIC_RG_LDO_VRF12_OP_EN_SET_MASK,		PMIC_RG_LDO_VRF12_OP_EN_SET_SHIFT,		},
    {MT6358_LDO_VRF12_OP_EN_CLR,		PMIC_RG_LDO_VRF12_OP_EN_CLR_MASK,		PMIC_RG_LDO_VRF12_OP_EN_CLR_SHIFT,		},
    {MT6358_LDO_VRF12_OP_CFG,		PMIC_RG_LDO_VRF12_HW0_OP_CFG_MASK,		PMIC_RG_LDO_VRF12_HW0_OP_CFG_SHIFT,		},
    {MT6358_LDO_VRF12_OP_CFG,		PMIC_RG_LDO_VRF12_HW1_OP_CFG_MASK,		PMIC_RG_LDO_VRF12_HW1_OP_CFG_SHIFT,		},
    {MT6358_LDO_VRF12_OP_CFG,		PMIC_RG_LDO_VRF12_HW2_OP_CFG_MASK,		PMIC_RG_LDO_VRF12_HW2_OP_CFG_SHIFT,		},
    {MT6358_LDO_VRF12_OP_CFG_SET,		PMIC_RG_LDO_VRF12_OP_CFG_SET_MASK,		PMIC_RG_LDO_VRF12_OP_CFG_SET_SHIFT,		},
    {MT6358_LDO_VRF12_OP_CFG_CLR,		PMIC_RG_LDO_VRF12_OP_CFG_CLR_MASK,		PMIC_RG_LDO_VRF12_OP_CFG_CLR_SHIFT,		},
    {MT6358_LDO_VRF12_CON1,		PMIC_DA_VRF12_MODE_MASK,		PMIC_DA_VRF12_MODE_SHIFT,		},
    {MT6358_LDO_VRF12_CON1,		PMIC_DA_VRF12_EN_MASK,		PMIC_DA_VRF12_EN_SHIFT,		},
    {MT6358_LDO_VRF12_CON2,		PMIC_RG_LDO_VRF12_OCFB_EN_MASK,		PMIC_RG_LDO_VRF12_OCFB_EN_SHIFT,		},
    {MT6358_LDO_VRF12_CON2,		PMIC_DA_VRF12_OCFB_EN_MASK,		PMIC_DA_VRF12_OCFB_EN_SHIFT,		},
    {MT6358_VXO22_ANA_CON0,		PMIC_RG_VXO22_VOSEL_MASK,		PMIC_RG_VXO22_VOSEL_SHIFT,		},
    {MT6358_DCXO_CW00,		PMIC_XO_EXTBUF1_MODE_MASK,		PMIC_XO_EXTBUF1_MODE_SHIFT,		},
    {MT6358_DCXO_CW00,		PMIC_XO_EXTBUF1_EN_M_MASK,		PMIC_XO_EXTBUF1_EN_M_SHIFT,		},
    {MT6358_DCXO_CW00,		PMIC_XO_EXTBUF2_MODE_MASK,		PMIC_XO_EXTBUF2_MODE_SHIFT,		},
    {MT6358_DCXO_CW00,		PMIC_XO_EXTBUF2_EN_M_MASK,		PMIC_XO_EXTBUF2_EN_M_SHIFT,		},
    {MT6358_DCXO_CW00,		PMIC_XO_EXTBUF3_MODE_MASK,		PMIC_XO_EXTBUF3_MODE_SHIFT,		},
    {MT6358_DCXO_CW00,		PMIC_XO_EXTBUF3_EN_M_MASK,		PMIC_XO_EXTBUF3_EN_M_SHIFT,		},
    {MT6358_DCXO_CW00,		PMIC_XO_EXTBUF4_MODE_MASK,		PMIC_XO_EXTBUF4_MODE_SHIFT,		},
    {MT6358_DCXO_CW00,		PMIC_XO_EXTBUF4_EN_M_MASK,		PMIC_XO_EXTBUF4_EN_M_SHIFT,		},
    {MT6358_DCXO_CW00,		PMIC_XO_BB_LPM_EN_MASK,		PMIC_XO_BB_LPM_EN_SHIFT,		},
    {MT6358_DCXO_CW00,		PMIC_XO_ENBB_MAN_MASK,		PMIC_XO_ENBB_MAN_SHIFT,		},
    {MT6358_DCXO_CW00,		PMIC_XO_ENBB_EN_M_MASK,		PMIC_XO_ENBB_EN_M_SHIFT,		},
    {MT6358_DCXO_CW00,		PMIC_XO_CLKSEL_MAN_MASK,		PMIC_XO_CLKSEL_MAN_SHIFT,		},
    {MT6358_DCXO_CW00_SET,		PMIC_DCXO_CW00_SET_MASK,		PMIC_DCXO_CW00_SET_SHIFT,		},
    {MT6358_DCXO_CW00_CLR,		PMIC_DCXO_CW00_CLR_MASK,		PMIC_DCXO_CW00_CLR_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_EN32K_MAN_MASK,		PMIC_XO_EN32K_MAN_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_EN32K_M_MASK,		PMIC_XO_EN32K_M_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_XMODE_MAN_MASK,		PMIC_XO_XMODE_MAN_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_XMODE_M_MASK,		PMIC_XO_XMODE_M_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_STRUP_MODE_MASK,		PMIC_XO_STRUP_MODE_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_AAC_FPM_TIME_MASK,		PMIC_XO_AAC_FPM_TIME_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_AAC_MODE_LPM_MASK,		PMIC_XO_AAC_MODE_LPM_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_AAC_MODE_FPM_MASK,		PMIC_XO_AAC_MODE_FPM_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_EN26M_OFFSQ_EN_MASK,		PMIC_XO_EN26M_OFFSQ_EN_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_LDOCAL_EN_MASK,		PMIC_XO_LDOCAL_EN_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_CBANK_SYNC_DYN_MASK,		PMIC_XO_CBANK_SYNC_DYN_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_26MLP_MAN_EN_MASK,		PMIC_XO_26MLP_MAN_EN_SHIFT,		},
    {MT6358_DCXO_CW02,		PMIC_XO_BUFLDOK_EN_MASK,		PMIC_XO_BUFLDOK_EN_SHIFT,		},
    {MT6358_DCXO_CW04,		PMIC_XO_CDAC_FPM_MASK,		PMIC_XO_CDAC_FPM_SHIFT,		},
    {MT6358_DCXO_CW04,		PMIC_XO_CDAC_LPM_MASK,		PMIC_XO_CDAC_LPM_SHIFT,		},
    {MT6358_DCXO_CW05,		PMIC_XO_32KDIV_NFRAC_FPM_MASK,		PMIC_XO_32KDIV_NFRAC_FPM_SHIFT,		},
    {MT6358_DCXO_CW05,		PMIC_XO_COFST_FPM_MASK,		PMIC_XO_COFST_FPM_SHIFT,		},
    {MT6358_DCXO_CW06,		PMIC_XO_32KDIV_NFRAC_LPM_MASK,		PMIC_XO_32KDIV_NFRAC_LPM_SHIFT,		},
    {MT6358_DCXO_CW06,		PMIC_XO_COFST_LPM_MASK,		PMIC_XO_COFST_LPM_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_CORE_MAN_MASK,		PMIC_XO_CORE_MAN_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_CORE_EN_M_MASK,		PMIC_XO_CORE_EN_M_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_CORE_TURBO_EN_M_MASK,		PMIC_XO_CORE_TURBO_EN_M_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_CORE_AAC_EN_M_MASK,		PMIC_XO_CORE_AAC_EN_M_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_STARTUP_EN_M_MASK,		PMIC_XO_STARTUP_EN_M_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_CORE_VBFPM_EN_M_MASK,		PMIC_XO_CORE_VBFPM_EN_M_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_CORE_VBLPM_EN_M_MASK,		PMIC_XO_CORE_VBLPM_EN_M_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_LPMBIAS_EN_M_MASK,		PMIC_XO_LPMBIAS_EN_M_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_VTCGEN_EN_M_MASK,		PMIC_XO_VTCGEN_EN_M_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_IAAC_COMP_EN_M_MASK,		PMIC_XO_IAAC_COMP_EN_M_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_IFPM_COMP_EN_M_MASK,		PMIC_XO_IFPM_COMP_EN_M_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_ILPM_COMP_EN_M_MASK,		PMIC_XO_ILPM_COMP_EN_M_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_CORE_BYPCAS_FPM_MASK,		PMIC_XO_CORE_BYPCAS_FPM_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_CORE_GMX2_FPM_MASK,		PMIC_XO_CORE_GMX2_FPM_SHIFT,		},
    {MT6358_DCXO_CW07,		PMIC_XO_CORE_IDAC_FPM_MASK,		PMIC_XO_CORE_IDAC_FPM_SHIFT,		},
    {MT6358_DCXO_CW09,		PMIC_XO_CORE_BYPCAS_LPM_MASK,		PMIC_XO_CORE_BYPCAS_LPM_SHIFT,		},
    {MT6358_DCXO_CW09,		PMIC_XO_CORE_GMX2_LPM_MASK,		PMIC_XO_CORE_GMX2_LPM_SHIFT,		},
    {MT6358_DCXO_CW09,		PMIC_XO_CORE_IDAC_LPM_MASK,		PMIC_XO_CORE_IDAC_LPM_SHIFT,		},
    {MT6358_DCXO_CW09,		PMIC_XO_AAC_COMP_HV_LPM_MASK,		PMIC_XO_AAC_COMP_HV_LPM_SHIFT,		},
    {MT6358_DCXO_CW09,		PMIC_XO_AAC_VSEL_LPM_MASK,		PMIC_XO_AAC_VSEL_LPM_SHIFT,		},
    {MT6358_DCXO_CW09,		PMIC_XO_AAC_HV_LPM_MASK,		PMIC_XO_AAC_HV_LPM_SHIFT,		},
    {MT6358_DCXO_CW09,		PMIC_XO_AAC_IBIAS_LPM_MASK,		PMIC_XO_AAC_IBIAS_LPM_SHIFT,		},
    {MT6358_DCXO_CW09,		PMIC_XO_AAC_VOFST_LPM_MASK,		PMIC_XO_AAC_VOFST_LPM_SHIFT,		},
    {MT6358_DCXO_CW09,		PMIC_XO_AAC_FPM_SWEN_MASK,		PMIC_XO_AAC_FPM_SWEN_SHIFT,		},
    {MT6358_DCXO_CW09,		PMIC_XO_SWRST_MASK,		PMIC_XO_SWRST_SHIFT,		},
    {MT6358_DCXO_CW18,		PMIC_XO_STATIC_AUXOUT_SEL_MASK,		PMIC_XO_STATIC_AUXOUT_SEL_SHIFT,		},
    {MT6358_DCXO_CW18,		PMIC_XO_AUXOUT_SEL_MASK,		PMIC_XO_AUXOUT_SEL_SHIFT,		},
    {MT6358_DCXO_CW19,		PMIC_XO_STATIC_AUXOUT_MASK,		PMIC_XO_STATIC_AUXOUT_SHIFT,		},
    {MT6358_AUXADC_ADC16,		PMIC_AUXADC_ADC_OUT_CH7_BY_MD_MASK,		PMIC_AUXADC_ADC_OUT_CH7_BY_MD_SHIFT,		},
    {MT6358_AUXADC_ADC16,		PMIC_AUXADC_ADC_RDY_CH7_BY_MD_MASK,		PMIC_AUXADC_ADC_RDY_CH7_BY_MD_SHIFT,		},
    {MT6358_AUXADC_RQST1,		PMIC_AUXADC_RQST_CH7_BY_MD_MASK,		PMIC_AUXADC_RQST_CH7_BY_MD_SHIFT,		},
    {MT6358_VRF18_ANA_CON0,		PMIC_RG_VRF18_VOCAL_MASK,		PMIC_RG_VRF18_VOCAL_SHIFT,		},
    {MT6358_VRF12_ANA_CON0,		PMIC_RG_VRF12_VOCAL_MASK,		PMIC_RG_VRF12_VOCAL_SHIFT,		},
    {MT6358_VRF18_ELR_0,		PMIC_RG_VRF18_VOTRIM_MASK,		PMIC_RG_VRF18_VOTRIM_SHIFT,		},
    {MT6358_VRF12_ELR_0,		PMIC_RG_VRF12_VOTRIM_MASK,		PMIC_RG_VRF12_VOTRIM_SHIFT,		},
    {MT6358_BUCK_TOP_OC_CON0,	PMIC_RG_BUCK_VPA_OC_SDN_STATUS_MASK,	PMIC_RG_BUCK_VPA_OC_SDN_STATUS_SHIFT,	},
    {MT6358_BUCK_TOP_ELR0,		PMIC_RG_BUCK_VPA_OC_SDN_EN_MASK,		PMIC_RG_BUCK_VPA_OC_SDN_EN_SHIFT,		},
};
#if defined(DCL_PMIC_MODULE_CONTROL)
DCL_HANDLE current_dcl_handle = 0;
#endif

//#define DCL_PMIC_PERMISSION_CONTROL
#if defined(DCL_PMIC_PERMISSION_CONTROL)
PMU_CTRL_MISC_SET_REGISTER_VALUE	illegal_misc_set_register_value = {0};
#endif

//////////////////////////////////////////////////
//                  WRITE APIs                  //
//////////////////////////////////////////////////
#if defined(DCL_PMIC_PERMISSION_CONTROL)
DCL_BOOL dcl_pmic_check_permission(kal_uint16 offset)
{
	DCL_BOOL ret = DCL_FALSE;
	kal_uint8 c = ((offset>>8) & 0xFF);

	switch(c)
    {
		case 0x82:
        {
			//CLK : TOP_CLKSQ_SET (0x8226),TOP_CKPDN_CON0_CLR (0x8204),TOP_CLKSQ(0x8224)
			if(offset == 0x8226 || offset == 0x8204 || offset == 0x8224)
				ret=DCL_TRUE;
        }
        break;

		case 0x90:
        {
		    //LDO_DIG: 0x901A,0x901C, 0x9006, 0x9008
            if(offset == 0x901A || offset == 0x901C || offset == 0x9006 || offset == 0x9008)
				ret=DCL_TRUE;
        }
        break;

        case 0x98:
        {
			//Audio Analog : 0x9800~0x9852
            if(offset >= 0x9800 && offset <= 0x9852)
				ret=DCL_TRUE;
        }
        break;

		case 0x9A:
        {
			//Audio DRE : 0x9A00 ~0x9A0A
			if(offset >= 0x9A00 && offset <= 0x9A0A)
				ret=DCL_TRUE;
        }
        break;

		case 0xE0:
		case 0xE1:
        {
			//Audio digital : 0xE000 ~0xE138
			if(offset >= 0xE000 && offset <= 0xE138)
				ret=DCL_TRUE;
        }
        break;

        default:
			ret=DCL_FALSE;
        break;
    }
	return ret;
}
#endif
// Write Whole Bytes
void dcl_pmic_byte_write(DCL_UINT16 addr, DCL_UINT16 val)
{
	DCL_UINT32 idx, type;

	kal_take_spinlock(dcl_pmic_access_spinlock, KAL_INFINITE_WAIT);

	type = PMIC_LOG_TYPE_NORMAL_DOMAIN;
	idx = pmic_access_duration_index[type];


#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time = ust_get_current_time();
#endif
    if(addr < PMIC_MAX_REG_NUM)
    {
        pmic_reg[addr] = val;
    }

	DrvPWRAP_WACS0(PMIC_WRAP_WRITE, addr, val, 0x00);

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time = ust_get_current_time();
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time,
																							 pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time);
#endif
	kal_give_spinlock(dcl_pmic_access_spinlock);
}

// Write Whole Bytes
void dcl_pmic_byte_write_nolock(DCL_UINT16 addr, DCL_UINT16 val)
{
	DCL_UINT32 idx, type;

	if( DclPMU_GetHrtFlag()!= 0) //if(HRT)
		type = PMIC_LOG_TYPE_HRT_DOMAIN;
	else
		type = PMIC_LOG_TYPE_NORMAL_DOMAIN;

	idx = pmic_access_duration_index[type];

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time = ust_get_current_time();
#endif


    if(addr < PMIC_MAX_REG_NUM)
    {
        pmic_reg[addr] = val;
    }

//	if( DclPMU_GetHrtFlag()!= 0) //if(HRT)
		DrvPWRAP_WACS0(PMIC_WRAP_WRITE, addr, val, 0x00);
//	else
//		DrvPWRAP_WACS0(PMIC_WRAP_WRITE, addr, val, 0x00);

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time = ust_get_current_time();
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time,
																							 pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time);
#endif

}

// Write register field
void dcl_pmic_field_write(PMIC6358_FLAGS_LIST_ENUM flag, DCL_UINT16 sel)
{
    const PMIC_FLAG_TABLE_ENTRY *pTable = pmic_flags_table;
	DCL_UINT32 type = PMIC_LOG_TYPE_NORMAL_DOMAIN;
	DCL_UINT32 idx = pmic_access_duration_index[type];

	kal_take_spinlock(dcl_pmic_access_spinlock, KAL_INFINITE_WAIT);
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time = ust_get_current_time();
#endif

    pmic_reg_log.command_flag = flag;
    pmic_reg_log.reg_before_write = pmic_reg[pTable[flag].offset];

    pmic_reg[pTable[flag].offset] &= ~(pTable[flag].mask << pTable[flag].shift);
    pmic_reg[pTable[flag].offset] |= ((kal_uint16)sel << pTable[flag].shift);

//	if( DclPMU_GetHrtFlag()!= 0) //if(HRT)
		DrvPWRAP_WACS0(PMIC_WRAP_WRITE, pTable[flag].offset, pmic_reg[pTable[flag].offset], 0x00);
//	else
//		DrvPWRAP_WACS0(PMIC_WRAP_WRITE, pTable[flag].offset, pmic_reg[pTable[flag].offset], 0x00);

    pmic_reg_log.write_value = sel;
    pmic_reg_log.address_offset = pTable[flag].offset;
    pmic_reg_log.reg_mask = pTable[flag].mask;
    pmic_reg_log.reg_shift = pTable[flag].shift;
    pmic_reg_log.reg_addr = pTable[flag].offset;
    pmic_reg_log.reg_data = pmic_reg[pTable[flag].offset];

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time = ust_get_current_time();
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time, 																						 pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time);
#endif

	kal_give_spinlock(dcl_pmic_access_spinlock);
}

// Write register field
void dcl_pmic_field_write_nolock(PMIC6358_FLAGS_LIST_ENUM flag, DCL_UINT16 sel)
{
    const PMIC_FLAG_TABLE_ENTRY *pTable = pmic_flags_table;
	DCL_UINT32 type = PMIC_LOG_TYPE_NORMAL_DOMAIN;
	DCL_UINT32 idx = pmic_access_duration_index[type];

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time = ust_get_current_time();
#endif

    pmic_reg_log.command_flag = flag;
    pmic_reg_log.reg_before_write = pmic_reg[pTable[flag].offset];

    pmic_reg[pTable[flag].offset] &= ~(pTable[flag].mask << pTable[flag].shift);
    pmic_reg[pTable[flag].offset] |= ((kal_uint16)sel << pTable[flag].shift);

//	if( DclPMU_GetHrtFlag()!= 0) //if(HRT)
		DrvPWRAP_WACS0(PMIC_WRAP_WRITE, pTable[flag].offset, pmic_reg[pTable[flag].offset], 0x00);
//	else
//		DrvPWRAP_WACS0(PMIC_WRAP_WRITE, pTable[flag].offset, pmic_reg[pTable[flag].offset], 0x00);

    pmic_reg_log.write_value = sel;
    pmic_reg_log.address_offset = pTable[flag].offset;
    pmic_reg_log.reg_mask = pTable[flag].mask;
    pmic_reg_log.reg_shift = pTable[flag].shift;
    pmic_reg_log.reg_addr = pTable[flag].offset;
    pmic_reg_log.reg_data = pmic_reg[pTable[flag].offset];

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time = ust_get_current_time();
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time, 																						 pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time);
#endif

}
//////////////////////////////////////////////////
//                  READ APIs                   //
//////////////////////////////////////////////////

// Read Whole Bytes
DCL_UINT16 dcl_pmic_byte_return(DCL_UINT16 addr)
{
    DCL_UINT16 reg_temp;
	DCL_UINT32 idx, type;

	kal_take_spinlock(dcl_pmic_access_spinlock, KAL_INFINITE_WAIT);

	type = PMIC_LOG_TYPE_NORMAL_DOMAIN;
	idx = pmic_access_duration_index[type];

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time = ust_get_current_time();
#endif

//	if( DclPMU_GetHrtFlag()!= 0) //if(HRT)
		DrvPWRAP_WACS0(PMIC_WRAP_READ, (DCL_UINT32)addr, 0x00, &reg_temp);
//	else
//		DrvPWRAP_WACS0(PMIC_WRAP_READ, (DCL_UINT32)addr, 0x00, &reg_temp);

    if(addr < PMIC_MAX_REG_NUM)
    {
        pmic_reg[addr] = reg_temp;
    }

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time = ust_get_current_time();
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time, 																						 pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time);
#endif

	kal_give_spinlock(dcl_pmic_access_spinlock);

    return reg_temp;
}

// Read Whole Bytes
DCL_UINT16 dcl_pmic_byte_return_nolock(DCL_UINT16 addr)
{
    DCL_UINT16 reg_temp;
	DCL_UINT32 idx, type;

	if( DclPMU_GetHrtFlag()!= 0) //if(HRT)
		type = PMIC_LOG_TYPE_HRT_DOMAIN;
	else
		type = PMIC_LOG_TYPE_NORMAL_DOMAIN;

	idx = pmic_access_duration_index[type];

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time = ust_get_current_time();
#endif

//	if( DclPMU_GetHrtFlag()!= 0) //if(HRT)
		DrvPWRAP_WACS0(PMIC_WRAP_READ, (DCL_UINT32)addr, 0x00, &reg_temp);
//	else
//		DrvPWRAP_WACS0(PMIC_WRAP_READ, (DCL_UINT32)addr, 0x00, &reg_temp);

    if(addr < PMIC_MAX_REG_NUM)
    {
        pmic_reg[addr] = reg_temp;
    }

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time = ust_get_current_time();
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time, 																						 pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time);
#endif

    return reg_temp;
}

// Read register field
DCL_UINT16 dcl_pmic_field_read(PMIC6358_FLAGS_LIST_ENUM flag)
{
    const PMIC_FLAG_TABLE_ENTRY *pTable = pmic_flags_table;
    DCL_UINT16 reg_return = 0;
	DCL_UINT32 type = PMIC_LOG_TYPE_NORMAL_DOMAIN;
	DCL_UINT32 idx = pmic_access_duration_index[type];

	if( DclPMU_GetHrtFlag()!= 0) //if(HRT)
		type = PMIC_LOG_TYPE_HRT_DOMAIN;
	else
		type = PMIC_LOG_TYPE_NORMAL_DOMAIN;

	idx = pmic_access_duration_index[type];


#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time = ust_get_current_time();
#endif

//	if( DclPMU_GetHrtFlag()!= 0) //if(HRT)
		DrvPWRAP_WACS0(PMIC_WRAP_READ, pTable[flag].offset, 0x00, &pmic_reg[pTable[flag].offset]);
//	else
//		DrvPWRAP_WACS0(PMIC_WRAP_READ, pTable[flag].offset, 0x00, &pmic_reg[pTable[flag].offset]);

    reg_return = ((pmic_reg[pTable[flag].offset] & (pTable[flag].mask << pTable[flag].shift)) >> pTable[flag].shift);

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time = ust_get_current_time();
    pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].start_time,
																							 pmic_access_duration_log[type][PMIC_INTERFACE_DBG][idx].end_time);
#endif

    return reg_return;
}

// Exported for EM used
void pmic_EM_reg_write(kal_uint16 reg, kal_uint16 val){
	dcl_pmic_byte_write_nolock(reg, val);
//	  dcl_pmic_byte_write(reg, val);
}

kal_uint16 pmic_EM_reg_read(kal_uint16 reg){
	return  dcl_pmic_byte_return_nolock(reg);
}

const DCL_UINT32 vpa_vosel[] =
{
    PMU_VOLT_00_500000_V,   PMU_VOLT_INVALID,   PMU_VOLT_00_600000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_00_700000_V,   PMU_VOLT_INVALID,   PMU_VOLT_00_800000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_00_900000_V,   PMU_VOLT_INVALID,   PMU_VOLT_01_000000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_01_100000_V,   PMU_VOLT_INVALID,   PMU_VOLT_01_200000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_01_300000_V,   PMU_VOLT_INVALID,   PMU_VOLT_01_400000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_01_500000_V,   PMU_VOLT_INVALID,   PMU_VOLT_01_600000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_01_700000_V,   PMU_VOLT_INVALID,   PMU_VOLT_01_800000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_01_900000_V,   PMU_VOLT_INVALID,   PMU_VOLT_02_000000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_02_100000_V,   PMU_VOLT_INVALID,   PMU_VOLT_02_200000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_02_300000_V,   PMU_VOLT_INVALID,   PMU_VOLT_02_400000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_02_500000_V,   PMU_VOLT_INVALID,   PMU_VOLT_02_600000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_02_700000_V,   PMU_VOLT_INVALID,   PMU_VOLT_02_800000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_02_900000_V,   PMU_VOLT_INVALID,   PMU_VOLT_03_000000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_03_100000_V,   PMU_VOLT_INVALID,   PMU_VOLT_03_200000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_03_300000_V,   PMU_VOLT_INVALID,   PMU_VOLT_03_400000_V,   PMU_VOLT_INVALID,
    PMU_VOLT_03_500000_V,   PMU_VOLT_INVALID,   PMU_VOLT_03_600000_V,   PMU_VOLT_INVALID,
};

const DCL_UINT32 vsim1_vosel[] =
{
    PMU_VOLT_INVALID,       PMU_VOLT_INVALID,  PMU_VOLT_INVALID,   PMU_VOLT_01_700000_V,
    PMU_VOLT_01_800000_V,   PMU_VOLT_INVALID,  PMU_VOLT_INVALID,   PMU_VOLT_INVALID,
    PMU_VOLT_02_700000_V,   PMU_VOLT_INVALID,  PMU_VOLT_INVALID,   PMU_VOLT_03_000000_V,
    PMU_VOLT_03_100000_V,   PMU_VOLT_INVALID,  PMU_VOLT_INVALID,   PMU_VOLT_INVALID,
};

const DCL_UINT32 vxo22_vosel[] =
{
    PMU_VOLT_01_800000_V,       PMU_VOLT_02_200000_V,  PMU_VOLT_INVALID,   PMU_VOLT_INVALID,
    PMU_VOLT_INVALID,   PMU_VOLT_INVALID,  PMU_VOLT_INVALID,   PMU_VOLT_INVALID,
};

const DCL_UINT32 vmodem_vosel[] =
{
    PMU_VOLT_00_500000_V,	PMU_VOLT_00_550000_V,	PMU_VOLT_00_600000_V,	PMU_VOLT_00_750000_V,
    PMU_VOLT_00_800000_V,	PMU_VOLT_00_850000_V,	PMU_VOLT_INVALID,	PMU_VOLT_INVALID,
};

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

const DCL_UINT32 vsram_vmd_vosel[] =
{
    PMU_VOLT_00_550000_V,   PMU_VOLT_00_600000_V,	PMU_VOLT_00_650000_V,	PMU_VOLT_00_750000_V,
    PMU_VOLT_00_800000_V,	PMU_VOLT_00_850000_V,	PMU_VOLT_INVALID,	PMU_VOLT_INVALID,
};

PMU_PARAMETER_TABLE_ENTRY pmu_parameter_table[]=
{
	{ENC(LDO_BUCK_SET_VOLTAGE, VPA_SW),		    	vpa_vosel,		    NULL,	    GETARRNUM(vpa_vosel)			},
	{ENC(LDO_BUCK_SET_VOLTAGE, VPA),		    	vpa_vosel,		    NULL,	    GETARRNUM(vpa_vosel)			},
	{ENC(LDO_BUCK_SET_VOLTAGE, VSIM1),		    	vsim1_vosel,		NULL,	    GETARRNUM(vsim1_vosel)			},
    {ENC(LDO_BUCK_SET_VOLTAGE, VSIM2),		    	vsim1_vosel,		NULL,   	GETARRNUM(vsim1_vosel)	    	},
	{ENC(LDO_BUCK_SET_VOLTAGE, VXO22),		    	vxo22_vosel,		NULL,   	GETARRNUM(vxo22_vosel)	    	},
	{ENC(LDO_BUCK_SET_SLEEP_VOLTAGE, VMODEM),		vmodem_vosel,		NULL,		GETARRNUM(vmodem_vosel)			},
    {ENC(LDO_BUCK_SET_SLEEP_VOLTAGE, VSRAM_MD),		vsram_vmd_vosel,	NULL,   	GETARRNUM(vsram_vmd_vosel)		},
};


extern PMU_CONTROL_HANDLER pmu_control_handler;

DCL_UINT16 pmu_parameter_size = 0;

DCL_STATUS PMIC_control_handler(DCL_HANDLE handle,DCL_CTRL_CMD cmd,DCL_CTRL_DATA_T *data)
{
    DCL_UINT16	regVal;
    DCL_INT32	return_val = STATUS_FAIL;
#if defined(DCL_PMIC_MODULE_CONTROL)
	current_dcl_handle = handle;
#endif
    switch(cmd)
    {
        case LDO_BUCK_SET_EN:	//Enable control in SW mode
        {
            PMU_CTRL_LDO_BUCK_SET_EN *pLdoBuckCtrl=&(data->rPMULdoBuckSetEn);

            switch(pLdoBuckCtrl->mod)
            {
				case VMODEM:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VMODEM_EN, pLdoBuckCtrl->enable);
                    return_val = STATUS_OK;
                }
                break;

				case VPA_SW:
                {
                    dcl_pmic_field_write_nolock(PMIC_ENUM_RG_BUCK_VPA_EN, pLdoBuckCtrl->enable);
                    return_val = STATUS_OK;
                }
                break;

				case VSIM1:
                {
                    /* Clear INT_STATUS_VSIM1_OC before Enable VSIM1 */
                    if (pLdoBuckCtrl->enable == 0x1)
                    	dcl_pmic_byte_write_nolock(MT6358_LDO_TOP_INT_STATUS1, 0x400);

                    dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM1_EN, pLdoBuckCtrl->enable);
                    return_val = STATUS_OK;
                }
                break;

				case VSIM2:
                {
                    /* Clear INT_STATUS_VSIM2_OC before Enable VSIM2 */
                    if (pLdoBuckCtrl->enable == 0x1)
                    	dcl_pmic_byte_write_nolock(MT6358_LDO_TOP_INT_STATUS1, 0x800);

                    dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM2_EN, pLdoBuckCtrl->enable);
                    return_val = STATUS_OK;
                }
                break;

				case VFE28:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VFE28_EN, pLdoBuckCtrl->enable);
                    return_val = STATUS_OK;
                }
                break;

                case VRF18:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VRF18_EN, pLdoBuckCtrl->enable);
                    return_val = STATUS_OK;
                }
                break;

                case VRF12:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VRF12_EN, pLdoBuckCtrl->enable);
                    return_val = STATUS_OK;
                }
                break;

				case VS1:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VS1_VOTER_EN, pLdoBuckCtrl->enable);
                    return_val = STATUS_OK;
                }
                break;

				case VS2:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VS2_VOTER_EN, pLdoBuckCtrl->enable);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
        }
        break;

		case LDO_BUCK_SET_LP_MODE_SET:
        {
            PMU_CTRL_LDO_BUCK_SET_LP_MODE_SET *pLdoBuckCtrl =& (data->rPMULdoBuckSetLpModeSet);

            switch(pLdoBuckCtrl->mod)
            {
				case VMODEM:
				{	// 1'b0:Normal mode, 1'b1:Low power mode
				    dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VMODEM_LP, pLdoBuckCtrl->enable);
				    return_val = STATUS_OK;
				}
                break;

				case VSIM1:
				{	// 1'b0:Normal mode, 1'b1:Low power mode
				    dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM1_LP, pLdoBuckCtrl->enable);
				    return_val = STATUS_OK;
				}
				break;

				case VSIM2:
				{	// 1'b0:Normal mode, 1'b1:Low power mode
				    dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM2_LP, pLdoBuckCtrl->enable);
				    return_val = STATUS_OK;
				}
				break;

				case VFE28:
				{	// 1'b0:Normal mode, 1'b1:Low power mode
				    dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VFE28_LP, pLdoBuckCtrl->enable);
				    return_val = STATUS_OK;
				}
				break;

				case VRF18:
				{	// 1'b0:Normal mode, 1'b1:Low power mode
				    dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VRF18_LP, pLdoBuckCtrl->enable);
				    return_val = STATUS_OK;
				}
				break;

				case VRF12:
				{	// 1'b0:Normal mode, 1'b1:Low power mode
				    dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VRF12_LP, pLdoBuckCtrl->enable);
				    return_val = STATUS_OK;
				}
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
        }
        break;

		 case LDO_BUCK_SET_OCFB_EN:
        {
            PMU_CTRL_LDO_BUCK_SET_OCFB_EN *pLdoBuckCtrl=&(data->rPMULdoBuckSetOcfbEn);

                switch(pLdoBuckCtrl->mod)
                {
                    case VSIM1:
                    {
                        dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM1_OCFB_EN, pLdoBuckCtrl->enable);
                        return_val = STATUS_OK;
                    }
                    break;

                    case VSIM2:
                    {
                        dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM2_OCFB_EN, pLdoBuckCtrl->enable);
                        return_val = STATUS_OK;
                    }
                    break;

                    default:
                        return_val = STATUS_UNSUPPORTED;
                    break;
                }
        }
        break;

		case LDO_BUCK_GET_VOSEL:
        {
            PMU_CTRL_LDO_BUCK_GET_VOSEL *pLdoBuckCtrl = &(data->rPMULdoBuckGetVosel);

            switch(pLdoBuckCtrl->mod)
            {
                case VCORE:
                {
					pLdoBuckCtrl->code = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_RG_BUCK_VCORE_VOSEL);
                    return_val = STATUS_OK;
                }
                break;

                case VSRAM_OTHERS:
                {
					pLdoBuckCtrl->code = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_RG_LDO_VSRAM_OTHERS_VOSEL);
                    return_val = STATUS_OK;
                }
                break;

                case VMODEM:
                {
					pLdoBuckCtrl->code = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_RG_BUCK_VMODEM_VOSEL);
                    return_val = STATUS_OK;
                }
                break;

                case VS1:
                {
					pLdoBuckCtrl->code = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_RG_BUCK_VS1_VOTER_VOSEL);
                    return_val = STATUS_OK;
                }
                break;

                case VS2:
                {
					pLdoBuckCtrl->code = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_RG_BUCK_VS2_VOTER_VOSEL);
                    return_val = STATUS_OK;
                }
                break;


                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
        }
        break;

		case LDO_BUCK_SET_VOSEL:
        {
            PMU_CTRL_LDO_BUCK_SET_VOSEL *pLdoBuckCtrl = &(data->rPMULdoBuckSetVosel);

            switch(pLdoBuckCtrl->mod)
            {
                case VCORE:
                {
					dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VCORE_VOSEL, pLdoBuckCtrl->code);
                    return_val = STATUS_OK;
                }
                break;

                case VMODEM:
                {
					dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VMODEM_VOSEL, pLdoBuckCtrl->code);
                    return_val = STATUS_OK;
                }
                break;

                case VS1:
                {
					dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VS1_VOTER_VOSEL, pLdoBuckCtrl->code);
                    return_val = STATUS_OK;
                }
                break;

                case VS2:
                {
					dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VS2_VOTER_VOSEL, pLdoBuckCtrl->code);
                    return_val = STATUS_OK;
                }
                break;

                case VSRAM_OTHERS:
                {
					dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSRAM_OTHERS_VOSEL, pLdoBuckCtrl->code);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
        }
        break;

		case LDO_BUCK_GET_VOSEL_SLEEP:
        {
            PMU_CTRL_LDO_BUCK_GET_VOSEL_SLEEP *pLdoBuckCtrl = &(data->rPMULdoBuckGetVoselSleep);

            switch(pLdoBuckCtrl->mod)
            {
				case VCORE:
                {
					pLdoBuckCtrl->code = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_RG_BUCK_VCORE_VOSEL_SLEEP);
                    return_val = STATUS_OK;
                }
                break;

				case VMODEM:
                {
					pLdoBuckCtrl->code = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_RG_BUCK_VMODEM_VOSEL_SLEEP);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
        }
        break;

		case LDO_BUCK_SET_VOSEL_SLEEP:
        {
            PMU_CTRL_LDO_BUCK_SET_VOSEL_SLEEP *pLdoBuckCtrl = &(data->rPMULdoBuckSetVoselSleep);

            switch(pLdoBuckCtrl->mod)
            {
				case VMODEM:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VMODEM_VOSEL_SLEEP, pLdoBuckCtrl->code);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
        }
        break;

		case LDO_BUCK_SET_MODESET:
		{
    	    PMU_CTRL_LDO_BUCK_SET_MODESET *pLdoBuckCtrl = &(data->rPMULdoBuckSetModeset);

            switch(pLdoBuckCtrl->mod)
            {
                case VPA_SW:
                {
                    dcl_pmic_field_write_nolock(PMIC_ENUM_RG_VPA_MODESET, pLdoBuckCtrl->mode);
                    return_val = STATUS_OK;
                }
                break;

                case VMODEM:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VMODEM_FPWM, pLdoBuckCtrl->mode);
                    return_val = STATUS_OK;
                }
                break;

				case VS2:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VS2_FPWM, pLdoBuckCtrl->mode);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_SET_COT:
		{
    	    PMU_CTRL_LDO_BUCK_SET_COT *pLdoBuckCtrl = &(data->rPMULdoBuckSetCotset);

            switch(pLdoBuckCtrl->mod)
            {
                case VCORE:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VCORE_FCOT, pLdoBuckCtrl->mode);
                    return_val = STATUS_OK;
                }
                break;

                case VMODEM:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VMODEM_FCOT, pLdoBuckCtrl->mode);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_GET_COT:
		{
            PMU_CTRL_LDO_BUCK_GET_COT *pLdoBuckCtrl = &(data->rPMULdoBuckGetCot);

            switch(pLdoBuckCtrl->mod)
            {
				case VCORE:
                {
					pLdoBuckCtrl->mode = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_RG_VCORE_FCOT);
                    return_val = STATUS_OK;
                }
                break;

				case VMODEM:
                {
					pLdoBuckCtrl->mode = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_RG_VMODEM_FCOT);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_SET_OP_EN:
		{
    	    PMU_CTRL_LDO_BUCK_SET_OP_EN *pLdoBuckCtrl = &(data->rPMULdoBuckSetOpEn);

			kal_uint16 mode =((pLdoBuckCtrl->sw_op_en  << SW_OP_EN_SHIFT) | (pLdoBuckCtrl->hw0_op_en << HW0_OP_EN_SHIFT)|
							  (pLdoBuckCtrl->hw1_op_en << HW1_OP_EN_SHIFT)| (pLdoBuckCtrl->hw2_op_en << HW2_OP_EN_SHIFT));

            switch(pLdoBuckCtrl->mod)
            {
				case VMODEM:
				{
				    pmic_EM_reg_write(PMIC_RG_BUCK_VMODEM_OP_EN_SET_ADDR, mode);
				    return_val = STATUS_OK;
				}
				break;

				case VSIM1:
				{
				    pmic_EM_reg_write(PMIC_RG_LDO_VSIM1_OP_EN_SET_ADDR, mode);
				    return_val = STATUS_OK;
				}
				break;

				case VSIM2:
				{
				    pmic_EM_reg_write(PMIC_RG_LDO_VSIM2_OP_EN_SET_ADDR, mode);
				    return_val = STATUS_OK;
				}
				break;

                case VFE28:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VFE28_OP_EN_SET_ADDR, mode);
                    return_val = STATUS_OK;
                }
                break;

                case VRF18:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VRF18_OP_EN_SET_ADDR, mode);
                    return_val = STATUS_OK;
                }
                break;

				case VRF12:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VRF12_OP_EN_SET_ADDR, mode);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_CLR_OP_EN:
		{
    	    PMU_CTRL_LDO_BUCK_SET_OP_EN *pLdoBuckCtrl = &(data->rPMULdoBuckSetOpEn);

			kal_uint16 mode =((pLdoBuckCtrl->sw_op_en  << SW_OP_EN_SHIFT) | (pLdoBuckCtrl->hw0_op_en << HW0_OP_EN_SHIFT)|
							  (pLdoBuckCtrl->hw1_op_en << HW1_OP_EN_SHIFT)| (pLdoBuckCtrl->hw2_op_en << HW2_OP_EN_SHIFT));

            switch(pLdoBuckCtrl->mod)
            {
				case VMODEM:
				{
				    pmic_EM_reg_write(PMIC_RG_BUCK_VMODEM_OP_EN_CLR_ADDR, mode);
				    return_val = STATUS_OK;
				}
				break;

				case VSIM1:
				{
				    pmic_EM_reg_write(PMIC_RG_LDO_VSIM1_OP_EN_CLR_ADDR, mode);
				    return_val = STATUS_OK;
				}
				break;

				case VSIM2:
				{
				    pmic_EM_reg_write(PMIC_RG_LDO_VSIM2_OP_EN_CLR_ADDR, mode);
				    return_val = STATUS_OK;
				}
				break;

                case VFE28:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VFE28_OP_EN_CLR_ADDR, mode);
                    return_val = STATUS_OK;
                }
                break;

                case VRF18:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VRF18_OP_EN_CLR_ADDR, mode);
                    return_val = STATUS_OK;
                }
                break;

				case VRF12:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VRF12_OP_EN_CLR_ADDR, mode);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_SET_HW_OP_CFG:
		{
    	    PMU_CTRL_LDO_BUCK_SET_HW_OP_CFG *pLdoBuckCtrl = &(data->rPMULdoBuckSetHwOp);

			kal_uint16 value =((pLdoBuckCtrl->hw0_op_cfg << HW0_OP_CFG_SHIFT) |
							  (pLdoBuckCtrl->hw1_op_cfg << HW1_OP_CFG_SHIFT) |
							  (pLdoBuckCtrl->hw2_op_cfg << HW2_OP_CFG_SHIFT));

            switch(pLdoBuckCtrl->mod)
            {
				case VMODEM:
                {
                    pmic_EM_reg_write(PMIC_RG_BUCK_VMODEM_OP_CFG_SET_ADDR, value);
                    return_val = STATUS_OK;
                }
                break;

				case VSIM1:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VSIM1_OP_CFG_SET_ADDR, value);
                    return_val = STATUS_OK;
                }
                break;

				case VSIM2:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VSIM2_OP_CFG_SET_ADDR, value);
                    return_val = STATUS_OK;
                }
                break;

				case VFE28:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VFE28_OP_CFG_SET_ADDR, value);
                    return_val = STATUS_OK;
                }
                break;

				case VRF18:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VRF18_OP_CFG_SET_ADDR, value);
                    return_val = STATUS_OK;
                }
                break;

				case VRF12:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VRF12_OP_CFG_SET_ADDR, value);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_CLR_HW_OP_CFG:
		{
    	    PMU_CTRL_LDO_BUCK_CLR_HW_OP_CFG *pLdoBuckCtrl = &(data->rPMULdoBuckClrHwOp);

			kal_uint16 value =((pLdoBuckCtrl->hw0_op_cfg << HW0_OP_CFG_SHIFT) |
							  (pLdoBuckCtrl->hw1_op_cfg << HW1_OP_CFG_SHIFT) |
							  (pLdoBuckCtrl->hw2_op_cfg << HW2_OP_CFG_SHIFT));

            switch(pLdoBuckCtrl->mod)
            {
				case VMODEM:
                {
                    pmic_EM_reg_write(PMIC_RG_BUCK_VMODEM_OP_CFG_CLR_ADDR, value);
                    return_val = STATUS_OK;
                }
                break;

				case VSIM1:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VSIM1_OP_CFG_CLR_ADDR, value);
                    return_val = STATUS_OK;
                }
                break;

				case VSIM2:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VSIM2_OP_CFG_CLR_ADDR, value);
                    return_val = STATUS_OK;
                }
                break;

				case VFE28:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VFE28_OP_CFG_CLR_ADDR, value);
                    return_val = STATUS_OK;
                }
                break;

				case VRF18:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VRF18_OP_CFG_CLR_ADDR, value);
                    return_val = STATUS_OK;
                }
                break;

				case VRF12:
                {
                    pmic_EM_reg_write(PMIC_RG_LDO_VRF12_OP_CFG_CLR_ADDR, value);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_SET_GO_ON_OP:
		{
    	    PMU_CTRL_LDO_BUCK_SET_GO_ON_OP *pLdoBuckCtrl = &(data->rPMULdoBuckSetGoOnOp);

            switch(pLdoBuckCtrl->mod)
            {
				case VMODEM:
                {
                    if(pLdoBuckCtrl->mode == Prefer_OFF)
						dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VMODEM_OP_CFG_SET, 1 << GO_ON_OP_SHIFT);
					else
						dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VMODEM_OP_CFG_CLR, 1 << GO_ON_OP_SHIFT);
                    return_val = STATUS_OK;
                }
                break;

				case VSIM1:
                {
                    if(pLdoBuckCtrl->mode == Prefer_OFF)
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM1_OP_CFG_SET, 1 << GO_ON_OP_SHIFT);
					else
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM1_OP_CFG_CLR, 1 << GO_ON_OP_SHIFT);
                    return_val = STATUS_OK;
                }
                break;

				case VSIM2:
                {
                    if(pLdoBuckCtrl->mode == Prefer_OFF)
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM2_OP_CFG_SET, 1 << GO_ON_OP_SHIFT);
					else
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM2_OP_CFG_CLR, 1 << GO_ON_OP_SHIFT);
                    return_val = STATUS_OK;
                }
                break;

				case VFE28:
                {
                    if(pLdoBuckCtrl->mode == Prefer_OFF)
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VFE28_OP_CFG_SET, 1 << GO_ON_OP_SHIFT);
					else
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VFE28_OP_CFG_CLR, 1 << GO_ON_OP_SHIFT);
                    return_val = STATUS_OK;
                }
                break;

				case VRF18:
                {
                    if(pLdoBuckCtrl->mode == Prefer_OFF)
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VRF18_OP_CFG_SET, 1 << GO_ON_OP_SHIFT);
					else
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VRF18_OP_CFG_CLR, 1 << GO_ON_OP_SHIFT);
                    return_val = STATUS_OK;
                }
                break;

				case VRF12:
                {
                    if(pLdoBuckCtrl->mode == Prefer_OFF)
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VRF12_OP_CFG_SET, 1 << GO_ON_OP_SHIFT);
					else
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VRF12_OP_CFG_CLR, 1 << GO_ON_OP_SHIFT);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_SET_GO_LP_OP:
		{
    	    PMU_CTRL_LDO_BUCK_SET_GO_LP_OP *pLdoBuckCtrl = &(data->rPMULdoBuckSetGoLpOp);

            switch(pLdoBuckCtrl->mod)
            {
				case VMODEM:
                {
                    if(pLdoBuckCtrl->mode == Prefer_NO_LP)
						dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VMODEM_OP_CFG_SET, 1 << GO_LP_OP_SHIFT);
					else
						dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VMODEM_OP_CFG_CLR, 1 << GO_LP_OP_SHIFT);
                    return_val = STATUS_OK;
                }
                break;

				case VSIM1:
                {
                    if(pLdoBuckCtrl->mode == Prefer_NO_LP)
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM1_OP_CFG_SET, 1 << GO_LP_OP_SHIFT);
					else
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM1_OP_CFG_CLR, 1 << GO_LP_OP_SHIFT);
                    return_val = STATUS_OK;
                }
                break;

				case VSIM2:
                {
                    if(pLdoBuckCtrl->mode == Prefer_NO_LP)
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM2_OP_CFG_SET, 1 << GO_LP_OP_SHIFT);
					else
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VSIM2_OP_CFG_CLR, 1 << GO_LP_OP_SHIFT);
                    return_val = STATUS_OK;
                }
                break;

				case VFE28:
                {
                    if(pLdoBuckCtrl->mode == Prefer_NO_LP)
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VFE28_OP_CFG_SET, 1 << GO_LP_OP_SHIFT);
					else
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VFE28_OP_CFG_CLR, 1 << GO_LP_OP_SHIFT);
                    return_val = STATUS_OK;
                }
                break;

				case VRF18:
                {
                    if(pLdoBuckCtrl->mode == Prefer_NO_LP)
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VRF18_OP_CFG_SET, 1 << GO_LP_OP_SHIFT);
					else
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VRF18_OP_CFG_CLR, 1 << GO_LP_OP_SHIFT);
                    return_val = STATUS_OK;
                }
                break;

				case VRF12:
                {
                    if(pLdoBuckCtrl->mode == Prefer_NO_LP)
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VRF12_OP_CFG_SET, 1 << GO_LP_OP_SHIFT);
					else
						dcl_pmic_field_write(PMIC_ENUM_RG_LDO_VRF12_OP_CFG_CLR, 1 << GO_LP_OP_SHIFT);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;


        case LDO_BUCK_SET_VOLTAGE:
        {
            PMU_CTRL_LDO_BUCK_SET_VOLTAGE *pLdoBuckCtrl = &(data->rPMULdoBuckSetVoltage);
            regVal = PMU_Parameter_to_Value(ENC(cmd, pLdoBuckCtrl->mod), pLdoBuckCtrl->voltage);

            switch(pLdoBuckCtrl->mod)
            {
                case VSIM1:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VSIM1_VOSEL, regVal);
                    return_val = STATUS_OK;
                }
                break;

                case VSIM2:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VSIM2_VOSEL, regVal);
                    return_val = STATUS_OK;
                }
                break;

                case VPA_SW:
                {
                    dcl_pmic_field_write_nolock(PMIC_ENUM_RG_BUCK_VPA_VOSEL, regVal);
                    return_val = STATUS_OK;
                }
                break;

				case VXO22:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VXO22_VOSEL, regVal);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
        }
        break;


	    case LDO_BUCK_GET_VOLTAGE:
        {
            PMU_CTRL_LDO_BUCK_GET_VOLTAGE	*pLdoBuckCtrl=&(data->rPMULdoBuckGetVolt);

            switch(pLdoBuckCtrl->mod)
            {
				case VMODEM:
                {
					pLdoBuckCtrl->code = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_DA_VMODEM_VOSEL);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
        }
        break;

		case LDO_BUCK_SET_SLEEP_VOLTAGE:
		{
			PMU_CTRL_LDO_BUCK_SET_SLEEP_VOLTAGE *pLdoBuckCtrl=&(data->rPMULdoBuckSetSleepVoltage);
			regVal = PMU_Parameter_to_Value(ENC(cmd, pLdoBuckCtrl->mod), pLdoBuckCtrl->sleepVoltage);

			switch(pLdoBuckCtrl->mod)
            {
                case VMODEM:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VMODEM_SLEEP_VOLTAGE, regVal);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		/*
        case VPA_SET_EN:
        {
            PMU_CTRL_VPA_SET_EN *pVpaSetEn = &(data->rPMUVpaSetEn);
            dcl_pmic6332_field_write(MT6332_VPA_EN, pVpaSetEn->enable);
            return_val = STATUS_OK;
        }
        break;
		*/

		case VPA_GET_VOLTAGE_LIST:
		{
			PMU_CTRL_VPA_GET_VOLTAGE_LIST *pVpaCtrl = &(data->rPMUVpaGetVoltageList);
			pVpaCtrl->pVoltageList = vpa_vosel;
			pVpaCtrl->number = GETARRNUM(vpa_vosel);
            return_val = STATUS_OK;
		}
		break;

         case ADC_SET_RQST:
        {
            //PMU_CTRL_ADC_SET_RQST *pAdcCtrl = &(data->rPMUAdcSetRqst);
            if((AUXADC_Status != AUXADC_READ_INIT) && (AUXADC_Status != AUXADC_READ_DATA))
            {
                ASSERT(0);
            }
            // Enable CLKSQ for MD (SW mode) RG_CLKSQ_EN_AUX_MD
            pmic_EM_reg_write(PMIC_AUXADC_RQST_CH7_BY_MD_ADDR, (0x1 << PMIC_AUXADC_RQST_CH7_BY_MD_SHIFT));
            AUXADC_Status = AUXADC_READ_REQUEST;
            return_val = STATUS_OK;
        }
        break;


        case ADC_GET_RDY_MD:
        {
            PMU_CTRL_ADC_GET_RDY_MD *pAdcCtrl = &(data->rPMUAdcGetRdyMd);
            pAdcCtrl->status = (DCL_BOOL)dcl_pmic_field_read(PMIC_ENUM_AUXADC_ADC_RDY_CH7_BY_MD);
            if((AUXADC_Status != AUXADC_READ_REQUEST) && (AUXADC_Status != AUXADC_READ_BUSY))
            {
                ASSERT(0);
            }

            if(pAdcCtrl->status == DCL_TRUE)
            {
                AUXADC_Status = AUXADC_READ_READY;
            }
            else
            {
                AUXADC_Status = AUXADC_READ_BUSY;
            }

            return_val = STATUS_OK;
        }
        break;

		case ADC_GET_OUT_MD:
        {
            PMU_CTRL_ADC_GET_OUT_MD *pAdcCtrl = &(data->rPMUAdcGetOutMd);
            if(AUXADC_Status != AUXADC_READ_READY)
            {
                ASSERT(0);
            }
            pAdcCtrl->data = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_AUXADC_ADC_OUT_CH7_BY_MD);
            AUXADC_Status = AUXADC_READ_DATA;
            // Disable CLKSQ for MD (SW mode) RG_CLKSQ_EN_AUX_MD

            return_val = STATUS_OK;
        }
        break;

		case TOP_SET_SRCLKEN_IN_EN:
		{
    	    PMU_CTRL_TOP_SET_SRCLKEN_IN_EN *pTopSrclkenCtrl = &(data->rPMUTopSetSrclkenInEn);

            switch(pTopSrclkenCtrl->mod)
            {
                case PMIC_SRCLKEN_IN0:
                {
					dcl_pmic_field_write(PMIC_ENUM_RG_SRCLKEN_IN0_EN, pTopSrclkenCtrl->mode);
                    return_val = STATUS_OK;
                }
                break;

				case PMIC_SRCLKEN_IN1:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_SRCLKEN_IN1_EN, pTopSrclkenCtrl->mode);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case TOP_SET_SRCLKEN_IN_MODE:
		{
    	    PMU_CTRL_TOP_SET_SRCLKEN_IN_MODE *pTopSrclkenCtrl = &(data->rPMUTopSetSrclkenInMode);

            switch(pTopSrclkenCtrl->mod)
            {
                case PMIC_SRCLKEN_IN0:
                {
					dcl_pmic_field_write(PMIC_ENUM_RG_SRCLKEN_IN0_HW_MODE, pTopSrclkenCtrl->mode);
                    return_val = STATUS_OK;
                }
                break;

				case PMIC_SRCLKEN_IN1:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_SRCLKEN_IN1_HW_MODE, pTopSrclkenCtrl->mode);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_SET_FPWM:
		{
    	    PMU_CTRL_LDO_BUCK_SET_FPWM *pLdoBuckSetFpwm = &(data->rPMULdoBuckSetFpwm);

			switch(pLdoBuckSetFpwm->mod)
            {
                case VCORE:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VCORE_FPWM, pLdoBuckSetFpwm->enable);
                    return_val = STATUS_OK;
                }
                break;

                case VMODEM:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VMODEM_FPWM, pLdoBuckSetFpwm->enable);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_GET_FPWM:
		{
            PMU_CTRL_LDO_BUCK_GET_FPWM *pLdoBuckCtrl = &(data->rPMULdoBuckGetFpwm);

            switch(pLdoBuckCtrl->mod)
            {
				case VCORE:
                {
					pLdoBuckCtrl->enable = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_RG_VCORE_FPWM);
                    return_val = STATUS_OK;
                }
                break;

				case VMODEM:
                {
					pLdoBuckCtrl->enable = (DCL_UINT32)dcl_pmic_field_read(PMIC_ENUM_RG_VMODEM_FPWM);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case DCXO_SET_REGISTER_VALUE:
        {
            PMU_CTRL_DCXO_SET_REGISTER_VALUE	*pChrCtrl = &(data->rPMUDcxoSetRegisterValue);

			pmic_EM_reg_write(pChrCtrl->offset, pChrCtrl->value);
			return_val = STATUS_OK;

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
#endif
        }
        break;

        case DCXO_GET_REGISTER_VALUE:
        {
            PMU_CTRL_DCXO_GET_REGISTER_VALUE	*pChrCtrl=&(data->rPMUDcxoGetRegisterValue);
            pChrCtrl->value = pmic_EM_reg_read(pChrCtrl->offset);
            return_val = STATUS_OK;
        }
        break;

        case MISC_SET_REGISTER_VALUE:
        {
            PMU_CTRL_MISC_SET_REGISTER_VALUE	*pChrCtrl = &(data->rPMUMiscSetRegisterValue);
#if defined(DCL_PMIC_PERMISSION_CONTROL)
			if(dcl_pmic_check_permission(pChrCtrl->offset)== DCL_TRUE)
#endif
			{
				pmic_EM_reg_write(pChrCtrl->offset, pChrCtrl->value);
				return_val = STATUS_OK;
			}
#if defined(DCL_PMIC_PERMISSION_CONTROL)
			else
			{
				illegal_misc_set_register_value.offset = pChrCtrl->offset;
				illegal_misc_set_register_value.value = pChrCtrl->value;
				ASSERT(0);
			}
#endif
        }
        break;

        case MISC_GET_REGISTER_VALUE:
        {
            PMU_CTRL_MISC_GET_REGISTER_VALUE	*pChrCtrl=&(data->rPMUMiscGetRegisterValue);
            pChrCtrl->value = pmic_EM_reg_read(pChrCtrl->offset);
            return_val = STATUS_OK;
        }
        break;

		case LDO_BUCK_SET_VOCAL:
		{
    	    PMU_CTRL_LDO_BUCK_SET_VOCAL *pLdoBuckSetVocal = &(data->rPMULdoBuckSetVocal);

            switch(pLdoBuckSetVocal->mod)
            {
                case VRF18_VOCAL:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VRF18_VOCAL, pLdoBuckSetVocal->value);
                    return_val = STATUS_OK;
                }
                break;

                case VRF12_VOCAL:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VRF12_VOCAL, pLdoBuckSetVocal->value);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_GET_VOCAL:
		{
    	    PMU_CTRL_LDO_BUCK_GET_VOCAL *pLdoBuckGetVocal = &(data->rPMULdoBuckGetVocal);

            switch(pLdoBuckGetVocal->mod)
            {
                case VRF18_VOCAL:
                {
					pLdoBuckGetVocal->value = (DCL_UINT16)dcl_pmic_field_read(PMIC_ENUM_RG_VRF18_VOCAL);
					return_val = STATUS_OK;
                }
                break;

                case VRF12_VOCAL:
                {
					pLdoBuckGetVocal->value = (DCL_UINT16)dcl_pmic_field_read(PMIC_ENUM_RG_VRF12_VOCAL);
					return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;


		case LDO_BUCK_SET_VOTRIM:
		{
    	    PMU_CTRL_LDO_BUCK_SET_VOTRIM *pLdoBuckSetVotrim = &(data->rPMULdoBuckSetVotrim);

            switch(pLdoBuckSetVotrim->mod)
            {
                case VRF18_VOTRIM:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VRF18_VOTRIM, pLdoBuckSetVotrim->value);
                    return_val = STATUS_OK;
                }
                break;

                case VRF12_VOTRIM:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_VRF12_VOTRIM, pLdoBuckSetVotrim->value);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_GET_VOTRIM:
		{
    	    PMU_CTRL_LDO_BUCK_GET_VOTRIM *pLdoBuckGetVotrim = &(data->rPMULdoBuckGetVotrim);

            switch(pLdoBuckGetVotrim->mod)
            {
                case VRF18_VOTRIM:
                {
					pLdoBuckGetVotrim->value = (DCL_UINT16)dcl_pmic_field_read(PMIC_ENUM_RG_VRF18_VOTRIM);
					return_val = STATUS_OK;
                }
                break;

                case VRF12_VOTRIM:
                {
					pLdoBuckGetVotrim->value = (DCL_UINT16)dcl_pmic_field_read(PMIC_ENUM_RG_VRF12_VOTRIM);
					return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_SET_VPA_OC_SDN_STATUS:
		{
    	    PMU_CTRL_LDO_BUCK_SET_VPA_OC_SDN_STATUS *pLdoBuckSetVpaOcSdnStatus = &(data->rPMULdoBuckSetVpaOcSdnStatus);

            switch(pLdoBuckSetVpaOcSdnStatus->mod)
            {
                case VPA_OC_SDN_STATUS:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VPA_OC_SDN_STATUS, pLdoBuckSetVpaOcSdnStatus->value);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_GET_VPA_OC_SDN_STATUS:
		{
    	    PMU_CTRL_LDO_BUCK_GET_VPA_OC_SDN_STATUS *pLdoBuckGetVpaOcSdnStatus = &(data->rPMULdoBuckGetVpaOcSdnStatus);

            switch(pLdoBuckGetVpaOcSdnStatus->mod)
            {
                case VPA_OC_SDN_STATUS:
                {
					pLdoBuckGetVpaOcSdnStatus->value = (DCL_UINT16)dcl_pmic_field_read(PMIC_ENUM_RG_BUCK_VPA_OC_SDN_STATUS);
					return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_SET_VPA_OC_SDN_EN:
		{
    	    PMU_CTRL_LDO_BUCK_SET_VPA_OC_SDN_EN *pLdoBuckSetVpaOcSdnEn = &(data->rPMULdoBuckSetVpaOcSdnEn);

            switch(pLdoBuckSetVpaOcSdnEn->mod)
            {
                case VPA_OC_SDN_EN:
                {
                    dcl_pmic_field_write(PMIC_ENUM_RG_BUCK_VPA_OC_SDN_EN, pLdoBuckSetVpaOcSdnEn->value);
                    return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

		case LDO_BUCK_GET_VPA_OC_SDN_EN:
		{
    	    PMU_CTRL_LDO_BUCK_GET_VPA_OC_SDN_EN *pLdoBuckGetVpaOcSdnEn = &(data->rPMULdoBuckGetVpaOcSdnEn);

            switch(pLdoBuckGetVpaOcSdnEn->mod)
            {
                case VPA_OC_SDN_EN:
                {
					pLdoBuckGetVpaOcSdnEn->value = (DCL_UINT16)dcl_pmic_field_read(PMIC_ENUM_RG_BUCK_VPA_OC_SDN_EN);
					return_val = STATUS_OK;
                }
                break;

                default:
                    return_val = STATUS_UNSUPPORTED;
                break;
            }
		}
		break;

        default:
            return_val = STATUS_UNSUPPORTED;
        break;
    }
#if defined(DCL_PMIC_MODULE_CONTROL)
	current_dcl_handle = 0;
#endif
    return return_val;

}

extern void dcl_pmic_modem_only_init(void);
extern void PMIC_Read_All(void);
#if defined(PMIC_UNIT_TEST)
extern void PMIC_Read_All(void);
extern void PMIC_Unit_Test(void);
#endif
DCL_UINT32 DRV_Read_PMIC_Data(DCL_UINT32 pmic_addr)
{
    return dcl_pmic_byte_return(pmic_addr);
}

void DRV_Write_PMIC_Data(DCL_UINT32 pmic_addr, DCL_UINT32 value)
{
    dcl_pmic_byte_write(pmic_addr, value);
}

void dcl_pmic_init(void){
    extern void pmic_wrap_dump_init(void);
    pmu_control_handler = PMIC_control_handler;
    pmu_parameter_size = GETARRNUM(pmu_parameter_table);

    pmic_wrap_dump_init();

	dcl_pmic_access_spinlock = kal_create_spinlock("pmic access");
	dcl_pmic_control_spinlock = kal_create_spinlock("pmic control");

#if  !defined(__SMART_PHONE_MODEM__)
    DrvPWRAP_Init();
#endif
    pmic_hw_version = dcl_pmic_byte_return(MT6358_HWCID);
	if (pmic_hw_version == 0x0)
		ASSERT(0);

    PMIC_Read_All();

#if !defined(__SMART_PHONE_MODEM__)

/*
	if(DrvPWRAP_CheckCIPHER() == 1)
    dcl_pmic6355_modem_only_init();
	else
*/
	dcl_pmic_modem_only_init();

#endif

#if defined(PMIC_UNIT_TEST)
    PMIC_Read_All();
    PMIC_Unit_Test();
    PMIC_Read_All();
#endif
    pmic_init_done = DCL_TRUE;

}

void PMIC_Read_All(void)
{
    volatile kal_uint32 i,j;
    j=0;
    for (i = 0; i < PMIC_MAX_REG_NUM; i += 2){
        pmic_reg[i] = dcl_pmic_byte_return(i);
    	while(j!=0x200){j++;}
    	j=0;
    }
}
#if defined(PMIC_UNIT_TEST)
void PMIC_Unit_Test(void)
{
	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_ON_CTRL val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.mode = HW_CONTROL; // (SW_CONTROL_BY_REG / HW_CONTROL)
		val.mod = VMIPI;
		DclPMU_Control(handle, LDO_BUCK_SET_ON_CTRL, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_EN val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.enable = DCL_TRUE; // (DCL_TRUE / DCL_FALSE);
		val.mod = VMIPI;
		DclPMU_Control(handle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_EN val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.enable = DCL_TRUE; // (DCL_TRUE / DCL_FALSE);
		val.mod = VPA_SW;
		DclPMU_Control(handle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_VOLTAGE val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.mod=VPA_SW;
		val.voltage = PMU_VOLT_01_800000_V;
		/*     PMU_VOLT_00_500000_V,      PMU_VOLT_00_600000_V,
				PMU_VOLT_00_700000_V,      PMU_VOLT_00_800000_V,
				PMU_VOLT_00_900000_V,      PMU_VOLT_01_000000_V,
				PMU_VOLT_01_100000_V,      PMU_VOLT_01_200000_V,
				PMU_VOLT_01_300000_V,      PMU_VOLT_01_400000_V,
				PMU_VOLT_01_500000_V,      PMU_VOLT_01_600000_V,
				PMU_VOLT_01_700000_V,      PMU_VOLT_01_800000_V,
				PMU_VOLT_01_900000_V,      PMU_VOLT_02_000000_V,
				PMU_VOLT_02_100000_V,      PMU_VOLT_02_200000_V,
				PMU_VOLT_02_300000_V,      PMU_VOLT_02_400000_V,
				PMU_VOLT_02_500000_V,      PMU_VOLT_02_600000_V,
				PMU_VOLT_02_700000_V,      PMU_VOLT_02_800000_V,
				PMU_VOLT_02_900000_V,      PMU_VOLT_03_000000_V,
				PMU_VOLT_03_100000_V,      PMU_VOLT_03_200000_V,
				PMU_VOLT_03_300000_V,      PMU_VOLT_03_400000_V,
				PMU_VOLT_03_500000_V,      PMU_VOLT_03_600000_V,      */
		DclPMU_Control(handle, LDO_BUCK_SET_VOLTAGE, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_MODESET val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.mod = VPA_SW;
		val.mode = FORCE_PWM_MODE; // (AUTO_MODE / FORCE_PWM_MODE)
		DclPMU_Control(handle, LDO_BUCK_SET_MODESET, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}
	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_EN_CTRL val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.mode = HW_CONTROL; // (SW_CONTROL_BY_REG / HW_CONTROL)
		val.mod = VRF1;
		DclPMU_Control(handle, LDO_BUCK_SET_EN_CTRL, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_EN_SEL val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.sel = SRCLKEN_IN1_SEL;
		/* SRCLKEN_IN1_SEL / SRCLKEN_IN2_SEL/ SRCLKEN_IN1_OR_SRCLKEN_IN2_SEL/
			SRCLKEN_IN1_AND_SRCLKEN_IN2_SEL/ SRCLKEN_IN1_AND_SRCLKEN_IN2_SEL */
		val.mod = VRF1;
		DclPMU_Control(handle, LDO_BUCK_SET_EN_SEL, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_MODESET val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.mod = VRF1;
		val.mode = FORCE_PWM_MODE; // (AUTO_MODE / FORCE_PWM_MODE)
		DclPMU_Control(handle, LDO_BUCK_SET_MODESET, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_VRF1_SET_MODESET_CKPDN_SET val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.regval = 0x7; // (0x0~0xF)
		DclPMU_Control(handle, VRF1_SET_MODESET_CKPDN_SET, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_VRF1_SET_MODESET_CKPDN_CLR val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.regval = 0x7; // (0x0~0xF)
		DclPMU_Control(handle, VRF1_SET_MODESET_CKPDN_CLR, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_VRF1_GET_MODESET_CKPDN val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		// val.regval will be your request value ( no need do any shift)
		DclPMU_Control(handle, VRF1_GET_MODESET_CKPDN, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_EN_CTRL val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.mode = HW_CONTROL; // (SW_CONTROL_BY_REG / HW_CONTROL)
		val.mod = VRF2;
		DclPMU_Control(handle, LDO_BUCK_SET_EN_CTRL, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_EN_SEL val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.sel = SRCLKEN_IN1_SEL;
		/* SRCLKEN_IN1_SEL / SRCLKEN_IN2_SEL/ SRCLKEN_IN1_OR_SRCLKEN_IN2_SEL/
			SRCLKEN_IN1_AND_SRCLKEN_IN2_SEL/ SRCLKEN_IN1_AND_SRCLKEN_IN2_SEL */
		val.mod = VRF2;
		DclPMU_Control(handle, LDO_BUCK_SET_EN_SEL, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_EN val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.enable = DCL_TRUE; // (DCL_TRUE / DCL_FALSE);
		val.mod = VRF2;
		DclPMU_Control(handle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_MODESET val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.mod = VRF1;
		val.mode = FORCE_PWM_MODE; // (AUTO_MODE / FORCE_PWM_MODE)
		DclPMU_Control(handle, LDO_BUCK_SET_MODESET, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_SRCLK_EN_SEL val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.sel = SRCLKEN_IN1_SEL;
		/* SRCLKEN_IN1_SEL / SRCLKEN_IN2_SEL/ SRCLKEN_IN1_OR_SRCLKEN_IN2_SEL/
			SRCLKEN_IN1_AND_SRCLKEN_IN2_SEL/ SRCLKEN_IN1_AND_SRCLKEN_IN2_SEL */
		val.mod = VMIPI;
		DclPMU_Control(handle, LDO_BUCK_SET_SRCLK_EN_SEL, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_EN val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.enable = DCL_TRUE; // (DCL_TRUE / DCL_FALSE);
		val.mod = VSIM1;
		DclPMU_Control(handle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_EN val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.enable = DCL_TRUE; // (DCL_TRUE / DCL_FALSE);
		val.mod = VSIM2;
		DclPMU_Control(handle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_VOLTAGE val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.mod=VSIM1;
		val.voltage = PMU_VOLT_01_800000_V;
		/*  PMU_VOLT_01_800000_V,      PMU_VOLT_03_000000_V,   */
		DclPMU_Control(handle, LDO_BUCK_SET_VOLTAGE, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}

	{
		DCL_HANDLE handle;
		PMU_CTRL_LDO_BUCK_SET_VOLTAGE val;
		handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
		val.mod=VSIM2;
		val.voltage = PMU_VOLT_01_800000_V;
		/*  PMU_VOLT_01_800000_V,      PMU_VOLT_03_000000_V,   */
		DclPMU_Control(handle, LDO_BUCK_SET_VOLTAGE, (DCL_CTRL_DATA_T *)&val);
		DclPMU_Close(handle);
	}
}
#endif // End of #if defined(PMIC_UNIT_TEST)

#endif // End of #if defined(PMIC_6358_REG_API)

