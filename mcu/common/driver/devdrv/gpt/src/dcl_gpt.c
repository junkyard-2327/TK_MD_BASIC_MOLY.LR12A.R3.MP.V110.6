/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/


/*****************************************************************************
 *
 * Filename:
 * ---------
 *    dcl_gpt.c
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   This Module defines DCL (Driver Common Layer) of the GPT driver.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "drv_features_gpt.h"
#include "drv_comm.h"
#include "drv_gpt.h"
#include "intrCtrl.h"
#include "us_timer.h"


#include "dcl_gpt.h"
#include "dcl_gpt_hw.h"
#include "dcl.h"
#include "devdrv_ls.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "drvpdn.h"
#include "init_comm.h"
#include "kal_hrt_api.h"

#if defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
#include "tg_hisr.h"
#endif /* __LP_SCHEDULE_HMU_RESCHEDULE__ */


//#define DCL_GPT_INTERFACE
//#ifdef  DCL_GPT_INTERFACE

#if !defined(DRV_GPT_OFF)

/*****************************************************************************
 *                        Symbol/Type Definition                             *
 *****************************************************************************/
//DCL_GPT_CB  this software gpt provide register callback function.
#define DCL_GPT_CB_MAGIC_NUM                (0x02000000)

#define DCL_GPT_C2KOS_MAGIC_NUM              (0x04000000)
#define DCL_GPT_C2KAR_MAGIC_NUM              (0x08000000)

#define DCL_GPT_CBUS_MAGIC_NUM              (0x10000000)
#define DCL_GPT_DEBUG_MAGIC_NUM             (0x20000000)
#define DCL_GPT_DSP_MAGIC_NUM              (0x40000000)
#define DCL_GPT_LOGGING_MAGIC_NUM              (0x80000000)

#define DCL_GPT_CB_TICK2US                  (10000U)
#define DCL_GPT_CBUS_TICK2US                (1U)
#define DCL_GPT_LOGGING_TICK2US                (1000U)

#define DCL_GPT_C2K_TICK2US                (1000U)

#if defined(MT6290) || defined(TK6291)
  #define MDGPTM_PDN_SET() PDN_SET(PDN_MDGPTM);
  #define MDGPTM_PDN_CLR() PDN_CLR(PDN_MDGPTM);
#else  /* MT6290 */
  #define MDGPTM_PDN_SET() PDN_SET(PDN_GPT);
  #define MDGPTM_PDN_CLR() PDN_CLR(PDN_GPT);
#endif /* MT6290 */

/*****************************************************************************
 *                         Macro Function Definition                           *
 *****************************************************************************/

#define DCL_GPT_CB_IS_HANDLE_MAGIC(handl_)    ((handl_)& DCL_GPT_CB_MAGIC_NUM)
#define DCL_GPT_CB_GET_DEV(handle_)           ((handle_) & (~DCL_GPT_CB_MAGIC_NUM))
#define DCL_GPT_CBUS_IS_HANDLE_MAGIC(handl_)  ((handl_)& DCL_GPT_CBUS_MAGIC_NUM)
#define DCL_GPT_DEBUG_IS_HANDLE_MAGIC(handl_) ((handl_)& DCL_GPT_DEBUG_MAGIC_NUM)
#define DCL_GPT_DEBUG_GET_DEV(handle_)        ((handle_) & (~DCL_GPT_DEBUG_MAGIC_NUM))
#define DCL_GPT_LOGGING_IS_HANDLE_MAGIC(handl_)  ((handl_)& DCL_GPT_LOGGING_MAGIC_NUM)
#define DCL_GPT_DSP_IS_HANDLE_MAGIC(handl_)  ((handl_)& DCL_GPT_DSP_MAGIC_NUM)
#define DCL_GPT_C2KOS_IS_HANDLE_MAGIC(handl_)  ((handl_)& DCL_GPT_C2KOS_MAGIC_NUM)
#define DCL_GPT_C2KAR_IS_HANDLE_MAGIC(handl_)  ((handl_)& DCL_GPT_C2KAR_MAGIC_NUM)


/*****************************************************************************
 *                         Structure/Type Definition                         *
 *****************************************************************************/
typedef struct gptimer_instance{
	kal_uint32 ticks;
	void (*gptimer_func)(void *parameter);
	void *param;
	struct gptimer_instance *next;
}gpt_inst;

/*****************************************************************************
 *                         Global/External Variable                          *
 *****************************************************************************/
kal_uint32 gpt_clock_status = 0;

/* For mini-second Callback Function */
static kal_uint32   gptCB_status;               /* 1,activated ,0:de-activated */
static kal_uint32   gptCB_ticks;                /* CB gpt current ticks number */
static kal_uint32   gptCB_users;                /* Indicate the current registered GPT users */
static kal_uint8    gptCB_used[MAX_GPT_ITEMS];  /* 0: Not registered by user, 1: Registerd by used */
static gptimer_item gptCB_items[MAX_GPT_ITEMS]; /* gpt callback function instance */


/* For micro-second Callback Function */
static kal_bool     gptCBUS_used    = KAL_FALSE;
static kal_bool     gptCBUS_running = KAL_FALSE;
#if !defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
static gptimer_item gptCBUS_instance;
static kal_uint32 gptCBUS_usr_trig = 0;
#endif /* __LP_SCHEDULE_HMU_RESCHEDULE__ */
static kal_uint32 gptCBUS_lisr_trig = 0;

#if defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
static DCL_UINT32 gpt_cbus_on = 0;
#endif

/* For micro-second Callback Function */
static kal_bool     gptC2KOS_used    = KAL_FALSE;
static kal_bool     gptC2KOS_running = KAL_FALSE;
static gptimer_item gptC2KOS_instance;

/* For mini-second Callback Function */
static kal_bool     gptC2KAR_used    = KAL_FALSE;
static kal_bool     gptC2KAR_running = KAL_FALSE;
static gptimer_item gptC2KAR_instance;

/* For micro-second Callback Function */
static kal_bool     gptLogging_used    = KAL_FALSE;
static kal_bool     gptLogging_running = KAL_FALSE;
static gptimer_item gptLogging_instance;

/* For micro-second Callback Function */
static kal_bool     gptDSP_used    = KAL_FALSE;
static kal_bool     gptDSP_running = KAL_FALSE;
static gptimer_multiple gptDSP_instance[DSP_USER_NUM];

/* For micro-second Debug Callback Function */
static kal_uint32   gpt_DEBUG_users;                /* Indicate the current registered GPT users */
static gpt_inst     gpt_DEBUG_head;                 /* BSS section, default field value == 0 */
static kal_uint8    gpt_DEBUG_used[MAX_GPT_ITEMS];  /* 0: Not registered by user, 1: Registerd by used */
static gpt_inst     gpt_DEBUG_items[MAX_GPT_ITEMS]; /* gpt callback function instance */

static kal_spinlockid gpt_10ms_spinlock;
static kal_spinlockid gpt_us_spinlock;
static kal_spinlockid gpt_c2kos_spinlock;
static kal_spinlockid gpt_logging_spinlock;
static kal_spinlockid gpt_debug_spinlock;
#if defined(__FPGA__)
#define gpt_get_current_time()   (DRV_Reg32((kal_uint32) USCNTI_VAL))
#else
#define gpt_get_current_time()   ust_get_current_time()
#endif

#define UT_GPT_GET_32BIT_COUNTER_DURATION(start, end) \
    (((end) >= (start))? ((end) - (start)): ((0xFFFFFFFF - (start) + (end) + 1)))

/*****************************************************************************
 *                       function declaration                                *
 *****************************************************************************/
void GPTCB_10MS_HISR(void);
#if !defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
void GPTCB_US_HISR(void);
#endif
void GPTCB_C2KOS_HISR(void);
void GPTCB_LOGGING_HISR(void);
void GPTCB_DEBUG_HISR(void);

static kal_bool GPTCB_StartItem(DCL_HANDLE module,kal_uint16 tick,void (*gptimer_func)(void *),void *parameter);
static void GPTCB_StopItem(DCL_HANDLE module);

static void GPT_DEBUG_Insert(kal_uint32 indx, kal_uint32 tick,void (*gptimer_func)(void *),void *parameter);
static void GPT_DEBUG_Stop(kal_uint32 indx);

static void gpt_clk_operation(kal_bool op, kal_uint32 num);
void gpt_clk_operation_wo_itc(kal_bool op, kal_uint32 num);


