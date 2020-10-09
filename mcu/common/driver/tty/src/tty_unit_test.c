#include "kal_public_api.h"
#include "syscomp_config.h"
#include "task_config.h"
#include "sys_test.h"
#include "dcl.h"
#include "qmu_bm_util.h"
#include "drv_msgid.h"

#if !defined ATEST_SYS_TTYCORE
#error "This file is used for system test only."
#endif

/***************************************************************************
                Macro Declaration
 ***************************************************************************/
#define ST_MOD_NAME		"TTYUT"

#define MOD_TTY_UT		MOD_SYS_TEST
#define DRV_TTY_UT		MOD_SYS_TEST
#define MOD_CURRENT		kal_get_active_module_id()

#define UART_DEV_CNT	(uart_max_port - uart_port1 + 1)

#define HW_BUFF_SIZE	8192
#define UT_TEST_SIZE	8000
#define UT_CHUNK_SIZE	512
#define UT_DATA_MASK	0x000000CC

#define DCL_UART_MAGIC_NUM 0x40000000

#define DCL_UART_GET_DEV(_handle) ((DCL_DEV)((_handle) & (~DCL_UART_MAGIC_NUM)))

#define FAIL_MSG(fmt, ...)	do { \
								kal_sprintf(p_ret_err_str, "%s():%s:%d " fmt, __FUNCTION__, __FILE__, __LINE__, ##__VA_ARGS__); \
								*p_ret_err_str_sz = strlen(p_ret_err_str); \
							} while (0)
#define FAIL_MSG_EXT(ext, fmt, ...)	do { \
										kal_sprintf(p_ret_err_str, strcat(ext, "%s():%s:%d " fmt), __FUNCTION__, __FILE__, __LINE__, ##__VA_ARGS__); \
										*p_ret_err_str_sz = strlen(p_ret_err_str); \
									} while (0)
#define MIN(_x, _y) (((_x) > (_y)) ? (_y) : (_x))

#define list_each_gpd_no_tail(_gpd, _first_gpd, _last_gpd) \
												for ( _gpd = _first_gpd; _gpd != _last_gpd; _gpd = QBM_DES_GET_NEXT(_gpd)) 

#define list_each_gpd(_gpd, _first_gpd, _last_gpd) QBM_DES_SET_NEXT(_last_gpd, NULL); \
												for ( _gpd = _first_gpd; _gpd != NULL; _gpd = QBM_DES_GET_NEXT(_gpd)) 
#define list_each_bd(_bd, _first_bd) for (_bd = _first_bd; _bd != NULL; _bd = QBM_DES_GET_NEXT(_bd))

/***************************************************************************
                Data Structure
 ***************************************************************************/
// This flag used to check event occur, and it will be "extern" in dcl_tty.c
kal_bool ut_assert_flag = KAL_FALSE;

typedef struct _UtInstance {
/***********************
	Upper Module
 ***********************/
	// For Receiving Ior From RxCb (New Rx Path)
	tty_io_request_t *Rx_Ior;
 
/***********************
	Driver
 ***********************/
	// RxGpdQue
	void *Rx_first_gpd;
	void *Rx_last_gpd;
	// TxGpdQue
	void *Tx_first_gpd;
	void *Tx_last_gpd;
	// Flag
	kal_bool Need_Tx_done_cb;	
	
/***********************
	Hardware buffer
 ***********************/
	int size;
	int start;
	char HwBuff[HW_BUFF_SIZE];
} UtInstance;

static UtInstance Dev_Mgmt[UART_DEV_CNT];

/***************************************************************************
                Hardware Buffer Function
 ***************************************************************************/
/*
 * Here is a simple hw buffer
 * There is no check for data overflow.
 */
int Hw_GetRemainSpace(DCL_DEV dev)
{
	return HW_BUFF_SIZE - (Dev_Mgmt[dev].start + Dev_Mgmt[dev].size);
}

void Hw_PushData(DCL_DEV dev, const void *src, kal_uint32 size)
{
	char *hwbuff_data_end = Dev_Mgmt[dev].HwBuff + Dev_Mgmt[dev].start + Dev_Mgmt[dev].size;
	kal_mem_cpy(hwbuff_data_end, src, size);
	Dev_Mgmt[dev].size += size;
}

void Hw_PushDataFromTxQue(DCL_DEV dev)
{
	void *gpd_t;
	void *bd_t;
	
	list_each_gpd(gpd_t, Dev_Mgmt[dev].Tx_first_gpd, Dev_Mgmt[dev].Tx_last_gpd) {
		// only push data of gpd with hwo equal to 1
		if (QBM_DES_GET_HWO(gpd_t)) {
			if (QBM_DES_GET_BDP(gpd_t)) {
				list_each_bd(bd_t, QBM_DES_GET_DATAPTR(gpd_t)) {
					Hw_PushData(dev, QBM_DES_GET_DATAPTR(bd_t), QBM_DES_GET_DATALEN(bd_t));
				}
			} else {
				Hw_PushData(dev, QBM_DES_GET_DATAPTR(gpd_t), QBM_DES_GET_DATALEN(gpd_t));
			}
		}
		
		// set hwo to 0
		QBM_DES_CLR_HWO(gpd_t);
	}
}

void Hw_PopData(DCL_DEV dev, void *dest, kal_uint32 size)
{
	char *hwbuff_data_start = Dev_Mgmt[dev].HwBuff + Dev_Mgmt[dev].start;
	kal_mem_cpy(dest, hwbuff_data_start, size);
	Dev_Mgmt[dev].start += size;
	Dev_Mgmt[dev].size -= size;
}

void Hw_PopDataToRxQue(DCL_DEV dev)
{
	void *gpd_t;
	void *bd_t;
	
	list_each_gpd_no_tail(gpd_t, Dev_Mgmt[dev].Rx_first_gpd, Dev_Mgmt[dev].Rx_last_gpd) {
		// check hardware buffer still have data
		if (Dev_Mgmt[dev].size == 0)
			break;
	
		if (QBM_DES_GET_BDP(gpd_t)) {
			list_each_bd(bd_t, QBM_DES_GET_DATAPTR(gpd_t)) {
				kal_uint32 len = MIN(QBM_DES_GET_ALLOW_LEN(bd_t), Dev_Mgmt[dev].size);
				if (len) {
					Hw_PopData(dev, QBM_DES_GET_DATAPTR(bd_t), len);
				}
				QBM_DES_SET_DATALEN(bd_t, len);
			}
		} else {
			kal_uint32 len = MIN(QBM_DES_GET_ALLOW_LEN(gpd_t), Dev_Mgmt[dev].size);
			if (len) {
				Hw_PopData(dev, QBM_DES_GET_DATAPTR(gpd_t), len);
			}
			QBM_DES_SET_DATALEN(gpd_t, len);
		}
		
		// set hwo to 0
		QBM_DES_CLR_HWO(gpd_t);
	}
}

void Hw_ClearBuff(DCL_DEV dev)
{
	kal_mem_set(Dev_Mgmt[dev].HwBuff, 0, HW_BUFF_SIZE);

	Dev_Mgmt[dev].start = 0;
	Dev_Mgmt[dev].size = 0;
}

/***************************************************************************
                Tx/Rx Operator Function
 ***************************************************************************/
void Rx_EnQue(DCL_DEV dev, void *_ior)
{
	void *gpd_t;
	tty_io_request_t *ior = (tty_io_request_t *)_ior;
	
	// Set gpd HWO to 1,only tail gpd HWO to 0. And then En-Q
	list_each_gpd(gpd_t, ior->first_gpd, ior->last_gpd) {
		QBM_DES_SET_HWO(gpd_t);
	}
	QBM_DES_CLR_HWO(ior->last_gpd);
	
	if (!Dev_Mgmt[dev].Rx_first_gpd) {
		Dev_Mgmt[dev].Rx_first_gpd = ior->first_gpd;
		Dev_Mgmt[dev].Rx_last_gpd = ior->last_gpd;
	} else {
		qbmt_common_en_q_rx(
			ior->first_gpd,
			ior->last_gpd,
			&Dev_Mgmt[dev].Rx_first_gpd,
			&Dev_Mgmt[dev].Rx_last_gpd);
	}
}

void Tx_EnQue(DCL_DEV dev, void *_ior)
{
	void *gpd_t;
	tty_io_request_t *ior = (tty_io_request_t *)_ior;
		
	// Set gpd HWO to 1, And then En-Q
	list_each_gpd(gpd_t, ior->first_gpd, ior->last_gpd) {
		QBM_DES_SET_HWO(gpd_t);
	}
	
	if (!Dev_Mgmt[dev].Tx_first_gpd) {
		Dev_Mgmt[dev].Tx_first_gpd = ior->first_gpd;
		Dev_Mgmt[dev].Tx_last_gpd = ior->last_gpd;
	} else {
		QBM_DES_SET_NEXT(Dev_Mgmt[dev].Tx_last_gpd, ior->first_gpd);
	}	
}

void * Rx_DeQueToIor(DCL_DEV dev)
{
	void *ior = NULL;
	void *new_head;
	void *new_tail;
	
	if (Dev_Mgmt[dev].Rx_first_gpd) {
		qbmt_de_q(
			&Dev_Mgmt[dev].Rx_first_gpd,
			&Dev_Mgmt[dev].Rx_last_gpd,
			&new_head,
			&new_tail);
	
		if (new_head) {
			ior = QBM_DES_GET_SW_CTRL_FIELD(new_head);
			((tty_io_request_t *)ior)->first_gpd = new_head;
			((tty_io_request_t *)ior)->last_gpd = new_tail;
		}
	}
	
	return ior;
}

void Rx_Flush_Gpd(DCL_DEV dev)
{
	void *Rx_Ior;
	DCL_HANDLE handle;
		
	handle = DclSerialPort_Open(dev, 0);

	// Using RxCb to return the all GPD of Rx Queue 
	if (Dev_Mgmt[dev].Rx_first_gpd) {
		Rx_Ior = QBM_DES_GET_SW_CTRL_FIELD(Dev_Mgmt[dev].Rx_first_gpd);
		((tty_io_request_t *)Rx_Ior)->first_gpd = Dev_Mgmt[dev].Rx_first_gpd;
		((tty_io_request_t *)Rx_Ior)->last_gpd = Dev_Mgmt[dev].Rx_last_gpd;
		
		DclSerialPort_DrvRx(handle, DRV_TTY_UT, Rx_Ior);
		
		Dev_Mgmt[dev].Rx_first_gpd = 0;
		Dev_Mgmt[dev].Rx_last_gpd = 0;
	}
}

/*
 * This function maybe need to be called after Hw_PushDataFromTxQue() invoked.
 * Because it will flush each gpd without care about whether hwo is set.
 *
 * The Hw_PushDataFromTxQue() will be invoked in driver callback with command "TTY_CMD_PUT_BYTES_IOR"
 */
void Tx_Flush_Gpd(DCL_DEV dev)
{
	void * Tx_Ior;
	DCL_HANDLE handle;
				
	handle = DclSerialPort_Open(dev, 0);
	
	// Using TxDoneCb to return Tx GPD or Free gpds
	if (Dev_Mgmt[dev].Tx_first_gpd) {
		Tx_Ior = QBM_DES_GET_SW_CTRL_FIELD(Dev_Mgmt[dev].Tx_first_gpd);
		((tty_io_request_t *)Tx_Ior)->first_gpd = Dev_Mgmt[dev].Tx_first_gpd;
		((tty_io_request_t *)Tx_Ior)->last_gpd = Dev_Mgmt[dev].Tx_last_gpd;
		
		if (Dev_Mgmt[dev].Need_Tx_done_cb) {
			DclSerialPort_DrvTxDone(handle, DRV_TTY_UT, Tx_Ior);
		} else {
			qbmt_dest_q(Dev_Mgmt[dev].Tx_first_gpd, Dev_Mgmt[dev].Tx_last_gpd);
		}
		
		Dev_Mgmt[dev].Tx_first_gpd = 0;
		Dev_Mgmt[dev].Tx_last_gpd = 0;
	}
}
/***************************************************************************
                Callback Test Function
 ***************************************************************************/
