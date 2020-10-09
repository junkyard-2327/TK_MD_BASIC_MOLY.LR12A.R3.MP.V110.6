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
 *    dcl_rstctl.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This Module defines DCL (Driver Common Layer) of the wdt driver.
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "drv_comm.h"
#include "rstctl_reg.h"
#include "drv_rstctl.h"
#include "intrCtrl.h"


#include "dcl_wdt.h"
#include "dcl.h"
#include "kal_general_types.h"
#include "kal_public_api.h"

/*Begin: for share memory debug information dump*/
#include "ex_mem_manager_public.h"
#include "ccci_if.h"
#include "us_timer.h"
/*End: for share memory debug information dump*/


#if defined(MT6290_S00)
#include "drv_bsi.h"
#define PMIC_6339_ANALDO_CON1_ADDR  (0x21)
/*VTCXO1_ON_CTRL : 0: SW controll by RG_VTXCO1_EN*/
/*                 1: SRCLKEN                    */
#define VTCXO1_ON_CTRL_BIT          (0x1)
/*RG_VTCXO1_EN : 0: Disable                   */
/*               1: Enable                    */
#define RG_VTCXO1_EN_BIT            (0x0)

#endif

// Global variable for DCL WDT API usage
#define DCL_WDT_DEV_MAGIC_NUM		(0x80000000)

#define DCL_WDT_GET_DEV(handle_) ((handle_) & (~DCL_WDT_DEV_MAGIC_NUM))

kal_atomic_uint32 dcl_wdt_handle_count = 0;


// The event is presented by 32-bit variable
kal_atomic_uint32 handle_assign[32];
#define MAX_DCL_WDT_EVENT_NUM		1
PFN_DCL_CALLBACK dcl_wdt_event_callback[MAX_DCL_WDT_EVENT_NUM];

void dcl_wdt_hisr(){
	// Try to call rgistered callback function
	// Search mapping array and assign callback to specofic array entry
	{
		kal_uint32 i;
		kal_uint32 event_bit;
		// TODO: integrate the code bellow in the call back function mechanism. 
		for (i=0;i<MAX_DCL_WDT_EVENT_NUM;i++){
			event_bit = 1 << i;
			if ((event_bit & EVENT_WDT_TIMEOUT) != 0){
				if (dcl_wdt_event_callback[i] != NULL){
					dcl_wdt_event_callback[i](EVENT_WDT_TIMEOUT);
				}
			}
		}
	}
}

void dcl_wdt_lisr(){
    mips_isr_mdwdt_handler();
}

kal_bool dcl_wdt_lisr_register_flag = KAL_FALSE;
void dcl_wdt_register_lisr(){
	if (dcl_wdt_lisr_register_flag){
		return;
	}

	IRQ_Register_LISR(IRQ_MDWDT_CODE, dcl_wdt_lisr,"DCL WDT LISR");
	IRQSensitivity(IRQ_MDWDT_CODE,KAL_TRUE);
	IRQUnmask(IRQ_MDWDT_CODE);
	dcl_wdt_lisr_register_flag=KAL_TRUE;
}

/*************************************************************************
* FUNCTION
*  DclWDT_Initialize
*
* DESCRIPTION
*  This function is to initialize WDT module
*
* PARAMETERS
*	N/A
*
* RETURNS
*	STATUS_OK
*
*************************************************************************/
DCL_STATUS DclWDT_Initialize(void)
{
	kal_uint8 count = 0;
	drv_rstctl_wdt_init();
	for(count=0;count<32;count++)
		kal_atomic_set(&(handle_assign[count]), 0);

	kal_atomic_set(&dcl_wdt_handle_count, 0);

	return STATUS_OK;
}


/*************************************************************************
* FUNCTION
*  DclWDT_Open
*
* DESCRIPTION
*  This function is to open the WDT module and return a handle
*
* PARAMETERS
*  dev: only valid for DCL_WDT
*  flags: no sepcial flags is needed. Please use FLAGS_NONE
*
* RETURNS
*  DCL_HANDLE_INVALID: Open failed.
*  other value: a valid handle
*
*************************************************************************/
DCL_HANDLE DclWDT_Open(DCL_DEV dev, DCL_FLAGS flags)
{
	kal_uint32 handle;
	kal_uint8 index=0;


	if (dev != DCL_WDT){
		return DCL_HANDLE_INVALID;		// Incorrecr device ID
	}
	for(index=0;index<32;index++)
	{
		if(kal_atomic_compare_and_swap_return(&handle_assign[index],0,1)==0)
			break;
	}
	if (index==32)
    	return DCL_HANDLE_INVALID;
	kal_atomic_inc(&dcl_wdt_handle_count);
	handle = (DCL_WDT_DEV_MAGIC_NUM | index);

	// Register DCL default lisr
	return handle;
}

