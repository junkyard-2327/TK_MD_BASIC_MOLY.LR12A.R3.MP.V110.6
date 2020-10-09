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
 *   us_timer.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   Header file for providing timer of microsecond precision.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#if !defined(__US_TIMER_H__)
#define __US_TIMER_H__

#define __HW_US_TIMER_SUPPORT__ /* avoid build error and always support */

/* If define __FMA_SUPPORT__, FRC would get from FMA, or it would get from source. */
#define __FMA_SUPPORT__

#include "reg_base.h"
#include "cpu.h"
#include "drv_comm.h"
#include "boot.h"

//For L1 simulation
#include "md2g_drv.h"

/*******************************************************************************
 * Define registers.
 *******************************************************************************/
#if 1/* for all UMOLYA projects */
    /* MD FRC */
    #define BASE_MD_FMA_SOURCE          BASE_ADDR_MDTOPSM  /* MD TOPSM */
    #define BASE_MD_FMA                 GCR_CUSTOM_ADDR    /* GIC base address 0x1F010000 in boot.h */

    /* MD OSTD */
    #define MD_OST_CON                  (BASE_ADDR_MDOSTIMER + 0x10U)  /* OS Timer Control Register */
    #define MD_OST_FRM                  (BASE_ADDR_MDOSTIMER + 0x1CU)  /* OS Timer timetick unit Register  */
    #define MD_OST_FRAME_CNT            (BASE_ADDR_MDOSTIMER + 0x38U)  /* Current OS Timer Number [31:0] */
    #define MD_OSTD_CMD_MAGIC_VALUE     0x057D0000

  #if 0//defined(__LTE_L1SIM__)  //FIXME. Timo, changes to get xl1sim working 
/* under construction !*/
/* under construction !*/
/* under construction !*/
  #else /* real target */
    #define MD_USCNT_CON                (BASE_MD_FMA_SOURCE + 0x0800)   /* MD TOPSM control register */
    #define MD_FRC_SOURCE_VAL           (BASE_MD_FMA_SOURCE + 0x0830)   /* MD TOPSM FRC value register, unit: 1 us */
    #define MD_FRC_SOURCE_VAL_HIGH      (BASE_MD_FMA_SOURCE + 0x0834)   /* MD TOPSM FRC high value register, unit: 1 us */
    #define MD_TS_SOURCE_VAL            (BASE_MD_FMA_SOURCE + 0x0840)   /* MD TOPSM FRC global timestamp register, unit: 64 us */
  #endif

  #if defined(__FMA_SUPPORT__)/* get from FMA */

    #define fma_sync_status()     (DRV_Reg32((kal_uint32)(BASE_MD_FMA + 0x34)))/* if the value is 1, means the FMA function is ready after leaving WFI */  
    #define MD_USCNTI_VAL         (BASE_MD_FMA + 0x40)
    #define MD_USCNTI_VAL_HIGH    (BASE_MD_FMA + 0x44)	
    #define MD_OS_TIME_VAL        (BASE_MD_FMA + 0x48)
    #define MD_TIMESTAMP_VAL      (BASE_MD_FMA + 0x50)  
	
  #else /* get from source when no FMA */

    #define fma_sync_status()     (1)/* Since no FMA, always return 1 */  
    #define MD_USCNTI_VAL         (MD_FRC_SOURCE_VAL)
    #define MD_USCNTI_VAL_HIGH    (MD_FRC_SOURCE_VAL_HIGH)	
    #define MD_OS_TIME_VAL        (MD_OST_FRAME_CNT)	
    #define MD_TIMESTAMP_VAL      (MD_TS_SOURCE_VAL)

  #endif

    /* backward compatible */
    #define USCNTI_VAL            (MD_USCNTI_VAL)  
 
#else /* other project */
/* under construction !*/
#endif


#if OS_TICK_PERIOD_US==4615  /* (12/13)*5000us */
    #define USCNT_TO_FRAME(sus) (((sus)*58161)>>28) /* Error rate: 0.0000266% */
#elif OS_TICK_PERIOD_US==5000
    #define USCNT_TO_FRAME(sus) (((sus)*53687)>>28) /* Error rate: 0.0001700% */
#elif OS_TICK_PERIOD_US==1000
     #define USCNT_TO_FRAME(sus) (((sus)*4294967)>>32) /* Error rate: 0.0000069% */
#else  /* OS_TICK_PERIOD_US== */
    #error "Un-Support Frame Period"
#endif /* OS_TICK_PERIOD_US== */

/* 1 Qbit= 12/13 us */
#define USCNT_TO_QBIT(us)  (((us)*1109)>>10)  /*Error rate: 1 qbit error per 3000 qbits, allowd max log duration: 4s */
#define USCNT_WRAP         0xFFFFFFFF

#ifdef ESIM_BUILD_CONFIG
    #define USCNT_START_CODE   0x62900001
    #define USCNT_STOP_CODE    0x62900000
#endif /* ESIM_BUILD_CONFIG */

/*******************************************************************************
 * Define macros.
 *******************************************************************************/
