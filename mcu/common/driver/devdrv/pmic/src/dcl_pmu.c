/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
 *    dcl_pmu.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This Module defines DCL (Driver Common Layer) of the PMIC driver.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 ****************************************************************************/
#include "kal_debug.h"
#include "kal_public_api.h"
#include "kal_hrt_api.h"
#include "intrCtrl.h"
#include "dcl.h"
#include "dcl_pmu_sw.h"
#include "dcl_pmu_common_sw.h"
#include "us_timer.h"

#ifndef DRV_PMIC_OFF

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
PMIC_ACCESS_DURATION_DBG pmic_access_duration_log[PMIC_LOG_TYPE_MAX][PMIC_DURATION_LOG_MAX][MAX_PMIC_DURATION_INFO_SIZE];
DCL_UINT32 pmic_access_duration_index [PMIC_LOG_TYPE_MAX] = {0};
DCL_UINT32 pmic_access_timing_issue_log [PMIC_LOG_TYPE_MAX][MAX_PMIC_DURATION_INFO_SIZE];
DCL_UINT32 pmic_access_timing_issue_index [PMIC_LOG_TYPE_MAX]= {0};
#endif // End of #if defined(DCL_PMIC_ACCESS_TIME_LOG)

kal_spinlockid dcl_pmic_control_spinlock;
kal_atomic_uint32 dcl_pmic_hrt_flag = 0;

PMU_CONTROL_HANDLER pmu_control_handler = 0;
static DCL_UINT32 dcl_pmu_handle_count = 0;

#if defined(DCL_PMIC_MODULE_CONTROL)
DCL_FLAGS dcl_pmu_handle_flags = FLAGS_NONE;

DCL_FLAGS DclPMU_GetCurrentHandlerFlag(DCL_HANDLE handle)
{
	if( handle == dcl_pmu_handle_count )
		return dcl_pmu_handle_flags ;

	return FLAGS_NONE;
}
#endif

kal_atomic_uint32 DclPMU_GetHrtFlag(void)
{
	return kal_atomic_read(&dcl_pmic_hrt_flag);
}

/*************************************************************************
* FUNCTION
*  DclPMU_Initialize
*
* DESCRIPTION
*  This function is to initialize PMU module
*
* PARAMETERS
*  None
*
* RETURNS
*  STATUS_OK
*
*************************************************************************/
DCL_STATUS DclPMU_Initialize(void)
{
#if defined(MT6339)
extern void dcl_pmic6339_init(void);
	dcl_pmic6339_init();
#elif defined(MT6331) || defined(MT6332)
extern void dcl_pmic6331_32_init(void);
	dcl_pmic6331_32_init();
#elif defined(MT6325)
extern void dcl_pmic6325_init(void);
	dcl_pmic6325_init();
#elif defined(MT6328)
extern void dcl_pmic6328_init(void);
	dcl_pmic6328_init();
#elif defined(MT6351)
extern void dcl_pmic6351_init(void);
	dcl_pmic6351_init();
#elif defined(MT6353)
extern void dcl_pmic6353_init(void);
	dcl_pmic6353_init();
#elif defined(MT6335) || defined(MT6337)
extern void dcl_pmic6335_37_init(void);
	dcl_pmic6335_37_init();
#else
extern void dcl_pmic_init(void);
	dcl_pmic_init();
#endif

	return STATUS_OK;
}

/*************************************************************************
* FUNCTION
*  DclPMU_Open
*
* DESCRIPTION
*  This function is to open the PMU module and return a handle
*
* PARAMETERS
*  dev: only valid for DCL_PMU
*  flags: no sepcial flags is needed. Please use FLAGS_NONE
*
* RETURNS
*  DCL_HANDLE_INVALID: Open failed.
*  other value: a valid handle
*
*************************************************************************/
DCL_HANDLE DclPMU_Open(DCL_DEV dev, DCL_FLAGS flags)
{
	kal_uint32 handle;
	kal_uint32 savedMask=0;

	if (dev != DCL_PMU){
		return DCL_HANDLE_INVALID;		// Incorrecr device ID
	}
	savedMask = kal_hrt_SaveAndSetIRQMask();
	dcl_pmu_handle_count++;
	handle = dcl_pmu_handle_count;
#if defined(DCL_PMIC_MODULE_CONTROL)
	dcl_pmu_handle_flags = flags;
#endif
	kal_hrt_RestoreIRQMask(savedMask);

	// Register DCL default lisr
	return handle;
}
/*************************************************************************
* FUNCTION
*  DclPMU_ReadData
*
* DESCRIPTION
*  This function is not supported for the PMU module now.
*
* PARAMETERS
*	N/A
*
* RETURNS
*	STATUS_UNSUPPORTED
*
*************************************************************************/
DCL_STATUS DclPMU_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options)
{

	return STATUS_UNSUPPORTED;
}

/*************************************************************************
* FUNCTION
*  DclPMU_WriteData
*
* DESCRIPTION
*  This function is not supported for the PMU module now.
*
* PARAMETERS
*	N/A
*
* RETURNS
*	STATUS_UNSUPPORTED
*
*************************************************************************/
DCL_STATUS DclPMU_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options)
{

	return STATUS_UNSUPPORTED;
}

/*************************************************************************
* FUNCTION
*  DclPMU_Configure
*
* DESCRIPTION
*  This function is not supported for the PMU module now.
*
* PARAMETERS
*	N/A
*
* RETURNS
*	STATUS_UNSUPPORTED
*
*************************************************************************/
DCL_STATUS DclPMU_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure)
{

	return STATUS_UNSUPPORTED;
}

