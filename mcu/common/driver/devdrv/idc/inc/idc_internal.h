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
 *   idc_internal.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Header file of DCL (Driver Common Layer) for IDC.
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/
#ifndef __IDC_INTERNAL_H__
#define __IDC_INTERNAL_H__

#include "dcl.h"

#include "kal_general_types.h"
#include "drv_comm.h"

#include "dcl_idc.h"

#define IDC_PM_NUM 4

void drv_idc_init(kal_bool is_sm);
void drv_idc_init_uart(void);
void drv_idc_init_isr(void);
void drv_idc_uart_activate(void);
void drv_idc_get_support(IDC_SUPPORT_T *support);
void drv_idc_conn_txrx_count(kal_bool is_start);
void drv_idc_open(kal_uint32 mod_id);
void drv_idc_close(void);
void drv_idc_set_dcb_config(IDC_CTRL_DCB_CONFIG_T idc_config);
void drv_idc_get_dcb_config(IDC_CTRL_DCB_CONFIG_T *DCB);
void drv_idc_set_baudrate(kal_uint32 baudrate);
void drv_idc_set_fifo_trigger(kal_uint8 rx_threshold);
void drv_idc_set_pm_config(kal_bool start, kal_uint8 priority, kal_uint8 priority_bit_en, kal_uint8 pattern, kal_uint8 pattern_bit_en);
void drv_idc_get_pm_config(kal_bool start, kal_uint8 *priority, kal_uint8 *priority_bit_en, kal_uint8 *pattern, kal_uint8 *pattern_bit_en);
void drv_idc_send_event(IDC_EVENT_T event, kal_bool sleep_mode);
void drv_idc_schedule_event(IDC_EVENT_T event);
void drv_idc_schedule_gps_blank_event(IDC_EVENT_T event, kal_bool gps_mode);
void drv_idc_schedule_update(kal_uint32 time);
void drv_idc_stop_event(kal_uint32 bitmap);
void drv_idc_purge(UART_buffer dir);
void drv_idc_get_schedule_status(kal_uint32 schedule_status);
kal_bool drv_idc_check_event_send_out(void);
DCL_STATUS drv_idc_set_pin_config(IDC_PIN_MODE_T pin_mode);
DCL_STATUS drv_idc_get_pin_config(IDC_PIN_MODE_T *pin_mode);
void idc_uart_lisr(kal_uint32 vector);
void idc_uart_hisr(void);
void idc_pm_lisr(kal_uint32 vector);
void idc_pm_hisr(void);
void idc_send_rx_data_by_ilm(void);
int drv_idc_register_pm_callback(kal_uint8 pm_idx, IDC_DRV_TO_EL1_CALLBACK func_ptr , kal_bool private_data) ;
int drv_idc_unregister_pm_callback(kal_uint8 pm_idx) ;

struct idc_drv_to_el1_callback {	
	IDC_DRV_TO_EL1_CALLBACK callback_func ;
	kal_bool private_data ;
};

typedef struct
{
	kal_uint32		owner_id;
	kal_uint8		main_state;
	kal_bool		intr_en;
	kal_uint8		schedule_state;
	kal_uint8		event_cnt;
	kal_uint8		event_pending_cnt;		// Pend an event when SRAM is full
	kal_uint32		event_offset_table[16];
	kal_uint16		event_data_table[16];
	kal_uint8		event_w_index;
	kal_uint32		event_longest_time;
	kal_uint8		event_longest_index;
	kal_uint16		event_usage_bit_map;
	kal_uint32		event_pending_offset_table[16];	// Store the index that indicates which event is pending
	kal_uint16		event_pending_data_table[16];
	kal_uint32		rx_buf;
	kal_uint32		phy_time;
	IDC_CTRL_DCB_CONFIG_T	DCB;
	IDC_PIN_MODE_T		pin_mode;
	struct idc_drv_to_el1_callback pm_cb_handle[IDC_PM_NUM];
} idc_struct_t;

typedef struct
{
	kal_uint8	type;
	kal_uint16	msg;
} IDC_ILM_MSG_T;

typedef enum
{
	IDC_OPEN,
	IDC_IN_USE,
	IDC_IN_SLEEP,
	IDC_SUSPEND,
	IDC_CLOSED
} IDC_MAIN_STATE_T;

typedef enum
{
	IDC_PLAN,
	IDC_RUN
} IDC_SCHEDULE_STATE_T;
#endif
