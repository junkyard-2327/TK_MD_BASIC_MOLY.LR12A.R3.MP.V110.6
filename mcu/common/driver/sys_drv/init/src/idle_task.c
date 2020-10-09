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
 *   idle_task.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is for the functions of idle task.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifdef __MTK_TARGET__
#include "kal_public_api.h" //MSBB change #include "kal_release.h"
#include "syscomp_config.h"
#include "task_config.h"      /* Task creation */
#include "kal_general_types.h"
//#include "task_main_func.h"
#include "kal_internal_api.h"

#if defined(__BW_RUNTIME_PF__)/* For SPV */
#include "spv_api.h"
#endif

NU_TASK *IdleTaskTCB;
NU_TASK *IdleTaskTCB1;
NU_TASK *IdleTaskTCB2;
NU_TASK *IdleTaskTCB3;

extern void DCM_Init(void);
extern void DCM_Service_Init(void);
extern void DCM_Service_Handler(void);
extern void DCM_Service_Handler_Slave(void);

//#pragma arm section code = "INTERNCODE"
//#pragma arm section code = "INTSRAM_ROCODE"
#define __SECTION__(S) __attribute__ ((__section__(#S)))
#define __ZI__          __attribute__ ((zero_init))

//#pragma arm section rwdata = "INTERNRW" , rodata = "INTERNCONST" , zidata = "INTERNZI"
//#pragma arm section rwdata = "INTSRAM_RW" , rodata = "INTSRAM_RODATA" , zidata = "INTSRAM_ZI"

/* idle task for VPE 0 */
void IdleTask( task_entry_struct * task_entry_ptr )
{  
   IdleTaskTCB = (NU_TASK*)kal_get_task_by_moduleID(MOD_IDLE);  //(NU_TASK*)task_info_g[task_entry_ptr->task_indx].task_id;
   volatile kal_uint32 temptag = 1;
   
#if defined(__MAUI_BASIC__)/* For BASIC load, it is only while loop. */     
   while(temptag)
   {/* Infinite loop */
    
   }    
#else
   DCM_Init();
   DCM_Service_Init();

   while(temptag)
   {/* Infinite loop */
       DCM_Service_Handler();
   }  
#endif
}

/* idle task for VPE 1 */
void IdleTask1( task_entry_struct * task_entry_ptr )
{  
   IdleTaskTCB1 = (NU_TASK*)kal_get_task_by_moduleID(MOD_IDLE1);  //(NU_TASK*)task_info_g[task_entry_ptr->task_indx].task_id;
   volatile kal_uint32 temptag = 1;

#if defined(__MAUI_BASIC__)/* For BASIC load, it is only while loop. */   
   while(temptag)
   {/* Infinite loop */
    
   }    
#else
   while(temptag)
   {/* Infinite loop */
       DCM_Service_Handler_Slave();
   }    
#endif   
}

/* idle task for VPE 2 */
void IdleTask2( task_entry_struct * task_entry_ptr )
{    
   IdleTaskTCB2 = (NU_TASK*)kal_get_task_by_moduleID(MOD_IDLE2);
   volatile kal_uint32 temptag = 1;

#if defined(__MAUI_BASIC__)/* For BASIC load, it is only while loop. */     
   while(temptag)
   {/* Infinite loop */
    
   }    
#else   
   DCM_Service_Init();

   while(temptag)
   {/* Infinite loop */
       DCM_Service_Handler();
   }    
#endif   
}

/* idle task for VPE 3 */
void IdleTask3( task_entry_struct * task_entry_ptr )
{ 
   IdleTaskTCB3 = (NU_TASK*)kal_get_task_by_moduleID(MOD_IDLE3);
   volatile kal_uint32 temptag = 1;

#if defined(__MAUI_BASIC__)/* For BASIC load, it is only while loop. */     
   while(temptag)
   {/* Infinite loop */
    
   }    
#else  
   while(temptag)
   {/* Infinite loop */
       DCM_Service_Handler_Slave();
   }    
#endif   
}

//#pragma arm section rwdata , rodata , zidata



/*************************************************************************
* FUNCTION                                                            
*	idle_create
*
* DESCRIPTION                                                           
*	This function implements idle entity's create handler.
*
* PARAMETERS
*
* RETURNS
*	None
*
* GLOBALS AFFECTED
*
*************************************************************************/

#if defined(__ESL_HRT__)
extern void hrt_idle_task_main(void);
extern void hrt_idle_task_init(void);
#elif defined(__EL2_HRT_EVALUATION__)
void hrt_eval_idle_task_main(void);
void hrt_eval_idle_task_init(void);
#elif defined(__ESL_COSIM_LTE__)
void el1_adapt_idle_task_main(void);
void el1_adapt_idle_task_init(void);
#elif defined(__MASE__)
extern void mase_adapt_idle_task_main(task_entry_struct *task_entry_ptr);
#elif defined(MTK_C2K_93_COSIM)  
extern kal_bool cl1_cosim_idle_task_main(void);
extern void cl1_cosim_idle_task_init(void);
extern kal_bool cl1_cosim_idle_task_main1(void);
extern void cl1_cosim_idle_task_init1(void);
extern kal_bool cl1_cosim_idle_task_main2(void);
extern void cl1_cosim_idle_task_init2(void);
extern kal_bool cl1_cosim_idle_task_main3(void);
extern void cl1_cosim_idle_task_init3(void);
#elif defined(__SLEEP_IT__)  
extern __attribute__ ((section ("INTSRAM_ROCODE"))) void Sleep_IdleTask( task_entry_struct * task_entry_ptr );
extern __attribute__ ((section ("INTSRAM_ROCODE"))) void Sleep_IdleTask1( task_entry_struct * task_entry_ptr );
extern __attribute__ ((section ("INTSRAM_ROCODE"))) void Sleep_IdleTask2( task_entry_struct * task_entry_ptr );
extern __attribute__ ((section ("INTSRAM_ROCODE"))) void Sleep_IdleTask3( task_entry_struct * task_entry_ptr );
#endif

