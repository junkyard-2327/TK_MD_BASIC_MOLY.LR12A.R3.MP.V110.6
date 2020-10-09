// to avoid including this header file directly
#ifndef INCLUDE_DSP_HEADER_ENABLE
    #error "Please include CMIF_ALL.h via dsp_header_define_cmif.h"
#endif

#ifndef		__CMIF_ALL_H__
#define		__CMIF_ALL_H__

#include "stddef.h"
#if defined(__MIPS_IA__)
#include "kal_general_types.h"
#elif defined(__CORE_USIP__)
#include "kal_public.h"
#elif defined(__CORE_RAKE__)
#include "mos_public.h"
#endif

// include your own structure header file
#include "mt6293/CMIF/CMIF_SS_region.h"
#include "wcdma/muif/inc/hrxbrp_muif.h"
#include "wcdma/muif/inc/r2e_dhwif_muif.h"
#include "c2k/muif/inc/muif.h"

// already defined in stddef.h
//#define offsetof(s, m)      ((unsigned int)(&((s*)0)->m))

// CMIF composite data structure
typedef volatile struct {
    // Reserve space for SS/ST, set as RW
    CMIF_SS_Mem_Info ss_region;
    kal_uint32 wcdma_cmif[800];
    kal_uint32 c2k_cmif  [900];
    BRP_MUIF_REGS g_BRP_MUIF_BASE;
    // RAT0

    // RAT1
    MUIF_REGS g_DO_MUIF_BASE;
    R2E_DHWIF_REGS g_R2E_DHWIF_REGS;

    // CMIF Structure Check
    SS_CMIFStructPattern cmifstruct_check;

} CMIF_ALL_REGS;

/* CMIF memory size = 0x2000 - 0x54(ctrl register offset) */
#define CMIF_DEF_MEM_TOTAL_SIZE (0x1FAC)

// CMIF BASE on L1 & RAKE
#if defined(__CR4__) || defined(__MIPS_IA__) || defined(__CORE_USIP__)
    #define CMIF_CTRL_REG_BASE          (0xAC358000)
    #define CMIF_MEM_SS_BASE            (0xAC358054)
    #define CMIF_CTRL_REG_BASE_DSP_VIEW (0xD0358000)
#elif defined(__CORE_RAKE__)
    //extern volatile CMIF_ALL_REGS cmif_mem;
    //#define CMIF_MEM_SS_BASE ((kal_uint32)(&cmif_mem))
    #define CMIF_CTRL_REG_BASE (0xD0358000)
    #define CMIF_MEM_SS_BASE   (0xD0358054)
#else
    #error "CMIF should be used only by L1 or RAKE !!!"
#endif

// MACRO for accessing each MODULE and RAT
// For SS use
#define CMIF_ULSP_RAKE_REG_BASE         ((volatile CMIF_SS_Mem_Info*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS,ss_region.cmif_mdl_logger_used)))

/*******************************************************************************
 *  Predefined Global variable
 *******************************************************************************/
#if defined(__CR4__) || defined(__MIPS_IA__)

#define CMIF_SS_MEM_INFO_RAKE           ((volatile CMIF_SS_Mem_Info*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region)))
#define CMIF_SS_MEM_BOOT_INFO_RAKE      ((volatile CMIF_SS_MD32_Boot*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.boot)))
#define RAKE_SS_SLEEPINFO               ((volatile SS_RAKE_SLEEP_REL*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.sleep_info)))
#define CMIF_SS_MEM_EX_LOG_INFO_RAKE    ((volatile CMIF_SS_EX_Log*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.ex_log)))
#define CMIF_SS_ZI_INFO_RAKE            ((volatile CMIF_SS_ZI_InitInfo_t*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.zi_info)))
#define CMIF_SS_STACK_UNWIND_INFO_RAKE  ((volatile unsigned int*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.zi_info.md32_active_mode)))
#define CMIF_SS_CMIFCHECK               ((volatile SS_CMIFStructPattern*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, cmifstruct_check)))
#define WCDMA_RAKE_CMIF_REG_BASE       ((volatile kal_uint8*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS,wcdma_cmif)))//return address should be of 32, but for legacy code usage we have kept as 8 bit.
#define C2K_RAKE_CMIF_REG_BASE         ((volatile kal_uint8*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS,c2k_cmif)))//return address should be of 32, but for legacy code usage we have kept as 8 bit.
#define CMIF_SS_MODE_EFUSE_INFO              ((volatile unsigned int*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.cmif_ss_mode_efuse_info)))
#define CMIF_SS_GMN_EFUSE_INFO              ((volatile unsigned int*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.cmif_ss_gmn_efuse_info)))

