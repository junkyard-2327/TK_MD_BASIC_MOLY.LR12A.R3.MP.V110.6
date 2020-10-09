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
 * nvram_util.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This is utility for NVRAM
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
 *
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
 * removed!
 *
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*****************************************************************************
* Include
*****************************************************************************/
#include "stdio.h"
#include "stdarg.h"
#include "kal_general_types.h"
#include "kal_internal_api.h"  /* basename */
#include "kal_public_api.h"
#include "kal_trace.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "nvram_main.h"
#include "che_api.h"
#include "dcl.h"
#include "che_api.h" // to calculate checksum
#if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
#include "dcl_gpt.h"
#endif
#include <ex_public.h>

#if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
#if defined(__MTK_TARGET__)  //target load
#include "nvram_checksum_reset.h"
#else //modis load define a dummy table to avoid build error
const checksum_reset_struct lid_default_value_chksum[] ={	
    {NVRAM_EF_CHKSUM_RESET_REC_LID, {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F}},
};

const checksum_reset_struct lid_structure_chksum[] ={	
    {NVRAM_EF_CHKSUM_RESET_REC_LID, {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F}},
};

kal_uint32 lid_structure_chksum_num = sizeof(lid_structure_chksum)/sizeof(checksum_reset_struct);
kal_uint32 lid_default_value_chksum_num = sizeof(lid_default_value_chksum)/sizeof(checksum_reset_struct);
#endif
#endif


#ifdef __NVRAM_INIT_TIME_UT__
kal_uint16 init_time_tick[9] = {0};
nvram_init_flow_trace init_trace = 0;
#endif	
#ifdef __NVRAM_INIT_LID_BUFFER__
typedef enum
{
    NVRAM_INIT_LID_BUF_INVALID = 0,
    NVRAM_INIT_LID_BUF_ENPTY,
    NVRAM_INIT_LID_BUF_READ,
    NVRAM_INIT_LID_BUF_VALID,
    NVRAM_INIT_LID_BUF_DIRTY,
} nvram_init_lid_buffer_status;

typedef struct
{
    nvram_lid_enum  LID;
    nvram_ltable_entry_struct *ldi_ptr;
    kal_uint8 *buffer;
    nvram_init_lid_buffer_status status;
} nvram_init_lid_buffer_struct;

nvram_init_lid_buffer_struct lid_buffer_list[] = {
    {NVRAM_EF_LTECSR_PROFILE_LID, NULL, NULL, 0},
    {NVRAM_EF_IMS_PROFILE_LID, NULL, NULL, 0},
    {NVRAM_EF_VDM_ADS_PROFILE_LID, NULL, NULL, 0},
    {NVRAM_EF_SDM_ADS_PROFILE_LID, NULL, NULL, 0},
    {NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID, NULL, NULL, 0},
    {NVRAM_EF_SBP_MODEM_CONFIG_LID, NULL, NULL, 0},
    {NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_FDD_LID, NULL, NULL, 0},
    {NVRAM_EF_UMTS_USIME_RRC_DYNAMIC_CAP_TDD_LID, NULL, NULL, 0},
    {NVRAM_EF_LTE_PREFERENCE_LID, NULL, NULL, 0},
    {NVRAM_EF_REGIONAL_PHONE_MODE_LID, NULL, NULL, 0},
    {NVRAM_EF_MSCAP_LID, NULL, NULL, 0},
    {NVRAM_EF_ERRC_PERFORMANCE_PARA_LID, NULL, NULL, 0},
    {NVRAM_EF_UE_EUTRA_CAP_CSFB_LID, NULL, NULL, 0},
    {NVRAM_EF_NVRAM_SEC_CHECK_LID, NULL, NULL, 0},
};
kal_uint16 lid_buffer_list_num = sizeof(lid_buffer_list)/sizeof(nvram_init_lid_buffer_struct);
kal_uint8 *nvram_init_lid_buffer = NULL;
kal_bool nvram_init_lid_buffer_en = KAL_FALSE;
#endif

extern void InitDebugPrint(void);
extern void DebugPrint(kal_uint8, kal_uint8, kal_uint8*);

#if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
extern void nvram_gpt_timeout_callback(void *data);
#endif


#define NVRAM_TRC_SIZE 256

/*
 * External variables
 */
extern kal_mutexid g_nvram_impt_mutex;
extern kal_mutexid g_nvram_fs_mutex;
extern ilm_struct *g_ilm_ptr;
extern kal_uint32 g_nvram_task_idx;
#if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
extern DCL_HANDLE nvram_gpt_handle;
#endif

#if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
kal_int32 nvram_get_structure_chksum_index(nvram_lid_enum LID)
{
    kal_int32 index = 0;

    for(; index < lid_structure_chksum_num && LID != lid_structure_chksum[index].LID; index++)
    {}

    if(index >= lid_structure_chksum_num)
    {
        index = -1;
    }
        
    return index;
}

kal_int32 nvram_get_defval_chksum_index(nvram_lid_enum LID)
{
    kal_int32 index = 0;

    for(; index < lid_default_value_chksum_num && LID != lid_default_value_chksum[index].LID; index++)
    {}

    if(index >= lid_default_value_chksum_num)
    {
        index = -1;
    }
        
    return index;
}
#endif


kal_bool nvram_util_next_data_item(nvram_ltable_entry_struct **entry)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_ltable_entry_struct *ldi = *entry;
    kal_uint32 end = (kal_uint32)logical_data_item_table + nvram_ptr->ltable.area_size;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
        if (ldi == NULL)
        {
            ldi = &logical_data_item_table[0];
        if (ldi->fileprefix[0])
        {
            *entry = ldi;
            return KAL_TRUE;
        }
        }

    while((kal_uint32)++ldi < end)
    {
        if (ldi->fileprefix[0])
        {
            *entry = ldi;
            return KAL_TRUE;
        }
    }

    *entry = NULL;
    return KAL_FALSE;
}


kal_bool nvram_util_get_data_item(nvram_ltable_entry_struct **ldi, nvram_lid_enum LID)    
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint32 i = 0, count = 0;
    kal_uint32 end = (kal_uint32)logical_data_item_table + nvram_ptr->ltable.area_size;

    do 
    {
        if (logical_data_item_table[i].fileprefix[0])
        {
            count++;

            if (logical_data_item_table[i].LID == LID)
            {
                if (ldi) {
                    *ldi = &logical_data_item_table[i];
                }
                return KAL_TRUE;
            }
        }
        i++;
    }while(count < nvram_ptr->ltable.total_LID && ((kal_uint32)&logical_data_item_table[i] < end));

    if (ldi)
        *ldi = NULL;

    return KAL_FALSE;
}

kal_bool nvram_util_get_data_item_by_fileprefix(nvram_ltable_entry_struct **ldi, kal_char *fileprefix)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint32 i = 0, count = 0;
    kal_uint32 end = (kal_uint32)logical_data_item_table + nvram_ptr->ltable.area_size;
    kal_uint32 *d_file, *s_file = (kal_uint32*)fileprefix;

    do
    {
        if (logical_data_item_table[i].fileprefix[0])
        {
            count++;
            //if (!memcmp(logical_data_item_table[i].fileprefix, fileprefix, FILE_PREFIX_LEN))
            //speed up search
            d_file = (kal_uint32*)logical_data_item_table[i].fileprefix;
            if((*d_file == *s_file) && (logical_data_item_table[i].LID != NVRAM_EF_READ_RESERVED_LID))
            {
                if (ldi) {
                    *ldi = &logical_data_item_table[i];
                    return KAL_TRUE;
                }
            }
        }
        i++;
    }while(count < nvram_ptr->ltable.total_LID && ((kal_uint32)&logical_data_item_table[i] < end));

    if (ldi)
        *ldi = NULL;

    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_drval_caculate_checksum
 * DESCRIPTION
 *  produce the check sum of the given record.
 * PARAMETERS
 *  checksum        [?]
 *  buf             [?]
 *  size            [IN]
 * RETURNS
 *  checksum(?)
 *****************************************************************************/
