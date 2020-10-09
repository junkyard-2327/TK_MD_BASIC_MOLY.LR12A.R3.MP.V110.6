/******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2016
 *
 *****************************************************************************/

/******************************************************************************
 * Pivate (SS Internal) header for some MIPS IA MR3 utils
 *****************************************************************************/

#ifndef __MIPS_IA_MR3_UTILS_H__
#if !defined(GEN_FOR_PC) && defined(__MTK_TARGET__)
#define __MIPS_IA_MR3_UTILS_H__
#include "mips_ia_utils_public.h"
#include "boot.h"

#ifndef __ASSEMBLER__
# include "kal_public_defs.h"
#endif /* __ASSEMBLER__ */

#undef CONFIG_ENABLE_IA_MR3_LV3_DCM

#define MIPS_IA_MR3_GCR_PRIORITY_SETTING                    (0x00000000)
#define MIPS_IA_MR3_GCR_IOCU_SPCOUNTER                      (0x00000004)
#define MIPS_IA_MR3_GCR_GCR_C_OC_MREQINFO                   (0x00000008)
#define MIPS_IA_MR3_GCR_GCR_C_OC1_MREQINFO                  (0x0000000C)
#define MIPS_IA_MR3_GCR_REG_CUSTOM_2_DM_LO                  (0x00000010)
#define MIPS_IA_MR3_GCR_REG_CUSTOM_2_DM_HI                  (0x00000014)
#define MIPS_IA_MR3_GCR_REG_CUSTOM_3_DM_LO                  (0x00000018)
#define MIPS_IA_MR3_GCR_REG_CUSTOM_3_DM_HI                  (0x0000001C)
#define MIPS_IA_MR3_GCR_REG_CUSTOM_4_DM_LO                  (0x00000020)
#define MIPS_IA_MR3_GCR_REG_CUSTOM_4_DM_HI                  (0x00000024)
#define MIPS_IA_MR3_GCR_REG_CUSTOM_5_DM_LO                  (0x00000028)
#define MIPS_IA_MR3_GCR_REG_CUSTOM_5_DM_HI                  (0x0000002C)
#define MIPS_IA_MR3_GCR_REG_CUSTOM_6_DM_LO                  (0x00000030)
#define MIPS_IA_MR3_GCR_REG_CUSTOM_6_DM_HI                  (0x00000034)
#define MIPS_IA_MR3_GCR_REG_CUSTOM_7_DM_LO                  (0x00000038)
#define MIPS_IA_MR3_GCR_REG_CUSTOM_7_DM_HI                  (0x0000003C)

#define MIPS_IA_MR3_GCR_TOPSM_FRC_VAL_MIRROR_LOW            (0x00000040)
#define MIPS_IA_MR3_GCR_TOPSM_FRC_VAL_MIRROR_HIGH           (0x00000044)
#define MIPS_IA_MR3_GCR_OSTIMER_CNT_VAL_MIRROR              (0x00000048)
#define MIPS_IA_MR3_GCR_OSTIMER_CNT_VAL_MIRROR_DUP          (0x0000004C)
#define MIPS_IA_MR3_GCR_TIME_STAMP_VAL_MIRROR               (0x00000050)
#define MIPS_IA_MR3_GCR_TIME_STAMP_VAL_MIRROR_DUP           (0x00000054)
#define MIPS_IA_MR3_GCR_L1TOPSM_FRC_VAL_LOW                 (0x00000058)
#define MIPS_IA_MR3_GCR_L1TOPSM_FRC_VAL_HIGH                (0x0000005C)

#define MIPS_IA_MR3_GCR_MDINFRA_ELM_CNT0                    (0x00000060)
#define MIPS_IA_MR3_GCR_MDINFRA_ELM_CNT1                    (0x00000064)
#define MIPS_IA_MR3_GCR_MDINFRA_ELM_CNT2                    (0x00000068)
#define MIPS_IA_MR3_GCR_MDINFRA_ELM_CNT3                    (0x0000006C)

