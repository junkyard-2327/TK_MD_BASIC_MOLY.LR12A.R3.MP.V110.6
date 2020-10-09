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
 *   task_config.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file contains the source code for configuring the
 *   data structures that hold task configuration info.
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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

/*************************************************************************
* Include Statements
 *************************************************************************/
#include "kal_public_api.h"
#include "task_config.h"
#include "syscomp_config.h"
//#include "dcl.h"

#if defined(__ESL_COSIM_LTE__)
#include "dhl_trace.h"
#include "drv_hsl.h"
#endif /* __ESL_COSIM_LTE__ */

#ifdef __MULTI_BOOT__
#include "multiboot_config.h"
//#include "fctycomp_config.h"
#endif /* __MULTI_BOOT__ */

#if !defined(KAL_PRIORITY_NODE_BY_CTRL_BUFF) && defined(__MTK_TARGET__)
#include "sys_mem_size.h"
#endif

#include "kal_internal_api.h"
#include "kal_internal_def.h"
#include "cache_sw.h"
#include "cpu.h"

/*************************************************************************
* Definitions Of Exported Globals
 *************************************************************************/
task_info_struct *task_info_g;
kal_uint32 KALTotalTasks;
kal_uint32 KALTotalModules;
kal_uint32 taskInitStartTime[RPS_TOTAL_STACK_TASKS];
kal_uint32 taskInitFinishTime[RPS_TOTAL_STACK_TASKS];
kal_uint32 taskInitResourceIndex = 0xFF;

eventid task_affinity_evt[RPS_TOTAL_STACK_TASKS];
eventid hisr_affinity_evt[RPS_TOTAL_STACK_HISRS];
kal_bool hisr_affinity_set[RPS_TOTAL_STACK_HISRS];
kal_atomic_int32 hisr_affinity_set_msg_handle[RPS_TOTAL_STACK_HISRS];

#ifdef SPLIT_SYS
extern const kal_uint8 tst_routing_table[];
/* Tasks created on target side */
kal_uint32 utontarget_task_mask_g[2];
/* Tasks created on PC side */
kal_uint32 utonmnt_task_mask_g[2];
#endif /* SPLIT_SYS */

#if !defined(KAL_PRIORITY_NODE_BY_CTRL_BUFF) && defined(__MTK_TARGET__)
#if defined(__KTEST__) &&  !defined(_DYN_KTEST_)
kal_int_prio_list_t prio_node_array[20];
kal_uint32 prio_node_array_number = 20;
#else
kal_int_prio_list_t prio_node_array[GLOBAL_TOTAL_CREATED_TASK_NUMBER];
kal_uint32 prio_node_array_number = GLOBAL_TOTAL_CREATED_TASK_NUMBER;
#endif
#endif

kal_uint8 remap_task_index_by_taskID[TASK_ID_DRV_CODE_TAIL];
kal_uint8 remap_task_index_by_moduleID[MODULE_TAG_DRV_DUMMY_TAIL];
kal_uint16 remap_mod_index_by_moduleID[MODULE_TAG_DRV_DUMMY_TAIL];

extern const comptask_info_struct sys_comp_config_tbl[];

/*******************************************************************************
 * Internal Globals
 * these global array is used in kal files
 * they should be defined in config file since config internal macro is used as array size
 *******************************************************************************/
#ifdef __MTK_TARGET__
__attribute__ ((section ("INTSRAM_RW"))) 
#endif /* __MTK_TARGET__ */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
module_type task_active_module_g[ RPS_TOTAL_STACK_TASKS ];
/*************************************************************************
* Declarations Of Imported functions
 *************************************************************************/
static void remap_mod_task_g(void);

extern void *kal_sys_mem_alloc(kal_uint32 size);

extern kal_duplicated_task_name_query_struct duplicatedTaskNameArray[];
extern kal_uint32 duplicatedTaskNameArray_num;


