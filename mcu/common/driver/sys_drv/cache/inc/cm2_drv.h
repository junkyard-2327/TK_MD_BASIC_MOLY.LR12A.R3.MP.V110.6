
#ifndef __CM2_DRV_H__
#define __CM2_DRV_H__
/*==============================================*/
/*              register field define           */
/*==============================================*/
#include "init_comm.h"
#define NONCACHED_CODE __attribute__((section("NONCACHED_ROCODE"))) __attribute__((noinline))

#define CM2_REGION_NUM 4
#define CM2_AO_REGION_NUM 4
#define CM2_DUMP_MAGIC                (kal_uint32)(0x434D3200) //"CM2"

#define REG_MASK_Mask   0xffff0000
#define REG_MASK_OFFSET       (16)
#define REG_MASK_CCA    0x000000E0
#define REG_CCA_OFFSET         (5)
#define REG_MASK_CCAEN  0x00000010
#define REG_CCAEN_OFFSET       (4)

#define REG_MASK_DROPL2 0x00000004
#define REG_MASK_TARGET 0x00000003
#define REG_TARGET_OFFSET      (0)

#define GCR_DEFAULT_REGION ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x0008)))

#define GCR_REG_BASE0 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x0090)))
#define GCR_REG_BASE1 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x00a0)))
#define GCR_REG_BASE2 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x00b0)))
#define GCR_REG_BASE3 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x00c0)))

#define GCR_REG_MASK0 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x0098)))
#define GCR_REG_MASK1 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x00a8)))
#define GCR_REG_MASK2 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x00b8)))
#define GCR_REG_MASK3 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x00c8)))
    /* CM2 Attribute-Only Regions*/
#define GCR_AO_REG_BASE0 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x0190)))
#define GCR_AO_REG_BASE1 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x01a0)))
#define GCR_AO_REG_BASE2 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x0210)))
#define GCR_AO_REG_BASE3 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x0220)))

#define GCR_AO_REG_MASK0 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x0198)))
#define GCR_AO_REG_MASK1 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x01a8)))
#define GCR_AO_REG_MASK2 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x0218)))
#define GCR_AO_REG_MASK3 ((*(volatile kal_uint32 *)(GCR_CONFIG_ADDR + 0x0228)))

#define GCR_PRIORITY_SETTING ((*(volatile kal_uint32 *)(GCR_CUSTOM_ADDR)))
#define IOCU_SP_COUNTER      ((*(volatile kal_uint32 *)(GCR_CUSTOM_ADDR + 0x4)))


typedef enum CM2_RGN_SIZE_T
{
    RGN_SIZE_64KB  = 0xFFFF ,
    RGN_SIZE_128KB = 0xFFFE ,
    RGN_SIZE_256KB = 0xFFFC ,
    RGN_SIZE_512KB = 0xFFF8 ,
    RGN_SIZE_1MB   = 0xFFF0 ,
    RGN_SIZE_2MB   = 0xFFE0 ,
    RGN_SIZE_4MB   = 0xFFC0 ,
    RGN_SIZE_8MB   = 0xFF80 ,
    RGN_SIZE_16MB  = 0xFF00 ,
    RGN_SIZE_32MB  = 0xFE00 ,
    RGN_SIZE_64MB  = 0xFC00 ,
    RGN_SIZE_128MB = 0xF800 ,
    RGN_SIZE_256MB = 0xF000 ,
    RGN_SIZE_512MB = 0xE000 ,
    RGN_SIZE_1GB   = 0xC000 ,
    RGN_SIZE_2GB   = 0x8000 ,
    RGN_SIZE_4GB   = 0x0000 
}CM2_RGN_SIZE_TYPE;

typedef enum CM2_CCA_T
{
    /*Cache coherency attribute (CCA)*/
    CM2_CCA_WT	    = 0,
    CM2_CCA_UC		= 2,
    CM2_CCA_WB		= 3, 
    CM2_CCA_CWBE	= 4, /* remap to WB*/
    CM2_CCA_CWB		= 5, /* remap to WB*/
    CM2_CCA_UCA		= 7

}CM2_CCA_TYPE;

typedef enum CM2_CCAEN_T
{
    CM2_CCAEN_DISABLE	    = 0,
    CM2_CCAEN_ENABLE		= 1
}CM2_CCAEN_TYPE;

