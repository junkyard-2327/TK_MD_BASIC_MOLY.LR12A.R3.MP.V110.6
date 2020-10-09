#ifndef __OC_CMIF_H__
#define __OC_CMIF_H__

#include "reg_access.h"
#include "base_addr_cmif.h"

#define CMIF_OC_REG_BASE                                              (CMIF_RAKE_OC_OFFSET)
#define CMIF_OC_CON                                                   (CMIF_OC_REG_BASE + 0x0000)
#define CMIF_OC_DIS                                                   (CMIF_OC_REG_BASE + 0x0004)
#define CMIF_OC_MODE_SEL                                              (CMIF_OC_REG_BASE + 0x0008)
#define CMIF_OC_GSR_ADDR                                              (CMIF_OC_REG_BASE + 0x000C)
#define CMIF_OC_CELL_CHG                                              (CMIF_OC_REG_BASE + 0x0010)

#define M_CMIF_OC_CON_RD()                                            REG_READ(CMIF_OC_CON)
#define M_CMIF_OC_DIS_RD()                                            REG_READ(CMIF_OC_DIS)
#define M_CMIF_OC_MODE_SEL_RD()                                       REG_READ(CMIF_OC_MODE_SEL)
#define M_CMIF_OC_GSR_ADDR_RD()                                       REG_READ(CMIF_OC_GSR_ADDR)
#define M_CMIF_OC_CELL_CHG_RD()                                       REG_READ(CMIF_OC_CELL_CHG)

#define M_CMIF_OC_CON_WR(reg)                                         REG_WRITE(CMIF_OC_CON, reg)
#define M_CMIF_OC_DIS_WR(reg)                                         REG_WRITE(CMIF_OC_DIS, reg)
#define M_CMIF_OC_MODE_SEL_WR(reg)                                    REG_WRITE(CMIF_OC_MODE_SEL, reg)
#define M_CMIF_OC_GSR_ADDR_WR(reg)                                    REG_WRITE(CMIF_OC_GSR_ADDR, reg)
#define M_CMIF_OC_CELL_CHG_WR(reg)                                    REG_WRITE(CMIF_OC_CELL_CHG, reg)

#define CMIF_OC_CON_OC_RESULT_EN_BIT_LSB                              (8)
#define CMIF_OC_CON_OC_RESULT_EN_BIT_WIDTH                            (8)
#define CMIF_OC_CON_OC_RESULT_EN_BIT_MASK                             ((UINT32) (((1<<CMIF_OC_CON_OC_RESULT_EN_BIT_WIDTH)-1) << CMIF_OC_CON_OC_RESULT_EN_BIT_LSB) )
#define CMIF_OC_CON_OC_RESULT_EN_FLD_WR(reg, val)                     (reg |= (val) << CMIF_OC_CON_OC_RESULT_EN_BIT_LSB)
#define CMIF_OC_CON_OC_RESULT_EN_FLD_RD()                             ((M_CMIF_OC_CON_RD() & CMIF_OC_CON_OC_RESULT_EN_BIT_MASK) >> CMIF_OC_CON_OC_RESULT_EN_BIT_LSB)

#define CMIF_OC_CON_OC_EN_BIT_LSB                                     (0)
#define CMIF_OC_CON_OC_EN_BIT_WIDTH                                   (8)
#define CMIF_OC_CON_OC_EN_BIT_MASK                                    ((UINT32) (((1<<CMIF_OC_CON_OC_EN_BIT_WIDTH)-1) << CMIF_OC_CON_OC_EN_BIT_LSB) )
#define CMIF_OC_CON_OC_EN_FLD_WR(reg, val)                            (reg |= (val) << CMIF_OC_CON_OC_EN_BIT_LSB)
#define CMIF_OC_CON_OC_EN_FLD_RD()                                    ((M_CMIF_OC_CON_RD() & CMIF_OC_CON_OC_EN_BIT_MASK) >> CMIF_OC_CON_OC_EN_BIT_LSB)

