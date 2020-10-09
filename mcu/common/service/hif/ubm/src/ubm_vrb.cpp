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
 *   ubm_vrb.cpp
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
/**
 *  @file   ubm_vrb.cpp
 *  @brief  UBM internal function implementation.
 *
 *  @author Bo-Kai Huang, 
 *  @date   2016/06/01
 *
 **/

#include "ubm.h"
#include "ubm_vrb.h"
#if !defined(__MAUI_BASIC__)
#include "TrcMod.h"
#endif

/*---------------------------------------------------------------------------
 * structure, constants, macro definitions
 *---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 * global variable declarations
 *---------------------------------------------------------------------------*/
static ubm_vrb_addr_translate ubm_vrb_addr_map_inst[UBM_TX_QUEUE_NUM];

/*---------------------------------------------------------------------------
 * UBM internal methods implementation
 *---------------------------------------------------------------------------*/

/* class: ubm_vrb_addr_translate */
ubm_vrb_phy_addr ubm_vrb_addr_translate::vir2phy_and_set_map(kal_uint32 virAddr, kal_uint16 virLen)
{
    kal_uint8 i = 0;
    ubm_vrb_phy_addr phyAddrResult;
    v2p_addr_t v2pAddr;
  
    kal_mem_set(&phyAddrResult, 0, sizeof(ubm_vrb_phy_addr));

    hif_data_trace(UBM_VRB_VIR2PHY_VIR, virAddr, virLen);

    v2pAddr.v_addr = virAddr;
    v2pAddr.v_len = virLen;
    copro_vrb_to_phy_addr(&v2pAddr);

    while((i < 2) && (v2pAddr.p_len[i] > 0)) {
        
        phyAddrResult.phyAddr[i] = v2pAddr.p_addr[i];
        phyAddrResult.phyLen[i] = v2pAddr.p_len[i];

        hif_data_trace(UBM_VRB_VIR2PHY_PHY, i, phyAddrResult.phyAddr[i], phyAddrResult.phyLen[i]);

        if(!virAddrCb.is_full() && !phyAddrCb.is_full()) {
            virAddrCb.push_back(virAddr);
            phyAddrCb.push_back(v2pAddr.p_addr[i]);
        }
        else {
            ASSERT(0);
        }

        virAddr += v2pAddr.p_len[i];
        i++;
    }

    ASSERT(i <= 2);
    phyAddrResult.segNum = i;

    return phyAddrResult;
}

kal_uint32 ubm_vrb_addr_translate::phy2vir_and_del_map(kal_uint32 phyAddr)
{
    kal_uint32 virAddr = 0;

    if(!virAddrCb.is_empty() && !phyAddrCb.is_empty()) {
        if(phyAddr == phyAddrCb.pop_front()) {
            virAddr = virAddrCb.pop_front();
        }
        else {
            ASSERT(0); // the physical address is not the first element of phyAddrCb 
        }
    }

    return virAddr;
}

/*---------------------------------------------------------------------------
 * public methods implementation
 *---------------------------------------------------------------------------*/
ubm_vrb_addr_translate* ubm_get_vrb_addr_map_instance(kal_uint8 txQueNo)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);

    return &(ubm_vrb_addr_map_inst[txQueNo]);
}

/*---------------------------------------------------------------------------
 * export methods implementation
 *---------------------------------------------------------------------------*/
/* VRB address mapping*/
ubm_vrb_phy_addr ubm_addr_vir2phy_and_save(kal_uint8 txQueNo, kal_uint32 virAddr, kal_uint16 virLen)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    return ubm_vrb_addr_map_inst[txQueNo].vir2phy_and_set_map(virAddr, virLen);
}

kal_uint32 ubm_addr_phy2vir_and_delete(kal_uint8 txQueNo, kal_uint32 phyAddr)
{
    ASSERT(UBM_TX_RB_Q == txQueNo);
    return ubm_vrb_addr_map_inst[txQueNo].phy2vir_and_del_map(phyAddr);
}

/* VRB release */
void ubm_vrb_virtual_addr_release(void* vrbVirAddr, kal_uint16 relLen)
{
    // use COPRO API to release VRB
    copro_vrb_release(vrbVirAddr, relLen, VRB_USER_USBCORE_TASK);
    return;
}
