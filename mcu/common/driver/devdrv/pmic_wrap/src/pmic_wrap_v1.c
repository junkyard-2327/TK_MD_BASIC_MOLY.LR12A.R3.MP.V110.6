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
 *  pmic_wrap_v1.c
 *
 * Project:
 * --------
 *  Maui_Software
 *
 * Description:
 * ------------
 *	This is pmic wrapper driver
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#if defined(FPGA_CTP)
#include <common.h>
#endif

#include "dcl.h" 
#include "pmic_wrap.h"
#include "dcl_pmu_sw.h"
#include "kal_public_api.h"
#include "syscomp_config.h"
#include "ex_public.h"
#include "us_timer.h"
#include "SST_intrCtrl.h"
#define PMIC_WRAP_MEMORY_DUMP_SUPPORT

/////////////////////////////////////////////
// Debug Option Start                      //   
// Debug Usage(DO NOT TURN ON For MP Load) //
/////////////////////////////////////////////

//#define PMIC_WRAP_CLOCK_CHECK
//#define PMIC_WRAP_INIT_DONE_POLLING
//#define PMIC_WRAP_BUS_STRESS_TEST

#define PMIC_WRAP_INIT_DONE_POLLING_TIME        10 // us
#define PMIC_WRAP_BUS_STRESS_TEST_TIME          35 // us

/////////////////////////////////////////////
// Debug Option Start                      //
// Debug Usage(DO NOT TURN ON For MP Load) //
/////////////////////////////////////////////

/////////////////////////////////////////////
// Software Workaround Option Start        //
/////////////////////////////////////////////
// Use ust_get_current_time to replace drv_get_current_time
#define DRV_GET_CURRENT_TIME_WORKAROUND
/////////////////////////////////////////////
// Debug Option Start                      //
/////////////////////////////////////////////

#if defined(DRV_PMIC_WRAP_6589_REG)
#define PMIC_WRAP_TIMEOUT               60
#elif defined(DRV_PMIC_WRAP_6572_REG) || defined(DRV_PMIC_WRAP_6582_REG) || defined(DRV_PMIC_WRAP_6571_REG) || defined(DRV_PMIC_WRAP_6595_REG)
#define PMIC_WRAP_TIMEOUT               320 // APB Bus Latency
#elif defined(DRV_PMIC_WRAP_6752_REG) || defined(DRV_PMIC_WRAP_6735_REG) || defined(DRV_PMIC_WRAP_6291_REG) || defined(DRV_PMIC_WRAP_6755_REG)
#define PMIC_WRAP_TIMEOUT               320 // APB Bus Latency
#endif

#define PMIC_WRAP_TIMEOUT               320 // APB Bus Latency

typedef enum{
    PMIC_WRAP_WACS0 = 0,
    PMIC_WRAP_WACS1 = 1,
    PMIC_WRAP_WACS2 = 2,
    PMIC_WRAP_WACS3 = 3,
    PMIC_WRAP_WACS4 = 4
}PMIC_WRAP_CHANNEL;

typedef enum{
	PMIC_WRAP_WAIT_WACS_FSM_IDLE = 0,
	PMIC_WRAP_WAIT_WACS_FSM_WFVLDCLR = 1,
	PMIC_WRAP_WAIT_MAN_WFVLDCLR = 2,
	PMIC_WRAP_WAIT_MAN_IDLE_AND_NOREQ = 3,
	PMIC_WRAP_WAIT_WACS_FSM_IDLE_AND_SYNC_IDLE = 4,
	PMIC_WRAP_WAIT_WRAP_FSM_IDLE_AND_SPI_READ_DATA_COUNTER_ZERO = 5,
	PMIC_WRAP_WAIT_CIPHER_READY = 6,
	PMIC_WRAP_WAIT_SYNC_IDLE = 7,
	PMIC_WRAP_WAIT_STAUPID_IDLE = 8,
	PMIC_WRAP_WAIT_WRAP_REQ_COUNTER_ZERO = 9,
    PMIC_WRAP_WAIT_STATR_READY_INIT = 10,
    PMIC_WRAP_WAIT_STATR_READY = 11,
	PMIC_WRAP_WAIT_ACTION_INIT = 0xFF
}PMIC_WARP_WAIT_ACTION;

typedef struct
{
   kal_uint32 current_channel;
   kal_uint32 current_action;
   kal_uint32 current_spi_command;
   kal_uint32 current_read_address;
   kal_uint32 current_read_data0;
   kal_uint32 current_read_data1;
   kal_uint32 current_read_data2;
   kal_uint32 current_sig_value;
   kal_uint32 AP_PERI_data1;
   kal_uint32 AP_PERI_data2;
   kal_uint32 MD_PERI_data1;
}PMIC_WRAP_LOG;

typedef struct
{
   kal_uint32 wacs_fsm_wfvldclr;
   kal_uint32 wacs_fsm_wfdle;
   kal_uint32 wacs_fsm_req;
}PMIC_WACS_FSM;

#if defined(DCL_PMIC_MULTIPLE_LOG)
PMIC_WACS_FSM pmic_wacs_fsm[PMIC_LOG_TYPE_MAX];

PMIC_WARP_WAIT_ACTION pmic_wrap_wait_event = PMIC_WRAP_WAIT_ACTION_INIT;
PMIC_WRAP_LOG pmic_wrap_log[PMIC_LOG_TYPE_MAX];
kal_uint32 PMIC_PATTERN_VAL[PMIC_LOG_TYPE_MAX] = {0x00000000};
kal_uint32 PMIC_POLLING_COUNTER[PMIC_LOG_TYPE_MAX] = {0};
#else
PMIC_WACS_FSM pmic_wacs_fsm;

PMIC_WARP_WAIT_ACTION pmic_wrap_wait_event = PMIC_WRAP_WAIT_ACTION_INIT;
PMIC_WRAP_LOG pmic_wrap_log;
kal_uint32 PMIC_ASSERT_LOG = 0;
kal_uint32 PMIC_PATTERN_VAL = 0x00000000;
kal_uint32 PMIC_POLLING_COUNTER = 0;
kal_uint32 PMIC_STRESS_COUNTER = 0;
kal_uint32 GPT3_ENABLE_ALREADY = 0;
#endif
#ifdef PMIC_WRAP_MEMORY_DUMP_SUPPORT
kal_uint32 PMIC_WRAP_MEMORY_DUMP[200];
kal_uint32 PMIC_WRAP_WACS0_STATUS = 0xFFFFFFFF;
kal_uint32 PMIC_WRAP_WACS1_STATUS = 0xFFFFFFFF;
#endif

#if defined(__MTK_TARGET__)
EX_BBREG_DUMP pmic_wrap_dump;
const kal_uint32 pmic_wrap_dump_regions[] = {
   PMIC_WRAP_BASE,   0x190, 2,    /* PMIC_WRAPPER */
};
#endif /* __MTK_TARGET__ */

#if !defined(DRV_PMIC_OFF)

#if defined(PERIBUS_DEBUG) 
typedef struct
{
   kal_uint32 peribus_timeout;	
   kal_uint32 peribus_dbg_mon[7];
}PERIBUS_DBG_LOG;
PERIBUS_DBG_LOG peribus_dbg_log;

void pmic_wrap_dump_peribus_dbg(void){
	
//??Programming sequence
//	??Step1: set basic config 
//		??PERIBUS_TO_THRES  = 0xFFFF     (@0x1002_00f4 bit[15:0])
//		??PERIBUS_BUSY_MASK  = 0x0       (@0x1002_00f8 bit[27:8])
//		??PERIBUS_TO_TYPE = 0x0             (@0x1002_00f8 bit[1])
//	??Step2: set PERIBUS_DBG_EN to 1 (@0x1002_00f8 bit[2])
//	??Step3: set PERIBUS_DBG_CKEN to 1 (@0x1002_00f8 bit[3])
//	??Step4: read status
//		??PERIBUS_TIMEOUT (@0x1002_00f8 bit[0])
//		??PERIBUS_DBG_MON0~6 (@0x1002_00fc ~ 0x1002_0114)

	kal_uint32 rdata = 0;
	int i;
	
	rdata = PMIC_WRAP_DRV_Reg32(0xC00200f4);
	rdata |= (0xffff << 0); 
	PMIC_WRAP_DRV_WriteReg32(0xC00200f4,rdata);
	
	rdata = PMIC_WRAP_DRV_Reg32(0xC00200f8);
	rdata &= ~(0xfffff << 8); 
	PMIC_WRAP_DRV_WriteReg32(0xC00200f4,rdata);
	
	rdata = PMIC_WRAP_DRV_Reg32(0xC00200f8);
	rdata &= ~(0x1 << 1); 
	PMIC_WRAP_DRV_WriteReg32(0xC00200f4,rdata);
	
	rdata = PMIC_WRAP_DRV_Reg32(0xC00200f8);
	rdata |= (0x1 << 2); 
	PMIC_WRAP_DRV_WriteReg32(0xC00200f8,rdata);
	
	rdata = PMIC_WRAP_DRV_Reg32(0xC00200f8);
	rdata |= (0x1 << 3); 
	PMIC_WRAP_DRV_WriteReg32(0xC00200f8,rdata);

	peribus_dbg_log.peribus_timeout = PMIC_WRAP_DRV_Reg32(0xC00200f8);
	for(i=0 ; i<7; i++)
		peribus_dbg_log.peribus_dbg_mon[i]=PMIC_WRAP_DRV_Reg32(0xC00200fc+4*i);
	
}
#endif


#if defined(FPGA_CTP)
extern kal_uint32 drv_get_current_time(void);
extern kal_uint32 drv_get_duration_tick(kal_uint32 previous_time, kal_uint32 current_time);
kal_uint32 drv_get_current_time(void)
{
    return 10;
}
kal_uint32 drv_get_duration_tick(kal_uint32 previous_time, kal_uint32 current_time)
{
    return 1;
}

#endif // End of #if !defind(FPGA_CTP)

#if defined(__MTK_TARGET__)
kal_bool pmic_wrap_dump_bbreg_dump_callback(void) {
   /* do power on to secure bb register dump if necessary */
   return KAL_TRUE;
}

void pmic_wrap_dump_init(void) {
   /* register bb reg dump */
   pmic_wrap_dump.regions = (kal_uint32*)pmic_wrap_dump_regions;
   pmic_wrap_dump.num = sizeof(pmic_wrap_dump_regions) / (sizeof(kal_uint32) * 3);
   pmic_wrap_dump.bbreg_dump_callback = pmic_wrap_dump_bbreg_dump_callback;
   EX_REGISTER_BBREG_DUMP(&pmic_wrap_dump);
}
#endif /* __MTK_TARGET__ */

#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
void pmic_wrap_memory_dump(void)
{
    volatile kal_uint32 i = 0;

    PMIC_WRAP_WACS0_STATUS = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_WACS0_RDATA);
    PMIC_WRAP_WACS1_STATUS = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_WACS1_RDATA);
    
    for(i = 0; i < 110; i++)
    {
        PMIC_WRAP_MEMORY_DUMP[i] = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_BASE + (i << 2));
    }
    
}
#endif // End of #if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)


static inline kal_uint32 wait_for_wacs_fsm_idle(kal_uint32 x)
{
    pmic_wrap_wait_event = PMIC_WRAP_WAIT_WACS_FSM_IDLE;
    // Current WACS FSM state is IDLE State
    return (GET_WACS_FSM(x) != WACS_FSM_IDLE_STATE);
}

static inline kal_uint32 wait_for_wacs_fsm_wfvldclr(kal_uint32 x)
{
    pmic_wrap_wait_event = PMIC_WRAP_WAIT_WACS_FSM_WFVLDCLR;    
    // WFVLDCLR, wait for valid flag clearing
    return (GET_WACS_FSM(x) != WACS_FSM_WFVLDCLR_STATE); 
}

static inline kal_uint32 wait_for_man_wfvldclr(kal_uint32 x)
{
    pmic_wrap_wait_event = PMIC_WRAP_WAIT_MAN_WFVLDCLR;
    // WFVLDCLR (wait for valid flag clearing)
    return  (GET_MAN_FSM(x) != MAN_FSM_WFVLDCLR_STATE) ;
}

static inline kal_uint32 wait_for_man_idle_and_noreq(kal_uint32 x)
{
    pmic_wrap_wait_event = PMIC_WRAP_WAIT_MAN_IDLE_AND_NOREQ;
    // No MAN request is awaiting grant, Current MAN FSM state is IDLE.
    return ((GET_MAN_REQ(x) != 0x00) || (GET_MAN_FSM(x) != MAN_FSM_IDLE_STATE));
}

static inline kal_uint32 wait_for_wacs_fsm_idle_and_sync_idle(kal_uint32 x)
{
    pmic_wrap_wait_event = PMIC_WRAP_WAIT_WACS_FSM_IDLE_AND_SYNC_IDLE;
    // Wait until SYNC module is IDLE and FSM state is IDLE
    return ((GET_WACS_FSM(x) != WACS_FSM_IDLE_STATE) || (GET_SYNC_IDLE(x) != WACS_SYNC_MODULE_IDLE));
}

static inline kal_uint32 wait_for_cipher_ready(kal_uint32 x)
{
    pmic_wrap_wait_event = PMIC_WRAP_WAIT_CIPHER_READY;
    // Wait until CIPHER Data Ready (Data should be ready before enable CIPHER_MODE)
    return (x != 0x03);
}

static inline kal_uint32 wait_for_sync_idle(kal_uint32 x)
{
    pmic_wrap_wait_event = PMIC_WRAP_WAIT_SYNC_IDLE;
    // Wait until SYNC module is IDLE
    return (GET_SYNC_IDLE(x) != WACS_SYNC_MODULE_IDLE);
}

static inline kal_uint32 wait_for_staupd_idle(kal_uint32 x)
{
    pmic_wrap_wait_event = PMIC_WRAP_WAIT_STAUPID_IDLE;
    // Current STAUPD FSM is IDLE State
    return (GET_STAUPD_FSM(x) != STAUPD_FSM_IDLE_STATE) ;
}

static inline kal_uint32 wait_for_wrap_req_counter_zero(kal_uint32 x)
{
    pmic_wrap_wait_event = PMIC_WRAP_WAIT_WRAP_REQ_COUNTER_ZERO;
    // Remaining WRAP request counter for wrapper is zero
    return (GET_WRAP_AG_DLE_RESTCNT(x) != 0) ;
}

