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

/*******************************************************************************
 * Filename:
 * ---------
 *   ubm_nfhb.cpp
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *   
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
/**
 *  @file   ubm_nfhb.cpp
 *  @brief  UBM internal function implementation.
 *
 *  @author Bo-Kai Huang, 
 *  @date   2016/06/01
 *
 **/

#include "ubm.h"
#include "ubm_nfhb.h"
#if !defined(__MAUI_BASIC__)
#include "TrcMod.h"
#endif

/*---------------------------------------------------------------------------
 * structure, constants, macro definitions
 *---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 * global variable declarations
 *---------------------------------------------------------------------------*/
static ubm_nfhb ubm_nfhb_inst[UBM_TX_QUEUE_NUM];

/*---------------------------------------------------------------------------
 * UBM internal methods implementation
 *---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 * public methods implementation
 *---------------------------------------------------------------------------*/
ubm_nfhb* ubm_get_nfhb_instance(kal_uint8 txQueNo)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);

    return &(ubm_nfhb_inst[txQueNo]);
}

/*---------------------------------------------------------------------------
 * export methods implementation
 *---------------------------------------------------------------------------*/
/* NFHB */
kal_uint8* ubm_allocate_nfhb(kal_uint8 txQueNo, kal_uint32 allocSize)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    return ubm_nfhb_inst[txQueNo].alloc_and_set_nfhb(allocSize);
}

void ubm_release_nfhb(kal_uint8 txQueNo, void* nfhbAddr, kal_uint32 relSize)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    ubm_nfhb_inst[txQueNo].release_nfhb(nfhbAddr, relSize);
    return;
}

