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
*         This file contains function protypes related to control block
*         memory acquisition routines.
*
***********************************************************************/

/* Check to see if the file has been included already.  */
#ifndef CBM_H
#define CBM_H

/* Macro Definitions */
#ifdef CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE

#define  CBM_KERNEL_OBJECT_ID_OFFSET     sizeof(CS_NODE)

#else

#define  CBM_KERNEL_OBJECT_ID_OFFSET     0

#endif /* CFG_NU_OS_KERN_PLUS_SUPPLEMENT_ENABLE */

#ifdef NU_CONTROL_BLOCK_HIDING

/* Setup the basic defines that will be used for setting up a new
   control block */
#define CBM_SETUP_CB(application, kernel, member_name)      \
        {                                                   \
            /* Update handle in user space */               \
            application -> nu_handle = kernel;              \
            kernel -> member_name = application;            \
        }

#define CBM_GET_CB(application, type)           (application == NU_NULL ? NU_NULL : (type *)(application -> nu_handle))
#define CBM_APP_CB(kernel, type, member_name)   (((type *)kernel) -> member_name)
#define CBM_DEREF_CB(application, type)         ((type *)(application -> nu_handle))

#else

#define CBM_SETUP_CB(application, kernel, member_name)
#define CBM_GET_CB(application, type)           (type *)(application)
#define CBM_APP_CB(kernel, type, member_name)   ((type *)kernel)
#define CBM_DEREF_CB(application, type)         ((type *)(application))

#endif /* NU_CONTROL_BLOCK_HIDING */

/* The following macros are for internal pointer usage where only error checking
   or trace support is utilizing the pointer.  To avoid warnings these will not be
   used when both are disabled.  When enabled this macro will declare the kernel
   variable and get the pointer from the handle */
#if (CFG_NU_OS_KERN_PLUS_COMMON_ERROR_CHECKING == NU_TRUE)
#define CBM_GET_CB_INTERNAL(kernel, application, type)  type *kernel = CBM_GET_CB(application, type)
#else
#define CBM_GET_CB_INTERNAL(kernel, application, type)
#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_ERROR_CHECKING == NU_TRUE) */

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

/* Internal Control Block Memory Allocation Function */
VOID           *CBM_Allocate(UINT32 cb_size);
STATUS          CBM_Deallocate(VOID *cb);

#endif /* CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE */

#endif /* CBM_H */
