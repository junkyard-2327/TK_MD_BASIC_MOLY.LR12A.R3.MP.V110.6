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
 * nvram_main.c
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
/*
 * Include
 */
#include <string.h>
#include "nvram_msgid.h"

#include "kal_general_types.h"
#include "kal_internal_api.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_trace.h"

#include "syscomp_config.h"
#include "task_config.h"
#include "sysconf_statistics.h"     /* stack_statistics_struct */
#include "custom_em.h"
/* Factory mode, should not send ADC calibration data to BMT  */
#ifdef __MULTI_BOOT__
#include "multiboot_config.h"
#include "intrCtrl.h"               /* INT_BootMode */
#endif /* __MULTI_BOOT__ */

#ifdef __CCCIFS_SUPPORT__
#include "ccci.h"
#endif

#if defined(__MTK_TARGET__)
#include "SST_secure.h"
#endif

#include "fs_type.h"                /* FS_HANDLE */
#include "fs_func.h"                /* FS_Delete */
#include "fs_errcode.h"             /* FS_NO_ERROR */
#include "ex_item.h"                /* EX_LOG_T */

#include "nvram_main.h"
#include "nvram_interface.h"

#include "nvram_msg_handler.h"

#include "tst_msgid.h"
#include "sbp_public_utility.h"
#if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
#include "dcl_gpt.h"
#endif

/*******************************************************
 *  External Function
 *******************************************************/
extern void MMISWChangeWarning(
                kal_uint8 type,
                kal_uint32 space,
                kal_uint8 const *codeversion,
                kal_uint8 const *diskversion);

extern void MMICheckDiskDisplay(void);


extern void *kal_tmp_mem_alloc(kal_uint32 size);
extern void kal_tmp_mem_free(void *mem_ptr);
extern kal_char *release_verno(void);
extern kal_char *release_branch(void);
extern kal_char *release_flavor(void);
extern kal_char *build_date_time(void);
extern kal_bool nvram_custom_lock_status(void);
extern void custom_nvram_config(void);
extern void custom_default_mode_config(void);
extern kal_int32 nvram_recover_data_item(nvram_ltable_entry_struct *ldi);

#ifdef __NVRAM_DEBUG_READ_DUMP__
extern void nvram_debug_log_dump(kal_bool valid, kal_char *log_str, kal_uint32 p1, kal_uint32 p2, kal_uint32 p3, kal_uint8 *buffer, kal_uint32 buffer_size);
#else
#define nvram_debug_log_dump(...)
#endif

extern nvram_ef_sbp_modem_config_struct sbp_config; 
extern nvram_ef_sbp_modem_data_config_struct sbp_data_config; 
#if defined (__NVRAM_UT_TEST__)
extern kal_uint32 nvram_boot_trace;
extern kal_uint8 is_clean_boot_test;
#endif

#if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
extern const checksum_reset_struct lid_structure_chksum[];
extern const checksum_reset_struct lid_default_value_chksum[];
#endif

extern kal_bool nvram_sml_ota_converter(kal_uint8 *old_value_buffer, nvram_lid_ota_check_info *previous_ota_info, kal_uint8 *new_value_buffer, nvram_lid_ota_check_info *current_ota_info);

/*******************************************************
 * Define
 *******************************************************/
#define OVERHEAD_CLUSTER        5           /* extra space in bytes needed for conflict resolution. ex, report files */
#define DISPLAY_WARNING_TIME    1000        /* 1000 ticks = 4.6 sec */
#define MAX_CHANGE_ARRAY_SIZE   (nvram_ptr->ltable.total_LID + 1)

#define NVRAM_SET_OTA_MARKED(LID) \
    nvram_util_take_mutex(g_nvram_impt_mutex); \
    nvram_util_lid_bimtap_set(LIDCheckedArray, LID); \
    nvram_util_give_mutex(g_nvram_impt_mutex)

#define NVRAM_CHK_OTA_MARKED(LID) nvram_util_lid_bitmap_check(LIDCheckedArray, LID)

#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
#define NVRAM_SET_CREATEED_FILE_INFO(LID) \
    nvram_util_take_mutex(nvram_bitmap_mutex); \
    nvram_util_lid_bimtap_set(nvram_bitmap_ptr, LID); \
    nvram_util_give_mutex(nvram_bitmap_mutex)
    
#define NVRAM_CHK_CREATEED_FILE_INFO(LID) nvram_util_lid_bitmap_check(nvram_bitmap_ptr, LID)
#else
#define NVRAM_SET_CREATEED_FILE_INFO(LID)
#define NVRAM_CHK_CREATEED_FILE_INFO(LID) KAL_FALSE
#endif

#define CALIBRATE_FILE_MAX_CNT (1000)
#define IMEI_FILE_MAX_CNT (64)
#define FILE_LIST_ITEM_LENGTH (9)
/*******************************************************
 *  Typedef
 *******************************************************/
typedef struct
{
    kal_bool checked;
    WCHAR diskfile[NVRAM_FILE_LEN + 1];
} diskTableEntry;

/*******************************************************
 *  Global Variable
 *******************************************************/
kal_mutexid g_nvram_impt_mutex = NULL;
kal_mutexid g_nvram_fs_mutex = NULL;
kal_mutexid g_nvram_trace_mutex = NULL; //this mutex is used to record nvram last read/write 10 times information
                                        //nvram external API may called by many users, so need this mutex
kal_uint32 g_nvram_task_idx = 0xFFFFFFFF; 
ilm_struct *g_ilm_ptr = NULL;
nvram_access_trace_information nvram_access_trace;
#if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
DCL_HANDLE nvram_gpt_handle;
#endif

#ifdef __NVRAM_WRITE_WITH_FILE_SIZE__
kal_bool bResetNvramData = KAL_FALSE;
#endif

nvram_context_type nvram_context;
nvram_context_type *nvram_ptr = &nvram_context;


/*******************************************************
 *  Local Function
 *******************************************************/

static kal_bool nvram_init_all_ldi(nvram_reset_category_enum reset_category);
static kal_bool nvram_supplementary_check(void);

/*******************************************************
 *  Local Variable
 *******************************************************/
static kal_uint32 BytesPerCluster;  /* will be set to exact value in nvram_get_disk_file_info */
static kal_uint32 *nvram_init_tmp_pool;
//static diskTableEntry *DiskTable;
static kal_uint16 files_in_folder[NVRAM_FOLDER_TOTAL];
static kal_uint32 diskSize_of_folder[NVRAM_FOLDER_TOTAL];

static nvram_lid_enum *LIDResetArray = NULL;        /* [count, lid1, lid2,..] ex. [3, 12, 29] */
static nvram_lid_enum LIDResetCnt = 0;
static kal_uint32 LIDResetMax = 0;

static kal_uint8 *LIDCheckedArray = NULL;
#ifdef __NVRAM_CHECK_FILE_AND_RECOVER__
kal_uint8 *CALI_FileListBuf = NULL;
kal_uint8 *IMEI_FileListBuf = NULL;
kal_bool is_nvram_in_ota_flow = KAL_FALSE;
kal_bool is_nvram_first_restore = KAL_TRUE;
kal_bool Cali_filelist_found = KAL_FALSE;
kal_bool Imei_filelist_found = KAL_FALSE;
#endif

/*****************************************************************************
 * FUNCTION
 *  nvram_create
 * DESCRIPTION
 *  NVRAM task create function
 * PARAMETERS
 *  handle      [IN]
 * RETURNS
 *  success or fail
 *****************************************************************************/
kal_bool nvram_create(comptask_handler_struct **handle)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    static const comptask_handler_struct nvram_handler_info =
    {
        nvram_task_main,    /* task entry function */
        nvram_init,         /* task initialization function */
        nvram_reset        /* task reset handler */
    };

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    *handle = (comptask_handler_struct*) & nvram_handler_info;
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_task_main
 * DESCRIPTION
 *  NVRAM task
 * PARAMETERS
 *  task_entry_ptr      [?]
 * RETURNS
 *  void
 *****************************************************************************/

#ifndef __MTK_TARGET__
  #ifdef _MSC_VER
    nvram_read_callback_struct __pragma(data_seg("_nvram_callback_tbl_begin")) _nvram_callback_tbl_begin_p = {0};
    
    #pragma comment(linker, "/MERGE:_nvram_callback_tbl_content=_nvram_callback_tbl_begin")
    
    nvram_read_callback_struct __pragma(data_seg("_nvram_callback_tbl_end")) _nvram_callback_tbl_end_p = {0};
    
    #pragma comment(linker, "/MERGE:_nvram_callback_tbl_end=_nvram_callback_tbl_begin")
  #else
    // section merge is moved to linker script for other compilers
    __attribute__ ((section("_nvram_callback_tbl_begin"))) nvram_read_callback_struct _nvram_callback_tbl_begin_p = {0};
    __attribute__ ((section("_nvram_callback_tbl_end"))) nvram_read_callback_struct _nvram_callback_tbl_end_p = {0};
  #endif
#endif

void nvram_task_main(task_entry_struct *task_entry_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    ilm_struct current_ilm;
    kal_int32  cb_idx;
    nvram_read_callback_struct *cb_first_entry;
    
#ifdef __MTK_TARGET__
    extern kal_uint32 _nvram_callback_tbl$$Base, _nvram_callback_tbl$$Length;
    cb_idx = (kal_uint32)&_nvram_callback_tbl$$Length/sizeof(nvram_read_callback_struct);
    cb_first_entry = (nvram_read_callback_struct *)&_nvram_callback_tbl$$Base;


#else

    cb_idx = (kal_uint32)(&_nvram_callback_tbl_end_p - &_nvram_callback_tbl_begin_p);
    cb_first_entry = (nvram_read_callback_struct *)&_nvram_callback_tbl_begin_p;

#endif

#if defined(__NVRAM_INIT_LID_BUFFER__)
    NVRAM_INIT_TIME_UT_STAMP(7);
    nvram_init_lid_buffer_writeback();
    NVRAM_INIT_TIME_UT_STAMP(8);
#endif
    // Write result to NVRAM_SYS_NVRAM_INIT_TIME_UT
    NVRAM_INIT_TIME_UT_SAVE();  
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    while (1)
    {
        kal_int32 i = 0;
        /* nvram special service */
        for (;i < cb_idx; i++)
        {
            nvram_read_callback_struct *entry = (nvram_read_callback_struct *)(cb_first_entry + i);
            if (!entry->processed)
            {
                kal_bool result = KAL_TRUE;
                if (entry->callback)
                {
                    result = entry->callback(entry->user_data);
                    entry->processed = KAL_TRUE;
                }

                if (result && entry->module != MOD_NIL && NVRAM_IS_LID_VALID(entry->file_id))
                {
                    {
                        nvram_ltable_entry_struct *ldi;
                        peer_buff_struct *peer_buf_ptr;
                        kal_uint8 *pdu_ptr;
                        kal_uint16 pdu_length;
                        nvram_read_req_struct *local_data;
                        nvram_util_get_data_item(&ldi, entry->file_id);
                    
                        local_data = (nvram_read_req_struct*) construct_local_para(sizeof(nvram_read_req_struct), TD_CTRL);
                    
                        local_data->access_id = 0;
                        local_data->file_idx = entry->file_id;
                        local_data->para = 1;
                    
                        pdu_length = ldi->size;
                        peer_buf_ptr = construct_peer_buff(pdu_length, 0, 0, TD_CTRL);
                    
                        pdu_ptr = get_peer_buff_pdu(peer_buf_ptr, &pdu_length);
                    
                        nvram_read_confirm(
                            entry->module,
                            nvram_read_data_item(ldi, 1, 1, pdu_ptr, pdu_length),  /* multi-rec read support */
                            local_data,
                            ldi->size,
                            peer_buf_ptr);
                    
                        free_local_para((local_para_struct*) local_data);
                    }
                    
                    entry->processed = KAL_TRUE;
                }
                
            }
        }
        
        msg_receive_extq(&current_ilm);
        kal_set_active_module_id(current_ilm.dest_mod_id);

        nvram_main(&current_ilm);

        destroy_ilm(&current_ilm);
    }
}