static inline kal_uint32 wait_for_state_ready_init(loop_condition_fp fp, kal_uint32 timeout_us, kal_uint32 pmic_wrap_register, kal_uint32 *read_reg)
{
    kal_uint32 reg_rdata = 0x0;
    kal_uint32 saved_current_time = 0;
    kal_uint32 time_out32k = 0;
    time_out32k = (timeout_us >> 5) + 1;

#if defined(FPGA_CTP)    
    //dbg_print("[PMIC_WRAP_MD] time_out32k =%d \n", time_out32k);          
#endif

    saved_current_time = drv_get_current_time();
    
    do
    {
        reg_rdata = PMIC_WRAP_DRV_Reg32(pmic_wrap_register);

        if(drv_get_duration_tick(saved_current_time, drv_get_current_time()) > time_out32k) // NEED TO CHECK (64us)
        {
            ASSERT(0);
            return PMIC_WRAP_TIME_OUT_FAIL;
        }
    }while(fp(reg_rdata));
    
    if(read_reg)
    {
        *read_reg = reg_rdata;
    }
    return 0;
}
#if defined(DCL_PMIC_MULTIPLE_LOG)
static inline kal_uint32 wait_for_state_ready_wrap(loop_condition_fp fp, kal_uint32 timeout_us, kal_uint32 pmic_wrap_register, kal_uint32 *read_reg, PMIC_LOG_TYPE_ENUM type)
{
    kal_uint32 reg_rdata;    
    kal_uint32 saved_current_time_start = 0;
    kal_uint32 saved_current_time_end = 0;
#if !defined(DRV_GET_CURRENT_TIME_WORKAROUND)
    kal_uint32 time_out32k = 0;
#endif
#if defined(DCL_PMIC_ACCESS_TIME_LOG)    
    kal_uint32 ust_get_current_time_start = 0;
    kal_uint32 saved_current_time_start1 = 0;
    kal_uint32 saved_current_time_start2 = 0;  
    kal_uint32 saved_current_time_end1 = 0;
    kal_uint32 saved_current_time_end2 = 0;
    kal_uint32 tqcnt1 = 0, tqcnt2 = 0, duration = 0;
    kal_uint32 log_index = 0;
	kal_uint32 idx = 0;

    if(read_reg)
		log_index = PMIC_WRAPPER_WAIT_FOR_WACS_FSM_WFVLDCLR_DBG;
    else
        log_index = PMIC_WRAPPER_WAIT_FOR_WACS_FSM_IDLE_DBG;

	idx = pmic_access_duration_index[type];
#endif

	PMIC_POLLING_COUNTER[type] = 0;
    pmic_wrap_log[type].current_read_address = pmic_wrap_register;
    pmic_wrap_log[type].current_read_data1 = 0;
    pmic_wrap_log[type].current_read_data2 = 0;
#if !defined(DRV_GET_CURRENT_TIME_WORKAROUND)
    time_out32k = (timeout_us >> 5) + 1;
#endif

    saved_current_time_start = drv_get_current_time();
  
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    GET_CURRENT_TIME(tqcnt1); // Get start time
    ust_get_current_time_start = ust_get_current_time();
    saved_current_time_start1 = drv_get_current_time();
    saved_current_time_start2 = drv_get_current_time();

    pmic_access_duration_log[type][log_index][idx].start_time = ust_get_current_time_start;
    pmic_access_duration_log[type][log_index][idx].pmu_time_start = tqcnt1;    
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_start = saved_current_time_start;
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_start1 = saved_current_time_start1;    
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_start2 = saved_current_time_start2;    
#endif

#if !defined(PMIC_WRAP_BUS_STRESS_TEST)
    if(PMIC_PATTERN_VAL[type] == 0xFFFFFFFE)
		PMIC_PATTERN_VAL[type]= 2;
    else
		PMIC_PATTERN_VAL[type] += 2;
    
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][log_index][idx].ust_get_current_time_action1 = ust_get_current_time();
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_action1 = drv_get_current_time();
#endif

    // do nothing

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][log_index][idx].ust_get_current_time_action2 = ust_get_current_time();
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_action2 = drv_get_current_time();
#endif

#else
    stress_start = ust_get_current_time();
    do
    {
        if(PMIC_PATTERN_VAL[type] == 0xFFFE)
			PMIC_PATTERN_VAL[type]= 2;
        else
            PMIC_PATTERN_VAL[type]+= 2;
        
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SIG_VALUE, PMIC_PATTERN_VAL);        
        reg_rdata = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_SIG_VALUE);
        pmic_wrap_log[type].current_sig_value = reg_rdata;
        
        if(reg_rdata != PMIC_PATTERN_VAL)
        {
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);                
        }

        if(ust_get_duration(stress_start, ust_get_current_time()) > PMIC_WRAP_BUS_STRESS_TEST_TIME)
			break;
        
    }while(1);
#endif // End of #if !defined(PMIC_WRAP_BUS_STRESS_TEST)

    do
    {
        
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
        pmic_access_duration_log[type][log_index][idx].ust_get_current_time_action3 = ust_get_current_time();        
        pmic_access_duration_log[type][log_index][idx].drv_get_current_time_action3 = drv_get_current_time();
        pmic_access_duration_log[type][PMIC_WRAPPER_READ_DBG][idx].start_time = ust_get_current_time();
#endif
        reg_rdata = PMIC_WRAP_DRV_Reg32(pmic_wrap_register);
        pmic_wrap_log[type].current_read_data1 = reg_rdata;

#if defined(DCL_PMIC_ACCESS_TIME_LOG)  
        pmic_access_duration_log[type][PMIC_WRAPPER_READ_DBG][idx].end_time = ust_get_current_time();
        pmic_access_duration_log[type][PMIC_WRAPPER_READ_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_WRAPPER_READ_DBG][idx].start_time, pmic_access_duration_log[type][PMIC_WRAPPER_READ_DBG][idx].end_time); 	
        pmic_access_duration_log[type][log_index][idx].ust_get_current_time_action4 = ust_get_current_time();           
        pmic_access_duration_log[type][log_index][idx].drv_get_current_time_action4 = drv_get_current_time();        
#endif        

#if !defined(PMIC_WRAP_INIT_DONE_POLLING)
        if(GET_INIT_DONE0( reg_rdata ) != WACS_INIT_DONE_FINISHED)
        {
            pmic_wrap_log[type].current_read_data2 = PMIC_WRAP_DRV_Reg32(pmic_wrap_register);
            PMIC_PATTERN_VAL[type]+= 1;
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);
            return PMIC_WRAP_NOT_INIT_DONE;
        }
#endif
     
        saved_current_time_end = drv_get_current_time();
        
#if defined(DCL_PMIC_ACCESS_TIME_LOG)        
        saved_current_time_end1 = drv_get_current_time();
        saved_current_time_end2 = drv_get_current_time();

        pmic_access_duration_log[type][log_index][idx].ust_get_current_time_action5 = ust_get_current_time();
        pmic_access_duration_log[type][log_index][idx].drv_get_current_time_action5 = drv_get_current_time();        
#endif
#if defined(DRV_GET_CURRENT_TIME_WORKAROUND)
        if(ust_us_duration(ust_get_current_time_start, ust_get_current_time()) > PMIC_WRAP_TIMEOUT)
#else
        if(drv_get_duration_tick(saved_current_time_start, saved_current_time_end) > time_out32k) // NEED TO CHECK (64us)
#endif
        {
#if defined(DCL_PMIC_ACCESS_TIME_LOG)          
            pmic_access_duration_log[type][log_index][idx].end_time = ust_get_current_time();
            
			GET_CURRENT_TIME(tqcnt2); // Get end time
            pmic_access_duration_log[type][log_index][idx].pmu_time_end = tqcnt2;               
            GET_DURATION(duration, tqcnt1, tqcnt2); // Get duration time between start and end time
            pmic_access_duration_log[type][log_index][idx].pmu_time_duration = duration;
            TRANS_TO_QBIT(duration, duration);  // Time unit transfer            
            pmic_access_duration_log[type][log_index][idx].pmu_time_qbit = duration;
            
			pmic_access_duration_log[type][log_index][idx].drv_get_current_time_end = saved_current_time_end;
            pmic_access_duration_log[type][log_index][idx].drv_get_current_time_end1 = saved_current_time_end1;
            pmic_access_duration_log[type][log_index][idx].drv_get_current_time_end2 = saved_current_time_end2;
           
		   pmic_access_duration_log[type][log_index][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][log_index][idx].start_time, pmic_access_duration_log[type][log_index][idx].end_time);
#endif            
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
#if defined(PERIBUS_DEBUG)
			pmic_wrap_dump_peribus_dbg();
#endif
            ASSERT(0);
            return PMIC_WRAP_TIME_OUT_FAIL;
        }        
        else
        {
            PMIC_POLLING_COUNTER[type]++;
        }
    }while(fp(reg_rdata));
    
    if(read_reg)
    {
        *read_reg = reg_rdata;
    }

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    saved_current_time_end = drv_get_current_time();
    saved_current_time_end1 = drv_get_current_time();
    saved_current_time_end2 = drv_get_current_time();
    pmic_access_duration_log[type][log_index][idx].end_time = ust_get_current_time();
   
    GET_CURRENT_TIME(tqcnt2); // Get end time    
    pmic_access_duration_log[type][log_index][idx].pmu_time_end = tqcnt2;   
    GET_DURATION(duration, tqcnt1, tqcnt2); // Get duration time between start and end time
    pmic_access_duration_log[type][log_index][idx].pmu_time_duration = duration;
    TRANS_TO_QBIT(duration, duration);  // Time unit transfer      
    pmic_access_duration_log[type][log_index][idx].pmu_time_qbit = duration;

	pmic_access_duration_log[type][log_index][idx].drv_get_current_time_end = saved_current_time_end;
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_end1 = saved_current_time_end1;
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_end2 = saved_current_time_end2;    
    
	pmic_access_duration_log[type][log_index][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][log_index][idx].start_time, pmic_access_duration_log[type][log_index][idx].end_time);
        
#endif    
         
    return 0;
}

static inline kal_uint32 wait_for_state_idle_wrap(loop_condition_fp fp, kal_uint32 timeout_us, kal_uint32 pmic_wrap_register, kal_uint32 *read_reg, PMIC_LOG_TYPE_ENUM type)
{
    kal_uint32 reg_rdata;    
    kal_uint32 saved_current_time_start = 0;
    kal_uint32 saved_current_time_end = 0;
#if !defined(DRV_GET_CURRENT_TIME_WORKAROUND)
    kal_uint32 time_out32k = 0;
#endif
#if defined(DCL_PMIC_ACCESS_TIME_LOG)    
    kal_uint32 ust_get_current_time_start = 0;
    kal_uint32 saved_current_time_start1 = 0;
    kal_uint32 saved_current_time_start2 = 0;  
    kal_uint32 saved_current_time_end1 = 0;
    kal_uint32 saved_current_time_end2 = 0;
    kal_uint32 tqcnt1 = 0, tqcnt2 = 0, duration = 0;
    kal_uint32 log_index = 0;
	kal_uint32 idx = 0;

    if(read_reg)
		log_index = PMIC_WRAPPER_WAIT_FOR_WACS_FSM_WFVLDCLR_DBG;
    else
        log_index = PMIC_WRAPPER_WAIT_FOR_WACS_FSM_IDLE_DBG;

	idx = pmic_access_duration_index[type];
#endif

	PMIC_POLLING_COUNTER[type] = 0;
    pmic_wrap_log[type].current_read_address = pmic_wrap_register;
    pmic_wrap_log[type].current_read_data1 = 0;
    pmic_wrap_log[type].current_read_data2 = 0;
#if !defined(DRV_GET_CURRENT_TIME_WORKAROUND)
    time_out32k = (timeout_us >> 5) + 1;
#endif

	pmic_wacs_fsm[type].wacs_fsm_wfvldclr = 0;
    pmic_wacs_fsm[type].wacs_fsm_wfdle = 0;
    pmic_wacs_fsm[type].wacs_fsm_req = 0;

    saved_current_time_start = drv_get_current_time();
  
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    GET_CURRENT_TIME(tqcnt1); // Get start time
    ust_get_current_time_start = ust_get_current_time();
    saved_current_time_start1 = drv_get_current_time();
    saved_current_time_start2 = drv_get_current_time();

    pmic_access_duration_log[type][log_index][idx].start_time = ust_get_current_time_start;
    pmic_access_duration_log[type][log_index][idx].pmu_time_start = tqcnt1;    
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_start = saved_current_time_start;
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_start1 = saved_current_time_start1;    
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_start2 = saved_current_time_start2;    
#endif

#if !defined(PMIC_WRAP_BUS_STRESS_TEST)
    if(PMIC_PATTERN_VAL[type] == 0xFFFFFFFE)
		PMIC_PATTERN_VAL[type] = 2;
    else
		PMIC_PATTERN_VAL[type] += 2;
    
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][log_index][idx].ust_get_current_time_action1 = ust_get_current_time();
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_action1 = drv_get_current_time();
#endif

    // do nothing

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][log_index][idx].ust_get_current_time_action2 = ust_get_current_time();
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_action2 = drv_get_current_time();
#endif

#else
    stress_start = ust_get_current_time();
    do
    {
        if(PMIC_PATTERN_VAL[type] == 0xFFFE)
			PMIC_PATTERN_VAL[type] = 2;
        else
            PMIC_PATTERN_VAL[type] += 2;
        
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SIG_VALUE, PMIC_PATTERN_VAL);        
        reg_rdata = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_SIG_VALUE);
        pmic_wrap_log[type].current_sig_value = reg_rdata;
        
        if(reg_rdata != PMIC_PATTERN_VAL)
        {
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);                
        }

        if(ust_get_duration(stress_start, ust_get_current_time()) > PMIC_WRAP_BUS_STRESS_TEST_TIME)
			break;
        
    }while(1);
#endif // End of #if !defined(PMIC_WRAP_BUS_STRESS_TEST)

    do
    {
        
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
        pmic_access_duration_log[type][log_index][idx].ust_get_current_time_action3 = ust_get_current_time();        
        pmic_access_duration_log[type][log_index][idx].drv_get_current_time_action3 = drv_get_current_time();
        pmic_access_duration_log[type][PMIC_WRAPPER_READ_DBG][idx].start_time = ust_get_current_time();
#endif
        reg_rdata = PMIC_WRAP_DRV_Reg32(pmic_wrap_register);
        pmic_wrap_log[type].current_read_data1 = reg_rdata;

#if defined(DCL_PMIC_ACCESS_TIME_LOG)  
        pmic_access_duration_log[type][PMIC_WRAPPER_READ_DBG][idx].end_time = ust_get_current_time();
        pmic_access_duration_log[type][PMIC_WRAPPER_READ_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_WRAPPER_READ_DBG][idx].start_time, pmic_access_duration_log[type][PMIC_WRAPPER_READ_DBG][idx].end_time); 	
        pmic_access_duration_log[type][log_index][idx].ust_get_current_time_action4 = ust_get_current_time();           
        pmic_access_duration_log[type][log_index][idx].drv_get_current_time_action4 = drv_get_current_time();        
