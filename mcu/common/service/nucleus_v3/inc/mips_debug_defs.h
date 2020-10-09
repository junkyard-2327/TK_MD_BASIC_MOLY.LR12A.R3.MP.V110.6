/***********************************************************************
*
*             Copyright 2011 Mentor Graphics Corporation
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
*       mips_debug_defs.h
*
*   DESCRIPTION
*
*       This file contains all definitions, structures, etc for the
*       MIPS Debug.
*
*   DATA STRUCTURES
*
*       None
*
*   DEPENDENCIES
*
*       None
*
***********************************************************************/

#ifndef         MIPS_DEBUG_DEFS_H
#define         MIPS_DEBUG_DEFS_H

/* Define Opcode type */
typedef         UINT32                              ESAL_AR_DBG_OPCODE;

/* Registers */

/* Register types */
typedef         UINT32                              ESAL_AR_DBG_REG32;
typedef         UINT64                              ESAL_AR_DBG_REG64;
#define         ESAL_AR_DBG_REG_SIZE_MAX            (sizeof(ESAL_AR_DBG_REG64))

/* Register sets */
#define         ESAL_AR_DBG_REG_EXPED_CNT           0

/* Register Mapping values (positive values are register offsets) */
#define         ESAL_AR_DBG_REG_MAPPED              -1
#define         ESAL_AR_DBG_REG_NOT_MAPPED          -2
#define         ESAL_AR_DBG_REG_INVALID             -3
#define         ESAL_AR_DBG_REG_STACK_POINTER       -4

/* Register Maximum ID - The maximum register ID value for the set. */
#define         ESAL_AR_DBG_REG_ID_MAX              0 /* MIPS not supported */

/* Interrupt Priority Adjust - Adjusts an interrupt priority value to
   ensure that debugging is possible.  NOT USED FOR THIS ARCHITECTURE! */
#define ESAL_AR_DBG_INT_PRIORITY_ADJUST(priority)

#endif  /* MIPS_DEBUG_DEFS_H */
