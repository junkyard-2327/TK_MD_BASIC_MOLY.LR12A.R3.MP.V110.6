#ifndef __BRP_REQD_CMIF_H__
#define __BRP_REQD_CMIF_H__

#include "reg_access.h"
#include "base_addr_cmif.h"

#define CMIF_BRP_REQD_REG_BASE                                        (CMIF_RAKE_BRP_REQD)
#define CMIF_INDEC_SYM_SUM_CH0(i)                                     (CMIF_BRP_REQD_REG_BASE + 0x0000 + ((i) * 0x4))
#define CMIF_INDEC_SYM_NUM_CH0(i)                                     (CMIF_BRP_REQD_REG_BASE + 0x000C + ((i) * 0x4))
#define CMIF_PING_PONG_IDX_CH0(i)                                     (CMIF_BRP_REQD_REG_BASE + 0x0018 + ((i) * 0x4))
#define CMIF_INDEC_SYM_SUM_CH1(i)                                     (CMIF_BRP_REQD_REG_BASE + 0x0024 + ((i) * 0x4))
#define CMIF_INDEC_SYM_NUM_CH1(i)                                     (CMIF_BRP_REQD_REG_BASE + 0x0030 + ((i) * 0x4))
#define CMIF_PING_PONG_IDX_CH1(i)                                     (CMIF_BRP_REQD_REG_BASE + 0x003C + ((i) * 0x4))
#define CMIF_INDEC_SYM_SUM_CH2(i)                                     (CMIF_BRP_REQD_REG_BASE + 0x0048 + ((i) * 0x4))
#define CMIF_INDEC_SYM_NUM_CH2(i)                                     (CMIF_BRP_REQD_REG_BASE + 0x0054 + ((i) * 0x4))
#define CMIF_PING_PONG_IDX_CH2(i)                                     (CMIF_BRP_REQD_REG_BASE + 0x0060 + ((i) * 0x4))

#define M_CMIF_INDEC_SYM_SUM_CH0_RD(i)                                REG_READ(CMIF_INDEC_SYM_SUM_CH0(i))
#define M_CMIF_INDEC_SYM_NUM_CH0_RD(i)                                REG_READ(CMIF_INDEC_SYM_NUM_CH0(i))
#define M_CMIF_PING_PONG_IDX_CH0_RD(i)                                REG_READ(CMIF_PING_PONG_IDX_CH0(i))
#define M_CMIF_INDEC_SYM_SUM_CH1_RD(i)                                REG_READ(CMIF_INDEC_SYM_SUM_CH1(i))
#define M_CMIF_INDEC_SYM_NUM_CH1_RD(i)                                REG_READ(CMIF_INDEC_SYM_NUM_CH1(i))
#define M_CMIF_PING_PONG_IDX_CH1_RD(i)                                REG_READ(CMIF_PING_PONG_IDX_CH1(i))
#define M_CMIF_INDEC_SYM_SUM_CH2_RD(i)                                REG_READ(CMIF_INDEC_SYM_SUM_CH2(i))
#define M_CMIF_INDEC_SYM_NUM_CH2_RD(i)                                REG_READ(CMIF_INDEC_SYM_NUM_CH2(i))
#define M_CMIF_PING_PONG_IDX_CH2_RD(i)                                REG_READ(CMIF_PING_PONG_IDX_CH2(i))