#define MIPS_IA_MR3_GCR_MDMCU_EMI_ULTRA_CMD_EN_0_SET        (0x00000070)
#define MIPS_IA_MR3_GCR_MDMCU_EMI_ULTRA_CMD_EN_0_CLR        (0x00000074)
#define MIPS_IA_MR3_GCR_MDMCU_EMI_ULTRA_CMD_EN_1_SET        (0x00000078)
#define MIPS_IA_MR3_GCR_MDMCU_EMI_ULTRA_CMD_EN_1_CLR        (0x0000007C)
#define MIPS_IA_MR3_GCR_MDMCU_EMI_ULTRA_CMD_ID_MASK_BIT_SET (0x00000080)
#define MIPS_IA_MR3_GCR_MDMCU_EMI_ULTRA_CMD_ID_MASK_BIT_CLR (0x00000084)

#define MIPS_IA_MR3_GCR_BUS_MON_STATUS                      (0x00000088)
#define MIPS_IA_MR3_GCR_IA_DCM                              (0x0000008C)

#define MIPS_IA_MR3_GCR_MM_OCP2AXI_SYNC_OVERRIDE            (0x00000090)
#define MIPS_IA_MR3_GCR_MO_OCP2AXI_SYNC_OVERRIDE            (0x00000094)

#define MIPS_IA_MR3_GCR_MDMCU_ELM_CNT0                      (0x000000A0)
#define MIPS_IA_MR3_GCR_MDMCU_ELM_CNT1                      (0x000000A4)
#define MIPS_IA_MR3_GCR_MDMCU_ELM_CNT2                      (0x000000A8)
#define MIPS_IA_MR3_GCR_MDMCU_ELM_CNT3                      (0x000000AC)
#define MIPS_IA_MR3_GCR_MDMCU_ELM_CNT4                      (0x000000B0)
#define MIPS_IA_MR3_GCR_MDMCU_ELM_CNT5                      (0x000000B4)

#define MIPS_IA_MR3_GCR_MDINFRA_ELM_CNT4                    (0x000000B8)
#define MIPS_IA_MR3_GCR_MDINFRA_ELM_CNT5                    (0x000000BC)

#define MIPS_IA_MR3_GCR_PMU_CNT0_CTL                        (0x000000C0)
#define MIPS_IA_MR3_GCR_PMU_CNT0_CLR                        (0x000000C4)
#define MIPS_IA_MR3_GCR_PMU_CNT0_VPE                        (0x000000C8)
#define MIPS_IA_MR3_GCR_PMU_CNT0_QAL                        (0x000000CC)
#define MIPS_IA_MR3_GCR_PMU_CNT1_CTL                        (0x000000D0)
#define MIPS_IA_MR3_GCR_PMU_CNT1_CLR                        (0x000000D4)
#define MIPS_IA_MR3_GCR_PMU_CNT1_VPE                        (0x000000D8)
#define MIPS_IA_MR3_GCR_PMU_CNT1_QAL                        (0x000000DC)
#define MIPS_IA_MR3_GCR_PMU_CNT3_CTL                        (0x000000E0)
#define MIPS_IA_MR3_GCR_PMU_CNT3_CLR                        (0x000000E4)
#define MIPS_IA_MR3_GCR_PMU_CNT3_VPE                        (0x000000E8)
#define MIPS_IA_MR3_GCR_PMU_CNT3_QAL                        (0x000000EC)
#define MIPS_IA_MR3_GCR_PMU_CNT4_CTL                        (0x000000F0)
#define MIPS_IA_MR3_GCR_PMU_CNT4_CLR                        (0x000000F4)
#define MIPS_IA_MR3_GCR_PMU_CNT4_VPE                        (0x000000F8)
#define MIPS_IA_MR3_GCR_PMU_CNT4_QAL                        (0x000000FC)
#define MIPS_IA_MR3_GCR_PMU_CNT5_CTL                        (0x00000100)
#define MIPS_IA_MR3_GCR_PMU_CNT5_CLR                        (0x00000104)
#define MIPS_IA_MR3_GCR_PMU_CNT5_VPE                        (0x00000108)
#define MIPS_IA_MR3_GCR_PMU_CNT5_QAL                        (0x0000010C)
#define MIPS_IA_MR3_GCR_PMU_CNT6_CTL                        (0x00000110)
#define MIPS_IA_MR3_GCR_PMU_CNT6_CLR                        (0x00000114)
#define MIPS_IA_MR3_GCR_PMU_CNT6_VPE                        (0x00000118)
#define MIPS_IA_MR3_GCR_PMU_CNT6_QAL                        (0x0000011C)