kal_uint16 nvram_util_cal_checksum_simple(const kal_uint8 *buf, kal_uint32 size)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint32 i;
    kal_uint16 chksum = 0;
    kal_uint8 *byte_chksum = (kal_uint8*) &chksum;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (buf == NVRAM_EF_ZERO_DEFAULT)
    {
        return 0xCDEF;
    }
    else if (buf == NVRAM_EF_FF_DEFAULT)
    {
        for (i = 0 ;i < size; i++)
        {
            if (i & 0x1)
            {
                *(byte_chksum + 1) += 0xFF;
            }
            else
            {
                *byte_chksum += 0xFF;
            }
        }
        return chksum;
     }

    for (i = 0; i < size; i++)
    {
        if (i & 0x1)
        {
            *(byte_chksum + 1) += *(buf + i);
        }
        else
        {
            *byte_chksum += *(buf + i);
        }
    }

    //Replace conflict chksum
    if (chksum == 0)
        return 0xCDEF;
    else if(chksum == 0xCDEF)
        return 0xCEDF;
    else
        return chksum;
}

kal_bool nvram_util_zero_data_check(const kal_uint8 *buf, kal_uint32 size)
{
    while(size > 0) {
        if((size < 7) || ((kal_uint32)buf & 0x3)) {
            if(*buf != 0) {
                return KAL_FALSE;
            }
            buf += 1;
            size -= 1;            
        }
        else {
            if(*(kal_uint64*)buf != 0) {
                return KAL_FALSE;
            }
            buf += 8;
            size -= 8;
        }
    }
    return KAL_TRUE;
}

kal_uint16 nvram_util_checksum_convert(const kal_uint8 *checksum_buf_8B, kal_uint8 *checksum_buf_2B, kal_bool Check_CDEF)
{
    kal_uint8 i;
    kal_uint64 const EmptyChksum = 0xCDEF;
    kal_uint16 val = 0;
    kal_uint16 *chk_ptr = (kal_uint16*)checksum_buf_8B;

    //Check Empty
    if(Check_CDEF && !kal_mem_cmp(checksum_buf_8B, (kal_uint8*)&EmptyChksum, NVRAM_CHKSUM_SIZE)) {
        if(checksum_buf_2B != NULL) {
            checksum_buf_2B[0] = 0xEF;
            checksum_buf_2B[1] = 0xCD;
        }
        return 0xCDEF;
    }
    
    //Merge 8B MD5 to 2B
    for(i = 0; i < (NVRAM_CHKSUM_SIZE / 2); i++){
        val += chk_ptr[i];
    }

    //Replace conflict chksum
    if(val == 0xCDEF) {
        val = 0xCEDF;
    }

    //Return
    if(checksum_buf_2B != NULL) {
        kal_mem_cpy(checksum_buf_2B, (kal_uint8*)&val, 2);
    }
    return val;
}

kal_uint16 nvram_util_caculate_checksum(const kal_uint8 *buf, kal_uint32 size, kal_uint8* checksum_buf)
{
     STCHE md5Context;
     kal_uint8 md5_buf[16], i=0;
     kal_uint16 chksum = 0;
     kal_uint64 const EmptyChksum = 0xCDEF;
     kal_uint8 *byte_chksum = (kal_uint8*) &chksum;

    if (buf == NVRAM_EF_ZERO_DEFAULT || nvram_util_zero_data_check(buf, size))
    {
        kal_mem_cpy(checksum_buf, (kal_uint8*)&EmptyChksum, NVRAM_CHKSUM_SIZE);
        return 0xCDEF;
    }
    
    che_init(&md5Context, CHE_MD5);
    che_process(&md5Context, CHE_MD5, CHE_MODE_NULL, CHE_HASH, (kal_uint8 *)buf, md5_buf, size, KAL_FALSE);
    che_process(&md5Context, CHE_MD5, CHE_MODE_NULL, CHE_HASH, NULL, md5_buf, 0, KAL_TRUE);
    che_deinit(&md5Context);
    
    //Merge 16B MD5 to 8B
    for(i = 0; i<8; i++){
        checksum_buf[i] = md5_buf[i]^md5_buf[i+8];
    }

    //Merge 8B MD5 to 2B
    nvram_util_checksum_convert(checksum_buf, byte_chksum, KAL_FALSE);

    return chksum;
}




/*****************************************************************************
 * FUNCTION
 *  nvram_make_lid_filename
 * DESCRIPTION
 * PARAMETERS
 * RETURNS
 *****************************************************************************/
void nvram_util_make_lid_filename(nvram_ltable_entry_struct *ldi, NVRAM_FILE_NAME nvramname, kal_bool first_copy)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (ldi == NULL)
    {
        EXT_ASSERT(KAL_FALSE,(kal_uint32)ldi,NVRAM_LOC_LID_PTR_IS_NULL_2, 0);
        return;
    }

#ifdef __NVRAM_PSEUDO_MERGE__
    if (NVRAM_IS_ATTR_PACKAGE(ldi->attr))
    {
        nvram_make_package_filename(nvramname, 'A');
        return;
    }
#endif

    if (NVRAM_IS_ATTR_MULTIPLE(ldi->attr))
    {
        if (first_copy)
        {
            nvram_util_make_filename(nvramname, ldi->fileprefix, 'A', ldi->fileverno);
        }
        else
        {
            nvram_util_make_filename(nvramname, ldi->fileprefix, 'B', ldi->fileverno);
        }
    }
    else
    {
        nvram_util_make_filename(nvramname, ldi->fileprefix, '_', ldi->fileverno);
    }

    return;

}

/*****************************************************************************
 * FUNCTION
 *  nvram_make_lid_filename
 * DESCRIPTION
 * PARAMETERS
 * RETURNS
 *****************************************************************************/
void nvram_util_make_filename(NVRAM_FILE_NAME buf, kal_char* prefix, kal_char M, kal_char* verno) 
{
   buf[0] = prefix[0];  
   buf[1] = prefix[1];  
   buf[2] = prefix[2];  
   buf[3] = prefix[3];  
   buf[4] = M;             
   buf[5] = verno[0];   
   buf[6] = verno[1];   
   buf[7] = verno[2];   
   buf[8] = '\0';    
};


/*****************************************************************************
 * FUNCTION
 *  nvram_util_is_usbboot
 * DESCRIPTION
 *  old function name: INT_USBBoot
 * PARAMETERS
 * RETURNS
 *****************************************************************************/
kal_bool nvram_util_is_usbboot(void) 
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    PW_CTRL_IS_USB_BOOT CtrlVal;
    DCL_HANDLE handle;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    handle=DclPW_Open(DCL_PW, FLAGS_NONE);
    DclPW_Control(handle, PW_CMD_IS_USB_BOOT,(DCL_CTRL_DATA_T *)&CtrlVal);
    DclPW_Close(handle);
    return ((kal_bool)CtrlVal.val);
}

/*****************************************************************************
 * FUNCTION
 *  nvram_util_poweron
 * DESCRIPTION
 *  old function name: DRV_POWERON
 * PARAMETERS
 * RETURNS
 *****************************************************************************/
kal_bool nvram_util_poweron(void) 
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    DCL_HANDLE handle;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    handle=DclPW_Open(DCL_PW, FLAGS_NONE);
    DclPW_Control(handle,PW_CMD_POWERON,NULL);
    DclPW_Close(handle);
    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_util_poweron
 * DESCRIPTION
 *  old function name: DRV_POWERON
 * PARAMETERS
 * RETURNS
 *****************************************************************************/
void nvram_util_poweroff(void) 
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    DCL_HANDLE handle;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    handle=DclPW_Open(DCL_PW, FLAGS_NONE);
    DclPW_Control(handle,PW_CMD_POWEROFF,NULL);
    DclPW_Close(handle);
}

