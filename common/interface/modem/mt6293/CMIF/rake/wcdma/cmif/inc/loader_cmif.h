#ifndef __LOADER_CMIF_H__
#define __LOADER_CMIF_H__

#include "reg_access.h"
#include "base_addr_cmif.h"

#define CMIF_LOADER_REG_BASE                                          (CMIF_RAKE_LOADER_OFFSET)
#define CMIF_T2_T3_LOADER_POS_ALIGN_L1                                (CMIF_LOADER_REG_BASE + 0x0000)
#define CMIF_T3_GSR_ADDR                                              (CMIF_LOADER_REG_BASE + 0x0004)
#define CMIF_T3_DIST                                                  (CMIF_LOADER_REG_BASE + 0x0008)
#define CMIF_LOADER_OFF                                               (CMIF_LOADER_REG_BASE + 0x000C)

#define M_CMIF_T2_T3_LOADER_POS_ALIGN_L1_RD()                         REG_READ(CMIF_T2_T3_LOADER_POS_ALIGN_L1)
#define M_CMIF_T3_GSR_ADDR_RD()                                       REG_READ(CMIF_T3_GSR_ADDR)
#define M_CMIF_T3_DIST_RD()                                           REG_READ(CMIF_T3_DIST)
#define M_CMIF_LOADER_OFF_RD()                                        REG_READ(CMIF_LOADER_OFF)

#define M_CMIF_T2_T3_LOADER_POS_ALIGN_L1_WR(reg)                      REG_WRITE(CMIF_T2_T3_LOADER_POS_ALIGN_L1, reg)
#define M_CMIF_T3_GSR_ADDR_WR(reg)                                    REG_WRITE(CMIF_T3_GSR_ADDR, reg)
#define M_CMIF_T3_DIST_WR(reg)                                        REG_WRITE(CMIF_T3_DIST, reg)
#define M_CMIF_LOADER_OFF_WR(reg)                                     REG_WRITE(CMIF_LOADER_OFF, reg)

#define CMIF_T2_T3_LOADER_POS_ALIGN_L1_REVERSE_EN_BIT_LSB             (0)
#define CMIF_T2_T3_LOADER_POS_ALIGN_L1_REVERSE_EN_BIT_WIDTH           (1)
#define CMIF_T2_T3_LOADER_POS_ALIGN_L1_REVERSE_EN_BIT_MASK            ((UINT32) (((1<<CMIF_T2_T3_LOADER_POS_ALIGN_L1_REVERSE_EN_BIT_WIDTH)-1) << CMIF_T2_T3_LOADER_POS_ALIGN_L1_REVERSE_EN_BIT_LSB) )
#define CMIF_T2_T3_LOADER_POS_ALIGN_L1_REVERSE_EN_FLD_WR(reg, val)    (reg |= (val) << CMIF_T2_T3_LOADER_POS_ALIGN_L1_REVERSE_EN_BIT_LSB)
#define CMIF_T2_T3_LOADER_POS_ALIGN_L1_REVERSE_EN_FLD_RD()            ((M_CMIF_T2_T3_LOADER_POS_ALIGN_L1_RD() & CMIF_T2_T3_LOADER_POS_ALIGN_L1_REVERSE_EN_BIT_MASK) >> CMIF_T2_T3_LOADER_POS_ALIGN_L1_REVERSE_EN_BIT_LSB)

#define CMIF_T3_GSR_ADDR_ADDR_BIT_LSB                                 (0)
#define CMIF_T3_GSR_ADDR_ADDR_BIT_WIDTH                               (14)
#define CMIF_T3_GSR_ADDR_ADDR_BIT_MASK                                ((UINT32) (((1<<CMIF_T3_GSR_ADDR_ADDR_BIT_WIDTH)-1) << CMIF_T3_GSR_ADDR_ADDR_BIT_LSB) )
#define CMIF_T3_GSR_ADDR_ADDR_FLD_WR(reg, val)                        (reg |= (val) << CMIF_T3_GSR_ADDR_ADDR_BIT_LSB)
#define CMIF_T3_GSR_ADDR_ADDR_FLD_RD()                                ((M_CMIF_T3_GSR_ADDR_RD() & CMIF_T3_GSR_ADDR_ADDR_BIT_MASK) >> CMIF_T3_GSR_ADDR_ADDR_BIT_LSB)

#define CMIF_T3_DIST_DIST_BIT_LSB                                     (0)
#define CMIF_T3_DIST_DIST_BIT_WIDTH                                   (12)
#define CMIF_T3_DIST_DIST_BIT_MASK                                    ((UINT32) (((1<<CMIF_T3_DIST_DIST_BIT_WIDTH)-1) << CMIF_T3_DIST_DIST_BIT_LSB) )
#define CMIF_T3_DIST_DIST_FLD_WR(reg, val)                            (reg |= (val) << CMIF_T3_DIST_DIST_BIT_LSB)
#define CMIF_T3_DIST_DIST_FLD_RD()                                    ((M_CMIF_T3_DIST_RD() & CMIF_T3_DIST_DIST_BIT_MASK) >> CMIF_T3_DIST_DIST_BIT_LSB)

#define CMIF_LOADER_OFF_DISABLE_BIT_LSB                               (0)
#define CMIF_LOADER_OFF_DISABLE_BIT_WIDTH                             (1)
#define CMIF_LOADER_OFF_DISABLE_BIT_MASK                              ((UINT32) (((1<<CMIF_LOADER_OFF_DISABLE_BIT_WIDTH)-1) << CMIF_LOADER_OFF_DISABLE_BIT_LSB) )
#define CMIF_LOADER_OFF_DISABLE_FLD_WR(reg, val)                      (reg |= (val) << CMIF_LOADER_OFF_DISABLE_BIT_LSB)
#define CMIF_LOADER_OFF_DISABLE_FLD_RD()                              ((M_CMIF_LOADER_OFF_RD() & CMIF_LOADER_OFF_DISABLE_BIT_MASK) >> CMIF_LOADER_OFF_DISABLE_BIT_LSB)

#endif /* __LOADER_CMIF_H__ */
