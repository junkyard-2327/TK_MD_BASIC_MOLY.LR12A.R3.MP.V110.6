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
 *   task_config.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This header file contains the declarations of the task
 *   configuration module.
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*********************************************************************
   (C) _____ (year of first publication) Sasken communication
   Technologies Limited, All rights reserved.
*   This file provides a template for .c files. This space
*   should be used to describe the file contents
*   Component-specific prefix : xxxx
*********************************************************************/

#ifndef _TASK_CONFIG_H
#define _TASK_CONFIG_H

#include "kal_general_types.h"
#include "kal_public_defs.h"

#include "stack_config.h"
#include "stack_types.h"

#include "lcd_ip_cqueue.h"
#include "module_taskid_range.h"
/*******************************************************************************
 * Constant and data type definition
 *******************************************************************************/
#define INT_Q_LEN    15
/* task internal queue data type */

/*************************************************************************
* Macros Without Parameters
 *************************************************************************/
/* Modify from 8 to ((RPS_TOTAL_STACK_MODULES+31)/32), because there are more modules now */
/* and maximum possible task number is 255 according to priority convention */
#define RPS_MASK_ARRAY_SIZE         ((RPS_TOTAL_STACK_MODULES+31)/32)
#define RPS_ALLOCATE_ILM_MASK       31
#define RPS_ALLOCATE_ILM_SHIFT      5

typedef LCD_IP_CQUEUE(ilm_struct, 1) int_q_type;

/*************************************************************************
* STRUCT
*  task_info_struct
*
* DESCRIPTION
*  The structure defines component task information at execution time
*
* FIELDS
*  task_name_ptr  -  pointer to task name
*  task_qname_ptr;   -  pointer to task external queue name
*  task_priority  -  task priority
*   task_stack_size  -  task stack size
*  task_id        -  created task entity id
*  task_ext_qid   -  created task external queue id
*  task_int_qid_ptr  -  pointer to created task internal queue
*  task_entry_func   -  task's entry function
*  task_cfg_func  -  task's configuration handler
*  task_init_func -  task's initialization handler
*  task_reset_func   -  task's reset handler
*  task_end_func  -  task's termination handler
*  task_ext_qsize -  task's external queue size
*
* GLOBALS AFFECTED
*
*************************************************************************/
typedef struct {
   kal_char             *task_name_ptr;
   kal_char             *task_qname_ptr;
   kal_uint32           task_priority;
   kal_uint32           task_stack_size;
   kal_taskid           task_id;
   kal_msgqid           task_ext_qid;
   int_q_type           *task_int_qid_ptr;
   kal_task_func_ptr    task_entry_func;
   task_init_func_ptr   task_init_func;
   task_reset_func_ptr  task_reset_func;
   kal_uint8            task_ext_qsize;
   kal_uint8			task_int_qsize;
#ifdef __SYS_INTERN_RAM__
   kal_bool          task_internal_ram_stack;
#endif /* __SYS_INTERN_RAM__ */
   kal_affinity_group   task_affinity_attribute;
   kal_task_group_id    task_affinity_group_id;
   kal_bool             task_affinity_dynamic;
} task_info_struct;


/*******************************************************************************
 * function macro definition
 *******************************************************************************/
//#define stack_is_extq_created(module_id) ((task_info_g[mod_task_g[(module_id)]].task_ext_qid != KAL_NILQ_ID)? KAL_TRUE: KAL_FALSE)

/*******************************************************************************
 * Exported global datas
 *******************************************************************************/
extern task_info_struct    *task_info_g;


extern kal_bool stack_init_comp_info(void);
extern kal_bool stack_init_module_info(void);

#undef task_name
#undef task_duplicated_c0c1_name
#undef task_duplicated_c0c2_name
#undef task_duplicated_c0c3_name
#undef task_duplicated_c1c2_name
#undef task_duplicated_c1c3_name
#undef task_duplicated_c2c3_name
#undef task_duplicated_c0c1c2_name
#undef task_duplicated_c1c2c3_name
#undef task_duplicated_c0c1c2c3_name
#undef task_queue_name
#undef task_priority
#undef task_stack_size
#undef null_task_create_entry
#undef compatible_code
#undef task_create_function
#undef task_stack_internalRAM
#undef task_external_queue_size
#undef task_internal_queue_size
#undef task_boot_mode
#undef task_affinity_group
#undef task_affinity_group_id
#undef MODULE_ID_MAP_TO_NULL_TASK_CAN_ALLOCATE_ILM
#undef MODULE_ID_FOR_PRINT_TRACE
#undef task_index
#undef task_duplicated_c0c1_index
#undef task_duplicated_c0c2_index
#undef task_duplicated_c0c3_index
#undef task_duplicated_c1c2_index
#undef task_duplicated_c1c3_index
#undef task_duplicated_c2c3_index
#undef task_duplicated_c0c1c2_index
#undef task_duplicated_c1c2c3_index
#undef task_duplicated_c0c1c2c3_index
#undef task_module_map
#undef task_duplicated_c0c1_module_map
#undef task_duplicated_c0c2_module_map
#undef task_duplicated_c0c3_module_map
#undef task_duplicated_c1c2_module_map
#undef task_duplicated_c1c3_module_map
#undef task_duplicated_c2c3_module_map
#undef task_duplicated_c0c1c2_module_map
#undef task_duplicated_c1c2c3_module_map
#undef task_duplicated_c0c1c2c3_module_map


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
#define task_affinity_group_id(p1)
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

