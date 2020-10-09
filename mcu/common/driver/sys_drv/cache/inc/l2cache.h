#ifndef __L2_CACHE_H__
#define __L2_CACHE_H__

/*==============================================*/
/*              macro APIs				        */
/*==============================================*/
#define CACHE_OP(op,addr) \
    __asm__ volatile( \
                      "cache %0,0(%1) \n" \
                      :                  \
                      :"i"(op),"r"((unsigned char*)(addr)))
	

/*==============================================*/
/*              exported global variables       */
/*==============================================*/
extern unsigned int l2cache_line_nr;
extern unsigned int l2cache_line_nr_per_way;
extern unsigned int L2CACHE_LINE_SIZE;

/*==============================================*/
/*              function prototype              */
/*==============================================*/
void l2_cache_init_var(void);
void l2_cache_init(void);
void mips_invalidate_l2cache(void);
void mips_invalidate_l2cache_single(unsigned int addr);
void mips_invalidate_l2cache_region(unsigned int addr, unsigned int nr_cache);
void mips_clean_l2cache(void);
void mips_clean_l2cache_region(unsigned int addr, unsigned int nr_cache);
void mips_clean_and_invalidate_l2cache_region(unsigned int addr, unsigned int nr_cache);
void mips_l2_only_sync(void);
void mips_fetch_and_lock_l2cache(unsigned int addr, unsigned int nr_cache);
//fetch and lock 
void mips_clean_l2cache_by_way(unsigned int way);

#endif //__L2_CACHE_H__ 
