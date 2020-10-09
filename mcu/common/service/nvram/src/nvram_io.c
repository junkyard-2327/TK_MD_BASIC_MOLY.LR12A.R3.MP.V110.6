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
 * nvram_io.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This is main() function of NVRAM module.
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
 * removed!
 *
 * removed!
 * removed!
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*****************************************************************************
* Include
*****************************************************************************/
#include "string.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_trace.h"


/* For FAT */
#include "fs_type.h"
#include "fs_gprot.h"
#include "fs_iprot.h"

#include "nvram_data_items.h"
#include "nvram_main.h"
#include "custom_nvram_restore.h"
#include "custom_nvram_sec.h"

#if defined(__MMI_FMI__)
#include "nvram_common_defs.h"

#endif
/*
 * External Function
 */
extern void WDT_Restart2(void);
extern void MMICheckDiskDisplay(void);
extern void DRV_ABN_RESET(void);
extern kal_bool nvram_set_restore_factory_flag(nvram_restore_flag_enum restore_flag);

extern const nvram_clean_folder_entry nvram_clean_folder_list[];

#ifdef __NVRAM_WRITE_WITH_FILE_SIZE__
extern kal_bool bResetNvramData;
#endif
#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
extern kal_taskid pre_write_check_mutex_owner;
#endif
/*
 * Local Function
 */
static nvram_errno_enum nvram_read_data_item_multiple(
                            nvram_ltable_entry_struct *ldi,
                            kal_uint32 rec_index,
                            kal_uint16 rec_amount,
                            kal_uint8 *buffer,
                            kal_uint32 buffer_size);
static nvram_errno_enum nvram_write_fs_data_item(
                            nvram_ltable_entry_struct *ldi,
                            kal_uint32 index,
                            kal_uint8 *buffer,
                            kal_uint32 buffer_size,
                            kal_bool is_init);
 
static nvram_errno_enum nvram_reset_one_data_item(nvram_ltable_entry_struct *ldi,
                                        kal_uint16 rec_index,
                                        kal_uint16 rec_amount);
static kal_bool nvram_factory_restore_sys_cache(
                    nvram_reset_category_enum category,
                    nvram_app_id_enum app_id);

static kal_bool nvram_factory_rmdir_user(nvram_reset_category_enum category);

kal_int32 nvram_recover_data_item(nvram_ltable_entry_struct *ldi);

#if defined(__NVRAM_DEBUG_READ_DUMP__) || defined(__NVRAM_DEBUG_WRITE_DUMP__)
kal_char str_buffer[1024];
kal_uint32 dump_offset = 0;
void nvram_debug_rw_dump(nvram_ltable_entry_struct *ldi, kal_uint16 idx, kal_uint32 rec_index, kal_uint16 rec_amount, kal_uint8 *buffer, kal_uint32 buffer_size, nvram_errno_enum status)
{
    kal_uint16 size, rec_size;
    kal_uint32 rec,i,j;
    kal_uint8 *ptr;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    FS_HANDLE hFile = 0;
    kal_uint32 len = 0;
    extern kal_mutexid g_nvram_fs_mutex;
    
    nvram_util_take_mutex(g_nvram_fs_mutex);
    kal_wsprintf(filename, "%s\\%s", NVRAM_FS_ROOT_PATH, "RW_LOG");
    hFile = FS_Open((const kal_wchar*)filename, FS_CREATE | FS_READ_WRITE | FS_OPEN_NO_DIR);

    if(idx & 0x8000) { //write
        sprintf(str_buffer, "W_LID:%s, rec_index:%d, rec_amount:%d, idx:0x%02X, status:0x%X\n", ldi->fileprefix, rec_index, rec_amount, idx, status);
    }
    else {
        sprintf(str_buffer, "R_LID:%s, rec_index:%d, rec_amount:%d, idx:0x%02X, status:0x%X\n", ldi->fileprefix, rec_index, rec_amount, idx, status);
    }
    size = strlen(str_buffer);
    FS_Seek(hFile, dump_offset, FS_FILE_BEGIN);
    FS_Write(hFile, str_buffer, size, &len);
    dump_offset += size;
    rec_size = (idx & 0x80)?sizeof(kal_uint16):ldi->size;
    
    if((status == NVRAM_ERRNO_SUCCESS) && buffer && buffer_size) {
        for(rec = 0; rec < rec_amount; rec++) {
            size = 0;
            ptr = &buffer[rec * rec_size];
            j = (rec_size > 0x100)?0x100:rec_size;
            for(i = 0; i < j; i++) {
                sprintf((char*)&str_buffer[size], "%02X ", *ptr);
                ptr++;
                size += 3;
                if((i & 0xF) == 0xF) {
                    str_buffer[size++] = '\n';
                }
            }
            str_buffer[size++] = '\n';
            str_buffer[size++] = '\n';
            FS_Write(hFile, str_buffer, size, &len);
            dump_offset += size;
        }
    }
    FS_Close(hFile);
    nvram_util_give_mutex(g_nvram_fs_mutex);
    
}

void nvram_debug_log_dump(kal_bool valid, kal_char *log_str, kal_uint32 p1, kal_uint32 p2, kal_uint32 p3, kal_uint8 *buffer, kal_uint32 buffer_size)
{
    kal_uint16 size;
    kal_uint32 i,j;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    FS_HANDLE hFile = 0;
    kal_uint32 len = 0;
    extern kal_mutexid g_nvram_fs_mutex;

    if(!valid) return;
    nvram_util_take_mutex(g_nvram_fs_mutex);
    kal_wsprintf(filename, "%s\\%s", NVRAM_FS_ROOT_PATH, "READ_LOG");
    hFile = FS_Open((const kal_wchar*)filename, FS_CREATE | FS_READ_WRITE | FS_OPEN_NO_DIR);

    sprintf(str_buffer, "%s (0x%08X, 0x%08X, 0x%08X)\n", log_str, p1, p2, p3);
    size = strlen(str_buffer);
    FS_Seek(hFile, dump_offset, FS_FILE_BEGIN);
    FS_Write(hFile, str_buffer, size, &len);
    dump_offset += size;

    if(buffer && buffer_size) {
        size = 0;
        j = (buffer_size > 0x100)?0x100:buffer_size;
        for(i = 0; i < j; i++) {
            sprintf((char*)&str_buffer[size], "%02X ", *buffer);
            buffer++;
            size += 3;
            if((i & 0xF) == 0xF) {
                str_buffer[size++] = '\n';
            }
        }
        str_buffer[size++] = '\n';
        str_buffer[size++] = '\n';
        FS_Write(hFile, str_buffer, size, &len);
        dump_offset += size;
    }
    FS_Close(hFile);
    nvram_util_give_mutex(g_nvram_fs_mutex);
    
}
#else
#define nvram_debug_log_dump(...)
#endif

#ifdef __NVRAM_DEBUG_READ_DUMP__
#define nvram_debug_read_dump(ldi, idx, rec_index, rec_amount, buffer, buffer_size, status) \
    nvram_debug_rw_dump(ldi, ((idx) & 0x7FFF), rec_index, rec_amount, buffer, buffer_size, status)
#else
#define nvram_debug_read_dump(...)
#endif /* __NVRAM_DEBUG_READ_DUMP__ */

#ifdef __NVRAM_DEBUG_WRITE_DUMP__
#define nvram_debug_write_dump(ldi, idx, rec_index, rec_amount, buffer, buffer_size, status) \
    nvram_debug_rw_dump(ldi, ((idx) | 0x8000), rec_index, rec_amount, buffer, buffer_size, status)
#else
#define nvram_debug_write_dump(...)
#endif /* __NVRAM_DEBUG_WRITE_DUMP__ */

/*****************************************************************************
 * FUNCTION
 *  nvram_read_data_item_chk
 * DESCRIPTION
 *  This is nvram_read_data_item() function of NVRAM module.
 * PARAMETERS
 *  ldi             [IN]        MUST be 1 ~ (total_LID - 1)
 *  rec_index       [IN]
 *  rec_amount      [IN]
 *  buffer          [IN]        MUST be even-bytes aligned.
 *  rec_size        [IN]        MUST be even-bytes aligned: ie, ((ldi->size + 1) / 2) * 2
 *  index(?)        [IN]        MUST be 1 ~ total_records
 * RETURNS
 *  NVRAM_IO_ERRNO_OK    if read successfully.
 *  NVRAM_IO_ERRNO_CHK   if checksum error, and cannot be reset to default value.
 *  NVRAM_IO_ERRNO_INIT  if checksum error, but successfully reset to default value.
 *****************************************************************************/
nvram_errno_enum nvram_read_data_item_chksum
    (nvram_ltable_entry_struct *ldi, kal_uint16 rec_index, kal_uint16 rec_amount, kal_uint16 *chksum, kal_uint32 chksum_size, kal_bool verify)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_int32 status;
    kal_uint8 *default_value = NULL, *default_value_buffer = NULL;
    NVRAM_FILE_NAME nvramname;
    kal_uint8 checksum_buf[8];

    kal_uint32 file_offset = 0;
    nvram_folder_enum folder_index;
    nvram_drv_read_type_enum read_type = (verify?NVRAM_DRV_READ_TYPE_CHKSUM: NVRAM_DRV_READ_TYPE_CHKSUM_ONLY);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/




/******************************************************
 *  Device Broken
 ******************************************************/

    /* Read Default Value */
    if (nvram_ptr->dev_broken)
    {
        kal_uint32 i;
        
        default_value_buffer = (kal_uint8*) get_ctrl_buffer(MAX_NVRAM_RECORD_SIZE);

        for (i = 0; i < rec_amount; i++)
        {
            /* when ldi size too big, we cannot operator it on buffer,
               use original default value pointer directly */

            default_value = (kal_uint8*) nvram_get_default_value_to_write(ldi, (kal_uint16)(i + 1), NULL, 0);

            /* the default_value is not assigned in table , ex: L1 LID */
            if (default_value == NULL)
            {
                nvram_get_default_value_to_write(ldi, (kal_uint16)(i + 1), default_value_buffer, MAX_NVRAM_RECORD_SIZE);
                default_value = default_value_buffer;
            }

            chksum[i]  = nvram_util_caculate_checksum(default_value, ldi->size, checksum_buf);
        }


        free_ctrl_buffer(default_value_buffer);
        
        status = NVRAM_IO_ERRNO_OK;

        return (nvram_errno_enum)status;
    }

/******************************************************
 *  OTP
 ******************************************************/
#ifdef __NVRAM_OTP__
    /* Handle request to OTP */
    if (NVRAM_IS_CATEGORY_OTP(ldi->category))
    {
        if (nvram_ptr->state != NVRAM_STATE_READY)
        {
            status = NVRAM_IO_ERRNO_ACCESS_DENIED;
        }
        else
        {
            kal_uint32 i;
           
            default_value_buffer = (kal_uint8*) get_ctrl_buffer(MAX_NVRAM_RECORD_SIZE);

            status = nvram_read_otp_data_item(ldi, rec_index, rec_amount, default_value_buffer, MAX_NVRAM_RECORD_SIZE);

            for (i = 0; i < rec_amount; i++)
            {
                chksum[i]  = nvram_util_caculate_checksum(default_value_buffer + i * ldi->size, ldi->size, checksum_buf);
            }
            free_ctrl_buffer(default_value_buffer);
        }

        return (nvram_errno_enum)status;
    }
#endif

/******************************************************
 *  Custom Disk
 ******************************************************/

#ifdef __NVRAM_CUSTOM_DISK__
    if (NVRAM_IS_CATEGORY_CUSTOM_DISK(ldi->category))
    {
        kal_uint32 i;
        default_value_buffer = (kal_uint8*) get_ctrl_buffer(MAX_NVRAM_RECORD_SIZE);

        status = nvram_read_custom_disk(ldi, rec_index, rec_amount, default_value_buffer, MAX_NVRAM_RECORD_SIZE);

        for (i = 0; i < rec_amount; i++)
        {
            chksum[i]  = nvram_util_caculate_checksum(default_value_buffer + i * ldi->size, ldi->size,checksum_buf);
        }

        free_ctrl_buffer(default_value_buffer);
        return (nvram_errno_enum)status;
    }
#endif

/******************************************************
 *  FAT
 ******************************************************/
#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
        if (!nvram_util_has_file_created( ldi)) {
            kal_uint32 i;
        
            default_value_buffer = (kal_uint8*) get_ctrl_buffer(MAX_NVRAM_RECORD_SIZE);

            for (i = 0; i < rec_amount; i++)
            {
                /* when ldi size too big, we cannot operator it on buffer,
                   use original default value pointer directly */
                default_value = (kal_uint8*) nvram_get_default_value_to_write(ldi, (kal_uint16)(i + rec_index), NULL, 0);

                /* the default_value is not assigned in table , ex: L1 LID */
                if (default_value == NULL)
                {
                    nvram_get_default_value_to_write(ldi, (kal_uint16)(i + rec_index), default_value_buffer, MAX_NVRAM_RECORD_SIZE);
                    default_value = default_value_buffer;
                }

                chksum[i]  = nvram_util_caculate_checksum(default_value, ldi->size,checksum_buf);
            }


            free_ctrl_buffer(default_value_buffer);
            
            return NVRAM_IO_ERRNO_OK;
        }
 #endif

    folder_index = nvram_query_folder_index(ldi->category);

#ifdef __NVRAM_PSEUDO_MERGE__
    if (NVRAM_IS_ATTR_PACKAGE(ldi->attr))
    {
        file_offset = (kal_uint32) (ldi->description);
    }
    else
