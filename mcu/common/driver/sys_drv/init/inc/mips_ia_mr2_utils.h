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
 * Pivate (SS Internal) header for some MIPS IA MR2 utils
 *****************************************************************************/

#ifndef __MIPS_IA_MR2_UTILS_H__
#if !defined(GEN_FOR_PC) && defined(__MTK_TARGET__)
#define __MIPS_IA_MR2_UTILS_H__
#include "mips_ia_utils_public.h"
#include "boot.h"

#ifndef __ASSEMBLER__
# include "kal_public_defs.h"
#endif /* __ASSEMBLER__ */

#undef CONFIG_ENABLE_IA_MR2_LV3_DCM

#define CONFIG_CORE0_ISPRAM_SIZE                            (180*1024)
#define CONFIG_CORE0_DSPRAM_SIZE                            ( 36*1024)
#define CONFIG_CORE1_ISPRAM_SIZE                            (144*1024)
#define CONFIG_CORE1_DSPRAM_SIZE                            ( 24*1024)

#define MIPS_IA_MR2_GCR_PRIORITY_SETTING                    (0x00000000)
#define MIPS_IA_MR2_GCR_IOCU_SPCOUNTER                      (0x00000004)
#define MIPS_IA_MR2_GCR_GCR_C_OC_MREQINFO                   (0x00000008)
#define MIPS_IA_MR2_GCR_GCR_C_OC1_MREQINFO                  (0x0000000C)
#define MIPS_IA_MR2_GCR_REG_CUSTOM_2_DM_LO                  (0x00000010)
#define MIPS_IA_MR2_GCR_REG_CUSTOM_2_DM_HI                  (0x00000014)
#define MIPS_IA_MR2_GCR_REG_CUSTOM_3_DM_LO                  (0x00000018)
#define MIPS_IA_MR2_GCR_REG_CUSTOM_3_DM_HI                  (0x0000001C)
#define MIPS_IA_MR2_GCR_REG_CUSTOM_4_DM_LO                  (0x00000020)
#define MIPS_IA_MR2_GCR_REG_CUSTOM_4_DM_HI                  (0x00000024)
#define MIPS_IA_MR2_GCR_REG_CUSTOM_5_DM_LO                  (0x00000028)
#define MIPS_IA_MR2_GCR_REG_CUSTOM_5_DM_HI                  (0x0000002C)
#define MIPS_IA_MR2_GCR_REG_CUSTOM_6_DM_LO                  (0x00000030)
#define MIPS_IA_MR2_GCR_REG_CUSTOM_6_DM_HI                  (0x00000034)
#define MIPS_IA_MR2_GCR_REG_CUSTOM_7_DM_LO                  (0x00000038)
#define MIPS_IA_MR2_GCR_REG_CUSTOM_7_DM_HI                  (0x0000003C)
#define MIPS_IA_MR2_GCR_TOPSM_FRC_VAL_MIRROR_LOW            (0x00000040)
#define MIPS_IA_MR2_GCR_TOPSM_FRC_VAL_MIRROR_HIGH           (0x00000044)
#define MIPS_IA_MR2_GCR_OSTIMER_CNT_VAL_MIRROR              (0x00000048)
#define MIPS_IA_MR2_GCR_OSTIMER_CNT_VAL_MIRROR_DUP          (0x0000004C)
#define MIPS_IA_MR2_GCR_TIME_STAMP_VAL_MIRROR               (0x00000050)
#define MIPS_IA_MR2_GCR_TIME_STAMP_VAL_MIRROR_DUP           (0x00000054)
#define MIPS_IA_MR2_GCR_L1TOPSM_FRC_VAL_LOW                 (0x00000058)
#define MIPS_IA_MR2_GCR_L1TOPSM_FRC_VAL_HIGH                (0x0000005C)
#define MIPS_IA_MR2_GCR_MDINFRA_ELM_CNT0                    (0x00000060)
#define MIPS_IA_MR2_GCR_MDINFRA_ELM_CNT1                    (0x00000064)
#define MIPS_IA_MR2_GCR_MDINFRA_ELM_CNT2                    (0x00000068)
#define MIPS_IA_MR2_GCR_MDINFRA_ELM_CNT3                    (0x0000006C)
#define MIPS_IA_MR2_GCR_MDMCU_EMI_ULTRA_CMD_EN_0_SET        (0x00000070)
#define MIPS_IA_MR2_GCR_MDMCU_EMI_ULTRA_CMD_EN_0_CLR        (0x00000074)
#define MIPS_IA_MR2_GCR_MDMCU_EMI_ULTRA_CMD_EN_1_SET        (0x00000078)
#define MIPS_IA_MR2_GCR_MDMCU_EMI_ULTRA_CMD_EN_1_CLR        (0x0000007C)
#define MIPS_IA_MR2_GCR_MDMCU_EMI_ULTRA_CMD_ID_MASK_BIT_SET (0x00000080)
#define MIPS_IA_MR2_GCR_MDMCU_EMI_ULTRA_CMD_ID_MASK_BIT_CLR (0x00000084)
#define MIPS_IA_MR2_GCR_BUS_MON_STATUS                      (0x00000088)
#define MIPS_IA_MR2_GCR_IA_DCM                              (0x0000008C)
#define MIPS_IA_MR2_GCR_MM_OCP2AXI_SYNC_OVERRIDE            (0x00000090)
#define MIPS_IA_MR2_GCR_MO_OCP2AXI_SYNC_OVERRIDE            (0x00000094)
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_0                  (0x000000A0)
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_1                  (0x000000A4)
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_2                  (0x000000A8)
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_3                  (0x000000AC)
#define MIPS_IA_MR2_GCR_MDMCU_ELM_CNT0                      (0x000000B0)
#define MIPS_IA_MR2_GCR_MDMCU_ELM_CNT1                      (0x000000B4)
#define MIPS_IA_MR2_GCR_MDMCU_ELM_CNT2                      (0x000000B8)
#define MIPS_IA_MR2_GCR_MDMCU_ELM_CNT3                      (0x000000BC)
#define MIPS_IA_MR2_GCR_CORE0_ISPRAM_ADDR_PHY_MAX           (0x000000C0)
#define MIPS_IA_MR2_GCR_CORE0_DSPRAM_ADDR_PHY_MAX           (0x000000C4)
#define MIPS_IA_MR2_GCR_CORE1_ISPRAM_ADDR_PHY_MAX           (0x000000C8)
#define MIPS_IA_MR2_GCR_CORE1_DSPRAM_ADDR_PHY_MAX           (0x000000CC)
#define MIPS_IA_MR2_GCR_CORE2_ISPRAM_ADDR_PHY_MAX           (0x000000D0)
#define MIPS_IA_MR2_GCR_CORE2_DSPRAM_ADDR_PHY_MAX           (0x000000D4)
#define MIPS_IA_MR2_GCR_CORE3_ISPRAM_ADDR_PHY_MAX           (0x000000D8)
#define MIPS_IA_MR2_GCR_CORE3_DSPRAM_ADDR_PHY_MAX           (0x000000DC)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_CTL                    (0x000000E0)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_IRQ_PENDING            (0x000000E4)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO                   (0x000000E8)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_ADDR                   (0x000000EC)
#define MIPS_IA_MR2_GCR_SPRAM_ERR_VALUE_RET                 (0x00000100)
#define MIPS_IA_MR2_GCR_INTEGRATION_TEST_CTRL               (0x00000110)
#define MIPS_IA_MR2_GCR_DMA_THRESH_HOLD_CTRL0               (0x00000120)
#define MIPS_IA_MR2_GCR_DMA_THRESH_HOLD_CTRL1               (0x00000124)
#define MIPS_IA_MR2_GCR_DMA_THRESH_HOLD_CTRL2               (0x00000128)
#define MIPS_IA_MR2_GCR_DMA_THRESH_HOLD_CTRL3               (0x0000012C)
#define MIPS_IA_MR2_GCR_DMA_ISPRAM_THRESH_HOLD_CNT0         (0x00000130)
#define MIPS_IA_MR2_GCR_DMA_SPRAM_THRESH_HOLD_CNT0          (0x00000134)
#define MIPS_IA_MR2_GCR_DMA_ISPRAM_THRESH_HOLD_CNT1         (0x00000138)
#define MIPS_IA_MR2_GCR_DMA_SPRAM_THRESH_HOLD_CNT1          (0x0000013C)
#define MIPS_IA_MR2_GCR_DMA_ISPRAM_THRESH_HOLD_CNT2         (0x00000140)
#define MIPS_IA_MR2_GCR_DMA_SPRAM_THRESH_HOLD_CNT2          (0x00000144)
#define MIPS_IA_MR2_GCR_DMA_ISPRAM_THRESH_HOLD_CNT3         (0x00000148)
#define MIPS_IA_MR2_GCR_DMA_SPRAM_THRESH_HOLD_CNT3          (0x0000014C)
#define MIPS_IA_MR2_GCR_SPRAM_FIXED_ADDR_MODE               (0x00000150)
#define MIPS_IA_MR2_GCR_CIRQ_BASE                           (0x00004000)
#define MIPS_IA_MR2_GCR_ASM_BASE                            (0x00008000)
#define MIPS_IA_MR2_GCR_ULS_BASE                            (0x0000C000)

