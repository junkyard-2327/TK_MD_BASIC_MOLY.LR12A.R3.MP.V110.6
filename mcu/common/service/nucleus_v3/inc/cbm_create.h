/***********************************************************************
*
*            Copyright 2014 Mentor Graphics Corporation
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
*         This file contains the static array defintion and associated
*         macros for all object creation with control block hiding.
*
***********************************************************************/

/* Check to see if the file has been included already.  */
#ifndef CBM_CREATE_H
#define CBM_CREATE_H

#ifndef NU_CONTROL_BLOCK_HIDING

/* If no control block hiding is present define the empty macro */
#define CBM_OBTAIN_CB(pointer, status)

#else  /* NU_CONTROL_BLOCK_HIDING */

/* Update the object count based on the respective type */
#if     defined(CBM_DM)
#define  CBM_OBJECT_TYPE    DM_PCB
#define  CBM_OBJECT_ID      DM_DYNAMIC_ID
#elif   defined(CBM_EV)
#define  CBM_OBJECT_TYPE    EV_GCB
#define  CBM_OBJECT_ID      EV_EVENT_ID
#elif   defined(CBM_MS)
#define  CBM_OBJECT_TYPE    MS_MCB
#define  CBM_OBJECT_ID      QU_QUEUE_ID
#elif   defined(CBM_PM)
#define  CBM_OBJECT_TYPE    PM_PCB
#define  CBM_OBJECT_ID      PM_PARTITION_ID
#elif   defined(CBM_SM)
#define  CBM_OBJECT_TYPE    SM_SCB
#define  CBM_OBJECT_ID      SM_SEMAPHORE_ID
#elif   defined(CBM_TM)
#define  CBM_OBJECT_TYPE    TM_APP_TCB
#define  CBM_OBJECT_ID      TM_TIMER_ID
#elif   defined(CBM_MB)
#define  CBM_OBJECT_TYPE    MB_MCB
#define  CBM_OBJECT_ID      MB_MAILBOX_ID
#elif   defined(CBM_TC)
#define  CBM_OBJECT_TYPE    TC_TCB
#define  CBM_OBJECT_ID      TC_TASK_ID
#else
#error Need to define the creation type before including cbm_create.h
#endif /* Defined object types */

STATUS  ERC_System_Error(INT error_code);

/* CMB_control_block_array is an array of control blocks of a type that
   is defined before the inclusion of this file is of a size that is also
   defined prior to the inclusion of this file. */

#if ((CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE) && defined(CFG_NU_OS_KERN_PROCESS_ENABLE))

VOID    *CERTOS_Get_Control_Block(UNSIGNED id);

/* Static allocation control block hiding */
#define CBM_OBTAIN_PTR()    CERTOS_Get_Control_Block(CBM_OBJECT_ID)

#else /* ((CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE) && defined(CFG_NU_OS_KERN_PROCESS_ENABLE)) */

/* Dynamic allocation control block hiding */
#define CBM_OBTAIN_PTR()    CBM_Allocate(sizeof(CBM_OBJECT_TYPE))

#endif /* ((CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE) && defined(CFG_NU_OS_KERN_PROCESS_ENABLE)) */

/* Extend the control block allocation with unified error check */
#define CBM_OBTAIN_CB(pointer, status)                              \
        {                                                           \
            if (status == NU_SUCCESS)                               \
            {                                                       \
                /* Obtain a pointer to the control block */         \
                pointer = CBM_OBTAIN_PTR();                         \
                                                                    \
                /* Check for a null pointer */                      \
                if (pointer == NU_NULL)                             \
                {                                                   \
                    /* Creation call failed, return an error */     \
                    status = NU_NO_MEMORY;                          \
                }                                                   \
            }                                                       \
        }

#endif /* !NU_CONTROL_BLOCK_HIDING */

#endif /* CBM_CREATE_H */
