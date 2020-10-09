/******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2017
 *
 *****************************************************************************/

/******************************************************************************
 * Pivate (SS Internal) header for some MIPS IA MR1 utils
 *****************************************************************************/

#ifndef __MIPS_IA_MR1_UTILS_H__
#if !defined(GEN_FOR_PC) && defined(__MTK_TARGET__)
#define __MIPS_IA_MR1_UTILS_H__
#include "mips_ia_utils_public.h"
#include "boot.h"

#ifndef __ASSEMBLER__
# include "kal_public_defs.h"
#endif /* __ASSEMBLER__ */

#if defined(MT6758)
# define CONFIG_ENABLE_IA_MR1_LV3_DCM
#else
# undef CONFIG_ENABLE_IA_MR1_LV3_DCM
#endif

#define MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT                              (0x00000024)

#define MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_CM2_RBB_CG_BITFIELD_BEG      (0)
#define MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_CM2_RBB_CG_BITFIELD_END      (0)
#define MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_DSP_DCM_BITFIELD_BEG         (1)
#define MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_DSP_DCM_BITFIELD_END         (1)
#define MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_ISP_DCM_BITFIELD_BEG         (2)
#define MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_ISP_DCM_BITFIELD_END         (2)
#define MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_DCACHE_DCM_BITFIELD_BEG      (3)
#define MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_DCACHE_DCM_BITFIELD_END      (3)
#define MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_ICACHE_DCM_BITFIELD_BEG      (4)
#define MIPS_IA_MR1_GCR_REG_OTH_LOWPWR_OPT_ICACHE_DCM_BITFIELD_END      (4)

#ifndef __ASSEMBLER__

# define MIPS_IA_MR1_GCR_REG(__X__)                                 \
        (*(volatile kal_uint32*)(GCR_CUSTOM_ADDR + (__X__)))

extern void mips_ia_mr1_gcr_init(void);
extern const kal_int32 mips_ia_mr1_lv3_dcm_enable(const kal_uint32 en);

__MIU_STATIC_INLINE__ void mips_ia_gcr_init(void)
{
    mips_ia_mr1_gcr_init();
}

__MIU_STATIC_INLINE__ kal_int32 mips_ia_lv3_dcm_enable_internal(const kal_uint32 en)
{
    return mips_ia_mr1_lv3_dcm_enable(en);
}

#endif /* __ASSEMBLER__ */

#endif /* !defined(GEN_FOR_PC) && defined(__MTK_TARGET__) */
#endif /* __MIPS_IA_MR1_UTILS_H__ */
