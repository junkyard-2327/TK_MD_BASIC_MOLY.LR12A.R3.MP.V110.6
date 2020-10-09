#ifndef __SNR_CMIF_H__
#define __SNR_CMIF_H__

#include "reg_access.h"
#include "c2k_base_addr_cmif.h"

#define CMIF_SNR_REG_BASE                                             (CMIF_RAKE_SNR_OFFSET)
#define CMIF_C2I_MU                                                   (CMIF_SNR_REG_BASE + 0x0000)
#define CMIF_C2I_CNT30                                                (CMIF_SNR_REG_BASE + 0x0004)
#define CMIF_C2I_CNT45                                                (CMIF_SNR_REG_BASE + 0x0008)
#define CMIF_C2I_LOG0Y(i)                                             (CMIF_SNR_REG_BASE + 0x000C + ((i) * 0x4))
#define CMIF_C2I_LOG1Y(i)                                             (CMIF_SNR_REG_BASE + 0x0024 + ((i) * 0x4))

#define M_CMIF_C2I_MU_RD()                                            REG_READ(CMIF_C2I_MU)
#define M_CMIF_C2I_CNT30_RD()                                         REG_READ(CMIF_C2I_CNT30)
#define M_CMIF_C2I_CNT45_RD()                                         REG_READ(CMIF_C2I_CNT45)
#define M_CMIF_C2I_LOG0Y_RD(i)                                        REG_READ(CMIF_C2I_LOG0Y(i))
#define M_CMIF_C2I_LOG1Y_RD(i)                                        REG_READ(CMIF_C2I_LOG1Y(i))

#define M_CMIF_C2I_MU_WR(reg)                                         REG_WRITE(CMIF_C2I_MU, reg)
#define M_CMIF_C2I_CNT30_WR(reg)                                      REG_WRITE(CMIF_C2I_CNT30, reg)
#define M_CMIF_C2I_CNT45_WR(reg)                                      REG_WRITE(CMIF_C2I_CNT45, reg)
#define M_CMIF_C2I_LOG0Y_WR(i, reg)                                   REG_WRITE(CMIF_C2I_LOG0Y(i), reg)
#define M_CMIF_C2I_LOG1Y_WR(i, reg)                                   REG_WRITE(CMIF_C2I_LOG1Y(i), reg)

#define CMIF_C2I_MU_C2I_MU_SYNC_BIT_LSB                               (4)
#define CMIF_C2I_MU_C2I_MU_SYNC_BIT_WIDTH                             (2)
#define CMIF_C2I_MU_C2I_MU_SYNC_BIT_MASK                              ((UINT32) (((1<<CMIF_C2I_MU_C2I_MU_SYNC_BIT_WIDTH)-1) << CMIF_C2I_MU_C2I_MU_SYNC_BIT_LSB) )
#define CMIF_C2I_MU_C2I_MU_SYNC_FLD_WR(reg, val)                      (reg |= (val) << CMIF_C2I_MU_C2I_MU_SYNC_BIT_LSB)
#define CMIF_C2I_MU_C2I_MU_SYNC_FLD_RD()                              ((M_CMIF_C2I_MU_RD() & CMIF_C2I_MU_C2I_MU_SYNC_BIT_MASK) >> CMIF_C2I_MU_C2I_MU_SYNC_BIT_LSB)

#define CMIF_C2I_MU_C2I_RAMP_EN_BIT_LSB                               (2)
#define CMIF_C2I_MU_C2I_RAMP_EN_BIT_WIDTH                             (1)
#define CMIF_C2I_MU_C2I_RAMP_EN_BIT_MASK                              ((UINT32) (((1<<CMIF_C2I_MU_C2I_RAMP_EN_BIT_WIDTH)-1) << CMIF_C2I_MU_C2I_RAMP_EN_BIT_LSB) )
#define CMIF_C2I_MU_C2I_RAMP_EN_FLD_WR(reg, val)                      (reg |= (val) << CMIF_C2I_MU_C2I_RAMP_EN_BIT_LSB)
#define CMIF_C2I_MU_C2I_RAMP_EN_FLD_RD()                              ((M_CMIF_C2I_MU_RD() & CMIF_C2I_MU_C2I_RAMP_EN_BIT_MASK) >> CMIF_C2I_MU_C2I_RAMP_EN_BIT_LSB)

#define CMIF_C2I_MU_C2I_MU_BIT_LSB                                    (0)
#define CMIF_C2I_MU_C2I_MU_BIT_WIDTH                                  (2)
#define CMIF_C2I_MU_C2I_MU_BIT_MASK                                   ((UINT32) (((1<<CMIF_C2I_MU_C2I_MU_BIT_WIDTH)-1) << CMIF_C2I_MU_C2I_MU_BIT_LSB) )
#define CMIF_C2I_MU_C2I_MU_FLD_WR(reg, val)                           (reg |= (val) << CMIF_C2I_MU_C2I_MU_BIT_LSB)
#define CMIF_C2I_MU_C2I_MU_FLD_RD()                                   ((M_CMIF_C2I_MU_RD() & CMIF_C2I_MU_C2I_MU_BIT_MASK) >> CMIF_C2I_MU_C2I_MU_BIT_LSB)

