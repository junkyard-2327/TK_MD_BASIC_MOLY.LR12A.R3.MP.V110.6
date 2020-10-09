#ifndef __FOE_CMIF_H__
#define __FOE_CMIF_H__

#include "reg_access.h"
#include "base_addr_cmif.h"

#define CMIF_FOE_REG_BASE                                             (CMIF_RAKE_FOE_OFFSET)
#define CMIF_FOE_CFG                                                  (CMIF_FOE_REG_BASE + 0x0000)
#define CMIF_FOE_C0_MNTR1                                             (CMIF_FOE_REG_BASE + 0x0004)
#define CMIF_FOE_C0_MNTR2                                             (CMIF_FOE_REG_BASE + 0x0008)
#define CMIF_FOE_SIM2_C0_MNTR1                                        (CMIF_FOE_REG_BASE + 0x000C)
#define CMIF_FOE_SIM2_C0_MNTR2                                        (CMIF_FOE_REG_BASE + 0x0010)

#define M_CMIF_FOE_CFG_RD()                                           REG_READ(CMIF_FOE_CFG)
#define M_CMIF_FOE_C0_MNTR1_RD()                                      REG_READ(CMIF_FOE_C0_MNTR1)
#define M_CMIF_FOE_C0_MNTR2_RD()                                      REG_READ(CMIF_FOE_C0_MNTR2)
#define M_CMIF_FOE_SIM2_C0_MNTR1_RD()                                 REG_READ(CMIF_FOE_SIM2_C0_MNTR1)
#define M_CMIF_FOE_SIM2_C0_MNTR2_RD()                                 REG_READ(CMIF_FOE_SIM2_C0_MNTR2)

#define M_CMIF_FOE_CFG_WR(reg)                                        REG_WRITE(CMIF_FOE_CFG, reg)
#define M_CMIF_FOE_C0_MNTR1_WR(reg)                                   REG_WRITE(CMIF_FOE_C0_MNTR1, reg)
#define M_CMIF_FOE_C0_MNTR2_WR(reg)                                   REG_WRITE(CMIF_FOE_C0_MNTR2, reg)
#define M_CMIF_FOE_SIM2_C0_MNTR1_WR(reg)                              REG_WRITE(CMIF_FOE_SIM2_C0_MNTR1, reg)
#define M_CMIF_FOE_SIM2_C0_MNTR2_WR(reg)                              REG_WRITE(CMIF_FOE_SIM2_C0_MNTR2, reg)

#define CMIF_FOE_CFG_RST_BIT_LSB                                      (0)
#define CMIF_FOE_CFG_RST_BIT_WIDTH                                    (8)
#define CMIF_FOE_CFG_RST_BIT_MASK                                     ((UINT32) (((1<<CMIF_FOE_CFG_RST_BIT_WIDTH)-1) << CMIF_FOE_CFG_RST_BIT_LSB) )
#define CMIF_FOE_CFG_RST_FLD_WR(reg, val)                             (reg |= (val) << CMIF_FOE_CFG_RST_BIT_LSB)
#define CMIF_FOE_CFG_RST_FLD_RD()                                     ((M_CMIF_FOE_CFG_RD() & CMIF_FOE_CFG_RST_BIT_MASK) >> CMIF_FOE_CFG_RST_BIT_LSB)

#define CMIF_FOE_C0_MNTR1_FILT_FO_BIT_LSB                             (16)
#define CMIF_FOE_C0_MNTR1_FILT_FO_BIT_WIDTH                           (16)
#define CMIF_FOE_C0_MNTR1_FILT_FO_BIT_MASK                            ((UINT32) (((1<<CMIF_FOE_C0_MNTR1_FILT_FO_BIT_WIDTH)-1) << CMIF_FOE_C0_MNTR1_FILT_FO_BIT_LSB) )
#define CMIF_FOE_C0_MNTR1_FILT_FO_FLD_WR(reg, val)                    (reg |= (val) << CMIF_FOE_C0_MNTR1_FILT_FO_BIT_LSB)
#define CMIF_FOE_C0_MNTR1_FILT_FO_FLD_RD()                            ((M_CMIF_FOE_C0_MNTR1_RD() & CMIF_FOE_C0_MNTR1_FILT_FO_BIT_MASK) >> CMIF_FOE_C0_MNTR1_FILT_FO_BIT_LSB)