#define M_CMIF_INDEC_SYM_SUM_CH0_WR(i, reg)                           REG_WRITE(CMIF_INDEC_SYM_SUM_CH0(i), reg)
#define M_CMIF_INDEC_SYM_NUM_CH0_WR(i, reg)                           REG_WRITE(CMIF_INDEC_SYM_NUM_CH0(i), reg)
#define M_CMIF_PING_PONG_IDX_CH0_WR(i, reg)                           REG_WRITE(CMIF_PING_PONG_IDX_CH0(i), reg)
#define M_CMIF_INDEC_SYM_SUM_CH1_WR(i, reg)                           REG_WRITE(CMIF_INDEC_SYM_SUM_CH1(i), reg)
#define M_CMIF_INDEC_SYM_NUM_CH1_WR(i, reg)                           REG_WRITE(CMIF_INDEC_SYM_NUM_CH1(i), reg)
#define M_CMIF_PING_PONG_IDX_CH1_WR(i, reg)                           REG_WRITE(CMIF_PING_PONG_IDX_CH1(i), reg)
#define M_CMIF_INDEC_SYM_SUM_CH2_WR(i, reg)                           REG_WRITE(CMIF_INDEC_SYM_SUM_CH2(i), reg)
#define M_CMIF_INDEC_SYM_NUM_CH2_WR(i, reg)                           REG_WRITE(CMIF_INDEC_SYM_NUM_CH2(i), reg)
#define M_CMIF_PING_PONG_IDX_CH2_WR(i, reg)                           REG_WRITE(CMIF_PING_PONG_IDX_CH2(i), reg)

#define CMIF_INDEC_SYM_SUM_CH0_SYM_SUM_BIT_LSB                        (0)
#define CMIF_INDEC_SYM_SUM_CH0_SYM_SUM_BIT_WIDTH                      (32)
#define CMIF_INDEC_SYM_SUM_CH0_SYM_SUM_BIT_MASK                       ((UINT32) (((1<<CMIF_INDEC_SYM_SUM_CH0_SYM_SUM_BIT_WIDTH)-1) << CMIF_INDEC_SYM_SUM_CH0_SYM_SUM_BIT_LSB) )
#define CMIF_INDEC_SYM_SUM_CH0_SYM_SUM_FLD_WR(reg, val)               (reg |= (val) << CMIF_INDEC_SYM_SUM_CH0_SYM_SUM_BIT_LSB)
#define CMIF_INDEC_SYM_SUM_CH0_SYM_SUM_FLD_RD(i)                      ((M_CMIF_INDEC_SYM_SUM_CH0_RD(i) & CMIF_INDEC_SYM_SUM_CH0_SYM_SUM_BIT_MASK) >> CMIF_INDEC_SYM_SUM_CH0_SYM_SUM_BIT_LSB)

#define CMIF_INDEC_SYM_NUM_CH0_SYM_NUM_BIT_LSB                        (0)
#define CMIF_INDEC_SYM_NUM_CH0_SYM_NUM_BIT_WIDTH                      (32)
#define CMIF_INDEC_SYM_NUM_CH0_SYM_NUM_BIT_MASK                       ((UINT32) (((1<<CMIF_INDEC_SYM_NUM_CH0_SYM_NUM_BIT_WIDTH)-1) << CMIF_INDEC_SYM_NUM_CH0_SYM_NUM_BIT_LSB) )
#define CMIF_INDEC_SYM_NUM_CH0_SYM_NUM_FLD_WR(reg, val)               (reg |= (val) << CMIF_INDEC_SYM_NUM_CH0_SYM_NUM_BIT_LSB)
#define CMIF_INDEC_SYM_NUM_CH0_SYM_NUM_FLD_RD(i)                      ((M_CMIF_INDEC_SYM_NUM_CH0_RD(i) & CMIF_INDEC_SYM_NUM_CH0_SYM_NUM_BIT_MASK) >> CMIF_INDEC_SYM_NUM_CH0_SYM_NUM_BIT_LSB)