#define CMIF_OC_DIS_OC_DIS_EN_BIT_LSB                                 (24)
#define CMIF_OC_DIS_OC_DIS_EN_BIT_WIDTH                               (8)
#define CMIF_OC_DIS_OC_DIS_EN_BIT_MASK                                ((UINT32) (((1<<CMIF_OC_DIS_OC_DIS_EN_BIT_WIDTH)-1) << CMIF_OC_DIS_OC_DIS_EN_BIT_LSB) )
#define CMIF_OC_DIS_OC_DIS_EN_FLD_WR(reg, val)                        (reg |= (val) << CMIF_OC_DIS_OC_DIS_EN_BIT_LSB)
#define CMIF_OC_DIS_OC_DIS_EN_FLD_RD()                                ((M_CMIF_OC_DIS_RD() & CMIF_OC_DIS_OC_DIS_EN_BIT_MASK) >> CMIF_OC_DIS_OC_DIS_EN_BIT_LSB)

#define CMIF_OC_DIS_OC_DIS_SLOT_IDX_BIT_LSB                           (16)
#define CMIF_OC_DIS_OC_DIS_SLOT_IDX_BIT_WIDTH                         (8)
#define CMIF_OC_DIS_OC_DIS_SLOT_IDX_BIT_MASK                          ((UINT32) (((1<<CMIF_OC_DIS_OC_DIS_SLOT_IDX_BIT_WIDTH)-1) << CMIF_OC_DIS_OC_DIS_SLOT_IDX_BIT_LSB) )
#define CMIF_OC_DIS_OC_DIS_SLOT_IDX_FLD_WR(reg, val)                  (reg |= (val) << CMIF_OC_DIS_OC_DIS_SLOT_IDX_BIT_LSB)
#define CMIF_OC_DIS_OC_DIS_SLOT_IDX_FLD_RD()                          ((M_CMIF_OC_DIS_RD() & CMIF_OC_DIS_OC_DIS_SLOT_IDX_BIT_MASK) >> CMIF_OC_DIS_OC_DIS_SLOT_IDX_BIT_LSB)

#define CMIF_OC_DIS_OC_DIS_SYM_IDX_BIT_LSB                            (8)
#define CMIF_OC_DIS_OC_DIS_SYM_IDX_BIT_WIDTH                          (8)
#define CMIF_OC_DIS_OC_DIS_SYM_IDX_BIT_MASK                           ((UINT32) (((1<<CMIF_OC_DIS_OC_DIS_SYM_IDX_BIT_WIDTH)-1) << CMIF_OC_DIS_OC_DIS_SYM_IDX_BIT_LSB) )
#define CMIF_OC_DIS_OC_DIS_SYM_IDX_FLD_WR(reg, val)                   (reg |= (val) << CMIF_OC_DIS_OC_DIS_SYM_IDX_BIT_LSB)
#define CMIF_OC_DIS_OC_DIS_SYM_IDX_FLD_RD()                           ((M_CMIF_OC_DIS_RD() & CMIF_OC_DIS_OC_DIS_SYM_IDX_BIT_MASK) >> CMIF_OC_DIS_OC_DIS_SYM_IDX_BIT_LSB)

#define CMIF_OC_DIS_OC_DIS_LENGTH_BIT_LSB                             (0)
#define CMIF_OC_DIS_OC_DIS_LENGTH_BIT_WIDTH                           (8)
#define CMIF_OC_DIS_OC_DIS_LENGTH_BIT_MASK                            ((UINT32) (((1<<CMIF_OC_DIS_OC_DIS_LENGTH_BIT_WIDTH)-1) << CMIF_OC_DIS_OC_DIS_LENGTH_BIT_LSB) )
#define CMIF_OC_DIS_OC_DIS_LENGTH_FLD_WR(reg, val)                    (reg |= (val) << CMIF_OC_DIS_OC_DIS_LENGTH_BIT_LSB)
#define CMIF_OC_DIS_OC_DIS_LENGTH_FLD_RD()                            ((M_CMIF_OC_DIS_RD() & CMIF_OC_DIS_OC_DIS_LENGTH_BIT_MASK) >> CMIF_OC_DIS_OC_DIS_LENGTH_BIT_LSB)