/*****************************************************************************
 * FUNCTION
 *  nvram_main
 * DESCRIPTION
 *  This is main() function of NVRAM module.
 * PARAMETERS
 *  ilm_ptr     [IN]        The primitives
 * RETURNS
 *  void
 *****************************************************************************/
void nvram_main(ilm_struct *ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    EXT_ASSERT(ilm_ptr != NULL,(kal_uint32)ilm_ptr, NVRAM_LOC_ILM_PTR_IS_NULL_1, 0);

    if (ilm_ptr != NULL)
    {
        if ((ilm_ptr->msg_id >= MSG_ID_NVRAM_CODE_BEGIN) && (ilm_ptr->msg_id <= MSG_ID_NVRAM_CODE_END))
        {
            g_ilm_ptr = ilm_ptr;
            g_nvram_task_idx = kal_get_current_task_index();
            if (ilm_ptr->msg_id == MSG_ID_NVRAM_STARTUP_REQ)
            {
                nvram_startup_handler(ilm_ptr);
            }
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_RESET_REQ)
            {
                nvram_reset_handler(ilm_ptr);
            }
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_READ_REQ)
            {
                nvram_read_handler(ilm_ptr);
            }
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_READ_DEFAULT_REQ)
            {
                nvram_read_default_handler(ilm_ptr);
            }
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_WRITE_REQ)
            {
                nvram_write_handler(ilm_ptr);
            }
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_WRITE_IMEI_REQ)
            {
                nvram_write_imei_handler(ilm_ptr);
            }
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_SET_LOCK_REQ)
            {
                nvram_set_lock_handler(ilm_ptr);
            }
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_CALLBACK_REQ)
            {
                /*when user call nvram_register_read_req() will send this message to NVRAM
                  this is used to wakeup NVRAM task if NVRAM task is waiting for extq msg*/
                return; 
            }
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_SUSPEND_REQ)
            {
                nvram_suspend_handler(ilm_ptr);
            }
        #ifdef __NVRAM_BACKUP_DISK_RAW__
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_CREATE_IMAGE_REQ)
            {
                nvram_create_image_handler(ilm_ptr);
            }
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_RECOVER_IMAGE_REQ)
            {
                nvram_recover_image_handler(ilm_ptr);
            }
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_VERIFY_IMAGE_REQ)
            {
                nvram_verify_image_handler(ilm_ptr);
            }
        #endif /* __SYSDRV_BACKUP_DISK_RAW__ */
        #ifdef __NVRAM_SECURE_DATA_STORAGE__
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_SDS_REQ)
            {
                nvram_sds_handler(ilm_ptr);
            }
        #endif
        #if defined(__CCCIFS_SUPPORT__) && defined(__MODEM_CARD__)  // Hosted Dongle Data Card
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_BIN_REGION_REQ)
            {
                nvram_ap_bin_region_handler(ilm_ptr);
            }
        #endif
        #if defined(__NVRAM_MONITOR_ENABLED__)
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_REG_NOTIFY_REQ)
            {
                nvram_mon_reg_handler(ilm_ptr);
            }
            else if (ilm_ptr->msg_id == MSG_ID_NVRAM_DEREG_NOTIFY_REQ)
            {
                nvram_mon_dereg_handler(ilm_ptr);
            }
        #endif
        }
    #ifdef TST_HANDLER
        else
        {
            /* not nvram defined message */
            if (ilm_ptr->msg_id == MSG_ID_TST_INJECT_STRING)
            {
                nvram_tst_handler(ilm_ptr);
            }
        }
    #endif /* TST_HANDLER */

    }
}   /* end of module main function */

/*****************************************************************************
 * FUNCTION
 *  nvram_report_reset_data_item
 * DESCRIPTION
 *
 * PARAMETERS
 *  LID     [IN]
 * RETURNS
 *  void
 *****************************************************************************/
static void nvram_report_reset_data_item(nvram_lid_enum LID)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    LIDResetCnt++;
    EXT_ASSERT(LIDResetCnt < LIDResetMax,(kal_uint32)LIDResetCnt, NVRAM_LOC_INVALID_INDEX_2, LIDResetMax);

    LIDResetArray[0] = LIDResetCnt;   /* Count */
    LIDResetArray[LIDResetCnt] = LID;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_create_report_file
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *
 *****************************************************************************/
static kal_bool nvram_create_report_file()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    FS_HANDLE handle;
#if !defined(__CCCIFS_SUPPORT__)    
    kal_uint32 filelen = (1 + LIDResetCnt) * sizeof(nvram_lid_enum);
    kal_uint32 written;
#endif

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#if !defined(__CCCIFS_SUPPORT__)	
    kal_wsprintf(filename, "%s", NVRAM_SWCHANGE_REPORT_FILE);
    FS_Delete(filename);

    handle = FS_Open(filename, FS_CREATE_ALWAYS | FS_READ_WRITE);
    if (handle > FS_NO_ERROR)
    {
        if (FS_Write(handle, LIDResetArray, filelen, &written) != FS_NO_ERROR)
        {
            FS_Close(handle);
            return KAL_FALSE;
        }
    }
    else
    {
        return KAL_FALSE;
    }

    FS_Close(handle);
#endif

    kal_wsprintf(filename, "%s", NVRAM_SWCHANGE_REPORT_FILE_TXT);
    FS_Delete(filename);

    handle = FS_Open(filename, FS_CREATE_ALWAYS | FS_READ_WRITE);
    if (handle > FS_NO_ERROR)
    {
#if 1
        // Write previous version and current version into SWCHANGE.TXT
        // Version string saved in coded_verion len is 18 bytes
        kal_char buf[128] = {0};     
        kal_uint32 len = 0;

        len = kal_snprintf(buf, 128, "OTA from %s to %s(%s), ", nvram_ptr->old_coded_version, nvram_ptr->coded_version, nvram_ptr->build_time);
        FS_Write(handle, buf, len, &len);
        len = kal_snprintf(buf, 64, "%s(%s)\n", release_branch(), release_flavor());
        FS_Write(handle, buf, len, &len);
#else
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
#endif
    }
    else
    {
        return KAL_FALSE;
    }

    FS_Close(handle);

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_swchange_warning
 * DESCRIPTION
 *  To warn the user there is no enough space to perform software change.
 * PARAMETERS
 *  SpaceNedded     [IN]
 *  diskversion     [IN]
 * RETURNS
 *  void
 *****************************************************************************/
#if 0
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
#if (!defined(__L1_STANDALONE__) && !defined(EMPTY_MMI)) && !defined(EXTERNAL_MMI)
/* under construction !*/
#endif
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
#endif

/*****************************************************************************
 * FUNCTION
 *  nvram_get_disk_file_info
 * DESCRIPTION
 *  To get infomation of NVRAM FS usage.
 * PARAMETERS
 *  diskfilesize        [OUT]       Total existence file size
 *  freespace           [OUT]       Free space of FS (in byte)
 *  overhead            [OUT]       Overhead space (in byte)
 * RETURNS
 *  Success or Fail
 *****************************************************************************/
kal_bool nvram_get_disk_file_info(kal_uint32 *diskfilesize, kal_uint32 *freespace, kal_uint32 *overhead)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    WCHAR DriveName[8];
    FS_DiskInfo DI;
    kal_uint32 loop_idx;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_wsprintf(DriveName, "%s\0", "Z:\\");
    if (FS_GetDiskInfo((const WCHAR*)DriveName, &DI, FS_DI_BASIC_INFO | FS_DI_FREE_SPACE) < FS_NO_ERROR)
    {
        return KAL_FALSE;
    }

    /* Set BytesPerCluster to the accurate value */
    BytesPerCluster = DI.BytesPerSector * DI.SectorsPerCluster;

    *freespace = BytesPerCluster * DI.FreeClusters;

    for (*diskfilesize = 0, loop_idx = NVRAM_FOLDER_TOTAL; loop_idx > NVRAM_FOLDER_BEGIN; loop_idx--)
    {
        *diskfilesize += diskSize_of_folder[loop_idx - 1];
    }

    *overhead = BytesPerCluster * OVERHEAD_CLUSTER;

    return KAL_TRUE;
}

#ifdef __NVRAM_DISK_SIZE_CHECK__
/*****************************************************************************
 * FUNCTION
 *  nvram_get_code_file_size
 * DESCRIPTION
 *  To get infomation of NVRAM RO usage.
 * PARAMETERS
 *  CodeFileSizeTotal       [OUT]       Total RO size
 * RETURNS
 *  void
 *****************************************************************************/
void nvram_get_code_file_size(kal_uint32 *CodeFileSizeTotal)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_ltable_entry_struct *ldi = &logical_data_item_table[0];
    kal_uint32 onefilesize;
#ifdef __NVRAM_PSEUDO_MERGE__
    kal_uint32 package_size = 0;
    kal_uint32 infolid_size = sizeof(head_info_struct);
#endif

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    *CodeFileSizeTotal = 2 * BytesPerCluster * (1 + (NVRAM_EF_SYS_SIZE - 1) / BytesPerCluster);

    do
    {

        /* each record followed by a 2-byte checksum */
        onefilesize = (ldi->size + NVRAM_CHKSUM_SIZE) * ldi->total_records;

    #ifdef __NVRAM_PSEUDO_MERGE__
        if (NVRAM_IS_ATTR_PACKAGE(ldi->attr))
        {
            package_size += onefilesize;
            infolid_size += sizeof(LID_info_struct);
        }
        else
    #endif
        if (NVRAM_IS_CATEGORY_OTP(ldi->category))
        {
            continue;
        }
        else if (NVRAM_IS_ATTR_MULTIPLE(ldi->attr))
        {
            *CodeFileSizeTotal += 2 * BytesPerCluster * (1 + (onefilesize - 1) / BytesPerCluster);
        }
        else
        {
            *CodeFileSizeTotal += BytesPerCluster * (1 + (onefilesize - 1) / BytesPerCluster);
        }
    }while(nvram_util_next_data_item(&ldi));

#ifdef __NVRAM_PSEUDO_MERGE__
    if (package_size)
    {
        *CodeFileSizeTotal += BytesPerCluster * (1 + (package_size - 1) / BytesPerCluster);
        *CodeFileSizeTotal += BytesPerCluster * (1 + (infolid_size - 1) / BytesPerCluster);
    }
#endif
}


/*****************************************************************************
 * FUNCTION
 *  nvram_conflict_resolve_prelim
 * DESCRIPTION
 *  To calc the disk size that software upgrade needs.
 * PARAMETERS
 *  sysrecord       [IN]        Sysrecord
 * RETURNS
 *  Success or Fail
 *****************************************************************************/
static kal_bool nvram_conflict_resolve_prelim(kal_uint8 *sysrecord)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint32 diskfilesize, codefilesize, freespace, overhead;
    kal_int32 spaceDelta;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (!nvram_get_disk_file_info(&diskfilesize, &freespace, &overhead))
    {
        return KAL_FALSE;
    }

    nvram_get_code_file_size(&codefilesize);

    spaceDelta = codefilesize + overhead - diskfilesize;

    if ((spaceDelta > 0) && (spaceDelta > (kal_int32)freespace))
    {
        NVRAM_EXT_ASSERT(KAL_FALSE, 0, NVRAM_LOC_SPACE_NOT_ENOUGH_2, spaceDelta - freespace);
    }

    return KAL_TRUE;
}
#endif /* __NVRAM_DISK_SIZE_CHECK__ */

/*****************************************************************************
 * FUNCTION
 *  nvram_destruct_certain_disk_table
 * DESCRIPTION
 *  Free memory pool
 * PARAMETERS
 *  ret     [IN]
 * RETURNS
 *
 *****************************************************************************/
