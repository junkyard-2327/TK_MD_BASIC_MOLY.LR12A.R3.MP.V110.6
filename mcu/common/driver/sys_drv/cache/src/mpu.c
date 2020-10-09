

#include "kal_public_api.h"
#include "mpu.h"
#include "custom_scatstruct.h"
//#include "custom_EMI_release.h"     //For EMI_EXTSRAM_SIZE
#include "cache_sw_int.h"

#include "sst_defs.h"
#include "init_trc_api.h"

#if defined(__HIF_CCCI_SUPPORT__)
#include "ccci_if.h"
#endif
#define NONCACHED_CODE __attribute__((section("NONCACHED_ROCODE"))) __attribute__((noinline))
#define MPU_RW_NOINIT_DATA __attribute__((section("MCURW_HWRO_DNC_NOINIT"))) __attribute__((noinline))
#define MPU_RO_NOINIT_DATA __attribute__((section("NONCACHED_RODATA"))) __attribute__((noinline))


SHM_REGION shm_region[4];
DSP_REGION dsp_region[4];
SHM_REGION emm_region;
SHM_REGION l4_region;

extern kal_uint32 Image$$ISPRAM0_PHYSICAL_BOUNDARY$$Base;
extern kal_uint32 Image$$ISPRAM0A_PHYSICAL_BOUNDARY$$Base;
extern kal_uint32 Image$$ISPRAM0B_PHYSICAL_BOUNDARY$$Base;
extern kal_uint32 Image$$ISPRAM0C_PHYSICAL_BOUNDARY$$Base;

/* 
  [MPU_RW_NOINIT_DATA] :
    will not do region init and there is no load view memory reserved.
    default value would be random, and user need to do region init by themselves.
    
  [MPU_RO_NOINIT_DATA] :
    will not do region init. it will has load view = execution view.
    default value would be defined value.
*/
MPU_RW_NOINIT_DATA kal_uint32 mpu_region_record_core0;
MPU_RW_NOINIT_DATA kal_uint32 mpu_region_record_core1;
/* log the total usage of MPU region by automake API */
MPU_RW_NOINIT_DATA kal_uint32 mpu_region_used_core0;
MPU_RW_NOINIT_DATA kal_uint32 mpu_region_used_core1;

MPU_RW_NOINIT_DATA MPU_DUMP IA_MPU_SETTING_CORE0;
MPU_RW_NOINIT_DATA MPU_DUMP IA_MPU_SETTING_CORE1;
MPU_RW_NOINIT_DATA MPU_DUMP IA_MPU_SETTING_CORE_EX[SYS_MCU_NUM_CORE];
_MPU_REG *IA_MPU_REG_PTR[SYS_MCU_NUM_CORE];

/* To Do: 
    NULL protection need to be enable after region init
    and we can use fixed region to do that!
*/
                                                                               /*Index      Base    Control MPU         CCA   Page size  Page count */ 
MPU_RO_NOINIT_DATA kal_uint32 mpu_region_config_core0[64] = {0x00000000,0x0000680f /*   1 0x00000000 0x0000e80a MPU_RW   MPU_CCA_UCA    64MB         1*/, \
                            							 0x00000000,0x00005707 /*   2 0x00000000 0x0000d707 MPU_RWEX MPU_CCA_UCA     2MB        13*/, \
                            							 0x61a00000,0x0000549d /*   3 0x61a00000 0x0000d49d MPU_RO   MPU_CCA_CWB     2MB         3*/, \
                            							 0x62000000,0x0000641d /*   4 0x62000000 0x0000e41d MPU_RO   MPU_CCA_CWB    32MB         1*/, \
                            							 0x64000000,0x0000684d /*   5 0x64000000 0x0000e84d MPU_RW   MPU_CCA_CWB    64MB         2*/, \
                            							 0x6c000000,0x0000588d /*   6 0x6c000000 0x0000d88d MPU_RW   MPU_CCA_CWB     4MB         3*/, \
                            							 0x9cc00000,0x00003c05 /*   7 0x9cc00000 0x0000bc05 MPU_RWEX MPU_CCA_CWB    32KB         1*/, \
                            							 0x2c400000,0x0000584d /*   8 0x2c400000 0x0000d84d MPU_RW   MPU_CCA_CWB     4MB         2*/, \
                            							 0x6d000000,0x0000580b /*   9 0x6d000000 0x0000d80b MPU_RW   MPU_CCA_WB      4MB         1*/, \
                            							 0x0d400000,0x0000583f /*  10 0x0d400000 0x0000d83f MPU_NA   MPU_CCA_UCA     4MB         1*/, \
                            							 0x00000000,0x00004e97 /*  11 0x00000000 0x0000ce97 MPU_ROEX MPU_CCA_UCA   512KB        11*/, \
                            							 0x9f000000,0x00005803 /*  12 0x9f000000 0x0000d803 MPU_RWEX MPU_CCA_WB      4MB         1*/, \
                            							 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000};

MPU_RO_NOINIT_DATA kal_uint32 mpu_region_config_core1[64] = { 0x00000000,0x0000680f /*   1 0x00000000 0x0000e80a MPU_RW   MPU_CCA_UCA    64MB         1*/, \
                            							  0x00000000,0x00005707 /*   2 0x00000000 0x0000d707 MPU_RWEX MPU_CCA_UCA     2MB        13*/, \
                            							  0x61a00000,0x0000549d /*   3 0x61a00000 0x0000d49d MPU_RO   MPU_CCA_CWB     2MB         3*/, \
                            							  0x62000000,0x0000641d /*   4 0x62000000 0x0000e41d MPU_RO   MPU_CCA_CWB    32MB         1*/, \
                            							  0x64000000,0x0000684d /*   5 0x64000000 0x0000e84d MPU_RW   MPU_CCA_CWB    64MB         2*/, \
                            							  0x6c000000,0x0000588d /*   6 0x6c000000 0x0000d88d MPU_RW   MPU_CCA_CWB     4MB         3*/, \
                            							  0x9cc00000,0x00003c05 /*   7 0x9cc00000 0x0000bc05 MPU_RWEX MPU_CCA_CWB    32KB         1*/, \
                            							  0x2c400000,0x0000584d /*   8 0x2c400000 0x0000d84d MPU_RW   MPU_CCA_CWB     4MB         2*/, \
                            							  0x6d400000,0x0000580b /*   9 0x6d400000 0x0000d80b MPU_RW   MPU_CCA_WB      4MB         1*/, \
                            							  0x0d000000,0x0000583f /*  10 0x0d000000 0x0000d83f MPU_NA   MPU_CCA_UCA     4MB         1*/, \
                            							  0x00000000,0x00004e97 /*  11 0x00000000 0x0000ce97 MPU_ROEX MPU_CCA_UCA   512KB        11*/, \
                            							  0x9f400000,0x00005803 /*  12 0x9f400000 0x0000d803 MPU_RWEX MPU_CCA_WB      4MB         1*/, \
                            							  0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							  0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							  0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							  0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							  0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000};
