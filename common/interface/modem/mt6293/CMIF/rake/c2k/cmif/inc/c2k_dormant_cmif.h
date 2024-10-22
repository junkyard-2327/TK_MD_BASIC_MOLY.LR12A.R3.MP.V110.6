#ifndef __C2K_DORMANT_CMIF_H__
#define __C2K_DORMANT_CMIF_H__

#include "reg_access.h"
#include "c2k_base_addr_cmif.h"

#define CMIF_C2K_DORMANT_REG_BASE                                     (CMIF_C2K_RAKE_DORMANT_OFFSET)
#define CMIF_RAKE_SLEEP_ACK                                           (CMIF_C2K_DORMANT_REG_BASE + 0x0000)
#define CMIF_RAKE_PM_DM_STATE                                         (CMIF_C2K_DORMANT_REG_BASE + 0x0004)
#define CMIF_RAKE_ALLOW_SLEEP_EXT                                     (CMIF_C2K_DORMANT_REG_BASE + 0x0008)
#define CMIF_RAKE_ALLOW_SLEEP_DMA                                     (CMIF_C2K_DORMANT_REG_BASE + 0x000C)
#define CMIF_RAKE_ALLOW_SLEEP_FW                                      (CMIF_C2K_DORMANT_REG_BASE + 0x0010)

#define M_CMIF_RAKE_SLEEP_ACK_RD()                                    REG_READ(CMIF_RAKE_SLEEP_ACK)
#define M_CMIF_RAKE_PM_DM_STATE_RD()                                  REG_READ(CMIF_RAKE_PM_DM_STATE)
#define M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD()                              REG_READ(CMIF_RAKE_ALLOW_SLEEP_EXT)
#define M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD()                              REG_READ(CMIF_RAKE_ALLOW_SLEEP_DMA)
#define M_CMIF_RAKE_ALLOW_SLEEP_FW_RD()                               REG_READ(CMIF_RAKE_ALLOW_SLEEP_FW)

#define M_CMIF_RAKE_SLEEP_ACK_WR(reg)                                 REG_WRITE(CMIF_RAKE_SLEEP_ACK, reg)
#define M_CMIF_RAKE_PM_DM_STATE_WR(reg)                               REG_WRITE(CMIF_RAKE_PM_DM_STATE, reg)
#define M_CMIF_RAKE_ALLOW_SLEEP_EXT_WR(reg)                           REG_WRITE(CMIF_RAKE_ALLOW_SLEEP_EXT, reg)
#define M_CMIF_RAKE_ALLOW_SLEEP_DMA_WR(reg)                           REG_WRITE(CMIF_RAKE_ALLOW_SLEEP_DMA, reg)
#define M_CMIF_RAKE_ALLOW_SLEEP_FW_WR(reg)                            REG_WRITE(CMIF_RAKE_ALLOW_SLEEP_FW, reg)

#define CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_LSB                       (16)
#define CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_WIDTH                     (8)
#define CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_MASK                      ((UINT32) (((1<<CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_WIDTH)-1) << CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_LSB) )
#define CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_FLD_WR(reg, val)              (reg |= (val) << CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_LSB)
#define CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_FLD_RD()                      ((M_CMIF_RAKE_SLEEP_ACK_RD() & CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_MASK) >> CMIF_RAKE_SLEEP_ACK_RAKE_ACTION_BIT_LSB)

#define CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_LSB                       (0)
#define CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_WIDTH                     (8)
#define CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_MASK                      ((UINT32) (((1<<CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_WIDTH)-1) << CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_LSB) )
#define CMIF_RAKE_SLEEP_ACK_NACK_REASON_FLD_WR(reg, val)              (reg |= (val) << CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_LSB)
#define CMIF_RAKE_SLEEP_ACK_NACK_REASON_FLD_RD()                      ((M_CMIF_RAKE_SLEEP_ACK_RD() & CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_MASK) >> CMIF_RAKE_SLEEP_ACK_NACK_REASON_BIT_LSB)

