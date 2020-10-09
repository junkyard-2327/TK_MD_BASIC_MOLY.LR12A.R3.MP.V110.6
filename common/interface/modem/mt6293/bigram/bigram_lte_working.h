#ifndef __BIGRAM_WORKING_H__
#define __BIGRAM_WORKING_H__

#include "bigram.h"

#define WORKING_BUF_SIZE    (CEILING_BYTE64(32*1024))  // 32KB working buffer size


/****************************************************************************
 *
 *                          CRSCE working buffer allocation
 *
 ***************************************************************************/
// ------------------ Session job allocation ------------------
//

#define WORKING_LTE_CRSCE_SELF_WITH_IC_ESTIMATED_BUFF_SIZE    (CEILING_BYTE64(8000))//4032 is needed, 93
#define WORKING_LTE_CRSCE_SELF_WITH_IC_RS_EXTRACT_RYY_SIZE    (CEILING_BYTE64(9600))//6400 is needed, 93
#define WORKING_LTE_CRSCE_SELF_WITH_IC_DATAIC_MEM_SIZE        (CEILING_BYTE64(2000))
#define WORKING_LTE_CRSCE_SELF_WITH_IC_CRSIC_MEM_SIZE         (CEILING_BYTE64(500))
#define WORKING_LTE_CRSCE_SELF_WITH_IC_DUMP_TEMP_BUFF_SIZE    (CEILING_BYTE64(4800))
#define WORKING_LTE_CRSCE_SELF_WITH_IC_INST_H_FOR_NE_SIZE     (CEILING_BYTE64(2000))
#define WORKING_LTE_CRSCE_SELF_WITH_IC_TDI_PER_SYM_SIZE       (CEILING_BYTE64(96))


typedef union {
    kal_uint8 container[WORKING_BUF_SIZE];

    struct {
        /* static working buffer, for data exchange to other module within the same job*/
        struct {
            kal_uint8 estimated_buff[WORKING_LTE_CRSCE_SELF_WITH_IC_ESTIMATED_BUFF_SIZE];//884 format 200rs * 4cc/oc * 2rx * 2ap/sym = 8000  // 200*3cc/oc*2rx*2ap*20 =
            kal_uint8 rs_extract_ryy[WORKING_LTE_CRSCE_SELF_WITH_IC_RS_EXTRACT_RYY_SIZE];//77774 format 200rs * 4cc/oc * 2rx *2ap/sym = 6400 // 200*3cc/oc*2rx*2ap*32 =
            kal_uint8 dataic_mem[WORKING_LTE_CRSCE_SELF_WITH_IC_DATAIC_MEM_SIZE];//884 format, 200rs*4PG=800 complex => 800*20/8 = 2000 byte
            kal_uint8 crsic_mem[WORKING_LTE_CRSCE_SELF_WITH_IC_CRSIC_MEM_SIZE]; //884 format, 200rs=200 complex => 200*20/8 = 500 byte(reuse per order for crsic_ne)
            kal_uint8 crs_sc_tdi_coef[2][WORKING_LTE_CRSCE_SELF_WITH_IC_TDI_PER_SYM_SIZE];
            kal_uint8 crs_oc_tdi_coef[2][WORKING_LTE_CRSCE_SELF_WITH_IC_TDI_PER_SYM_SIZE];
            kal_uint8 oc_h_for_ne[WORKING_LTE_CRSCE_SELF_WITH_IC_INST_H_FOR_NE_SIZE];

        } static_part;

        /* internal module use temp buffer*/
        struct {
            kal_uint8 temp_dump_buf[WORKING_LTE_CRSCE_SELF_WITH_IC_DUMP_TEMP_BUFF_SIZE];
        } free_part;
    } payload;
} working_lte_crsce_self_with_ic;

 
#define BIGRAM_LTE_WORKING_BUFx_ESTIMATED_BUFF_BASE(x)            (x + offsetof(working_lte_crsce_self_with_ic, payload.static_part.estimated_buff))
#define BIGRAM_LTE_WORKING_BUFx_RS_EXTRACT_RYY_BASE(x)            (x + offsetof(working_lte_crsce_self_with_ic, payload.static_part.rs_extract_ryy))
#define BIGRAM_LTE_WORKING_BUFx_DATAIC_MEM_BASE(x)                (x + offsetof(working_lte_crsce_self_with_ic, payload.static_part.dataic_mem))
#define BIGRAM_LTE_WORKING_BUFx_CRSIC_MEM_BASE(x)                 (x + offsetof(working_lte_crsce_self_with_ic, payload.static_part.crsic_mem))
#define BIGRAM_LTE_WORKING_BUFx_SCy_TDI_BUFF_BASE(x, y)           (x + offsetof(working_lte_crsce_self_with_ic, payload.static_part.crs_sc_tdi_coef[y]))
#define BIGRAM_LTE_WORKING_BUFx_OCy_TDI_BUFF_BASE(x, y)           (x + offsetof(working_lte_crsce_self_with_ic, payload.static_part.crs_oc_tdi_coef[y]))
#define BIGRAM_LTE_WORKING_BUFx_OC_H(x)                           (x + offsetof(working_lte_crsce_self_with_ic, payload.static_part.oc_h_for_ne))

