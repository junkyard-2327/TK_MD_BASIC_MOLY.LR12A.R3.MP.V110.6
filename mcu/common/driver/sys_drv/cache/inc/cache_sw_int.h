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
 *   UMOLY
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _CACHE_SW_INT_H
#define _CACHE_SW_INT_H

#include "kal_general_types.h"
#include "cache_hw_int.h"
#include "custom_scatstruct.h"
#include "reg_base.h"

/*************************************************************************
 * Define enums
 *************************************************************************/

/* size enum, non-cache related. */
enum 
{
    SIZE_512B = 512,
    SIZE_1KB = 1 * 1024,
    SIZE_4KB = 4 * 1024,
    SIZE_8KB = 8 * 1024,
    SIZE_16KB = 16 * 1024,
    SIZE_32KB = 32 * 1024,
    SIZE_64KB = 64 * 1024,
    SIZE_128KB = 128 * 1024,
    SIZE_256KB = 256 * 1024,
    SIZE_512KB = 512 * 1024,
    SIZE_1MB = 1 * 1024 * 1024,
    SIZE_2MB = 2 * 1024 * 1024,
    SIZE_4MB = 4 * 1024 * 1024,
    SIZE_8MB = 8 * 1024 * 1024,
    SIZE_16MB = 16 * 1024 * 1024,
    SIZE_32MB = 32 * 1024 * 1024,
    SIZE_64MB = 64 * 1024 * 1024
};

typedef enum 
{
   CACHE_DEFAULT_NO_FATAL,
   CACHE_ADDRESS_NOT_ALIGN_L1_CACHE_LINE,
   CACHE_ADDRESS_NOT_ALIGN_L2_CACHE_LINE,
   CACHE_LEN_NOT_ALIGN_L1_CACHE_LINE,
   CACHE_LEN_NOT_ALIGN_L2_CACHE_LINE,
   CACHE_LEN_EXCEED_L1_CACHE_SIZE,
   CACHE_ADDRESS_LEN_NOT_IN_DYNAMIC_C_REGION,
   CACHE_INVALID_PARAMETER,
   CACHE_INVALID_FATAL,
} CACHE_FATAL_REASON;

/*******************************************************************************
 * constants & macros
 *******************************************************************************/

/* DCache region offset */
#if defined(__MASE_LTEFDD__) || defined (__ESL_ENABLE__)
	#define CREG_OFFSET         0x20000000
#else
#define CREG_OFFSET             0x60000000 
#endif

#define CREG_SYS_OFFSET     CREG_OFFSET

/* Map To Cached ReGion Physical Address */
#define MAP2CREGPA(addr) ((kal_uint32)(addr) & (~0xF0000000)) // UC address : bank 0
#define MAP2CREGVA(addr) ((kal_uint32)(addr) | (CREG_OFFSET)) // C  address : CREG_OFFSET 

#define MAP2CREGNEWA(olda, newa) (((kal_uint32)(olda) & (~0xF0000000)) | ((kal_uint32)(newa) & CREG_SYS_OFFSET))

#define CPU_CACHE_LINE_SIZE 32
#define CPU_CACHE_LINE_BIT_OFFSET 5
#define CPU_CACHE_LINE_SIZE_MASK 0x0000001F
#define CPU_CACHE_SIZE 32 * 1024
#define CPU_ICACHE_SIZE 64 * 1024

#define ROUNDUP_1KB(v)    \
        do {    \
            (v) = (((v) + 1024 - 1) >> 10) << 10;    \
        } while (0)

#define ROUNDUP_4KB(v)    \
        do {    \
            (v) = (((v) + 4096 - 1) >> 12) << 12;    \
        } while (0)

#define ROUNDDOWN_4KB(v)  \
        do {    \
            (v) = (v) & ~(4096 - 1);    \
        } while (0)

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
#define BANK_MSK 0xF0000000UL
#define CACHE_WB_BANK2_ADDR 0x20000000
#define CACHE_API_BANK2_ASSERTION
#endif

#if defined(__MTK_TARGET__) 
#if defined(__MIPS_IA__)
kal_bool drv_cache_read_l2_cache_line(kal_uint32 addr, kal_uint32 l2cache_data[]);
kal_bool drv_cache_read_l1_icache_line(kal_uint32 addr, kal_uint32 icache_data[]);
kal_bool drv_cache_check_l2cache_lock(kal_uint32 addr, kal_uint32 len, kal_uint32* failAddrPtr);
kal_uint32 drv_cache_query_l1_cache_line_size(void);
kal_uint32 drv_cache_query_l2_cache_line_size(void);
#endif
CACHE_FATAL_REASON cache_exception_reason_query(kal_uint32 fatalErrorCode1);
#endif

#endif /* !_CACHE_SW_INT_H */

