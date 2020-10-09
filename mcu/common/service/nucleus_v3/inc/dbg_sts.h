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
*       dbg_sts.h
*
*   COMPONENT
*
*       Debug Agent - Status
*
*   DESCRIPTION
*
*       This file contains the declarations for the component.
*
*   DATA STRUCTURES
*
*       DBG_STATUS
*
*   FUNCTIONS
*
*       None
*
*   DEPENDENCIES
*
*       None
*
*************************************************************************/

#ifndef DBG_STS_H
#define DBG_STS_H

/***** Global defines */

/* Status Code - Indicates the resulting status of an operation. */

typedef enum _dbg_status_enum
{
    DBG_STATUS_NONE                     = -7901,
    DBG_STATUS_OK                       = -7902,
    DBG_STATUS_TOO_MANY_CMDS            = -7903,
    DBG_STATUS_NONEXISTENT_CMD          = -7904,
    DBG_STATUS_BUFFER_TOO_SMALL         = -7905,
    DBG_STATUS_BAD_FLAVOR               = -7906,
    DBG_STATUS_OUT_OF_RANGE             = -7907,
    DBG_STATUS_ALREADY_EXISTS           = -7908,
    DBG_STATUS_OUT_OF_MEMORY            = -7909,
    DBG_STATUS_INVALID_THREAD           = -7910,
    DBG_STATUS_BAD_PRIORITY             = -7911,
    DBG_STATUS_NOT_SUPPORTED_BY_OS      = -7912,
    DBG_STATUS_ALREADY_ATTACHED         = -7913,
    DBG_STATUS_NOT_ATTACHED             = -7914,
    DBG_STATUS_OUT_OF_BOUNDS            = -7915,
    DBG_STATUS_INVALID_ADDRESS          = -7916,
    DBG_STATUS_BUSS_ERR                 = -7917,
    DBG_STATUS_PROTECTED                = -7918,
    DBG_STATUS_VERIFY_FAIL              = -7919,
    DBG_STATUS_AUTHENTICATION_FAILED    = -7920,
    DBG_STATUS_BAD_WIDTH                = -7921,
    DBG_STATUS_BAD_SEQUENCE             = -7922,
    DBG_STATUS_BAD_STACK_SIZE           = -7923,
    DBG_STATUS_INVALID_BREAKPOINT       = -7924,
    DBG_STATUS_BAD_COMMAND_CODE         = -7925,
    DBG_STATUS_ALREADY_ACTIVE           = -7926,
    DBG_STATUS_NOT_ACTIVE               = -7927,
    DBG_STATUS_BAD_OFFSET               = -7928,
    DBG_STATUS_NO_REPLY                 = -7929,
    DBG_STATUS_NO_SYS_CALL              = -7930,
    DBG_STATUS_NOT_WRITABLE             = -7931,
    DBG_STATUS_CANNOT_SUSPEND_THREAD    = -7932,
    DBG_STATUS_CANNOT_RESUME_THREAD     = -7933,
    DBG_STATUS_INVALID_CONTEXT          = -7934,
    DBG_STATUS_STILL_ATTACHED           = -7935,
    DBG_STATUS_FAILED                   = -7936,
    DBG_STATUS_NOT_IN_DEBUG_SCOPE       = -7937,
    DBG_STATUS_NOT_SUPPORTED            = -7938,
    DBG_STATUS_INVALID_ID               = -7939,
    DBG_STATUS_RESOURCE_UNAVAILABLE     = -7940,
    DBG_STATUS_INVALID_PATH             = -7941,
    DBG_STATUS_INVALID_SIZE             = -7942,
    DBG_STATUS_NOT_IN_SESSION           = -7943,
    DBG_STATUS_INVALID_OPERATION        = -7944,
    DBG_STATUS_PROTECTED_ACCESS         = -7945,
    DBG_STATUS_STILL_ACTIVE             = -7946,
    DBG_STATUS_INVALID_STATE            = -7947,
    DBG_STATUS_INVALID_FORMAT           = -7948,
    DBG_STATUS_INVALID_TYPE             = -7949,
    DBG_STATUS_INVALID_DATA             = -7950,
    DBG_STATUS_INVALID_MODE             = -7951,
    DBG_STATUS_INVALID_PARAMETERS       = -7952,
    DBG_STATUS_INVALID_DRIVER           = -7953,
    DBG_STATUS_INSUFFICIENT_RESOURCES   = -7954,
    DBG_STATUS_INVALID_RESOURCE         = -7955,
    DBG_STATUS_INVALID_CONNECTION       = -7956,
    DBG_STATUS_INVALID_PROCESS          = -7957,
    DBG_STATUS_INVALID_CONFIGURATION    = -7958,
    DBG_STATUS_INVALID_INFO             = -7959,
    DBG_STATUS_TIME_OUT                 = -7960

} DBG_STATUS;

/* Status code translation. */

#define DBG_STATUS_FROM_NULL_PTR_CHECK(ptr)         (((void *)(ptr) != (void *)NU_NULL) ?  DBG_STATUS_OK : DBG_STATUS_INVALID_ADDRESS)
#define DBG_STATUS_FROM_SIZE_NON_ZERO_CHECK(size)   (((size) != 0) ? DBG_STATUS_OK : DBG_STATUS_INVALID_SIZE)

#endif /* DBG_STS_H */
