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
*       esal_ar_stk_defs.h
*
*   COMPONENT
*
*       ESAL - Embedded Software Abstraction Layer
*
*   DESCRIPTION
*
*       This file contains the architecture specific definitions,
*       structures, assembly macros, etc, related to stacks
*
*   DATA STRUCTURES
*
*       ESAL_AR_STK_MIN                     Minimum stack-frame
*                                           structure for the given
*                                           architecture
*       ESAL_AR_STK                         Stack-frame structure for
*                                           the given architecture
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

#ifndef         ESAL_AR_STK_DEFS_H
#define         ESAL_AR_STK_DEFS_H

/* Define if floating point registers will be saved during context switches
   NOTE:  The assembly define must be changed in esal_ar_stk_defs.inc to
          match this define
   NOTE:  This define will dictate what registers are contained
          within solicited (TS) and unsolicited (AR) stack frames. */
#ifndef __ARM_FPUV2__
#define         ESAL_AR_STK_FPU_SUPPORT         ESAL_FALSE
#else
#define         ESAL_AR_STK_FPU_SUPPORT         ESAL_TRUE
#endif
/* Define number of single-precision floating point registers */
#define         ESAL_AR_STK_NUM_FPU_REGS        32

/* KeTing: Define the VFP RunFast mode FPSCR content*/
#define         ESAL_AR_STK_VFP_FPSCR_RUNFAST   0x03000000
#define         ESAL_AR_STK_VFP_FPEXC_ENABLE    0x40000000

/* Define bit mask used to determine if THUMB state for a given code pointer */
#define         ESAL_AR_STK_THUMB_MASK          ESAL_GE_MEM_32BIT_SET(0)

/* Define stack frame structure for minimum architecture registers required
   to be saved in order to enter a C environment during in interrupt / exception.
   These registers are the "scratch" registers that will not be preserved across 
   a function call boundary and any interrupt state registers that must preserved
   to allow interrupt nesting. */
typedef struct
{
    ESAL_UINT32        r1;
    ESAL_UINT32        r2;
    ESAL_UINT32        r3;
    ESAL_UINT32        r4;
    ESAL_UINT32        r5;
    ESAL_UINT32        r6;
    ESAL_UINT32        r7;
    ESAL_UINT32        r8;
    ESAL_UINT32        r9;
    ESAL_UINT32        r10;
    ESAL_UINT32        r11;
    ESAL_UINT32        r12;
    ESAL_UINT32        r13;
    ESAL_UINT32        r14;
    ESAL_UINT32        r15;
    ESAL_UINT32        r24;
    ESAL_UINT32        r25;
    ESAL_UINT32        hi;
    ESAL_UINT32        lo;
    ESAL_UINT32        r31;
    ESAL_UINT32        sr;
    ESAL_UINT32        rtn_address;

} ESAL_AR_STK_MIN;

/* Define stack frame structure for the architecture supported. 
   This stack frame contains all registers that must be preserved
   across an (unsolicited) interrupt context switch.
   NOTE:  This stack frame includes the minimum stack frame
          defined above AND all other registers for the given
          architecture. */
typedef struct  ESAL_AR_STK_STRUCT
{
    ESAL_UINT32              stack_type;
    ESAL_UINT32              r16;
    ESAL_UINT32              r17;
    ESAL_UINT32              r18;
    ESAL_UINT32              r19;
    ESAL_UINT32              r20;
    ESAL_UINT32              r21;
    ESAL_UINT32              r22;
    ESAL_UINT32              r23;
    ESAL_UINT32              r30;

    ESAL_AR_STK_MIN     min_stack;

#if (ESAL_AR_STK_FPU_SUPPORT == NU_TRUE)

    ESAL_UINT32        f0;
    ESAL_UINT32        f1;
    ESAL_UINT32        f2;
    ESAL_UINT32        f3;
    ESAL_UINT32        f4;
    ESAL_UINT32        f5;
    ESAL_UINT32        f6;
    ESAL_UINT32        f7;
    ESAL_UINT32        f8;
    ESAL_UINT32        f9;
    ESAL_UINT32        f10;
    ESAL_UINT32        f11;
    ESAL_UINT32        f12;
    ESAL_UINT32        f13;
    ESAL_UINT32        f14;
    ESAL_UINT32        f15;
    ESAL_UINT32        f16;
    ESAL_UINT32        f17;
    ESAL_UINT32        f18;
    ESAL_UINT32        f19;
    ESAL_UINT32        f20;
    ESAL_UINT32        f21;
    ESAL_UINT32        f22;
    ESAL_UINT32        f23;
    ESAL_UINT32        f24;
    ESAL_UINT32        f25;
    ESAL_UINT32        f26;
    ESAL_UINT32        f27;
    ESAL_UINT32        f28;
    ESAL_UINT32        f29;
    ESAL_UINT32        f30;
    ESAL_UINT32        f31;
    ESAL_UINT32        fpu_ctl31;

#endif /* (ESAL_AR_STK_FPU_SUPPORT == NU_TRUE) */

} ESAL_AR_STK;

#endif  /* ESAL_AR_STK_DEFS_H */