/*****************************************************************************
 * FUNCTION
 *  nvram_get_total_num_lid
 * DESCRIPTION
 *  Get the total LID number
 * PARAMETERS
 *  void
 * RETURNS
 *  nvram_lid_enum
 *****************************************************************************/
nvram_lid_enum nvram_get_total_num_lid(void)
{
    return nvram_ptr->ltable.total_LID;
}

nvram_lid_enum nvram_util_get_IMEISV_LID(void)
{
    return NVRAM_EF_IMEI_IMEISV_LID;
}

kal_uint32 nvram_util_get_IMEISV_size(void)
{
    return NVRAM_EF_IMEI_IMEISV_SIZE;
}

kal_uint32 nvram_util_get_IMEI_size(void)
{
    return NVRAM_EF_IMEI_IMEI_SIZE;
}

void nvram_util_take_mutex(kal_mutexid ext_mutex_id_ptr)
{
    if (!INT_QueryExceptionStatus() && !kal_query_systemInit() && ext_mutex_id_ptr)
    {
        kal_take_mutex(ext_mutex_id_ptr);
    }
}

void nvram_util_give_mutex(kal_mutexid ext_mutex_id_ptr)
{
    if (!INT_QueryExceptionStatus() && !kal_query_systemInit() && ext_mutex_id_ptr)
    {
        kal_give_mutex(ext_mutex_id_ptr);
    }
}

#ifdef __NVRAM_INIT_TIME_UT__
void nvram_init_time_ut_save(void)
{
    kal_uint8 i;

    for(i = 1; i < 8; i++) {
        if(init_time_tick[i]) {
            init_time_tick[i] -= init_time_tick[0];
        }
    }
    //init_time_tick[1] = ((init_time_tick[1] & 0x0FFF) | (init_trace << 12));
	init_time_tick[8] = init_trace;
    nvram_external_write_data(NVRAM_EF_SYS_CACHE_OCTET_LID,
                             NVRAM_SYS_NVRAM_INIT_TIME_UT,
                             (kal_uint8*)&init_time_tick[1],
                             NVRAM_EF_SYS_CACHE_OCTET_SIZE);
    nvram_external_write_data(NVRAM_EF_SYS_CACHE_OCTET_LID,
                             NVRAM_SYS_NVRAM_INIT_TIME_UT2,
                             (kal_uint8*)&init_time_tick[5],
                             NVRAM_EF_SYS_CACHE_OCTET_SIZE);
}
#endif /* __NVRAM_INIT_TIME_UT__ */

void * nvram_memset(void* dest, kal_int32 value, kal_uint32 size)
{
    kal_uint8 *dest_ptr = (kal_uint8*)dest;
    
    while(size)
    {
        if(size > (64*1024)) {
            kal_mem_set(dest_ptr, value, (64*1024));
            size -= (64*1024);
            dest_ptr += (64*1024);
        }
        else {
            return kal_mem_set(dest_ptr, value, size);
        }
    }
    return NULL;
}

#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
#define NVRAM_INFO_FILE_MAGIC_START     0x4F464E49     // "INFO"
#define NVRAM_INFO_FILE_STAT_READY      0xFDFDFBFB
#define MD5_CHECKSUM_LEN                16
#define NVRAM_LID_BITMAP_SIZE ((NVRAM_LID_GRP_MAX-(NVRAM_LID_2ND_GRP_START-NVRAM_LID_1ST_GRP_END)+7)>>3)

typedef struct {
    kal_uint32 magic_start;
    kal_uint32 file_stat;
    kal_uint8 check_sum[MD5_CHECKSUM_LEN];
} nvram_info_file_hdr_struct;

typedef struct {
    nvram_info_file_hdr_struct hdr;
    kal_uint8 bitmap[NVRAM_LID_BITMAP_SIZE];
    kal_bool changed;
}  nvram_created_file_info_struct;

kal_mutexid nvram_bitmap_mutex = NULL;
kal_mutexid nvram_pre_write_check_mutex = NULL;
nvram_created_file_info_struct nvram_created_file_info;
kal_uint8 *nvram_bitmap_ptr = nvram_created_file_info.bitmap;
    
static WCHAR *nvram_util_get_info_file_path()
{
    static WCHAR fileName[NVRAM_MAX_PATH_LEN];

    NVRAM_FS_MAKE_ROOT_PATH(fileName);

    kal_wstrcat(fileName, L"\\INFO_FILE");

    return fileName;
}

void nvram_util_lid_bimtap_set(kal_uint8 *bitmap, kal_uint32 lid)
{
    kal_uint32 offset;
    kal_uint32 bit = lid&0x7;

    if(!bitmap) {
        EXT_ASSERT(KAL_FALSE, (kal_uint32)bitmap, NVRAM_LOC_BITMAP_INVALID, lid);
    }    
    if (lid < NVRAM_LID_1ST_GRP_END) {
        offset = lid>>3;
    } else if (lid >= NVRAM_LID_2ND_GRP_START){
        offset = (NVRAM_LID_1ST_GRP_END>>3) + ((lid-NVRAM_LID_2ND_GRP_START)>>3);
    } else {
        EXT_ASSERT(KAL_FALSE, (kal_uint32)bitmap, NVRAM_LOC_BITMAP_ACCESS_OOR, lid);
    }

    bitmap[offset] |= (0x1<<bit);
    nvram_created_file_info.changed = KAL_TRUE;
}

void nvram_util_lid_bitmap_clr(kal_uint8 *bitmap, kal_uint32 lid)
{
    kal_uint32 offset;
    kal_uint32 bit = lid&0x7;

    if(!bitmap) {
        EXT_ASSERT(KAL_FALSE, (kal_uint32)bitmap, NVRAM_LOC_BITMAP_INVALID, lid);
    }
    if (lid < NVRAM_LID_1ST_GRP_END) {
        offset = lid>>3;
    } else if (lid >= NVRAM_LID_2ND_GRP_START){
        offset = (NVRAM_LID_1ST_GRP_END>>3) + ((lid-NVRAM_LID_2ND_GRP_START)>>3);
    } else {
        EXT_ASSERT(KAL_FALSE, (kal_uint32)bitmap, NVRAM_LOC_BITMAP_ACCESS_OOR, lid);
    }

    bitmap[offset] &= ~(0x1<<bit);
    nvram_created_file_info.changed = KAL_TRUE;
}

kal_bool nvram_util_lid_bitmap_check(kal_uint8 *bitmap, kal_uint32 lid)
{
    kal_uint32 offset;
    kal_uint32 bit = lid&0x7;

    if(!bitmap) {
        NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)bitmap, NVRAM_LOC_BITMAP_INVALID, lid);
    }    
    if (lid < NVRAM_LID_1ST_GRP_END) {
        offset = lid>>3;
    } else if (lid >= NVRAM_LID_2ND_GRP_START){
        offset = (NVRAM_LID_1ST_GRP_END>>3) + ((lid-NVRAM_LID_2ND_GRP_START)>>3);
    } else {
        NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)bitmap, NVRAM_LOC_BITMAP_ACCESS_OOR, lid);
    }

    return ((bitmap[offset] & (0x1<<bit)) != 0)?KAL_TRUE:KAL_FALSE;
}

void nvram_utile_reset_lid_bitmap()
{
    nvram_created_file_info.hdr.magic_start = NVRAM_INFO_FILE_MAGIC_START;
    nvram_created_file_info.hdr.file_stat = NVRAM_INFO_FILE_STAT_READY;
    nvram_created_file_info.changed = KAL_FALSE;
    kal_mem_set(nvram_created_file_info.bitmap, 0, sizeof(nvram_created_file_info.bitmap));
}

