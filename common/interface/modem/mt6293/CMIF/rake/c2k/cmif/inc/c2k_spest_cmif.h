#ifndef __C2K_SPEST_CMIF_H__
#define __C2K_SPEST_CMIF_H__

#include "reg_access.h"
#include "c2k_base_addr_cmif.h"

#define CMIF_C2K_SPEST_REG_BASE                                       (CMIF_C2K_RAKE_SPEST_OFFSET)
#define CMIF_SPEST_PARAM_1XRTT                                        (CMIF_C2K_SPEST_REG_BASE + 0x0000)
#define CMIF_SPEST_STA_1XRTT                                          (CMIF_C2K_SPEST_REG_BASE + 0x0004)
#define CMIF_SPEST_CTRL_1XRTT                                         (CMIF_C2K_SPEST_REG_BASE + 0x0008)
#define CMIF_SPEST_PARAM_EVDO                                         (CMIF_C2K_SPEST_REG_BASE + 0x000C)
#define CMIF_SPEST_STA_EVDO                                           (CMIF_C2K_SPEST_REG_BASE + 0x0010)
#define CMIF_SPEST_CTRL_EVDO                                          (CMIF_C2K_SPEST_REG_BASE + 0x0014)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0                         (CMIF_C2K_SPEST_REG_BASE + 0x0018)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1                         (CMIF_C2K_SPEST_REG_BASE + 0x001C)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0                         (CMIF_C2K_SPEST_REG_BASE + 0x0020)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1                         (CMIF_C2K_SPEST_REG_BASE + 0x0024)

#define M_CMIF_SPEST_PARAM_1XRTT_RD()                                 REG_READ(CMIF_SPEST_PARAM_1XRTT)
#define M_CMIF_SPEST_STA_1XRTT_RD()                                   REG_READ(CMIF_SPEST_STA_1XRTT)
#define M_CMIF_SPEST_CTRL_1XRTT_RD()                                  REG_READ(CMIF_SPEST_CTRL_1XRTT)
#define M_CMIF_SPEST_PARAM_EVDO_RD()                                  REG_READ(CMIF_SPEST_PARAM_EVDO)
#define M_CMIF_SPEST_STA_EVDO_RD()                                    REG_READ(CMIF_SPEST_STA_EVDO)
#define M_CMIF_SPEST_CTRL_EVDO_RD()                                   REG_READ(CMIF_SPEST_CTRL_EVDO)
#define M_CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_RD()                  REG_READ(CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0)
#define M_CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_RD()                  REG_READ(CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1)
#define M_CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_RD()                  REG_READ(CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0)
#define M_CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_RD()                  REG_READ(CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1)

#define M_CMIF_SPEST_PARAM_1XRTT_WR(reg)                              REG_WRITE(CMIF_SPEST_PARAM_1XRTT, reg)
#define M_CMIF_SPEST_STA_1XRTT_WR(reg)                                REG_WRITE(CMIF_SPEST_STA_1XRTT, reg)
#define M_CMIF_SPEST_CTRL_1XRTT_WR(reg)                               REG_WRITE(CMIF_SPEST_CTRL_1XRTT, reg)
#define M_CMIF_SPEST_PARAM_EVDO_WR(reg)                               REG_WRITE(CMIF_SPEST_PARAM_EVDO, reg)
#define M_CMIF_SPEST_STA_EVDO_WR(reg)                                 REG_WRITE(CMIF_SPEST_STA_EVDO, reg)
#define M_CMIF_SPEST_CTRL_EVDO_WR(reg)                                REG_WRITE(CMIF_SPEST_CTRL_EVDO, reg)
#define M_CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_WR(reg)               REG_WRITE(CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0, reg)
#define M_CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_WR(reg)               REG_WRITE(CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1, reg)
#define M_CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_WR(reg)               REG_WRITE(CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0, reg)
#define M_CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_WR(reg)               REG_WRITE(CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1, reg)

#define CMIF_SPEST_PARAM_1XRTT_CARR_FREQ_BIT_LSB                      (16)
#define CMIF_SPEST_PARAM_1XRTT_CARR_FREQ_BIT_WIDTH                    (16)
#define CMIF_SPEST_PARAM_1XRTT_CARR_FREQ_BIT_MASK                     ((UINT32) (((1<<CMIF_SPEST_PARAM_1XRTT_CARR_FREQ_BIT_WIDTH)-1) << CMIF_SPEST_PARAM_1XRTT_CARR_FREQ_BIT_LSB) )
#define CMIF_SPEST_PARAM_1XRTT_CARR_FREQ_FLD_WR(reg, val)             (reg |= (val) << CMIF_SPEST_PARAM_1XRTT_CARR_FREQ_BIT_LSB)
#define CMIF_SPEST_PARAM_1XRTT_CARR_FREQ_FLD_RD()                     ((M_CMIF_SPEST_PARAM_1XRTT_RD() & CMIF_SPEST_PARAM_1XRTT_CARR_FREQ_BIT_MASK) >> CMIF_SPEST_PARAM_1XRTT_CARR_FREQ_BIT_LSB)