#endif
    {
        file_offset = NVRAM_LDI_HEADER_SIZE;
    }

    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
#ifdef __NVRAM_READ_RESERVED_FILE__
    if(ldi->LID == NVRAM_EF_READ_RESERVED_LID) {
        sprintf((nvramname + NVRAM_FILE_LEN), "_%04X%04X", ldi->total_records, ldi->size);
    }
#endif

    status = nvram_drv_fat_read(nvramname, folder_index, file_offset, rec_index, rec_amount, ldi->size, (kal_uint8*) chksum, read_type, ldi->attr);

    if (status != NVRAM_DRV_OK && (ldi->attr & NVRAM_ATTR_MULTIPLE)
#ifdef __NVRAM_READ_RESERVED_FILE__
        && (ldi->LID != NVRAM_EF_READ_RESERVED_LID)
#endif
       )
    {
        nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);

        status = nvram_drv_fat_read(nvramname, folder_index, file_offset, rec_index, rec_amount, ldi->size, (kal_uint8*) chksum, read_type, ldi->attr);

        if (status == NVRAM_DRV_OK)
        {
            nvram_drv_fat_backup(ldi, KAL_FALSE);
        }
    }

    return (nvram_errno_enum)status;
}   /* end of nvram_read_data_item */


/*****************************************************************************
 * FUNCTION
 *  nvram_read_data_item_chksum_8b
 * DESCRIPTION
 *  This is nvram_read_data_item() function of NVRAM module.
 * PARAMETERS
 *  ldi             [IN]        MUST be 1 ~ (total_LID - 1)
 *  rec_index       [IN]
 *  rec_amount      [IN]
 *  buffer          [IN]        MUST be even-bytes aligned.
 *  rec_size        [IN]        MUST be even-bytes aligned: ie, ((ldi->size + 1) / 2) * 2
 *  index(?)        [IN]        MUST be 1 ~ total_records
 * RETURNS
 *  NVRAM_IO_ERRNO_OK    if read successfully.
 *  NVRAM_IO_ERRNO_CHK   if checksum error, and cannot be reset to default value.
 *  NVRAM_IO_ERRNO_INIT  if checksum error, but successfully reset to default value.
 *****************************************************************************/
nvram_errno_enum nvram_read_data_item_chksum_8b
    (nvram_ltable_entry_struct *ldi, kal_uint16 rec_index, kal_uint16 rec_amount, kal_uint8 *chksum, kal_uint32 chksum_size, kal_bool verify)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_int32 status;
    kal_uint8 *default_value = NULL, *default_value_buffer = NULL;
    NVRAM_FILE_NAME nvramname;
    kal_uint8 checksum_buf[8];

    kal_uint32 file_offset = 0;
    nvram_folder_enum folder_index;
    nvram_drv_read_type_enum read_type = (verify?NVRAM_DRV_READ_TYPE_CHKSUM_8B: NVRAM_DRV_READ_TYPE_CHKSUM_ONLY_8B);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/




/******************************************************
 *  Device Broken
 ******************************************************/

    /* Read Default Value */
    if (nvram_ptr->dev_broken)
    {
        kal_uint32 i;
        
        default_value_buffer = (kal_uint8*) get_ctrl_buffer(MAX_NVRAM_RECORD_SIZE);

        for (i = 0; i < rec_amount; i++)
        {
            /* when ldi size too big, we cannot operator it on buffer,
               use original default value pointer directly */

            default_value = (kal_uint8*) nvram_get_default_value_to_write(ldi, (kal_uint16)(i + 1), NULL, 0);

            /* the default_value is not assigned in table , ex: L1 LID */
            if (default_value == NULL)
            {
                nvram_get_default_value_to_write(ldi, (kal_uint16)(i + 1), default_value_buffer, MAX_NVRAM_RECORD_SIZE);
                default_value = default_value_buffer;
            }

            nvram_util_caculate_checksum(default_value, ldi->size, checksum_buf);
         kal_mem_cpy((chksum+i*NVRAM_CHKSUM_SIZE),checksum_buf, NVRAM_CHKSUM_SIZE);
        }


        free_ctrl_buffer(default_value_buffer);
        
        status = NVRAM_IO_ERRNO_OK;

        return (nvram_errno_enum)status;
    }

/******************************************************
 *  OTP
 ******************************************************/
#ifdef __NVRAM_OTP__
    /* Handle request to OTP */
    if (NVRAM_IS_CATEGORY_OTP(ldi->category))
    {
        if (nvram_ptr->state != NVRAM_STATE_READY)
        {
            status = NVRAM_IO_ERRNO_ACCESS_DENIED;
        }
        else
        {
            kal_uint32 i;
           
            default_value_buffer = (kal_uint8*) get_ctrl_buffer(MAX_NVRAM_RECORD_SIZE);

            status = nvram_read_otp_data_item(ldi, rec_index, rec_amount, default_value_buffer, MAX_NVRAM_RECORD_SIZE);

            for (i = 0; i < rec_amount; i++)
            {
                nvram_util_caculate_checksum(default_value_buffer + i * ldi->size, ldi->size, checksum_buf);
             kal_mem_cpy((chksum+i*NVRAM_CHKSUM_SIZE),checksum_buf, NVRAM_CHKSUM_SIZE);
            }
            free_ctrl_buffer(default_value_buffer);
        }

        return (nvram_errno_enum)status;
    }
#endif

/******************************************************
 *  Custom Disk
 ******************************************************/

#ifdef __NVRAM_CUSTOM_DISK__
    if (NVRAM_IS_CATEGORY_CUSTOM_DISK(ldi->category))
    {
        kal_uint32 i;
        default_value_buffer = (kal_uint8*) get_ctrl_buffer(MAX_NVRAM_RECORD_SIZE);

        status = nvram_read_custom_disk(ldi, rec_index, rec_amount, default_value_buffer, MAX_NVRAM_RECORD_SIZE);

        for (i = 0; i < rec_amount; i++)
        {
            nvram_util_caculate_checksum(default_value_buffer + i * ldi->size, ldi->size,checksum_buf);
          kal_mem_cpy((chksum+i*NVRAM_CHKSUM_SIZE),checksum_buf, NVRAM_CHKSUM_SIZE);
        }

        free_ctrl_buffer(default_value_buffer);
        nvram_debug_read_dump(ldi, 0x80, rec_index, rec_amount, chksum, chksum_size, NVRAM_IO_ERRNO_OK);
        return (nvram_errno_enum)status;
    }
#endif

/******************************************************
 *  FAT
 ******************************************************/

    folder_index = nvram_query_folder_index(ldi->category);

#ifdef __NVRAM_PSEUDO_MERGE__
    if (NVRAM_IS_ATTR_PACKAGE(ldi->attr))
    {
        file_offset = (kal_uint32) (ldi->description);
    }
    else
#endif
    {
        file_offset = NVRAM_LDI_HEADER_SIZE;
    }

    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);

    status = nvram_drv_fat_read(nvramname, folder_index, file_offset, rec_index, rec_amount, ldi->size, (kal_uint8*) chksum, read_type, ldi->attr);
    nvram_debug_read_dump(ldi, 0x82, rec_index, rec_amount, chksum, chksum_size, status);
    
    if (status != NVRAM_DRV_OK && (ldi->attr & NVRAM_ATTR_MULTIPLE))
    {
        nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);

        status = nvram_drv_fat_read(nvramname, folder_index, file_offset, rec_index, rec_amount, ldi->size, (kal_uint8*) chksum, read_type, ldi->attr);

        if (status == NVRAM_DRV_OK)
        {
            nvram_drv_fat_backup(ldi, KAL_FALSE);
        }
    }

    return (nvram_errno_enum)status;
}   /* end of nvram_read_data_item */



/*****************************************************************************
 * FUNCTION
 *  nvram_read_data_item
 * DESCRIPTION
 *  This is nvram_read_data_item() function of NVRAM module.
 * PARAMETERS
 *  ldi             [IN]        MUST be 1 ~ (total_LID - 1)
 *  rec_index       [IN]
 *  rec_amount      [IN]
 *  buffer          [IN]        MUST be even-bytes aligned.
 *  rec_size        [IN]        MUST be even-bytes aligned: ie, ((ldi->size + 1) / 2) * 2
 *  index(?)        [IN]        MUST be 1 ~ total_records
 * RETURNS
 *  NVRAM_IO_ERRNO_OK    if read successfully.
 *  NVRAM_IO_ERRNO_CHK   if checksum error, and cannot be reset to default value.
 *  NVRAM_IO_ERRNO_INIT  if checksum error, but successfully reset to default value.
 *****************************************************************************/
nvram_errno_enum nvram_read_data_item
    (nvram_ltable_entry_struct *ldi, kal_uint32 rec_index, kal_uint16 rec_amount, kal_uint8 *buffer, kal_uint32 buffer_size)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_errno_enum status;
    kal_uint8 *filename;
    FS_HANDLE hFile;


    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_START, ldi->LID, rec_index, rec_amount, buffer_size);
    nvram_trace(TRACE_INFO, INFO_NVRAM_DATA_ITEM, ldi->LID, ldi->size);

    if (!NVRAM_IS_ATTR_RAW_DATA(ldi->attr) &&
        (buffer_size < ldi->size * rec_amount))
    {
        nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_INVALID_SIZE, __LINE__);
        return NVRAM_IO_ERRNO_INVALID_SIZE;
    }

/******************************************************
 *  Device Broken
 ******************************************************/
    if (nvram_ptr->dev_broken)
    {
        kal_uint32 i;

        nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_DRV_BROKEN, __LINE__);

        if(NVRAM_IS_ATTR_RAW_DATA(ldi->attr)) {
            nvram_get_default_value_to_write(ldi, rec_index, buffer, buffer_size);
            return NVRAM_IO_ERRNO_OK;
        }

        for (i = 0; i < rec_amount; i++)
        {
            nvram_get_default_value_to_write(ldi, (i + 1), buffer + (i * ldi->size), ldi->size);
        }
        nvram_debug_read_dump(ldi, 0x12, rec_index, rec_amount, buffer, buffer_size, NVRAM_IO_ERRNO_OK);

        return NVRAM_IO_ERRNO_OK;
    }

/******************************************************
 *  OTP
 ******************************************************/
#ifdef __NVRAM_OTP__
    /* Handle request to OTP */
    if ((nvram_ptr->state != NVRAM_STATE_READY) && NVRAM_IS_CATEGORY_OTP(ldi->category))
    {
        nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_OK, __LINE__);
        return NVRAM_IO_ERRNO_OK;
    }
    else  if ((nvram_ptr->state == NVRAM_STATE_READY) && NVRAM_IS_CATEGORY_OTP(ldi->category))
    {
        if(NVRAM_IS_ATTR_RAW_DATA(ldi->attr)) {
            return NVRAM_IO_ERRNO_ACCESS_DENIED;
        }
        status = nvram_read_otp_data_item(ldi, rec_index, rec_amount, buffer, buffer_size);
        nvram_debug_read_dump(ldi, 0x11, rec_index, rec_amount, buffer, buffer_size, status);
    }
    else
#endif


/******************************************************
 *  Custom Disk
 ******************************************************/
#ifdef __NVRAM_CUSTOM_DISK__
    if (NVRAM_IS_CATEGORY_CUSTOM_DISK(ldi->category))
    {
        if(NVRAM_IS_ATTR_RAW_DATA(ldi->attr)) {
            return NVRAM_IO_ERRNO_ACCESS_DENIED;
        }    
        status = nvram_read_custom_disk(ldi, rec_index, rec_amount, buffer, buffer_size);
        nvram_debug_read_dump(ldi, 0x10, rec_index, rec_amount, buffer, buffer_size, status);
    }
    else
#endif

