#ifdef __LP_SCHEDULE_ENABLE__

#include "tg_hisr.h"
#include "kal_public_defs.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_hrt_api.h"
#include "us_timer.h"
#include "intrCtrl.h"
#include "mips_ia_utils_public.h"

#define TG_L2C_LOCK_CODE __attribute__ ((section("L2CACHE_LOCK_ROCODE")))
#define TG_L2C_LOCK_RW   __attribute__ ((section("L2CACHE_LOCK_RW")))
#define TG_L2C_LOCK_ZI   __attribute__ ((section("L2CACHE_LOCK_ZI")))

#if defined(__LP_SCHEDULE_EL12_RESCHEDULE__)
//#include "el2_api.h"
//EL1
extern void _tg_hisr_msg_send_to_el1c_task( module_type src_mod_id );
//EL2
extern void el2_tick_source_dispatch_tick(void);
#endif /* __LP_SCHEDULE_EL12_RESCHEDULE__ */

#define TG_DEBUG_BUFF 4UL

typedef struct {
	kal_uint32 enter_count;
	kal_uint32 enter_count2;
	kal_uint32 l_start_count;
	kal_uint32 l_end_count;
	kal_uint32 l_trigger_count;
	kal_uint32 l_trigger_count2;
	kal_uint32 enter_frc[TG_DEBUG_BUFF];
	kal_uint32 enter_frc2[TG_DEBUG_BUFF];
	kal_uint32 l_start_frc[TG_DEBUG_BUFF];
	kal_uint32 l_end_frc[TG_DEBUG_BUFF];
	kal_uint32 l_trigger_frc[TG_DEBUG_BUFF];
	kal_uint32 l_trigger_frc2[TG_DEBUG_BUFF];
#ifdef __LP_SCHEDULE_HMU_RESCHEDULE__
	kal_uint32 hmu_trigger_count;
	kal_uint32 hmu_trigger_frc[TG_DEBUG_BUFF];
#endif /* __LP_SCHEDULE_HMU_RESCHEDULE__ */
} tg_debug_t;

tg_debug_t tg_debug;

#define TG_UPDATE_ENTER_LOG()   \
	do{                       \
		tg_debug.enter_count++; \
		tg_debug.enter_frc[tg_debug.enter_count % TG_DEBUG_BUFF] = ust_get_current_time();\
	}while(0)

#define TG_UPDATE_ENTER2_LOG()   \
	do{                       \
		tg_debug.enter_count2++; \
		tg_debug.enter_frc2[tg_debug.enter_count2 % TG_DEBUG_BUFF] = ust_get_current_time();\
	}while(0)


#define TG_UPDATE_START_LOG()   \
	do{                       \
		tg_debug.l_start_count++; \
		tg_debug.l_start_frc[tg_debug.l_start_count % TG_DEBUG_BUFF] = ust_get_current_time();\
	}while(0)

#define TG_UPDATE_END_LOG()   \
	do{                       \
		tg_debug.l_end_count++; \
		tg_debug.l_end_frc[tg_debug.l_end_count % TG_DEBUG_BUFF] = ust_get_current_time();\
	}while(0)

#define TG_UPDATE_TRIGGER_LOG()   \
	do{                       \
		tg_debug.l_trigger_count++; \
		tg_debug.l_trigger_frc[tg_debug.l_trigger_count % TG_DEBUG_BUFF] = ust_get_current_time();\
	}while(0)

#define TG_UPDATE_TRIGGER2_LOG()   \
	do{                       \
		tg_debug.l_trigger_count2++; \
		tg_debug.l_trigger_frc2[tg_debug.l_trigger_count2 % TG_DEBUG_BUFF] = ust_get_current_time();\
	}while(0)


#ifdef __LP_SCHEDULE_HMU_RESCHEDULE__
#include "hmu.h"
#include "dcl_gpt.h"

#define TG_UPDATE_HMU_TRIGGER_LOG()   \
	do{                       \
		tg_debug.hmu_trigger_count++; \
		tg_debug.hmu_trigger_frc[tg_debug.hmu_trigger_count % TG_DEBUG_BUFF] = ust_get_current_time();\
	}while(0)

DCL_HANDLE tg_gpt_handle = 0 ;
SGPT_CTRL_START_T tg_re_schedule;

typedef enum{
	TG_HMU_TIMER_NONE = 0,
	TG_HMU_TIMER_ON = 1,
	TG_HMU_TIMER_OFF = 2
}tg_hmu_timer_e;


static kal_spinlockid tg_hmu_spinlock;
kal_uint32 tg_enable_switch;  // set/clear by first/last L tick

#else  /* __LP_SCHEDULE_HMU_RESCHEDULE__ */
#define TG_UPDATE_HMU_TRIGGER_LOG()

