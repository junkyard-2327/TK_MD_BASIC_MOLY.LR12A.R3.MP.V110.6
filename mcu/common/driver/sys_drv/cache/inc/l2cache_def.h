#ifndef __L2CACHE_DEF_H__
#define __L2CACHE_DEF_H__

/************************************************
 *
 * Warning !!! This file will be included in asm
 * Do not put C syntax here
 *
 ***********************************************/

#define MIPS_IA_ENABLE_L2_CACHE
#define MIPS_IA_ENABLE_L2_CACHE_WT
#define l2_sync_base     0x1c000000  // l2 only sync base 

/*==============================================*/
/*              register field define           */
/*==============================================*/
//#define L2CACHE_LINE_SIZE		64
	
//Cache OP
#define CACHE_CODE	0x2
#define CACHE_Index_WB_Invalid		(0x0<<CACHE_CODE)
#define CACHE_Index_Load_Tag		(0x1<<CACHE_CODE)
#define CACHE_Index_Store_Tag		(0x2<<CACHE_CODE)
#define CACHE_Index_Store_Data      (0x3<<CACHE_CODE)
#define CACHE_Addr_Hit_Invalid		(0x4<<CACHE_CODE)
#define CACHE_Addr_Hit_WB_Invalid	(0x5<<CACHE_CODE)
#define CACHE_Addr_Hit_WB			(0x6<<CACHE_CODE)
#define CACHE_Fetch_Lock			(0x7<<CACHE_CODE)
//Cache type
#define I_CACHE	0x0
#define D_CACHE	0x1
#define T_CACHE	0x2
#define S_CACHE	0x3
// L2 SYNCBASE [31:12], L2 SYNC_EN [0]
#define SYNC_BASE_SHIFT 12
/*==============================================*/
/*              CP0 register define             */
/*==============================================*/
//Cache Management
#define CM_ITAGLO       $28,0
#define CM_IDATALO      $28,1
#define CM_DTAGLO       $28,2
#define CM_DATALO       $28,3

#endif //__L2CACHE_DEF_H__ 

