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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *     dcl_pmic6356_sw.h
 *
 * Project:
 * --------
 *     MOLY Software
 *
 * Description:
 * ------------
 *     This file is for PMIC 6357
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DCL_PMIC6357_SW_H_STRUCT__
#define __DCL_PMIC6357_SW_H_STRUCT__

#include "dcl_pmic_features.h"

#ifdef PMIC_6357_REG_API

// Combinational functions
extern void pmic6357_customization_init(void);

typedef enum
{
    PMIC_ENUM_HWCID,
    PMIC_ENUM_SWCID,
    PMIC_ENUM_RG_SRCLKEN_IN0_EN,
    PMIC_ENUM_RG_SRCLKEN_IN1_EN,
    PMIC_ENUM_RG_SRCLKEN_IN0_HW_MODE,
    PMIC_ENUM_RG_SRCLKEN_IN1_HW_MODE,
    PMIC_ENUM_RG_BUCK_VMODEM_VOSEL_LIMIT_SEL,
    PMIC_ENUM_RG_BUCK_VPA_VOSEL_LIMIT_SEL,
    PMIC_ENUM_RG_BUCK_VCORE_VOSEL_SLEEP,
    PMIC_ENUM_DA_VCORE_VOSEL,
    PMIC_ENUM_DA_VCORE_VOSEL_GRAY,
    PMIC_ENUM_RG_BUCK_VCORE_VOSEL,
    PMIC_ENUM_RG_BUCK_VMODEM_EN,
    PMIC_ENUM_RG_BUCK_VMODEM_LP,
    PMIC_ENUM_RG_BUCK_VMODEM_VOSEL_SLEEP,
    PMIC_ENUM_RG_BUCK_VMODEM_VOSEL,
    PMIC_ENUM_RG_BUCK_VMODEM_SW_OP_EN,
    PMIC_ENUM_RG_BUCK_VMODEM_HW0_OP_EN,
    PMIC_ENUM_RG_BUCK_VMODEM_HW1_OP_EN,
    PMIC_ENUM_RG_BUCK_VMODEM_HW2_OP_EN,
    PMIC_ENUM_RG_BUCK_VMODEM_OP_EN_SET,
    PMIC_ENUM_RG_BUCK_VMODEM_OP_EN_CLR,
    PMIC_ENUM_RG_BUCK_VMODEM_HW0_OP_CFG,
    PMIC_ENUM_RG_BUCK_VMODEM_HW1_OP_CFG,
    PMIC_ENUM_RG_BUCK_VMODEM_HW2_OP_CFG,
    PMIC_ENUM_RG_BUCK_VMODEM_ON_OP,
    PMIC_ENUM_RG_BUCK_VMODEM_LP_OP,
    PMIC_ENUM_RG_BUCK_VMODEM_OP_CFG_SET,
    PMIC_ENUM_RG_BUCK_VMODEM_OP_CFG_CLR,
    PMIC_ENUM_DA_VMODEM_VOSEL,
    PMIC_ENUM_DA_VMODEM_VOSEL_GRAY,
    PMIC_ENUM_DA_VMODEM_EN,
    PMIC_ENUM_DA_VMODEM_STB,
    PMIC_ENUM_DA_VMODEM_VSLEEP_SEL,
    PMIC_ENUM_RG_BUCK_VS1_VOTER_EN,
    PMIC_ENUM_RG_BUCK_VS1_VOTER_EN_SET,
    PMIC_ENUM_RG_BUCK_VS1_VOTER_EN_CLR,
    PMIC_ENUM_RG_BUCK_VS1_VOTER_VOSEL,
    PMIC_ENUM_RG_BUCK_VPA_EN,
    PMIC_ENUM_RG_BUCK_VPA_VOSEL,
    PMIC_ENUM_RG_VCORE_SLEEP_VOLTAGE,
    PMIC_ENUM_RG_VMODEM_SLEEP_VOLTAGE,
    PMIC_ENUM_RG_VMODEM_FPWM,
    PMIC_ENUM_RG_VCORE_FPWM,
    PMIC_ENUM_RG_VPROC_FPWM,
    PMIC_ENUM_RG_LDO_VSRAM_OTHERS_VOSEL,
    PMIC_ENUM_RG_VMODEM_MODESET,
    PMIC_ENUM_RG_VPA_MODESET,
    PMIC_ENUM_RG_LDO_VSIM1_EN,
    PMIC_ENUM_RG_LDO_VSIM1_LP,
    PMIC_ENUM_RG_LDO_VSIM1_SW_OP_EN,
    PMIC_ENUM_RG_LDO_VSIM1_HW0_OP_EN,
    PMIC_ENUM_RG_LDO_VSIM1_HW1_OP_EN,
    PMIC_ENUM_RG_LDO_VSIM1_HW2_OP_EN,
    PMIC_ENUM_RG_LDO_VSIM1_OP_EN_SET,
    PMIC_ENUM_RG_LDO_VSIM1_OP_EN_CLR,
    PMIC_ENUM_RG_LDO_VSIM1_HW0_OP_CFG,
    PMIC_ENUM_RG_LDO_VSIM1_HW1_OP_CFG,
    PMIC_ENUM_RG_LDO_VSIM1_HW2_OP_CFG,
//    PMIC_ENUM_RG_LDO_VSIM1_ON_OP,
//    PMIC_ENUM_RG_LDO_VSIM1_LP_OP,
    PMIC_ENUM_RG_LDO_VSIM1_OP_CFG_SET,
    PMIC_ENUM_RG_LDO_VSIM1_OP_CFG_CLR,
    PMIC_ENUM_RG_LDO_VSIM1_OCFB_EN,
    PMIC_ENUM_DA_VSIM1_OCFB_EN,
    PMIC_ENUM_RG_VSIM1_VOSEL,
    PMIC_ENUM_RG_LDO_VSIM2_EN,
    PMIC_ENUM_RG_LDO_VSIM2_LP,
    PMIC_ENUM_RG_LDO_VSIM2_SW_OP_EN,
    PMIC_ENUM_RG_LDO_VSIM2_HW0_OP_EN,
    PMIC_ENUM_RG_LDO_VSIM2_HW1_OP_EN,
    PMIC_ENUM_RG_LDO_VSIM2_HW2_OP_EN,
    PMIC_ENUM_RG_LDO_VSIM2_OP_EN_SET,
    PMIC_ENUM_RG_LDO_VSIM2_OP_EN_CLR,
    PMIC_ENUM_RG_LDO_VSIM2_HW0_OP_CFG,
    PMIC_ENUM_RG_LDO_VSIM2_HW1_OP_CFG,
    PMIC_ENUM_RG_LDO_VSIM2_HW2_OP_CFG,
//    PMIC_ENUM_RG_LDO_VSIM2_ON_OP,
//    PMIC_ENUM_RG_LDO_VSIM2_LP_OP,
    PMIC_ENUM_RG_LDO_VSIM2_OP_CFG_SET,
    PMIC_ENUM_RG_LDO_VSIM2_OP_CFG_CLR,
    PMIC_ENUM_RG_LDO_VSIM2_OCFB_EN,
    PMIC_ENUM_DA_VSIM2_OCFB_EN,
    PMIC_ENUM_RG_VSIM2_VOSEL,
    PMIC_ENUM_RG_LDO_VFE28_EN,
    PMIC_ENUM_RG_LDO_VFE28_LP,
    PMIC_ENUM_RG_LDO_VFE28_SW_OP_EN,
    PMIC_ENUM_RG_LDO_VFE28_HW0_OP_EN,
    PMIC_ENUM_RG_LDO_VFE28_HW1_OP_EN,
    PMIC_ENUM_RG_LDO_VFE28_HW2_OP_EN,
    PMIC_ENUM_RG_LDO_VFE28_OP_EN_SET,
    PMIC_ENUM_RG_LDO_VFE28_OP_EN_CLR,
    PMIC_ENUM_RG_LDO_VFE28_HW0_OP_CFG,
    PMIC_ENUM_RG_LDO_VFE28_HW1_OP_CFG,
    PMIC_ENUM_RG_LDO_VFE28_HW2_OP_CFG,
//    PMIC_ENUM_RG_LDO_VFE28_ON_OP,
//    PMIC_ENUM_RG_LDO_VFE28_LP_OP,
    PMIC_ENUM_RG_LDO_VFE28_OP_CFG_SET,
    PMIC_ENUM_RG_LDO_VFE28_OP_CFG_CLR,
    PMIC_ENUM_DA_VFE28_MODE,
    PMIC_ENUM_DA_VFE28_EN,
    PMIC_ENUM_RG_LDO_VFE28_OCFB_EN,
    PMIC_ENUM_DA_VFE28_OCFB_EN,
    PMIC_ENUM_RG_LDO_VRF18_EN,
    PMIC_ENUM_RG_LDO_VRF18_LP,
    PMIC_ENUM_RG_LDO_VRF18_SW_OP_EN,
    PMIC_ENUM_RG_LDO_VRF18_HW0_OP_EN,
    PMIC_ENUM_RG_LDO_VRF18_HW1_OP_EN,
    PMIC_ENUM_RG_LDO_VRF18_HW2_OP_EN,
    PMIC_ENUM_RG_LDO_VRF18_OP_EN_SET,
    PMIC_ENUM_RG_LDO_VRF18_OP_EN_CLR,
    PMIC_ENUM_RG_LDO_VRF18_HW0_OP_CFG,
    PMIC_ENUM_RG_LDO_VRF18_HW1_OP_CFG,
    PMIC_ENUM_RG_LDO_VRF18_HW2_OP_CFG,
//    PMIC_ENUM_RG_LDO_VRF18_ON_OP,
//    PMIC_ENUM_RG_LDO_VRF18_LP_OP,
    PMIC_ENUM_RG_LDO_VRF18_OP_CFG_SET,
    PMIC_ENUM_RG_LDO_VRF18_OP_CFG_CLR,
    PMIC_ENUM_DA_VRF18_MODE,
    PMIC_ENUM_DA_VRF18_EN,
    PMIC_ENUM_RG_LDO_VRF18_OCFB_EN,
    PMIC_ENUM_DA_VRF18_OCFB_EN,
    PMIC_ENUM_RG_LDO_VRF12_EN,
    PMIC_ENUM_RG_LDO_VRF12_LP,
    PMIC_ENUM_RG_LDO_VRF12_SW_OP_EN,
    PMIC_ENUM_RG_LDO_VRF12_HW0_OP_EN,
    PMIC_ENUM_RG_LDO_VRF12_HW1_OP_EN,
    PMIC_ENUM_RG_LDO_VRF12_HW2_OP_EN,
    PMIC_ENUM_RG_LDO_VRF12_OP_EN_SET,
    PMIC_ENUM_RG_LDO_VRF12_OP_EN_CLR,
    PMIC_ENUM_RG_LDO_VRF12_HW0_OP_CFG,
    PMIC_ENUM_RG_LDO_VRF12_HW1_OP_CFG,
    PMIC_ENUM_RG_LDO_VRF12_HW2_OP_CFG,
//    PMIC_ENUM_RG_LDO_VRF12_ON_OP,
//    PMIC_ENUM_RG_LDO_VRF12_LP_OP,
    PMIC_ENUM_RG_LDO_VRF12_OP_CFG_SET,
    PMIC_ENUM_RG_LDO_VRF12_OP_CFG_CLR,
    PMIC_ENUM_DA_VRF12_MODE,
    PMIC_ENUM_DA_VRF12_EN,
    PMIC_ENUM_RG_LDO_VRF12_OCFB_EN,
    PMIC_ENUM_DA_VRF12_OCFB_EN,
    PMIC_ENUM_RG_VXO22_VOSEL,
    PMIC_ENUM_XO_EXTBUF1_MODE,
    PMIC_ENUM_XO_EXTBUF1_EN_M,
    PMIC_ENUM_XO_EXTBUF2_MODE,
    PMIC_ENUM_XO_EXTBUF2_EN_M,
    PMIC_ENUM_XO_EXTBUF3_MODE,
    PMIC_ENUM_XO_EXTBUF3_EN_M,
    PMIC_ENUM_XO_EXTBUF4_MODE,
    PMIC_ENUM_XO_EXTBUF4_EN_M,
    PMIC_ENUM_XO_BB_LPM_EN,
    PMIC_ENUM_XO_ENBB_MAN,
    PMIC_ENUM_XO_ENBB_EN_M,
    PMIC_ENUM_XO_CLKSEL_MAN,
    PMIC_ENUM_DCXO_CW00_SET,
    PMIC_ENUM_DCXO_CW00_CLR,
    PMIC_ENUM_XO_EN32K_MAN,
    PMIC_ENUM_XO_EN32K_M,
    PMIC_ENUM_XO_XMODE_MAN,
    PMIC_ENUM_XO_XMODE_M,
    PMIC_ENUM_XO_STRUP_MODE,
    PMIC_ENUM_XO_AAC_FPM_TIME,
    PMIC_ENUM_XO_AAC_MODE_LPM,
    PMIC_ENUM_XO_AAC_MODE_FPM,
    PMIC_ENUM_XO_EN26M_OFFSQ_EN,
    PMIC_ENUM_XO_LDOCAL_EN,
    PMIC_ENUM_XO_CBANK_SYNC_DYN,
    PMIC_ENUM_XO_26MLP_MAN_EN,
    PMIC_ENUM_XO_BUFLDOK_EN,
    PMIC_ENUM_XO_CDAC_FPM,
    PMIC_ENUM_XO_CDAC_LPM,
    PMIC_ENUM_XO_32KDIV_NFRAC_FPM,
    PMIC_ENUM_XO_COFST_FPM,
    PMIC_ENUM_XO_32KDIV_NFRAC_LPM,
    PMIC_ENUM_XO_COFST_LPM,
    PMIC_ENUM_XO_CORE_MAN,
    PMIC_ENUM_XO_CORE_EN_M,
    PMIC_ENUM_XO_CORE_TURBO_EN_M,
    PMIC_ENUM_XO_CORE_AAC_EN_M,
    PMIC_ENUM_XO_STARTUP_EN_M,
    PMIC_ENUM_XO_CORE_VBFPM_EN_M,
    PMIC_ENUM_XO_CORE_VBLPM_EN_M,
    PMIC_ENUM_XO_LPMBIAS_EN_M,
    PMIC_ENUM_XO_VTCGEN_EN_M,
    PMIC_ENUM_XO_IAAC_COMP_EN_M,
    PMIC_ENUM_XO_IFPM_COMP_EN_M,
    PMIC_ENUM_XO_ILPM_COMP_EN_M,
    PMIC_ENUM_XO_CORE_BYPCAS_FPM,
    PMIC_ENUM_XO_CORE_GMX2_FPM,
    PMIC_ENUM_XO_CORE_IDAC_FPM,
    PMIC_ENUM_XO_CORE_BYPCAS_LPM,
    PMIC_ENUM_XO_CORE_GMX2_LPM,
    PMIC_ENUM_XO_CORE_IDAC_LPM,
    PMIC_ENUM_XO_AAC_COMP_HV_LPM,
    PMIC_ENUM_XO_AAC_VSEL_LPM,
    PMIC_ENUM_XO_AAC_HV_LPM,
    PMIC_ENUM_XO_AAC_IBIAS_LPM,
    PMIC_ENUM_XO_AAC_VOFST_LPM,
    PMIC_ENUM_XO_AAC_FPM_SWEN,
    PMIC_ENUM_XO_SWRST,
    PMIC_ENUM_XO_STATIC_AUXOUT_SEL,
    PMIC_ENUM_XO_AUXOUT_SEL,
    PMIC_ENUM_XO_STATIC_AUXOUT,
    PMIC_ENUM_AUXADC_ADC_OUT_CH7_BY_MD,
    PMIC_ENUM_AUXADC_ADC_RDY_CH7_BY_MD,
    PMIC_ENUM_AUXADC_RQST1_SET,
    PMIC_ENUM_AUXADC_RQST1_CLR,
	PMIC_ENUM_RG_VRF18_VOCAL,
	PMIC_ENUM_RG_VRF12_VOCAL,
	PMIC_ENUM_RG_VRF18_VOTRIM,
	PMIC_ENUM_RG_VRF12_VOTRIM,
	PMIC_ENUM_RG_BUCK_VPA_OC_SDN_STATUS,
}PMIC6357_FLAGS_LIST_ENUM;

#endif // #ifdef PMIC_6357_REG_API
#endif // #ifndef __DCL_PMIC6357_SW_H_STRUCT__

