#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_hrt_api.h"
#include "kal_public_defs.h"
#include "us_timer.h"
#include "sync_data.h"	
#include "sleepdrv_interface.h"

#include "drv_features.h"
#include "drv_comm.h"

#include "drv_msgid.h"
#include "stack_msgs.h"
#include "stack_ltlcom.h"

#include "intrCtrl.h"

#include "idc_internal.h"
#include "dcl_idc.h"
#include "drv_idc.h"

#include "idc_reg.h"
#include "svc_sap.h"

#define LTE_TIMER_MHZ	(61.44)
#define LTE_CLOCK_MHZ	(52) 
#define IDC_PHYTIME_WRAPPING 	0xFFFFF

#define TIME_DIFF_WITHIN(latter_offset, previous_offset, time)\
	(((latter_offset > previous_offset)	\
	&&((latter_offset - previous_offset) <= time))	\
	||((latter_offset < previous_offset)	\
	&&((IDC_PHYTIME_WRAPPING - previous_offset + latter_offset) <= time)))
	
#define TIME_DIFF_EXCEED(latter_offset, previous_offset, time)\
	(((latter_offset > previous_offset)	\
	&&((latter_offset - previous_offset) > time))	\
	||((latter_offset < previous_offset)	\
	&&((IDC_PHYTIME_WRAPPING - previous_offset + latter_offset) > time)))

							
#ifdef ATEST_DRV_ENABLE		
	#define IDC_ASSERT(statement)	\
		do { if(!statement) { \
				dbg_print("%s: line %d, statement = %", __FUNCTION__, __LINE__, statement);\
				dbg_flush();\
				while(1);\
			 }\
		}while(0)				
#else						
	#define IDC_ASSERT(statement)	ASSERT(statement)				
#endif						


#ifdef ATEST_DRV_ENABLE
#define __4G_IDC__
#define dhl_trace(...) 
#define DT_IDC_PRINTF(x...) \
do{                         \
	dbg_print(x);           \
	dbg_flush();            \
}while(0)
#else /*ATEST_DRV_ENABLE*/
#include "dhl_trace.h"
#include "idc_trace.h"
#endif

#define POLL_STATUS(poll_statement)	do{kal_uint32 i=0, __cnt=0;while(poll_statement){for(i=0;i<10;i++){__cnt++;}if(100000<__cnt){IDC_ASSERT(0);}}}while(0)



idc_struct_t idc_port = {0, IDC_CLOSED, KAL_FALSE, IDC_PLAN, 0, 0, {0}, {0}, 0, 0, 0, 0, {0}, {0}, 0, 0, {0, len_8, sb_1, pa_none}, IDC_INTERNAL_PIN};
IDC_ILM_MSG_T ilm_buf[4] = {{0}, {0}};
kal_uint32 ilm_num = 0;
kal_char idc_dbg_str[100];
kal_bool idc_read_RBR = KAL_FALSE;
kal_uint8 idc_rx_count = 0;
kal_uint8 idc_rx_history[20] = {0};
kal_uint32 idc_rx_history_time[20] = {0};
kal_uint8 idc_lisr_count, idc_hisr_count = 0;
kal_uint32 idc_hisr_time[20] = {0};
kal_uint16 IIR_L, IIR_H, IER_L, LSR_L, LSR_H;

kal_bool idc_rx_suspend = KAL_FALSE;
kal_uint8 idc_rx_suspend_timer = 0;
kal_bool idc_count_start = KAL_FALSE;
kal_bool idc_ilm_on = KAL_TRUE;
volatile kal_bool idc_in_hisr = KAL_FALSE, idc_in_pm_hisr = KAL_FALSE;
volatile kal_bool idc_in_close = KAL_FALSE;
kal_uint32 idc_80211_tx_count = 0;
kal_uint32 idc_80211_rx_count = 0;
volatile kal_uint32 stop_status_check = 0;
kal_uint32 poll_time_E = 0, before_poll_time_E = 0, after_poll_time_E = 0;
kal_uint32 poll_time_S = 0, before_poll_time_S = 0, after_poll_time_S = 0;
kal_uint32 idc_in_workaround = 0, idc_in_eventpending = 0; 
kal_uint32 before_poll_time_U = 0, after_poll_time_U = 0;
kal_uint32 before_poll_time_SE = 0, after_poll_time_SE = 0;
kal_uint32 before_poll_time_SCH = 0, after_poll_time_SCH = 0;
kal_uint32 before_poll_time_GPS = 0, after_poll_time_GPS = 0;





kal_uint8 idc_sleep_handle;

#define LTE_TIMER_BASE 			0xA6090000
#define LTE_TIMER_START			LTE_TIMER_BASE
#define LTE_TIMER_FN_READ0		(LTE_TIMER_BASE + 0x10)
#define LTE_TIMER_STIME_READ0	(LTE_TIMER_BASE + 0x14)

static kal_atomic_uint32 idc_flag = 0;
#define IDC_CTRL_LOCK			0xFFFFFFFF	
static volatile kal_atomic_uint32 idc_drv_atom_lock=0;

enum{
	IDC_ATLOCK_PWR_UPDATE,//= 0
	IDC_ATLOCK_PWR_LISR,	  //= 1
	IDC_ATLOCK_PWR_HISR,	  //= 2
	IDC_ATLOCK_ISR_PINCFG //= 3
};

static inline kal_uint32 _do_atomic_try_lock(volatile kal_atomic_uint32 *lock_v, kal_uint8 lock_idx){
	const kal_uint32 lock_map=1<<lock_idx;
	kal_uint32 old_v,tmp;
	#ifndef __MIPS16//for MIPS 32
		__asm__ __volatile__(
		".set	noreorder		\n"
		"1:	ll		%1, (%2)	\n"
		"	and		%0, %1, %3	\n"
		"	bnez	%0, 2f		\n"
		"	addu	%1,%1,%3	\n"
		"	sc		%1, (%2)	\n"
		"	beqz	%1, 1b		\n"
		"	nop					\n"
//		"	sync				\n"
		"2:.set	reorder			\n"
		: "=&r" (old_v),"=&r" (tmp)
		: "r"(lock_v),"r"(lock_map)
		: "cc","memory"
		);
	#else
		__asm__ __volatile__(
		".set	noreorder		\n"
		"1:	ll		%1, (%2)	\n"
		"	move	%0, %1		\n"
		"	and		%0, %3		\n"
		"	bnez	%0, 2f		\n"
		"	addu	%1,%1,%3	\n"
		"	sc		%1, (%2)	\n"
		"	beqz	%1, 1b		\n"
//		"	nop					\n"
//		"	sync				\n"
		"2:.set	reorder			\n"
		: "=&d" (old_v),"=&d" (tmp)
		: "d"(lock_v),"d"(lock_map)
		: "cc","memory"
		);
	#endif
	return old_v;
}

kal_bool _idc_atomic_try_lock(volatile kal_atomic_uint32 *lock_v, kal_uint8 lock_idx){
	if(0==((*lock_v)&(1<<lock_idx))){
		if(0==_do_atomic_try_lock(lock_v,lock_idx)){return KAL_TRUE;}
	}
	return KAL_FALSE;
}

void _idc_atomic_lock(volatile kal_atomic_uint32 *lock_v, kal_uint8 lock_idx){
	while(_do_atomic_try_lock(lock_v,lock_idx)){
		__asm__ __volatile__("pause \n");
	}
}
void _idc_atomic_unlock(volatile kal_atomic_uint32 *lock_v, kal_uint8 lock_idx){
	kal_uint32 old_v,lock_map=1<<lock_idx,tmp;
//	old_v=kal_atomic_clear_bitmask_return(lock_v,lock_map);
//	PRB_ASSERT(lock_idx<32 && 0!=(old_v&lock_map) ,lock_idx,old_v,0);

	//ALPS03619191:workaround by cache coherence sync
	miu_syncn(4);

	#ifndef __MIPS16//for MIPS 32
		__asm__ __volatile__(
		".set	noreorder		\n"
		"1:	ll		%0, (%2)	\n"
		"	not		%1, %3		\n"
		"	and		%1, %1, %0	\n"
		"	and		%0, %0, %3	\n"
		"	beqz	%0, 2f		\n"// abnormal if not set
		"	nop					\n"
		"	sc		%1, (%2)	\n"
		"	beqz	%1, 1b		\n"
		"2:	nop					\n"
		".set	reorder			\n"
		: "=&r" (old_v),"=&r" (tmp)
		: "r"(lock_v),"r"(lock_map)
		: "cc","memory"
		);
	#else
		__asm__ __volatile__(
		".set	noreorder		\n"
		"1:	ll		%0, (%2)	\n"
		"	not		%1, %3		\n"
		"	and		%1, %0		\n"
		"	and		%0, %3		\n"
		"	beqz	%0, 2f		\n"// abnormal if not set
//		"	nop					\n"
		"	sc		%1, (%2)	\n"
		"	beqz	%1, 1b		\n"
//		"	nop					\n"
		"2:.set	reorder			\n"
		: "=&d" (old_v),"=&d" (tmp)
		: "d"(lock_v),"d"(lock_map)
		: "cc","memory"
		);
	#endif
}


void idc_ctrl_enter(kal_uint32 func_flag){
	kal_uint32 old_flag = kal_atomic_set_bitmask_return(&idc_flag, func_flag);
	if(old_flag & func_flag){
		#if !defined(ATEST_DRV_ENABLE)
			dhl_trace(TRACE_INFO, 0, IDC_FUN_ENTER_CONCURRENTLY_MSG, old_flag, func_flag);
		#else
			kal_sprintf(idc_dbg_str, "drv_idc: the idc ctrl func entering concurrently(%X, %X)\r\n", old_flag, func_flag);
			DT_IDC_PRINTF(idc_dbg_str);
		#endif
		IDC_ASSERT(0);
	}
}