#define CMIF_FOE_C0_MNTR1_EST_FO_BIT_LSB                              (0)
#define CMIF_FOE_C0_MNTR1_EST_FO_BIT_WIDTH                            (16)
#define CMIF_FOE_C0_MNTR1_EST_FO_BIT_MASK                             ((UINT32) (((1<<CMIF_FOE_C0_MNTR1_EST_FO_BIT_WIDTH)-1) << CMIF_FOE_C0_MNTR1_EST_FO_BIT_LSB) )
#define CMIF_FOE_C0_MNTR1_EST_FO_FLD_WR(reg, val)                     (reg |= (val) << CMIF_FOE_C0_MNTR1_EST_FO_BIT_LSB)
#define CMIF_FOE_C0_MNTR1_EST_FO_FLD_RD()                             ((M_CMIF_FOE_C0_MNTR1_RD() & CMIF_FOE_C0_MNTR1_EST_FO_BIT_MASK) >> CMIF_FOE_C0_MNTR1_EST_FO_BIT_LSB)

#define CMIF_FOE_C0_MNTR2_EST_TRK_FO_BIT_LSB                          (16)
#define CMIF_FOE_C0_MNTR2_EST_TRK_FO_BIT_WIDTH                        (16)
#define CMIF_FOE_C0_MNTR2_EST_TRK_FO_BIT_MASK                         ((UINT32) (((1<<CMIF_FOE_C0_MNTR2_EST_TRK_FO_BIT_WIDTH)-1) << CMIF_FOE_C0_MNTR2_EST_TRK_FO_BIT_LSB) )
#define CMIF_FOE_C0_MNTR2_EST_TRK_FO_FLD_WR(reg, val)                 (reg |= (val) << CMIF_FOE_C0_MNTR2_EST_TRK_FO_BIT_LSB)
#define CMIF_FOE_C0_MNTR2_EST_TRK_FO_FLD_RD()                         ((M_CMIF_FOE_C0_MNTR2_RD() & CMIF_FOE_C0_MNTR2_EST_TRK_FO_BIT_MASK) >> CMIF_FOE_C0_MNTR2_EST_TRK_FO_BIT_LSB)

#define CMIF_FOE_C0_MNTR2_EST_ACQ_FO_BIT_LSB                          (0)
#define CMIF_FOE_C0_MNTR2_EST_ACQ_FO_BIT_WIDTH                        (16)
#define CMIF_FOE_C0_MNTR2_EST_ACQ_FO_BIT_MASK                         ((UINT32) (((1<<CMIF_FOE_C0_MNTR2_EST_ACQ_FO_BIT_WIDTH)-1) << CMIF_FOE_C0_MNTR2_EST_ACQ_FO_BIT_LSB) )
#define CMIF_FOE_C0_MNTR2_EST_ACQ_FO_FLD_WR(reg, val)                 (reg |= (val) << CMIF_FOE_C0_MNTR2_EST_ACQ_FO_BIT_LSB)
#define CMIF_FOE_C0_MNTR2_EST_ACQ_FO_FLD_RD()                         ((M_CMIF_FOE_C0_MNTR2_RD() & CMIF_FOE_C0_MNTR2_EST_ACQ_FO_BIT_MASK) >> CMIF_FOE_C0_MNTR2_EST_ACQ_FO_BIT_LSB)

#define CMIF_FOE_SIM2_C0_MNTR1_FILT_FO_BIT_LSB                        (16)
#define CMIF_FOE_SIM2_C0_MNTR1_FILT_FO_BIT_WIDTH                      (16)
#define CMIF_FOE_SIM2_C0_MNTR1_FILT_FO_BIT_MASK                       ((UINT32) (((1<<CMIF_FOE_SIM2_C0_MNTR1_FILT_FO_BIT_WIDTH)-1) << CMIF_FOE_SIM2_C0_MNTR1_FILT_FO_BIT_LSB) )
#define CMIF_FOE_SIM2_C0_MNTR1_FILT_FO_FLD_WR(reg, val)               (reg |= (val) << CMIF_FOE_SIM2_C0_MNTR1_FILT_FO_BIT_LSB)
#define CMIF_FOE_SIM2_C0_MNTR1_FILT_FO_FLD_RD()                       ((M_CMIF_FOE_SIM2_C0_MNTR1_RD() & CMIF_FOE_SIM2_C0_MNTR1_FILT_FO_BIT_MASK) >> CMIF_FOE_SIM2_C0_MNTR1_FILT_FO_BIT_LSB)