#define CMIF_PING_PONG_IDX_CH0_PING_PONG_IDX_BIT_LSB                  (0)
#define CMIF_PING_PONG_IDX_CH0_PING_PONG_IDX_BIT_WIDTH                (32)
#define CMIF_PING_PONG_IDX_CH0_PING_PONG_IDX_BIT_MASK                 ((UINT32) (((1<<CMIF_PING_PONG_IDX_CH0_PING_PONG_IDX_BIT_WIDTH)-1) << CMIF_PING_PONG_IDX_CH0_PING_PONG_IDX_BIT_LSB) )
#define CMIF_PING_PONG_IDX_CH0_PING_PONG_IDX_FLD_WR(reg, val)         (reg |= (val) << CMIF_PING_PONG_IDX_CH0_PING_PONG_IDX_BIT_LSB)
#define CMIF_PING_PONG_IDX_CH0_PING_PONG_IDX_FLD_RD(i)                ((M_CMIF_PING_PONG_IDX_CH0_RD(i) & CMIF_PING_PONG_IDX_CH0_PING_PONG_IDX_BIT_MASK) >> CMIF_PING_PONG_IDX_CH0_PING_PONG_IDX_BIT_LSB)

#define CMIF_INDEC_SYM_SUM_CH1_SYM_SUM_BIT_LSB                        (0)
#define CMIF_INDEC_SYM_SUM_CH1_SYM_SUM_BIT_WIDTH                      (32)
#define CMIF_INDEC_SYM_SUM_CH1_SYM_SUM_BIT_MASK                       ((UINT32) (((1<<CMIF_INDEC_SYM_SUM_CH1_SYM_SUM_BIT_WIDTH)-1) << CMIF_INDEC_SYM_SUM_CH1_SYM_SUM_BIT_LSB) )
#define CMIF_INDEC_SYM_SUM_CH1_SYM_SUM_FLD_WR(reg, val)               (reg |= (val) << CMIF_INDEC_SYM_SUM_CH1_SYM_SUM_BIT_LSB)
#define CMIF_INDEC_SYM_SUM_CH1_SYM_SUM_FLD_RD(i)                      ((M_CMIF_INDEC_SYM_SUM_CH1_RD(i) & CMIF_INDEC_SYM_SUM_CH1_SYM_SUM_BIT_MASK) >> CMIF_INDEC_SYM_SUM_CH1_SYM_SUM_BIT_LSB)

#define CMIF_INDEC_SYM_NUM_CH1_SYM_NUM_BIT_LSB                        (0)
#define CMIF_INDEC_SYM_NUM_CH1_SYM_NUM_BIT_WIDTH                      (32)
#define CMIF_INDEC_SYM_NUM_CH1_SYM_NUM_BIT_MASK                       ((UINT32) (((1<<CMIF_INDEC_SYM_NUM_CH1_SYM_NUM_BIT_WIDTH)-1) << CMIF_INDEC_SYM_NUM_CH1_SYM_NUM_BIT_LSB) )
#define CMIF_INDEC_SYM_NUM_CH1_SYM_NUM_FLD_WR(reg, val)               (reg |= (val) << CMIF_INDEC_SYM_NUM_CH1_SYM_NUM_BIT_LSB)
#define CMIF_INDEC_SYM_NUM_CH1_SYM_NUM_FLD_RD(i)                      ((M_CMIF_INDEC_SYM_NUM_CH1_RD(i) & CMIF_INDEC_SYM_NUM_CH1_SYM_NUM_BIT_MASK) >> CMIF_INDEC_SYM_NUM_CH1_SYM_NUM_BIT_LSB)

#define CMIF_PING_PONG_IDX_CH1_PING_PONG_IDX_BIT_LSB                  (0)
#define CMIF_PING_PONG_IDX_CH1_PING_PONG_IDX_BIT_WIDTH                (32)
#define CMIF_PING_PONG_IDX_CH1_PING_PONG_IDX_BIT_MASK                 ((UINT32) (((1<<CMIF_PING_PONG_IDX_CH1_PING_PONG_IDX_BIT_WIDTH)-1) << CMIF_PING_PONG_IDX_CH1_PING_PONG_IDX_BIT_LSB) )
#define CMIF_PING_PONG_IDX_CH1_PING_PONG_IDX_FLD_WR(reg, val)         (reg |= (val) << CMIF_PING_PONG_IDX_CH1_PING_PONG_IDX_BIT_LSB)
#define CMIF_PING_PONG_IDX_CH1_PING_PONG_IDX_FLD_RD(i)                ((M_CMIF_PING_PONG_IDX_CH1_RD(i) & CMIF_PING_PONG_IDX_CH1_PING_PONG_IDX_BIT_MASK) >> CMIF_PING_PONG_IDX_CH1_PING_PONG_IDX_BIT_LSB)

