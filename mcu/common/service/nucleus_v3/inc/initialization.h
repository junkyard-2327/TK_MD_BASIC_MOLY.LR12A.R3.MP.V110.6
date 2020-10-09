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
*         the Initialization component.
*
***********************************************************************/

/* Check to see if the file has been included already.  */

#ifndef INITIALIZATION_H
#define INITIALIZATION_H

/* Constants used to indicate start and end of initialization for Nucleus PLUS. */
#define INC_START_INITIALIZE                0x0
#define INC_END_INITIALIZE                  0x2

/* This define is used internally while creating system memory pools */
#define INC_MIN_POOL_ALLOCATION             0x20

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE)

/* This flag tells that initialization stage of user application
   is complete */
#define INC_END_USER_INITIALIZE             0x4

#endif /* CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_TRUE */

/* Define function prototypes */
STATUS          INC_Initialize(VOID *first_available_memory);
VOID            INCT_Sys_Mem_Pools_Initialize(VOID  *avail_mem_ptr);

/* External variable declarations */
extern INT      INC_Initialize_State;

#ifndef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE

#if (CFG_NU_OS_KERN_PLUS_COMMON_LV_TIMEOUT > 0)

#error "For lv_timeout > 0, enable_info_api option must be enabled"

#endif /* CFG_NU_OS_KERN_PLUS_COMMON_LV_TIMEOUT > 0 */

#endif /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */

#endif /* INITIALIZATION_H */