void GPT_ERROR_CB(void *p)
{
    kal_uint32 CANNOT_FIND_GPT_CB_HANDLER = 0;
    ASSERT(CANNOT_FIND_GPT_CB_HANDLER);
}

/*-----------------------------------------------------------------------*
*                                                                            
*                        GPT 10ms LISR function,                                  
*                pass to gpt_hw layer as a function pointer     
*                                                                        
*------------------------------------------------------------------------*/
void GPTCB_Lisr(kal_uint32 vector)
{
    /*ASSERT( (MDGPT_INTR_ID(DRV_GPT_CALLBACK_TIMER) == vector) || \
            (MDGPT_INTR_ID(DRV_GPT_CBUS_TIMER) == vector)          );*/
#if defined(MT6290) && defined(__ARM7EJ_S__)
    IRQClearInt(vector);
#endif /* end of "defined(MT6290) && defined(__ARM7EJ_S__)" */
    kal_activate_hisr_index(GPT1_HISR);
}

/*-----------------------------------------------------------------------*
*                                                                            
*                        GPT 1us LISR function,                                  
*                pass to gpt_hw layer as a function pointer     
*                                                                        
*------------------------------------------------------------------------*/
DEVDRV_LS_INTSRAM_ROCODE void GPTCB_US_Lisr(kal_uint32 vector)
{
    /*ASSERT( (MDGPT_INTR_ID(DRV_GPT_CALLBACK_TIMER) == vector) || \
            (MDGPT_INTR_ID(DRV_GPT_CBUS_TIMER) == vector)          );*/
#if defined(MT6290) && defined(__ARM7EJ_S__)
    IRQClearInt(vector);
#endif /* end of "defined(MT6290) && defined(__ARM7EJ_S__)" */

    gptCBUS_lisr_trig++;
#if defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
    tg_group2_trigger(TG_TRIGGER_GPT);
#else  /* __LP_SCHEDULE_HMU_RESCHEDULE__ */
    kal_activate_hisr_index(GPT2_HISR);
#endif /* __LP_SCHEDULE_HMU_RESCHEDULE__ */
}

/*-----------------------------------------------------------------------*
*                                                                            
*                        C2K GPT 1us LISR function,                                  
*                pass to gpt_hw layer as a function pointer     
*                                                                        
*------------------------------------------------------------------------*/
DEVDRV_LS_INTSRAM_ROCODE void GPTCB_C2KOS_Lisr(kal_uint32 vector)
{
    kal_hrt_activate_hisr_index(GPT6_HISR);

    gptC2KOS_instance.gptimer_func(gptC2KOS_instance.parameter);    

}


/*-----------------------------------------------------------------------*
*                                                                            
*                        C2K GPT 1ms LISR function,                                  
*                pass to gpt_hw layer as a function pointer     
*                                                                        
*------------------------------------------------------------------------*/
DEVDRV_LS_INTSRAM_ROCODE void GPTCB_C2KAR_Lisr(kal_uint32 vector)
{
    gptC2KAR_instance.gptimer_func(gptC2KAR_instance.parameter);
}


/*-----------------------------------------------------------------------*
*                                                                            
*                        GPT DSP 1us LISR function,                                  
*                pass to gpt_hw layer as a function pointer     
*                                                                        
*------------------------------------------------------------------------*/
DEVDRV_LS_INTSRAM_ROCODE void GPTCB_DSP_Lisr(kal_uint32 vector)
{
    kal_uint32 items = 0;

/*Todo, add HW ITC to sync*/
    kal_hrt_take_itc_lock(KAL_ITC_GPT_DRIVER, KAL_INFINITE_WAIT);
    
    ASSERT(KAL_TRUE == gptDSP_running);

/*Todo, add HW ITC to sync clock*/
    gpt_clk_operation_wo_itc(KAL_TRUE, DRV_GPT_DSP_TIMER);

    kal_hrt_give_itc_lock(KAL_ITC_GPT_DRIVER);
    
    for(items = 0; items < DSP_USER_NUM; items++)
    {
        if(KAL_TRUE == gptDSP_instance[items].execute)
	 {
	     gptDSP_instance[items].gptimer_func(gptDSP_instance[items].parameter);

	     gptDSP_instance[items].execute = KAL_FALSE;
	 }
    }

	kal_hrt_take_itc_lock(KAL_ITC_GPT_DRIVER, KAL_INFINITE_WAIT);
    gptDSP_running = KAL_FALSE;
    kal_hrt_give_itc_lock(KAL_ITC_GPT_DRIVER);
/*Todo, add HW ITC to sync*/
}

/*-----------------------------------------------------------------------*
*                                                                            
*                        GPT 1ms LISR function,                                  
*                pass to gpt_hw layer as a function pointer     
*                                                                        
*------------------------------------------------------------------------*/
DEVDRV_LS_INTSRAM_ROCODE void GPTCB_LOGGING_Lisr(kal_uint32 vector)
{
    /*ASSERT( (MDGPT_INTR_ID(DRV_GPT_CALLBACK_TIMER) == vector) || \
            (MDGPT_INTR_ID(DRV_GPT_CBUS_TIMER) == vector)          );*/
#if defined(MT6290) && defined(__ARM7EJ_S__)
    IRQClearInt(vector);
#endif /* end of "defined(MT6290) && defined(__ARM7EJ_S__)" */
    kal_activate_hisr_index(GPT5_HISR);
}

/*-----------------------------------------------------------------------*
*                                                                            
*                        GPT 1us LISR function,                                  
*                pass to gpt_hw layer as a function pointer     
*                                                                        
*------------------------------------------------------------------------*/
void GPT_DEBUG_Lisr(kal_uint32 vector)
{
    /*ASSERT( (MDGPT_INTR_ID(DRV_GPT_CALLBACK_TIMER) == vector) || \
            (MDGPT_INTR_ID(DRV_GPT_CBUS_TIMER) == vector)          );*/
#if defined(MT6290) && defined(__ARM7EJ_S__)
    IRQClearInt(vector);
#endif /* end of "defined(MT6290) && defined(__ARM7EJ_S__)" */
	kal_activate_hisr_index(GPT_DEBUG_HISR);
}


