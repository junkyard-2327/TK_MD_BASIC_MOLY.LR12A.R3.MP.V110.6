/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   mpu.h
 *
 * Project:
 * --------
 *   UMOLYA Software
 *
 * Description:
 * ------------
 *   Header file for IA MPU
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __MPU_H__
#define __MPU_H__

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "sync_data.h" 
#include "mpu_public.h"
#include "cache_sw_int.h"  /* for MAP2CREGVA */

#define MPU_CDMM_base ((0x1fc10000)+(0x40)*3)

#define MPU_ACSR              (MPU_CDMM_base+0x0)
#define MPU_CONFIG            (MPU_CDMM_base+0x8)
#define MPU_SEGMENT_CTRL(x)   (MPU_CDMM_base+0x10+(0x4)*(x))
#define MPU_REGION_ADDRESS(x) (MPU_CDMM_base+0x20+(0x8)*(x))
#define MPU_REGION_CONTROL(x) (MPU_CDMM_base+0x24+(0x8)*(x))

#define RI(x)     (((x)&0x1)<<5)
#define WI(x)     (((x)&0x1)<<4)
#define XI(x)     (((x)&0x1)<<3)
#define CCA(x)    (((x)&0x7)<<0)
#define COUNT(x)  (((x)&0xF)<<6)
#define SIZE(x)   (((x)&0x1F)<<10)
#define EN(x)     (((x)&0x1)<<15)

#define Seg0_offset (0)
#define Seg2_offset (8)
#define Seg4_offset (16)
#define Seg6_offset (24)

#define MPU_SEGMENT_NUM                4
#define MPU_REGION_NUM                24

#define MPU_USE_FREE_REGION           32
/*  CCCI SHARE MEM */
#define MPU_SHM_NC_NUM                ((MPU_REGION_NUM-1))  /*23*/
/*  DHL SHARE MEM*/
#define MPU_SHM_C_NUM                 ((MPU_REGION_NUM-2))  /*22*/
/*  NULL PROT*/
#define MPU_NULL_PROT_NUM             ((MPU_REGION_NUM-3))  /*21*/
/*  ISPRAM PROT*/
#define MPU_ISPRAM_ADT_PROT_NUM       ((MPU_REGION_NUM-4))  /*20*/
#define MPU_DSPRAM_PROT_NUM           ((MPU_REGION_NUM-5))  /*19*/
#define MPU_ISPRAM_PROT_NUM           ((MPU_REGION_NUM-6))  /*18*/
#define MPU_DSPRAM1_PROT_NUM          ((MPU_REGION_NUM-7))  /*17*/
#define MPU_ISPRAM1_PROT_NUM          ((MPU_REGION_NUM-8))  /*16*/
#define MPU_ISPRAM_ACCESS_PROT_NUM    ((MPU_REGION_NUM-9))  /*15*/
#define MPU_DSP_1st_NUM               ((MPU_REGION_NUM-10)) /*14*/
#define MPU_DSP_2nd_NUM               ((MPU_REGION_NUM-11)) /*13*/
#define MPU_L4_NUM                    ((MPU_REGION_NUM-12)) /*12*/

#define MPU_VIVO_DAPC_1st_NUM         ((MPU_REGION_NUM-13)) /*11*/
#define MPU_VIVO_DAPC_2nd_NUM         ((MPU_REGION_NUM-14)) /*10*/


#define MPU_REGION_MAX_SIZE           RGN_SIZE_256MB
#define MPU_REGION_MIN_SIZE           RGN_SIZE_32B

#define MPU_DUMP_MAGIC                (kal_uint32)(0x4D505500) //"MPU"

/* mpu for shm Data Structure */
typedef struct SHM_REGION_T
{
    kal_uint32            shm_base;
    kal_uint32            shm_size;
} SHM_REGION;

/* mpu for DSP Data Structure */
typedef struct DSP_REGION_T
{
    kal_uint32            dsp_base;
    kal_uint32            dsp_size;
} DSP_REGION;

/******************************************************************
 * Define enums
 ******************************************************************/