#define BIGRAM_LTE_WORKING_BUFx_TEMP_DUMP_BUF_BASE(x)             (x + offsetof(working_lte_crsce_self_with_ic, payload.free_part.temp_dump_buf))

// ------------------ MMSE job allocation ------------------

#define WORKING_LTE_CRSCE_TO_CMIMO_BUFF_SIZE                CEILING_BYTE64(24000) // 884 format, 
#define WORKING_LTE_CRSCE_TO_RLM_BUFF_SIZE                  CEILING_BYTE64(4000)  // 884 format

typedef union {
    kal_uint8 container[WORKING_BUF_SIZE];

    struct {
        kal_uint8 rlm_buff[WORKING_LTE_CRSCE_TO_RLM_BUFF_SIZE];
        kal_uint8 cmimo_buff[WORKING_LTE_CRSCE_TO_CMIMO_BUFF_SIZE];
        kal_uint8 dummy_dump_buf[CEILING_BYTE64(3200)];
    } payload;
} working_lte_crsce_mmse;

#define BIGRAM_LTE_WORKING_BUFx_CMIMO_BUFF_BASE(x)                (x + offsetof(working_lte_crsce_mmse, payload.cmimo_buff))
#define BIGRAM_LTE_WORKING_BUFx_RLM_BUFF_BASE(x)                  (x + offsetof(working_lte_crsce_mmse, payload.rlm_buff))
#define BIGRAM_LTE_WORKING_BUFx_TEMP_DUMP_BUF_BASE_CMIMO(x)       (x + offsetof(working_lte_crsce_mmse, payload.dummy_dump_buf))
/****************************************************************************
 *
 *                          CRSNE working buffer allocation
 *
 ***************************************************************************/


/****************************************************************************
 *
 *                          FWSSD working buffer allocation
 *
 ***************************************************************************/


/****************************************************************************
 *
 *                          DMRSCE working buffer allocation
 *
 ***************************************************************************/
#define WORKING_LTE_DMRSCE_RAW_CHANNEL_MEM_SZIE                (CEILING_BYTE64(12096))           // (12096) 8/8/4 format, RAW channel + Rebuild channel. (ECP case - per RX)  TODO: Note that 1600 Byte of OC1 is used by bigram dump.
//#define WORKING_LTE_DMRSCE_REBUILD_CHANNEL_MEM_SZIE            (CEILING_BYTE64(9024))          // (9024) 8/8/4 format, (SC + OC1 + OC2) rebuild channel. (NCP case - per RX)
#define WORKING_LTE_DMRSCE_SC_SCRAM_SPREAD_CODE_MEM_SIZE       (CEILING_BYTE64(2048))            // (2048) SC only. (ECP)
#define WORKING_LTE_DMRSCE_MMSE_COEFF_UT_MEM_SIZE              (CEILING_BYTE64(6))               // (64)   12bit format: (2*2)*12/8
#define WORKING_LTE_DMRSCE_MMSE_COEFF_UF_MEM_SIZE              (CEILING_BYTE64(216))             // (256)  12bit format: (12*12)*12/8
#define WORKING_LTE_DMRSCE_MMSE_COEFF_LAMBDA_T_MEM_SIZE        (CEILING_BYTE64(4))               // (64)   16bit format: (2)*16/8
#define WORKING_LTE_DMRSCE_MMSE_COEFF_LAMBDA_F_MEM_SIZE        (CEILING_BYTE64(24))              // (64)   16bit format: (12)*16/8
#define WORKING_LTE_DMRSCE_MMSE_COEFF_RT_MEM_SIZE              (CEILING_BYTE64(56))              // (64)   8bit format:  (14*4)*8/8
#define WORKING_LTE_DMRSCE_MMSE_COEFF_RF_MEM_SIZE              (CEILING_BYTE64(96))              // (64)   8bit format:  (12*4*2)*8/8
#define WORKING_LTE_DMRSCE_BIGRAM_DUMP_MEM_SIZE                (CEILING_BYTE64(800))             // (1600) (2017.01)TODO: not enough now. vcHalf 32 bit format: (400)*32/8, max buffer size for bigram dump.


#define DMRSCE_AP_NUM     (2)  // AP7/8
#define DMRSCE_RX_NUM     (2)  // RX0/1
#define DMRSCE_CELL_NUM   (4)  // SC/Co-UE/OC1/OC2

