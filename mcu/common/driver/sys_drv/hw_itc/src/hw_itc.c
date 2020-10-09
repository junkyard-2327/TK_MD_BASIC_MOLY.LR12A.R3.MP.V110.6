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
 * Include Statements
 *******************************************************************************/
#include "kal_general_types.h" 
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_internal_api.h"
#include "hw_itc.h"
#include "kal_iram_section_defs.h"


/*******************************************************************************
 * Declarations of Imported Functions
 *******************************************************************************/
extern void itc_hw_init(kal_uint32 itc_conf, kal_uint32 itc_base, kal_uint32* debug_config, kal_uint32* debug_base);


/*******************************************************************************
 * Defination
 *******************************************************************************/


/*******************************************************************************
 * variable
 *******************************************************************************/
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ZI(32) itc_tbl_t itc_tbl[ITC_CELL_CNT];


/*******************************************************************************
 * static Functions
 *******************************************************************************/


/*******************************************************************************
 * Functions
 *******************************************************************************/
#if 0 // These are implemented in hw_itc_init.S
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

kal_uint32 hw_itc_conf_debug, hw_itc_base_debug;
/* ITC Init code */
void itc_init(void)
{
    kal_uint32 i;
    kal_uint32 ITC_conf, ITC_base;
    kal_uint32 core_id = kal_get_current_core_id();

    ITC_conf = ((ITC_ADDR_MASK << 10) | ITC_ENTRY_GRAIN);
    ITC_base = (ITC_BASE_ADDR | ITC_EN);

    itc_hw_init(ITC_conf, ITC_base, &hw_itc_conf_debug, &hw_itc_base_debug);

    if (core_id == 0)
    {
        for (i = 0; i < ITC_CELL_CNT; i++)
        {
            itc_tbl[i].address = (kal_uint32)(ITC_BASE_ADDR + (i << 7));
            if (i < ITC_FIFO_CELL_CNT)
            {
                itc_cell_write(itc_tbl[i].address, ITC_VIEW_CONTROL, 1);
                itc_cell_write(itc_tbl[i].address, ITC_VIEW_EF_SYNC, 1);
            }
            else
            {
                itc_cell_write(itc_tbl[i].address, ITC_VIEW_CONTROL, 0);
                itc_cell_write(itc_tbl[i].address, ITC_VIEW_BYPASS, 1);
            }
        }
    }
}


