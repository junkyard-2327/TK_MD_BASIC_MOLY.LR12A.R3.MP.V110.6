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
 * nvram_defs.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file contains definitions used by NVRAM task.
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
 *
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

#ifndef NVRAM_DEFS_H
#define NVRAM_DEFS_H

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "kal_general_types.h"
#include "kal_public_defs.h"

/***************************************************************
 *  Macro and Definition used for lid table
 **********************************************************************/

/*****************************************************************************
 *  Include
 ****************************************************************************/
#ifndef NVRAM_NOT_PRESENT
#include "nvram_lid_statistics.h"
#endif
#include "nvram_enums.h"
#include "mmss_def.h"

//***************************************************************************
// -- Custpack configuration --
//***************************************************************************
#ifdef __MULTIPLE_BINARY_FILES__
#if !defined(__L1_STANDALONE__)
    #define __NVRAM_SUPPORT_CUSTPACK__
#endif
#endif

/*****************************************************************************
 *  Define
 ****************************************************************************/
#if defined (__NVRAM_UT_TEST__)

extern kal_taskid nvram_test_task1_id;
extern kal_uint32 nvram_ut_assert_flag;
#define NVRAM_EXT_ASSERT(expr, e1, e2, e3)  do{\
                                                if(nvram_test_task1_id == kal_get_current_task() && !(expr)) {\
                                                    nvram_ut_assert_flag = e2;\
                                                    return NVRAM_ERRNO_FAIL;\
                                                }\
                                                else {\
                                                    EXT_ASSERT(expr, e1, e2, e3);\
                                                }\
                                            }while(0)

/*BOOT_TRACE_XXXX is used for nvram_init() flow trace*/                                                 
#define BOOT_TRACE_DRV_UNFORMATTED          0x01
#define BOOT_TRACE_FOLDER_NOT_READY         0x02
#define BOOT_TRACE_DRIVE_BROKEN_VNOERR      0x04
#define BOOT_TRACE_READ_SYS_LID_FAIL        0x08
#define BOOT_TRACE_CLEAN_BOOT               0x10
#define BOOT_TRACE_SW_VERNO_COMPATIBLE      0x20
#define BOOT_TRACE_SW_VERNO_CONFLICT        0x40

#else
#define NVRAM_EXT_ASSERT(expr, e1, e2, e3)  EXT_ASSERT(expr, e1, e2, e3)
#endif


#define NVRAM_MAX_PATH_LEN      36
#define FILE_PREFIX_LEN         4
#define FILE_VERNO_LEN          3
#define FILE_RESERVED_LEN       9
#define NVRAM_FILE_LEN          (FILE_PREFIX_LEN + 1 + FILE_VERNO_LEN)
#define NVRAM_MAX_DESC_LEN      20

#define NVRAM_EF_RESERVED_LID 0xFFFE

#define VER_LID(lid) lid##_VERNO lid
#ifndef NVRAM_AUTO_GEN
#define VER(lid)  lid##_VERNO
#else
#define VER(lid)  lid##_VERNO,#lid
#endif

#define NVRAM_EF_ZERO_DEFAULT_ZIP NVRAM_EF_ZERO_DEFAULT
#define NVRAM_EF_FF_DEFAULT_ZIP NVRAM_EF_FF_DEFAULT


#ifndef NVRAM_AUTO_GEN
    #define NVRAM_NORMAL(X) (kal_uint8 const *)X
    #define NVRAM_NORMAL_NOT_GEN(X) (kal_uint8 const *)X

    #if !defined(__NVRAM_SUPPORT_CUSTPACK__) && !defined(__L1_STANDALONE__)
        #define NVRAM_CUSTPACK(X) NVRAM_NORMAL(X)
    #else
        #define NVRAM_CUSTPACK(X) NVRAM_EF_ZERO_DEFAULT
    #endif  /* __MMI_FMI__ */

    #define NVRAM_SECUPACK(X) NVRAM_EF_ZERO_DEFAULT
    #define NVRAM_DEFAULT_FUNC(X) (kal_uint8 const*)X