/*************************************************************************
* FUNCTION
*  DclPMU_RegisterCallback
*
* DESCRIPTION
*  This function is to set callback function for the PMU module.
*
* PARAMETERS
*  handle: the returned handle value of DclPMU_Open
*  event: Supported events:
*         EVENT_PMU_TIMEOUT: Watch dog time out interrupt
*  callback: the callback function for registered events
*
* RETURNS
*  STATUS_OK: Successfully register the callback function.
*  STATUS_INVALID_HANDLE: It's a invalid handle.
*  STATUS_NOT_OPENED: The module has not been opened.
*  STATUS_INVALID_EVENT: The event parameter is invalid.
*  STATUS_UNSUPPORTED: The function is NOT supported
*
*************************************************************************/
DCL_STATUS DclPMU_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback)
{
	return STATUS_UNSUPPORTED;
}


/*************************************************************************
* FUNCTION
*  DclPMU_Control
*
* DESCRIPTION
*  This function is to send command to control the PMU module.
*
* PARAMETERS
*  handle: The handle value returned from DclPMU_Open
*  cmd: a control command for PMU module
*       PMU38: Refer dcl_pmu38.c
*
*
*  data: The data of the control command
*        PMU38: Refer dcl_pmu38.c
*
*
* RETURNS
*  STATUS_OK: command is executed successfully.
*  STATUS_FAIL: command is failed.
*  STATUS_INVALID_CMD: It's a invalid command.
*
*************************************************************************/
DCL_STATUS DclPMU_Control_Wrap(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data, PMIC_LOG_TYPE_ENUM type)
{

#if defined(DCL_PMIC_ACCESS_TIME_LOG)
	DCL_STATUS pmu_control_status;
	DCL_UINT32 duration_idx = pmic_access_duration_index[type];
	DCL_UINT32 issue_idx = pmic_access_timing_issue_index[type];


	if(type == PMIC_LOG_TYPE_NORMAL_DOMAIN)
		kal_take_spinlock(dcl_pmic_control_spinlock, KAL_INFINITE_WAIT);

	pmic_access_duration_log[type][PMIC_DCL_DBG][duration_idx].start_time = ust_get_current_time();

    pmu_control_status = pmu_control_handler(handle,cmd,data);

    pmic_access_duration_log[type][PMIC_DCL_DBG][duration_idx].end_time = ust_get_current_time();
    pmic_access_duration_log[type][PMIC_DCL_DBG][duration_idx].cmd = cmd;
    pmic_access_duration_log[type][PMIC_DCL_DBG][duration_idx].duration_time = ust_get_duration(pmic_access_duration_log[type][PMIC_DCL_DBG][duration_idx].start_time, 																							  pmic_access_duration_log[type][PMIC_DCL_DBG][duration_idx].end_time);

    if(pmic_access_duration_log[type][PMIC_DCL_DBG][duration_idx].duration_time > PMIC_ACCESS_DURATION_THRESHOLD)
    {
        pmic_access_timing_issue_log[type][issue_idx] = duration_idx;
        issue_idx++;
        issue_idx = issue_idx &(MAX_PMIC_DURATION_INFO_SIZE - 1);
		pmic_access_timing_issue_index[type] = issue_idx;
    }

    duration_idx++;
    duration_idx = duration_idx &(MAX_PMIC_DURATION_INFO_SIZE - 1);
	pmic_access_duration_index[type] = duration_idx;

	if(type == PMIC_LOG_TYPE_NORMAL_DOMAIN)
		kal_give_spinlock(dcl_pmic_control_spinlock);

	return pmu_control_status;

#else
	return pmu_control_handler(handle, cmd, data);
#endif
}

DCL_STATUS DclPMU_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data)
{
	DCL_STATUS pmu_control_status;
	if( (kal_get_current_vpe_id() & 0x1) == 0x1)
	{  //HRT domain
		kal_atomic_inc(&dcl_pmic_hrt_flag);
		pmu_control_status = DclPMU_Control_Wrap(handle, cmd, data, PMIC_LOG_TYPE_HRT_DOMAIN);
		kal_atomic_dec(&dcl_pmic_hrt_flag);
	}
	else
		pmu_control_status = DclPMU_Control_Wrap(handle, cmd, data, PMIC_LOG_TYPE_NORMAL_DOMAIN);

	return pmu_control_status;
}
/*************************************************************************
* FUNCTION
*  DclPMU_Close
*
* DESCRIPTION
*  This function is to close the PMU module.
*
* PARAMETERS
*  handle: the returned handle value of DclPMU_Open
*
* RETURNS
*  STATUS_OK
*
*************************************************************************/
DCL_STATUS DclPMU_Close(DCL_HANDLE handle)
{
	return STATUS_OK;
}


#else // DRV_PMIC_OFF
DCL_STATUS DclPMU_Initialize(void)
{
    return STATUS_UNSUPPORTED;
}

DCL_HANDLE DclPMU_Open(DCL_DEV dev, DCL_FLAGS flags)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclPMU_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclPMU_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclPMU_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclPMU_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclPMU_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data)
{
    return STATUS_UNSUPPORTED;
}

DCL_STATUS DclPMU_Close(DCL_HANDLE handle)
{
    return STATUS_UNSUPPORTED;
}

#endif // DRV_PMIC_OFF