void idc_ctrl_leave(kal_uint32 func_flag){
	kal_uint32 old_flag = kal_atomic_clear_bitmask_return(&idc_flag, func_flag);
	if(((func_flag == IDC_CTRL_LOCK) || (old_flag == IDC_CTRL_LOCK))?
		(func_flag != old_flag):			//main enter should match main leave
		((func_flag & old_flag) != func_flag)){ //sub-func leave should exist its enter
		#if !defined(ATEST_DRV_ENABLE)
			dhl_trace(TRACE_INFO, 0, IDC_LEAVE_FUN_NOT_MATCH_MSG, func_flag, old_flag);
		#else
			kal_sprintf(idc_dbg_str, "drv_idc: the power ctrl leave func(%x) don't match enter func(%x)\r\n", func_flag, old_flag);
			DT_IDC_PRINTF(idc_dbg_str);
		#endif
		IDC_ASSERT(0);
	}
}

void drv_idc_conn_txrx_count(kal_bool is_start)
{
	if (KAL_TRUE == is_start)
	{
		dhl_trace(TRACE_INFO, 0, IDC_START_COUNT_MSG);
		idc_count_start = KAL_TRUE;
		idc_80211_tx_count = 0;
		idc_80211_rx_count = 0;
	}
	else
	{
		idc_count_start = KAL_FALSE;
		dhl_trace(TRACE_INFO, 0, IDC_END_COUNT_MSG, idc_80211_tx_count, idc_80211_rx_count);
	}
}

void drv_idc_init_uart(void)
{
#if !defined(ATEST_DRV_ENABLE)
	dhl_trace(TRACE_INFO, 0, IDC_UART_INIT_MSG);
#else
	kal_sprintf(idc_dbg_str, "drv_idc: IDC UART Init\n\r");
	//DT_IDC_PRINTF(idc_dbg_str);
#endif

	// Open Clock Gating of LTE_TIMER
	DRV_WriteReg32(MDL1AO_PDN_CLR, PDN_LTE_TMR_MASK);

	// Open Clock Gating of IDC_UART
	DRV_WriteReg32(MDL1AO_PDN_CLR, PDN_IDC_UART_MASK);

	// Open Clock Gating of IDC_CTRL
	DRV_WriteReg32_NPW(MDL1AO_PDN_CLR, PDN_IDC_CTRL_MASK);

	// Initialize baud rate
	drv_idc_set_baudrate(4000000);

	// Initialize IDC UART FIFO threshold
	drv_idc_set_fifo_trigger(1);
	DRV_WriteReg32_NPW(IDC_UART_FCR, IDC_UART_FCR_RXTRIG | IDC_UART_FCR_FIFOINI);
	dhl_trace(TRACE_INFO, 0, IDC_CLEAN_RXFIFO_MSG , __FUNCTION__);

	// Enable RX interrupt
	DRV_WriteReg32(IDC_UART_IER, IDC_UART_IER_ERBFI);
	return;
}

void drv_idc_init_isr(void)
{
	IRQ_Register_LISR(MD_IRQID_IDC_UART_IRQ, idc_uart_lisr, "IDC_UART");
	IRQSensitivity(MD_IRQID_IDC_UART_IRQ, KAL_FALSE);// KAL_TRUE :pulse trigger KAL_FALSE: level trigger

	IRQ_Register_LISR(MD_IRQID_IDC_PM_INT, idc_pm_lisr, "IDC_PM");
	IRQSensitivity(MD_IRQID_IDC_PM_INT, KAL_FALSE);
	IRQUnmask(MD_IRQID_IDC_PM_INT);
}

//Before in sleep mode, El1 call this function to let IDC know us in sleep mode
void drv_sleep_notify(void)
{

	_idc_atomic_lock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_LISR);
	//dhl_trace(TRACE_INFO, 0, IDC_GET_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_LISR", __FUNCTION__, __LINE__);
	_idc_atomic_lock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_HISR);
	//dhl_trace(TRACE_INFO, 0, IDC_GET_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_HISR", __FUNCTION__, __LINE__);
	_idc_atomic_lock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_UPDATE);
	//dhl_trace(TRACE_INFO, 0, IDC_GET_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_UPDATE", __FUNCTION__, __LINE__);
	
	IRQMask(MD_IRQID_IDC_UART_IRQ);		
	// Turn off RX INT, turn on TX INT
	DRV_WriteReg32_NPW(IDC_UART_IER, IDC_UART_IER_ETBEI);	
	IRQUnmask(MD_IRQID_IDC_UART_IRQ);

	//modify idc_port main state
	idc_port.main_state = IDC_IN_SLEEP;
	MM_Sync();
	
	_idc_atomic_unlock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_UPDATE);
//	dhl_trace(TRACE_INFO, 0, IDC_RELEASE_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_UPDATE", __FUNCTION__, __LINE__);
	_idc_atomic_unlock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_HISR);	
//	dhl_trace(TRACE_INFO, 0, IDC_RELEASE_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_HISR", __FUNCTION__, __LINE__);
	_idc_atomic_unlock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_LISR);
//	dhl_trace(TRACE_INFO, 0, IDC_RELEASE_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_LISR", __FUNCTION__, __LINE__);

}

// After wake-up, IRQ is masked until first SF tick in order to prevent rx data error
void drv_idc_uart_activate(void)
{
	dhl_trace(TRACE_INFO, 0, IDC_ACTIVATE_MSG);
	// Clean IDC UART FIFO
	DRV_WriteReg32_NPW(IDC_UART_FCR, IDC_UART_FCR_RXTRIG | IDC_UART_FCR_FIFOINI);
	dhl_trace(TRACE_INFO, 0, IDC_CLEAN_RXFIFO_MSG , __FUNCTION__);

	//Unmask IRQ	
	IRQUnmask(MD_IRQID_IDC_UART_IRQ);
	dhl_trace(TRACE_INFO, 0, IDC_UNMASK_UART_ISR_MSG , __FUNCTION__);
}

// Bootup init: drv_idc_init(KAL_FALSE)
// Reinit after sleep: drv_idc_init(KAL_TRUE) -> drv_idc_uart_activate
void drv_idc_init(kal_bool sleep_mode)
{
#if defined(__4G_IDC__)
	kal_uint32 i = 0;

	// Mask IRQs before init
	IRQMask(MD_IRQID_IDC_UART_IRQ);
	IRQMask(MD_IRQID_IDC_PM_INT);

	// Initial flags/config of IDC driver
//	kal_mem_set(&idc_port, 0, sizeof(idc_port));
	idc_ctrl_enter(IDC_CTRL_LOCK);
	idc_port.schedule_state = IDC_PLAN;
	idc_port.event_cnt = 0;
	idc_port.event_pending_cnt = 0;
	idc_port.event_longest_index = 0;
	idc_port.event_longest_time = 0;
	idc_port.phy_time = 0;
	idc_port.event_w_index = 0;
	idc_port.event_usage_bit_map = 0;
	idc_port.rx_buf = 0;

	// Init IDC_UART
	drv_idc_init_uart();	
	dhl_trace(TRACE_INFO, 0, IDC_SLEEP_MSG, sleep_mode);
	
	// 93IDC_UART is in AO, IDC_UART & ISR & callback functions do not need init after sleep
	if (!sleep_mode)
	{
/*#ifndef ATEST_DRV_ENABLE
		idc_sleep_handle = SleepDrv_GetHandle(SMP);
#endif*/


		// Init callback functions
		for (i = 0; i < IDC_PM_NUM; ++i)
			idc_port.pm_cb_handle[i].callback_func = NULL;

		// Register UART, PM ISR, then unmask IRQ
		drv_idc_init_isr();
		idc_port.intr_en = KAL_TRUE;
		
		// Enable TX Count of IDC_CTRL
		DRV_WriteReg32(IDC_CTRL_DATA_CNT_CTRL, 0x1);
	}

	idc_port.main_state = IDC_IN_USE;
	MM_Sync();
#else	
	//IDC should not be initialized if __4G_IDC__ was not defined
	ASSERT(0);
#endif
	idc_ctrl_leave(IDC_CTRL_LOCK);
	return;
}

void drv_idc_get_support(IDC_SUPPORT_T *support)
{
#if defined(__4G_IDC__)
	support->idc = KAL_TRUE;
	support->gpio = KAL_FALSE;
	support->uart = KAL_TRUE;

#else // !defined(__4G_IDC__)
	support->idc = KAL_FALSE;
	support->gpio = KAL_FALSE;
	support->uart = KAL_FALSE;
#endif
	return;
}

void drv_idc_open(kal_uint32 mod_id)
{
	idc_port.owner_id = mod_id;
	idc_port.main_state = IDC_OPEN;

	return;
}

void drv_idc_close()
{
	kal_uint32 i = 0;

	// stop all events before closing IDC
	DRV_WriteReg32(IDC_CTRL_SCH_STOP, 0xFFFF);

	// disable interrupt
	IRQMask(MD_IRQID_IDC_UART_IRQ);
	DRV_WriteReg8(IDC_UART_IER, IDC_UART_IER_ALLOFF);
	IRQUnmask(MD_IRQID_IDC_UART_IRQ);

	idc_port.intr_en = KAL_FALSE;
	idc_port.rx_buf = 0;

	for (i = 0; i < 4; ++i)
	{
		DRV_WriteReg32(IDC_PRI(i), 0);
		DRV_WriteReg32(IDC_PRI_BITEN(i), 0);
		DRV_WriteReg32(IDC_PAT(i), 0);
		DRV_WriteReg32(IDC_PAT_BITEN(i), 0);
	}

	kal_mem_set(&idc_port, 0, sizeof(idc_port));
/*	idc_port.schedule_state = IDC_PLAN;
	idc_port.event_cnt = 0;
	idc_port.event_pending_cnt = 0;
	idc_port.event_longest_index = 0;
	idc_port.event_longest_time = 0;
	idc_port.phy_time = 0;
	idc_port.event_w_index = 0;
	idc_port.event_usage_bit_map = 0;
	idc_port.rx_buf = 0;

	idc_port.owner_id = 0;*/
	idc_port.main_state = IDC_CLOSED;
	idc_in_close = KAL_FALSE;

	return;
}