#else
    #define NVRAM_NORMAL(X) #X, (kal_uint8 const *)X
    #define NVRAM_NORMAL_NOT_GEN(X) #X,NVRAM_EF_ZERO_DEFAULT
    #define NVRAM_CUSTPACK(X) #X,NVRAM_EF_SPECIAL_DEFAULT
    #define NVRAM_SECUPACK(X) #X,(kal_uint8 const *)X
    #define NVRAM_DEFAULT_FUNC(X) #X,NVRAM_EF_SPECIAL_DEFAULT
#endif

#define NVRAM_LOCK_PATTERN_LOCKED         "_NVRAM_LOCK_YES_" //need 16b align
#define NVRAM_LOCK_PATTERN_UNLOCKED       "__NVRAM_LOCK_NO_"

#define NVRAM_CHKSUM_SIZE 8
#define NVRAM_CHKSUM_SIZE_2B sizeof(kal_uint16)

/* AES 16 byte alignment, must be power of 2*/
#define NVRAM_MSP_ALIGNMENT 16
#define NVRAM_MSP_ALIGNMENT_REMAINDER(x) ((~(x) + 1) & (NVRAM_MSP_ALIGNMENT - 1))
#define NVRAM_MSP_ALIGNMENT_FLOOR(x) ((x) & (~(NVRAM_MSP_ALIGNMENT-1)))
#define NVRAM_MSP_ALIGNMENT_CEILING(x) (((x) + NVRAM_MSP_ALIGNMENT - 1) & ~(NVRAM_MSP_ALIGNMENT-1))

#define NVRAM_MSP_DECRYPT 0
#define NVRAM_MSP_ENCRYPT 1

#define NVRAM_APP_RESERVED 0

/* Attributes of a Logical Data Item, predefined. */
typedef kal_uint32 nvram_attr_enum;
#define NVRAM_ATTR_AVERAGE          0x00000000UL
#define NVRAM_ATTR_MULTI_DEFAULT    0x00000001UL
#define NVRAM_ATTR_WRITEPROTECT     0x00000002UL
#define NVRAM_ATTR_MULTIPLE         0x00000004UL
#define NVRAM_ATTR_CONFIDENTIAL     0x00000008UL
#define NVRAM_ATTR_MULTIREC_READ    0x00000010UL
#define NVRAM_ATTR_MSP              0x00000020UL /* Protected by MTK Secure Platform */
#define NVRAM_ATTR_OTA_RESET        0x00000040UL
#define NVRAM_ATTR_GEN_DEFAULT      0x00000080UL
#define NVRAM_ATTR_RING             0x00000100UL
#define NVRAM_ATTR_PACKAGE          0x00000200UL /* NVRAM Reserved.LID will package in file */
#define NVRAM_ATTR_BACKUP_FAT       0x00000400UL /* Put a copy into backup partition, and the format is FAT */
#define NVRAM_ATTR_BACKUP_RAW       0x00000800UL /* Put a copy into backup partition, and the format is Raw data */
#define NVRAM_ATTR_RESERVE_BACKWARD 0x00001000UL
#define NVRAM_ATTR_FAULT_ASSERT     0x00002000UL
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#define NVRAM_ATTR_COMMITTED        0x00004000UL  /* Add for SP, add FS_COMMITTED while opening file */
#define NVRAM_ATTR_RAW_DATA         0x00008000UL

#define NVRAM_ATTR_ALL              0xFFFFFFFFUL


typedef kal_uint32 nvram_category_enum;
/* 
 * byte 0: NVRAM internal or Not 
 */
#define NVRAM_CATEGORY_USER             0x0000
#define NVRAM_CATEGORY_INTERNAL         0x0001

/* 
 * byte 1: storage information 
 */
#define NVRAM_CATEGORY_BACKUP_SDS       0x0010
#define NVRAM_CATEGORY_OTP              0x0020
#define NVRAM_CATEGORY_CUSTOM_DISK      0x0040 /* Used by custom, it means the data is put into another partition */

/* Used by custom, NVRAM will put custom's sensitive data into another folder
   if multiple folder feature turn on. Attribute of the data item in this category
   must with NVRAM_ATTR_CONFIDENTIAL | NVRAM_ATTR_MULTIPLE */
#define NVRAM_CATEGORY_CUSTOM_SENSITIVE 0x0080

/* 
 * byte 2: default value information 
 */
#define NVRAM_CATEGORY_CUSTPACK         0x0100
#define NVRAM_CATEGORY_SECUPACK         0x0200
#define NVRAM_CATEGORY_FUNC_DEFAULT     0x0400