/* iA DCM (Separate Cache/SPRAM access) */
#define MIPS_IA_MR2_GCR_IA_DCM_BUS_BRIDGE_CLK_BITFIELD_BEG              (0)
#define MIPS_IA_MR2_GCR_IA_DCM_BUS_BRIDGE_CLK_BITFIELD_END              (0)
#define MIPS_IA_MR2_GCR_IA_DCM_CM_CLK_BITFIELD_BEG                      (1)
#define MIPS_IA_MR2_GCR_IA_DCM_CM_CLK_BITFIELD_END                      (1)
#define MIPS_IA_MR2_GCR_IA_DCM_BIU_CLK_BITFIELD_BEG                     (2)
#define MIPS_IA_MR2_GCR_IA_DCM_BIU_CLK_BITFIELD_END                     (2)
#define MIPS_IA_MR2_GCR_IA_DCM_LSU_CLK_BITFIELD_BEG                     (3)
#define MIPS_IA_MR2_GCR_IA_DCM_LSU_CLK_BITFIELD_END                     (3)
#define MIPS_IA_MR2_GCR_IA_DCM_PQC_CLK_BITFIELD_BEG                     (4)
#define MIPS_IA_MR2_GCR_IA_DCM_PQC_CLK_BITFIELD_END                     (7)
#define MIPS_IA_MR2_GCR_IA_DCM_ISP_DCM_BITFIELD_BEG                     (8)
#define MIPS_IA_MR2_GCR_IA_DCM_ISP_DCM_BITFIELD_END                     (8)
#define MIPS_IA_MR2_GCR_IA_DCM_DSP_DCM_BITFIELD_BEG                     (9)
#define MIPS_IA_MR2_GCR_IA_DCM_DSP_DCM_BITFIELD_END                     (9)