void drv_idc_set_dcb_config(IDC_CTRL_DCB_CONFIG_T idc_config)
{
	kal_uint8 tmp_lcr, tmp_ier;

	IRQMask(MD_IRQID_IDC_UART_IRQ);
	tmp_ier = DRV_Reg8(IDC_UART_IER);
	DRV_WriteReg8(IDC_UART_IER, IDC_UART_IER_ALLOFF);
	IRQUnmask(MD_IRQID_IDC_UART_IRQ);
	// set baud rate
	drv_idc_set_baudrate(idc_config.u4Baud);

	tmp_lcr = DRV_Reg32(IDC_UART_LCR);
	tmp_lcr &= ~0x3F;
	// set number of bits per character
	switch(idc_config.u1DataBits)
	{
		case len_5:
			tmp_lcr |= IDC_UART_WLS_5;
			break;
		case len_6:
			tmp_lcr |= IDC_UART_WLS_6;
			break;
		case len_7:
			tmp_lcr |= IDC_UART_WLS_7;
			break;
		case len_8:
			tmp_lcr |= IDC_UART_WLS_8;
			break;
		default:
			break;
	}

	switch(idc_config.u1StopBits)
	{
		case sb_1:
			tmp_lcr |= IDC_UART_1_STOP;
			break;
		case sb_2:
			tmp_lcr |= IDC_UART_2_STOP;
			break;
		case sb_1_5:
			tmp_lcr |= IDC_UART_1_5_STOP;
			break;
		default:
			break;
	}

	switch(idc_config.u1Parity)
	{
		case pa_none:
			tmp_lcr |= IDC_UART_NONE_PARITY;
			break;
		case pa_odd:
			tmp_lcr |= IDC_UART_ODD_PARITY;
			break;
		case pa_even:
			tmp_lcr |= IDC_UART_EVEN_PARITY;
			break;
		default:
			break;
	}

	DRV_WriteReg32(IDC_UART_LCR, tmp_lcr);

	kal_mem_cpy((void *) &idc_port.DCB, (void *) &idc_config, sizeof(IDC_CTRL_DCB_CONFIG_T));
	IRQMask(MD_IRQID_IDC_UART_IRQ);
	DRV_WriteReg8(IDC_UART_IER, tmp_ier);
	IRQUnmask(MD_IRQID_IDC_UART_IRQ);
}


void drv_idc_get_dcb_config(IDC_CTRL_DCB_CONFIG_T *DCB)
{
	kal_mem_cpy((void *) DCB, (void *) &idc_port.DCB, sizeof(IDC_CTRL_DCB_CONFIG_T));

	return;
}

void drv_idc_set_baudrate(kal_uint32 baudrate)
{
	kal_uint8 tmp_lcr = 0;
	kal_uint32 freq_div = 1;
	kal_uint32 sample_count = 0;

	idc_port.DCB.u4Baud = baudrate;

	// Only 4M baudrate is used in IDC now
	ASSERT(baudrate == 4000000);

	sample_count = 6;
	freq_div = 1;

	// configure register
	// based on sample_count * baud_pulse, baud_rate = system clock frequency / (SAMPLE_COUNT + 1) / {DLM, DLL}
	DRV_WriteReg32(IDC_UART_HIGHSPEED, IDC_UART_HIGHSPEED_X);

	tmp_lcr = DRV_Reg32(IDC_UART_LCR);
	DRV_WriteReg32(IDC_UART_LCR, tmp_lcr | IDC_UART_LCR_DLAB);
	// -- DLAB start --

	DRV_WriteReg32(IDC_UART_DLL, freq_div & 0xFF);
	DRV_WriteReg32(IDC_UART_DLM, (freq_div >> 8) & 0xFF);

	DRV_WriteReg32(IDC_UART_SAMPLE_COUNT, sample_count - 1);
	DRV_WriteReg32(IDC_UART_SAMPLE_POINT, (sample_count - 1) >> 1);

	// orig: Add SAMPLE_COUNT by 1 for bit[0], bit[2], bit[4], bit[6] (8'b01010101)
	// align CONSYS UART shift issue, add SAMPLE_COUNT by 1 for bit[0], bit[2], bit[4], bit[5], bit[6] (8'b01110101)
	DRV_WriteReg32(IDC_UART_FRACDIV_L_TX, 0x75);
	DRV_WriteReg32(IDC_UART_FRACDIV_L_RX, 0x75);
	// orig: Add SAMPLE_COUNT by 1 for STOP bits (2'b10)
	// align CONSYS UART shift issue, no add SAMPLE_COUNT by 1 for STOP bits (2'b00)
	DRV_WriteReg32(IDC_UART_FRACDIV_M_TX, 0x0);
	DRV_WriteReg32(IDC_UART_FRACDIV_M_RX, 0x0);

	DRV_WriteReg32_NPW(IDC_UART_LCR, tmp_lcr | 0x3);
	// -- DLAB end --
}


void drv_idc_set_fifo_trigger(kal_uint8 rx_threshold)
{
	DRV_WriteReg32_NPW(IDC_UART_RXTRIG, rx_threshold);
	return;
}

void drv_idc_set_pm_config(kal_uint8 pm_idx, kal_uint8 priority, kal_uint8 priority_bit_en, kal_uint8 pattern, kal_uint8 pattern_bit_en)
{
	IRQMask(MD_IRQID_IDC_PM_INT);

	// Use DSB to make sure that pattern match is turned off before setting pattern
	DRV_WriteReg32_NPW(IDC_PRI_BITEN(pm_idx), 0);
	//Data_Sync_Barrier();
	
	//Data_Sync_Barrier();

	// PRI_BITEN should be set lastly
	DRV_WriteReg32(IDC_PAT(pm_idx), pattern);
	DRV_WriteReg32(IDC_PAT_BITEN(pm_idx), pattern_bit_en);
	DRV_WriteReg32(IDC_PRI(pm_idx), priority);
	DRV_WriteReg32_NPW(IDC_PRI_BITEN(pm_idx), priority_bit_en);

	IRQUnmask(MD_IRQID_IDC_PM_INT);
}

void drv_idc_get_pm_config(kal_uint8 pm_idx, kal_uint8 *priority, kal_uint8 *priority_bit_en, kal_uint8 *pattern, kal_uint8 *pattern_bit_en)
{
	*priority = DRV_Reg8(IDC_PRI(pm_idx));
	*priority_bit_en = DRV_Reg8(IDC_PRI_BITEN(pm_idx));
	*pattern = DRV_Reg8(IDC_PAT(pm_idx));
	*pattern_bit_en = DRV_Reg8(IDC_PAT_BITEN(pm_idx));
}

void drv_idc_send_event(IDC_EVENT_T event, kal_bool sleep_mode)
{
	kal_uint32 i = 0;

#ifdef ATEST_DRV_ENABLE
//	DT_IDC_PRINTF("drv_idc: send event\n\r");
#endif
	
	if (sleep_mode)
	{
		// Clear scheduled events
		drv_idc_stop_event(0xFFFF);
		
#ifndef ATEST_DRV_ENABLE
//		SleepDrv_SleepDisable(idc_sleep_handle);
		SleepDrv_LockSleep(SLEEP_CTL_IDC, SMP);
#endif

		IRQMask(MD_IRQID_IDC_PM_INT);
		// clear PM configuration
		for (i = 0; i < 4; ++i)
		{
			DRV_WriteReg32(IDC_PRI_BITEN(i), 0);
		}
	}
	
	kal_hrt_take_itc_lock(KAL_ITC_IDC, KAL_INFINITE_WAIT);
	before_poll_time_SE = ust_get_current_time();
	//********protect critical section*******

	DRV_WriteReg32(IDC_UART_BASE, event.data[0]);
	DRV_WriteReg32(IDC_UART_BASE, event.data[1]);
	
	//********protect critical section*******
	after_poll_time_SE = ust_get_current_time();
	kal_hrt_give_itc_lock(KAL_ITC_IDC);

	if (sleep_mode)
	{
		// Turn on ETBEI
		DRV_WriteReg32_NPW(IDC_UART_IER, IDC_UART_IER_ETBEI);
	}
	
	return;
}