/* 
 * byte 3: factory tool/Smartphone Nvram related information 
 */
#if (defined(CURR_MODULE) && (CURR_MODULE == MOD_NVRAM)) || defined(NVRAM_AUTO_GEN) || defined(NVRAM_LID_SPLIT) || defined(__LTE_RAT__)
#define NVRAM_CATEGORY_CALIBRAT         0x1000
#define NVRAM_CATEGORY_IMPORTANT        0x2000
#define NVRAM_CATEGORY_IMPORTANT_L4     0x4000
#define NVRAM_CATEGORY_IMPORTANT_L1		0x8000
#else
#define NVRAM_CATEGORY_CALIBRAT         "NVRAM_CATEGORY_CALIBRAT is not able to use here! Please contact META tool owner for help."
#define NVRAM_CATEGORY_IMPORTANT        "NVRAM_CATEGORY_IMPORTANT is not able to use here! Please contact META tool owner for help."
#define NVRAM_CATEGORY_IMPORTANT_L4     "NVRAM_CATEGORY_IMPORTANT_L4 is not able to use here! Please contact META tool owner for help."
#define NVRAM_CATEGORY_IMPORTANT_L1		"NVRAM_CATEGORY_IMPORTANT_L1 is not able to use here! Please contact META tool owner for help."
#endif

#define NVRAM_CATEGORY_ALL              0xFFFF
#define NVRAM_CATEGORY_RESERVED         0x80000000UL /* for __NVRAM_READ_RESERVED_FILE__ feature*/

typedef enum
{
    NVRAM_CLEAN_FOLDER_NONE = 0x00,
    NVRAM_CLEAN_FOLDER_SYSTEM = 0x01,       //custom_nvram_config.c
    NVRAM_CLEAN_FOLDER_FACTORY = 0x02,
    NVRAM_CLEAN_FOLDER_BRANCH = 0x04,
    NVRAM_CLEAN_FOLDER_ALL = 0xFF
} nvram_clean_folder_enum;
/*****************************************************************************
 *  Typedef
 ****************************************************************************/

typedef void (*nvram_query_deault_func)(nvram_lid_enum file_id, kal_uint8 *buffer, kal_uint16 buffer_size);

#ifndef NVRAM_AUTO_GEN

  #if !defined(_MSC_VER) || defined(GEN_FOR_PC)
    typedef struct
  #else
    #ifdef L1_SIM
      typedef struct
    #else
      typedef struct __declspec(align(32))
    #endif    
  #endif    
    {
        nvram_lid_enum          LID;                                /* Logical Data Item ID, U16 */                            
        kal_uint16              total_records;                      /* Number of records */
        kal_uint32              size;                               /* Size of one record. < sizeof(control buffer) */                           
        kal_uint8 const*        default_value;                      /* Hardcoded default */
        nvram_category_enum     category;                           /* U32 */                       
        nvram_attr_enum         attr;                               /* U32 */                           
        kal_char                fileprefix[FILE_PREFIX_LEN + 1];
        kal_char                fileverno[FILE_VERNO_LEN + 1];  
        kal_char*               description;                    
    } nvram_ltable_entry_struct;
#else
    typedef struct
    {
        nvram_lid_enum          LID;                          
        kal_uint16              total_records;                  
        kal_uint32              size;                           
        kal_char*               str_default_value;              
        kal_uint8*              default_value;                  
        nvram_category_enum     category;                       
        nvram_attr_enum         attr;                           
        kal_char                fileprefix[FILE_PREFIX_LEN + 1];
        kal_char                fileverno[FILE_VERNO_LEN + 1];  
        kal_char*               str_LID;                        
        kal_char*               description;                    
    } nvram_ltable_entry_struct;
	
	#ifdef NVRAM_AUTO_GEN // For nvram_auto_gen target build
    typedef struct
    {
        nvram_lid_enum          LID;
        kal_uint16              total_records;
        kal_uint32              size;
        kal_uint32              str_default_value; //kal_char*
        kal_uint32              default_value; //kal_uint8 const*
        nvram_category_enum     category;
        nvram_attr_enum         attr;
        kal_char                fileprefix[FILE_PREFIX_LEN + 1];
        kal_char                fileverno[FILE_VERNO_LEN + 1];
        kal_uint32              str_LID; //kal_char*
        kal_uint32              description; //kal_char*
    } nvram_ltable_entry_struct_target;
	#endif
