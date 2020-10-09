#include "ssdvt_header.h"
#include "ssdvt_typedef.h"

#include "memory_test.h"

#include <stdlib.h>

/*******************************************************************************
* Macros 
*******************************************************************************/
#define  SSDVT_MEM_RANDOM_TEST_SIZE         128
#define  SSDVT_MEM_RANDOM_TEST_TIMES        1

#define  SSDVT_MEM_TEST_BANK2_ALIGIN_ADDR   0x8000

#define  SSDVT_MEM_DELAY_LOOP_COUNT         1000 

/*******************************************************************************
* Global variable 
*******************************************************************************/
SSDVT_MEM_TestType ssdvt_mem_test_type;
ssdvt_uint32       ssdvt_mem_test_current_status_base;
ssdvt_uint32       ssdvt_mem_test_mem_range_num;


#if !defined(__SIMULATION__)
/* random test */
ssdvt_uint32 ssdvt_mem_check_index[SSDVT_MEM_RANDOM_TEST_SIZE];     // check random index
ssdvt_uint32 ssdvt_mem_check_value[SSDVT_MEM_RANDOM_TEST_SIZE];     // check random value
ssdvt_uint32 ssdvt_mem_check_test_size;
#endif /* __SIMULATION__ */

/*******************************************************************************
* Functions 
*******************************************************************************/

void write_word_value(const ssdvt_uint32 write_value,
                      const ssdvt_uint32_p x,
                      const ssdvt_uint32 x_size)
{
    ssdvt_uint32 i;
    for(i = 0; i < x_size ; ++i){
        x[i] = write_value;
    }
}

ssdvt_uint32 check_word_value(const ssdvt_uint32 ssdvt_mem_check_value,
                              const ssdvt_uint32_p x,
                              const ssdvt_uint32 x_size)
{
    ssdvt_uint32 i;
    for(i = 0; i < x_size ; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(x[i], ssdvt_mem_check_value);
    }
    return 0;
}

ssdvt_uint32 SSDVT_MEM_basic_test_XXIF(const ssdvt_uint32             client,
                                       const ssdvt_uint32             check_all_client,
                                       const SSDVT_MEM_MemInfo_ptr    xxif,
                                       const SSDVT_MEM_BarrierSyncFun read_sync_fun,
                                       const SSDVT_MEM_BarrierSyncFun write_sync_fun)
{
    /*volatile ssdvt_uint32 i;*/
    const ssdvt_uint32_p  base_32 = (ssdvt_uint32_p)xxif->base_addr;
    const ssdvt_uint32    size_base_32 = xxif->size/ sizeof(ssdvt_uint32);
    const ssdvt_uint32_p  sync = xxif->sync;

    /** 0x00000000 */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 11);
    /* Write */
    if(client){
        write_word_value(0x0, base_32, size_base_32);
        dbg_print(".... test for 0x0 write \r\n");
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync_fun)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 12);
    if(check_all_client || !client){
        dbg_print(".... test for 0x0 read \r\n");
        check_word_value(0x0, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync_fun)(client, sync);
    dbg_print("... test for 0x0 success.\r\n");

    
    /** 0xFFFFFFFF*/
    /* Write */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 13);
    if(client){
        write_word_value(0xFFFFFFFF, base_32, size_base_32);
        dbg_print(".... test for 0xFFFFFFFF write \r\n");
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync_fun)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 14);
    if(check_all_client || !client){
        dbg_print(".... xxif test for 0xFFFFFFFF read \r\n");
        check_word_value(0xFFFFFFFF, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync_fun)(client, sync);
    dbg_print("... mem test for 0xFFFFFFFF success.\r\n");

    dbg_print("... mem basic test: Pass.\n");

    return 0;
}