void drv_idc_schedule_event(IDC_EVENT_T event)
{
	kal_uint32 i = 0, sram_full_flag = 0, buf_displace_happen_flag = 0, put_in_buf_flag = 0;
	
	kal_hrt_take_itc_lock(KAL_ITC_IDC, KAL_INFINITE_WAIT);
	before_poll_time_SCH = ust_get_current_time();
	//********protect critical section*******
	idc_ctrl_enter(IDC_CTRL_LOCK);
	idc_port.schedule_state = IDC_RUN;
	
	event.offset = event.offset & 0xFFFFF;

	/*	if(((event.offset > idc_port.phy_time)
		&& ((event.offset - idc_port.phy_time) > 614400)) 
		|| ((event.offset < idc_port.phy_time) 
		&& ((1048575 - idc_port.phy_time + event.offset) > 614400)))*/
	if(TIME_DIFF_EXCEED(event.offset, idc_port.phy_time, 614400))
	{
		kal_hrt_give_itc_lock(KAL_ITC_IDC);
		dhl_trace(TRACE_INFO, 0, IDC_SCHEDULE_OVER_10MS_MSG, idc_port.phy_time, event.offset, event.data[0], event.data[1]);
		IDC_ASSERT(0); // Time offset must not larger than 10ms
	}

	if(idc_port.event_cnt < 32)
	{
		idc_port.event_cnt++;
		if(idc_port.event_usage_bit_map != 0xFFFF)	// SRAM isn't full
		{
			// Find empty event
			while (1)
			{
				if ((1 << idc_port.event_w_index) & idc_port.event_usage_bit_map)
				{
					idc_port.event_w_index++;
					if (idc_port.event_w_index == 16) idc_port.event_w_index = 0;
				}
				else
				{
					break;
				}
			}
			
			// Set event data
			DRV_WriteReg32(IDC_CTRL_EVT_DATA(idc_port.event_w_index), (event.data[0] + (event.data[1] << 8)));

			// Set time stamps para & trigger event
			DRV_WriteReg32(IDC_CTRL_EVENT_SETETING(idc_port.event_w_index), event.offset + (1 << 31));

			// Log TX information
			//dhl_trace(TRACE_INFO, 0, IDC_SCHEDULE_2_MSG, event.offset, event.data[0], event.data[1]);

			// Record event_offset & event_data in the table
			idc_port.event_offset_table[idc_port.event_w_index] = event.offset;
			idc_port.event_data_table[idc_port.event_w_index] = event.data[0] + (event.data[1] << 8);

			// Record the number and usage bitmap for the scheduler
			idc_port.event_usage_bit_map |= (1 << idc_port.event_w_index);

			// Update idc_port.event_longest_time
			if(idc_port.event_cnt == 1)
			{
				idc_port.event_longest_index = idc_port.event_w_index;
				idc_port.event_longest_time = event.offset;
			}
			if(TIME_DIFF_WITHIN(event.offset, idc_port.event_longest_time, 614400))
/*			if(((event.offset > idc_port.event_longest_time)
				&& ((event.offset - idc_port.event_longest_time) <=614400)) 
				|| (((event.offset < idc_port.event_longest_time) 
				&& ((0xFFFFF - idc_port.event_longest_time + event.offset) <= 614400))))*/
			{
				idc_port.event_longest_index = idc_port.event_w_index;
				idc_port.event_longest_time = event.offset;
			}

			idc_port.event_w_index++;
			if (idc_port.event_w_index == 16) idc_port.event_w_index = 0;
		}
		else	//SRAM is full, we need to put event into event_buffer
		{
			sram_full_flag = 1;
			//Log SRAM is FULL information
			//dhl_trace(TRACE_INFO, 0, IDC_SRAM_FULL_DATA_IN_EVENT_BUFFER);
			
			// Replace event in SRAM with incoming event, and put event into event_buffer
			if(TIME_DIFF_WITHIN(idc_port.event_longest_time, event.offset, 614400))
/*			if(((idc_port.event_longest_time > event.offset)
				&&((idc_port.event_longest_time - event.offset) <= 614400)) 
				|| ((idc_port.event_longest_time < event.offset) 
				&& ((1048575 - event.offset + idc_port.event_longest_time) <= 614400)))*/ 
			{
				// If event is triggered and being processing, just wait...
				while(((DRV_Reg32(IDC_CTRL_SCH_STATUS) >> (idc_port.event_longest_index * 2)) & 0x3) == 0x3);
				// Longest_offset_evt haven't been triggered, we need to stop evt before we set data&time stamps
				if(((DRV_Reg32(IDC_CTRL_SCH_STATUS) >> (idc_port.event_longest_index * 2)) & 0x3) == 0x2)
				{
					// Stop longest_offset_evt
					drv_idc_stop_event((0x1 << idc_port.event_longest_index));
					
					//put event into event_buffer
					idc_port.event_pending_offset_table[idc_port.event_pending_cnt] = idc_port.event_longest_time;
					idc_port.event_pending_data_table[idc_port.event_pending_cnt] = idc_port.event_data_table[idc_port.event_longest_index];
					idc_port.event_pending_cnt++; 
					//Log information of event in event buffer
					buf_displace_happen_flag = 1;
					//dhl_trace(TRACE_INFO, 0, IDC_DATA_IN_EVENT_BUFFER_DISPLACE_HAPPEN, idc_port.event_longest_time, (idc_port.event_data_table[idc_port.event_longest_index] & 0xFF), (idc_port.event_data_table[idc_port.event_longest_index] >> 8));

					
					// Set event data
					DRV_WriteReg32(IDC_CTRL_EVT_DATA(idc_port.event_longest_index), (event.data[0] + (event.data[1] << 8)));
					// Set time stamps para & trigger event
					DRV_WriteReg32(IDC_CTRL_EVENT_SETETING(idc_port.event_longest_index), event.offset + (1 << 31));				

					// Record event_offset & event_data in the table
					idc_port.event_offset_table[idc_port.event_longest_index] = event.offset;
					idc_port.event_data_table[idc_port.event_longest_index] = event.data[0] + (event.data[1] << 8);
				
					//update idc_port.event_longest_time
					idc_port.event_longest_time = event.offset;
					for(i = 0; i<16; i++)
					{
						if(TIME_DIFF_WITHIN(idc_port.event_offset_table[i], idc_port.event_longest_time, 614400))
/*						if((idc_port.event_offset_table[i] > idc_port.event_longest_time) || 
							((idc_port.event_offset_table[i] < idc_port.event_longest_time) 
							&& ((1048575 - idc_port.event_longest_time + idc_port.event_offset_table[i]) <= 614400)))*/
						{
							idc_port.event_longest_time = idc_port.event_offset_table[i];
							idc_port.event_longest_index = i;
						}
					}
				}
				// Longest_offset_evt have been triggered, we reset the usage_bit_map & directly set data&time stamps
				else if(((DRV_Reg32(IDC_CTRL_SCH_STATUS) >> (idc_port.event_longest_index * 2)) & 0x3) == 0x0)
				{
					idc_port.event_cnt--;
					// Set event data
					DRV_WriteReg32(IDC_CTRL_EVT_DATA(idc_port.event_longest_index), (event.data[0] + (event.data[1] << 8)));
				
					// Set time stamps para
					DRV_WriteReg32(IDC_CTRL_EVENT_SETETING(idc_port.event_longest_index), event.offset + (1 << 31));				

					// Record event_offset & event_data in the table
					idc_port.event_offset_table[idc_port.event_longest_index] = event.offset;
					idc_port.event_data_table[idc_port.event_longest_index] = event.data[0] + (event.data[1] << 8);
				
					//update idc_port.event_longest_time
					idc_port.event_longest_time = event.offset;
				}
			}

			//Incoming event is large than idc_port.event_longest_time
			else
			{
				//Whether incoming event's offset is over 1ms than idc_port.phy_time
				if(TIME_DIFF_WITHIN(event.offset, idc_port.phy_time, 61440))
/*				if(((event.offset > idc_port.phy_time) 
					&& ((event.offset - idc_port.phy_time) <= 61440))  
					|| ((event.offset < idc_port.phy_time) 
					&& (((1048575 - idc_port.phy_time) + event.offset) <= 61440)))*/	
					IDC_ASSERT(0);	// Set over 16 events in 1ms 
				// Put incoming event into event_buffer
				idc_port.event_pending_offset_table[idc_port.event_pending_cnt] = event.offset;
				idc_port.event_pending_data_table[idc_port.event_pending_cnt] = event.data[0] + (event.data[1] << 8);
				idc_port.event_pending_cnt++;
				//Log information of event in event_buffer
				put_in_buf_flag = 1;
				//dhl_trace(TRACE_INFO, 0, IDC_DATA_IN_EVENT_BUFFER, event.offset, event.data[0], event.data[1]);
			}
		}
	}

	else //el1c put over 32 events to drv_idc
		IDC_ASSERT(0);

	idc_ctrl_leave(IDC_CTRL_LOCK);
	
	//********protect critical section*******
	after_poll_time_SCH = ust_get_current_time();
	kal_hrt_give_itc_lock(KAL_ITC_IDC);

	if(sram_full_flag == 1)
		dhl_trace(TRACE_INFO, 0, IDC_SRAM_FULL_DATA_IN_EVENT_BUFFER);
	if(buf_displace_happen_flag == 1)
		dhl_trace(TRACE_INFO, 0, IDC_DATA_IN_EVENT_BUFFER_DISPLACE_HAPPEN, idc_port.event_longest_time, (idc_port.event_data_table[idc_port.event_longest_index] & 0xFF), (idc_port.event_data_table[idc_port.event_longest_index] >> 8));
	if(put_in_buf_flag == 1)		
		dhl_trace(TRACE_INFO, 0, IDC_DATA_IN_EVENT_BUFFER, event.offset, event.data[0], event.data[1]);
	return;
}
void drv_idc_schedule_gps_blank_event(IDC_EVENT_T event, kal_bool gps_mode)
{
	
	kal_hrt_take_itc_lock(KAL_ITC_IDC, KAL_INFINITE_WAIT);
	before_poll_time_GPS = ust_get_current_time();
	//********protect critical section*******
	event.offset = event.offset & 0xFFFFF;
	
	if(gps_mode == KAL_TRUE)
	{
		DRV_WriteReg32(IDC_CTRL_GPS_EVENT_ON, event.offset + (1 << 31));
		//dhl_trace(TRACE_INFO, 0, IDC_GPS_BLANK_MSG , gps_mode, DRV_Reg(IDC_CTRL_GPS_EVENT_STATUS));
		#ifdef IDC_DEBUG
			MSG(MSG_ERR, "gps event on, set_para: ADDR = 0x%x, Offset = %x\n\r", 
			IDC_CTRL_GPS_EVENT_ON, time_base);
		#endif		
	}
	else
	{
		DRV_WriteReg32(IDC_CTRL_GPS_EVENT_OFF, event.offset + (1 << 31));
		//dhl_trace(TRACE_INFO, 0, IDC_GPS_BLANK_MSG , gps_mode, DRV_Reg(IDC_CTRL_GPS_EVENT_STATUS));
		#ifdef IDC_DEBUG
			MSG(MSG_ERR, "gps event off, set_para: ADDR = 0x%x, Offset = %x\n\r", 
			IDC_CTRL_GPS_EVENT_OFF, time_base);
		#endif	
	}
	//********protect critical section********	
	after_poll_time_GPS = ust_get_current_time();
	kal_hrt_give_itc_lock(KAL_ITC_IDC);
	
	dhl_trace(TRACE_INFO, 0, IDC_GPS_BLANK_MSG , gps_mode, DRV_Reg(IDC_CTRL_GPS_EVENT_STATUS));
	
	return;
}