#undef task_index
#undef task_duplicated_c0c1_index
#undef task_duplicated_c0c2_index
#undef task_duplicated_c0c3_index
#undef task_duplicated_c1c2_index
#undef task_duplicated_c1c3_index
#undef task_duplicated_c2c3_index
#undef task_duplicated_c0c1c2_index
#undef task_duplicated_c1c2c3_index
#undef task_duplicated_c0c1c2c3_index
#define task_index(p1) p1, 
#define task_duplicated_c0c1_index(p1) p1, p1##_CORE0 = p1, p1##_CORE1,
#define task_duplicated_c0c2_index(p1) p1, p1##_CORE0 = p1, p1##_CORE2,
#define task_duplicated_c0c3_index(p1) p1, p1##_CORE0 = p1, p1##_CORE3,
#define task_duplicated_c1c2_index(p1) p1, p1##_CORE1 = p1, p1##_CORE2,
#define task_duplicated_c1c3_index(p1) p1, p1##_CORE1 = p1, p1##_CORE3,
#define task_duplicated_c2c3_index(p1) p1, p1##_CORE2 = p1, p1##_CORE3,
#define task_duplicated_c0c1c2_index(p1) p1, p1##_CORE0 = p1, p1##_CORE1, p1##_CORE2,
#define task_duplicated_c1c2c3_index(p1) p1, p1##_CORE1 = p1, p1##_CORE2, p1##_CORE3,
#define task_duplicated_c0c1c2c3_index(p1) p1, p1##_CORE0 = p1, p1##_CORE1, p1##_CORE2, p1##_CORE3,
typedef enum {
	#include "srv_task_config.h"
	#include "modem_2g3g_task_config.h"
	#include "modem_4g_task_config.h"
	#include "middleWare_task_config.h"
	#include "drv_task_config.h"

    /*Total number of build time tasks*/
    //RPS_TOTAL_STACK_TASKS,
   
    RPS_TOTAL_STACK_TASKS = (TASK_ID_SRV_CODE_TAIL + 1
                                + TASK_ID_MODEM_2G3G_CODE_TAIL - TASK_ID_MODEM_2G3G_CODE_BEGIN + 1
                                + TASK_ID_MODEM_4G_CODE_TAIL - TASK_ID_MODEM_4G_CODE_BEGIN + 1
                                + TASK_ID_MW_CODE_TAIL - TASK_ID_MW_CODE_BEGIN + 1 
                                + TASK_ID_DRV_CODE_TAIL - TASK_ID_DRV_CODE_BEGIN + 1),
   

}task_indx_type;


#undef task_name
#undef task_duplicated_c0c1_name
#undef task_duplicated_c0c2_name
#undef task_duplicated_c0c3_name
#undef task_duplicated_c1c2_name
#undef task_duplicated_c1c3_name
#undef task_duplicated_c2c3_name
#undef task_duplicated_c0c1c2_name
#undef task_duplicated_c1c2c3_name
#undef task_duplicated_c0c1c2c3_name
#undef task_queue_name
#undef task_priority
#undef task_stack_size
#undef null_task_create_entry
#undef compatible_code
#undef task_create_function
#undef task_stack_internalRAM
#undef task_external_queue_size
#undef task_internal_queue_size
#undef task_boot_mode
#undef task_affinity_group
#undef task_affinity_group_id
#undef MODULE_ID_MAP_TO_NULL_TASK_CAN_ALLOCATE_ILM
#undef MODULE_ID_FOR_PRINT_TRACE
#undef task_index
#undef task_duplicated_c0c1_index
#undef task_duplicated_c0c2_index
#undef task_duplicated_c0c3_index
#undef task_duplicated_c1c2_index
#undef task_duplicated_c1c3_index
#undef task_duplicated_c2c3_index
#undef task_duplicated_c0c1c2_index
#undef task_duplicated_c1c2c3_index
#undef task_duplicated_c0c1c2c3_index
#undef task_module_map
#undef task_duplicated_c0c1_module_map
#undef task_duplicated_c0c2_module_map
#undef task_duplicated_c0c3_module_map
#undef task_duplicated_c1c2_module_map
#undef task_duplicated_c1c3_module_map
#undef task_duplicated_c2c3_module_map
#undef task_duplicated_c0c1c2_module_map
#undef task_duplicated_c1c2c3_module_map
#undef task_duplicated_c0c1c2c3_module_map

#endif   /* End of file 'task_config.h'  */