/*************************************************************************
 * FUNCTION:
 *  remap_task_index
 *
 * DESCRIPTION:
 *  adjust index for save RAM, should call this function when refer task_info_g[task_index]
 *
 * PARAMETERS:
 *   module_type
 
 * RETURNS
 *   task indx: the order in task_info_g[]
 *
 * GLOBALS AFFECTED
 *
 *************************************************************************/
kal_uint32 remap_task_index(kal_uint32 task_indx)
{
    kal_uint32 task_index = 0;
    if (task_indx < TASK_ID_DRV_CODE_TAIL)
        task_index = remap_task_index_by_taskID[task_indx];

    return task_index;
}

static kal_uint32 remap_task_index_internal(kal_uint32 task_indx)
{
	/* should rewrite this function once task id group is rearranged */

	kal_uint32 task_index = task_indx;

	if(task_index > TASK_ID_DRV_CODE_TAIL || task_index > TASK_ID_CODE_MAX)
	{
		return 0;
	}
	
	if(task_indx >= TASK_ID_MODEM_2G3G_CODE_BEGIN)
	{
		/* SRV group */
		task_index = TASK_ID_SRV_CODE_TAIL;
		
		if(task_indx < TASK_ID_MODEM_4G_CODE_BEGIN)
		{
			/* 2G3G MODEM group */
			task_index += (task_indx - TASK_ID_MODEM_2G3G_CODE_BEGIN + 1);
		}
        else if(task_indx < TASK_ID_MW_CODE_BEGIN)
		{
			/* 4G MODEM group */
			task_index += (TASK_ID_MODEM_2G3G_CODE_TAIL - TASK_ID_MODEM_2G3G_CODE_BEGIN + 1);
			task_index += (task_indx - TASK_ID_MODEM_4G_CODE_BEGIN + 1);
		}
		else if(task_indx < TASK_ID_DRV_CODE_BEGIN)
		{
			/* MW group */
			task_index += (TASK_ID_MODEM_2G3G_CODE_TAIL - TASK_ID_MODEM_2G3G_CODE_BEGIN + 1);
			task_index += (TASK_ID_MODEM_4G_CODE_TAIL - TASK_ID_MODEM_4G_CODE_BEGIN + 1);
			task_index += (task_indx - TASK_ID_MW_CODE_BEGIN + 1);
		}
        else
		{
			/* DRV group */
			task_index += (TASK_ID_MODEM_2G3G_CODE_TAIL - TASK_ID_MODEM_2G3G_CODE_BEGIN + 1);
			task_index += (TASK_ID_MODEM_4G_CODE_TAIL - TASK_ID_MODEM_4G_CODE_BEGIN + 1); 
			task_index += (TASK_ID_MW_CODE_TAIL - TASK_ID_MW_CODE_BEGIN + 1);
			task_index += (task_indx - TASK_ID_DRV_CODE_BEGIN + 1);
		}
	}
	
	return task_index;
}


/*************************************************************************
 * FUNCTION:
 *  remap_module_id
 *
 * DESCRIPTION:
 *  adjust index for save RAM, should call this function when refer mod_task_g[module_id]
 *
 * PARAMETERS:
 *   module_type
 
 * RETURNS
 *   moduleid: the order in mod_task_g[]
 *
 * GLOBALS AFFECTED
 *
 *************************************************************************/
kal_uint32 remap_module_id(kal_uint32 module_id)
{
    kal_uint32 moduleid = 0;
    if (module_id < MODULE_TAG_DRV_DUMMY_TAIL)
        moduleid = remap_mod_index_by_moduleID[module_id];

    return moduleid;
}

