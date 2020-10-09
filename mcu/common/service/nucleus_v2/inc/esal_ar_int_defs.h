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
*       esal_ar_int_defs.h
*
*   COMPONENT
*
*       ESAL - Embedded Software Abstraction Layer
*
*   DESCRIPTION
*
*       This file contains the architecture specific definitions,
*       structures, assembly macros, etc related to interrupts
*
*   DATA STRUCTURES
*
*       None
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

#ifndef         ESAL_AR_INT_DEFS_H
#define         ESAL_AR_INT_DEFS_H


extern ESAL_VOID ESAL_AR_RTE_cpsr_cxsf_read(ESAL_INT *cpsr_cxsf_ptr);
extern ESAL_VOID ESAL_AR_RTE_cpsr_cxsf_write(ESAL_UINT cpsr_cxsf_value);
extern ESAL_VOID ESAL_AR_RTE_cpsr_c_write(ESAL_UINT c_bits);
//extern VOID ESAL_AR_RTE_cp_write(ESAL_UINT cp, ESAL_UINT op1, ESAL_UINT cp_value, ESAL_UINT crn, ESAL_UINT crm, ESAL_UINT op2);
//extern VOID ESAL_AR_RTE_cp_read(ESAL_UINT cp, ESAL_UINT op1, ESAL_UINT *cp_value_ptr, ESAL_UINT crn, ESAL_UINT crm, ESAL_UINT op2);


/* CPSR bit defines / masks */
#define         ESAL_AR_INT_CPSR_THUMB              ESAL_GE_MEM_32BIT_SET(5)
#define         ESAL_AR_INT_CPSR_MODE_MASK          0x0000001F
#define         ESAL_AR_INT_CPSR_SYS_MODE           0x0000001F
#define         ESAL_AR_INT_CPSR_IRQ_MODE           0x00000012
#define         ESAL_AR_INT_CPSR_FIQ_MODE           0x00000011
#define         ESAL_AR_INT_CPSR_SUP_MODE           0x00000013
#define         ESAL_AR_INT_CPSR_IRQ_BIT            ESAL_GE_MEM_32BIT_SET(7)
#define         ESAL_AR_INT_CPSR_FIQ_BIT            ESAL_GE_MEM_32BIT_SET(6)
#define         ESAL_AR_INT_CPSR_SYS_DISABLED       (ESAL_AR_INT_CPSR_SYS_MODE |     \
                                                     ESAL_AR_INTERRUPTS_DISABLE_BITS)

/* Defines used to specify an interrupt source type as FIQ or IRQ.  This value
   can be bitwise OR'd with the priority field when enabling an interrupt source via
   the ESAL_GE_INT_Enable API to specify if an interrupt will be routed as an FIQ or IRQ.
   The default for all interrupt sources is IRQ routed (interrupt will be IRQ routed if
   no value is bitwise OR'd with the priority).
   NOTE:  This operation is not supported by all ARM processor implementations - some 
          processors allow any interrupt source to be either FIQ or IRQ while other
          do not allow this functionality. */
#define         ESAL_AR_INT_IRQ_ROUTED              (ESAL_INT)0x00001000
#define         ESAL_AR_INT_FIQ_ROUTED              (ESAL_INT)0x00002000

/* Define ESAL interrupt vector IDs for this architecture.
   These IDs match up with architecture interrupts.
   Values correspond to the index of entries in ESAL_GE_ISR_Interrupt_Handler[].
   Names are of the form ESAL_AR_<Name>_INT_VECTOR_ID, where <Name> comes
   directly from the hardware documentation */
#define         ESAL_AR_IRQ_INT_VECTOR_ID           0
#define         ESAL_AR_FIQ_INT_VECTOR_ID           1

/* Define the last ESAL interrupt vector ID for this architecture + 1 */
//#define         ESAL_AR_INT_VECTOR_ID_DELIMITER     (ESAL_AR_FIQ_INT_VECTOR_ID + 1)
#define         ESAL_AR_INT_VECTOR_ID_DELIMITER     (0)

/* Define ESAL exception vector IDs for the architecture.
   These IDs match up with architecture exceptions.
   Values correspond to the index of entries in ESAL_GE_ISR_Exception_Handler[].
   Names are of the form ESAL_AR_<Name>_EXCEPT_VECTOR_ID, where <Name> comes
   directly from the hardware documentation */
#define         ESAL_AR_UNDEF_EXCEPT_VECTOR_ID      0
#define         ESAL_AR_SWI_EXCEPT_VECTOR_ID        1
#define         ESAL_AR_PREFETCH_EXCEPT_VECTOR_ID   2
#define         ESAL_AR_DATA_EXCEPT_VECTOR_ID       3

/* Define the last ESAL exception vector ID for this architecture + 1 */
#define         ESAL_AR_EXCEPT_VECTOR_ID_DELIMITER  (ESAL_AR_DATA_EXCEPT_VECTOR_ID + 1)

#if 0 /* mark by HC, add mips asm to esal_extern.h */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#endif  /* ESAL_AR_INT_DEFS_H */