#define MIPS_IA_MR2_GCR_SPRAM_FIXED_ADDR_MODE_EN_BITFIELD_BEG           (0)
#define MIPS_IA_MR2_GCR_SPRAM_FIXED_ADDR_MODE_EN_BITFIELD_END           (0)

/* SPRAM Remap Feature */
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_DSPRAM_MSK_BITFIELD_BEG      (0 )
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_DSPRAM_MSK_BITFIELD_END      (2 )
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_DSPRAM_OFF_BITFIELD_BEG      (3 )
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_DSPRAM_OFF_BITFIELD_END      (6 )
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_ISPRAM_MSK_BITFIELD_BEG      (8 )
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_ISPRAM_MSK_BITFIELD_END      (10)
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_ISPRAM_OFF_BITFIELD_BEG      (11)
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_ISPRAM_OFF_BITFIELD_END      (14)

#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_xSPRAM_256KB_MSK             (0x7)
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_xSPRAM_256KB_OFF             (0x6)
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_xSPRAM_128KB_MSK             (0x7)
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_xSPRAM_128KB_OFF             (0x5)

/* SPRAM DECERR Control */
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_CTL_ISPRAM_WERR_BITFIELD_BEG       (4)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_CTL_ISPRAM_WERR_BITFIELD_END       (4)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_CTL_ISPRAM_RERR_BITFIELD_BEG       (3)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_CTL_ISPRAM_RERR_BITFIELD_END       (3)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_CTL_DSPRAM_WERR_BITFIELD_BEG       (2)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_CTL_DSPRAM_WERR_BITFIELD_END       (2)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_CTL_DSPRAM_RERR_BITFIELD_BEG       (1)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_CTL_DSPRAM_RERR_BITFIELD_END       (1)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_CTL_DMA_AERR_BITFIELD_BEG          (0)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_CTL_DMA_AERR_BITFIELD_END          (0)