/*-----------------------------------------------------------------------

* FUNCTION
*  DclSGPT_Initialize
*
* DESCRIPTION
*  This function is to initialize SW GPT module. 
*
* PARAMETERS
*    DCL_STATUS_OK
*
* RETURNS
*  none
*
*------------------------------------------------------------------------*/
DCL_STATUS DclSGPT_Initialize(void)
{
//#ifndef GPT_LP_TEST
    kal_uint8 index;

    /*Create spinlock for every timer*/
    gpt_10ms_spinlock = kal_create_spinlock("GPT 10ms Timer");
    gpt_us_spinlock = kal_create_spinlock("GPT 1ms HMU Timer");
    gpt_c2kos_spinlock = kal_create_spinlock("GPT C2K OS Timer");
    gpt_logging_spinlock = kal_create_spinlock("GPT 1ms Logging Timer");
    gpt_debug_spinlock = kal_create_spinlock("GPT debug Timer");

    PDN_CLR(PDN_MDGPTM_26M);
    MDGPTM_PDN_CLR();

    /* GPT hardware reset */
    drv_gpt_reset();
    IRQ_Register_LISR(MDGPT_INTR_ID(DRV_GPT_CALLBACK_TIMER), GPTCB_Lisr, "GPTCBMS");
    IRQ_Register_LISR(MDGPT_INTR_ID(DRV_GPT_CBUS_TIMER), GPTCB_US_Lisr, "GPTCBUS");
    IRQ_Register_LISR(MDGPT_INTR_ID(DRV_GPT_LOGGING_TIMER), GPTCB_LOGGING_Lisr, "GPTCBLOGGING");
    IRQ_Register_LISR(MDGPT_INTR_ID(DRV_GPT_DEBUG_TIMER), GPT_DEBUG_Lisr, "GPTDEBUG");
    IRQ_Register_LISR(MDGPT_INTR_ID(DRV_GPT_C2KOS_TIMER), GPTCB_C2KOS_Lisr, "C2KOS");
    IRQ_Register_LISR(MDGPT_INTR_ID(DRV_GPT_C2KAR_TIMER), GPTCB_C2KAR_Lisr, "C2KAR");
    IRQ_Register_LISR(MDGPT_INTR_ID(DRV_GPT_DSP_TIMER), GPTCB_DSP_Lisr, "DSPGPT");

    /* set gpt CB timer */
    drv_gpt_set_timer(DRV_GPT_CALLBACK_TIMER, DCL_GPT_CB_TICK2US, MDGPT_CTRL_MODE_REPEAT);

#if defined(__FPGA__)
     if(0x20160617 == drv_gpt_get_version())//Check GPT version is 0x20160617
     {
          drv_gpt_set_timer(DRV_GPT_CALLBACK_TIMER, DCL_GPT_CB_TICK2US/10, MDGPT_CTRL_MODE_REPEAT);
     }
#endif

    /* set gpt CBUS timer */
    drv_gpt_set_timer(DRV_GPT_CBUS_TIMER, DCL_GPT_CBUS_TICK2US, MDGPT_CTRL_MODE_REPEAT);

    /* set gpt C2KOS timer */
    drv_gpt_set_timer(DRV_GPT_C2KOS_TIMER, DCL_GPT_C2K_TICK2US, MDGPT_CTRL_MODE_ONESHOT);

    /* set gpt C2KAR timer */
    drv_gpt_set_timer(DRV_GPT_C2KAR_TIMER, DCL_GPT_C2K_TICK2US, MDGPT_CTRL_MODE_REPEAT);

    /* set gpt CBMS timer */
    drv_gpt_set_timer(DRV_GPT_LOGGING_TIMER, DCL_GPT_LOGGING_TICK2US, MDGPT_CTRL_MODE_REPEAT);

    /* set gpt Debug timer, tick unit = us */
    drv_gpt_set_timer(DRV_GPT_DEBUG_TIMER, DCL_GPT_CBUS_TICK2US, MDGPT_CTRL_MODE_ONESHOT);

    /* set OS timer */
    drv_gpt_set_timer(DRV_GPT_SYSTEM_TIMER, KAL_MICROSECS_PER_TICK, MDGPT_CTRL_MODE_REPEAT);

     /* set gpt DSP timer */
    drv_gpt_set_timer(DRV_GPT_DSP_TIMER, DCL_GPT_CBUS_TICK2US, MDGPT_CTRL_MODE_ONESHOT);


    /* gptCB variables are initialized in BSS reset procedure */

    for (index = 0; index < MAX_GPT_ITEMS; index++)
    {
        gptCB_items[index].gptimer_func = GPT_ERROR_CB;
        gpt_DEBUG_items[index].gptimer_func = GPT_ERROR_CB;
    }

    IRQUnmask(MDGPT_INTR_ID(DRV_GPT_CALLBACK_TIMER));
    IRQUnmask(MDGPT_INTR_ID(DRV_GPT_CBUS_TIMER));
    IRQUnmask(MDGPT_INTR_ID(DRV_GPT_LOGGING_TIMER));
    IRQUnmask(MDGPT_INTR_ID(DRV_GPT_DEBUG_TIMER));
    IRQUnmask(MDGPT_INTR_ID(DRV_GPT_C2KOS_TIMER));
    IRQUnmask(MDGPT_INTR_ID(DRV_GPT_C2KAR_TIMER));
    IRQUnmask(MDGPT_INTR_ID(DRV_GPT_SYSTEM_TIMER));
    IRQUnmask(MDGPT_INTR_ID(DRV_GPT_DSP_TIMER));

    PDN_SET(PDN_MDGPTM_26M);
    MDGPTM_PDN_SET();
//#endif
    return STATUS_OK;
}

/*-----------------------------------------------------------------------
* FUNCTION
*  DclSGPT_Open
*
* DESCRIPTION
*  This function is to open the SW GPT module and get a handle. Note that 
* multiple opens are allowed.
*
* PARAMETERS
*    eDev - only valid for DCL_GPT1
*    flags - no sepcial flags is needed. Please use FLAGS_NONE
*
* RETURNS
*    DCL_HANDLE_INVALID - Open failed.
*  other value - a valid handle
*
*------------------------------------------------------------------------*/
DCL_HANDLE DclSGPT_Open(DCL_DEV eDev, DCL_FLAGS flags)
{
    kal_int32 i;
    if (DCL_GPT_CB==eDev)
    {
	 kal_take_spinlock(gpt_10ms_spinlock, KAL_INFINITE_WAIT);
        for (i=0; i < MAX_GPT_ITEMS; i++)
        {
            if (gptCB_used[i] == 0)
            {
                gptCB_used[i] = 1;
                gptCB_users++;
				
		  kal_give_spinlock(gpt_10ms_spinlock);
				
                return DCL_GPT_CB_MAGIC_NUM|i;
            }
        }
	 kal_give_spinlock(gpt_10ms_spinlock);
        // The case that we do NOT return in the loop:
        // Indicate there is NO GPT handle!!!!!
        ASSERT(i < MAX_GPT_ITEMS);
        // return invalid handle
        return DCL_HANDLE_OCCUPIED;
    }
    else if (DCL_GPT_DSP==eDev)
    {
        kal_hrt_take_itc_lock(KAL_ITC_GPT_DRIVER, KAL_INFINITE_WAIT);

	 ASSERT(KAL_FALSE == gptDSP_used);
        gptDSP_used = KAL_TRUE;

        kal_hrt_give_itc_lock(KAL_ITC_GPT_DRIVER);
		
        return DCL_GPT_DSP_MAGIC_NUM;

    }
    else if (DCL_GPT_C2K_OS==eDev)
    {
        kal_take_spinlock(gpt_c2kos_spinlock, KAL_INFINITE_WAIT);
        if( KAL_FALSE == gptC2KOS_used )
        {
            gptC2KOS_used = KAL_TRUE;
			
	     kal_give_spinlock(gpt_c2kos_spinlock);
			
            return DCL_GPT_C2KOS_MAGIC_NUM;
        }
        kal_give_spinlock(gpt_c2kos_spinlock);
        
        return DCL_HANDLE_OCCUPIED;
    }
    else if (DCL_GPT_C2K_AR==eDev)
    {
        if( KAL_FALSE == gptC2KAR_used )
        {
            gptC2KAR_used = KAL_TRUE;
			
            return DCL_GPT_C2KAR_MAGIC_NUM;
        }        
        return DCL_HANDLE_OCCUPIED;
    }
    else if (DCL_GPT_CB_MS==eDev)
    {
        kal_take_spinlock(gpt_us_spinlock, KAL_INFINITE_WAIT);
        if( KAL_FALSE == gptCBUS_used )
        {
            gptCBUS_used = KAL_TRUE;
			
	     kal_give_spinlock(gpt_us_spinlock);
			
            return DCL_GPT_CBUS_MAGIC_NUM;
        }
        kal_give_spinlock(gpt_us_spinlock);
        
        return DCL_HANDLE_OCCUPIED;
    }

    else if (DCL_GPT_CB_LOGGING==eDev)
    {
        kal_take_spinlock(gpt_logging_spinlock, KAL_INFINITE_WAIT);
        if( KAL_FALSE == gptLogging_used )
        {
            gptLogging_used = KAL_TRUE;
			
	     kal_give_spinlock(gpt_logging_spinlock);
			
            return DCL_GPT_LOGGING_MAGIC_NUM;
        }
        kal_give_spinlock(gpt_logging_spinlock);
        
        return DCL_HANDLE_OCCUPIED;
    }

    else if (DCL_GPT_DEBUG==eDev)
    {
        kal_take_spinlock(gpt_debug_spinlock, KAL_INFINITE_WAIT);
        for (i=0; i < MAX_GPT_ITEMS; i++)
        {
            if (gpt_DEBUG_used[i] == 0)
            {
                gpt_DEBUG_used[i] = 1;
                gpt_DEBUG_users++;

		  kal_give_spinlock(gpt_debug_spinlock);
				
                return DCL_GPT_DEBUG_MAGIC_NUM|i;
            }
        }
        kal_give_spinlock(gpt_debug_spinlock);
	 ASSERT( gpt_DEBUG_users < MAX_GPT_ITEMS );
        // return invalid handle
        return DCL_HANDLE_OCCUPIED;
    }
    else
    {
        kal_uint32 Invaild_GPT_DEV_Type = 0;

        ASSERT(Invaild_GPT_DEV_Type);
        return DCL_HANDLE_INVALID;
    }
}

/*-----------------------------------------------------------------------

* FUNCTION
*  DclSGPT_ReadData
*
* DESCRIPTION
*  This function is not supported for the SW GPT module now.
*
* PARAMETERS
*    N/A
*
* RETURNS
*    STATUS_UNSUPPORTED
*
*------------------------------------------------------------------------*/

DCL_STATUS DclSGPT_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options)
{
   return STATUS_UNSUPPORTED;
}