typedef union {
    kal_uint8 container[WORKING_BUF_SIZE];

    struct {
        kal_uint8 raw_channel[DMRSCE_RX_NUM][WORKING_LTE_DMRSCE_RAW_CHANNEL_MEM_SZIE];        
        //kal_uint8 rebuild_channel[2][WORKING_LTE_DMRSCE_REBUILD_CHANNEL_MEM_SZIE];
        kal_uint8 sc_scram_spread_code[DMRSCE_AP_NUM][WORKING_LTE_DMRSCE_SC_SCRAM_SPREAD_CODE_MEM_SIZE];
        //kal_uint8 mmse_coeff[WORKING_LTE_DMRSCE_MMSE_COEFF_MEM_SIZE];
        kal_uint8 mmse_coeff_ut[DMRSCE_CELL_NUM][WORKING_LTE_DMRSCE_MMSE_COEFF_UT_MEM_SIZE];
        kal_uint8 mmse_coeff_uf[DMRSCE_CELL_NUM][DMRSCE_RX_NUM][WORKING_LTE_DMRSCE_MMSE_COEFF_UF_MEM_SIZE];
        kal_uint8 mmse_coeff_lambda_t[DMRSCE_CELL_NUM][WORKING_LTE_DMRSCE_MMSE_COEFF_LAMBDA_T_MEM_SIZE];
        kal_uint8 mmse_coeff_lambda_f[DMRSCE_CELL_NUM][DMRSCE_RX_NUM][WORKING_LTE_DMRSCE_MMSE_COEFF_LAMBDA_F_MEM_SIZE];
        kal_uint8 mmse_coeff_rt[2][DMRSCE_RX_NUM][WORKING_LTE_DMRSCE_MMSE_COEFF_RT_MEM_SIZE]; // 2: slot-based for slot0/1
        kal_uint8 mmse_coeff_rf[DMRSCE_RX_NUM][WORKING_LTE_DMRSCE_MMSE_COEFF_RF_MEM_SIZE];
        kal_uint8 bigram_dump[WORKING_LTE_DMRSCE_BIGRAM_DUMP_MEM_SIZE];
    } payload;
} working_lte_dmrsce;


#define BIGRAM_LTE_WORKING_BUFx_DMRSCE_RAW_CHANNEL_BASE(x, y)             (x + offsetof(working_lte_dmrsce, payload.raw_channel[y]))             //(wbuf, rx_idx)
//#define BIGRAM_LTE_WORKING_BUFx_DMRSCE_REBUILD_CHANNEL_BASE(x, y)         (x + offsetof(working_lte_dmrsce, payload.rebuild_channel[y]))
#define BIGRAM_LTE_WORKING_BUFx_DMRSCE_SC_SCRAM_SPREAD_CODE_BASE(x, y)    (x + offsetof(working_lte_dmrsce, payload.sc_scram_spread_code[y]))    //(wbuf, ap_idx)
//#define BIGRAM_LTE_WORKING_BUFx_DMRSCE_MMSE_COEFF_CHANNEL_BASE(x)         (x + offsetof(working_lte_dmrsce, payload.mmse_coeff))              
//#define BIGRAM_LTE_WORKING_BUFx_DMRSCE_MMSE_COEFF_CHANNEL_BASE(x)         (x + offsetof(working_lte_dmrsce, payload.mmse_coeff))                
#define BIGRAM_LTE_WORKING_BUFx_DMRSCE_MMSE_COEFF_UT_BASE(x, y)           (x + offsetof(working_lte_dmrsce, payload.mmse_coeff_ut[y]))           //(wbuf, cell_idx)
#define BIGRAM_LTE_WORKING_BUFx_DMRSCE_MMSE_COEFF_UF_BASE(x, y, z)        (x + offsetof(working_lte_dmrsce, payload.mmse_coeff_uf[y][z]))        //(wbuf, cell_idx, rx_idx)
#define BIGRAM_LTE_WORKING_BUFx_DMRSCE_MMSE_COEFF_LAMBDA_T_BASE(x, y)     (x + offsetof(working_lte_dmrsce, payload.mmse_coeff_lambda_t[y]))     //(wbuf, cell_idx)
#define BIGRAM_LTE_WORKING_BUFx_DMRSCE_MMSE_COEFF_LAMBDA_F_BASE(x, y, z)  (x + offsetof(working_lte_dmrsce, payload.mmse_coeff_lambda_f[y][z]))  //(wbuf, cell_idx, rx_idx)
#define BIGRAM_LTE_WORKING_BUFx_DMRSCE_MMSE_COEFF_RT_BASE(x, y, z)        (x + offsetof(working_lte_dmrsce, payload.mmse_coeff_rt[y][z]))           //(wbuf, cell_idx,  rx_idx)
#define BIGRAM_LTE_WORKING_BUFx_DMRSCE_MMSE_COEFF_RFL_BASE(x, y)          (x + offsetof(working_lte_dmrsce, payload.mmse_coeff_rf[y]))           //(wbuf, rx_idx)
#define BIGRAM_LTE_WORKING_BUFx_DMRSCE_BIGRAM_DUMP_BASE(x)                (x + offsetof(working_lte_dmrsce, payload.bigram_dump))                //(wbuf)

#endif