#endif

typedef struct
{
    nvram_ltable_entry_struct *ltable;
    kal_uint32 size;
}nvram_ltable_tbl_struct;


#ifdef NVRAM_AUTO_GEN
#define SYS_CACHE_ENTRY(ENUM_ID, APP_ID, RESTORE, DESCRIPTION, VALUE1, VALUE2, VALUE3, VALUE4, VALUE5, VALUE6, VALUE7, VALUE8)   \
        {                               \
            ENUM_ID,                    \
            APP_ID,                     \
            RESTORE,                    \
            VALUE1,                     \
            VALUE2,                     \
            VALUE3,                     \
            VALUE4,                     \
            VALUE5,                     \
            VALUE6,                     \
            VALUE7,                     \
            VALUE8,                     \
            #ENUM_ID,                   \
            #APP_ID,                    \
            #VALUE1,                    \
            #VALUE2,                    \
            #VALUE3,                    \
            #VALUE4,                    \
            #VALUE5,                    \
            #VALUE6,                    \
            #VALUE7,                    \
            #VALUE8,                    \
            DESCRIPTION                 \
        }

typedef struct
{
    kal_uint16   id;        /* nvram_sys_cache_enum */
    nvram_app_id_enum   app_id;    /* nvram_restore_app_id_enum */
    kal_bool    restore;
    kal_uint8   value1;
    kal_uint8   value2;
    kal_uint8   value3;
    kal_uint8   value4;
    kal_uint8   value5;
    kal_uint8   value6;
    kal_uint8   value7;
    kal_uint8   value8;
    kal_char    *id_str;
    kal_char    *app_id_str;
    kal_char    *value1_str;
    kal_char    *value2_str;
    kal_char    *value3_str;
    kal_char    *value4_str;
    kal_char    *value5_str;
    kal_char    *value6_str;
    kal_char    *value7_str;
    kal_char    *value8_str;
    kal_char    *description;
}nvram_sys_cache_entry;
#endif

#if defined(NVRAM_AUTO_GEN)
#define ltable_entry_struct nvram_ltable_entry_struct __attribute__((aligned(4))) __attribute__((__section__("_nvram_ltable")))
#define NVRAM_LIG_GRP_INIT(X)

#elif defined(__MTK_TARGET__)
#define ltable_entry_struct nvram_ltable_entry_struct __attribute__((section("_nvram_ltable")))
#define NVRAM_LIG_GRP_INIT(X)   {\
                                    extern nvram_ltable_entry_struct X##[];\
                                    void *X##_p = (void *)&X;\
                                }

#else
#if defined(_MSC_VER) && (_MSC_VER >= 1500)
#define ltable_entry_struct __pragma(section("_nvram_ltable_content")) \
                            nvram_ltable_entry_struct __declspec(allocate("_nvram_ltable_content"))
#elif defined(__GNUC__)
#define ltable_entry_struct nvram_ltable_entry_struct __attribute__((section("_nvram_ltable_content")))
#endif
#define NVRAM_LIG_GRP_INIT(X)   extern nvram_ltable_entry_struct X##[];\
                                static void *X##_p = (void *)&X;

#endif


#ifndef NVRAM_CUSTPACK_TOTAL
#define NVRAM_CUSTPACK_TOTAL 1
#endif

typedef struct
{
    kal_uint8 const* version;
    void const* custpack_default[NVRAM_CUSTPACK_TOTAL];
}custpack_nvram_header;

typedef struct
{
    nvram_clean_folder_enum   category;
    kal_wchar    *folder_path;
} nvram_clean_folder_entry;

typedef struct
{
    nvram_lid_enum LID;
    kal_bool (*get_data)(kal_uint8 *buffer, kal_uint16 buf_size);
}nvram_shutdown_cb_struct;

typedef struct
{
    nvram_lid_enum LID;
    kal_uint32 size;                /* Size of one record. < sizeof(control buffer) */
    kal_uint16 total_records;       /* Number of records */
    kal_uint8 const *default_value;
    kal_bool is_multi_default;
} nvram_cat_replace_setting;