/*-----------------------------------------------------------------------

* FUNCTION
*  DclSGPT_WriteData
*
* DESCRIPTION
*  This function is not supported for the SW GPT module now.
*
* PARAMETERS
*    N/A
*
* RETURNS
*    STATUS_UNSUPPORTED
*
*------------------------------------------------------------------------*/

DCL_STATUS DclSGPT_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options)
{
   return STATUS_UNSUPPORTED;
}

/*-----------------------------------------------------------------------

* FUNCTION
*  DclSGPT_Configure
*
* DESCRIPTION
*  This function is not supported for the SW GPT module now.
*
* PARAMETERS
*    N/A
*
* RETURNS
*    STATUS_UNSUPPORTED
*
*------------------------------------------------------------------------*/

DCL_STATUS DclSGPT_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure)
{
   return STATUS_UNSUPPORTED;
}


/*-----------------------------------------------------------------------

* FUNCTION
*  DclSGPT_RegisterCallback
*
* DESCRIPTION
*  This function is not supported for the SW GPT module now.
*
* PARAMETERS
*    N/A
*
* RETURNS
*    STATUS_UNSUPPORTED
*
*------------------------------------------------------------------------*/

DCL_STATUS DclSGPT_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback)
{
   return STATUS_UNSUPPORTED;
}


/*-----------------------------------------------------------------------

* FUNCTION
*  DclSGPT_Control
*
* DESCRIPTION
*  This function is to send command to control the SW GPT module.
*
* PARAMETERS
*    handle - a valid handle return by DclSGPT_Open()
*  cmd   - a control command for GPT module
*          1. SGPT_CMD_START: to start a GPT timer
*          2. SGPT_CMD_STOP: to stop a GPT timer
*  data - for 1. SGPT_CMD_START: pointer to a SGPT_CTRL_START_T structure
*             2. SGPT_CMD_STOP: a NULL pointer
*
* RETURNS
*    STATUS_OK - command is executed successfully.
*    STATUS_FAIL - command is failed.
*  STATUS_INVALID_CMD - It's a invalid command.
*
*------------------------------------------------------------------------*/