ssdvt_uint32 SSDVT_MEM_full_size_test_XXIF(const ssdvt_uint32             client,
                                           const ssdvt_uint32             check_all_client,
                                           const SSDVT_MEM_MemInfo_ptr    xxif,
                                           const SSDVT_MEM_BarrierSyncFun read_sync,
                                           const SSDVT_MEM_BarrierSyncFun write_sync)
{

    volatile ssdvt_uint32 i, j, k;

    const ssdvt_uint32_p base_32 = (ssdvt_uint32_p)xxif->base_addr;
    const ssdvt_uint16_p base_16 = (ssdvt_uint16_p)xxif->base_addr;
    const ssdvt_uint8_p  base_8  = (ssdvt_uint8_p)xxif->base_addr;

    const ssdvt_uint32 size_base_32 = xxif->size/ sizeof(ssdvt_uint32);
    const ssdvt_uint32 size_base_16 = xxif->size/ sizeof(ssdvt_uint16);
    const ssdvt_uint32  size_base_8  = xxif->size/ sizeof(ssdvt_uint8);

    const ssdvt_uint32_p sync = xxif->sync;

    ssdvt_uint32  pattern_32  = 0; 
    ssdvt_uint16  pattern_16  = 0; 
    ssdvt_uint8   pattern_8  = 0; 


    /**  0, 1, 2, ... for each byte(1 byte) */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 15);
    /* Write */
    if(client){
        for(i = 0, pattern_8 = 0; i<size_base_8; i++, pattern_8++){
            base_8[i] = pattern_8;
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 16);
    if(check_all_client || !client){
        for(i = 0, pattern_8 = 0; i<size_base_8; i++, pattern_8++){
            SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_8[i], pattern_8);
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0, 1, 2, ... for each byte(1 byte) test success\n");

    /** 0, 1, 2, ... for each half word(2 bytes)*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 17);
    /* Write */
    if(client){
        for(i = 0, pattern_16 = 0; i<size_base_16; i++, pattern_16++){
            base_16[i] = pattern_16;
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 18);
    if(check_all_client || !client){
        for(i = 0, pattern_16 = 0; i<size_base_16; i++, pattern_16++){
            SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_16[i], pattern_16);
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0, 1, 2, ... for each half word(2 bytes) test success\n");

    /** 0, 1, 2, ... for each word(4 bytes)*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 19);
    /* Write */
    if(client){
        for(i = 0, pattern_32 = 0; i<size_base_32; i++, pattern_32++){
            base_32[i] = pattern_32;
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 20);
    if(check_all_client || !client){
        for(i = 0, pattern_32 = 0; i<size_base_32; i++, pattern_32++){
            SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_32[i], pattern_32);
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0, 1, 2, ... for word(4 bytes) test success\n");

    /** 0x5a5a5a5a*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 21);
    /* Write */
    if(client){
        write_word_value(0x5a5a5a5a, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 22);
    if(check_all_client || !client){
        check_word_value(0x5a5a5a5a, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0x5a5a5a5a test success\n");

    /** 0xa5a5a5a5 */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 23);
    /* Write */
    if(client){
        write_word_value(0xa5a5a5a5, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 24);
    if(check_all_client || !client){
        check_word_value(0xa5a5a5a5, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0xa5a5a5a5 test success\n");

    /** 0xa5a5a500 */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 25);
    /* Write */
    if(client){
        for(i=0; i<size_base_32; ++i){
            base_8[i*4] = 0x00;
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 26);
    if(check_all_client || !client){
        check_word_value(0xa5a5a500, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0xa5a5a500 test success\n");

    /** 0xa500a500 */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 27);
    /* Write */
    if(client){
        for(i=0; i<size_base_32; ++i){
            base_8[i*4+2] = 0x00;
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 28);
    if(check_all_client || !client){
        check_word_value(0xa500a500, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0xa500a500 test success\n");

    /** 0xa5000000 */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 29);
    /* Write */
    if(client){
        for(i=0; i<size_base_32; ++i){
            base_8[i*4+1] = 0x00;
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 30);
    if(check_all_client || !client){
        check_word_value(0xa5000000, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0xa5000000 test success\n");

    /** 0x00000000 */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 31);
    /* Write */
    if(client){
        for(i=0; i<size_base_32; ++i){
            base_8[i*4+3] = 0x00;
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 32);
    if(check_all_client || !client){
        check_word_value(0x00000000, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0x00000000 test success\n");

    /** 0xFFFF0000*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 33);
    /* Write */
    if(client){
        for(i=0; i<size_base_32; ++i){
            base_16[i*2+1] = 0xFFFF;
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);
    dbg_print("... 0xFFFF0000 test success\n");

    /* Check*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 34);
    if(check_all_client || !client){
        check_word_value(0xFFFF0000, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0xFFFF0000 test success\n");

    /** 0xFFFFFFFF*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 35);
    /* Write */
    if(client){
        for(i=0; i<size_base_32; ++i){
            base_16[i*2] = 0xFFFF;
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 36);
    if(check_all_client || !client){
        check_word_value(0xFFFFFFFF, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0xFFFFFFFF test success\n");

    /** 0x5A for each byte by fibonacci sequence (index: 8, 13, 21, 34 ...) */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 37);
    /* Write */
    if(client){
        for(i=0; i<size_base_8; i++){
            base_8[i] = 0x5A;
        }
        for(i=8, j=5; i<size_base_8; k=i, i+=j, j=k){
            base_8[i] = (ssdvt_uint8)j;
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 38);
    if(check_all_client || !client){
        for(i=0; i<(ssdvt_uint32)((size_base_8<8)?size_base_8:8); ++i){
            SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_8[i], 0x5A);
        }
        for(i=8, j=5; i<size_base_8; k=i, i+=j, j=k){
            SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_8[i], (ssdvt_uint8)j);

            for(k=i+1; k < (i+j) && k < size_base_8; ++k){
                SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_8[k], 0x5A);
            }
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0x5A by fibonacci sequence (index: 8, 13, 21, 34 ...) test success\n");

    /** 0x55AA for each half word by fibonacci sequence (index: 8, 13, 21, 34 ...) */
    /* Write */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 39);
    if(client){
        for(i=0; i<size_base_16; i++){
            base_16[i] = 0x55AA;
        }
        for(i=8, j=5; i<size_base_16; k=i, i+=j, j=k){
            base_16[i] = (ssdvt_uint16)j;
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 40);
    if(check_all_client || !client){
        for(i=0; i<(ssdvt_uint32)((size_base_16<8)?size_base_16:8); ++i){
            SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_16[i], 0x55AA);
        }
        for(i=8, j=5; i<size_base_16; k=i, i+=j, j=k){
            SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_16[i], (ssdvt_uint16)j);

            for(k=i+1; k < (i+j) && k < size_base_16; ++k){
                SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_16[k], 0x55AA);
            }
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0x55AA by fibonacci sequence (index: 8, 13, 21, 34 ...) test success\n");

    /** 0x12345678 for each word by fibonacci sequence (index: 8, 13, 21, 34 ...) */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 41);
    /* Write */
    if(client){
        for(i=0; i<size_base_32; i++){
            base_32[i] = 0x12345678;
        }
        for(i=8, j=5; i<size_base_32; k=i, i+=j, j=k){
            base_32[i] = (ssdvt_uint32)j;
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check*/
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 42);
    if(check_all_client || !client){
        for(i=0; i<(ssdvt_uint32)((size_base_32<8)?size_base_32:8); ++i){
            SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_32[i], 0x12345678);
        }
        for(i=8, j=5; i<size_base_32; k=i, i+=j, j=k){
            SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_32[i], (ssdvt_uint32)j);

            for(k=i+1; k < (i+j) && k < size_base_32; ++k){
                SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_32[k], 0x12345678);
            }
        }
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... 0x12345678 by fibonacci sequence (index: 8, 13, 21, 34 ...) test success\n");

    dbg_print("... full size test: Pass.\n");

    return 0;
}

ssdvt_uint32 SSDVT_MEM_half_size_test_XXIF(const ssdvt_uint32             client,
                                           const ssdvt_uint32             check_all_client,
                                           const SSDVT_MEM_MemInfo_ptr    xxif,
                                           const SSDVT_MEM_BarrierSyncFun read_sync,
                                           const SSDVT_MEM_BarrierSyncFun write_sync)
{
    /*ssdvt_uint32 i;*/
   
    const ssdvt_uint32_p base_32      = xxif->base_addr;
    const ssdvt_uint32   size_base_32 = xxif->size/ sizeof(ssdvt_uint32);

    const ssdvt_uint32_p c1_base_addr = base_32;
    const ssdvt_uint32   c1_size      = size_base_32 / 2;
    const ssdvt_uint32_p c2_base_addr = base_32 + c1_size;
    const ssdvt_uint32   c2_size      = size_base_32 - c1_size;

    const ssdvt_uint32_p sync = xxif->sync;

    /** 0x00000000 */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 43);
    /* Write */
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    if(client){
        write_word_value(0x0, c1_base_addr, c1_size);
    }
    else{
        write_word_value(0x0, c2_base_addr, c2_size);
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    write_word_value(0x0, c1_base_addr, c1_size);
    write_word_value(0x0, c2_base_addr, c2_size);
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 44);
    check_word_value(0x0, base_32, size_base_32);
    (*read_sync)(client, sync);
    dbg_print("... half size: 0x0 + 0x0 test success\n");

    /** 0xFFFFFFFF */
    /* Write */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 45);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    if(client){
        write_word_value(0xFFFFFFFF, c1_base_addr, c1_size);
    }
    else{
        write_word_value(0xFFFFFFFF, c2_base_addr, c2_size);
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    write_word_value(0xFFFFFFFF, c1_base_addr, c1_size);
    write_word_value(0xFFFFFFFF, c2_base_addr, c2_size);
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 46);
    check_word_value(0xFFFFFFFF, base_32, size_base_32);
    (*read_sync)(client, sync);
    dbg_print("... half size: 0xFFFFFFFF + 0xFFFFFFFF test success\n");

    /** 0xa5a5a5a5 + 0x5a5a5a5a */
    /* Write */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 47);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    if(client){
        write_word_value(0x5a5a5a5a, c1_base_addr, c1_size);
    }
    else{
        write_word_value(0xa5a5a5a5, c2_base_addr, c2_size);
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    write_word_value(0x5a5a5a5a, c1_base_addr, c1_size);
    write_word_value(0xa5a5a5a5, c2_base_addr, c2_size);
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 48);
    check_word_value(0x5a5a5a5a, c1_base_addr, c1_size);
    check_word_value(0xa5a5a5a5, c2_base_addr, c2_size);
    (*read_sync)(client, sync);
    dbg_print("... half size: 0x5a5a5a5a + 0xa5a5a5a5 test success\n");

    dbg_print("... half size test: Pass.\n");

    return 0;
}

ssdvt_uint32 SSDVT_MEM_interleave_test_base_8_XXIF(const ssdvt_uint32             client,
                                                   const ssdvt_uint32             check_all_client,
                                                   const SSDVT_MEM_MemInfo_ptr    xxif,
                                                   const SSDVT_MEM_BarrierSyncFun read_sync,
                                                   const SSDVT_MEM_BarrierSyncFun write_sync)
{
    ssdvt_uint32 i, j, k;

    const ssdvt_uint8_p  base_8  = (ssdvt_uint8_p)xxif->base_addr;
    const ssdvt_uint32   size_base_8  = xxif->size/ sizeof(ssdvt_uint8);
    ssdvt_uint8          pattern_8  = 0; 

    const ssdvt_uint32_p sync = xxif->sync;

    /**  Test for bytes */
    /** Interleave test for each byte fill with 0x0 */
    /* Write */
    /* i: 0 write 0x0 in index 0, 2, 4, ... */
    /* i: 1 write 0x0 in index 1, 3, 5, ... */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 49);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1; i<size_base_8; i+=2){
        base_8[i] = 0x0;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0; i<size_base_8; i+=2){
        base_8[i] = 0x0;
    }
    for(i= 1; i<size_base_8; i+=2){
        base_8[i] = 0x0;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 50);
    for(i=0; i<size_base_8; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_8[i], 0x0);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 8: 0, ...success\n");

    /** Interlave test for each byte fill with 0xFF */
    /* Write */
    /* i: 0 write 0xFF in index 0, 2, 4, ... */
    /* i: 1 write 0xFF in index 1, 3, 5, ... */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 51);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1; i< size_base_8; i+= 2){
        base_8[i] = 0xFF;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0; i< size_base_8; i+= 2){
        base_8[i] = 0xFF;
    }
    for(i= 1; i< size_base_8; i+= 2){
        base_8[i] = 0xFF;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 52);
    for(i= 0; i<size_base_8; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_8[i], 0xFF);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 8: 0xFF, 0xFF success\n");

    /** Interlave test for each byte fill with 0x5A and 0xA5 */
    /* Write */
    /* i: 0 write 0x5A in index 0, 2, 4, ... */
    /* i: 1 write 0xA5 in index 1, 3, 5, ... */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 53);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1, pattern_8= (client)?0x5A:0xA5; i< size_base_8; i+=2){
        base_8[i] = pattern_8;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0, pattern_8= 0x5A; i< size_base_8; i+=2){
        base_8[i] = pattern_8;
    }
    for(i= 1, pattern_8= 0xA5; i< size_base_8; i+=2){
        base_8[i] = pattern_8;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 54);
    for(i=0; i< size_base_8; i+=2){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_8[i], 0x5A);
    }
    for(i=1; i< size_base_8; i+=2){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_8[i], 0xA5);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 8: 0x5a, 0xa5 success\n");

    /** Interlave test for each byte */
    /* Write */
    /* i: 0 write  0, 2, 4, ... in index 0, 2, 4, ... */
    /* i: 1 write  1, 3, 5, ... in index 1, 3, 5, ... */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 55);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1; i<size_base_8; i+=2){
        base_8[i] = (ssdvt_uint8)i;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0; i<size_base_8; i+=2){
        base_8[i] = (ssdvt_uint8)i;
    }
    for(i= 1; i<size_base_8; i+=2){
        base_8[i] = (ssdvt_uint8)i;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 56);
    for(i=0; i<size_base_8; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_8[i], (ssdvt_uint8)i);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 8: 0, 1, 2 ... success\n");

    /* Write in fib seuqences */
    /* Before fib test, we reset the test memory to zero */
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1; i<size_base_8; i+=2){
        base_8[i] = 0x0;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0; i<size_base_8; i+=2){
        base_8[i] = 0x0;
    }
    for(i= 1; i<size_base_8; i+=2){
        base_8[i] = 0x0;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 50);
    for(i=0; i<size_base_8; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_8[i], 0x0);
    }
    (*read_sync)(client, sync);
    dbg_print("reset the test memory to zero Done\n");
    /* reset the test memory to zero Done */
    
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 57);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    if(client){
        for (i= 0; i< (size_base_8<8?size_base_8:8); i++) {
            base_8[i] = (ssdvt_uint8)i;
        }
        for (i= 8, j= 5; i< size_base_8; k=i, i+=j, j=k) {
            base_8[i] = (ssdvt_uint8)i;
        }
    }
    else{
        for (i= 8, j= 5; i< size_base_8; k=i, i+=j, j=k) {
            for(k=i+1; k < (i+j) && k < size_base_8; ++k){
                base_8[k] = (ssdvt_uint8)k;
            }
        }
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for (i= 0; i< (size_base_8<8?size_base_8:8); i++) {
        base_8[i] = (ssdvt_uint8)i;
    }
    for (i= 8, j= 5; i< size_base_8; k=i, i+=j, j=k) {
        base_8[i] = (ssdvt_uint8)i;
    }
    for (i= 8, j= 5; i< size_base_8; k=i, i+=j, j=k) {
        for(k=i+1; k < (i+j) && k < size_base_8; ++k){
            base_8[k] = (ssdvt_uint8)k;
        }
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 58);
    for(i=0; i<size_base_8; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_8[i], (ssdvt_uint8)i);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 8: fibonacci sequence success\n");

    dbg_print("... interleave test base 8 bits: Pass.\n");

    return 0;
}


ssdvt_uint32 SSDVT_MEM_interleave_test_base_16_XXIF(const ssdvt_uint32             client,
                                                    const ssdvt_uint32             check_all_client,
                                                    const SSDVT_MEM_MemInfo_ptr    xxif,
                                                    const SSDVT_MEM_BarrierSyncFun read_sync,
                                                    const SSDVT_MEM_BarrierSyncFun write_sync)
{
    ssdvt_uint32 i, j, k;

    const ssdvt_uint16_p  base_16  = (ssdvt_uint16_p)xxif->base_addr;
    const ssdvt_uint32    size_base_16  = xxif->size/ sizeof(ssdvt_uint16);
    ssdvt_uint16          pattern_16  = 0; 

    const ssdvt_uint32_p sync = xxif->sync;

    /**  Test for bytes */
    /** Interlave test for each byte fill with 0x0 */
    /* Write */
    /* i: 0 write 0x0 in index 0, 2, 4, ... */
    /* i: 1 write 0x0 in index 1, 3, 5, ... */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 59);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1; i<size_base_16; i+=2){
        base_16[i] = 0x0;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0; i<size_base_16; i+=2){
        base_16[i] = 0x0;
    }
    for(i= 1; i<size_base_16; i+=2){
        base_16[i] = 0x0;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 60);
    for(i=0; i<size_base_16; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_16[i], 0x0);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 16: 0, ...success\n");

    /** Interlave test for each byte fill with 0xFFFF */
    /* Write */
    /* i: 0 write 0xFFFF in index 0, 2, 4, ... */
    /* i: 1 write 0xFFFF in index 1, 3, 5, ... */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 61);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1; i<size_base_16; i+=2){
        base_16[i] = 0xFFFF;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0; i<size_base_16; i+=2){
        base_16[i] = 0xFFFF;
    }
    for(i= 1; i<size_base_16; i+=2){
        base_16[i] = 0xFFFF;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 62);
    for(i=0; i<size_base_16; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_16[i], 0xFFFF);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 16: 0xFFFF, 0xFFFF success\n");

    /** Interlave test for each byte fill with 0x5A and 0xA5 */
    /* Write */
    /* i: 0 write 0x5A in index 0, 2, 4, ... */
    /* i: 1 write 0xA5 in index 1, 3, 5, ... */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 63);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1, pattern_16= (client)?0x5A5A:0xA5A5; i< size_base_16; i+=2){
        base_16[i] = pattern_16;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0, pattern_16= 0x5A5A; i< size_base_16; i+=2){
        base_16[i] = pattern_16;
    }
    for(i= 1, pattern_16= 0xA5A5; i< size_base_16; i+=2){
        base_16[i] = pattern_16;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 64);
    for(i=0; i< size_base_16; i+=2){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_16[i], 0x5A5A);
    }
    for(i=1; i< size_base_16; i+=2){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_16[i], 0xA5A5);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 16: 0x5a5a, 0xa5a5 success\n");

    /** Interlave test for each half word */
    /* Write */
    /* i: 0 write  0, 2, 4, ... in index 0, 2, 4, ... */
    /* i: 1 write  1, 3, 5, ... in index 1, 3, 5, ... */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 65);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1; i<size_base_16; i+=2){
        base_16[i] = (ssdvt_uint16)i;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0; i<size_base_16; i+=2){
        base_16[i] = (ssdvt_uint16)i;
    }
    for(i= 1; i<size_base_16; i+=2){
        base_16[i] = (ssdvt_uint16)i;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 66);
    for(i=0; i<size_base_16; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_16[i], (ssdvt_uint16)i);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 16: 0, 1, 2 ... success\n");

    /* Write in fib seuqences */
    /* Before test fib sequence, reset the test memory */
    #if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1; i<size_base_16; i+=2){
        base_16[i] = 0x0;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0; i<size_base_16; i+=2){
        base_16[i] = 0x0;
    }
    for(i= 1; i<size_base_16; i+=2){
        base_16[i] = 0x0;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 60);
    for(i=0; i<size_base_16; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_16[i], 0x0);
    }
    (*read_sync)(client, sync);
    dbg_print("Reset test memory done\n");
    /* Reset test memory done */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 67);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    if(client){
        for (i= 0; i< (size_base_16<8?size_base_16:8); i++) {
            base_16[i] = (ssdvt_uint16)i;
        }
        for (i= 8, j= 5; i< size_base_16; k=i, i+=j, j=k) {
            base_16[i] = (ssdvt_uint16)i;
        }
    }
    else{
        for (i= 8, j= 5; i< size_base_16; k=i, i+=j, j=k) {
            for(k=i+1; k < (i+j) && k < size_base_16; ++k){
                base_16[k] = (ssdvt_uint16)k;
            }
        }
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for (i= 0; i< (size_base_16<8?size_base_16:8); i++) {
        base_16[i] = (ssdvt_uint16)i;
    }
    for (i= 8, j= 5; i< size_base_16; k=i, i+=j, j=k) {
        base_16[i] = (ssdvt_uint16)i;
    }
    for (i= 8, j= 5; i< size_base_16; k=i, i+=j, j=k) {
        for(k=i+1; k < (i+j) && k < size_base_16; ++k){
            base_16[k] = (ssdvt_uint16)k;
        }
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 68);
    for(i=0; i<size_base_16; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_16[i], (ssdvt_uint16)i);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 16: fibonacci sequence success\n");

    dbg_print("... interleave test base 16 bits: Pass.\n");

    return 0;
}