#define CMIF_SPEST_PARAM_1XRTT_RESET_BIT_LSB                          (0)
#define CMIF_SPEST_PARAM_1XRTT_RESET_BIT_WIDTH                        (8)
#define CMIF_SPEST_PARAM_1XRTT_RESET_BIT_MASK                         ((UINT32) (((1<<CMIF_SPEST_PARAM_1XRTT_RESET_BIT_WIDTH)-1) << CMIF_SPEST_PARAM_1XRTT_RESET_BIT_LSB) )
#define CMIF_SPEST_PARAM_1XRTT_RESET_FLD_WR(reg, val)                 (reg |= (val) << CMIF_SPEST_PARAM_1XRTT_RESET_BIT_LSB)
#define CMIF_SPEST_PARAM_1XRTT_RESET_FLD_RD()                         ((M_CMIF_SPEST_PARAM_1XRTT_RD() & CMIF_SPEST_PARAM_1XRTT_RESET_BIT_MASK) >> CMIF_SPEST_PARAM_1XRTT_RESET_BIT_LSB)

#define CMIF_SPEST_STA_1XRTT_VALID_FLAG_BIT_LSB                       (16)
#define CMIF_SPEST_STA_1XRTT_VALID_FLAG_BIT_WIDTH                     (8)
#define CMIF_SPEST_STA_1XRTT_VALID_FLAG_BIT_MASK                      ((UINT32) (((1<<CMIF_SPEST_STA_1XRTT_VALID_FLAG_BIT_WIDTH)-1) << CMIF_SPEST_STA_1XRTT_VALID_FLAG_BIT_LSB) )
#define CMIF_SPEST_STA_1XRTT_VALID_FLAG_FLD_WR(reg, val)              (reg |= (val) << CMIF_SPEST_STA_1XRTT_VALID_FLAG_BIT_LSB)
#define CMIF_SPEST_STA_1XRTT_VALID_FLAG_FLD_RD()                      ((M_CMIF_SPEST_STA_1XRTT_RD() & CMIF_SPEST_STA_1XRTT_VALID_FLAG_BIT_MASK) >> CMIF_SPEST_STA_1XRTT_VALID_FLAG_BIT_LSB)

#define CMIF_SPEST_STA_1XRTT_EST_SPEED_BIT_LSB                        (8)
#define CMIF_SPEST_STA_1XRTT_EST_SPEED_BIT_WIDTH                      (8)
#define CMIF_SPEST_STA_1XRTT_EST_SPEED_BIT_MASK                       ((UINT32) (((1<<CMIF_SPEST_STA_1XRTT_EST_SPEED_BIT_WIDTH)-1) << CMIF_SPEST_STA_1XRTT_EST_SPEED_BIT_LSB) )
#define CMIF_SPEST_STA_1XRTT_EST_SPEED_FLD_WR(reg, val)               (reg |= (val) << CMIF_SPEST_STA_1XRTT_EST_SPEED_BIT_LSB)
#define CMIF_SPEST_STA_1XRTT_EST_SPEED_FLD_RD()                       ((M_CMIF_SPEST_STA_1XRTT_RD() & CMIF_SPEST_STA_1XRTT_EST_SPEED_BIT_MASK) >> CMIF_SPEST_STA_1XRTT_EST_SPEED_BIT_LSB)

#define CMIF_SPEST_STA_1XRTT_RDY_BIT_LSB                              (0)
#define CMIF_SPEST_STA_1XRTT_RDY_BIT_WIDTH                            (8)
#define CMIF_SPEST_STA_1XRTT_RDY_BIT_MASK                             ((UINT32) (((1<<CMIF_SPEST_STA_1XRTT_RDY_BIT_WIDTH)-1) << CMIF_SPEST_STA_1XRTT_RDY_BIT_LSB) )
#define CMIF_SPEST_STA_1XRTT_RDY_FLD_WR(reg, val)                     (reg |= (val) << CMIF_SPEST_STA_1XRTT_RDY_BIT_LSB)
#define CMIF_SPEST_STA_1XRTT_RDY_FLD_RD()                             ((M_CMIF_SPEST_STA_1XRTT_RD() & CMIF_SPEST_STA_1XRTT_RDY_BIT_MASK) >> CMIF_SPEST_STA_1XRTT_RDY_BIT_LSB)