/*************************************************************************
* FUNCTION
*  DclWDT_ReadData
*
* DESCRIPTION
*  This function is not supported for the WDT module now.
*
* PARAMETERS
*	N/A
*
* RETURNS
*	STATUS_UNSUPPORTED
*
*************************************************************************/
DCL_STATUS DclWDT_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options)
{
	return STATUS_UNSUPPORTED;

}

/*************************************************************************
* FUNCTION
*  DclWDT_WriteData
*
* DESCRIPTION
*  This function is not supported for the WDT module now.
*
* PARAMETERS
*	N/A
*
* RETURNS
*	STATUS_UNSUPPORTED
*
*************************************************************************/
DCL_STATUS DclWDT_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options)
{
	return STATUS_UNSUPPORTED;
}

/*************************************************************************
* FUNCTION
*  DclWDT_Configure
*
* DESCRIPTION
*  This function is not supported for the WDT module now.
*
* PARAMETERS
*	N/A
*
* RETURNS
*	STATUS_UNSUPPORTED
*
*************************************************************************/
DCL_STATUS DclWDT_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure)
{
	return STATUS_UNSUPPORTED;

}

/*************************************************************************
* FUNCTION
*  DclWDT_RegisterCallback
*
* DESCRIPTION
*  This function is to set callback function for the WDT module.
*
* PARAMETERS
*  handle: the returned handle value of DclWDT_Open
*  event: Supported events:
*         EVENT_WDT_TIMEOUT: Watch dog time out interrupt
*  callback: the callback function for registered events
*
* RETURNS
*  STATUS_OK: Successfully register the callback function.
*  STATUS_INVALID_DCL_HANDLE: It's a invalid handle.
*  STATUS_NOT_OPENED: The module has not been opened.
*  STATUS_INVALID_EVENT: The event parameter is invalid.
*
*************************************************************************/
DCL_STATUS DclWDT_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback)
{
	//kal_uint32 i;
	// Check magic number
	if ((handle & DCL_WDT_DEV_MAGIC_NUM) != DCL_WDT_DEV_MAGIC_NUM){
		ASSERT(0);
		return STATUS_INVALID_DCL_HANDLE;
	}

	// Error check
	if (kal_atomic_read(&dcl_wdt_handle_count) == 0){
		ASSERT(0);
		return STATUS_NOT_OPENED;
	}
	// Check if the passed-in event bitmap is supported or NOT
	if (((kal_uint32)event & (~(EVENT_WDT_TIMEOUT))) != 0){
		ASSERT(0);
		return STATUS_INVALID_EVENT;
	}

	//i=DCL_WDT_GET_DEV(handle);

    dcl_wdt_register_lisr();

	return STATUS_OK;

}