static kal_bool nvram_destruct_disk_table(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (nvram_init_tmp_pool)
    {
        //kal_tmp_mem_free(nvram_init_tmp_pool);
        //nvram_init_tmp_pool = NULL;
        free_ctrl_buffer_set_null(nvram_init_tmp_pool);
        #ifdef __NVRAM_CHECK_FILE_AND_RECOVER__
        free_ctrl_buffer_set_null(CALI_FileListBuf);
        free_ctrl_buffer_set_null(IMEI_FileListBuf);
        #endif
    }

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_malloc_disk_table
 * DESCRIPTION
 *  Malloc and construct disk table
 * PARAMETERS
 *  void
 * RETURNS
 *  Success or Fail
 *****************************************************************************/
static kal_bool nvram_malloc_disk_table(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint32 folder_idx;
    kal_uint32 size;

#ifdef NVRAM_DISK_SIZE_CHECK
    kal_uint16 total_file = 0;
    kal_wchar namepattern[32];
    kal_wchar nvramname[NVRAM_FILE_LEN + 1];
    FS_DOSDirEntry fileinfo;
    FS_HANDLE handle;
#endif

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    /* Step 1: Use FS_FindFist to parse the nvram folder to get the file number and file size */

    for (folder_idx = NVRAM_FOLDER_BEGIN; folder_idx < NVRAM_FOLDER_TOTAL; folder_idx++)
    {
        files_in_folder[folder_idx] = 0;
        diskSize_of_folder[folder_idx] = 0;

        //skip scan OTA backup folder
        if((nvram_folder_enum)folder_idx == NVRAM_NVD_BACKUP) {
            continue;
        }

#ifdef __NVRAM_DISK_SIZE_CHECK__
        nvram_query_file_name((nvram_folder_enum)folder_idx, "*", namepattern);

        /*
         * 1: Collect disk file count
         * 2: Compute allocate DiskTable
         */
        handle = FS_FindFirst(namepattern, 0, FS_ATTR_DIR, &fileinfo, nvramname, sizeof(nvramname));
        if (handle > 0)
        {
            do
            {
                files_in_folder[folder_idx]++;
                diskSize_of_folder[folder_idx] += BytesPerCluster * (1 + (fileinfo.FileSize - 1) / BytesPerCluster);
            }
            while (FS_FindNext(handle, &fileinfo, nvramname, sizeof(nvramname)) == FS_NO_ERROR);

            FS_FindClose(handle);
        }
        else
        {
            files_in_folder[folder_idx] = 0;
        }

        total_file += files_in_folder[folder_idx];
#endif
    }

    /* Step 2: allocate enough memory */
    /* Should revise this place some day. NVRAM should not use kal_tmp_mem_alloc
       And there is a hidden limitation of kal_tmp_mem_alloc.
       kal_tmp_mem_free must be used in pair with kal_tmp_mem_alloc without
       kal_tmp_mem_alloc/kal_sys_mem_alloc in between.
       Therefore, We need to invoke FS_GetDiskInfo in nvram_init one time to avoid this prolem.
       FS_GetDiskInfo -> RTFSYSALLocMutex() -> kal_create_sem -> kal_sys_mem_alloc */

    //nvram_init_tmp_pool = (kal_uint32 *)kal_tmp_mem_alloc(sizeof(kal_uint32) * MAX_CHANGE_ARRAY_SIZE * 2 +
    //                                                       (kal_uint32)(total_file * sizeof(diskTableEntry)));

    LIDResetMax = MAX_CHANGE_ARRAY_SIZE;
    //nvram_init_tmp_pool = (kal_uint32 *)kal_tmp_mem_alloc((sizeof(nvram_lid_enum) * LIDResetMax) + nvram_ota_buffer_size());
    size = ((sizeof(nvram_lid_enum) * LIDResetMax) + nvram_ota_buffer_size());
    nvram_init_tmp_pool = (kal_uint32 *)get_ctrl_buffer(size);
    kal_mem_set(nvram_init_tmp_pool, 0, size);

    LIDResetArray = (nvram_lid_enum *)nvram_init_tmp_pool;
    LIDCheckedArray = ((kal_uint8*)LIDResetArray + (sizeof(nvram_lid_enum) * LIDResetMax));
    #ifdef __NVRAM_CHECK_FILE_AND_RECOVER__
    CALI_FileListBuf = (kal_uint8 *)get_ctrl_buffer(CALIBRATE_FILE_MAX_CNT*FILE_LIST_ITEM_LENGTH);
    kal_mem_set(CALI_FileListBuf, 0, CALIBRATE_FILE_MAX_CNT*FILE_LIST_ITEM_LENGTH);
    
    IMEI_FileListBuf = (kal_uint8 *)get_ctrl_buffer(IMEI_FILE_MAX_CNT*FILE_LIST_ITEM_LENGTH);
    kal_mem_set(IMEI_FileListBuf, 0, IMEI_FILE_MAX_CNT*FILE_LIST_ITEM_LENGTH);
    #endif
    LIDResetArray[0] = 0;  /* Count */
    LIDResetCnt = 0;

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_filelost_precheck
 * DESCRIPTION
 *  check if assert when found the NVRAM_EF_SML_LID/NVRAM_EF_SIM_LOCK_LID lost
 * PARAMETERS
 *  LIDtoCheck      [IN]        Should be the assign record to check
 *  default_value   [IN]           
 * RETURNS
 *  void
 *****************************************************************************/
#ifdef __SMART_PHONE_MODEM__ 
static kal_bool nvram_filelost_precheck(nvram_lid_enum LIDtoCheck,kal_uint8 *default_item_value)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_ltable_entry_struct *ldi;
    kal_bool result = KAL_FALSE;
    
    kal_uint16 rec_id = 1;//NVRAM_EF_SYS_LID
    kal_uint8 *buffer;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    switch(LIDtoCheck)
    {
        case NVRAM_EF_SYS_LID:
            nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_LID);
            rec_id = 1;
            break;
        case NVRAM_EF_BRANCH_VERNO_LID:
            nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_LID);
            rec_id = 2;
            break;
        case NVRAM_EF_FLAVOR_VERNO_LID:
            nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_LID);
            rec_id = 3;
            break;
        case NVRAM_EF_BUILD_TIME_LID:
            nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_LID);
            rec_id = 4;
            break;
        default:
            nvram_util_get_data_item(&ldi, LIDtoCheck);
            break;
    }
    buffer = (kal_uint8*) get_ctrl_buffer(ldi->size);
    kal_mem_set(buffer, 0, ldi->size);
    if(nvram_read_data_item(ldi, rec_id, 1, buffer, ldi->size) == NVRAM_IO_ERRNO_OK)
    {
        if(NULL != strstr((const char *)buffer,(const char *)default_item_value))
        {
            result = KAL_FALSE;
        }
        else
        {
            result = KAL_TRUE;
        }
    }
    else
    {
        result = KAL_FALSE;
    }
    free_ctrl_buffer(buffer);
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_update_L4_info
 * DESCRIPTION
 *  For lid in group L4, pack lid info transfer SMU to check need special handle in OTA stage or not  
 * PARAMETERS
 *  ldi: lid entry struct
 *  pre_ota_header: record pre lid info, read from file
 * RETURNS
 *  KAL_TRUE: SMU implement OTA data, convert and store data in new_value_buffer, NVRAM get data from new_value_buffer and write into NVRAM file 
 *  KAL_FALSE: LID follow NVRAM OTA flow
 *****************************************************************************/
