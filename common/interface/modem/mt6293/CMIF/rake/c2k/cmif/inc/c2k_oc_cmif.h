#ifndef __C2K_OC_CMIF_H__
#define __C2K_OC_CMIF_H__

#include "reg_access.h"
#include "c2k_base_addr_cmif.h"

#define CMIF_C2K_OC_REG_BASE                                          (CMIF_C2K_RAKE_OC_OFFSET)
#define CMIF_C2K_OC_ON                                                (CMIF_C2K_OC_REG_BASE + 0x0000)
#define CMIF_C2K_OC_DIS                                               (CMIF_C2K_OC_REG_BASE + 0x0004)
#define CMIF_C2K_OC_MODE_SEL                                          (CMIF_C2K_OC_REG_BASE + 0x0008)
#define CMIF_OC_C2K_CON_1XRTT                                         (CMIF_C2K_OC_REG_BASE + 0x000C)

#define M_CMIF_C2K_OC_ON_RD()                                         REG_READ(CMIF_C2K_OC_ON)
#define M_CMIF_C2K_OC_DIS_RD()                                        REG_READ(CMIF_C2K_OC_DIS)
#define M_CMIF_C2K_OC_MODE_SEL_RD()                                   REG_READ(CMIF_C2K_OC_MODE_SEL)
#define M_CMIF_OC_C2K_CON_1XRTT_RD()                                  REG_READ(CMIF_OC_C2K_CON_1XRTT)

#define M_CMIF_C2K_OC_ON_WR(reg)                                      REG_WRITE(CMIF_C2K_OC_ON, reg)
#define M_CMIF_C2K_OC_DIS_WR(reg)                                     REG_WRITE(CMIF_C2K_OC_DIS, reg)
#define M_CMIF_C2K_OC_MODE_SEL_WR(reg)                                REG_WRITE(CMIF_C2K_OC_MODE_SEL, reg)
#define M_CMIF_OC_C2K_CON_1XRTT_WR(reg)                               REG_WRITE(CMIF_OC_C2K_CON_1XRTT, reg)

#define CMIF_C2K_OC_ON_OC_RESULT_EN_BIT_LSB                           (8)
#define CMIF_C2K_OC_ON_OC_RESULT_EN_BIT_WIDTH                         (8)
#define CMIF_C2K_OC_ON_OC_RESULT_EN_BIT_MASK                          ((UINT32) (((1<<CMIF_C2K_OC_ON_OC_RESULT_EN_BIT_WIDTH)-1) << CMIF_C2K_OC_ON_OC_RESULT_EN_BIT_LSB) )
#define CMIF_C2K_OC_ON_OC_RESULT_EN_FLD_WR(reg, val)                  (reg |= (val) << CMIF_C2K_OC_ON_OC_RESULT_EN_BIT_LSB)
#define CMIF_C2K_OC_ON_OC_RESULT_EN_FLD_RD()                          ((M_CMIF_C2K_OC_ON_RD() & CMIF_C2K_OC_ON_OC_RESULT_EN_BIT_MASK) >> CMIF_C2K_OC_ON_OC_RESULT_EN_BIT_LSB)

#define CMIF_C2K_OC_ON_OC_EN_BIT_LSB                                  (0)
#define CMIF_C2K_OC_ON_OC_EN_BIT_WIDTH                                (8)
#define CMIF_C2K_OC_ON_OC_EN_BIT_MASK                                 ((UINT32) (((1<<CMIF_C2K_OC_ON_OC_EN_BIT_WIDTH)-1) << CMIF_C2K_OC_ON_OC_EN_BIT_LSB) )
#define CMIF_C2K_OC_ON_OC_EN_FLD_WR(reg, val)                         (reg |= (val) << CMIF_C2K_OC_ON_OC_EN_BIT_LSB)
#define CMIF_C2K_OC_ON_OC_EN_FLD_RD()                                 ((M_CMIF_C2K_OC_ON_RD() & CMIF_C2K_OC_ON_OC_EN_BIT_MASK) >> CMIF_C2K_OC_ON_OC_EN_BIT_LSB)