static kal_uint32 remap_module_id_internal(kal_uint32 module_id)
{
	/* should  rewrite this function once task id is rearranged */

	kal_uint32 moduleid = 0;

	do{

		if(module_id <= MOD_ID_SRV_CODE_BEGIN)
		{
			break;
		}
		else if(module_id < MODULE_TAG_SRV_TAIL)
		{
			moduleid = (module_id - MOD_ID_SRV_CODE_BEGIN);
		}
		else if(module_id <= MOD_MODEM_DUMMY_BEGIN)
		{
			break;
		}
		else if(module_id < MODULE_TAG_MODEM_DUMMY_TAIL)
		{
			moduleid = MODULE_TAG_SRV_TAIL - MOD_ID_SRV_CODE_BEGIN;
			moduleid += (module_id - MOD_MODEM_DUMMY_BEGIN + 1);
		}
		else if(module_id <= MOD_MODEM_4G_DUMMY_BEGIN)
		{
			break;
		}
		else if(module_id < MODULE_TAG_MODEM_4G_DUMMY_TAIL)
		{
			moduleid = MODULE_TAG_SRV_TAIL - MOD_ID_SRV_CODE_BEGIN;
			moduleid += (MODULE_TAG_MODEM_DUMMY_TAIL - MOD_MODEM_DUMMY_BEGIN + 1);
			moduleid += (module_id - MOD_MODEM_4G_DUMMY_BEGIN + 1);
		}
		else if(module_id <= MOD_MW_DUMMY_BEGIN)
		{
			break;
		}
		else if(module_id < MODULE_TAG_MW_DUMMY_TAIL)
		{
			moduleid = MODULE_TAG_SRV_TAIL - MOD_ID_SRV_CODE_BEGIN;
			moduleid += (MODULE_TAG_MODEM_DUMMY_TAIL - MOD_MODEM_DUMMY_BEGIN + 1);
			moduleid += (MODULE_TAG_MODEM_4G_DUMMY_TAIL - MOD_MODEM_4G_DUMMY_BEGIN + 1);
			moduleid += (module_id - MOD_MW_DUMMY_BEGIN + 1);
		}
		else if(module_id <= MOD_DRV_DUMMY_BEGIN)
		{
			break;
		}
		else if(module_id < MODULE_TAG_DRV_DUMMY_TAIL)
		{
			moduleid = MODULE_TAG_SRV_TAIL - MOD_ID_SRV_CODE_BEGIN;
			moduleid += (MODULE_TAG_MODEM_DUMMY_TAIL - MOD_MODEM_DUMMY_BEGIN + 1);
			moduleid += (MODULE_TAG_MODEM_4G_DUMMY_TAIL - MOD_MODEM_4G_DUMMY_BEGIN + 1);
			moduleid += (MODULE_TAG_MW_DUMMY_TAIL - MOD_MW_DUMMY_BEGIN + 1);
			moduleid += (module_id - MOD_DRV_DUMMY_BEGIN + 1);
		}
	}while(0);
	
	return moduleid;
}

/*************************************************************************
 * FUNCTION:
 *  remap_task_index_by_module_id
 *
 * DESCRIPTION:
 *  Get remap task id from module id
 *
 * PARAMETERS:
 *   module_type
 
 * RETURNS
 *   task indx: the order in task_info_g[]
 *
 * GLOBALS AFFECTED
 *
 *************************************************************************/
kal_uint32 remap_task_index_by_module_id(kal_uint32 module_id)
{
    kal_uint32 task_index = 0;
    if (module_id < MODULE_TAG_DRV_DUMMY_TAIL)
        task_index = remap_task_index_by_moduleID[module_id];

    return task_index;
}

/*************************************************************************
 * FUNCTION:
 *  stack_init_task_mod_remap_tbl
 *
 * DESCRIPTION:
*  This function will initialize module and task ID remap table at initialization stage.
 *
 * PARAMETERS:
 *   void
 
 * RETURNS
 *   void
 *
 * GLOBALS AFFECTED
 *
 *************************************************************************/
void stack_init_task_mod_remap_tbl(void)
{
    kal_uint32 index;

    for(index = TASK_ID_SRV_CODE_BEGIN+1; index < TASK_ID_DRV_CODE_TAIL; index++)
    {
        remap_task_index_by_taskID[index] = remap_task_index_internal(index);
    }

    for(index = MOD_ID_SRV_CODE_BEGIN+1; index < MODULE_TAG_DRV_DUMMY_TAIL; index++)
    {
        remap_mod_index_by_moduleID[index] = remap_module_id_internal(index);
        remap_task_index_by_moduleID[index] = remap_task_index_internal(mod_task_g[remap_mod_index_by_moduleID[index]]);
    }
}

