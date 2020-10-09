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
 *
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
 *
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
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
#include "kal_hrt_api.h"
/* #define PMIC_WRAP_MEMORY_DUMP_SUPPORT */

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
#define PMIC_WRAP_TIMEOUT               1280 // APB Bus Latency + other subsys access latency

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

PMIC_WACS_FSM pmic_wacs_fsm[PMIC_LOG_TYPE_MAX];

PMIC_WARP_WAIT_ACTION pmic_wrap_wait_event = PMIC_WRAP_WAIT_ACTION_INIT;
PMIC_WRAP_LOG pmic_wrap_log[PMIC_LOG_TYPE_MAX];
kal_uint32 PMIC_PATTERN_VAL[PMIC_LOG_TYPE_MAX] = {0x00000000};
kal_uint32 PMIC_POLLING_COUNTER[PMIC_LOG_TYPE_MAX] = {0};
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

//--------------------------------------------------------
//    Function : DrvPWRAP_Init(void)
// Description : Initialize PMIC_WRAP, PPB, PMIC_DEWRAP
//   Parameter : None
//      Return :
//--------------------------------------------------------
kal_uint32 DrvPWRAP_Init(void)
{
    kal_uint32 rdata;
    // By Pass DrvPWRAP_INIT if Already Init Done
    rdata = PMIC_WRAP_DRV_Reg32(PMIC_WRAP_WACS2_RDATA);

    if(GET_INIT_DONE0( rdata ) == WACS_INIT_DONE_FINISHED)
		return 0;
    return 0;
}

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
	kal_uint32 savedMask;

    pmic_wrap_log[type].current_action = write;
    pmic_wrap_log[type].current_channel = PMIC_WRAP_WACS0;

    // Check argument validation
    if((write & ~(0x1))    != 0)  return PMIC_WRAP_INVALID_RW; // Write should be 1 bit
    if((adr   & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_ADDR; // Address should no larger than 0xFFFF
    if((wdata & ~(0xffff)) != 0)  return PMIC_WRAP_INVALID_WDATA; // Write DATA should be no larger than 0xFFFF

	savedMask = kal_hrt_SaveAndSetIRQMask();
    // Argument process
    wacs_write  = write << 31;
    wacs_adr    = (adr >> 1) << 16;

    // Check IDLE & INIT_DONE in advance
    return_value = wait_for_state_idle_wrap(wait_for_wacs_fsm_idle, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS0_RDATA, 0, PMIC_LOG_TYPE_HRT_DOMAIN);
    if(return_value != 0)
    {
		kal_hrt_RestoreIRQMask(savedMask);
        ASSERT(0);
        return return_value;
    }

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE0_DBG][idx].start_time = ust_get_current_time();
#endif

#if defined(MT6765)
    /* add RG Monitor and Recover mechanism for VCORE and VSRAM_OTHERS */
    if(write == PMIC_WRAP_READ)
    {
        /* Send Command to Read for MT6765 project */
        PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_CMD, wacs_write | wacs_adr | wdata);
    }
    else if(write == PMIC_WRAP_WRITE)
    {
        /* Send Command to Write for MT6765 project */
	if ((adr == 0x1508) && ((wdata & 0x1) == 0x0)) {
	    return -1;
	}
	else if (adr == 0x1510 || adr == 0x1512 || adr == 0x1514) {
	    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_CMD, wacs_write | (0x1510 >> 1) << 16 | 0xB);
	}
	else if (adr == 0x1516 || adr == 0x1518 || adr == 0x151a) {
	    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_CMD, wacs_write | (0x1516 >> 1) << 16 | 0x10A);
	}
	else if ((adr == 0x19D0) && ((wdata & 0x1) == 0x0)) {
	    return -1;
	}
	else if (adr == 0x19D8 || adr == 0x19DA || adr == 0x19DC) {
	    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_CMD, wacs_write | (0x19D8 >> 1) << 16 | 0xB);
	}
	else if (adr == 0x19DE || adr == 0x19E0 || adr == 0x19E2) {
	    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_CMD, wacs_write | (0x19DE >> 1) << 16 | 0xA);
	}
	else if ((adr == 0x170E) && ((wdata & 0x80) == 0x80)) {
	    return -1;
	}
	else {
	    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_CMD, wacs_write | wacs_adr | wdata);
	}
    }
#else
    // Send Command to Read/Write for non-MT6765 project
    PMIC_WRAP_DRV_WriteReg32(PMIC_WRAP_WACS0_CMD, wacs_write | wacs_adr | wdata);
#endif

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
    pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE0_DBG][idx].end_time = ust_get_current_time();
	pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE0_DBG][idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE0_DBG][idx].start_time, pmic_access_duration_log[type][PMIC_WRAPPER_WACS0_WRITE0_DBG][idx].end_time);
#endif

    if(write == PMIC_WRAP_READ) // Read
    {
        return_value = wait_for_state_ready_wrap(wait_for_wacs_fsm_wfvldclr, PMIC_WRAP_TIMEOUT, PMIC_WRAP_WACS0_RDATA, &reg_rdata, PMIC_LOG_TYPE_HRT_DOMAIN);
        if(return_value != 0)
        {
			kal_hrt_RestoreIRQMask(savedMask);
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

	kal_hrt_RestoreIRQMask(savedMask);
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

#if defined(DRV_PMIC_WRAP_V1)
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

#endif // End of #if !defined(DRV_PMIC_OFF)
