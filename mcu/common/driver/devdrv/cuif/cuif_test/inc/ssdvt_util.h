#ifndef __SSDVT_UTIL_H__
#define __SSDVT_UTIL_H__

/*******************************************************************************
* Included header files
*******************************************************************************/
#include "ssdvt_typedef.h"

/*******************************************************************************
 * Definition 
 *******************************************************************************/
#define SSDVT_MD32_CHECK  (defined(__CORE_BRP__) || defined(__CORE_RAKE__) || defined(__CORE_DFE__))


#define NO_DBG    /* force to use printf */

#if defined(__MD32S_SSDVT_RTLCOSIM__)
#if defined(__CORE_BRP__)
// set base addr
#define SSDVT_RTLCOSIM_ADDR_BASE   (0xD0358000 + 0x1000 - 0x8)
#elif defined(__CORE_RAKE__)
#define SSDVT_RTLCOSIM_ADDR_BASE   (0xD0358000 + 0xC00 - 0x8)
#elif defined(__CORE_DFE__)
#define SSDVT_RTLCOSIM_ADDR_BASE   (0xD0358000 + 0x800 - 0x8)
#else  /* __CORE_DFE__  __CORE_RAKE__  __CORE_BRP__ */
    #error "not support for the md32 processor"
#endif /* __CORE_DFE__  __CORE_RAKE__  __CORE_BRP__ */

/**
  * SSDVT_RTLCOSIM_NOTIFICATION_SIZE
  *    - unit: bytes
  * SSDVT_RTLCOSIMA_STATUS: (*SSDVT_RTLCOSIM_NOTIFICATION_ADDR + 0) : 4 bytes
  *    - 0: Not finish
  *    - 1: Success
  *    - 2: Fail
  * SSDVT_RTLCOSIM_ERROR_PC: (*SSDVT_RTLCOSIM_NOTIFICATION_ADDR + 4) :  4 bytes
  *    - If test status fails (== 2), the error pc responds the LR
  */
#define SSDVT_RTLCOSIM_SIZE        8 
#define SSDVT_RTLCOSIM_STATUS                   ((volatile ssdvt_uint32 *)(SSDVT_RTLCOSIM_ADDR_BASE+0x0000)) 
#define SSDVT_RTLCOSIM_ERROR_PC                 ((volatile ssdvt_uint32 *)(SSDVT_RTLCOSIM_ADDR_BASE+0x0004)) 
#endif /*  __MD32S_SSDVT_RTLCOSIM__  */

/*******************************************************************************
 * Macro 
 *******************************************************************************/
#define dbg_print(str, args...)  

#if !defined(__MD32S_SSDVT_RTLCOSIM__)
#define ERROR_LOOP                                                            \
    do {                                                                      \
        ssdvt_test_fail_notification();                                       \
    } while(0);


#else    /* !__MD32S_SSDVT_RTLCOSIM__ */
#define ERROR_LOOP                                                            \
    do {                                                                      \
        ssdvt_test_fail_notification();                                       \
    } while(0);
#endif   /* !__MD32S_SSDVT_RTLCOSIM__ */

#define ERROR_LOOP_MSG(msg)                                                   \
    do {                                                                      \
        dbg_print(msg);                                                       \
        ERROR_LOOP                                                            \
    } while(0)

#define SSDVT_ERROR_HANDLER(msg)                                              \
    do {                                                                      \
        while(1);                                                             \
    } while(0)

#define SSDVT_DELAY_LOOP(count)                                               \
    do {                                                                      \
        volatile unsigned int delay;                                          \
        for (delay = (unsigned int)count; delay != 0; delay--)                \
           /* NOP */                                                          \
           ;                                                                  \
    }while (0)

#define SSDVT_ASSERT_EQ(a, b)                                                             \
    do{                                                                                   \
        if((a) != (b)){                                                                   \
            dbg_print("Error: %s: %d - %d != %d\n", __FILE__, __LINE__, (a), (b));        \
            ERROR_LOOP                                                                    \
        }                                                                                 \
    }while(0);                                                                            
                                                                                          
#define SSDVT_ASSERT_EQ_MSG(a, b, msg)                                                    \
    do{                                                                                   \
        if((a) != (b)){                                                                   \
            dbg_print("Error: %s: %d - %d != %d"msg"\n", __FILE__, __LINE__, (a), (b));   \
            ERROR_LOOP                                                                    \
        }                                                                                 \
    }while(0);

#define SSDVT_SET_CURRENT_STATUS(status)                       \
    do{                                                        \
        ssdvt_set_current_status((status));                    \
    }while(0)

void ssdvt_set_current_status(ssdvt_uint32 status);
extern void ssdvt_test_fail_notification();
extern void ssdvt_test_pass_notification();

#endif /* __SSDVT_UTIL_H__ */