static void nvram_util_calc_md5_checksum(kal_uint8 *data_buf, kal_uint32 data_buf_len, kal_uint8 *chksum_buf)
{
    STCHE md5Context;
    
    // MD5 of bit map
    che_init(&md5Context, CHE_MD5);
    che_process(&md5Context, CHE_MD5, CHE_MODE_NULL, CHE_HASH, data_buf, chksum_buf, data_buf_len, KAL_TRUE);
    che_deinit(&md5Context);
    
    return;
}


kal_bool nvram_write_bitmap_into_file()
{
    kal_uint32 buf_len = 0;
    kal_uint8 *write_buf = NULL;
    WCHAR *file_path = NULL;
    FS_HANDLE file_handle = FS_INVALID_FILE_HANDLE;
    kal_int32 result = FS_NO_ERROR;
    kal_uint32 write_len;

    //Reduce the time of nvram init at first bootup by void writing bitmap file many times
    if (nvram_ptr->state != NVRAM_STATE_READY) //before nvram init done, cann't write bitmap
    {
        return KAL_TRUE;
    }
    if(!nvram_created_file_info.changed) //Must After nvram init,can write bitmap when first boot or version change 
    {
       return KAL_TRUE;
    }
    file_path = nvram_util_get_info_file_path();
    file_handle = FS_Open(file_path, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_CREATE_ALWAYS);
    if (file_handle < FS_NO_ERROR) {
        NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)file_handle, NVRAM_LOC_BITMAP_OPEN_FAIL, buf_len);
    }

    nvram_created_file_info.hdr.file_stat = NVRAM_INFO_FILE_STAT_READY;
    nvram_util_calc_md5_checksum(nvram_created_file_info.bitmap, sizeof(nvram_created_file_info.bitmap), nvram_created_file_info.hdr.check_sum);
    
    write_buf = (kal_uint8 *)&nvram_created_file_info;
    buf_len = sizeof(nvram_created_file_info);

    if ((result = FS_Write(file_handle, write_buf, buf_len, &write_len)) < FS_NO_ERROR) {
        NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)result, NVRAM_LOC_BITMAP_WRITE_FAIL, buf_len);
    }

    FS_Close(file_handle);
    nvram_created_file_info.changed = KAL_FALSE;
    return KAL_TRUE;
}

kal_bool nvram_delete_bitmap_file()
{
    WCHAR *file_path = NULL;
    
    file_path = nvram_util_get_info_file_path();
    FS_Delete(file_path);
    return KAL_TRUE;
}
kal_taskid pre_write_check_mutex_owner = (kal_taskid)-1;  /* to avoid recursive lock */
void nvram_util_pre_write_lid(nvram_ltable_entry_struct *ldi)
{
    if (pre_write_check_mutex_owner != kal_get_current_task()) {
        nvram_util_take_mutex(nvram_pre_write_check_mutex);
        pre_write_check_mutex_owner = kal_get_current_task();

        if (!nvram_util_has_file_created(ldi) && !nvram_util_always_gen_default(ldi)) 
        {
            if(NVRAM_IS_ATTR_RAW_DATA(ldi->attr))
            {
                // no need reset RAW data file
                nvram_util_post_reset_gen_default_lid(ldi);
            }
            else
            {
                // mark always create, then reset the lid
                ldi->attr |= NVRAM_ATTR_GEN_DEFAULT;
                 
                // reset the LID, bitmap will be set after reset ok
                nvram_reset_data_items(NVRAM_RESET_CERTAIN, 0, ldi, 1, ldi->total_records);
                // clear the mark
                ldi->attr &= ~NVRAM_ATTR_GEN_DEFAULT;
            }
        }

        pre_write_check_mutex_owner = (kal_taskid)-1;
        nvram_util_give_mutex(nvram_pre_write_check_mutex);
    }
}

void nvram_util_post_write_lid(nvram_ltable_entry_struct *ldi)
{

}

void nvram_util_pre_reset_gen_default_lid(nvram_ltable_entry_struct *ldi)
{
    if (nvram_util_has_file_created(ldi)) {
        // do nothing
        return;
    }

    // prepare reset
}

void nvram_util_post_reset_gen_default_lid(nvram_ltable_entry_struct *ldi)
{
    nvram_lid_enum lid = ldi->LID;
    
    if (nvram_util_has_file_created(ldi)) {
        // do nothing
        return;
    }

    // reset lid finish, file generated success fully
    nvram_util_take_mutex(nvram_bitmap_mutex);
    nvram_util_lid_bimtap_set(nvram_created_file_info.bitmap, lid);
    nvram_write_bitmap_into_file();
    nvram_util_give_mutex(nvram_bitmap_mutex);
}

kal_bool nvram_util_has_file_created(nvram_ltable_entry_struct *ldi)
{
    nvram_lid_enum lid = ldi->LID;
    
    if (NVRAM_IS_CATEGORY_CUSTOM_DISK(ldi->category) ||
        NVRAM_IS_CATEGORY_OTP(ldi->category)) {
        return KAL_TRUE;
    }
#ifdef __NVRAM_READ_RESERVED_FILE__
    if(ldi->LID == NVRAM_EF_READ_RESERVED_LID) {
        return KAL_TRUE;
    }
#endif

    // read only
    return nvram_util_lid_bitmap_check(nvram_created_file_info.bitmap, lid);
}

kal_bool nvram_util_always_gen_default(nvram_ltable_entry_struct *ldi)
{
    if ((ldi->attr & (NVRAM_ATTR_GEN_DEFAULT)) != 0) {
        return KAL_TRUE;
    }

    return KAL_FALSE;
}

void nvram_util_mark_file_uncreated(nvram_ltable_entry_struct *ldi)
{
    nvram_lid_enum lid = ldi->LID;
    kal_uint32 idx;

    // remove record
    nvram_util_take_mutex(nvram_bitmap_mutex);
    if (nvram_util_lid_bitmap_check(nvram_created_file_info.bitmap, lid)) {
        nvram_util_lid_bitmap_clr(nvram_created_file_info.bitmap, lid);

        // delete the LID's NVRAM File
        for (idx = 0; idx < 2; idx++) {
            NVRAM_FILE_NAME nvramname;
            WCHAR filename[NVRAM_MAX_PATH_LEN];
            nvram_folder_enum folder_index;

            nvram_util_make_lid_filename(ldi, nvramname, (idx==0));
            folder_index = nvram_query_folder_index_ex(ldi->category, (idx==0));
            nvram_query_file_name(folder_index, nvramname, filename);

            FS_Delete(filename);

            if (!(ldi->attr & NVRAM_ATTR_MULTIPLE)) {
                break;
            }
        }

        // update info file
        nvram_write_bitmap_into_file();
    }
    nvram_util_give_mutex(nvram_bitmap_mutex);
}

static kal_bool nvram_util_reconstruct_info_file()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    FS_FileOpenHint Hint;
    NVRAM_FILE_NAME nvramname;
    kal_int32 file_size = 0;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    kal_uint32 i;
    nvram_ltable_entry_struct *ldi = &logical_data_item_table[0];
    kal_bool file_exist;
    nvram_lid_enum lid;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Must clear up Hint beforehand */
    kal_mem_set(&Hint, 0, sizeof(Hint));
    nvram_util_take_mutex(nvram_bitmap_mutex);
    nvram_utile_reset_lid_bitmap();

    do
    {
        file_exist = KAL_FALSE;
        lid = ldi->LID;
        
        for (i = 0 ; i < 2; i++)
        {
            folder_index = nvram_query_folder_index(ldi->category);

            if (i == 0)  // first copy
            {
                nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
            }
            else // second copy
            {
                nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);

            #ifdef __NVRAM_BACKUP_DISK_FAT__
                if (NVRAM_IS_ATTR_BACKUP_FAT(ldi->attr))
                {
                    folder_index = NVRAM_NVD_BAK;
                }
            #endif
            }

            file_size = nvram_drv_fat_get_record_size(nvramname, &Hint, folder_index);

            if (file_size == 0)
            {
                // delete empty file
                nvram_query_file_name(folder_index, nvramname, filename);
                FS_Delete(filename);
            }

            if (file_size > 0) {
                file_exist = KAL_TRUE;
                break;
            }
            
            if (!NVRAM_IS_ATTR_MULTIPLE(ldi->attr))
            {
                break;
            }
        }

        if (file_exist == KAL_TRUE) {
            nvram_util_lid_bimtap_set(nvram_created_file_info.bitmap, lid);
        }
    }while(nvram_util_next_data_item(&ldi));
    nvram_created_file_info.changed = KAL_TRUE;
    nvram_write_bitmap_into_file();
    nvram_util_give_mutex(nvram_bitmap_mutex);
    
    return KAL_TRUE;
}