#define CMIF_OC_MODE_SEL_OC_SEL_LENGTH_BIT_LSB                        (24)
#define CMIF_OC_MODE_SEL_OC_SEL_LENGTH_BIT_WIDTH                      (8)
#define CMIF_OC_MODE_SEL_OC_SEL_LENGTH_BIT_MASK                       ((UINT32) (((1<<CMIF_OC_MODE_SEL_OC_SEL_LENGTH_BIT_WIDTH)-1) << CMIF_OC_MODE_SEL_OC_SEL_LENGTH_BIT_LSB) )
#define CMIF_OC_MODE_SEL_OC_SEL_LENGTH_FLD_WR(reg, val)               (reg |= (val) << CMIF_OC_MODE_SEL_OC_SEL_LENGTH_BIT_LSB)
#define CMIF_OC_MODE_SEL_OC_SEL_LENGTH_FLD_RD()                       ((M_CMIF_OC_MODE_SEL_RD() & CMIF_OC_MODE_SEL_OC_SEL_LENGTH_BIT_MASK) >> CMIF_OC_MODE_SEL_OC_SEL_LENGTH_BIT_LSB)

#define CMIF_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_LSB                       (16)
#define CMIF_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_WIDTH                     (8)
#define CMIF_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_MASK                      ((UINT32) (((1<<CMIF_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_WIDTH)-1) << CMIF_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_LSB) )
#define CMIF_OC_MODE_SEL_OC_SEL_SYM_IDX_FLD_WR(reg, val)              (reg |= (val) << CMIF_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_LSB)
#define CMIF_OC_MODE_SEL_OC_SEL_SYM_IDX_FLD_RD()                      ((M_CMIF_OC_MODE_SEL_RD() & CMIF_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_MASK) >> CMIF_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_LSB)

#define CMIF_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_LSB                      (8)
#define CMIF_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_WIDTH                    (8)
#define CMIF_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_MASK                     ((UINT32) (((1<<CMIF_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_WIDTH)-1) << CMIF_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_LSB) )
#define CMIF_OC_MODE_SEL_OC_SEL_SLOT_IDX_FLD_WR(reg, val)             (reg |= (val) << CMIF_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_LSB)
#define CMIF_OC_MODE_SEL_OC_SEL_SLOT_IDX_FLD_RD()                     ((M_CMIF_OC_MODE_SEL_RD() & CMIF_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_MASK) >> CMIF_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_LSB)

#define CMIF_OC_MODE_SEL_OC_SEL_EN_BIT_LSB                            (0)
#define CMIF_OC_MODE_SEL_OC_SEL_EN_BIT_WIDTH                          (8)
#define CMIF_OC_MODE_SEL_OC_SEL_EN_BIT_MASK                           ((UINT32) (((1<<CMIF_OC_MODE_SEL_OC_SEL_EN_BIT_WIDTH)-1) << CMIF_OC_MODE_SEL_OC_SEL_EN_BIT_LSB) )
#define CMIF_OC_MODE_SEL_OC_SEL_EN_FLD_WR(reg, val)                   (reg |= (val) << CMIF_OC_MODE_SEL_OC_SEL_EN_BIT_LSB)
#define CMIF_OC_MODE_SEL_OC_SEL_EN_FLD_RD()                           ((M_CMIF_OC_MODE_SEL_RD() & CMIF_OC_MODE_SEL_OC_SEL_EN_BIT_MASK) >> CMIF_OC_MODE_SEL_OC_SEL_EN_BIT_LSB)