#endif        

#if !defined(PMIC_WRAP_INIT_DONE_POLLING)
        if(GET_INIT_DONE0( reg_rdata ) != WACS_INIT_DONE_FINISHED)
        {
            pmic_wrap_log[type].current_read_data2 = PMIC_WRAP_DRV_Reg32(pmic_wrap_register);
            PMIC_PATTERN_VAL[type] += 1;
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);
            return PMIC_WRAP_NOT_INIT_DONE;
        }
#endif

		switch (GET_WACS0_FSM(reg_rdata)) {
		case WACS_FSM_WFVLDCLR_STATE:
			if(pmic_wrap_register == PMIC_WRAP_WACS0_RDATA)
				PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_VLDCLR, 0x01);
			else
				PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS1_VLDCLR, 0x01);
			pmic_wacs_fsm[type].wacs_fsm_wfvldclr+=1;
			break;
		case WACS_FSM_WFDLE_STATE:
			pmic_wacs_fsm[type].wacs_fsm_wfdle+=1;
			break;
		case WACS_FSM_REQ_STATE:
			pmic_wacs_fsm[type].wacs_fsm_req+=1;
			break;
		default:
			break;
		}
     
        saved_current_time_end = drv_get_current_time();
        
#if defined(DCL_PMIC_ACCESS_TIME_LOG)        
        saved_current_time_end1 = drv_get_current_time();
        saved_current_time_end2 = drv_get_current_time();

        pmic_access_duration_log[type][log_index][idx].ust_get_current_time_action5 = ust_get_current_time();
        pmic_access_duration_log[type][log_index][idx].drv_get_current_time_action5 = drv_get_current_time();        
#endif
#if defined(DRV_GET_CURRENT_TIME_WORKAROUND)
        if(ust_us_duration(ust_get_current_time_start, ust_get_current_time()) > PMIC_WRAP_TIMEOUT)
#else
        if(drv_get_duration_tick(saved_current_time_start, saved_current_time_end) > time_out32k) // NEED TO CHECK (64us)
#endif
        {
#if defined(DCL_PMIC_ACCESS_TIME_LOG)          
            pmic_access_duration_log[type][log_index][idx].end_time = ust_get_current_time();
            
			GET_CURRENT_TIME(tqcnt2); // Get end time
            pmic_access_duration_log[type][log_index][idx].pmu_time_end = tqcnt2;               
            GET_DURATION(duration, tqcnt1, tqcnt2); // Get duration time between start and end time
            pmic_access_duration_log[type][log_index][idx].pmu_time_duration = duration;
            TRANS_TO_QBIT(duration, duration);  // Time unit transfer            
            pmic_access_duration_log[type][log_index][idx].pmu_time_qbit = duration;
            
			pmic_access_duration_log[type][log_index][idx].drv_get_current_time_end = saved_current_time_end;
            pmic_access_duration_log[type][log_index][idx].drv_get_current_time_end1 = saved_current_time_end1;
            pmic_access_duration_log[type][log_index][idx].drv_get_current_time_end2 = saved_current_time_end2;
           
		   pmic_access_duration_log[type][log_index][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][log_index][idx].start_time, pmic_access_duration_log[type][log_index][idx].end_time);
#endif            
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
#if defined(PERIBUS_DEBUG)
			pmic_wrap_dump_peribus_dbg();
#endif
            ASSERT(0);
            return PMIC_WRAP_TIME_OUT_FAIL;
        }        
        else
        {
            PMIC_POLLING_COUNTER[type]++;
        }
    }while(fp(reg_rdata));
    
    if(read_reg)
    {
        *read_reg = reg_rdata;
    }

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    saved_current_time_end = drv_get_current_time();
    saved_current_time_end1 = drv_get_current_time();
    saved_current_time_end2 = drv_get_current_time();
    pmic_access_duration_log[type][log_index][idx].end_time = ust_get_current_time();
   
    GET_CURRENT_TIME(tqcnt2); // Get end time    
    pmic_access_duration_log[type][log_index][idx].pmu_time_end = tqcnt2;   
    GET_DURATION(duration, tqcnt1, tqcnt2); // Get duration time between start and end time
    pmic_access_duration_log[type][log_index][idx].pmu_time_duration = duration;
    TRANS_TO_QBIT(duration, duration);  // Time unit transfer      
    pmic_access_duration_log[type][log_index][idx].pmu_time_qbit = duration;

	pmic_access_duration_log[type][log_index][idx].drv_get_current_time_end = saved_current_time_end;
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_end1 = saved_current_time_end1;
    pmic_access_duration_log[type][log_index][idx].drv_get_current_time_end2 = saved_current_time_end2;    
    
	pmic_access_duration_log[type][log_index][idx].duration_time = \
	ust_get_duration(pmic_access_duration_log[type][log_index][idx].start_time, pmic_access_duration_log[type][log_index][idx].end_time);
        
#endif    
         
    return 0;
}

#else
static inline kal_uint32 wait_for_state_idle(loop_condition_fp fp, kal_uint32 timeout_us, kal_uint32 pmic_wrap_register, kal_uint32 *read_reg)
{
    kal_uint32 reg_rdata;    
    kal_uint32 saved_current_time_start = 0;
    kal_uint32 saved_current_time_end = 0;
#if !defined(DRV_GET_CURRENT_TIME_WORKAROUND)
    kal_uint32 time_out32k = 0;
#endif
#if defined(DCL_PMIC_ACCESS_TIME_LOG)    
    kal_uint32 ust_get_current_time_start = 0;
    kal_uint32 saved_current_time_start1 = 0;
    kal_uint32 saved_current_time_start2 = 0;  
    kal_uint32 saved_current_time_end1 = 0;
    kal_uint32 saved_current_time_end2 = 0;
    kal_uint32 tqcnt1 = 0, tqcnt2 = 0, duration = 0;
#endif
#if defined(PMIC_WRAP_INIT_DONE_POLLING)    
    kal_uint32 init_done_start = 0;
#endif
#if defined(PMIC_WRAP_BUS_STRESS_TEST)
    kal_uint32 stress_start = 0;
#endif

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    kal_uint32 log_index = 0;

    if(read_reg)
		log_index = PMIC_WRAPPER_WAIT_FOR_WACS_FSM_WFVLDCLR_DBG;
    else
        log_index = PMIC_WRAPPER_WAIT_FOR_WACS_FSM_IDLE_DBG;
#endif

    pmic_wrap_log.current_read_address = pmic_wrap_register;
    PMIC_POLLING_COUNTER = 0;
    PMIC_STRESS_COUNTER = 0;
    pmic_wrap_log.current_read_data1 = 0;
    pmic_wrap_log.current_read_data2 = 0;
#if !defined(DRV_GET_CURRENT_TIME_WORKAROUND)
    time_out32k = (timeout_us >> 5) + 1;
#endif

    pmic_wacs_fsm.wacs_fsm_wfvldclr = 0;
    pmic_wacs_fsm.wacs_fsm_wfdle = 0;
    pmic_wacs_fsm.wacs_fsm_req = 0;

    saved_current_time_start = drv_get_current_time();
  
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    GET_CURRENT_TIME(tqcnt1); // Get start time
    ust_get_current_time_start = ust_get_current_time();
    saved_current_time_start1 = drv_get_current_time();
    saved_current_time_start2 = drv_get_current_time();

    pmic_access_duration_log[log_index][pmic_access_duration_index].start_time = ust_get_current_time_start;
    pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_start = tqcnt1;    
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_start = saved_current_time_start;
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_start1 = saved_current_time_start1;    
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_start2 = saved_current_time_start2;    
#endif

////////// PMIC_WRAP_CLOCK_CHECK Start //////////
#if defined(PMIC_WRAP_CLOCK_CHECK)
    pmic_wrap_log.MD_PERI_data1 = PMIC_WRAP_DRV_Reg32(0x80000000);  
    pmic_wrap_log.AP_PERI_data1 = PMIC_WRAP_DRV_Reg32(0xA0000000);    
    pmic_wrap_log.AP_PERI_data2 = PMIC_WRAP_DRV_Reg32(0xA0000024);	//  0xF0000024 (bit [20], [27] [28] should not be all 1)
    if((pmic_wrap_log.MD_PERI_data1 == 0x00000000) || ((pmic_wrap_log.AP_PERI_data1 & 0x03000000) != 0x03000000) || ((pmic_wrap_log.AP_PERI_data2 & 0x18100000) == 0x18100000))
    {
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);        
    }
#endif // End of #if defined(PMIC_WRAP_CLOCK_CHECK)
////////// PMIC_WRAP_CLOCK_CHECK End //////////

////////// PMIC_WRAP_INIT_DONE_POLLING Start //////////
#if defined(PMIC_WRAP_INIT_DONE_POLLING)
#if defined(DCL_PMIC_ACCESS_TIME_LOG)        
    pmic_access_duration_log[PMIC_WRAPPER_INIT_DONE_DBG][pmic_access_duration_index].start_time = ust_get_current_time();
    init_done_start = pmic_access_duration_log[PMIC_WRAPPER_INIT_DONE_DBG][pmic_access_duration_index].start_time;
#else    
    init_done_start = ust_get_current_time();
#endif

    do
    {
        PMIC_STRESS_COUNTER++;
        reg_rdata = PMIC_WRAP_DRV_Reg32(pmic_wrap_register);
        pmic_wrap_log.current_read_data0 = reg_rdata;
        if(ust_get_duration(init_done_start, ust_get_current_time()) > PMIC_WRAP_INIT_DONE_POLLING_TIME)
        {
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);
            return PMIC_WRAP_NOT_INIT_DONE;
        }
        
    }while(GET_INIT_DONE0(reg_rdata) != WACS_INIT_DONE_FINISHED);
    
#if defined(DCL_PMIC_ACCESS_TIME_LOG)  
        pmic_access_duration_log[PMIC_WRAPPER_INIT_DONE_DBG][pmic_access_duration_index].end_time = ust_get_current_time();
        pmic_access_duration_log[PMIC_WRAPPER_INIT_DONE_DBG][pmic_access_duration_index].duration_time = \
            ust_get_duration(pmic_access_duration_log[PMIC_WRAPPER_INIT_DONE_DBG][pmic_access_duration_index].start_time, pmic_access_duration_log[PMIC_WRAPPER_INIT_DONE_DBG][pmic_access_duration_index].end_time);            
#endif           
#endif // End of #if defined(PMIC_WRAP_INIT_DONE_POLLING)
////////// PMIC_WRAP_INIT_DONE_POLLING End //////////

#if !defined(PMIC_WRAP_BUS_STRESS_TEST)
    if(PMIC_PATTERN_VAL == 0xFFFFFFFE)
		PMIC_PATTERN_VAL = 2;
    else
		PMIC_PATTERN_VAL += 2;
    
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[log_index][pmic_access_duration_index].ust_get_current_time_action1 = ust_get_current_time();
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_action1 = drv_get_current_time();
#endif

    // do nothing

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[log_index][pmic_access_duration_index].ust_get_current_time_action2 = ust_get_current_time();
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_action2 = drv_get_current_time();
#endif

#else
    stress_start = ust_get_current_time();
    do
    {
        if(PMIC_PATTERN_VAL == 0xFFFE)
			PMIC_PATTERN_VAL = 2;
        else
            PMIC_PATTERN_VAL += 2;
        
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SIG_VALUE, PMIC_PATTERN_VAL);        
        reg_rdata = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_SIG_VALUE);
        pmic_wrap_log.current_sig_value = reg_rdata;
        
        if(reg_rdata != PMIC_PATTERN_VAL)
        {
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);                
        }

        if(ust_get_duration(stress_start, ust_get_current_time()) > PMIC_WRAP_BUS_STRESS_TEST_TIME)
			break;
        
    }while(1);
#endif // End of #if !defined(PMIC_WRAP_BUS_STRESS_TEST)

    do
    {
        
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
        pmic_access_duration_log[log_index][pmic_access_duration_index].ust_get_current_time_action3 = ust_get_current_time();        
        pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_action3 = drv_get_current_time();
        pmic_access_duration_log[PMIC_WRAPPER_READ_DBG][pmic_access_duration_index].start_time = ust_get_current_time();
#endif
        reg_rdata = PMIC_WRAP_DRV_Reg32(pmic_wrap_register);
        pmic_wrap_log.current_read_data1 = reg_rdata;

#if defined(DCL_PMIC_ACCESS_TIME_LOG)  
        pmic_access_duration_log[PMIC_WRAPPER_READ_DBG][pmic_access_duration_index].end_time = ust_get_current_time();
        pmic_access_duration_log[PMIC_WRAPPER_READ_DBG][pmic_access_duration_index].duration_time = \
            ust_get_duration(pmic_access_duration_log[PMIC_WRAPPER_READ_DBG][pmic_access_duration_index].start_time, pmic_access_duration_log[PMIC_WRAPPER_READ_DBG][pmic_access_duration_index].end_time);  
        pmic_access_duration_log[log_index][pmic_access_duration_index].ust_get_current_time_action4 = ust_get_current_time();           
        pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_action4 = drv_get_current_time();        
#endif        

#if !defined(PMIC_WRAP_INIT_DONE_POLLING)
        if(GET_INIT_DONE0( reg_rdata ) != WACS_INIT_DONE_FINISHED)
        {
            pmic_wrap_log.current_read_data2 = PMIC_WRAP_DRV_Reg32(pmic_wrap_register);
            PMIC_PATTERN_VAL += 1;
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);
            return PMIC_WRAP_NOT_INIT_DONE;
        }
#endif
        switch (GET_WACS0_FSM(reg_rdata)) {
		case WACS_FSM_WFVLDCLR_STATE:
			PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_VLDCLR, 0x01);
			pmic_wacs_fsm.wacs_fsm_wfvldclr+=1;
			break;
		case WACS_FSM_WFDLE_STATE:
			pmic_wacs_fsm.wacs_fsm_wfdle+=1;
			break;
		case WACS_FSM_REQ_STATE:
			pmic_wacs_fsm.wacs_fsm_req+=1;
			break;
		default:
			break;
		}

        saved_current_time_end = drv_get_current_time();
        
#if defined(DCL_PMIC_ACCESS_TIME_LOG)        
        saved_current_time_end1 = drv_get_current_time();
        saved_current_time_end2 = drv_get_current_time();

        pmic_access_duration_log[log_index][pmic_access_duration_index].ust_get_current_time_action5 = ust_get_current_time();
        pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_action5 = drv_get_current_time();        
