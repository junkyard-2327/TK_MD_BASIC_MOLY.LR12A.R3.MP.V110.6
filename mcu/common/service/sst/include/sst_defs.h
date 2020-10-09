#ifndef _SST_DEFS_H
#define _SST_DEFS_H

#include "reg_base.h"

#define EX_STACK_SIZE (8*1024)
#define EX_DOR_EXCP_AREA_SIZE_PER_VPE (4*8) /*sizeof(EX_CPU_MIN_REG_T)*/


#if defined(BASE_MADDR_PCCIF0_MD)
#define BASE_MADDR_CCIF0_MD_REG_BASE BASE_MADDR_PCCIF0_MD
#elif defined(BASE_MADDR_CCIF0_MD)
#define BASE_MADDR_CCIF0_MD_REG_BASE BASE_MADDR_CCIF0_MD
#else
#error "no ccif base define!!"
#endif

//information from ccif owner: 0x100-> CCIF SRAM offset, 512-> SRAM size, 72-> last 72 bytes reserved for bootup trace
#define MDCCIF_BOOTTRC_DATA (BASE_MADDR_CCIF0_MD_REG_BASE + 0x100 + 512 - 72) 

#define g_EMM_MAIN_BUFF_MAGIC_ADDR      (MDCCIF_BOOTTRC_DATA + 0x4*15)
#define g_EMM_MAIN_BUFF_MAGIC 0x7274626E

#define g_EMM_MAIN_BUFF_ADDR_PTR        (MDCCIF_BOOTTRC_DATA + 0x4*16)
#define g_EMM_MAIN_BUFF_SIZE_PTR        (MDCCIF_BOOTTRC_DATA + 0x4*17)

#endif /* _SST_DEFS_H */