kal_bool nvram_get_created_file_info()
{
    WCHAR *file_path = NULL;
    FS_HANDLE file_handle = FS_INVALID_FILE_HANDLE;
    kal_uint32 read_len;
    kal_int32 result;
    nvram_info_file_hdr_struct *hdr = &nvram_created_file_info.hdr;
    kal_uint8 temp_checksum[MD5_CHECKSUM_LEN];
    

    file_path = nvram_util_get_info_file_path();
    file_handle = FS_Open(file_path, FS_READ_ONLY|FS_OPEN_NO_DIR);
    if (file_handle < FS_NO_ERROR) {
        // file not exist, maybe deleted
        return nvram_util_reconstruct_info_file();
    }

    result = FS_Read(file_handle, hdr, sizeof(*hdr), &read_len);
    if (result < FS_NO_ERROR || read_len != sizeof(*hdr)) {
        FS_Close(file_handle);
        return nvram_util_reconstruct_info_file();
    }

    if (hdr->magic_start != NVRAM_INFO_FILE_MAGIC_START) {
        // Invalid header
        FS_Close(file_handle);
        return nvram_util_reconstruct_info_file();
    }

    if (hdr->file_stat != NVRAM_INFO_FILE_STAT_READY) {
        // File is updating but power lost
        FS_Close(file_handle);
        return nvram_util_reconstruct_info_file();
    }

    result = FS_Read(file_handle, nvram_created_file_info.bitmap, sizeof(nvram_created_file_info.bitmap), &read_len);
    if (result < FS_NO_ERROR || read_len != sizeof(nvram_created_file_info.bitmap)) {
        // Read Error
        FS_Close(file_handle);
        return nvram_util_reconstruct_info_file();
    }
    FS_Close(file_handle);

    nvram_util_calc_md5_checksum(nvram_created_file_info.bitmap, sizeof(nvram_created_file_info.bitmap), temp_checksum);
    if (memcmp(nvram_created_file_info.hdr.check_sum, temp_checksum, MD5_CHECKSUM_LEN) != 0) {
        // checksum check fail
        return nvram_util_reconstruct_info_file();
    }

    return KAL_TRUE;
}
    
kal_bool nvram_util_init_info_file()
{
    // MUST call once @ nvram_init
    static kal_bool inited = KAL_FALSE;

    if (!inited) {
        inited = KAL_TRUE;
        
        nvram_bitmap_mutex = kal_create_mutex("NV_INFO");
        nvram_pre_write_check_mutex = kal_create_mutex("NV_PREW");

        if (nvram_ptr->sw_status & NVRAM_SW_EMPTY_FAT) {
            nvram_utile_reset_lid_bitmap();
            nvram_write_bitmap_into_file();
        } else {
            nvram_get_created_file_info();
        }
    }
    
    return KAL_TRUE;
}

#endif

DECLARE_MIPS32 
static kal_uint16 nvram_data_header_checksum(kal_uint8 *buf, kal_uint32 size)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint32 i;
    kal_uint16 chksum = *(kal_uint16*)buf;
    kal_uint8 *byte_chksum = (kal_uint8*)&chksum;
    kal_uint8 value;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    for (i = 0; i < size; i++)
    {
        value = *(buf + i);
        while(value) {
            if(value & 0x1) {
            #if defined(__MTK_TARGET__)
                __asm__ __volatile__
                (
                "rol %0, %0, 1\r\n"
                ::"r"(chksum)
                );              
            #else
                __asm {ROL [chksum],1};
            #endif
            }
            value >>= 1;
        }
    #if defined(__MTK_TARGET__)
        __asm__ __volatile__
        (
        "rol %0, %0, 4\r\n"
        ::"r"(chksum)
        );              
    #else
        __asm {ROL [chksum],4};
    #endif

        *byte_chksum += *(buf + i);
    }
    
    return chksum;
}

static __inline kal_bool nvram_prepare_ota_header(nvram_ldi_ota_header *ldi_ota_header,nvram_ltable_entry_struct *ldi)
{
    #if defined(__NVRAM_DEFVAL_CHANGE_RESET__)
    kal_int32 chksum_index;
    #endif
    
    memcpy(ldi_ota_header->header, "LDI", 4);
    ldi_ota_header->LID = ldi->LID;
    ldi_ota_header->ldi_attr = ldi->attr;
    ldi_ota_header->ldi_category= ldi->category;
    ldi_ota_header->record_size = ldi->size;
    ldi_ota_header->total_records = ldi->total_records;
    #if defined(__NVRAM_DEFVAL_CHANGE_RESET__)
    chksum_index = nvram_get_defval_chksum_index(ldi->LID);
    if(-1 != chksum_index)
    {
        kal_mem_cpy((char *)(ldi_ota_header->defval_chkrst_h), (const char*)(lid_default_value_chksum[chksum_index].chksum), RST_CHKSUM_SIZE-6);
    }    
    #endif
    ldi_ota_header->checksum = nvram_data_header_checksum((kal_uint8*)ldi_ota_header, (NVRAM_LDI_OTA_HEADER_SIZE - sizeof(ldi_ota_header->checksum)));
    return KAL_TRUE;
}

static __inline kal_bool nvram_prepare_debug_header(nvram_ldi_debug_header *ldi_debug_header, nvram_ltable_entry_struct *ldi)
{
    #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
    kal_int32 chksum_index;
    #endif

    ldi_debug_header->last_write_taskID = kal_get_current_task_index();
    ldi_debug_header->last_write_time = kal_get_systicks();
    ldi_debug_header->write_times += 1;
    
    #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__)
    chksum_index = nvram_get_structure_chksum_index(ldi->LID);
    if(-1 != chksum_index)
    {
        kal_mem_cpy((char *)(ldi_debug_header->struct_chkrst), (const char*)(lid_structure_chksum[chksum_index].chksum), RST_CHKSUM_SIZE);
    }
    #endif

    #if defined(__NVRAM_DEFVAL_CHANGE_RESET__)
    chksum_index = nvram_get_defval_chksum_index(ldi->LID);
    if(-1 != chksum_index)
    {
        kal_mem_cpy((char *)(ldi_debug_header->defval_chkrst_l),(const char*)(&(lid_default_value_chksum[chksum_index].chksum[RST_CHKSUM_SIZE-6])), 6);
    }    
    #endif

    return KAL_TRUE;
}

kal_bool nvram_prepare_data_header(nvram_ltable_entry_struct *ldi,kal_uint8 *ldi_hd_buffer)
{
    nvram_ldi_ota_header *ldi_ota_header = (nvram_ldi_ota_header*)ldi_hd_buffer;
    nvram_ldi_debug_header *ldi_debug_header = (nvram_ldi_debug_header*)(ldi_hd_buffer + NVRAM_LDI_OTA_HEADER_SIZE);

    nvram_prepare_ota_header(ldi_ota_header,ldi);
    nvram_prepare_debug_header(ldi_debug_header, ldi);

    return KAL_TRUE;
}

