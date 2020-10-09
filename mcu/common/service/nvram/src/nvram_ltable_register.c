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
 * Filename:
 * ---------
 * nvram_ltable_register.c
 *
 * Project:
 * --------
 *   MAUI
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
 *------------------------------------------------------------------------------
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
 * include
 */
#include "stdio.h"
#include "string.h"

#include "kal_general_types.h"
#include "kal_public_api.h"

#include "nvram_editor_data_item.h"
#include "nvram_main.h"

#include "nvram_lid_statistics.h"



nvram_ltable_entry_struct *logical_data_item_table;

extern void nvram_ltable_register(nvram_ltable_entry_struct *table);
#if defined(__MTK_TARGET__)
    extern ltable_entry_struct logical_data_item_table_internal[];
    extern ltable_entry_struct logical_data_item_table_factory[];
    extern ltable_entry_struct logical_data_item_table_core[];
    extern ltable_entry_struct logical_data_item_table_exception[];
    extern ltable_entry_struct logical_data_item_table_ul1[];
    extern ltable_entry_struct logical_data_item_table_asband[];
    extern ltable_entry_struct logical_data_item_table_bt[];
    extern ltable_entry_struct logical_data_item_table_bwcs[];
    extern ltable_entry_struct logical_data_item_table_csg[];
    extern ltable_entry_struct logical_data_item_table_dhl[];
    extern ltable_entry_struct logical_data_item_table_drm[];
    extern ltable_entry_struct logical_data_item_table_ecompass[];
    extern ltable_entry_struct logical_data_item_table_el1[];
    extern ltable_entry_struct logical_data_item_table_emm[];
    extern ltable_entry_struct logical_data_item_table_erac[];
    extern ltable_entry_struct logical_data_item_table_errc[];
    extern ltable_entry_struct logical_data_item_table_ft[];
    extern ltable_entry_struct logical_data_item_table_gps[];
    extern ltable_entry_struct logical_data_item_table_hmu[];
    extern ltable_entry_struct logical_data_item_table_ims[];
    extern ltable_entry_struct logical_data_item_table_l1[];
    extern ltable_entry_struct logical_data_item_table_l4[];
    extern ltable_entry_struct logical_data_item_table_minilog[];
    extern ltable_entry_struct logical_data_item_table_mml1[];
    extern ltable_entry_struct logical_data_item_table_nas[];
    extern ltable_entry_struct logical_data_item_table_nmu[];
    extern ltable_entry_struct logical_data_item_table_rr[];
    extern ltable_entry_struct logical_data_item_table_rtc[];
    extern ltable_entry_struct logical_data_item_table_sbp[];
    extern ltable_entry_struct logical_data_item_table_scsi[];
    extern ltable_entry_struct logical_data_item_table_sim[];
    extern ltable_entry_struct logical_data_item_table_td[];
    extern ltable_entry_struct logical_data_item_table_umts[];
    extern ltable_entry_struct logical_data_item_table_vsim[];
    extern ltable_entry_struct logical_data_item_table_wndrv[];
	extern ltable_entry_struct logical_data_item_table_d2[];
#if defined(__C2K_RAT__)
    extern ltable_entry_struct logical_data_item_table_cl1[];
    extern ltable_entry_struct logical_data_item_table_cl1cal[];
#endif
    extern ltable_entry_struct logical_data_item_customer[];
    extern ltable_entry_struct logical_data_item_cuex[];