#if !defined(MT6763) && !defined(MT6739) && !defined(MT6771) && !defined(MT6765) && !defined(MT6761)
MPU_RW_NOINIT_DATA kal_uint32 mpu_region_record_core2;
MPU_RW_NOINIT_DATA kal_uint32 mpu_region_record_core3;
MPU_RW_NOINIT_DATA kal_uint32 mpu_region_used_core2;
MPU_RW_NOINIT_DATA kal_uint32 mpu_region_used_core3;

MPU_RW_NOINIT_DATA MPU_DUMP IA_MPU_SETTING_CORE2;
MPU_RW_NOINIT_DATA MPU_DUMP IA_MPU_SETTING_CORE3;
                                                                               /*Index      Base    Control MPU         CCA   Page size  Page count */ 
MPU_RO_NOINIT_DATA kal_uint32 mpu_region_config_core2[64] = {0x00000000,0x0000681a /*   1 0x00000000 0x0000e81a MPU_RO   MPU_CCA_UC     64MB         1*/, \
                            							 0x00000000,0x00005712 /*   2 0x00000000 0x0000d712 MPU_ROEX MPU_CCA_UC      2MB        13*/, \
                            							 0x61a00000,0x0000549d /*   3 0x61a00000 0x0000d49d MPU_RO   MPU_CCA_CWB     2MB         3*/, \
                            							 0x62000000,0x0000641d /*   4 0x62000000 0x0000e41d MPU_RO   MPU_CCA_CWB    32MB         1*/, \
                            							 0x64000000,0x0000684d /*   5 0x64000000 0x0000e84d MPU_RW   MPU_CCA_CWB    64MB         2*/, \
                            							 0x6c000000,0x0000588d /*   6 0x6c000000 0x0000d88d MPU_RW   MPU_CCA_CWB     4MB         3*/, \
                            							 0x9cc00000,0x00003c05 /*   7 0x9cc00000 0x0000bc0d MPU_RWEX MPU_CCA_CWB    32KB         1*/, \
                            							 0x2c400000,0x0000584d /*   8 0x2c400000 0x0000d84d MPU_RW   MPU_CCA_CWB     4MB         2*/, \
                            							 0x6d000000,0x0000580b /*   9 0x6d000000 0x0000d80b MPU_RW   MPU_CCA_WB      4MB         1*/, \
                            							 0x0d400000,0x0000383a /*  10 0x0d400000 0x0000d80b MPU_NA   MPU_CCA_UC      4MB         1*/, \
                            							 0x00000000,0x00004e97 /*  11 0x00000000 0x0000ceba MPU_NA   MPU_CCA_UC    512KB        11*/, \
                            							 0x9f000000,0x00005803 /*  12 0x9f000000 0x0000d80a MPU_RW   MPU_CCA_UC      4MB         1*/, \
                            							 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000};

MPU_RO_NOINIT_DATA kal_uint32 mpu_region_config_core3[64] = { 0x00000000,0x0000681a /*   1 0x00000000 0x0000e81a MPU_RO   MPU_CCA_UC     64MB         1*/, \
                            							  0x00000000,0x00005712 /*   2 0x00000000 0x0000d712 MPU_ROEX MPU_CCA_UC      2MB        13*/, \
                            							  0x61a00000,0x0000549d /*   3 0x61a00000 0x0000d49d MPU_RO   MPU_CCA_CWB     2MB         3*/, \
                            							  0x62000000,0x0000641d /*   4 0x62000000 0x0000e41d MPU_RO   MPU_CCA_CWB    32MB         1*/, \
                            							  0x64000000,0x0000684d /*   5 0x64000000 0x0000e84d MPU_RW   MPU_CCA_CWB    64MB         2*/, \
                            							  0x6c000000,0x0000588d /*   6 0x6c000000 0x0000d88d MPU_RW   MPU_CCA_CWB     4MB         3*/, \
                            							  0x9cc00000,0x00003c05 /*   7 0x9cc00000 0x0000bc0d MPU_RWEX MPU_CCA_CWB    32KB         1*/, \
                            							  0x2c400000,0x0000584d /*   8 0x2c400000 0x0000d84d MPU_RW   MPU_CCA_CWB     4MB         2*/, \
                            							  0x6d400000,0x0000580b /*   9 0x6d400000 0x0000d80b MPU_RW   MPU_CCA_WB      4MB         1*/, \
                            							  0x0d000000,0x0000583a /*  10 0x0d000000 0x0000d80b MPU_NA   MPU_CCA_UC      4MB         1*/, \
                            							  0x00000000,0x00004e97 /*  11 0x00000000 0x0000ceba MPU_NA   MPU_CCA_UC    512KB        11*/, \
                            							  0x9f000000,0x00005803 /*  12 0x9f000000 0x0000d80a MPU_RW   MPU_CCA_UC      4MB         1*/, \
                            							  0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							  0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							  0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							  0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000, \
                            							  0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000};
#endif

#define MPU_Sync() do {\
        __asm__ volatile (\
            "sync 0x3\n"\
        );\
    } while (0)