#endif
#if defined(DRV_GET_CURRENT_TIME_WORKAROUND)
        if(ust_us_duration(ust_get_current_time_start, ust_get_current_time()) > PMIC_WRAP_TIMEOUT)
#else
        if(drv_get_duration_tick(saved_current_time_start, saved_current_time_end) > time_out32k) // NEED TO CHECK (64us)
#endif
        {
#if defined(DCL_PMIC_ACCESS_TIME_LOG)          
            pmic_access_duration_log[log_index][pmic_access_duration_index].end_time = ust_get_current_time();
            GET_CURRENT_TIME(tqcnt2); // Get end time
            
            pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_end = tqcnt2;               
            GET_DURATION(duration, tqcnt1, tqcnt2); // Get duration time between start and end time
            pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_duration = duration;
            TRANS_TO_QBIT(duration, duration);  // Time unit transfer            
            pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_qbit = duration;
            pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_end = saved_current_time_end;
            pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_end1 = saved_current_time_end1;
            pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_end2 = saved_current_time_end2;
            pmic_access_duration_log[log_index][pmic_access_duration_index].duration_time = \
                ust_get_duration(pmic_access_duration_log[log_index][pmic_access_duration_index].start_time, pmic_access_duration_log[log_index][pmic_access_duration_index].end_time);    
#endif            
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);
            return PMIC_WRAP_TIME_OUT_FAIL;
        }        
        else
        {
            PMIC_POLLING_COUNTER++;
        }
    }while(fp(reg_rdata));
    
    if(read_reg)
    {
        *read_reg = reg_rdata;
    }

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    saved_current_time_end = drv_get_current_time();
    saved_current_time_end1 = drv_get_current_time();
    saved_current_time_end2 = drv_get_current_time();
    pmic_access_duration_log[log_index][pmic_access_duration_index].end_time = ust_get_current_time();
    GET_CURRENT_TIME(tqcnt2); // Get end time    
    pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_end = tqcnt2;   
    GET_DURATION(duration, tqcnt1, tqcnt2); // Get duration time between start and end time
    pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_duration = duration;
    TRANS_TO_QBIT(duration, duration);  // Time unit transfer      
    pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_qbit = duration;
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_end = saved_current_time_end;
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_end1 = saved_current_time_end1;
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_end2 = saved_current_time_end2;    
    pmic_access_duration_log[log_index][pmic_access_duration_index].duration_time = \
        ust_get_duration(pmic_access_duration_log[log_index][pmic_access_duration_index].start_time, pmic_access_duration_log[log_index][pmic_access_duration_index].end_time);
#endif    
         
    return 0;
}

static inline kal_uint32 wait_for_state_ready(loop_condition_fp fp, kal_uint32 timeout_us, kal_uint32 pmic_wrap_register, kal_uint32 *read_reg)
{
    kal_uint32 reg_rdata;    
    kal_uint32 saved_current_time_start = 0;
    kal_uint32 saved_current_time_end = 0;
#if !defined(DRV_GET_CURRENT_TIME_WORKAROUND)
    kal_uint32 time_out32k = 0;
#endif
#if defined(DCL_PMIC_ACCESS_TIME_LOG)    
    kal_uint32 ust_get_current_time_start = 0;
    kal_uint32 saved_current_time_start1 = 0;
    kal_uint32 saved_current_time_start2 = 0;  
    kal_uint32 saved_current_time_end1 = 0;
    kal_uint32 saved_current_time_end2 = 0;
    kal_uint32 tqcnt1 = 0, tqcnt2 = 0, duration = 0;
#endif
#if defined(PMIC_WRAP_INIT_DONE_POLLING)    
    kal_uint32 init_done_start = 0;
#endif
#if defined(PMIC_WRAP_BUS_STRESS_TEST)
    kal_uint32 stress_start = 0;
#endif

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    kal_uint32 log_index = 0;

    if(read_reg)
		log_index = PMIC_WRAPPER_WAIT_FOR_WACS_FSM_WFVLDCLR_DBG;
    else
        log_index = PMIC_WRAPPER_WAIT_FOR_WACS_FSM_IDLE_DBG;
#endif

    pmic_wrap_log.current_read_address = pmic_wrap_register;
    PMIC_POLLING_COUNTER = 0;
    PMIC_STRESS_COUNTER = 0;
    pmic_wrap_log.current_read_data1 = 0;
    pmic_wrap_log.current_read_data2 = 0;
#if !defined(DRV_GET_CURRENT_TIME_WORKAROUND)
    time_out32k = (timeout_us >> 5) + 1;
#endif

    saved_current_time_start = drv_get_current_time();
  
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    GET_CURRENT_TIME(tqcnt1); // Get start time
    ust_get_current_time_start = ust_get_current_time();
    saved_current_time_start1 = drv_get_current_time();
    saved_current_time_start2 = drv_get_current_time();

    pmic_access_duration_log[log_index][pmic_access_duration_index].start_time = ust_get_current_time_start;
    pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_start = tqcnt1;    
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_start = saved_current_time_start;
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_start1 = saved_current_time_start1;    
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_start2 = saved_current_time_start2;    
#endif

////////// PMIC_WRAP_CLOCK_CHECK Start //////////
#if defined(PMIC_WRAP_CLOCK_CHECK)
    pmic_wrap_log.MD_PERI_data1 = PMIC_WRAP_DRV_Reg32(0x80000000);  
    pmic_wrap_log.AP_PERI_data1 = PMIC_WRAP_DRV_Reg32(0xA0000000);    
    pmic_wrap_log.AP_PERI_data2 = PMIC_WRAP_DRV_Reg32(0xA0000024);	//  0xF0000024 (bit [20], [27] [28] should not be all 1)
    if((pmic_wrap_log.MD_PERI_data1 == 0x00000000) || ((pmic_wrap_log.AP_PERI_data1 & 0x03000000) != 0x03000000) || ((pmic_wrap_log.AP_PERI_data2 & 0x18100000) == 0x18100000))
    {
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);        
    }
#endif // End of #if defined(PMIC_WRAP_CLOCK_CHECK)
////////// PMIC_WRAP_CLOCK_CHECK End //////////

////////// PMIC_WRAP_INIT_DONE_POLLING Start //////////
#if defined(PMIC_WRAP_INIT_DONE_POLLING)
#if defined(DCL_PMIC_ACCESS_TIME_LOG)        
    pmic_access_duration_log[PMIC_WRAPPER_INIT_DONE_DBG][pmic_access_duration_index].start_time = ust_get_current_time();
    init_done_start = pmic_access_duration_log[PMIC_WRAPPER_INIT_DONE_DBG][pmic_access_duration_index].start_time;
#else    
    init_done_start = ust_get_current_time();
#endif

    do
    {
        PMIC_STRESS_COUNTER++;
        reg_rdata = PMIC_WRAP_DRV_Reg32(pmic_wrap_register);
        pmic_wrap_log.current_read_data0 = reg_rdata;
        if(ust_get_duration(init_done_start, ust_get_current_time()) > PMIC_WRAP_INIT_DONE_POLLING_TIME)
        {
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);
            return PMIC_WRAP_NOT_INIT_DONE;
        }
        
    }while(GET_INIT_DONE0(reg_rdata) != WACS_INIT_DONE_FINISHED);
    
#if defined(DCL_PMIC_ACCESS_TIME_LOG)  
        pmic_access_duration_log[PMIC_WRAPPER_INIT_DONE_DBG][pmic_access_duration_index].end_time = ust_get_current_time();
        pmic_access_duration_log[PMIC_WRAPPER_INIT_DONE_DBG][pmic_access_duration_index].duration_time = \
            ust_get_duration(pmic_access_duration_log[PMIC_WRAPPER_INIT_DONE_DBG][pmic_access_duration_index].start_time, pmic_access_duration_log[PMIC_WRAPPER_INIT_DONE_DBG][pmic_access_duration_index].end_time);            
#endif           
#endif // End of #if defined(PMIC_WRAP_INIT_DONE_POLLING)
////////// PMIC_WRAP_INIT_DONE_POLLING End //////////

#if !defined(PMIC_WRAP_BUS_STRESS_TEST)
    if(PMIC_PATTERN_VAL == 0xFFFFFFFE)
		PMIC_PATTERN_VAL = 2;
    else
		PMIC_PATTERN_VAL += 2;
    
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[log_index][pmic_access_duration_index].ust_get_current_time_action1 = ust_get_current_time();
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_action1 = drv_get_current_time();
#endif

    // do nothing

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[log_index][pmic_access_duration_index].ust_get_current_time_action2 = ust_get_current_time();
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_action2 = drv_get_current_time();
#endif

#else
    stress_start = ust_get_current_time();
    do
    {
        if(PMIC_PATTERN_VAL == 0xFFFE)
			PMIC_PATTERN_VAL = 2;
        else
            PMIC_PATTERN_VAL += 2;
        
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SIG_VALUE, PMIC_PATTERN_VAL);        
        reg_rdata = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_SIG_VALUE);
        pmic_wrap_log.current_sig_value = reg_rdata;
        
        if(reg_rdata != PMIC_PATTERN_VAL)
        {
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);                
        }

        if(ust_get_duration(stress_start, ust_get_current_time()) > PMIC_WRAP_BUS_STRESS_TEST_TIME)
			break;
        
    }while(1);
#endif // End of #if !defined(PMIC_WRAP_BUS_STRESS_TEST)

    do
    {
        
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
        pmic_access_duration_log[log_index][pmic_access_duration_index].ust_get_current_time_action3 = ust_get_current_time();        
        pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_action3 = drv_get_current_time();
        pmic_access_duration_log[PMIC_WRAPPER_READ_DBG][pmic_access_duration_index].start_time = ust_get_current_time();
#endif
        reg_rdata = PMIC_WRAP_DRV_Reg32(pmic_wrap_register);
        pmic_wrap_log.current_read_data1 = reg_rdata;

#if defined(DCL_PMIC_ACCESS_TIME_LOG)  
        pmic_access_duration_log[PMIC_WRAPPER_READ_DBG][pmic_access_duration_index].end_time = ust_get_current_time();
        pmic_access_duration_log[PMIC_WRAPPER_READ_DBG][pmic_access_duration_index].duration_time = \
            ust_get_duration(pmic_access_duration_log[PMIC_WRAPPER_READ_DBG][pmic_access_duration_index].start_time, pmic_access_duration_log[PMIC_WRAPPER_READ_DBG][pmic_access_duration_index].end_time);  
        pmic_access_duration_log[log_index][pmic_access_duration_index].ust_get_current_time_action4 = ust_get_current_time();           
        pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_action4 = drv_get_current_time();        
#endif        

#if !defined(PMIC_WRAP_INIT_DONE_POLLING)
        if(GET_INIT_DONE0( reg_rdata ) != WACS_INIT_DONE_FINISHED)
        {
            pmic_wrap_log.current_read_data2 = PMIC_WRAP_DRV_Reg32(pmic_wrap_register);
            PMIC_PATTERN_VAL += 1;
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);
            return PMIC_WRAP_NOT_INIT_DONE;
        }
#endif
     
        saved_current_time_end = drv_get_current_time();
        
#if defined(DCL_PMIC_ACCESS_TIME_LOG)        
        saved_current_time_end1 = drv_get_current_time();
        saved_current_time_end2 = drv_get_current_time();

        pmic_access_duration_log[log_index][pmic_access_duration_index].ust_get_current_time_action5 = ust_get_current_time();
        pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_action5 = drv_get_current_time();        
#endif
#if defined(DRV_GET_CURRENT_TIME_WORKAROUND)
        if(ust_us_duration(ust_get_current_time_start, ust_get_current_time()) > PMIC_WRAP_TIMEOUT)
#else
        if(drv_get_duration_tick(saved_current_time_start, saved_current_time_end) > time_out32k) // NEED TO CHECK (64us)
#endif
        {
#if defined(DCL_PMIC_ACCESS_TIME_LOG)          
            pmic_access_duration_log[log_index][pmic_access_duration_index].end_time = ust_get_current_time();
            GET_CURRENT_TIME(tqcnt2); // Get end time
            
            pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_end = tqcnt2;               
            GET_DURATION(duration, tqcnt1, tqcnt2); // Get duration time between start and end time
            pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_duration = duration;
            TRANS_TO_QBIT(duration, duration);  // Time unit transfer            
            pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_qbit = duration;
            pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_end = saved_current_time_end;
            pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_end1 = saved_current_time_end1;
            pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_end2 = saved_current_time_end2;
            pmic_access_duration_log[log_index][pmic_access_duration_index].duration_time = \
                ust_get_duration(pmic_access_duration_log[log_index][pmic_access_duration_index].start_time, pmic_access_duration_log[log_index][pmic_access_duration_index].end_time);    
#endif            
#if defined(PMIC_WRAP_MEMORY_DUMP_SUPPORT)
            pmic_wrap_memory_dump();
#endif
            ASSERT(0);
            return PMIC_WRAP_TIME_OUT_FAIL;
        }        
        else
        {
            PMIC_POLLING_COUNTER++;
        }
    }while(fp(reg_rdata));
    
    if(read_reg)
    {
        *read_reg = reg_rdata;
    }

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    saved_current_time_end = drv_get_current_time();
    saved_current_time_end1 = drv_get_current_time();
    saved_current_time_end2 = drv_get_current_time();
    pmic_access_duration_log[log_index][pmic_access_duration_index].end_time = ust_get_current_time();
    GET_CURRENT_TIME(tqcnt2); // Get end time    
    pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_end = tqcnt2;   
    GET_DURATION(duration, tqcnt1, tqcnt2); // Get duration time between start and end time
    pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_duration = duration;
    TRANS_TO_QBIT(duration, duration);  // Time unit transfer      
    pmic_access_duration_log[log_index][pmic_access_duration_index].pmu_time_qbit = duration;
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_end = saved_current_time_end;
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_end1 = saved_current_time_end1;
    pmic_access_duration_log[log_index][pmic_access_duration_index].drv_get_current_time_end2 = saved_current_time_end2;    
    pmic_access_duration_log[log_index][pmic_access_duration_index].duration_time = \
        ust_get_duration(pmic_access_duration_log[log_index][pmic_access_duration_index].start_time, pmic_access_duration_log[log_index][pmic_access_duration_index].end_time);
#endif    
         
    return 0;
}
#endif
//--------------------------------------------------------
//    Function : DrvPWRAP_CheckCIPHER()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_CheckCIPHER(void)
{
    return PMIC_WRAP_DRV_Reg32(PMIC_WRAP_CIPHER_EN);		
}

