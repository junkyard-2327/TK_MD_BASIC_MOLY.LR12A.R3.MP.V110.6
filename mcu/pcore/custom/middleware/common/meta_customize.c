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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *  meta_customize.c
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   This file contains ft task customized bt funcitons in META mode.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *
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
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#if defined(__MTK_TARGET__)
#if !defined(__MAUI_BASIC__)
/****************************************************************************
 * KAL
 ***************************************************************************/
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "init.h"
/****************************************************************************
 * NVRAM
 ***************************************************************************/
#include "nvram_enums.h"
#include "nvram_data_items.h"
#include "nvram_interface.h"
#include "adc_nvram_def.h"
#include "ul1_nvram_def.h"
/****************************************************************************
 * MODEM BSP
 ***************************************************************************/
#include "ft_msg.h"
//#include "l1audio.h"
#include "meta_customize.h"
/****************************************************************************
 * Non MODEM BSP
 ***************************************************************************/
nvram_lid_enum  meta_must_backup_lid_array[ ] =
{
#ifndef __MAUI_BASIC__
#else
    0  // at least one element
#endif //#ifndef __MAUI_BASIC__
};

kal_uint16  custom_meta_check_must_backup_lid_array(kal_bool bCheckImeiFlag)
{
#ifndef __MAUI_BASIC__
      kal_uint16 i;
    kal_char *pcStrPrefix;
      kal_char *pcStrVerNo;
    kal_uint16 lid_num = custom_meta_get_check_lid_num();//sizeof(meta_must_backup_lid_array)/ sizeof(nvram_lid_enum);
    kal_bool error_flag = KAL_FALSE;
    kal_uint16 stop_index = 0;
    
#ifndef __TC01__	  
	  for(i=0; i<lid_num-1; i++)  // imei exclusively
#else
    for(i=0; i<lid_num; i++)  // only focus calibration data.
#endif
    {
        if(NVRAM_IO_ERRNO_OK != nvram_check_backup(meta_must_backup_lid_array[i], &pcStrPrefix, &pcStrVerNo))
        {
                 error_flag = KAL_TRUE;
                 stop_index = i;
                 break;
        }

    }
#ifndef __TC01__
    if(i==lid_num-1) // pass the all check except IMEI
    {
        if(bCheckImeiFlag)  // need to check imei
        {
        	 	if(NVRAM_IO_ERRNO_OK != nvram_check_backup(meta_must_backup_lid_array[i], &pcStrPrefix, &pcStrVerNo))
        	 	  	   error_flag =KAL_TRUE;  	
        }
        stop_index = i;
    }
#endif
    
    if(error_flag == KAL_TRUE)
    {
          return stop_index;
    }
    else
    {
         return lid_num; // means success!
    }
#else
    return 0;
#endif // #ifndef __MAUI_BASIC__

}

kal_uint16  custom_meta_get_check_lid_num(void)
{
    return sizeof(meta_must_backup_lid_array)/sizeof(nvram_lid_enum);
}

kal_uint16  custom_meta_get_enum_by_index(kal_uint16 index)
{
    if(index < custom_meta_get_check_lid_num())
        return (kal_uint16)meta_must_backup_lid_array[index];
    else
          return custom_meta_get_check_lid_num();
}


kal_bool custom_ft_util_check_if_isp_support()
{
      //#if defined(ISP_SUPPORT) && !defined(YUV_SENSOR_SUPPORT)
      #if defined(ISP_SUPPORT)
        return KAL_TRUE;
      #else
        return KAL_FALSE;
      #endif
}

kal_bool custom_ft_util_check_if_usb_enable_support()
{
    #if defined(__USB_ENABLE__)
        return KAL_TRUE;
    #else
        return KAL_FALSE;
    #endif
}
kal_uint16 custom_ft_get_calflag_enum(void)
{
#if !defined (NVRAM_NOT_PRESENT)	
	 return NVRAM_EF_CAL_FLAG_LID;
#else
   return 0;
#endif
}
/*******************************************************************************
 * FUNCTION
 *   Custom_META_IsAllowedLimitedStateOperation
 *
 * DESCRIPTION
 *   Customizable limited state META mode operation check function
 *
 * CALLS
 *   INT_GetMetaModeSrc
 *
 * PARAMETERS
 *   ptrMsg the ilm_struct of the request message
 *
 * RETURNS
 *   The indicator of the operation is allowed or denied
 *
 *******************************************************************************/