/******************************************************
 *  FAT
 ******************************************************/
    { //be care about this "{}" it is use for "else" code of different store device
        #ifdef __NVRAM_CRYPT_TEST__
        if (ldi->LID == NVRAM_EF_NVRAM_MSP_TEST_LID)
        {
            extern kal_uint32 bReadMsp;
            bReadMsp = 1;
        }
        #endif

        #if defined(__NVRAM_INIT_LID_BUFFER__)
        if(nvram_init_lid_buffer_read(ldi->LID, rec_index, rec_amount, buffer, buffer_size) == NVRAM_ERRNO_SUCCESS) {
            nvram_debug_read_dump(ldi, 0, rec_index, rec_amount, buffer, buffer_size, NVRAM_IO_ERRNO_OK);
            return NVRAM_IO_ERRNO_OK;
        }
        #endif
        if(ldi->attr & NVRAM_ATTR_GEN_DEFAULT)
        {
            status = nvram_read_data_item_multiple(ldi, rec_index, rec_amount, buffer, buffer_size);
            nvram_debug_read_dump(ldi, 2, rec_index, rec_amount, buffer, buffer_size, status);
        }
        #if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
        else if (!nvram_util_has_file_created(ldi)) {
            kal_uint32 i;

            nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_INIT, __LINE__);

            if(NVRAM_IS_ATTR_RAW_DATA(ldi->attr)) {
                nvram_get_default_value_to_write(ldi, rec_index, buffer, buffer_size);
                nvram_debug_read_dump(ldi, 1, rec_index, 0, buffer, buffer_size, NVRAM_IO_ERRNO_OK);
                return NVRAM_IO_ERRNO_OK;
            }

            for (i = 0; i < rec_amount; i++)
            {
                nvram_get_default_value_to_write(ldi, (kal_uint16)(i + rec_index), buffer + (i * ldi->size), ldi->size);
            }
            nvram_debug_read_dump(ldi, 1, rec_index, rec_amount, buffer, buffer_size, NVRAM_IO_ERRNO_OK);
            return NVRAM_IO_ERRNO_OK;
        }
        #endif
        else
        {
            status = nvram_read_data_item_multiple(ldi, rec_index, rec_amount, buffer, buffer_size);
            nvram_debug_read_dump(ldi, 2, rec_index, rec_amount, buffer, buffer_size, status);
        }
    }
    /*
    If read fail and the LID is located in NVRAM folder's subfolder,
    first check the root folder is OK or not.
    */
    if(status != NVRAM_IO_ERRNO_OK)
    {
        if(NVRAM_IS_CATEGORY_INTERNAL(ldi->category) || NVRAM_IS_CATEGORY_CALIBRAT(ldi->category) ||
           NVRAM_IS_CATEGORY_IMPORTANT(ldi->category) || (NVRAM_NVD_DATA == nvram_query_folder_index(ldi->category)))
        {
            filename = (kal_uint8 *) get_ctrl_buffer(NVRAM_MAX_PATH_LEN * sizeof(kal_wchar));
            NVRAM_FS_MAKE_ROOT_PATH((kal_wchar*)filename);
            hFile = FS_Open((const kal_wchar*)filename, FS_READ_ONLY | FS_OPEN_DIR);
            free_ctrl_buffer(filename);     
            if(hFile >= FS_NO_ERROR)   /* Open NVRAM root folder Success */
            {
                FS_Close(hFile);
            }
            else if (hFile == FS_FILE_NOT_FOUND || hFile == FS_PATH_NOT_FOUND)
            {
                NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)hFile, NVRAM_LOC_OPEN_NV_FOLDER_FAIL_1, 0);
            }
            else
            {
                kal_prompt_trace(MOD_NVRAM, "Open NVRAM root folder result:%d\n\r", (kal_uint32)hFile);
            }
        }
    }


    if(NVRAM_IS_ATTR_RAW_DATA(ldi->attr) && (status == NVRAM_IO_ERRNO_ACCESS_DENIED)) {
        kal_prompt_trace(MOD_NVRAM, "NVRAM READ RAW DATA OUT OF BOUNDARY:%d\n\r", DISPLAY_ERROR(status));
        kal_prompt_trace(MOD_NVRAM, "LID:%d, total_records:%d, record_size:%d\n\r", ldi->LID, ldi->total_records, ldi->size);
        kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
        kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
        return status;
    }


#if (defined(__CCCIFS_SUPPORT__) && defined(__MTK_TARGET__)) || defined(__NVRAM_BIN_REGION_SIMULATION__)
    if ((status != NVRAM_IO_ERRNO_OK) && NVRAM_IS_CATEGORY_IN_BIN_REGION(ldi->category))
    {
        nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_MULTIPLE, ldi->LID, status, nvram_drv_fat_get_last_err(), __LINE__);

        //if AP restore fail, nvram_recover_data_item() will assert
        nvram_recover_data_item(ldi);

        status = nvram_read_data_item_multiple(ldi, rec_index, rec_amount, buffer, buffer_size);
        nvram_debug_read_dump(ldi, 4, rec_index, rec_amount, buffer, buffer_size, status);

        if (status != NVRAM_IO_ERRNO_OK)
        {
            kal_prompt_trace(MOD_NVRAM, "NVRAM ASSERT ERROR NVRAM_LOC_RESTORE_SUCCESS_READ_FAIL:%d\n\r", DISPLAY_ERROR(status));
            kal_prompt_trace(MOD_NVRAM, "LID:%d, total_records:%d, record_size:%d\n\r", ldi->LID, ldi->total_records, ldi->size);
            kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
            kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
            if(NVRAM_IS_ATTR_FAULT_ASSERT(ldi->attr)) {
                NVRAM_EXT_ASSERT(KAL_FALSE, DISPLAY_ERROR(status), NVRAM_LOC_RESTORE_SUCCESS_READ_FAIL, ldi->LID);
            }
        }
    }
#endif


#ifdef __NVRAM_UNIT_TEST__
    status = nvram_unit_test_get_io_status(status);
#endif

    /*
     *  Error Handling
     *  1. try to restore data from backup partition
     *  2. reset data if data is not in important category
     *
     */

#ifdef __NVRAM_BACKUP_DISK_RAW__
    if (status != NVRAM_IO_ERRNO_OK && NVRAM_IS_ATTR_BACKUP_RAW(ldi->attr))
    {
        nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_RESULT, ldi->LID, status, __LINE__);

        if (nvram_recover_image_by_lid(ldi) == NVRAM_ERRNO_SUCCESS)
        {
            status = nvram_read_data_item_multiple(ldi, rec_index, rec_amount, buffer, buffer_size, KAL_FALSE);
        }
    }
#endif

    /* it is impossible to read data from sds fail
       if it fails, we have no error handling here , so assert */


    /* If we read internal item fail, we do not reset it , just return fail
       We will reset it after error handling */

    //internal data locates in the SDS also, need to consider this
    if (status != NVRAM_IO_ERRNO_OK && !NVRAM_IS_CATEGORY_INTERNAL(ldi->category))
    {

        nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_RESULT, ldi->LID, status, __LINE__);
    
        if(NVRAM_IS_ATTR_FAULT_ASSERT(ldi->attr))
        {
            kal_prompt_trace(MOD_NVRAM, "NVRAM ASSERT ERROR NVRAM_LOC_READ_IMPORTANT_DATA_FAIL:%d\n\r", DISPLAY_ERROR(status));
            kal_prompt_trace(MOD_NVRAM, "LID:%d, total_records:%d, record_size:%d\n\r", ldi->LID, ldi->total_records, ldi->size);
            kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
            kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
            NVRAM_EXT_ASSERT(KAL_FALSE, DISPLAY_ERROR(status), NVRAM_LOC_READ_IMPORTANT_DATA_FAIL, ldi->LID);
        }

        if((status = nvram_reset_one_data_item(ldi, 1, ldi->total_records)) == NVRAM_IO_ERRNO_OK)    
        {
            kal_uint32 i;

            nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_RESULT, ldi->LID, status, __LINE__);

            for (i = 0; i < rec_amount; i++)
            {
                nvram_get_default_value_to_write(ldi, (kal_uint16)(rec_index + i), buffer + (i * ldi->size), ldi->size);
            }

        }
        else
        {
            nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_RESULT, ldi->LID, status, __LINE__);
            kal_prompt_trace(MOD_NVRAM, "NVRAM ASSERT ERROR NVRAM_LOC_READ_AND_RESET_FAIL:%d\n\r", DISPLAY_ERROR(status));
            kal_prompt_trace(MOD_NVRAM, "LID:%d, total_records:%d, record_size:%d\n\r", ldi->LID, ldi->total_records, ldi->size);
            kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
            kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
            NVRAM_EXT_ASSERT(KAL_FALSE, DISPLAY_ERROR(status), NVRAM_LOC_READ_AND_RESET_FAIL, ldi->LID);
        }
        nvram_debug_read_dump(ldi, 5, rec_index, rec_amount, buffer, buffer_size, status); //yaohua test
    }

    return status;
}   /* end of nvram_read_data_item */


/*****************************************************************************
 * FUNCTION
 *  nvram_read_data_item_multiple
 * DESCRIPTION
 *  This is nvram_read_data_item_multiple() function of NVRAM module.
 *  Note that multiple copied attribute DOES NOT support for
 *  linear fixed logical data items.
 * PARAMETERS
 *  ldi             [IN]
 *  rec_index       [IN]
 *  rec_amount      [IN]
 *  buffer          [IN/OUT]
 *  rec_size        [IN]
 * RETURNS
 *  NVRAM_IO_ERRNO_INIT if all copies are corrupted and any of them is reset successfully.
 *  NVRAM_IO_ERRNO_CHK if all copies are corrupted and reset failed.
 *  NVRAM_IO_ERRNO_OK at least one valid copy is read.
 *****************************************************************************/
static nvram_errno_enum nvram_read_data_item_multiple
    (nvram_ltable_entry_struct *ldi, kal_uint32 rec_index, kal_uint16 rec_amount, kal_uint8 *buffer, kal_uint32 buffer_size)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_drv_status_enum drv_status[2] = {NVRAM_DRV_OK, NVRAM_DRV_OK};

    NVRAM_FILE_NAME nvramname;
    kal_uint32 file_offset = 0;
    nvram_folder_enum folder_index;
    kal_bool multiple = KAL_FALSE;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (NVRAM_IS_ATTR_MULTIPLE(ldi->attr) || NVRAM_IS_ATTR_BACKUP_FAT(ldi->attr) || NVRAM_IS_CATEGORY_IMPORTANT_L4(ldi->category))
    {
        multiple = KAL_TRUE;
    }
    folder_index = nvram_query_folder_index(ldi->category);

    file_offset = NVRAM_LDI_HEADER_SIZE;
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);

#ifdef __NVRAM_PSEUDO_MERGE__
    if (NVRAM_IS_ATTR_PACKAGE(ldi->attr))
    {
        file_offset = (kal_uint32) (ldi->description);
        if (!multiple)
        {
            nvram_make_package_filename(nvramname, 'A');
        }
    }
#endif
#ifdef __NVRAM_READ_RESERVED_FILE__
    if(ldi->LID == NVRAM_EF_READ_RESERVED_LID) {
        sprintf((nvramname + NVRAM_FILE_LEN), "_%04X%04X", ldi->total_records, ldi->size);
    }
#endif
    /*************************************************************************
     *  Step 1:  try to find one valid copy
     *  Step 2:  If found,  try to recover another one if need
     *  Step 3:  If not found or recover fail, reset the data
     *
     *  If fail in step 2 and step 3, return error
     ***************************************************************************/

    /* First, try to find one valid / healthy copy */
    
    do
    {
        if(NVRAM_IS_ATTR_RAW_DATA(ldi->attr))
            drv_status[0] = nvram_drv_fat_read(
                                    nvramname,
                                    folder_index,
                                    (file_offset + rec_index),
                                    1,
                                    1,
                                    buffer_size,
                                    buffer,
                                    NVRAM_DRV_READ_TYPE_DATA,
                                    ldi->attr);
        else
            drv_status[0] = nvram_drv_fat_read(
                                    nvramname,
                                    folder_index,
                                    file_offset,
                                    rec_index,
                                    rec_amount,
                                    ldi->size,
                                    buffer,
                                    NVRAM_DRV_READ_TYPE_DATA,
                                    ldi->attr);

    #ifdef __NVRAM_UNIT_TEST__
        drv_status[0] = nvram_unit_test_get_drv_status(drv_status[0]);
    #endif   
  
    #ifdef __NVRAM_READ_RESERVED_FILE__
        if (ldi->LID == NVRAM_EF_READ_RESERVED_LID) break;
    #endif
        if (!multiple) break;
            
    //Read 2nd copy
    #ifdef __NVRAM_BACKUP_DISK_FAT__
        if (NVRAM_IS_ATTR_BACKUP_FAT(ldi->attr))
        {
            folder_index = NVRAM_NVD_BAK;
        }
    #endif

    
    #if defined(__MTK_TARGET__) && defined(__NVRAM_IMPORTANT_PARTITIONS__) && defined(__CCCIFS_SUPPORT__)
        {
            folder_index = nvram_query_folder_index_ex(ldi->category, KAL_FALSE);
        }
    #endif

        nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);

        if (drv_status[0] == NVRAM_DRV_OK)
        {
            //Read checksum only
            kal_uint8* extra_buffer;

        #if defined(__MTK_TARGET__) && defined(__NVRAM_IMPORTANT_PARTITIONS__) && defined(__CCCIFS_SUPPORT__)
            folder_index = nvram_query_folder_index_ex(ldi->category, KAL_FALSE);
        #endif

            extra_buffer = (kal_uint8*) get_ctrl_buffer(NVRAM_CHKSUM_SIZE_2B * rec_amount);


            drv_status[1] = nvram_drv_fat_read(
                                    nvramname,
                                    folder_index,
                                    file_offset,
                                    rec_index,
                                    rec_amount,
                                    ldi->size,
                                    extra_buffer,
                                    NVRAM_DRV_READ_TYPE_CHKSUM,
                                    ldi->attr);
            free_ctrl_buffer(extra_buffer);
        }
        else
        {
            //read data
            drv_status[1] = nvram_drv_fat_read(
                                    nvramname,
                                    folder_index,
                                    file_offset,
                                    rec_index,
                                    rec_amount,
                                    ldi->size,
                                    buffer,
                                    NVRAM_DRV_READ_TYPE_DATA,
                                    ldi->attr);
        }

        nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_MULTIPLE, ldi->LID, drv_status[0], drv_status[1], nvram_drv_fat_get_last_err(), __LINE__);

        if ((drv_status[0] == NVRAM_DRV_OK) && (drv_status[1] == NVRAM_DRV_OK))
        {
            //Need to check if checksum[0] != checksum[1] in the future
            return NVRAM_IO_ERRNO_OK;
        }
        else if ((drv_status[0] != NVRAM_DRV_OK) && (drv_status[1] != NVRAM_DRV_OK))
        {
            //if SDS, backup from SDS

            return NVRAM_IO_ERRNO_CHK;        
        }
        else if ((drv_status[0] != NVRAM_DRV_OK))
        {
//            nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_MULTIPLE, ldi->LID, drv_status[0], nvram_drv_fat_get_last_err(), __LINE__);
            drv_status[0] = nvram_drv_fat_backup(ldi, KAL_FALSE);
        }
        else
        {
//            nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_MULTIPLE, ldi->LID, drv_status[1], nvram_drv_fat_get_last_err(), __LINE__);
            drv_status[1] = nvram_drv_fat_backup(ldi, KAL_TRUE);        
        }
    
    }while(0);


    /* read two copy fail or recover fail */
    if(NVRAM_IS_ATTR_RAW_DATA(ldi->attr) && ((drv_status[0] == FS_INVALID_FILE_POS) || (drv_status[1] == FS_INVALID_FILE_POS))) {
        nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_MULTIPLE, ldi->LID, drv_status[0], drv_status[1], nvram_drv_fat_get_last_err(), __LINE__);
        return NVRAM_IO_ERRNO_ACCESS_DENIED;
    }      
    if ((drv_status[0] != NVRAM_DRV_OK) || (drv_status[1] != NVRAM_DRV_OK))
    {
        nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_MULTIPLE, ldi->LID, drv_status[0], drv_status[1], nvram_drv_fat_get_last_err(), __LINE__);
        return NVRAM_IO_ERRNO_CHK;
    }

    return NVRAM_IO_ERRNO_OK;
}   /* end of nvram_read_data_item_multiple */

