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
 * ubm_vrb.h
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
/*! @file ubm_vrb.h
    @author Bo-Kai Huang
    @date 2016/06/01

    @brief The header file of USB buffer definition
*/
/****************************************************************************/
 
#ifndef  _UBM_VRB_INC
#define  _UBM_VRB_INC
/****************************************************************************/
#include "ubm.h"
#include "hifcpp_cb.h"
extern "C" 
{
#include "kal_public_api.h"
#include "ubm_type.h"
}
/****************************************************************************
 * Definitions
 ****************************************************************************/
#define UBM_VRB_ADDR_MAP_NUM    512

/****************************************************************************
 * Type definitions
 ****************************************************************************/

/****************************************************************************
 * Global variables
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/ 
/* VRB address translator */
class ubm_vrb_addr_translate {

public:
    ubm_vrb_addr_translate();
    ubm_vrb_phy_addr vir2phy_and_set_map(kal_uint32 virAddr, kal_uint16 virLen);
    kal_uint32 phy2vir_and_del_map(kal_uint32 phyAddr);

private:
    kal_uint32 addrMap[2][UBM_VRB_ADDR_MAP_NUM];     // addrMap[0] for virtual, addrMap[1] for physical
    hifcpp_cb_manager<kal_uint32> virAddrCb;
    hifcpp_cb_manager<kal_uint32> phyAddrCb;
};

inline ubm_vrb_addr_translate::ubm_vrb_addr_translate(): virAddrCb(addrMap[0], sizeof(kal_uint32) * UBM_VRB_ADDR_MAP_NUM), phyAddrCb(addrMap[1], sizeof(kal_uint32) * UBM_VRB_ADDR_MAP_NUM)
{
}


/* VRB address translate */
ubm_vrb_addr_translate* ubm_get_vrb_addr_map_instance(kal_uint8 txQueNo);

extern "C" ubm_vrb_phy_addr ubm_addr_vir2phy_and_save(kal_uint8 txQueNo, kal_uint32 virAddr, kal_uint16 virLen);
extern "C" kal_uint32 ubm_addr_phy2vir_and_delete(kal_uint8 txQueNo, kal_uint32 phyAddr);

/* VRB release */
extern "C" void ubm_vrb_virtual_addr_release(void* vrbVirAddr, kal_uint16 relLen);

/****************************************************************************/
#endif /* _UBM_VRB_INC */