kal_bool nvram_write_data_header(nvram_ltable_entry_struct *ldi, nvram_header_section_enum section)
{

    NVRAM_FILE_NAME nvramname;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum nvram_folder;
    FS_HANDLE file_handle = FS_INVALID_FILE_HANDLE;
    kal_int32 result = FS_NO_ERROR;
    kal_int32 backup_file_num = 1;
    kal_bool mulpiple = KAL_FALSE;
    kal_bool ret_val = KAL_TRUE;
    nvram_ldi_header nv_header;
    nvram_ldi_ota_header *ldi_ota_header = &(nv_header.nv_ota_header);
    nvram_ldi_debug_header *ldi_debug_header = &(nv_header.nv_dbg_header);
    kal_uint32 ldi_hd_buffer_size = 0;
    kal_uint32 ldi_hd_offset = 0;
    #if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
    SGPT_CTRL_START_T start;
    #endif

    kal_mem_set(&nv_header, 0x0, sizeof(nv_header));
    if(section & LDI_HEADER_OTA_SECTION) {
        ldi_hd_buffer_size += NVRAM_LDI_OTA_HEADER_SIZE;
    }
    else {
        ldi_hd_offset = NVRAM_LDI_OTA_HEADER_SIZE;
        ldi_debug_header = (nvram_ldi_debug_header *)(&nv_header);  //care only write deg header
        if(NVRAM_IS_CATEGORY_CALIBRAT(ldi->category) || NVRAM_IS_CATEGORY_IMPORTANT_L4(ldi->category)) {
            //CALIBRATION and IMPT_L4 need update debug section
        }
        else {
            return KAL_FALSE;
        }
    }

    if(NVRAM_IS_ATTR_MULTIPLE(ldi->attr) || NVRAM_IS_CATEGORY_IMPORTANT_L4(ldi->category))
    {
        mulpiple = KAL_TRUE;
        backup_file_num = 2;
    }
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_folder = nvram_query_folder_index(ldi->category);
    nvram_query_file_name(nvram_folder, nvramname, filename);

    if(section & LDI_HEADER_DBG_SECTION) {
        ldi_hd_buffer_size += NVRAM_LDI_DEBUG_HEADER_SIZE;
        if(section != LDI_HEADER_ALL_SECTION) {
            nvram_read_data_header(filename, LDI_HEADER_DBG_SECTION, ldi_debug_header, NVRAM_LDI_DEBUG_HEADER_SIZE);
        }
    }

    /* NVRAM GPT timeout assert start timer */
    #if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
    start.u2Tick= NVRAM_WRITE_GPT_TIMEOUT;
    start.pfCallback=nvram_gpt_timeout_callback;
    start.vPara=NULL;
    #endif

    nvram_util_take_mutex(g_nvram_fs_mutex);

    #if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
    DclSGPT_Control(nvram_gpt_handle, SGPT_CMD_START, (DCL_CTRL_DATA_T*)&start); //start timer
    #endif
    do {
        file_handle = FS_Open(filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_CREATE);
        if (file_handle < FS_NO_ERROR) {
            kal_prompt_trace(MOD_NVRAM, "NVRAM write header open fail:0x%x\n\r", file_handle);
            kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
            kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
            kal_prompt_trace(MOD_NVRAM, "section:ds\n\r", section);
            if(NVRAM_IS_ATTR_FAULT_ASSERT(ldi->attr)) {
                NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)file_handle, NVRAM_LOC_OPEN_NV_FOLDER_FAIL_4, ldi->LID);
            }
            ret_val = KAL_FALSE;
        }
        if(ldi_hd_offset && (file_handle > FS_NO_ERROR)) {
            FS_Seek(file_handle, ldi_hd_offset, FS_FILE_BEGIN);
        }

        if(section & LDI_HEADER_DBG_SECTION) {
            nvram_prepare_debug_header(ldi_debug_header,ldi);
        }
        if(section & LDI_HEADER_OTA_SECTION) {
            nvram_prepare_ota_header(ldi_ota_header,ldi);
        }

        if ((result = FS_Write(file_handle, (void *)(&nv_header), ldi_hd_buffer_size, &ldi_hd_buffer_size)) < FS_NO_ERROR) {
            kal_prompt_trace(MOD_NVRAM, "NVRAM write header write fail:0x%x\n\r", result);
            kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
            kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
            kal_prompt_trace(MOD_NVRAM, "section:ds\n\r", section);
            if(NVRAM_IS_ATTR_FAULT_ASSERT(ldi->attr)) {
                NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)file_handle, NVRAM_LOC_OPEN_NV_FOLDER_FAIL_5, ldi->LID);
            }
            ret_val = KAL_FALSE;
        }
        if(file_handle > FS_NO_ERROR) {
            FS_Close(file_handle);
        }
        backup_file_num --;
        if(!mulpiple)
        {
          break;  
        }
        nvram_folder = nvram_query_folder_index_ex(ldi->category,KAL_FALSE);
        nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);
        nvram_query_file_name(nvram_folder, nvramname, filename);
    }while(backup_file_num > 0);

    #if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
    DclSGPT_Control(nvram_gpt_handle, SGPT_CMD_STOP, (DCL_CTRL_DATA_T*)NULL);   //stop timer
    #endif
    
    nvram_util_give_mutex(g_nvram_fs_mutex);

    return ret_val;
}

kal_bool nvram_read_data_header(const kal_wchar *filename, nvram_header_section_enum section, void* buffer, kal_uint32 buffer_size)
{
    kal_char s_filename[NVRAM_MAX_PATH_LEN];
    FS_HANDLE file_handle = FS_INVALID_FILE_HANDLE;
    kal_int32 result = FS_NO_ERROR;
    kal_bool ret_val = KAL_TRUE;

    kal_uint32 ldi_hd_buffer_size = 0;
    kal_uint32 ldi_hd_offset = 0;
    nvram_ldi_ota_header *ldi_ota_header;
    #if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
    SGPT_CTRL_START_T start;
    #endif

    if(section == LDI_HEADER_OTA_SECTION) {
        //ldi_hd_offset = 0;
        ldi_hd_buffer_size += NVRAM_LDI_OTA_HEADER_SIZE;
    }
    else if(section == LDI_HEADER_DBG_SECTION) {
        ldi_hd_offset = NVRAM_LDI_OTA_HEADER_SIZE;
        ldi_hd_buffer_size += NVRAM_LDI_DEBUG_HEADER_SIZE;
    }
    else if(section == LDI_HEADER_ALL_SECTION) {
        //ldi_hd_offset = 0;
        ldi_hd_buffer_size += (NVRAM_LDI_OTA_HEADER_SIZE + NVRAM_LDI_DEBUG_HEADER_SIZE);
    }
    else {
        NVRAM_EXT_ASSERT(0, section, 0, 0);
    }


    if(!buffer || (buffer_size < ldi_hd_buffer_size)) {
        return KAL_FALSE;
    }
    
    /* NVRAM GPT timeout assert start timer */
    #if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
    start.u2Tick= NVRAM_READ_GPT_TIMEOUT;
    start.pfCallback=nvram_gpt_timeout_callback;
    start.vPara=NULL;
    #endif
    
    nvram_util_take_mutex(g_nvram_fs_mutex);

    #if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
    DclSGPT_Control(nvram_gpt_handle, SGPT_CMD_START, (DCL_CTRL_DATA_T*)&start); //start timer
    #endif

#if 0// (defined(__NVRAM_FS_OPERATION_COMPACT__) && defined(__CCCIFS_SUPPORT__) && defined(__MTK_TARGET__)) || defined(__NVRAM_FS_CMPT_SIMULATION__)
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
#else
    file_handle = FS_Open(filename, FS_READ_ONLY | FS_OPEN_SHARED |FS_OPEN_NO_DIR);
    if (file_handle < FS_NO_ERROR) {
        kal_dchar2char((WCHAR *)filename, s_filename);
        kal_prompt_trace(MOD_NVRAM, "NVRAM read header open fail:0x%x\n\r", file_handle);
        kal_prompt_trace(MOD_NVRAM, "filename:%s\n\r", s_filename);
        kal_prompt_trace(MOD_NVRAM, "section:ds\n\r", section);
        ret_val = KAL_FALSE;
    }
    if(ldi_hd_offset && (file_handle > FS_NO_ERROR)) {
        FS_Seek(file_handle, ldi_hd_offset, FS_FILE_BEGIN);
    }           

    if ((result = FS_Read(file_handle, buffer, ldi_hd_buffer_size, &ldi_hd_buffer_size)) < FS_NO_ERROR) {
        kal_dchar2char((WCHAR *)filename, s_filename);
        kal_prompt_trace(MOD_NVRAM, "NVRAM read header read fail:0x%x, 0x%x\n\r", file_handle, result);
        kal_prompt_trace(MOD_NVRAM, "filename:%s\n\r", s_filename);
        kal_prompt_trace(MOD_NVRAM, "section:ds\n\r", section);
        ret_val = KAL_FALSE;
    }
    if(file_handle > FS_NO_ERROR) {
        FS_Close(file_handle);
    }
#endif

    #if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
    DclSGPT_Control(nvram_gpt_handle, SGPT_CMD_STOP, (DCL_CTRL_DATA_T*)NULL);   //stop timer
    #endif
    
    nvram_util_give_mutex(g_nvram_fs_mutex);

    if(section & LDI_HEADER_OTA_SECTION) {
        ldi_ota_header = (nvram_ldi_ota_header*)buffer;
        ldi_hd_offset = nvram_data_header_checksum((kal_uint8*)ldi_ota_header, (NVRAM_LDI_OTA_HEADER_SIZE - sizeof(ldi_ota_header->checksum)));
        if((ldi_ota_header->checksum != ldi_hd_offset) ||
           memcmp(ldi_ota_header->header, "LDI", 4)) {
            ret_val = KAL_FALSE;
        }
    }

    return ret_val;
}

