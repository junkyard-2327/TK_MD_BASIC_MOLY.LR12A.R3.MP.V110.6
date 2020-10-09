#ifndef __CPU_INFO_H__
#define __CPU_INFO_H__

#undef SYS_MCU_NUM_CORE
#undef SYS_MCU_NUM_VPE
#undef SYS_MCU_NUM_TC
#undef SYS_MCU_GIC_EXIST
#undef SYS_MCU_TYPE_MR2

#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
# include "cpu_info_MT6763.h"
#elif defined(MT6295M) 
# include "cpu_info_MT6295M.h"
#else
# warning "unknown MDMCU version"
#endif

#endif /* __CPU_INFO_H__ */