kal_bool mpu_dump(MPU_DUMP * mpu_dump_output)
{
    kal_uint32 i, Region_Control, Seg[4], Temp_Seg;
    volatile MPU_DUMP * internal_dump_ptr;
    internal_dump_ptr = (volatile MPU_DUMP *)mpu_dump_output;

    /* exception dump */
    internal_dump_ptr->mpu_reg.reg_MPU_ACSR =   *(volatile kal_uint32*)MPU_ACSR;
    internal_dump_ptr->mpu_reg.reg_MPU_CONFIG = *(volatile kal_uint32*)MPU_CONFIG;
    internal_dump_ptr->mpu_reg.MPU_Enable =     (kal_uint8)(((internal_dump_ptr->mpu_reg.reg_MPU_CONFIG)&0x80000000)>>31);
    internal_dump_ptr->mpu_reg.exc_RI =         (kal_uint8)(((internal_dump_ptr->mpu_reg.reg_MPU_CONFIG)&0x00080000)>>19);
    internal_dump_ptr->mpu_reg.exc_WI =         (kal_uint8)(((internal_dump_ptr->mpu_reg.reg_MPU_CONFIG)&0x00040000)>>18);
    internal_dump_ptr->mpu_reg.exc_XI =         (kal_uint8)(((internal_dump_ptr->mpu_reg.reg_MPU_CONFIG)&0x00020000)>>17);
    internal_dump_ptr->mpu_reg.exc_REG_MATCH =  (kal_uint8)(((internal_dump_ptr->mpu_reg.reg_MPU_CONFIG)&0x00010000)>>16);
    internal_dump_ptr->mpu_reg.exc_REG_NUM =    (kal_uint8)(((internal_dump_ptr->mpu_reg.reg_MPU_CONFIG)&0x00001F00)>>8);

    /* dump segment */
    for(i=0;i<4;i++)
    {
        Seg[i] = *(kal_uint32 volatile*)MPU_SEGMENT_CTRL(i);
    }
    Temp_Seg = (Seg[0]&0x000000ff);
    internal_dump_ptr->segment_control[0].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[0].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[0].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[0].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);
    Temp_Seg = (Seg[0]&0x0000ff00)>>8;
    internal_dump_ptr->segment_control[1].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[1].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[1].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[1].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);
    Temp_Seg = (Seg[0]&0x00ff0000)>>16;
    internal_dump_ptr->segment_control[2].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[2].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[2].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[2].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);  
    Temp_Seg = (Seg[0]&0xff000000)>>24;
    internal_dump_ptr->segment_control[3].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[3].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[3].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[3].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);
    Temp_Seg = (Seg[1]&0x000000ff);
    internal_dump_ptr->segment_control[4].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[4].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[4].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[4].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);
    Temp_Seg = (Seg[1]&0x0000ff00)>>8;
    internal_dump_ptr->segment_control[5].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[5].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[5].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[5].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);
    Temp_Seg = (Seg[1]&0x00ff0000)>>16;
    internal_dump_ptr->segment_control[6].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[6].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[6].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[6].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);  
    Temp_Seg = (Seg[1]&0xff000000)>>24;
    internal_dump_ptr->segment_control[7].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[7].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[7].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[7].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);
    Temp_Seg = (Seg[2]&0x000000ff);
    internal_dump_ptr->segment_control[8].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[8].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[8].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[8].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);
    Temp_Seg = (Seg[2]&0x0000ff00)>>8;
    internal_dump_ptr->segment_control[9].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[9].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[9].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[9].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);
    Temp_Seg = (Seg[2]&0x00ff0000)>>16;
    internal_dump_ptr->segment_control[10].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[10].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[10].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[10].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);  
    Temp_Seg = (Seg[2]&0xff000000)>>24;
    internal_dump_ptr->segment_control[11].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[11].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[11].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[11].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);
    Temp_Seg = (Seg[3]&0x000000ff);
    internal_dump_ptr->segment_control[12].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[12].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[12].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[12].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);
    Temp_Seg = (Seg[3]&0x0000ff00)>>8;
    internal_dump_ptr->segment_control[13].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[13].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[13].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[13].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);
    Temp_Seg = (Seg[3]&0x00ff0000)>>16;
    internal_dump_ptr->segment_control[14].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[14].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[14].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[14].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);  
    Temp_Seg = (Seg[3]&0xff000000)>>24;
    internal_dump_ptr->segment_control[15].RI  = (kal_uint8)((Temp_Seg&RI(0x1))>>5);
    internal_dump_ptr->segment_control[15].WI  = (kal_uint8)((Temp_Seg&WI(0x1))>>4);
    internal_dump_ptr->segment_control[15].XI  = (kal_uint8)((Temp_Seg&XI(0x1))>>3);
    internal_dump_ptr->segment_control[15].CCA = (kal_uint8)((Temp_Seg&CCA(0x7))>>0);


    /* dump region */
    for(i=0;i<MPU_REGION_NUM;i++)
    {
        internal_dump_ptr->region[i].Region_Base_Address = *(kal_uint32 volatile*)MPU_REGION_ADDRESS(i);
        Region_Control = (*(kal_uint32 volatile*)MPU_REGION_CONTROL(i));
        internal_dump_ptr->region[i].Region_Enable = (kal_uint8)((Region_Control&EN(0x1))>>15);
        internal_dump_ptr->region[i].SubRegion_Size = (RGN_SIZE_TYPE)((Region_Control&SIZE(0x1F))>>10);
        internal_dump_ptr->region[i].SubRegion_Count = (kal_uint8)((Region_Control&COUNT(0xF))>>6);
        internal_dump_ptr->region[i].RI  = (kal_uint8)((Region_Control&RI(0x1))>>5);
        internal_dump_ptr->region[i].WI  = (kal_uint8)((Region_Control&WI(0x1))>>4);
        internal_dump_ptr->region[i].XI  = (kal_uint8)((Region_Control&XI(0x1))>>3);
        internal_dump_ptr->region[i].CCA = (kal_uint8)((Region_Control&CCA(0x7))>>0);
    }
    internal_dump_ptr->magic_pattern = MPU_DUMP_MAGIC;
    MPU_Sync();
    return KAL_TRUE;
}

kal_bool mpu_dump_ex(kal_uint32 coreid)
{
    if(coreid >= SYS_MCU_NUM_CORE) 
        return KAL_FALSE;
    mpu_dump(&IA_MPU_SETTING_CORE_EX[coreid]);
    IA_MPU_REG_PTR[coreid] = &IA_MPU_SETTING_CORE_EX[coreid].mpu_reg;
    return KAL_TRUE;
}