static kal_uint32 nvram_ota_wstrtol(kal_wchar *wstr, kal_uint8 length)
{
    kal_uint32 ret = 0;
    kal_char c;

    for(;length > 0; length--, wstr++) {
        ret <<= 4;
        c = (kal_char)*wstr;
        if(c >= '0' && c <= '9') {
            c -= '0';
        }
        else if(c >= 'a' && c <= 'f') {
            c -= 'a';
            c += 10;
        }
        else if(c >= 'A' && c <= 'F') {
            c -= 'A';
            c += 10;
        }
        else {
            return 0;
        }
        ret += (kal_uint8)c;
    }
    return ret;
}

static void nvram_ota_convert_filename(kal_wchar *filename, kal_uint16 *verno, kal_uint32 *size)
{
    NVRAM_OTA_FILE_NAME *ota_file = (NVRAM_OTA_FILE_NAME*)filename;

    *verno = nvram_ota_wstrtol(ota_file->fileverno, FILE_VERNO_LEN);
    *size = nvram_ota_wstrtol(ota_file->record, 8);
}
static kal_uint8 nvram_ota_search_overdue_file(NVRAM_FULL_PATH *filenameArry, kal_wchar *filename)
{
    kal_uint8 i, ret = 0;
    kal_uint16 verno[NVRAM_OTA_RESERVE_CNT];
    kal_uint32 size[NVRAM_OTA_RESERVE_CNT];
    kal_wchar *s_filename = filename;
    kal_uint16 val_v;
    kal_uint32 val_s;

    // remove path
    filename = kal_wstrrchr(s_filename, '\\');
    if(filename)
        filename++;

    // find same filename
    for(i=0; i<NVRAM_OTA_RESERVE_CNT; i++) {
        if(!kal_wstrcmp(filenameArry[i], filename)) {
            return i;
        }
        nvram_ota_convert_filename(filenameArry[i], &verno[i], &size[i]);
    }

    // find the oldest verno
    val_v = 0xFFFF;
    for(i=0; i<NVRAM_OTA_RESERVE_CNT; i++) {
        if(verno[i] < val_v) {
            val_v = verno[i];
            ret = i;
        }
    }

    // find the smallest record & size
    val_s = 0xFFFFFFFF;
    for(i=0; i<NVRAM_OTA_RESERVE_CNT; i++) {
        if((verno[i] == val_v) && (size[i] < val_s)) {
            val_s = size[i];
            ret = i;
        }
    }

    return ret;
}

kal_bool nvram_ota_backup_file(const kal_wchar *s_filename, nvram_ldi_ota_header *ldi_ota_header)
{
    NVRAM_FULL_PATH d_filename;
    NVRAM_FULL_PATH f_filename;
    kal_wchar *filename;
    NVRAM_FULL_PATH filenameArry[NVRAM_OTA_RESERVE_CNT];
    FS_HANDLE handle;
    FS_DOSDirEntry fileinfo;
    kal_uint8 cnt = 0;

    // create destination filename
    filename = kal_wstrrchr(s_filename, '\\');
    if(filename++) {
        // skip B file
        if(filename[FILE_PREFIX_LEN] == 'B') {
            return KAL_TRUE;
        }
        kal_wsprintf(d_filename, "%s\\%w_%04X%04X", NVRAM_FS_OTA_DATAITEM_PATH, filename, ldi_ota_header->total_records, ldi_ota_header->record_size);
    }
    else {
        return KAL_FALSE;
    }

    // scan backup file
    kal_wsprintf(f_filename, "%s\\%w", NVRAM_FS_OTA_DATAITEM_PATH, filename);
    filename = kal_wstrrchr(f_filename, '\\');
    kal_wstrcpy((filename + (FILE_PREFIX_LEN + 1)), L"*");
    filename = filenameArry[0];
    handle = FS_FindFirst(f_filename, 0, FS_ATTR_DIR, &fileinfo, filename, NVRAM_MAX_PATH_LEN);
    if(handle > FS_NO_ERROR) {
        for(cnt = 1; cnt < NVRAM_OTA_RESERVE_CNT; cnt++) {
            filename = filenameArry[cnt];
            if(FS_FindNext(handle, &fileinfo, filename, NVRAM_MAX_PATH_LEN) != FS_NO_ERROR) {
                break;
            }
        }
        FS_FindClose(handle);
    }

    // delete overdue file
    if(cnt >= NVRAM_OTA_RESERVE_CNT) {
        cnt = nvram_ota_search_overdue_file(filenameArry,(kal_wchar *)d_filename);
        kal_wsprintf(f_filename, "%s\\%w", NVRAM_FS_OTA_DATAITEM_PATH, filenameArry[cnt]);
        FS_Delete(f_filename);
    }

    // backup file
    if(FS_Move(s_filename, d_filename, FS_MOVE_COPY, NULL, NULL, 0) != FS_NO_ERROR) {
        return KAL_FALSE;
    }
    FS_Delete(s_filename);
    
    return KAL_TRUE;
}

