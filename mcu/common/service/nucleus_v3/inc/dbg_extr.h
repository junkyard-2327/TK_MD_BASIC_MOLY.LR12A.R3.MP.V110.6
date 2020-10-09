/*************************************************************************
*
*               Copyright 2008 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
*************************************************************************/
/*************************************************************************
*
*   FILE NAME
*
*       dbg_extr.h
*
*   COMPONENT
*
*       Debug Agent - External Interface
*
*   DESCRIPTION
*
*       This file contains the C definitions for the component.
*
*   DATA STRUCTURES
*
*       DBG_EVENT_NUM
*
*   FUNCTIONS
*
*       DBG_Event_Send
*
*   DEPENDENCIES
*
*       dbg_sts.h
*
*************************************************************************/

#ifndef DBG_EXTR_H
#define DBG_EXTR_H

#ifdef __cplusplus
extern "C"
{
#endif

/* Status component. */
#include "dbg_sts.h"

/* Debug Event Number */
typedef enum _dbg_event_num_enum
{
    DBG_EVENT_NUM_NONE          = -1,
    DBG_EVENT_NUM_PROC_LOAD     = 0,
    DBG_EVENT_NUM_PROC_UNLOAD   = 1

} DBG_EVENT_NUM;

/* External API functions */
DBG_STATUS DBG_Event_Send (DBG_EVENT_NUM event_num, VOID * event_data);

#ifdef __cplusplus
}
#endif

#endif /* DBG_EXTR_H */
