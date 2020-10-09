/*************************************************************************
*
*               Copyright 2014 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
**************************************************************************

**************************************************************************
*
*     DESCRIPTION
*
*         This file contains public data structure definitions, constants
*         and functions of Circular Buffer component.
*
*************************************************************************/
#ifndef CBUFFER_H
#define CBUFFER_H

#ifdef          __cplusplus
extern  "C" {                               /* C declarations in C++ */
#endif /* _cplusplus */

/* Defines for circular buffer status */
#define       NU_CBUFFER_EMPTY        1
#define       NU_CBUFFER_FULL         2
#define       NU_CBUFFER_DATA         3

/* Control block definition for the circular buffer */
typedef struct _nu_c_buffer_struct
{
    /* Variables to index the read and write accesses into circular buffer data pointer */
    UNSIGNED   read;
    UNSIGNED   write;

    /* Number of elements in the buffer */
    UNSIGNED   element_count;

    /* Size of each element of data in circular buffer */
    UNSIGNED   element_size;

    /* Status of circular buffer either full, empty or contains data */
    STATUS     buffer_status;

    /* Data pointer of circular buffer */
    UINT8      *data_ptr;

    /* This flag indicates whether to overwrite the oldest data when buffer is full or not */
    BOOLEAN    overwrite_flag;

} NU_CBUFFER;

/* Macros to get the status of buffer */
#define NU_CBUFFER_STATUS_GET(cbuffer_ptr)    (((NU_CBUFFER *)cbuffer_ptr)->buffer_status)

/*******************************/
/* Function Prototypes         */
/*******************************/
STATUS NU_CBuffer_Initialize(NU_CBUFFER **cbuffer, UNSIGNED element_size, UNSIGNED element_count, BOOLEAN overwrite_when_full);
STATUS NU_CBuffer_Get_Item(NU_CBUFFER *cbuffer, VOID *data);
STATUS NU_CBuffer_Put_Item(NU_CBUFFER *cbuffer, VOID *data);

#if (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE)

STATUS NU_CBuffer_Deinitialize(NU_CBUFFER *cbuffer);

#endif /* (CFG_NU_OS_KERN_PLUS_COMMON_CERTIFIED_NUCLEUS == NU_FALSE) */

#ifdef          __cplusplus
}
#endif /* _cplusplus */

#endif /* !CBUFFER_H */