kal_bool nvram_ota_search_backup_file(const kal_char *s_filename, NVRAM_FULL_PATH *r_filename)
{
    FS_HANDLE handle;
    FS_DOSDirEntry fileinfo;
    kal_wchar *filename_start;
    
    nvram_query_file_name(NVRAM_NVD_BACKUP, (kal_char *)s_filename, (kal_wchar*)r_filename);
    filename_start = kal_wstrrchr((const WCHAR*)r_filename, '\\');
    handle = FS_FindFirst((const WCHAR*)r_filename, 0, FS_ATTR_DIR, &fileinfo, (filename_start + 1), NVRAM_MAX_PATH_LEN);
    if(handle > FS_NO_ERROR) {
        FS_FindClose(handle);
        return KAL_TRUE;
    }
    return KAL_FALSE;
}
kal_bool nvram_ota_restore_file(nvram_ltable_entry_struct *ldi)
{
    NVRAM_FILE_NAME nvramname;
    kal_wchar s_filename[NVRAM_MAX_PATH_LEN];
    kal_wchar d_filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum nvram_folder;
    nvram_ldi_ota_header ota_hdr;
    kal_bool hdr_ret;
    
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_folder = nvram_query_folder_index(ldi->category);
    nvram_query_file_name(nvram_folder, nvramname, d_filename);
    
    kal_wsprintf(s_filename, "%s\\%s_%04X%04X", NVRAM_FS_OTA_DATAITEM_PATH, nvramname, ldi->total_records, ldi->size);
    hdr_ret = nvram_read_data_header(s_filename, LDI_HEADER_OTA_SECTION, (void*)&ota_hdr, NVRAM_LDI_OTA_HEADER_SIZE);
    if( (hdr_ret == KAL_TRUE) && 
        (ota_hdr.LID == ldi->LID) &&
        (ota_hdr.total_records == ldi->total_records) && 
        (ota_hdr.record_size == ldi->size) &&
        (ota_hdr.ldi_category == ldi->category) ) 
    {
        //LDI recover hit
        if(FS_Move(s_filename, d_filename, FS_MOVE_COPY, NULL, NULL, 0) != FS_NO_ERROR) {
            return KAL_FALSE;
        }

        if(NVRAM_IS_ATTR_MULTIPLE(ldi->attr)) {
            nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);
            nvram_query_file_name(nvram_folder, nvramname, d_filename);
            FS_Move(s_filename, d_filename, FS_MOVE_COPY, NULL, NULL, 0);
        }
        return KAL_TRUE;
    }
    
    return KAL_FALSE;
}

kal_uint32 nvram_ota_buffer_size()
{
    return NVRAM_LID_BITMAP_SIZE;
}

#ifdef __NVRAM_INIT_LID_BUFFER__
void nvram_init_lid_buffer_prepare(void)
{
    kal_uint32 size = 0;
    kal_uint16 i;
    nvram_ltable_entry_struct *ldi = NULL;

    for(i = 0; i < lid_buffer_list_num; i++) {        
        if(!nvram_util_get_data_item(&ldi, lid_buffer_list[i].LID)) {
            continue;
        }
        lid_buffer_list[i].ldi_ptr = ldi;
        size += (ldi->size * ldi->total_records);
    }
    NVRAM_EXT_ASSERT((size < MAX_NVRAM_RECORD_SIZE), size, NVRAM_LOC_INIT_BUFFER_OVERFLOW, MAX_NVRAM_RECORD_SIZE);
    nvram_init_lid_buffer = (kal_uint8 *)get_ctrl_buffer(size);
    for(size = 0, i = 0; i < lid_buffer_list_num; i++) {        
        if(lid_buffer_list[i].ldi_ptr == NULL) {
            continue;
        }
        lid_buffer_list[i].buffer = (nvram_init_lid_buffer + size);
        size += (lid_buffer_list[i].ldi_ptr->size * lid_buffer_list[i].ldi_ptr->total_records);
        lid_buffer_list[i].status = NVRAM_INIT_LID_BUF_ENPTY;
    }
    nvram_init_lid_buffer_en = KAL_TRUE;
}

nvram_errno_enum nvram_init_lid_buffer_read(nvram_lid_enum LID, kal_uint32 rec_index, kal_uint16 rec_amount, kal_uint8 *buffer, kal_uint32 buffer_size)
{
    kal_uint16 i;
    kal_uint32 size, offset;

    if(!nvram_init_lid_buffer_en) {
        return NVRAM_ERRNO_NOT_READY;
    }
    for(i = 0; i < lid_buffer_list_num; i++) {
        if(LID == lid_buffer_list[i].LID) {
            if(lid_buffer_list[i].ldi_ptr == NULL ||
                lid_buffer_list[i].status == NVRAM_INIT_LID_BUF_INVALID ||
                lid_buffer_list[i].status == NVRAM_INIT_LID_BUF_READ ) {
                return NVRAM_ERRNO_FAIL;
            }
            if(lid_buffer_list[i].status == NVRAM_INIT_LID_BUF_ENPTY) {
                lid_buffer_list[i].status = NVRAM_INIT_LID_BUF_READ;
                if(NVRAM_ERRNO_SUCCESS != nvram_read_data_item(lid_buffer_list[i].ldi_ptr,
                                                               1,
                                                               lid_buffer_list[i].ldi_ptr->total_records,
                                                               lid_buffer_list[i].buffer,
                                                               (lid_buffer_list[i].ldi_ptr->size * lid_buffer_list[i].ldi_ptr->total_records) )) 
                {
                    lid_buffer_list[i].status = NVRAM_INIT_LID_BUF_INVALID;
                    return NVRAM_ERRNO_FAIL;
                }
                lid_buffer_list[i].status = NVRAM_INIT_LID_BUF_VALID;
            }
            size = (lid_buffer_list[i].ldi_ptr->size * rec_amount);
            offset = ((rec_index - 1) * lid_buffer_list[i].ldi_ptr->size);
            if((size > buffer_size) || 
               ((rec_amount + rec_index - 1) > lid_buffer_list[i].ldi_ptr->total_records) )
            {
                return NVRAM_ERRNO_FAIL;
            }
            nvram_util_take_mutex(g_nvram_fs_mutex);
            kal_mem_cpy(buffer, (lid_buffer_list[i].buffer + offset), size);
            nvram_util_give_mutex(g_nvram_fs_mutex);
            return NVRAM_ERRNO_SUCCESS;
        }
    }
    return NVRAM_IO_ERRNO_INVALID_LID;
}

nvram_errno_enum nvram_init_lid_buffer_write(nvram_lid_enum LID, kal_uint32 rec_index, kal_uint16 rec_amount, kal_uint8 *buffer, kal_uint32 buffer_size)
{
    kal_uint16 i;
    kal_uint32 size, offset;

    if(!nvram_init_lid_buffer_en) {
        return NVRAM_ERRNO_NOT_READY;
    }
    for(i = 0; i < lid_buffer_list_num; i++) {
        if(LID == lid_buffer_list[i].LID) {
            if(lid_buffer_list[i].ldi_ptr == NULL || 
               lid_buffer_list[i].status == NVRAM_INIT_LID_BUF_INVALID ||
               lid_buffer_list[i].status == NVRAM_INIT_LID_BUF_ENPTY)
            {
                return NVRAM_ERRNO_FAIL;
            }
            size = (lid_buffer_list[i].ldi_ptr->size * rec_amount);
            offset = ((rec_index - 1) * lid_buffer_list[i].ldi_ptr->size);
            if((buffer_size > size) || 
               ((rec_amount + rec_index - 1) > lid_buffer_list[i].ldi_ptr->total_records) )
            {
                return NVRAM_ERRNO_FAIL;
            }
            nvram_util_take_mutex(g_nvram_fs_mutex);
            kal_mem_cpy((lid_buffer_list[i].buffer + offset), buffer, size);
            lid_buffer_list[i].status = NVRAM_INIT_LID_BUF_DIRTY;
            nvram_util_give_mutex(g_nvram_fs_mutex);
            return NVRAM_ERRNO_SUCCESS;
        }
    }
    return NVRAM_IO_ERRNO_INVALID_LID;
}

void nvram_init_lid_buffer_writeback(void)
{
    kal_uint16 i,idx;
    kal_uint32 offset;
    
    if(!nvram_init_lid_buffer_en) {
        return;
    }
    nvram_init_lid_buffer_en = KAL_FALSE;
    for(i = 0; i < lid_buffer_list_num; i++) {
        if((lid_buffer_list[i].ldi_ptr == NULL) || (lid_buffer_list[i].status != NVRAM_INIT_LID_BUF_DIRTY)) {
            continue;
        }
        for(idx = 0; idx < lid_buffer_list[i].ldi_ptr->total_records; idx++) {
            offset = (idx * lid_buffer_list[i].ldi_ptr->size);
            nvram_write_data_item(lid_buffer_list[i].ldi_ptr, (idx + 1), (lid_buffer_list[i].buffer + offset), KAL_FALSE);
        }
    }
    free_ctrl_buffer(nvram_init_lid_buffer);
}
#endif

