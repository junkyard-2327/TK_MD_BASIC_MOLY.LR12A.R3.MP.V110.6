/******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2017
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

#ifdef CONFIG_ENABLE_IA_MR1_LV3_DCM
# if defined(DCM_ENABLE)
#  define __CONFIG_ENABLE_IA_MR1_LV3_DCM__
#  define __CONFIG_ENABLE_IA_CLK_GATING__
#  define __CONFIG_ENABLE_IA_SPRAM_DCM__
#  define __CONFIG_SUPPORT_DYNAMIC_IA_DCM_SETTING__
# endif
#endif /* CONFIG_ENABLE_IA_MR1_LV3_DCM */

#ifndef __CONFIG_ENABLE_IA_SPRAM_DCM__
# define MIPS_IA_MR1_DEFAULT_IA_DCM_IA_SPRAM_VAL                                0
#else
# define MIPS_IA_MR1_DEFAULT_IA_DCM_IA_SPRAM_VAL                                    \
    (                                                                               \
        miu_reg_bitfd_mskoff_val(MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_DSP_DCM,    0) |\
        miu_reg_bitfd_mskoff_val(MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_DCACHE_DCM, 0) |\
        miu_reg_bitfd_mskoff_val(MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_ISP_DCM,    1) |\
        miu_reg_bitfd_mskoff_val(MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_ICACHE_DCM, 1)  \
    )
#endif /* __CONFIG_ENABLE_IA_SPRAM_DCM__ */

#ifndef __CONFIG_ENABLE_IA_CLK_GATING__
# define MIPS_IA_MR1_DEFAULT_IA_DCM_CLK_GATING_VAL                              0
#else
# define MIPS_IA_MR1_DEFAULT_IA_DCM_CLK_GATING_VAL                                  \
    (                                                                               \
        miu_reg_bitfd_mskoff_val(MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_CM2_RBB_CG, 1)  \
    )
#endif /* __CONFIG_ENABLE_IA_CLK_GATING__ */

#define MIPS_IA_MR1_DEFAULT_IA_DCM_VAL              \
    (                                               \
        MIPS_IA_MR1_DEFAULT_IA_DCM_IA_SPRAM_VAL |   \
        MIPS_IA_MR1_DEFAULT_IA_DCM_CLK_GATING_VAL   \
    )

struct mips_ia_mr1_state_internal {
    kal_uint32 ia_dcm_cfg;
};

#ifndef __CONFIG_SUPPORT_DYNAMIC_IA_DCM_SETTING__
const
#endif
struct mips_ia_mr1_state_internal mi1st = {
    .ia_dcm_cfg    = MIPS_IA_MR1_DEFAULT_IA_DCM_VAL,
};

__MIU_STATIC_INLINE__ void mips_ia_mr1_ia_dcm_cfg_update(void)
{
#ifdef __CONFIG_ENABLE_IA_MR1_LV3_DCM__
    MIPS_IA_MR1_GCR_REG(MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT) = mi1st.ia_dcm_cfg;
    miu_syncn(0x2);
#endif /* __CONFIG_ENABLE_IA_MR1_LV3_DCM__ */
}

const kal_int32 mips_ia_mr1_lv3_dcm_enable(const kal_uint32 en)
{
    kal_int32 ret = -1;
#ifdef __CONFIG_SUPPORT_DYNAMIC_IA_DCM_SETTING__
    if(1 == en) {
        ret                 =  0;
        mi1st.ia_dcm_cfg    =  MIPS_IA_MR1_DEFAULT_IA_DCM_VAL;
        mips_ia_mr1_ia_dcm_cfg_update();
    } else if(0 == en) {
        ret                 =  0;
        mi1st.ia_dcm_cfg    =  0;
        mips_ia_mr1_ia_dcm_cfg_update();
    } else
        ret                 = -2;
#endif /* __CONFIG_SUPPORT_DYNAMIC_IA_DCM_SETTING__ */
    return ret;
}

void mips_ia_mr1_gcr_init(void)
{
    mips_ia_mr1_ia_dcm_cfg_update();
}

#endif /* !defined(GEN_FOR_PC) && defined(__MTK_TARGET__) */