/*************************************************************************
* FUNCTION
*  DclWDT_Control
*
* DESCRIPTION
*  This function is to send command to control the WDT module.
*
* PARAMETERS
*  handle: The handle value returned from DclWDT_Open
*  cmd: a control command for WDT module
*          1. WDT_CMD_ENABLE: to enable/disable WDT
*          2. WDT_CMD_SET_EXT_POL: to set ploarity of external pin when WDT expired
*          3. WDT_CMD_SET_EXT_RESET: to generate an external watchdog reset signal when WDT expired
*          4. WDT_CMD_SET_VALUE: to set WDT count value
*          5  WDT_CMD_RESTART: to restart counter
*          6. WDT_CMD_DRV_RESET: to reset device
*          7. WDT_CMD_ABN_RESET: to reset device with abnormal flag set to indicate it is a abnormal reset
*          8. WDT_CMD_IRQ: to generate interrupt instead of reseting device
*  data: The data of the control command
*          1. WDT_CMD_ENABLE: pointer to a WDT_CTRL_ENABLE_T structure
*          2. WDT_CMD_SET_EXT_POL: pointer to a WDT_CTRL_SET_EXT_POL_T structure
*          3. WDT_CMD_SET_EXT_RESET: pointer to a WDT_CTRL_SET_EXT_RESET_T structure
*          4. WDT_CMD_SET_VALUE: pointer to a WDT_CTRL_SET_VALUE_T structure
*          5  WDT_CMD_RESTART: A null pointer
*          6. WDT_CMD_DRV_RESET: A null pointer
*          7. WDT_CMD_ABN_RESET: A null pointer
*          8. WDT_CMD_IRQ: pointer to a WDT_CTRL_IRQ_T structure
*
* RETURNS
*  STATUS_OK: command is executed successfully.
*  STATUS_FAIL: command is failed.
*  STATUS_INVALID_CMD: It's a invalid command.
*
*************************************************************************/
DCL_STATUS DclWDT_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data)
{
	WDT_CTRL_GET_RSTINTERVAL_T *prst;
	WDT_CTRL_SET_VALUE_T *prSetValue;
	WDT_CTRL_ENABLE_T  *prEnable;
	WDT_CTRL_IRQ_T *prIRQ;
	WDT_CTRL_DEBUG_T *prWDTDebug;
	/*Begin: preserve debug information in share memory.  */
	volatile kal_uint32 callerAddr;
	volatile kal_uint32 callerVPE;
	volatile kal_uint32 usTime;
	/*End: preserve debug information in share memory. */
#if defined(MT6290_S00)
    kal_uint16 val;
#endif
	// Check magic number
	if ((handle & DCL_WDT_DEV_MAGIC_NUM) != DCL_WDT_DEV_MAGIC_NUM){
		ASSERT(0);
		return STATUS_INVALID_DCL_HANDLE;
	}

	// Error check
	if (kal_atomic_read(&dcl_wdt_handle_count) == 0){
		ASSERT(0);
		return STATUS_NOT_OPENED;
	}
	/*Begin: preserve debug information in share memory.  */
	GET_RETURN_ADDRESS(callerAddr);
	callerVPE = kal_get_current_vpe_id();
	usTime = ust_get_current_time();
	/*End: preserve debug information in share memory.  */
	switch (cmd)
	{
		case WDT_CMD_ENABLE:
			prEnable = &(data->rWDTEnable);
			/*Begin: preserve debug information in share memory. */
			if(prEnable->fgEnable)
				{
				 EMM_WriteDbgInfo(EMM_WDT1_EN_CALLER, (void*)&callerAddr);
				 EMM_WriteDbgInfo(EMM_WDT1_EN_TIME, (void*)&usTime);
				 EMM_WriteDbgInfo(EMM_WDT2_EN_CALLER, (void*)&callerAddr);
				 EMM_WriteDbgInfo(EMM_WDT2_EN_TIME, (void*)&usTime);
				}
			else
				{
				 EMM_WriteDbgInfo(EMM_WDT1_DIS_CALLER, (void*)&callerAddr);
				 EMM_WriteDbgInfo(EMM_WDT1_DIS_TIME, (void*)&usTime);
				 EMM_WriteDbgInfo(EMM_WDT2_DIS_CALLER, (void*)&callerAddr);
				 EMM_WriteDbgInfo(EMM_WDT2_DIS_TIME, (void*)&usTime);
				}
			/*End: preserve debug information in share memory. */
			drv_rstctl_wdt_enable((kal_bool)prEnable->fgEnable);
			drv_rstctl_wdt_enable_aux((kal_bool)prEnable->fgEnable);
			break;
		case WDT_CMD_SET_EXT_POL:
			//MT6290 wait for new feature release
			break;
		case WDT_CMD_SET_EXT_RESET:
			//MT6290 wait for new feature release
			break;
		case WDT_CMD_SET_VALUE:
			prSetValue = &(data->rWDTSetValue);
			drv_rstctl_wdt_setInterval(prSetValue->u2Value);
			drv_rstctl_wdt_setInterval_aux(prSetValue->u2Value);
			break;
		case WDT_CMD_RESTART:
			drv_rstctl_restartWDT();
			break;
		case WDT_CMD_DRV_RESET:
		    /*Begin: preserve debug information in share memory. */
			EMM_WriteDbgInfo(EMM_WDT_DRV_RST_CALLER, (void*)&callerAddr);
			EMM_WriteDbgInfo(EMM_WDT_DRV_RST_TIME, (void*)&usTime);
			/*End: preserve debug information in share memory. */
			drv_rstctl_wdt_reset();
			break;
		case WDT_CMD_GET_RSTINTERVAL:
			prst = &(data->rRstValue);
			prst->rstInterval = drv_rstctl_wd_getInterval();
			break;
		case WDT_CMD_GET_RSTINTERVAL_AUX:
			prst = &(data->rRstValue);
			prst->rstInterval = drv_rstctl_wd_getInterval_aux();
			break;
		case WDT_CMD_ABN_RESET:
			/*Begin: preserve debug information in share memory. */
			EMM_WriteDbgInfo(EMM_WDT_ABN_RST_CALLER, (void*)&callerAddr);
			EMM_WriteDbgInfo(EMM_WDT_ABN_RST_TIME, (void*)&usTime);
			/*End: preserve debug information in share memory. */
			drv_rstctl_wdt_abnReset();
			break;
		case WDT_CMD_IRQ:
			prIRQ = &(data->rWDTIRQ);
			drv_rstctl_wdt_enableInterrupt((kal_bool)prIRQ->fgEnable);
			break;
		case WDT_CMD_IRQ_AUX:
			prIRQ = &(data->rWDTIRQ);
			drv_rstctl_wdt_enableInterrupt_aux((kal_bool)prIRQ->fgEnable);
			break;
		case WDT_CMD_ENABLE_DEBUG:
			prWDTDebug=&(data->rWDTDebug);
			drv_rstctl_wdt_enableDebugMode(prWDTDebug->fgEnable);
			break;
		case WDT_CMD_CLR_CHECK:
			prSetValue = &(data->rWDTSetValue);
			EMM_WriteDbgInfo(EMM_VPE0_WDT_CLR_CHK_CALLER + ((prSetValue->u2Value)*3), (void*)&callerAddr);
			EMM_WriteDbgInfo(EMM_VPE0_WDT_CLR_CHK_CALLERVPE + ((prSetValue->u2Value)*3), (void*)&callerVPE);
			EMM_WriteDbgInfo(EMM_VPE0_WDT_CLR_CHK_TIME + ((prSetValue->u2Value)*3), (void*)&usTime);
			drv_rstctl_clr_check_bit(prSetValue->u2Value);
			break;
		case WDT_CMD_SET_CHECK:
			prSetValue = &(data->rWDTSetValue);
			EMM_WriteDbgInfo(EMM_VPE0_WDT_SET_CHK_CALLER + ((prSetValue->u2Value)*3), (void*)&callerAddr);
			EMM_WriteDbgInfo(EMM_VPE0_WDT_SET_CHK_CALLERVPE + ((prSetValue->u2Value)*3), (void*)&callerVPE);
			EMM_WriteDbgInfo(EMM_VPE0_WDT_SET_CHK_TIME + ((prSetValue->u2Value)*3), (void*)&usTime);
			drv_rstctl_set_check_bit(prSetValue->u2Value);
			break;
		case WDT_CMD_CLR_KICK:
			prSetValue = &(data->rWDTSetValue);
			drv_rstctl_clr_kick_bit(prSetValue->u2Value);
			break;
		case WDT_CMD_SET_KICK:
			prSetValue = &(data->rWDTSetValue);
			drv_rstctl_set_kick_bit(prSetValue->u2Value);
			break;
		default:
			return STATUS_INVALID_CMD;
	}
	return STATUS_OK;
}

