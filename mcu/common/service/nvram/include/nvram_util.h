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
 * Filename:
 * ---------
 * nvram_util.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Utility header file for NVRAM
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
 *
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef NVRAM_UTIL_H
#define NVRAM_UTIL_H
/*****************************************************************************
 *  Include
 ****************************************************************************/
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_trace.h"
#include "nvram_defs.h"
#include "nvram_internal.h"

/*****************************************************************************
 *  Define
 ****************************************************************************/
/*****************************************************************************
 *  Typedef
 ****************************************************************************/
typedef enum
{
	NVRAM_INIT_READ_VERSION_FAIL = 1,
	NVRAM_INIT_CLEAN_BOOT,
	NVRAM_INIT_VERSION_CHANGE,
	NVRAM_INIT_NORMAL_BOOT,
} nvram_init_flow_trace;
	
/*****************************************************************************
 *  Global Function
 ****************************************************************************/
extern void nvram_util_blocking_assert(char* exp, char* f, kal_uint32 line, kal_uint32 e1, kal_uint32 e2, kal_uint32 e3);

#if 0
#if 0
/* under construction !*/
#else
/* under construction !*/
#endif
#endif

#ifdef NVRAM_DEBUG
extern void nvram_trace_to_file(kal_uint32 line, kal_uint32 e1, kal_uint32 e2, kal_uint32 e3, kal_uint32 e4, kal_uint32 e5);
#else
#define nvram_trace_to_file(line, e1, e2, e3, e4, e5)
#endif

#ifdef __NVRAM_INIT_TIME_UT__
    #define NVRAM_INIT_TIME_UT_STAMP(num) \
        do{ \
            extern kal_uint16 init_time_tick[9]; \
            init_time_tick[num] = kal_get_systicks(); \
        }while(0)

    #define NVRAM_INIT_TIME_UT_FLOW(id) \
        do{ \
            extern nvram_init_flow_trace init_trace; \
            init_trace = id; \
        }while(0)
    #define NVRAM_INIT_TIME_UT_SAVE() \
        do{ \
            extern void nvram_init_time_ut_save(void); \
            nvram_init_time_ut_save(); \
        }while(0)
#else
    #define NVRAM_INIT_TIME_UT_STAMP(num)
    #define NVRAM_INIT_TIME_UT_FLOW(id)
    #define NVRAM_INIT_TIME_UT_SAVE()
#endif
	
extern void nvram_util_make_lid_filename(nvram_ltable_entry_struct *ldi, NVRAM_FILE_NAME nvramname, kal_bool first_copy);
extern kal_uint16 nvram_util_checksum_convert(const kal_uint8 *checksum_buf_8B, kal_uint8 *checksum_buf_2B, kal_bool bypass_CDEF);
extern kal_uint16 nvram_util_caculate_checksum(const kal_uint8 *buf, kal_uint32 size, kal_uint8* checksum_buf);
extern kal_uint16 nvram_util_cal_checksum_simple(const kal_uint8 *buf, kal_uint32 size);
extern void nvram_util_make_filename(NVRAM_FILE_NAME buf, kal_char* prefix, kal_char M, kal_char* verno);

    //extern void nvram_trace(trace_class_enum trc_class, kal_uint32 msg_index, const char* format, ...);
    #define nvram_trace(...)    kal_brief_trace(__VA_ARGS__)
    
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#if 0
/* under construction !*/
#endif
extern kal_bool nvram_util_is_usbboot(void);
extern kal_bool nvram_util_poweron(void); 
extern void nvram_util_poweroff(void); 

extern nvram_lid_enum nvram_util_get_IMEISV_LID(void);

extern kal_uint32 nvram_util_get_IMEISV_size(void);

extern kal_uint32 nvram_util_get_IMEI_size(void);

extern void nvram_util_take_mutex(kal_mutexid ext_mutex_id_ptr);
extern void nvram_util_give_mutex(kal_mutexid ext_mutex_id_ptr);
void * nvram_memset(void* dest, kal_int32 value, kal_uint32 size);

extern kal_bool nvram_write_data_header(nvram_ltable_entry_struct *ldi, nvram_header_section_enum section);
extern kal_bool nvram_read_data_header(const kal_wchar *filename, nvram_header_section_enum section, void* buffer, kal_uint32 buffer_size);
extern kal_bool nvram_prepare_data_header(nvram_ltable_entry_struct *ldi,kal_uint8 *ldi_hd_buffer);

extern kal_bool nvram_ota_backup_file(const kal_wchar *s_filename, nvram_ldi_ota_header *ldi_ota_header);
extern kal_bool nvram_ota_restore_file(nvram_ltable_entry_struct *ldi);
extern kal_uint32 nvram_ota_buffer_size();

extern kal_bool nvram_ota_search_backup_file(const kal_char *s_filename, NVRAM_FULL_PATH *r_filename);

#if defined(__NVRAM_CREATE_FILE_ON_WRITE__)
extern kal_mutexid nvram_bitmap_mutex;
extern kal_uint8 *nvram_bitmap_ptr;

extern kal_bool nvram_util_init_info_file();
extern kal_bool nvram_util_has_file_created(nvram_ltable_entry_struct *ldi);
extern void nvram_util_pre_write_lid(nvram_ltable_entry_struct *ldi);
extern void nvram_util_post_write_lid(nvram_ltable_entry_struct *ldi);
extern void nvram_util_pre_reset_gen_default_lid(nvram_ltable_entry_struct *ldi);
extern void nvram_util_post_reset_gen_default_lid(nvram_ltable_entry_struct *ldi);
extern void nvram_util_mark_file_uncreated(nvram_ltable_entry_struct *ldi);
extern kal_bool nvram_util_always_gen_default(nvram_ltable_entry_struct *ldi);
extern void nvram_utile_reset_lid_bitmap();
extern kal_bool nvram_write_bitmap_into_file();
extern kal_bool nvram_util_lid_bitmap_check(kal_uint8 *bitmap, kal_uint32 lid);
extern void nvram_util_lid_bimtap_set(kal_uint8 *bitmap, kal_uint32 lid);
extern kal_bool nvram_delete_bitmap_file();

#endif
#ifdef __NVRAM_INIT_LID_BUFFER__
extern void nvram_init_lid_buffer_prepare(void);
extern nvram_errno_enum nvram_init_lid_buffer_read(nvram_lid_enum LID, kal_uint32 rec_index, kal_uint16 rec_amount, kal_uint8 *buffer, kal_uint32 buffer_size);
extern nvram_errno_enum nvram_init_lid_buffer_write(nvram_lid_enum LID, kal_uint32 rec_index, kal_uint16 rec_amount, kal_uint8 *buffer, kal_uint32 buffer_size);
extern void nvram_init_lid_buffer_writeback(void);
#endif

#if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
extern kal_int32 nvram_get_structure_chksum_index(nvram_lid_enum LID);
extern kal_int32 nvram_get_defval_chksum_index(nvram_lid_enum LID);
#endif


#endif /* NVRAM_UTIL_H */

