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
*         the message buffer component.
*
***********************************************************************/

/* Check to see if the file has been included already.  */

#ifndef MESSAGE_H
#define MESSAGE_H

/* Define constants local to this component.  */

#define         QU_QUEUE_ID             0x51554555UL
#define         PI_PIPE_ID              0x50495045UL

#define         QU_SIZE                 sizeof(UNSIGNED)
#define         QU_SEND_SIZE(size)      ((size) * QU_SIZE)
#define         QU_REC_SIZE(size)       ((size) / QU_SIZE)

/* Define the General Message Buffer Control Block data type */
typedef struct MS_MCB_STRUCT
{
#ifdef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE

    CS_NODE             ms_created;            /* Node for linking to    */
                                               /* created message buffer */
                                               /* list                   */
#endif /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */
    UNSIGNED            ms_id;                 /* Internal CB ID         */
    CHAR                ms_name[NU_MAX_NAME];  /* Message buffer name    */
    BOOLEAN             ms_fixed_size;         /* Fixed-size messages?   */
    BOOLEAN             ms_fifo_suspend;       /* Suspension type flag   */
#if     PAD_2
    DATA_ELEMENT        ms_padding[PAD_2];
#endif
    UNSIGNED            ms_buffer_size;        /* Total size of buffer   */
    UNSIGNED            ms_messages;           /* Messages in buffer     */
    UNSIGNED            ms_message_size;       /* Size of each message   */
    UNSIGNED            ms_available;          /* Available bytes        */
    BYTE_PTR            ms_start;              /* Start of buffer        */
    BYTE_PTR            ms_end;                /* End of buffer + 1      */
    BYTE_PTR            ms_read;               /* Read pointer           */
    BYTE_PTR            ms_write;              /* Write pointer          */
    UNSIGNED            ms_tasks_waiting;      /* Number of waiting tasks*/
    struct MS_SUSPEND_STRUCT
                       *ms_urgent_list;        /* Urgent message suspend */
    struct MS_SUSPEND_STRUCT
                       *ms_suspension_list;    /* Suspension list        */
    VOID               *ms_handle;
} MS_MCB;

/* Define the queue suspension structure.  This structure is allocated off of
   the caller's stack.  */

typedef struct MS_SUSPEND_STRUCT
{
    CS_NODE             ms_suspend_link;       /* Link to suspend blocks */
    MS_MCB             *ms_message;            /* Pointer to the message */
                                               /* buffer control block   */
    TC_TCB             *ms_suspended_task;     /* Task suspended         */
    BYTE_PTR            ms_message_area;       /* Pointer to message area*/
    UNSIGNED            ms_message_size;       /* Message size requested */
    UNSIGNED            ms_actual_size;        /* Actual size of message */
    STATUS              ms_return_status;      /* Return status          */
} MS_SUSPEND;

#ifdef NU_CONTROL_BLOCK_HIDING

typedef         NU_HANDLE                           NU_MESSAGE;

#else

typedef         MS_MCB                              NU_MESSAGE;

#endif /* NU_CONTROL_BLOCK_HIDING */

/* Internal message buffer prototypes */

VOID MSC_Cleanup(VOID *information);

#ifdef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE

/* Define external inner-component global data references.  */

extern CS_NODE              *QUD_Created_Queues_List;
extern UNSIGNED              QUD_Total_Queues;

extern CS_NODE              *PID_Created_Pipes_List;
extern UNSIGNED              PID_Total_Pipes;

#endif /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */

#endif