/*************************************************************************
* FUNCTION
*  DclWDT_Close
*
* DESCRIPTION
*  This function is to close the WDT module.
*
* PARAMETERS
*  handle: the returned handle value of DclWDT_Open
*
* RETURNS
*  STATUS_OK
*
*************************************************************************/
DCL_STATUS DclWDT_Close(DCL_HANDLE handle)
{
	kal_uint32 i;
	// Check magic number
	if ((handle & DCL_WDT_DEV_MAGIC_NUM) != DCL_WDT_DEV_MAGIC_NUM){
		ASSERT(0);
		return STATUS_INVALID_DCL_HANDLE;
	}

	// Error check
	if (kal_atomic_read(&dcl_wdt_handle_count) == 0){
		ASSERT(0);
		return STATUS_NOT_OPENED;
	}
/*
	// Clear all registered event callbacks for the specific handle
	// Note: If we support multiple handles, we need to take care of the clear
	{
		kal_uint32 i;
		for (i=0;i<MAX_DCL_WDT_EVENT_NUM;i++){
			dcl_wdt_event_callback[i] = NULL;
		}
	}
*/
	i=(handle & ~DCL_WDT_DEV_MAGIC_NUM);

	kal_atomic_set(&(handle_assign[i]), 0);
	dcl_wdt_event_callback[i%MAX_DCL_WDT_EVENT_NUM] = NULL;

	kal_atomic_dec(&dcl_wdt_handle_count);

	return STATUS_OK;
}