#endif /* __LP_SCHEDULE_HMU_RESCHEDULE__ */

#if defined(__LP_SCHEDULE_FDD3G_TALKING__)
kal_uint32 tg_enter_fdd3g_mode = 0;
kal_uint32 tg_fdd3g_end_isr = 0x70;
void tg_fdd3g_talking_mode(kal_uint32 mode)
{
	tg_enter_fdd3g_mode = mode;
}

kal_uint32 tg_group3_start_frc[1024];
kal_uint32 tg_group3_start_frc_idx = 0;
kal_uint32 tg_group3_end_frc[1024];
kal_uint32 tg_group3_end_frc_idx = 0;

void tg_group3_start(TG_TRIGGER_MODE mode)
{
//	*((volatile kal_uint32*)(0x1F014000+0x80)) = 0xFF;
//	*((volatile kal_uint32*)(0x1F014000+0x88)) = 0xFF;
	*((volatile kal_uint32*)(0xB0070000+0x260)) = 0xFF;
	*((volatile kal_uint32*)(0xB0070000+0x268)) = 0xFF;
	tg_group3_start_frc[tg_group3_start_frc_idx] = ust_get_current_time();
	tg_group3_start_frc_idx = (tg_group3_start_frc_idx+1)%1024;
}

void tg_group3_end(TG_TRIGGER_MODE mode)
{
//	*((volatile kal_uint32*)(0x1F014000+0x80)) = 0x00;
//	*((volatile kal_uint32*)(0x1F014000+0x88)) = 0x00;
	*((volatile kal_uint32*)(0xB0070000+0x260)) = 0x00;
	*((volatile kal_uint32*)(0xB0070000+0x268)) = 0x00;
	tg_group3_end_frc[tg_group3_end_frc_idx] = ust_get_current_time();
	tg_group3_end_frc_idx = (tg_group3_end_frc_idx+1)%1024;
}

#endif /* __LP_SCHEDULE_FDD3G_TALKING__ */


//L2Cache Locked...
//typedef struct{
TG_L2C_LOCK_ZI kal_uint32 tg_mode;        // set/clear by first/last L tick
//}tg_cb_t;
//tg_cb_t tg_cb;

//trigger by LTE symb2 subframe 0x68
// 20170714, LTE trigger target = EL1
TG_L2C_LOCK_CODE void tg_group1_trigger(TG_TRIGGER_MODE mode)
{
//	if(mode != TG_TRIGGER_GPT)
//	{
		kal_hrt_activate_hisr_index(TG1_HISR);
//	}
//	else
//	{
//		kal_activate_hisr_index(TG1_HISR);
//	}
}

//trigger by LTE symb8 subframe 0x64
// 20170714, LTE trigger target = EL2 tasks && HMU
TG_L2C_LOCK_CODE void tg_group2_trigger(TG_TRIGGER_MODE mode)
{
	if(mode != TG_TRIGGER_GPT)
	{
		kal_hrt_activate_hisr_index(TG2_HISR);
	}
	else
	{
		kal_activate_hisr_index(TG2_HISR);
	}

}

#if defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
#define TG_GPT_RE_KICK() do{DclSGPT_Control(tg_gpt_handle, SGPT_CMD_START, (DCL_CTRL_DATA_T*)&tg_re_schedule) ;}while(0)
#define TG_GPT_STOP()    do{DclSGPT_Control(tg_gpt_handle, SGPT_CMD_STOP, (DCL_CTRL_DATA_T*)NULL) ;}while(0)
kal_uint32 invoke_hmu = 1; // access by HMU, in task/hisr, protection ?
static void tg_init_gpt_timer(void)
{
//    SGPT_CTRL_START_T start;

//    start.u2Tick=HMU_GPTIMER_PRIODIC_INTERVAL;
    tg_re_schedule.u2Tick=HMU_GPTIMER_PRIODIC_INTERVAL ;
    tg_re_schedule.vPara=NULL;
//    tg_re_schedule.pfCallback=hmu_gpt_callback;
//    start.vPara=NULL;

//    hmu_dsp_timer_exist = KAL_FALSE ;		
//    hmu_gpt_enable = KAL_TRUE ;
    DclSGPT_Control(tg_gpt_handle, SGPT_CMD_START, (DCL_CTRL_DATA_T*)&tg_re_schedule) ;

}

/* update invoke_hmu in this_function/ini_function only. 
 * GPT timer will be enable/disable by tg2_hisr_id;
 * this function protect by caller's spinlock
 */
void tg_hmu_callback_control(kal_bool enable)
{
    kal_take_spinlock(tg_hmu_spinlock, KAL_INFINITE_WAIT);
    if(KAL_TRUE == enable)
    {
        invoke_hmu = 1;
    }
    else
    {
        invoke_hmu = 0;
    }
	miu_syncn(0x4);
	tg_enable_switch |= 1UL<<TG_TRIGGER_GPT;
    kal_give_spinlock(tg_hmu_spinlock);
}