//--------------------------------------------------------
//    Function : DrvPWRAP_SW_RST1()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
void DrvPWRAP_SW_RST1(kal_uint16 sw_rst_module)
{
	PMIC_WRAP_DRV_WriteReg32(INFRA_GLOBALCON_RST2_SET, (0x0001) << sw_rst_module); // Write 1 set
    PMIC_WRAP_DRV_WriteReg32(INFRA_GLOBALCON_RST2_CLR, (0x0001) << sw_rst_module); // Write 1 clr
}

//--------------------------------------------------------
//    Function : DrvPWRAP_Spi_Clk_Set()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
void DrvPWRAP_Spi_Clk_Set(void)
{
    // Select 26MHz Clock as SPI Clock  	
	PMIC_WRAP_DRV_WriteReg32(CLK_CFG_4_CLR, 0xff000000); //SPI_CK: 26MHz, not inverted
	
    // Select ULPOSC/16 Clock as SYS, TMR and SPI Clocks in Suspend Mode
	PMIC_WRAP_DRV_WriteReg32(MODULE_CLK_SEL, (PMIC_WRAP_DRV_Reg32(MODULE_CLK_SEL) | 0x100));
	
    // Turn On SYS, TMR and SPI Clock CGs
	/*sys_ck cg enable, turn off clock*/
	PMIC_WRAP_DRV_WriteReg32(MODULE_SW_CG_0_SET, 0x0000000F);
	/* turn on clock*/
	PMIC_WRAP_DRV_WriteReg32(MODULE_SW_CG_0_CLR, 0x0000000F);		
}

//--------------------------------------------------------
//    Function : DrvPWRAP_Enable_DCM()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
void DrvPWRAP_Enable_DCM(void)
{
	
#ifndef PWRAP_DCM_ALL_ON
	PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_DCM_EN, 0x1);	// Enable CRC DCM and PWRAP DCM
#else
	PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_DCM_EN, 0xfff);
#endif
	PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_DCM_DBC_PRD, 0x00);	// Disable Debounce Period at Entering DCM Mode.
}

//--------------------------------------------------------
//    Function : DrvPWRAP_InitSPISLV()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_InitSPISLV(void)
{   
    kal_uint32 arb_en_backup, wacs2_en_backup;
    kal_uint32 rdata;

    arb_en_backup = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_HIPRIO_ARB_EN); // Backup HIPRIO_ARB enable bitmap
    wacs2_en_backup = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_WACS2_EN);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, HARB_HPRIO_WACS2); // HIPRIO_ARB enable for each source. (Set WACS2 highest priority);only WACS2
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, 0x1);

    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, FILTER_CON0, 0xf, &rdata); //turn on IO filter function
    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, TOP_CKHWEN_CON0_SET, 0x80, &rdata); //turn on SPI slave DCM
    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, SMT_CON1, 0xf, &rdata); //turn on IO SMT function to improve noise immunity
    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, GPIO_PULLEN0_CLR, 0x3c0, &rdata); //turn off IO pull function for power saving
#ifdef DUAL_PMICS
    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, EXT_FILTER_CON0, 0xf, &rdata); //turn on IO filter function
    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, EXT_TOP_CKHWEN_CON0_SET, 0x80, &rdata); //turn on SPI slave DCM
    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, EXT_SMT_CON1, 0xf, &rdata); //turn on IO SMT function to improve noise immunity
#endif

    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, arb_en_backup); // Restore HIPRIO_ARB enable bitmap
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, wacs2_en_backup);
	
    return 0;
}

kal_uint32 DrvPWRAP_WriteTest(kal_uint32 pmic_no)
{  
    kal_uint32 arb_en_backup, wacs2_en_backup;
    kal_uint32 rdata;

    arb_en_backup = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_HIPRIO_ARB_EN);
    wacs2_en_backup = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_WACS2_EN);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, HARB_HPRIO_WACS2); // HIPRIO_ARB enable for each source. (Set WACS2 highest priority);only WACS2
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, 0x1);

    if(pmic_no == 0)
    {
        DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, DEW_WRITE_TEST, 0xa55a, &rdata);
        DrvPWRAP_WACS2_NoChk(PMIC_WRAP_READ, DEW_WRITE_TEST, 0, &rdata);
        if(rdata != 0xa55a)  {         
            return PMIC_WRAP_WRITE_TEST_FAIL;
        }
    }

#ifdef DUAL_PMICS
    if(pmic_no == 1)
    {
        DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, EXT_DEW_WRITE_TEST, 0xa55a, &rdata);
        DrvPWRAP_WACS2_NoChk(PMIC_WRAP_READ, EXT_DEW_WRITE_TEST, 0, &rdata);
        if(rdata != 0xa55a)  {
            return PMIC_WRAP_WRITE_TEST_FAIL;
        }
    }
#endif

    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, arb_en_backup);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, wacs2_en_backup);
  
    return 0;
}

//--------------------------------------------------------
//    Function : DrvPWRAP_InitStaUpd
// Description :
//   Parameter :
//      Return : 
//--------------------------------------------------------
void DrvPWRAP_InitStaUpd(void)
{ 
    int arb_en_backup, wacs2_en_backup;


    arb_en_backup = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_HIPRIO_ARB_EN);
    wacs2_en_backup = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_WACS2_EN);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, HARB_HPRIO_WACS2); // HIPRIO_ARB enable for each source. (Set WACS2 highest priority);only WACS2
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, 0x1);


    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STAUPD_GRPEN ,0x7f);

    //Signature
#ifndef DUAL_PMICS
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SIG_MODE  , 0x1);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SIG_ADR	 , DEW_CRC_VAL);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SIG_VALUE , 0x83);
#else
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SIG_MODE , 0x3);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SIG_ADR , (EXT_DEW_CRC_VAL << 16) | DEW_CRC_VAL);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SIG_VALUE , (0x83 << 16) | 0x83);
#endif

    //PMIC EINT
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_EINT_STA0_ADR, INT_STA);
#ifdef DUAL_PMICS
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_EINT_STA1_ADR, EXT_INT_STA);
#endif
    
    //MD ADC Interface
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR_LATEST, AUXADC_ADC32);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR_WP, AUXADC_MDBG_1);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR0,   AUXADC_BUF0);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR1,   AUXADC_BUF1);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR2,   AUXADC_BUF2);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR3,   AUXADC_BUF3);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR4,   AUXADC_BUF4);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR5,   AUXADC_BUF5);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR6,   AUXADC_BUF6);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR7,   AUXADC_BUF7);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR8,   AUXADC_BUF8);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR9,   AUXADC_BUF9);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR10,  AUXADC_BUF10);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR11,  AUXADC_BUF11);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR12,  AUXADC_BUF12);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR13,  AUXADC_BUF13);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR14,  AUXADC_BUF14);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR15,  AUXADC_BUF15);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR16,  AUXADC_BUF16);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR17,  AUXADC_BUF17);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR18,  AUXADC_BUF18);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR19,  AUXADC_BUF19);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR20,  AUXADC_BUF20);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR21,  AUXADC_BUF21);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR22,  AUXADC_BUF22);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR23,  AUXADC_BUF23);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR24,  AUXADC_BUF24);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR25,  AUXADC_BUF25);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR26,  AUXADC_BUF26);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR27,  AUXADC_BUF27);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR28,  AUXADC_BUF28);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR29,  AUXADC_BUF29);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR30,  AUXADC_BUF30);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MD_ADC_RDATA_ADDR31,  AUXADC_BUF31);

    //GPS Interface
#if defined(ELBRUS)
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_ADC_CMD_ADDR,   AUXADC_RQST1_SET);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_PWRAP_ADC_CMD,  0x0100);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_ADC_RDATA_ADDR, AUXADC_ADC16);
#endif
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, arb_en_backup);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, wacs2_en_backup);
	
}


//--------------------------------------------------------
//    Function : DrvPWRAP_InitStarv
// Description :
//   Parameter :
//      Return : 
//--------------------------------------------------------
void DrvPWRAP_InitStarv(void)
{
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HARB_HPRIO, 0x7);
   
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_0, 0x402); //[2.6 / 1.2] - 1 = 1
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_1, 0x402); //[2.6 / 1.2] - 1 = 1
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_2, 0x403); //[5.2 / 1.2] - 1 = 3
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_3, 0x40f); //[20 / 1.2] - 1 = 15
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_4, 0x420); //[40 / 1.2] - 1 = 32
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_5, 0x420); //[40 / 1.2] - 1 = 32
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_6, 0x420); //[40 / 1.2] - 1 = 32
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_7, 0x420); //[40 / 1.2] - 1 = 32
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_8, 0x428); //[50 / 1.2] - 1 = 40
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_9, 0x428); //[50 / 1.2] - 1 = 40
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_10, 0x417); //[29 / 1.2] - 1 = 23
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_11, 0x563); //[428 / 1.2] - 1 = 355
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_12, 0x47c); //[150 / 1.2] - 1 = 124
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_13, 0x740); //[1000 / 1.2] - 1 = 832
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STARV_COUNTER_14, 0x740); //[1000 / 1.2] - 1 = 832

}

//--------------------------------------------------------
//    Function : DrvPWRAP_Set_PWRAP_Enable()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
void DrvPWRAP_Set_PWRAP_Enable(void)
{
	PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, HARB_HPRIO_ALL); // HIPRIO_ARB enable for each source
   
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_EN, 0x01);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS1_EN, 0x01);
    //PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, 0x01);  // Already enabled
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS3_EN, 0x01);
 
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_STAUPD_CTRL, 0x05);  // Periodic status update timing (period) selection 100us
  
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WDT_UNIT, 0x0F); // Watch Dog timer unit selection. (5ms ~ 7.5ms)
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WDT_SRC_EN, 0xFFFFFFFF); // Watch dog timer source enable. (ALL)

    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_TIMER_EN, 0x01); // Timer clock enable.

    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_INT0_EN, 0xffffffff); // Interrupt enable for each source, except for [31] debug_int.
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_INT1_EN, 0xffffffff); // Interrupt enable for each source, except for [31] debug_int.
	
}

//--------------------------------------------------------
//    Function : DrvPWRAP_Set_PWRAP_Enable()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
void DrvPWRAP_Set_Init_Done(void)
{
	PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_INIT_DONE0, 0x01); // Initialization is finished.
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_INIT_DONE1, 0x01); // Initialization is finished.
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_INIT_DONE2, 0x01); // Initialization is finished.
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_INIT_DONE3, 0x01); // Initialization is finished.	// For C2K SW	
}

//--------------------------------------------------------
//    Function : DrvPWRAP_Init(void)
// Description : Initialize PMIC_WRAP, PPB, PMIC_DEWRAP
//   Parameter : None
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_Init(void)
{
    kal_uint32 sub_return;
    kal_uint32 rdata;

    // By Pass DrvPWRAP_INIT if Already Init Done
    rdata = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_WACS2_RDATA);
    
    if(GET_INIT_DONE0( rdata ) == WACS_INIT_DONE_FINISHED)
		return 0;

    //###############################
    // Toggle pmic_wrap and pwrap_spictl Resets
    //###############################
	DrvPWRAP_SW_RST1(0);
	
	
    //###############################
    // Switch GPIO to PWRAP mode => modes of PMIC_WRAP's IOs are PMIC_WRAP in default setting
    //###############################
    #ifdef PWRAP_PAD_INV
    GPIO_MUX(0x9b);
    #endif

	//###############################
    // Select 26MHz Clock as SPI Clock
	// Select ULPOSC/16 Clock as SYS, TMR and SPI Clocks in Suspend Mode
	// Turn On SYS, TMR and SPI Clock CGs
    //###############################
	DrvPWRAP_Spi_Clk_Set();
	
	
	//###############################
    // Enable DCM
    //###############################
	DrvPWRAP_Enable_DCM();

	
    //###############################
    // Reset SPISLV
    //###############################
    DrvPWRAP_ResetSPISLV();
	
	
	//###############################
    // Enable PMIC Wrapper
    //###############################
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WRAP_EN, 0x01); // Wrapper circuit is enable, and new request can be accepted once wrapper is available.
	
	
	//###############################
    // SPI Slave Configuration
    //###############################
    sub_return = DrvPWRAP_InitSPISLV();
    if(DrvPWRAP_InitSPISLV())  {
        ASSERT(0);       
        return PMIC_WRAP_INIT_INITSPISLV_FAIL;
    }
  

	//###############################
    // SPI Waveform Configuration
    //###############################
    //0: Safe Mode, 1: 18MHz 
	sub_return = DrvPWRAP_InitRegClk(PMIC_WRAP_REG_CLOCK_18MHZ); 
    if(sub_return != 0)  {
        ASSERT(0);       
        return PMIC_WRAP_INIT_REG_CLK_FAIL;
    }

    //###############################
    // Enable DIO mode
    //###############################
    sub_return = DrvPWRAP_InitDio(0x1); // Enable SPI dual I/O mode.
    if(sub_return != 0)  {        
		ASSERT(0);
        return PMIC_WRAP_INIT_DUAL_MODE_FAIL;
    }
	
   //###############################
    //  Input data calibration flow
    //###############################
    sub_return = DrvPWRAP_InitSiStrobe(1);
    if( sub_return != 0 )  {
        return PMIC_WRAP_INIT_SIDLY_FAIL;
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
#endif
	//###############################
    // Write Test using WACS2
    //###############################
    sub_return = DrvPWRAP_WriteTest(0);
    if(sub_return != 0)
    {
        return PMIC_WRAP_WRITE_TEST_FAIL;
    }
#ifdef DUAL_PMICS
    sub_return = DrvPWRAP_WriteTest(1);
    if(sub_return != 0)
    {        
        return PMIC_WRAP_WRITE_TEST_FAIL;
    }
#endif
	
	//###############################
    // Status Update Function Initialization
    //###############################
    DrvPWRAP_InitStaUpd();

    //###############################
    // Starvation Setting
    //###############################
    DrvPWRAP_InitStarv();

    //###############################
    // PMIC_WRAP enables
    //###############################
	DrvPWRAP_Set_PWRAP_Enable();
    

	//###############################
    // Backward Compatible Settings
    //###############################
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_BWC_OPTIONS, (PMIC_WRAP_DRV_Reg32(PMIC_WRAP_BWC_OPTIONS)| 0x8)); 

	
    //###############################
    // Initialization Done
    //###############################
    DrvPWRAP_Set_Init_Done();
 
 
