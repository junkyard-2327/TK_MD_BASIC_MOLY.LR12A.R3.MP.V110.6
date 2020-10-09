/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * mte_base.c
 *
 * Project:
 * --------
 * UMOLYA
 *
 * Description:
 * ------------
 * MT_Framework mte init implement 
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$ 
 *
 * 
 ****************************************************************************/

/*****************************************************************************/
/*                            Includes                                       */
/*****************************************************************************/

#include "mte_if.h"


/*****************************************************************************/
/*                               Define                                      */
/*****************************************************************************/

/*****************************************************************************/
/*                         Global variables                                  */
/*****************************************************************************/

/*****************************************************************************/
/*                         External functions                                */
/*****************************************************************************/
extern void dmf_init_proc();
extern void dmf_create();
extern void dmf_reset();
extern kal_bool dmf_needed_peer_trace(kal_uint32 global_peer_msg_id);


/*****************************************************************************/
/*                         Internal functions                                */
/*****************************************************************************/

//void mte_framework_test_1_create();
//void mte_att_slave_agent_create();
//void mte_att_slave_agent_init_proc();

/*****************************************************************************/
/*                         Function Body                                     */
/*****************************************************************************/

void mt_elements_init()
{
    //need call mte create function here
    #ifdef __DMF_SUPPORT__
    dmf_create();
    #endif
}


void mt_elements_reset()
{
    //need call mte reset function here
    #ifdef __DMF_SUPPORT__
    dmf_reset();
    #endif
}

void mt_elements_init_proc()
{
    //need call mte init proc here
    #ifdef __DMF_SUPPORT__
    dmf_init_proc();
    #endif
}

kal_bool mt_elements_is_needed_peer_trace(kal_uint32 global_peer_msg_id)
{
    kal_bool result = KAL_FALSE;

    #ifdef __DMF_SUPPORT__
    result |= dmf_needed_peer_trace(global_peer_msg_id);
    #endif
    
    return result;
}
