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
*       platform.h
*
*   DESCRIPTION
*
*       This file is a wrapper header file that includes all the necessary
*       header files for the configured platform
*
*   DATA STRUCTURES
*
*       None
*
*   DEPENDENCIES
*
*       nucleus_gen_cfg.h
*       corefpga_defs.h
*       bsp/malta_defs.h
*
***********************************************************************/

#ifndef PLATFORM_H
#define PLATFORM_H

/* Include configuration header file */
#include    "nucleus_cfg.h"

/* Include header file for processor */
#include    "corefpga_defs.h"

#ifdef CFG_NU_BSP_MALTA_ENABLE

/* Include header file for MIPS Malta */
#include    "malta_defs.h"

#endif

/* Specific Information defines */
#define CPU_POWER_DOWN_OP           0x0
#define CPU_STANDBY_OP              0x1
#define CPU_POWER_ON_OP             0x2

/* Provide definition of SMP Power-Management Function */
STATUS NU_PM_Core_OP_Control(UINT32 cpu_id, UINT32 core_op, BOOLEAN trans_wait);

#endif  /* PLATFORM_H */