#define CMIF_C2I_CNT30_RESERVED3_BIT_LSB                              (30)
#define CMIF_C2I_CNT30_RESERVED3_BIT_WIDTH                            (2)
#define CMIF_C2I_CNT30_RESERVED3_BIT_MASK                             ((UINT32) (((1<<CMIF_C2I_CNT30_RESERVED3_BIT_WIDTH)-1) << CMIF_C2I_CNT30_RESERVED3_BIT_LSB) )
#define CMIF_C2I_CNT30_RESERVED3_FLD_WR(reg, val)                     (reg |= (val) << CMIF_C2I_CNT30_RESERVED3_BIT_LSB)
#define CMIF_C2I_CNT30_RESERVED3_FLD_RD()                             ((M_CMIF_C2I_CNT30_RD() & CMIF_C2I_CNT30_RESERVED3_BIT_MASK) >> CMIF_C2I_CNT30_RESERVED3_BIT_LSB)

#define CMIF_C2I_CNT30_C2I_CNT3_BIT_LSB                               (24)
#define CMIF_C2I_CNT30_C2I_CNT3_BIT_WIDTH                             (6)
#define CMIF_C2I_CNT30_C2I_CNT3_BIT_MASK                              ((UINT32) (((1<<CMIF_C2I_CNT30_C2I_CNT3_BIT_WIDTH)-1) << CMIF_C2I_CNT30_C2I_CNT3_BIT_LSB) )
#define CMIF_C2I_CNT30_C2I_CNT3_FLD_WR(reg, val)                      (reg |= (val) << CMIF_C2I_CNT30_C2I_CNT3_BIT_LSB)
#define CMIF_C2I_CNT30_C2I_CNT3_FLD_RD()                              ((M_CMIF_C2I_CNT30_RD() & CMIF_C2I_CNT30_C2I_CNT3_BIT_MASK) >> CMIF_C2I_CNT30_C2I_CNT3_BIT_LSB)

#define CMIF_C2I_CNT30_RESERVED2_BIT_LSB                              (22)
#define CMIF_C2I_CNT30_RESERVED2_BIT_WIDTH                            (2)
#define CMIF_C2I_CNT30_RESERVED2_BIT_MASK                             ((UINT32) (((1<<CMIF_C2I_CNT30_RESERVED2_BIT_WIDTH)-1) << CMIF_C2I_CNT30_RESERVED2_BIT_LSB) )
#define CMIF_C2I_CNT30_RESERVED2_FLD_WR(reg, val)                     (reg |= (val) << CMIF_C2I_CNT30_RESERVED2_BIT_LSB)
#define CMIF_C2I_CNT30_RESERVED2_FLD_RD()                             ((M_CMIF_C2I_CNT30_RD() & CMIF_C2I_CNT30_RESERVED2_BIT_MASK) >> CMIF_C2I_CNT30_RESERVED2_BIT_LSB)

#define CMIF_C2I_CNT30_C2I_CNT2_BIT_LSB                               (16)
#define CMIF_C2I_CNT30_C2I_CNT2_BIT_WIDTH                             (6)
#define CMIF_C2I_CNT30_C2I_CNT2_BIT_MASK                              ((UINT32) (((1<<CMIF_C2I_CNT30_C2I_CNT2_BIT_WIDTH)-1) << CMIF_C2I_CNT30_C2I_CNT2_BIT_LSB) )
#define CMIF_C2I_CNT30_C2I_CNT2_FLD_WR(reg, val)                      (reg |= (val) << CMIF_C2I_CNT30_C2I_CNT2_BIT_LSB)
#define CMIF_C2I_CNT30_C2I_CNT2_FLD_RD()                              ((M_CMIF_C2I_CNT30_RD() & CMIF_C2I_CNT30_C2I_CNT2_BIT_MASK) >> CMIF_C2I_CNT30_C2I_CNT2_BIT_LSB)