#define CMIF_OC_GSR_ADDR_UPD_EN_BIT_LSB                               (24)
#define CMIF_OC_GSR_ADDR_UPD_EN_BIT_WIDTH                             (8)
#define CMIF_OC_GSR_ADDR_UPD_EN_BIT_MASK                              ((UINT32) (((1<<CMIF_OC_GSR_ADDR_UPD_EN_BIT_WIDTH)-1) << CMIF_OC_GSR_ADDR_UPD_EN_BIT_LSB) )
#define CMIF_OC_GSR_ADDR_UPD_EN_FLD_WR(reg, val)                      (reg |= (val) << CMIF_OC_GSR_ADDR_UPD_EN_BIT_LSB)
#define CMIF_OC_GSR_ADDR_UPD_EN_FLD_RD()                              ((M_CMIF_OC_GSR_ADDR_RD() & CMIF_OC_GSR_ADDR_UPD_EN_BIT_MASK) >> CMIF_OC_GSR_ADDR_UPD_EN_BIT_LSB)

#define CMIF_OC_GSR_ADDR_OC_GSR_ADDR_BIT_LSB                          (0)
#define CMIF_OC_GSR_ADDR_OC_GSR_ADDR_BIT_WIDTH                        (16)
#define CMIF_OC_GSR_ADDR_OC_GSR_ADDR_BIT_MASK                         ((UINT32) (((1<<CMIF_OC_GSR_ADDR_OC_GSR_ADDR_BIT_WIDTH)-1) << CMIF_OC_GSR_ADDR_OC_GSR_ADDR_BIT_LSB) )
#define CMIF_OC_GSR_ADDR_OC_GSR_ADDR_FLD_WR(reg, val)                 (reg |= (val) << CMIF_OC_GSR_ADDR_OC_GSR_ADDR_BIT_LSB)
#define CMIF_OC_GSR_ADDR_OC_GSR_ADDR_FLD_RD()                         ((M_CMIF_OC_GSR_ADDR_RD() & CMIF_OC_GSR_ADDR_OC_GSR_ADDR_BIT_MASK) >> CMIF_OC_GSR_ADDR_OC_GSR_ADDR_BIT_LSB)

#define CMIF_OC_CELL_CHG_CHG_5_BIT_LSB                                (5)
#define CMIF_OC_CELL_CHG_CHG_5_BIT_WIDTH                              (1)
#define CMIF_OC_CELL_CHG_CHG_5_BIT_MASK                               ((UINT32) (((1<<CMIF_OC_CELL_CHG_CHG_5_BIT_WIDTH)-1) << CMIF_OC_CELL_CHG_CHG_5_BIT_LSB) )
#define CMIF_OC_CELL_CHG_CHG_5_FLD_WR(reg, val)                       (reg |= (val) << CMIF_OC_CELL_CHG_CHG_5_BIT_LSB)
#define CMIF_OC_CELL_CHG_CHG_5_FLD_RD()                               ((M_CMIF_OC_CELL_CHG_RD() & CMIF_OC_CELL_CHG_CHG_5_BIT_MASK) >> CMIF_OC_CELL_CHG_CHG_5_BIT_LSB)

#define CMIF_OC_CELL_CHG_CHG_4_BIT_LSB                                (4)
#define CMIF_OC_CELL_CHG_CHG_4_BIT_WIDTH                              (1)
#define CMIF_OC_CELL_CHG_CHG_4_BIT_MASK                               ((UINT32) (((1<<CMIF_OC_CELL_CHG_CHG_4_BIT_WIDTH)-1) << CMIF_OC_CELL_CHG_CHG_4_BIT_LSB) )
#define CMIF_OC_CELL_CHG_CHG_4_FLD_WR(reg, val)                       (reg |= (val) << CMIF_OC_CELL_CHG_CHG_4_BIT_LSB)
#define CMIF_OC_CELL_CHG_CHG_4_FLD_RD()                               ((M_CMIF_OC_CELL_CHG_RD() & CMIF_OC_CELL_CHG_CHG_4_BIT_MASK) >> CMIF_OC_CELL_CHG_CHG_4_BIT_LSB)