/*****************************************************************************
 * FUNCTION
 *  nvram_read_data_item
 * DESCRIPTION
 *  This is nvram_read_exception_data_item() function of NVRAM module.
 * PARAMETERS
 *  ldi                 [IN]        MUST be 1 ~ (total_LID - 1)
 *  index               [IN]        MUST be 1 ~ total_records
 *  data                [?]
 *  is_init             [IN]
 *  buffer_size(?)      [IN]        MUST be even-bytes aligned: ie, ((ldi->size + 1) / 2) * 2 Note that content of `data' could be changed due to encyrption!!
 *  buffer(?)           [IN]        MUST be even-bytes aligned.
 * RETURNS
 *  NVRAM_IO_ERRNO_INVALID_LID
 *  NVRAM_IO_ERRNO_INVALID_RECORD
 *  NVRAM_IO_ERRNO_INVALID_SIZE
 *  NVRAM_IO_ERRNO_CHK if all copies are failed to read
 *  NVRAM_IO_ERRNO_OK at least one valid copy is written.
 *****************************************************************************/
nvram_errno_enum nvram_read_exception_data_item(nvram_ltable_entry_struct *ldi, kal_uint16 rec_index, kal_uint8 *buffer, kal_uint32 buffer_size)

{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_errno_enum status;
    NVRAM_FILE_NAME nvramname;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_START, ldi->LID, rec_index, 0);
    nvram_trace(TRACE_INFO, INFO_NVRAM_DATA_ITEM, ldi->LID, ldi->size);
    
    /* Construct a even bytes aligned buffer, and assign it to returned data pointer */
    if (buffer == NULL)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_INVALID_SIZE, __LINE__, 0);
        return NVRAM_IO_ERRNO_INVALID_SIZE;
    }

    /* Do not allow normal access use exception API */
    if(ldi->LID != NVRAM_EF_SYS_EXCEPTION_LID_DUMMY &&
        ldi->LID != NVRAM_EF_SYS_STATISTICS_LID)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_ACCESS_DENIED, __LINE__, 0);
        return NVRAM_IO_ERRNO_ACCESS_DENIED;
    }

/******************************************************
 *  Device Broken
 ******************************************************/
    if (nvram_ptr->dev_broken)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_DRV_BROKEN, __LINE__, 0);
        return NVRAM_IO_ERRNO_OK;
    }

/******************************************************
 *  OTP
 ******************************************************/    
#ifdef __NVRAM_OTP__
    //block OTP request
    if (ldi->category & NVRAM_CATEGORY_OTP)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_ACCESS_DENIED, __LINE__, 0);
        return NVRAM_IO_ERRNO_ACCESS_DENIED;
    }
    else
#endif

/******************************************************
 *  Custom Disk
 ******************************************************/
#ifdef __NVRAM_CUSTOM_DISK__
    //block CUSTOM_DISK request
    if (NVRAM_IS_CATEGORY_CUSTOM_DISK(ldi->category))
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_ACCESS_DENIED, __LINE__, 0);
        return NVRAM_IO_ERRNO_ACCESS_DENIED; 
    }
    else
#endif


/******************************************************
 *  FAT
 ******************************************************/
    { //be care about this "{}" it is use for "else" code of different store device
        if(buffer_size > ldi->size)
        {
            buffer_size = ldi->size;
        }

        //Read exception file directly
        nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);

        status = nvram_drv_fat_read_exception_item(
                    buffer,
                    nvramname,
                    rec_index,      // record id
                    ldi->size,  // record size
                    buffer_size);  // buffer size
    }
    
    if(status != NVRAM_DRV_OK)
    {
        status = NVRAM_IO_ERRNO_CHK;
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, status, __LINE__, 0);
    }

    return status;
}

#ifdef __NVRAM_WRITE_WITH_FILE_SIZE__
/*****************************************************************************
 * FUNCTION
 *  nvram_get_lid_default_value_to_write
 * DESCRIPTION
 *  This is nvram_get_default_value_to_write() function of NVRAM module.
 *  Get default value of certain logical data item.
 *  The default value is copied into buffer.
 *  The returned content of buffer may be encrypted if needed.
 * PARAMETERS
 *  ldi             [?]
 *  rec_index       [IN]
 *  buffer          [?]
 *  buffer_size     [IN]
 * RETURNS
 *  KAL_FALSE if no default value defined, KAL_TRUE otherwise.(?)
 *****************************************************************************/
kal_uint8 const * nvram_get_lid_default_value_to_write(
                                nvram_ltable_entry_struct *ldi, 
                                kal_uint16 rec_index,
                                kal_uint8 *buffer, 
                                kal_uint32 buffer_size)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 const *default_value = ldi->default_value;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (ldi->category & NVRAM_CATEGORY_FUNC_DEFAULT)
    {
        if (buffer && ldi->default_value)
        {
            nvram_query_deault_func query_func = (nvram_query_deault_func)ldi->default_value;

            if(ldi->LID != NVRAM_EF_SYS_LID)
            {
                query_func(ldi->LID, buffer, buffer_size);
            }
        }
        return NULL;
    }
    else
    {       
        rec_index++;        
        /* Multi default value */
        if (ldi->attr & NVRAM_ATTR_MULTI_DEFAULT)
        {
            rec_index--;
        }
        else
        {
            rec_index = 0;
        }

        if (buffer)
        {
            if(buffer_size < ldi->size)
            {
                kal_prompt_trace(MOD_NVRAM, "NVRAM ASSERT ERROR NVRAM_LOC_GET_DEFAULT_WITH_WRONG_PARAM:%d\n\r", NVRAM_INTERNAL_ERR(ldi->LID));
                kal_prompt_trace(MOD_NVRAM, "LID:%d, total_records:%d, record_size:%d\n\r", ldi->LID, ldi->total_records, ldi->size);
                kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
                kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
            }            
            NVRAM_EXT_ASSERT(buffer_size >= ldi->size, NVRAM_INTERNAL_ERR(ldi->LID), NVRAM_LOC_GET_DEFAULT_WITH_WRONG_PARAM, buffer_size);
            kal_mem_cpy(buffer, (void*)(default_value + (ldi->size * rec_index)), ldi->size);
        }

        return default_value + (ldi->size * rec_index);
    }
}
#endif

/*****************************************************************************
 * FUNCTION
 *  nvram_get_default_value_to_write
 * DESCRIPTION
 *  This is nvram_get_default_value_to_write() function of NVRAM module.
 *  Get default value of certain logical data item.
 *  The default value is copied into buffer.
 *  The returned content of buffer may be encrypted if needed.
 * PARAMETERS
 *  ldi             [?]
 *  rec_index       [IN]
 *  buffer          [?]
 *  buffer_size     [IN]
 * RETURNS
 *  KAL_FALSE if no default value defined, KAL_TRUE otherwise.(?)
 *****************************************************************************/
kal_uint8 const * nvram_get_default_value_to_write
    (nvram_ltable_entry_struct *ldi, kal_uint32 rec_index, kal_uint8 *buffer, kal_uint32 buffer_size)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 const *default_value = ldi->default_value;
    kal_uint32 default_value_buffer_size = 0;
    kal_uint8 *default_value_buffer;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(NVRAM_IS_ATTR_RAW_DATA(ldi->attr)) {
        nvram_memset(buffer, (kal_uint8) NVRAM_EF_ZERO_DEFAULT_VALUE, buffer_size);
        return NVRAM_EF_ZERO_DEFAULT; 
    }
#ifdef __NVRAM_SECURE_DATA_STORAGE__
    if (NVRAM_IS_CATEGORY_BACKUP_SDS(ldi->category) && !(nvram_ptr->sw_status & NVRAM_SW_EMPTY_SDS))
    {
        if (buffer)
        {
            kal_uint32 status;
            kal_uint32 rec_amount = buffer_size / ldi->size;
            if ((status = nvram_sds_read_data_item(ldi, rec_index, rec_amount, buffer, buffer_size)) == NVRAM_ERRNO_SUCCESS)
            {
                //use the default value from the sds
                if ((ldi->total_records > 1) && !(ldi->attr & NVRAM_ATTR_MULTI_DEFAULT))
                {
                    ldi->attr |= NVRAM_ATTR_MULTI_DEFAULT;
                }
                return NULL;
            }
            else
            {
                //error handle for the important data
                if (NVRAM_IS_CATEGORY_IMPORTANT(ldi->category))
                {
                    extern void nvram_sds_throw_exception(kal_int32 err, kal_uint32 line);
                    nvram_sds_throw_exception(status, __LINE__);
                    kal_prompt_trace(MOD_NVRAM, "NVRAM ASSERT ERROR NVRAM_LOC_GET_DEFAULT_FROM_SDS_FAIL:%d\n\r", DISPLAY_ERROR(status));
                    kal_prompt_trace(MOD_NVRAM, "LID:%d, total_records:%d, record_size:%d\n\r", ldi->LID, ldi->total_records, ldi->size);
                    kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
                    kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
                    NVRAM_EXT_ASSERT(KAL_FALSE, DISPLAY_ERROR(status), NVRAM_LOC_GET_DEFAULT_FROM_SDS_FAIL ,ldi->LID);
                }
                //read sds fail, goto original flow
                goto GET_DEFAULT_VALUE;
            }    
        }
        
        return NULL;
    }