#if defined(FPGA_CTP)    
	{
	    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, DEW_WRITE_TEST, DEW_WRITE_TEST_VALUE, &rdata); // Write Test
	    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_READ, DEW_WRITE_TEST, 0x00, &rdata);
	    if(rdata != DEW_WRITE_TEST_VALUE)  {
	        // ASSERT(0);        
	        dbg_print("[PMIC_WRAP_MD] Write Test Fail\n");        
	    }
     	else
        {
            dbg_print("[PMIC_WRAP_MD] Write Test Pass\n");   
        }	    		
	}
   
    {
        kal_uint32 Address;
        kal_uint32 Write_Data;
        DCL_HANDLE handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
        PMU_CTRL_MISC_SET_REGISTER_VALUE SetVal;
        PMU_CTRL_MISC_GET_REGISTER_VALUE GetVal;
        DclPMU_Initialize();
        SetVal.offset = DEW_WRITE_TEST;
        GetVal.offset = DEW_WRITE_TEST;
        SetVal.value = 0xa55a;
        DclPMU_Control(handle, MISC_SET_REGISTER_VALUE, (DCL_CTRL_DATA_T *)&SetVal);
        DclPMU_Control(handle, MISC_GET_REGISTER_VALUE, (DCL_CTRL_DATA_T *)&GetVal);
        if(0xa55a == GetVal.value)
        {
            dbg_print("[PMIC_WRAP_MD] dcl interface [R/W] Pass, rdata=%x\n", GetVal.value);
        }
        else
        {
            dbg_print("[PMIC_WRAP_MD] dcl interface [R/W] Fail, rdata=%x\n", GetVal.value);        
        }
        
    }
#endif // End of #if defined(FPGA_CTP)  

    return 0;
}


//--------------------------------------------------------
//    Function : DrvPWRAP_WACS2_NoChk()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_WACS2_NoChk(kal_uint32 write, kal_uint32 adr, kal_uint32 wdata, kal_uint32 *rdata) // No check INIT DONE, for INIT usage
{
    kal_uint32 reg_rdata;
    kal_uint32 wacs_write;
    kal_uint32 wacs_adr;
    kal_uint32 return_value;
#if defined(DCL_PMIC_MULTIPLE_LOG)
	kal_uint32 type = PMIC_LOG_TYPE_NORMAL_DOMAIN;

	pmic_wrap_log[type].current_action = write;
    pmic_wrap_log[type].current_channel = PMIC_WRAP_WACS2;
#else
    pmic_wrap_log.current_action = write;
    pmic_wrap_log.current_channel = PMIC_WRAP_WACS2;
#endif

    // Check argument validation
    if((write & ~(0x1))    != 0)  return PMIC_WRAP_INVALID_RW; // Write should be 1 bit
    if((adr   & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_ADDR; // Address should no larger than 0xFFFF
    if((wdata & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_WDATA; // Write DATA should be no larger than 0xFFFF
    if(NULL == rdata) return PMIC_WRAP_INVALID_ARGUMENT;
    
    // Argument process
    wacs_write  = write << 31;
    wacs_adr    = (adr >> 1) << 16; // Wrapper Access: address[15:1]

    // Check IDLE & INIT_DONE in advance
    return_value = wait_for_state_ready_init(wait_for_wacs_fsm_idle, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS2_RDATA, 0);
    if(return_value != 0)
    {
        ASSERT(0);
        return return_value;
    }

    // Send Command
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_CMD, wacs_write | wacs_adr | wdata);
    if(write == PMIC_WRAP_READ) // Read
    {
        return_value = wait_for_state_ready_init(wait_for_wacs_fsm_wfvldclr, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS2_RDATA, &reg_rdata);
        if(return_value != 0)
        {
            ASSERT(0);            
            return return_value;
        }
        
        *rdata = GET_WACS2_RDATA(reg_rdata); // Read Data
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_VLDCLR, 0x01); // Write 1 to clear valid flag.
    }

    return 0;
}

#if defined(DCL_PMIC_MULTIPLE_LOG)
//--------------------------------------------------------
//    Function : DrvPWRAP_WACS0()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_WACS0(kal_uint32 write, kal_uint32 adr, kal_uint32 wdata, kal_uint16 *rdata)
{
    kal_uint32 reg_rdata;
    kal_uint32 wacs_write;
    kal_uint32 wacs_adr;
    kal_uint32 return_value;
	kal_uint32 type = PMIC_LOG_TYPE_HRT_DOMAIN;
	kal_uint32 idx = pmic_access_duration_index[PMIC_LOG_TYPE_HRT_DOMAIN];

    pmic_wrap_log[type].current_action = write;
    pmic_wrap_log[type].current_channel = PMIC_WRAP_WACS0;

    // Check argument validation
    if((write & ~(0x1))    != 0)  return PMIC_WRAP_INVALID_RW; // Write should be 1 bit
    if((adr   & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_ADDR; // Address should no larger than 0xFFFF
    if((wdata & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_WDATA; // Write DATA should be no larger than 0xFFFF
    
    // Argument process
    wacs_write  = write << 31;
    wacs_adr    = (adr >> 1) << 16;
    
    // Check IDLE & INIT_DONE in advance
    return_value = wait_for_state_idle_wrap(wait_for_wacs_fsm_idle, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS0_RDATA, 0, PMIC_LOG_TYPE_HRT_DOMAIN);
    if(return_value != 0)
    {
        ASSERT(0);
        return return_value;
    }    

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE0_DBG][idx].start_time = ust_get_current_time();
#endif

    // Send Command
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_CMD, wacs_write | wacs_adr | wdata);

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE0_DBG][idx].end_time = ust_get_current_time();
	pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE0_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE0_DBG][idx].start_time, pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE0_DBG][idx].end_time);      
#endif

    if(write == PMIC_WRAP_READ) // Read
    {
        return_value = wait_for_state_ready_wrap(wait_for_wacs_fsm_wfvldclr, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS0_RDATA, &reg_rdata, PMIC_LOG_TYPE_HRT_DOMAIN);
        if(return_value != 0)
        {
            ASSERT(0);
            return return_value;
        }
        
        *rdata = (kal_uint16)GET_WACS0_RDATA(reg_rdata); // Read Data
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
        pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE1_DBG][idx].start_time = ust_get_current_time();
#endif        
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_VLDCLR, 0x01); // Write 1 to clear valid flag.
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
        pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE1_DBG][idx].end_time = ust_get_current_time();
        pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE1_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE1_DBG][idx].start_time,pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE1_DBG][idx].end_time);
																											              
#endif  
    }

    return 0;
}

//--------------------------------------------------------
//    Function : DrvPWRAP_WACS1()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_WACS1(kal_uint32 write, kal_uint32 adr, kal_uint32 wdata, kal_uint16 *rdata)
{
    kal_uint32 reg_rdata;
    kal_uint32 wacs_write;
    kal_uint32 wacs_adr;
    kal_uint32 return_value;
	kal_uint32 type = PMIC_LOG_TYPE_NORMAL_DOMAIN;
	kal_uint32 idx = pmic_access_duration_index[PMIC_LOG_TYPE_NORMAL_DOMAIN];

    pmic_wrap_log[type].current_action = write;
    pmic_wrap_log[type].current_channel = PMIC_WRAP_WACS1;

    // Check argument validation
    if((write & ~(0x1))    != 0)  return PMIC_WRAP_INVALID_RW; // Write should be 1 bit
    if((adr   & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_ADDR; // Address should no larger than 0xFFFF
    if((wdata & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_WDATA; // Write DATA should be no larger than 0xFFFF

    // Argument process
    wacs_write  = write << 31;
    wacs_adr    = (adr >> 1) << 16;
    pmic_wrap_log[type].current_spi_command = wacs_write | wacs_adr | wdata;
    // Check IDLE & INIT_DONE in advance   
    return_value = wait_for_state_idle_wrap(wait_for_wacs_fsm_idle, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS1_RDATA, 0, PMIC_LOG_TYPE_NORMAL_DOMAIN);
    if(return_value != 0)
    {
        ASSERT(0);
        return return_value;
    }    
    
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_WRAPPER_WACS1_WRITE0_DBG][idx].start_time = ust_get_current_time();
#endif

    // Send Command
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS1_CMD, wacs_write | wacs_adr | wdata);

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_WRAPPER_WACS1_WRITE0_DBG][idx].end_time = ust_get_current_time();
    pmic_access_duration_log[type][PMIC_WRAPPER_WACS1_WRITE0_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_WRAPPER_WACS1_WRITE0_DBG][idx].start_time, pmic_access_duration_log[type][PMIC_WRAPPER_WACS1_WRITE0_DBG][idx].end_time);          
         
#endif

    if(write == PMIC_WRAP_READ) // Read
    {
        return_value = wait_for_state_ready_wrap(wait_for_wacs_fsm_wfvldclr, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS1_RDATA, &reg_rdata, PMIC_LOG_TYPE_NORMAL_DOMAIN);
        if(return_value != 0)
        {
            ASSERT(0);
            return return_value;
        }          

        *rdata = (kal_uint16)GET_WACS1_RDATA(reg_rdata); // Read Data
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
        pmic_access_duration_log[type][PMIC_WRAPPER_WACS1_WRITE1_DBG][idx].start_time = ust_get_current_time();
#endif        
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS1_VLDCLR, 0x01); // Write 1 to clear valid flag.
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
        pmic_access_duration_log[type][PMIC_WRAPPER_WACS1_WRITE1_DBG][idx].end_time = ust_get_current_time();
        pmic_access_duration_log[type][PMIC_WRAPPER_WACS1_WRITE1_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_WRAPPER_WACS1_WRITE1_DBG][idx].start_time, pmic_access_duration_log[type][PMIC_WRAPPER_WACS1_WRITE1_DBG][idx].end_time);            
#endif        
    }    
    
    return 0;
}
	
