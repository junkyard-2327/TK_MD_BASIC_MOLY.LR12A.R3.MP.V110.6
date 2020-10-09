/******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2016
 *
 *****************************************************************************/

#if !defined(GEN_FOR_PC) && defined(__MTK_TARGET__)
#include "mips_ia_utils.h"
#include "kal_iram_section_defs.h"
#include "kal_public_defs.h"
#include "boot.h"
#include "mips_ia_pmu_montr.h"
#include "drv_mdcirq_reg.h"
#include "dcm_sw.h"

#ifdef CONFIG_ENABLE_IA_MR2_LV3_DCM
# if defined(DCM_SUPPORT) && defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
//#  define __CONFIG_ENABLE_IA_CLK_GATING__
//#  define __CONFIG_ENABLE_IA_SPRAM_DCM__
//#  define __CONFIG_SUPPORT_DYNAMIC_IA_DCM_SETTING__
# endif
#endif /* CONFIG_ENABLE_IA_MR2_LV3_DCM */

#ifndef __CONFIG_ENABLE_IA_SPRAM_DCM__
# define MIPS_IA_MR2_DEFAULT_IA_DCM_IA_SPRAM_VAL                        0
#else
# define MIPS_IA_MR2_DEFAULT_IA_DCM_IA_SPRAM_VAL                            \
    (                                                                       \
        miu_reg_bitfd_mskoff_val(MIPS_IA_MR2_GCR_IA_DCM_ISP_DCM,        0) |\
        miu_reg_bitfd_mskoff_val(MIPS_IA_MR2_GCR_IA_DCM_DSP_DCM,        0)  \
    )
#endif /* __CONFIG_ENABLE_IA_SPRAM_DCM__ */

#ifndef __CONFIG_ENABLE_IA_CLK_GATING__
# define MIPS_IA_MR2_DEFAULT_IA_DCM_CLK_GATING_VAL                      0
#else
# define MIPS_IA_MR2_DEFAULT_IA_DCM_CLK_GATING_VAL                          \
    (                                                                       \
        miu_reg_bitfd_mskoff_val(MIPS_IA_MR2_GCR_IA_DCM_BUS_BRIDGE_CLK, 0) |\
        miu_reg_bitfd_mskoff_val(MIPS_IA_MR2_GCR_IA_DCM_CM_CLK,         0) |\
        miu_reg_bitfd_mskoff_val(MIPS_IA_MR2_GCR_IA_DCM_BIU_CLK,        0) |\
        miu_reg_bitfd_mskoff_val(MIPS_IA_MR2_GCR_IA_DCM_LSU_CLK,        0)  \
    )
#endif /* __CONFIG_ENABLE_IA_CLK_GATING__ */

#define MIPS_IA_MR2_DEFAULT_IA_DCM_VAL              \
    (                                               \
        MIPS_IA_MR2_DEFAULT_IA_DCM_IA_SPRAM_VAL |   \
        MIPS_IA_MR2_DEFAULT_IA_DCM_CLK_GATING_VAL   \
    )

struct mips_ia_mr2_state_internal {
    kal_uint32 ia_dcm_cfg;
};

#ifndef __CONFIG_SUPPORT_DYNAMIC_IA_DCM_SETTING__
const
#endif
struct mips_ia_mr2_state_internal mi2st = {
    .ia_dcm_cfg    = MIPS_IA_MR2_DEFAULT_IA_DCM_VAL,
};

__MIU_STATIC_INLINE__ void mips_ia_mr2_ia_dcm_cfg_update(void)
{
#ifdef CONFIG_ENABLE_IA_MR2_LV3_DCM
    MIPS_IA_MR2_GCR_REG(MIPS_IA_MR2_GCR_IA_DCM) = mi2st.ia_dcm_cfg;
    miu_syncn(0x2);
#endif /* CONFIG_ENABLE_IA_MR2_LV3_DCM */
}

const kal_int32 mips_ia_mr2_lv3_dcm_enable(const kal_uint32 en)
{
    kal_int32 ret = -1;
#ifdef __CONFIG_SUPPORT_DYNAMIC_IA_DCM_SETTING__
    if(1 == en) {
        ret                 =  0;
        mi2st.ia_dcm_cfg    =  MIPS_IA_MR2_DEFAULT_IA_DCM_VAL;
        mips_ia_mr2_ia_dcm_cfg_update();
    } else if(0 == en) {
        ret                 =  0;
        mi2st.ia_dcm_cfg    =  0;
        mips_ia_mr2_ia_dcm_cfg_update();
    } else
        ret                 = -2;
#endif /* __CONFIG_SUPPORT_DYNAMIC_IA_DCM_SETTING__ */
    return ret;
}

void mips_ia_mr2_gcr_init(void)
{
    /* Init SPRAM size to let SPRAM backdoor work */
    MIPS_IA_MR2_GCR_REG(MIPS_IA_MR2_GCR_CORE0_ISPRAM_ADDR_PHY_MAX) = (CONFIG_CORE0_ISPRAM_SIZE - 8);
    MIPS_IA_MR2_GCR_REG(MIPS_IA_MR2_GCR_CORE0_DSPRAM_ADDR_PHY_MAX) = (CONFIG_CORE0_DSPRAM_SIZE - 8);
    MIPS_IA_MR2_GCR_REG(MIPS_IA_MR2_GCR_CORE1_ISPRAM_ADDR_PHY_MAX) = (CONFIG_CORE1_ISPRAM_SIZE - 8);
    MIPS_IA_MR2_GCR_REG(MIPS_IA_MR2_GCR_CORE1_DSPRAM_ADDR_PHY_MAX) = (CONFIG_CORE1_DSPRAM_SIZE - 8);

    /* Enable SPRAM remap feature with default setting */
    MIPS_IA_MR2_GCR_REG(MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_0) = MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_DEFAULT_CFG;
    MIPS_IA_MR2_GCR_REG(MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_1) = MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_DEFAULT_CFG;

    mips_ia_mr2_ia_dcm_cfg_update();
}

#endif /* !defined(GEN_FOR_PC) && defined(__MTK_TARGET__) */