/*************************************************************************
 * FUNCTION:
 *  kal_get_task_index_by_mod_task_g
 *
 * DESCRIPTION:
 *   will get  taskindexfrom mod_task_g as mod_task_g is privated
 *
 * PARAMETERS:
 *   module_type: module Id
      beNeedRemap:  need remap if the module id is from module Id defined; 
                              don't remap if loop all module id one by one;      
 * RETURNS
 *   task indx in task_info_g[]
 *
 * GLOBALS AFFECTED
 *
 *************************************************************************/
kal_uint32 kal_get_task_index_From_mod_task_g(module_type module_id, kal_bool beNeedRemap)
{
	kal_uint32 moduleid = module_id;
	/* should  rewrite this function once task/module id is rearranged */
	if( KAL_TRUE == beNeedRemap )
	{
		moduleid = remap_module_id(module_id);
	}
	return mod_task_g[moduleid];
}

#ifdef __KAL_CROSS_CORE_SUPPORT__

kal_bool kal_is_mod_id_on_current_core(module_type module_id)
{
#ifdef DEBUG_KAL
    if( MOD_ID_SRV_CODE_BEGIN > module_id || MOD_ID_END < module_id )
    {
        kal_fatal_error_handler(KAL_ERROR_MODULE_ID_OUT_OF_RANGE, (kal_uint32)module_id);
        return KAL_FALSE;  // fix build warning
    }
    else
#endif        
    {
        return kal_inline_is_mod_id_on_current_core(module_id);
    }
}
#endif

/*************************************************************************
 * FUNCTION:
 *  kal_query_module_core
 *
 * DESCRIPTION:
 *   will get the core location of a module
 *
 * PARAMETERS:
 *   module_type: module Id
 *
 * RETURNS
 *   kal_module_core: MD1 module, MD2 module, MD3 module, pcore module, 
 *                    l1core module, module not in defined range
 *
 * GLOBALS AFFECTED
 *
 *************************************************************************/
kal_module_core kal_query_module_core(module_type module_id)
{
    kal_module_core module_core_return = MODULE_OUT_OF_RANGE;
    do{
        if(module_id <= MOD_ID_SRV_CODE_BEGIN)
        {
            break;
        }
        else if(module_id < MODULE_TAG_SRV_TAIL)
        {
            module_core_return = PCORE_MODULE;
        }
        else if(module_id <= MOD_MODEM_DUMMY_BEGIN)
        {
            break;
        }
        else if(module_id < MODULE_TAG_MODEM_DUMMY_TAIL)
        {
            module_core_return = PCORE_MODULE;
        }
        else if(module_id <= MOD_MODEM_4G_DUMMY_BEGIN)
        {
            break;
        }
        else if(module_id < MODULE_TAG_MODEM_4G_DUMMY_TAIL)
        {
            module_core_return = PCORE_MODULE;
        }
        else if(module_id <= MOD_MW_DUMMY_BEGIN)
        {
            break;
        }
        else if(module_id < MODULE_TAG_MW_DUMMY_TAIL)
        {
            module_core_return = PCORE_MODULE;
        }
        else if(module_id <= MOD_DRV_DUMMY_BEGIN)
        {
            break;
        }
        else if(module_id < MODULE_TAG_DRV_DUMMY_TAIL)
        {
            module_core_return = PCORE_MODULE;
        }
        else if(module_id <= MOD_ID_HISR_CODE_BEGIN)
        {
            break;
        }
        else if(module_id < MOD_ID_HISR_CODE_TAIL)
        {
            module_core_return = PCORE_MODULE;
        }
    } while(0);
    return module_core_return;
}