#define CMIF_C2K_OC_DIS_OC_DIS_EN_BIT_LSB                             (24)
#define CMIF_C2K_OC_DIS_OC_DIS_EN_BIT_WIDTH                           (8)
#define CMIF_C2K_OC_DIS_OC_DIS_EN_BIT_MASK                            ((UINT32) (((1<<CMIF_C2K_OC_DIS_OC_DIS_EN_BIT_WIDTH)-1) << CMIF_C2K_OC_DIS_OC_DIS_EN_BIT_LSB) )
#define CMIF_C2K_OC_DIS_OC_DIS_EN_FLD_WR(reg, val)                    (reg |= (val) << CMIF_C2K_OC_DIS_OC_DIS_EN_BIT_LSB)
#define CMIF_C2K_OC_DIS_OC_DIS_EN_FLD_RD()                            ((M_CMIF_C2K_OC_DIS_RD() & CMIF_C2K_OC_DIS_OC_DIS_EN_BIT_MASK) >> CMIF_C2K_OC_DIS_OC_DIS_EN_BIT_LSB)

#define CMIF_C2K_OC_DIS_OC_DIS_SLOT_IDX_BIT_LSB                       (20)
#define CMIF_C2K_OC_DIS_OC_DIS_SLOT_IDX_BIT_WIDTH                     (4)
#define CMIF_C2K_OC_DIS_OC_DIS_SLOT_IDX_BIT_MASK                      ((UINT32) (((1<<CMIF_C2K_OC_DIS_OC_DIS_SLOT_IDX_BIT_WIDTH)-1) << CMIF_C2K_OC_DIS_OC_DIS_SLOT_IDX_BIT_LSB) )
#define CMIF_C2K_OC_DIS_OC_DIS_SLOT_IDX_FLD_WR(reg, val)              (reg |= (val) << CMIF_C2K_OC_DIS_OC_DIS_SLOT_IDX_BIT_LSB)
#define CMIF_C2K_OC_DIS_OC_DIS_SLOT_IDX_FLD_RD()                      ((M_CMIF_C2K_OC_DIS_RD() & CMIF_C2K_OC_DIS_OC_DIS_SLOT_IDX_BIT_MASK) >> CMIF_C2K_OC_DIS_OC_DIS_SLOT_IDX_BIT_LSB)

#define CMIF_C2K_OC_DIS_OC_DIS_SYM_IDX_BIT_LSB                        (12)
#define CMIF_C2K_OC_DIS_OC_DIS_SYM_IDX_BIT_WIDTH                      (8)
#define CMIF_C2K_OC_DIS_OC_DIS_SYM_IDX_BIT_MASK                       ((UINT32) (((1<<CMIF_C2K_OC_DIS_OC_DIS_SYM_IDX_BIT_WIDTH)-1) << CMIF_C2K_OC_DIS_OC_DIS_SYM_IDX_BIT_LSB) )
#define CMIF_C2K_OC_DIS_OC_DIS_SYM_IDX_FLD_WR(reg, val)               (reg |= (val) << CMIF_C2K_OC_DIS_OC_DIS_SYM_IDX_BIT_LSB)
#define CMIF_C2K_OC_DIS_OC_DIS_SYM_IDX_FLD_RD()                       ((M_CMIF_C2K_OC_DIS_RD() & CMIF_C2K_OC_DIS_OC_DIS_SYM_IDX_BIT_MASK) >> CMIF_C2K_OC_DIS_OC_DIS_SYM_IDX_BIT_LSB)