DCL_STATUS DclSGPT_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data)
{
    DCL_UINT32 gpt_unknown_command = 0;
    DCL_UINT8  gpt_handle = 0;
    gpt_handle = DCL_GPT_CB_GET_DEV(handle) & 0x1F;
    
    if(DCL_GPT_CB_IS_HANDLE_MAGIC(handle))
    {
        switch(cmd)
        {
            case SGPT_CMD_START:
            {
                kal_bool ret_b;
                SGPT_CTRL_START_T  *prStart;

                prStart = &(data->rSGPTStart);
                
                //test if callback function is null.
                ASSERT( NULL!=prStart->pfCallback );

                kal_take_spinlock(gpt_10ms_spinlock, KAL_INFINITE_WAIT);
		  
                gpt_clk_operation(KAL_FALSE, DRV_GPT_CALLBACK_TIMER);
		  
		  
                ret_b = GPTCB_StartItem(gpt_handle, prStart->u2Tick, prStart->pfCallback, prStart->vPara);

		  kal_give_spinlock(gpt_10ms_spinlock);
		  
                if (ret_b == KAL_TRUE)
                {
                    return STATUS_OK;
                }
                else
                {
                    return STATUS_FAIL;
                }
            }
            //break; we can return in any case.
            case SGPT_CMD_STOP:

		  kal_take_spinlock(gpt_10ms_spinlock, KAL_INFINITE_WAIT);
                GPTCB_StopItem(gpt_handle);
		  kal_give_spinlock(gpt_10ms_spinlock);
	
                return STATUS_OK;
            default:
                ASSERT(gpt_unknown_command);
                return STATUS_INVALID_CMD;
        }
    }
    else if(DCL_GPT_DSP_IS_HANDLE_MAGIC(handle))
    {
    	 kal_uint32 items =0;
        ASSERT( KAL_TRUE == gptDSP_used );
        switch(cmd)
        {
            case SGPT_CMD_START:
            {
                SGPT_CTRL_START_T  *prStart;
                prStart = &(data->rSGPTStart);

                //test if callback function is null.
                ASSERT( NULL!=prStart->pfCallback );

                kal_hrt_take_itc_lock(KAL_ITC_GPT_DRIVER, KAL_INFINITE_WAIT);

		  //ASSERT( KAL_FALSE == gptDSP_running );//dsp user may multiple

		  for(items = 0; items < DSP_USER_NUM; items++)
		  {
		  	if(KAL_FALSE == gptDSP_instance[items].execute)
		  	{
		  		gptDSP_instance[items].execute = KAL_TRUE;
				gptDSP_instance[items].tick = prStart->u4Tick;
				
				#if defined(__FPGA__)
		              if(0x20160617 == drv_gpt_get_version())//Check GPT version is 0x20160617
		              {
		         	     gptDSP_instance[items].tick = gptDSP_instance[items].tick/10;
		              }
				#endif
				
				gptDSP_instance[items].gptimer_func = prStart->pfCallback;
				gptDSP_instance[items].parameter = prStart->vPara;
				break;
		  	}
		  }
#if defined(ATEST_DRV_GPT)
                if(items == DSP_USER_NUM)
		  {
		      kal_hrt_give_itc_lock(KAL_ITC_GPT_DRIVER);
		      return STATUS_FAIL;
		  }
#else
                ASSERT( items < DSP_USER_NUM );
#endif

		  if(KAL_FALSE == gptDSP_running)
		  {
	                gpt_clk_operation_wo_itc(KAL_FALSE, DRV_GPT_DSP_TIMER);
	                drv_gpt_set_timer(DRV_GPT_DSP_TIMER, gptDSP_instance[items].tick, MDGPT_CTRL_MODE_ONESHOT);
	                drv_gpt_start_timer(DRV_GPT_DSP_TIMER);

			  gptDSP_running = KAL_TRUE;
		  }
		  kal_hrt_give_itc_lock(KAL_ITC_GPT_DRIVER);

                return STATUS_OK;
            }
            //break; we can return in any case.
            case SGPT_CMD_STOP:

                kal_hrt_take_itc_lock(KAL_ITC_GPT_DRIVER, KAL_INFINITE_WAIT);
		  
                drv_gpt_stop_timer(DRV_GPT_DSP_TIMER);
		  for(items = 0; items < DSP_USER_NUM; items++)
		  {
		  	gptDSP_instance[items].execute = KAL_FALSE;
		  }
                gptDSP_running = KAL_FALSE;
                gpt_clk_operation_wo_itc(KAL_TRUE, DRV_GPT_DSP_TIMER);
		  
                kal_hrt_give_itc_lock(KAL_ITC_GPT_DRIVER);

                return STATUS_OK;
            default:
                ASSERT(gpt_unknown_command);
                return STATUS_INVALID_CMD;
        }
    }
    else if(DCL_GPT_CBUS_IS_HANDLE_MAGIC(handle))
    {
        ASSERT( KAL_TRUE == gptCBUS_used );
        switch(cmd)
        {
            case SGPT_CMD_START:
            {
                SGPT_CTRL_START_T  *prStart;
                prStart = &(data->rSGPTStart);

#if !defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
                //test if callback function is null.
                ASSERT( NULL!=prStart->pfCallback );

                kal_take_spinlock(gpt_us_spinlock, KAL_INFINITE_WAIT);
		  
                if( KAL_TRUE == gptCBUS_running )
                {
                    kal_give_spinlock(gpt_us_spinlock);
                    return STATUS_FAIL;
                }
                gptCBUS_instance.tick = prStart->u2Tick*1000; // 1 ms duration
                gptCBUS_instance.gptimer_func = prStart->pfCallback;
                gptCBUS_instance.parameter = prStart->vPara;
                gptCBUS_running = KAL_TRUE;

				gptCBUS_usr_trig++;

#if defined(__FPGA__)
	         if(0x20160617 == drv_gpt_get_version())//Check GPT version is 0x20160617
	         {
	         	gptCBUS_instance.tick = gptCBUS_instance.tick/10;
	         }
#endif

                gpt_clk_operation(KAL_FALSE, DRV_GPT_CBUS_TIMER);
                drv_gpt_set_timer(DRV_GPT_CBUS_TIMER, gptCBUS_instance.tick, MDGPT_CTRL_MODE_ONESHOT);
                drv_gpt_start_timer(DRV_GPT_CBUS_TIMER);

		  kal_give_spinlock(gpt_us_spinlock);
#else  /* !__LP_SCHEDULE_HMU_RESCHEDULE__ */
				//only tg_hisr control this gpt
                if(0 == gpt_cbus_on)
                {
//                    kal_take_spinlock(gpt_us_spinlock, KAL_INFINITE_WAIT);
                    gpt_clk_operation(KAL_FALSE, DRV_GPT_CBUS_TIMER);
                    gpt_cbus_on = 1;
//                   kal_give_spinlock(gpt_us_spinlock);
                }
                /* drv_gpt_set/start_timer are thread-save functions */
                drv_gpt_set_timer(DRV_GPT_CBUS_TIMER, prStart->u2Tick*1000, MDGPT_CTRL_MODE_ONESHOT);
                drv_gpt_start_timer(DRV_GPT_CBUS_TIMER);
#endif /* !__LP_SCHEDULE_HMU_RESCHEDULE__ */

                return STATUS_OK;
            }
            //break; we can return in any case.
            case SGPT_CMD_STOP:

#if !defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
                kal_take_spinlock(gpt_us_spinlock, KAL_INFINITE_WAIT);
		  
                drv_gpt_stop_timer(DRV_GPT_CBUS_TIMER);
                gptCBUS_running = KAL_FALSE;
                gpt_clk_operation(KAL_TRUE, DRV_GPT_CBUS_TIMER);
		  
                kal_give_spinlock(gpt_us_spinlock);
#else  /* !__LP_SCHEDULE_HMU_RESCHEDULE__ */
				//only tg_hisr control this gpt
                /* drv_gpt_stop_timer is thread-save function */
                drv_gpt_stop_timer(DRV_GPT_CBUS_TIMER);
                if(1 == gpt_cbus_on)
                {
//                    kal_take_spinlock(gpt_us_spinlock, KAL_INFINITE_WAIT);
                    gpt_clk_operation(KAL_TRUE, DRV_GPT_CBUS_TIMER);
                    gpt_cbus_on = 0;
//                    kal_give_spinlock(gpt_us_spinlock);
                }
#endif /* !__LP_SCHEDULE_HMU_RESCHEDULE__ */

                return STATUS_OK;
            default:
                ASSERT(gpt_unknown_command);
                return STATUS_INVALID_CMD;
        }
    }

    else if(DCL_GPT_C2KOS_IS_HANDLE_MAGIC(handle))
    {
        ASSERT( KAL_TRUE == gptC2KOS_used );
        switch(cmd)
        {
            case SGPT_CMD_START:
            {
                SGPT_CTRL_START_T  *prStart;
                prStart = &(data->rSGPTStart);

                //test if callback function is null.
                ASSERT( NULL!=prStart->pfCallback );

                kal_take_spinlock(gpt_c2kos_spinlock, KAL_INFINITE_WAIT);
		  
                if( KAL_TRUE == gptC2KOS_running )
                {
                    kal_give_spinlock(gpt_c2kos_spinlock);
                    return STATUS_FAIL;
                }
                gptC2KOS_instance.tick = prStart->u4Tick; // 1 us duration
                gptC2KOS_instance.gptimer_func = prStart->pfCallback;
                gptC2KOS_instance.parameter = prStart->vPara;
                gptC2KOS_running = KAL_TRUE;

#if defined(__FPGA__)
	         if(0x20160617 == drv_gpt_get_version())//Check GPT version is 0x20160617
	         {
	         	gptC2KOS_instance.tick = gptC2KOS_instance.tick/10;
	         }
#endif
                gpt_clk_operation(KAL_FALSE, DRV_GPT_C2KOS_TIMER);
                drv_gpt_set_timer(DRV_GPT_C2KOS_TIMER, gptC2KOS_instance.tick, MDGPT_CTRL_MODE_ONESHOT);
                drv_gpt_start_timer(DRV_GPT_C2KOS_TIMER);

		  kal_give_spinlock(gpt_c2kos_spinlock);

                return STATUS_OK;
            }
            //break; we can return in any case.
            case SGPT_CMD_STOP:

                kal_take_spinlock(gpt_c2kos_spinlock, KAL_INFINITE_WAIT);
		  
                drv_gpt_stop_timer(DRV_GPT_C2KOS_TIMER);
                gptC2KOS_running = KAL_FALSE;
                gpt_clk_operation(KAL_TRUE, DRV_GPT_C2KOS_TIMER);
		  
                kal_give_spinlock(gpt_c2kos_spinlock);

                return STATUS_OK;

	     case SGPT_CMD_RUNNING_TICK:
	     {
		  SGPT_CTRL_START_T  *prStart;
                prStart = &(data->rSGPTStart);
		  
		  prStart->u4Tick = drv_gpt_get_data(DRV_GPT_C2KOS_TIMER);
		   
		  return STATUS_OK;
	     }
            default:
                ASSERT(gpt_unknown_command);
                return STATUS_INVALID_CMD;
        }
    }

    else if(DCL_GPT_C2KAR_IS_HANDLE_MAGIC(handle))
    {
        ASSERT( KAL_TRUE == gptC2KAR_used );
        switch(cmd)
        {
            case SGPT_CMD_START:
            {
                SGPT_CTRL_START_T  *prStart;
                prStart = &(data->rSGPTStart);

                //test if callback function is null.
                ASSERT( NULL!=prStart->pfCallback );

                //savedMask = SaveAndSetIRQMask();
		  
                if( KAL_TRUE == gptC2KAR_running )
                {
                    //RestoreIRQMask(savedMask);
                    return STATUS_FAIL;
                }
                gptC2KAR_instance.tick = prStart->u4Tick; // 1 us duration
                gptC2KAR_instance.gptimer_func = prStart->pfCallback;
                gptC2KAR_instance.parameter = prStart->vPara;
                gptC2KAR_running = KAL_TRUE;

#if defined(__FPGA__)
	         if(0x20160617 == drv_gpt_get_version())//Check GPT version is 0x20160617
	         {
	         	gptC2KAR_instance.tick = gptC2KAR_instance.tick/10;
	         }
#endif

                gpt_clk_operation(KAL_FALSE, DRV_GPT_C2KAR_TIMER);
                drv_gpt_set_timer(DRV_GPT_C2KAR_TIMER, gptC2KAR_instance.tick, MDGPT_CTRL_MODE_REPEAT);
                drv_gpt_start_timer(DRV_GPT_C2KAR_TIMER);

                return STATUS_OK;
            }
            //break; we can return in any case.
            case SGPT_CMD_STOP:
		  
                drv_gpt_stop_timer(DRV_GPT_C2KAR_TIMER);
                gptC2KAR_running = KAL_FALSE;
		  gpt_clk_operation(KAL_TRUE, DRV_GPT_C2KAR_TIMER);
		  
                return STATUS_OK;

	     case SGPT_CMD_RUNNING_TICK:
	     {
		  SGPT_CTRL_START_T  *prStart;
                prStart = &(data->rSGPTStart);
		  
		  prStart->u4Tick = drv_gpt_get_data(DRV_GPT_C2KAR_TIMER);
		   
		  return STATUS_OK;
	     }
		  
	     case SGPT_CMD_MODIFY_CNT:
	     {
		  SGPT_CTRL_START_T  *prStart;
                prStart = &(data->rSGPTStart);

                //test if callback function is null.
                ASSERT( NULL!=prStart->pfCallback );
		  
                if( KAL_FALSE == gptC2KAR_running ) //Only Running case to modify GPT count
                {
                    ASSERT(0);
                }
                gptC2KAR_instance.tick = prStart->u4Tick; // 1 us duration
                //gptC2KAR_instance.gptimer_func = prStart->pfCallback;
                //gptC2KAR_instance.parameter = prStart->vPara;

#if defined(__FPGA__)
	         if(0x20160617 == drv_gpt_get_version())//Check GPT version is 0x20160617
	         {
	         	gptC2KAR_instance.tick = gptC2KAR_instance.tick/10;
	         }
#endif

                gpt_clk_operation(KAL_FALSE, DRV_GPT_C2KAR_TIMER);
                drv_gpt_set_data(DRV_GPT_C2KAR_TIMER, gptC2KAR_instance.tick);
		
		  return STATUS_OK;
	     }
            default:
                ASSERT(gpt_unknown_command);
                return STATUS_INVALID_CMD;
        }
    }

    else if(DCL_GPT_LOGGING_IS_HANDLE_MAGIC(handle))
    {
        ASSERT( KAL_TRUE == gptLogging_used );
        switch(cmd)
        {
            case SGPT_CMD_START:
            {
                SGPT_CTRL_START_T  *prStart;
                prStart = &(data->rSGPTStart);

                //test if callback function is null.
                ASSERT( NULL!=prStart->pfCallback );

                kal_take_spinlock(gpt_logging_spinlock, KAL_INFINITE_WAIT);
		  
                if( KAL_TRUE == gptLogging_running )
                {
                    kal_give_spinlock(gpt_logging_spinlock);
                    return STATUS_FAIL;
                }
                gptLogging_instance.tick = prStart->u2Tick*1000; // 1 ms duration
                gptLogging_instance.gptimer_func = prStart->pfCallback;
                gptLogging_instance.parameter = prStart->vPara;
                gptLogging_running = KAL_TRUE;

#if defined(__FPGA__)
	         if(0x20160617 == drv_gpt_get_version())//Check GPT version is 0x20160617
	         {
	         	gptLogging_instance.tick = gptLogging_instance.tick/10;
	         }
#endif

                gpt_clk_operation(KAL_FALSE, DRV_GPT_LOGGING_TIMER);
                drv_gpt_set_timer(DRV_GPT_LOGGING_TIMER, gptLogging_instance.tick, MDGPT_CTRL_MODE_ONESHOT);
                drv_gpt_start_timer(DRV_GPT_LOGGING_TIMER);

		  kal_give_spinlock(gpt_logging_spinlock);

                return STATUS_OK;
            }
            //break; we can return in any case.
            case SGPT_CMD_STOP:

                kal_take_spinlock(gpt_logging_spinlock, KAL_INFINITE_WAIT);
		  
                drv_gpt_stop_timer(DRV_GPT_LOGGING_TIMER);
                gptLogging_running = KAL_FALSE;
                gpt_clk_operation(KAL_TRUE, DRV_GPT_LOGGING_TIMER);
		  
                kal_give_spinlock(gpt_logging_spinlock);

                return STATUS_OK;
            default:
                ASSERT(gpt_unknown_command);
                return STATUS_INVALID_CMD;
        }
    }
	
    else if(DCL_GPT_DEBUG_IS_HANDLE_MAGIC(handle))
    {
        switch(cmd)
        {
            case SGPT_CMD_START:
            {
                SGPT_CTRL_START_T  *prStart;
                prStart = &(data->rSGPTStart);

		  kal_take_spinlock(gpt_debug_spinlock, KAL_INFINITE_WAIT);
		  
		  GPT_DEBUG_Insert(DCL_GPT_DEBUG_GET_DEV(handle), prStart->u4Tick, prStart->pfCallback, prStart->vPara);

		  kal_give_spinlock(gpt_debug_spinlock);

                return STATUS_OK;
            }
            //break; we can return in any case.
            case SGPT_CMD_STOP:

		  kal_take_spinlock(gpt_debug_spinlock, KAL_INFINITE_WAIT);
		  
		  GPT_DEBUG_Stop(DCL_GPT_DEBUG_GET_DEV(handle));
		  
		  kal_give_spinlock(gpt_debug_spinlock);
		  
                return STATUS_OK;
            default:
                ASSERT(gpt_unknown_command);
                return STATUS_INVALID_CMD;
        }
	}
    else
    {
        kal_uint32 Error_DCL_HANDLE = 0;
        //if assert happen here, that means DCL_HANDLE pass in is wrong!
        ASSERT(Error_DCL_HANDLE);
        return DCL_HANDLE_INVALID;
    }
}

