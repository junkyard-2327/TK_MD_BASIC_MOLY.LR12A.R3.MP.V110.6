/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   mpu_public.h
 *
 * Project:
 * --------
 *   UMOLYA Software
 *
 * Description:
 * ------------
 *   Header file for IA MPU
 *
 * Author:
 * -------
 * -------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __MPU_PUBLIC_H__
#define __MPU_PUBLIC_H__

#if !defined(__OFFLINE_EX_LOG_PARSER__)
#include "kal_general_types.h"
#endif

/******************************************************************
 * Define date structures
 ******************************************************************/
typedef struct MPU_REG_T
{
    volatile kal_uint32    reg_MPU_ACSR;
    volatile kal_uint32    reg_MPU_CONFIG;
    kal_uint8    MPU_Enable;
    kal_uint8    exc_RI;
    kal_uint8    exc_WI;
    kal_uint8    exc_XI;
    kal_uint8    exc_REG_MATCH;
    kal_uint8    exc_REG_NUM;
    kal_uint8    reserve[2];
} _MPU_REG;

extern _MPU_REG *IA_MPU_REG_PTR[];

extern kal_bool mpu_dump_ex(kal_uint32 coreid);

#endif  /* __MPU_PUBLIC_H__ */