ssdvt_uint32 SSDVT_MEM_interleave_test_base_32_XXIF(const ssdvt_uint32             client,
                                                    const ssdvt_uint32             check_all_client,
                                                    const SSDVT_MEM_MemInfo_ptr    xxif,
                                                    const SSDVT_MEM_BarrierSyncFun read_sync,
                                                    const SSDVT_MEM_BarrierSyncFun write_sync)
{
    ssdvt_uint32 i, j, k;

    const ssdvt_uint32_p  base_32  = (ssdvt_uint32_p)xxif->base_addr;
    const ssdvt_uint32    size_base_32  = xxif->size/ sizeof(ssdvt_uint32);
    ssdvt_uint32          pattern_32  = 0; 

    const ssdvt_uint32_p sync = xxif->sync;

    /**  Test for bytes */
    /** Interleave test for each byte fill with 0x0 */
    /* Write */
    /* i: 0 write 0x0 in index 0, 2, 4, ... */
    /* i: 1 write 0x0 in index 1, 3, 5, ... */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 69);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1; i<size_base_32; i+=2){
        base_32[i] = 0x0;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0; i<size_base_32; i+=2){
        base_32[i] = 0x0;
    }
    for(i= 1; i<size_base_32; i+=2){
        base_32[i] = 0x0;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 70);
    for(i=0; i<size_base_32; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_32[i], 0x0);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 32: 0, ...success\n");

    /** Interleave test for each byte fill with 0xFFFFFFFF */
    /* Write */
    /* i: 0 write 0xFFFFFFFF in index 0, 2, 4, ... */
    /* i: 1 write 0xFFFFFFFF in index 1, 3, 5, ... */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 71);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1; i<size_base_32; i+=2){
        base_32[i] = 0xFFFFFFFF;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0; i<size_base_32; i+=2){
        base_32[i] = 0xFFFFFFFF;
    }
    for(i= 1; i<size_base_32; i+=2){
        base_32[i] = 0xFFFFFFFF;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 72);
    for(i=0; i<size_base_32; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_32[i], 0xFFFFFFFF);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 32: 0xFFFFFFFF, 0xFFFFFFFF success\n");

    /** Interlave test for each byte fill with 0x5A and 0xA5 */
    /* Write */
    /* i: 0 write 0x5A5A5A5A in index 0, 2, 4, ... */
    /* i: 1 write 0xA5A5A5A5 in index 1, 3, 5, ... */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 73);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1, pattern_32= (client)?0x5A5A5A5A:0xA5A5A5A5; i< size_base_32; i+=2){
        base_32[i] = pattern_32;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0, pattern_32= 0x5A5A5A5A; i< size_base_32; i+=2){
        base_32[i] = pattern_32;
    }
    for(i= 1, pattern_32= 0xA5A5A5A5; i< size_base_32; i+=2){
        base_32[i] = pattern_32;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 74);
    for(i=0; i< size_base_32; i+=2){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_32[i], 0x5A5A5A5A);
    }
    for(i=1; i< size_base_32; i+=2){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_32[i], 0xA5A5A5A5);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 16: 0x5a5a5a5a, 0xa5a5a5a5 success\n");

    /** Interlave test for each half word */
    /* Write */
    /* i: 0 write  0, 2, 4, ... in index 0, 2, 4, ... */
    /* i: 1 write  1, 3, 5, ... in index 1, 3, 5, ... */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 75);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1; i<size_base_32; i+=2){
        base_32[i] = (ssdvt_uint32)i;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0; i<size_base_32; i+=2){
        base_32[i] = (ssdvt_uint32)i;
    }
    for(i= 1; i<size_base_32; i+=2){
        base_32[i] = (ssdvt_uint32)i;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 76);
    for(i=0; i<size_base_32; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_32[i], (ssdvt_uint32)i);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 32: 0, 1, 2 ... success\n");

    /* Write in fib sequences */
    /* Before test, reset test memory */
    #if !defined(__CMIF_SIGNLE_CORE_TEST__)
    for(i= (client)?0:1; i<size_base_32; i+=2){
        base_32[i] = 0x0;
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for(i= 0; i<size_base_32; i+=2){
        base_32[i] = 0x0;
    }
    for(i= 1; i<size_base_32; i+=2){
        base_32[i] = 0x0;
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 70);
    for(i=0; i<size_base_32; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_32[i], 0x0);
    }
    (*read_sync)(client, sync);
    dbg_print("Reset test memory done\n");
    /* Reset test memory done */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 77);