#define CMIF_OC_CELL_CHG_CHG_3_BIT_LSB                                (3)
#define CMIF_OC_CELL_CHG_CHG_3_BIT_WIDTH                              (1)
#define CMIF_OC_CELL_CHG_CHG_3_BIT_MASK                               ((UINT32) (((1<<CMIF_OC_CELL_CHG_CHG_3_BIT_WIDTH)-1) << CMIF_OC_CELL_CHG_CHG_3_BIT_LSB) )
#define CMIF_OC_CELL_CHG_CHG_3_FLD_WR(reg, val)                       (reg |= (val) << CMIF_OC_CELL_CHG_CHG_3_BIT_LSB)
#define CMIF_OC_CELL_CHG_CHG_3_FLD_RD()                               ((M_CMIF_OC_CELL_CHG_RD() & CMIF_OC_CELL_CHG_CHG_3_BIT_MASK) >> CMIF_OC_CELL_CHG_CHG_3_BIT_LSB)

#define CMIF_OC_CELL_CHG_CHG_2_BIT_LSB                                (2)
#define CMIF_OC_CELL_CHG_CHG_2_BIT_WIDTH                              (1)
#define CMIF_OC_CELL_CHG_CHG_2_BIT_MASK                               ((UINT32) (((1<<CMIF_OC_CELL_CHG_CHG_2_BIT_WIDTH)-1) << CMIF_OC_CELL_CHG_CHG_2_BIT_LSB) )
#define CMIF_OC_CELL_CHG_CHG_2_FLD_WR(reg, val)                       (reg |= (val) << CMIF_OC_CELL_CHG_CHG_2_BIT_LSB)
#define CMIF_OC_CELL_CHG_CHG_2_FLD_RD()                               ((M_CMIF_OC_CELL_CHG_RD() & CMIF_OC_CELL_CHG_CHG_2_BIT_MASK) >> CMIF_OC_CELL_CHG_CHG_2_BIT_LSB)

#define CMIF_OC_CELL_CHG_CHG_1_BIT_LSB                                (1)
#define CMIF_OC_CELL_CHG_CHG_1_BIT_WIDTH                              (1)
#define CMIF_OC_CELL_CHG_CHG_1_BIT_MASK                               ((UINT32) (((1<<CMIF_OC_CELL_CHG_CHG_1_BIT_WIDTH)-1) << CMIF_OC_CELL_CHG_CHG_1_BIT_LSB) )
#define CMIF_OC_CELL_CHG_CHG_1_FLD_WR(reg, val)                       (reg |= (val) << CMIF_OC_CELL_CHG_CHG_1_BIT_LSB)
#define CMIF_OC_CELL_CHG_CHG_1_FLD_RD()                               ((M_CMIF_OC_CELL_CHG_RD() & CMIF_OC_CELL_CHG_CHG_1_BIT_MASK) >> CMIF_OC_CELL_CHG_CHG_1_BIT_LSB)

#define CMIF_OC_CELL_CHG_CHG_0_BIT_LSB                                (0)
#define CMIF_OC_CELL_CHG_CHG_0_BIT_WIDTH                              (1)
#define CMIF_OC_CELL_CHG_CHG_0_BIT_MASK                               ((UINT32) (((1<<CMIF_OC_CELL_CHG_CHG_0_BIT_WIDTH)-1) << CMIF_OC_CELL_CHG_CHG_0_BIT_LSB) )
#define CMIF_OC_CELL_CHG_CHG_0_FLD_WR(reg, val)                       (reg |= (val) << CMIF_OC_CELL_CHG_CHG_0_BIT_LSB)
#define CMIF_OC_CELL_CHG_CHG_0_FLD_RD()                               ((M_CMIF_OC_CELL_CHG_RD() & CMIF_OC_CELL_CHG_CHG_0_BIT_MASK) >> CMIF_OC_CELL_CHG_CHG_0_BIT_LSB)

#endif /* __OC_CMIF_H__ */
