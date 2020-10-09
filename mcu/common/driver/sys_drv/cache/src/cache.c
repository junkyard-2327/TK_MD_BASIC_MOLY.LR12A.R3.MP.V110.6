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
 *   cache.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This Module defines the functionality of Code and Data cache.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*******************************************************************************
 * Include header files.
 *******************************************************************************/
#include "kal_iram_section_defs.h"
#include "cache_drv_region.h" //attribute redefine
#include "cache_sw_int.h" //internal macro    
#include "cache_sw.h" //public api & cache line size info (should be removed)
#include "init.h" //use EXTSRAM_REGION_INFO_T structure
#include "mmu.h"
#include "custom_scatstruct.h"
#include "system_trc.h"
#include "init_trc_api.h"
#include "kal_trace.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "cache_dbg.h" //debug api
#include "cache_internal_api.h"
#include "sync_data.h" //sync macro
#include "l1cache_def.h"
#include "l2cache_def.h"
#include "kal_internal_api.h"
#include "mips_ia_utils_public.h"
#include <ex_public.h>
#include "event_info_utility.h"


#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
#if defined(CUSTOM_ASSERT_ADDR_EXT2)
#define CACHE_ASSERT(cond, cached_addr, retaddr, info) CUSTOM_ASSERT_ADDR_EXT2(cond, retaddr, cached_addr, info);
#else
#define CACHE_ASSERT(cond, cached_addr, retaddr, info) EXT_ASSERT3(cond, retaddr, cached_addr, info);
#endif
#endif

extern unsigned int L2CACHE_LINE_SIZE;
extern unsigned int l2cache_line_nr;

#ifdef __CACHE_DEBUG_EN__
SEC_INTSRAM_DATA_ZI CACHE_LOG_T g_cache_inv_log[VPE_NUM_MAX][CACHE_DBG_LOG_MAX];
SEC_INTSRAM_DATA_ZI CACHE_LOG_T g_cache_cln_log[VPE_NUM_MAX][CACHE_DBG_LOG_MAX];
SEC_INTSRAM_DATA_ZI CACHE_LOG_T g_cache_cln_inv_log[VPE_NUM_MAX][CACHE_DBG_LOG_MAX];
SEC_INTSRAM_DATA_ZI CACHE_LOG_T g_cache_lock_log[VPE_NUM_MAX][CACHE_DBG_LOG_MAX];
SEC_INTSRAM_DATA_ZI kal_int32 g_cache_inv_log_idx[VPE_NUM_MAX] = {0};
SEC_INTSRAM_DATA_ZI kal_int32 g_cache_cln_log_idx[VPE_NUM_MAX] = {0};
SEC_INTSRAM_DATA_ZI kal_int32 g_cache_cln_inv_log_idx[VPE_NUM_MAX] = {0};
SEC_INTSRAM_DATA_ZI kal_int32 g_cache_lock_log_idx[VPE_NUM_MAX] = {0};
#endif /*__CACHE_DEBUG_EN__*/

extern unsigned int cache_line_nr;
extern unsigned int cache_line_nr_per_way;

extern unsigned int icache_line_nr;
extern unsigned int icache_line_nr_per_way;
extern unsigned int dcache_line_nr;
extern unsigned int dcache_line_nr_per_way;

extern kal_uint32 query_opposite_switchable_cacheaddr_ram(kal_uint32 addr);
extern void system_query_cacheable_shm_info(kal_uint32 *start_addr, kal_uint32 *end_addr , kal_uint32 *size);

CACHE_FATAL_REASON cache_exception_reason[VPE_NUM_MAX] = {CACHE_DEFAULT_NO_FATAL, CACHE_DEFAULT_NO_FATAL, CACHE_DEFAULT_NO_FATAL, CACHE_DEFAULT_NO_FATAL};
void cache_exception_reason_record(CACHE_FATAL_REASON reason, kal_uint32 para1);

/*******************************************************************************
 * Define import functions.
 *******************************************************************************/

