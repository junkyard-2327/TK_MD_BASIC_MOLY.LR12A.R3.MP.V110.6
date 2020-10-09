
#ifndef __DRV_BUSMPU_H__
#define __DRV_BUSMPU_H__

#include "reg_base.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "busmpu.h"

#define EXTRACT_REG_FIELD_VAL(field_val, field_name)            (((field_val) >> (field_name##_SHIFT)) & (field_name##_MASK))
#define EXPAND_REG_FIELD_VAL(field_val, field_name)             (((field_val) & (field_name##_MASK)) << (field_name##_SHIFT))
#define CLEAR_REG_FIELD(reg_val, field_name)                    ((reg_val) & (~((field_name##_MASK) << (field_name##_SHIFT))))
#define SET_REG_FIELD_VAL(reg_val, field_val, field_name)       (CLEAR_REG_FIELD(reg_val, field_name) | EXPAND_REG_FIELD_VAL(field_val, field_name))

#define WRITE_REG_FIELD_VAL(reg_name, field_name, field_val)    DRV_WriteReg32(reg_name, SET_REG_FIELD_VAL(DRV_Reg32(reg_name), field_val, field_name))

///////////////////////////////////////////////////////////////////////////////
/// \name BUSMPU Region Control Register Definition
///////////////////////////////////////////////////////////////////////////////

#define BUSMPU_MDINFRA_REGION_NUM                 (5)
#define BUSMPU_MDMCU_REGION_NUM                   (8)
#define BUSMPU_DOMAIN_MAX                         (8)

#define BUSMPU_MDINFRA_DEFAULT_BLOCK              (BASE_ADDR_MDPERIMISC + 0x150)
#define BUSMPU_MDINFRA_DISABLE                    (BASE_ADDR_MDPERIMISC + 0x154)

#define BUSMPU_MDINFRA_R0                         (BASE_ADDR_MDPERIMISC + 0x158)
#define BUSMPU_MDINFRA_R1                         (BASE_ADDR_MDPERIMISC + 0x15C)
#define BUSMPU_MDINFRA_R2                         (BASE_ADDR_MDPERIMISC + 0x160)
#define BUSMPU_MDINFRA_R3                         (BASE_ADDR_MDPERIMISC + 0x164)
#define BUSMPU_MDINFRA_R4                         (BASE_ADDR_MDPERIMISC + 0x168)
#define BUSMPU_MDINFRA_R(x)                       (BASE_ADDR_MDPERIMISC + 0x158 + ((x) * 0x4))

#define BUSMPU_MDINFRA_CTRL0                      (BASE_ADDR_MDPERIMISC + 0x178)
#define BUSMPU_MDINFRA_CTRL1                      (BASE_ADDR_MDPERIMISC + 0x17C)
#define BUSMPU_MDINFRA_CTRL2                      (BASE_ADDR_MDPERIMISC + 0x180)
#define BUSMPU_MDINFRA_CTRL3                      (BASE_ADDR_MDPERIMISC + 0x184)
#define BUSMPU_MDINFRA_CTRL4                      (BASE_ADDR_MDPERIMISC + 0x188)
#define BUSMPU_MDINFRA_CTRL(x)                    (BASE_ADDR_MDPERIMISC + 0x178 + ((x) * 0x4))

#define BUSMPU_MDMCU_DEFAULT_BLOCK                (BASE_ADDR_MDPERIMISC + 0x1A0)
#define BUSMPU_MDMCU_DISABLE                      (BASE_ADDR_MDPERIMISC + 0x1A4)

#define BUSMPU_MDMCU_R0                           (BASE_ADDR_MDPERIMISC + 0x1A8)
#define BUSMPU_MDMCU_R1                           (BASE_ADDR_MDPERIMISC + 0x1AC)
#define BUSMPU_MDMCU_R2                           (BASE_ADDR_MDPERIMISC + 0x1B0)
#define BUSMPU_MDMCU_R3                           (BASE_ADDR_MDPERIMISC + 0x1B4)
#define BUSMPU_MDMCU_R4                           (BASE_ADDR_MDPERIMISC + 0x1B8)
#define BUSMPU_MDMCU_R5                           (BASE_ADDR_MDPERIMISC + 0x1BC)
#define BUSMPU_MDMCU_R6                           (BASE_ADDR_MDPERIMISC + 0x1C0)
#define BUSMPU_MDMCU_R7                           (BASE_ADDR_MDPERIMISC + 0x1C4)
#define BUSMPU_MDMCU_R(x)                         (BASE_ADDR_MDPERIMISC + 0x1A8 + ((x) * 0x4))

#define BUSMPU_MDMCU_CTRL0                        (BASE_ADDR_MDPERIMISC + 0x1C8)
#define BUSMPU_MDMCU_CTRL1                        (BASE_ADDR_MDPERIMISC + 0x1CC)
#define BUSMPU_MDMCU_CTRL2                        (BASE_ADDR_MDPERIMISC + 0x1D0)
#define BUSMPU_MDMCU_CTRL3                        (BASE_ADDR_MDPERIMISC + 0x1D4)
#define BUSMPU_MDMCU_CTRL4                        (BASE_ADDR_MDPERIMISC + 0x1D8)
#define BUSMPU_MDMCU_CTRL5                        (BASE_ADDR_MDPERIMISC + 0x1DC)
#define BUSMPU_MDMCU_CTRL6                        (BASE_ADDR_MDPERIMISC + 0x1E0)
#define BUSMPU_MDMCU_CTRL7                        (BASE_ADDR_MDPERIMISC + 0x1E4)
#define BUSMPU_MDMCU_CTRL(x)                      (BASE_ADDR_MDPERIMISC + 0x1C8 + ((x) * 0x4))

