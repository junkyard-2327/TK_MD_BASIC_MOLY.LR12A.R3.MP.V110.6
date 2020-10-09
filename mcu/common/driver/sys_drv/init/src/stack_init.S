/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   bootarm_gcc.S
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This Module defines the boot sequence of asm level.
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
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


/*************************************************************************/
/*                                                                       */
/*            Copyright (c) 1994 -2000 Accelerated Technology, Inc.      */
/*                                                                       */
/* PROPRIETARY RIGHTS of Accelerated Technology are involved in the      */
/* subject matter of this material.  All manufacturing, reproduction,    */
/* use, and sales rights pertaining to this subject matter are governed  */
/* by the license agreement.  The recipient of this software implicitly  */
/* accepts the terms of the license.                                     */
/*                                                                       */
/*************************************************************************/

/*************************************************************************/
/*                                                                       */
/* FILE NAME                                            VERSION          */
/*                                                                       */
/*      bootarm_gcc.s                                MIPS interAptiv     */
/*                                                                       */
/* COMPONENT                                                             */
/*                                                                       */
/*      IN - Initialization                                              */
/*                                                                       */
/* DESCRIPTION                                                           */
/*                                                                       */
/*      This file contains the target processor dependent initialization */
/*      routines and data.                                               */
/*                                                                       */
/*                                                                       */
/* DATA STRUCTURES                                                       */
/*                                                                       */
/*      INT_Vectors                         Interrupt vector table       */
/*                                                                       */
/* FUNCTIONS                                                             */
/*                                                                       */
/*      INT_Initialize                      Target initialization        */
/*                                                                       */
/*                                                                       */
/*************************************************************************/
#include <boot_comm.h>

#define STACK_ALIGN_NUM (5)
//.data

.section .bss, "aw"
.align      STACK_ALIGN_NUM
.global     BOOT_CORE0_SYS_Stack_Pool
BOOT_CORE0_SYS_Stack_Pool:
    //.ascii      "STACKEND"
    .space    BOOT_CORE0_SYS_STACK_SIZE//-8
    .size BOOT_CORE0_SYS_Stack_Pool, .-BOOT_CORE0_SYS_Stack_Pool

.global     BOOT_CORE0_SYS_Stack_End
BOOT_CORE0_SYS_Stack_End:
    .word     (BOOT_CORE0_SYS_Stack_Pool+(BOOT_CORE0_SYS_STACK_SIZE-4))
.size BOOT_CORE0_SYS_Stack_End, .-BOOT_CORE0_SYS_Stack_End

#if !defined(__SINGLE_CORE__)
.align      STACK_ALIGN_NUM
.global     BOOT_CORE1_SYS_Stack_Pool
BOOT_CORE1_SYS_Stack_Pool:
    //.ascii      "STACKEND"
    .space    BOOT_CORE1_SYS_STACK_SIZE//-8
    .size BOOT_CORE1_SYS_Stack_Pool, .-BOOT_CORE1_SYS_Stack_Pool

.global     BOOT_CORE1_SYS_Stack_End
BOOT_CORE1_SYS_Stack_End:
    .word     (BOOT_CORE1_SYS_Stack_Pool+(BOOT_CORE1_SYS_STACK_SIZE-4))
.size BOOT_CORE1_SYS_Stack_End, .-BOOT_CORE1_SYS_Stack_End
#endif

/******************************************************************************/

.macro gen_stack name, size, section, file, line
.section \section, "aw", @progbits
.align      STACK_ALIGN_NUM
.global     \name
.loc \file \line
\name:
    .ascii "STACKEND"
    .space \size - 8
    .type \name, @object
    .size \name, . - \name
.endm

#define SYS_STACK_INSTANCE_BEGIN()                                          \
    /* WARNING: this will be add to dep file by cpp but not check in cpp */ \
    .file   1 __FILE__;                                                     \
    .loc    1 __LINE__;

#define SYS_STACK_INSTANCE(CORE,VPE,TC,SIZE,SECTION,TYPE) \
    gen_stack SYS_STACK_NAME(CORE,VPE,TC), SIZE, #SECTION, 1, __LINE__

#include "sys_stack_config.h"

/******************************************************************************/