#define CMIF_RAKE_PM_DM_STATE_STATE_BIT_LSB                           (0)
#define CMIF_RAKE_PM_DM_STATE_STATE_BIT_WIDTH                         (2)
#define CMIF_RAKE_PM_DM_STATE_STATE_BIT_MASK                          ((UINT32) (((1<<CMIF_RAKE_PM_DM_STATE_STATE_BIT_WIDTH)-1) << CMIF_RAKE_PM_DM_STATE_STATE_BIT_LSB) )
#define CMIF_RAKE_PM_DM_STATE_STATE_FLD_WR(reg, val)                  (reg |= (val) << CMIF_RAKE_PM_DM_STATE_STATE_BIT_LSB)
#define CMIF_RAKE_PM_DM_STATE_STATE_FLD_RD()                          ((M_CMIF_RAKE_PM_DM_STATE_RD() & CMIF_RAKE_PM_DM_STATE_STATE_BIT_MASK) >> CMIF_RAKE_PM_DM_STATE_STATE_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_BIT_LSB                   (5)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_BIT_WIDTH                 (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_BIT_MASK                  ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_FLD_WR(reg, val)          (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_FLD_RD()                  ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_BIT_LSB                   (4)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_BIT_WIDTH                 (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_BIT_MASK                  ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_FLD_WR(reg, val)          (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_FLD_RD()                  ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PHCH0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB3_BIT_LSB                    (3)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB3_BIT_WIDTH                  (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB3_BIT_MASK                   ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB3_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB3_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB3_FLD_WR(reg, val)           (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB3_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB3_FLD_RD()                   ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB3_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB3_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB2_BIT_LSB                    (2)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB2_BIT_WIDTH                  (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB2_BIT_MASK                   ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB2_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB2_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB2_FLD_WR(reg, val)           (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB2_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB2_FLD_RD()                   ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB2_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB2_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB1_BIT_LSB                    (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB1_BIT_WIDTH                  (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB1_BIT_MASK                   ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB1_FLD_WR(reg, val)           (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB1_FLD_RD()                   ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB0_BIT_LSB                    (0)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB0_BIT_WIDTH                  (1)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB0_BIT_MASK                   ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB0_FLD_WR(reg, val)           (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB0_FLD_RD()                   ((M_CMIF_RAKE_ALLOW_SLEEP_EXT_RD() & CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_EXT_EXT_PMB0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH1_BIT_LSB                   (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH1_BIT_WIDTH                 (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH1_BIT_MASK                  ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH1_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH1_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH1_FLD_WR(reg, val)          (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH1_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH1_FLD_RD()                  ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH1_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH1_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH0_BIT_LSB                   (0)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH0_BIT_WIDTH                 (1)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH0_BIT_MASK                  ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH0_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH0_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH0_FLD_WR(reg, val)          (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH0_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH0_FLD_RD()                  ((M_CMIF_RAKE_ALLOW_SLEEP_DMA_RD() & CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH0_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_DMA_DMA_PHCH0_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_FW_PD_BIT_LSB                           (3)
#define CMIF_RAKE_ALLOW_SLEEP_FW_PD_BIT_WIDTH                         (1)
#define CMIF_RAKE_ALLOW_SLEEP_FW_PD_BIT_MASK                          ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_FW_PD_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_FW_PD_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_FW_PD_FLD_WR(reg, val)                  (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_FW_PD_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_FW_PD_FLD_RD()                          ((M_CMIF_RAKE_ALLOW_SLEEP_FW_RD() & CMIF_RAKE_ALLOW_SLEEP_FW_PD_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_FW_PD_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_FW_DRC_BIT_LSB                          (2)
#define CMIF_RAKE_ALLOW_SLEEP_FW_DRC_BIT_WIDTH                        (1)
#define CMIF_RAKE_ALLOW_SLEEP_FW_DRC_BIT_MASK                         ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_FW_DRC_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_FW_DRC_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_FW_DRC_FLD_WR(reg, val)                 (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_FW_DRC_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_FW_DRC_FLD_RD()                         ((M_CMIF_RAKE_ALLOW_SLEEP_FW_RD() & CMIF_RAKE_ALLOW_SLEEP_FW_DRC_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_FW_DRC_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_FW_MAC_BIT_LSB                          (1)
#define CMIF_RAKE_ALLOW_SLEEP_FW_MAC_BIT_WIDTH                        (1)
#define CMIF_RAKE_ALLOW_SLEEP_FW_MAC_BIT_MASK                         ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_FW_MAC_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_FW_MAC_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_FW_MAC_FLD_WR(reg, val)                 (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_FW_MAC_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_FW_MAC_FLD_RD()                         ((M_CMIF_RAKE_ALLOW_SLEEP_FW_RD() & CMIF_RAKE_ALLOW_SLEEP_FW_MAC_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_FW_MAC_BIT_LSB)

#define CMIF_RAKE_ALLOW_SLEEP_FW_FPC_BIT_LSB                          (0)
#define CMIF_RAKE_ALLOW_SLEEP_FW_FPC_BIT_WIDTH                        (1)
#define CMIF_RAKE_ALLOW_SLEEP_FW_FPC_BIT_MASK                         ((UINT32) (((1<<CMIF_RAKE_ALLOW_SLEEP_FW_FPC_BIT_WIDTH)-1) << CMIF_RAKE_ALLOW_SLEEP_FW_FPC_BIT_LSB) )
#define CMIF_RAKE_ALLOW_SLEEP_FW_FPC_FLD_WR(reg, val)                 (reg |= (val) << CMIF_RAKE_ALLOW_SLEEP_FW_FPC_BIT_LSB)
#define CMIF_RAKE_ALLOW_SLEEP_FW_FPC_FLD_RD()                         ((M_CMIF_RAKE_ALLOW_SLEEP_FW_RD() & CMIF_RAKE_ALLOW_SLEEP_FW_FPC_BIT_MASK) >> CMIF_RAKE_ALLOW_SLEEP_FW_FPC_BIT_LSB)

#endif /* __C2K_DORMANT_CMIF_H__ */