/*************************************************************************
* FUNCTION
*  mpu_get_free_region
*  -- Private
*
* DESCRIPTION
*  This function registers one mpu region for using
*  If run out of mpu regions, returns fail
*
* CALLS
*
* CALL BY
*
* PARAMETERS
*  kal_uint32 * region       The registered region number
*
* RETURNS
*  KAL_TRUE:  for success
*  KAL_FALSE: for failure  
*
*************************************************************************/
kal_bool mpu_get_free_region(kal_uint32 * region)
{
    kal_uint32 region_record;
    kal_uint32 i;
    kal_uint32 core_id = 0;
    /* Check global region record, try to find one free region */
    /* We choose the available lowest priority channel */
    core_id = kal_get_current_core_id();
    if(core_id == 0)
        region_record = mpu_region_record_core0; 
    else if(core_id == 1)     
        region_record = mpu_region_record_core1; 
#if !defined(MT6763) && !defined(MT6739) && !defined(MT6771) && !defined(MT6765) && !defined(MT6761)
    else if(core_id == 2) 
        region_record = mpu_region_record_core2; 
    else if(core_id == 3) 
        region_record = mpu_region_record_core3; 
#endif    
    else ASSERT(0);
    
    for(i=0;i<MPU_REGION_NUM;i++)
    {
        if(region_record & 0x1)
        {
            region_record >>=1;
        }
        else
        {
            if(core_id == 0)
                mpu_region_used_core0 = i;
            else if(core_id == 1) 
                mpu_region_used_core1 = i;
#if !defined(MT6763) && !defined(MT6739) && !defined(MT6771) && !defined(MT6765) && !defined(MT6761)
            else if(core_id == 2) 
                mpu_region_used_core2 = i;
            else if(core_id == 3) 
                mpu_region_used_core3 = i;
#endif 
            else ASSERT(0);    
            break;
        }
    }
    /* if no free region is available, returns fail */
    if(i>=MPU_REGION_NUM)
    {
        return KAL_FALSE;
    }
    
    *region = i;
    if(core_id== 0) 
        mpu_region_record_core0 |= (0x1<<i); 
    else if(core_id == 1)   
        mpu_region_record_core1 |= (0x1<<i); 
#if !defined(MT6763) && !defined(MT6739) && !defined(MT6771) && !defined(MT6765) && !defined(MT6761)
    else if(core_id == 2) 
        mpu_region_record_core2 |= (0x1<<i); 
    else if(core_id == 3) 
        mpu_region_record_core3 |= (0x1<<i); 
#endif    
    else ASSERT(0);

    return KAL_TRUE;
        
}

kal_bool mpu_set_fix_region(kal_uint32 fix_region_num)
{
    kal_uint32 core_id =0;
    core_id = kal_get_current_core_id();
    if(core_id == 0) 
        mpu_region_record_core0 |= (0x1<<fix_region_num); 
    else if(core_id == 1)   
        mpu_region_record_core1 |= (0x1<<fix_region_num); 
#if !defined(MT6763) && !defined(MT6739) && !defined(MT6771) && !defined(MT6765) && !defined(MT6761)
    else if(core_id == 2) 
        mpu_region_record_core2 |= (0x1<<fix_region_num); 
    else if(core_id == 3) 
        mpu_region_record_core3 |= (0x1<<fix_region_num); 
#endif    
    else ASSERT(0);

    return KAL_TRUE;
    
}

kal_bool mpu_clear_fix_region(kal_uint32 fix_region_num)
{
    kal_uint32 core_id =0;
    core_id = kal_get_current_core_id();    
    if(core_id == 0) 
        mpu_region_record_core0 &= ~(0x1<<fix_region_num);
    else if(core_id == 1)   
        mpu_region_record_core1 &= ~(0x1<<fix_region_num);
#if !defined(MT6763) && !defined(MT6739) && !defined(MT6771) && !defined(MT6765) && !defined(MT6761)
    else if(core_id == 2) 
        mpu_region_record_core2 &= ~(0x1<<fix_region_num);
    else if(core_id == 3) 
        mpu_region_record_core3 &= ~(0x1<<fix_region_num);
#endif    
    else ASSERT(0);

    return KAL_TRUE;
    
}

static kal_bool mpu_setup_region(const REGION_SETTING_TYPE * region_setting)
{
    /* Parameter Checking */
    if(region_setting->rgn_no >= MPU_REGION_NUM)
    {
        /* Incorrect region number */
        ASSERT(0);
    }
    if(region_setting->size > MPU_REGION_MAX_SIZE || region_setting->size < MPU_REGION_MIN_SIZE)
    {
        /* Incorrect region size */
        ASSERT(0);
    } 
    
    MPU_Sync();
    *(kal_uint32 volatile*)MPU_REGION_ADDRESS(region_setting->rgn_no) = region_setting->addr;
    MPU_Sync();
    *(kal_uint32 volatile*)MPU_REGION_CONTROL(region_setting->rgn_no) = (
        (region_setting->enable          << 15) |
        (region_setting->size            << 10) |
        (region_setting->subregion_count <<  6) |
        (region_setting->attribute       <<  0)
    );
    MPU_Sync();
    
    return KAL_TRUE;
}

static kal_bool mpu_make_region(kal_uint32 base_addr, RGN_SIZE_TYPE region_size, REGION_ATTRIBUTE_TYPE attribute, kal_uint32 subregion_count, kal_uint32 fix_region_num)
{
    REGION_SETTING_TYPE region_setting={0};
    kal_uint32 addr_mask;
    if(fix_region_num < MPU_REGION_NUM )
    {
        mpu_clear_fix_region(fix_region_num);
        mpu_set_fix_region(fix_region_num);
        region_setting.rgn_no = fix_region_num;

    }
    else if(fix_region_num == MPU_USE_FREE_REGION )
    {
        /* 1. Get one free channel */
        if(mpu_get_free_region(&(region_setting.rgn_no))!=KAL_TRUE)
        {
            /* get free region fail */
            ASSERT(0);
        }
    }
    // fix region num is larger than 32. and 32 is our limitation
    else 
    {
        ASSERT(0);
    }
    /* 2. Check base address align with size */
    addr_mask = (1 << (region_size)) - 1;
    if(base_addr & addr_mask)
    {
        /* Base address does not align with region size */
        ASSERT(0);
    }
    /* 3. Prepare REGION_SETTING_TYPE by input parameters */
    region_setting.addr = base_addr;
    region_setting.size = region_size;
    region_setting.attribute = attribute;
    region_setting.subregion_count = subregion_count;
    region_setting.enable = 1;
    
    /* 4. Call mpu_setup_region to set in CP15 */
    return mpu_setup_region(&region_setting);
}

    /* new make region API, optimized for autogen */
static kal_bool mpu_make_region_autogen(kal_uint32 base_addr, kal_uint32 region_control, kal_uint32 fix_region_num)
{
    REGION_SETTING_TYPE region_setting={0};
    kal_uint32 addr_mask;
    if(fix_region_num < MPU_REGION_NUM )
    {
        mpu_clear_fix_region(fix_region_num);
        mpu_set_fix_region(fix_region_num);
        region_setting.rgn_no = fix_region_num;

    }
    else if(fix_region_num == MPU_USE_FREE_REGION )
    {
        /* 1. Get one free channel */
        if(mpu_get_free_region(&(region_setting.rgn_no))!=KAL_TRUE)
        {
            /* get free region fail */
            ASSERT(0);
        }
    }
    // fix region num is larger than 32. and 32 is our limitation
    else 
    {
        ASSERT(0);
    }
    /* 2. Check base address align with size */
    addr_mask = (1 << ((region_control>>10)&0x1f)) - 1;
    if(base_addr & addr_mask)
    {
        /* Base address does not align with region size */
        ASSERT(0);
    }

    *(kal_uint32 volatile*)MPU_REGION_ADDRESS(region_setting.rgn_no) = base_addr;
    *(kal_uint32 volatile*)MPU_REGION_CONTROL(region_setting.rgn_no) = region_control;
    
    return KAL_TRUE;

}

