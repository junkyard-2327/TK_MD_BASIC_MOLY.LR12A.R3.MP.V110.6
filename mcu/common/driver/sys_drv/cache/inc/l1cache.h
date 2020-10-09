/*****************************************************************************
 *
 * Filename:
 * ---------
 *   l1cache.h
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
 *   Common L1 Cache public APIs for a coherent processing system
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
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __L1_CACHE_H__
#define __L1_CACHE_H__

/*==============================================*/
/*              macro APIs				        */
/*==============================================*/
#define CACHE_OP(op,addr) \
    __asm__ volatile( \
                      "cache %0,0(%1) \n" \
                      :                  \
                      :"i"(op),"r"((unsigned char*)(addr)))
	
#if 0
/* under construction !*/
/* under construction !*/
#endif
/*==============================================*/
/*              exported global variables       */
/*==============================================*/
extern unsigned int icache_line_nr;
extern unsigned int icache_line_nr_per_way;
extern unsigned int dcache_line_nr;
extern unsigned int dcache_line_nr_per_way;

/*==============================================*/
/*              function prototype              */
/*==============================================*/
void l1_cache_init(void);
//void l1_cache_preinit(void);
void mips_invalidate_icache(void);
void mips_invalidate_dcache(void);
void mips_invalidate_icache_single(unsigned int addr);
void mips_invalidate_dcache_single(unsigned int addr);
void mips_invalidate_icache_region(unsigned int addr, unsigned int nr_cache);
void mips_invalidate_dcache_region(unsigned int addr, unsigned int nr_cache);
void mips_clean_dcache(void);
void mips_clean_dcache_region(unsigned int addr, unsigned int nr_cache);
void mips_clean_and_invalidate_dcache_region(unsigned int addr, unsigned int nr_cache);
void mips_fetch_and_lock_icache(unsigned int addr, unsigned int nr_cache);
void mips_fetch_and_lock_dcache(unsigned int addr, unsigned int nr_cache);
void mips_clean_icache_by_way(unsigned int way);
void mips_clean_dcache_by_way(unsigned int way);
#endif //__L1_CACHE_H__ 