/*-----------------------------------------------------------------------

* FUNCTION
*  DclSGPT_Close
*
* DESCRIPTION
*  This function is to close the SW GPT module.
*
* PARAMETERS
*    handle  - hanlde previous got from DclSGPT_Open()
*
* RETURNS
*    DCL_STATUS_OK - successfully close the SW GPT module.
*    DCL_STATUS_fail - fails to close the SW GPT module.
*
*------------------------------------------------------------------------*/

DCL_STATUS DclSGPT_Close(DCL_HANDLE *handle)
{
    DCL_UINT8 gpt_handle;
    gpt_handle=DCL_GPT_CB_GET_DEV(*handle) & 0x1F;
    
    if(DCL_GPT_CB_IS_HANDLE_MAGIC(*handle))
    {
        // Make sure the GPT handle is activated
        ASSERT(gptCB_used[gpt_handle]);    

        kal_take_spinlock(gpt_10ms_spinlock, KAL_INFINITE_WAIT);
        
        if( gptCB_status & (1<<gpt_handle) )
        {
            GPTCB_StopItem(gpt_handle);
        }
        
        gptCB_used[gpt_handle] = 0;
        gptCB_users--;
        
        gpt_clk_operation(KAL_TRUE, DRV_GPT_CALLBACK_TIMER);

	 kal_give_spinlock(gpt_10ms_spinlock);
        
        *handle = EMPTY_GPT_CB_HANDLER;
        return STATUS_OK;
    }
    if(DCL_GPT_DSP_IS_HANDLE_MAGIC(*handle))
    {
    	 kal_uint32 items = 0;
        kal_hrt_take_itc_lock(KAL_ITC_GPT_DRIVER, KAL_INFINITE_WAIT);

	 drv_gpt_stop_timer(DRV_GPT_DSP_TIMER);
		
        if( KAL_TRUE == gptDSP_running )
        {
		 for(items = 0; items < DSP_USER_NUM; items++)
		 {
		 	gptDSP_instance[items].execute = KAL_FALSE;
		 }
		 gptDSP_running = KAL_FALSE;
        }
        gptDSP_used = KAL_FALSE;
        *handle = EMPTY_GPT_CB_HANDLER;
        gpt_clk_operation_wo_itc(KAL_TRUE, DRV_GPT_DSP_TIMER);

	 kal_hrt_give_itc_lock(KAL_ITC_GPT_DRIVER);
	 
        return STATUS_OK;
    }
    else if(DCL_GPT_CBUS_IS_HANDLE_MAGIC(*handle))
    {
	 kal_take_spinlock(gpt_us_spinlock, KAL_INFINITE_WAIT);
		
        if( KAL_TRUE == gptCBUS_running )
        {
            drv_gpt_stop_timer(DRV_GPT_CBUS_TIMER);
            gptCBUS_running = KAL_FALSE;
        }
        gptCBUS_used = KAL_FALSE;
        *handle = EMPTY_GPT_CB_HANDLER;
        gpt_clk_operation(KAL_TRUE, DRV_GPT_CBUS_TIMER);

	 kal_give_spinlock(gpt_us_spinlock);
	 
        return STATUS_OK;
    }
    else if(DCL_GPT_C2KOS_IS_HANDLE_MAGIC(*handle))
    {
	 kal_take_spinlock(gpt_c2kos_spinlock, KAL_INFINITE_WAIT);
		
        if( KAL_TRUE == gptC2KOS_running )
        {
            drv_gpt_stop_timer(DRV_GPT_C2KOS_TIMER);
            gptC2KOS_running = KAL_FALSE;
        }
        gptC2KOS_used = KAL_FALSE;
        *handle = EMPTY_GPT_CB_HANDLER;
        gpt_clk_operation(KAL_TRUE, DRV_GPT_C2KOS_TIMER);

	 kal_give_spinlock(gpt_c2kos_spinlock);
	 
        return STATUS_OK;
    }
    else if(DCL_GPT_C2KAR_IS_HANDLE_MAGIC(*handle))
    {	
        if( KAL_TRUE == gptC2KAR_running )
        {
            drv_gpt_stop_timer(DRV_GPT_C2KAR_TIMER);
            gptC2KAR_running = KAL_FALSE;
        }
        gptC2KAR_used = KAL_FALSE;
        *handle = EMPTY_GPT_CB_HANDLER;
        gpt_clk_operation(KAL_TRUE, DRV_GPT_C2KAR_TIMER);
	 
        return STATUS_OK;
    }
    else if(DCL_GPT_LOGGING_IS_HANDLE_MAGIC(*handle))
    {
	 kal_take_spinlock(gpt_logging_spinlock, KAL_INFINITE_WAIT);

        if( KAL_TRUE == gptLogging_running )
        {
            drv_gpt_stop_timer(DRV_GPT_LOGGING_TIMER);
            gptLogging_running = KAL_FALSE;
        }
        gptLogging_used = KAL_FALSE;
        *handle = EMPTY_GPT_CB_HANDLER;
        gpt_clk_operation(KAL_TRUE, DRV_GPT_LOGGING_TIMER);

	 kal_give_spinlock(gpt_logging_spinlock);
	 
        return STATUS_OK;
    }
    else if(DCL_GPT_DEBUG_IS_HANDLE_MAGIC(*handle))
    {
	 gpt_inst *iter;
	 
        kal_take_spinlock(gpt_debug_spinlock, KAL_INFINITE_WAIT);
	 
  	 iter = gpt_DEBUG_head.next;
  	 while(NULL!=iter)
  	 {
  		 if(iter == &gpt_DEBUG_items[gpt_handle])
  		 {
  			 GPT_DEBUG_Stop(gpt_handle);
  			 break;
  		 }
  	 }
        gpt_DEBUG_used[gpt_handle] = 0;
        gpt_DEBUG_users--;
        *handle = EMPTY_GPT_CB_HANDLER;
        gpt_clk_operation(KAL_TRUE, DRV_GPT_DEBUG_TIMER);
	 
        kal_give_spinlock(gpt_debug_spinlock);
	 
        return STATUS_OK;
    }
    else
    {
        kal_uint32 Invalid_DCL_GPT_HANDLE = 0;
        ASSERT(Invalid_DCL_GPT_HANDLE);
        return STATUS_INVALID_DCL_HANDLE;
    }
}