GET_DEFAULT_VALUE:
#endif

    if (ldi->category & NVRAM_CATEGORY_FUNC_DEFAULT)
    {
        if (buffer && ldi->default_value)
        {
            nvram_query_deault_func query_func = (nvram_query_deault_func)ldi->default_value;

            if(ldi->LID == NVRAM_EF_SYS_LID)
            {
                if(rec_index == 2)
                    query_func(NVRAM_EF_BRANCH_VERNO_LID, buffer, ldi->size);
                else if(rec_index == 3)
                    query_func(NVRAM_EF_FLAVOR_VERNO_LID, buffer, ldi->size);
                else if(rec_index == 4)
                    query_func(NVRAM_EF_BUILD_TIME_LID, buffer, ldi->size);
                else
                    query_func(NVRAM_EF_SYS_LID, buffer, ldi->size);
              
            }else
            {
                default_value_buffer_size = ldi->size * ldi->total_records;
                if (default_value_buffer_size > MAX_NVRAM_RECORD_SIZE)
                {
                    default_value_buffer_size = MAX_NVRAM_RECORD_SIZE;
                }
                default_value_buffer = (kal_uint8 *)get_ctrl_buffer(default_value_buffer_size);
                query_func(ldi->LID, default_value_buffer, default_value_buffer_size);
                if ((ldi->attr & NVRAM_ATTR_MULTI_DEFAULT))
                {
                    kal_mem_cpy(buffer, (void*)(default_value_buffer + (ldi->size * (rec_index -1))), buffer_size);
                }
                else
                {  
                    kal_uint32 i,record_num;
                    record_num = buffer_size / (ldi->size);
                    for (i = 0; i < record_num; i++)
                    {
                        kal_mem_cpy(buffer+(i*ldi->size), (void*)(default_value_buffer), ldi->size);
                    }
                }   
                free_ctrl_buffer(default_value_buffer);
            }
            return buffer;
        }
    }
    else
    {
        if (default_value == NULL || default_value == NVRAM_EF_FF_DEFAULT)
            /* No default value supplied. Fill the buffer with 0xFF. */
        {
            if (buffer)
            {
                kal_mem_set(buffer, (kal_uint8) NVRAM_INVALID_VALUE, buffer_size);
            }
            return NVRAM_EF_FF_DEFAULT;
        }
        else if (default_value == NVRAM_EF_ZERO_DEFAULT)
            /* Default value is all the same value (0x00) Fill it as well. */
        {
            if (buffer)
            {
                kal_mem_set(buffer, (kal_uint8) NVRAM_EF_ZERO_DEFAULT_VALUE, buffer_size);
            }
            return NVRAM_EF_ZERO_DEFAULT;
        }
        else
        {
            /* Multi default value */
            if ((ldi->attr & NVRAM_ATTR_MULTI_DEFAULT))
            {
                rec_index--;
            }
            else
            {
                rec_index = 0;
            }


            if (buffer)
            {
                if(buffer_size < ldi->size)
                {
                    kal_prompt_trace(MOD_NVRAM, "NVRAM ASSERT ERROR NVRAM_LOC_GET_DEFAULT_WITH_WRONG_PARAM:%d\n\r", NVRAM_INTERNAL_ERR(ldi->LID));
                    kal_prompt_trace(MOD_NVRAM, "LID:%d, total_records:%d, record_size:%d\n\r", ldi->LID, ldi->total_records, ldi->size);
                    kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
                    kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
                } 
                NVRAM_EXT_ASSERT(buffer_size >= ldi->size, NVRAM_INTERNAL_ERR(ldi->LID), NVRAM_LOC_GET_DEFAULT_WITH_WRONG_PARAM_1, buffer_size);

                kal_mem_cpy(buffer, (void*)(default_value + (ldi->size * rec_index)), ldi->size);
            }

            return default_value + (ldi->size * rec_index);
        }
    }
    return NULL;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_write_data_item
 * DESCRIPTION
 *  This is nvram_write_data_item() function of NVRAM module.
 * PARAMETERS
 *  ldi                 [IN]        MUST be 1 ~ (total_LID - 1)
 *  index               [IN]        MUST be 1 ~ total_records
 *  data                [?]
 *  is_init             [IN]
 *  buffer_size(?)      [IN]        MUST be even-bytes aligned: ie, ((ldi->size + 1) / 2) * 2 Note that content of `data' could be changed due to encyrption!!
 *  buffer(?)           [IN]        MUST be even-bytes aligned.
 * RETURNS
 *  NVRAM_IO_ERRNO_INVALID_LID
 *  NVRAM_IO_ERRNO_INVALID_RECORD
 *  NVRAM_IO_ERRNO_INVALID_SIZE
 *  NVRAM_IO_ERRNO_CHK if all copies are failed to write
 *  NVRAM_IO_ERRNO_OK at least one valid copy is written.
 *****************************************************************************/
nvram_errno_enum nvram_write_data_item(nvram_ltable_entry_struct *ldi, kal_uint32 index, kal_uint8 *data, kal_bool is_init)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_errno_enum status;
    kal_uint8 *filename;
    FS_HANDLE hFile;
    kal_bool lid_is_gen_default = KAL_FALSE;


    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_START, ldi->LID, index, is_init);
    nvram_trace(TRACE_INFO, INFO_NVRAM_DATA_ITEM, ldi->LID, ldi->size);
    /* Construct a even bytes aligned buffer, and assign it to returned data pointer */
    if (data == NULL)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_INVALID_SIZE, __LINE__, is_init);
        return NVRAM_IO_ERRNO_INVALID_SIZE;
    }

    /* Global software lock status is locked and this logical data item's attribute is write-protected. */
    if ((nvram_ptr->lock == KAL_TRUE) && NVRAM_IS_ATTR_WRITEPROTECT(ldi->attr))
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_LOCKED, __LINE__, is_init);
        return NVRAM_IO_ERRNO_LOCKED;
    }
#ifdef __NVRAM_READ_RESERVED_FILE__
    if(ldi->LID == NVRAM_EF_READ_RESERVED_LID) {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_INVALID_LID, __LINE__, is_init);
        return NVRAM_IO_ERRNO_INVALID_LID;
    }
#endif

/******************************************************
 *  Device Broken
 ******************************************************/
    if (nvram_ptr->dev_broken)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_DRV_BROKEN, __LINE__, is_init);
        nvram_debug_write_dump(ldi, 0x12, index, 1, data, ldi->size, NVRAM_IO_ERRNO_DRV_BROKEN);
        return NVRAM_IO_ERRNO_OK;
    }

#if defined(__NVRAM_CRITICAL_DATA_SIGN_SUPPORT__)
    if (is_init == KAL_FALSE && ldi->LID == custom_nvram_get_signed_critical_data_lid()) {
        kal_bool chk_ret = custom_nvram_check_signed_critical_data_before_write(data, ldi->size);
        if (chk_ret != KAL_TRUE) {
            return NVRAM_ERRNO_SIG_CHK_FAIL;
        }
    }
#endif


/******************************************************
 *  OTP
 ******************************************************/

#ifdef __NVRAM_OTP__
    /* Handle request to OTP */
    if(ldi->category & NVRAM_CATEGORY_OTP)
    {
        if(NVRAM_IS_ATTR_RAW_DATA(ldi->attr))
        {
            nvram_debug_write_dump(ldi, 0x11, index, 1, data, ldi->size, NVRAM_IO_ERRNO_ACCESS_DENIED);
            return NVRAM_IO_ERRNO_ACCESS_DENIED;
        }
        else if (nvram_ptr->state == NVRAM_STATE_READY)
        {
            status = nvram_write_otp_data_item(ldi, index, data, ldi->size);
            nvram_debug_write_dump(ldi, 0x11, index, 1, data, ldi->size, status);
            return status;
        }
        else if (nvram_ptr->state != NVRAM_STATE_READY)
        {
            nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_OK, __LINE__, is_init);
            status = nvram_write_fs_data_item(ldi, index, data, ldi->size, is_init);
            nvram_debug_write_dump(ldi, 0x111, index, 1, data, ldi->size, status);
        }
    }
    else
#endif

/******************************************************
 *  Custom Disk
 ******************************************************/
#ifdef __NVRAM_CUSTOM_DISK__
    if (NVRAM_IS_CATEGORY_CUSTOM_DISK(ldi->category))
    {
        if(NVRAM_IS_ATTR_RAW_DATA(ldi->attr))
        {
            nvram_debug_write_dump(ldi, 0x10, index, 1, data, ldi->size, NVRAM_IO_ERRNO_ACCESS_DENIED);
            return NVRAM_IO_ERRNO_ACCESS_DENIED;
        }    
        status = nvram_write_custom_disk(ldi, index, data, ldi->size, is_init);
        nvram_debug_write_dump(ldi, 0x10, index, 1, data, ldi->size, status);
    }
    else
#endif

/******************************************************
 *  FAT
 ******************************************************/
    { //be care about this "{}" it is use for "else" code of different store device
        #ifdef __NVRAM_CRYPT_TEST__
        if (ldi->LID == NVRAM_EF_NVRAM_MSP_TEST_LID)
        {
            extern kal_uint32 bWriteMsp;
            bWriteMsp = 1;
        }
        #endif

        #if defined(__NVRAM_INIT_LID_BUFFER__)
        if(nvram_init_lid_buffer_write(ldi->LID, index, 1, data, ldi->size) == NVRAM_ERRNO_SUCCESS) {
            nvram_debug_write_dump(ldi, 0x0, index, 1, data, ldi->size, NVRAM_IO_ERRNO_OK);
            return NVRAM_IO_ERRNO_OK;
        }
        #endif
        #if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
        if(pre_write_check_mutex_owner != kal_get_current_task()) {
            if (nvram_util_has_file_created(ldi)) {
                if(!is_init) {
                    nvram_write_data_header(ldi, LDI_HEADER_DBG_SECTION);
                }
            }
            else {
                nvram_write_data_header(ldi, LDI_HEADER_ALL_SECTION);
            }
        }
        nvram_util_pre_write_lid(ldi);
        #endif

        status = nvram_write_fs_data_item(ldi, index, data, ldi->size, is_init);
        nvram_debug_write_dump(ldi, 0x2, index, 1, data, ldi->size, status);
    }
    /*
    If write fail and the LID is located in NVRAM folder's subfolder,
    first check the root folder is OK or not.
    */
    if(status != NVRAM_IO_ERRNO_OK)
    {
        if(NVRAM_IS_CATEGORY_INTERNAL(ldi->category) || NVRAM_IS_CATEGORY_CALIBRAT(ldi->category) ||
           NVRAM_IS_CATEGORY_IMPORTANT(ldi->category) || (NVRAM_NVD_DATA == nvram_query_folder_index(ldi->category)))
        {
            filename = (kal_uint8 *) get_ctrl_buffer(NVRAM_MAX_PATH_LEN * sizeof(kal_wchar));
            NVRAM_FS_MAKE_ROOT_PATH((kal_wchar*)filename);
            hFile = FS_Open((const kal_wchar*)filename, FS_READ_ONLY | FS_OPEN_DIR);
            free_ctrl_buffer(filename);
            if(hFile >= FS_NO_ERROR)   /* Open NVRAM root folder Success */
            {
                FS_Close(hFile);
            }
            else if (hFile == FS_FILE_NOT_FOUND || hFile == FS_PATH_NOT_FOUND)
            {
                NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)hFile, NVRAM_LOC_OPEN_NV_FOLDER_FAIL_2, 0);
            }
            else
            {
                kal_prompt_trace(MOD_NVRAM, "Open NVRAM root folder result:%d\n\r", (kal_uint32)hFile);
            }
        }
    }


#ifdef __NVRAM_UNIT_TEST__
    if (!is_init)
    {
        status = nvram_unit_test_get_io_status(status);
    }
#endif

    if (status != NVRAM_IO_ERRNO_OK)
    {
#if (defined(__CCCIFS_SUPPORT__) && defined(__MTK_TARGET__)) || defined(__NVRAM_BIN_REGION_SIMULATION__)
        if (NVRAM_IS_CATEGORY_IN_BIN_REGION(ldi->category))
        {
            // try restore from bin region
            if (nvram_recover_data_item(ldi) == NVRAM_IO_ERRNO_OK)
            {
                status = nvram_write_fs_data_item(ldi, index, data, ldi->size, is_init);
                nvram_debug_write_dump(ldi, 0x3, index, 1, data, ldi->size, status);
                if (status == NVRAM_IO_ERRNO_OK)
                {
                    goto end;
                }
            }
        }
#endif

        /* IMEI and SML */
        if (NVRAM_IS_ATTR_FAULT_ASSERT(ldi->attr))
        {
            kal_prompt_trace(MOD_NVRAM, "NVRAM ASSERT ERROR NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL:%d\n\r", DISPLAY_ERROR(status));
            kal_prompt_trace(MOD_NVRAM, "LID:%d, total_records:%d, record_size:%d\n\r", ldi->LID, ldi->total_records, ldi->size);
            kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
            kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
            NVRAM_EXT_ASSERT (KAL_FALSE, DISPLAY_ERROR(status),NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL , ldi->LID);
            return status;
        }


        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, status, __LINE__, is_init);

        if (is_init == KAL_FALSE
        #ifdef __NVRAM_CUSTOM_DISK__
            && !NVRAM_IS_CATEGORY_CUSTOM_DISK(ldi->category)
        #endif
        #ifdef __NVRAM_OTP__
            && !NVRAM_IS_CATEGORY_OTP(ldi->category)
        #endif
            )
        {
            if (!nvram_util_always_gen_default(ldi))
            {
                ldi->attr |= NVRAM_ATTR_GEN_DEFAULT;
                lid_is_gen_default = KAL_TRUE;
            }
            /* Try to reset data if it is not a initial case */
            if ((status = nvram_reset_one_data_item(ldi, 1, ldi->total_records)) == NVRAM_IO_ERRNO_OK)
            {
                nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, status, __LINE__, is_init);

                status = nvram_write_fs_data_item(ldi, index, data, ldi->size, is_init);
                nvram_debug_write_dump(ldi, 0x4, index, 1, data, ldi->size, status);
            }
            //nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, status, __LINE__, is_init);
            if(lid_is_gen_default)
            {
                ldi->attr &= ~NVRAM_ATTR_GEN_DEFAULT;
                lid_is_gen_default = KAL_FALSE;
            }
        }
    }

    if (status != NVRAM_IO_ERRNO_OK)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, status, __LINE__, is_init);
        kal_prompt_trace(MOD_NVRAM, "NVRAM ASSERT ERROR NVRAM_LOC_WRITE_AND_RESET_FAIL:%d\n\r", DISPLAY_ERROR(status));
        kal_prompt_trace(MOD_NVRAM, "LID:%d, total_records:%d, record_size:%d\n\r", ldi->LID, ldi->total_records, ldi->size);
        kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
        kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
        NVRAM_EXT_ASSERT(KAL_FALSE, DISPLAY_ERROR(status), NVRAM_LOC_WRITE_AND_RESET_FAIL, ldi->LID);
    }
#if (defined(__CCCIFS_SUPPORT__) && defined(__MTK_TARGET__)) || defined(__NVRAM_BIN_REGION_SIMULATION__)
end:
#endif
#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
    if (status == NVRAM_IO_ERRNO_OK)
    {
        nvram_util_post_write_lid(ldi);
    }
#endif

    return status;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_write_data_item
 * DESCRIPTION
 *  This is nvram_write_exception_data_item() function of NVRAM module.
 * PARAMETERS
 *  ldi                 [IN]        MUST be 1 ~ (total_LID - 1)
 *  index               [IN]        MUST be 1 ~ total_records
 *  data                [?]
 *  is_init             [IN]
 *  buffer_size(?)      [IN]        MUST be even-bytes aligned: ie, ((ldi->size + 1) / 2) * 2 Note that content of `data' could be changed due to encyrption!!
 *  buffer(?)           [IN]        MUST be even-bytes aligned.
 * RETURNS
 *  NVRAM_IO_ERRNO_INVALID_LID
 *  NVRAM_IO_ERRNO_INVALID_RECORD
 *  NVRAM_IO_ERRNO_INVALID_SIZE
 *  NVRAM_IO_ERRNO_CHK if all copies are failed to write
 *  NVRAM_IO_ERRNO_OK at least one valid copy is written.
 *****************************************************************************/
