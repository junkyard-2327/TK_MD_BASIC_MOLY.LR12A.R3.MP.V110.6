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
*       This file contains function prototypes of all functions
*       accessible to other components.
*
***********************************************************************/

/* Check to see if the file has been included already */
#ifndef     ERROR_MANAGEMENT_H
#define     ERROR_MANAGEMENT_H

/*****************************
       Defines
*****************************/

/* Error control block identifier is 'ERC' */
#define     ERC_ID                   0x45524300UL

/* Error management main task settings */
#define     ERC_TASK_STACK_SIZE      1024
#define     ERC_TASK_PRIORITY        0
#define     ERC_TASK_TIMESLICE       0

/* Error management HISR settings */
#define     ERC_HISR_STACK_SIZE      1024
#define     ERC_HISR_PRIORITY        0

/* Error management Queue settings */
#define     ERC_QUEUE_SIZE           2
#define     ERC_QUEUE_MSG_SIZE       ERC_QUEUE_SIZE

/* Error management Queue commands */
#define     ERC_SETUP_HANDLER        0x1UL
#define     ERC_CLEANUP_HANDLER      0x2UL

/*****************************
       Structure
*****************************/

/* Define for Error management internal control block */
typedef struct erc_error_struct
{
    NU_ERROR       user_error;               /* Error control block exposed to user */
    UNSIGNED       valid;                    /* Internal CB ID */
    UNSIGNED       user_signals;             /* User requested signals */
    UNSIGNED       user_enabled_signals;     /* User enabled signals */
    VOID          *user_signal_handler;      /* User signal handler */

} ERC_CB;

/* Error handling component function definition.  */
VOID            ERC_Initialize(VOID);

/* System error handling function definition.  */
STATUS          ERC_System_Error(INT error_code);

/* Non-nested exception dispatch function prototype.  */
VOID            **ERC_Dispatch_Exception(INT, VOID *);

/* Nested exception dispatch function prototype.  */
VOID            ERC_Dispatch_Nested_Exception(INT);

/* Exception handler function definition.  */
VOID            ERC_Exception_Handler(INT exception_num, VOID *exception_frame);

#endif  /* !ERROR_MANAGEMENT_H */
