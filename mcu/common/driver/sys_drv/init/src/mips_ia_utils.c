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

MIU_M32_FUNC void miu_vpe1_cross_config_vpe0_rps(const unsigned int disable)
{
#ifdef CONFIG_MIPS_IA_VPE1_DISABLE_VPE0_RPS
    kal_uint32 config7;
    //kal_uint32 vpecontrol;
    kal_uint32 old_target;

    // Set target TC to TC0 (VPE0) by (TC1) VPE1
    old_target = miu_mt_settarget(0);

    // Change VPE0's RPS by VPE1
    config7 = miu_mftc0(MIU_C0_CONFIG7);
    if(0 == disable) {
        config7 = config7 | ( (1<<2)); // RPS = bit 2,
    } else if (1 == disable) {
        config7 = config7 & (~(1<<2));
    }
    miu_mttc0(MIU_C0_CONFIG7, config7);

    miu_mt_settarget(old_target);

    /* Disable MT by DVPE EHB instruction to let core temporary become
     * single thread mode to trigger the RPS rebinding
     */
    miu_mt_dvpe();
    miu_mt_dmt();

    /* Re-enable MT after RPS rebinding by EVPE instruction */
    miu_mt_emt();
    miu_mt_evpe();
#endif /* CONFIG_MIPS_IA_VPE1_DISABLE_VPE0_RPS */
}

MIU_M32_FUNC void miu_wait(void)
{
    __asm__ __volatile__ (
        "wait;\n"
    );
}

#define is_vpe0_of_each_core(__vpe_id__) (0 == ((__vpe_id__) % 2))

__MIU_STATIC_INLINE__ void mips_ia_misc_init_common(const kal_uint32 vpe_id)
{
    if (0 == vpe_id) {
        /* core0/vpe0/tc0, the only tc execute at init and iA dormant reset
         * (include CM2) */
        IAPMU_CM_Init(vpe_id);
        mips_ia_gcr_init();
    }
}

__MIU_STATIC_INLINE__ void mips_ia_misc_disable_busslp(void)
{
#ifdef CONFIG_MIPS_IA_DISABLE_BUSSLP
    kal_uint32 tmp = miu_mfc0(MIU_C0_CONFIG7);
    miu_mtc0(MIU_C0_CONFIG7,
        miu_update_reg_bitfd(MIU_C0_CONFIG7_BUSSLP, tmp, 1));
#endif /* CONFIG_MIPS_IA_DISABLE_BUSSLP */
}

void mips_ia_misc_init_by_core(void)
{
    const kal_uint32 vpe_id = miu_get_current_vpe_id();
    if (is_vpe0_of_each_core(vpe_id))
        mips_ia_misc_disable_busslp();
}

void mips_ia_misc_init(void)
{
    const kal_uint32 vpe_id = miu_get_current_vpe_id();
    mips_ia_misc_init_common(vpe_id);
}

void mips_ia_misc_enter_dormant(void)
{
    const kal_uint32 vpe_id = miu_get_current_vpe_id();
    IAPMU_CM_Dor_Save(vpe_id);
}

void mips_ia_misc_leave_dormant(void)
{
    const kal_uint32 vpe_id = miu_get_current_vpe_id();
    
    IAPMU_CM_Dor_Restore(vpe_id);
    
    if(0 == vpe_id)
        mips_ia_gcr_init();
    
    if (is_vpe0_of_each_core(vpe_id))
        mips_ia_misc_disable_busslp();
}

const kal_int32 mips_ia_lv3_dcm_enable(const kal_uint32 en)
{
    return mips_ia_lv3_dcm_enable_internal(en);
}

#endif /* !defined(GEN_FOR_PC) && defined(__MTK_TARGET__) */