static kal_bool nvram_update_L4_info(nvram_ltable_entry_struct *ldi,nvram_ldi_ota_header *pre_ota_header, kal_char* pre_verno)
{
    kal_uint8 *old_value_buffer = NULL;
    kal_uint8 *new_value_buffer = NULL;
    kal_uint32 old_value_buffer_size = 0;
    kal_uint32 new_value_buffer_size = 0;
    kal_uint32 new_record_size = ldi->size; //backup the record size
    kal_uint32 new_total_records = ldi->total_records; //backup the LID total_records
    kal_uint32 new_ldi_attr = ldi->attr ; //backup the LID attribute
    kal_uint32 new_ldi_category = ldi->category; //backup the LID category
    kal_char new_fileverno[FILE_VERNO_LEN + 1];	//backup the LID verno
    nvram_errno_enum status;
    kal_uint8 *data = NULL;
    kal_uint32 i = 0;
	kal_bool result = KAL_FALSE;
	nvram_lid_ota_check_info previous_ota_info;
	nvram_lid_ota_check_info current_ota_info;

    //Alloc the memory to save the old SML data
    old_value_buffer_size  = pre_ota_header->total_records * pre_ota_header->record_size;
    old_value_buffer = (kal_uint8 *)get_ctrl_buffer(old_value_buffer_size);
	if(old_value_buffer == NULL)
    {
        NVRAM_EXT_ASSERT(KAL_FALSE,(kal_uint32)old_value_buffer,NVRAM_LOC_BUFFER_PTR_IS_NULL_8,old_value_buffer_size);
    } 
    kal_mem_set(old_value_buffer,0, old_value_buffer_size);
    
    //Alloc the memory to save the new SML data
    new_value_buffer_size  = ldi->total_records *new_record_size;
    new_value_buffer = (kal_uint8 *)get_ctrl_buffer(new_value_buffer_size); 
    if(new_value_buffer == NULL)
    {
        free_ctrl_buffer_set_null(old_value_buffer);
        NVRAM_EXT_ASSERT(KAL_FALSE,(kal_uint32)new_value_buffer,NVRAM_LOC_BUFFER_PTR_IS_NULL_9,new_value_buffer_size);
    }
    kal_mem_set(new_value_buffer,0, new_value_buffer_size);
	// backup the LID verno
    strncpy(new_fileverno, ldi->fileverno, FILE_VERNO_LEN);
    //Update the old record size to LID table
    ldi->size = pre_ota_header->record_size;
    //Update the old LID attribute to LID table
    ldi->attr = pre_ota_header->ldi_attr;
	ldi->total_records = pre_ota_header->total_records;
	ldi->category = pre_ota_header->ldi_category;
	strncpy(ldi->fileverno, pre_verno, FILE_VERNO_LEN);
	
    //Read the old SML data from the storage
    nvram_debug_log_dump(0, "OTA STAGE:nvram_update_L4_info()read lid-> [lid, attr, category]", (kal_uint32)ldi->LID, ldi->attr, ldi->category, NULL, 0);
    status = nvram_read_data_item(ldi,1,ldi->total_records , old_value_buffer,  old_value_buffer_size);
	nvram_debug_log_dump(0, "OTA STAGE:nvram_update_L4_info()read lid ->[enum, result]", (kal_uint32)ldi->LID, (kal_uint32)status, 0, NULL, 0);
	nvram_debug_log_dump(0, "OTA STAGE:nvram_update_L4_info()pre lid verno ->[pre_verno]", 0, 0, 0, pre_verno, FILE_VERNO_LEN+1);
	nvram_debug_log_dump(0, "OTA STAGE:nvram_update_L4_info()new lid verno->[new_verno]", 0, 0, 0, new_fileverno, FILE_VERNO_LEN+1);
	if(status != NVRAM_IO_ERRNO_OK)
    {
        free_ctrl_buffer_set_null(old_value_buffer);
        free_ctrl_buffer_set_null(new_value_buffer);
        NVRAM_EXT_ASSERT(KAL_FALSE,ldi->LID,NVRAM_LOC_READ_IMPORTANT_DATA_FAIL_2,0);
    }
	
    kal_mem_set(&previous_ota_info, 0, sizeof(previous_ota_info));
	kal_mem_set(&current_ota_info, 0, sizeof(current_ota_info));
	previous_ota_info.LID = ldi->LID;
	previous_ota_info.total_records = pre_ota_header->total_records;
	previous_ota_info.record_size = pre_ota_header->record_size;
	previous_ota_info.ldi_attr = pre_ota_header->ldi_attr;
	previous_ota_info.ldi_category = pre_ota_header->ldi_category;
	strncpy(previous_ota_info.fileprefix, ldi->fileprefix, FILE_PREFIX_LEN);
	strncpy(previous_ota_info.fileverno, pre_verno, FILE_VERNO_LEN);

	current_ota_info.LID = ldi->LID;
	current_ota_info.total_records = new_total_records;
	current_ota_info.record_size = new_record_size;
	current_ota_info.ldi_attr = new_ldi_attr;
	current_ota_info.ldi_category = new_ldi_category;
	strncpy(current_ota_info.fileprefix, ldi->fileprefix, FILE_PREFIX_LEN);
	strncpy(current_ota_info.fileverno, new_fileverno, FILE_VERNO_LEN);
	
	//convert the old data to new data
        /*
        parameter description:
         - kal_uint8 *old_value_buffer: the source point of data buffer
         - nvram_lid_ota_check_info *previous_ota_info: the lid info stored in flash before OTA
         - kal_uint8 *new_value_buffer: destination point of data buffer
         - nvram_lid_ota_check_info *current_ota_info: the lid info existed in MD image which will be upgrade via OTA
        */
	result = nvram_sml_ota_converter(old_value_buffer,&previous_ota_info, new_value_buffer, &current_ota_info); 
	nvram_debug_log_dump(0, "OTA STAGE:nvram_update_L4_info()end->[lid enum, result]", (kal_uint32)ldi->LID, (kal_uint32)result, 0, NULL, 0);
	//free the non-used buffer to avoid alloc new buffer fail
	free_ctrl_buffer_set_null(old_value_buffer);
	
	if(result != KAL_FALSE)
    {
        // result != KAL_FALSE, reset LID and write new value into file
	    nvram_util_mark_file_uncreated(ldi);
		//Recover the record size and attribute
	    ldi->size = new_record_size;
	    ldi->attr = new_ldi_attr;
		ldi->total_records = new_total_records;
		ldi->category = new_ldi_category;
		strncpy(ldi->fileverno, new_fileverno, FILE_VERNO_LEN);

	    //Reset SML LID
	    if (!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
	    {
	        free_ctrl_buffer_set_null(new_value_buffer);
	        NVRAM_EXT_ASSERT(KAL_FALSE,ldi->LID,NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL_3,0);
	    }
		nvram_debug_log_dump(0, "OTA STAGE:nvram_update_L4_info()write lid into file->[LID, size, total_records]", (kal_uint32)ldi->LID, ldi->size, (kal_uint32)ldi->total_records, NULL, 0);
	    //Update the New data to storage
	    for(i = 1; i <= ldi->total_records; i++)
	    {
	        data = new_value_buffer + (i-1)*ldi->size;
	         //write one record data per time
	        status = nvram_write_data_item(ldi, i, data, KAL_FALSE);
	        if(status != NVRAM_IO_ERRNO_OK)
	        {
	            free_ctrl_buffer_set_null(new_value_buffer);
	            NVRAM_EXT_ASSERT(KAL_FALSE,ldi->LID,NVRAM_LOC_WRITE_IMPORTANT_DATA_FAIL_4,0);
	        }
	    }
	}
	else
	{
		//Recover the record size and attribute
	    ldi->size = new_record_size;
	    ldi->attr = new_ldi_attr;
		ldi->total_records = new_total_records;
		ldi->category = new_ldi_category;
		strncpy(ldi->fileverno, new_fileverno, FILE_VERNO_LEN);
	}

    free_ctrl_buffer_set_null(new_value_buffer);
    
    return result;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  nvram_file_lost_judgement
 * DESCRIPTION
 *  deal with nvram file lost condition
 * PARAMETERS
 *  LID     [IN]
 * RETURNS
 *  void
 *****************************************************************************/
static kal_bool nvram_file_lost_judgement(nvram_ltable_entry_struct *ldi, kal_bool trigger_assert)
{
    #ifdef __SMART_PHONE_MODEM__
    kal_char default_brach_verno[] = "LR12A.R1.MP";
    switch(ldi->LID) {
        case NVRAM_EF_SML_LID:
        case NVRAM_EF_SIM_LOCK_LID:
        #ifdef __SUBSIDY_LOCK__
        case NVRAM_EF_SUBSIDY_LOCK_LID:
        #endif
            /* Do not allow file lost */
            if(trigger_assert && nvram_filelost_precheck(NVRAM_EF_BRANCH_VERNO_LID,(kal_uint8*)default_brach_verno)) {
                NVRAM_EXT_ASSERT(KAL_FALSE, ldi->LID, NVRAM_LOC_READ_IMPORTANT_DATA_FAIL_1, -9); //FS_FILE_NOT_FOUND
            }
            return KAL_TRUE;
        default:
            break;
    };
    #endif
    return KAL_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_construct_certain_disk_table
 * DESCRIPTION
 *  Construct the files in certain folder to disk table
 * PARAMETERS
 *  folder_idx
 * RETURNS
 *  Success or Fail
 *****************************************************************************/
static kal_bool nvram_construct_certain_disk_table(nvram_folder_enum folder_idx, kal_uint8 *rst_record_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    FS_HANDLE handle;
    FS_DOSDirEntry fileinfo;
    WCHAR namepattern[NVRAM_MAX_PATH_LEN];
    WCHAR filename[NVRAM_FILE_LEN + 1];
    char cfilename[NVRAM_FILE_LEN + 1];
    nvram_ldi_header nv_header;
    nvram_ltable_entry_struct *ldi = NULL;
    kal_bool hdr_ret = KAL_TRUE;
    #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
    chksum_rst_rec_struct *rst_rec_ptr = (chksum_rst_rec_struct *)rst_record_ptr;
    kal_int32 chksum_index;
    const char invalid_chksum[16] = {0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0};
    #endif
        
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_mem_set(&nv_header, 0x0, sizeof(nv_header));
    nvram_query_file_name(folder_idx, "*", namepattern);

    handle = FS_FindFirst(namepattern, 0, FS_ATTR_DIR, &fileinfo, filename, sizeof(filename));
    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_construct_certain_disk_table() -> FS_FindFirst", (kal_uint32)folder_idx, (kal_uint32)handle, 0, NULL, 0);
    if (handle > 0)
    {
        do
        {
            // Get file header
            nvram_query_file_name(folder_idx, "", namepattern);
            kal_wstrcat(namepattern, filename);
            hdr_ret = nvram_read_data_header(namepattern, LDI_HEADER_ALL_SECTION, (void*)&nv_header, NVRAM_LDI_HEADER_SIZE);
            if(!hdr_ret) {
                /* check important LID file lost */
                kal_dchar2char(filename, cfilename);
                if(nvram_util_get_data_item_by_fileprefix(&ldi, cfilename)){
                    nvram_file_lost_judgement(ldi, KAL_TRUE);
                }
                //read header fail, skip OTA this file
                nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_construct_certain_disk_table() -> nvram_read_data_header fail", (kal_uint32)hdr_ret, 0, 0, (kal_uint8*)namepattern, (NVRAM_MAX_PATH_LEN * 2));
                continue;
            }

            // check in ltable
            kal_dchar2char(filename, cfilename);
            if(!nvram_util_get_data_item_by_fileprefix(&ldi, cfilename)) {
                if(NVRAM_IS_ATTR_RESERVE_BACKWARD(nv_header.nv_ota_header.ldi_attr)) {
                    hdr_ret = nvram_ota_backup_file(namepattern, &(nv_header.nv_ota_header));
                    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_construct_certain_disk_table() -> backup file", (kal_uint32)hdr_ret, 0, 0, (kal_uint8*)namepattern, (NVRAM_MAX_PATH_LEN * 2));
                }
                FS_Delete(namepattern);
                nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_construct_certain_disk_table() -> file not in ltable -> delete", 0, 0, 0, (kal_uint8*)namepattern, (NVRAM_MAX_PATH_LEN * 2));
                continue;
            }
			
			//for R1->R2 OTA Group L4  LID change
			kal_dchar2char(&filename[NVRAM_FILE_LEN - FILE_VERNO_LEN], cfilename);
            #if defined(__CCCIFS_SUPPORT__)
			if((nv_header.nv_ota_header.LID >= NVRAM_EF_L4_START) && (nv_header.nv_ota_header.LID < NVRAM_EF_L4_LAST_LID))
			{
				// hdr_ret == KAL_TRUE(L4 has handled lid, nvram no need handle) else follow nvram ota flow
				hdr_ret = nvram_update_L4_info(ldi,&(nv_header.nv_ota_header), cfilename);
                if(hdr_ret == KAL_TRUE)
                {
                	nvram_debug_log_dump(0, "OTA STAGE: SMU UPDATE LID NVRAM NOT HANDLE-> [enum]", (kal_uint32)ldi->LID, 0, 0, NULL, 0);
                	NVRAM_SET_CREATEED_FILE_INFO(ldi->LID); //mark file exist
                	NVRAM_SET_OTA_MARKED(ldi->LID); //mark resolved, bypass 2nd scan
                	continue;
                }
                
			}
			#endif

            // check file verno
            // check file category
            if(strcmp(ldi->fileverno, cfilename) ||
                (ldi->category != nv_header.nv_ota_header.ldi_category) ) 
            {
                if(NVRAM_IS_ATTR_RESERVE_BACKWARD(nv_header.nv_ota_header.ldi_attr)) {
                    hdr_ret = nvram_ota_backup_file(namepattern, &(nv_header.nv_ota_header));
                    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_construct_certain_disk_table() -> backup file", (kal_uint32)hdr_ret, 0, 0, (kal_uint8*)namepattern, (NVRAM_MAX_PATH_LEN * 2));
                }
                FS_Delete(namepattern);
                #ifdef __NVRAM_DEBUG_READ_DUMP__
                if(strcmp(ldi->fileverno, cfilename)) {
                    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_construct_certain_disk_table() -> file verno/category mismatch -> VERNO:", *(kal_uint32*)ldi->fileverno, *(kal_uint32*)cfilename, 0, NULL, 0);
                }
                if(ldi->category != nv_header.nv_ota_header.ldi_category) {
                    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_construct_certain_disk_table() -> file verno/category mismatch -> Category:", (kal_uint32)ldi->category, (kal_uint32)ota_hdr.ldi_category, 0, (kal_uint8*)&ota_hdr, NVRAM_LDI_OTA_HEADER_SIZE);
                }
                nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_construct_certain_disk_table() -> file verno/category mismatch -> delete", 0, 0, 0, (kal_uint8*)namepattern, (NVRAM_MAX_PATH_LEN * 2));
                #endif
                continue;
            }

            // check NVRAM_ATTR_OTA_RESET
            if(NVRAM_IS_ATTR_OTA_RESET(ldi->attr)) {
                nvram_report_reset_data_item(ldi->LID);
                NVRAM_SET_OTA_MARKED(ldi->LID); //mark resolved, bypass 2nd scan
                NVRAM_SET_CREATEED_FILE_INFO(ldi->LID); //mark file exist
                nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_construct_certain_disk_table() -> mark OTA_RESET", (kal_uint32)ldi->attr, 0, 0, (kal_uint8*)namepattern, (NVRAM_MAX_PATH_LEN * 2));
                continue;
            }
            
            // check record & size
            if((nv_header.nv_ota_header.record_size != ldi->size) || (nv_header.nv_ota_header.total_records!= ldi->total_records)) {
                //Calibration data and Important data sensitive to size change
                NVRAM_EXT_ASSERT(!NVRAM_IS_CATEGORY_CALIBRAT(ldi->category), ldi->LID, NVRAM_LOC_CALIBRATION_SIZE_CHANGE, (nv_header.nv_ota_header.record_size * nv_header.nv_ota_header.total_records));
                NVRAM_EXT_ASSERT(!NVRAM_IS_CATEGORY_IMPORTANT(ldi->category), ldi->LID, NVRAM_LOC_IMPORTANT_SIZE_CHANGE, (nv_header.nv_ota_header.record_size * nv_header.nv_ota_header.total_records));
                #if defined(__CCCIFS_SUPPORT__)
                NVRAM_EXT_ASSERT(!NVRAM_IS_CATEGORY_IMPORTANT_L4(ldi->category), ldi->LID, NVRAM_LOC_INVALID_LID_SIZE_4, (nv_header.nv_ota_header.record_size * nv_header.nv_ota_header.total_records));
                #endif
                //Try to backup and restore LID
                if(NVRAM_IS_ATTR_RESERVE_BACKWARD(nv_header.nv_ota_header.ldi_attr)) {
                    hdr_ret = nvram_ota_backup_file(namepattern, &(nv_header.nv_ota_header));
                    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_construct_certain_disk_table() -> Size changed -> Backup", (kal_uint32)ldi->attr, (kal_uint32)hdr_ret, 0, (kal_uint8*)namepattern, (NVRAM_MAX_PATH_LEN * 2));
                    if(!nvram_ota_restore_file(ldi)) {
                        //bypass size change when OTA
                        //nvram_report_reset_data_item(ldi->LID);
                        nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_construct_certain_disk_table() -> Size changed -> Restore fail", (kal_uint32)ldi->attr, (kal_uint32)ldi->LID, 0, (kal_uint8*)namepattern, (NVRAM_MAX_PATH_LEN * 2));
                    }
                    else {
                        //file restore success
                        NVRAM_SET_CREATEED_FILE_INFO(ldi->LID); //mark file exist
                        NVRAM_SET_OTA_MARKED(ldi->LID); //mark resolved, bypass 2nd scan
                        nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_construct_certain_disk_table() -> Size changed -> Restore success", (kal_uint32)ldi->attr, (kal_uint32)ldi->LID, 0, (kal_uint8*)namepattern, (NVRAM_MAX_PATH_LEN * 2));
                    }
                }
                else {
                    //bypass size change when OTA
                    //nvram_report_reset_data_item(ldi->LID);
                    NVRAM_SET_CREATEED_FILE_INFO(ldi->LID); //mark file exist
                    NVRAM_SET_OTA_MARKED(ldi->LID); //mark resolved, bypass 2nd scan
                    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_construct_certain_disk_table() -> Size changed -> Ignore", (kal_uint32)ldi->attr, (kal_uint32)ldi->LID, 0, (kal_uint8*)namepattern, (NVRAM_MAX_PATH_LEN * 2));
                }
                continue;
            }

            #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
            if(NVRAM_IS_CATEGORY_IMPORTANT_L1(ldi->category) || (NVRAM_NVD_DATA == nvram_query_folder_index(ldi->category)))
            {
                if(NVRAM_IS_ATTRIBUTE_CHANGE(nv_header, ldi))
                {
                    nvram_report_reset_data_item(ldi->LID);
                    NVRAM_SET_OTA_MARKED(ldi->LID);
                    continue;
                }
            }
            
            if(NVRAM_STRUCTURE_CHKSUM_CHANGE_RESETABLE(ldi) || NVRAM_DEFVAL_CHKSUM_CHANGE_RESETABLE(ldi))
            {
                if(! kal_mem_cmp((const char*)(nv_header.nv_dbg_header.struct_chkrst), (const char*)invalid_chksum, RST_CHKSUM_SIZE))
                {
                    nvram_write_data_header(ldi, LDI_HEADER_ALL_SECTION);
                    NVRAM_SET_OTA_MARKED(ldi->LID);
                    NVRAM_SET_CREATEED_FILE_INFO(ldi->LID);
                    continue;
                }
            }
            #endif

            #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__)
            if(NVRAM_STRUCTURE_CHKSUM_CHANGE_RESETABLE(ldi))
            {
                chksum_index = nvram_get_structure_chksum_index(ldi->LID);
                if(-1 != chksum_index)
                {
                    if(kal_mem_cmp((const char *)(nv_header.nv_dbg_header.struct_chkrst), (const char *)(lid_structure_chksum[chksum_index].chksum), RST_CHKSUM_SIZE))
                    {
                        nvram_report_reset_data_item(ldi->LID);
                        //record reset LID info
                        if(rst_rec_ptr->structure_rst_index >= NVRAM_CHKSUM_RST_REC_NUM)
                            rst_rec_ptr->structure_rst_index = 0;
                        rst_rec_ptr->structure_rst[rst_rec_ptr->structure_rst_index].LID= ldi->LID;
                        strncpy(rst_rec_ptr->structure_rst[rst_rec_ptr->structure_rst_index].fileprefix, ldi->fileprefix, FILE_PREFIX_LEN);
                        NVRAM_SET_OTA_MARKED(ldi->LID);
                        rst_rec_ptr->structure_rst_index = (rst_rec_ptr->structure_rst_index+1)%NVRAM_CHKSUM_RST_REC_NUM;
                        continue;
                    }
                }
                else
                {
                    if(rst_rec_ptr->structure_chksum_nofound_index >= NVRAM_CHKSUM_RST_REC_NUM)
                        rst_rec_ptr->structure_chksum_nofound_index = 0;
                    rst_rec_ptr->structure_chksum_nofound[rst_rec_ptr->structure_chksum_nofound_index].LID = ldi->LID;
                    strncpy(rst_rec_ptr->structure_chksum_nofound[rst_rec_ptr->structure_chksum_nofound_index].fileprefix, ldi->fileprefix, FILE_PREFIX_LEN);
                    rst_rec_ptr->structure_chksum_nofound_index = (rst_rec_ptr->structure_chksum_nofound_index+1)%NVRAM_CHKSUM_RST_REC_NUM;
                }
            }
            #endif
            
            #if defined(__NVRAM_DEFVAL_CHANGE_RESET__)
            if(NVRAM_DEFVAL_CHKSUM_CHANGE_RESETABLE(ldi))
            {
                chksum_index = nvram_get_defval_chksum_index(ldi->LID);
                if(-1 != chksum_index)
                {
                    if(kal_mem_cmp((const char *)(nv_header.nv_ota_header.defval_chkrst_h), (const char *)(lid_default_value_chksum[chksum_index].chksum), RST_CHKSUM_SIZE-6) ||
                        kal_mem_cmp((const char *)(nv_header.nv_dbg_header.defval_chkrst_l), (const char*)(&(lid_default_value_chksum[chksum_index].chksum[RST_CHKSUM_SIZE-6])), 6))
                    {
                        nvram_report_reset_data_item(ldi->LID);
                        //record reset LID info
                        if(rst_rec_ptr->defval_rst_index >= NVRAM_CHKSUM_RST_REC_NUM)
                            rst_rec_ptr->defval_rst_index = 0;                        
                        rst_rec_ptr->defval_rst[rst_rec_ptr->defval_rst_index].LID = ldi->LID;
                        strncpy(rst_rec_ptr->defval_rst[rst_rec_ptr->defval_rst_index].fileprefix, ldi->fileprefix, FILE_PREFIX_LEN);
                        NVRAM_SET_OTA_MARKED(ldi->LID);
                        rst_rec_ptr->defval_rst_index = (rst_rec_ptr->defval_rst_index+1)%NVRAM_CHKSUM_RST_REC_NUM;
                        continue;
                    }
                }
                else
                {
                    if(rst_rec_ptr->defval_chksum_nofound_index >= NVRAM_CHKSUM_RST_REC_NUM)
                        rst_rec_ptr->defval_chksum_nofound_index = 0;
                    rst_rec_ptr->defval_chksum_nofound[rst_rec_ptr->defval_chksum_nofound_index].LID = ldi->LID;
                    strncpy(rst_rec_ptr->defval_chksum_nofound[rst_rec_ptr->defval_chksum_nofound_index].fileprefix, ldi->fileprefix, FILE_PREFIX_LEN);
                    rst_rec_ptr->defval_chksum_nofound_index = (rst_rec_ptr->defval_chksum_nofound_index+1)%NVRAM_CHKSUM_RST_REC_NUM;
                }
            }            
            #endif

            //mark resolved, bypass 2nd scan
            NVRAM_SET_OTA_MARKED(ldi->LID);
            // file match ldi, record to bitmap
            NVRAM_SET_CREATEED_FILE_INFO(ldi->LID); //mark file exist
        }
        while (FS_FindNext(handle, &fileinfo, filename, sizeof(filename)) == FS_NO_ERROR);
    }
#ifdef __NVRAM_DISK_SIZE_CHECK__
    else
    {
        if (files_in_folder[folder_idx] != 0)
        {
            return KAL_FALSE;
        }
        else
        {
            return KAL_TRUE;
        }
    }
#endif

    FS_FindClose(handle);

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_construct_disk_table
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *
 *****************************************************************************/
static kal_bool nvram_construct_disk_table(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint32 loop_idx;
    kal_uint8* rst_rec_ptr;
    kal_bool  ret;
    #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
    nvram_ltable_entry_struct *ldi;
    #endif
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (!nvram_malloc_disk_table())
    {
        nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_malloc_disk_table() fail", 0, 0, 0, NULL, 0);
        return KAL_FALSE;
    }
    rst_rec_ptr = (kal_uint8*) get_ctrl_buffer(NVRAM_EF_CHKSUM_RESET_REC_SIZE);
    kal_mem_set(rst_rec_ptr, 0x0, NVRAM_EF_CHKSUM_RESET_REC_SIZE);

    for (loop_idx = NVRAM_FOLDER_TOTAL; loop_idx > NVRAM_FOLDER_BEGIN ; loop_idx--)
    {
        //skip scan OTA backup folder
        if((nvram_folder_enum)(loop_idx - 1) == NVRAM_NVD_BACKUP) {
            continue;
        }
        
        ret = nvram_construct_certain_disk_table((nvram_folder_enum)(loop_idx - 1), rst_rec_ptr);

        if (!ret)
        {
            nvram_destruct_disk_table();
            nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_construct_certain_disk_table() fail", (kal_uint32)ret, 0, 0, NULL, 0);
            free_ctrl_buffer(rst_rec_ptr);
            return KAL_FALSE;
        }
    }
    
    #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
    nvram_util_get_data_item(&ldi, NVRAM_EF_CHKSUM_RESET_REC_LID);
    nvram_write_data_item(ldi, 1, rst_rec_ptr, KAL_FALSE);
    #endif
    free_ctrl_buffer(rst_rec_ptr);
    
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_version_conflict_resolve
 * DESCRIPTION
 *  To perform software upgrade.
 * PARAMETERS
 *  sysrecord       [IN]        Sysrecord
 * RETURNS
 *  Success or Fail
 *****************************************************************************/
static kal_bool nvram_version_conflict_resolve(kal_uint8 *sysrecord)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_ltable_entry_struct *ldi;
    kal_uint32 file_idx;
    kal_uint32 index;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /*****************************************************
        * Launch power first and show the first picture
        ******************************************************/
    nvram_util_poweron();
#if !defined(__L1_STANDALONE__) && !defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)
    MMICheckDiskDisplay();
#endif

#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
    nvram_util_take_mutex(nvram_bitmap_mutex);
    nvram_utile_reset_lid_bitmap();
    nvram_util_give_mutex(nvram_bitmap_mutex);
    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_utile_reset_lid_bitmap()", 0, 0, 0, NULL, 0);
#endif
    /*********************************************************************/
    /****** 1st phase for loop starts here. The looping is based on the Exist File ******/
    if (!nvram_construct_disk_table())
    {
        nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_construct_disk_table() fail", 0, 0, 0, NULL, 0);
        return KAL_FALSE;
    }
    /****** 1st phase for loop ends here ******/
    /*===========================*/
    
#ifdef __NVRAM_DISK_SIZE_CHECK__
    if (!nvram_conflict_resolve_prelim(sysrecord))
    {
        return nvram_destruct_disk_table();
    }
#endif

    nvram_trace(TRACE_FUNC, FUNC_NVRAM_VERSION_CONFLICT_RESOLVE, 0);
    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_construct_disk_table() done", 0, 0, 0, NULL, 0);

    /***********************************************************************/
    /****** 2nd phase for loop starts here. The looping is based on the Code table ******/
    ldi = &logical_data_item_table[0];
    do
    {
        /* skip pre-resolve marked lid */
        if(NVRAM_CHK_CREATEED_FILE_INFO(ldi->LID)) { //bypass exist file
            nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DEBUG, "NVRAM_CHK_CREATEED_FILE_INFO() Bypass", (kal_uint32)ldi, (kal_uint32)ldi->LID, 0, NULL, 0);
            continue;
        }
        nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DEBUG, "logical_data_item_table[]", (kal_uint32)ldi, (kal_uint32)ldi->LID, 0, NULL, 0);

        /* skip special lid */
        if(ldi->LID == NVRAM_EF_READ_RESERVED_LID) {
            continue;
        }

        /* those data items need to be reset to code default values */
        if (ldi->attr & NVRAM_ATTR_OTA_RESET)
        {
            nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DEBUG, "NVRAM_ATTR_OTA_RESET", (kal_uint32)ldi, (kal_uint32)ldi->LID, 0, NULL, 0);
            nvram_report_reset_data_item(ldi->LID);
            nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_version_conflict_resolve() -> NVRAM_ATTR_OTA_RESET", (kal_uint32)ldi->LID, (kal_uint32)ldi->attr, 0, NULL, 0);
        }
        else
        {
            #ifdef __NVRAM_PSEUDO_MERGE__
            if (NVRAM_IS_ATTR_PACKAGE(ldi->attr))
            {
                continue;   /* this function will not deal with package lid */
            }
            else
            #endif
            //bypass 1st phase marked file
            if(NVRAM_CHK_OTA_MARKED(ldi->LID)) {
                nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DEBUG, "NVRAM_CHK_OTA_MARKED()", (kal_uint32)ldi, (kal_uint32)ldi->LID, 0, NULL, 0);
                continue;
            }
            nvram_file_lost_judgement(ldi, KAL_TRUE);
            // try restore from bin region
            #if (defined(__CCCIFS_SUPPORT__) && defined(__MTK_TARGET__)) || defined(__NVRAM_BIN_REGION_SIMULATION__)
            if (NVRAM_IS_CATEGORY_IN_BIN_REGION(ldi->category)) {
                if (nvram_recover_data_item(ldi) == NVRAM_IO_ERRNO_OK) {
                    NVRAM_SET_CREATEED_FILE_INFO(ldi->LID); //mark file exist
                    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_version_conflict_resolve() -> nvram_recover_data_item() Success", (kal_uint32)ldi->LID, 0, 0, NULL, 0);
                    continue;
                }
                else {
                    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_version_conflict_resolve() -> nvram_recover_data_item() Fail", (kal_uint32)ldi->LID, 0, 0, NULL, 0);
                }
            }
            #endif
            // try restore from reserved folder
            if(NVRAM_IS_ATTR_RESERVE_BACKWARD(ldi->attr)) {
                if(nvram_ota_restore_file(ldi)) {
                    //file restore success
                    NVRAM_SET_CREATEED_FILE_INFO(ldi->LID); //mark file exist
                    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_version_conflict_resolve() -> nvram_ota_restore_file() Success", (kal_uint32)ldi->LID, 0, 0, NULL, 0);
                    continue;
                }
                else {
                    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_version_conflict_resolve() -> nvram_ota_restore_file() Fail", (kal_uint32)ldi->LID, 0, 0, NULL, 0);
                }
            }
            
            nvram_report_reset_data_item(ldi->LID);
            nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DETAIL, "nvram_version_conflict_resolve() -> Mark Reset", (kal_uint32)ldi->LID, 0, 0, NULL, 0);
        }
        nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DEBUG, "nvram_util_next_data_item()", (kal_uint32)ldi, (kal_uint32)ldi->LID, 0, NULL, 0);
    }while(nvram_util_next_data_item(&ldi));