#define MIPS_IA_MR2_GCR_SPRAM_DECERR_IRQ_PENDING_PENDING_BITFIELD_BEG   (0)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_IRQ_PENDING_PENDING_BITFIELD_END   (0)

#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_AXID_BITFIELD_BEG             (16)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_AXID_BITFIELD_END             (27)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_TCID_BITFIELD_BEG             (8)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_TCID_BITFIELD_END             (11)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_VPEID_BITFIELD_BEG            (7)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_VPEID_BITFIELD_END            (7)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_INFO_BITFIELD_BEG             (5)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_INFO_BITFIELD_END             (6)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_SP_TYPE_BITFIELD_BEG          (4)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_SP_TYPE_BITFIELD_END          (4)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_RW_BITFIELD_BEG               (3)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_RW_BITFIELD_END               (3)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_LOC_BITFIELD_BEG              (0)
#define MIPS_IA_MR2_GCR_SPRAM_DECERR_INFO_LOC_BITFIELD_END              (2)

/* SPRAM Remap Feature Configuration */
#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_IDSPRAM_256KB_128KB      \
    (                                                               \
        miu_reg_bitfd_mskoff_val(                                   \
            MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_DSPRAM_MSK,          \
            MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_xSPRAM_128KB_MSK)   |\
        miu_reg_bitfd_mskoff_val(                                   \
            MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_DSPRAM_OFF,          \
            MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_xSPRAM_128KB_OFF)   |\
        miu_reg_bitfd_mskoff_val(                                   \
            MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_ISPRAM_MSK,          \
            MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_xSPRAM_256KB_MSK)   |\
        miu_reg_bitfd_mskoff_val(                                   \
            MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_ISPRAM_OFF,          \
            MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_xSPRAM_256KB_OFF)    \
    )

#define MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_DEFAULT_CFG\
    MIPS_IA_MR2_GCR_SPRAM_REMAP_CORE_N_IDSPRAM_256KB_128KB

#ifndef __ASSEMBLER__

# define MIPS_IA_MR2_GCR_REG(__X__)                                 \
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

__MIU_STATIC_INLINE__ void __miu_gcr_init_spram_remap(void)
{
    // make it dummy since we init it in mips_ia_misc_init/mips_ia_misc_leave_dormant
}

__MIU_STATIC_INLINE__ void _miu_gcr_init_spram_backdor(void)
{
    // make it dummy since we init it in mips_ia_misc_init/mips_ia_misc_leave_dormant
}

extern void mips_ia_mr2_gcr_init(void);
extern const kal_int32 mips_ia_mr2_lv3_dcm_enable(const kal_uint32 en);

__MIU_STATIC_INLINE__ void mips_ia_gcr_init(void)
{
    mips_ia_mr2_gcr_init();
}

__MIU_STATIC_INLINE__ const kal_int32 mips_ia_lv3_dcm_enable_internal(const kal_uint32 en)
{
    return mips_ia_mr2_lv3_dcm_enable(en);
}

#endif /* __ASSEMBLER__ */

#endif /* !defined(GEN_FOR_PC) && defined(__MTK_TARGET__) */
#endif /* __MIPS_IA_MR2_UTILS_H__ */