static void set_task_active_module_id(kal_uint32 module_id_start, kal_uint32 module_id_end)
{
    kal_uint32 task_indx, module_id;

    for(module_id = module_id_start+1; module_id < module_id_end; module_id++)
    {
        task_indx = remap_task_index_by_module_id(module_id);
        if(INDX_NIL == task_indx)
        {
            continue;
        }
        stack_set_active_module_id(task_indx, module_id);
    }
}


/*************************************************************************
* FUNCTION
*  stack_init_comp_info
*
* DESCRIPTION
*   This function configures the information related with
*   inidividual tasks in an array.
*   The configuration is based on following:
*    1. The task configuration information passed.
*    2. compile time flags.
*
*   The configiration information for tasks not present are set
*   to default values.
*
*
* PARAMETERS
*  Input only: TAsk configuration information.
*
* RETURNS
*  KAL_TRUE on success, else KAL_FALSE.
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_bool
stack_init_comp_info(void)
{
   #define INCREASE_VARIABLE_FOR_DUPLICATED_CONFIG    \
   do{                                                \
       if( (sys_comp_config_tbl[comp_task_indx].comp_affinity_attribute & DUPLICATED_TASK) == DUPLICATED_TASK){    \
           duplicated_task_indx++;                    \
           if( duplicated_task_indx == duplicated_task_count){    \
               comp_task_indx++;                      \
               duplicated_task_count = 0;             \
               duplicated_task_indx = 0;              \
           }                                          \
       }                                              \
       else                                           \
           comp_task_indx++;                          \
   } while(0)
   kal_uint32 task_indx, module_id;
   kal_int32 comp_task_indx, duplicated_task_count, duplicated_task_indx, temp_count;
   kal_uint32 i;
   kal_uint8 boot_flag;

   kal_bool result = KAL_TRUE;
   comptask_handler_struct *comp_handler = NULL;
   /*fix compile warning*/
#ifdef SPLIT_SYS
   kal_uint8 mask_offset;
   kal_uint8 mask_pos;
#endif /* SPLIT_SYS */

   /*
    * initialize task id and mod id remap table
    */
   stack_init_task_mod_remap_tbl();
   
   KALTotalTasks = RPS_TOTAL_STACK_TASKS;
   KALTotalModules = RPS_TOTAL_STACK_MODULES;
   
   task_info_g = (task_info_struct *)kal_sys_mem_alloc(sizeof(task_info_struct) * KALTotalTasks);
   EXT_ASSERT(task_info_g != NULL, 0, 0, 0);
   if(NULL == task_info_g)
   {
      return KAL_FALSE;
   }
   
   /* Initialize global task info structure array */

   for (task_indx = 0; task_indx < KALTotalTasks; task_indx++)
   {

      task_info_g[ task_indx ].task_name_ptr   =  RPS_NO_TASK_NAME;
      task_info_g[ task_indx ].task_qname_ptr  =  RPS_QNAME_NIL;
      task_info_g[ task_indx ].task_priority   = RPS_TASK_PRIORITY_NIL;
      task_info_g[ task_indx ].task_stack_size = RPS_STACK_SIZE_NIL;
      task_info_g[ task_indx ].task_id         = KAL_NILTASK_ID;
      task_info_g[ task_indx ].task_ext_qid    = KAL_NILQ_ID;
      task_info_g[ task_indx ].task_int_qid_ptr= NULL;
      task_info_g[ task_indx ].task_entry_func = NULL;
      task_info_g[ task_indx ].task_init_func  = NULL;
      task_info_g[ task_indx ].task_ext_qsize  = RPS_QSIZE_NIL;
      task_info_g[ task_indx ].task_affinity_attribute = None_Group;
      task_info_g[ task_indx ].task_affinity_group_id = AFFI_GROUP_ID_NONE;
   }

   /* assume that the normal mode is the default setting */