#if !defined(__CMIF_SIGNLE_CORE_TEST__)
    if(client){
        for (i= 0; i< (size_base_32<8?size_base_32:8); i++) {
            base_32[i] = (ssdvt_uint32)i;
        }
        for (i= 8, j= 5; i< size_base_32; k=i, i+=j, j=k) {
            base_32[i] = (ssdvt_uint32)i;
        }
    }
    else{
        for (i= 8, j= 5; i< size_base_32; k=i, i+=j, j=k) {
            for(k=i+1; k < (i+j) && k < size_base_32; ++k){
                base_32[k] = (ssdvt_uint32)k;
            }
        }
    }
#else    /* !__CMIF_SIGNLE_CORE_TEST__ */
    for (i= 0; i< (size_base_32<8?size_base_32:8); i++) {
        base_32[i] = (ssdvt_uint32)i;
    }
    for (i= 8, j= 5; i< size_base_32; k=i, i+=j, j=k) {
        base_32[i] = (ssdvt_uint32)i;
    }
    for (i= 8, j= 5; i< size_base_32; k=i, i+=j, j=k) {
        for(k=i+1; k < (i+j) && k < size_base_32; ++k){
            base_32[k] = (ssdvt_uint32)k;
        }
    }
#endif  /* !__CMIF_SIGNLE_CORE_TEST__ */
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 78);
    for(i=0; i<size_base_32; ++i){
        SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_32[i], (ssdvt_uint32)i);
    }
    (*read_sync)(client, sync);
    dbg_print("... interleave base 32: fibonacci sequence success\n");

    dbg_print("... interleave test base 32 bits: Pass.\n");

    return 0;
}


