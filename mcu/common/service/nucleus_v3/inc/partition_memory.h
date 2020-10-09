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
*         the Partition Memory component.
*
***********************************************************************/

/* Check to see if the file has been included already.  */

#ifndef PARTITION_MEMORY_H
#define PARTITION_MEMORY_H

/* Define constants local to this component.  */

#define         PM_PARTITION_ID         0x50415254UL
#define         PM_OVERHEAD             ((sizeof(PM_HEADER) + sizeof(UNSIGNED) \
                                        - 1)/sizeof(UNSIGNED)) *    \
                                        sizeof(UNSIGNED)
#define         PM_MAX_PARTITION_SIZE   0xFFFFFFFFUL
#define         PM_PARTITION_ALLOCATED  0x50555345UL


/* Define the header structure that is in front of each memory partition.  */

typedef struct PM_HEADER_STRUCT
{
    struct PM_HEADER_STRUCT
                       *pm_next_available;     /* Next available memory  */
                                               /*   partition            */
    PM_PCB             *pm_partition_pool;     /* Partition pool pointer */
} PM_HEADER;


/* Define the partition suspension structure.  This structure is allocated
   off of the caller's stack.  */

typedef struct PM_SUSPEND_STRUCT
{
    CS_NODE             pm_suspend_link;       /* Link to suspend blocks */
    PM_PCB             *pm_partition_pool;     /* Pointer to pool        */
    TC_TCB             *pm_suspended_task;     /* Task suspended         */
    VOID               *pm_return_pointer;     /* Return memory address  */
    STATUS              pm_return_status;      /* Return status          */
} PM_SUSPEND;

#endif