#ifdef __TOOL_ACCESS_CTRL__
extern kal_bool FT_META_IsBasicOperation(kal_uint16 msg_id);
#endif
kal_bool Custom_META_IsAllowedLimitedStateOperation(ilm_struct* ptrMsg)
{
#ifdef __TOOL_ACCESS_CTRL__
    // default allowed
    kal_bool allowed = KAL_TRUE;
    FT_H * ft_header = NULL;
    MODE_ENTRY_SRC mode = INT_GetMetaModeSrc();
    /*********************************
     * define more limited state below
     **********************************/
    if(E_BLSUSB == mode)
    {
        ft_header=(FT_H *)(ptrMsg->local_para_ptr);
        // check the operation is basic operation or not
        // non-basic operations can be customized
        if(KAL_FALSE == FT_META_IsBasicOperation(ft_header->ft_msg_id))
        {
            switch (ft_header->ft_msg_id)
            {
                /*******************************************************
                 * Add more allowed operations below for E_BLSUSB state
                 * message type id defined in interface\meta\ft_msg.h
                 * enum type FT_MESSAGE_ID
                 *******************************************************/
                case FT_FAT_OPERATION_ID:
                    allowed = KAL_TRUE;
                    break;
                default:
                    // if the state is limited state, default denied
                    allowed = KAL_FALSE;
                    break;
            }
        }
    }
    /*********************************
     * define more limited state below
     **********************************/
    // else if(...)
    // {
    // }
    return allowed;
#else // #ifdef __TOOL_ACCESS_CTRL__
    return KAL_TRUE;
#endif
}

kal_bool Custom_META_IsSecureLid(kal_uint16 lid)
{
    kal_bool isSecureLid = KAL_FALSE;
    switch(lid)
    {
        case NVRAM_EF_SML_LID:
        case NVRAM_EF_SIM_LOCK_LID:
#ifdef __SMB_SIMME_LOCK_NV__
        case NVRAM_EF_SML_MAX_RETRY_COUNT_LID:
        case NVRAM_EF_SML_GBLOB_LID:
        case NVRAM_EF_SML_GBLOB_KEY_LID:
        case NVRAM_EF_SML_S_LID:
#endif
#if defined(__SUBSIDY_LOCK__) || defined(__SMB_SIMME_LOCK_NV__)
        case NVRAM_EF_SUBSIDY_LOCK_LID:
        case NVRAM_EF_SUBSIDY_LOCK_ODM_DATA_LID:
#endif
        case NVRAM_EF_SML_NONCE_LID:
	case NVRAM_EF_SML_UNLOCK_CODE_LID:
	case NVRAM_EF_SML_SIGNATURE_LID:
#ifdef __VZW_RSU_SUPPORT__
	case NVRAM_EF_SML_VZW_SIM_LOCK_LID:
	case NVRAM_EF_SML_VZW_SIM_LOCK_DEVICE_KEY_LID:
	case NVRAM_EF_SML_VZW_RSU_DELAY_TIMER_LID:
#endif
#ifdef __CARRIER_RESTRICTION__
	case NVRAM_EF_L4_CARRIER_RESTRICTION_LID:
#endif
#ifdef __ATT_SIM_LOCK__
	case NVRAM_EF_ATT_SIM_LOCK_LID:
#endif
#ifdef __TFN_SIMLOCK__
	case NVRAM_EF_L4_TFN_SIMLOCK_LID:
#endif
#ifdef __SBP_OP129_SIMME_LOCK__
	case NVRAM_EF_SML_OP129_LID:
#endif
            isSecureLid = KAL_TRUE;
            break;

        default:
            isSecureLid = KAL_FALSE;
    }

    return isSecureLid;
}
kal_bool Custom_META_IsSecureOperation(ilm_struct* ptrMsg)
{
    kal_bool isSecureOp = KAL_FALSE;
    FT_H *ft_header = NULL;

    ft_header = (FT_H *)(ptrMsg->local_para_ptr);

    /*******************************************************
     * Add more secured operations below
     * message type id defined in interface\meta\ft_msg.h
     * enum type FT_MESSAGE_ID
     *******************************************************/
    if (FT_NVRAM_READ_REQ_ID == ft_header->ft_msg_id)
    {
        ft_nvram_read_req_struct_T *ptr_loc_para = (ft_nvram_read_req_struct_T*) ptrMsg->local_para_ptr;
        if (Custom_META_IsSecureLid(ptr_loc_para->file_idx))
        {
            isSecureOp = KAL_TRUE;
            FT_SendDeniedMsgIdCnf(ft_header->ft_msg_id, FT_CNF_NOT_ALLOWED);
        }
    }

    else if (FT_NVRAM_WRITE_REQ_ID == ft_header->ft_msg_id)
    {
        ft_nvram_write_req_struct_T *ptr_loc_para = (ft_nvram_write_req_struct_T*) ptrMsg->local_para_ptr;
        if (Custom_META_IsSecureLid(ptr_loc_para->file_idx))
        {
            isSecureOp = KAL_TRUE;
            FT_SendDeniedMsgIdCnf(ft_header->ft_msg_id, FT_CNF_NOT_ALLOWED);
        }
    }

    else
    {
        isSecureOp = KAL_FALSE;
    }

    return isSecureOp;
}