#define CMIF_FOE_SIM2_C0_MNTR1_EST_FO_BIT_LSB                         (0)
#define CMIF_FOE_SIM2_C0_MNTR1_EST_FO_BIT_WIDTH                       (16)
#define CMIF_FOE_SIM2_C0_MNTR1_EST_FO_BIT_MASK                        ((UINT32) (((1<<CMIF_FOE_SIM2_C0_MNTR1_EST_FO_BIT_WIDTH)-1) << CMIF_FOE_SIM2_C0_MNTR1_EST_FO_BIT_LSB) )
#define CMIF_FOE_SIM2_C0_MNTR1_EST_FO_FLD_WR(reg, val)                (reg |= (val) << CMIF_FOE_SIM2_C0_MNTR1_EST_FO_BIT_LSB)
#define CMIF_FOE_SIM2_C0_MNTR1_EST_FO_FLD_RD()                        ((M_CMIF_FOE_SIM2_C0_MNTR1_RD() & CMIF_FOE_SIM2_C0_MNTR1_EST_FO_BIT_MASK) >> CMIF_FOE_SIM2_C0_MNTR1_EST_FO_BIT_LSB)

#define CMIF_FOE_SIM2_C0_MNTR2_EST_TRK_FO_BIT_LSB                     (16)
#define CMIF_FOE_SIM2_C0_MNTR2_EST_TRK_FO_BIT_WIDTH                   (16)
#define CMIF_FOE_SIM2_C0_MNTR2_EST_TRK_FO_BIT_MASK                    ((UINT32) (((1<<CMIF_FOE_SIM2_C0_MNTR2_EST_TRK_FO_BIT_WIDTH)-1) << CMIF_FOE_SIM2_C0_MNTR2_EST_TRK_FO_BIT_LSB) )
#define CMIF_FOE_SIM2_C0_MNTR2_EST_TRK_FO_FLD_WR(reg, val)            (reg |= (val) << CMIF_FOE_SIM2_C0_MNTR2_EST_TRK_FO_BIT_LSB)
#define CMIF_FOE_SIM2_C0_MNTR2_EST_TRK_FO_FLD_RD()                    ((M_CMIF_FOE_SIM2_C0_MNTR2_RD() & CMIF_FOE_SIM2_C0_MNTR2_EST_TRK_FO_BIT_MASK) >> CMIF_FOE_SIM2_C0_MNTR2_EST_TRK_FO_BIT_LSB)

#define CMIF_FOE_SIM2_C0_MNTR2_EST_ACQ_FO_BIT_LSB                     (0)
#define CMIF_FOE_SIM2_C0_MNTR2_EST_ACQ_FO_BIT_WIDTH                   (16)
#define CMIF_FOE_SIM2_C0_MNTR2_EST_ACQ_FO_BIT_MASK                    ((UINT32) (((1<<CMIF_FOE_SIM2_C0_MNTR2_EST_ACQ_FO_BIT_WIDTH)-1) << CMIF_FOE_SIM2_C0_MNTR2_EST_ACQ_FO_BIT_LSB) )
#define CMIF_FOE_SIM2_C0_MNTR2_EST_ACQ_FO_FLD_WR(reg, val)            (reg |= (val) << CMIF_FOE_SIM2_C0_MNTR2_EST_ACQ_FO_BIT_LSB)
#define CMIF_FOE_SIM2_C0_MNTR2_EST_ACQ_FO_FLD_RD()                    ((M_CMIF_FOE_SIM2_C0_MNTR2_RD() & CMIF_FOE_SIM2_C0_MNTR2_EST_ACQ_FO_BIT_MASK) >> CMIF_FOE_SIM2_C0_MNTR2_EST_ACQ_FO_BIT_LSB)

#endif /* __FOE_CMIF_H__ */