DCL_STATUS 
_drv_handler_cb(
	DCL_DEV dev,
	DCL_CTRL_CMD cmd,
	DCL_CTRL_DATA_T *data)
{
	DCL_STATUS ret_status = STATUS_OK;
    
    switch (cmd)
    {
        case SIO_CMD_INIT:
        case SIO_CMD_OPEN:
		{
			ret_status = STATUS_OK;
		}
            break;        
			
        case SIO_CMD_CLOSE:
        {
            UART_CTRL_CLOSE_T *prCtrlClose;
            prCtrlClose = &(data->rUARTCtrlCLOSE);
			
			// Flush Tx/Rx GPD (In buffer mode, Flush will do nothing because queue is empty
			Tx_Flush_Gpd(dev);
			Rx_Flush_Gpd(dev);
			
			// Clear Need_Tx_done_cb flag
			Dev_Mgmt[dev].Need_Tx_done_cb = KAL_FALSE;
        }
            break;
		
		case SIO_CMD_PUT_BYTES:
		{	// Only for Buffer Mode
			int size;
			UART_CTRL_PUT_BYTES_T *prCtrlPutBytes;
			
			prCtrlPutBytes = &(data->rUARTCtrlPUTBYTES);
			size = MIN(prCtrlPutBytes->u2Length, UT_CHUNK_SIZE);
			
			Hw_PushData(dev, prCtrlPutBytes->puBuffaddr, size);
			prCtrlPutBytes->u2RetSize = size;
		}
			break;
			
		case SIO_CMD_GET_BYTES:
		{	// Only for Buffer Mode
			int size;
			UART_CTRL_GET_BYTES_T *prCtrlGetBytes;
			
			prCtrlGetBytes = &(data->rUARTCtrlGETBYTES);
			size = MIN(prCtrlGetBytes->u2Length, UT_CHUNK_SIZE);
			
			Hw_PopData(dev, prCtrlGetBytes->puBuffaddr, size);
			prCtrlGetBytes->u2RetSize = size;
		}
			break;
			
        case TTY_CMD_NEED_TX_DONE_CB:
        {
            UART_CTRL_NEED_TX_DONE_CB_T *prCtrlNeedTxDoneCb;
            prCtrlNeedTxDoneCb = &(data->rUARTCtrlNeedTxDoneCb);
			
			Dev_Mgmt[dev].Need_Tx_done_cb = prCtrlNeedTxDoneCb->needTxDoneCb;
        }
            break;

        case TTY_CMD_ASSIGN_RX_IOR:
        {
            UART_CTRL_ASSIGN_RX_IOR_T *prCtrlAssignRxIor;
			
            prCtrlAssignRxIor = &(data->rUARTCtrlAssignRxIor);
			
			// En-Q Rx_Ior
			Rx_EnQue(dev, prCtrlAssignRxIor->ior);
        }
            break;
        
        case TTY_CMD_PUT_BYTES_IOR:
		case TTY_CMD_PUT_BYTES_IOR_LIGHT:
        {
			UART_CTRL_PUT_BYTES_IOR_T *prCtrlPutBytesIor;
			
            prCtrlPutBytesIor = &(data->rUARTCtrlPUTBYTESIOR);
		
			// En-Q Tx_Ior
			Tx_EnQue(dev, prCtrlPutBytesIor->putIor);
			
			// Copy GPD data to HwBuff
			Hw_PushDataFromTxQue(dev);
				
        }
            break;

        case TTY_CMD_GET_CHUNK_SIZE:
        {
            UART_CTRL_GET_CHUNK_SIZE_T *prCtrlChunkSize;
            prCtrlChunkSize = &(data->rUARTCtrlGETCHUNKSIZE);
            prCtrlChunkSize->chunkSize = UT_CHUNK_SIZE;
        }
            break;
		case SIO_CMD_SET_OWNER:
		{
			// Flush Tx/Rx GPD
			Tx_Flush_Gpd(dev);
			Rx_Flush_Gpd(dev);
			
			// Clear Need_Tx_done_cb flag
			Dev_Mgmt[dev].Need_Tx_done_cb = KAL_FALSE;
		}
			break;
			
        case SIO_CMD_GET_OWNER_ID:
            break;

        case SIO_CMD_CLR_RX_BUF:
		{
			Rx_Flush_Gpd(dev);
        }
            break;
        
        case SIO_CMD_CLR_TX_BUF:
        {
			Tx_Flush_Gpd(dev);
        }
            break;
		
		case SIO_CMD_GET_TX_AVAIL:
		{	// Only for Buffer Mode
			UART_CTRL_TX_AVAIL_T *prCtrlTxAvail;
			
			prCtrlTxAvail = &(data->rUARTCtrlTXAVAIL);
			
			prCtrlTxAvail->u2RetSize = Hw_GetRemainSpace;
		}
			break;
		
		case SIO_CMD_GET_RX_AVAIL:
		{	// Only for Buffer Mode
			DCL_HANDLE handle;
			UART_CTRL_RX_AVAIL_T *prCtrlRxAvail;
			
			prCtrlRxAvail = &(data->rUARTCtrlRXAVAIL);
			
			prCtrlRxAvail->u2RetSize = Dev_Mgmt[dev].size;
			
			// Here we invoke RxCb to send ilm and clear Notify_ILM flag in Buffer Mode
			handle = DclSerialPort_Open(dev, 0);
			DclSerialPort_DrvRx(handle, DRV_TTY_UT, NULL);
			
			// Get the Notify_ILM and this flag is cleared by above callback
			{
				ilm_struct current_ilm;
			
				msg_receive_extq(&current_ilm);
				if (current_ilm.msg_id != MSG_ID_UART_READY_TO_READ_IND) {
					ret_status = STATUS_FAIL;
				}
				destroy_ilm(&current_ilm);
			}
		}
			break;
			
        default:
        {
            ret_status = STATUS_INVALID_CMD;
        }
            break;
    }
    
    return ret_status;
}

DCL_STATUS
_tx_done_cb(
	DCL_HANDLE handle,
	module_type source_id,
	tty_io_request_t *tx_ior)
{
	// Just Free all gpd
	qbmt_dest_q(tx_ior->first_gpd, tx_ior->last_gpd);
	
	return STATUS_OK;
}

DCL_STATUS
_rx_cb(
	DCL_HANDLE handle,
	module_type source_id,
	tty_io_request_t *rx_ior)
{
	DCL_DEV device;
	
	device = DCL_UART_GET_DEV(handle);
	
	Dev_Mgmt[device].Rx_Ior = rx_ior;
	
	return STATUS_OK;
}

DCL_STATUS
 _drv_state_change_cb(
	DCL_HANDLE handle,
	tty_drv_state_e state)
{
	switch(state)
	{
		case DRV_ST_DETACHED:
		case DRV_ST_ATTACHED:
		default:
			break;
	}
	
	return STATUS_OK;
}

/****************************************************************************
                Test Function
 ***************************************************************************/

#define IS_SUB_CASE_FAIL(_func) (_func(p_ret_err_str, p_ret_err_str_sz) == KAL_FALSE)
/***********************************
		Function Verification
 ***********************************/