ssdvt_uint32 SSDVT_MEM_random_test_base_8_XXIF(const ssdvt_uint32             client,
                                               const ssdvt_uint32             check_all_client,
                                               const SSDVT_MEM_MemInfo_ptr    xxif,
                                               const SSDVT_MEM_BarrierSyncFun read_sync,
                                               const SSDVT_MEM_BarrierSyncFun write_sync)
{
    volatile ssdvt_uint32 i, j;
    ssdvt_uint32 times;

    const ssdvt_uint8_p  base_8  = (ssdvt_uint8_p)xxif->base_addr;
    const ssdvt_uint32   size_base_8  = xxif->size/ sizeof(ssdvt_uint8);

    const ssdvt_uint32_p base_32 = (ssdvt_uint32_p)xxif->base_addr;
    const ssdvt_uint32   size_base_32 = xxif->size/ sizeof(ssdvt_uint32);

    const ssdvt_uint32_p sync = xxif->sync;

    ssdvt_uint32 ridx[SSDVT_MEM_RANDOM_TEST_SIZE];     // random index
    ssdvt_uint8  rvalue[SSDVT_MEM_RANDOM_TEST_SIZE];   // random value
    ssdvt_uint32 random_test_size = (SSDVT_MEM_RANDOM_TEST_SIZE > size_base_32)? size_base_32: SSDVT_MEM_RANDOM_TEST_SIZE;

    ssdvt_uint32 sidx;

    for(times = 0; times < SSDVT_MEM_RANDOM_TEST_TIMES; ++times){
        dbg_print("... 8 byte random test %u/%u:\n", times+1, SSDVT_MEM_RANDOM_TEST_TIMES);

        /* Generator index */
        for(i=0; i< random_test_size; i++){
            ridx[i] = (rand()+1) % size_base_8;  
        }
        
        /* Generate value */
        for(i=0; i< random_test_size; i++){
            rvalue[i] = (ssdvt_uint8)(rand()+1);
        }


        /* Random Test */
        /**
          *  Step 1: Send index
          *  Step 2: Send value
          *  Step 3: Check the index and the value
          **/
        /* Send index*/
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 79);
        if(client){
            for(i=0; i<random_test_size; ++i){
                base_32[i] = ridx[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*write_sync)(client, sync);

        /* Receive index */
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 80);
        if(check_all_client || !client){
            for(i=0; i<random_test_size; ++i){
                ridx[i] = base_32[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*read_sync)(client, sync);

        /* Send value */
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 81);
        if(client){
            for(i=0; i<random_test_size; ++i){
                base_8[i] = rvalue[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*write_sync)(client, sync);

        /* Receive value */
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 82);
        if(check_all_client || !client){
            for(i=0; i<random_test_size; ++i){
                rvalue[i] = base_8[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*read_sync)(client, sync);

        /* Random write with index and value*/
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 83);
        if(client){
            for(i=0; i<random_test_size; ++i){
                base_8[ridx[i]] = rvalue[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*write_sync)(client, sync);

        /* Check with index and value*/
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 84);
        if(check_all_client || !client){
            /* Generate golden pattern */
            for(i=0, ssdvt_mem_check_test_size = 0; i<random_test_size; ++i){
                sidx = i;
                for(j=0; j<ssdvt_mem_check_test_size; j++){
                    if(ssdvt_mem_check_index[j] == ridx[i]){
                        sidx = j;
                        break;
                    }
                }
                if(j == ssdvt_mem_check_test_size){
                    sidx = ssdvt_mem_check_test_size;
                    ssdvt_mem_check_test_size++;

                    ssdvt_mem_check_index[sidx] = ridx[i];
                }
                ssdvt_mem_check_value[sidx] = rvalue[i]; 
            }

            /* check */
            for(i=0; i<ssdvt_mem_check_test_size; ++i){
                SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_8[ssdvt_mem_check_index[i]], ssdvt_mem_check_value[i]);
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*read_sync)(client, sync);
    }
    dbg_print("... memory random test (1 byte) success\n");

    return 0;
}

ssdvt_uint32 SSDVT_MEM_random_test_base_16_XXIF(const ssdvt_uint32             client,
                                                const ssdvt_uint32             check_all_client,
                                                const SSDVT_MEM_MemInfo_ptr    xxif,
                                                const SSDVT_MEM_BarrierSyncFun read_sync,
                                                const SSDVT_MEM_BarrierSyncFun write_sync)
{
    volatile ssdvt_uint32 i, j;
    ssdvt_uint32 times;

    const ssdvt_uint16_p  base_16  = (ssdvt_uint16_p)xxif->base_addr;
    const ssdvt_uint32    size_base_16  = xxif->size/ sizeof(ssdvt_uint16);

    const ssdvt_uint32_p base_32 = (ssdvt_uint32_p)xxif->base_addr;
    const ssdvt_uint32   size_base_32 = xxif->size/ sizeof(ssdvt_uint32);

    const ssdvt_uint32_p sync = xxif->sync;

    ssdvt_uint32 ridx[SSDVT_MEM_RANDOM_TEST_SIZE];     // random index
    ssdvt_uint16 rvalue[SSDVT_MEM_RANDOM_TEST_SIZE];   // random value
    ssdvt_uint32 random_test_size = (SSDVT_MEM_RANDOM_TEST_SIZE > size_base_32)? size_base_32: SSDVT_MEM_RANDOM_TEST_SIZE;

    ssdvt_uint32 sidx;

    srand(91);
    for(times = 0; times < SSDVT_MEM_RANDOM_TEST_TIMES; ++times){
        dbg_print("... 16 byte random test %u/%u:\n", times+1, SSDVT_MEM_RANDOM_TEST_TIMES);

        /* Generatr index */
        for(i=0; i< random_test_size; i++){
            ridx[i] = (rand() + 1)%size_base_16;  
        }
        
        /* Generate value */
        for(i=0; i< random_test_size; i++){
            rvalue[i] = (ssdvt_uint16)(rand()+1);
        }

        /* Random Test */
        /**
          *  Step 1: Send index
          *  Step 2: Send value
          *  Step 3: Check the index and the value
          **/
        /* Send index*/
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 85);
        if(client){
            for(i=0; i<random_test_size; ++i){
                base_32[i] = ridx[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*write_sync)(client, sync);

        /* Receive index */
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 86);
        if(check_all_client || !client){
            for(i=0; i<random_test_size; ++i){
                ridx[i] = base_32[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*read_sync)(client, sync);

        /* Send value */
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 87);
        if(client){
            for(i=0; i<random_test_size; ++i){
                base_16[i] = rvalue[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*write_sync)(client, sync);

        /* Receive value */
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 88);
        if(check_all_client || !client){
            for(i=0; i<random_test_size; ++i){
                rvalue[i] = base_16[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*read_sync)(client, sync);

        /* Random write with index and value*/
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 89);
        if(client){
            for(i=0; i<random_test_size; ++i){
                base_16[ridx[i]] = rvalue[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*write_sync)(client, sync);

        /* Check with index and value*/
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 90);
        if(check_all_client || !client){
            /* Generate golden pattern */
            for(i=0, ssdvt_mem_check_test_size = 0; i<random_test_size; ++i){
                sidx = i;
                for(j=0; j<ssdvt_mem_check_test_size; j++){
                    if(ssdvt_mem_check_index[j] == ridx[i]){
                        sidx = j;
                        break;
                    }
                }
                if(j == ssdvt_mem_check_test_size){
                    sidx = ssdvt_mem_check_test_size;
                    ssdvt_mem_check_test_size++;

                    ssdvt_mem_check_index[sidx] = ridx[i];
                }
                ssdvt_mem_check_value[sidx] = rvalue[i]; 
            }

            /* check */
            for(i=0; i<ssdvt_mem_check_test_size; ++i){
                SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_16[ssdvt_mem_check_index[i]], ssdvt_mem_check_value[i]);
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*read_sync)(client, sync);
    }
    dbg_print("... memory random test (2 bytes) success\n");

    return 0;
}

ssdvt_uint32 SSDVT_MEM_random_test_base_32_XXIF(const ssdvt_uint32             client,
                                                const ssdvt_uint32             check_all_client,
                                                const SSDVT_MEM_MemInfo_ptr    xxif,
                                                const SSDVT_MEM_BarrierSyncFun read_sync,
                                                const SSDVT_MEM_BarrierSyncFun write_sync)
{
    volatile ssdvt_uint32 i, j;
    ssdvt_uint32 times;

    const ssdvt_uint32_p  base_32  = (ssdvt_uint32_p)xxif->base_addr;
    const ssdvt_uint32    size_base_32  = xxif->size/ sizeof(ssdvt_uint32);

    const ssdvt_uint32_p sync = xxif->sync;

    ssdvt_uint32 ridx[SSDVT_MEM_RANDOM_TEST_SIZE];     // random index
    ssdvt_uint32 rvalue[SSDVT_MEM_RANDOM_TEST_SIZE];   // random value
    ssdvt_uint32 random_test_size = (SSDVT_MEM_RANDOM_TEST_SIZE > size_base_32)? size_base_32: SSDVT_MEM_RANDOM_TEST_SIZE;

    ssdvt_uint32 sidx;

    for(times = 0; times < SSDVT_MEM_RANDOM_TEST_TIMES; ++times){
        dbg_print("... 32 byte random test %u/%u:\n", times+1, SSDVT_MEM_RANDOM_TEST_TIMES);

        /* Generatr index */
        for(i=0; i< random_test_size; i++){
            ridx[i] = (rand() + 1) % size_base_32;  
        }
        
        /* Generate value */
        for(i=0; i< random_test_size; i++){
            rvalue[i] = (ssdvt_uint32)(rand()+1);
        }


        /* Random Test */
        /**
          *  Step 1: Send index
          *  Step 2: Send value
          *  Step 3: Check the index and the value
          **/
        /* Send index*/
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 91);
        if(client){
            for(i=0; i<random_test_size; ++i){
                base_32[i] = ridx[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*write_sync)(client, sync);

        /* Receive index */
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 92);
        if(check_all_client || !client){
            for(i=0; i<random_test_size; ++i){
                ridx[i] = base_32[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*read_sync)(client, sync);

        /* Send value */
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 93);
        if(client){
            for(i=0; i<random_test_size; ++i){
                base_32[i] = rvalue[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*write_sync)(client, sync);

        /* Receive value */
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 94);
        if(check_all_client || !client){
            for(i=0; i<random_test_size; ++i){
                rvalue[i] = base_32[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*read_sync)(client, sync);

        /* Random write with index and value*/
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 95);
        if(client){
            for(i=0; i<random_test_size; ++i){
                base_32[ridx[i]] = rvalue[i];
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*write_sync)(client, sync);

        /* Check with index and value*/
        SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 96);
        if(check_all_client || !client){
            /* Generate golden pattern */
            for(i=0, ssdvt_mem_check_test_size = 0; i<random_test_size; ++i){
                sidx = i;
                for(j=0; j<ssdvt_mem_check_test_size; j++){
                    if(ssdvt_mem_check_index[j] == ridx[i]){
                        sidx = j;
                        break;
                    }
                }
                if(j == ssdvt_mem_check_test_size){
                    sidx = ssdvt_mem_check_test_size;
                    ssdvt_mem_check_test_size++;

                    ssdvt_mem_check_index[sidx] = ridx[i];
                }
                ssdvt_mem_check_value[sidx] = rvalue[i]; 
            }

            /* check */
            for(i=0; i<ssdvt_mem_check_test_size; ++i){
                SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(base_32[ssdvt_mem_check_index[i]], ssdvt_mem_check_value[i]);
            }
        }
        else{
            SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
        }
        (*read_sync)(client, sync);
    }
    dbg_print("... memory random test (4 bytes) success\n");

    return 0;
}


ssdvt_uint32 SSDVT_MEM_init_test_XXIF(const ssdvt_uint32             client,
                                      const ssdvt_uint32             check_all_client,
                                      const SSDVT_MEM_MemInfo_ptr    xxif,
                                      const SSDVT_MEM_BarrierSyncFun read_sync,
                                      const SSDVT_MEM_BarrierSyncFun write_sync)
{
    /*volatile ssdvt_uint32 i;*/
    const ssdvt_uint32_p  base_32 = (ssdvt_uint32_p)xxif->base_addr;
    const ssdvt_uint32    size_base_32 = xxif->size/ sizeof(ssdvt_uint32);
    const ssdvt_uint32_p  sync = xxif->sync;

    /** 0x00000000 */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 97);
    /* Write */
    if(client){
        write_word_value(0x0, base_32, size_base_32);
        dbg_print("... test init for 0x0 write\r\n");
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*write_sync)(client, sync);

    /* Check */
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 98);
    if(check_all_client || !client){
        dbg_print("... test init for 0x0 read \r\n");
        check_word_value(0x0, base_32, size_base_32);
    }
    else{
        SSDVT_DELAY_LOOP(SSDVT_MEM_DELAY_LOOP_COUNT);
    }
    (*read_sync)(client, sync);
    dbg_print("... test init for 0x0 success \r\n");

    return 0;
}