void drv_idc_schedule_update(kal_uint32 time)
{
	kal_uint32 i = 0, j = 0;
	kal_uint32 evt_pend_cnt = 0;
	kal_uint32 bitmap32 = 0, scheduler_status = 0, expired_evt_status = 0, expired_evt_flag = 0;
#if !defined(__MAUI_BASIC__)
	kal_uint32 tx_cnt = 0;
#endif	
	//kal_uint32 wrap_case = 0;
	/*kal_uint32 current_phy_time = 0;
	DRV_Reg32(LTE_TIMER_FN_READ0);	
	current_phy_time = DRV_Reg32(LTE_TIMER_STIME_READ0);*/

	kal_hrt_take_itc_lock(KAL_ITC_IDC, KAL_INFINITE_WAIT);
	before_poll_time_U = ust_get_current_time();
	//********protect critical section*******
	
	// Get phy_time from EL1C & fetch the first 20bits
	idc_port.phy_time = time & 0x000FFFFF;

	// Log PHY_TIME information
	//dhl_trace(TRACE_INFO, 0, IDC_SCHEDULE_UPDATE_MSG, idc_port.phy_time);

	if(!(_idc_atomic_try_lock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_UPDATE)))
	{
		after_poll_time_U = ust_get_current_time();
		kal_hrt_give_itc_lock(KAL_ITC_IDC);
		return;
	}
//	dhl_trace(TRACE_INFO, 0, IDC_GET_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_UPDATE", __FUNCTION__, __LINE__);

	//directly unlock atomic&return and do nothing if schedule_update after slp_ntf
	if(idc_port.main_state == IDC_IN_SLEEP)
	{
		_idc_atomic_unlock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_UPDATE);
//		dhl_trace(TRACE_INFO, 0, IDC_RELEASE_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_UPDATE", __FUNCTION__, __LINE__);
		after_poll_time_U = ust_get_current_time();
		kal_hrt_give_itc_lock(KAL_ITC_IDC);
		return;
	}	
	
	idc_ctrl_enter(IDC_CTRL_LOCK);
	idc_in_workaround = 0;
	idc_in_eventpending = 0;

	// Workaround for CONSYS send too many msg
#if !defined(ATEST_DRV_ENABLE)
	
	if (idc_rx_suspend == KAL_TRUE)
	{
		idc_in_workaround = 1;
		if (idc_port.main_state == IDC_SUSPEND)
		{
			if (++idc_rx_suspend_timer >= 10)
			{	
				//dhl_trace(TRACE_INFO, 0, IDC_RX_RESUME_MSG);
				idc_rx_suspend = KAL_FALSE;
				// Clear RX FIFO and enalbe RX interrupt				
				IRQMask(MD_IRQID_IDC_UART_IRQ);
				DRV_WriteReg32_NPW(IDC_UART_FCR, IDC_UART_FCR_RXTRIG | IDC_UART_FCR_CLRR | IDC_UART_FCR_FIFOEN);
				DRV_WriteReg32(IDC_UART_IER, IDC_UART_IER_ERBFI);
				// Change idc_port state
				idc_port.main_state = IDC_IN_USE;
				IRQUnmask(MD_IRQID_IDC_UART_IRQ);
				//dhl_trace(TRACE_INFO, 0, IDC_UNMASK_UART_ISR_MSG , __FUNCTION__);
			}	
		}
		else
		{
			//dhl_trace(TRACE_INFO, 0, IDC_WAKEUP_RX_RESUME_MSG);
			idc_rx_suspend = KAL_FALSE;
		}	
	}
#endif	

	_idc_atomic_unlock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_UPDATE);

//	dhl_trace(TRACE_INFO, 0, IDC_RELEASE_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_UPDATE", __FUNCTION__, __LINE__);

	//before_poll_time_E = ust_get_current_time();

	// Stop uncompleted events
	if(idc_port.event_usage_bit_map != 0x0)
	{
		for(i = 0; i<16; i++)
		{
			if ((1 << i) & idc_port.event_usage_bit_map)
			{
				if(TIME_DIFF_WITHIN(idc_port.phy_time, idc_port.event_offset_table[i], 614400))
/*				if (((idc_port.phy_time > idc_port.event_offset_table[i]) 
					&& ((idc_port.phy_time - idc_port.event_offset_table[i]) <= 614400))
					|| (idc_port.phy_time < idc_port.event_offset_table[i]) 
					&& ((idc_port.event_offset_table[i] - idc_port.phy_time) > 614400))*/
				{
					/*wrap_case = 0;
					if ((idc_port.phy_time < idc_port.event_offset_table[i])&&((idc_port.event_offset_table[i] - idc_port.phy_time) <= 614400))
							wrap_case = 1;
					dhl_trace(TRACE_INFO, 0, IDC_STOP_AND_FLUSH_EVENT_MSG, idc_port.event_data_table[i], idc_port.event_offset_table[i], idc_port.phy_time, current_phy_time, wrap_case);*/
					idc_port.event_cnt--;
					idc_port.event_usage_bit_map &= ~(0x1 << i);
					idc_port.event_data_table[i] = 0;
					idc_port.event_offset_table[i] = 0;
				}
			}
		}
		
		for(j = 0; j < 16; j++)
		{
			if((~(idc_port.event_usage_bit_map) >> j) & 0x1)
				bitmap32 = (bitmap32 | (0x3 << (j*2)));
		}
		scheduler_status = DRV_Reg32(IDC_CTRL_SCH_STATUS);
		expired_evt_status = bitmap32 & scheduler_status;
		if(expired_evt_status)
		{
			#ifdef ATEST_DRV_ENABLE
			DT_IDC_PRINTF("drv_idc: [Warning] Some events are expired in scheduler & stopped. Status = %x \n\r", expired_evt_status);
			while(1);
			#endif
			expired_evt_flag = 1;
			//dhl_trace(TRACE_INFO, 0, IDC_EVENTS_STILL_BUSY_MSG, expired_evt_status, scheduler_status);
		}
		drv_idc_stop_event(~(idc_port.event_usage_bit_map));
		
	}
	//after_poll_time_E = ust_get_current_time();
	//poll_time_E = after_poll_time_E - before_poll_time_E;
	//dhl_trace(TRACE_INFO, 0, IDC_PROFILE_MSG, __FUNCTION__, poll_time_E, before_poll_time_E, after_poll_time_E);
	
	if(idc_port.event_usage_bit_map == 0)
		idc_port.schedule_state = IDC_PLAN;
	
	// Check if there are pending events in event buffer
	if(idc_port.event_pending_cnt > 0)
	{
		idc_in_eventpending = 1;
		j = 0;
		evt_pend_cnt = idc_port.event_pending_cnt;
		idc_port.schedule_state = IDC_RUN;
		for(i = 0; i< evt_pend_cnt; i++)
		{
			// Start the pending events
			if(idc_port.event_usage_bit_map != 0xFFFF)	// SRAM isn't full
			{
				// Find empty event
				while (1)
				{
					if ((1 << idc_port.event_w_index) & idc_port.event_usage_bit_map)
					{
						idc_port.event_w_index++;
						if (idc_port.event_w_index == 16) idc_port.event_w_index = 0;
					}
					else
					{
						break;
					}
				}
			
				// Set event data
				DRV_WriteReg32(IDC_CTRL_EVT_DATA(idc_port.event_w_index), idc_port.event_pending_data_table[i]);
			
				// Set time stamps para
				DRV_WriteReg32(IDC_CTRL_EVENT_SETETING(idc_port.event_w_index), idc_port.event_pending_offset_table[i] + (1 << 31));

				// Record event_offset & event_data in the table
				idc_port.event_offset_table[idc_port.event_w_index] = idc_port.event_pending_offset_table[i];
				idc_port.event_data_table[idc_port.event_w_index] = idc_port.event_pending_data_table[i];

				//Log re-schedule information
				//dhl_trace(TRACE_INFO, 0, IDC_RESCHEDULE_EVENT_IN_EVENT_BUFFER, idc_port.event_pending_offset_table[i], (idc_port.event_pending_data_table[i] & 0xFF), (idc_port.event_pending_data_table[i] >> 8));
				
				// Update usage bitmap for the scheduler
				idc_port.event_usage_bit_map |= (1 << idc_port.event_w_index);

				// Update idc_port.event_longest_time
				if(TIME_DIFF_WITHIN(idc_port.event_offset_table[idc_port.event_w_index], idc_port.event_longest_time, 614400))
/*				if(((idc_port.event_offset_table[idc_port.event_w_index] > idc_port.event_longest_time) 
					&& ((idc_port.event_offset_table[idc_port.event_w_index] - idc_port.event_longest_time) <= 614400))
					|| ((idc_port.event_offset_table[idc_port.event_w_index] < idc_port.event_longest_time)
					&& (idc_port.event_longest_time - idc_port.event_offset_table[idc_port.event_w_index] > 614400)))*/
				{
					idc_port.event_longest_index = idc_port.event_w_index;
					idc_port.event_longest_time = idc_port.event_offset_table[idc_port.event_w_index];
				}
				idc_port.event_w_index++;
				if (idc_port.event_w_index == 16) idc_port.event_w_index = 0;

				idc_port.event_pending_cnt--;
			}	
			// SRAM is full, check pending event offset sanity check
			else
			{
				if(TIME_DIFF_WITHIN(idc_port.event_pending_offset_table[i], idc_port.phy_time, 61440))
/*				if(((idc_port.event_pending_offset_table[i] > idc_port.phy_time)
					&& (idc_port.event_pending_offset_table[i] - idc_port.phy_time <= 61440)) 
					|| ((idc_port.event_pending_offset_table[i] < idc_port.phy_time) 
					&& (((0xFFFFF - idc_port.phy_time) + idc_port.event_pending_offset_table[i]) <= 61440)))*/	
					IDC_ASSERT(0);	// Set over 16 events in 1ms 
				//re-arrange event buffer 
				idc_port.event_pending_data_table[j] =  idc_port.event_pending_data_table[i];
				idc_port.event_pending_offset_table[j++] = idc_port.event_pending_offset_table[i];

			}
			 
		}
	}

	idc_ctrl_leave(IDC_CTRL_LOCK);
	//********protect critical section*******
	after_poll_time_U = ust_get_current_time();
	kal_hrt_give_itc_lock(KAL_ITC_IDC);

	#if !defined(__MAUI_BASIC__)	
	//get tx count
	tx_cnt = DRV_Reg32(IDC_CTRL_DATA_CNT) & 0xFFFF;

	//print tx_count log
	if(idc_port.schedule_state == IDC_RUN)
		dhl_trace(TRACE_INFO, 0, IDC_TX_COUNT_MSG, tx_cnt);
	#endif

	if((idc_in_workaround == 1) && (idc_rx_suspend == KAL_FALSE))
		dhl_trace(TRACE_INFO, 0, IDC_RX_RESUME_MSG);
	if(expired_evt_flag == 1)
		dhl_trace(TRACE_INFO, 0, IDC_EVENTS_STILL_BUSY_MSG, expired_evt_status, scheduler_status);
	
	return;
}

