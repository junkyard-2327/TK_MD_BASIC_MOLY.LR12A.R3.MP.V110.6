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
 *   hw_itc.h
 *
 * Project:
 * --------
 *
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
 *
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
 *
****************************************************************************/
#ifndef DRV_ITC_H 
#define DRV_ITC_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "mips_ia_utils_public.h"
#include "mips_ia_utils.h"

#define ITC_FIFO_CELL_CNT   (16)
#define ITC_FIFO_ID_SHIFT   (4) //log2(ITC_FIFO_CELL_CNT)
#define ITC_SEMA_CELL_CNT   (16)
#define ITC_CELL_CNT        (ITC_FIFO_CELL_CNT + ITC_SEMA_CELL_CNT)
#define ITC_ADDR_MASK       (0x3)
#define ITC_ENTRY_GRAIN     (0x0)
#define ITC_EN              (0x1)
#define ITC_SIZE            (4096)
/* 0x1FC0_0000 ~ 0x1FC0_1000 */
#define ITC_BASE_ADDR       (0x1FC00000)
#define ERRCTL_ITC          (1<<26)

#define ITC_CONF ((ITC_ADDR_MASK << 10) | ITC_ENTRY_GRAIN)
#define ITC_BASE (ITC_BASE_ADDR | ITC_EN)

typedef struct
{
    kal_uint32 address;
    kal_uint32 irq_mask;
#if defined(DEBUG_KAL)
    void       *owner_context;
    kal_uint32 itc_start_time;
    kal_uint32 itc_taker;
    kal_uint32 max_itc_hold_time;
    kal_uint32 max_itc_taker;
#endif
} itc_tbl_t;

typedef struct {
    kal_uint32 itc_id;
    kal_uint32 vpe_num;
    kal_uint32 lock_count;
} kal_itc_lock_type;

extern itc_tbl_t itc_tbl[ITC_CELL_CNT];

/* ITC view ids */
typedef enum {
    ITC_VIEW_BYPASS   = 0x00,
    ITC_VIEW_CONTROL  = 0x08,
    ITC_VIEW_EF_SYNC  = 0x10,
    ITC_VIEW_EF_TRY   = 0x18,
    ITC_VIEW_PV_SYNC  = 0x20,
    ITC_VIEW_PV_TRY   = 0x28
} ITC_VIEW;

/* Function API */
kal_uint32 itc_cell_read(kal_uint32 cell_addr, ITC_VIEW view);
void itc_cell_write(kal_uint32 cell_addr, ITC_VIEW view, kal_uint32 data);

void itc_init(void);

extern kal_uint32 kal_tc_prio_count[14];
extern kal_uint32 kal_tc_prio_save[14];

#define KAL_CURRENT_PRIO(current_prio)                              \
    do{                                                             \
       current_prio = (miu_mfc0(MIU_C0_TCSCHEDULE) & 0x3);         \
    }while(0); 


#define KAL_HRT_RAISE_PRIO_TO_2()                                   \
    do{                                                             \
       miu_save_and_set_c0_tcschedule_grp(2);         \
    }while(0);                                                      


#define KAL_ITC_RAISE_PRIO_TO_3(old_prio)                           \
    do{                                                             \
       old_prio = miu_save_and_set_c0_tcschedule_grp(3);            \
    }while(0);                                                      


/* TCschedule trottle setting is binding with Task/HISR, independent with VPE it running */
#define KAL_ITC_RESTORE_PRIO(prio)                          \
    do{                                                             \
        miu_save_and_set_c0_tcschedule_grp(prio);                   \
    }while(0);


#endif
