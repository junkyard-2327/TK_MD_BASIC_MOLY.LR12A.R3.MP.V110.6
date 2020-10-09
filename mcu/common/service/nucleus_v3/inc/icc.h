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
*   FILE NAME
*
*       icc.h
*
*   COMPONENT
*
*       ICC - Inter-Core Communications for Nuclues SMP
*
*   DESCRIPTION
*
*       This file contains data structure definitions and constants for
*       the Inter-Core Communications component.
*
*   DATA STRUCTURES
*
*       ICC_MSG_DATA
*       ICC_MSG_TYPE
*
*   DEPENDENCIES
*
*       None
*
***********************************************************************/

#ifndef I_C_C_H_
#define I_C_C_H_

/* Define constants local to this component.  */

#define         ICC_SCHEDULE_MSG            0
#define         ICC_SHUTDOWN_MSG            1
#define         ICC_PAUSE_MSG               2
#define         ICC_RPC_MSG                 3
#define         ICC_DATA_MSG                4
#define         ICC_SYNC_MSG                5

#define         ICC_MAX_MSGS                ICC_SYNC_MSG + 1

/* define ERROR codes specific for this component */
#define         ICC_ERROR                   -79

/* ICC message data type, represents the constants in this section */
typedef           UINT32                    ICC_MSG_TYPE;

/* ICC data sturcture used in message passing */
typedef struct ICC_MSG_DATA_t
{
    ESAL_GE_LOCK         lock;
    UINT32               ipi_mask;    /* update in DesignDoc */
    UINT32               data;        /* DesignDoc */
} ICC_MSG_DATA;

#if (defined(CFG_NU_OS_KERN_PLUS_SMP_ENABLE) && (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1))

#ifdef CFG_NU_OS_SVCS_PWR_ENABLE

/* Power management defines for ICC */
#define ICC_POWER_DOWN_OP                0x0
#define ICC_STANDBY_OP                   0x1
#define ICC_POWER_ON_OP                  0x2

typedef VOID  (*ICC_TGT_OP_FUNC)(UINT32 cpu_id, UINT32 desired_op);

typedef struct ICC_TGT_FUNCS_t
{
    ICC_TGT_OP_FUNC     tgt_set_op;
} ICC_TGT_FUNCS;

#endif /* CFG_NU_OS_SVCS_PWR_ENABLE */

#endif /* (defined(CFG_NU_OS_KERN_PLUS_SMP_ENABLE) && (CFG_NU_OS_KERN_PLUS_SMP_CPU_COUNT > 1)) */

/* ICC external intefaces, Initialization, ICC message send/receive */

STATUS          ICC_Initialize (VOID);
STATUS          ICC_Send (ESAL_CPU_MASK * cpu_mask, UNSIGNED msg_type);
STATUS          ICC_Send_With_Data (ESAL_CPU_MASK * cpu_mask, UNSIGNED msg_type,
                                    UINT32  icc_data);
STATUS          ICC_Receive (UINT32);

/* ICC LISR, activated on arrival of an IPI*/
VOID            ICC_Handle_IPI (INT);

#endif /* I_C_C_H_ */
