/***********************************************************************
*
*             Copyright 1993-2006 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
************************************************************************

************************************************************************
*
*   FILE NAME
*
*       esal_ts_stk_defs.h
*
*   COMPONENT
*
*       ESAL - Embedded Software Abstraction Layer
*
*   DESCRIPTION
*
*       This file contains the toolset specific definitions, structures,
*       macros, etc, related to stacks
*
*   DATA STRUCTURES
*
*       ESAL_TS_STK_STRUCT                  Stack-frame structure for the
*                                           given toolset / architecture
*
*   DEPENDENCIES
*
*       None
*
*============================================================================
*             HISTORY
* Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
*------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
*
 * removed!
 * removed!
 * removed!
*
 * removed!
 * removed!
 * removed!
*
 * removed!
 * removed!
 * removed!
*
*------------------------------------------------------------------------------
* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
*============================================================================
***********************************************************************/

#ifndef         ESAL_TS_STK_DEFS_H
#define         ESAL_TS_STK_DEFS_H

/* Define number of single-precision floating point registers required to
   be saved within a toolset stack frame (s16-s31) */
#define         ESAL_TS_STK_NUM_FPU_REGS        16

/* Define stack frame structure for the toolset / architecture supported. */
typedef struct  ESAL_TS_STK_STRUCT
{
    ESAL_UINT32          stack_type;
    ESAL_UINT32          r16;
    ESAL_UINT32          r17;
    ESAL_UINT32          r18;
    ESAL_UINT32          r19;
    ESAL_UINT32          r20;
    ESAL_UINT32          r21;
    ESAL_UINT32          r22;
    ESAL_UINT32          r23;
    ESAL_UINT32          r30;
    ESAL_UINT32          rtn_address;

#if (ESAL_AR_STK_FPU_SUPPORT == ESAL_TRUE)

    ESAL_UINT32          f20;
    ESAL_UINT32          f21;
    ESAL_UINT32          f22;
    ESAL_UINT32          f23;
    ESAL_UINT32          f24;
    ESAL_UINT32          f25;
    ESAL_UINT32          f26;
    ESAL_UINT32          f27;
    ESAL_UINT32          f28;
    ESAL_UINT32          f29;
    ESAL_UINT32          f30;
    ESAL_UINT32          f31;

#endif  /* ESAL_AR_STK_FPU_SUPPORT == ESAL_TRUE */

} ESAL_TS_STK;

#endif  /* ESAL_TS_STK_DEFS_H */