kal_bool Custom_META_GetSlaPara(kal_uint8* para, kal_uint32 para_len)
{
    return true;
}

kal_uint16 Custom_META_CheckSlaVer(kal_uint32 sla_ver_from_pc)
{
    return 0;
}

kal_uint16 custom_ft_get_rf_cal_env_enum(void)
{
#ifdef __TC01__
    return NVRAM_EF_RF_CAL_ENV_LID;
#else
    return 0;
#endif
}
kal_uint16 custom_ft_get_rf_loss_setting_enum(void)
{
#ifdef __TC01__
    return NVRAM_EF_RF_CAL_LOSS_SETTING_LID;
#else
    return 0;
#endif
}
kal_uint16 custom_ft_get_rf_test_power_result_enum(void)
{
#ifdef __TC01__
    return NVRAM_EF_RF_TEST_POWER_RESULT_LID;
#else
    return 0;
#endif
}
void Custom_META_USBVirtualComDisconnect(void)
{
#if defined(__USB_ENABLE__)
    DCL_BOOL dcl_data = DCL_TRUE;
    DCL_HANDLE  usb_dcl_handle;
    usb_dcl_handle = DclUSB_DRV_Open(DCL_USB, FLAGS_NONE);
    DclUSB_DRV_Control(usb_dcl_handle, USB_DRV_CMD_PDN_ENABLE, (DCL_CTRL_DATA_T  *)&dcl_data);
    DclUSB_DRV_Close(usb_dcl_handle);
#endif // #if defined(__USB_ENABLE__)
}
/**
 * This function will return the result of SDS support.
 *
 * usage: Custom_META_SdsSupported();
 * @return KAL_TRUE, support SDS; KAL_FALSE, does not support SDS
 */
kal_bool Custom_META_SdsSupported(void)
{
#if defined(__SECURE_DATA_STORAGE__)
    return KAL_TRUE;
#else // #if defined(__SECURE_DATA_STORAGE__)
    return KAL_FALSE;
#endif // #if !defined(__SECURE_DATA_STORAGE__)
}
/**
 * This function is used for customization
 * The return value will be used as the maximum size of
 * control buffer used between META and target
 *
 * FT task will truncate the value to the actual
 * maximum value if the return value is over the actual
 * maximum value
 * (eg. system maximum value is 8K and the custom parameter
 * asks for 16K, the result is 8K)
 *
 * on the other hand, if the custom parameter asks fewer
 * than 2K, the FT task will override the value to 2K to
 * keep the legacy command compatible.
 * (eg. custom parameter is 1K, the FT task will override
 * the setting to 2K for backward compatible)
 */
kal_uint32 Custom_META_ControlBufferSize(void)
{
    return 8192;
}
/**
 * This function query the FT custom memory pool size
 * @return pool size
 */
#define META_CUSTOM_MEM_POOL_SIZE 16384
#if defined(__MTK_TARGET__)
__attribute__((aligned(4)))
#endif
 kal_uint8 ft_ext_mem[META_CUSTOM_MEM_POOL_SIZE];
kal_uint32 Custom_META_GetCustomMemoryPoolSize(void)
{
    return META_CUSTOM_MEM_POOL_SIZE;
}
/**
 * This function return the pool arrangement
 */
static const kal_uint32 ft_subpool_size[8] = { 16384, 32768, 65536, 131072, 262144, 524288, 0xffffffff, 0 };
void* Custom_META_GetCustomMemoryPoolArrangement(void)
{
    if(Custom_META_GetCustomMemoryPoolSize() > 4096)
    {
        return (void*)ft_subpool_size;
    }
    else
    {
        return NULL;
    }
}
/**
 * This function get the custom memory pool address
 */
kal_uint8* Custom_META_GetCustomMemoryPool(void)
{
    return ft_ext_mem;
}
#endif // #if !defined(__MAUI_BASIC__)
#endif // #if defined(__MTK_TARGET__)