void tg_hmu_callback_control_sync(void)
{
	kal_activate_hisr_index(TG2_HISR); //activate by hmu task
}
#else  /* __LP_SCHEDULE_HMU_RESCHEDULE__ */
#define TG_GPT_RE_KICK()
#define TG_GPT_STOP()
#endif /* __LP_SCHEDULE_HMU_RESCHEDULE__ */

void tg_hisr_init(void)
{
	tg_mode = 1UL<<TG_TRIGGER_NONE;

#if defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
    invoke_hmu = 1;
    tg_hmu_spinlock = kal_create_spinlock("TaskGroup HMU SpinLock");
    if (0 == tg_gpt_handle) {
        tg_gpt_handle = DclSGPT_Open(DCL_GPT_CB_MS, FLAGS_NONE);		
    	if ( (DCL_HANDLE_INVALID == tg_gpt_handle) || (DCL_HANDLE_OCCUPIED == tg_gpt_handle) ){
    		ASSERT(0);
    	}
		tg_mode = 1UL<<TG_TRIGGER_GPT;
    }
	tg_init_gpt_timer();
#endif /* __LP_SCHEDULE_HMU_RESCHEDULE__ */
}

void tg_last_L_tick(void)
{
	tg_mode = 1UL<<TG_TRIGGER_GPT; //always switch to gpt tick
	TG_UPDATE_END_LOG();
#if defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
	//switch HMU back to SYS tick
	miu_syncn(0x4); // tg_mode update before tg_enable_switch update
	tg_enable_switch |= 1UL<<TG_TRIGGER_GPT;
//	miu_syncn(0x4); there is sync in kal_hrt_activate_hisr
	kal_hrt_activate_hisr_index(TG2_HISR);
#endif /* __LP_SCHEDULE_HMU_RESCHEDULE__ */
}

TG_L2C_LOCK_CODE void tg_first_L_tick(void)
{
	tg_mode = 1UL<<TG_TRIGGER_LTE; //always switch to gpt tick
	TG_UPDATE_START_LOG();
#if defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
	//switch HMU to LTE tick
	miu_syncn(0x4); // tg_mode update before tg_enable_switch update
	tg_enable_switch |= 1UL<<TG_TRIGGER_LTE;
//	miu_syncn(0x4); // will be check by every subframe tick
#endif /* __LP_SCHEDULE_HMU_RESCHEDULE__ */
}


void tg1_hisr(void) 
{
#if defined(__LP_SCHEDULE_EL12_RESCHEDULE__)
    if(tg_mode & (1UL<<TG_TRIGGER_LTE) ) //4G active
    {
		//Priority: EMAC > EL1 > EL2H > EL2
		el2_tick_source_dispatch_tick();   //EMAC && EL2
		_tg_hisr_msg_send_to_el1c_task(MOD_TG1_HISR);  //EL1C
		TG_UPDATE_TRIGGER_LOG();
    }
#endif /* __LP_SCHEDULE_EL12_RESCHEDULE__ */

	TG_UPDATE_ENTER_LOG();
}

//for hmu, el2 ?
void tg2_hisr(void)
{
//    if(tg_mode & (1UL<<TG_TRIGGER_LTE) ) //4G active
//    {
//		_tg_hisr_msg_send_to_el1c_task(MOD_TG1_HISR);  //EL1C
//		el2_tick_source_dispatch_tick();   //EL2
//		TG_UPDATE_TRIGGER_LOG();
//    }
#if defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
	//Control GPT in tg2_hisr only
	if(invoke_hmu)
	{
		hmu_tg_timer_callback();
		TG_UPDATE_HMU_TRIGGER_LOG();
		if(tg_mode & (1UL<<TG_TRIGGER_GPT))
		{
			TG_GPT_RE_KICK();
		}
	}
	if(0 != tg_enable_switch)
	{
		tg_enable_switch = 0;
		miu_syncn(0x4);
	
	    kal_take_spinlock(tg_hmu_spinlock, KAL_INFINITE_WAIT);
	    if( (0 == invoke_hmu) || (tg_mode & (1UL<<TG_TRIGGER_LTE)) )
	    {
	    	TG_GPT_STOP();
	    }
	    else if( (1 == invoke_hmu) && (tg_mode & (1UL<<TG_TRIGGER_GPT)) )
	    {
	    	TG_GPT_RE_KICK();
	    }
	    kal_give_spinlock(tg_hmu_spinlock);
	
	}
#endif /* __LP_SCHEDULE_HMU_RESCHEDULE__ */
	TG_UPDATE_ENTER2_LOG();
}

#endif /* __LP_SCHEDULE_ENABLE__ */