#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA_DEBUG, "nvram_util_take_mutex()", (kal_uint32)nvram_bitmap_mutex, 0, 0, NULL, 0);
    nvram_util_take_mutex(nvram_bitmap_mutex);
    nvram_delete_bitmap_file();
    nvram_write_bitmap_into_file();
    nvram_util_give_mutex(nvram_bitmap_mutex);
    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_write_bitmap_into_file()", 0, 0, 0, NULL, 0);
#endif

    nvram_trace(TRACE_FUNC, FUNC_NVRAM_VERSION_CONFLICT_RESOLVE, 1);
    /****** 2nd phase for loop ends here ******/
    /*===========================*/
    nvram_create_report_file();

    /*************************************************************************/
    /******** 3rd phase for loop starts here. The looping is based on LIDResetCnt ********/
    for (index = 1; index <= LIDResetCnt; index++)
    {
        file_idx = LIDResetArray[index];

        nvram_util_get_data_item(&ldi, file_idx);

        if (!ldi)
        {
            continue;
        }
    #ifdef __NVRAM_BACKUP_DISK__
        if (NVRAM_IS_ATTR_BACKUP_FAT(ldi->attr) || NVRAM_IS_ATTR_BACKUP_RAW(ldi->attr))
        {
            if (nvram_recover_image_by_lid(ldi) == NVRAM_ERRNO_SUCCESS)
            {
                continue;
            }
        }
    #endif

        if (!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_version_conflict_resolve() -> nvram_reset_data_items() Fail", (kal_uint32)ldi->LID, (kal_uint32)ldi->total_records, 0, NULL, 0);
            return nvram_destruct_disk_table();
        }
        nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_version_conflict_resolve() -> nvram_reset_data_items() Success", (kal_uint32)ldi->LID, (kal_uint32)ldi->total_records, 0, NULL, 0);
    }
    /****** 3rd phase for loop ends here ******/
    /*===========================*/

    nvram_trace(TRACE_FUNC, FUNC_NVRAM_VERSION_CONFLICT_RESOLVE, 3);

    /****** rewrite system records ******/
    nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_LID);
    if (!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_version_conflict_resolve() -> Reset NVRAM_EF_SYS_LID Fail", (kal_uint32)ldi->LID, (kal_uint32)ldi->total_records, 0, NULL, 0);
        return nvram_destruct_disk_table();
    }
    nvram_util_get_data_item(&ldi, NVRAM_EF_CORE_FACTORY_RESET_AND_OTA_LID);
    nvram_write_data_item(ldi, 1, nvram_ptr->build_time, KAL_TRUE);

    nvram_trace(TRACE_FUNC, FUNC_NVRAM_VERSION_CONFLICT_RESOLVE, 4);

    return nvram_destruct_disk_table();
}

