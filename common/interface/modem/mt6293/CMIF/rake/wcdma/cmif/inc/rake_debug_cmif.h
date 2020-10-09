#ifndef __RAKE_DEBUG_CMIF_H__
#define __RAKE_DEBUG_CMIF_H__

#include "reg_access.h"
#include "base_addr_cmif.h"

#define CMIF_RAKE_DEBUG_REG_BASE                                      (CMIF_RAKE_DEBUG_OFFSET)
#define CMIF_RTR_FRAME_IDX                                            (CMIF_RAKE_DEBUG_REG_BASE + 0x0000)

#define M_CMIF_RTR_FRAME_IDX_RD()                                     REG_READ(CMIF_RTR_FRAME_IDX)

#define M_CMIF_RTR_FRAME_IDX_WR(reg)                                  REG_WRITE(CMIF_RTR_FRAME_IDX, reg)

#define CMIF_RTR_FRAME_IDX_FRAME_IDX_BIT_LSB                          (0)
#define CMIF_RTR_FRAME_IDX_FRAME_IDX_BIT_WIDTH                        (32)
#define CMIF_RTR_FRAME_IDX_FRAME_IDX_BIT_MASK                         ((UINT32) (((1<<CMIF_RTR_FRAME_IDX_FRAME_IDX_BIT_WIDTH)-1) << CMIF_RTR_FRAME_IDX_FRAME_IDX_BIT_LSB) )
#define CMIF_RTR_FRAME_IDX_FRAME_IDX_FLD_WR(reg, val)                 (reg |= (val) << CMIF_RTR_FRAME_IDX_FRAME_IDX_BIT_LSB)
#define CMIF_RTR_FRAME_IDX_FRAME_IDX_FLD_RD()                         ((M_CMIF_RTR_FRAME_IDX_RD() & CMIF_RTR_FRAME_IDX_FRAME_IDX_BIT_MASK) >> CMIF_RTR_FRAME_IDX_FRAME_IDX_BIT_LSB)

#endif /* __RAKE_DEBUG_CMIF_H__ */
