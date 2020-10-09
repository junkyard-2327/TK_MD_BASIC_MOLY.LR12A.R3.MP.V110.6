#ifndef __BUSMPU_H__
#define __BUSMPU_H__

/*****************************************************************************

 *                       Symbol/Type Definition                              *

 *****************************************************************************/

//#if !defined(__OFFLINE_EX_LOG_PARSER__)

typedef enum BUSMPU_REGION_ATTRIBUTE_T
{
	BUSMPU_RO                          = 0x0,
	BUSMPU_RW                          = 0x1,
	BUSMON_PERMISSION_MAX
}BUSMPU_PERMISSION_TYPE;

//#endif /*__OFFLINE_EX_LOG_PARSER__*/
typedef kal_uint32 FIELD;

/**
 * 0x00 : MPU_IOCU_CTRL
 */
typedef union {
    struct {
        FIELD iocu_err_trig_mode    : 1;
        FIELD iocu_vio_clr          : 1;
        FIELD iocu_vio_info_clr     : 1;
        FIELD iocu_domain_int_en    : 1;
        FIELD iocu_align_int_en     : 1;
        FIELD rsv_5                 : 27;
    } Bits;
    FIELD Raw;
} busmpu_iocu_int_ctrl, *pbusmpu_iocu_int_ctrl;

/**
 * 0x04 : MPU_EMI_CTRL
 */
typedef union {
    struct {
        FIELD emi_err_trig_mode : 1;
        FIELD emi_vio_clr       : 1;
        FIELD emi_vio_info_clr  : 1;
        FIELD emi_domain_int_en : 1;
        FIELD rsv_4             : 28;
    } Bits;
    FIELD Raw;
} busmpu_emi_int_ctrl, *pbusmpu_emi_int_ctrl;

/**
 * 0x10 : MPU_IRQ_STATUS
 */
typedef union {
    struct {
        FIELD iocu_wt_domain    : 1;
        FIELD iocu_rd_domain    : 1;
        FIELD iocu_wt_align     : 1;
        FIELD iocu_rd_align     : 1;
        FIELD iocu_int_status   : 1;
        FIELD emi_wt_domain     : 1;
        FIELD emi_rd_domain     : 1;
        FIELD emi_int_status    : 1;
        FIELD rsv_8             : 24;
    } Bits;
    FIELD Raw;
} busmpu_irq_status, *pbusmpu_irq_status;

/**
 * 0x20 : MPU_IOCU_VIO_DATA0
 */
typedef union {
    struct {
        FIELD iocu_addr     : 32;
    } Bits;
    FIELD Raw;
} busmpu_iocu_vio_addr, *pbusmpu_iocu_vio_addr;

/**
 * 0x24 : MPU_IOCU_VIO_DATA1
 */
typedef union {
    struct {
        FIELD iocu_id       : 12;
        FIELD iocu_domain   : 3;
        FIELD iocu_ro       : 1;
        FIELD iocu_region   : 5;
        FIELD iocu_burst    : 2;
        FIELD iocu_size     : 3;
        FIELD iocu_len      : 4;
        FIELD rsv_30        : 2;
    } Bits;
    FIELD Raw;
} busmpu_iocu_vio_info, *pbusmpu_iocu_vio_info;

/**
 * 0x28 : MPU_EMI_VIO_DATA0
 */
typedef union {
    struct {
        FIELD emi_addr      : 32;
    } Bits;
    FIELD Raw;
} busmpu_emi_vio_addr, *pbusmpu_emi_vio_addr;

/**
 * 0x2C : MPU_EMI_VIO_DATA1
 */
typedef union {
    struct {
        FIELD emi_id        : 12;
        FIELD emi_domain    : 3;
        FIELD emi_ro        : 1;
        FIELD emi_region    : 8;
        FIELD rsv_24        : 8;
    } Bits;
    FIELD Raw;
} busmpu_emi_vio_info, *pbusmpu_emi_vio_info;

/**
 * 0x30 : MPU_EMI_VIO_DATA2
 */
typedef union {
    struct {
        FIELD emi_user      : 12;
        FIELD rsv_12        : 20;
    } Bits;
    FIELD Raw;
} busmpu_emi_vio_user, *pbusmpu_emi_vio_user;

typedef volatile struct {
    busmpu_iocu_int_ctrl    iocu_ctrl;  // 0000
    busmpu_emi_int_ctrl     emi_ctrl;   // 0004
    FIELD                   rsv_0008[2];    // 0008..000C
    busmpu_irq_status       irq_status;     // 0010
    FIELD                   rsv_0014[3];    // 0014..001C
    busmpu_iocu_vio_addr    iocu_vio_addr;  // 0020
    busmpu_iocu_vio_info    iocu_vio_info;  // 0024
    busmpu_emi_vio_addr     emi_vio_addr;   // 0028
    busmpu_emi_vio_info     emi_vio_info;   // 002C
    busmpu_emi_vio_user     emi_vio_user;   // 0030
} busmpu_reg, *pbusmpu_reg;

typedef struct {
    busmpu_iocu_vio_addr    addr;
    busmpu_iocu_vio_info    info;
} busmpu_iocu_vio_data, busmpu_mdinfra_error_info_st;

typedef struct {
    busmpu_emi_vio_addr     addr;
    busmpu_emi_vio_info     info;
    busmpu_emi_vio_user     user;
} busmpu_emi_vio_data, busmpu_mdmcu_error_info_st;

extern kal_bool busmpu_mdinfra_dump_err(void);
extern kal_bool busmpu_mdmcu_dump_err(void);
extern kal_bool busmpu_dump_irq_sts(void);
extern void busmpu_init(void);
extern volatile busmpu_emi_vio_data busmpu_emi_err;
extern volatile busmpu_iocu_vio_data busmpu_iocu_err;
extern volatile busmpu_irq_status busmpu_irq_sts;
void drv_iocu_lisr(kal_uint32 v);
void iocu_align_init(void);
void drv_rmpu_lisr(kal_uint32 v);
void rmpu_md_init(void);

#endif /*__BUSMPU_H__*/

