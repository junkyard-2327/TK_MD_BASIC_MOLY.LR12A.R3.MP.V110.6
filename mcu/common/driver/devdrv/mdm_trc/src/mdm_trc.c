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
 *   mdm_trc.c
 *
 * Project:
 * --------
 *   UMOLYA_Software
 *
 * Description:
 * ------------
 *   This file defines MDM exception functions.
 *
 * Author:
 * -------
 *   
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "mdm_trc.h"

#if defined(__COSIM_BYPASS_DRV__)
/*************************************************************************
* FUNCTION
*  MDM_ASSERT
*
* DESCRIPTION
*  This function created for RTL CoSim load for ASSERT support
*
* PARAMETERS
*  none
*
* RETURNS
*  0
*
*************************************************************************/
void MDM_ASSERT(kal_uint32 e1, kal_uint32 e2, kal_uint32 e3)
{
    MDM_TM_STR_CLEAR_WRITE(0x0); 
    MDM_STR0_WRITE('A'); 
    MDM_STR0_WRITE('S');
    MDM_STR0_WRITE('S');
    MDM_STR0_WRITE('E');
    MDM_STR0_WRITE('R');
    MDM_STR0_WRITE('T');
    MDM_TM_STR_DISPLAY_WRITE(0x0); 
    MDM_TM_STR_CLEAR_WRITE(0x0); 
    MDM_STR0_WRITE('e'); 
    MDM_STR0_WRITE('1'); 
    MDM_TM_STR_DISPLAY_WRITE(0x0); 
    MDM_INT32_WRITE(e1); 
    MDM_TM_STR_CLEAR_WRITE(0x0); 
    MDM_STR0_WRITE('e'); 
    MDM_STR0_WRITE('2'); 
    MDM_TM_STR_DISPLAY_WRITE(0x0); 
    MDM_INT32_WRITE(e2); 
    MDM_TM_STR_CLEAR_WRITE(0x0); 
    MDM_STR0_WRITE('e'); 
    MDM_STR0_WRITE('3'); 
    MDM_TM_STR_DISPLAY_WRITE(0x0); 
    MDM_INT32_WRITE(e3); 
	MDM_INT32_WRITE(ASSERT_ERROR_MAGIC);
    MDM_TM_END_FAIL_WRITE; 
    MDM_TM_END_ASSERT_WRITE; 
    while(1);
}
/*************************************************************************
* FUNCTION
*  MDM_kal_fatal_error_handler
*
* DESCRIPTION
*  This function created for RTL CoSim load for fatal error handler support
*
* PARAMETERS
*  none
*
* RETURNS
*  0
*
*************************************************************************/

void MDM_kal_fatal_error_handler(kal_uint32 code1, kal_uint32 code2)
{ 
    MDM_TM_STR_CLEAR_WRITE(0x0); 
    MDM_STR0_WRITE('F'); 
    MDM_STR0_WRITE('A'); 
    MDM_STR0_WRITE('T'); 
    MDM_STR0_WRITE('A'); 
    MDM_STR0_WRITE('L'); 
    MDM_STR0_WRITE(' '); 
    MDM_STR0_WRITE('E'); 
    MDM_STR0_WRITE('R'); 
    MDM_STR0_WRITE('R');
    MDM_STR0_WRITE('O'); 
    MDM_STR0_WRITE('R'); 
    MDM_TM_STR_DISPLAY_WRITE(0x0); 
    MDM_TM_STR_CLEAR_WRITE(0x0); 
    MDM_STR0_WRITE('C'); 
    MDM_STR0_WRITE('O'); 
    MDM_STR0_WRITE('D'); 
    MDM_STR0_WRITE('E'); 
    MDM_STR0_WRITE('1'); 
    MDM_TM_STR_DISPLAY_WRITE(0x0); 
    MDM_INT32_WRITE(code1); 
    MDM_TM_STR_CLEAR_WRITE(0x0); 
    MDM_STR0_WRITE('C'); 
    MDM_STR0_WRITE('O'); 
    MDM_STR0_WRITE('D'); 
    MDM_STR0_WRITE('E');
    MDM_STR0_WRITE('2'); 
    MDM_TM_STR_DISPLAY_WRITE(0x0); 
    MDM_INT32_WRITE(code2); 
	MDM_INT32_WRITE(FATAL_ERROR_MAGIC);
    MDM_TM_END_FAIL_WRITE; 
    MDM_TM_END_ASSERT_WRITE; 
    while(1);
}


void MDM_EXCEPTION(void)
{
    MDM_TM_STR_CLEAR_WRITE(0x0); 
    MDM_STR0_WRITE('E'); 
    MDM_STR0_WRITE('X');
    MDM_STR0_WRITE('C');
    MDM_STR0_WRITE('E');
    MDM_STR0_WRITE('P');
    MDM_STR0_WRITE('T');
    MDM_STR0_WRITE('I');
    MDM_STR0_WRITE('O');
    MDM_STR0_WRITE('N');
    MDM_TM_STR_DISPLAY_WRITE(0x0);
    MDM_INT32_WRITE(EXCEPTION_ERROR_MAGIC);
    MDM_TM_END_FAIL_WRITE;
    MDM_TM_END_ASSERT_WRITE; 
    while (1);
}
#endif