#define CMIF_C2K_OC_DIS_OC_DIS_LENGTH_BIT_LSB                         (0)
#define CMIF_C2K_OC_DIS_OC_DIS_LENGTH_BIT_WIDTH                       (12)
#define CMIF_C2K_OC_DIS_OC_DIS_LENGTH_BIT_MASK                        ((UINT32) (((1<<CMIF_C2K_OC_DIS_OC_DIS_LENGTH_BIT_WIDTH)-1) << CMIF_C2K_OC_DIS_OC_DIS_LENGTH_BIT_LSB) )
#define CMIF_C2K_OC_DIS_OC_DIS_LENGTH_FLD_WR(reg, val)                (reg |= (val) << CMIF_C2K_OC_DIS_OC_DIS_LENGTH_BIT_LSB)
#define CMIF_C2K_OC_DIS_OC_DIS_LENGTH_FLD_RD()                        ((M_CMIF_C2K_OC_DIS_RD() & CMIF_C2K_OC_DIS_OC_DIS_LENGTH_BIT_MASK) >> CMIF_C2K_OC_DIS_OC_DIS_LENGTH_BIT_LSB)

#define CMIF_C2K_OC_MODE_SEL_OC_SEL_LENGTH_BIT_LSB                    (20)
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_LENGTH_BIT_WIDTH                  (12)
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_LENGTH_BIT_MASK                   ((UINT32) (((1<<CMIF_C2K_OC_MODE_SEL_OC_SEL_LENGTH_BIT_WIDTH)-1) << CMIF_C2K_OC_MODE_SEL_OC_SEL_LENGTH_BIT_LSB) )
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_LENGTH_FLD_WR(reg, val)           (reg |= (val) << CMIF_C2K_OC_MODE_SEL_OC_SEL_LENGTH_BIT_LSB)
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_LENGTH_FLD_RD()                   ((M_CMIF_C2K_OC_MODE_SEL_RD() & CMIF_C2K_OC_MODE_SEL_OC_SEL_LENGTH_BIT_MASK) >> CMIF_C2K_OC_MODE_SEL_OC_SEL_LENGTH_BIT_LSB)

#define CMIF_C2K_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_LSB                   (12)
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_WIDTH                 (8)
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_MASK                  ((UINT32) (((1<<CMIF_C2K_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_WIDTH)-1) << CMIF_C2K_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_LSB) )
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_SYM_IDX_FLD_WR(reg, val)          (reg |= (val) << CMIF_C2K_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_LSB)
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_SYM_IDX_FLD_RD()                  ((M_CMIF_C2K_OC_MODE_SEL_RD() & CMIF_C2K_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_MASK) >> CMIF_C2K_OC_MODE_SEL_OC_SEL_SYM_IDX_BIT_LSB)

#define CMIF_C2K_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_LSB                  (8)
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_WIDTH                (4)
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_MASK                 ((UINT32) (((1<<CMIF_C2K_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_WIDTH)-1) << CMIF_C2K_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_LSB) )
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_SLOT_IDX_FLD_WR(reg, val)         (reg |= (val) << CMIF_C2K_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_LSB)
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_SLOT_IDX_FLD_RD()                 ((M_CMIF_C2K_OC_MODE_SEL_RD() & CMIF_C2K_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_MASK) >> CMIF_C2K_OC_MODE_SEL_OC_SEL_SLOT_IDX_BIT_LSB)

#define CMIF_C2K_OC_MODE_SEL_OC_SEL_EN_BIT_LSB                        (0)
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_EN_BIT_WIDTH                      (8)
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_EN_BIT_MASK                       ((UINT32) (((1<<CMIF_C2K_OC_MODE_SEL_OC_SEL_EN_BIT_WIDTH)-1) << CMIF_C2K_OC_MODE_SEL_OC_SEL_EN_BIT_LSB) )
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_EN_FLD_WR(reg, val)               (reg |= (val) << CMIF_C2K_OC_MODE_SEL_OC_SEL_EN_BIT_LSB)
#define CMIF_C2K_OC_MODE_SEL_OC_SEL_EN_FLD_RD()                       ((M_CMIF_C2K_OC_MODE_SEL_RD() & CMIF_C2K_OC_MODE_SEL_OC_SEL_EN_BIT_MASK) >> CMIF_C2K_OC_MODE_SEL_OC_SEL_EN_BIT_LSB)