kal_bool idle_create(comptask_handler_struct **handle)
{
    static const comptask_handler_struct idle_handler_info =
    {
#if defined(__ESL_HRT__)
        hrt_idle_task_main,
        hrt_idle_task_init,
#elif defined(__EL2_HRT_EVALUATION__)
        hrt_eval_idle_task_main,
        hrt_eval_idle_task_init,
#elif defined(__ESL_COSIM_LTE__)
        el1_adapt_idle_task_main,
        el1_adapt_idle_task_init,
#elif defined(__MASE__)
        mase_adapt_idle_task_main,
        NULL,
#elif defined(MTK_C2K_93_COSIM)  
        cl1_cosim_idle_task_main,
        cl1_cosim_idle_task_init,
#elif defined(__SLEEP_IT__)  
        Sleep_IdleTask,
        NULL,
#elif defined(__BW_RUNTIME_PF__)
        SPV_IdleTask,
        NULL,
#else
        IdleTask,			/* task entry function */
        NULL,			/* task initialization function */
#endif
        NULL			/* task reset handler */
    };

	*handle = (comptask_handler_struct *)&idle_handler_info;

	return KAL_TRUE;
}

kal_bool idle_create1(comptask_handler_struct **handle)
{
    static const comptask_handler_struct idle_handler_info =
    {
#if defined(__ESL_HRT__)
        hrt_idle_task_main,
        hrt_idle_task_init,
#elif defined(__EL2_HRT_EVALUATION__)
        hrt_eval_idle_task_main,
        hrt_eval_idle_task_init,
#elif defined(__ESL_COSIM_LTE__)
        el1_adapt_idle_task_main,
        el1_adapt_idle_task_init,
#elif defined(__MASE__)
        mase_adapt_idle_task_main,
        NULL,
#elif defined(MTK_C2K_93_COSIM)  
        cl1_cosim_idle_task_main1,
        cl1_cosim_idle_task_init1, 
#elif defined(__SLEEP_IT__)  
        Sleep_IdleTask1,
        NULL,
#else
        IdleTask1,			/* task entry function */
        NULL,			/* task initialization function */
#endif
        NULL			/* task reset handler */
    };

	*handle = (comptask_handler_struct *)&idle_handler_info;

	return KAL_TRUE;
}

kal_bool idle_create2(comptask_handler_struct **handle)
{
    static const comptask_handler_struct idle_handler_info =
    {
#if defined(__ESL_HRT__)
        hrt_idle_task_main,
        hrt_idle_task_init,
#elif defined(__EL2_HRT_EVALUATION__)
        hrt_eval_idle_task_main,
        hrt_eval_idle_task_init,
#elif defined(__ESL_COSIM_LTE__)
        el1_adapt_idle_task_main,
        el1_adapt_idle_task_init,
#elif defined(__MASE__)
        mase_adapt_idle_task_main,
        NULL,
#elif defined(MTK_C2K_93_COSIM)  
        cl1_cosim_idle_task_main2,
        cl1_cosim_idle_task_init2,        
#elif defined(__SLEEP_IT__)  
        Sleep_IdleTask2,
        NULL,
#elif defined(__BW_RUNTIME_PF__)
        SPV_IdleTask2,
        NULL,
#else
        IdleTask2,			/* task entry function */
        NULL,			/* task initialization function */
#endif
        NULL			/* task reset handler */
    };

	*handle = (comptask_handler_struct *)&idle_handler_info;

	return KAL_TRUE;
}

kal_bool idle_create3(comptask_handler_struct **handle)
{
    static const comptask_handler_struct idle_handler_info =
    {
#if defined(__ESL_HRT__)
        hrt_idle_task_main,
        hrt_idle_task_init,
#elif defined(__EL2_HRT_EVALUATION__)
        hrt_eval_idle_task_main,
        hrt_eval_idle_task_init,
#elif defined(__ESL_COSIM_LTE__)
        el1_adapt_idle_task_main,
        el1_adapt_idle_task_init,
#elif defined(__MASE__)
        mase_adapt_idle_task_main,
        NULL,
#elif defined(MTK_C2K_93_COSIM)  
        cl1_cosim_idle_task_main3,
        cl1_cosim_idle_task_init3,        
#elif defined(__SLEEP_IT__)  
        Sleep_IdleTask3,
        NULL,
#else
        IdleTask3,			/* task entry function */
        NULL,			/* task initialization function */
#endif
        NULL			/* task reset handler */
    };

	*handle = (comptask_handler_struct *)&idle_handler_info;

	return KAL_TRUE;
}

#else  /* __MTK_TARGET__ */

#endif


