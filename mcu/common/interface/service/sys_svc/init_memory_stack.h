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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   init_memory_stack.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Exported APIs for non-HAL users
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef __INIT_MEMORY_STACK_H__
#define __INIT_MEMORY_STACK_H__

#include "kal_general_types.h"

/*************************************************************************
 * Define import function prototype
 *************************************************************************/
typedef enum
{
    L4_SHM_SUPPORT = 0,         /* support,         enabled by AP */
    L4_SHM_AP_SUPPORT_DISABLE,  /* support,     NOT enabled by AP */
    L4_SHM_AP_NOT_SUPPORT,      /* NOT support, NOT enabled by AP */
}E_L4_SHM_ERROR_CODE;



/*************************************************************************
 * Define import function prototype
 *************************************************************************/
 
 /*******************************************************************************
 * <GROUP Functions>
 * 
 * FUNCTION
 *  INT_SwitchStackToRun
 * DESCRIPTION
 *  Switch current stack pointer to new_stack and then run func(...).
 * PARAMETERS
 *  stack_start: [IN] the start address of the new stack (NOT a pointer of start address)
 *  stack_size: [IN] the size of the stack
 *  func: [IN] the pointer of function which want to run
 *  argc: [IN] the number of arguments of func
 *  ...: [IN] the arguments of func
 * RETURNS
 *  The reture value of func 
 ******************************************************************************/
extern kal_uint32 INT_SwitchStackToRun(void *stack_start, kal_uint32 stack_size, kal_func_ptr func, kal_uint32 argc, ...);

 /*******************************************************************************
 * <GROUP Functions>
 * 
 * FUNCTION
 *  INT_QueryHWITCRange
 * DESCRIPTION
 *  For quering range of kal_hw_itc
 * PARAMETERS
 *  base_addr: [OUT] the base address kal_hw_itc
 *  length: [OUT] length of kal_hw_itc
 * RETURNS
 *  NA
 ******************************************************************************/
void INT_QueryHWITCRange(kal_uint32 *base_addr, kal_uint32 *length);


/*******************************************************************************
* <GROUP Functions>
* 
* FUNCTION
*  system_get_l4_share_mem_region
* DESCRIPTION
*  For quering range of L4 SHM
* PARAMETERS
*  base_addr: [OUT] the base address of L4 SHM. It is 0 if return valuse is not L4_SHM_SUPPORT
*  length: [OUT] length of L4 SHM. It is 0 if return valuse is not L4_SHM_SUPPORT
* RETURNS
*  enum E_L4_SHM_ERROR_CODE:
*  (1) L4_SHM_SUPPORT           : support,         enabled by AP
*  (2) L4_SHM_AP_SUPPORT_DISABLE: support,     NOT enabled by AP
*  (3) L4_SHM_AP_NOT_SUPPORT    : NOT support, NOT enabled by AP
******************************************************************************/
E_L4_SHM_ERROR_CODE system_get_l4_share_mem_region(kal_uint32 *base_addr, kal_uint32 *length);


/*******************************************************************************
* <GROUP Functions>
* 
* FUNCTION
*  system_set_l4_share_mem_region
* DESCRIPTION
*  internal use
* PARAMETERS
*  
* RETURNS
*  
******************************************************************************/
void system_set_l4_share_mem_region(void);


#endif  /* !__INIT_MEMORY_STACK_H__ */