kal_uint32 mpu_auto_make_region(kal_uint32 base_addr, kal_uint32 length, REGION_ATTRIBUTE_TYPE attribute, kal_uint32 mode, kal_uint32 fix_region_num)
{
    kal_uint32 final_addr, final_len;
    kal_uint32 tail_subregion_count=0;
    kal_uint32 subregion_count =0;
    kal_uint32 region_total_size, region_size_index, dis_subregion_num;
    kal_uint32 real_limit = base_addr + length;
    kal_uint32 region_limit, temp_addr, region_diff, abs_len, sub_region_len;
    kal_uint32 last_region_limit =0;
    /********************** 
     * mode 0 : Fit smaller
     * mode!=0: Fit larger
     **********************/
    if(real_limit <= base_addr){
		
        //If the calculated end address is smaller than start address,
        //means that the end address is wrapped from 0xFFFFFFFF to 0x00000000
        //The real end address is bound by 4GB address space
        //That is, end address should be set as 0xFFFFFFFF here
        real_limit = (unsigned int)0-1;
    }	

    /* Restriction: Base address must be aligned on 2^n(>128) */
    /* find suitable region start and length */
    region_diff = (unsigned int)0-1;
    final_len = 0;
    final_addr = 0;
    abs_len = 0;
    //Start from 512 Byte region, since smaller regions don't have subregion feature
    //And smaller regions have very little chance to be used
    for(region_size_index=RGN_SIZE_2GB;region_size_index>=(RGN_SIZE_512B);region_size_index--)
    {    
        //i == region total size
        region_total_size = 1<<(region_size_index);
        if(region_total_size == 0)
        {
            //Overflow handling, if i == 0, then we are using 4GB region size, 
            //so set sub_region_len as 0x10000000
            sub_region_len = 0x10000000;
        }
        else
        {
            //Otherwise, the sub_region_len should be region size / 16
            sub_region_len = region_total_size >> 4;
        }
        //Calculate the region start address (align to sub-region size)
        //NOTE: always round DOWN at the start address side
        temp_addr = base_addr & ~(sub_region_len-1); 
        
        for(dis_subregion_num=0;dis_subregion_num<16;dis_subregion_num++)
        {
            //Try to use subregion to optimize the region size
            //Here we only disables subregion from the end
            
            //Locate current region end address by:
            //1. Current Region Start Address (Region size aligned)
            //2. Subregion disabled at the end
            region_limit = temp_addr + region_total_size - dis_subregion_num*sub_region_len;
            if(region_limit <= temp_addr)
            {
                //If the calculated end address is smaller than start address,
                //means that the end address is wrapped from 0xFFFFFFFF to 0x00000000
                //The real end address is bound by 4GB address space
                //That is, end address should be set as 0xFFFFFFFF here
                region_limit = (unsigned int)(0-1);
            }
            
            if(mode==0 && region_limit <= real_limit)
            {
                //Mode 0: Fit target region with a smaller region
                //if current region end address is smaller than target end address
                //we compare the region size differences between current and previous regions
                //Choose the region which has a smallest size differences for final setting
                if(region_diff > real_limit - region_limit)
                {
                    region_diff = real_limit - region_limit;
                    tail_subregion_count = dis_subregion_num;
                    final_addr = temp_addr;
                    final_len = region_size_index-4;
                    abs_len = region_total_size;
                }
                break;
            }
            else if(mode!=0 && region_limit < real_limit)
            {
                //Mode != 0: Fit target region with a larger region
                //if current region end address is smaller than target end address
                //then current region setting is too small,
                
                //If no sub-region is disabled now, then this region size is too small, break and try larget region size
                if(dis_subregion_num==0)
                {
                    break;
                }
                else
                {
                    last_region_limit = temp_addr + region_total_size - (dis_subregion_num-1)*sub_region_len;
                    if(region_diff > last_region_limit - real_limit)
                    {
                        region_diff = last_region_limit - real_limit;
                        tail_subregion_count = dis_subregion_num-1;
                        final_addr = temp_addr;
                        final_len = region_size_index-4;
                        abs_len = region_total_size;
                    }
                    break;
                }
            }            
            else if( (region_limit == real_limit))
            {
                region_diff = last_region_limit - real_limit;
                tail_subregion_count = dis_subregion_num;
                final_addr = temp_addr;
                final_len = region_size_index-4;
                abs_len = region_total_size;
                break;
            }
            else
            {
                //Here should be Mode==0, current region end address larger than target region end address
                //Continue to try disabling more subregions
                continue;
            }
        }

        if(region_limit == real_limit)
		break;
    }
    
    if(final_len == 0)
    {
        //MPU auto make failed
        //find not suitable region
        //Need to improve for multi-region coverage
        ASSERT(0);
    }
    
    //Overflow handling
    //if final_len != 0 and abs_len == 0
    //means that we are using a 4GB region
    if(abs_len == 0)
    {
        sub_region_len = 0x10000000;
    }
    else
    {
        sub_region_len = abs_len >> 4;
    }
    
    // subregion count is on bit [9:6]
    if(tail_subregion_count < 16 && tail_subregion_count >= 0)
    {
        subregion_count = 15 - tail_subregion_count;
    }
    else
    {
        ASSERT(0);
    }
    // leave only 4 bit for final_dissub, since we have only 16 subregions
    subregion_count &= 0x0000000F;

    //max sub-region size is 256MB
    if(final_len>=RGN_SIZE_256MB)
        final_len = RGN_SIZE_256MB;
    // Setup region
    mpu_make_region(final_addr, final_len, attribute, subregion_count, fix_region_num);
    
    return (final_addr+abs_len)-(sub_region_len*tail_subregion_count);
}

__attribute__ ((section("DSPRAM_ZI_CORE0")))
MPU_DORMANT mpu_backup_core0;