/*****************************************************************************
 * FUNCTION
 *  nvram_write_system_record
 * DESCRIPTION
 *  This function is used to write system record
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/

kal_bool nvram_write_system_record(nvram_lock_state_enum lock_state)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_bool write_status = KAL_FALSE;
    nvram_ltable_entry_struct *ldi;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (lock_state == NVRAM_LOCK_DISABLE)
    {
        nvram_ptr->lock = KAL_FALSE;
    }
    else if (lock_state == NVRAM_LOCK_ENABLE)
    {
        nvram_ptr->lock = KAL_TRUE;
    }
    else
    {
        /* use default value assigned by custom */
        nvram_ptr->lock = nvram_custom_lock_status();
    }

    nvram_assign_system_record_default_value((kal_char *)nvram_ptr->coded_version, release_verno());
    nvram_update_lock_state(nvram_ptr->lock);
	
    nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_LID);

    if (nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        write_status = KAL_TRUE;
    }

    /* Fatal error. Cannot write system-level record!? */
    NVRAM_EXT_ASSERT(write_status == KAL_TRUE, 0, NVRAM_LOC_WRITE_SYS_LID_FAIL, nvram_ptr->state);

    return write_status;
}



/*****************************************************************************
 * FUNCTION
 *  nvram_supplementary_check_data_item_for_fw
 * DESCRIPTION
 *  do the supplementary check :build time check
 * PARAMETERS
 *  LIDtoCheck      [IN]        Should be the record to check
 * RETURNS
 *  void
 *****************************************************************************/
static kal_bool nvram_supplementary_check_data_item_for_fw()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_ltable_entry_struct *ldi;
    kal_bool result = KAL_FALSE;
    kal_uint8 *buffer = NULL;
    kal_uint8 *default_value = NULL; 
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_LID);
    
    buffer = (kal_uint8*) get_ctrl_buffer(ldi->size);
    default_value = (kal_uint8*) get_ctrl_buffer(ldi->size);
    nvram_get_default_value_to_write(ldi, 4, default_value, ldi->size); //get the build time
    
    nvram_util_get_data_item(&ldi, NVRAM_EF_CORE_FACTORY_RESET_AND_OTA_LID);
    if (nvram_read_data_item(ldi, 1, 1, buffer, ldi->size) == NVRAM_IO_ERRNO_OK)
    {
        if (kal_mem_cmp((kal_char*) buffer, (kal_char*) default_value, ldi->size) != 0)
        {
            result = KAL_FALSE;
        }
        else
        {
            result = KAL_TRUE;
        }
    }
    else
    {
        result = KAL_FALSE;
    }    
    free_ctrl_buffer(default_value);
    free_ctrl_buffer(buffer);
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_supplementary_check_data_item
 * DESCRIPTION
 *  do some supplementary check, such as branch or customer package
 * PARAMETERS
 *  LIDtoCheck      [IN]        Should be the record to check
 * RETURNS
 *  void
 *****************************************************************************/
static kal_bool nvram_supplementary_check_data_item(nvram_lid_enum LIDtoCheck)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_ltable_entry_struct *ldi;
    kal_bool result = KAL_FALSE;
    kal_uint16 rec_id = 1;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    
    switch(LIDtoCheck)
    {
        case NVRAM_EF_SYS_LID:
            nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_LID);
            rec_id = 1;
            break;
        case NVRAM_EF_BRANCH_VERNO_LID:
            nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_LID);
            rec_id = 2;
            break;
        case NVRAM_EF_FLAVOR_VERNO_LID:
            nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_LID);
            rec_id = 3;
            break;
		case NVRAM_EF_BUILD_TIME_LID:
			nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_LID);
			rec_id = 4;
			break;
        default:
            nvram_util_get_data_item(&ldi, LIDtoCheck);
            break;
    }
    
    {
        kal_uint8 *buffer = (kal_uint8*) get_ctrl_buffer(ldi->size);

        if (nvram_read_data_item(ldi, rec_id, 1, buffer, ldi->size) == NVRAM_IO_ERRNO_OK)
        {
            kal_uint8 *default_value = (kal_uint8*) get_ctrl_buffer(ldi->size);    
            
            nvram_get_default_value_to_write(ldi, rec_id, default_value, ldi->size);
            
            if (kal_mem_cmp((kal_char*) buffer, (kal_char*) default_value, ldi->size) != 0)
            {
                result = KAL_FALSE;
            }
            else
            {
                result = KAL_TRUE;
            }
            free_ctrl_buffer(default_value);
        }
        else
        {
            result = KAL_FALSE;
        }
        free_ctrl_buffer(buffer);
    }

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  nvram_supplementary_check
 * DESCRIPTION
 *  do some supplementary check, such as branch or customer package
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
static kal_bool nvram_supplementary_check(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_bool temp_result = KAL_TRUE;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    /* Step 1: handle branch(flavor)/BIN change */
    /* branch and flavor must all same with before, or else reset branch */
    if ((!nvram_supplementary_check_data_item(NVRAM_EF_BRANCH_VERNO_LID))
        || (!nvram_supplementary_check_data_item(NVRAM_EF_FLAVOR_VERNO_LID)))
    {
        nvram_trace(TRACE_FUNC, FUNC_NVRAM_SUPPLEMENTARY_CHECK, 0);
    #if defined(__CCCIFS_SUPPORT__)
        // [Smart Phone Modem][Telephony Load Reduction] && [Data Card][RNDIS/HOSTED Dongle]
        // Skip flavor checks, because of LID sharing between modems.
    #else
        temp_result = nvram_reset_data_items(NVRAM_RESET_BRANCH, NVRAM_APP_RESERVED, NULL, 0, 0);
    #endif
        nvram_ptr->sw_status |= NVRAM_SW_BRANCH_CHANGE;
    }

#ifdef __NVRAM_SUPPORT_CUSTPACK__
    /* Step 2: handle custpack change */
    if (!nvram_supplementary_check_data_item(NVRAM_EF_CUSTPACK_VERNO_LID))
    {
        nvram_trace(TRACE_FUNC, FUNC_NVRAM_SUPPLEMENTARY_CHECK, 1);
        temp_result = nvram_reset_data_items(NVRAM_RESET_CUSTPACK, NVRAM_APP_RESERVED, NULL, 0, 0);
        nvram_ptr->sw_status |= NVRAM_SW_CUSTPACK_CHANGE;
    }
#endif

    return temp_result;
}

