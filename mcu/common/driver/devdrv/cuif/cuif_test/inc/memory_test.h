#ifndef __MEMORY_TEST_H__
#define __MEMORY_TEST_H__

#include "ssdvt_typedef.h"

/*******************************************************************************
*  Macros 
*******************************************************************************/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#define SSDVT_MEM_ASSERT_EQ_PRINT_ERROR(value, expect_value) \
    do{                                                 \
        if((value) != (expect_value)){                  \
            ERROR_LOOP;                                 \
        }                                               \
    }while(0);

/*******************************************************************************
*  Definitions 
*******************************************************************************/
/* reduce test buffer size in simulation to save simulation time */
#if defined(__SIMULATION__)
#define SSDVT_MEM_TEST_BUFFER_SIZE         0x80
#else                                      
#define SSDVT_MEM_TEST_BUFFER_SIZE         0x1000 
#endif

/*******************************************************************************
*  Typedefes 
*******************************************************************************/
typedef enum SSDVT_MEM_TestType_t{
    SSDVT_MEM_NO_TEST_TYPE   =    0x0,
    SSDVT_MEM_MD32_TEST_TYPE =    0x1,
    SSDVT_MEM_CMIF_TEST_TYPE =    0x2,
    SSDVT_MEM_CUIF_TEST_TYPE =    0x3
}SSDVT_MEM_TestType;

typedef struct {
    ssdvt_uint32_p  base_addr; // the begin memory address of xxif
    ssdvt_uint32    size;      // the size of xxif by byte 
    ssdvt_uint32_p  sync;      // xxif status register
}SSDVT_MEM_MemInfo;

typedef SSDVT_MEM_MemInfo* SSDVT_MEM_MemInfo_ptr;

typedef void (*SSDVT_MEM_BarrierSyncFun)(const ssdvt_uint32   client,
                                         const ssdvt_uint32_p sync);

typedef ssdvt_uint32 (*SSDVT_MEM_TestCaseFun)(const ssdvt_uint32 client,
                                              const ssdvt_uint32 check_all_client,
                                              const SSDVT_MEM_MemInfo_ptr mem_info,
                                              const SSDVT_MEM_BarrierSyncFun read_sync,
                                              const SSDVT_MEM_BarrierSyncFun write_sync);


/*******************************************************************************
* Functions 
*******************************************************************************/
ssdvt_uint32 SSDVT_MEM_Test();


/**
 *  basic test (SRAM base).
 *
 *  the function would test 0x00000000 and 0xFFFFFFFF. 
 *
 *  Each test case is in the form of the action of write to memory and check
 *  memory(read). After each read action and write action, it would call read
 *  sync function and write sync function.
 *
 *  @param[in]  client            if `client` is 1, it would write the test case
 *  @param[in]  check_all_client  1: the client 0 and client 1 would check the test case.
 *                                0: only clien 0 would check the test case  
 *  @param[in]  xxif              XXIF base memory address, size and size 
 *  @param[in]  read_sync         sync function for each read action 
 *  @param[in]  write_sync        sync function for each write action
 *  @retval     0                 test successly
 *  @retval     otherwise         no return
 */
ssdvt_uint32 SSDVT_MEM_basic_test_XXIF(const ssdvt_uint32             client,
                                       const ssdvt_uint32             check_all_client,
                                       const SSDVT_MEM_MemInfo_ptr    xxif,
                                       const SSDVT_MEM_BarrierSyncFun read_sync,
                                       const SSDVT_MEM_BarrierSyncFun write_sync);

/**
 *  Full size test (SRAM base).
 *
 *  the function would write the whole size and check the whole size. 
 *
 *  Each test case is in the form of the action of write to memory and check
 *  memory(read). After each read action and write action, it would call read
 *  sync function and write sync function.
 *
 *  @param[in]  client            if `client` is 1, it would write the test case
 *  @param[in]  check_all_client  1: the client 0 and client 1 would check the test case.
 *                                0: only clien 0 would check the test case  
 *  @param[in]  xxif              XXIF base memory address, size and size 
 *  @param[in]  read_sync         sync function for each read action 
 *  @param[in]  write_sync        sync function for each write action
 *
 *  @retval     0                 test successly
 *  @retval     otherwise         no return
 */
ssdvt_uint32 SSDVT_MEM_full_size_test_XXIF(const ssdvt_uint32             client,
                                           const ssdvt_uint32             check_all_client,
                                           const SSDVT_MEM_MemInfo_ptr    xxif,
                                           const SSDVT_MEM_BarrierSyncFun read_sync,
                                           const SSDVT_MEM_BarrierSyncFun write_sync);