//#if defined(__NVRAM_FS_OPERATION_COMPACT__)
typedef struct NVRAM_FS_PARAM_COMP
{
    kal_uint32  opid_map;   //operate id
    kal_uint32  ret[2];     //first bitmap second is error code
    kal_uint32  Flag;       //fs_open [in] para
    kal_uint32  *FileSize;  //fs_getfilesize [out] param
    kal_int32   Offset;     //fs_seek [in] param
    kal_int32   Whence;     //fs_seek [in] param
    void        *DataPtr;   //fs_read [out] param
    kal_uint32  Length;     //fs_read [in]  param
    kal_uint32  *Read;      //fs_read [out] param
} NVRAM_FS_PARAM_CMPT_T;

#define NVRAM_FS_CMPT_OPEN          ((1) << 0)
#define NVRAM_FS_CMPT_GETFILESIZE   ((1) << 1)
#define NVRAM_FS_CMPT_SEEK          ((1) << 2)
#define NVRAM_FS_CMPT_READ          ((1) << 3)
#define NVRAM_FS_CMPT_CLOSE         ((1) << 4)
//#endif
#define RST_CHKSUM_SIZE  16
typedef struct
{
    kal_char header[4];
    nvram_lid_enum LID;
    kal_uint16  total_records;
    kal_uint32  record_size;
    kal_uint32  ldi_attr;
    kal_uint32  ldi_category;
    kal_uint8 defval_chkrst_h[RST_CHKSUM_SIZE-6];
    kal_uint16  checksum;
} nvram_ldi_ota_header;
#define NVRAM_LDI_OTA_HEADER_SIZE  32

#if defined(__MTK_TARGET__)
  #define NVRAM_LTABLE_END
#else
  #define NVRAM_LTABLE_END 0
#endif

#define NWSEL_HISTORY_TABLE_SIZE 16
#define NVRAM_MAX_IMSI_LEN 9


typedef struct
{
    kal_uint32  last_write_taskID;
    kal_uint8  defval_chkrst_l[6];
    kal_uint16  last_write_time;
    kal_uint32  write_times;
    kal_uint8  struct_chkrst[RST_CHKSUM_SIZE];
} nvram_ldi_debug_header;
#define NVRAM_LDI_DEBUG_HEADER_SIZE  32
#define NVRAM_LDI_HEADER_SIZE  (NVRAM_LDI_OTA_HEADER_SIZE + NVRAM_LDI_DEBUG_HEADER_SIZE)

typedef struct
{
    nvram_ldi_ota_header nv_ota_header;
    nvram_ldi_debug_header nv_dbg_header;
} nvram_ldi_header;

typedef struct
{
    nvram_lid_enum LID;
    kal_uint8 chksum[16];
}checksum_reset_struct;


typedef enum
{
    LDI_HEADER_OTA_SECTION = 0x01,
    LDI_HEADER_DBG_SECTION = 0x02,
    LDI_HEADER_ALL_SECTION = 0x03
} nvram_header_section_enum;

#if defined(__MTK_TARGET__)
  #define NVRAM_LTABLE_END
#else
  #define NVRAM_LTABLE_END 0
#endif

#define NVRAM_READ_GPT_TIMEOUT 2000 //*10ms, 2000 stands 20s
#define NVRAM_WRITE_GPT_TIMEOUT 2000 //20s
#define MAX_TRACE_NUM   10

typedef struct
{
    kal_uint32 LID;
    kal_uint32 access_way;
    kal_uint32 start_time;
    kal_uint32 end_time;
    kal_uint32 ret_value;
}trace_info;

typedef struct
{
    kal_uint32 read_trace_index;    //record which index is the last updated
    kal_uint32 write_trace_index;
    trace_info read_trace[MAX_TRACE_NUM];  //only record the info of last 10 times access
    trace_info write_trace[MAX_TRACE_NUM];
    
}nvram_access_trace_information;

#define NWSEL_HISTORY_TABLE_SIZE 16
#define NVRAM_MAX_IMSI_LEN 9


/*****************************************************************************
 *  Global Function
 ****************************************************************************/

extern const kal_uint8 NVRAM_EF_ZERO_DEFAULT[];
extern const kal_uint8 NVRAM_EF_FF_DEFAULT[];
extern const kal_uint8 NVRAM_EF_SPECIAL_DEFAULT[];

#ifdef __cplusplus
}
#endif 

#endif /* NVRAM_DEFS_H */ 