#if !defined(__MTK_INTERNAL_ENG_USER__) && defined(__NVRAM_INIT_ACTIVE_RECOVER__)
/*****************************************************************************
 * FUNCTION
 *  nvram_recover_all_ldi
 * DESCRIPTION
 *  Recover select category from bin region
 *
 * PARAMETERS
 *  category          [IN]
 * RETURNS
 *  KAL_TRUE if success, KAL_FALSE otherwise.
 *****************************************************************************/
static kal_bool nvram_recover_all_ldi(nvram_category_enum category)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_ltable_entry_struct *ldi;
    NVRAM_FILE_NAME nvramname;
    nvram_folder_enum folder_index;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    //check nvram lock flag
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_LOCK_LID);
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    if(nvram_drv_fat_auto_recover(nvramname, folder_index) != NVRAM_ERRNO_SUCCESS) {
        return KAL_FALSE;
    }

    //try to recover category
    ldi = &logical_data_item_table[0];
    do
    {
        if (!(ldi->category & category) || (ldi->LID == NVRAM_EF_NVRAM_LOCK_LID)) {
            continue;
        }
        folder_index = nvram_query_folder_index(ldi->category);
        nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
        nvram_drv_fat_auto_recover(nvramname, folder_index);
    }while(nvram_util_next_data_item(&ldi));
    
    return KAL_TRUE;
}
#endif


/*****************************************************************************
 * FUNCTION
 *  nvram_init_all_ldi
 * DESCRIPTION
 *  Formats device by invoking drv_format() function. Re-initialize all logical data items to
 *  default value.
 *
 *  This function is supposed to be called only when:
 *  1> unformatted device.
 *  2> system level record read error.
 *  3> incompatible version.
 * PARAMETERS
 *  reset_category          [IN]
 *  is_after_format(?)      [IN]        Only when device is just re-formatted will this value be true.
 * RETURNS
 *  Result of writing system records. KAL_TRUE if success, KAL_FALSE otherwise.
 *****************************************************************************/
static kal_bool nvram_init_all_ldi(nvram_reset_category_enum reset_category)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    /*****************************************************
        * Launch power first and show the first picture
        ******************************************************/
    nvram_util_poweron();
#if !defined(__L1_STANDALONE__) && !defined(EMPTY_MMI) && !defined(EXTERNAL_MMI)
    MMICheckDiskDisplay();
#endif

#ifdef __NVRAM_WRITE_WITH_FILE_SIZE__
    bResetNvramData = KAL_TRUE;
#endif

    nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT_ALL, reset_category);
    reset_category = NVRAM_RESET_ALL;
    if (reset_category == NVRAM_RESET_ALL)
    {
        if (nvram_ptr->sw_status & NVRAM_SW_EMPTY_FAT)
        {
            nvram_delete_all_nvram_files(NVRAM_FIRST_BOOTUP);
        }
        else
        {
            nvram_delete_all_nvram_files(NVRAM_NORMAL_BOOTUP);
        }
    }

    nvram_reset_data_items(reset_category, NVRAM_APP_RESERVED, NULL, 0, 0);
    nvram_write_system_record((nvram_lock_state_enum)nvram_ptr->lock);

    return KAL_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  nvram_test_lock
 * DESCRIPTION
 *  get lock state from nvram context.
 * PARAMETERS
 *  void
 * RETURNS
 *  KAL_TRUE if locked, else KAL_FALSE
 *****************************************************************************/
kal_bool nvram_test_lock(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return nvram_ptr->lock;
}

kal_bool nvram_sec_check(void){
#ifdef __NVRAM_SEC_CHECK_EN__
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_uint8* sec_pattern=NULL;
    kal_uint8* record_buf_ptr;
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint32 idx = 0;
    kal_uint32 record_sz, record_cnt, sec_pattern_sz;

     record_sz = NVRAM_SEC_CHECK_LEN;
     record_cnt = NVRAM_EF_NVRAM_SEC_CHECK_TOTAL; 
     sec_pattern_sz = record_sz*record_cnt;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    sec_pattern = (kal_uint8*) get_ctrl_buffer(sec_pattern_sz);


    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_SEC_CHECK_LID);
    kal_mem_set(sec_pattern, 0, sec_pattern_sz);
    nvram_read_data_item(ldi, 1, record_cnt, sec_pattern, sec_pattern_sz);

    record_buf_ptr = sec_pattern;
#ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
    SST_Secure_Algo(NVRAM_MSP_DECRYPT, (kal_uint32)(record_buf_ptr), record_sz, nvram_ptr->secret_key, record_buf_ptr);
    for(idx= 0; idx<record_sz/2; idx++){
	if(record_buf_ptr[idx]!=((~(record_buf_ptr[idx+record_sz/2]))&0xFF)){
		NVRAM_EXT_ASSERT(KAL_FALSE,0 ,NVRAM_ERRNO_MSP_CHECK_ERROR,0);
	}
    }
#endif
   record_buf_ptr = &sec_pattern[record_sz];
    nvram_AES_decrypt(record_buf_ptr, record_sz);

    for(idx= 0; idx<record_sz/2; idx++){
	if(record_buf_ptr[idx]!=((~(record_buf_ptr[idx+record_sz/2]))&0xFF)){
		NVRAM_EXT_ASSERT(KAL_FALSE,0,NVRAM_ERRNO_CONF_CHECK_ERROR,0);
	}
   }

	free_ctrl_buffer(sec_pattern);
#endif
	return KAL_TRUE;
}



/*****************************************************************************
 * FUNCTION
 *  nvram_init
 * DESCRIPTION
 *  This is init() function of NVRAM module.
 *  This function initialize all the context variables required for NVRAM module
 * PARAMETERS
 *  task_indx       [IN]
 * RETURNS
 *  True if succeed.
 *****************************************************************************/
kal_bool nvram_init(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_bool ld_init_result = KAL_TRUE;
    nvram_drv_status_enum drv_init_result = NVRAM_ERRNO_SUCCESS;
    nvram_ltable_entry_struct *ldi = NULL;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Assume that BytesPerCluster still not initialized if BytesPerCluster==0 */

    NVRAM_INIT_TIME_UT_STAMP(0);
    if (BytesPerCluster == 0)
    {
        /* Please do not remove this code if NVRAM still use kal_tmp_mem_alloc
           The detail reason please see nvram_malloc_disk_table */
        FS_DiskInfo DI;
        FS_GetDiskInfo((const WCHAR*)L"Z:\\", &DI, FS_DI_BASIC_INFO | FS_DI_FREE_SPACE);
        /* Set BytesPerCluster to the accurate value */
        BytesPerCluster = DI.BytesPerSector * DI.SectorsPerCluster;
    }

#if defined (__NVRAM_UT_TEST__)
    if((nvram_test_task1_id) && (kal_get_current_task()==nvram_test_task1_id))
    {} //do not create mutex again, otherwise fatal error happen
    else
#endif
    {
        g_nvram_impt_mutex = kal_create_mutex("NV_IMPT");
        g_nvram_fs_mutex = kal_create_mutex("NV_FS");
        g_nvram_trace_mutex = kal_create_mutex("NV_TRACE");
        #if defined(__NVRAM_ACCESS_TIMEOUT_ASSERT__)
        nvram_gpt_handle = DclSGPT_Open(DCL_GPT_CB, FLAGS_NONE);
        #endif
    }

    nvram_ptr->sw_status = 0;

    /*****************************************************
     * Construct NVRAM table and init some default value
     ******************************************************/
    nvram_pre_init();

#if defined(__NVRAM_MONITOR_ENABLED__)
    /*****************************************
     * NVRAM Monitor Init
     *********************************************/
    #if defined (__NVRAM_UT_TEST__)
    if((nvram_test_task1_id) && (kal_get_current_task()==nvram_test_task1_id))
    {} //do not create mutex again, otherwise fatal error happen
    else
    #endif
    {
        nvram_mon_init();
    }
#endif

#ifdef __NVRAM_BACKUP_DISK__
    /*****************************************
     * Init Backup partition
     *********************************************/
    nvram_init_backup_disk();
#endif


#ifdef __NVRAM_SECURE_DATA_STORAGE__
    /****************************************************
     * Init Secure Data Storage and get the storage mode
     ******************************************************/
    if (nvram_sds_status() == NVRAM_ERRNO_SDS_EMPTY)
    {
        nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 0, 0);
        nvram_ptr->sw_status |= NVRAM_SW_EMPTY_SDS;
        nvram_sds_init_start();
        //nvram_init_all_ldi(NVRAM_RESET_SDS);
        nvram_sds_init_end();
    }
#endif

    /*****************************************
     * Init FAT
     *  if the secure storage is empty => software version ... and many data is missing
     *  => format all
     *********************************************/
#if !defined(__MTK_INTERNAL_ENG_USER__) && defined(__NVRAM_INIT_ACTIVE_RECOVER__)
    REINIT_FAT:
#endif
   if ((drv_init_result = nvram_drv_fat_status()) == NVRAM_DRV_UNFORMATTED)
    {
    #if !defined(__MTK_INTERNAL_ENG_USER__) && defined(__NVRAM_INIT_ACTIVE_RECOVER__)
        if(nvram_recover_all_ldi(NVRAM_CATEGORY_IMPORTANT)) {
            goto REINIT_FAT;
        }
    #endif
    #if defined (__NVRAM_UT_TEST__)
        nvram_boot_trace |= BOOT_TRACE_DRV_UNFORMATTED;
    #endif
        nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 1, 0);
        nvram_ptr->sw_status |= NVRAM_SW_EMPTY_FAT;
        nvram_drv_fat_init_start();

#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
        nvram_util_init_info_file();
#endif
        nvram_init_all_ldi(NVRAM_RESET_ALL);
        nvram_util_get_data_item(&ldi, NVRAM_EF_CORE_FACTORY_RESET_AND_OTA_LID);
        nvram_write_data_item(ldi, 1, nvram_ptr->build_time, KAL_TRUE);
        nvram_drv_fat_init_end();
    }
    else if (drv_init_result == NVRAM_DRV_FOLDER_NOT_READY)
    {
    #if defined (__NVRAM_UT_TEST__)
        nvram_boot_trace |= BOOT_TRACE_FOLDER_NOT_READY;
    #endif
        nvram_create_all_folder();
    }
    else if (drv_init_result == NVRAM_DRV_DRIVE_BROKEN || drv_init_result == NVRAM_DRV_DRIVE_VNOERR)
    {
    #if defined (__NVRAM_UT_TEST__)
        nvram_boot_trace |= BOOT_TRACE_DRIVE_BROKEN_VNOERR;
    #endif
        nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 2, 0);
        nvram_ptr->dev_broken = KAL_TRUE;
        goto INIT_END;
    }

    /*****************************************
     * Init OTP
     *********************************************/
#ifdef __NVRAM_OTP__
    nvram_otp_construct();
#endif

    /*****************************************
     * Check system record and do version compatible
     *********************************************/
    if ((nvram_ptr->sw_status & NVRAM_SW_EMPTY_FAT)
    #ifdef __NVRAM_SECURE_DATA_STORAGE__
        && (nvram_ptr->sw_status & NVRAM_SW_EMPTY_SDS)
    #endif
        )
    {

        nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 3, 0);
        goto INIT_END;
    }

  
#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
    nvram_util_init_info_file();
