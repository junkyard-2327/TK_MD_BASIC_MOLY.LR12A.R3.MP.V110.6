/***********************************************************************
*
*            Copyright 1993 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
************************************************************************

************************************************************************
*
*     DESCRIPTION
*
*         This file contains data structure definitions and constants for
*         the Timer Management component.
*
***********************************************************************/

/* Check to see if the file has been included already.  */

#ifndef         TIMER_H
#define         TIMER_H

/* Define constants local to this component.  */

#define         TM_TIMER_ID             0x54494d45UL
#define         TM_ACTIVE               0
#define         TM_NOT_ACTIVE           1
#define         TM_EXPIRED              2
#define         TM_TASK_TIMER           0
#define         TM_APPL_TIMER           1

#define OSTD_MAX_VALUE 0xffffffff

/* Determine if pointers / 32-bit values are accessible with a single instruction.
   If so, just reference the pointer / 32-bit value directly.  Otherwise, call
   the target dependent service.  */
#if (NU_32BIT_ACCESS == 1)

/* Macro definitions for architectures supporting single instruction
   access to 32-bit values */
#define         TMCT_Read_Timer()               TMD_Timer
#define         TMCT_Retrieve_TS_Task()         TMD_Time_Slice_Task

#else

/* Define function prototypes */
UNSIGNED        TMCT_Read_Timer(VOID);
NU_TASK         *TMCT_Retrieve_TS_Task(VOID);

#endif  /* NU_32BIT_ACCESS == 1 */

/*  Initialization functions.  */

VOID            TMIT_Initialize(VOID);

/* Target dependent functions.  */
VOID            TMCT_Adjust_Timer(UNSIGNED new_value);
VOID            TMCT_Enable_Timer(UNSIGNED);

/* Core processing functions.  */

VOID            TMC_Init_Task_Timer(TM_TCB *timer, VOID *information);
VOID            TMC_Timer_HISR(VOID);
VOID            TMC_Stop_Timer(TM_TCB *timer);
VOID            TMC_Start_Timer(TM_TCB *timer, UNSIGNED time);

/* Define macro for commonly used stop task timer functionality */
#define         TMC_Stop_Task_Timer(timer)                          \
                        if (((TM_TCB *)timer) -> tm_next_timer)     \
                        {                                           \
                            TMC_Stop_Timer((TM_TCB *)timer);        \
                        }

/* Define macro for commonly used start task timer functionality */
#define         TMC_Start_Task_Timer        TMC_Start_Timer

#endif /* TM_INTR */
