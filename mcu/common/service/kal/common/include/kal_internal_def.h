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
 *   kal_internal_api.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This header file is used to define internal api, do not export!
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __KAL_INTERNAL_DEFINATIONS__
#define __KAL_INTERNAL_DEFINATIONS__

#include "srv_modid.h"
#include "drv_modid.h"
#include "modem_2g3g_modid.h"
#include "middleware_modid.h"
#include "hisr_modid.h"

#undef TASK_PRIORITY_MACRO

#undef SRV_TASK_CONFIG
#undef MODEM_2G3G_TASK_CONFIG
#undef MIDDLEWARE_TASK_CONFIG
#undef DRIVER_TASK_CONFIG

#define SRV_TASK_CONFIG
#define MODEM_2G3G_TASK_CONFIG
#define MIDDLEWARE_TASK_CONFIG
#define DRIVER_TASK_CONFIG

#define DEBUG_KAL_INTERNAL
#if defined(DEBUG_KAL)
#define DEBUG_DEADLOCKS
#endif

#undef task_index

/*define all macros as empty*/
#define task_name(p1)
#define task_duplicated_c0c1_name(p1)
#define task_duplicated_c0c2_name(p1)
#define task_duplicated_c0c3_name(p1)
#define task_duplicated_c1c2_name(p1)
#define task_duplicated_c1c3_name(p1)
#define task_duplicated_c2c3_name(p1)
#define task_duplicated_c0c1c2_name(p1)
#define task_duplicated_c1c2c3_name(p1)
#define task_duplicated_c0c1c2c3_name(p1)
#define task_queue_name(p1)
#define task_priority(p1,p2)
#define task_stack_size(p1)
#define null_task_create_entry(p1)
#define compatible_code(p1)
#define task_create_function(p1)
#define task_stack_internalRAM(p1)
#define task_external_queue_size(p1)
#define task_internal_queue_size(p1)
#define task_boot_mode(p1)
#define task_affinity_group(p1)
#define MODULE_ID_MAP_TO_NULL_TASK_CAN_ALLOCATE_ILM(p1)
#define MODULE_ID_FOR_PRINT_TRACE(p1)
#define task_module_map(p1,p2)
#define task_duplicated_c0c1_module_map(p1,p2)
#define task_duplicated_c0c2_module_map(p1,p2)
#define task_duplicated_c0c3_module_map(p1,p2)
#define task_duplicated_c1c2_module_map(p1,p2)
#define task_duplicated_c1c3_module_map(p1,p2)
#define task_duplicated_c2c3_module_map(p1,p2)
#define task_duplicated_c0c1c2_module_map(p1,p2)
#define task_duplicated_c1c2c3_module_map(p1,p2)
#define task_duplicated_c0c1c2c3_module_map(p1,p2)
#define task_index(p1)
#define task_duplicated_c0c1_index(p1)
#define task_duplicated_c0c2_index(p1)
#define task_duplicated_c0c3_index(p1)
#define task_duplicated_c1c2_index(p1)
#define task_duplicated_c1c3_index(p1)
#define task_duplicated_c2c3_index(p1)
#define task_duplicated_c0c1c2_index(p1)
#define task_duplicated_c1c2c3_index(p1)
#define task_duplicated_c0c1c2c3_index(p1)

typedef enum {

    LAST_MOD_ID = ( MODULE_TAG_SRV_TAIL - MOD_ID_SRV_CODE_BEGIN + 1 +
                    MODULE_TAG_MODEM_DUMMY_TAIL - MOD_MODEM_DUMMY_BEGIN + 1 +
                    MODULE_TAG_MODEM_4G_DUMMY_TAIL - MOD_MODEM_4G_DUMMY_BEGIN + 1 +
                    MODULE_TAG_MW_DUMMY_TAIL - MOD_MW_DUMMY_BEGIN + 1 + 
                    MODULE_TAG_DRV_DUMMY_TAIL - MOD_DRV_DUMMY_BEGIN + 1) + (2 + KAL_MAX_NUM_HISRS),
	
	RPS_TOTAL_STACK_MODULES = LAST_MOD_ID,
	MOD_LIBRARY_BEGIN = 1400,
	MOD_BOUNDARY,
	MAX_MODULE_ID = 1500

}module_type_t;


/*************************************************************************
 * module type boundary check
 * Don't use this array in your code
 *************************************************************************/
typedef unsigned int module_id_boundary_check[MAX_MODULE_ID - MOD_BOUNDARY];
typedef unsigned int total_stack_modules_boundary_check[MOD_LIBRARY_BEGIN + 1 - RPS_TOTAL_STACK_MODULES]; 
/************************************************************************/

/* unmark this defination would use static memory for default prioriry node*/
//#define KAL_PRIORITY_NODE_BY_CTRL_BUFF 1

 /*******************************************************************************
 * Category 9 : Error Handling
 *******************************************************************************/
typedef struct
{
    kal_uint32 type;
    kal_uint32 param1;
    kal_uint32 param2;
    kal_uint32 param3;
    kal_uint32 param4;
    kal_uint32 param5;
    kal_uint32 param6;
    kal_uint32 param7;
    kal_uint32 param8;
    kal_uint32 param9;
    kal_uint32 param10;
} kal_error_param;

typedef struct
{
    kal_uint32 type;
    kal_uint32 expr;
    kal_uint32 file;
    kal_uint32 line;
    kal_uint32 offendingPC;  
    kal_uint32 ext1; 
    kal_uint32 ext2; 
    kal_uint32 ext3;
    kal_uint32 dump_param;
    kal_uint32 ext;
    kal_uint32 custom_param;
} kal_assert_param;

typedef struct
{
    kal_uint32 type;
    kal_uint32 err_code;
    kal_uint32 os_err_code;
    kal_uint32 offendingPC;
    kal_uint32 regs;
    kal_uint32 param5; /* cpu triggered = 0xCCCCCCCC */
    kal_uint32 param6; /* abnormal reset = *os_err_code */
    kal_uint32 param7; /* abnormal reset = *(os_err_code4) */
    kal_uint32 param8;
    kal_uint32 param9;
    kal_uint32 param10; /* CPU_DRIVEN_DIV_BY_0_FAILED = UDIV or SDIV */
} kal_fatalerr_param;

typedef enum
{
    EX_ASSERT,
    EX_FATALERR,
    EX_CC_TRIGGERED_ERR,
    EX_CPU_TRIGGERED_EXCEPTION,
    EX_DC_OFFSHOOT,    /* dependent core offshoot */
    EX_HW_OFFSHOOT,    /* other hw access offshoot */
    EX_INT_OFFSHOOT,   
} ex_category;

/* opaque type for internal protect identity */
typedef struct
{
    kal_uint8 unused;
} kal_protectid_s;

typedef kal_protectid_s* kal_protectid;

#define KAL_NILPROTECT_ID     (kal_protectid)NULL
//#define KAL_HISR_STACK_SHARING 





#endif /* __KAL_INTERNAL_DEFINATIONS__  */
