#ifndef __SPEST_CMIF_H__
#define __SPEST_CMIF_H__

#include "reg_access.h"
#include "base_addr_cmif.h"

#define CMIF_SPEST_REG_BASE                                           (CMIF_RAKE_SPEST_OFFSET)
#define CMIF_SPEST_PARAM                                              (CMIF_SPEST_REG_BASE + 0x0000)
#define CMIF_SPEST_STA                                                (CMIF_SPEST_REG_BASE + 0x0004)
#define CMIF_SPEST_CTRL                                               (CMIF_SPEST_REG_BASE + 0x0008)
#define CMIF_Bank1                                                    (CMIF_SPEST_REG_BASE + 0xDFFF)
#define CMIF_Bank2                                                    (CMIF_SPEST_REG_BASE + 0xEFFF)

#define M_CMIF_SPEST_PARAM_RD()                                       REG_READ(CMIF_SPEST_PARAM)
#define M_CMIF_SPEST_STA_RD()                                         REG_READ(CMIF_SPEST_STA)
#define M_CMIF_SPEST_CTRL_RD()                                        REG_READ(CMIF_SPEST_CTRL)

#define M_CMIF_SPEST_PARAM_WR(reg)                                    REG_WRITE(CMIF_SPEST_PARAM, reg)
#define M_CMIF_SPEST_STA_WR(reg)                                      REG_WRITE(CMIF_SPEST_STA, reg)
#define M_CMIF_SPEST_CTRL_WR(reg)                                     REG_WRITE(CMIF_SPEST_CTRL, reg)

#define CMIF_SPEST_PARAM_CARR_FREQ_BIT_LSB                            (16)
#define CMIF_SPEST_PARAM_CARR_FREQ_BIT_WIDTH                          (16)
#define CMIF_SPEST_PARAM_CARR_FREQ_BIT_MASK                           ((UINT32) (((1<<CMIF_SPEST_PARAM_CARR_FREQ_BIT_WIDTH)-1) << CMIF_SPEST_PARAM_CARR_FREQ_BIT_LSB) )
#define CMIF_SPEST_PARAM_CARR_FREQ_FLD_WR(reg, val)                   (reg |= (val) << CMIF_SPEST_PARAM_CARR_FREQ_BIT_LSB)
#define CMIF_SPEST_PARAM_CARR_FREQ_FLD_RD()                           ((M_CMIF_SPEST_PARAM_RD() & CMIF_SPEST_PARAM_CARR_FREQ_BIT_MASK) >> CMIF_SPEST_PARAM_CARR_FREQ_BIT_LSB)

#define CMIF_SPEST_PARAM_RESET_BIT_LSB                                (0)
#define CMIF_SPEST_PARAM_RESET_BIT_WIDTH                              (8)
#define CMIF_SPEST_PARAM_RESET_BIT_MASK                               ((UINT32) (((1<<CMIF_SPEST_PARAM_RESET_BIT_WIDTH)-1) << CMIF_SPEST_PARAM_RESET_BIT_LSB) )
#define CMIF_SPEST_PARAM_RESET_FLD_WR(reg, val)                       (reg |= (val) << CMIF_SPEST_PARAM_RESET_BIT_LSB)
#define CMIF_SPEST_PARAM_RESET_FLD_RD()                               ((M_CMIF_SPEST_PARAM_RD() & CMIF_SPEST_PARAM_RESET_BIT_MASK) >> CMIF_SPEST_PARAM_RESET_BIT_LSB)

#define CMIF_SPEST_STA_VALID_FLAG_BIT_LSB                             (16)
#define CMIF_SPEST_STA_VALID_FLAG_BIT_WIDTH                           (8)
#define CMIF_SPEST_STA_VALID_FLAG_BIT_MASK                            ((UINT32) (((1<<CMIF_SPEST_STA_VALID_FLAG_BIT_WIDTH)-1) << CMIF_SPEST_STA_VALID_FLAG_BIT_LSB) )
#define CMIF_SPEST_STA_VALID_FLAG_FLD_WR(reg, val)                    (reg |= (val) << CMIF_SPEST_STA_VALID_FLAG_BIT_LSB)
#define CMIF_SPEST_STA_VALID_FLAG_FLD_RD()                            ((M_CMIF_SPEST_STA_RD() & CMIF_SPEST_STA_VALID_FLAG_BIT_MASK) >> CMIF_SPEST_STA_VALID_FLAG_BIT_LSB)

#define CMIF_SPEST_STA_EST_SPEED_BIT_LSB                              (8)
#define CMIF_SPEST_STA_EST_SPEED_BIT_WIDTH                            (8)
#define CMIF_SPEST_STA_EST_SPEED_BIT_MASK                             ((UINT32) (((1<<CMIF_SPEST_STA_EST_SPEED_BIT_WIDTH)-1) << CMIF_SPEST_STA_EST_SPEED_BIT_LSB) )
#define CMIF_SPEST_STA_EST_SPEED_FLD_WR(reg, val)                     (reg |= (val) << CMIF_SPEST_STA_EST_SPEED_BIT_LSB)
#define CMIF_SPEST_STA_EST_SPEED_FLD_RD()                             ((M_CMIF_SPEST_STA_RD() & CMIF_SPEST_STA_EST_SPEED_BIT_MASK) >> CMIF_SPEST_STA_EST_SPEED_BIT_LSB)

#define CMIF_SPEST_STA_RDY_BIT_LSB                                    (0)
#define CMIF_SPEST_STA_RDY_BIT_WIDTH                                  (8)
#define CMIF_SPEST_STA_RDY_BIT_MASK                                   ((UINT32) (((1<<CMIF_SPEST_STA_RDY_BIT_WIDTH)-1) << CMIF_SPEST_STA_RDY_BIT_LSB) )
#define CMIF_SPEST_STA_RDY_FLD_WR(reg, val)                           (reg |= (val) << CMIF_SPEST_STA_RDY_BIT_LSB)
#define CMIF_SPEST_STA_RDY_FLD_RD()                                   ((M_CMIF_SPEST_STA_RD() & CMIF_SPEST_STA_RDY_BIT_MASK) >> CMIF_SPEST_STA_RDY_BIT_LSB)

#define CMIF_SPEST_CTRL_CURRENT_SPEED_BIT_LSB                         (0)
#define CMIF_SPEST_CTRL_CURRENT_SPEED_BIT_WIDTH                       (8)
#define CMIF_SPEST_CTRL_CURRENT_SPEED_BIT_MASK                        ((UINT32) (((1<<CMIF_SPEST_CTRL_CURRENT_SPEED_BIT_WIDTH)-1) << CMIF_SPEST_CTRL_CURRENT_SPEED_BIT_LSB) )
#define CMIF_SPEST_CTRL_CURRENT_SPEED_FLD_WR(reg, val)                (reg |= (val) << CMIF_SPEST_CTRL_CURRENT_SPEED_BIT_LSB)
#define CMIF_SPEST_CTRL_CURRENT_SPEED_FLD_RD()                        ((M_CMIF_SPEST_CTRL_RD() & CMIF_SPEST_CTRL_CURRENT_SPEED_BIT_MASK) >> CMIF_SPEST_CTRL_CURRENT_SPEED_BIT_LSB)

#endif /* __SPEST_CMIF_H__ */