//address of region
#define BUSMPU_Rx_START_MASK                      (0xFFFF0000)
#define BUSMPU_Rx_SHIFT                           (16)
#define BUSMPU_Rx_END_MASK                        (0xFFFF0000)
#define BUSMPU_Rx_ADDR(start,end)                 ((((start) & BUSMPU_Rx_START_MASK) >> BUSMPU_Rx_SHIFT) | ((end) & BUSMPU_Rx_END_MASK))

//control
#define BUSMPU_DOMAIN0_SHIFT                      (0)
#define BUSMPU_DOMAIN0_RW_SHIFT                   (3)
#define BUSMPU_DOMAIN1_SHIFT                      (4)
#define BUSMPU_DOMAIN1_RW_SHIFT                   (7)
#define BUSMPU_REGION_EN_SHIFT                    (8)
#define BUSMPU_SET_CTRL(d0,a0,d1,a1,en)           ((d0) << BUSMPU_DOMAIN0_SHIFT | ((a0) << BUSMPU_DOMAIN0_RW_SHIFT) | ((d1) << BUSMPU_DOMAIN1_SHIFT) | ((a1) << BUSMPU_DOMAIN1_RW_SHIFT)| ((en) << BUSMPU_REGION_EN_SHIFT))


///////////////////////////////////////////////////////////////////////////////
/// \name BUSMPU Violation Status Register Definition
///////////////////////////////////////////////////////////////////////////////
#define BASE_NADDR_BUSMPU_ERR_REG                   (BASE_ADDR_MCUSYS_MISC_REG + 0x10000)
#define BUSMPU_ERR_IOCU_INT_CTRL                    (BASE_NADDR_BUSMPU_ERR_REG + 0x0)
#define BUSMPU_ERR_EMI_INT_CTRL                     (BASE_NADDR_BUSMPU_ERR_REG + 0x4)
#define BUSMPU_ERR_IRQ_STATUS                       (BASE_NADDR_BUSMPU_ERR_REG + 0x10)
#define BUSMPU_ERR_IOCU_VIO_DATA0                   (BASE_NADDR_BUSMPU_ERR_REG + 0x20)
#define BUSMPU_ERR_IOCU_VIO_DATA1                   (BASE_NADDR_BUSMPU_ERR_REG + 0x24)
#define BUSMPU_ERR_EMI_VIO_DATA0                    (BASE_NADDR_BUSMPU_ERR_REG + 0x28)
#define BUSMPU_ERR_EMI_VIO_DATA1                    (BASE_NADDR_BUSMPU_ERR_REG + 0x2C)
#define BUSMPU_ERR_EMI_VIO_DATA2                    (BASE_NADDR_BUSMPU_ERR_REG + 0x30)

/*****************************************************************************

 *                       Symbol/Type Definition                              *

*****************************************************************************/

void busmpu_mdinfra_enable(void);
void busmpu_mdinfra_disable(void);
void busmpu_mdinfra_set_trigger_mode(kal_bool enable);
void busmpu_mdinfra_set_default_block(kal_bool enable);
void busmpu_mdinfra_clear_all_region(void);
void busmpu_mdinfra_clear_region(kal_uint32 index);
void busmpu_mdinfra_set_region(kal_uint32 index, kal_uint32 start_addr, kal_uint32 end_addr,kal_uint32 domain0, BUSMPU_PERMISSION_TYPE attribute0, kal_uint32 domain1, BUSMPU_PERMISSION_TYPE attribute1, kal_uint32 enable);
void busmpu_mdinfra_default_block(kal_uint32 enable);

kal_bool busmpu_mdinfra_dump_err(void);
kal_bool busmpu_mdinfra_clr_intr(void);

void busmpu_mdmcu_enable(void);
void busmpu_mdmcu_disable(void);
void busmpu_mdmcu_set_trigger_mode(kal_bool enable);
void busmpu_mdmcu_set_default_block(kal_bool enable);
void busmpu_mdmcu_clear_all_region(void);
void busmpu_mdmcu_clear_region(kal_uint32 index);
void busmpu_mdmcu_set_region( kal_uint32 index, kal_uint32 start_addr, kal_uint32 end_addr,kal_uint32 domain0, BUSMPU_PERMISSION_TYPE attribute0, kal_uint32 domain1, BUSMPU_PERMISSION_TYPE attribute1, kal_uint32 enable);
void busmpu_mdmcu_default_block(kal_uint32 enable);


kal_bool busmpu_mdmcu_dump_err(void);
kal_bool busmpu_mdmcu_clr_intr(void);
kal_bool busmpu_dump_irq_sts(void);

void busmpu_init(void);
#endif  /* end of __DRV_BUSMPU_H__ */