__attribute__ ((section("ISPRAM_ROCODE_CORE0")))
void dormant_save_mpu_core0(void)
{
	kal_uint32 index = 0;
	for(index=0; index<MPU_SEGMENT_NUM; index++)
		mpu_backup_core0.segment_control[index] = *(kal_uint32 volatile*)MPU_SEGMENT_CTRL(index);
	for(index=0; index<MPU_REGION_NUM; index++)
	{
		mpu_backup_core0.region[index].base_addr = *(kal_uint32 volatile*)MPU_REGION_ADDRESS(index);
		mpu_backup_core0.region[index].control = *(kal_uint32 volatile*)MPU_REGION_CONTROL(index);
	}	
	MPU_Sync();
}
__attribute__ ((section("ISPRAM_ROCODE_CORE0")))
void dormant_restore_mpu_core0(void)
{
	kal_int32 index = 0;
	
	for(index=MPU_REGION_NUM-1; index>=0; index--)
	{
		*(kal_uint32 volatile*)MPU_REGION_ADDRESS(index) = mpu_backup_core0.region[index].base_addr;
		*(kal_uint32 volatile*)MPU_REGION_CONTROL(index) = mpu_backup_core0.region[index].control;
	}	
	MPU_Sync();
	
	for(index=0; index<MPU_SEGMENT_NUM; index++)
		*(kal_uint32 volatile*)MPU_SEGMENT_CTRL(index) = mpu_backup_core0.segment_control[index];
	MPU_Sync();
}
__attribute__ ((section("DSPRAM_ZI_CORE1")))
MPU_DORMANT mpu_backup_core1;

__attribute__ ((section("ISPRAM_ROCODE_CORE1")))
void dormant_save_mpu_core1(void)
{
	kal_uint32 index = 0;
	for(index=0; index<MPU_SEGMENT_NUM; index++)
		mpu_backup_core1.segment_control[index] = *(kal_uint32 volatile*)MPU_SEGMENT_CTRL(index);
	for(index=0; index<MPU_REGION_NUM; index++)
	{
		mpu_backup_core1.region[index].base_addr = *(kal_uint32 volatile*)MPU_REGION_ADDRESS(index);
		mpu_backup_core1.region[index].control = *(kal_uint32 volatile*)MPU_REGION_CONTROL(index);
	}	
	MPU_Sync();
}

__attribute__ ((section("ISPRAM_ROCODE_CORE1")))
void dormant_restore_mpu_core1(void)
{
	kal_int32 index = 0;
	
	for(index=MPU_REGION_NUM-1; index>=0; index--)
	{
		*(kal_uint32 volatile*)MPU_REGION_ADDRESS(index) = mpu_backup_core1.region[index].base_addr;
		*(kal_uint32 volatile*)MPU_REGION_CONTROL(index) = mpu_backup_core1.region[index].control;
	}
	MPU_Sync();
	
	for(index=0; index<MPU_SEGMENT_NUM; index++)
		*(kal_uint32 volatile*)MPU_SEGMENT_CTRL(index) = mpu_backup_core1.segment_control[index];
	MPU_Sync();	
}

void MpuPreInit(void){
    /* Setup MPU related variable */
    return;
}
     
void MPU_Init(void){
#if !__COSIM_BYPASS_DRV__
    kal_uint32 seg_ctrl_0, seg_ctrl_1, seg_ctrl_2, seg_ctrl_3;
    
    /* Setup permission for MPU CDMM */
    // *(kal_uint32 *)(MPU_CDMM_base) = 0xF; //not allowed user/supervisor to access MPU registers
    /* Setup Segment Ctrl */
    kal_uint32 core_id;
    kal_uint32 *mpu_table;
    kal_uint32 i, j;
    
    /* MPU pre-init to set bank 9 as cacheable*/
    *(kal_uint32 *)(MPU_SEGMENT_CTRL(2)) |= ((RI(0) | WI(0) | XI(0)| CCA(MPU_CCA_CWB))<<Seg2_offset);
    
    core_id = kal_get_current_core_id();   
    
    if(core_id == 0) {
        mpu_region_record_core0 = 0; 
        mpu_region_used_core0 = 0;
	    mpu_table = mpu_region_config_core0;
    }
    else if(core_id == 1) {  
        mpu_region_record_core1 = 0;
        mpu_region_used_core1 = 0;
	    mpu_table = mpu_region_config_core1;
    }
#if !defined(MT6763) && !defined(MT6739) && !defined(MT6771) && !defined(MT6765) && !defined(MT6761)
    else if(core_id == 2) {
        mpu_region_record_core2 = 0; 
        mpu_region_used_core2 = 0;
	    mpu_table = mpu_region_config_core2;
    }
    else if(core_id == 3) {
        mpu_region_record_core3 = 0; 
        mpu_region_used_core3 = 0;
	    mpu_table = mpu_region_config_core3;
    }
#endif    
    else ASSERT(0);

    for(i = 0, j = 0; i<(MPU_REGION_NUM*2);i=i+2, j++) {
      if(mpu_table[i+1] == 0x0 || MPU_NULL_PROT_NUM == j) {
        continue;
      }
      //mpu_make_region(mpu_table[i],(mpu_table[i+1]>>10)&0x1f,mpu_table[i+1]&0x7,(mpu_table[i+1]>>6)&0xf,MPU_USE_FREE_REGION);
      mpu_make_region_autogen(mpu_table[i], mpu_table[i+1], j);
    }

    /* Enable the regions */
    for(i=0; i < MPU_REGION_NUM ; i++) {
        if(mpu_table[i*2+1] == 0x0 || MPU_NULL_PROT_NUM == i) { 
            continue;
        }  
        (*(kal_uint32 volatile*)MPU_REGION_CONTROL(i)) |= (0x1<<15);
    }
    MPU_Sync();


    if (INT_hasEMMAddress()) {
        //@ EMM mpu re-use the CCCI NC channel
        emm_region.shm_base = (*(kal_uint32 volatile*)(g_EMM_MAIN_BUFF_ADDR_PTR));
        emm_region.shm_size = (*(kal_uint32 volatile*)(g_EMM_MAIN_BUFF_SIZE_PTR));
    
        if((emm_region.shm_base != 0) && (emm_region.shm_size != 0))
        {    
            mpu_auto_make_region(emm_region.shm_base, emm_region.shm_size, MPU_XI|MPU_RW|MPU_CCA_UCA, 1, MPU_SHM_NC_NUM);
        }
    }
#if defined(MT6768)
	mpu_auto_make_region(0xC000E000, (1 << RGN_SIZE_4KB), MPU_XI|MPU_NA, 1, MPU_VIVO_DAPC_1st_NUM);
    mpu_auto_make_region(0xD000E000, (1 << RGN_SIZE_4KB), MPU_XI|MPU_NA, 1, MPU_VIVO_DAPC_2nd_NUM);
#endif

    seg_ctrl_0 = ((RI(1) | WI(1) | XI(1)| CCA(MPU_CCA_UCA))<<Seg0_offset) |  /*Bank 0*/
                 ((RI(1) | WI(1) | XI(1)| CCA(MPU_CCA_UC ))<<Seg2_offset) |  /*Bank 1*/
                 ((RI(1) | WI(1) | XI(1)| CCA(MPU_CCA_CWB))<<Seg4_offset) |  /*Bank 2*/
                 ((RI(1) | WI(1) | XI(1)| CCA(MPU_CCA_UC))<<Seg6_offset);    /*Bank 3*/
    
    seg_ctrl_1 = ((RI(1) | WI(1) | XI(1)| CCA(MPU_CCA_UC ))<<Seg0_offset) |  /*Bank 4*/
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_CWB))<<Seg2_offset) |  /*Bank 5*/
                 ((RI(1) | WI(1) | XI(1)| CCA(MPU_CCA_CWB))<<Seg4_offset) |  /*Bank 6*/
                 ((RI(1) | WI(1) | XI(1)| CCA(MPU_CCA_CWB))<<Seg6_offset);   /*Bank 7*/

    seg_ctrl_2 = ((RI(1) | WI(1) | XI(1)| CCA(MPU_CCA_CWB))<<Seg0_offset) |  /*Bank 8*/
