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
*         the Dynamic Memory component.
*
***********************************************************************/

/* Check to see if the file has been included already.  */

#ifndef DYNAMIC_MEMORY_H
#define DYNAMIC_MEMORY_H

/* Adjust a size to something that is evenly divisible by the number of bytes
   in an UNSIGNED data type.  */

#define DM_ADJUSTED_SIZE(size)          ((((size) + sizeof(UNSIGNED) - 1)/sizeof(UNSIGNED)) * sizeof(UNSIGNED))

#define DM_ADJUSTED_ALIGNMENT(alignment) DM_ADJUSTED_SIZE(alignment)

/* Define constants local to this component.  */

#define         DM_DYNAMIC_ID          0x44594e41UL
#define         DM_OVERHEAD            (DM_ADJUSTED_SIZE(sizeof(DM_ALLOCATED)))

/* Minimum allocations must allow for room for extra members of
   a free block vs the size of an allocated block */

#define         DM_MIN_ALLOCATION      (DM_ADJUSTED_SIZE(sizeof(DM_HEADER) - sizeof(DM_ALLOCATED)))

/* Define the header structure that is in front of each memory block.  */

typedef struct DM_ALLOCATED_STRUCT
{
    struct DM_HEADER_STRUCT
                       *dm_next_memory,        /* Next memory block      */
                       *dm_previous_memory;    /* Previous memory block  */
    BOOLEAN             dm_memory_free;        /* Memory block free flag */
#if     PAD_1
    DATA_ELEMENT        dm_padding[PAD_1];
#endif
    DM_PCB             *dm_memory_pool;        /* Dynamic pool pointer   */
} DM_ALLOCATED;

typedef struct DM_HEADER_STRUCT
{
    struct DM_HEADER_STRUCT
                       *dm_next_memory,        /* Next memory block      */
                       *dm_previous_memory;    /* Previous memory block  */
    BOOLEAN             dm_memory_free;        /* Memory block free flag */
#if     PAD_1
    DATA_ELEMENT        dm_padding[PAD_1];
#endif
    DM_PCB             *dm_memory_pool;        /* Dynamic pool pointer   */
    struct DM_HEADER_STRUCT
                       *dm_next_free,          /* Next available memory */
                       *dm_previous_free;      /* Previous available memory */
} DM_HEADER;

/* Define the dynamic memory suspension structure.  This structure is
   allocated off of the caller's stack.  */

typedef struct DM_SUSPEND_STRUCT
{
    CS_NODE             dm_suspend_link;       /* Link to suspend blocks */
    DM_PCB             *dm_memory_pool;        /* Pointer to pool        */
    UNSIGNED            dm_request_size;       /* Size of memory request */
    TC_TCB             *dm_suspended_task;     /* Task suspended         */
    VOID               *dm_return_pointer;     /* Return memory address  */
    STATUS              dm_return_status;      /* Return status          */
    UNSIGNED            dm_alignment;          /* Alignment request, 0 unless
                                                  used by NU_Allocate_Aligned_Memory */
} DM_SUSPEND;

/* Internal functions */
DM_HEADER *DMC_Allocate(DM_PCB *pool_ptr, UNSIGNED size, UNSIGNED alignment);

#endif