nvram_errno_enum nvram_write_exception_data_item(nvram_ltable_entry_struct *ldi, kal_uint16 index, kal_uint8 *data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_errno_enum status;
    NVRAM_FILE_NAME nvramname;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_START, ldi->LID, index, 0);
    nvram_trace(TRACE_INFO, INFO_NVRAM_DATA_ITEM, ldi->LID, ldi->size);
    
    /* Construct a even bytes aligned buffer, and assign it to returned data pointer */
    if (data == NULL)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_INVALID_SIZE, __LINE__, 0);
        return NVRAM_IO_ERRNO_INVALID_SIZE;
    }

    /* Do not allow normal access use exception API */
    if(ldi->LID != NVRAM_EF_SYS_EXCEPTION_LID_DUMMY &&
        ldi->LID != NVRAM_EF_SYS_STATISTICS_LID)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_ACCESS_DENIED, __LINE__, 0);
        return NVRAM_IO_ERRNO_ACCESS_DENIED;
    }

    /* Global software lock status is locked and this logical data item's attribute is write-protected. */
    // Skip lock check

/******************************************************
 *  Device Broken
 ******************************************************/
    if (nvram_ptr->dev_broken)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_DRV_BROKEN, __LINE__, 0);
        return NVRAM_IO_ERRNO_OK;
    }

/******************************************************
 *  OTP
 ******************************************************/    
#ifdef __NVRAM_OTP__
    //block OTP request
    if (ldi->category & NVRAM_CATEGORY_OTP)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_ACCESS_DENIED, __LINE__, 0);
        return NVRAM_IO_ERRNO_ACCESS_DENIED;
    }
    else
#endif

/******************************************************
 *  Custom Disk
 ******************************************************/
#ifdef __NVRAM_CUSTOM_DISK__
    //block CUSTOM_DISK request
    if (NVRAM_IS_CATEGORY_CUSTOM_DISK(ldi->category))
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_ACCESS_DENIED, __LINE__, 0);
        return NVRAM_IO_ERRNO_ACCESS_DENIED; 
    }
    else
#endif

/******************************************************
 *  FAT
 ******************************************************/
    { //be care about this "{}" it is use for "else" code of different store device
        //status = nvram_write_fs_data_item(ldi, index, data, ldi->size, 0);
        //Read exception file directly
        nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);

        status = nvram_drv_fat_write_exception_item(
                    data,
                    nvramname,
                    index,      // record id
                    ldi->size,  // record size
                    ldi->size);  // buffer size
    }
    
    if(status != NVRAM_DRV_OK)
    {
        status = NVRAM_IO_ERRNO_CHK;
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, status, __LINE__, 0);
    }

#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
    if (status == NVRAM_IO_ERRNO_OK)
    {
        nvram_util_post_reset_gen_default_lid(ldi);
    }
#endif
    return status;
}

#if defined(__MTK_TARGET__) && defined(__NVRAM_WRITE_WITH_FILE_SIZE__)
/*****************************************************************************
 * FUNCTION
 *  nvram_write_fs_data_item_multiple
 * DESCRIPTION
 *  This is nvram_write_data_item_multiple() function of NVRAM module.
 * PARAMETERS
 *  ldi             [?]
 *  index           [IN]
 *  buffer          [?]
 *  buffer_size     [IN]
 *  is_init         [IN]
 * RETURNS
 *  NVRAM_IO_ERRNO_CHK if all copies are failed to write
 *  NVRAM_IO_ERRNO_OK at least one valid copy is written.
 *****************************************************************************/
static nvram_errno_enum nvram_write_fs_data_item_multiple
    (nvram_ltable_entry_struct *ldi, 
    kal_uint16 index, 
    kal_uint16 rec_mount, 
    const kal_uint8 *buffer,
    kal_bool is_init)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_errno_enum status = NVRAM_IO_ERRNO_OK;
    nvram_drv_status_enum drv_status[2] = {NVRAM_DRV_OK, NVRAM_DRV_OK};
    kal_uint32 record_ID;
    NVRAM_FILE_NAME nvramname;
    kal_uint32 file_offset;
    nvram_folder_enum folder_index;
    kal_bool multiple = KAL_FALSE;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (NVRAM_IS_ATTR_MULTIPLE(ldi->attr) || NVRAM_IS_ATTR_BACKUP_FAT(ldi->attr) || NVRAM_IS_CATEGORY_IMPORTANT_L4(ldi->category))
    {
        multiple = KAL_TRUE;
    }

    folder_index = nvram_query_folder_index(ldi->category);

    file_offset = NVRAM_LDI_HEADER_SIZE;
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);

    for (record_ID = 0; record_ID < 2; record_ID++)
    {

    #ifdef __NVRAM_BACKUP_DISK_FAT__
        if (record_ID == 1 && NVRAM_IS_ATTR_BACKUP_FAT(ldi->attr))
        {
            folder_index = NVRAM_NVD_BAK;
        }
    #endif

    #if defined(__MTK_TARGET__) && defined(__NVRAM_IMPORTANT_PARTITIONS__) && defined(__SMART_PHONE_MODEM__)
        if (record_ID == 1)
        {
            folder_index = nvram_query_folder_index_ex(ldi->category, KAL_FALSE);
        }
    #endif
       
        drv_status[record_ID] = nvram_drv_fat_write_multRec(
                            ldi,
                            nvramname,
                            folder_index,
                            file_offset,
                            index,
                            rec_mount,
                            ldi->size,
                            buffer,
                            ldi->attr,
                            is_init);
        nvram_debug_write_dump(ldi, 0x800, index, rec_mount, buffer, ldi->size, drv_status[record_ID]);
        
        /* Try to reset data if it is not a initial case */
        if (drv_status[record_ID] != NVRAM_DRV_OK)
        {
            nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_MULTIPLE, ldi->LID, drv_status, nvram_drv_fat_get_last_err(), __LINE__);
            status = NVRAM_IO_ERRNO_CHK;
        }

        if (!multiple)
        {
            break;
        }        

        nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);

    }

    if (status != NVRAM_IO_ERRNO_OK && multiple == KAL_TRUE) 
    {
        kal_int32 recovery_status;
        if (drv_status[0] != NVRAM_DRV_OK &&  drv_status[1] == NVRAM_DRV_OK)
        {
            recovery_status = nvram_drv_fat_backup(ldi, KAL_FALSE);   /* A <-- B */
        } 
        else if (drv_status[0] == NVRAM_DRV_OK &&  drv_status[1] != NVRAM_DRV_OK) 
        {
            recovery_status = nvram_drv_fat_backup(ldi, KAL_TRUE);   /* A --> B */
        }
        else
        {
            // Both A&B write fail
            recovery_status = drv_status[0];
        }

        if (recovery_status == NVRAM_DRV_OK)
        {
            return NVRAM_IO_ERRNO_OK;
        }
    }

    return status;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  nvram_write_fs_data_item
 * DESCRIPTION
 *  This is nvram_write_data_item_multiple() function of NVRAM module.
 * PARAMETERS
 *  ldi             [?]
 *  index           [IN]
 *  buffer          [?]
 *  buffer_size     [IN]
 *  is_init         [IN]
 * RETURNS
 *  NVRAM_IO_ERRNO_CHK if all copies are failed to write
 *  NVRAM_IO_ERRNO_OK at least one valid copy is written.
 *****************************************************************************/
static nvram_errno_enum nvram_write_fs_data_item
    (nvram_ltable_entry_struct *ldi, kal_uint32 index, kal_uint8 *buffer, kal_uint32 buffer_size, kal_bool is_init)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_errno_enum status = NVRAM_IO_ERRNO_OK;
    nvram_drv_status_enum drv_status[2] = {NVRAM_DRV_OK, NVRAM_DRV_OK};

    kal_uint32 record_ID;
    NVRAM_FILE_NAME nvramname;

    kal_uint32 file_offset;
    nvram_folder_enum folder_index;
    kal_bool multiple = KAL_FALSE;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (NVRAM_IS_ATTR_MULTIPLE(ldi->attr) || NVRAM_IS_ATTR_BACKUP_FAT(ldi->attr) || NVRAM_IS_CATEGORY_IMPORTANT_L4(ldi->category))
    {
        multiple = KAL_TRUE;
    }
    folder_index = nvram_query_folder_index(ldi->category);

    file_offset = NVRAM_LDI_HEADER_SIZE;
    if(NVRAM_IS_ATTR_RAW_DATA(ldi->attr)) {
        file_offset += index;
        index = 1;
    }
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);

#ifdef __NVRAM_PSEUDO_MERGE__
    if (NVRAM_IS_ATTR_PACKAGE(ldi->attr))
    {
        file_offset = (kal_uint32) (ldi->description);
        if (!multiple)
        {
            nvram_make_package_filename(nvramname, 'A');
        }
    }
#endif

    for (record_ID = 0; record_ID < 2; record_ID++)
    {

    #ifdef __NVRAM_BACKUP_DISK_FAT__
        if (record_ID == 1 && NVRAM_IS_ATTR_BACKUP_FAT(ldi->attr))
        {
            folder_index = NVRAM_NVD_BAK;
        }
    #endif

    #if defined(__MTK_TARGET__) && defined(__NVRAM_IMPORTANT_PARTITIONS__) && defined(__CCCIFS_SUPPORT__)
        if (record_ID == 1)
        {
            folder_index = nvram_query_folder_index_ex(ldi->category, KAL_FALSE);
        }
    #endif

        // if LID == SYS_LID, file can be empty & index is the index of record needs to write (amount is 1)
        // if is_init == TRUE, file can be empty & index is the # of record needs to write (index always 1)
        // if is_init == FALSE, file should not be empty & index is the index of record needs to write (amount always 1)

        if(is_init && NVRAM_EF_SYS_LID != ldi->LID)
        {

            drv_status[record_ID] = nvram_drv_fat_write(
                            nvramname,
                            folder_index,
                            file_offset,
                            1,
                            index,
                            buffer_size,
                            buffer,
                            ldi->attr,
                            is_init);

        }
        else
        {
            drv_status[record_ID] = nvram_drv_fat_write(
                            nvramname,
                            folder_index,
                            file_offset,
                            index,
                            1,
                            buffer_size,
                            buffer,
                            ldi->attr,
                            is_init);
        }


        /* Try to reset data if it is not a initial case */
        if (drv_status[record_ID] != NVRAM_DRV_OK)
        {
            nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_MULTIPLE, ldi->LID, drv_status, nvram_drv_fat_get_last_err(), __LINE__);
            status = NVRAM_IO_ERRNO_CHK;
        }

        if (!multiple)
        {
            break;
        }        

        nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);

    }

    if (status != NVRAM_IO_ERRNO_OK && multiple == KAL_TRUE)
    {
        kal_int32 recovery_status = NVRAM_DRV_OK;
        if (drv_status[0] != NVRAM_DRV_OK &&  drv_status[1] == NVRAM_DRV_OK)
        {
            recovery_status = nvram_drv_fat_backup(ldi, KAL_FALSE);   /* A <-- B */
        } 
        else if (drv_status[0] == NVRAM_DRV_OK &&  drv_status[1] != NVRAM_DRV_OK)
        {
            recovery_status = nvram_drv_fat_backup(ldi, KAL_TRUE);   /* A --> B */
        } 
        else
        {
            // Both A&B write fail
            recovery_status = drv_status[0];
        }

        if (recovery_status == NVRAM_DRV_OK) 
        {
            return NVRAM_IO_ERRNO_OK;
        }
    } 
    
    return status;
}

#if defined(__MTK_TARGET__) && defined(__NVRAM_WRITE_WITH_FILE_SIZE__)
/*****************************************************************************
 * FUNCTION
 *  nvram_write_mutilpe_data_item
 * DESCRIPTION
 *  write data with lid size but not a record.Support write 1..amount records
 *  one time if (lid->size+checksum) * amount < MAX_NVRAM_RECORD_SIZE
 * PARAMETERS
 *  ldi         [IN]    the data item to be write
 *  rec_idnex   [IN]    the start record index will be write
 *  rec_amount  [IN]    the amount of the records will be write 
 * RETURNS
 *  void
 *****************************************************************************/
static nvram_errno_enum nvram_write_default_data_item_mutilpe(nvram_ltable_entry_struct *ldi,
                                        kal_uint16 rec_index,
                                        kal_uint16 rec_amount)
{
    
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_errno_enum status = NVRAM_IO_ERRNO_OK;
        
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_START, ldi->LID, rec_index, rec_amount);
    nvram_trace(TRACE_INFO, INFO_NVRAM_DATA_ITEM, ldi->LID, ldi->size);

    /******************************************************
     *  Device Broken
     ******************************************************/
    if (nvram_ptr->dev_broken)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, NVRAM_IO_ERRNO_DRV_BROKEN, __LINE__, ldi->LID);
        return status;
    }