#define MIPS_IA_MR3_GCR_PMU_CNT0_VAL                        (0x00000140)
#define MIPS_IA_MR3_GCR_PMU_CNT1_VAL                        (0x00000144)
#define MIPS_IA_MR3_GCR_PMU_CNT2_VAL                        (0x00000148)
#define MIPS_IA_MR3_GCR_PMU_CNT3_VAL                        (0x0000014C)
#define MIPS_IA_MR3_GCR_PMU_CNT4_VAL                        (0x00000150)
#define MIPS_IA_MR3_GCR_PMU_CNT5_VAL                        (0x00000154)

#define MIPS_IA_MR3_GCR_SFU_BASE                            (0x00000160)
#define MIPS_IA_MR3_GCR_SPU_BASE                            (0x00000200)

#define MIPS_IA_MR3_GCR_OSIRQ_STATUS                        (0x00000400)
#define MIPS_IA_MR3_GCR_OSIRQ_SET                           (0x00000404)
#define MIPS_IA_MR3_GCR_OSIRQ_CLR                           (0x00000408)
#define MIPS_IA_MR3_GCR_OSIRQ_MASK                          (0x00000410)
#define MIPS_IA_MR3_GCR_OSIRQ_MASK_SET                      (0x00000414)
#define MIPS_IA_MR3_GCR_OSIRQ_MASK_CLR                      (0x00000418)
#define MIPS_IA_MR3_GCR_OSIRQ_VECTOR                        (0x00000420)

#define MIPS_IA_MR3_GCR_THROTTLE_CTL_SET                    (0x00000450)
#define MIPS_IA_MR3_GCR_THROTTLE_CTL_CLR                    (0x00000454)
#define MIPS_IA_MR3_GCR_THROTTLE_MO_THRESH_HOLD_CNT         (0x00000458)
#define MIPS_IA_MR3_GCR_THROTTLE_MM_THRESH_HOLD_CNT         (0x0000045C)
#define MIPS_IA_MR3_GCR_THROTTLE_MM_CNT_MASK                (0x00000460)
#define MIPS_IA_MR3_GCR_THROTTLE_MTK_FSB_HACK               (0x00000464)

#define MIPS_IA_MR3_GCR_INTERRUPT_MASK                      (0x00000470)
#define MIPS_IA_MR3_GCR_INTERRUPT_MASK_CLR                  (0x00000474)

#define MIPS_IA_MR3_GCR_CIRQ_BASE                           (0x00004000)
#define MIPS_IA_MR3_GCR_ASM_BASE                            (0x00008000)
#define MIPS_IA_MR3_GCR_ULS_BASE                            (0x0000C000)

#ifndef __ASSEMBLER__

# define MIPS_IA_MR3_GCR_REG(__X__)                                 \
    (*(volatile kal_uint32*)(GCR_CUSTOM_ADDR + (__X__)))

#define miu_get_current_addr()          \
    __extension__ ({                    \
        register miu_reg32_t __r;       \
        __asm__ __volatile__  (         \
            ".set push              \n" \
            ".set noreorder         \n" \
            "%=:                    \n" \
            "   lui   %0, %%hi(%=b) \n" \
            "   addiu %0, %%lo(%=b) \n" \
            ".set pop               \n" \
            : "=d" (__r) ::             \
        );                              \
        __r;                            \
    })

extern void mips_ia_mr3_gcr_init(void);
extern const kal_int32 mips_ia_mr3_lv3_dcm_enable(const kal_uint32 en);

__MIU_STATIC_INLINE__ void mips_ia_gcr_init(void)
{
}

__MIU_STATIC_INLINE__ const kal_int32 mips_ia_lv3_dcm_enable_internal(const kal_uint32 en)
{
    return 0;
}

#endif /* __ASSEMBLER__ */

#endif /* !defined(GEN_FOR_PC) && defined(__MTK_TARGET__) */
#endif /* __MIPS_IA_MR3_UTILS_H__ */