/* Region size enum */
typedef enum RGN_SIZE_T
{
    RGN_SIZE_32B  =  5 ,
    RGN_SIZE_64B  =  6 ,
    RGN_SIZE_128B =  7 ,
    RGN_SIZE_256B =  8 ,
    RGN_SIZE_512B =  9 ,
    RGN_SIZE_1KB =  10 ,
    RGN_SIZE_2KB =  11 ,
    RGN_SIZE_4KB =  12 ,
    RGN_SIZE_8KB =  13 ,
    RGN_SIZE_16KB = 14 ,
    RGN_SIZE_32KB = 15 ,
    RGN_SIZE_64KB = 16 ,
    RGN_SIZE_128KB = 17 ,
    RGN_SIZE_256KB = 18 ,
    RGN_SIZE_512KB = 19 ,
    RGN_SIZE_1MB =   20 ,
    RGN_SIZE_2MB =   21 ,
    RGN_SIZE_4MB =   22 ,
    RGN_SIZE_8MB =   23 ,
    RGN_SIZE_16MB =  24 ,
    RGN_SIZE_32MB =  25 ,
    RGN_SIZE_64MB =  26 ,
    RGN_SIZE_128MB  = 27 ,
    RGN_SIZE_256MB  = 28 ,
    RGN_SIZE_512MB  = 29 ,
    RGN_SIZE_1GB    = 30 ,
    RGN_SIZE_2GB    = 31 ,
    RGN_SIZE_4GB    = 32
}RGN_SIZE_TYPE;

/* Region access permission and cacheability setting */
typedef enum REGION_ATTRIBUTE_T
{

    //5    4   3   [2:0]
    //RI  WI  XI    CCA

    // Execution control
    MPU_XI                           = 0x00000008,

    //Permission control
    MPU_NA                           = 0x00000030, 
    MPU_RO                           = 0x00000010,
    MPU_WO                           = 0x00000020,
    MPU_RW                           = 0x00000000,

    //memory type
    MPU_CCA_UC        = 0x00000002,
    MPU_CCA_WB        = 0x00000003, 
    MPU_CCA_CWBE      = 0x00000004,
    MPU_CCA_CWB       = 0x00000005,
    MPU_CCA_UCA       = 0x00000007,      
}REGION_ATTRIBUTE_TYPE;

typedef enum DSP_MPU_SETTING_T
{
    FIRST_MPU_SETTING = 3,
    SECOND_MPU_SETTING = 4,
    EXCEPTION_MPU_SETTING = 5,
    CHKSUM_MPU_SETTING = 6
} DSP_MPU_SETTING_TYPE;

/******************************************************************
 * Define date structures
 ******************************************************************/

/* MPU setting for one region */
typedef struct REGION_SETTING_T
{
   kal_uint32            addr;                /* Region base address */
   RGN_SIZE_TYPE         size;                /* Region range (size) */
   RGN_SIZE_TYPE         subregion_count;                /* Region range (size) */
   kal_uint32            rgn_no;              /* Region number */
   REGION_ATTRIBUTE_TYPE attribute;           /* Region attrubute */
   kal_uint32            disable_subregion;   /* Flags for disabled sub-region */
   kal_uint32            enable;              /* Region Enable/Disable */
} REGION_SETTING_TYPE;


typedef struct MPU_REGION_SEGMENT_T
{
    kal_uint8             RI;  
    kal_uint8             WI;  
    kal_uint8             XI;      
    kal_uint8             CCA;  
} _MPU_SEGMENT;


/* MPU Setting Dump Data Structure */
typedef struct MPU_REGION_T
{
    kal_uint32            Region_Base_Address;
    kal_uint8             Region_Enable;
    RGN_SIZE_TYPE         SubRegion_Size;
    kal_uint8             SubRegion_Count;
    kal_uint8             RI;  
    kal_uint8             WI;  
    kal_uint8             XI;      
    kal_uint8             CCA;  

} _MPU_REGION;
typedef struct MPU_DUMP_T
{
    kal_uint32            magic_pattern;          /* Magic pattern to check if this dump data is valid */    
    _MPU_SEGMENT          segment_control[16];
    _MPU_REGION           region[MPU_REGION_NUM]; /* Setting for each region */
    _MPU_REG              mpu_reg;
} MPU_DUMP;
typedef struct MPU_DORMANT_REGION_T
{
	kal_uint32 base_addr;
	kal_uint32 control;
}_MPU_DORMANT_REGION;

typedef struct MPU_DORMANT_T
{
    kal_uint32          	segment_control[MPU_SEGMENT_NUM];
    _MPU_DORMANT_REGION     region[MPU_REGION_NUM]; /* Setting for each region */
} MPU_DORMANT;