#if defined(__MD_LAYOUT_SHRINK__) || defined(__MPU_BANK9_PRECISE_EX__)
                 ((RI(0) | WI(1) | XI(1)| CCA(MPU_CCA_CWB))<<Seg2_offset) |  /*Bank 9*/
#else
                 ((RI(0) | WI(1) | XI(0)| CCA(MPU_CCA_CWB))<<Seg2_offset) |  /*Bank 9*/
#endif
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg4_offset) |  /*Bank A*/
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg6_offset);   /*Bank B*/
    
    seg_ctrl_3 = ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg0_offset) |  /*Bank C*/
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg2_offset) |  /*Bank D*/
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg4_offset) |  /*Bank E*/
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg6_offset);   /*Bank F*/
    
    *(kal_uint32 *)(MPU_SEGMENT_CTRL(0)) = seg_ctrl_0 ;
    *(kal_uint32 *)(MPU_SEGMENT_CTRL(1)) = seg_ctrl_1;
    *(kal_uint32 *)(MPU_SEGMENT_CTRL(2)) = seg_ctrl_2;
    *(kal_uint32 *)(MPU_SEGMENT_CTRL(3)) = seg_ctrl_3;
    MPU_Sync();
    /* Enable Segment Ctrl*/
    *(kal_uint32 *)(MPU_CONFIG) |= 0x80000000;
    //ISB();
    
    /* Setup MPU setting */    
    if(core_id == 0) 
        mpu_dump(&IA_MPU_SETTING_CORE0);
    else if(core_id == 1)   
        mpu_dump(&IA_MPU_SETTING_CORE1);
#if !defined(MT6763) && !defined(MT6739) && !defined(MT6771) && !defined(MT6765) && !defined(MT6761)
    else if(core_id == 2) 
        mpu_dump(&IA_MPU_SETTING_CORE2);
    else if(core_id == 3) 
        mpu_dump(&IA_MPU_SETTING_CORE3);
#endif    
    else ASSERT(0);    


    return;

#else

    kal_uint32 seg_ctrl_0, seg_ctrl_1, seg_ctrl_2, seg_ctrl_3;

    seg_ctrl_0 = ((RI(0) | WI(0) | XI(0)| CCA(MPU_CCA_UCA))<<Seg0_offset) |
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg2_offset) |
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_CWB))<<Seg4_offset) |
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_CWB))<<Seg6_offset) ;

    seg_ctrl_1 = ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg0_offset)  |
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_CWB))<<Seg2_offset) |
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_CWB))<<Seg4_offset) |
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_CWB))<<Seg6_offset) ;

    seg_ctrl_2 = ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_CWB))<<Seg0_offset) |
                 ((RI(0) | WI(0) | XI(0)| CCA(MPU_CCA_CWB))<<Seg2_offset) |
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg4_offset) |
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg6_offset) ;

    seg_ctrl_3 = ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg0_offset) |
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg2_offset) |
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg4_offset) |
                 ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_UC ))<<Seg6_offset) ;

    *(kal_uint32 *)(MPU_SEGMENT_CTRL(0)) = seg_ctrl_0 ;
    *(kal_uint32 *)(MPU_SEGMENT_CTRL(1)) = seg_ctrl_1;
    *(kal_uint32 *)(MPU_SEGMENT_CTRL(2)) = seg_ctrl_2;
    *(kal_uint32 *)(MPU_SEGMENT_CTRL(3)) = seg_ctrl_3;
    MPU_Sync();
    /* Enable Segment Ctrl*/
    *(kal_uint32 *)(MPU_CONFIG) |= 0x80000000;


#endif
}
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/* this API should be call under Disable interrupt */
void system_set_mpu(void)
{
#if defined(__MTK_TARGET__) && defined(__HIF_CCCI_SUPPORT__)
        /* Setting share memory mpu on core 1/2/3 */
        ccci_set_shared_mpu();
#elif (!defined(__ANDROID_MODEM__)&& defined(__SCC_SIB_SUPPORT__))
        system_set_sib_mem(shm_region[0].shm_base, shm_region[0].shm_size);
#endif
        /* Setting DSP memory mpu on core 1/2/3 */  
        SYSTEM_SET_DSP_PROTECTION(dsp_region[2].dsp_base, dsp_region[2].dsp_size, dsp_region[3].dsp_base, dsp_region[3].dsp_size, SECOND_MPU_SETTING);
}

void system_exception_set_mpu(void)
{
#if defined(__SCC_SIB_SUPPORT__)
    kal_uint32 seg_ctrl_exception;
    seg_ctrl_exception = ((RI(0) | WI(1) | XI(1)| CCA(MPU_CCA_UC ))<<Seg0_offset) |  /*Bank 4*/
                         ((RI(0) | WI(0) | XI(1)| CCA(MPU_CCA_CWB))<<Seg2_offset) |  /*Bank 5*/
                         ((RI(1) | WI(1) | XI(1)| CCA(MPU_CCA_CWB))<<Seg4_offset) |  /*Bank 6*/
                         ((RI(1) | WI(1) | XI(1)| CCA(MPU_CCA_CWB))<<Seg6_offset);   /*Bank 7*/
    
    *(kal_uint32 *)(MPU_SEGMENT_CTRL(1)) = seg_ctrl_exception;
    MPU_Sync();
#endif
    system_set_ispram_protection(MPU_ISPRAM_ACCESS_PROT_NUM,(kal_uint32)&Image$$ISPRAM0_PHYSICAL_BOUNDARY$$Base,KAL_FALSE);
    SYSTEM_SET_DSP_PROTECTION(0x0, 0x0, 0x0, 0x0, EXCEPTION_MPU_SETTING);
    system_set_null_protection(KAL_FALSE);

}