#if defined(__MTK_TARGET__) 
/*******************************************************************************
 * Define global data.
 *******************************************************************************/

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
INVALIDATE_ICACHE_REGION_PLACEMENT
kal_int32 invalidate_icache(kal_uint32 addr, kal_uint32 len)
{
    /*
     * NoteXXX: Each cache line in MIPS ICache is 32B. Every invalidate operation
     *          must aligned in a 32B address.
     *
     */
    if (addr & CPU_CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if ((len & CPU_CACHE_LINE_SIZE_MASK) || 
             ((len > CPU_ICACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
		if(len ==0)
		{	
			return 0;
		}        
		core_invalidate_icache_region(addr, len / CPU_CACHE_LINE_SIZE);
#if defined(MIPS_IA_ENABLE_L2_CACHE)
		if(addr&L2CACHE_LINE_SIZE_MASK)
		{
			core_invalidate_l2cache_region(addr&(~L2CACHE_LINE_SIZE_MASK), 1);
			addr = addr+32;
			len = len - 32;
		}
		if(len ==0)
		{	
			MM_Sync();
			return 0;
		}
		core_invalidate_l2cache_region(addr, (len+0x20) / L2CACHE_LINE_SIZE);
		MM_Sync();
#endif /* MIPS_IA_ENABLE_L2_CACHE */
	}
    return 0;
}
#endif /* __DYNAMIC_SWITCH_CACHEABILITY__ */

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
INVALIDATE_DCACHE_REGION_PLACEMENT
kal_int32 invalidate_dcache(kal_uint32 addr, kal_uint32 len)
{ 
    /*
     * NoteXXX: Each L1 cache line in MIPS DCache is 32B. Every invalidate operation
     *          must aligned in a 32B address. 
     *          In HRT context (vpe_id & 0x1 != 0) maximum allowed invalidate size is
     *          L1 cache size.
     */
    kal_uint32 original_len, original_addr;
    original_len = len;
    original_addr = addr;
#if defined(__CACHE_DEBUG_EN__)
    CACHE_OP_CCA operationCCA;
    #if defined(MIPS_IA_ENABLE_L2_CACHE)
        #if defined(MIPS_IA_ENABLE_L2_CACHE_WT)
        operationCCA = L1WBL2WT;
        #else
        operationCCA = L1WBL2WB;
        #endif
    #else
    operationCCA = L1WBL2None;
    #endif
#endif
    CACHE_DBG_LOG_ENQUEUE(CACHE_INV_LOG, CACHE_INV_LOG_IDX, addr, len, operationCCA);

#if defined(CACHE_API_BANK2_ASSERTION)
    if ((addr & BANK_MSK) == CACHE_WB_BANK2_ADDR)
    {
        kal_uint32 retaddr = 0;
        GET_RETURN_ADDRESS(retaddr);
        CACHE_ASSERT(0, addr, retaddr, 0);
    }
#endif
    if (addr & CPU_CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if ((len & CPU_CACHE_LINE_SIZE_MASK) || 
             ((len > CPU_CACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
        if(len ==0)
        {	
            return 0;
        }        
#if defined(MIPS_IA_ENABLE_L2_CACHE)
#if defined(MIPS_IA_ENABLE_L2_CACHE_WT)
        if(addr&L2CACHE_LINE_SIZE_MASK)
        {
            core_invalidate_l2cache_region(addr&(~L2CACHE_LINE_SIZE_MASK), 1);
            addr = addr+32;
            len = len - 32;
        }
        if(len != 0)
        {	
            if(len<L2CACHE_LINE_SIZE_MASK)
            {
                core_invalidate_l2cache_region(addr, 1);
            }
            else
            {
                if(len&L2CACHE_LINE_SIZE_MASK)
                {
                    core_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
                    core_invalidate_l2cache_region((addr+len) &(~L2CACHE_LINE_SIZE_MASK), 1);
                }
                else{
                    core_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
                }
            }           
        } 
#else
        if(addr & L2CACHE_LINE_SIZE_MASK)
        {
            core_clean_and_invalidate_l2cache_region(addr&(~L2CACHE_LINE_SIZE_MASK), 1);
            addr = addr+32;
            len = len - 32;
        }
        if(len !=0 )
        {
            if(len < L2CACHE_LINE_SIZE)
            {
                core_clean_and_invalidate_l2cache_region(addr, 1);
            }
            else
            {
                if(len&L2CACHE_LINE_SIZE_MASK)
                {
                    core_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
                    core_clean_and_invalidate_l2cache_region((addr+len) &(~L2CACHE_LINE_SIZE_MASK), 1);
                }
                else{
                    core_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
                }
            }
        }
#endif
#endif /* MIPS_IA_ENABLE_L2_CACHE */
        core_invalidate_dcache_region(original_addr, original_len / CPU_CACHE_LINE_SIZE);
        MM_Sync();
    }

    return 0;
}
#endif /* __DYNAMIC_SWITCH_CACHEABILITY__ */

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__) && defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
INVALIDATE_DCACHE_REGION_PLACEMENT
kal_int32 invalidate_dcache_L2WB(kal_uint32 addr, kal_uint32 len)
{ 
    /*
     * NoteXXX: Each L1 cache line in MIPS DCache is 32B. Every invalidate operation
     *          must aligned in a 32B address. 
     *          In HRT context (vpe_id & 0x1 != 0) maximum allowed invalidate size is
     *          L1 cache size.
     */
    kal_uint32 original_len, original_addr;
    original_len = len;
    original_addr = addr;
#if defined(__CACHE_DEBUG_EN__)
    CACHE_OP_CCA operationCCA;
    #if defined(MIPS_IA_ENABLE_L2_CACHE)
        #if defined(MIPS_IA_ENABLE_L2_CACHE_WT)
        operationCCA = L1WBL2WT;
        #else
        operationCCA = L1WBL2WB;
        #endif
    #else
    operationCCA = L1WBL2None;
    #endif
#endif
    CACHE_DBG_LOG_ENQUEUE(CACHE_INV_LOG, CACHE_INV_LOG_IDX, addr, len, operationCCA);

#if defined(CACHE_API_BANK2_ASSERTION)
    if ((addr & BANK_MSK) == CACHE_WB_BANK2_ADDR)
    {
        kal_uint32 retaddr = 0;
        GET_RETURN_ADDRESS(retaddr);
        CACHE_ASSERT(0, addr, retaddr, 0);
    }
#endif
    if (addr & L2CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if ((len & L2CACHE_LINE_SIZE_MASK) || 
             ((len > CPU_CACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
        if(len ==0)
        {   
            return 0;
        }        
#if defined(MIPS_IA_ENABLE_L2_CACHE)
        core_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
#endif /* MIPS_IA_ENABLE_L2_CACHE */
        core_invalidate_dcache_region(original_addr, original_len / CPU_CACHE_LINE_SIZE);
        MM_Sync();
    }

    return 0;
}
#endif /* __DYNAMIC_SWITCH_CACHEABILITY__ */


#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
CLEAN_DCACHE_REGION_PLACEMENT
kal_int32 clean_dcache(kal_uint32 addr, kal_uint32 len)
{
    /*
     * NoteXXX: Each cache line in MIPS DCache is 32B. Every invalidate operation
     *          must aligned in a 32B address.
     *
     */
#if defined(__CACHE_DEBUG_EN__)
    CACHE_OP_CCA operationCCA;
    #if defined(MIPS_IA_ENABLE_L2_CACHE)
        #if defined(MIPS_IA_ENABLE_L2_CACHE_WT)
            operationCCA = L1WBL2WT;
        #else
            operationCCA = L1WBL2WB;
        #endif
    #else
            operationCCA = L1WBL2None;
    #endif
#endif

    CACHE_DBG_LOG_ENQUEUE(CACHE_CLN_LOG, CACHE_CLN_LOG_IDX, addr, len, operationCCA);

#if defined(CACHE_API_BANK2_ASSERTION)
    if ((addr & BANK_MSK) == CACHE_WB_BANK2_ADDR)
    {
        kal_uint32 retaddr = 0;
        GET_RETURN_ADDRESS(retaddr);
        CACHE_ASSERT(0, addr, retaddr, 0);
    }
#endif

    if (addr & CPU_CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if ((len & CPU_CACHE_LINE_SIZE_MASK) || 
             ((len > CPU_CACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
		if(len ==0)
		{	
			return 0;
		} 		
		core_clean_dcache_region(addr, len / CPU_CACHE_LINE_SIZE);
#if defined(MIPS_IA_ENABLE_L2_CACHE)
#if !defined(MIPS_IA_ENABLE_L2_CACHE_WT) //L2 WB
		if(addr&L2CACHE_LINE_SIZE_MASK)
		{
			core_clean_l2cache_region(addr&(~L2CACHE_LINE_SIZE_MASK), 1);
			addr = addr+32;
			len = len -32;
		}
		if(len ==0)
		{	
			MM_Sync();
			return 0;
		}
		core_clean_l2cache_region(addr, (len+0x20) / L2CACHE_LINE_SIZE);
#endif
#endif /* MIPS_IA_ENABLE_L2_CACHE */
		MM_Sync();
    }
    return 0;
}
#endif  /* __DYNAMIC_SWITCH_CACHEABILITY__ */

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
CLEAN_DCACHE_L2WB_REGION_PLACEMENT
kal_int32 clean_dcache_L2WB(kal_uint32 addr, kal_uint32 len)
{
    /*
     * NoteXXX: Each cache line in MIPS L2Cache is 64B. Every clean operation
     *          must aligned in a 64B address.
     *
     */
#if defined(__CACHE_DEBUG_EN__)
    CACHE_OP_CCA operationCCA;
    #if defined(MIPS_IA_ENABLE_L2_CACHE)
        operationCCA = L1WBL2WB;
    #else
        operationCCA = L1WBL2None;
    #endif
#endif

    CACHE_DBG_LOG_ENQUEUE(CACHE_CLN_LOG, CACHE_CLN_LOG_IDX, addr, len, operationCCA);

#if defined(CACHE_API_BANK2_ASSERTION)
    if ((addr & BANK_MSK) == CACHE_WB_BANK2_ADDR)
    {
        kal_uint32 retaddr = 0;
        GET_RETURN_ADDRESS(retaddr);
        CACHE_ASSERT(0, addr, retaddr, 0);
    }
#endif

    if (addr & L2CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L2_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if ((len & L2CACHE_LINE_SIZE_MASK) || 
             ((len > CPU_CACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L2_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
		if(len ==0)
		{	
			return 0;
		} 		
		core_clean_dcache_region(addr, len / CPU_CACHE_LINE_SIZE);
#if defined(MIPS_IA_ENABLE_L2_CACHE)
        /* L2 WB */
		core_clean_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
#endif /* MIPS_IA_ENABLE_L2_CACHE */
		MM_Sync();
    }
    return 0;
}
#endif  /* __DYNAMIC_SWITCH_CACHEABILITY__ */


#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
CLEAN_AND_INVALIDATE_DCACHE_REGION_PLACEMENT
kal_int32 clean_and_invalidate_dcache(kal_uint32 addr, kal_uint32 len)
{
    /*
     * NoteXXX: Each cache line in MIPS DCache is 32B. Every invalidate operation
     *          must aligned in a 32B address.
     *
     */
#if defined(__CACHE_DEBUG_EN__)
    CACHE_OP_CCA operationCCA;
    #if defined(MIPS_IA_ENABLE_L2_CACHE)
        #if defined(MIPS_IA_ENABLE_L2_CACHE_WT)
            operationCCA = L1WBL2WT;
        #else
            operationCCA = L1WBL2WB;
        #endif
    #else
            operationCCA = L1WBL2None;
    #endif
#endif
    CACHE_DBG_LOG_ENQUEUE(CACHE_CLN_INV_LOG, CACHE_CLN_INV_LOG_IDX, addr, len, operationCCA);

#if defined(CACHE_API_BANK2_ASSERTION)
    if ((addr & BANK_MSK) == CACHE_WB_BANK2_ADDR)
    {
        kal_uint32 retaddr = 0;
        GET_RETURN_ADDRESS(retaddr);
        CACHE_ASSERT(0, addr, retaddr, 0);
    }
#endif

    if (addr & CPU_CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if ((len & CPU_CACHE_LINE_SIZE_MASK) || 
             ((len > CPU_CACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
        if(len ==0)
        {   
            return 0;
        } 

		core_clean_and_invalidate_dcache_region(addr, len / CPU_CACHE_LINE_SIZE);
#if defined(MIPS_IA_ENABLE_L2_CACHE)
#if defined(MIPS_IA_ENABLE_L2_CACHE_WT)

        if(addr&L2CACHE_LINE_SIZE_MASK)
        {
            core_clean_and_invalidate_l2cache_region(addr&(~L2CACHE_LINE_SIZE_MASK), 1);
            addr = addr+32;
            len = len - 32;
        }
        if(len ==0)
        {	
            MM_Sync();
            return 0;
        }
        if(len<L2CACHE_LINE_SIZE)
        {
            core_clean_and_invalidate_l2cache_region(addr, 1);
        }
        else
        {
            if(len&L2CACHE_LINE_SIZE_MASK)
            {
                core_clean_and_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
                core_clean_and_invalidate_l2cache_region((addr+len) &(~L2CACHE_LINE_SIZE_MASK), 1);
            }
            else{
                core_clean_and_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
            }
        }
        MM_Sync();
#else //L2 WB 
        if(addr&L2CACHE_LINE_SIZE_MASK)
        {
            core_clean_and_invalidate_l2cache_region(addr&(~L2CACHE_LINE_SIZE_MASK), 1);
            addr = addr+32;
            len = len - 32;
        }
        if(len ==0)
        {
            MM_Sync();
            return 0;
        }
        if(len<L2CACHE_LINE_SIZE)
        {
            core_clean_and_invalidate_l2cache_region(addr, 1);
        }
        else
        {
            if(len&L2CACHE_LINE_SIZE_MASK)
            {
                core_clean_and_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
                core_clean_and_invalidate_l2cache_region((addr+len) &(~L2CACHE_LINE_SIZE_MASK), 1);
            }
            else{
                core_clean_and_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
            }
        }
        MM_Sync();

#endif
#endif /* MIPS_IA_ENABLE_L2_CACHE */
    }
    return 0;
}
#endif  /* __DYNAMIC_SWITCH_CACHEABILITY__ */

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
CLEAN_AND_INVALIDATE_DCACHE_L2WB_REGION_PLACEMENT
kal_int32 clean_and_invalidate_dcache_L2WB(kal_uint32 addr, kal_uint32 len)
{
    /*
     * NoteXXX: Each cache line in MIPS DCache is 32B. Every invalidate operation
     *          must aligned in a 32B address.
     *
     */
#if defined(__CACHE_DEBUG_EN__)
    CACHE_OP_CCA operationCCA;
    #if defined(MIPS_IA_ENABLE_L2_CACHE)
        operationCCA = L1WBL2WB;
    #else
    operationCCA = L1WBL2None;
    #endif
#endif
    CACHE_DBG_LOG_ENQUEUE(CACHE_CLN_INV_LOG, CACHE_CLN_INV_LOG_IDX, addr, len, operationCCA);

#if defined(CACHE_API_BANK2_ASSERTION)
    if ((addr & BANK_MSK) == CACHE_WB_BANK2_ADDR)
    {
        kal_uint32 retaddr = 0;
        GET_RETURN_ADDRESS(retaddr);
        CACHE_ASSERT(0, addr, retaddr, 0);
    }
#endif

    if (addr & L2CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L2_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if ((len & L2CACHE_LINE_SIZE_MASK) || 
             ((len > CPU_CACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L2_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
        if(len ==0)
        {   
            return 0;
        } 

		core_clean_and_invalidate_dcache_region(addr, len / CPU_CACHE_LINE_SIZE);
#if defined(MIPS_IA_ENABLE_L2_CACHE)
        /* L2 WB */
        core_clean_and_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
#endif /* MIPS_IA_ENABLE_L2_CACHE */
        MM_Sync();
    }
    return 0;
}
#endif  /* __DYNAMIC_SWITCH_CACHEABILITY__ */


#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
INVALIDATE_ICACHE_NONBLOCKING_REGION_PLACEMENT
kal_int32 invalidate_icache_nonblocking(kal_uint32 addr, kal_uint32 len)
{
    /*
     * NoteXXX: Each cache line in MIPS ICache is 32B. Every invalidate operation
     *          must aligned in a 32B address.
     *
     */
    if (addr & CPU_CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if ((len & CPU_CACHE_LINE_SIZE_MASK) || 
             ((len > CPU_ICACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
		if(len ==0)
		{	
			return 0;
		}        
		core_invalidate_icache_region(addr, len / CPU_CACHE_LINE_SIZE);
#if defined(MIPS_IA_ENABLE_L2_CACHE)
		if(addr&L2CACHE_LINE_SIZE_MASK)
		{
			core_invalidate_l2cache_region(addr&(~L2CACHE_LINE_SIZE_MASK), 1);
			addr = addr+32;
			len = len - 32;
		}
		if(len ==0)
		{	
			return 0;
		}
		core_invalidate_l2cache_region(addr, (len+0x20) / L2CACHE_LINE_SIZE);
#endif /* MIPS_IA_ENABLE_L2_CACHE */
	}
    return 0;
}
#endif /* __DYNAMIC_SWITCH_CACHEABILITY__ */

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
INVALIDATE_DCACHE_NONBLOCKING_REGION_PLACEMENT
kal_int32 invalidate_dcache_nonblocking(kal_uint32 addr, kal_uint32 len)
{ 
    /*
     * NoteXXX: Each L1 cache line in MIPS DCache is 32B. Every invalidate operation
     *          must aligned in a 32B address. 
     *          In HRT context (vpe_id & 0x1 != 0) maximum allowed invalidate size is
     *          L1 cache size.
     */
    kal_uint32 original_len, original_addr;
    original_len = len;
    original_addr = addr;
#if defined(__CACHE_DEBUG_EN__)
    CACHE_OP_CCA operationCCA;
    #if defined(MIPS_IA_ENABLE_L2_CACHE)
        #if defined(MIPS_IA_ENABLE_L2_CACHE_WT)
        operationCCA = L1WBL2WTNoMMSYNC;
        #else
        operationCCA = L1WBL2WBNoMMSYNC;
        #endif
    #else
        operationCCA = L1WBL2NoneNoMMSYNC;
    #endif
#endif
    CACHE_DBG_LOG_ENQUEUE(CACHE_INV_LOG, CACHE_INV_LOG_IDX, addr, len, operationCCA);

#if defined(CACHE_API_BANK2_ASSERTION)
    if ((addr & BANK_MSK) == CACHE_WB_BANK2_ADDR)
    {
        kal_uint32 retaddr = 0;
        GET_RETURN_ADDRESS(retaddr);
        CACHE_ASSERT(0, addr, retaddr, 0);
    }
#endif

    if (addr & CPU_CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if ((len & CPU_CACHE_LINE_SIZE_MASK) || 
             ((len > CPU_CACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
        if(len ==0)
        {	
            return 0;
        }        
#if defined(MIPS_IA_ENABLE_L2_CACHE)
#if defined(MIPS_IA_ENABLE_L2_CACHE_WT)
        if(addr&L2CACHE_LINE_SIZE_MASK)
        {
            core_invalidate_l2cache_region(addr&(~L2CACHE_LINE_SIZE_MASK), 1);
            addr = addr+32;
            len = len - 32;
        }
        if(len != 0)
        {	
            if(len<L2CACHE_LINE_SIZE_MASK)
            {
                core_invalidate_l2cache_region(addr, 1);
            }
            else
            {
                if(len&L2CACHE_LINE_SIZE_MASK)
                {
                    core_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
                    core_invalidate_l2cache_region((addr+len) &(~L2CACHE_LINE_SIZE_MASK), 1);
                }
                else{
                    core_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
                }
            }           
        } 
#else
        if(addr & L2CACHE_LINE_SIZE_MASK)
        {
            core_clean_and_invalidate_l2cache_region(addr&(~L2CACHE_LINE_SIZE_MASK), 1);
            addr = addr+32;
            len = len - 32;
        }
        if(len !=0 )
        {
            if(len < L2CACHE_LINE_SIZE)
            {
                core_clean_and_invalidate_l2cache_region(addr, 1);
            }
            else
            {
                if(len&L2CACHE_LINE_SIZE_MASK)
                {
                    core_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
                    core_clean_and_invalidate_l2cache_region((addr+len) &(~L2CACHE_LINE_SIZE_MASK), 1);
                }
                else{
                    core_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
                }
            }
        }
#endif
#endif /* MIPS_IA_ENABLE_L2_CACHE */
        core_invalidate_dcache_region(original_addr, original_len / CPU_CACHE_LINE_SIZE);
    }

    return 0;
}
#endif /* __DYNAMIC_SWITCH_CACHEABILITY__ */

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
CLEAN_DCACHE_NONBLOCKING_REGION_PLACEMENT
kal_int32 clean_dcache_nonblocking(kal_uint32 addr, kal_uint32 len)
{
    /*
     * NoteXXX: Each cache line in MIPS DCache is 32B. Every invalidate operation
     *          must aligned in a 32B address.
     *
     */
#if defined(__CACHE_DEBUG_EN__)
    CACHE_OP_CCA operationCCA;
    #if defined(MIPS_IA_ENABLE_L2_CACHE)
        #if defined(MIPS_IA_ENABLE_L2_CACHE_WT)
        operationCCA = L1WBL2WTNoMMSYNC;
        #else
        operationCCA = L1WBL2WBNoMMSYNC;
        #endif
    #else
    operationCCA = L1WBL2NoneNoMMSYNC;
    #endif
#endif
    CACHE_DBG_LOG_ENQUEUE(CACHE_CLN_LOG, CACHE_CLN_LOG_IDX, addr, len, operationCCA);

#if defined(CACHE_API_BANK2_ASSERTION)
    if ((addr & BANK_MSK) == CACHE_WB_BANK2_ADDR)
    {
        kal_uint32 retaddr = 0;
        GET_RETURN_ADDRESS(retaddr);
        CACHE_ASSERT(0, addr, retaddr, 0);
    }
#endif

    if (addr & CPU_CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if ((len & CPU_CACHE_LINE_SIZE_MASK) || 
             ((len > CPU_CACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
		if(len ==0)
		{	
			return 0;
		} 		
		core_clean_dcache_region(addr, len / CPU_CACHE_LINE_SIZE);
#if defined(MIPS_IA_ENABLE_L2_CACHE)
#if !defined(MIPS_IA_ENABLE_L2_CACHE_WT) //L2 WB
		if(addr&L2CACHE_LINE_SIZE_MASK)
		{
			core_clean_l2cache_region(addr&(~L2CACHE_LINE_SIZE_MASK), 1);
			addr = addr+32;
			len = len -32;
		}
		if(len ==0)
		{	
			return 0;
		}
		core_clean_l2cache_region(addr, (len+0x20) / L2CACHE_LINE_SIZE);
#endif
#endif /* MIPS_IA_ENABLE_L2_CACHE */
    }
    return 0;
}
#endif  /* __DYNAMIC_SWITCH_CACHEABILITY__ */

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
CLEAN_AND_INVALIDATE_DCACHE_NONBLOCKING_REGION_PLACEMENT
kal_int32 clean_and_invalidate_dcache_nonblocking(kal_uint32 addr, kal_uint32 len)
{
    /*
     * NoteXXX: Each cache line in MIPS DCache is 32B. Every invalidate operation
     *          must aligned in a 32B address.
     *
     */
#if defined(__CACHE_DEBUG_EN__)
    CACHE_OP_CCA operationCCA;
    #if defined(MIPS_IA_ENABLE_L2_CACHE)
        #if defined(MIPS_IA_ENABLE_L2_CACHE_WT)
        operationCCA = L1WBL2WTNoMMSYNC;
        #else
        operationCCA = L1WBL2WBNoMMSYNC;
        #endif
    #else
    operationCCA = L1WBL2NoneNoMMSYNC;
    #endif
#endif
    CACHE_DBG_LOG_ENQUEUE(CACHE_CLN_INV_LOG, CACHE_CLN_INV_LOG_IDX, addr, len, operationCCA);

#if defined(CACHE_API_BANK2_ASSERTION)
    if ((addr & BANK_MSK) == CACHE_WB_BANK2_ADDR)
    {
        kal_uint32 retaddr = 0;
        GET_RETURN_ADDRESS(retaddr);
        CACHE_ASSERT(0, addr, retaddr, 0);
    }
#endif

    if (addr & CPU_CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if ((len & CPU_CACHE_LINE_SIZE_MASK) || 
             ((len > CPU_CACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
        if(len ==0)
        {   
            return 0;
        } 

		core_clean_and_invalidate_dcache_region(addr, len / CPU_CACHE_LINE_SIZE);
#if defined(MIPS_IA_ENABLE_L2_CACHE)
#if defined(MIPS_IA_ENABLE_L2_CACHE_WT)

        if(addr&L2CACHE_LINE_SIZE_MASK)
        {
            core_clean_and_invalidate_l2cache_region(addr&(~L2CACHE_LINE_SIZE_MASK), 1);
            addr = addr+32;
            len = len - 32;
        }
        if(len ==0)
        {	
            return 0;
        }
        if(len<L2CACHE_LINE_SIZE)
        {
            core_clean_and_invalidate_l2cache_region(addr, 1);
        }
        else
        {
            if(len&L2CACHE_LINE_SIZE_MASK)
            {
                core_clean_and_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
                core_clean_and_invalidate_l2cache_region((addr+len) &(~L2CACHE_LINE_SIZE_MASK), 1);
            }
            else{
                core_clean_and_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
            }
        }
#else //L2 WB 
        if(addr&L2CACHE_LINE_SIZE_MASK)
        {
            core_clean_and_invalidate_l2cache_region(addr&(~L2CACHE_LINE_SIZE_MASK), 1);
            addr = addr+32;
            len = len - 32;
        }
        if(len ==0)
        {
            return 0;
        }
        if(len<L2CACHE_LINE_SIZE)
        {
            core_clean_and_invalidate_l2cache_region(addr, 1);
        }
        else
        {
            if(len&L2CACHE_LINE_SIZE_MASK)
            {
                core_clean_and_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
                core_clean_and_invalidate_l2cache_region((addr+len) &(~L2CACHE_LINE_SIZE_MASK), 1);
            }
            else{
                core_clean_and_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
            }
        }
#endif
#endif /* MIPS_IA_ENABLE_L2_CACHE */
    }
    return 0;
}
#endif  /* __DYNAMIC_SWITCH_CACHEABILITY__ */

LOCK_L2CACHE_REGION_PLACEMENT
kal_int32 lock_l2cache(kal_uint32 addr, kal_uint32 len)
{
#if 0
#if defined(__CACHE_DEBUG_EN__)
/* under construction !*/
#if defined(MIPS_IA_ENABLE_L2_CACHE_WT)
/* under construction !*/
#else
/* under construction !*/
#endif
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    if (addr & L2CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L2_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if (len & L2CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L2_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
        if(len ==0)
        {   
            return 0;
        } 
        core_fetch_and_lock_l2cache(addr, len/ L2CACHE_LINE_SIZE);
        MM_Sync();
    }
    return 0;
}

INVALIDATE_L2CACHE_REGION_PLACEMENT
kal_int32 invalidate_l2cache(kal_uint32 addr, kal_uint32 len)
{ 
    /*
     * NoteXXX: Each L2 cache line in MIPS L2Cache is 64B. Every invalidate operation
     *          must aligned in a 64B address. 
     */
#if defined(MIPS_IA_ENABLE_L2_CACHE)
#if defined(__CACHE_DEBUG_EN__)
    CACHE_OP_CCA operationCCA;
#if defined(MIPS_IA_ENABLE_L2_CACHE_WT)
    operationCCA = L1NoneL2WT;
#else
    operationCCA = L1NoneL2WB;
#endif
#endif
    CACHE_DBG_LOG_ENQUEUE(CACHE_INV_LOG, CACHE_INV_LOG_IDX, addr, len, operationCCA);

#if defined(CACHE_API_BANK2_ASSERTION)
    if ((addr & BANK_MSK) == CACHE_WB_BANK2_ADDR)
    {
        kal_uint32 retaddr = 0;
        GET_RETURN_ADDRESS(retaddr);
        CACHE_ASSERT(0, addr, retaddr, 0);
    }
#endif

    if (addr & L2CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L2_CACHE_LINE, addr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, addr);
    }
    else if (len & L2CACHE_LINE_SIZE_MASK)
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L2_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else
    {
        if(len ==0)
        {   
            return 0;
        } 
        core_invalidate_l2cache_region(addr, len / L2CACHE_LINE_SIZE);
        MM_Sync();
    }
#endif /* MIPS_IA_ENABLE_L2_CACHE */

    return 0;
}



/*************************************************************************
* FUNCTION
*  is_predef_dyna_c_region
*
* DESCRIPTION
*  This is used to determine whether the input region is a predefined dynamic switchable buffer.
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  None
*
* RETURNS
*  0
*
*************************************************************************/

#if !defined(__FUE__) && !defined(__UBL__)
#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
IS_PREDEF_DYNA_C_REGION_PLACEMENT
kal_uint32 is_predef_dyna_c_region(kal_uint32 vaddr, kal_uint32 len)
{
    EXTSRAM_REGION_INFO_T *regionp;
    kal_uint32 buf_start, buf_end;

    custom_query_dynamic_cached_extsram_default_c_region(&regionp);
    while (regionp->addr != 0 || regionp->len != 0)
    {
        if (regionp->len == 0)
        {
            regionp++;
            continue;
        }
        buf_start = regionp->addr;
        buf_end = regionp->addr + regionp->len;
        if ((vaddr >= buf_start) &&
            (vaddr + len <= buf_end))
        {
            return 1;
        }

        if ((vaddr >= MAP2CREGPA(buf_start)) &&
            (vaddr + len <= MAP2CREGPA(buf_end)))
        {
            return 1;
        }

        regionp++;
    }

    custom_query_dynamic_cached_extsram_default_nc_region(&regionp);
    while (regionp->addr != 0 || regionp->len != 0)
    {
        if (regionp->len == 0)
        {
            regionp++;
            continue;
        }
        buf_start = regionp->addr;
        buf_end = regionp->addr + regionp->len;
        if ((vaddr >= buf_start) &&
            (vaddr + len <= buf_end))
        {
            return 1;
        }

        if ((vaddr >= MAP2CREGVA(buf_start)) &&
            (vaddr + len <= MAP2CREGVA(buf_end)))
        {
            return 1;
        }
        regionp++;
    }
    return 0;
}
#endif  /* __DYNAMIC_SWITCH_CACHEABILITY__ */
#endif /* !__FUE__ && !__UBL__ */

/*************************************************************************
* FUNCTION
*  dynamic_switch_cacheable_region
*
* DESCRIPTION
*  This is used to dynamically change a region's cacheable/noncacheable attribute.
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  vaddr
*  len
*  cacheable
*
* RETURNS
*  0 for successfully switch.
*
*************************************************************************/

#if !defined(__FUE__) && !defined(__UBL__)
DYNAMIC_SWITCH_CACHEABLE_REGION_PLACEMENT
#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
kal_uint32 dynamic_switch_cacheable_region(void *vaddr, kal_uint32 len, kal_uint32 cacheable)
{
    kal_uint32 op_addr;
#if defined(__ESL_COSIM_TCMONLY__)
    kal_uint32 backup_vaddr = (kal_uint32)(*(kal_uint32*)vaddr);
#endif /* __ESL_COSIM_TCMONLY__ */

    op_addr = (kal_uint32)(*(kal_uint32*)vaddr);

#if defined(CACHE_API_BANK2_ASSERTION)
    if ((op_addr & BANK_MSK) == CACHE_WB_BANK2_ADDR)
    {
        kal_uint32 retaddr = 0;
        GET_RETURN_ADDRESS(retaddr);
        CACHE_ASSERT(0, op_addr, retaddr, 0);
    }
#endif

#if defined(__ESL_COSIM_TCMONLY__)
    if (!IS_CACHE_LINE_SIZE_ALIGNED(*(kal_uint32*)vaddr))
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, *(kal_uint32*)vaddr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, *(kal_uint32*)vaddr);
    }
    else if ((!IS_CACHE_LINE_SIZE_ALIGNED(len)) || 
             ((len > CPU_CACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else if (!IS_CACHE_LINE_SIZE_ALIGNED(len))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    
    if (INT_QueryIsCachedRAM(op_addr, len))
    {
    }
    
#else
    if (!is_predef_dyna_c_region(op_addr, len))
    {
        cache_exception_reason_record(CACHE_ADDRESS_LEN_NOT_IN_DYNAMIC_C_REGION, *(kal_uint32*)vaddr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_NOT_IN_PREDEF_REGION_FAILED, *(kal_uint32*)vaddr);
    }
    else if (!IS_CACHE_LINE_SIZE_ALIGNED(*(kal_uint32*)vaddr))
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, *(kal_uint32*)vaddr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, *(kal_uint32*)vaddr);
    }
    else if ((!IS_CACHE_LINE_SIZE_ALIGNED(len)) || 
             (((len > CPU_CACHE_SIZE)) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }

    if ((INT_QueryIsCachedRAM(op_addr, len)) == cacheable)
    {
        return 0;
    }
#endif

    if (PAGE_CACHEABLE == cacheable)
    {
        (*(kal_uint32*)vaddr = MAP2CREGVA(*(kal_uint32*)vaddr));
        (op_addr = MAP2CREGVA(op_addr));
        invalidate_dcache(op_addr, len);
    }
    else if (PAGE_NO_CACHE == cacheable)
    {
        clean_dcache(op_addr, len);
        (*(kal_uint32*)vaddr = MAP2CREGPA(*(kal_uint32*)vaddr));
    }
    else
    {
        cache_exception_reason_record(CACHE_INVALID_PARAMETER, *(kal_uint32*)vaddr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_NOT_IN_PREDEF_REGION_FAILED, 0);
    }

#if defined(__ESL_COSIM_TCMONLY__)
    (*(kal_uint32*)vaddr) = backup_vaddr;
#endif /* __ESL_COSIM_TCMONLY__ */

    return 0;
}

#endif  /* __DYNAMIC_SWITCH_CACHEABILITY__ */

#endif /* !__FUE__ && !__UBL__ */
/*************************************************************************
* FUNCTION
*  dynamic_switch_cacheable_region_nonblocking
*
* DESCRIPTION
*  This is used to dynamically change a region's cacheable/noncacheable attribute.
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  vaddr
*  len
*  cacheable
*
* RETURNS
*  0 for successfully switch.
*
*************************************************************************/

#if !defined(__FUE__) && !defined(__UBL__)
#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
kal_uint32 dynamic_switch_cacheable_region_nonblocking(void *vaddr, kal_uint32 len, kal_uint32 cacheable)
{
    kal_uint32 op_addr;
#if defined(__ESL_COSIM_TCMONLY__)
    kal_uint32 backup_vaddr = (kal_uint32)(*(kal_uint32*)vaddr);
#endif /* __ESL_COSIM_TCMONLY__ */

    op_addr = (kal_uint32)(*(kal_uint32*)vaddr);

#if defined(CACHE_API_BANK2_ASSERTION)
    if ((op_addr & BANK_MSK) == CACHE_WB_BANK2_ADDR)
    {
        kal_uint32 retaddr = 0;
        GET_RETURN_ADDRESS(retaddr);
        CACHE_ASSERT(0, op_addr, retaddr, 0);
    }
#endif

#if defined(__ESL_COSIM_TCMONLY__)
    if (!IS_CACHE_LINE_SIZE_ALIGNED(*(kal_uint32*)vaddr))
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, *(kal_uint32*)vaddr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, *(kal_uint32*)vaddr);
    }
    else if ((!IS_CACHE_LINE_SIZE_ALIGNED(len)) || 
             ((len > CPU_CACHE_SIZE) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    else if (!IS_CACHE_LINE_SIZE_ALIGNED(len))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }
    
    if (INT_QueryIsCachedRAM(op_addr, len))
    {
    }
    
#else
    if (!is_predef_dyna_c_region(op_addr, len))
    {
        cache_exception_reason_record(CACHE_ADDRESS_LEN_NOT_IN_DYNAMIC_C_REGION, *(kal_uint32*)vaddr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_NOT_IN_PREDEF_REGION_FAILED, *(kal_uint32*)vaddr);
    }
    else if (!IS_CACHE_LINE_SIZE_ALIGNED(*(kal_uint32*)vaddr))
    {
        cache_exception_reason_record(CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE, *(kal_uint32*)vaddr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED, *(kal_uint32*)vaddr);
    }
    else if ((!IS_CACHE_LINE_SIZE_ALIGNED(len)) || 
             (((len > CPU_CACHE_SIZE)) && ((kal_get_current_vpe_id() & 0x1) != 0) && (INT_QueryExceptionStatus() == KAL_FALSE)))
    {
        cache_exception_reason_record(CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE, len);
        kal_fatal_error_handler(KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED, len);
    }

    if ((INT_QueryIsCachedRAM(op_addr, len)) == cacheable)
    {
        return 0;
    }
#endif

    if (PAGE_CACHEABLE == cacheable)
    {
        (*(kal_uint32*)vaddr = MAP2CREGVA(*(kal_uint32*)vaddr));
        (op_addr = MAP2CREGVA(op_addr));
        invalidate_dcache_nonblocking(op_addr, len);
    }
    else if (PAGE_NO_CACHE == cacheable)
    {
        clean_dcache_nonblocking(op_addr, len);
        (*(kal_uint32*)vaddr = MAP2CREGPA(*(kal_uint32*)vaddr));
    }
    else
    {
        cache_exception_reason_record(CACHE_INVALID_PARAMETER, *(kal_uint32*)vaddr);
        kal_fatal_error_handler(KAL_ERROR_CACHE_NOT_IN_PREDEF_REGION_FAILED, cacheable);
    }

#if defined(__ESL_COSIM_TCMONLY__)
    (*(kal_uint32*)vaddr) = backup_vaddr;
#endif /* __ESL_COSIM_TCMONLY__ */

    return 0;
}

#endif  /* __DYNAMIC_SWITCH_CACHEABILITY__ */

#endif /* !__FUE__ && !__UBL__ */

#endif /* __MTK_TARGET__ */

/*************************************************************************
* FUNCTION
*  query_opposite_switchable_cacheaddr_ram
*
* DESCRIPTION
*  This function used to query the opposite cache-switchable address
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  addr - the address to be queried
*
* RETURNS
*
*************************************************************************/
#if !defined(__FUE__) && !defined(__UBL__)
kal_uint32 query_opposite_switchable_cacheaddr_ram(kal_uint32 addr)
{
#if defined(__DYNAMIC_SWITCH_CACHEABILITY__) && defined(__MTK_TARGET__)
    EXTSRAM_REGION_INFO_T *regionp;
    kal_uint32 buf_start;
    kal_uint32 buf_addr;

    custom_query_dynamic_cached_extsram_default_nc_region(&regionp);
    while (regionp->addr != 0 || regionp->len != 0)
    {
        if (regionp->len == 0)
        {
            regionp++;
            continue;
        }
        buf_start = regionp->addr;
        buf_addr = regionp->addr + regionp->len;
        if ((addr >= buf_start) &&
            (addr <= buf_addr))
        {
            return MAP2CREGVA(addr);
        }
        if ((addr >= MAP2CREGVA(buf_start)) &&
            (addr <= MAP2CREGVA(buf_addr)))
        {
            return MAP2CREGPA(addr);
        }

        regionp++;
    }

    custom_query_dynamic_cached_extsram_default_c_region(&regionp);
    while (regionp->addr != 0 || regionp->len != 0)
    {
        if (regionp->len == 0)
        {
            regionp++;
            continue;
        }
        buf_start = regionp->addr;
        buf_addr = regionp->addr + regionp->len;
        if ((addr >= buf_start) &&
            (addr <= buf_addr))
        {
            return MAP2CREGPA(addr);
        }
        if ((addr >= MAP2CREGPA(buf_start)) &&
            (addr <= MAP2CREGPA(buf_addr)))
        {
            return MAP2CREGVA(addr);
        }

        regionp++;
    }

    cache_exception_reason_record(CACHE_ADDRESS_LEN_NOT_IN_DYNAMIC_C_REGION, addr);
    /* assert if the input address is not cache-switchable */
    kal_fatal_error_handler(KAL_ERROR_CACHE_NOT_IN_PREDEF_REGION_FAILED, addr);
#endif  /* __DYNAMIC_SWITCH_CACHEABILITY__ && __MTK_TARGET__ */

    return addr;
}

#endif /* !__FUE__ && !__UBL__ */

#if !defined(__FUE__) && !defined(__UBL__)
kal_uint32 remap_to_physRam(void * address)
#if defined(__MTK_TARGET__)
{
    kal_uint32 retval = 0;
    retval = MAP2CREGPA(address);

    return retval;
}
#else /* __MTK_TARGET__ */
{
    return 0;
}
#endif /* __MTK_TARGET__ */

#endif /* !__FUE__ && !__UBL__ */

/*************************************************************************
* FUNCTION
*  virt_to_phys
*
* DESCRIPTION
*  This function used to query the physical address of a virtual address
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  addr - the address to be queried
*
* RETURNS
*
*************************************************************************/

#if !defined(__FUE__) && !defined(__UBL__)

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
kal_uint32 virt_to_phys(void * address)
#if defined(__MTK_TARGET__)
{
    kal_uint32 retval = 0;
    retval = MAP2CREGPA(address);

    return retval;
}
#else /* __MTK_TARGET__ */
{
    return 0;
}
#endif /* __MTK_TARGET__ */

#endif /* __DYNAMIC_SWITCH_CACHEABILITY__ */

#endif /* !__FUE__ && !__UBL__ */

/*************************************************************************
* FUNCTION
*  phys_to_virt
*
* DESCRIPTION
*  This function used to query the physical address of a virtual address
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  addr - the address to be queried
*
* RETURNS
*
*************************************************************************/

#if !defined(__FUE__) && !defined(__UBL__)

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
kal_uint32 phys_to_virt(void * address)
#if defined(__MTK_TARGET__)
{
    kal_uint32 retval = 0;
    retval = MAP2CREGVA(address);

    return retval;
}
#else /* __MTK_TARGET__ */
{
    return 0;
}
#endif /* __MTK_TARGET__ */

#endif /* __DYNAMIC_SWITCH_CACHEABILITY__ */

#endif /* !__FUE__ && !__UBL__ */

#if !defined(__FUE__) && !defined(__UBL__)
#if defined(__MTK_TARGET__) && defined(__DYNAMIC_SWITCH_CACHEABILITY__)
void *map_back_memregion(void *ptr, void *region)
{
    return (void*)MAP2CREGNEWA(ptr, region);
}

#endif /* __MTK_TARGET__ && __DYNAMIC_SWITCH_CACHEABILITY__ */
#endif /* !__FUE__ && !__UBL__ */

/*************************************************************************
* FUNCTION
*  query_is_dram
*
* DESCRIPTION
*  This function used to query if the memory is DRAM or not. (not on CPU site, but AXIBUS site)
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  addr - the address to be queried
*  len - the length of the memory.
*
* RETURNS
*   true if the address is bank 0 or bank CREG_OFFSET.
*************************************************************************/
kal_int32 query_is_dram(kal_uint32 addr, kal_uint32 len)
{   
    return(((addr&0xF0000000) == 0x00000000) || ((addr&0xF0000000)==CREG_OFFSET)); 
}

/*************************************************************************
* FUNCTION
*  query_is_noncached_ram
*
* DESCRIPTION
*  This function used to query if the memory is non-cacheable.
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  addr - the address to be queried
*  len - the length of the memory.
*
* RETURNS
*
*************************************************************************/
kal_int32 query_is_noncached_ram(kal_uint32 addr, kal_uint32 len)
#if defined(__MTK_TARGET__)
{
    return (((kal_uint32)(addr) & 0xF0000000) == 0);
}
#else 
{
    return 1;
}
#endif /* !__MTK_TARGET__ || Others */

/*************************************************************************
* FUNCTION
*  query_is_cached_ram
*
* DESCRIPTION
*  This function used to query if the memory is cacheable.
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  addr - the address to be queried
*  len - the length of the memory.
*
* RETURNS
*
*************************************************************************/
kal_int32 query_is_cached_ram(kal_uint32 addr, kal_uint32 len)
#if defined(__MTK_TARGET__) 
{
    if (((addr & 0xF0000000) == 0x40000000) &&
        ( (len == 0) || ((len > 0) && (((addr+len-1) & 0xF0000000) == 0x40000000))))
    {
        kal_uint32 shm_c_start_addr;
        kal_uint32 shm_c_end_addr;
        kal_uint32 shm_c_size;
        system_query_cacheable_shm_info(&shm_c_start_addr, &shm_c_end_addr, &shm_c_size);
        shm_c_size = shm_c_size;
        if((addr >= shm_c_start_addr) && (addr < shm_c_end_addr) && 
            ((len == 0) || (((addr+len-1) < shm_c_end_addr) && ((addr+len-1) >= shm_c_start_addr))) )
        {
            return 1;
        }
    }
    return (((((kal_uint32)(addr) & 0xF0000000) ^ CREG_OFFSET) == 0) || ((((kal_uint32)(addr) & 0xF0000000) ^ 0x20000000) == 0));
}
#else
{
    return 0;
}

#endif /* !__MTK_TARGET__ || Others */

#if defined(__MTK_TARGET__) 
#if defined(__MIPS_IA__)
#define ERRCTL_WST_BIT 29
#define ERRCTL_SPR_BIT 28
#define ERRCTL_ITC_BIT 26
#define L23TagLo_Lock_BIT 5
#define L2CACHE_LOCK_HISRTORY_NUM 10
extern kal_uint32 icache_line_nr_per_way;
extern kal_uint32 icache_line_nr;
extern kal_uint32 l2cache_line_nr_per_way;
extern kal_uint32 l2cache_line_nr;
extern kal_uint32 L2CACHE_LINE_SIZE;

kal_uint32 get_log2_value(kal_uint32 value)
{
    kal_uint32 i, returnValue = 0;
    for(i = value; i > 1; i = i / 2)
    {
        returnValue++;
    }
    return returnValue;
}

kal_bool drv_cache_read_l1_icache_line(kal_uint32 addr, kal_uint32 icache_data[])
{
    kal_uint32 back_err_ctl, set_err_ctl, loadIndex, tagCompare;
    kal_uint32 way, offset, tempTagLo;
    kal_uint32 wayNum, indexBitNum, lineSizeBitNum;
    kal_bool findTag = KAL_FALSE;
    // cache operation paramter:
    // 32Kb 4-way icache => 8Kb way => 256 line sets per way => 8 bit for index
    // 0-4 bits: index byte inside line
    // 5-12 bits: index line set inside way
    // 13-14 bits: index way inside cache

    // ITagLo:
    // 13-31 bits: physical address tag

    wayNum = icache_line_nr/icache_line_nr_per_way;
    indexBitNum = get_log2_value(icache_line_nr_per_way);
    lineSizeBitNum = get_log2_value(CPU_CACHE_LINE_SIZE);
        
    loadIndex = ((addr >> lineSizeBitNum) & (icache_line_nr_per_way - 1));
    tagCompare = (addr >> (lineSizeBitNum + indexBitNum));
    back_err_ctl = miu_mfc0(MIU_C0_ERRCTL);
    set_err_ctl = back_err_ctl & (~((1<<ERRCTL_WST_BIT)|(1<<ERRCTL_ITC_BIT)|(1<<ERRCTL_SPR_BIT)));
    miu_mtc0(MIU_C0_ERRCTL, set_err_ctl);

    for(way = 0; way < wayNum; way++) {
        for(offset = 0; offset < (CPU_CACHE_LINE_SIZE >> 3); offset++) {
            __asm__ __volatile__(
                "cache 0x4, 0(%0)\n"
                "sync 0x3\n"
                ::"r" ((way << (lineSizeBitNum + indexBitNum))|(loadIndex << lineSizeBitNum)|(offset << 3))
            );
            tempTagLo = miu_mfc0(MIU_C0_ITAGLO);
            if((tempTagLo >> (lineSizeBitNum + indexBitNum)) == tagCompare)
            {
                findTag = KAL_TRUE;
                icache_data[offset*2] = miu_mfc0(MIU_C0_IDATALO);
                icache_data[(offset*2)+1] = miu_mfc0(MIU_C0_IDATAHI);
            }
        }
    }

    /* restore errctl */
    miu_mtc0(MIU_C0_ERRCTL, back_err_ctl);
    return findTag;
}

kal_bool drv_cache_read_l2_cache_line(kal_uint32 addr, kal_uint32 l2cache_data[])
{
    kal_uint32 back_err_ctl, set_err_ctl, loadIndex, tagCompare;
    kal_uint32 way, offset;
    kal_uint32 wayNum, indexBitNum, lineSizeBitNum;
    kal_bool findTag = KAL_FALSE;

    // cache operation paramter:
    // 256Kb 8-way l2cache => 32Kb way => 512 line sets per way => 9 bit for index
    // 0-5 bits: index byte inside line
    // 6-14 bits: index line set inside way
    // 15-17 bits: index way inside cache

    // ITagLo:
    // 15-31 bits: physical address tag

    wayNum = l2cache_line_nr/l2cache_line_nr_per_way;
    indexBitNum = get_log2_value(l2cache_line_nr_per_way);
    lineSizeBitNum = get_log2_value(L2CACHE_LINE_SIZE);

    loadIndex = ((addr >> lineSizeBitNum) & (l2cache_line_nr_per_way - 1));
    tagCompare = (addr >> (lineSizeBitNum + indexBitNum));
    back_err_ctl = miu_mfc0(MIU_C0_ERRCTL);
    set_err_ctl = back_err_ctl & (~((1<<ERRCTL_WST_BIT)|(1<<ERRCTL_ITC_BIT)|(1<<ERRCTL_SPR_BIT)));
    miu_mtc0(MIU_C0_ERRCTL, set_err_ctl);

    for(way = 0; way < wayNum; way++) {
        for(offset = 0; offset < (L2CACHE_LINE_SIZE >> 3); offset++) {
            __asm__ __volatile__(
                "cache 0x7, 0(%0)\n"
                "sync 0x3\n"
                ::"r" ((way << (lineSizeBitNum + indexBitNum))|(loadIndex << lineSizeBitNum)|(offset << 3)));
            
            if((miu_mfc0(MIU_C0_L23TAGLO) >> (lineSizeBitNum + indexBitNum)) == tagCompare)
            {
                findTag = KAL_TRUE;
                l2cache_data[offset*2] = miu_mfc0(MIU_C0_L23DATALO);
                l2cache_data[(offset*2)+1] = miu_mfc0(MIU_C0_L23DATAHI);
            }
        }
    }

    /* restore errctl */
    miu_mtc0(MIU_C0_ERRCTL, back_err_ctl);
    return findTag;
}

kal_uint32 l2cache_lock_fail_address[L2CACHE_LOCK_HISRTORY_NUM];
kal_uint32 l2cache_lock_fail_counter;

kal_bool drv_cache_check_l2cache_lock(kal_uint32 addr, kal_uint32 len, kal_uint32* failAddrPtr)
{
    kal_uint32 back_err_ctl, set_err_ctl, loadIndex, tagCompare, L23TagLo;
    kal_uint32 way, offset;
    kal_uint32 wayNum, indexBitNum, lineSizeBitNum;
    kal_bool findTag, passTag;
    kal_uint32 checkAddress, failCounter; 

    // cache operation paramter:
    // 256Kb 8-way l2cache => 32Kb way => 512 line sets per way => 9 bit for index
    // 0-5 bits: index byte inside line
    // 6-14 bits: index line set inside way
    // 15-17 bits: index way inside cache

    // ITagLo:
    // 15-31 bits: physical address tag
    
    (*failAddrPtr) = 0;
    failCounter = 0;
    if (addr & L2CACHE_LINE_SIZE_MASK)
    {
        return KAL_FALSE;
    }
    else if (len & L2CACHE_LINE_SIZE_MASK)
    {
        return KAL_FALSE;
    }

    wayNum = l2cache_line_nr/l2cache_line_nr_per_way;
    indexBitNum = get_log2_value(l2cache_line_nr_per_way);
    lineSizeBitNum = get_log2_value(L2CACHE_LINE_SIZE);

    back_err_ctl = miu_mfc0(MIU_C0_ERRCTL);
    set_err_ctl = back_err_ctl & (~((1<<ERRCTL_WST_BIT)|(1<<ERRCTL_ITC_BIT)|(1<<ERRCTL_SPR_BIT)));
    miu_mtc0(MIU_C0_ERRCTL, set_err_ctl);

    for( checkAddress = addr; checkAddress < addr + len; checkAddress += L2CACHE_LINE_SIZE)
    {
        findTag = KAL_FALSE;
        passTag = KAL_TRUE;
        loadIndex = ((checkAddress >> lineSizeBitNum) & (l2cache_line_nr_per_way - 1));
        tagCompare = (checkAddress >> (lineSizeBitNum + indexBitNum));

        for(way = 0; way < wayNum; way++) 
        {
            for(offset = 0; offset < (L2CACHE_LINE_SIZE >> 3); offset++) {
                __asm__ __volatile__(
                    "cache 0x7, 0(%0)\n"
                    "sync 0x3\n"
                    ::"r" ((way << (lineSizeBitNum + indexBitNum))|(loadIndex << lineSizeBitNum)|(offset << 3)));
                L23TagLo = miu_mfc0(MIU_C0_L23TAGLO);
                if((L23TagLo >> (lineSizeBitNum + indexBitNum)) == tagCompare)
                {
                    findTag = KAL_TRUE;
                    if((L23TagLo & (1<<L23TagLo_Lock_BIT)) != (1<<L23TagLo_Lock_BIT))
                    {
                        passTag = KAL_FALSE;
                    }
                }
            }
        }
        if( passTag == KAL_FALSE || findTag == KAL_FALSE)
        {
            if( failCounter == 0)
            {
                (*failAddrPtr) = checkAddress;
            }
            failCounter++;
            if(l2cache_lock_fail_counter < L2CACHE_LOCK_HISRTORY_NUM)
            {
                l2cache_lock_fail_address[l2cache_lock_fail_counter] = checkAddress;
                l2cache_lock_fail_counter++;
            }
            else
            {
                miu_mtc0(MIU_C0_ERRCTL, back_err_ctl);
                return KAL_FALSE;
            }
        }
    }
    /* restore errctl */
    miu_mtc0(MIU_C0_ERRCTL, back_err_ctl);
    if( failCounter > 0)
    {
        return KAL_FALSE;
    }
    else
    {
        return KAL_TRUE;
    }
}

kal_uint32 drv_cache_query_l1_cache_line_size(void)
{
    return CPU_CACHE_LINE_SIZE;
}

kal_uint32 drv_cache_query_l2_cache_line_size(void)
{
    return L2CACHE_LINE_SIZE;
}
#endif /* __MIPS_IA__ */

void cache_exception_reason_record(CACHE_FATAL_REASON reason, kal_uint32 para1)
{
    kal_uint32 vpe_id;
    vpe_id = kal_get_current_vpe_id();
    if(cache_exception_reason[vpe_id] == CACHE_DEFAULT_NO_FATAL)
    {
        if( reason == CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE || reason == CACHE_LEN_NOT_ALIGN_L2_CACHE_LINE)
        {
            if((para1 > CPU_ICACHE_SIZE) && ((vpe_id & 0x1) != 0))
            {
                reason = CACHE_LEN_EXCEED_L1_CACHE_SIZE;
            }
        }
        cache_exception_reason[vpe_id] = reason;
    }
}

CACHE_FATAL_REASON cache_exception_reason_query(kal_uint32 fatalErrorCode1)
{
    kal_uint32 vpe_id;
    CACHE_FATAL_REASON returnReason;

    vpe_id = kal_get_current_vpe_id();
    returnReason = cache_exception_reason[vpe_id];

    if( fatalErrorCode1 == KAL_ERROR_CACHE_NOT_IN_PREDEF_REGION_FAILED)
    {
        if( returnReason != CACHE_ADDRESS_LEN_NOT_IN_DYNAMIC_C_REGION && returnReason != CACHE_INVALID_PARAMETER)
        {
            returnReason = CACHE_INVALID_FATAL;
        }
    }
    else if( fatalErrorCode1 == KAL_ERROR_CACHE_OP_INVALID_ADDRESS_FAILED)
    {
        if( returnReason != CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE && returnReason != CACHE_ADDRESS_NOT_ALIGN_L2_CACHE_LINE)
        {
            returnReason = CACHE_INVALID_FATAL;
        }
    }
    else if( fatalErrorCode1 == KAL_ERROR_CACHE_OP_INVALID_LEN_FAILED)
    {
        if( returnReason != CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE && returnReason != CACHE_LEN_NOT_ALIGN_L2_CACHE_LINE && returnReason != CACHE_LEN_EXCEED_L1_CACHE_SIZE)
        {
            returnReason = CACHE_INVALID_FATAL;
        }
    }
    else
    {
        returnReason = CACHE_INVALID_FATAL;
    }
    return returnReason;
}
#endif /* __MTK_TARGET__ */

/*************************************************************************
* FUNCTION
*  Cache_Driver_Sanity_Test
*
* DESCRIPTION
*  This function test the correctness of each Cache Driver API for new chips
*  It is designed to be run after region init and cache init
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*
* RETURNS
*  0: success
*  1: fail
*
*************************************************************************/
/*************************************************************************
 * !!!WARNING!!!
 * This function should NEVER be built in the official release 
 *************************************************************************/
//#define SS_CDST
#if defined(SS_CDST)
/* Test Options */
#define ASSERT_ON_ERROR   1

extern kal_bool query_is_non_cached_ram(kal_uint32 addr, kal_uint32 len);
/* Sysram Option */
#define CDST_SYSRAM_PLATFORM 1

/* Helper macro */
#define CDST_INIT() \
    do { \
        CDST_ret = 0; \
    } while(0)
    
#define CDST_PASS(c) \
    do { \
        if(CDST_TEST_RESULT.c==WAIT) \
        { \
            CDST_TEST_RESULT.c=PASS; \
        } \
    } while(0)

#if ASSERT_ON_ERROR
#define CDST_FAIL(c) \
    do { \
        CDST_TEST_RESULT.c=FAIL; \
        CDST_ret = 1; \
        ASSERT(0);  \
    } while(0)

#else /* ASSERT_ON_ERROR */
#define CDST_FAIL(c) \
    do { \
        CDST_TEST_RESULT.c=FAIL; \
        CDST_ret = 1; \
    } while(0)
    
#endif /* ASSERT_ON_ERROR */

typedef enum
{
    WAIT=0,
    PASS,
    FAIL,
    BYPASS
} CDST_CASE;

struct {
    CDST_CASE Address_Remapping;          /* Check 0xF -> 0x0 remapping */
    
    CDST_CASE Invalidate_DCache_Small;    /* Invalidate D-Cache size <= cache size */
    CDST_CASE Invalidate_DCache_Large;    /* Invalidate D-Cache size > cache size */
    CDST_CASE Clean_DCache_Small;         /* Clean D-Cache size <= cache size */
    CDST_CASE Clean_DCache_Large;         /* Clean D-Cache size > cache size */
    CDST_CASE Clean_Inv_DCache_Small;     /* Clean and invalidate D-Cache size <= cache size */
    CDST_CASE Clean_Inv_DCache_Large;     /* Clean and invalidate D-Cache size > cache size */
    
    CDST_CASE Predef_Cache_Region;        /* is_predef_dyna_c_region */
    CDST_CASE Dynamic_Cache_Switch;       /* dynamic_switch_cacheable_region */    
    CDST_CASE Virt_to_Phys_to_Virt;       /* virt_to_phys, phys_to_virt */
    
    CDST_CASE Query_is_Non_Cached_Ram;    /* INT_QueryIsNonCachedRAM */
    CDST_CASE Query_is_Cached_Ram;        /* INT_QueryIsCachedRAM */
    CDST_CASE Query_is_Non_Cached_SysRAM; /* INT_QueryIsNonCachedSysRAM */
    CDST_CASE Query_is_Cached_SysRAM;     /* INT_QueryIsCachedSysRAM */
    CDST_CASE Query_is_SysRAM;            /* INT_QueryIsSysRAM */
} CDST_TEST_RESULT={0};


#ifdef __MTK_TARGET__
__attribute__ ((section("DYNAMICCACHEABLEZI_NC"), zero_init))
#endif /* __MTK_TARGET__ */
__attribute__ ((aligned(32*1024))) kal_uint32 CDST_DCDNC_array[64*1024];


#ifdef __MTK_TARGET__
__attribute__ ((section("NONCACHEDZI"), zero_init)) kal_uint32 CDST_NC_Var;
#else
kal_uint32 CDST_NC_Var;
#endif /* __MTK_TARGET__ */

kal_uint32 CDST_C_Var;

kal_uint32 CDST_ret=0;

volatile kal_uint32 debug[20];

kal_uint32 Cache_Driver_Sanity_Test(void)
{
    kal_uint32 idx;
    kal_uint32 *ptr;

    CDST_INIT();
    
/**************************************************************************
*   ADDRESS REMAPPING TEST
***************************************************************************/
    if((kal_uint32)CDST_DCDNC_array==MAP2CREGVA((kal_uint32)CDST_DCDNC_array))
    {
        CDST_FAIL(Address_Remapping);   // PA == VA abnormal
    }
    clean_and_invalidate_dcache(MAP2CREGVA((kal_uint32)CDST_DCDNC_array), dcache_line_nr);
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);
    
    /* Fill PA region with test pattern */
    for(idx=0;idx<dcache_line_nr*32/4;idx++)
    {
        ptr[idx]=(kal_uint32)(ptr+idx);
    }
    MM_Sync();    

    /* Check VA and PA region read the same and correct test pattern */
    for(idx=0;idx<dcache_line_nr*32/4;idx++)
    {
        if(*(kal_uint32*)MAP2CREGVA((kal_uint32)(CDST_DCDNC_array+idx))!=*(CDST_DCDNC_array+idx))
        {
              CDST_FAIL(Address_Remapping);
        }
        if(*(kal_uint32*)MAP2CREGVA((kal_uint32)(CDST_DCDNC_array+idx))!=(kal_uint32)(CDST_DCDNC_array+idx))
        {
              CDST_FAIL(Address_Remapping);
        }
    }
    CDST_PASS(Address_Remapping);

/**************************************************************************
*   DCache Operation Tests
***************************************************************************/
/* Invalidate DCache Small */
    /* Write VA with test pattern A */
    ptr=(kal_uint32*)MAP2CREGVA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<1024;idx++)
    {
        //*(ptr+idx);
        *(ptr+idx)=0xDEADBEEF;
    }
    
    /* Invalidate VA DCache */
    invalidate_dcache((kal_uint32)ptr, 1024*4);
    
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);
    /* Write PA with test pattern B */
    for(idx=0;idx<1024;idx++)
    {
        *(ptr+idx)=(kal_uint32)(ptr+idx);
    }

    ptr=(kal_uint32*)MAP2CREGVA((kal_uint32)CDST_DCDNC_array);
    /* Read VA and the value should be test pattern B */
    for(idx=0;idx<1024;idx++)
    {
        if(*(ptr+idx)!=MAP2CREGPA(CDST_DCDNC_array+idx))
        {
              CDST_FAIL(Invalidate_DCache_Small);
        }          
    }
    CDST_PASS(Invalidate_DCache_Small);

/* Invalidate DCache Large */
    /* Write VA with test pattern A */
    ptr=(kal_uint32*)MAP2CREGVA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<64*1024;idx++)
    {
        //*(ptr+idx);
        *(ptr+idx)=0xDEADBEEF;
    }
    
    /* Invalidate VA DCache */
    invalidate_dcache((kal_uint32)ptr, 64*1024*4);
    
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);    

    /* Write PA with test pattern B */
    for(idx=0;idx<64*1024;idx++)
    {
        *(ptr+idx)=(kal_uint32)(ptr+idx);
    }
    
    ptr=(kal_uint32*)MAP2CREGVA((kal_uint32)CDST_DCDNC_array);
    /* Read VA and the value should be test pattern B */
    for(idx=0;idx<64*1024;idx++)
    {
        if(*(ptr+idx)!=MAP2CREGPA(CDST_DCDNC_array+idx))
        {
              CDST_FAIL(Invalidate_DCache_Large);
        }          
    }
    CDST_PASS(Invalidate_DCache_Large);
    
/* Clean DCache Small */
    /* Write PA with test pattern A */
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<1024;idx++)
    {
        *(ptr+idx)=0xDEADBEEF;
    }
    
    /* Write VA with test pattern B */
    ptr=(kal_uint32*)MAP2CREGVA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<1024;idx++)
    {
        //*(ptr+idx);
        *(ptr+idx)=(kal_uint32)(ptr+idx);
    }
    
    /* Clean VA */
    clean_dcache((kal_uint32)ptr, 1024*4);
    
    /* Read PA and it should be test pattern B */
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<1024;idx++)
    {
        if(*(ptr+idx)!=MAP2CREGVA(ptr+idx))
        {
            CDST_FAIL(Clean_DCache_Small);
        }
    }    
    CDST_PASS(Clean_DCache_Small);
    
/* Clean DCache Large */
    /* Write PA with test pattern A */
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<64*1024;idx++)
    {
        *(ptr+idx)=0xDEADBEEF;
    }
    
    /* Write VA with test pattern B */
    ptr=(kal_uint32*)MAP2CREGVA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<64*1024;idx++)
    {
        //*(ptr+idx);
        *(ptr+idx)=(kal_uint32)(ptr+idx);
    }
    
    /* Clean VA */
    clean_dcache((kal_uint32)ptr, 64*1024*4);
    
    /* Read PA and it should be test pattern B */
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<64*1024;idx++)
    {
        if(*(ptr+idx)!=MAP2CREGVA(ptr+idx))
        {
            CDST_FAIL(Clean_DCache_Large);
        }
    }  
    CDST_PASS(Clean_DCache_Large);
    
/* Clean and Invalidate DCache Small */
    /* Write PA with test pattern A */
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<1024;idx++)
    {
        *(ptr+idx)=0xDEADBEEF;
    }

    /* Write VA with test pattern B */
    ptr=(kal_uint32*)MAP2CREGVA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<1024;idx++)
    {
        //*(ptr+idx);
        *(ptr+idx)=(kal_uint32)(ptr+idx);
    }
    
    /* Clean and invalidate VA */
    clean_and_invalidate_dcache((kal_uint32)ptr, 1024*4);    
    
    /* Read PA and it should be test pattern B */
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<1024;idx++)
    {
        if(*(ptr+idx)!=MAP2CREGVA(ptr+idx))
        {
            CDST_FAIL(Clean_Inv_DCache_Small);
        }
    }    
    
    /* Write PA with test pattern A */
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<1024;idx++)
    {
        *(ptr+idx)=0xDEADBEEF;
    }

    MM_Sync();

    /* Read VA and it should be test pattern A */
    ptr=(kal_uint32*)MAP2CREGVA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<1024;idx++)
    {
        if(*(ptr+idx)!=(kal_uint32)(0xDEADBEEF))
        {
            CDST_FAIL(Clean_Inv_DCache_Small);
        }
    }    
    CDST_PASS(Clean_Inv_DCache_Small);    

/* Clean and Invalidate DCache Large */
    /* Write PA with test pattern A */
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<64*1024;idx++)
    {
        *(ptr+idx)=0xDEADBEEF;
    }
    
    /* Write VA with test pattern B */
    ptr=(kal_uint32*)MAP2CREGVA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<64*1024;idx++)
    {
        //*(ptr+idx);
        *(ptr+idx)=(kal_uint32)(ptr+idx);
    }
    
    /* Clean and invalidate VA */
    clean_and_invalidate_dcache((kal_uint32)ptr, 64*1024*4);
    
    /* Read PA and it should be test pattern B */
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<64*1024;idx++)
    {
        if(*(ptr+idx)!=MAP2CREGVA(ptr+idx))
        {
            CDST_FAIL(Clean_Inv_DCache_Large);
        }
    }    
    
    /* Write PA with test pattern A */
    ptr=(kal_uint32*)MAP2CREGPA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<64*1024;idx++)
    {
        *(ptr+idx)=0xDEADBEEF;
    }

    MM_Sync();

    /* Read VA and it should be test pattern A */
    ptr=(kal_uint32*)MAP2CREGVA((kal_uint32)CDST_DCDNC_array);
    for(idx=0;idx<64*1024;idx++)
    {
        if(*(ptr+idx)!=(kal_uint32)(0xDEADBEEF))
        {
            CDST_FAIL(Clean_Inv_DCache_Large);
        }
    }    
    CDST_PASS(Clean_Inv_DCache_Large);
    
/**************************************************************************
*   Dynamic Cacheablility APIs Test
***************************************************************************/
/* Predef_Cache_Region */
    /* Check Cached Ram symbol, it should not return 1 */
    if(is_predef_dyna_c_region((kal_uint32)(&CDST_C_Var), 4)==1)
    {
        CDST_FAIL(Predef_Cache_Region);
    }
    
    /* Check DCDNC symbol, it should not return 0 */
    if(is_predef_dyna_c_region((kal_uint32)(CDST_DCDNC_array), 4)==0)
    {
        CDST_FAIL(Predef_Cache_Region);
    }
    CDST_PASS(Predef_Cache_Region);
    
/* Dynamic_Cache_Switch */
    ptr=CDST_DCDNC_array;
    /* Fill NC with test pattern A */
    for(idx=0;idx<64*1024;idx++)
    {
        ptr[idx]=MAP2CREGPA(ptr+idx);
    }
       
    /* Switch to cacheable */
    dynamic_switch_cacheable_region(&ptr, 64*1024*4, PAGE_CACHEABLE);
    
    /* Read C and it should be test pattern A */
    /* Fill C with test pattern B */
    for(idx=0;idx<64*1024;idx++)
    {
        if(ptr[idx]!=MAP2CREGPA(ptr+idx))
        {
            CDST_FAIL(Dynamic_Cache_Switch);
        }
        ptr[idx]=MAP2CREGVA(ptr+idx);
    }

    /* Switch to non-cacheable */
    dynamic_switch_cacheable_region(&ptr, 64*1024*4, PAGE_NO_CACHE);

    /* Read NC and it should be test pattern B */    
    for(idx=0;idx<64*1024;idx++)
    {
        if(ptr[idx]!=MAP2CREGVA(ptr+idx))
        {
            CDST_FAIL(Dynamic_Cache_Switch);
        }
    }
    CDST_PASS(Dynamic_Cache_Switch);

/* Virt_to_Phys_to_Virt */
    if(virt_to_phys(CDST_DCDNC_array)!=MAP2CREGPA(CDST_DCDNC_array))
    {
        CDST_FAIL(Virt_to_Phys_to_Virt);
    }
    if(virt_to_phys(&CDST_NC_Var)!=MAP2CREGPA(&CDST_NC_Var))
    {
        CDST_FAIL(Virt_to_Phys_to_Virt);
    }
    if(virt_to_phys(&CDST_C_Var)!=MAP2CREGPA(&CDST_C_Var))
    {
        CDST_FAIL(Virt_to_Phys_to_Virt);
    }
    
    if(phys_to_virt(CDST_DCDNC_array)!=MAP2CREGVA(CDST_DCDNC_array))
    {
        CDST_FAIL(Virt_to_Phys_to_Virt);
    }
    if(phys_to_virt(&CDST_NC_Var)!=MAP2CREGVA(&CDST_NC_Var))
    {
        CDST_FAIL(Virt_to_Phys_to_Virt);
    }
    if(phys_to_virt(&CDST_C_Var)!=MAP2CREGVA(&CDST_C_Var))
    {
        CDST_FAIL(Virt_to_Phys_to_Virt);
    }
    CDST_PASS(Virt_to_Phys_to_Virt);

/**************************************************************************
*   Query APIs Test
***************************************************************************/
/* Query_is_Non_Cached_Ram */
    if(INT_QueryIsNonCachedRAM(&CDST_NC_Var, 4)!=1)
    {
        CDST_FAIL(Query_is_Non_Cached_Ram);  
    }
    if(INT_QueryIsNonCachedRAM(&CDST_C_Var, 4)!=0)
    {
        CDST_FAIL(Query_is_Non_Cached_Ram);  
    }
    CDST_PASS(Query_is_Non_Cached_Ram);  

/* Query_is_Cached_Ram */    
    if(INT_QueryIsCachedRAM(&CDST_NC_Var, 4)!=0)
    {
        CDST_FAIL(Query_is_Cached_Ram);  
    }
    if(INT_QueryIsCachedRAM(&CDST_C_Var, 4)!=1)
    {
        CDST_FAIL(Query_is_Cached_Ram);  
    }      
    CDST_PASS(Query_is_Cached_Ram);  

/* Sysram Related */
#if CDST_SYSRAM_PLATFORM
    /* TBD */
#else /* CDST_SYSRAM_PLATFORM */
/* Query_is_Non_Cached_SysRAM */
    if(INT_QueryIsNonCachedSysRAM(&CDST_NC_Var,4)!=0)
    {
        CDST_FAIL(Query_is_Non_Cached_SysRAM);
    }
    if(INT_QueryIsNonCachedSysRAM(&CDST_C_Var,4)!=0)
    {
        CDST_FAIL(Query_is_Non_Cached_SysRAM);
    }
    if(INT_QueryIsNonCachedSysRAM(CDST_DCDNC_array,4)!=0)
    {
        CDST_FAIL(Query_is_Non_Cached_SysRAM);
    }
    CDST_PASS(Query_is_Non_Cached_SysRAM);
    
/* Query_is_Cached_SysRAM */
    if(INT_QueryIsCachedSysRAM(&CDST_NC_Var,4)!=0)
    {
        CDST_FAIL(Query_is_Cached_SysRAM);
    }
    if(INT_QueryIsCachedSysRAM(&CDST_C_Var,4)!=0)
    {
        CDST_FAIL(Query_is_Cached_SysRAM);
    }
    if(INT_QueryIsCachedSysRAM(CDST_DCDNC_array,4)!=0)
    {
        CDST_FAIL(Query_is_Cached_SysRAM);
    }
    CDST_PASS(Query_is_Cached_SysRAM);
    
/* Query_is_SysRAM */
    if(INT_QueryIsSysRAM(&CDST_NC_Var)!=0)
    {
        CDST_FAIL(Query_is_SysRAM);
    }
    if(INT_QueryIsSysRAM(&CDST_C_Var)!=0)
    {
        CDST_FAIL(Query_is_SysRAM);
    }
    if(INT_QueryIsSysRAM(CDST_DCDNC_array)!=0)
    {
        CDST_FAIL(Query_is_SysRAM);
    }
    CDST_PASS(Query_is_SysRAM);
#endif 

    return CDST_ret;
}
#endif /* SS_CDST */