#endif
    NVRAM_INIT_TIME_UT_STAMP(1);

    /* Read back system-level record to retrieve software-lock status and data version
     *
     * 1. Read failed:
     *        NVRAM Layer must re-initialize all logical data items
     *            b'coz we could not ensure the healthy of all ldi, and return.
     * 2. Read success but incompatible versions:
     *        Step 1: NVRAM Layer must re-initialize all 'USER' category logical data items.
     *        Step 2: According the result of step 1, jump step 3 or step 4
     *        Step 3: Step 1 is success, Must assue following version don't re-initialize in step 1.
     *             3.1 check branch version
     *             3.2 check flavor version
     *             3.3 check custpack version
     *             3.4 check secupack version
     *        Step 4: Step 1 is fail
     *             4.1 Initial all data item
     * 3. Read success and compatible versions:
     *        3.1 check branch version
     *        3.2 check flavor version
     *        3.3 check custpack version
     *        3.4 check secupack version
     */
	nvram_sec_check();
	
    nvram_ptr->lock = nvram_decrypt_lock_state();

    kal_mem_set(nvram_ptr->old_coded_version, 0, NVRAM_EF_SYS_SIZE + 1);
    nvram_util_get_data_item(&ldi, NVRAM_EF_SYS_LID);
    if (nvram_util_has_file_created(ldi) == KAL_FALSE ||
        nvram_read_data_item(ldi, 1, 1, nvram_ptr->old_coded_version, NVRAM_EF_SYS_SIZE) != NVRAM_IO_ERRNO_OK)
    {
        nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 5, 0);
    #ifndef __NVRAM_MULTI_FOLDERS__
        nvram_ptr->sw_status |= NVRAM_SW_EMPTY_FAT;
    #else
        nvram_ptr->sw_status |= NVRAM_SW_VERSION_CHANGE;
    #endif
        nvram_init_all_ldi(NVRAM_RESET_FAT);
        NVRAM_INIT_TIME_UT_FLOW(NVRAM_INIT_READ_VERSION_FAIL);
    #if defined (__NVRAM_UT_TEST__)
        nvram_boot_trace |= BOOT_TRACE_READ_SYS_LID_FAIL;
    #endif
    }
#if defined(__CCCIFS_SUPPORT__) && defined(__MTK_TARGET__)
    else if (ccci_queryBootAttributes(BOOT_ATTR_IS_CLEAN_BOOT))
    {
        nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 6, 0);
        nvram_init_all_ldi(NVRAM_RESET_FAT);
        NVRAM_INIT_TIME_UT_FLOW(NVRAM_INIT_CLEAN_BOOT);
    }
#endif
    // Always check if it's version upgrade (in case factory reset and upgrade at one time)
    // Factory reset and OTA upgrade may happen at one time
    {
    /* Initial pseudo merge first */
    #ifdef __NVRAM_PSEUDO_MERGE__
        if (!nvram_pseudo_merge())
        {
            FS_Delete(L"z:\\NVRAM\\NVD_DATA\\INFOALID");
            FS_Delete(L"z:\\NVRAM\\NVD_DATA\\PACKALID");
            nvram_pseudo_merge();
        }
    #endif

        /* maintain the lock status even after software upgrade */
        //nvram_ptr->lock = nvram_decrypt_lock_state();

        nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 7, nvram_ptr->lock);
        nvram_assign_system_record_default_value((kal_char *)nvram_ptr->coded_version, release_verno());

        /*
        * Read system record success, Compare code version first
        */
        if (strncmp((kal_char*) nvram_ptr->old_coded_version, (kal_char*) nvram_ptr->coded_version, CODED_DATA_VERSION_SIZE) != 0 ||
             (!nvram_supplementary_check_data_item(NVRAM_EF_BUILD_TIME_LID)) || (!nvram_supplementary_check_data_item_for_fw()))
        {
            nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 8, 0);
        
            nvram_ptr->sw_status |= NVRAM_SW_VERSION_CHANGE;
            #ifdef __NVRAM_CHECK_FILE_AND_RECOVER__
            is_nvram_first_restore = KAL_TRUE;
            is_nvram_in_ota_flow = KAL_TRUE;
            #endif
            ld_init_result = nvram_version_conflict_resolve(nvram_ptr->old_coded_version);
            #ifdef __NVRAM_CHECK_FILE_AND_RECOVER__
            is_nvram_in_ota_flow = KAL_FALSE;
            #endif
            #if 0
/* under construction !*/
            #if !defined(__CCCIFS_SUPPORT__)
/* under construction !*/
            #else
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif
            #endif
            
            if (ld_init_result)
            {
                nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 9, 0);
                nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_version_conflict_resolve() Success", 0, 0, 0, NULL, 0);
                ld_init_result = nvram_supplementary_check();
            }
            else
            {
                nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 10, 0);
                /* if errors happen during conflict resolution, initialize all LIDs */
                ld_init_result = nvram_init_all_ldi(NVRAM_RESET_ALL);
                nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "nvram_version_conflict_resolve() Fail -> nvram_init_all_ldi()", (kal_uint32)ld_init_result, 0, 0, NULL, 0);
            }

            #if defined (__NVRAM_UT_TEST__)
                nvram_boot_trace |= BOOT_TRACE_SW_VERNO_CONFLICT;
            #endif
            /* switch the mode back to SDS mode if need */
            NVRAM_INIT_TIME_UT_FLOW(NVRAM_INIT_VERSION_CHANGE);
        }
        else    /* version compatible */
        {
            /*
             * Read sys record success and version compatible
             * This case means handset is power on normally:
             * So, nvram should only query restore factory in this case
             */
            nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 12, 0);
            //Fast MD booting feature for Modem only load 
            //Note:
            // 1. You need to download the correct RAMDISK image to EVB 
            //   a. RAMDISK image can be dump with META
            //   b. FDD/TDD have different RAMDISK image
            // 2. Mark nvram_scan_all_ldi        
            ld_init_result = nvram_supplementary_check();

            if ((ld_init_result == KAL_TRUE) && nvram_check_restore_factory_flag())
            {
                nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 13, 0);
                nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "OTA Check : NVRAM_RESET_FACTORY", 0, 0, 0, NULL, 0);
                nvram_reset_data_items(NVRAM_RESET_FACTORY, NVRAM_APP_RESERVED, 0, 0, 0);
            }
            NVRAM_INIT_TIME_UT_FLOW(NVRAM_INIT_NORMAL_BOOT);
            #if defined (__NVRAM_UT_TEST__)
                nvram_boot_trace |= BOOT_TRACE_SW_VERNO_COMPATIBLE;
            #endif

        }   /* version compatible */
    }

    nvram_trace(TRACE_FUNC, FUNC_NVRAM_INIT, 14, 0);
    nvram_debug_log_dump(NVRAM_DEBUG_DUMP_OTA, "NVRAM Init Done", 0, 0, 0, NULL, 0);

INIT_END:

    nvram_ptr->state = NVRAM_STATE_READY;
    nvram_write_bitmap_into_file();
    NVRAM_INIT_TIME_UT_STAMP(2);
#if defined(__NVRAM_INIT_LID_BUFFER__)
    nvram_init_lid_buffer_prepare();
#endif

#if defined (__NVRAM_UT_TEST__)
    if((nvram_test_task1_id) && (kal_get_current_task()==nvram_test_task1_id))
    {} //do nothing here
    else
#endif
    {
        NVRAM_INIT_TIME_UT_STAMP(3);
        custom_em_nvram_config_com_port();
        NVRAM_INIT_TIME_UT_STAMP(4);
        custom_nvram_config();

        /* load SBP file */
        nvram_external_read_data(NVRAM_EF_SBP_MODEM_CONFIG_LID, 
                                 1, 
                                 (kal_uint8*)&sbp_config, 
                                 NVRAM_EF_SBP_MODEM_CONFIG_SIZE);
                
        nvram_external_read_data(NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID, 
                                 1, 
                                 (kal_uint8*)&sbp_data_config, 
                                 NVRAM_EF_SBP_MODEM_DATA_CONFIG_SIZE);
        

        NVRAM_INIT_TIME_UT_STAMP(5);
        custom_default_mode_config();
        NVRAM_INIT_TIME_UT_STAMP(6);

#ifdef __NVRAM_CRYPT_TEST__ 
        {
            kal_uint8 array_t[NVRAM_MSP_TEST_LEN];
            nvram_external_read_data(NVRAM_EF_NVRAM_MSP_TEST_LID,
                                     1,
                                     (kal_uint8*)array_t,
                                     NVRAM_EF_NVRAM_MSP_TEST_SIZE);
        }       
#endif
    }

    return KAL_TRUE;
}   /* end of nvram_init function */

/*****************************************************************************
 * FUNCTION
 *  nvram_reset
 * DESCRIPTION
 *  This is reset() function of NVRAM module.
 * PARAMETERS
 *  task_indx       [IN]
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool nvram_reset(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#if !defined(__MTK_TARGET__)
    nvram_ptr->state = NVRAM_STATE_NULL;
#endif
    return KAL_TRUE;
}   /* end of nvram_reset function */



/*****************************************************************************
 * FUNCTION
 *  nvram_report_last_exception
 * DESCRIPTION
 *
 * PARAMETERS
 *  task_name_p     [?]
 *  type_p          [?]
 *  time_p          [?]
 *  status_p        [?]
 * RETURNS
 *  void
 *****************************************************************************/
void nvram_report_last_exception(void *task_name_p, void *type_p, void *time_p, void *status_p)
{
}  

/*****************************************************************************
 * FUNCTION
 *  nvram_create_first_bootup_name
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void nvram_create_first_bootup_name(kal_char *prefix, kal_wchar* filename)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_char *working_buffer = (kal_char*) get_ctrl_buffer(32);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    memset(working_buffer, 0, 32);
    strncpy(working_buffer, release_verno(), 32);
#ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
    SST_Secure_Algo(NVRAM_MSP_ENCRYPT, (kal_uint32)working_buffer, 32, nvram_ptr->secret_key, (kal_uint8*)working_buffer);
#else
    //custom_nvram_encrypt(nvram_ptr->secret_key, (unsigned char *)working_buffer, 32, 0);
    nvram_AES_encrypt((unsigned char *)working_buffer, 32);
#endif
    kal_wsprintf(filename, "Z:\\%s%02X%02X%02X%02X.log", prefix, working_buffer[4], working_buffer[5], working_buffer[6], working_buffer[7]);

    free_ctrl_buffer(working_buffer);
}

/*****************************************************************************
 * FUNCTION
 *  nvram_create_first_bootup_file
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void nvram_create_first_bootup_log(kal_char *prefix)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_wchar filename[NVRAM_MAX_PATH_LEN];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    nvram_create_first_bootup_name(prefix, filename);

    FS_Close(FS_Open(filename, FS_READ_WRITE | FS_CREATE_ALWAYS));
}

/*****************************************************************************
 * FUNCTION
 *  nvram_check_first_bootup_log
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
kal_bool nvram_check_first_bootup_log(kal_char *prefix)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_wchar filename[NVRAM_MAX_PATH_LEN];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    nvram_create_first_bootup_name(prefix, filename);

    if (FS_GetAttributes(filename) >= FS_NO_ERROR)
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}

/*****************************************************************************
 * FUNCTION
 *  nvram_delete_first_bootup_log
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void nvram_delete_first_bootup_log(kal_char *prefix)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    kal_wchar filename[NVRAM_MAX_PATH_LEN];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    nvram_create_first_bootup_name(prefix, filename);
    FS_Delete(filename);
}

#ifdef __NVRAM_SECURE_DATA_STORAGE__

/*****************************************************************************
 * FUNCTION
 *  nvram_access_sds
 * DESCRIPTION
 * PARAMETERS
 * RETURNS
 *****************************************************************************/
kal_int32 nvram_access_sds(nvram_sds_access_enum access_mode)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/


    nvram_errno_enum result = NVRAM_ERRNO_SUCCESS;

    if (access_mode == NVRAM_SDS_ACCESS_BACKUP)
    {
        result = nvram_sds_backup();
    }
    else
    {
        result = nvram_sds_restore();
    }

    
    return result;
}
#endif