#ifdef SPLIT_SYS
   /* Transfer tst routing table module id to task id */
   for (i=MOD_NIL+1; i<LAST_MOD_ID; i++)
   {
      mask_offset = i / 8;
      mask_pos = i % 8;

      if (tst_routing_table[mask_offset] & (0x1 << mask_pos)) {
         /* On MNT PC side */
         mask_offset = mod_task_g[i] / 32;
         mask_pos = mod_task_g[i] % 32;

         utonmnt_task_mask_g[mask_offset] |= (0x1 << mask_pos);
      } else {
         /* On Target side */
         mask_offset = mod_task_g[i] / 32;
         mask_pos = mod_task_g[i] % 32;

         utontarget_task_mask_g[mask_offset] |= (0x1 << mask_pos);
      }
   }

   /* Both MNT, Target side need TST/TST Reader Tasks */
   i = INDX_TST;
   mask_offset = mod_task_g[i] / 32;
   mask_pos = mod_task_g[i] % 32;
   utonmnt_task_mask_g[mask_offset] &= ~(0x1 << mask_pos);
   utontarget_task_mask_g[mask_offset] &= ~(0x1 << mask_pos);

   i = INDX_TST_READER;
   mask_offset = mod_task_g[i] / 32;
   mask_pos = mod_task_g[i] % 32;
   utonmnt_task_mask_g[mask_offset] &= ~(0x1 << mask_pos);
   utontarget_task_mask_g[mask_offset] &= ~(0x1 << mask_pos);

#ifdef __MTK_TARGET__
   redirect_task_mask_g = (kal_uint32*)&utonmnt_task_mask_g;
#else
   redirect_task_mask_g = (kal_uint32*)&utontarget_task_mask_g;
#endif /* __MTK_TARGET__ */