void drv_idc_stop_event(kal_uint32 bitmap)
{
	kal_uint32 bitmap32 = 0 , j = 0;

	DRV_WriteReg32_NPW(IDC_CTRL_SCH_STOP, bitmap);
	stop_status_check = DRV_Reg32(IDC_CTRL_SCH_STOP);
	
	for(j = 0; j < 16; j++)
	{
		if((bitmap >> j) & 0x1)
			bitmap32 = (bitmap32 | (0x3 << (j*2)));
	}
	//before_poll_time_S = ust_get_current_time();
	POLL_STATUS(DRV_Reg32(IDC_CTRL_SCH_STATUS) & bitmap32);
	//after_poll_time_S = ust_get_current_time();
	//poll_time_S = after_poll_time_S - before_poll_time_S;
	
	//dhl_trace(TRACE_INFO, 0, IDC_POLL_TIME_MSG, poll_time_S, before_poll_time_S, after_poll_time_S);
	return;
}

void drv_idc_purge(UART_buffer dir)
{
	if(dir == TX_BUF)
		DRV_WriteReg32(IDC_UART_FCR, IDC_UART_FCR_RXTRIG | IDC_UART_FCR_CLRT | IDC_UART_FCR_FIFOEN);
	else
		DRV_WriteReg32(IDC_UART_FCR, IDC_UART_FCR_RXTRIG | IDC_UART_FCR_CLRR | IDC_UART_FCR_FIFOEN);
}

void drv_idc_get_schedule_status(kal_uint32 schedule_status)
{
	schedule_status = DRV_Reg32(IDC_CTRL_SCH_STATUS);
	
	#ifdef ATEST_DRV_ENABLE
		dhl_trace(TRACE_INFO, 0, IDC_SCHEDULE_STATUS_MSG, schedule_status);
	#endif

	return;
}

kal_bool drv_idc_check_event_send_out(void)
{
	kal_uint32 schedule_status = 0;

	// check that schedule is busy or not
	drv_idc_get_schedule_status(schedule_status);
	if(schedule_status) return KAL_FALSE;

	// check that IDC TX FIFO has data or not
	if(DRV_Reg32(IDC_UART_LSR) & IDC_UART_LSR_TEMT) return KAL_TRUE;

	return KAL_FALSE;
}

DCL_STATUS drv_idc_set_pin_config(IDC_PIN_MODE_T pin_mode)
{
	DCL_STATUS return_value = STATUS_FAIL;


	if (pin_mode == IDC_INTERNAL_PIN)
	{
		#if !defined(ATEST_DRV_ENABLE)
			dhl_trace(TRACE_INFO, 0, IDC_INTERNAL_PIN_MSG);
		#else
			kal_sprintf(idc_dbg_str, "drv_idc: Switch to internal pins\n\r");
			DT_IDC_PRINTF(idc_dbg_str);
		#endif
		
		idc_port.pin_mode = IDC_INTERNAL_PIN;

		// Switch to internal pins, use NPW
		#if defined(MT6763)
			DRV_WriteReg32_NPW(0xC0005000 + 0x6C0, DRV_Reg32(0xC0005000+ 0x6C0) & ~(0x10));
		#elif defined(MT6739)|| defined(MT6765)||defined(MT6761)||defined(MT6768)
			DRV_WriteReg32_NPW(0xC0005000 + 0x600, DRV_Reg32(0xC0005000+ 0x600) & ~(0x02));
		#elif defined(MT6771)
			DRV_WriteReg32_NPW(0xC0005000 + 0x6C0, DRV_Reg32(0xC0005000+ 0x6C0) & ~(0x10));

			return_value = STATUS_OK;
		#endif 
	}
	else if (pin_mode == IDC_EXTERNAL_PIN)
	{
		#if !defined(ATEST_DRV_ENABLE)
			dhl_trace(TRACE_INFO, 0, IDC_EXTERNAL_PIN_MSG);
		#else
			kal_sprintf(idc_dbg_str, "drv_idc: Switch to external pins\n\r");
			DT_IDC_PRINTF(idc_dbg_str);
		#endif

		idc_port.pin_mode = IDC_EXTERNAL_PIN;

		// Switch to external pins, use NPW
		#if defined(MT6763)
			DRV_WriteReg32_NPW(0xC0005000 + 0x6C0, DRV_Reg32(0xC0005000+ 0x6C0) | 0x10);
			//GPIO 111 => PTA_RX, GPIO110 => PTA_TX
			DRV_WriteReg32(0xC0005000 + 0x3D0, DRV_Reg(0xC0005000 + 0x3D0) & ~(0xFF000000));
			DRV_WriteReg32(0xC0005000 + 0x3D0, DRV_Reg(0xC0005000 + 0x3D0) | 0x22000000);
			return_value = STATUS_OK;
			
		#elif defined(MT6739)
			DRV_WriteReg32_NPW(0xC0005000 + 0x600, DRV_Reg32(0xC0005000+ 0x600) | 0x02);
			//GPIO 1 => PTA_RX, GPIO 2 => PTA_TX
			DRV_WriteReg32(0xC0005000 + 0x300, DRV_Reg(0xC0005000 + 0x300) & ~(0x0FF0));
			DRV_WriteReg32(0xC0005000 + 0x300, DRV_Reg(0xC0005000 + 0x300) | 0x0220);
			return_value = STATUS_OK;
			
		#elif defined(MT6765)||defined(MT6761)
			DRV_WriteReg32_NPW(0xC0005000 + 0x600, DRV_Reg32(0xC0005000+ 0x600) | 0x02);
			//GPIO 105 => PTA_RX, GPIO 106 => PTA_TX
			DRV_WriteReg32(0xC0005000 + 0x3D0, DRV_Reg(0xC0005000 + 0x3D0) & ~(0x0FF0));
			DRV_WriteReg32(0xC0005000 + 0x3D0, DRV_Reg(0xC0005000 + 0x3D0) | 0x0660);
			return_value = STATUS_OK;
		#elif defined(MT6768)
			DRV_WriteReg32_NPW(0xC0005000 + 0x600, DRV_Reg32(0xC0005000+ 0x600) | 0x02);
			//GPIO 105 => PTA_RX, GPIO 106 => PTA_TX
			DRV_WriteReg32(0xC0005000 + 0x3D0, DRV_Reg(0xC0005000 + 0x3D0) & ~(0x0FF0));
			DRV_WriteReg32(0xC0005000 + 0x3D0, DRV_Reg(0xC0005000 + 0x3D0) | 0x0550);
			return_value = STATUS_OK;
		#endif
		
	}

	// Clear TX/RX FIFO
	DRV_WriteReg32_NPW(IDC_UART_FCR, IDC_UART_FCR_RXTRIG | IDC_UART_FCR_FIFOINI);

	IRQUnmask(MD_IRQID_IDC_UART_IRQ);
	
	return return_value;
}

