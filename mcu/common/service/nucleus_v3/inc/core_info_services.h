/***********************************************************************
*
*            Copyright 2009 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
************************************************************************

************************************************************************
*
*   FILE NAME
*
*       core_info_services.h
*
*   COMPONENT
*
*       CIS - Core Information Services Component
*
*   DESCRIPTION
*
*       This file contains data structure definitions, constants and
*       functions for the Core Information Services Component.
*
*   DATA STRUCTURES
*
*       CI_CPU_INFO                         CPU info block
*
*   DEPENDENCIES
*
*       None
*
***********************************************************************/

#ifndef CORE_INFO_SERVICES_H_
#define CORE_INFO_SERVICES_H_

/* Define constants to represent different states of the CPU. */
#define CIS_CPU_IDLE                   0
#define CIS_CPU_RUNNING                1

/* Define constants to represent different count types of the CPU. */
#define CIS_MAX_USEABLE_CPU_COUNT      0
#define CIS_RUNNING_CPU_COUNT          1
#define CIS_IDLE_CPU_COUNT             2
#define CIS_SCHEDULABLE_CPU_COUNT      3


/* Define constants for the different member variables of the CPU CB
   structure for the current CPU. */

#if (ESAL_GE_CPU_COUNT == 1)


#define CIS_CURRENT_CPU_INFO_CB      CIS_CPU_INFO_CB(0)
#define CIS_CURRENT_TC_CB            CIS_TC_CB(0)
#define CIS_CURRENT_ER_CB            CIS_ER_CB(0)
#define CIS_CURRENT_TM_CB            CIS_TM_CB(0)

#else

#define CIS_CURRENT_CPU_INFO_CB      CIS_CPU_INFO_CB(ESAL_GE_CPU_ID_GET())
#define CIS_CURRENT_TC_CB            CIS_TC_CB(ESAL_GE_CPU_ID_GET())
#define CIS_CURRENT_ER_CB            CIS_ER_CB(ESAL_GE_CPU_ID_GET())
#define CIS_CURRENT_TM_CB            CIS_TM_CB(ESAL_GE_CPU_ID_GET())

#endif

/* Define constants for the different member variables of the CPU CB
   structure for the specified CPU. */

#define CIS_CPU_INFO_CB(cpu_id)      CIS_CPU_List[cpu_id].cis_info_cb
#define CIS_TC_CB(cpu_id)            CIS_CPU_List[cpu_id].cis_thread_cb
#define CIS_ER_CB(cpu_id)            CIS_CPU_List[cpu_id].cis_error_cb
#define CIS_TM_CB(cpu_id)            CIS_CPU_List[cpu_id].cis_timer_cb


/* Define the CPU Info data type.  */
typedef struct CIS_CPU_INFO_STRUCT
{
    UINT32         cis_cpu_id;                /* CPU ID                 */
    UINT32         cis_cpu_state;             /* CPU state              */
    UINT32         cis_cpu_hw_id;             /* CPU hardware id        */
    BOOLEAN        cis_bound_domain;          /* CPU bound domain flag  */
    BOOLEAN        cis_cpu_idle_flag;         /* is set to true if core is idle */
} CIS_CPU_INFO;


/* Define the CPU control block */
typedef struct CIS_CCB_STRUCT
{
    CIS_CPU_INFO   cis_info_cb;
    TC_CPU_CB      cis_thread_cb;
    ER_CPU_CB      cis_error_cb;
    TM_CPU_CB      cis_timer_cb;

} CIS_CCB;

/* Define externally referenced variables.   */
extern CIS_CCB              CIS_CPU_List[];


/* Core processing functions.  */

STATUS CIS_Get_CPU_Count(UNSIGNED type, UNSIGNED *count);


/* Define function used by internal components of the system.  */

#define         CIS_GET_CPU_STATE(cpu_id)                                       \
                    CIS_CPU_List[cpu_id].cis_info_cb.cis_cpu_state;

#define         CIS_IS_CPU_BOUND(cpu_id)                                        \
                    CIS_CPU_List[cpu_id].cis_info_cb.cis_bound_domain;

#define         CIS_Set_CPU_State(cpu_id,state)                                 \
                    CIS_CPU_List[cpu_id].cis_info_cb.cis_cpu_state = state;

#define         CIS_Set_CPU_Bound(cpu_id,bound)                                  \
                    CIS_CPU_List[cpu_id].cis_info_cb.cis_bound_domain = bound;

#endif /* CORE_INFO_SERVICES_H_ */