//#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    
    /* prepare data */
    if( ldi->default_value == NVRAM_EF_FF_DEFAULT || 
        ldi->default_value == NVRAM_EF_ZERO_DEFAULT)
    {
        kal_uint8 const *default_value = ldi->default_value;
        status = nvram_write_fs_data_item_multiple(ldi,rec_index,rec_amount,default_value,KAL_TRUE);
    }
    else if(ldi->default_value == NULL)
    {
        kal_uint8 const *default_value = NVRAM_EF_FF_DEFAULT;
        status = nvram_write_fs_data_item_multiple(ldi,rec_index,rec_amount,default_value,KAL_TRUE);
    }
    else
    {
        kal_uint8 *default_value_buffer;
        kal_uint32 i;
        kal_uint8 *default_value_p;
        kal_uint8 *def_buff;

        default_value_buffer = (kal_uint8*) get_ctrl_buffer(ldi->size * rec_amount + NVRAM_BUFFER_TAIL_SIZE);
        kal_mem_cpy((default_value_buffer + (ldi->size * rec_amount)), NVRAM_BUFFER_TAIL_MARK, NVRAM_BUFFER_TAIL_SIZE);
            
        if((ldi->category & NVRAM_CATEGORY_FUNC_DEFAULT) && (ldi->attr & NVRAM_ATTR_MULTI_DEFAULT))
        {
            nvram_get_lid_default_value_to_write(ldi, 0, default_value_buffer, (ldi->size * rec_amount));
        }
        else
        {
            def_buff = (kal_uint8*) get_ctrl_buffer(ldi->size + NVRAM_BUFFER_TAIL_SIZE);
            kal_mem_cpy((def_buff + ldi->size), NVRAM_BUFFER_TAIL_MARK, NVRAM_BUFFER_TAIL_SIZE);
            for (i = 0; i < rec_amount; i++)
            {
                default_value_p = (kal_uint8*) nvram_get_lid_default_value_to_write(ldi, i, NULL, 0);        
                if (default_value_p == NULL)
                {
                    nvram_get_lid_default_value_to_write(ldi, i, def_buff, ldi->size);
                    default_value_p = def_buff;
                }           
                kal_mem_cpy(default_value_buffer + i*(ldi->size), default_value_p, ldi->size);
                default_value_p = NULL;
            }

            if(kal_mem_cmp((def_buff + ldi->size), NVRAM_BUFFER_TAIL_MARK, NVRAM_BUFFER_TAIL_SIZE) != 0)
            {
                // Return default value is out of buffer. 
                nvram_trace(TRACE_FUNC, FUNC_NVRAM_RESET_DATA_ITEMS, ldi->LID, (ldi->size * rec_amount), __LINE__, KAL_TRUE);
                NVRAM_EXT_ASSERT(KAL_FALSE, (ldi->size * ldi->total_records), NVRAM_LOC_SPACE_NOT_ENOUGH, ldi->LID);                  
            }           
            free_ctrl_buffer(def_buff);     
        }

        if(kal_mem_cmp((default_value_buffer + (ldi->size * rec_amount)), NVRAM_BUFFER_TAIL_MARK, NVRAM_BUFFER_TAIL_SIZE) != 0)
        {
            // Return default value is out of buffer. 
            nvram_trace(TRACE_FUNC, FUNC_NVRAM_RESET_DATA_ITEMS, ldi->LID, (ldi->size * rec_amount), __LINE__, KAL_TRUE);
            NVRAM_EXT_ASSERT(KAL_FALSE, (ldi->size * ldi->total_records), NVRAM_LOC_SPACE_NOT_ENOUGH_1, ldi->LID);                  
        }
        
        status = nvram_write_fs_data_item_multiple(ldi,rec_index,rec_amount,default_value_buffer,KAL_TRUE);
        free_ctrl_buffer(default_value_buffer);
    }
    
    if (status != NVRAM_IO_ERRNO_OK)
    {
        /* IMEI and SML */  
        if ((NVRAM_IS_CATEGORY_IMPORTANT(ldi->category)
    #ifdef __SMART_PHONE_MODEM__
        #if defined(__MTK_TARGET__) && defined(__NVRAM_IMPORTANT_PARTITIONS__)
                || NVRAM_IS_CATEGORY_IMPORTANT_L4(ldi->category))
        #else
            )
        #endif
    #else
            )
    #endif  
            )
        {
            kal_prompt_trace(MOD_NVRAM, "NVRAM ASSERT ERROR NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL:%d\n\r", DISPLAY_ERROR(status));
            kal_prompt_trace(MOD_NVRAM, "LID:%d, total_records:%d, record_size:%d\n\r", ldi->LID, ldi->total_records, ldi->size);
            kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
            kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
            NVRAM_EXT_ASSERT (KAL_FALSE, DISPLAY_ERROR(status),NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL_1 , ldi->LID);
            return status;
        }

        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, status, __LINE__, KAL_TRUE);
    }

    if (status != NVRAM_IO_ERRNO_OK)
    {
        nvram_trace(TRACE_FUNC, IO_WRITE_DATA_ITEM_RESULT, ldi->LID, status, __LINE__, KAL_TRUE);
        kal_prompt_trace(MOD_NVRAM, "NVRAM ASSERT ERROR NVRAM_LOC_WRITE_AND_RESET_FAIL:%d\n\r", DISPLAY_ERROR(status));
        kal_prompt_trace(MOD_NVRAM, "LID:%d, total_records:%d, record_size:%d\n\r", ldi->LID, ldi->total_records, ldi->size);
        kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
        kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
        NVRAM_EXT_ASSERT(KAL_FALSE, DISPLAY_ERROR(status), NVRAM_LOC_WRITE_AND_RESET_FAIL_1, ldi->LID);
    }

    return status;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  nvram_reset_one_data_item
 * DESCRIPTION
 *  Reset only one data item
 * PARAMETERS
 *  ldi         [IN]    the data item to reset
 *  buffer      [IN]    buffer which has enough space
 *  buffer_size [IN]    the max buffer size
 * RETURNS
 *  void
 *****************************************************************************/
static nvram_errno_enum nvram_reset_one_data_item(nvram_ltable_entry_struct *ldi,
                                        kal_uint16 rec_index,
                                        kal_uint16 rec_amount)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8 *default_value;
    kal_uint32 i , start, end;
    kal_uint8 *default_value_buffer;
    kal_uint32 working_buffer_size = 0;
    nvram_errno_enum result = NVRAM_IO_ERRNO_OK;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (rec_index < 1 ||
        rec_index > ldi->total_records ||
        rec_amount < 1 ||
        rec_amount > ldi->total_records - rec_index + 1)
    {
        /* arguments invalid */
        start = 1;
        end = ldi->total_records;
    }
    else
    {
        start = rec_index,
        end = rec_index + rec_amount - 1;
    }

#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
    if (start == 1 && end == ldi->total_records)
    {
        nvram_util_mark_file_uncreated(ldi);
    }
    if (!nvram_util_always_gen_default(ldi))
    {
        if (start == 1 && end == ldi->total_records)
        {
            nvram_debug_write_dump(ldi, 0x700, rec_index, rec_amount, NULL, ldi->size, NVRAM_IO_ERRNO_CHK);
            return NVRAM_IO_ERRNO_OK;
        }
    } 
    else 
    {
        /* reset always gen default LID for the first time */
        nvram_util_pre_reset_gen_default_lid(ldi);
    }
    
#endif

    // LID total size can not over MAX_NVRAM_RECORD_SIZE
    if((ldi->default_value != NVRAM_EF_ZERO_DEFAULT) && 
        ((ldi->size * ldi->total_records + NVRAM_BUFFER_TAIL_SIZE) > MAX_NVRAM_RECORD_SIZE) )
    {
        nvram_trace(TRACE_FUNC, FUNC_NVRAM_RESET_DATA_ITEMS, ldi->LID, (ldi->size * ldi->total_records), __LINE__, KAL_TRUE);
        NVRAM_EXT_ASSERT(KAL_FALSE, (ldi->size * ldi->total_records), NVRAM_LOC_GET_DEFAULT_WITH_WRONG_PARAM_2, ldi->LID);      
    }

#if defined(__MTK_TARGET__) && defined(__NVRAM_WRITE_WITH_FILE_SIZE__)
    do
    {   
        if (KAL_FALSE == bResetNvramData 
            || KAL_FALSE == kal_query_systemInit()   //initiation
            || (ldi->size + NVRAM_CHKSUM_SIZE) > MAX_NVRAM_RECORD_SIZE   //large record
            || ldi->LID == NVRAM_EF_SYS_LID
        #ifdef __NVRAM_OTP__        
            || NVRAM_IS_CATEGORY_OTP(ldi->category)
        #endif
        #ifdef __NVRAM_CUSTOM_DISK__
            || NVRAM_IS_CATEGORY_CUSTOM_DISK(ldi->category)
        #endif      
        #ifdef __NVRAM_PSEUDO_MERGE__
            || NVRAM_IS_ATTR_PACKAGE(ldi->attr)
        #endif
        #ifdef __NVRAM_CRYPT_TEST__
            || ldi->LID == NVRAM_EF_NVRAM_MSP_TEST_LID
        #endif
            )
        {           
            break;
        }
            
        // only support reset 1..total_records
        if (start == 1 && end == ldi->total_records)
        {
            kal_uint32 remainLen = 0;
            default_value = NULL;
            default_value_buffer = NULL;
        
            #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
            if (ldi->attr & NVRAM_ATTR_MSP)
            {
                /* 4 byte alignment */
                remainLen = NVRAM_MSP_ALIGNMENT_REMAINDER(ldi->size + NVRAM_CHKSUM_SIZE);
            }
            #endif
            
            working_buffer_size = (ldi->size + NVRAM_CHKSUM_SIZE + remainLen) * ldi->total_records;
                        
            if (working_buffer_size <= MAX_NVRAM_RECORD_SIZE)
            {
                result = nvram_write_default_data_item_mutilpe(ldi,1,ldi->total_records);                
#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
                if (nvram_util_always_gen_default(ldi)) {
                    nvram_util_post_reset_gen_default_lid(ldi);
                }
#endif
                return result;
            }           
        }
        break;
        
    }while(0);
#endif

    //default_value_buffer = (kal_uint8*) get_ctrl_buffer(MAX_NVRAM_RECORD_SIZE);
    working_buffer_size = ldi->size * rec_amount;
    if ((start == 1) && (end == ldi->total_records))
    {
        working_buffer_size = ldi->size * ldi->total_records;
    }

    if (working_buffer_size > MAX_NVRAM_RECORD_SIZE)
    {
        working_buffer_size = MAX_NVRAM_RECORD_SIZE;
    }
  
    default_value_buffer = (kal_uint8*) get_ctrl_buffer(working_buffer_size);
    nvram_debug_write_dump(ldi, 0x701, rec_index, rec_amount, NULL, ldi->size, NVRAM_IO_ERRNO_CHK);
  
    for (i = start; i <= end; i++)
    {
        /* when ldi size too big, we cannot operator it on buffer,
           use original default value pointer directly */

        default_value = (kal_uint8*) nvram_get_default_value_to_write(ldi, i, NULL, 0);

        /* the default_value is not assigned in table , ex: L1 LID */
        if (default_value == NULL)
        {
            if((i == 1 && end == ldi->total_records) && (NVRAM_EF_SYS_LID != ldi->LID))
            {
                nvram_get_default_value_to_write(ldi, i, default_value_buffer, working_buffer_size);
            }
            else
            {
                nvram_memset(default_value_buffer, (kal_uint8) NVRAM_EF_ZERO_DEFAULT_VALUE, working_buffer_size);
                nvram_get_default_value_to_write(ldi, i, default_value_buffer, ldi->size);
            }
            
            default_value = default_value_buffer;
        }

        /* initial case, we reset it directly to enhance performance*/
        if (start == 1 && end == ldi->total_records)
        {
            if(NVRAM_EF_SYS_LID == ldi->LID)
            {
                result = nvram_write_data_item(ldi, i, default_value, KAL_TRUE);
                if (result != NVRAM_IO_ERRNO_OK)
                {
                    break;
                }                
            }
            else
            {
                result = nvram_write_data_item(ldi, ldi->total_records, default_value, KAL_TRUE);
                break;
            }
        }
        else
        {
            result = nvram_write_data_item(ldi, i, default_value, KAL_FALSE);

            if (result != NVRAM_IO_ERRNO_OK)
            {
                break;
            }
        }
    }

    free_ctrl_buffer(default_value_buffer);
#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
    if (nvram_util_always_gen_default(ldi)) {
        nvram_util_post_reset_gen_default_lid(ldi);
    }
#endif

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_reset_one_data_item
 * DESCRIPTION
 *  Reset only one data item
 * PARAMETERS
 *  ldi         [IN]    the data item to reset
 *  buffer      [IN]    buffer which has enough space
 *  buffer_size [IN]    the max buffer size
 * RETURNS
 *  void
 *****************************************************************************/
static nvram_errno_enum nvram_reset_category(nvram_category_enum included, nvram_category_enum excluded)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_ltable_entry_struct *ldi = &logical_data_item_table[0];
    nvram_errno_enum result = NVRAM_IO_ERRNO_OK;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    do
    {
        if (ldi->category & excluded)
        {
            continue;
        }

        /*
         *  special handle for reset all
         */
        if (included == NVRAM_CATEGORY_ALL)
        {
        #ifdef __NVRAM_BACKUP_DISK__
            /* recover the data from backup partition */
            if (NVRAM_IS_ATTR_BACKUP_FAT(ldi->attr) || NVRAM_IS_ATTR_BACKUP_RAW(ldi->attr))
            {
                if (nvram_recover_image_by_lid(ldi) == NVRAM_ERRNO_SUCCESS)
                {
                    continue;
                }
            }
        #endif
        #ifdef __NVRAM_CUSTOM_DISK__
            if (NVRAM_IS_CATEGORY_CUSTOM_DISK(ldi->category))
            {
                if (nvram_read_custom_disk(ldi, 1, ldi->total_records, NULL, 0) == NVRAM_IO_ERRNO_OK)
                {
                    /* do not reset the data in custom disk */
                    continue;
                }
            }
        #endif
        }

        if (included == NVRAM_CATEGORY_ALL || ldi->category & included)
        {
            result = nvram_reset_one_data_item(ldi, 1, ldi->total_records);
        }

        if (result != NVRAM_IO_ERRNO_OK)
        {
            break;
        }
    }while(nvram_util_next_data_item(&ldi));

    return result;

}

