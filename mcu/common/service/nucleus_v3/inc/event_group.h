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
*         This file contains internal data structure definitions and
*         constants for the Event Flag Group component.
*
***********************************************************************/

#ifndef EVENT_GROUP_H
#define EVENT_GROUP_H

/* Define constants local to this component.  */
#define         EV_EVENT_ID         0x45564e54UL

/* Define a common macro for consumption operation detection. The bitwise AND
   between this macro and NU_AND_CONSUME or NU_OR_CONSUME will always be NU_TRUE. */
#define         EV_CONSUME          0x1


/* Define the Event Group suspension structure.  This structure is allocated
   off of the caller's stack.  */

typedef struct EV_SUSPEND_STRUCT
{
    CS_NODE             ev_suspend_link;       /* Link to suspend blocks */
    EV_GCB             *ev_event_group;        /* Pointer to Event group */
    UNSIGNED            ev_requested_events;   /* Requested event flags  */
    DATA_ELEMENT        ev_operation;          /* Event operation        */
#if     PAD_1
    DATA_ELEMENT        ev_padding[PAD_1];
#endif
    TC_TCB             *ev_suspended_task;     /* Task suspended         */
    STATUS              ev_return_status;      /* Return status          */
    UNSIGNED            ev_actual_events;      /* Event flags returned   */
} EV_SUSPEND;

#endif
