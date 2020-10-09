/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   cache_sw.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This Module defines the functionality of code and data cache.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
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
 *
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _CACHE_SW_H
#define _CACHE_SW_H

#include "kal_general_types.h"


#define L2_Only_Sync() do {\
        register kal_uint32 __tmp__;\
        __asm__ volatile (\
            "li %0, 0x1\n"\
            "sw %0, 0(%1)\n"\
            :"=&r"(__tmp__)\
            :"r"(l2_sync_base):\
        );\
    } while (0)

/*******************************************************************************
 * constants & macros
 *******************************************************************************/
 
#define CPU_CACHE_LINE_SIZE 32
#define CPU_L2CACHE_LINE_SIZE 64
#define CPU_CACHE_LINE_BIT_OFFSET 5
#define CPU_CACHE_LINE_SIZE_MASK 0x0000001F
#define L2CACHE_LINE_SIZE_MASK 0x0000003F

#define CPU_CACHE_LINE_ALIGN_ADDR(_addr)    \
	((_addr) & ~CPU_CACHE_LINE_SIZE_MASK)
#define CPU_CACHE_LINE_ALIGN_LEN(_addr, _len)   \
	((CPU_CACHE_LINE_ALIGN_ADDR((_addr) + (_len) -1) - CPU_CACHE_LINE_ALIGN_ADDR((_addr))) + CPU_CACHE_LINE_SIZE)

#define IS_CACHE_LINE_SIZE_ALIGNED(value) ((value&CPU_CACHE_LINE_SIZE_MASK)==0? 1: 0)

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
#define L2CACHE_LINE_ALIGN_ADDR(_addr)    \
    ((_addr) & ~L2CACHE_LINE_SIZE_MASK)
#define L2CACHE_LINE_ALIGN_LEN(_addr, _len)   \
    ((L2CACHE_LINE_ALIGN_ADDR((_addr) + (_len) -1) - L2CACHE_LINE_ALIGN_ADDR((_addr))) + CPU_L2CACHE_LINE_SIZE)

#define IS_L2CACHE_LINE_SIZE_ALIGNED(value) ((value&L2CACHE_LINE_SIZE_MASK)==0? 1: 0)
#endif

/*******************************************************************************
 * function prototypes
 *******************************************************************************/
 
#if defined(__ARM9_MMU__) || defined(__ARM11_MMU__) || defined(__MTK_MMU__) || defined(__CR4__) || defined(__MIPS_IA__)

kal_uint32 is_predef_dyna_c_region(kal_uint32 vaddr, kal_uint32 len);
kal_uint32 dynamic_switch_cacheable_region(void *vaddr, kal_uint32 len, kal_uint32 cacheable);
kal_uint32 dynamic_switch_cacheable_region_nonblocking(void *vaddr, kal_uint32 len, kal_uint32 cacheable);

#endif  /* __ARM9_MMU__ || __ARM11_MMU__ || __MTK_MMU__ || __CR4__ || __MIPS_IA__*/

kal_int32 query_is_dram(kal_uint32 addr, kal_uint32 len);
#define INT_QueryIsDRAM(addr, len) \
                 query_is_dram((kal_uint32)addr, (kal_uint32)len)

kal_int32 query_is_noncached_ram(kal_uint32 addr, kal_uint32 len);
#define INT_QueryIsNonCachedRAM(addr, len) \
                 query_is_noncached_ram((kal_uint32)addr, (kal_uint32)len)
                
kal_int32 query_is_cached_ram(kal_uint32 addr, kal_uint32 len);
#define INT_QueryIsCachedRAM(addr, len) \
                 query_is_cached_ram((kal_uint32)addr, (kal_uint32)len)

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__) || defined(__WRITE_THROUGH_CACHEABLE__)
kal_int32 invalidate_dcache(kal_uint32 addr, kal_uint32 len) DECLARE_MIPS16;
#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
kal_int32 invalidate_dcache_L2WB(kal_uint32 addr, kal_uint32 len) DECLARE_MIPS16;
#endif
kal_int32 invalidate_icache(kal_uint32 addr, kal_uint32 len);
kal_int32 invalidate_dcache_nonblocking(kal_uint32 addr, kal_uint32 len);
kal_int32 invalidate_icache_nonblocking(kal_uint32 addr, kal_uint32 len);

#endif /* __DYNAMIC_SWITCH_CACHEABILITY__ || __WRITE_THROUGH_CACHEABLE__ */

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
 /*******************************************************************************
 * <GROUP Functions>
 * 
 * FUNCTION
 *  clean_dcache
 * DESCRIPTION
 *  This function is used to clean cache
 * PARAMETERS
 *  addr: [IN] the start address. it must be cache line size aligned (usually 32byte)
 *  len: [IN] the length. it must be the multiple of cache line size
 * RETURNS
 *  always return 0 
 ******************************************************************************/
kal_int32 clean_dcache(kal_uint32 addr, kal_uint32 len) DECLARE_MIPS16;
kal_int32 clean_dcache_L2WB(kal_uint32 addr, kal_uint32 len);
kal_int32 clean_dcache_nonblocking(kal_uint32 addr, kal_uint32 len);
 /*******************************************************************************
 * <GROUP Functions>
 * 
 * FUNCTION
 *  clean_and_invalidate_dcache
 * DESCRIPTION
 *  This function is used to clean and invalidate cache.
 * PARAMETERS
 *  addr: [IN] the start address. it must be cache line size aligned (usually 32byte)
 *  len: [IN] the length. it must be the multiple of cache line size
 * RETURNS
 *  always return 0 
 ******************************************************************************/
kal_int32 clean_and_invalidate_dcache(kal_uint32 addr, kal_uint32 len) DECLARE_MIPS16;
kal_int32 clean_and_invalidate_dcache_L2WB(kal_uint32 addr, kal_uint32 len);
kal_int32 clean_and_invalidate_dcache_nonblocking(kal_uint32 addr, kal_uint32 len);
kal_uint32 virt_to_phys(void * address);
kal_uint32 phys_to_virt(void * address);
kal_uint32 remap_to_physRam(void * address);
#endif /* __DYNAMIC_SWITCH_CACHEABILITY__ */

kal_int32 lock_l2cache(kal_uint32 addr, kal_uint32 len);
kal_int32 invalidate_l2cache(kal_uint32 addr, kal_uint32 len);

#endif /* _CACHE_SW_H */