kal_bool FuncVeri_Common(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_HANDLE handle;
	DCL_STATUS status;
	
	/*
	 * DclSerialPort_Initialize Test
	 */
	status = DclSerialPort_Initialize();
	if (status != STATUS_OK) {
		FAIL_MSG("Initialize Failed!");
		return KAL_FALSE;
	}
	
	/*
	 * DclSerialPort_Open(device, flags) Test
	 *	   - parameter
	 *		   device	- which port you want to get handle
	 *		   flags	- no used
	 *
	 * 	   - Description
	 *		   This function is used to get handle only 
	 *		   and do nothing with initialization setting of port
	 *
	 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	 * Scenario
	 *     Port range(P)						| Expected result
	 *	   ============================================================
	 *	   P < uart_port1 or P > uart_max_port	| STATUS_INVALID_DEVICE
	 *	   uart_port1 <= P <= uart_max_port		| DCL_UART_MAGIC_NUM | device
	 */
	
	for (device = 0; device < uart_port1; device++) {
		handle = DclSerialPort_Open(device, 0);
		if (handle != STATUS_INVALID_DEVICE) {
			FAIL_MSG("Get handle test Failed! port # = %d", device);
			return KAL_FALSE;			
		}
	}
		
	for (device = uart_port1; device <= uart_max_port; device++) {
		handle = DclSerialPort_Open(device, 0);
		if (handle != (DCL_UART_MAGIC_NUM | device)) {
			FAIL_MSG("Get handle test Failed! port # = %d", device);
			return KAL_FALSE;			
		}
	}

	for (device = uart_max_port + 1; device < uart_port_null; device++) {
		handle = DclSerialPort_Open(device, 0);
		if (handle != STATUS_INVALID_DEVICE) {
			FAIL_MSG("Get handle test Failed! port # = %d", device);
			return KAL_FALSE;			
		}
	}
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool FuncVeri_DrvRegDeRegCb(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_HANDLE handle;
	DCL_STATUS status;	
	SIO_TYPE_T devtype;
	Seriport_HANDLER_T drv_ut_handler;
	
	/*
	 * DclSerialPort_DrvRegisterCb(handle, drv_cb)
	 * 	   - Description
	 *		   Register driver callback function as uart handler for TTYCore.
	 *		   And specify device type(will affect chunkSize & others...
	 *		   This API will make port active.
	 *
	 * DclSerialPort_DrvDeRegisterCb(handle)
	 * 	   - Description
	 *		   Clear uart handler for TTYCore.
	 *		   This API will make port inactive.
	 *
	 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	 * Scenario
	 *     Conditions							| Expected result
	 *	   ============================================================
	 *	   Invalid port							| STATUS_FAIL 
												| STATUS_INVALID_DCL_HANDLE 
												| STATUS_INVALID_DEVICE
	 * 	   valid port
	 *			   drv_cb is null				| STATUS_INVALID_ARGUMENT
	 *			   RegCb/DeRegCb				| STATUS_OK
	 *			   Dup RegCb					| STATUS_ALREADY_OPENED
	 *			   Dup DeRegCb					| STATUS_INVALID_OPERATION
	 *			
	 *	   Other Situations
	 *		   Each port will register with each device type
	 *	
	 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	 * TODO
	 *		DeRegCb with DrvAttach
	 */
	
	device = uart_port_null;
	handle = DclSerialPort_Open(device, 0);
	// Invalid Port Test
	status = DclSerialPort_DrvRegisterCb(handle, &drv_ut_handler);
	if (status != STATUS_FAIL) {
		FAIL_MSG("Driver RegisterCb in Invalid port");
		return KAL_FALSE;
	}
	status = DclSerialPort_DrvDeRegisterCb(handle);
	if (status != STATUS_FAIL) {
		FAIL_MSG("Driver De-RegisterCb in Invalid port");
		return KAL_FALSE;
	}
	
	// Valid Port Test
	for (device = uart_port1; device <= uart_max_port; device++) {
		handle = DclSerialPort_Open(device, 0);
	
		for (devtype = DCL_UART_TYPE; devtype < DCL_UART_DEV_TYPE_MAX; devtype++){
			drv_ut_handler.DevType = devtype;
			
			// Register NULL callback (will assert)
			drv_ut_handler.SeriportHandlerCb = NULL;
			// Check there is no assert
			if (ut_assert_flag) {
				ut_assert_flag = KAL_FALSE; // clear flag
				FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
				return KAL_FALSE;
			}
			status = DclSerialPort_DrvRegisterCb(handle, &drv_ut_handler);
			if ((ut_assert_flag == KAL_FALSE) || (status != STATUS_INVALID_ARGUMENT)) {
				FAIL_MSG("Driver Register NULL Test Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
			ut_assert_flag = KAL_FALSE;
			
			drv_ut_handler.SeriportHandlerCb = _drv_handler_cb;
			
			// First Register callback
			status = DclSerialPort_DrvRegisterCb(handle, &drv_ut_handler);
			if (status != STATUS_OK) {
				FAIL_MSG("Driver Register Callback Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
			
			// Duplicated Register callback
			status = DclSerialPort_DrvRegisterCb(handle, &drv_ut_handler);
			if (status != STATUS_ALREADY_OPENED) {
				FAIL_MSG("Driver Duplicated RegisterCb Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
			
			// First De-Register callback
			status = DclSerialPort_DrvDeRegisterCb(handle);
			if (status != STATUS_OK) {
				FAIL_MSG("Driver De-RegisterCb Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
			
			// Duplicated De-Register callback
			status = DclSerialPort_DrvDeRegisterCb(handle);
			if (status != STATUS_INVALID_OPERATION) {
				FAIL_MSG("Driver Duplicated De-RegisterCb Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
			
			/// TODO: De-RegisterCb with DrvAttach
		}
	}
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool FuncVeri_DrvAtDetach(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_HANDLE handle;
	DCL_STATUS status;	
	SIO_TYPE_T devtype;
	Seriport_HANDLER_T drv_ut_handler;
	
	/*
	 * DclSerialPort_DrvAttach(handle)
	 * DclSerialPort_DrvDetach(handle)
	 * 	   - Description
	 *		   Change port state to attach/detach as state of driver connect/disconnect
	 *
	 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	 * Scenario
	 *     Conditions							| Expected result
	 *	   ============================================================
	 *	   Invalid port							| STATUS_FAIL 
												| STATUS_INVALID_DCL_HANDLE 
												| STATUS_DEVICE_NOT_EXIST
	 * 	   valid port
	 *		   port active
	 *			   Attach/Detach				| STATUS_OK
	 *			   Dup Attach/Detach			| STATUS_OK
	 *		   port inactive
	 *			   Attach/Detach				| STATUS_DEVICE_NOT_EXIST
	 */

	device = uart_port_null;
	handle = DclSerialPort_Open(device, 0);
	// Invalid Port Test
	status = DclSerialPort_DrvAttach(handle);
	if (status != STATUS_FAIL) {
		FAIL_MSG("Driver Attach in Invalid port");
		return KAL_FALSE;
	}
	status = DclSerialPort_DrvDetach(handle);
	if (status != STATUS_FAIL) {
		FAIL_MSG("Driver Detach in Invalid port");
		return KAL_FALSE;
	}

	// Valid Port Test
	for (device = uart_port1; device <= uart_max_port; device++) {
		handle = DclSerialPort_Open(device, 0);
	
		// Port InActive		
		status = DclSerialPort_DrvAttach(handle);
		if (status != STATUS_DEVICE_NOT_EXIST) {
			FAIL_MSG("Driver Attach with port inactive Failed! Device# = %d", device);
			return KAL_FALSE;
		}
		status = DclSerialPort_DrvDetach(handle);
		if (status != STATUS_DEVICE_NOT_EXIST) {
			FAIL_MSG("Driver Detach with port inactive Failed! Device# = %d", device);
			return KAL_FALSE;
		}
		
		drv_ut_handler.SeriportHandlerCb = _drv_handler_cb;
		// Port Active with each device type
		for (devtype = DCL_UART_TYPE; devtype < DCL_UART_DEV_TYPE_MAX; devtype++){
			drv_ut_handler.DevType = devtype;
			
			// Register callback (Active)
			status = DclSerialPort_DrvRegisterCb(handle, &drv_ut_handler);
			if (status != STATUS_OK) {
				FAIL_MSG("Driver Register Callback Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
			
			// First Attach
			status = DclSerialPort_DrvAttach(handle);
			if (status != STATUS_OK) {
				FAIL_MSG("Driver Attach Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
			
			//Duplicated Attach
			status = DclSerialPort_DrvAttach(handle);
			if (status != STATUS_OK) {
				FAIL_MSG("Driver Duplicated Attach Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
			
			// First Detach
			status = DclSerialPort_DrvDetach(handle);
			if (status != STATUS_OK) {
				FAIL_MSG("Driver Detach Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
			
			// Duplicated Detach
			status = DclSerialPort_DrvDetach(handle);
			if (status != STATUS_OK) {
				FAIL_MSG("Driver Duplicated Detach Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
			
			// De-Register callback (InActive port - Avoid next time RegisterCb Failed)
			status = DclSerialPort_DrvDeRegisterCb(handle);
			if (status != STATUS_OK) {
				FAIL_MSG("Driver De-RegisterCb Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
		}
	}
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool FuncVeri_UpInitDeinit(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_HANDLE handle;
	DCL_STATUS status;
	SIO_TYPE_T devtype;
	Seriport_HANDLER_T drv_ut_handler;
		
	/*
	 * DclSerialPort_UpModuleInit(handle, module_id, flag)
	 * DclSerialPort_Control(handle, SIO_CMD_OPEN, data)
	 * 	   - Description
	 *		   Setup owner id and Tx/Rx path in specify port.
	 *		   Send SIO_CMD_OPEN to let Driver know port is opened.
	 *
	 * DclSerialPort_UpModuleDeinit(handle)
	 * DclSerialPort_Control(handle, SIO_CMD_CLOSE, data)
	 * 	   - Description
	 *		   Clear owner id and Tx/Rx path in specify port.
	 *		   Send SIO_CMD_CLOSE to let Driver know port is closed.
	 *
	 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	 * Scenario
	 *     Conditions							| Expected result
	 *	   ============================================================
	 *	   Invalid port							| STATUS_FAIL 
												| STATUS_INVALID_DCL_HANDLE 
												| STATUS_INVALID_DEVICE
	 * 	   valid port
	 *			   Init/Deinit					| STATUS_OK
	 *			   Dup Init/Deinit				| STATUS_ALREADY_OPENED/STATUS_NOT_OPENED
	 *	
	 *	   Other Situations
	 *			   when Driver active/inactive
	 *				   active with each device type
	 *		   Kinds of Initialization
	 * 			   New Tx, New Rx, New Tx&Rx, Conv(New API/ Conv API)
	 *  	   Kinds of De-Initialization
	 *  		   New API/ Conv API)
	 *
	 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	 * TODO
	 *	   In this Test Case, we only test pair of Conv Init & Conv De-Init
	 *											   New Init & New De-Init
	 *	   Uncovering case
	 *		   pair of Conv Init & New De-Init
	 *				   New Init & Conv De-Init
	 *
	 *	   Add them If it is needed.
	 */
	
	// Conv API Test
	{
		UART_CTRL_OPEN_T ur_ctrl_open;	
		UART_CTRL_CLOSE_T ur_ctrl_close;
		char *Error_Tag = "[Conv API][Conv Tx & Conv Rx] ";
	
		ur_ctrl_open.u4OwenrId = MOD_TTY_UT;
		ur_ctrl_close.u4OwenrId = MOD_TTY_UT;
	
		device = uart_port_null;
		handle = DclSerialPort_Open(device, 0);
		// Invalid Port Test
		status = DclSerialPort_Control(handle, SIO_CMD_OPEN, (DCL_CTRL_DATA_T*) &ur_ctrl_open);
		if (status != STATUS_FAIL) {
			FAIL_MSG_EXT(Error_Tag, "Init in Invalid port");
			return KAL_FALSE;
		}
		status = DclSerialPort_Control(handle, SIO_CMD_CLOSE, (DCL_CTRL_DATA_T*) &ur_ctrl_close);
		if (status != STATUS_FAIL) {
			FAIL_MSG_EXT(Error_Tag, "De-Init in Invalid port");
			return KAL_FALSE;
		}
				
		// Valid Port Test
		for (device = uart_port1; device <= uart_max_port; device++) {
			handle = DclSerialPort_Open(device, 0);
		
			// Port InActive	
			{
				// First Init
				status = DclSerialPort_Control(handle, SIO_CMD_OPEN, (DCL_CTRL_DATA_T*) &ur_ctrl_open);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "Init in InActive Valid port");
					return KAL_FALSE;
				}
				
				// Duplicated Init
				status = DclSerialPort_Control(handle, SIO_CMD_OPEN, (DCL_CTRL_DATA_T*) &ur_ctrl_open);
				if (status != STATUS_ALREADY_OPENED) {
					FAIL_MSG_EXT(Error_Tag, "Duplicated Init in InActive Valid port");
					return KAL_FALSE;
				}
				
				// First De-Init
				status = DclSerialPort_Control(handle, SIO_CMD_CLOSE,(DCL_CTRL_DATA_T*)  &ur_ctrl_close);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "De-Init in InActive Valid port");
					return KAL_FALSE;
				}
				
				// Duplicated De-Init
				status = DclSerialPort_Control(handle, SIO_CMD_CLOSE, (DCL_CTRL_DATA_T*) &ur_ctrl_close);
				if (status != STATUS_NOT_OPENED) {
					FAIL_MSG_EXT(Error_Tag, "Duplicated De-Init in InActive Valid port");
					return KAL_FALSE;
				}				
			}
			
			drv_ut_handler.SeriportHandlerCb = _drv_handler_cb;
			// Port Active with each device type
			for (devtype = DCL_UART_TYPE; devtype < DCL_UART_DEV_TYPE_MAX; devtype++){
				drv_ut_handler.DevType = devtype;
				
				// Register callback (Active)
				status = DclSerialPort_DrvRegisterCb(handle, &drv_ut_handler);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "Driver Register Callback Failed! Device# = %d, DevType = %d", device, devtype);
					return KAL_FALSE;
				}
				
				// First Init
				status = DclSerialPort_Control(handle, SIO_CMD_OPEN, (DCL_CTRL_DATA_T*) &ur_ctrl_open);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "Init in Active Valid port");
					return KAL_FALSE;
				}
				
				// Duplicated Init
				status = DclSerialPort_Control(handle, SIO_CMD_OPEN, (DCL_CTRL_DATA_T*) &ur_ctrl_open);
				if (status != STATUS_ALREADY_OPENED) {
					FAIL_MSG_EXT(Error_Tag, "Duplicated Init in Active Valid port");
					return KAL_FALSE;
				}
				
				// First De-Init
				status = DclSerialPort_Control(handle, SIO_CMD_CLOSE, (DCL_CTRL_DATA_T*) &ur_ctrl_close);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "De-Init in Active Valid port");
					return KAL_FALSE;
				}
				
				// Duplicated De-Init
				// Here is return STATUS_OK but not STATUS_NOT_OPENED
				///TODO: if this result of return value is BUG, please fix it.
				status = DclSerialPort_Control(handle, SIO_CMD_CLOSE, (DCL_CTRL_DATA_T*) &ur_ctrl_close);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "Duplicated De-Init in Active Valid port");
					return KAL_FALSE;
				}
			
				// De-Register callback (InActive port - Avoid next time RegisterCb Failed)
				status = DclSerialPort_DrvDeRegisterCb(handle);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "Driver De-RegisterCb Failed! Device# = %d, DevType = %d", device, devtype);
					return KAL_FALSE;
				}
			}
		}
	}
	
	// New API Test
	{
		int i;
		int flag;
		int Path_Case[4] = {
				0,
				TTY_FLAG_NEW_TX,
				TTY_FLAG_NEW_RX,
				TTY_FLAG_NEW_TX | TTY_FLAG_NEW_RX};
		char *Error_Tag[4] = {
				"[New  API][Conv Tx & Conv Rx] ",
				"[New  API][New  Tx & Conv Rx] ",
				"[New  API][Conv Tx & New  Rx] ",
				"[New  API][New  Tx & New  Rx] "};
				
		for (i = 0; i < 4; i++) {
			flag = Path_Case[i];
		
			device = uart_port_null;
			handle = DclSerialPort_Open(device, 0);
			// Invalid Port Test
			status = DclSerialPort_UpModuleInit(handle, MOD_TTY_UT, flag);
			if (status != STATUS_FAIL) {
				FAIL_MSG_EXT(Error_Tag[i], "Init in Invalid port");
				return KAL_FALSE;
			}
			status = DclSerialPort_UpModuleDeinit(handle);
			if (status != STATUS_FAIL) {
				FAIL_MSG_EXT(Error_Tag[i], "De-Init in Invalid port");
				return KAL_FALSE;
			}
					
			
			drv_ut_handler.SeriportHandlerCb = _drv_handler_cb;
			// Valid Port Test
			for (device = uart_port1; device <= uart_max_port; device++) {
				handle = DclSerialPort_Open(device, 0);
			
				// Port InActive	
				{
					// First Init
					status = DclSerialPort_UpModuleInit(handle, MOD_TTY_UT, flag);
					if (status != STATUS_OK) {
						FAIL_MSG_EXT(Error_Tag[i], "Init in InActive Valid port");
						return KAL_FALSE;
					}
					
					// Duplicated Init
					status = DclSerialPort_UpModuleInit(handle, MOD_TTY_UT, flag);
					if (status != STATUS_ALREADY_OPENED) {
						FAIL_MSG_EXT(Error_Tag[i], "Duplicated Init in InActive Valid port");
						return KAL_FALSE;
					}
					
					// First De-Init
					status = DclSerialPort_UpModuleDeinit(handle);
					if (status != STATUS_OK) {
						FAIL_MSG_EXT(Error_Tag[i], "De-Init in InActive Valid port");
						return KAL_FALSE;
					}
					
					// Duplicated De-Init
					status = DclSerialPort_UpModuleDeinit(handle);
					if (status != STATUS_NOT_OPENED) {
						FAIL_MSG_EXT(Error_Tag[i], "Duplicated De-Init in InActive Valid port");
						return KAL_FALSE;
					}				
				}
				
				// Port Active with each device type
				for (devtype = DCL_UART_TYPE; devtype < DCL_UART_DEV_TYPE_MAX; devtype++){
					drv_ut_handler.DevType = devtype;
					
					// Register callback (Active)
					status = DclSerialPort_DrvRegisterCb(handle, &drv_ut_handler);
					if (status != STATUS_OK) {
						FAIL_MSG_EXT(Error_Tag[i], "Driver Register Callback Failed! Device# = %d, DevType = %d", device, devtype);
						return KAL_FALSE;
					}
					
					// First Init
					status = DclSerialPort_UpModuleInit(handle, MOD_TTY_UT, flag);
					if (status != STATUS_OK) {
						FAIL_MSG_EXT(Error_Tag[i], "Init in Active Valid port");
						return KAL_FALSE;
					}
					
					// Duplicated Init
					status = DclSerialPort_UpModuleInit(handle, MOD_TTY_UT, flag);
					if (status != STATUS_ALREADY_OPENED) {
						FAIL_MSG_EXT(Error_Tag[i], "Duplicated Init in Active Valid port");
						return KAL_FALSE;
					}
					
					// First De-Init
					status = DclSerialPort_UpModuleDeinit(handle);
					if (status != STATUS_OK) {
						FAIL_MSG_EXT(Error_Tag[i], "De-Init in Active Valid port");
						return KAL_FALSE;
					}
					
					// Duplicated De-Init
					status = DclSerialPort_UpModuleDeinit(handle);
					if (status != STATUS_NOT_OPENED) {
						FAIL_MSG_EXT(Error_Tag[i], "Duplicated De-Init in Active Valid port");
						return KAL_FALSE;
					}
				
					// De-Register callback (InActive port - Avoid next time RegisterCb Failed)
					status = DclSerialPort_DrvDeRegisterCb(handle);
					if (status != STATUS_OK) {
						FAIL_MSG_EXT(Error_Tag[i], "Driver De-RegisterCb Failed! Device# = %d, DevType = %d", device, devtype);
						return KAL_FALSE;
					}
				}
			}
		}
	}

	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool FuncVeri_UpRegCb(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_HANDLE handle;
	DCL_STATUS status;
	
	/*
	 * DclSerialPort_UpModuleRegisterCb(handle, rx_cb, tx_done_cb, drv_state_change)
	 * 	   - Description
	 *		   Register callback in specify port.
	 *
	 *		   This API is independent with active/inactive.
	 *
	 *	   - Warning
	 *		   Condition 1:
	 *			   This API is for New Upper Module,
	 *			   Conv Upper Module no need to use it.
	 *			   There is nothing verification of it.
	 *
	 *		   Condition 2:
	 *			   This API need to be used after port initializing, 
	 *			   but there is nothing verification of it.
	 *
	 *			   If you use this API before port initialized,
	 *			   it maybe cause some unexpected result.
	 *
	 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	 * Scenario
	 *     Conditions							| Expected result
	 *	   ============================================================
	 *	   Invalid port							| STATUS_FAIL 
												| STATUS_INVALID_DCL_HANDLE 
												| STATUS_INVALID_DEVICE
	 * 	   valid port
	 *		   RegCb/Dup RegCb					| STATUS_OK
	 *		   Assert Condition					| ASSERT
	 *			 - Conv Rx & Rx_Cb is not null
	 *			 - New  Rx & Rx_Cb is null
	 *			 - Conv Tx & Tx_Done_Cb is not null
	 *			 - Conv Tx & Conv Rx & drv_state_change_cb is not null
	 *			 - (New Tx or New Rx) & drv_state_change_cb is null
	 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	 * TODO
	 *	   In this Test Case, we only test for New Tx/Rx case and assertion case
	 *
	 *	   The warning as mentioned above, if that is important, please add it in TTYCore.
	 */
	
	device = uart_port_null;
	handle = DclSerialPort_Open(device, 0);
	// Invalid Port Test
	status = DclSerialPort_UpModuleRegisterCb(handle, _rx_cb, _tx_done_cb, _drv_state_change_cb);
	if (status != STATUS_FAIL) {
		FAIL_MSG("Upper Module RegisterCb in Invalid port");
		return KAL_FALSE;
	}
	
	// Valid Port Test
	for (device = uart_port1; device <= uart_max_port; device++) {
		handle = DclSerialPort_Open(device, 0);
		
		// Init with New Tx & New Rx Path
		status = DclSerialPort_UpModuleInit(handle, MOD_TTY_UT, TTY_FLAG_NEW_TX | TTY_FLAG_NEW_RX);
		if (status != STATUS_OK) {
			FAIL_MSG("Init New Tx & New Rx in Valid port");
			return KAL_FALSE;
		}
		
		// First Register callback
		status = DclSerialPort_UpModuleRegisterCb(handle, _rx_cb, _tx_done_cb, _drv_state_change_cb);
		if (status != STATUS_OK) {
			FAIL_MSG("Upper Module RegisterCb in Valid port");
			return KAL_FALSE;
		}
		// Duplicated Register callback with TxDoneCb is NULL
		status = DclSerialPort_UpModuleRegisterCb(handle, _rx_cb, NULL, _drv_state_change_cb);
		if (status != STATUS_OK) {
			FAIL_MSG("Upper Module Duplicated RegisterCb in Valid port and TxDoneCb is NULL");
			return KAL_FALSE;
		}	
		
		// De-Init - Avoid next time Init Failed)
		status = DclSerialPort_UpModuleDeinit(handle);
		if (status != STATUS_OK) {
			FAIL_MSG("De-Init New Tx & New Rx in Valid port");
			return KAL_FALSE;
		}
	}
	
	// Assertion Case
	// 	   Conv Rx & Rx_Cb is not null
	// 	   Conv Tx & Tx_Done_Cb is not null
	// 	   Conv Tx & Conv Rx & drv_state_change_cb is not null
	for (device = uart_port1; device <= uart_max_port; device++) {
		handle = DclSerialPort_Open(device, 0);
		
		// Init with Conv Tx & Conv Rx Path
		status = DclSerialPort_UpModuleInit(handle, MOD_TTY_UT, 0);
		if (status != STATUS_OK) {
			FAIL_MSG("Init Conv Tx & Conv Rx in Valid port");
			return KAL_FALSE;
		}
		
		// Register callback - Conv Rx & Rx_Cb is not null
		// Check there is no assert
		if (ut_assert_flag) {
			ut_assert_flag = KAL_FALSE; // clear flag
			FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
			return KAL_FALSE;
		}
		status = DclSerialPort_UpModuleRegisterCb(handle, _rx_cb, NULL, NULL);
		if (ut_assert_flag == KAL_FALSE) {
			FAIL_MSG("Upper Module Register Callback");
			return KAL_FALSE;
		}
		ut_assert_flag = KAL_FALSE;
		
		// Register callback - Conv Tx & Tx_Done_Cb is not null
		// Check there is no assert
		if (ut_assert_flag) {
			ut_assert_flag = KAL_FALSE; // clear flag
			FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
			return KAL_FALSE;
		}
		status = DclSerialPort_UpModuleRegisterCb(handle, NULL, _tx_done_cb, NULL);
		if (ut_assert_flag == KAL_FALSE) {
			FAIL_MSG("Upper Module Register Callback");
			return KAL_FALSE;
		}
		ut_assert_flag = KAL_FALSE;
		
		// Register callback - Conv Tx & Conv Rx & drv_state_change_cb is not null
		// Check there is no assert
		if (ut_assert_flag) {
			ut_assert_flag = KAL_FALSE; // clear flag
			FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
			return KAL_FALSE;
		}
		status = DclSerialPort_UpModuleRegisterCb(handle, NULL, NULL, _drv_state_change_cb);
		if (ut_assert_flag == KAL_FALSE) {
			FAIL_MSG("Upper Module Register Callback");
			return KAL_FALSE;
		}
		ut_assert_flag = KAL_FALSE;
		
		// De-Init - Avoid next time Init Failed)
		status = DclSerialPort_UpModuleDeinit(handle);
		if (status != STATUS_OK) {
			FAIL_MSG("De-Init Conv Tx & Conv Rx in Valid port");
			return KAL_FALSE;
		}
	}
	//     New  Rx & Rx_Cb is null
	//     (New Tx or New Rx) & drv_state_change_cb is null
	for (device = uart_port1; device <= uart_max_port; device++) {
		handle = DclSerialPort_Open(device, 0);
		
		// Init with New Rx Path
		status = DclSerialPort_UpModuleInit(handle, MOD_TTY_UT, TTY_FLAG_NEW_RX);
		if (status != STATUS_OK) {
			FAIL_MSG("Init New Rx in Valid port");
			return KAL_FALSE;
		}
		
		// Register callback - New  Rx & Rx_Cb is null
		// Check there is no assert
		if (ut_assert_flag) {
			ut_assert_flag = KAL_FALSE; // clear flag
			FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
			return KAL_FALSE;
		}
		status = DclSerialPort_UpModuleRegisterCb(handle, NULL, _tx_done_cb, _drv_state_change_cb);
		if (ut_assert_flag == KAL_FALSE) {
			FAIL_MSG("Upper Module Register Callback");
			return KAL_FALSE;
		}
		ut_assert_flag = KAL_FALSE;
		
		// Register callback - (New Tx or New Rx) & drv_state_change_cb is null
		// Check there is no assert
		if (ut_assert_flag) {
			ut_assert_flag = KAL_FALSE; // clear flag
			FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
			return KAL_FALSE;
		}
		status = DclSerialPort_UpModuleRegisterCb(handle, _rx_cb, _tx_done_cb, NULL);
		if (ut_assert_flag == KAL_FALSE) {
			FAIL_MSG("Upper Module Register Callback");
			return KAL_FALSE;
		}
		ut_assert_flag = KAL_FALSE;
		
		// De-Init - Avoid next time Init Failed)
		status = DclSerialPort_UpModuleDeinit(handle);
		if (status != STATUS_OK) {
			FAIL_MSG("De-Init New Rx in Valid port");
			return KAL_FALSE;
		}
	}

	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool FuncVeri_ChangeOwner(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	UART_CTRL_OPEN_T ur_ctrl_open;
	UART_CTRL_OWNER_T ur_ctrl_owner;	
	Seriport_HANDLER_T drv_ut_handler;
	
	/*
	 * DclSerialPort_Control(handle, SIO_CMD_SET_OWNER, data)
	 * 	   - Description
	 *		   It will flush all Tx/Rx gpd, then change port owner.
	 *		   
	 *		   This API will be invoked by new owner but not original owner.
	 *		   If port will change to convention owner, you just call this API.
	 *		   Or change to New Path owner, you must call the following two API.
	 *
	 * DclSerialPort_UpModuleReinit(handle, module_id, flag)
	 * 	   - Description
	 *		   Re-Initializing the port setting without closing port.
	 *		   Reset flags and Re-specify the Path of new owner.
	 * DclSerialPort_UpModuleRegisterCb(handle, rx_cb, tx_done_cb, drv_state_change_cb)
	 * 	   - Description
	 *		   Register Callback function for new owner.
	 *
	 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	 * Scenario
	 *     Conditions							| Expected result
	 *	   ============================================================
	 *	   Invalid port							| STATUS_FAIL 
												| STATUS_INVALID_DCL_HANDLE 
												| STATUS_INVALID_DEVICE
	 * 	   valid port
	 *		   port InActive					| STATUS_DEVICE_NOT_EXIST
	 *		   port Active with Attach/Detach	| STATUS_OK
	 *
	 * Other Conditions
	 *	   4 types
	 *		   Conv to Conv, Conv to New, New to Conv, New to New
	 */

	device = uart_port_null;
	handle = DclSerialPort_Open(device, 0);
	ur_ctrl_owner.u4OwenrId = MOD_TTY_UT;
	// Invalid Port Test
	status = DclSerialPort_Control(handle, SIO_CMD_SET_OWNER, (DCL_CTRL_DATA_T*) &ur_ctrl_owner);
	if (status != STATUS_FAIL) {
		FAIL_MSG("Change owner in Invalid port");
		return KAL_FALSE;
	}
	
	
	drv_ut_handler.SeriportHandlerCb = _drv_handler_cb;
	// Valid Port Test
	// Port InActive
	for (device = uart_port1; device <= uart_max_port; device++) {
		handle = DclSerialPort_Open(device, 0);
		
		status = DclSerialPort_Control(handle, SIO_CMD_SET_OWNER, (DCL_CTRL_DATA_T*) &ur_ctrl_owner);
		if (status != STATUS_DEVICE_NOT_EXIST) {
			FAIL_MSG("Change owner with port InActive in Valid port");
			return KAL_FALSE;
		}
	}
	
	// Port Active
	for (device = uart_port1; device <= uart_max_port; device++) {
		handle = DclSerialPort_Open(device, 0);
			
		// Port Active with each device type
		for (devtype = DCL_UART_TYPE; devtype < DCL_UART_DEV_TYPE_MAX; devtype++){
			drv_ut_handler.DevType = devtype;
			
			// Register callback (Active)
			status = DclSerialPort_DrvRegisterCb(handle, &drv_ut_handler);
			if (status != STATUS_OK) {
				FAIL_MSG("Driver Register Callback Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
			
			// Conv to Conv
			{
				char * Error_Tag = "[Conv to Conv] ";
				
				ur_ctrl_open.u4OwenrId = MOD_TTY_UT;
				status = DclSerialPort_Control(handle, SIO_CMD_OPEN, (DCL_CTRL_DATA_T*) &ur_ctrl_open);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "Conventional initialization");
					return KAL_FALSE;
				}
				
				ur_ctrl_owner.u4OwenrId = MOD_TTY_UT;
				status = DclSerialPort_Control(handle, SIO_CMD_SET_OWNER, (DCL_CTRL_DATA_T*) &ur_ctrl_owner);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "Change owner to Conv owner");
					return KAL_FALSE;
				}
				
				status = DclSerialPort_UpModuleDeinit(handle);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "De-initialization");
					return KAL_FALSE;
				}
			}
			// Conv to New
			{
				int flag = TTY_FLAG_NEW_TX | TTY_FLAG_NEW_RX;
				char * Error_Tag = "[Conv to New] ";
				
				ur_ctrl_open.u4OwenrId = MOD_TTY_UT;
				status = DclSerialPort_Control(handle, SIO_CMD_OPEN, (DCL_CTRL_DATA_T*) &ur_ctrl_open);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "Conventional initialization");
					return KAL_FALSE;
				}
				
				ur_ctrl_owner.u4OwenrId = MOD_TTY_UT;
				status = DclSerialPort_Control(handle, SIO_CMD_SET_OWNER, (DCL_CTRL_DATA_T*) &ur_ctrl_owner);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "Change owner to New owner");
					return KAL_FALSE;
				}
				
				status = DclSerialPort_UpModuleReinit(handle, MOD_TTY_UT, flag);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "New owner Re-Init");
					return KAL_FALSE;
				}
				
				status = DclSerialPort_UpModuleRegisterCb(handle, _rx_cb, _tx_done_cb, _drv_state_change_cb);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "New owner Re-Register Callback");
					return KAL_FALSE;
				}
				
				status = DclSerialPort_UpModuleDeinit(handle);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "De-initialization");
					return KAL_FALSE;
				}
			}
			// New to Conv
			{
				int flag = TTY_FLAG_NEW_TX | TTY_FLAG_NEW_RX;
				char * Error_Tag = "[New to Conv] ";
				
				
				status = DclSerialPort_UpModuleInit(handle, MOD_TTY_UT, flag);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "New Module initialization");
					return KAL_FALSE;
				}
				
				status = DclSerialPort_UpModuleRegisterCb(handle, _rx_cb, _tx_done_cb, _drv_state_change_cb);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "New Module Register Callback");
					return KAL_FALSE;
				}
				
				ur_ctrl_owner.u4OwenrId = MOD_TTY_UT;
				status = DclSerialPort_Control(handle, SIO_CMD_SET_OWNER, (DCL_CTRL_DATA_T*) &ur_ctrl_owner);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "Change owner to Conv owner");
					return KAL_FALSE;
				}
								
				status = DclSerialPort_UpModuleDeinit(handle);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "De-initialization");
					return KAL_FALSE;
				}
			}
			// New to New
			{
				int flag = TTY_FLAG_NEW_TX | TTY_FLAG_NEW_RX;
				char * Error_Tag = "[New to New] ";
				
				
				status = DclSerialPort_UpModuleInit(handle, MOD_TTY_UT, flag);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "New Module initialization");
					return KAL_FALSE;
				}
				
				status = DclSerialPort_UpModuleRegisterCb(handle, _rx_cb, _tx_done_cb, _drv_state_change_cb);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "New Module Register Callback");
					return KAL_FALSE;
				}
				
				ur_ctrl_owner.u4OwenrId = MOD_TTY_UT;
				status = DclSerialPort_Control(handle, SIO_CMD_SET_OWNER, (DCL_CTRL_DATA_T*) &ur_ctrl_owner);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "Change owner to New owner");
					return KAL_FALSE;
				}
				
				status = DclSerialPort_UpModuleReinit(handle, MOD_TTY_UT, flag);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "New owner Re-Init");
					return KAL_FALSE;
				}
				
				status = DclSerialPort_UpModuleRegisterCb(handle, _rx_cb, _tx_done_cb, _drv_state_change_cb);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "New owner Re-Register Callback");
					return KAL_FALSE;
				}
				
				status = DclSerialPort_UpModuleDeinit(handle);
				if (status != STATUS_OK) {
					FAIL_MSG_EXT(Error_Tag, "De-initialization");
					return KAL_FALSE;
				}
			}
			
			// De-Register callback (InActive port - Avoid next time RegisterCb Failed)
			status = DclSerialPort_DrvDeRegisterCb(handle);
			if (status != STATUS_OK) {
				FAIL_MSG("Driver De-RegisterCb Failed! Device# = %d, DevType = %d", device, devtype);
				return KAL_FALSE;
			}
		}
	}
	
	
	return KAL_TRUE;
}