void gpt_clk_operation(kal_bool op, kal_uint32 num)
{
    kal_hrt_take_itc_lock(KAL_ITC_GPT_DRIVER, KAL_INFINITE_WAIT);
    if (KAL_TRUE == op) //clock off
    {
        gpt_clock_status &= ~(1<<num);
        if(0 == gpt_clock_status)
        {
            PDN_SET(PDN_MDGPTM_26M);
            MDGPTM_PDN_SET();	
        }
    }
    else //clock on
    {
        if(0 == gpt_clock_status)
        {
            PDN_CLR(PDN_MDGPTM_26M);
            MDGPTM_PDN_CLR();
        }
        gpt_clock_status |= (1<<num);
    }
    kal_hrt_give_itc_lock(KAL_ITC_GPT_DRIVER);
}

void gpt_clk_operation_wo_itc(kal_bool op, kal_uint32 num)
{
    if (KAL_TRUE == op) //clock off
    {
        gpt_clock_status &= ~(1<<num);
        if(0 == gpt_clock_status)
        {
            PDN_SET(PDN_MDGPTM_26M);
            MDGPTM_PDN_SET();	
        }
    }
    else //clock on
    {
        if(0 == gpt_clock_status)
        {
            PDN_CLR(PDN_MDGPTM_26M);
            MDGPTM_PDN_CLR();
        }
        gpt_clock_status |= (1<<num);
    }
}

/*-----------------------------------------------------------------------

* FUNCTION                                                            
*    GPTCB_StartItem
*
* DESCRIPTION                                                           
*       GPT CB start a item.
*
* CALLS  
*
* PARAMETERS
*        handler = instance number
*           tick = the delay(the unit is 10ms)
*  gptimer_func = the callback function when the tick is reached.
*     parameter = the parameter inputed into gptimer_func
*
* RETURNS
*    KAL_TRUE, start item successfully
*  KAL_FALSE, start item fail
*
* GLOBALS AFFECTED
*   external_global
*------------------------------------------------------------------------*/
static kal_bool GPTCB_StartItem(DCL_HANDLE handler,kal_uint16 tick,void (*gptimer_func)(void *),void *parameter)
{

    if (gptCB_status & (1<<handler))
    {
        return KAL_FALSE;
    }
   
    //savedMask = SaveAndSetIRQMask();

    gptCB_items[handler].tick = gptCB_ticks + tick;
    gptCB_items[handler].gptimer_func = gptimer_func;
    gptCB_items[handler].parameter = parameter;
   
    if(0 == gptCB_status)
    {
        drv_gpt_start_timer(DRV_GPT_CALLBACK_TIMER);
    }
    gptCB_status |= (1<<handler);
    
    //RestoreIRQMask(savedMask);

    return KAL_TRUE;
}

/*-----------------------------------------------------------------------

* FUNCTION                                                            
*    GPTCB_StopItem
*
* DESCRIPTION                                                           
*       GPT CB stop a item.
*
* CALLS  
*
* PARAMETERS
*    handler = instance number
*
* RETURNS
*    None
*
* GLOBALS AFFECTED
*   external_global
*------------------------------------------------------------------------*/
static void GPTCB_StopItem(DCL_HANDLE handler)
{
    ASSERT(gptCB_used[handler]);
       
    gptCB_status &= ~(1<<handler);
    
    if(0==gptCB_status)
    {
        gptCB_ticks = 0;
        drv_gpt_stop_timer(DRV_GPT_CALLBACK_TIMER);
        gpt_clk_operation(KAL_TRUE, DRV_GPT_CALLBACK_TIMER);
    }
}

static void GPT_DEBUG_Insert(kal_uint32 indx, kal_uint32 tick, void (*fp)(void *) ,void *parameter)
{
	kal_uint32 elapsed, time; /* elapsed: current - start time; time: eariest time-out setting */
	gpt_inst *iter = gpt_DEBUG_head.next;

    ASSERT( NULL!=fp );
    gpt_DEBUG_items[indx].gptimer_func = fp;
    gpt_DEBUG_items[indx].param = parameter;

    //savedMask = SaveAndSetIRQMask();

	elapsed = drv_gpt_get_data(DRV_GPT_DEBUG_TIMER);
    drv_gpt_stop_timer(DRV_GPT_DEBUG_TIMER);

	if( (NULL == gpt_DEBUG_head.next))
	{
		gpt_DEBUG_head.next = &gpt_DEBUG_items[indx];
		time = tick;
        	gpt_clk_operation(KAL_FALSE, DRV_GPT_DEBUG_TIMER);
	}
	else if((iter->ticks-elapsed) > tick)
	{
		gpt_DEBUG_items[indx].next = iter;
		gpt_DEBUG_head.next = &gpt_DEBUG_items[indx];
		iter->ticks -= elapsed + tick;
		time = tick;
	}
	else
	{
		time = iter->ticks - elapsed;
		tick -= time;
		iter->ticks = time;
		while( NULL != iter->next )
		{
			if(iter->next->ticks > tick)
			{
				gpt_DEBUG_items[indx].next = iter->next;
				gpt_DEBUG_items[indx].next->ticks -= tick;
				iter->next = &gpt_DEBUG_items[indx];
				break;
			}
			iter = iter->next;
			tick -= iter->ticks;
		}
		if(NULL == iter->next)
		{
			gpt_DEBUG_items[indx].next = NULL;
			iter->next = &gpt_DEBUG_items[indx];
		}
	}
	gpt_DEBUG_items[indx].ticks = tick;

    //test if callback function is null.
    drv_gpt_set_timer(DRV_GPT_DEBUG_TIMER, time, MDGPT_CTRL_MODE_ONESHOT);
    drv_gpt_start_timer(DRV_GPT_DEBUG_TIMER);

    //RestoreIRQMask(savedMask);
}

/*-----------------------------------------------------------------------
* FUNCTION                                                            
*    GPT_DEBUG_Stop
*
* DESCRIPTION                                                           
*    Remove Debug Timer Instance from queue
*
* CALLS  
*
* PARAMETERS
*    indx = instance number
*
* RETURNS
*    None
*
*------------------------------------------------------------------------*/
static void GPT_DEBUG_Stop(kal_uint32 indx)
{
	gpt_inst *iter = &gpt_DEBUG_head;

       //savedMask = SaveAndSetIRQMask();

	while( (iter->next!=&gpt_DEBUG_items[indx]) && (NULL!=iter->next) )
	{
		iter = iter->next;
	}
	ASSERT(NULL!=iter->next);

	if(iter == &gpt_DEBUG_head)
	{
	    kal_uint32 elapsed;
	    elapsed = drv_gpt_get_data(DRV_GPT_DEBUG_TIMER);
        drv_gpt_stop_timer(DRV_GPT_DEBUG_TIMER);
		IRQClearInt(MDGPT_INTR_ID(DRV_GPT_DEBUG_TIMER));

	    gpt_DEBUG_head.next = gpt_DEBUG_items[indx].next;
		if(NULL != gpt_DEBUG_head.next)
		{
			gpt_DEBUG_head.next->ticks = gpt_DEBUG_head.next->ticks - elapsed + gpt_DEBUG_items[indx].ticks ;
            drv_gpt_set_timer(DRV_GPT_DEBUG_TIMER, gpt_DEBUG_head.next->ticks, MDGPT_CTRL_MODE_ONESHOT);
            drv_gpt_start_timer(DRV_GPT_DEBUG_TIMER);
		}
		else
		{
               	gpt_clk_operation(KAL_TRUE, DRV_GPT_DEBUG_TIMER);
		}
	}
	else
	{
		if(NULL != gpt_DEBUG_items[indx].next)
		{
			gpt_DEBUG_items[indx].next->ticks += gpt_DEBUG_items[indx].ticks;
		}
		iter->next = iter->next->next;
	}
	gpt_DEBUG_items[indx].next = NULL;
    //RestoreIRQMask(savedMask);
}