DCL_STATUS drv_idc_get_pin_config(IDC_PIN_MODE_T *pin_mode)
{
	DCL_STATUS return_value = STATUS_FAIL;
	
	#if defined(MT6763) || defined(MT6739)|| defined(MT6765) || defined(MT6771)||defined(MT6761)||defined(MT6768)
		*pin_mode = idc_port.pin_mode;
		return_value = STATUS_OK;
	#endif
	
	return return_value;
}

// Enable ilm: drv_idc_set_ilm(KAL_TRUE)
// Disable ilm: drv_idc_set_ilm(KAL_FALSE)
void drv_idc_set_ilm(kal_bool ilm_mode)
{
	idc_ilm_on = ilm_mode;
	if(ilm_mode == KAL_TRUE)
	{
		dhl_trace(TRACE_INFO, 0, IDC_ILM_ENABLE_MSG);	
	
		return;		
	}
	else
	{
		dhl_trace(TRACE_INFO, 0, IDC_ILM_DISABLE_MSG);
		
		return;
	}	
}

kal_uint32 idc_isr_count = 0;
void idc_uart_lisr(kal_uint32 vector)
{
//	kal_uint32 IIR_T = 0,IER_T = 0,LSR_T= 0;
	kal_uint32 mask;

	IER_L = DRV_Reg(IDC_UART_IER) & IDC_UART_IER_INT_MASK;
	IIR_L = DRV_Reg(IDC_UART_IIR) & IDC_UART_IIR_INT_MASK;
	LSR_L = DRV_Reg(IDC_UART_LSR);

	// Turn off all INT
	DRV_WriteReg32_NPW(IDC_UART_IER, IDC_UART_IER_ALLOFF);

	mask = kal_hrt_SaveAndSetIRQMask();
	if(!(_idc_atomic_try_lock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_LISR)))
	{

		if(IIR_L & IDC_UART_IIR_THR_EMPTY)
		{
			#ifndef ATEST_DRV_ENABLE
			SleepDrv_UnlockSleep(SLEEP_CTL_IDC, SMP);
			#endif
		}
		kal_hrt_RestoreIRQMask(mask);
		return;
	}
//	dhl_trace(TRACE_INFO, 0, IDC_GET_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_LISR", __FUNCTION__, __LINE__);	

	IRQMask(MD_IRQID_IDC_UART_IRQ);

	if (IIR_L & IDC_UART_IIR_THR_EMPTY)
	{

#ifndef ATEST_DRV_ENABLE
		SleepDrv_UnlockSleep(SLEEP_CTL_IDC, SMP);
#endif
//		IIR_T = DRV_Reg(IDC_UART_IIR) & IDC_UART_IIR_INT_MASK;
//		IER_T = DRV_Reg(IDC_UART_IER) & IDC_UART_IER_INT_MASK;
//		LSR_T = DRV_Reg(IDC_UART_LSR);
		IRQUnmask(MD_IRQID_IDC_UART_IRQ);
		_idc_atomic_unlock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_LISR);
		kal_hrt_RestoreIRQMask(mask);
//		dhl_trace(TRACE_INFO, 0, IDC_RELEASE_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_LISR", __FUNCTION__, __LINE__);
//		dhl_trace(TRACE_INFO, 0, IDC_LISR_STA_MSG , IIR_L, IER_L, LSR_L, IIR_T, IER_T, LSR_T);
		return;
	}
	else if	(idc_port.main_state == IDC_IN_SLEEP)
	{
		IRQUnmask(MD_IRQID_IDC_UART_IRQ);
		_idc_atomic_unlock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_LISR);
		kal_hrt_RestoreIRQMask(mask);
//		dhl_trace(TRACE_INFO, 0, IDC_RELEASE_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_LISR", __FUNCTION__, __LINE__);

		return;
	}
	else if (IIR_L & IDC_UART_IIR_INT_INVALID)
	{
		// Restore enable interrupt
		DRV_WriteReg32_NPW(IDC_UART_IER, IER_L);
		IRQUnmask(MD_IRQID_IDC_UART_IRQ);
		_idc_atomic_unlock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_LISR);
		kal_hrt_RestoreIRQMask(mask);
//		dhl_trace(TRACE_INFO, 0, IDC_RELEASE_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_LISR", __FUNCTION__, __LINE__);
		return;
	}

	idc_lisr_count++;
	if (idc_lisr_count == 20)
	{
		idc_lisr_count = 0;
	}

	_idc_atomic_unlock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_LISR);
	kal_hrt_RestoreIRQMask(mask);
//	dhl_trace(TRACE_INFO, 0, IDC_RELEASE_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_LISR", __FUNCTION__, __LINE__);
	kal_activate_hisr_index(IDC_UART_HISR);
	return;
}

void idc_uart_hisr(void)
{
	kal_uint16 RXTRIG;
	kal_uint32 mask, i = 0;
	idc_in_hisr = KAL_TRUE;

	IIR_H = DRV_Reg(IDC_UART_IIR) & IDC_UART_IIR_INT_MASK;
	LSR_H = DRV_Reg(IDC_UART_LSR);
	RXTRIG = DRV_Reg(IDC_UART_RXTRIG);
	
#if defined(ATEST_DRV_ENABLE)
//		kal_sprintf(idc_dbg_str, "drv_idc: HISR %d, IIR = %x\n\r", ++idc_isr_count, IIR);
//		DT_IDC_PRINTF(idc_dbg_str);
#endif

	idc_hisr_time[idc_hisr_count] = ust_get_current_time();
	idc_hisr_count++;
	if (idc_hisr_count == 20)
	{
		idc_hisr_count = 0;
	}

	mask = kal_hrt_SaveAndSetIRQMask();
	if(!(_idc_atomic_try_lock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_HISR)))
	{
		kal_hrt_RestoreIRQMask(mask);
		return;
	}
//	dhl_trace(TRACE_INFO, 0, IDC_GET_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_HISR", __FUNCTION__, __LINE__);

	if(idc_port.main_state == IDC_IN_SLEEP)
	{
		_idc_atomic_unlock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_HISR);
		kal_hrt_RestoreIRQMask(mask);
//		dhl_trace(TRACE_INFO, 0, IDC_RELEASE_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_HISR", __FUNCTION__, __LINE__);

		return;
	}
	
	idc_send_rx_data_by_ilm();
	
	if (KAL_FALSE == idc_read_RBR)
	{
		#if !defined(ATEST_DRV_ENABLE)
		dhl_trace(TRACE_ERROR, 0, IDC_RX_LISR_MSG, IIR_L, IER_L, LSR_L);
		dhl_trace(TRACE_ERROR, 0, IDC_RX_HISR_MSG, IIR_H, LSR_H, RXTRIG, idc_port.main_state, idc_port.owner_id, idc_port.intr_en);
		#else
		kal_sprintf(idc_dbg_str, "drv_idc: HISR without Read Data, IIR = %x, LSR = %x, RXTRIG = %x, (%d, %d, %d)\n\r", 
			IIR_H, LSR_H, RXTRIG, idc_port.main_state, idc_port.owner_id, idc_port.intr_en);
		DT_IDC_PRINTF(idc_dbg_str);
		#endif
	}
	/*else if (!(IIR_H & IDC_UART_IIR_RDT))
	{
		#if !defined(ATEST_DRV_ENABLE)
		dhl_trace(TRACE_ERROR, 0, IDC_RX_WARNING_MSG, IIR_H, LSR_H, RXTRIG, idc_port.main_state, idc_port.owner_id, idc_port.intr_en);
		#else
		kal_sprintf(idc_dbg_str, "drv_idc: Exception occur, IIR = %x, LSR = %x, RXTRIG = %x, (%d, %d, %d)\n\r",
			IIR_H, LSR_H, RXTRIG, idc_port.main_state, idc_port.owner_id, idc_port.intr_en);
		DT_IDC_PRINTF(idc_dbg_str);
		#endif
	}*/
	else if ((LSR_H == 0) | (RXTRIG == 0));
	
	idc_read_RBR = KAL_FALSE;
	idc_in_hisr = KAL_FALSE;
	MM_Sync();
	IRQUnmask(MD_IRQID_IDC_UART_IRQ);
	
	// Enable RX interrupt
	DRV_WriteReg32_NPW(IDC_UART_IER, IDC_UART_IER_ERBFI);
	_idc_atomic_unlock(&idc_drv_atom_lock,IDC_ATLOCK_PWR_HISR);
	kal_hrt_RestoreIRQMask(mask);
//	dhl_trace(TRACE_INFO, 0, IDC_RELEASE_ATOMIC_LOCK_MSG , "IDC_ATLOCK_PWR_HISR", __FUNCTION__, __LINE__);

	if(idc_ilm_on == KAL_TRUE)
	{
		i = 0;
		while(ilm_num > 0)
		{
			ilm_num--;
			msg_send_inline6(MOD_IDC_UART_HISR, idc_port.owner_id, DRIVER_PS_SAP | INLINE_ILM_FLAG_SAP, MSG_ID_IDC_RX_DATA, (void *) &ilm_buf[i++], sizeof(IDC_ILM_MSG_T));
		}
	}
	else
		ilm_num = 0;
	return;
}