#define CMIF_C2I_CNT30_RESERVED1_BIT_LSB                              (14)
#define CMIF_C2I_CNT30_RESERVED1_BIT_WIDTH                            (2)
#define CMIF_C2I_CNT30_RESERVED1_BIT_MASK                             ((UINT32) (((1<<CMIF_C2I_CNT30_RESERVED1_BIT_WIDTH)-1) << CMIF_C2I_CNT30_RESERVED1_BIT_LSB) )
#define CMIF_C2I_CNT30_RESERVED1_FLD_WR(reg, val)                     (reg |= (val) << CMIF_C2I_CNT30_RESERVED1_BIT_LSB)
#define CMIF_C2I_CNT30_RESERVED1_FLD_RD()                             ((M_CMIF_C2I_CNT30_RD() & CMIF_C2I_CNT30_RESERVED1_BIT_MASK) >> CMIF_C2I_CNT30_RESERVED1_BIT_LSB)

#define CMIF_C2I_CNT30_C2I_CNT1_BIT_LSB                               (8)
#define CMIF_C2I_CNT30_C2I_CNT1_BIT_WIDTH                             (6)
#define CMIF_C2I_CNT30_C2I_CNT1_BIT_MASK                              ((UINT32) (((1<<CMIF_C2I_CNT30_C2I_CNT1_BIT_WIDTH)-1) << CMIF_C2I_CNT30_C2I_CNT1_BIT_LSB) )
#define CMIF_C2I_CNT30_C2I_CNT1_FLD_WR(reg, val)                      (reg |= (val) << CMIF_C2I_CNT30_C2I_CNT1_BIT_LSB)
#define CMIF_C2I_CNT30_C2I_CNT1_FLD_RD()                              ((M_CMIF_C2I_CNT30_RD() & CMIF_C2I_CNT30_C2I_CNT1_BIT_MASK) >> CMIF_C2I_CNT30_C2I_CNT1_BIT_LSB)

#define CMIF_C2I_CNT30_RESERVED0_BIT_LSB                              (6)
#define CMIF_C2I_CNT30_RESERVED0_BIT_WIDTH                            (2)
#define CMIF_C2I_CNT30_RESERVED0_BIT_MASK                             ((UINT32) (((1<<CMIF_C2I_CNT30_RESERVED0_BIT_WIDTH)-1) << CMIF_C2I_CNT30_RESERVED0_BIT_LSB) )
#define CMIF_C2I_CNT30_RESERVED0_FLD_WR(reg, val)                     (reg |= (val) << CMIF_C2I_CNT30_RESERVED0_BIT_LSB)
#define CMIF_C2I_CNT30_RESERVED0_FLD_RD()                             ((M_CMIF_C2I_CNT30_RD() & CMIF_C2I_CNT30_RESERVED0_BIT_MASK) >> CMIF_C2I_CNT30_RESERVED0_BIT_LSB)

#define CMIF_C2I_CNT30_C2I_CNT0_BIT_LSB                               (0)
#define CMIF_C2I_CNT30_C2I_CNT0_BIT_WIDTH                             (6)
#define CMIF_C2I_CNT30_C2I_CNT0_BIT_MASK                              ((UINT32) (((1<<CMIF_C2I_CNT30_C2I_CNT0_BIT_WIDTH)-1) << CMIF_C2I_CNT30_C2I_CNT0_BIT_LSB) )
#define CMIF_C2I_CNT30_C2I_CNT0_FLD_WR(reg, val)                      (reg |= (val) << CMIF_C2I_CNT30_C2I_CNT0_BIT_LSB)
#define CMIF_C2I_CNT30_C2I_CNT0_FLD_RD()                              ((M_CMIF_C2I_CNT30_RD() & CMIF_C2I_CNT30_C2I_CNT0_BIT_MASK) >> CMIF_C2I_CNT30_C2I_CNT0_BIT_LSB)

#define CMIF_C2I_CNT45_RESERVED5_BIT_LSB                              (14)
#define CMIF_C2I_CNT45_RESERVED5_BIT_WIDTH                            (18)
#define CMIF_C2I_CNT45_RESERVED5_BIT_MASK                             ((UINT32) (((1<<CMIF_C2I_CNT45_RESERVED5_BIT_WIDTH)-1) << CMIF_C2I_CNT45_RESERVED5_BIT_LSB) )
#define CMIF_C2I_CNT45_RESERVED5_FLD_WR(reg, val)                     (reg |= (val) << CMIF_C2I_CNT45_RESERVED5_BIT_LSB)
#define CMIF_C2I_CNT45_RESERVED5_FLD_RD()                             ((M_CMIF_C2I_CNT45_RD() & CMIF_C2I_CNT45_RESERVED5_BIT_MASK) >> CMIF_C2I_CNT45_RESERVED5_BIT_LSB)