#else
//--------------------------------------------------------
//    Function : DrvPWRAP_WACS0()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
//kal_uint32 DrvPWRAP_WACS0(kal_uint32 write, kal_uint32 adr, kal_uint32 wdata, kal_uint32 *rdata)
kal_uint32 DrvPWRAP_WACS0(kal_uint32 write, kal_uint32 adr, kal_uint32 wdata, kal_uint16 *rdata)
{
    kal_uint32 reg_rdata;
    kal_uint32 wacs_write;
    kal_uint32 wacs_adr;
    kal_uint32 return_value;

    pmic_wrap_log.current_action = write;
    pmic_wrap_log.current_channel = PMIC_WRAP_WACS0;

    // Check argument validation
    if((write & ~(0x1))    != 0)  return PMIC_WRAP_INVALID_RW; // Write should be 1 bit
    if((adr   & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_ADDR; // Address should no larger than 0xFFFF
    if((wdata & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_WDATA; // Write DATA should be no larger than 0xFFFF
    
    // Argument process
    wacs_write  = write << 31;
    wacs_adr    = (adr >> 1) << 16;
    
    // Check IDLE & INIT_DONE in advance
    return_value = wait_for_state_idle(wait_for_wacs_fsm_idle, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS0_RDATA, 0);
    if(return_value != 0)
    {
        ASSERT(0);
        return return_value;
    }    

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[PMIC_WRAPPER_WACS0_WRITE0_DBG][pmic_access_duration_index].start_time = ust_get_current_time();
#endif

    // Send Command
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_CMD, wacs_write | wacs_adr | wdata);

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[PMIC_WRAPPER_WACS0_WRITE0_DBG][pmic_access_duration_index].end_time = ust_get_current_time();
    pmic_access_duration_log[PMIC_WRAPPER_WACS0_WRITE0_DBG][pmic_access_duration_index].duration_time = \
        ust_get_duration(pmic_access_duration_log[PMIC_WRAPPER_WACS0_WRITE0_DBG][pmic_access_duration_index].start_time, pmic_access_duration_log[PMIC_WRAPPER_WACS0_WRITE0_DBG][pmic_access_duration_index].end_time);            
#endif

    if(write == PMIC_WRAP_READ) // Read
    {
        return_value = wait_for_state_ready(wait_for_wacs_fsm_wfvldclr, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS0_RDATA, &reg_rdata);
        if(return_value != 0)
        {
            ASSERT(0);
            return return_value;
        }
        
        *rdata = (kal_uint16)GET_WACS0_RDATA(reg_rdata); // Read Data
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
        pmic_access_duration_log[PMIC_WRAPPER_WACS0_WRITE1_DBG][pmic_access_duration_index].start_time = ust_get_current_time();
#endif        
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_VLDCLR, 0x01); // Write 1 to clear valid flag.
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
        pmic_access_duration_log[PMIC_WRAPPER_WACS0_WRITE1_DBG][pmic_access_duration_index].end_time = ust_get_current_time();
        pmic_access_duration_log[PMIC_WRAPPER_WACS0_WRITE1_DBG][pmic_access_duration_index].duration_time = \
            ust_get_duration(pmic_access_duration_log[PMIC_WRAPPER_WACS0_WRITE1_DBG][pmic_access_duration_index].start_time, pmic_access_duration_log[PMIC_WRAPPER_WACS0_WRITE1_DBG][pmic_access_duration_index].end_time);            
#endif
        
    }

    return 0;
}


//--------------------------------------------------------
//    Function : DrvPWRAP_WACS1()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_WACS1(kal_uint32 write, kal_uint32 adr, kal_uint32 wdata, kal_uint16 *rdata)
{
    kal_uint32 reg_rdata;
    kal_uint32 wacs_write;
    kal_uint32 wacs_adr;
    kal_uint32 return_value;

    pmic_wrap_log.current_action = write;
    pmic_wrap_log.current_channel = PMIC_WRAP_WACS1;

    // Check argument validation
    if((write & ~(0x1))    != 0)  return PMIC_WRAP_INVALID_RW; // Write should be 1 bit
    if((adr   & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_ADDR; // Address should no larger than 0xFFFF
    if((wdata & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_WDATA; // Write DATA should be no larger than 0xFFFF

    // Argument process
    wacs_write  = write << 31;
    wacs_adr    = (adr >> 1) << 16;
    pmic_wrap_log.current_spi_command = wacs_write | wacs_adr | wdata;
    // Check IDLE & INIT_DONE in advance   
    return_value = wait_for_state_idle(wait_for_wacs_fsm_idle, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS1_RDATA, 0);
    if(return_value != 0)
    {
        ASSERT(0);
        return return_value;
    }    
    
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[PMIC_WRAPPER_WACS1_WRITE0_DBG][pmic_access_duration_index].start_time = ust_get_current_time();
#endif

    // Send Command
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS1_CMD, wacs_write | wacs_adr | wdata);

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[PMIC_WRAPPER_WACS1_WRITE0_DBG][pmic_access_duration_index].end_time = ust_get_current_time();
    pmic_access_duration_log[PMIC_WRAPPER_WACS1_WRITE0_DBG][pmic_access_duration_index].duration_time = \
        ust_get_duration(pmic_access_duration_log[PMIC_WRAPPER_WACS1_WRITE0_DBG][pmic_access_duration_index].start_time, pmic_access_duration_log[PMIC_WRAPPER_WACS1_WRITE0_DBG][pmic_access_duration_index].end_time);            
#endif

    if(write == PMIC_WRAP_READ) // Read
    {
        return_value = wait_for_state_ready(wait_for_wacs_fsm_wfvldclr, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS1_RDATA, &reg_rdata);
        if(return_value != 0)
        {
            ASSERT(0);
            return return_value;
        }          

        *rdata = (kal_uint16)GET_WACS1_RDATA(reg_rdata); // Read Data
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
        pmic_access_duration_log[PMIC_WRAPPER_WACS1_WRITE1_DBG][pmic_access_duration_index].start_time = ust_get_current_time();
#endif        
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS1_VLDCLR, 0x01); // Write 1 to clear valid flag.
#if defined(DCL_PMIC_ACCESS_TIME_LOG)
        pmic_access_duration_log[PMIC_WRAPPER_WACS1_WRITE1_DBG][pmic_access_duration_index].end_time = ust_get_current_time();
        pmic_access_duration_log[PMIC_WRAPPER_WACS1_WRITE1_DBG][pmic_access_duration_index].duration_time = \
            ust_get_duration(pmic_access_duration_log[PMIC_WRAPPER_WACS1_WRITE1_DBG][pmic_access_duration_index].start_time, pmic_access_duration_log[PMIC_WRAPPER_WACS1_WRITE1_DBG][pmic_access_duration_index].end_time);            
#endif        
    }    
    
    return 0;
}
#endif
//--------------------------------------------------------
//    Function : DrvPWRAP_WACS2()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_WACS2(kal_uint32 write, kal_uint32 adr, kal_uint32 wdata, kal_uint32 *rdata)
{
    kal_uint32 reg_rdata;
    kal_uint32 wacs_write;
    kal_uint32 wacs_adr;
    kal_uint32 return_value;
    kal_uint32 savedMask = 0;
#if defined(DCL_PMIC_MULTIPLE_LOG)
	kal_uint32 type = PMIC_LOG_TYPE_NORMAL_DOMAIN;

	pmic_wrap_log[type].current_action = write;
    pmic_wrap_log[type].current_channel = PMIC_WRAP_WACS2;
#else
    pmic_wrap_log.current_action = write;
    pmic_wrap_log.current_channel = PMIC_WRAP_WACS2;
#endif
        
    // Check argument validation
    if((write & ~(0x1))    != 0)  return PMIC_WRAP_INVALID_RW; // Write should be 1 bit
    if((adr   & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_ADDR; // Address should no larger than 0xFFFF
    if((wdata & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_WDATA; // Write DATA should be no larger than 0xFFFF

#if !defined(__UBL__) && !defined(__FUE__)
	savedMask = SaveAndSetIRQMask();
#endif //#if !defined(__UBL__) && !defined(__FUE__)

    // Argument process
    wacs_write  = write << 31;
    wacs_adr    = (adr >> 1) << 16;
    
    // Check IDLE & INIT_DONE in advance
    return_value = wait_for_state_ready_wrap(wait_for_wacs_fsm_idle, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS2_RDATA, 0 , PMIC_LOG_TYPE_NORMAL_DOMAIN);
    if(return_value != 0)
    {
        ASSERT(0);
        // GuoXin Add
        #if !defined(__UBL__) && !defined(__FUE__)	
        RestoreIRQMask(savedMask);
        #endif //#if !defined(__UBL__) && !defined(__FUE__)	
        return return_value;
    }        

    // Send Command
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_CMD, wacs_write | wacs_adr | wdata);
    if(write == PMIC_WRAP_READ) // Read
    {
        return_value = wait_for_state_ready_wrap(wait_for_wacs_fsm_wfvldclr, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS2_RDATA, &reg_rdata, PMIC_LOG_TYPE_NORMAL_DOMAIN);
        if(return_value != 0)
        {
            ASSERT(0);
            // GuoXin Add
            #if !defined(__UBL__) && !defined(__FUE__)	
            RestoreIRQMask(savedMask);
            #endif //#if !defined(__UBL__) && !defined(__FUE__)	
            return return_value;
        }          

        *rdata = GET_WACS2_RDATA(reg_rdata); // Read Data
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_VLDCLR, 0x01); // Write 1 to clear valid flag.
    }    

#if !defined(__UBL__) && !defined(__FUE__)	
    RestoreIRQMask(savedMask);
#endif //#if !defined(__UBL__) && !defined(__FUE__)		

    return 0; 
}

#if defined(DRV_PMIC_WRAP_V1)
//--------------------------------------------------------
//    Function : DrvPWRAP_WACS3()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_WACS3(kal_uint32 write, kal_uint32 adr, kal_uint32 wdata, kal_uint32 *rdata)
{
    kal_uint32 reg_rdata;
    kal_uint32 wacs_write;
    kal_uint32 wacs_adr;
    kal_uint32 return_value;

    pmic_wrap_log.current_action = write;
    pmic_wrap_log.current_channel = PMIC_WRAP_WACS3;

    // Check argument validation
    if((write & ~(0x1))    != 0)  return PMIC_WRAP_INVALID_RW; // Write should be 1 bit
    if((adr   & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_ADDR; // Address should no larger than 0xFFFF
    if((wdata & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_WDATA; // Write DATA should be no larger than 0xFFFF
    
    // Argument process
    wacs_write  = write << 31;
    wacs_adr    = (adr >> 1) << 16;
    
    // Check IDLE & INIT_DONE in advance
    return_value = wait_for_state_ready(wait_for_wacs_fsm_idle, PMIC_WRAP_TIMEOUT, PERI_PWRAP_BRIDGE_WACS3_RDATA, 0);
    if(return_value != 0)
    {
        ASSERT(0);
        return return_value;
    }  

    // Send Command
    PMIC_WRAP_DRV_WriteReg32(PERI_PWRAP_BRIDGE_WACS3_CMD, wacs_write | wacs_adr | wdata);
    if(write == PMIC_WRAP_READ) // Read
    {
        return_value = wait_for_state_ready(wait_for_wacs_fsm_wfvldclr, PMIC_WRAP_TIMEOUT, PERI_PWRAP_BRIDGE_WACS3_RDATA, &reg_rdata);
        if(return_value != 0)
        {
            ASSERT(0);            
            return return_value;
        }

        *rdata = GET_WACS3_RDATA(reg_rdata); // Read Data
        PMIC_WRAP_DRV_WriteReg32(PERI_PWRAP_BRIDGE_WACS3_VLDCLR, 0x01); // Write 1 to clear valid flag.
    }    
    
    return 0; 
}
#endif // End of #if defined(DRV_PMIC_WRAP_V1)

//--------------------------------------------------------
//    Function : DrvPWRAP_InitDio()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_InitDio(kal_uint32 dio_en)
{
    kal_uint32 arb_en_backup,wacs2_en_backup;
    kal_uint32 rdata;
    kal_uint32 return_value;

    arb_en_backup = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_HIPRIO_ARB_EN); // Backup HIPRIO_ARB enable bitmap
    wacs2_en_backup = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_WACS2_EN);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, HARB_HPRIO_WACS2); // HIPRIO_ARB enable for each source. (Set WACS2 highest priority);only WACS2
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, 0x1);

	
	DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, DEW_DIO_EN, dio_en, &rdata); // Enable dual I/O mode for SPI slave.
#ifdef DUAL_PMICS    
    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, EXT_DEW_DIO_EN, dio_en, &rdata); 
#endif
	

    return_value = wait_for_state_ready_init(wait_for_wacs_fsm_idle_and_sync_idle, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS2_RDATA, 0);
    if(return_value != 0)
    {
        ASSERT(0);
        return return_value;
    }  
	
#ifndef DUAL_PMICS
     PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_DIO_EN, dio_en); // Eable / Disable SPI dual I/O mode
#else
     PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_DIO_EN, 0x3); 
#endif

    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, arb_en_backup); // Restore HIPRIO_ARB enable bitmap
	PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, wacs2_en_backup);
   
    return 0;
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
#ifdef DUAL_PMICS
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
#ifdef DUAL_PMICS  
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
#ifdef DUAL_PMICS
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
#ifdef DUAL_PMICS
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
#ifdef DUAL_PMICS    
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
#ifdef DUAL_PMICS
/* under construction !*/
#endif
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
#ifdef DUAL_PMICS
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
#ifdef DUAL_PMICS
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
#ifdef DUAL_PMICS    
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
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
#ifdef DUAL_PMICS
/* under construction !*/
/* under construction !*/
#endif
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
#ifdef DUAL_PMICS    
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

//--------------------------------------------------------
//    Function : DrvPWRAP_InitSiStrobe()
// Description : Initialize SI_CK_CON and SIDLY
//   Parameter : 
//      Return : 
//--------------------------------------------------------
#ifndef SPEED_UP_PWRAP_INIT
	#define SI_EN_SEL    3
	#define SI_CK_SEL	 2
	#define	SI_DLY_START 63
	#define	IND_START	 0
	#define	IND_MAX		 384
#else
	#define SI_EN_SEL    1
	#define SI_CK_SEL    1
	#define	SI_DLY_START 0
	#define	IND_START	 31
	#define	IND_MAX		 32//6
#endif

kal_uint32 DrvPWRAP_InitSiStrobe(int dual_si_sample_settings)
{
    kal_uint32 arb_en_backup, wacs2_en_backup;
    kal_uint32 rdata;
    kal_uint32 si_en_sel, si_ck_sel, si_dly, si_sample_ctrl;
#ifdef OLD_SI_CALI_ALGO	
	kal_uint32 reserved, ind;
    char result[384];
    char result_faulty = 0;
    char found_head, found_tail, leading_one, tailing_one;
#endif
    char found;
	int test_data[30] = {0x6996,0x9669,0x6996,0x9669,0x6996,0x9669,0x6996,0x9669,0x6996,0x9669,
                         0x5AA5,0xA55A,0x5AA5,0xA55A,0x5AA5,0xA55A,0x5AA5,0xA55A,0x5AA5,0xA55A,
                         0x1B27,0x1B27,0x1B27,0x1B27,0x1B27,0x1B27,0x1B27,0x1B27,0x1B27,0x1B27};
    int i = 0, error = 0;

    arb_en_backup = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_HIPRIO_ARB_EN);
    wacs2_en_backup = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_WACS2_EN);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, HARB_HPRIO_WACS2); // HIPRIO_ARB enable for each source. (Set WACS2 highest priority);only WACS2
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, 0x1);

#ifdef OLD_SI_CALI_ALGO
	for(si_en_sel = 0; si_en_sel < SI_EN_SEL; si_en_sel++)
		for(si_ck_sel = 0; si_ck_sel < SI_CK_SEL; si_ck_sel++)
			for(si_dly = SI_DLY_START; si_dly >= 0; si_dly--)
			{  
				si_sample_ctrl = (si_en_sel << 3) | (si_ck_sel << 2);
				reserved = si_dly;
				PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SI_SAMPLE_CTRL, si_sample_ctrl);
				PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_RESERVED, reserved);
	        
				ind = (si_sample_ctrl << 4) | (0x3f - reserved);
				//DrvPWRAP_WACS2_NoChk(0, EXT_DEW_READ_TEST, 0, &rdata);
                //if(rdata == 0x5aa5)          
                //    result[ind] = 1;
                //else   
                //    result[ind] = 0;
				error = 0;
				for(i = 0; i < 30; i++)
                {
                    DrvPWRAP_WACS2_NoChk(1, DEW_WRITE_TEST, test_data[i], &rdata);
                    DrvPWRAP_WACS2_NoChk(0, DEW_WRITE_TEST, 0, &rdata);
                    if(rdata != test_data[i])
                    {                      
                        error = 1;
                        break;
                    }
                }				
				if(error == 0)
					result[ind] = 1;					
				else		
					result[ind] = 0;					
			}
			
	found_head = 0;
	found_tail = 0;

	for(ind = IND_START; ind < IND_MAX; ind++)
    {
        if(result[ind] == 1)
        {
            leading_one = ind;
            if(found_tail == 0)
            {
                tailing_one = ind;
                found_tail = 1;
            }
            if(found_head == 1)
            {
                result_faulty = 0x1;           
            }
        }
        else 
        {
            if(found_tail == 1)
                found_head = 1;
        }
    }

	if(found_tail == 0)
		result_faulty |= 0x2;
      
    //---------------------------------------------------------------------
    // Config SICK and SIDLY to the middle point of pass range
    //---------------------------------------------------------------------
    ind = (leading_one + tailing_one) / 2;
    si_sample_ctrl = (ind & 0x1c0) >> 4;
    reserved = 0x3f - (ind & 0x3f);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SI_SAMPLE_CTRL, si_sample_ctrl);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_RESERVED, reserved);
   
	#ifdef DUAL_PMICS
    if(dual_si_sample_settings == 1)
    {
        si_sample_ctrl = si_sample_ctrl | 0x400;
       
        //---------------------------------------------------------------------
        // Scan all possible input strobes
        //---------------------------------------------------------------------    
        for(si_en_sel = 0; si_en_sel < SI_EN_SEL; si_en_sel++)
            for(si_ck_sel = 0; si_ck_sel < SI_CK_SEL; si_ck_sel++)
                for(si_dly = SI_DLY_START; si_dly >= 0; si_dly--)     
                {                    
                    si_sample_ctrl = (si_sample_ctrl & 0xfffffc1f) | (((si_en_sel << 3) | (si_ck_sel << 2)) << 5);
                    reserved = (reserved & 0xfffff03f) | (si_dly << 6);
                    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SI_SAMPLE_CTRL, si_sample_ctrl);
					PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_RESERVED, reserved);
                    ind = ((si_sample_ctrl & 0x380) >> 1) | (0x3f - ((reserved & 0xfc0) >> 6));
                    //DrvPWRAP_WACS2_NoChk(0, EXT_DEW_READ_TEST, 0, &rdata);
                    //if(rdata == 0x5aa5)          
                    //    result[ind] = 1;
                    //else   
                    //    result[ind] = 0;
					
					error = 0;
                    for(i = 0; i < 30; i++)
                    {
                        DrvPWRAP_WACS2_NoChk(1, EXT_DEW_WRITE_TEST, test_data[i], &rdata);
                        DrvPWRAP_WACS2_NoChk(0, EXT_DEW_WRITE_TEST, 0, &rdata);
                        if(rdata != test_data[i])
                        {                            
                            error = 1;
                            break;
                        }
                    }
                    if(error == 0)
                        result[ind] = 1;
                    else   
                        result[ind] = 0;
                }

        found_head = 0;
        found_tail = 0;

        for(ind = IND_START; ind < IND_MAX; ind++)        
        {
            if(result[ind] == 1)
            {
                leading_one = ind;
                if(found_tail == 0)
                {
                    tailing_one = ind;
                    found_tail = 1;
                }
                if(found_head == 1)
                {
                    result_faulty |= 0x4;                 
                }
            }
            else 
            {
                if(found_tail == 1)
                    found_head = 1;
            }
        }

		if(found_tail == 0)
			result_faulty |= 0x8;
           
        //---------------------------------------------------------------------
        // Config SICK and SIDLY to the middle point of pass range
        //---------------------------------------------------------------------
        ind = (leading_one + tailing_one) / 2;
   
        si_sample_ctrl = (si_sample_ctrl & 0xfffffc1f) | ((ind & 0x1c0) << 1);
        reserved = (reserved & 0xfffff03f) | ((0x3f - (ind & 0x3f)) << 6);
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SI_SAMPLE_CTRL, si_sample_ctrl);
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_RESERVED, reserved);
     
    }

    if(result_faulty != 0)
        return result_faulty;
    #endif