#elif defined(__CORE_USIP__)
//put usip macro here
#define MUIF_MEM_RAKE_BRP_BASE_ADDR_BRP ((volatile BRP_MUIF_REGS*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, g_BRP_MUIF_BASE)))
#define C2K_EVDO_MUIF_BASE_ADDR         ((volatile MUIF_REGS*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, g_DO_MUIF_BASE)))
#define CMIF_RAKE_EQ_BASE_ADDR         ((volatile R2E_DHWIF_REGS*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, g_R2E_DHWIF_REGS)))
#define C2K_RAKE_CMIF_REG_BASE         ((volatile kal_uint8*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS,c2k_cmif)))//return address should be of 32, but for legacy code usage we have kept as 8 bit.

#elif defined(__CORE_RAKE__)

#define CMIF_SS_MEM_INFO                ((volatile CMIF_SS_Mem_Info*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region)))
#define CMIF_SS_MEM_BOOT_INFO           ((volatile CMIF_SS_MD32_Boot*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.boot)))
#define RAKE_SS_SLEEPINFO               ((volatile SS_RAKE_SLEEP_REL*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.sleep_info)))
#define CMIF_SS_MEM_BOOT_RDY            ((volatile unsigned int*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.boot.boot_rdy)))
#define CMIF_SS_MEM_BOOT_MODE           ((volatile unsigned int*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.boot.md32_boot_mode)))
#define CMIF_SS_MEM_DBG_INFO            ((volatile CMIF_SS_DBG_Reg*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.dbg_reg)))
#define CMIF_SS_MEM_EX_LOG_INFO         ((volatile CMIF_SS_EX_Log*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.ex_log)))
#define CMIF_SS_MEM_EX_CAUSE            ((volatile unsigned int*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.ex_log.finish_fill)))
#define CMIF_SS_ZI_INFO                 ((volatile CMIF_SS_ZI_InitInfo_t*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.zi_info)))
#define CMIF_SS_ZI_ENABLE_INFO          ((volatile unsigned int*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.cmif_ss_zi_enable)))
#define CMIF_SS_STACK_UNWIND_INFO       ((volatile unsigned int*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.zi_info.md32_active_mode)))
#define CMIF_SS_CMIFCHECK               ((volatile SS_CMIFStructPattern*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, cmifstruct_check)))
#define CMIF_SS_MODE_EFUSE_INFO              ((volatile unsigned int*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.cmif_ss_mode_efuse_info)))
#define CMIF_SS_GMN_EFUSE_INFO              ((volatile unsigned int*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, ss_region.cmif_ss_gmn_efuse_info)))

#define CMIF_C2M_M2C_CTRL_OFFSET       ((volatile kal_uint8*)(CMIF_CTRL_REG_BASE))//return address should be of 32, but for legacy code usage we have kept as 8 bit.
#define WCDMA_RAKE_CMIF_REG_BASE       ((volatile kal_uint8*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS,wcdma_cmif)))//return address should be of 32, but for legacy code usage we have kept as 8 bit.
#define C2K_RAKE_CMIF_REG_BASE         ((volatile kal_uint8*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS,c2k_cmif)))//return address should be of 32, but for legacy code usage we have kept as 8 bit.

#define MUIF_MEM_RAKE_BRP_BASE_ADDR    ((volatile BRP_MUIF_REGS*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, g_BRP_MUIF_BASE)))
#define C2K_EVDO_MUIF_BASE_ADDR        ((volatile MUIF_REGS*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, g_DO_MUIF_BASE)))
#define CMIF_RAKE_EQ_BASE_ADDR         ((volatile R2E_DHWIF_REGS*)(CMIF_MEM_SS_BASE + offsetof(CMIF_ALL_REGS, g_R2E_DHWIF_REGS)))

#endif /* __MD32__  __CR4__*/

#endif //__CMIF_ALL_H__