#endif /* SPLIT_SYS */

   comp_task_indx = 0;
   duplicated_task_count = 0;
   duplicated_task_indx = 0;

   /* Initialize global task info structure array according to component info */
   for (task_indx = 0; task_indx < KALTotalTasks; task_indx++)
   {
       if( (sys_comp_config_tbl[comp_task_indx].comp_affinity_attribute & DUPLICATED_TASK) == DUPLICATED_TASK && duplicated_task_count == 0){
           for( i = 0; i < NUM_OF_CORE; i++){
               if( (sys_comp_config_tbl[comp_task_indx].comp_affinity_attribute >> i) & 0x1 )
                   duplicated_task_count++;
           }
       }      
       if( (sys_comp_config_tbl[comp_task_indx].comp_affinity_attribute & DUPLICATED_TASK) == DUPLICATED_TASK){
           for( i = 0; i < duplicatedTaskNameArray_num; i++){
               if( remap_task_index(duplicatedTaskNameArray[i].duplicated_task_index) == (task_indx - duplicated_task_indx))
                   task_info_g[ task_indx ].task_name_ptr = duplicatedTaskNameArray[i].duplicated_task_name_core[duplicated_task_indx];
           }
	       task_info_g[ task_indx ].task_priority = sys_comp_config_tbl[comp_task_indx].comp_priority + duplicated_task_indx;
           temp_count = 0;
           for( i = 0; i < NUM_OF_CORE; i++){
               if( (sys_comp_config_tbl[comp_task_indx].comp_affinity_attribute >> i) & 0x1 ){
                   if( temp_count == duplicated_task_indx ){
	                   task_info_g[ task_indx ].task_affinity_attribute = DUPLICATED_TASK | (0x1 << i);
                       break;
                   }
                   temp_count++;
               }
           }
       }
       else{
           task_info_g[ task_indx ].task_name_ptr = sys_comp_config_tbl[comp_task_indx].comp_name_ptr;
	       task_info_g[ task_indx ].task_priority = sys_comp_config_tbl[comp_task_indx].comp_priority;
           task_info_g[ task_indx ].task_affinity_attribute = sys_comp_config_tbl[comp_task_indx].comp_affinity_attribute;
       }
       task_info_g[ task_indx ].task_affinity_dynamic = sys_comp_config_tbl[comp_task_indx].comp_affinity_dynamic;
       task_info_g[ task_indx ].task_affinity_group_id = sys_comp_config_tbl[comp_task_indx].comp_affinity_group_id;
	   task_info_g[ task_indx ].task_qname_ptr  = sys_comp_config_tbl[comp_task_indx].comp_qname_ptr;
	   task_info_g[ task_indx ].task_stack_size = sys_comp_config_tbl[comp_task_indx].comp_stack_size;
#ifdef __SYS_INTERN_RAM__
	   task_info_g[ task_indx ].task_internal_ram_stack = sys_comp_config_tbl[comp_task_indx].comp_internal_ram_stack;
#endif /* __SYS_INTERN_RAM__ */
       task_info_g[ task_indx].task_ext_qsize = sys_comp_config_tbl[comp_task_indx].comp_ext_qsize;
	   task_info_g[ task_indx ].task_int_qsize = sys_comp_config_tbl[comp_task_indx].comp_int_qsize;

       /*Check whether the task should be created or mis-configured*/
	   if ((sys_comp_config_tbl[comp_task_indx].comp_create_func == (kal_create_func_ptr)TASK_NO_CREATE_PATTERN ) 
#ifdef SPLIT_SYS
			   || (*(redirect_task_mask_g + (task_indx >> 5)) & (0x1 << (task_indx & 31)))
#endif /* SPLIT_SYS */
	      )
	   {
           INCREASE_VARIABLE_FOR_DUPLICATED_CONFIG;
		   continue; 
	   }
	   else if((sys_comp_config_tbl[comp_task_indx].comp_create_func == (kal_create_func_ptr)KAL_FALSE) ||
	       (sys_comp_config_tbl[comp_task_indx].comp_create_func == (kal_create_func_ptr)KAL_TRUE))
	   {
	       /*
	       This is task mis-configured case. This occurs code like 
	       #ifdef xxx
	       task_create_function(yyy)
	       #endif
	       missing the null_task_create_entry as the else branch.
         
	       The assumption is that task_stack_internalRAM(KAL_FALSE or KAL_TRUE)
	       following task create function
	       */
		   kal_RecordSSTOwner(sys_comp_config_tbl[comp_task_indx].comp_name_ptr); 
		   kal_fatal_error_handler(KAL_ERROR_KALINIT_INIT_FAILED, comp_task_indx);
	   }
	   else if( (sys_comp_config_tbl[comp_task_indx].comp_create_func(&comp_handler) != KAL_TRUE) ||
	       (NULL == comp_handler) )
	   {
           INCREASE_VARIABLE_FOR_DUPLICATED_CONFIG;
		   continue;
	   }

#if defined(__ESL_COSIM_LTE__)
           M_HSL_PRINTF("    task[%02d] = %10.*s, priority = 0x%04x_%04x\n",
                        task_indx,
                        10,
                        task_info_g[task_indx].task_name_ptr,
                        (task_info_g[task_indx].task_priority>>16) & 0xFFFF,
                        (task_info_g[task_indx].task_priority) & 0xFFFF);
#endif /* __ESL_COSIM_LTE__ */


	   /* component task entry function */
	   /*Null task_entry_func indicates the task will not create*/
	   task_info_g[ task_indx ].task_entry_func =
		   comp_handler->comp_entry_func;

	   /* component task initialization handler */
	   task_info_g[ task_indx ].task_init_func =
		   comp_handler->comp_init_func;

	   /* component task reset handler */
	   task_info_g[ task_indx ].task_reset_func =
		   comp_handler->comp_reset_func;
	   
	   comp_handler = NULL;

#ifdef __MULTI_BOOT__
	   if (kal_query_boot_mode() == FACTORY_BOOT)
	   {
		      boot_flag = sys_comp_config_tbl[comp_task_indx].comp_boot_mode & FACTORY_M;
		      if(0 == boot_flag)
		      {
			      task_info_g[ task_indx ].task_entry_func = NULL;
			      for(module_id = 0; module_id < KALTotalModules; module_id++)
			      {
				    if(task_indx == remap_task_index_by_module_id(module_id))
				    {
					    mod_task_g[module_id] = INDX_NIL;
				    }
			      }
		      }
	   }
	  else 
#endif /* __MULTI_BOOT__ */
	   {
		   boot_flag = sys_comp_config_tbl[comp_task_indx].comp_boot_mode & NORMAL_M;
		   if(boot_flag == 0)
		   {
			   task_info_g[ task_indx ].task_entry_func = NULL;
			   for(module_id = 0; module_id < KALTotalModules; module_id++)
			   {
				   if(task_indx == remap_task_index_by_module_id(module_id))
				   {
					   mod_task_g[module_id] = INDX_NIL;
				   }
			   }
		   }
	   }
	   /* mask_offset = task_indx / 32; fix compile warning*/
	   /* mask_pos = task_indx % 32; fix compile warning*/
       INCREASE_VARIABLE_FOR_DUPLICATED_CONFIG;

   }

   
    set_task_active_module_id(MOD_DUMMY_NIL,                        MODULE_TAG_SRV_TAIL);
    set_task_active_module_id(MOD_MODEM_DUMMY_BEGIN,                MODULE_TAG_MODEM_DUMMY_TAIL);
    set_task_active_module_id(MOD_MODEM_4G_DUMMY_BEGIN,             MODULE_TAG_MODEM_4G_DUMMY_TAIL);
    set_task_active_module_id(MOD_MW_DUMMY_BEGIN,                   MODULE_TAG_MW_DUMMY_TAIL);
    set_task_active_module_id(MOD_DRV_DUMMY_BEGIN,                  MODULE_TAG_DRV_DUMMY_TAIL);
	  
   result = stack_init_module_info();

   return result;
}