/*-----------------------------------------------------------------------
* FUNCTION                                                            
*    GPTCB_10MS_HISR
*
* DESCRIPTION                                                           
*       GPT Callback HISR : 10ms
*
* CALLS
*
* PARAMETERS
*    void
*
* RETURNS
*    None
*
* GLOBALS AFFECTED
*   external_global
*------------------------------------------------------------------------*/
DEVDRV_LS_INTSRAM_ROCODE void GPTCB_10MS_HISR(void)
{
    kal_uint8 index; 
    kal_uint32 checkMask = 0xFFFFFFFF;

    kal_take_spinlock(gpt_10ms_spinlock, KAL_INFINITE_WAIT);

    gptCB_ticks++;

    kal_give_spinlock(gpt_10ms_spinlock);
    
    // Bit matched method to check if a GPT items is activated
    // Search whole GPT items
    for (index = 0; (index < MAX_GPT_ITEMS)&&(gptCB_status&checkMask); index++)
    {
        kal_take_spinlock(gpt_10ms_spinlock, KAL_INFINITE_WAIT);
        if( (gptCB_status & (1 << index)) && (gptCB_ticks >= gptCB_items[index].tick) )
        {
            gptCB_status &= ~(1<<index);
	     kal_give_spinlock(gpt_10ms_spinlock);
            gptCB_items[index].gptimer_func(gptCB_items[index].parameter);

        }
        else
        {
            kal_give_spinlock(gpt_10ms_spinlock);
        }
        checkMask ^= (1 << index);
    }


    kal_take_spinlock(gpt_10ms_spinlock, KAL_INFINITE_WAIT);

    if (gptCB_status == 0)
    {
        // UT Test road test.
        gptCB_ticks = 0;
        drv_gpt_stop_timer(DRV_GPT_CALLBACK_TIMER);
        gpt_clk_operation(KAL_TRUE, DRV_GPT_CALLBACK_TIMER);
    }
    kal_give_spinlock(gpt_10ms_spinlock);
}


/*-----------------------------------------------------------------------
* FUNCTION                                                            
*    GPTCB_Debug_HISR
*
* DESCRIPTION                                                           
*       GPT Callback HISR : 1us
*
* CALLS
*
* PARAMETERS
*    void
*
* RETURNS
*    None
*
* GLOBALS AFFECTED
*   external_global
*------------------------------------------------------------------------*/
void GPTCB_DEBUG_HISR(void)
{
//	if(NULL != gpt_DEBUG_head.next->gptimer_func)
	{
	    gpt_DEBUG_head.next->gptimer_func(gpt_DEBUG_head.next->param);
	}
#if !defined(ATEST_DRV_ENABLE) && !defined(DSPFNC_DSP_SWTRACER)
    ASSERT(0);
#endif /* !ATEST_DRV_ENABLE */
}
/*-----------------------------------------------------------------------
* FUNCTION                                                            
*    GPTCB_US_HISR
*
* DESCRIPTION                                                           
*       GPT Callback HISR : 10ms
*
* CALLS
*
* PARAMETERS
*    void
*
* RETURNS
*    None
*
* GLOBALS AFFECTED
*   external_global
*------------------------------------------------------------------------*/
#if !defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
DEVDRV_LS_INTSRAM_ROCODE void GPTCB_US_HISR(void)
{
    kal_take_spinlock(gpt_us_spinlock, KAL_INFINITE_WAIT);

    if( KAL_TRUE == gptCBUS_running )
    {
        gptCBUS_running = KAL_FALSE;
	 gpt_clk_operation(KAL_TRUE, DRV_GPT_CBUS_TIMER);
	
	 kal_give_spinlock(gpt_us_spinlock);
        gptCBUS_instance.gptimer_func(gptCBUS_instance.parameter);
    }
    else
    {
        kal_give_spinlock(gpt_us_spinlock);
    }

}
#endif


/*-----------------------------------------------------------------------
* FUNCTION                                                            
*    GPTCB_C2KOS_HISR
*
* DESCRIPTION                                                           
*       C2K GPT Callback HISR : 1us
*
* CALLS
*
* PARAMETERS
*    void
*
* RETURNS
*    None
*
* GLOBALS AFFECTED
*   external_global
*------------------------------------------------------------------------*/
DEVDRV_LS_INTSRAM_ROCODE void GPTCB_C2KOS_HISR(void)
{
    kal_take_spinlock(gpt_c2kos_spinlock, KAL_INFINITE_WAIT);

    if( KAL_TRUE == gptC2KOS_running )
    {
        gptC2KOS_running = KAL_FALSE;
	 gpt_clk_operation(KAL_TRUE, DRV_GPT_C2KOS_TIMER);
	 
	 kal_give_spinlock(gpt_c2kos_spinlock);
    }
    else
    {
        kal_give_spinlock(gpt_c2kos_spinlock);
	 ASSERT(0);
    }
}

/*-----------------------------------------------------------------------
* FUNCTION                                                            
*    GPTCB_US_HISR
*
* DESCRIPTION                                                           
*       GPT Callback HISR : 10ms
*
* CALLS
*
* PARAMETERS
*    void
*
* RETURNS
*    None
*
* GLOBALS AFFECTED
*   external_global
*------------------------------------------------------------------------*/
DEVDRV_LS_INTSRAM_ROCODE void GPTCB_LOGGING_HISR(void)
{
    kal_take_spinlock(gpt_logging_spinlock, KAL_INFINITE_WAIT);

    if( KAL_TRUE == gptLogging_running )
    {
        gptLogging_running = KAL_FALSE;
	 gpt_clk_operation(KAL_TRUE, DRV_GPT_LOGGING_TIMER);
	 
	 kal_give_spinlock(gpt_logging_spinlock);
        gptLogging_instance.gptimer_func(gptLogging_instance.parameter);
    }
    else
    {
        kal_give_spinlock(gpt_logging_spinlock);
    }
}

#else /* else of !defined(DRV_GPT_OFF) */

DCL_STATUS DclSGPT_Initialize(void)
{
    return STATUS_UNSUPPORTED;
}

DCL_HANDLE DclSGPT_Open(DCL_DEV dev, DCL_FLAGS flags)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclSGPT_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclSGPT_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclSGPT_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclSGPT_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclSGPT_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclSGPT_Close(DCL_HANDLE *handle)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclFGPT_Initialize(void)
{
    return STATUS_UNSUPPORTED;
}

DCL_HANDLE DclFGPT_Open(DCL_DEV dev, DCL_FLAGS flags)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclFGPT_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclFGPT_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclFGPT_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclFGPT_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclFGPT_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclFGPT_Close(DCL_HANDLE handle)
{
    return STATUS_UNSUPPORTED;
}
#if defined (__ESL_COSIM_LTE__) || defined(__MASE__)
void GPTCB_DEBUG_HISR(void)
{
}

void GPTCB_10MS_HISR(void)
{
}

void GPTCB_US_HISR(void)
{
}

void GPTCB_LOGGING_HISR(void)
{
}

void LITEGPT_ETMR_HISR(void)
{
}

void GPTCB_C2KOS_HISR(void)
{
}

#endif /* __ESL_COSIM_LTE__ */
#endif /* end of else of !defined(DRV_GPT_OFF) */

DCL_HANDLE DclHGPT_Open(DCL_DEV dev, DCL_FLAGS flags){return STATUS_UNSUPPORTED;}
DCL_STATUS DclHGPT_Control(DCL_HANDLE handle, HGPT_CMD cmd, HGPT_CTRL *data){return STATUS_UNSUPPORTED;}
DCL_STATUS DclHGPT_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback){return STATUS_UNSUPPORTED;}
DCL_STATUS DclHGPT_Close(DCL_HANDLE handle){return STATUS_UNSUPPORTED;}

//#endif 