void idc_send_rx_data_by_ilm(void)
{

	kal_uint32 max_rx_count = 8;
#if !defined(__MAUI_BASIC__)
	kal_uint32 count = 0;	
#endif
	if(ilm_num !=0)
		dhl_trace(TRACE_INFO, 0, IDC_ILMNUM_ABNORMAL_MSG , __LINE__);
	while(DRV_Reg(IDC_UART_LSR) & IDC_UART_LSR_DR)
	{
		max_rx_count--;
		// read bytes from IDC UART FIFO to SW buffer
		idc_port.rx_buf = (idc_port.rx_buf << 16) | (1 << 8) | DRV_Reg8(IDC_UART_RBR);
		idc_read_RBR = KAL_TRUE;

		idc_rx_history[idc_rx_count] = (kal_uint8)(idc_port.rx_buf & 0xFF);
		idc_rx_history_time[idc_rx_count] = ust_get_current_time();
		
		/*#if !defined(ATEST_DRV_ENABLE)
			dhl_trace(TRACE_INFO, 0, IDC_RX_MSG, idc_port.rx_buf & 0xFF);
		#endif*/
		
#if defined(ATEST_DRV_ENABLE)
//		DT_IDC_PRINTF("drv_idc: receive %x\n\r", idc_port.rx_buf & 0xFF);
#endif
		idc_rx_count++;
		if (idc_rx_count == 20)
		{
			idc_rx_count = 0;
			#if !defined(ATEST_DRV_ENABLE)
			dhl_trace(TRACE_INFO, 0, IDC_RX_HISTORY_MSG,
				idc_rx_history[0], idc_rx_history[1], idc_rx_history[2], idc_rx_history[3], idc_rx_history[4],
				idc_rx_history[5], idc_rx_history[6], idc_rx_history[7], idc_rx_history[8], idc_rx_history[9],
				idc_rx_history[10], idc_rx_history[11], idc_rx_history[12], idc_rx_history[13], idc_rx_history[14],
				idc_rx_history[15], idc_rx_history[16], idc_rx_history[17], idc_rx_history[18], idc_rx_history[19]
				);
			#else
			//kal_sprintf(idc_dbg_str, "drv_idc: Receive %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x\n\r", 
			//	idc_rx_history[0], idc_rx_history[1], idc_rx_history[2], idc_rx_history[3], idc_rx_history[4],
			//	idc_rx_history[5], idc_rx_history[6], idc_rx_history[7], idc_rx_history[8], idc_rx_history[9],
			//	idc_rx_history[10], idc_rx_history[11], idc_rx_history[12], idc_rx_history[13], idc_rx_history[14],
			//	idc_rx_history[15], idc_rx_history[16], idc_rx_history[17], idc_rx_history[18], idc_rx_history[19]
			//	);
			DT_IDC_PRINTF(idc_dbg_str);
			#endif
			
#if !defined(ATEST_DRV_ENABLE)
			// Check if the IDC commands receive too frequently
			if ((idc_rx_history_time[19] - idc_rx_history_time[0]) < 100)
			{
				idc_rx_suspend = KAL_TRUE;
				// Reset timer and start to wait 10 ms (EL1 will call event_start for each 1 ms)
				idc_rx_suspend_timer = 0;
				//IRQMask(MD_IRQID_IDC_UART_IRQ);
				// Disable RX interrupt
				DRV_WriteReg32(IDC_UART_IER, IDC_UART_IER_ALLOFF);
				// Check writing register is finished
				while (DRV_Reg32(IDC_UART_IER) != IDC_UART_IER_ALLOFF)
				{
					#if !defined(__MAUI_BASIC__)
						dhl_trace(TRACE_INFO, 0, IDC_WAIT_IER_OFF_MSG, count++);
					#endif
				}
				// Clean RX FIFO
				DRV_WriteReg32_NPW(IDC_UART_FCR, IDC_UART_FCR_RXTRIG | IDC_UART_FCR_FIFOINI);
				dhl_trace(TRACE_INFO, 0, IDC_CLEAN_RXFIFO_MSG , __FUNCTION__);
				// Change idc_port state
				idc_port.main_state = IDC_SUSPEND;
				// Use DSB to ensure that the interrupt is disabled before leaving HISR
				MM_Sync();
				// Print warining message
				dhl_trace(TRACE_ERROR, 0, IDC_RX_SUSPEND_MSG);
				// Call CONSYS RX_OFF callback for EL1C request
				if (idc_port.pm_cb_handle[1].callback_func)
					idc_port.pm_cb_handle[1].callback_func(idc_port.pm_cb_handle[1].private_data);
				return;
			}			
#endif
		}

		// if there are two-byte data in fifo and data is valid, send them by ilm
		if((idc_port.rx_buf & 0x01010101) == 0x01000101)
		{
			IDC_ILM_MSG_T tmp;
			tmp.type  = (idc_port.rx_buf & 0x001E0000) >> 17;
			tmp.msg = ((idc_port.rx_buf & 0x00E00000) >> 21) | ((idc_port.rx_buf & 0x000000FE) << 2);
			#if defined(ATEST_DRV_ENABLE)
				DT_IDC_PRINTF("%x %x\n\r", tmp.type, tmp.msg);
			#endif
			if (tmp.type == 0)
                        {
                                if (KAL_TRUE == idc_count_start)
				{
                                        idc_80211_rx_count++;
					dhl_trace(TRACE_INFO, 0, IDC_RX_80211_RX_MSG, tmp.type, tmp.msg);
				}
                        }
                        else if (tmp.type == 1)
                        {
                                if (KAL_TRUE == idc_count_start)
                                {
					idc_80211_tx_count++;
					dhl_trace(TRACE_INFO, 0, IDC_RX_80211_TX_MSG, tmp.type, tmp.msg);
				}
                        }
			else
			{
				if(idc_ilm_on == KAL_TRUE)
				{
					#if !defined(ATEST_DRV_ENABLE)
						dhl_trace(TRACE_INFO, 0, IDC_RX_SEND_ILM_MSG, idc_port.rx_buf, tmp.type, tmp.msg);
					#else
						kal_sprintf(idc_dbg_str, "drv_idc: MSG Send to EL1: %x, type:%x, msg:%x\n\r", idc_port.rx_buf, tmp.type, tmp.msg);
						DT_IDC_PRINTF(idc_dbg_str);
					#endif
					ilm_buf[ilm_num++] = tmp;
					if(ilm_num > 4)
						dhl_trace(TRACE_INFO, 0, IDC_ILMNUM_ABNORMAL_MSG , __LINE__);
					//msg_send_inline6(MOD_IDC_UART_HISR, idc_port.owner_id, DRIVER_PS_SAP | INLINE_ILM_FLAG_SAP, MSG_ID_IDC_RX_DATA, (void *) &tmp, sizeof(IDC_ILM_MSG_T));
				}
				else
				{
					#if !defined(ATEST_DRV_ENABLE)
						dhl_trace(TRACE_INFO, 0, IDC_RX_NOT_SEND_ILM_MSG, idc_port.rx_buf, tmp.type, tmp.msg);
					#else
						//kal_sprintf(idc_dbg_str, "drv_idc: MSG Not Send to EL1: %x, type:%x, msg:%x\n\r", idc_port.rx_buf, tmp.type, tmp.msg);
						DT_IDC_PRINTF(idc_dbg_str);
					#endif
				}
			}

			idc_port.rx_buf = 0;
		}
		//rx_buf receive 2 abnormal byte
		else if((idc_port.rx_buf & 0x01010101) == 0x01000100)
		{
			dhl_trace(TRACE_ERROR, 0, IDC_RX_ABNORMAL_MSG, idc_port.rx_buf);
		}
		else if((idc_port.rx_buf & 0x01010101) == 0x01010101)
		{
			dhl_trace(TRACE_ERROR, 0, IDC_RX_ABNORMAL_MSG, idc_port.rx_buf);
		}
		if (max_rx_count == 0)
			return;
	}

	return;
}

void idc_pm_lisr(kal_uint32 vector)
{
	IRQMask(MD_IRQID_IDC_PM_INT);
	kal_activate_hisr_index(IDC_PM_HISR);

	return;
}

void idc_pm_hisr(void)
{
	kal_uint32 i, pm_status;

	idc_in_pm_hisr = KAL_TRUE;

	pm_status = DRV_Reg32(IDC_PM_STATUS);
#ifdef ATEST_DRV_ENABLE
//	DT_IDC_PRINTF("drv_idc: PM HISR %d, pm_idx = %x\n\r", ++idc_isr_count, pm_status);
#endif
	for (i = 0; i < 4; ++i)
	{
		if (pm_status & (1 << i))
		{
			// Callback to EL1
			if (idc_port.pm_cb_handle[i].callback_func)
				idc_port.pm_cb_handle[i].callback_func(idc_port.pm_cb_handle[i].private_data);
		}
	}
	// Write 1 to clear all status
	DRV_WriteReg32_NPW(IDC_PM_STATUS, 0xf);
	idc_in_pm_hisr = KAL_FALSE;
#ifdef ATEST_DRV_ENABLE
	MM_Sync();
#endif
	IRQUnmask(MD_IRQID_IDC_PM_INT);

	return;
}

int drv_idc_register_pm_callback(kal_uint8 pm_idx, IDC_DRV_TO_EL1_CALLBACK func_ptr , kal_bool private_data) 
{
	ASSERT(pm_idx < IDC_PM_NUM) ;

#ifdef ATEST_DRV_ENABLE
	DT_IDC_PRINTF("Register PM Callback, pm_idx = %d\n\r", pm_idx);
#endif
	idc_port.pm_cb_handle[pm_idx].callback_func = func_ptr;
	idc_port.pm_cb_handle[pm_idx].private_data = private_data;
	MM_Sync();
	return KAL_SUCCESS ; 
}

int drv_idc_unregister_pm_callback(kal_uint8 pm_idx) 
{
	ASSERT(pm_idx < IDC_PM_NUM) ;

#ifdef ATEST_DRV_ENABLE
	DT_IDC_PRINTF("Unregister PM Callback, pm_idx = %d\n\r", pm_idx);
#endif
	idc_port.pm_cb_handle[pm_idx].callback_func = NULL;
	idc_port.pm_cb_handle[pm_idx].private_data= 0;
	MM_Sync();
	return KAL_SUCCESS ; 
}