#define SYSTEM_SET_DSP_PROTECTION(addr_0, len_0, addr_1, len_1, mpu_type)                                                               \
do{                                                                                                                                     \
    extern DSP_REGION dsp_region[];                                                                                                     \
    kal_uint32 ex_dsp_mpu_len = 0;                                                                                                      \
    if (mpu_type == FIRST_MPU_SETTING){                                                                                                 \
        dsp_region[0].dsp_base = addr_0;                                                                                                \
        dsp_region[0].dsp_size = len_0;                                                                                                 \
        dsp_region[1].dsp_base = addr_1;                                                                                                \
        dsp_region[1].dsp_size = len_1;                                                                                                 \
        if((addr_0 != 0) && (len_0 !=0))                                                                                                \
          mpu_auto_make_region( addr_0, len_0, MPU_XI | MPU_RO | MPU_CCA_UCA, 0, MPU_DSP_1st_NUM);                                      \
        if((addr_1 != 0) && (len_1 !=0))                                                                                                \
          mpu_auto_make_region( addr_1, len_1, MPU_XI | MPU_RW | MPU_CCA_UCA, 1, MPU_DSP_2nd_NUM);                                      \
    }else if(mpu_type == SECOND_MPU_SETTING){                                                                                           \
        dsp_region[2].dsp_base = addr_0;                                                                                                \
        dsp_region[2].dsp_size = len_0;                                                                                                 \
        dsp_region[3].dsp_base = addr_1;                                                                                                \
        dsp_region[3].dsp_size = len_1;                                                                                                 \
        if((addr_0 != 0) && (len_0 !=0))                                                                                                \
          mpu_auto_make_region( addr_0, len_0, MPU_XI | MPU_RW | MPU_CCA_UCA, 1, MPU_DSP_1st_NUM);                                      \
        if((addr_1 != 0) && (len_1 !=0))                                                                                                \
          mpu_auto_make_region( MAP2CREGVA(addr_1), len_1, MPU_XI | MPU_RW | MPU_CCA_CWB, 1, MPU_DSP_2nd_NUM);                          \
    }else if(mpu_type == EXCEPTION_MPU_SETTING){                                                                                        \
        ex_dsp_mpu_len = dsp_region[1].dsp_base + dsp_region[1].dsp_size - dsp_region[0].dsp_base;                                      \
        if((dsp_region[0].dsp_base != 0) && (ex_dsp_mpu_len !=0)){                                                                      \
          mpu_auto_make_region( dsp_region[0].dsp_base, ex_dsp_mpu_len, MPU_XI | MPU_RW | MPU_CCA_UCA, 1, MPU_DSP_1st_NUM);             \
          mpu_auto_make_region( MAP2CREGVA(dsp_region[0].dsp_base), ex_dsp_mpu_len, MPU_XI | MPU_RW | MPU_CCA_CWB, 1, MPU_DSP_2nd_NUM); \
        }                                                                                                                               \
    }else if(mpu_type == CHKSUM_MPU_SETTING){                                                                                           \
        dsp_region[0].dsp_base = addr_0;                                                                                                \
        dsp_region[0].dsp_size = len_0;                                                                                                 \
        if((addr_0 != 0) && (len_0 !=0))                                                                                                \
          mpu_auto_make_region( addr_0, len_0, MPU_XI | MPU_RO | MPU_CCA_CWB, 0, MPU_DSP_1st_NUM);                                      \
        /* addr_1, len_1 are intentionally ignored to keep previous setting */                                                          \
    }else{ASSERT(0);}                                                                                                                   \
}while(0)

extern kal_uint32 mpu_auto_make_region(kal_uint32 base_addr, kal_uint32 length, REGION_ATTRIBUTE_TYPE attribute, kal_uint32 mode, kal_uint32 fix_region_num);
extern kal_bool mpu_dump(MPU_DUMP * mpu_dump_output);

void system_set_mpu(void); 
void system_exception_set_mpu(void);

//extern void ccif_set_share_mem_mpu (kal_uint32 address, kal_uint32 size);
//extern void dhl_set_share_mem_mpu (kal_uint32 address, kal_uint32 size);

/* share memory setting*/
void system_set_share_mem(kal_uint32 * shm_setting);
kal_bool system_is_share_mem(kal_uint32 address);
void system_query_noncacheable_shm_info(kal_uint32 *start_addr, kal_uint32 *end_addr , kal_uint32 *size);
void system_query_cacheable_shm_info(kal_uint32 *start_addr, kal_uint32 *end_addr , kal_uint32 *size);

extern SHM_REGION shm_region[];

#if (!defined(__ANDROID_MODEM__)&& defined(__SCC_SIB_SUPPORT__))
extern void system_set_sib_mem(kal_uint32 base_addr, kal_uint32 length);
#endif
extern void system_set_ispram_protection(kal_uint32 mpu_index,kal_uint32 addr, kal_bool value);

void system_set_null_protection(kal_bool value);
void system_set_mpu_DRDI(kal_uint32 addr, kal_uint32 size);
void system_set_l4_mem(kal_uint32 * shm_setting);


#endif  /* __MPU_H__ */

