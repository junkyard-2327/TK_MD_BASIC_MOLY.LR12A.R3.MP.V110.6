/*****************************************************************************
 *
 * Filename:
 * ---------
 *   l1cache_def.h
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
 *   Common L1 Cache macro header file for a coherent processing system
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
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __L1CACHE_DEF_H__
#define __L1CACHE_DEF_H__

/*==============================================*/
/*              register field define           */
/*==============================================*/
#define L1CACHE_LINE_SIZE		32
	
//Cache OP
#define CACHE_CODE	0x2
#define CACHE_Index_WB_Invalid		(0x0<<CACHE_CODE)
#define CACHE_Index_Load_Tag		(0x1<<CACHE_CODE)
#define CACHE_Index_Store_Tag		(0x2<<CACHE_CODE)
#define CACHE_Reserved				(0x3<<CACHE_CODE)
#define CACHE_Addr_Hit_Invalid		(0x4<<CACHE_CODE)
#define CACHE_Addr_Hit_WB_Invalid	(0x5<<CACHE_CODE)
#define CACHE_Addr_Hit_WB			(0x6<<CACHE_CODE)
#define CACHE_Fetch_Lock			(0x7<<CACHE_CODE)
//Cache type
#define I_CACHE	0x0
#define D_CACHE	0x1
#define T_CACHE	0x2
#define S_CACHE	0x3

/*==============================================*/
/*              CP0 register define             */
/*==============================================*/
//Cache Management
#define CM_ITAGLO       $28,0
#define CM_IDATALO      $28,1
#define CM_DTAGLO       $28,2
#define CM_DATALO       $28,3

#endif //__L1CACHE_DEF_H__ 