/**
 *  @note It would test write memory bidirection, client 0/1 would write XXIF concurrently.
 *        Then client 0 and client 1 check the memory together. 
 *
 *  Each test case is in the form of the action of write to memory and check
 *  memory(read). After each read action and write action, it would call read
 *  sync function and write sync function.
 *
 *  @param[in]  client            if `client` is 1, it would write the test case
 *  @param[in]  xxif              XXIF base memory address, size and size 
 *  @param[in]  check_all_client  Unused parameter 
 *  @param[in]  read_sync         sync function for each read action 
 *  @param[in]  write_sync        sync function for each write action
 *
 *  @retval     0                 test successly
 *  @retval     otherwise         no return
 */
ssdvt_uint32 SSDVT_MEM_half_size_test_XXIF(const ssdvt_uint32             client,
                                           const ssdvt_uint32             check_all_client,
                                           const SSDVT_MEM_MemInfo_ptr    xxif,
                                           const SSDVT_MEM_BarrierSyncFun read_sync,
                                           const SSDVT_MEM_BarrierSyncFun write_sync);


/**
 *  @note It would test write memory bidirection, client 0/1 would write XXIF concurrently.
 *        Then client 0 and client 1 check the memory together. 
 *
 *  Each test case is in the form of the action of write to memory and check
 *  memory(read). After each read action and write action, it would call read
 *  sync function and write sync function.
 *
 *  @param[in]  client            if `client` is 1, it would write the test case
 *  @param[in]  xxif              XXIF base memory address, size and size 
 *  @param[in]  check_all_client  Unused parameter 
 *  @param[in]  read_sync         sync function for each read action 
 *  @param[in]  write_sync        sync function for each write action
 *
 *  @retval     0                 test successly
 *  @retval     otherwise         no return
 */
ssdvt_uint32 SSDVT_MEM_interleave_test_base_8_XXIF(const ssdvt_uint32             client,
                                                   const ssdvt_uint32             check_all_client,
                                                   const SSDVT_MEM_MemInfo_ptr    xxif,
                                                   const SSDVT_MEM_BarrierSyncFun read_sync,
                                                   const SSDVT_MEM_BarrierSyncFun write_sync);

/**
 *  @note It would test write memory bidirection, client 0/1 would write XXIF concurrently.
 *        Then client 0 and client 1 check the memory together. 
 *
 *  Each test case is in the form of the action of write to memory and check
 *  memory(read). After each read action and write action, it would call read
 *  sync function and write sync function.
 *
 *  @param[in]  client            if `client` is 1, it would write the test case
 *  @param[in]  xxif              XXIF base memory address, size and size 
 *  @param[in]  check_all_client  Unused parameter 
 *  @param[in]  read_sync         sync function for each read action 
 *  @param[in]  write_sync        sync function for each write action
 *
 *  @retval     0                 test successly
 *  @retval     otherwise         no return
 */
ssdvt_uint32 SSDVT_MEM_interleave_test_base_16_XXIF(const ssdvt_uint32             client,
                                                    const ssdvt_uint32             check_all_client,
                                                    const SSDVT_MEM_MemInfo_ptr    xxif,
                                                    const SSDVT_MEM_BarrierSyncFun read_sync,
                                                    const SSDVT_MEM_BarrierSyncFun write_sync);

/**
 *  @note It would test write memory bidirection, client 0/1 would write XXIF concurrently.
 *        Then client 0 and client 1 check the memory together. 
 *
 *  Each test case is in the form of the action of write to memory and check
 *  memory(read). After each read action and write action, it would call read
 *  sync function and write sync function.
 *
 *  @param[in]  client            if `client` is 1, it would write the test case
 *  @param[in]  xxif              XXIF base memory address, size and size 
 *  @param[in]  check_all_client  Unused parameter 
 *  @param[in]  read_sync         sync function for each read action 
 *  @param[in]  write_sync        sync function for each write action
 *
 *  @retval     0                 test successly
 *  @retval     otherwise         no return
 */
ssdvt_uint32 SSDVT_MEM_interleave_test_base_32_XXIF(const ssdvt_uint32             client,
                                                    const ssdvt_uint32             check_all_client,
                                                    const SSDVT_MEM_MemInfo_ptr    xxif,
                                                    const SSDVT_MEM_BarrierSyncFun read_sync,
                                                    const SSDVT_MEM_BarrierSyncFun write_sync);