typedef enum CM2_DEFAULT_TARGET_T
{
    CM2_DEFAULT_TARGET_MEMORY	    = 0,
    CM2_DEFAULT_TARGET_RESERVED		= 1,
    CM2_DEFAULT_TARGET_IOCU0	    = 2,
    CM2_DEFAULT_TARGET_IOCU1		= 3
}CM2_DEFAULT_TARGET_TYPE;

typedef enum CM2_TARGET_T
{
    CM2_TARGET_DISABLE	    = 0,
    CM2_TARGET_MEMORY		= 1,
    CM2_TARGET_IOCU0	    = 2,
    CM2_TARGET_IOCU1		= 3
}CM2_TARGET_TYPE;

/* MPU Setting Dump Data Structure */
typedef struct CM2_REGION_T
{
    kal_uint32              Region_Base_Address;
    CM2_RGN_SIZE_TYPE       Region_Mask;
    CM2_CCA_TYPE            Region_CCA;  
    CM2_CCAEN_TYPE          Region_CCAEN; 
    CM2_TARGET_TYPE         Region_Target;
} _CM2_REGION;

typedef struct CM2_DEFAULT_REGION_T
{
    kal_uint32              GCR_Base;
    CM2_CCA_TYPE            Region_CCA;  
    CM2_CCAEN_TYPE          Region_CCAEN; 
    CM2_DEFAULT_TARGET_TYPE Region_Target;
} _CM2_DEFAULT_REGION;

typedef struct CM2_DUMP_T
{
    kal_uint32            magic_pattern;                /* Magic pattern to check if this dump data is valid */ 
    _CM2_DEFAULT_REGION   region_default;
    _CM2_REGION           region[CM2_REGION_NUM];       /* Setting for each region */
    _CM2_REGION           region_AO[CM2_AO_REGION_NUM]; 
} CM2_REG_DUMP;

#define PRI_ENABLE                0x10000
#define IOCU0_HIGH_PRI_EN          0x1000
#define IOCU1_HIGH_PRI_EN          0x2000

#define CORE0_HIGH_PRI_EN          0x0100
#define CORE1_HIGH_PRI_EN          0x0200
#define CORE2_HIGH_PRI_EN          0x0400
#define CORE3_HIGH_PRI_EN          0x0800

#define IOCU1_SP_COUNTER_EN        0x0010
#define IOCU0_SP_COUNTER_EN        0x0001

#define IOCU0_SP_COUNTER_MASK  0x0000ffff
#define IOCU0_SP_COUNTER_SHIFT        (0)
#define IOCU1_SP_COUNTER_MASK  0xffff0000
#define IOCU1_SP_COUNTER_SHIFT       (16)

#define IOCU0_SP_COUNT (0x10) //define starvation count = 16


/******************************************************************
 * Export Function Prototypes
 ******************************************************************/
extern HW_CORENUM query_cm2_corenum(void);
extern  __attribute__((long_call)) kal_bool cm2_set_default_region(CM2_CCA_TYPE l2cca, CM2_CCAEN_TYPE l2ccaen, CM2_DEFAULT_TARGET_TYPE target);
extern  __attribute__((long_call)) kal_bool cm2_set_region(kal_uint32 region_num, kal_uint32 base_addr, CM2_RGN_SIZE_TYPE mask, CM2_CCA_TYPE l2cca, CM2_CCAEN_TYPE l2ccaen, CM2_TARGET_TYPE target);
extern  __attribute__((long_call)) kal_bool cm2_set_AO_region(kal_uint32 region_num, kal_uint32 base_addr, CM2_RGN_SIZE_TYPE mask, CM2_CCA_TYPE l2cca, CM2_CCAEN_TYPE l2ccaen);
extern kal_bool cm2_region_dump(CM2_REG_DUMP * cm2_dump_output);
extern  __attribute__((long_call)) kal_bool cm2_set_core_high_priority(void);
extern  __attribute__((long_call)) kal_bool cm2_set_iocu_high_priority(void);
extern  __attribute__((long_call)) kal_bool cm2_priority_setting(kal_uint32 priority_setting, kal_uint32 iocu_SPcounter);


#endif  /* !__CM2_DRV_H__ */
