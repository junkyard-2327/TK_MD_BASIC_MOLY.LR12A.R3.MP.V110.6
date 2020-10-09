/***********************************************************************
*
*            Copyright 1993 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
************************************************************************/

/************************************************************************
*
*     DESCRIPTION
*
*         This file contains data structure definitions and constants for
*         the Semaphore component.
*
***********************************************************************/

/* Check to see if the file has been included already.  */

#ifndef SEMAPHORE_H
#define SEMAPHORE_H

/* Define constants local to this component.  */

#define         SM_SEMAPHORE_ID         0x53454d41UL

/* Define maximum number of PI semaphores that a task can own in Nucleus.
   The need for this restriction arises due to the fact that a task keeps
   track of the PI semaphores it currently owns in an 8-bit variable
   (tc_semaphore_count) of type DATA_ELEMENT(UINT8). Since the range of
   permissable values in such a variable is from 0 to 255, a task can
   own a maximum number of 255 PI semaphores. If such a task tries to own
   a 256th PI semaphore, it will result in an error */
#define         SM_MAX_PI_COUNT         255

/* Define the semaphore suspension structure.  This structure is allocated
   off of the caller's stack.  */

typedef struct SM_SUSPEND_STRUCT
{
    CS_NODE             sm_suspend_link;       /* Link to suspend blocks */
    SM_SCB             *sm_semaphore;          /* Pointer to semaphore   */
    TC_TCB             *sm_suspended_task;     /* Task suspended         */
    STATUS              sm_return_status;      /* Return status          */
} SM_SUSPEND;

VOID    SMC_Kill_Semaphore_Owner(SM_SCB *semaphore_ptr, TC_TCB *owning_task);

#endif
