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
*   DESCRIPTION
*
*       This file contains data structure definitions and constants for
*       the message Mailbox component.
*
***********************************************************************/

/* Check to see if the file has been included already.  */

#ifndef MAILBOX_H
#define MAILBOX_H

/* Define constants local to this component.  */

#define         MB_MAILBOX_ID           0x4d424f58UL


/* Define the mailbox suspension structure.  This structure is allocated off of
   the caller's stack.  */

typedef struct MB_SUSPEND_STRUCT
{
    CS_NODE             mb_suspend_link;       /* Link to suspend blocks */
    MB_MCB             *mb_mailbox;            /* Pointer to the mailbox */
    TC_TCB             *mb_suspended_task;     /* Task suspended         */
    UNSIGNED           *mb_message_area;       /* Pointer to message area*/
    STATUS              mb_return_status;      /* Return status          */
} MB_SUSPEND;

#endif