/* random test */
/**
 *  random test.
 *
 *  the function would write data randomly and check the writing action. 
 *
 *  Each test case is in the form of the action of write to memory and check
 *  memory(read). After each read action and write action, it would call read
 *  sync function and write sync function.
 *
 *  @param[in]  client            if `client` is 1, it would write the test case
 *  @param[in]  check_all_client  1: the client 0 and client 1 would check the test case.
 *                                0: only clien 0 would check the test case  
 *  @param[in]  xxif              XXIF base memory address, size and size 
 *  @param[in]  read_sync         sync function for each read action 
 *  @param[in]  write_sync        sync function for each write action
 *
 *  @retval     0                 test successly
 *  @retval     otherwise         no return
 */
ssdvt_uint32 SSDVT_MEM_random_test_base_8_XXIF(const ssdvt_uint32             client,
                                               const ssdvt_uint32             check_all_client,
                                               const SSDVT_MEM_MemInfo_ptr    xxif,
                                               const SSDVT_MEM_BarrierSyncFun read_sync,
                                               const SSDVT_MEM_BarrierSyncFun write_sync);

/**
 *  random test.
 *
 *  the function would write data randomly and check the writing action. 
 *
 *  Each test case is in the form of the action of write to memory and check
 *  memory(read). After each read action and write action, it would call read
 *  sync function and write sync function.
 *
 *  @param[in]  client            if `client` is 1, it would write the test case
 *  @param[in]  check_all_client  1: the client 0 and client 1 would check the test case.
 *                                0: only clien 0 would check the test case  
 *  @param[in]  xxif              XXIF base memory address, size and size 
 *  @param[in]  read_sync         sync function for each read action 
 *  @param[in]  write_sync        sync function for each write action
 *
 *  @retval     0                 test successly
 *  @retval     otherwise         no return
 */
ssdvt_uint32 SSDVT_MEM_random_test_base_16_XXIF(const ssdvt_uint32             client,
                                               const ssdvt_uint32             check_all_client,
                                               const SSDVT_MEM_MemInfo_ptr    xxif,
                                               const SSDVT_MEM_BarrierSyncFun read_sync,
                                               const SSDVT_MEM_BarrierSyncFun write_sync);

/**
 *  random test.
 *
 *  the function would write data randomly and check the writing action. 
 *
 *  Each test case is in the form of the action of write to memory and check
 *  memory(read). After each read action and write action, it would call read
 *  sync function and write sync function.
 *
 *  @param[in]  client            if `client` is 1, it would write the test case
 *  @param[in]  check_all_client  1: the client 0 and client 1 would check the test case.
 *                                0: only clien 0 would check the test case  
 *  @param[in]  xxif              XXIF base memory address, size and size 
 *  @param[in]  read_sync         sync function for each read action 
 *  @param[in]  write_sync        sync function for each write action
 *
 *  @retval     0                 test successly
 *  @retval     otherwise         no return
 */
ssdvt_uint32 SSDVT_MEM_random_test_base_32_XXIF(const ssdvt_uint32             client,
                                                const ssdvt_uint32             check_all_client,
                                                const SSDVT_MEM_MemInfo_ptr    xxif,
                                                const SSDVT_MEM_BarrierSyncFun read_sync,
                                                const SSDVT_MEM_BarrierSyncFun write_sync);


/**
 *  Init test (fill with 0x0).
 *
 *  the function would write data randomly and check the writing action. 
 *
 *  Each test case is in the form of the action of write to memory and check
 *  memory(read). After each read action and write action, it would call read
 *  sync function and write sync function.
 *
 *  @param[in]  client            if `client` is 1, it would write the test case
 *  @param[in]  check_all_client  1: the client 0 and client 1 would check the test case.
 *                                0: only clien 0 would check the test case  
 *  @param[in]  xxif              XXIF base memory address, size and size 
 *  @param[in]  read_sync         sync function for each read action 
 *  @param[in]  write_sync        sync function for each write action
 *
 *  @retval     0                 test successly
 *  @retval     otherwise         no return
 */
ssdvt_uint32 SSDVT_MEM_init_test_XXIF(const ssdvt_uint32             client,
                                      const ssdvt_uint32             check_all_client,
                                      const SSDVT_MEM_MemInfo_ptr    xxif,
                                      const SSDVT_MEM_BarrierSyncFun read_sync,
                                      const SSDVT_MEM_BarrierSyncFun write_sync);

#endif /* __MEMORY_TEST_H__ */