/*************************************************************************
* FUNCTION
*  stack_init_module_info
*
* DESCRIPTION
*  The function implements component task's modules information including
*  initialization, configuration, reset, termination handler.
*
* PARAMETERS
*
* RETURNS
*  KAL_TRUE on success, else KAL_FALSE.
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_bool
stack_init_module_info( void )
{
   /* According to feature customization,
      remap mod_task_g to overwrite internal configuration */
   remap_mod_task_g();

   return KAL_TRUE;
}

/*******************************************************************************
 * FUNCTION
 *  kal_get_task_total_number
 * DESCRIPTION
 *  query total task index number.
 * PARAMETERS
 *  NA.
 * RETURNS
 *  Return total task index number. 
 * GLOBALS AFFECTED
 *
 ******************************************************************************/
kal_uint32 kal_get_task_total_number(void)
{
	return KALTotalTasks;
}

/*******************************************************************************
 * FUNCTION
 *  kal_get_send_msg_module_id_total_number
 * DESCRIPTION
 *  query total module id number that can send message.
 * PARAMETERS
 *  NA.
 * RETURNS
 *  Return total module id number that can send message.
 * GLOBALS AFFECTED
 *
 ******************************************************************************/
kal_uint32 kal_get_send_msg_module_id_total_number(void)
{
    return (kal_uint32)RPS_TOTAL_STACK_MODULES;
}


/*************************************************************************
* FUNCTION
*  remap_mod_task_g
*
* DESCRIPTION
*  This function will remap module to new task at initialization stage.
*  Original configuration in config.lib will be overwritten.
*  XXX PLEASE DON'T EDIT THE FUNCTION.
*
* PARAMETERS
*  None
*
* RETURNS
*  None
*
* GLOBALS AFFECTED
*  mod_task_g
*
*************************************************************************/
static void remap_mod_task_g(void)
{

/* Please use task config file to remap module and do not add remap code in MTK internal. */
#if defined(__EDYN_ENABLE__)
    if (kal_query_boot_mode() == FACTORY_BOOT) {
        mod_task_g[remap_module_id(MOD_EL1)]   = mod_task_g[remap_module_id(MOD_DUMMY_ETSTM)];
    }
#endif/*__EDYN_ENABLE__*/
/* Please use task config file to remap module and do not add remap code in MTK internal. */
   return;
}


