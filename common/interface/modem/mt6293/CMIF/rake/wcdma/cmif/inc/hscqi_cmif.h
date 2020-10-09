#ifndef __HSCQI_CMIF_H__
#define __HSCQI_CMIF_H__

#include "reg_access.h"
#include "base_addr_cmif.h"

#define CMIF_HSCQI_REG_BASE                                           (CMIF_RAKE_HSCQI_OFFSET)
#define CMIF_HSCQI_LMS_RST                                            (CMIF_HSCQI_REG_BASE + 0x0000)

#define M_CMIF_HSCQI_LMS_RST_RD()                                     REG_READ(CMIF_HSCQI_LMS_RST)

#define M_CMIF_HSCQI_LMS_RST_WR(reg)                                  REG_WRITE(CMIF_HSCQI_LMS_RST, reg)

#define CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_THIRD_BIT_LSB                (16)
#define CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_THIRD_BIT_WIDTH              (8)
#define CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_THIRD_BIT_MASK               ((UINT32) (((1<<CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_THIRD_BIT_WIDTH)-1) << CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_THIRD_BIT_LSB) )
#define CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_THIRD_FLD_WR(reg, val)       (reg |= (val) << CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_THIRD_BIT_LSB)

#define CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_S_BIT_LSB                    (8)
#define CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_S_BIT_WIDTH                  (8)
#define CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_S_BIT_MASK                   ((UINT32) (((1<<CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_S_BIT_WIDTH)-1) << CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_S_BIT_LSB) )
#define CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_S_FLD_WR(reg, val)           (reg |= (val) << CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_S_BIT_LSB)

#define CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_P_BIT_LSB                    (0)
#define CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_P_BIT_WIDTH                  (8)
#define CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_P_BIT_MASK                   ((UINT32) (((1<<CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_P_BIT_WIDTH)-1) << CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_P_BIT_LSB) )
#define CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_P_FLD_WR(reg, val)           (reg |= (val) << CMIF_HSCQI_LMS_RST_HSCQI_LMS_RST_P_BIT_LSB)

#endif /* __HSCQI_CMIF_H__ */
