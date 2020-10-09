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
*         This file contains data structure definitions used in the common
*         service linked list routines.
*
***********************************************************************/

/* Check to see if the file has been included already.  */
#ifndef COMMON_SERVICES_H
#define COMMON_SERVICES_H

#include <string.h>

/* The following macro is used to initialize control blocks
   during component creation, applications are clearing the
   control blocks this can be disabled. */
#if (CFG_NU_OS_KERN_PLUS_COMMON_AUTO_CLEAR_CB == NU_TRUE)

#define CSC_CLEAR_CB(x,y)       memset(x,0,sizeof(y))

#else

#define CSC_CLEAR_CB(x,y)

#endif

#endif /* COMMON_SERVICES_H */