kal_bool FuncVeri_Misc(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_HANDLE handle;
	/*
	 * This Test Case Just For Function Coverage.
	 * Nothing to be tested here.
	 */
	
	handle = DclSerialPort_Open(uart_port_null, 0);
	
	DclSerialPort_Close(handle);
	DclSerialPort_Configure(handle, NULL);
	
	return KAL_TRUE;
}

/***********************************
		DataPath Verification
 ***********************************/

 /*
 * In Data path verification,
 * We won't Test with each port, just test one to represent all.
 *
 * In each sub-case,
 * We will Test driver state change callback by initialing upper module 
 * before driver register its callback.
 *
 * Before the operation of data transfer, it never check driver is attach
 * due to driver attach is expected here.
 */
 
/**************
	Sub-Case
 **************/
kal_bool DataPath_Setup(DCL_HANDLE handle, SIO_TYPE_T devtype, int flag) 
{
	DCL_STATUS status;
	Seriport_HANDLER_T drv_ut_handler;
	
	// Upper Module Initialize		
	status = DclSerialPort_UpModuleInit(handle, MOD_TTY_UT, flag);
	if (status != STATUS_OK)
		return KAL_FALSE;

	// Only New Upper Module Need to register callback
	if (flag) {
		switch (flag) {
			case TTY_FLAG_NEW_TX:
				status = DclSerialPort_UpModuleRegisterCb(handle, NULL, _tx_done_cb, _drv_state_change_cb);
				break;
			case TTY_FLAG_NEW_RX:
				status = DclSerialPort_UpModuleRegisterCb(handle, _rx_cb, NULL, _drv_state_change_cb);
				break;
			case TTY_FLAG_NEW_TX | TTY_FLAG_NEW_RX:
				status = DclSerialPort_UpModuleRegisterCb(handle, _rx_cb, _tx_done_cb, _drv_state_change_cb);
				break;
			default:
				status = STATUS_FAIL;
				break;
		}
	
		if (status != STATUS_OK)
			return KAL_FALSE;
	}
	
	// Driver Register callback	& Attach	
	drv_ut_handler.DevType = devtype;
	drv_ut_handler.SeriportHandlerCb = _drv_handler_cb;
	
	status = DclSerialPort_DrvRegisterCb(handle, &drv_ut_handler);
	if (status != STATUS_OK)
		return KAL_FALSE;
		
	status = DclSerialPort_DrvAttach(handle);
	if (status != STATUS_OK)
		return KAL_FALSE;
		
	return KAL_TRUE;
}