#else
    extern logical_data_item_table_internal[];
    extern logical_data_item_table_factory[];
    extern logical_data_item_table_core[];
    extern logical_data_item_table_exception[];
    extern logical_data_item_table_ul1[];
    extern logical_data_item_table_asband[];
    extern logical_data_item_table_bt[];
    extern logical_data_item_table_bwcs[];
    extern logical_data_item_table_csg[];
    extern logical_data_item_table_dhl[];
    extern logical_data_item_table_drm[];
    extern logical_data_item_table_ecompass[];
    extern logical_data_item_table_el1[];
    extern logical_data_item_table_emm[];
    extern logical_data_item_table_erac[];
    extern logical_data_item_table_errc[];
    extern logical_data_item_table_ft[];
    extern logical_data_item_table_gps[];
    extern logical_data_item_table_hmu[];
    extern logical_data_item_table_ims[];
    extern logical_data_item_table_l1[];
    extern logical_data_item_table_l4[];
    extern logical_data_item_table_minilog[];
    extern logical_data_item_table_mml1[];
    extern logical_data_item_table_nas[];
    extern logical_data_item_table_nmu[];
    extern logical_data_item_table_rr[];
    extern logical_data_item_table_rtc[];
    extern logical_data_item_table_sbp[];
    extern logical_data_item_table_scsi[];
    extern logical_data_item_table_sim[];
    extern logical_data_item_table_td[];
    extern logical_data_item_table_umts[];
    extern logical_data_item_table_vsim[];
    extern logical_data_item_table_wndrv[];
	extern logical_data_item_table_d2[];
#if defined(__C2K_RAT__)
    extern logical_data_item_table_cl1[];
    extern logical_data_item_table_cl1cal[];
#endif
    extern logical_data_item_customer[];
    extern logical_data_item_cuex[];
#endif

/*****************************************************************************
 * FUNCTION
 *  nvram_data_item_register
 * DESCRIPTION
 *  This function to register nvram data item tables.
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
void nvram_data_item_register(void)
{

    //NVRAM table force link
    nvram_ltable_register(logical_data_item_table_internal);
    nvram_ltable_register( logical_data_item_table_factory);
    nvram_ltable_register( logical_data_item_table_core);
    nvram_ltable_register( logical_data_item_table_exception);
    nvram_ltable_register( logical_data_item_table_ul1);
    nvram_ltable_register( logical_data_item_table_asband);
    nvram_ltable_register( logical_data_item_table_bt);
    nvram_ltable_register( logical_data_item_table_bwcs);
    nvram_ltable_register( logical_data_item_table_csg);
    nvram_ltable_register( logical_data_item_table_dhl);
    nvram_ltable_register( logical_data_item_table_drm);
    nvram_ltable_register( logical_data_item_table_ecompass);
    nvram_ltable_register( logical_data_item_table_el1);
    nvram_ltable_register( logical_data_item_table_emm);
    nvram_ltable_register( logical_data_item_table_erac);
    nvram_ltable_register( logical_data_item_table_errc);
    nvram_ltable_register( logical_data_item_table_ft);
    nvram_ltable_register( logical_data_item_table_gps);
    nvram_ltable_register( logical_data_item_table_hmu);
    nvram_ltable_register( logical_data_item_table_ims);
    nvram_ltable_register( logical_data_item_table_l1);
    nvram_ltable_register( logical_data_item_table_l4);
    nvram_ltable_register( logical_data_item_table_minilog);
    nvram_ltable_register( logical_data_item_table_mml1);
    nvram_ltable_register( logical_data_item_table_nas);
    nvram_ltable_register( logical_data_item_table_nmu);
    nvram_ltable_register( logical_data_item_table_rr);
    nvram_ltable_register( logical_data_item_table_rtc);
    nvram_ltable_register( logical_data_item_table_sbp);
    nvram_ltable_register( logical_data_item_table_scsi);
    nvram_ltable_register( logical_data_item_table_sim);
    nvram_ltable_register( logical_data_item_table_td);
    nvram_ltable_register( logical_data_item_table_umts);
    nvram_ltable_register( logical_data_item_table_vsim);
    nvram_ltable_register( logical_data_item_table_wndrv);
	nvram_ltable_register( logical_data_item_table_d2);
#if defined(__C2K_RAT__)
    nvram_ltable_register((nvram_ltable_entry_struct *)logical_data_item_table_cl1);
    nvram_ltable_register((nvram_ltable_entry_struct *)logical_data_item_table_cl1cal);
#endif
    nvram_ltable_register( logical_data_item_customer);
    nvram_ltable_register( logical_data_item_cuex);
}
