/***********************************************************************
*
*            Copyright 2010 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
************************************************************************

************************************************************************
*
*   DESCRIPTION
*
*       This file contains data structure definitions used in run-level routines
*
***********************************************************************/

#ifndef RUNLEVEL_H
#define RUNLEVEL_H

/* Configurable values */
#define     RUNLEVEL_INIT_TASK_PRIORITY         CFG_NU_OS_SVCS_INIT_RUN_LVL_INIT_TASK_PRIO
#define     RUNLEVEL_INIT_MAX_RUNLEVEL          31

/* System initialization task constants */
#define     RUNLEVEL_INIT_TASK_STACK_SIZE       CFG_NU_OS_SVCS_INIT_TASK_STACK_SIZE

/* Starting run-level - defines which run-level is the 1st to execute */
#define     RUNLEVEL_FIRST                      1

/* Starting application run-level - defines first application run-level */
#define     RUNLEVEL_APP                        16

/* Define root registry path for run-level information */
#define     RUNLEVEL_ROOT                       "/init/"
#define     RUNLEVEL_ENTRY_KEY                  "/entrypoint"

/* Define run-level initialization status event flag */
#define     RUNLEVEL_COMP_STATUS_EVENT_BIT      0x1UL

/* Typedef for component initialization entry function called by the runlevel initialization */
typedef     STATUS (*RUNLEVEL_COMP_ENTRY)(const CHAR *, INT);

/* Internal services prototypes */
VOID        RunLevel_Start(INT runlevel);
STATUS      NU_RunLevel_Init(NU_MEMORY_POOL * mem_pool);
STATUS      NU_RunLevel_Component_Control(const CHAR * compregpath, INT compctrl);

/* External variable declarations */
extern      NU_EVENT_GROUP      RunLevel_Started_Event;
extern      NU_EVENT_GROUP      RunLevel_Finished_Event;

#if (CFG_NU_OS_SVCS_INIT_STATUS_LOGGING == NU_TRUE)

extern      NU_EVENT_GROUP      RunLevel_Comp_Status_Event;
extern      NU_SEMAPHORE        RunLevel_Comp_Status_Mutex;
extern      STATUS              RunLevel_Comp_Status[CFG_NU_OS_SVCS_REGISTRY_NUM_RNL_COMP];

#endif

#endif  /* RUNLEVEL_H */
