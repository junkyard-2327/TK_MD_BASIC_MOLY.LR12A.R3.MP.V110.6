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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _CACHE_INTERNAL_API_H
#define _CACHE_INTERNAL_API_H

#include "l1cache.h"
#include "l2cache.h"

//L1Cache API
#define core_invalidate_icache() 									mips_invalidate_icache()																																										
#define core_invalidate_dcache() 									mips_invalidate_dcache()																																										
#define core_invalidate_icache_single(addr) 					    mips_invalidate_icache_single(addr)																																										
#define core_invalidate_dcache_single(addr) 					    mips_invalidate_dcache_single(addr)																																										
#define core_invalidate_icache_region(addr, nr_cache) 			    mips_invalidate_icache_region(addr, nr_cache)																																										
#define core_invalidate_dcache_region(addr, nr_cache) 			    mips_invalidate_dcache_region(addr, nr_cache)																																										
#define core_clean_dcache()										    mips_clean_dcache()																																										
#define core_clean_dcache_region(addr, nr_cache)        		    mips_clean_dcache_region(addr, nr_cache)																																										
#define core_clean_and_invalidate_dcache_region(addr, nr_cache)     mips_clean_and_invalidate_dcache_region(addr, nr_cache)																																										
#define core_fetch_and_lock_icache(addr, nr_cache)                  mips_fetch_and_lock_icache(addr, nr_cache)																																										
#define core_fetch_and_lock_dcache(addr, nr_cache)                  mips_fetch_and_lock_dcache(addr, nr_cache)																																										
#define core_clean_icache_by_way(way)                               mips_clean_icache_by_way(way)																																										
#define core_clean_dcache_by_way(way)                               mips_clean_dcache_by_way(way)																																										
                                                                    																																										
//L2Cache API                                                       																																										
#define core_invalidate_l2cache()                                   mips_invalidate_l2cache()                      																																										
#define core_invalidate_l2cache_single(addr)                        mips_invalidate_l2cache_single(addr)                																																										
#define core_invalidate_l2cache_region(addr, nr_cache)              mips_invalidate_l2cache_region(addr, nr_cache)      																																										
#define core_clean_l2cache()                                        mips_clean_l2cache()                      																																										
#define core_clean_l2cache_region(addr, nr_cache)                   mips_clean_l2cache_region(addr, nr_cache)           																																										
#define core_clean_and_invalidate_l2cache_region(addr, nr_cache)    mips_clean_and_invalidate_l2cache_region(addr, nr_cache)																																										
#define core_l2_only_sync()                                         mips_l2_only_sync()                      																																										
#define core_fetch_and_lock_l2cache(addr, nr_cache)                 mips_fetch_and_lock_l2cache(addr, nr_cache)              																																										  
#define core_clean_l2cache_by_way(way)                              mips_clean_l2cache_by_way(way)                      																																										
                                                                        
#endif /* !_CACHE_INTERNAL_API_H */