#define CMIF_SPEST_CTRL_1XRTT_CURRENT_SPEED_BIT_LSB                   (0)
#define CMIF_SPEST_CTRL_1XRTT_CURRENT_SPEED_BIT_WIDTH                 (8)
#define CMIF_SPEST_CTRL_1XRTT_CURRENT_SPEED_BIT_MASK                  ((UINT32) (((1<<CMIF_SPEST_CTRL_1XRTT_CURRENT_SPEED_BIT_WIDTH)-1) << CMIF_SPEST_CTRL_1XRTT_CURRENT_SPEED_BIT_LSB) )
#define CMIF_SPEST_CTRL_1XRTT_CURRENT_SPEED_FLD_WR(reg, val)          (reg |= (val) << CMIF_SPEST_CTRL_1XRTT_CURRENT_SPEED_BIT_LSB)
#define CMIF_SPEST_CTRL_1XRTT_CURRENT_SPEED_FLD_RD()                  ((M_CMIF_SPEST_CTRL_1XRTT_RD() & CMIF_SPEST_CTRL_1XRTT_CURRENT_SPEED_BIT_MASK) >> CMIF_SPEST_CTRL_1XRTT_CURRENT_SPEED_BIT_LSB)

#define CMIF_SPEST_PARAM_EVDO_CARR_FREQ_BIT_LSB                       (16)
#define CMIF_SPEST_PARAM_EVDO_CARR_FREQ_BIT_WIDTH                     (16)
#define CMIF_SPEST_PARAM_EVDO_CARR_FREQ_BIT_MASK                      ((UINT32) (((1<<CMIF_SPEST_PARAM_EVDO_CARR_FREQ_BIT_WIDTH)-1) << CMIF_SPEST_PARAM_EVDO_CARR_FREQ_BIT_LSB) )
#define CMIF_SPEST_PARAM_EVDO_CARR_FREQ_FLD_WR(reg, val)              (reg |= (val) << CMIF_SPEST_PARAM_EVDO_CARR_FREQ_BIT_LSB)
#define CMIF_SPEST_PARAM_EVDO_CARR_FREQ_FLD_RD()                      ((M_CMIF_SPEST_PARAM_EVDO_RD() & CMIF_SPEST_PARAM_EVDO_CARR_FREQ_BIT_MASK) >> CMIF_SPEST_PARAM_EVDO_CARR_FREQ_BIT_LSB)

#define CMIF_SPEST_PARAM_EVDO_RESET_BIT_LSB                           (0)
#define CMIF_SPEST_PARAM_EVDO_RESET_BIT_WIDTH                         (8)
#define CMIF_SPEST_PARAM_EVDO_RESET_BIT_MASK                          ((UINT32) (((1<<CMIF_SPEST_PARAM_EVDO_RESET_BIT_WIDTH)-1) << CMIF_SPEST_PARAM_EVDO_RESET_BIT_LSB) )
#define CMIF_SPEST_PARAM_EVDO_RESET_FLD_WR(reg, val)                  (reg |= (val) << CMIF_SPEST_PARAM_EVDO_RESET_BIT_LSB)
#define CMIF_SPEST_PARAM_EVDO_RESET_FLD_RD()                          ((M_CMIF_SPEST_PARAM_EVDO_RD() & CMIF_SPEST_PARAM_EVDO_RESET_BIT_MASK) >> CMIF_SPEST_PARAM_EVDO_RESET_BIT_LSB)

#define CMIF_SPEST_STA_EVDO_VALID_FLAG_BIT_LSB                        (16)
#define CMIF_SPEST_STA_EVDO_VALID_FLAG_BIT_WIDTH                      (8)
#define CMIF_SPEST_STA_EVDO_VALID_FLAG_BIT_MASK                       ((UINT32) (((1<<CMIF_SPEST_STA_EVDO_VALID_FLAG_BIT_WIDTH)-1) << CMIF_SPEST_STA_EVDO_VALID_FLAG_BIT_LSB) )
#define CMIF_SPEST_STA_EVDO_VALID_FLAG_FLD_WR(reg, val)               (reg |= (val) << CMIF_SPEST_STA_EVDO_VALID_FLAG_BIT_LSB)
#define CMIF_SPEST_STA_EVDO_VALID_FLAG_FLD_RD()                       ((M_CMIF_SPEST_STA_EVDO_RD() & CMIF_SPEST_STA_EVDO_VALID_FLAG_BIT_MASK) >> CMIF_SPEST_STA_EVDO_VALID_FLAG_BIT_LSB)