kal_bool DataPath_Close(DCL_HANDLE handle)
{
	DCL_STATUS status;

	// Upper Module DeInit
	status = DclSerialPort_UpModuleDeinit(handle);
	if (status != STATUS_OK)
		return KAL_FALSE;
		
	// Driver Detatch
	status = DclSerialPort_DrvDetach(handle);
	if (status != STATUS_OK)
		return KAL_FALSE;
	
	// Driver DeRegister Callback
	status = DclSerialPort_DrvDeRegisterCb(handle);
	if (status != STATUS_OK)
		return KAL_FALSE;
	
	return KAL_TRUE;
}

// Directly Path Sub-Case
kal_bool ConvTxPath(kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	kal_bool data_corrupt;

	// Setup Port & Driver Type
	device = uart_port1;
	devtype = DCL_UART_USB_TYPE;		// Driver type is GPD_DRV_TYPE
	data_corrupt = KAL_FALSE;
	
	// Get handle
	handle = DclSerialPort_Open(device, 0);
	
	// Upper Module Initialize & Driver Register callback and then Attach
	DataPath_Setup(handle, devtype, 0);

	// if Upper Module is conventional & not buffer mode, driver will using ilm to inform upper module driver attach.
	{
		ilm_struct current_ilm;

		msg_receive_extq(&current_ilm);
		if (current_ilm.msg_id != MSG_ID_UART_PLUGIN_IND) {
			destroy_ilm(&current_ilm);
			return KAL_FALSE;
		}
		destroy_ilm(&current_ilm);
	}

	// Conventional Tx Path
	// Send Tx Data -> TxDoneCb -> Get "Ready to Write" ilm
	{
		UART_CTRL_PUT_BYTES_T ur_ctrl_putbytes;
		char SendBuff[UT_TEST_SIZE];
		int datalen;
		int offset;
		int i;
		
		// Clear Hardware Buffer
		Hw_ClearBuff(device);
		
		// Prepare Data to Send
		datalen = UT_TEST_SIZE;
		for (i = 0; i < datalen; i++) {
			SendBuff[i] = i & UT_DATA_MASK;
		}
		
		// Setup Tx Buffer Structure
		offset = 0;
		ur_ctrl_putbytes.u4OwenrId = MOD_TTY_UT;
		ur_ctrl_putbytes.puBuffaddr = SendBuff;
		ur_ctrl_putbytes.u2Length = datalen;
		
		// Sending Data Until Sending Complete
		do {
			// Dummy Upper Module
			{
				DclSerialPort_Control(handle, SIO_CMD_PUT_BYTES, (DCL_CTRL_DATA_T*) &ur_ctrl_putbytes);
				offset += ur_ctrl_putbytes.u2RetSize;
				
				// Update Tx Buffer Structure
				ur_ctrl_putbytes.puBuffaddr = SendBuff + offset;
				ur_ctrl_putbytes.u2Length = datalen - offset;
			}
			
			// Dummy Driver
			{
				// Return Tx GPD to TTYCore
				Tx_Flush_Gpd(device);
			}

			// Dummy Upper Module
			{
				// In conventional path, _tty_tx_done_cb will send ilm to inform upper module.
				// when data buffer have the remaining data still haven't be sent.
				if (offset < datalen) {
					ilm_struct current_ilm;
				
					msg_receive_extq(&current_ilm);
					if (current_ilm.msg_id != MSG_ID_UART_READY_TO_WRITE_IND) {
						destroy_ilm(&current_ilm);
						return KAL_FALSE;
					}
					destroy_ilm(&current_ilm);
				}
			}
		} while (offset < datalen);
		
		// Compare data with Hardware Buffer
		for (i = 0; i < datalen; i++) {
			if (SendBuff[i] ^ Dev_Mgmt[device].HwBuff[i]) {
				data_corrupt = KAL_TRUE;
				break;
			}				
		}
	}
		
	// Upper Module DeInit & Driver Detatch & DeRegister Callback
	DataPath_Close(handle);
	
	// Check data no corrupt
	if (data_corrupt) {
		FAIL_MSG("[ConvTxPath] Data Corrupt in Device# = %d, DevType = %d", device, devtype);
		return KAL_FALSE;
	}
		
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("[ConvTxPath] There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool ConvRxPath(kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	kal_bool data_corrupt;

	// Setup Port & Driver Type
	device = uart_port1;
	devtype = DCL_UART_USB_TYPE;		// Driver type is GPD_DRV_TYPE
	data_corrupt = KAL_FALSE;
	
	// Get handle
	handle = DclSerialPort_Open(device, 0);

	// Upper Module Initialize & Driver Register callback and then Attach
	DataPath_Setup(handle, devtype, 0);

	// if Upper Module is conventional & not buffer mode, driver will using ilm to inform upper module driver attach.
	{
		ilm_struct current_ilm;

		msg_receive_extq(&current_ilm);
		if (current_ilm.msg_id != MSG_ID_UART_PLUGIN_IND) {
			destroy_ilm(&current_ilm);
			return KAL_FALSE;
		}
		destroy_ilm(&current_ilm);
	}
	
	// Conventional Rx Path
	// Prepare Rx Data -> RxCb -> Get "Ready to Read" ilm -> Get Rx Data
	{
		UART_CTRL_GET_BYTES_T ur_ctrl_getbytes;
		char RecvBuff[UT_TEST_SIZE];
		int datalen;
		int offset;
		int i;
		
		// Clear Hardware Buffer
		Hw_ClearBuff(device);
		
		// Prepare Rx Data
		datalen = UT_TEST_SIZE;
		for (i = 0; i < datalen; i++) {
			Dev_Mgmt[device].HwBuff[i] = i & UT_DATA_MASK;
		}
		Dev_Mgmt[device].size = datalen;
		
		// Setup Rx Buffer Structure
		offset = 0;
		ur_ctrl_getbytes.u4OwenrId = MOD_TTY_UT;
		ur_ctrl_getbytes.puBuffaddr = RecvBuff;
		ur_ctrl_getbytes.u2Length = datalen;
		
		// Receiving Data Until Data empty in Hardware
		do {
			// Dummy Hardware Operation
			{
				// Copy Data to Driver Rx GPD in the Rx Queue
				Hw_PopDataToRxQue(device);
			}
			
			// Dummy Driver 
			{
				// Get Rx GPDs(Contain Received Data) by De-Q
				void * ior = Rx_DeQueToIor(device);
				// Rx callback to send ior to tty
				if (ior) {
					DclSerialPort_DrvRx(handle, DRV_TTY_UT, ior);
				}
			}
						
			// Dummy Upper Module
			{
				// In conventional path, _tty_rx_cb will send ilm to inform upper module data ready to read.
				{
					ilm_struct current_ilm;
				
					msg_receive_extq(&current_ilm);
					if (current_ilm.msg_id != MSG_ID_UART_READY_TO_READ_IND) {
						destroy_ilm(&current_ilm);
						return KAL_FALSE;
					}	
					destroy_ilm(&current_ilm);
				}
			
				// Get Data
				DclSerialPort_Control(handle, SIO_CMD_GET_BYTES, (DCL_CTRL_DATA_T*) &ur_ctrl_getbytes);
				offset += ur_ctrl_getbytes.u2RetSize;
				
				// Update Rx Buffer Structure 
				ur_ctrl_getbytes.puBuffaddr = RecvBuff + offset;
				ur_ctrl_getbytes.u2Length = datalen - offset;
			}
		} while (Dev_Mgmt[device].size);
		
		// Compare data with Hardware Buffer
		for (i = 0; i < datalen; i++) {
			if (RecvBuff[i] ^ Dev_Mgmt[device].HwBuff[i]) {
				data_corrupt = KAL_TRUE;
				break;
			}				
		}
	}
		
	// Upper Module DeInit & Driver Detatch & DeRegister Callback
	DataPath_Close(handle);
	
	// Check data no corrupt
	if (data_corrupt) {
		FAIL_MSG("[ConvRxPath] Data Corrupt in Device# = %d, DevType = %d", device, devtype);
		return KAL_FALSE;
	}
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("[ConvRxPath] There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool NewTxPath(kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	kal_bool data_corrupt;

	// Setup Port & Driver Type
	device = uart_port1;
	devtype = DCL_UART_USB_TYPE;		// Driver type is GPD_DRV_TYPE
	data_corrupt = KAL_FALSE;
	
	// Get handle
	handle = DclSerialPort_Open(device, 0);
	
	// Upper Module Initialize & Driver Register callback and then Attach
	DataPath_Setup(handle, devtype, TTY_FLAG_NEW_TX);
	
	// New Tx Path
	// Send Tx Data -> TxDoneCb(For free gpds)
	{
		char SendBuff[UT_TEST_SIZE];
		int datalen;
		int offset;
		int i;
		
		// Clear Hardware Buffer
		Hw_ClearBuff(device);
		
		// Prepare Data to Send
		datalen = UT_TEST_SIZE;
		for (i = 0; i < datalen; i++) {
			SendBuff[i] = i & UT_DATA_MASK;
		}
		
		// Setup Tx Buffer Structure
		offset = 0;
		
		// Sending Data Until Sending Complete
		do {
			// Dummy Upper Module
			{
				void *gpd_t;
				void *p_head;
				void *p_tail;
				tty_io_request_t *ior;
				int gpd_num = 2;
				
				// Create gpds for ior
				// GPD_TYPE: QBM_TYPE_TTY_INT
				// GPD_LEN: QBM_TTY_XXX_DATA_LEN(1024)
				qbmt_alloc_q_no_tail(QBM_TYPE_TTY_INT, gpd_num, &p_head, &p_tail);
				ior = (tty_io_request_t *)QBM_DES_GET_SW_CTRL_FIELD(p_head);
				ior->first_gpd = p_head;
				ior->last_gpd = p_tail;
				
				// Copy data to gpds (the following code only suit for QBM_TYPE_TTY_INT)
				list_each_gpd(gpd_t, ior->first_gpd, ior->last_gpd) {
					int copylen = MIN(QBM_TTY_XXX_DATA_LEN, datalen - offset);
					
					kal_mem_cpy(QBM_DES_GET_DATAPTR(gpd_t), SendBuff + offset, copylen);
					offset += copylen;
					
					QBM_DES_SET_DATALEN(gpd_t, copylen);
				}
				
				DclSerialPort_UpModuleTransmit(handle, ior);
			}
			
			// Dummy Driver
			{
				// Free GPD or Return Tx GPD to Upper Module
				Tx_Flush_Gpd(device);
			}
		} while (offset < datalen);
		
		// Compare data with Hardware Buffer
		for (i = 0; i < datalen; i++) {
			if (SendBuff[i] ^ Dev_Mgmt[device].HwBuff[i]) {
				data_corrupt = KAL_TRUE;
				break;
			}				
		}
	}
		
	// Upper Module DeInit & Driver Detatch & DeRegister Callback
	DataPath_Close(handle);
	
	// Check data no corrupt
	if (data_corrupt) {
		FAIL_MSG("[NewTxPath] Data Corrupt in Device# = %d, DevType = %d", device, devtype);
		return KAL_FALSE;
	}
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("[NewTxPath] There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool NewTxLightPath(kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	kal_bool data_corrupt;

	// Setup Port & Driver Type
	device = uart_port1;
	devtype = DCL_UART_USB_TYPE;		// Driver type is GPD_DRV_TYPE
	data_corrupt = KAL_FALSE;
	
	// Get handle
	handle = DclSerialPort_Open(device, 0);
	
	// Upper Module Initialize & Driver Register callback and then Attach
	DataPath_Setup(handle, devtype, TTY_FLAG_NEW_TX);
	
	// New Tx Path
	// Send Tx Data -> TxDoneCb(For free gpds)
	{
		char SendBuff[UT_TEST_SIZE];
		int datalen;
		int offset;
		int i;
		
		// Clear Hardware Buffer
		Hw_ClearBuff(device);
		
		// Prepare Data to Send
		datalen = UT_TEST_SIZE;
		for (i = 0; i < datalen; i++) {
			SendBuff[i] = i & UT_DATA_MASK;
		}
		
		// Setup Tx Buffer Structure
		offset = 0;
		
		// Sending Data Until Sending Complete
		do {
			// Dummy Upper Module
			{
				void *gpd_t;
				void *p_head;
				void *p_tail;
				tty_io_request_t *ior;
				int gpd_num = 2;
				
				// Create gpds for ior
				// GPD_TYPE: QBM_TYPE_TTY_INT
				// GPD_LEN: QBM_TTY_XXX_DATA_LEN(1024)
				qbmt_alloc_q_no_tail(QBM_TYPE_TTY_INT, gpd_num, &p_head, &p_tail);
				ior = (tty_io_request_t *)QBM_DES_GET_SW_CTRL_FIELD(p_head);
				ior->first_gpd = p_head;
				ior->last_gpd = p_tail;
				
				// Copy data to gpds (the following code only suit for QBM_TYPE_TTY_INT)
				list_each_gpd(gpd_t, ior->first_gpd, ior->last_gpd) {
					int copylen = MIN(QBM_TTY_XXX_DATA_LEN, datalen - offset);
					
					kal_mem_cpy(QBM_DES_GET_DATAPTR(gpd_t), SendBuff + offset, copylen);
					offset += copylen;
					
					QBM_DES_SET_DATALEN(gpd_t, copylen);
				}
				
				DclSerialPort_UpModuleTransmitLight(handle, ior);
			}
			
			// Dummy Driver
			{
				// Free GPD or Return Tx GPD to Upper Module
				Tx_Flush_Gpd(device);
			}
		} while (offset < datalen);
		
		// Compare data with Hardware Buffer
		for (i = 0; i < datalen; i++) {
			if (SendBuff[i] ^ Dev_Mgmt[device].HwBuff[i]) {
				data_corrupt = KAL_TRUE;
				break;
			}				
		}
	}
		
	// Upper Module DeInit & Driver Detatch & DeRegister Callback
	DataPath_Close(handle);
	
	// Check data no corrupt
	if (data_corrupt) {
		FAIL_MSG("[NewTxPath] Data Corrupt in Device# = %d, DevType = %d", device, devtype);
		return KAL_FALSE;
	}
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("[NewTxPath] There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool NewRxPath(kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	kal_bool data_corrupt;

	// Setup Port & Driver Type
	device = uart_port1;
	devtype = DCL_UART_USB_TYPE;		// Driver type is GPD_DRV_TYPE
	data_corrupt = KAL_FALSE;
	
	// Get handle
	handle = DclSerialPort_Open(device, 0);
	
	// Upper Module Initialize & Driver Register callback and then Attach
	DataPath_Setup(handle, devtype, TTY_FLAG_NEW_RX);

	// New Rx Path
	// Send Rx gpds -> RxCb
	{
		char RecvBuff[UT_TEST_SIZE];
		int datalen;
		int offset;
		int i;
		
		// Clear Hardware Buffer
		Hw_ClearBuff(device);
		
		// Prepare Rx Data
		datalen = UT_TEST_SIZE;
		for (i = 0; i < datalen; i++) {
			Dev_Mgmt[device].HwBuff[i] = i & UT_DATA_MASK;
		}
		Dev_Mgmt[device].size = datalen;
		
		// Setup Rx Buffer Structure
		offset = 0;
		
		
		
		// Receiving Data Until Data empty in Hardware
		do {
			// Dummy Upper Module
			{
				void *p_head;
				void *p_tail;
				tty_io_request_t *ior;
				int gpd_num = 2;
				
				// Create gpds for ior
				// GPD_TYPE: QBM_TYPE_TTY_INT
				// GPD_LEN: QBM_TTY_XXX_DATA_LEN(1024)
				qbmt_alloc_q(QBM_TYPE_TTY_INT, gpd_num, &p_head, &p_tail);
				ior = (tty_io_request_t *)QBM_DES_GET_SW_CTRL_FIELD(p_head);
				ior->first_gpd = p_head;
				ior->last_gpd = p_tail;
				
				// Send Rx_Ior to Driver
				DclSerialPort_UpModuleAssignRxIor(handle, ior);
			}
			
			// Dummy Hardware Operation
			{
				// Copy Data to Driver Rx GPD in the Rx Queue
				Hw_PopDataToRxQue(device);
			}
			
			// Dummy Driver 
			{
				// Get Rx GPDs(Contain Received Data) by De-Q
				void * ior = Rx_DeQueToIor(device);
				// Rx callback to send ior to tty
				DclSerialPort_DrvRx(handle, DRV_TTY_UT, ior);
			}
			
			// Dummy Upper Module
			{
				if (Dev_Mgmt[device].Rx_Ior) {
					void *gpd_t;
				
					// Copy data from gpds (the following code only suit for QBM_TYPE_TTY_INT)
					list_each_gpd(gpd_t, Dev_Mgmt[device].Rx_Ior->first_gpd, Dev_Mgmt[device].Rx_Ior->last_gpd) {
						int copylen = MIN(QBM_TTY_XXX_DATA_LEN, QBM_DES_GET_DATALEN(gpd_t));
						
						kal_mem_cpy(RecvBuff + offset, QBM_DES_GET_DATAPTR(gpd_t), copylen);
						offset += copylen;
					}
					// Free Rx Ior
					qbmt_dest_q(Dev_Mgmt[device].Rx_Ior->first_gpd, Dev_Mgmt[device].Rx_Ior->last_gpd);
				}
			}
		} while (offset < datalen);
		
		// Compare data with Hardware Buffer
		for (i = 0; i < datalen; i++) {
			if (RecvBuff[i] ^ Dev_Mgmt[device].HwBuff[i]) {
				data_corrupt = KAL_TRUE;
				break;
			}				
		}
	}
		
	// Upper Module DeInit & Driver Detatch & DeRegister Callback
	DataPath_Close(handle);
	
	// Check data no corrupt
	if (data_corrupt) {
		FAIL_MSG("[NewRxPath] Data Corrupt in Device# = %d, DevType = %d", device, devtype);
		return KAL_FALSE;
	}	
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("[NewRxPath] There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool BuffModTxPath(kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	kal_bool data_corrupt;

	// Setup Port & Driver Type
	device = uart_port1;
	devtype = DCL_UART_CMUX_TYPE;		// Driver type is BUFF_DRV_TYPE
	data_corrupt = KAL_FALSE;
	
	// Get handle
	handle = DclSerialPort_Open(device, 0);
	
	// Upper Module Initialize & Driver Register callback and then Attach
	DataPath_Setup(handle, devtype, 0);

	// Conventional Tx Path
	// Send Tx Data -> TxDoneCb -> Get "Ready to Write" ilm
	{
		UART_CTRL_PUT_BYTES_T ur_ctrl_putbytes;
		char SendBuff[UT_TEST_SIZE];
		int datalen;
		int offset;
		int i;
		
		// Clear Hardware Buffer
		Hw_ClearBuff(device);
		
		// Prepare Data to Send
		datalen = UT_TEST_SIZE;
		for (i = 0; i < datalen; i++) {
			SendBuff[i] = i & UT_DATA_MASK;
		}
		
		
		// Setup Tx Buffer Structure
		offset = 0;
		ur_ctrl_putbytes.u4OwenrId = MOD_TTY_UT;
		ur_ctrl_putbytes.puBuffaddr = SendBuff;
		ur_ctrl_putbytes.u2Length = datalen;
		
		// Sending Data Until Sending Complete
		do {
			// Dummy Upper Module
			{
				DclSerialPort_Control(handle, SIO_CMD_PUT_BYTES, (DCL_CTRL_DATA_T*) &ur_ctrl_putbytes);
				offset += ur_ctrl_putbytes.u2RetSize;
				
				// Update Tx Buffer Structure
				ur_ctrl_putbytes.puBuffaddr = SendBuff + offset;
				ur_ctrl_putbytes.u2Length = datalen - offset;
			}
			
			// Dummy Driver
			{
				// Using TxDoneCb to inform TTYCore
				DclSerialPort_DrvTxDone(handle, DRV_TTY_UT, NULL);
			}

			// Dummy Upper Module
			{
				// In conventional path, _tty_tx_done_cb will send ilm to inform upper module.
				// when data buffer have the remaining data still haven't be sent.
				if (offset < datalen) {
					ilm_struct current_ilm;
				
					msg_receive_extq(&current_ilm);
					if (current_ilm.msg_id != MSG_ID_UART_READY_TO_WRITE_IND) {
						destroy_ilm(&current_ilm);
						return KAL_FALSE;
					}
					destroy_ilm(&current_ilm);
				}
			}
		} while (offset < datalen);
		
		// Compare data with Hardware Buffer
		for (i = 0; i < datalen; i++) {
			if (SendBuff[i] ^ Dev_Mgmt[device].HwBuff[i]) {
				data_corrupt = KAL_TRUE;
				break;
			}				
		}
	}
		
	// Upper Module DeInit & Driver Detatch & DeRegister Callback
	DataPath_Close(handle);
	
	// Check data no corrupt
	if (data_corrupt) {
		FAIL_MSG("[BuffModTxPath] Data Corrupt in Device# = %d, DevType = %d", device, devtype);
		return KAL_FALSE;
	}	
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("[BuffModTxPath] There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool BuffModRxPath(kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	kal_bool data_corrupt;

	// Setup Port & Driver Type
	device = uart_port1;
	devtype = DCL_UART_CMUX_TYPE;		// Driver type is BUFF_DRV_TYPE
	data_corrupt = KAL_FALSE;
	
	// Get handle
	handle = DclSerialPort_Open(device, 0);
	
	// Upper Module Initialize & Driver Register callback and then Attach
	DataPath_Setup(handle, devtype, 0);

	// Conventional Rx Path
	// Prepare Rx Data -> RxCb -> Get "Ready to Read" ilm -> Get Rx Data
	{
		UART_CTRL_GET_BYTES_T ur_ctrl_getbytes;
		char RecvBuff[UT_TEST_SIZE];
		int datalen;
		int offset;
		int i;
		
		// Clear Hardware Buffer
		Hw_ClearBuff(device);
		
		// Prepare Rx Data
		datalen = UT_TEST_SIZE;
		for (i = 0; i < datalen; i++) {
			Dev_Mgmt[device].HwBuff[i] = i & UT_DATA_MASK;
		}
		Dev_Mgmt[device].size = datalen;
		
		// Setup Rx Buffer Structure
		offset = 0;
		ur_ctrl_getbytes.u4OwenrId = MOD_TTY_UT;
		ur_ctrl_getbytes.puBuffaddr = RecvBuff;
		ur_ctrl_getbytes.u2Length = datalen;
			
		
		// Dummy Driver 
		{
			// Using RxCb to inform TTYCore
			DclSerialPort_DrvRx(handle, DRV_TTY_UT, NULL);
			
			// It will raise the flag rx_up_mod_wait at Rx buffer mode initial 
			// When using Rx_Cb to inform TTYCore it will send ilm at first time.
			{
				ilm_struct current_ilm;
			
				msg_receive_extq(&current_ilm);
				if (current_ilm.msg_id != MSG_ID_UART_READY_TO_READ_IND) {
					destroy_ilm(&current_ilm);
					return KAL_FALSE;
				}
				destroy_ilm(&current_ilm);
			}
		}
		do {						
			// Dummy Upper Module
			{
				// Get Data
				DclSerialPort_Control(handle, SIO_CMD_GET_BYTES, (DCL_CTRL_DATA_T*) &ur_ctrl_getbytes);
				offset += ur_ctrl_getbytes.u2RetSize;
				
				// Update Rx Buffer Structure 
				ur_ctrl_getbytes.puBuffaddr = RecvBuff + offset;
				ur_ctrl_getbytes.u2Length = datalen - offset;
			}
			
			///TODO: check there is no ilm because there is sent in SIO_CMD_GET_RX_AVAIL
		} while (Dev_Mgmt[device].size);
		
		// Compare data with Hardware Buffer
		for (i = 0; i < datalen; i++) {
			if (RecvBuff[i] ^ Dev_Mgmt[device].HwBuff[i]) {
				data_corrupt = KAL_TRUE;
				break;
			}				
		}
	}
		
	// Upper Module DeInit & Driver Detatch & DeRegister Callback
	DataPath_Close(handle);
	
	// Check data no corrupt
	if (data_corrupt) {
		FAIL_MSG("[BuffModRxPath] Data Corrupt in Device# = %d, DevType = %d", device, devtype);
		return KAL_FALSE;
	}
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("[BuffModRxPath] There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

// Loopback Test Sub-Case
kal_bool NewTx_NewRx(kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	kal_bool data_corrupt;

	// Setup Port & Driver Type
	device = uart_port1;
	devtype = DCL_UART_USB_TYPE;		// Driver type is GPD_DRV_TYPE
	data_corrupt = KAL_FALSE;
	
	// Get handle
	handle = DclSerialPort_Open(device, 0);

	// Upper Module Initialize & Driver Register callback and then Attach
	DataPath_Setup(handle, devtype, TTY_FLAG_NEW_TX | TTY_FLAG_NEW_RX);
	
	// Send Tx Data -> TxDoneCb(For free gpds) -> Send Rx gpds -> RxCb
	{
		char SendBuff[UT_TEST_SIZE];
		char RecvBuff[UT_TEST_SIZE];
		int datalen;
		int s_offset;
		int r_offset;
		int i;
		
		// Clear Hardware Buffer
		Hw_ClearBuff(device);
		
		// Prepare Data to Send
		datalen = UT_TEST_SIZE;
		for (i = 0; i < datalen; i++) {
			SendBuff[i] = i & UT_DATA_MASK;
		}
		
		// Setup Buffer Structure
		s_offset = 0;
		r_offset = 0;
		
		// Sending Data Until Sending Complete
		do {
			// Dummy Upper Module
			{
				void *gpd_t;
				void *p_head;
				void *p_tail;
				tty_io_request_t *ior;
				int gpd_num = 2;
				
				// Create gpds for ior
				// GPD_TYPE: QBM_TYPE_TTY_INT
				// GPD_LEN: QBM_TTY_XXX_DATA_LEN(1024)
				qbmt_alloc_q_no_tail(QBM_TYPE_TTY_INT, gpd_num, &p_head, &p_tail);
				ior = (tty_io_request_t *)QBM_DES_GET_SW_CTRL_FIELD(p_head);
				ior->first_gpd = p_head;
				ior->last_gpd = p_tail;
				
				// Copy data to gpds (the following code only suit for QBM_TYPE_TTY_INT)
				list_each_gpd(gpd_t, ior->first_gpd, ior->last_gpd) {
					int copylen = MIN(QBM_TTY_XXX_DATA_LEN, datalen - s_offset);
					
					kal_mem_cpy(QBM_DES_GET_DATAPTR(gpd_t), SendBuff + s_offset, copylen);
					s_offset += copylen;
					
					QBM_DES_SET_DATALEN(gpd_t, copylen);
				}
				
				DclSerialPort_UpModuleTransmit(handle, ior);
			}
			
			// Dummy Driver
			{
				// Free GPD or Return Tx GPD to Upper Module
				Tx_Flush_Gpd(device);
			}
		} while (s_offset < datalen);
		
		// Receiving Data Until Data empty in Hardware
		do {
			// Dummy Upper Module
			{
				void *p_head;
				void *p_tail;
				tty_io_request_t *ior;
				int gpd_num = 2;
				
				// Create gpds for ior
				// GPD_TYPE: QBM_TYPE_TTY_INT
				// GPD_LEN: QBM_TTY_XXX_DATA_LEN(1024)
				qbmt_alloc_q(QBM_TYPE_TTY_INT, gpd_num, &p_head, &p_tail);
				ior = (tty_io_request_t *)QBM_DES_GET_SW_CTRL_FIELD(p_head);
				ior->first_gpd = p_head;
				ior->last_gpd = p_tail;
				
				// Send Rx_Ior to Driver
				DclSerialPort_UpModuleAssignRxIor(handle, ior);
			}
			
			// Dummy Hardware Operation
			{
				// Copy Data to Driver Rx GPD in the Rx Queue
				Hw_PopDataToRxQue(device);
			}
			
			// Dummy Driver 
			{
				// Get Rx GPDs(Contain Received Data) by De-Q
				void * ior = Rx_DeQueToIor(device);
				// Rx callback to send ior to tty
				DclSerialPort_DrvRx(handle, DRV_TTY_UT, ior);
			}
			
			// Dummy Upper Module
			{
				if (Dev_Mgmt[device].Rx_Ior) {
					void *gpd_t;
				
					// Copy data from gpds (the following code only suit for QBM_TYPE_TTY_INT)
					list_each_gpd(gpd_t, Dev_Mgmt[device].Rx_Ior->first_gpd, Dev_Mgmt[device].Rx_Ior->last_gpd) {
						int copylen = MIN(QBM_TTY_XXX_DATA_LEN, QBM_DES_GET_DATALEN(gpd_t));
						
						kal_mem_cpy(RecvBuff + r_offset, QBM_DES_GET_DATAPTR(gpd_t), copylen);
						r_offset += copylen;
					}
					// Free Rx Ior
					qbmt_dest_q(Dev_Mgmt[device].Rx_Ior->first_gpd, Dev_Mgmt[device].Rx_Ior->last_gpd);
				}
			}
		} while (r_offset < datalen);
		
		// Compare data between Send Buffer & Receive Buffer
		for (i = 0; i < datalen; i++) {
			if (SendBuff[i] ^ RecvBuff[i]) {
				data_corrupt = KAL_TRUE;
				break;
			}				
		}
	}
		
	// Upper Module DeInit & Driver Detatch & DeRegister Callback
	DataPath_Close(handle);
	
	// Check data no corrupt
	if (data_corrupt) {
		FAIL_MSG("Data Corrupt in Device# = %d, DevType = %d", device, devtype);
		return KAL_FALSE;
	}
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool NewTx_ConvRx(kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	kal_bool data_corrupt;

	// Setup Port & Driver Type
	device = uart_port1;
	devtype = DCL_UART_USB_TYPE;		// Driver type is GPD_DRV_TYPE
	data_corrupt = KAL_FALSE;
	
	// Get handle
	handle = DclSerialPort_Open(device, 0);
	
	// Upper Module Initialize & Driver Register callback and then Attach
	DataPath_Setup(handle, devtype, TTY_FLAG_NEW_TX);
	
	// Send Tx Data -> TxDoneCb(For free gpds) -> RxCb -> Send Rx Buffer 
	{
		UART_CTRL_GET_BYTES_T ur_ctrl_getbytes;
		char SendBuff[UT_TEST_SIZE];
		char RecvBuff[UT_TEST_SIZE];
		int datalen;
		int s_offset;
		int r_offset;
		int i;
		
		// Clear Hardware Buffer
		Hw_ClearBuff(device);
		
		// Prepare Data to Send
		datalen = UT_TEST_SIZE;
		for (i = 0; i < datalen; i++) {
			SendBuff[i] = i & UT_DATA_MASK;
		}
		
		// Setup Tx Buffer Structure
		s_offset = 0;
		r_offset = 0;
		ur_ctrl_getbytes.u4OwenrId = MOD_TTY_UT;
		ur_ctrl_getbytes.puBuffaddr = RecvBuff;
		ur_ctrl_getbytes.u2Length = datalen;
		
		// Sending Data Until Sending Complete
		do {
			// Dummy Upper Module
			{
				void *gpd_t;
				void *p_head;
				void *p_tail;
				tty_io_request_t *ior;
				int gpd_num = 2;
				
				// Create gpds for ior
				// GPD_TYPE: QBM_TYPE_TTY_INT
				// GPD_LEN: QBM_TTY_XXX_DATA_LEN(1024)
				qbmt_alloc_q_no_tail(QBM_TYPE_TTY_INT, gpd_num, &p_head, &p_tail);
				ior = (tty_io_request_t *)QBM_DES_GET_SW_CTRL_FIELD(p_head);
				ior->first_gpd = p_head;
				ior->last_gpd = p_tail;
				
				// Copy data to gpds (the following code only suit for QBM_TYPE_TTY_INT)
				list_each_gpd(gpd_t, ior->first_gpd, ior->last_gpd) {
					int copylen = MIN(QBM_TTY_XXX_DATA_LEN, datalen - s_offset);
					
					kal_mem_cpy(QBM_DES_GET_DATAPTR(gpd_t), SendBuff + s_offset, copylen);
					s_offset += copylen;
					
					QBM_DES_SET_DATALEN(gpd_t, copylen);
				}
				
				DclSerialPort_UpModuleTransmit(handle, ior);
			}
			
			// Dummy Driver
			{
				// Free GPD or Return Tx GPD to Upper Module
				Tx_Flush_Gpd(device);
			}
		} while (s_offset < datalen);
		
		// Receiving Data Until Data empty in Hardware
		do {
			// Dummy Hardware Operation
			{
				// Copy Data to Driver Rx GPD in the Rx Queue
				Hw_PopDataToRxQue(device);
			}
			
			// Dummy Driver 
			{
				// Get Rx GPDs(Contain Received Data) by De-Q
				void * ior = Rx_DeQueToIor(device);
				// Rx callback to send ior to tty
				if (ior) {
					DclSerialPort_DrvRx(handle, DRV_TTY_UT, ior);
				}
			}
						
			// Dummy Upper Module
			{
				// In conventional path, _tty_rx_cb will send ilm to inform upper module data ready to read.
				{
					ilm_struct current_ilm;
				
					msg_receive_extq(&current_ilm);
					if (current_ilm.msg_id != MSG_ID_UART_READY_TO_READ_IND) {
						destroy_ilm(&current_ilm);
						return KAL_FALSE;
					}
					destroy_ilm(&current_ilm);
				}
				
				// Get Data
				DclSerialPort_Control(handle, SIO_CMD_GET_BYTES, (DCL_CTRL_DATA_T*) &ur_ctrl_getbytes);
				r_offset += ur_ctrl_getbytes.u2RetSize;
				
				// Update Rx Buffer Structure 
				ur_ctrl_getbytes.puBuffaddr = RecvBuff + r_offset;
				ur_ctrl_getbytes.u2Length = datalen - r_offset;
			}
		} while (Dev_Mgmt[device].size);
		
		// Compare data between Send Buffer & Receive Buffer
		for (i = 0; i < datalen; i++) {
			if (SendBuff[i] ^ RecvBuff[i]) {
				data_corrupt = KAL_TRUE;
				break;
			}				
		}
	}
		
	// Upper Module DeInit & Driver Detatch & DeRegister Callback
	DataPath_Close(handle);
	
	// Check data no corrupt
	if (data_corrupt) {
		FAIL_MSG("Data Corrupt in Device# = %d, DevType = %d", device, devtype);
		return KAL_FALSE;
	}
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool ConvTx_NewRx(kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	kal_bool data_corrupt;

	// Setup Port & Driver Type
	device = uart_port1;
	devtype = DCL_UART_USB_TYPE;		// Driver type is GPD_DRV_TYPE
	data_corrupt = KAL_FALSE;
	
	// Get handle
	handle = DclSerialPort_Open(device, 0);
	
	// Upper Module Initialize & Driver Register callback and then Attach
	DataPath_Setup(handle, devtype, TTY_FLAG_NEW_RX);
	
	// Send Tx Data -> TxDoneCb -> Get "Ready to Write" ilm -> Send Rx gpds -> RxCb  
	{
		UART_CTRL_PUT_BYTES_T ur_ctrl_putbytes;
		char SendBuff[UT_TEST_SIZE];
		char RecvBuff[UT_TEST_SIZE];
		int datalen;
		int s_offset;
		int r_offset;
		int i;
		
		// Clear Hardware Buffer
		Hw_ClearBuff(device);
		
		// Prepare Data to Send
		datalen = UT_TEST_SIZE;
		for (i = 0; i < datalen; i++) {
			SendBuff[i] = i & UT_DATA_MASK;
		}
		
		// Setup Buffer Structure
		s_offset = 0;
		ur_ctrl_putbytes.u4OwenrId = MOD_TTY_UT;
		ur_ctrl_putbytes.puBuffaddr = SendBuff;
		ur_ctrl_putbytes.u2Length = datalen;
		r_offset = 0;
		
		// Sending Data Until Sending Complete
		do {
			// Dummy Upper Module
			{
				DclSerialPort_Control(handle, SIO_CMD_PUT_BYTES, (DCL_CTRL_DATA_T*) &ur_ctrl_putbytes);
				s_offset += ur_ctrl_putbytes.u2RetSize;
				
				// Update Tx Buffer Structure
				ur_ctrl_putbytes.puBuffaddr = SendBuff + s_offset;
				ur_ctrl_putbytes.u2Length = datalen - s_offset;
			}
			
			// Dummy Driver
			{
				// Return Tx GPD to TTYCore
				Tx_Flush_Gpd(device);
			}
			
			// Dummy Upper Module
			{
				// In conventional path, _tty_tx_done_cb will send ilm to inform upper module.
				// when data buffer have the remaining data still haven't be sent.
				if (s_offset < datalen) {
					ilm_struct current_ilm;
				
					msg_receive_extq(&current_ilm);
					if (current_ilm.msg_id != MSG_ID_UART_READY_TO_WRITE_IND) {
						destroy_ilm(&current_ilm);
						return KAL_FALSE;
					}
					destroy_ilm(&current_ilm);
				}
			}
		} while (s_offset < datalen);
		
		// Receiving Data Until Data empty in Hardware
		do {
			// Dummy Upper Module
			{
				void *p_head;
				void *p_tail;
				tty_io_request_t *ior;
				int gpd_num = 2;
				
				// Create gpds for ior
				// GPD_TYPE: QBM_TYPE_TTY_INT
				// GPD_LEN: QBM_TTY_XXX_DATA_LEN(1024)
				qbmt_alloc_q(QBM_TYPE_TTY_INT, gpd_num, &p_head, &p_tail);
				ior = (tty_io_request_t *)QBM_DES_GET_SW_CTRL_FIELD(p_head);
				ior->first_gpd = p_head;
				ior->last_gpd = p_tail;
				
				// Send Rx_Ior to Driver
				DclSerialPort_UpModuleAssignRxIor(handle, ior);
			}
			
			// Dummy Hardware Operation
			{
				// Copy Data to Driver Rx GPD in the Rx Queue
				Hw_PopDataToRxQue(device);
			}
			
			// Dummy Driver 
			{
				// Get Rx GPDs(Contain Received Data) by De-Q
				void * ior = Rx_DeQueToIor(device);
				// Rx callback to send ior to tty
				DclSerialPort_DrvRx(handle, DRV_TTY_UT, ior);
			}
			
			// Dummy Upper Module
			{
				if (Dev_Mgmt[device].Rx_Ior) {
					void *gpd_t;
				
					// Copy data from gpds (the following code only suit for QBM_TYPE_TTY_INT)
					list_each_gpd(gpd_t, Dev_Mgmt[device].Rx_Ior->first_gpd, Dev_Mgmt[device].Rx_Ior->last_gpd) {
						int copylen = MIN(QBM_TTY_XXX_DATA_LEN, QBM_DES_GET_DATALEN(gpd_t));
						
						kal_mem_cpy(RecvBuff + r_offset, QBM_DES_GET_DATAPTR(gpd_t), copylen);
						r_offset += copylen;
					}
					// Free Rx Ior
					qbmt_dest_q(Dev_Mgmt[device].Rx_Ior->first_gpd, Dev_Mgmt[device].Rx_Ior->last_gpd);
				}
			}
		} while (r_offset < datalen);
		
		// Compare data between Send Buffer & Receive Buffer
		for (i = 0; i < datalen; i++) {
			if (SendBuff[i] ^ RecvBuff[i]) {
				data_corrupt = KAL_TRUE;
				break;
			}				
		}
	}
		
	// Upper Module DeInit & Driver Detatch & DeRegister Callback
	DataPath_Close(handle);
	
	// Check data no corrupt
	if (data_corrupt) {
		FAIL_MSG("Data Corrupt in Device# = %d, DevType = %d", device, devtype);
		return KAL_FALSE;
	}
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool ConvTx_ConvRx(kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	kal_bool data_corrupt;

	// Setup Port & Driver Type
	device = uart_port1;
	devtype = DCL_UART_USB_TYPE;		// Driver type is GPD_DRV_TYPE
	data_corrupt = KAL_FALSE;
	
	// Get handle
	handle = DclSerialPort_Open(device, 0);
	
	// Upper Module Initialize & Driver Register callback and then Attach
	DataPath_Setup(handle, devtype, 0);
	
	// if Upper Module is conventional & not buffer mode, driver will using ilm to inform upper module driver attach.
	{
		ilm_struct current_ilm;

		msg_receive_extq(&current_ilm);
		if (current_ilm.msg_id != MSG_ID_UART_PLUGIN_IND) {
			destroy_ilm(&current_ilm);
			return KAL_FALSE;
		}
		destroy_ilm(&current_ilm);
	}
	
	// Send Tx Data -> TxDoneCb -> Get "Ready to Write" ilm -> RxCb -> Send Rx gpds 
	{
		UART_CTRL_PUT_BYTES_T ur_ctrl_putbytes;
		UART_CTRL_GET_BYTES_T ur_ctrl_getbytes;
		char SendBuff[UT_TEST_SIZE];
		char RecvBuff[UT_TEST_SIZE];
		int datalen;
		int s_offset;
		int r_offset;
		int i;
		
		// Clear Hardware Buffer
		Hw_ClearBuff(device);
		
		// Prepare Data to Send
		datalen = UT_TEST_SIZE;
		for (i = 0; i < datalen; i++) {
			SendBuff[i] = i & UT_DATA_MASK;
		}
		
		// Setup Buffer Structure
		s_offset = 0;
		ur_ctrl_putbytes.u4OwenrId = MOD_TTY_UT;
		ur_ctrl_putbytes.puBuffaddr = SendBuff;
		ur_ctrl_putbytes.u2Length = datalen;
		r_offset = 0;
		ur_ctrl_getbytes.u4OwenrId = MOD_TTY_UT;
		ur_ctrl_getbytes.puBuffaddr = RecvBuff;
		ur_ctrl_getbytes.u2Length = datalen;
		
		// Sending Data Until Sending Complete
		do {
			// Dummy Upper Module
			{
				DclSerialPort_Control(handle, SIO_CMD_PUT_BYTES, (DCL_CTRL_DATA_T*) &ur_ctrl_putbytes);
				s_offset += ur_ctrl_putbytes.u2RetSize;
				
				// Update Tx Buffer Structure
				ur_ctrl_putbytes.puBuffaddr = SendBuff + s_offset;
				ur_ctrl_putbytes.u2Length = datalen - s_offset;
			}
			
			// Dummy Driver
			{
				// Return Tx GPD to TTYCore
				Tx_Flush_Gpd(device);
			}
			
			// Dummy Upper Module
			{
				// In conventional path, _tty_tx_done_cb will send ilm to inform upper module.
				// when data buffer have the remaining data still haven't be sent.
				if (s_offset < datalen) {
					ilm_struct current_ilm;
				
					msg_receive_extq(&current_ilm);
					if (current_ilm.msg_id != MSG_ID_UART_READY_TO_WRITE_IND) {
						destroy_ilm(&current_ilm);
						return KAL_FALSE;
					}
					destroy_ilm(&current_ilm);
				}
			}
		} while (s_offset < datalen);
		
		// Receiving Data Until Data empty in Hardware
		do {
			// Dummy Hardware Operation
			{
				// Copy Data to Driver Rx GPD in the Rx Queue
				Hw_PopDataToRxQue(device);
			}
			
			// Dummy Driver 
			{
				// Get Rx GPDs(Contain Received Data) by De-Q
				void * ior = Rx_DeQueToIor(device);
				// Rx callback to send ior to tty
				if (ior) {
					DclSerialPort_DrvRx(handle, DRV_TTY_UT, ior);
				}
			}
						
			// Dummy Upper Module
			{
				// In conventional path, _tty_rx_cb will send ilm to inform upper module data ready to read.
				{
					ilm_struct current_ilm;
				
					msg_receive_extq(&current_ilm);
					if (current_ilm.msg_id != MSG_ID_UART_READY_TO_READ_IND) {
						destroy_ilm(&current_ilm);
						return KAL_FALSE;
					}
					destroy_ilm(&current_ilm);
				}
				
				// Get Data
				DclSerialPort_Control(handle, SIO_CMD_GET_BYTES, (DCL_CTRL_DATA_T*) &ur_ctrl_getbytes);
				r_offset += ur_ctrl_getbytes.u2RetSize;
				
				// Update Rx Buffer Structure 
				ur_ctrl_getbytes.puBuffaddr = RecvBuff + r_offset;
				ur_ctrl_getbytes.u2Length = datalen - r_offset;
			}
		} while (Dev_Mgmt[device].size);
		
		// Compare data between Send Buffer & Receive Buffer
		for (i = 0; i < datalen; i++) {
			if (SendBuff[i] ^ RecvBuff[i]) {
				data_corrupt = KAL_TRUE;
				break;
			}				
		}
	}
		
	// Upper Module DeInit & Driver Detatch & DeRegister Callback
	DataPath_Close(handle);
	
	// Check data no corrupt
	if (data_corrupt) {
		FAIL_MSG("Data Corrupt in Device# = %d, DevType = %d", device, devtype);
		return KAL_FALSE;
	}
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

kal_bool BuffMod_ConvTx_ConvRx(kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	DCL_DEV device;
	DCL_STATUS status;
    DCL_HANDLE handle;
	SIO_TYPE_T devtype;
	kal_bool data_corrupt;

	// Setup Port & Driver Type
	device = uart_port1;
	devtype = DCL_UART_CMUX_TYPE;		// Driver type is BUFF_DRV_TYPE
	data_corrupt = KAL_FALSE;
	
	// Get handle
	handle = DclSerialPort_Open(device, 0);
	
	// Upper Module Initialize & Driver Register callback and then Attach
	DataPath_Setup(handle, devtype, 0);
	
	// Send Tx Data -> TxDoneCb -> Get "Ready to Write" ilm -> RxCb -> Send Rx gpds 
	{
		UART_CTRL_PUT_BYTES_T ur_ctrl_putbytes;
		UART_CTRL_GET_BYTES_T ur_ctrl_getbytes;
		char SendBuff[UT_TEST_SIZE];
		char RecvBuff[UT_TEST_SIZE];
		int datalen;
		int s_offset;
		int r_offset;
		int i;
		
		// Clear Hardware Buffer
		Hw_ClearBuff(device);
		
		// Prepare Data to Send
		datalen = UT_TEST_SIZE;
		for (i = 0; i < datalen; i++) {
			SendBuff[i] = i & UT_DATA_MASK;
		}
		
		// Setup Buffer Structure
		s_offset = 0;
		ur_ctrl_putbytes.u4OwenrId = MOD_TTY_UT;
		ur_ctrl_putbytes.puBuffaddr = SendBuff;
		ur_ctrl_putbytes.u2Length = datalen;
		r_offset = 0;
		ur_ctrl_getbytes.u4OwenrId = MOD_TTY_UT;
		ur_ctrl_getbytes.puBuffaddr = RecvBuff;
		ur_ctrl_getbytes.u2Length = datalen;
		
		// Sending Data Until Sending Complete
		do {
			// Dummy Upper Module
			{
				DclSerialPort_Control(handle, SIO_CMD_PUT_BYTES, (DCL_CTRL_DATA_T*) &ur_ctrl_putbytes);
				s_offset += ur_ctrl_putbytes.u2RetSize;
				
				// Update Tx Buffer Structure
				ur_ctrl_putbytes.puBuffaddr = SendBuff + s_offset;
				ur_ctrl_putbytes.u2Length = datalen - s_offset;
			}
			
			// Dummy Driver
			{
				// Using TxDoneCb to inform TTYCore
				DclSerialPort_DrvTxDone(handle, DRV_TTY_UT, NULL);
			}
			
			// Dummy Upper Module
			{
				// In conventional path, _tty_tx_done_cb will send ilm to inform upper module.
				// when data buffer have the remaining data still haven't be sent.
				if (s_offset < datalen) {
					ilm_struct current_ilm;
				
					msg_receive_extq(&current_ilm);
					if (current_ilm.msg_id != MSG_ID_UART_READY_TO_WRITE_IND) {
						destroy_ilm(&current_ilm);
						return KAL_FALSE;
					}
					destroy_ilm(&current_ilm);
				}
			}
		} while (s_offset < datalen);
		
		// Dummy Driver 
		{
			// Using RxCb to inform TTYCore
			DclSerialPort_DrvRx(handle, DRV_TTY_UT, NULL);
			
			// It will raise the flag rx_up_mod_wait at Rx buffer mode initial 
			// When using Rx_Cb to inform TTYCore it will send ilm at first time. 
			{
				ilm_struct current_ilm;
			
				msg_receive_extq(&current_ilm);
				if (current_ilm.msg_id != MSG_ID_UART_READY_TO_READ_IND) {
					destroy_ilm(&current_ilm);
					return KAL_FALSE;
				}
				destroy_ilm(&current_ilm);
			}
		}
		// Receiving Data Until Data empty in Hardware
		do {	
			// Dummy Upper Module
			{
				// Get Data
				DclSerialPort_Control(handle, SIO_CMD_GET_BYTES, (DCL_CTRL_DATA_T*) &ur_ctrl_getbytes);
				r_offset += ur_ctrl_getbytes.u2RetSize;
				
				// Update Rx Buffer Structure 
				ur_ctrl_getbytes.puBuffaddr = RecvBuff + r_offset;
				ur_ctrl_getbytes.u2Length = datalen - r_offset;
			}
		} while (Dev_Mgmt[device].size);
		
		// Compare data between Send Buffer & Receive Buffer
		for (i = 0; i < datalen; i++) {
			if (SendBuff[i] ^ RecvBuff[i]) {
				data_corrupt = KAL_TRUE;
				break;
			}				
		}
	}
		
	// Upper Module DeInit & Driver Detatch & DeRegister Callback
	DataPath_Close(handle);
	
	// Check data no corrupt
	if (data_corrupt) {
		FAIL_MSG("Data Corrupt in Device# = %d, DevType = %d", device, devtype);
		return KAL_FALSE;
	}
	
	// Check there is no assert
	if (ut_assert_flag) {
		ut_assert_flag = KAL_FALSE; // clear flag
		FAIL_MSG("There is a assertion in exception. It's found at Test Case end");
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

/**************
	Main-Case
 **************/
kal_bool DataPath_DirectlyPath(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	if (IS_SUB_CASE_FAIL(ConvTxPath))
		return KAL_FALSE;
	if (IS_SUB_CASE_FAIL(ConvRxPath))
		return KAL_FALSE;
	if (IS_SUB_CASE_FAIL(NewTxPath))
		return KAL_FALSE;
	if (IS_SUB_CASE_FAIL(NewTxLightPath))
		return KAL_FALSE;
	if (IS_SUB_CASE_FAIL(NewRxPath))
		return KAL_FALSE;
	if (IS_SUB_CASE_FAIL(BuffModTxPath))
		return KAL_FALSE;
	if (IS_SUB_CASE_FAIL(BuffModRxPath))
		return KAL_FALSE;
	
	return KAL_TRUE;
}

kal_bool DataPath_LoopbackTest(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	if (IS_SUB_CASE_FAIL(NewTx_NewRx))
		return KAL_FALSE;
	if (IS_SUB_CASE_FAIL(NewTx_ConvRx))
		return KAL_FALSE;
	if (IS_SUB_CASE_FAIL(ConvTx_NewRx))
		return KAL_FALSE;
	if (IS_SUB_CASE_FAIL(ConvTx_ConvRx))
		return KAL_FALSE;
	if (IS_SUB_CASE_FAIL(BuffMod_ConvTx_ConvRx))
		return KAL_FALSE;
	
	return KAL_TRUE;
}

/***********************************
		UnitTest Begin End
 ***********************************/
kal_bool utTest_Initialize(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{
	kal_mem_set(Dev_Mgmt, 0, sizeof(UtInstance) * UART_DEV_CNT);
	
	return KAL_TRUE;
}

kal_bool utTest_End(void *p_param, kal_char *p_ret_err_str, kal_uint32 *p_ret_err_str_sz)
{		
	return KAL_TRUE;
}

/****************************************************************************
                TTYUT Task Init Function
 ***************************************************************************/

#define UT_TEST(_func, param) { #_func, _func, param }
ST_TCASE_T st_tcase_g[] = {
	UT_TEST(utTest_Initialize, NULL),
	
	// Don't take out "FuncVeri_Common" case, DclSerialPort_Initialize will make test environment clear.
	UT_TEST(FuncVeri_Common, NULL), 
	
	UT_TEST(FuncVeri_DrvRegDeRegCb, NULL),
	UT_TEST(FuncVeri_DrvAtDetach, NULL),
	UT_TEST(FuncVeri_UpInitDeinit, NULL),
	UT_TEST(FuncVeri_UpRegCb, NULL),
	UT_TEST(FuncVeri_ChangeOwner, NULL),
	UT_TEST(FuncVeri_Misc, NULL),
	
	UT_TEST(DataPath_DirectlyPath, NULL),
	UT_TEST(DataPath_LoopbackTest, NULL),
	/// TODO: DataPath for ChangeOwner
	
	UT_TEST(utTest_End, NULL)
};
kal_uint32 st_tcase_count_g = sizeof(st_tcase_g) / sizeof(ST_TCASE_T);

kal_bool tty_ut_st_create (void)
{
    return st_reg_test(ST_MOD_NAME,  /* p_mod_name */
                     &st_tcase_g, /* p_tcase */
                     st_tcase_count_g /* tcase_num */
           );
}