#if defined(__HW_US_TIMER_SUPPORT__) 
    extern void USC_Start( void );
    extern void USC_Stop( void );

    extern kal_uint32 USC_Get_TimeStamp( void ) DECLARE_MIPS16;
    #if defined(__LTE_L1SIM__)
        #define ust_get_current_time()  HW_READ(((volatile kal_uint32*)MD_USCNTI_VAL))
        #define fma_get_glb_ts()        (ust_get_current_time()>>6)
    #elif defined(__UE_SIMULATOR__) || defined(ESIM_BUILD_CONFIG) /* == !__MTK_TARGET__ ? */
        extern kal_uint32 osc_platform_us_counter_get(void);
        extern kal_uint32 osc_platform_64us_counter_get(void);
        #define ust_get_current_time()        osc_platform_us_counter_get()
        #define ust_get_current_time_source() osc_platform_us_counter_get()
        #define fma_get_glb_ts()              osc_platform_64us_counter_get()
    #elif defined(__ESL_MASE__)
        #define ust_get_current_time()                      DRV_Reg32(BASE_USCOUNTER)
        #define ust_get_current_time_high()                 (0)
        #define ust_get_current_time_source()               ust_get_current_time()
        #define ust_get_current_time_source_high()          (0)
        #define fma_get_glb_ts()                            DRV_Reg32(BASE_GLOBAL_TS)
        #define ust_get_os_timer()                          (ust_get_current_time()/1000)
    #elif defined(__ESL_COSIM_LTE__)
        #define ust_get_current_time()        DRV_Reg32(0xFFFF3000)
        #define ust_get_current_time_source() ust_get_current_time()
        #define fma_get_glb_ts()              (ust_get_current_time()>>6)
    #elif !defined(__MTK_TARGET__) /* Pure OSCAR */
        extern kal_uint32 osc_platform_us_counter_get(void);
        extern kal_uint32 osc_platform_64us_counter_get(void);
        #define ust_get_current_time()        osc_platform_us_counter_get()
        #define ust_get_current_time_source() osc_platform_us_counter_get()
        #define fma_get_glb_ts()              osc_platform_64us_counter_get()
    #else /* real use in project */
    
        #define ust_get_current_time()                      (DRV_Reg32((kal_uint32) MD_USCNTI_VAL))
        #define ust_get_current_time_high()                 (DRV_Reg32((kal_uint32) MD_USCNTI_VAL_HIGH))
    		
        #define ust_get_current_time_source()               (DRV_Reg32((kal_uint32) MD_FRC_SOURCE_VAL))
        #define ust_get_current_time_source_high()          (DRV_Reg32((kal_uint32) MD_FRC_SOURCE_VAL_HIGH))
    
        #define ust_get_os_timer()                          (DRV_Reg32((kal_uint32) MD_OS_TIME_VAL))
    
        #define fma_get_glb_ts()                            (DRV_Reg32(MD_TIMESTAMP_VAL))
    			
    #endif
    
    
    
    /* Get duration, unit = Qbit */
    #define ust_get_duration(prev, cur)  USCNT_TO_QBIT((((cur) >= (prev))? (((cur) - (prev))): ((USCNT_WRAP - (prev) + (cur) + 1))))
    
    /* Get duration, unit = us */
    #define ust_us_duration(start, end)   (((end) >= (start))? (((end) - (start))): ((USCNT_WRAP - (start) + (end) + 1)))

#else   /* __HW_US_TIMER_SUPPORT__ */
    #error "UMOLYA chips always support the HW US Timer"

#endif  /* __HW_US_TIMER_SUPPORT__ */

/**
 * ust_busy_wait - a busy loop wait for a period
 * @us: qbit to wait
 *
 * This macro contains a busy loop to wait a period of specified microsends.
 * There is a maximal iteration count in the busy loop to prevent from infinite loop. 
 * (EX: timer is not working.)
 * ==> Update the design, if the ust does not work, CPU blocking at this macro.
 *     Because it's hard to find the delay loop issue when FRC is stop.
 */
#define ust_busy_wait(qbit)                                   \
do {                                                          \
    kal_uint32 t1, t2, zerocount = 0xFFFFF;                   \
    if ((qbit) == 0) {break;}                                 \
    t1 = ust_get_current_time();                              \
    do {                                                      \
        t2 = ust_get_current_time();                          \
        if (t1 == t2) { zerocount--; }                        \
        else if (ust_get_duration(t1, t2) >= (qbit)) { break; } \
    } while (zerocount);                                      \
    if(0==zerocount)                                          \
    {                                                         \
        kal_uint32 FRC_IS_NOT_INIT = 0;                       \
        ASSERT(FRC_IS_NOT_INIT);                              \
    }                                                         \
} while (0)

#define ust_us_busyloop(us)                                   \
do {                                                          \
    kal_uint32 t1, t2, zerocount = 0xFFFFF;                   \
    if ((us) == 0) {break;}                                   \
    t1 = ust_get_current_time();                              \
    do {                                                      \
        t2 = ust_get_current_time();                          \
        if (t1 == t2) { zerocount--; }                        \
        else if (ust_us_duration(t1, t2) >= (us)) { break; } \
    } while (zerocount);                                      \
    if(0==zerocount)                                          \
    {                                                         \
        kal_uint32 FRC_IS_NOT_INIT = 0;                       \
        ASSERT(FRC_IS_NOT_INIT);                              \
    }                                                         \
} while (0)


#endif  /* !__US_TIMER_H__ */