#define CMIF_SPEST_STA_EVDO_EST_SPEED_BIT_LSB                         (8)
#define CMIF_SPEST_STA_EVDO_EST_SPEED_BIT_WIDTH                       (8)
#define CMIF_SPEST_STA_EVDO_EST_SPEED_BIT_MASK                        ((UINT32) (((1<<CMIF_SPEST_STA_EVDO_EST_SPEED_BIT_WIDTH)-1) << CMIF_SPEST_STA_EVDO_EST_SPEED_BIT_LSB) )
#define CMIF_SPEST_STA_EVDO_EST_SPEED_FLD_WR(reg, val)                (reg |= (val) << CMIF_SPEST_STA_EVDO_EST_SPEED_BIT_LSB)
#define CMIF_SPEST_STA_EVDO_EST_SPEED_FLD_RD()                        ((M_CMIF_SPEST_STA_EVDO_RD() & CMIF_SPEST_STA_EVDO_EST_SPEED_BIT_MASK) >> CMIF_SPEST_STA_EVDO_EST_SPEED_BIT_LSB)

#define CMIF_SPEST_STA_EVDO_RDY_BIT_LSB                               (0)
#define CMIF_SPEST_STA_EVDO_RDY_BIT_WIDTH                             (8)
#define CMIF_SPEST_STA_EVDO_RDY_BIT_MASK                              ((UINT32) (((1<<CMIF_SPEST_STA_EVDO_RDY_BIT_WIDTH)-1) << CMIF_SPEST_STA_EVDO_RDY_BIT_LSB) )
#define CMIF_SPEST_STA_EVDO_RDY_FLD_WR(reg, val)                      (reg |= (val) << CMIF_SPEST_STA_EVDO_RDY_BIT_LSB)
#define CMIF_SPEST_STA_EVDO_RDY_FLD_RD()                              ((M_CMIF_SPEST_STA_EVDO_RD() & CMIF_SPEST_STA_EVDO_RDY_BIT_MASK) >> CMIF_SPEST_STA_EVDO_RDY_BIT_LSB)

#define CMIF_SPEST_CTRL_EVDO_CURRENT_SPEED_BIT_LSB                    (0)
#define CMIF_SPEST_CTRL_EVDO_CURRENT_SPEED_BIT_WIDTH                  (8)
#define CMIF_SPEST_CTRL_EVDO_CURRENT_SPEED_BIT_MASK                   ((UINT32) (((1<<CMIF_SPEST_CTRL_EVDO_CURRENT_SPEED_BIT_WIDTH)-1) << CMIF_SPEST_CTRL_EVDO_CURRENT_SPEED_BIT_LSB) )
#define CMIF_SPEST_CTRL_EVDO_CURRENT_SPEED_FLD_WR(reg, val)           (reg |= (val) << CMIF_SPEST_CTRL_EVDO_CURRENT_SPEED_BIT_LSB)
#define CMIF_SPEST_CTRL_EVDO_CURRENT_SPEED_FLD_RD()                   ((M_CMIF_SPEST_CTRL_EVDO_RD() & CMIF_SPEST_CTRL_EVDO_CURRENT_SPEED_BIT_MASK) >> CMIF_SPEST_CTRL_EVDO_CURRENT_SPEED_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_LSB (24)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_3_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_3_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_RD() & CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_LSB (16)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_2_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_2_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_RD() & CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_LSB (8)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_1_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_1_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_RD() & CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_LSB (0)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_0_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_0_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_RD() & CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_LSB (24)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_3_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_3_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_RD() & CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_LSB (16)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_2_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_2_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_RD() & CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_LSB (8)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_1_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_1_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_RD() & CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_LSB (0)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_0_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_0_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_RD() & CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC0_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_LSB (24)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_3_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_3_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_RD() & CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_3_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_LSB (16)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_2_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_2_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_RD() & CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_2_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_LSB (8)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_1_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_1_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_RD() & CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_1_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_LSB (0)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_0_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_0_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_RD() & CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_0_SPEED_STAGE1_TH_0_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_LSB (24)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_3_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_3_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_RD() & CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_3_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_LSB (16)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_2_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_2_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_RD() & CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_2_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_LSB (8)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_1_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_1_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_RD() & CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_1_BIT_LSB)

#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_LSB (0)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_WIDTH (8)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_MASK ((UINT32) (((1<<CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_WIDTH)-1) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_LSB) )
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_0_FLD_WR(reg, val) (reg |= (val) << CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_LSB)
#define CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_0_FLD_RD() ((M_CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_RD() & CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_MASK) >> CMIF_SPEST_SPEED_STAGE1_BC1_TH_EVDO_1_SPEED_STAGE1_TH_0_BIT_LSB)

#endif /* __C2K_SPEST_CMIF_H__ */