#define CMIF_C2I_CNT45_C2I_CNT5_BIT_LSB                               (8)
#define CMIF_C2I_CNT45_C2I_CNT5_BIT_WIDTH                             (6)
#define CMIF_C2I_CNT45_C2I_CNT5_BIT_MASK                              ((UINT32) (((1<<CMIF_C2I_CNT45_C2I_CNT5_BIT_WIDTH)-1) << CMIF_C2I_CNT45_C2I_CNT5_BIT_LSB) )
#define CMIF_C2I_CNT45_C2I_CNT5_FLD_WR(reg, val)                      (reg |= (val) << CMIF_C2I_CNT45_C2I_CNT5_BIT_LSB)
#define CMIF_C2I_CNT45_C2I_CNT5_FLD_RD()                              ((M_CMIF_C2I_CNT45_RD() & CMIF_C2I_CNT45_C2I_CNT5_BIT_MASK) >> CMIF_C2I_CNT45_C2I_CNT5_BIT_LSB)

#define CMIF_C2I_CNT45_RESERVED4_BIT_LSB                              (6)
#define CMIF_C2I_CNT45_RESERVED4_BIT_WIDTH                            (2)
#define CMIF_C2I_CNT45_RESERVED4_BIT_MASK                             ((UINT32) (((1<<CMIF_C2I_CNT45_RESERVED4_BIT_WIDTH)-1) << CMIF_C2I_CNT45_RESERVED4_BIT_LSB) )
#define CMIF_C2I_CNT45_RESERVED4_FLD_WR(reg, val)                     (reg |= (val) << CMIF_C2I_CNT45_RESERVED4_BIT_LSB)
#define CMIF_C2I_CNT45_RESERVED4_FLD_RD()                             ((M_CMIF_C2I_CNT45_RD() & CMIF_C2I_CNT45_RESERVED4_BIT_MASK) >> CMIF_C2I_CNT45_RESERVED4_BIT_LSB)

#define CMIF_C2I_CNT45_C2I_CNT4_BIT_LSB                               (0)
#define CMIF_C2I_CNT45_C2I_CNT4_BIT_WIDTH                             (6)
#define CMIF_C2I_CNT45_C2I_CNT4_BIT_MASK                              ((UINT32) (((1<<CMIF_C2I_CNT45_C2I_CNT4_BIT_WIDTH)-1) << CMIF_C2I_CNT45_C2I_CNT4_BIT_LSB) )
#define CMIF_C2I_CNT45_C2I_CNT4_FLD_WR(reg, val)                      (reg |= (val) << CMIF_C2I_CNT45_C2I_CNT4_BIT_LSB)
#define CMIF_C2I_CNT45_C2I_CNT4_FLD_RD()                              ((M_CMIF_C2I_CNT45_RD() & CMIF_C2I_CNT45_C2I_CNT4_BIT_MASK) >> CMIF_C2I_CNT45_C2I_CNT4_BIT_LSB)

#define CMIF_C2I_LOG0Y_C2I_LOG0Y_BIT_LSB                              (0)
#define CMIF_C2I_LOG0Y_C2I_LOG0Y_BIT_WIDTH                            (16)
#define CMIF_C2I_LOG0Y_C2I_LOG0Y_BIT_MASK                             ((UINT32) (((1<<CMIF_C2I_LOG0Y_C2I_LOG0Y_BIT_WIDTH)-1) << CMIF_C2I_LOG0Y_C2I_LOG0Y_BIT_LSB) )
#define CMIF_C2I_LOG0Y_C2I_LOG0Y_FLD_WR(reg, val)                     (reg |= (val) << CMIF_C2I_LOG0Y_C2I_LOG0Y_BIT_LSB)
#define CMIF_C2I_LOG0Y_C2I_LOG0Y_FLD_RD(i)                            ((M_CMIF_C2I_LOG0Y_RD(i) & CMIF_C2I_LOG0Y_C2I_LOG0Y_BIT_MASK) >> CMIF_C2I_LOG0Y_C2I_LOG0Y_BIT_LSB)

#define CMIF_C2I_LOG1Y_C2I_LOG1Y_BIT_LSB                              (0)
#define CMIF_C2I_LOG1Y_C2I_LOG1Y_BIT_WIDTH                            (16)
#define CMIF_C2I_LOG1Y_C2I_LOG1Y_BIT_MASK                             ((UINT32) (((1<<CMIF_C2I_LOG1Y_C2I_LOG1Y_BIT_WIDTH)-1) << CMIF_C2I_LOG1Y_C2I_LOG1Y_BIT_LSB) )
#define CMIF_C2I_LOG1Y_C2I_LOG1Y_FLD_WR(reg, val)                     (reg |= (val) << CMIF_C2I_LOG1Y_C2I_LOG1Y_BIT_LSB)
#define CMIF_C2I_LOG1Y_C2I_LOG1Y_FLD_RD(i)                            ((M_CMIF_C2I_LOG1Y_RD(i) & CMIF_C2I_LOG1Y_C2I_LOG1Y_BIT_MASK) >> CMIF_C2I_LOG1Y_C2I_LOG1Y_BIT_LSB)

#endif /* __SNR_CMIF_H__ */