#define CMIF_OC_C2K_CON_1XRTT_OC_RN_DIAG_SIGMA_BIT_LSB                (13)
#define CMIF_OC_C2K_CON_1XRTT_OC_RN_DIAG_SIGMA_BIT_WIDTH              (10)
#define CMIF_OC_C2K_CON_1XRTT_OC_RN_DIAG_SIGMA_BIT_MASK               ((UINT32) (((1<<CMIF_OC_C2K_CON_1XRTT_OC_RN_DIAG_SIGMA_BIT_WIDTH)-1) << CMIF_OC_C2K_CON_1XRTT_OC_RN_DIAG_SIGMA_BIT_LSB) )
#define CMIF_OC_C2K_CON_1XRTT_OC_RN_DIAG_SIGMA_FLD_WR(reg, val)       (reg |= (val) << CMIF_OC_C2K_CON_1XRTT_OC_RN_DIAG_SIGMA_BIT_LSB)
#define CMIF_OC_C2K_CON_1XRTT_OC_RN_DIAG_SIGMA_FLD_RD()               ((M_CMIF_OC_C2K_CON_1XRTT_RD() & CMIF_OC_C2K_CON_1XRTT_OC_RN_DIAG_SIGMA_BIT_MASK) >> CMIF_OC_C2K_CON_1XRTT_OC_RN_DIAG_SIGMA_BIT_LSB)

#define CMIF_OC_C2K_CON_1XRTT_OC_RN_INV_TH_BIT_LSB                    (8)
#define CMIF_OC_C2K_CON_1XRTT_OC_RN_INV_TH_BIT_WIDTH                  (5)
#define CMIF_OC_C2K_CON_1XRTT_OC_RN_INV_TH_BIT_MASK                   ((UINT32) (((1<<CMIF_OC_C2K_CON_1XRTT_OC_RN_INV_TH_BIT_WIDTH)-1) << CMIF_OC_C2K_CON_1XRTT_OC_RN_INV_TH_BIT_LSB) )
#define CMIF_OC_C2K_CON_1XRTT_OC_RN_INV_TH_FLD_WR(reg, val)           (reg |= (val) << CMIF_OC_C2K_CON_1XRTT_OC_RN_INV_TH_BIT_LSB)
#define CMIF_OC_C2K_CON_1XRTT_OC_RN_INV_TH_FLD_RD()                   ((M_CMIF_OC_C2K_CON_1XRTT_RD() & CMIF_OC_C2K_CON_1XRTT_OC_RN_INV_TH_BIT_MASK) >> CMIF_OC_C2K_CON_1XRTT_OC_RN_INV_TH_BIT_LSB)

#define CMIF_OC_C2K_CON_1XRTT_OC_RN_FILTER_COEF_BIT_LSB               (0)
#define CMIF_OC_C2K_CON_1XRTT_OC_RN_FILTER_COEF_BIT_WIDTH             (8)
#define CMIF_OC_C2K_CON_1XRTT_OC_RN_FILTER_COEF_BIT_MASK              ((UINT32) (((1<<CMIF_OC_C2K_CON_1XRTT_OC_RN_FILTER_COEF_BIT_WIDTH)-1) << CMIF_OC_C2K_CON_1XRTT_OC_RN_FILTER_COEF_BIT_LSB) )
#define CMIF_OC_C2K_CON_1XRTT_OC_RN_FILTER_COEF_FLD_WR(reg, val)      (reg |= (val) << CMIF_OC_C2K_CON_1XRTT_OC_RN_FILTER_COEF_BIT_LSB)
#define CMIF_OC_C2K_CON_1XRTT_OC_RN_FILTER_COEF_FLD_RD()              ((M_CMIF_OC_C2K_CON_1XRTT_RD() & CMIF_OC_C2K_CON_1XRTT_OC_RN_FILTER_COEF_BIT_MASK) >> CMIF_OC_C2K_CON_1XRTT_OC_RN_FILTER_COEF_BIT_LSB)

#endif /* __C2K_OC_CMIF_H__ */