void system_set_share_mem(kal_uint32 * shm_setting)
{

    shm_region[0].shm_base = *(kal_uint32 *)(shm_setting);
    shm_region[0].shm_size = *(kal_uint32 *)(shm_setting+1);
    shm_region[1].shm_base = *(kal_uint32 *)(shm_setting+2);
    shm_region[1].shm_size = *(kal_uint32 *)(shm_setting+3);
    
    if((shm_region[0].shm_base != 0) && (shm_region[0].shm_size!= 0))
    {    
        mpu_auto_make_region(shm_region[0].shm_base, shm_region[0].shm_size, MPU_XI|MPU_RW|MPU_CCA_UCA, 1, MPU_SHM_NC_NUM);
    }
    
    if((shm_region[1].shm_base != 0) && (shm_region[1].shm_size != 0))
    {    
        mpu_auto_make_region(shm_region[1].shm_base, shm_region[1].shm_size, MPU_XI|MPU_RW|MPU_CCA_CWB, 1, MPU_SHM_C_NUM);
    }

}

kal_bool system_is_share_mem(kal_uint32 address)
{
kal_uint32 start_addr = shm_region[0].shm_base;
kal_uint32 end_addr   = shm_region[0].shm_base + shm_region[0].shm_size;
    
if( address >= start_addr && address <= end_addr)
        {
                    return KAL_TRUE;
                        }

    start_addr = shm_region[1].shm_base;
        end_addr   = shm_region[1].shm_base + shm_region[1].shm_size;
            if( address >= start_addr && address <= end_addr)
                    {
                                return KAL_TRUE;
                                    }

                return KAL_FALSE;
}

void system_query_noncacheable_shm_info(kal_uint32 *start_addr, kal_uint32 *end_addr , kal_uint32 *size)
{
    *start_addr = shm_region[0].shm_base;
    *end_addr   = shm_region[0].shm_base + shm_region[0].shm_size;
    *size       = shm_region[0].shm_size;
}

void system_query_cacheable_shm_info(kal_uint32 *start_addr, kal_uint32 *end_addr , kal_uint32 *size)
{
    *start_addr = shm_region[1].shm_base;
    *end_addr   = shm_region[1].shm_base + shm_region[1].shm_size;
    *size       = shm_region[1].shm_size;
}

void system_set_null_protection(kal_bool value)
{
  kal_uint32 *mpu_table;
  kal_uint32 core_id;

  if (value == KAL_TRUE)
    {
      core_id = kal_get_current_core_id();   
      if(core_id == 0) {
	mpu_table = mpu_region_config_core0;
      }
      else if(core_id == 1) {  
	mpu_table = mpu_region_config_core1;
      }
#if !defined(MT6763) && !defined(MT6739) && !defined(MT6771) && !defined(MT6765) && !defined(MT6761)
      else if(core_id == 2) {
	mpu_table = mpu_region_config_core2;
      }
      else if(core_id == 3) {
	mpu_table = mpu_region_config_core3;
      }
#endif    
      else ASSERT(0);

      mpu_set_fix_region(MPU_NULL_PROT_NUM);
      mpu_make_region_autogen(mpu_table[MPU_NULL_PROT_NUM*2], mpu_table[(MPU_NULL_PROT_NUM*2)+1],MPU_NULL_PROT_NUM);
      (*(kal_uint32 volatile*)MPU_REGION_CONTROL(MPU_NULL_PROT_NUM)) |= EN(1);
    }
  else if(value == KAL_FALSE) {
	(*(kal_uint32 volatile*)MPU_REGION_CONTROL(MPU_NULL_PROT_NUM)) &= ~RI(1);
  }
}

void system_set_mpu_DRDI(kal_uint32 addr, kal_uint32 size)
{
  if((addr != 0) && (size != 0))
    {
        mpu_auto_make_region(addr, size, MPU_XI|MPU_RW|MPU_CCA_CWB, 1, MPU_NULL_PROT_NUM);
    }

}

void system_set_ispram_protection(kal_uint32 mpu_index,kal_uint32 addr, kal_bool value)
{
  kal_uint32* mpu_table = NULL;
  kal_uint32 core_id;

     core_id = kal_get_current_core_id();   
      if(core_id == 0) {
	mpu_table = mpu_region_config_core0;
      }
      else if(core_id == 1) {  
	mpu_table = mpu_region_config_core1;
      }
#if !defined(MT6763) && !defined(MT6739) && !defined(MT6771) && !defined(MT6765) && !defined(MT6761)
      else if(core_id == 2) {
	mpu_table = mpu_region_config_core2;
      }
      else if(core_id == 3) {
	mpu_table = mpu_region_config_core3;
      }
#endif    

  if (mpu_index == MPU_ISPRAM_ACCESS_PROT_NUM)
    {
      addr = (kal_uint32)&Image$$ISPRAM0_PHYSICAL_BOUNDARY$$Base;
    }

  if (value == KAL_TRUE)
    {
      /* Note :if (addr==0 || configuration ==0)  means mpu entry by autogen is not correct */
      if((addr!=0) &&(mpu_table[(mpu_index*2)+1]!=0)) 
        {
            mpu_set_fix_region(mpu_index);
            mpu_make_region_autogen(addr, mpu_table[(mpu_index*2)+1],mpu_index);
            (*(kal_uint32 volatile*)MPU_REGION_CONTROL(mpu_index)) |= EN(1);
        }
    }
  else
    {
      (*(kal_uint32 volatile*)MPU_REGION_CONTROL(mpu_index)) &= ~(EN(1));
    }
}

#if (!defined(__ANDROID_MODEM__)&& defined(__SCC_SIB_SUPPORT__))
void system_set_sib_mem(kal_uint32 base_addr, kal_uint32 length){

    shm_region[0].shm_base = base_addr;
    shm_region[0].shm_size = length;    
    if((shm_region[0].shm_base != 0) && (shm_region[0].shm_size!= 0))
    {    
        mpu_auto_make_region(shm_region[0].shm_base, shm_region[0].shm_size, MPU_XI|MPU_RW|MPU_CCA_UCA, 1, MPU_SHM_NC_NUM);
    }

}
#endif

void system_set_l4_mem(kal_uint32 * shm_setting)
{

    l4_region.shm_base = *(kal_uint32 *)(shm_setting);
    l4_region.shm_size = *(kal_uint32 *)(shm_setting+1);
    
    if((l4_region.shm_base != 0) && (l4_region.shm_size!= 0))
    {    
        mpu_auto_make_region(l4_region.shm_base, l4_region.shm_size, MPU_XI|MPU_RW|MPU_CCA_UCA, 1, MPU_L4_NUM);
    }
    
}