#define CMIF_INDEC_SYM_SUM_CH2_SYM_SUM_BIT_LSB                        (0)
#define CMIF_INDEC_SYM_SUM_CH2_SYM_SUM_BIT_WIDTH                      (32)
#define CMIF_INDEC_SYM_SUM_CH2_SYM_SUM_BIT_MASK                       ((UINT32) (((1<<CMIF_INDEC_SYM_SUM_CH2_SYM_SUM_BIT_WIDTH)-1) << CMIF_INDEC_SYM_SUM_CH2_SYM_SUM_BIT_LSB) )
#define CMIF_INDEC_SYM_SUM_CH2_SYM_SUM_FLD_WR(reg, val)               (reg |= (val) << CMIF_INDEC_SYM_SUM_CH2_SYM_SUM_BIT_LSB)
#define CMIF_INDEC_SYM_SUM_CH2_SYM_SUM_FLD_RD(i)                      ((M_CMIF_INDEC_SYM_SUM_CH2_RD(i) & CMIF_INDEC_SYM_SUM_CH2_SYM_SUM_BIT_MASK) >> CMIF_INDEC_SYM_SUM_CH2_SYM_SUM_BIT_LSB)

#define CMIF_INDEC_SYM_NUM_CH2_SYM_NUM_BIT_LSB                        (0)
#define CMIF_INDEC_SYM_NUM_CH2_SYM_NUM_BIT_WIDTH                      (32)
#define CMIF_INDEC_SYM_NUM_CH2_SYM_NUM_BIT_MASK                       ((UINT32) (((1<<CMIF_INDEC_SYM_NUM_CH2_SYM_NUM_BIT_WIDTH)-1) << CMIF_INDEC_SYM_NUM_CH2_SYM_NUM_BIT_LSB) )
#define CMIF_INDEC_SYM_NUM_CH2_SYM_NUM_FLD_WR(reg, val)               (reg |= (val) << CMIF_INDEC_SYM_NUM_CH2_SYM_NUM_BIT_LSB)
#define CMIF_INDEC_SYM_NUM_CH2_SYM_NUM_FLD_RD(i)                      ((M_CMIF_INDEC_SYM_NUM_CH2_RD(i) & CMIF_INDEC_SYM_NUM_CH2_SYM_NUM_BIT_MASK) >> CMIF_INDEC_SYM_NUM_CH2_SYM_NUM_BIT_LSB)

#define CMIF_PING_PONG_IDX_CH2_PING_PONG_IDX_BIT_LSB                  (0)
#define CMIF_PING_PONG_IDX_CH2_PING_PONG_IDX_BIT_WIDTH                (32)
#define CMIF_PING_PONG_IDX_CH2_PING_PONG_IDX_BIT_MASK                 ((UINT32) (((1<<CMIF_PING_PONG_IDX_CH2_PING_PONG_IDX_BIT_WIDTH)-1) << CMIF_PING_PONG_IDX_CH2_PING_PONG_IDX_BIT_LSB) )
#define CMIF_PING_PONG_IDX_CH2_PING_PONG_IDX_FLD_WR(reg, val)         (reg |= (val) << CMIF_PING_PONG_IDX_CH2_PING_PONG_IDX_BIT_LSB)
#define CMIF_PING_PONG_IDX_CH2_PING_PONG_IDX_FLD_RD(i)                ((M_CMIF_PING_PONG_IDX_CH2_RD(i) & CMIF_PING_PONG_IDX_CH2_PING_PONG_IDX_BIT_MASK) >> CMIF_PING_PONG_IDX_CH2_PING_PONG_IDX_BIT_LSB)

#endif /* __BRP_REQD_CMIF_H__ */