#else	//!OLD_SI_CALI_ALGO
    
    found = 0;
    for(si_en_sel = 0; si_en_sel < 3; si_en_sel++)
    {
        for(si_ck_sel = 0; si_ck_sel < 2; si_ck_sel++)
        {
            si_sample_ctrl = (si_en_sel << 3) | (si_ck_sel << 2);
            PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SI_SAMPLE_CTRL, si_sample_ctrl);
            
			DrvPWRAP_WACS2_NoChk(0, DEW_READ_TEST, 0, &rdata);
            if(rdata == 0x5aa5)
            {
                found = 1;
                break;
            }
        }
        if(found == 1)
            break;
    }
   
    for(si_dly = 0; si_dly < 8; si_dly++)
    {      
        DrvPWRAP_WACS2_NoChk(1, RG_SPI_CON2, si_dly, &rdata);

        //DrvPWRAP_WACS2_NoChk(0, DEW_READ_TEST, 0, &rdata);
		////Due to the large input to output turnaround time of PMIC IOs, the first bit of data is output more slower, and therefore the valid window is narrower. For this reason, ignore the first bit of data.
        //if((rdata & 0x7fff) != 0x5aa5) 
        //    break;
       
		error = 0;
        for(i = 0; i < 30; i++)
        {
            DrvPWRAP_WACS2_NoChk(1, DEW_WRITE_TEST, test_data[i], &rdata);
            DrvPWRAP_WACS2_NoChk(0, DEW_WRITE_TEST, 0, &rdata);
            if((rdata & 0x7fff) != (test_data[i] & 0x7fff))
            {
                error = 1;
                break;
            }
        }
        if(error == 1)
            break;
    }

    si_sample_ctrl = (((si_en_sel << 1) | si_ck_sel) + 1) << 2;
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SI_SAMPLE_CTRL, si_sample_ctrl);
    
	if(si_dly == 8)
        si_dly--;
    
    #ifdef DUAL_PMICS
    if(dual_si_sample_settings == 1)
    {
        si_sample_ctrl = si_sample_ctrl | 0x400;
 
        found = 0;
        for(si_en_sel = 0; si_en_sel < 3; si_en_sel++)
        {
            for(si_ck_sel = 0; si_ck_sel < 2; si_ck_sel++)
            {
                si_sample_ctrl = (si_sample_ctrl & 0xfffffc1f) | (((si_en_sel << 3) | (si_ck_sel << 2)) << 5);             
				PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SI_SAMPLE_CTRL, si_sample_ctrl);

                DrvPWRAP_WACS2_NoChk(0, DEW_READ_TEST, 0, &rdata);
                if(rdata == 0x5aa5)
                {               
                    found = 1;
                    break;
                }               
            }
            if(found == 1)
                break;
        }

     
        for(si_dly = 0; si_dly < 8; si_dly++)
        {          
            DrvPWRAP_WACS2_NoChk(1, EXT_RG_SPI_CON2, si_dly, &rdata);

            //DrvPWRAP_WACS2_NoChk(0, EXT_DEW_READ_TEST, 0, &rdata);
			//Due to the large input to output turnaround time of PMIC IOs, the first bit of data is output more slower, and therefore the valid window is narrower. For this reason, ignore the first bit of data.
            //if((rdata & 0x7fff) != 0x5aa5)
			//	break;
			
			error = 0;
            for(i = 0; i < 30; i++)
            {
                DrvPWRAP_WACS2_NoChk(1, EXT_DEW_WRITE_TEST, test_data[i], &rdata);
                DrvPWRAP_WACS2_NoChk(0, EXT_DEW_WRITE_TEST, 0, &rdata);
                if((rdata & 0x7fff) != (test_data[i] & 0x7fff))
                {
                    error = 1;
                    break;
                }
            }
			
            if(error == 1)
				break; 
        }

        si_sample_ctrl = (si_sample_ctrl & 0xfffffc1f) | ((((si_en_sel << 1) | si_ck_sel) + 1) << 7);
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_SI_SAMPLE_CTRL, si_sample_ctrl);
         
		if(si_dly == 8)
			si_dly--;         
    }
    #endif
#endif	//OLD_SI_CALI_ALGO
        
    // Read Test
    DrvPWRAP_WACS2_NoChk(0, DEW_READ_TEST, 0, &rdata);
    if(rdata != 0x5aa5)
    {
        
        return 0x10;
    }
    #ifdef DUAL_PMICS
    DrvPWRAP_WACS2_NoChk(0, EXT_DEW_READ_TEST, 0, &rdata);
    if(rdata != 0x5aa5)
    {
       
        return 0x11;
    }
    #endif
    
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, arb_en_backup);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, wacs2_en_backup);
    
    return 0;
}



//--------------------------------------------------------
//    Function : DrvPWRAP_ResetSPISLV()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
void DrvPWRAP_ResetSPISLV(void) // Reset SPI Slave
{
    kal_uint32 return_value;

    // This driver does not using DrvPWRAP_SwitchMux
    // because the remaining requests are expected to fail anyway
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, 0x00); // HIPRIO_ARB disable for each source.
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WRAP_EN, 0x00); // Wrapper circuit is disabled, but the current transcation will be finished.
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MUX_SEL, 0x01); // SPI is controlled in manual mode.
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MAN_EN, 0x01); // Manual mode circuit is enable.
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_DIO_EN, 0x00); // SPI dual I/O mode is disable.

    /* SPI Reset Pattern */
    // Pull CS to low, CS will keep low  for at least (1.5+WDATA[3:0])TSPI_CK before next OP command is executed.
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MAN_CMD, (OP_WR << 13) | (OP_CSL  << 8)); // Write OP_CSL, 
    // Output 1 byte in single mode
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MAN_CMD, (OP_WR << 13) | (OP_OUTS << 8)); // Write OP_OUTS to reset counter
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MAN_CMD, (OP_WR << 13) | (OP_CSH  << 8)); // Write OP_CSH
    // Output 1 byte in single mode
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MAN_CMD, (OP_WR << 13) | (OP_OUTS << 8)); // Write OP_OUTS
    // Output 1 byte in single mode
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MAN_CMD, (OP_WR << 13) | (OP_OUTS << 8)); // Write OP_OUTS
    // Output 1 byte in single mode
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MAN_CMD, (OP_WR << 13) | (OP_OUTS << 8)); // Write OP_OUTS
    // Output 1 byte in single mode  
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MAN_CMD, (OP_WR << 13) | (OP_OUTS << 8)); // Write OP_OUTS
   
    return_value = wait_for_state_ready_init(wait_for_sync_idle, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS2_RDATA, 0);
    // NEED TO CHECK
    if(return_value != 0)
    {
        ASSERT(0);
    }
    
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MAN_EN, 0x00); // Manual mode circuit is disable.
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MUX_SEL, 0x00); // SPI is controlled by automatic wrapper.
}

//--------------------------------------------------------
//    Function : DrvPWRAP_Man()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_Man(kal_uint32 write, kal_uint32 op, kal_uint32 wdata, kal_uint32 *rdata)
{
    kal_uint32 reg_rdata;
    kal_uint32 man_write;
    kal_uint32 man_op;
    kal_uint32 return_value;

    reg_rdata = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_MAN_RDATA); // Manual Read Data
    if(GET_MAN_FSM( reg_rdata) != MAN_FSM_IDLE_STATE) //IDLE State
    {
        ASSERT(0);
        return PMIC_WRAP_MANUAL_MODE_NOT_IDLE;
    }

    // Check argument validation
    if((write & ~(0x1))    != 0)  return PMIC_WRAP_INVALID_RW; // Write should be 1 bit
    if((op   & ~(0x1f)) != 0)  return PMIC_WRAP_INVALID_OP; // OP should no larger than 0xFFFF
    if((wdata & ~(0xff)) != 0)  return PMIC_WRAP_INVALID_WDATA; // Write DATA should be no larger than 0xFF    

    man_write = write << 13;
    man_op    = op << 8;
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MAN_CMD, man_write | man_op | wdata);

    if(write == OP_RD)
    {
        return_value = wait_for_state_ready_init(wait_for_man_wfvldclr, PMIC_WRAP_TIMEOUT, PMIC_WRAP_MAN_RDATA, &reg_rdata);
        if(return_value != 0)
        {
            ASSERT(0);            
            return return_value;
        }         
 
        *rdata = GET_MAN_RDATA(reg_rdata);
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_MAN_VLDCLR, 0x01);        
    }

    return 0;
}

//--------------------------------------------------------
//    Function : DrvPWRAP_ManAccess()
// Description : 
//   Parameter : 
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_ManAccess(kal_uint32 write, kal_uint32 adr, kal_uint32 wdata, kal_uint32 *rdata )
{
    kal_uint32 man_wdata;
    kal_uint32 man_rdata;

    // Check argument validation
    if((write & ~(0x1))    != 0)  return PMIC_WRAP_INVALID_RW; // Write should be 1 bit
    if((adr   & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_ADDR; // Address should no larger than 0xFFFF
    if((wdata & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_WDATA; // Write DATA should be no larger than 0xFFFF  
	if((adr   &   0x8000)  == 0x8000) return PMIC_WRAP_NOT_SUPPORT_MANUAL_ACCESS_TO_PMIC_2;  // not support manual access to PMIC 2
	
  
    DrvPWRAP_SwitchMux(SPI_MANUAL_MODE); // Switch to Manual Mode
    DrvPWRAP_Man(OP_WR,  OP_CSH,  0x00, &man_rdata);
    DrvPWRAP_Man(OP_WR,  OP_CSL,  0x00, &man_rdata);
	
    man_wdata = (adr >> 9) | (write << 6);
    DrvPWRAP_Man(OP_WR,  OP_OUTD, (man_wdata & 0xff), &man_rdata);
    man_wdata = adr >> 1;
    DrvPWRAP_Man(OP_WR,  OP_OUTD, (man_wdata & 0xff), &man_rdata);   

    
    if(write == PMIC_WRAP_WRITE)
    {   
        man_wdata = wdata >> 8;
        DrvPWRAP_Man(OP_WR,  OP_OUTD, (man_wdata & 0xff), &man_rdata);
        man_wdata = wdata;
        DrvPWRAP_Man(OP_WR,  OP_OUTD, (man_wdata & 0xff), &man_rdata);
    }
    else
    {		
        DrvPWRAP_Man(OP_WR,  OP_CK,  8, &man_rdata);
        DrvPWRAP_Man(OP_RD,  OP_IND, 0, &man_rdata);    
        *rdata = GET_MAN_RDATA( man_rdata ) << 8;
        DrvPWRAP_Man(OP_RD,  OP_IND, 0, &man_rdata);
        *rdata |= GET_MAN_RDATA( man_rdata );
    }

    DrvPWRAP_Man(OP_WR,  OP_CSL,  0, &man_rdata);    
    DrvPWRAP_Man(OP_WR, OP_CSH, 0, &man_rdata);
    DrvPWRAP_Man(OP_WR, OP_CK, 0, &man_rdata); // EXT_CK

    return 0;
}

//--------------------------------------------------------
//    Function : DrvPWRAP_InitRegClk()
// Description : 1: reg_max_ck; 0: safe mode
//   Parameter : int regck_sel
//      Return : 
//--------------------------------------------------------
kal_uint32 DrvPWRAP_InitRegClk(kal_uint32 regck_sel) // 0:safe mode, 1:18MHz
{
	kal_uint32 arb_en_backup, wacs2_en_backup;
    kal_uint32 rdata;

	arb_en_backup = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_HIPRIO_ARB_EN); // Backup HIPRIO_ARB enable bitmap
    wacs2_en_backup = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_WACS2_EN);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, HARB_HPRIO_WACS2); // HIPRIO_ARB enable for each source. (Set WACS2 highest priority);only WACS2
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, 0x1);

#ifndef DUAL_PMICS
    // Set the Read Dummy cycle number (SPI Slave clock is 18MHz)
    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, DEW_RDDMY_NO, 0x8, &rdata);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_RDDMY,0x8);
#else
    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, DEW_RDDMY_NO, 0x8, &rdata);
    DrvPWRAP_WACS2_NoChk(PMIC_WRAP_WRITE, EXT_DEW_RDDMY_NO, 0x8, &rdata);
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_RDDMY,0x0808);
#endif

	// Config SPI Waveform according to reg clk
    if(regck_sel == PMIC_WRAP_REG_CLOCK_18MHZ) // Slave Clock is 18MHz
	{  
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_CSHEXT_WRITE,0x0202); //wait for data written into register => 4T of SPI Slave clocks (CSLEXT_WRITE_END has been increased due to SPI Slave DCM function)						   
		PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_CSHEXT_READ, 0x0);
		PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_CSHEXT_WRITE,0x0200); //prolong the CSLEXT_WRITE_END time due to SPI Slave DCM function						   
		PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_CSHEXT_READ, 0x0);
	 
    }else //Safe Mode
	{ 
		PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_CSHEXT_WRITE,0x0f0f); 					   
		PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_CSHEXT_READ, 0x0f0f);
		PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_CSHEXT_WRITE,0x0f0f); 
		PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_CSHEXT_READ, 0x0f0f);
    }
	
	PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_HIPRIO_ARB_EN, arb_en_backup); // Restore HIPRIO_ARB enable bitmap
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS2_EN, wacs2_en_backup);
	
    return 0;
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
#endif
#endif // End of #if !defined(DRV_PMIC_OFF)