/*****************************************************************************
 * FUNCTION
 *  nvram_reset_one_data_item
 * DESCRIPTION
 *  Reset only one data item
 * PARAMETERS
 *  ldi         [IN]    the data item to reset
 *  buffer      [IN]    buffer which has enough space
 *  buffer_size [IN]    the max buffer size
 * RETURNS
 *  void
 *****************************************************************************/
#ifdef __NVRAM_PSEUDO_MERGE__ 
static nvram_errno_enum nvram_reset_attr(nvram_attr_enum included, nvram_attr_enum excluded)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_ltable_entry_struct *ldi = &logical_data_item_table[0];
    nvram_errno_enum result = NVRAM_IO_ERRNO_OK;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    do
    {

        if (ldi->attr & excluded)
        {
            continue;
        }

        if (included == NVRAM_ATTR_ALL || ldi->attr & included)
        {
            result = nvram_reset_one_data_item(ldi, 1, ldi->total_records);
        }

        if (result != NVRAM_IO_ERRNO_OK)
        {
            break;
        }
    }while(nvram_util_next_data_item(&ldi));

    return result;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  nvram_reset_data_items
 * DESCRIPTION
 *  This is nvram_reset_data_item() function of NVRAM module.
 *
 *  When invoking nvram_write_data_item(), `is_init' flag is ALWAYS TRUE;
 *  such that for each data item to be written:
 *
 *  1. Driver Layer could delete records of the data item, if it
 *  already exists.
 *  (In current flash driver, namely fd, this function is fd_rcd_delete())
 *
 *  2. Then Driver Layer write default value to each record of the data item.
 *  (In current flash driver, namely fd, this function is fd_rcd_initialize())
 *
 *  This function may be invoked due to incompatible version.
 *  For data items located in the `reset_category',
 *  they may be (1) newly added, (2)newly removed, or (3)just default value modified.
 *  Consider invoking nvram_write_data_item() with `is_init' flag set to true for
 *  each case:
 *  (1) Newly added:
 *  Invoke fd_rcd_delete() to delete records of the data item is no effect.
 *  fd_rcd_initialize() will allocate spaces for that data item.
 *
 *  (2) Newly deleted:
 *  This results in a effect of "shift" due to some data item LID's are deleted.
 *  It should be ok since fd_rcd_delete()/fd_rcd_initialize() will be called
 *  for each valid LID. Of course, some out-of-dated LID's are possibly
 *  left and occupies FLASH space.
 *
 *  (3) Default value modified:
 *  This is ok.
 * PARAMETERS
 *  reset_category      [IN]        Coubld be NVRAM_RESET_ALL NVRAM_RESET_SYSTEM NVRAM_RESET_USER
 *  ldi                 [?]
 * RETURNS
 *
 *****************************************************************************/
kal_bool nvram_reset_data_items(
            nvram_reset_category_enum reset_category,
            nvram_app_id_enum   app_id,
            nvram_ltable_entry_struct *ldi,
            kal_uint16 rec_index,
            kal_uint16 rec_amount)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_bool status = KAL_TRUE;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (ldi)
    {
        nvram_trace(TRACE_FUNC, FUNC_NVRAM_RESET_DATA_ITEMS, reset_category, nvram_ptr->state, app_id, ldi->LID, rec_index);
    }
    else
    {
        nvram_trace(TRACE_FUNC, FUNC_NVRAM_RESET_DATA_ITEMS, reset_category, nvram_ptr->state, app_id, 0, rec_index);
    }

    /* Since reset is highest priority, the software lock must be unlocked temporarily. */
    nvram_ptr->lock = KAL_FALSE;

    /* Since entire logical data item is to be reset, nvram_write_data_item() is invoked. */
    switch (reset_category)
    {
        case NVRAM_RESET_CERTAIN:
        {
            #ifdef __NVRAM_OTP__
                if(ldi && (ldi->category & NVRAM_CATEGORY_OTP))
                {
                    /*
                     * if from nvram init, return true.
                     */
                    if (nvram_ptr->state != NVRAM_STATE_READY)
                    {
                        return KAL_TRUE;
                    }
                    else
                    {
                        return KAL_FALSE;
                    }
                }
            #endif /* __NVRAM_OTP__ */

                nvram_reset_one_data_item(ldi, rec_index, rec_amount);
            break;
        }

        case NVRAM_RESET_ALL:
        {
            {

            #ifdef __NVRAM_PSEUDO_MERGE__
                nvram_calculate_write_data_offset(NULL, KAL_TRUE);
            #endif

                if (nvram_ptr->sw_status & NVRAM_SW_EMPTY_FAT)
                {
                    nvram_reset_category(NVRAM_CATEGORY_ALL, 0);
                }
                else
                {
                #if defined(__CCCIFS_SUPPORT__)
                    nvram_reset_category(NVRAM_CATEGORY_ALL, NVRAM_CATEGORY_IMPORTANT | NVRAM_CATEGORY_CALIBRAT 
                                        | NVRAM_CATEGORY_IMPORTANT_L4 | NVRAM_CATEGORY_IMPORTANT_L1);
                #else
                    nvram_reset_category(NVRAM_CATEGORY_ALL, NVRAM_CATEGORY_IMPORTANT);
                #endif
                }
            }

            nvram_factory_rmdir_user(NVRAM_RESET_ALL);

            break;
        }
    #ifdef __NVRAM_PSEUDO_MERGE__
        case NVRAM_RESET_PACKAGE:
        {
            /* write information of package LID into info_file */
            nvram_calculate_write_data_offset(NULL, KAL_TRUE);
            nvram_reset_attr(NVRAM_ATTR_PACKAGE, 0);
            break;
        }
    #endif /* __NVRAM_PSEUDO_MERGE__ */
        case NVRAM_RESET_FACTORY:
        {
            if (nvram_ptr->state != NVRAM_STATE_READY)/* init stage */
            {
                //nvram_reset_attr(NVRAM_ATTR_FACTORY_RESET, 0);
                nvram_reset_category(NVRAM_CATEGORY_ALL, NVRAM_CATEGORY_IMPORTANT_L4 | NVRAM_CATEGORY_IMPORTANT_L1);
                
                //nvram_factory_restore_mmi_cache(NVRAM_RESET_FACTORY, app_id);
                nvram_factory_restore_sys_cache(NVRAM_RESET_FACTORY, app_id);
                nvram_factory_rmdir_user(NVRAM_RESET_FACTORY);
                nvram_set_restore_factory_flag(NVRAM_RESTORE_FALSE);
            }
            else
            {
                nvram_set_restore_factory_flag(NVRAM_RESTORE_TRUE);
            }
            break;
        }
        case NVRAM_RESET_BRANCH:
        {
            nvram_reset_category(NVRAM_CATEGORY_ALL, NVRAM_CATEGORY_IMPORTANT | NVRAM_CATEGORY_CALIBRAT 
                                | NVRAM_CATEGORY_IMPORTANT_L4 | NVRAM_CATEGORY_IMPORTANT_L1);
            nvram_factory_rmdir_user(NVRAM_RESET_BRANCH);
            break;
        }
    #ifdef __NVRAM_SUPPORT_CUSTPACK__
        case NVRAM_RESET_CUSTPACK:
        {
            nvram_reset_category(NVRAM_CATEGORY_CUSTPACK, 0);

            nvram_util_get_data_item(&ldi, NVRAM_EF_CUSTPACK_VERNO_LID);
            nvram_reset_one_data_item(ldi, 1, ldi->total_records);

            break;
        }
    #endif
       
        default:
        {
            ASSERT(KAL_FALSE);
            status = KAL_FALSE;
        }
    }

    /* Restore lock state */
    nvram_ptr->lock = nvram_ptr->saved_lock;

    return status;
}   /* end of nvram_reset_data_item */


/*****************************************************************************
 * FUNCTION
 *  nvram_factory_restore_sys_cache
 * DESCRIPTION
 *  Reset system cache
 * PARAMETERS
 *  void
 * RETURNS
 *  Success or not
 *****************************************************************************/
static kal_bool nvram_factory_restore_sys_cache(nvram_reset_category_enum category, nvram_app_id_enum app_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint32 record_idx;
    nvram_ltable_entry_struct *ldi;
    kal_uint8 *buffer;
    kal_uint8 *tmp_buffer;
    nvram_drv_status_enum status;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_CACHE_OCTET_LID);
    buffer = (kal_uint8*)get_ctrl_buffer(ldi->total_records * ldi->size);

    if (NVRAM_IO_ERRNO_OK == (status = nvram_read_data_item(ldi, 1, ldi->total_records, buffer, ldi->total_records * ldi->size)))
    {
//        nvram_restore_system_cache(category, app_id, buffer);
        nvram_restore_system_cache(category, 0, buffer);

        for (record_idx = 1; record_idx < ldi->total_records; record_idx++)
        {
            tmp_buffer = buffer + ldi->size * (record_idx - 1);
            nvram_write_data_item(ldi, (kal_uint16)record_idx, tmp_buffer, KAL_FALSE);
        }

    }
    else
    {
        NVRAM_EXT_ASSERT(KAL_FALSE, DISPLAY_ERROR(status), NVRAM_LOC_READ_SYS_CACHE_FAIL, status);
    }

    free_ctrl_buffer(buffer);

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_factory_rmdir_user
 * DESCRIPTION
 *  Remove customizable folder list
 * PARAMETERS
 *  void
 * RETURNS
 *  Success or not
 *****************************************************************************/
static kal_bool nvram_factory_rmdir_user(nvram_reset_category_enum category)
{

#ifdef __MMI_FMI__

    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_int32 dir_idx;
    nvram_clean_folder_enum clean_folder_category;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (category)
    {
        case NVRAM_RESET_ALL:
            clean_folder_category = NVRAM_CLEAN_FOLDER_ALL;
            break;
        case NVRAM_RESET_BRANCH:
            clean_folder_category = NVRAM_CLEAN_FOLDER_BRANCH;
            break;
        case NVRAM_RESET_FACTORY:
            clean_folder_category = NVRAM_CLEAN_FOLDER_FACTORY;
            break;
        default:
            clean_folder_category = NVRAM_CLEAN_FOLDER_NONE;
        break;
    }

    if (clean_folder_category != NVRAM_CLEAN_FOLDER_NONE)
    {
        for (dir_idx = nvram_custom_max_clean_folder_size() - 1; dir_idx >= 0 ; dir_idx--)
        {
            if ((clean_folder_category & nvram_clean_folder_list[dir_idx].category) &&
                nvram_clean_folder_list[dir_idx].folder_path != NULL)
            {
                FS_XDelete(nvram_clean_folder_list[dir_idx].folder_path, (FS_FILE_TYPE | FS_RECURSIVE_TYPE), NULL, 0);
            }
        }
    }
#endif /* __MMI_FMI__ */
    return KAL_TRUE;
}


#if (defined(__CCCIFS_SUPPORT__) && defined(__MTK_TARGET__)) || defined(__NVRAM_BIN_REGION_SIMULATION__)
/*****************************************************************************
 * FUNCTION
 *  nvram_recover_data_item
 * DESCRIPTION
 *  Data item auto-receovery for smart phone
 * PARAMETERS
 *  ldi             [?]
  * RETURNS
 *  kal_int32   error code from AP FS
 *****************************************************************************/
kal_int32 nvram_recover_data_item(nvram_ltable_entry_struct *ldi)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                                                  */
    /*----------------------------------------------------------------*/
    kal_int32 drv_status[2] = {0, 0};
    NVRAM_FILE_NAME nvramname;
    nvram_folder_enum folder_index;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                                                        */
    /*----------------------------------------------------------------*/
    folder_index = nvram_query_folder_index(ldi->category);
    
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    drv_status[0] = nvram_drv_fat_auto_recover(nvramname, folder_index);

    nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_MULTIPLE, ldi->LID, drv_status[0], nvram_drv_fat_get_last_err(), __LINE__);

    if (NVRAM_IS_ATTR_MULTIPLE(ldi->attr))
    {
        nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);
        drv_status[1] = nvram_drv_fat_auto_recover(nvramname, folder_index);
        nvram_trace(TRACE_FUNC, IO_READ_DATA_ITEM_MULTIPLE, ldi->LID, drv_status[1], nvram_drv_fat_get_last_err(), __LINE__);
    }
    
    if ((drv_status[0] != 0) || (drv_status[1] != 0))
    {
        kal_prompt_trace(MOD_NVRAM, "NVRAM ASSERT ERROR NVRAM_LOC_BIN_REGION_RESTORE_FAIL:%d\n\r", drv_status[0]?drv_status[0]:drv_status[1]);
        kal_prompt_trace(MOD_NVRAM, "LID:%d, total_records:%d, record_size:%d\n\r", ldi->LID, ldi->total_records, ldi->size);
        kal_prompt_trace(MOD_NVRAM, "category:%x, attr:%x\n\r", ldi->category, ldi->attr);
        kal_prompt_trace(MOD_NVRAM, "fileprefix:%s, fileverno:%s\n\r", ldi->fileprefix, ldi->fileverno);
        if(NVRAM_IS_ATTR_FAULT_ASSERT(ldi->attr) && (nvram_ptr->state == NVRAM_STATE_READY)) {
            NVRAM_EXT_ASSERT(KAL_FALSE, drv_status[0]?drv_status[0]:drv_status[1], NVRAM_LOC_BIN_REGION_RESTORE_FAIL, ldi->LID);
        } else {
            return NVRAM_IO_ERRNO_CHK;
        }
    }

  #if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
    nvram_util_post_reset_gen_default_lid(ldi);
  #endif
  
    return NVRAM_IO_ERRNO_OK;
}

#endif

