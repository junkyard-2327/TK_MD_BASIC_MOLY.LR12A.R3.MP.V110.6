#ifndef __C2K_BOOTUP_CMIF_H__
#define __C2K_BOOTUP_CMIF_H__

#include "reg_access.h"
#include "c2k_base_addr_cmif.h"

#define CMIF_C2K_BOOTUP_REG_BASE                                      (CMIF_C2K_RAKE_BOOTUP_INIT_OFFSET)
#define CMIF_C2K_RAKE_MODE_CTRL                                       (CMIF_C2K_BOOTUP_REG_BASE + 0x0000)

#define M_CMIF_C2K_RAKE_MODE_CTRL_RD()                                REG_READ(CMIF_C2K_RAKE_MODE_CTRL)

#define M_CMIF_C2K_RAKE_MODE_CTRL_WR(reg)                             REG_WRITE(CMIF_C2K_RAKE_MODE_CTRL, reg)

#define CMIF_C2K_RAKE_MODE_CTRL_RAKE_MODE_BIT_LSB                     (0)
#define CMIF_C2K_RAKE_MODE_CTRL_RAKE_MODE_BIT_WIDTH                   (1)
#define CMIF_C2K_RAKE_MODE_CTRL_RAKE_MODE_BIT_MASK                    ((UINT32) (((1<<CMIF_C2K_RAKE_MODE_CTRL_RAKE_MODE_BIT_WIDTH)-1) << CMIF_C2K_RAKE_MODE_CTRL_RAKE_MODE_BIT_LSB) )
#define CMIF_C2K_RAKE_MODE_CTRL_RAKE_MODE_FLD_WR(reg, val)            (reg |= (val) << CMIF_C2K_RAKE_MODE_CTRL_RAKE_MODE_BIT_LSB)
#define CMIF_C2K_RAKE_MODE_CTRL_RAKE_MODE_FLD_RD()                    ((M_CMIF_C2K_RAKE_MODE_CTRL_RD() & CMIF_C2K_RAKE_MODE_CTRL_RAKE_MODE_BIT_MASK) >> CMIF_C2K_RAKE_MODE_CTRL_RAKE_MODE_BIT_LSB)

#endif /* __C2K_BOOTUP_CMIF_H__ */
