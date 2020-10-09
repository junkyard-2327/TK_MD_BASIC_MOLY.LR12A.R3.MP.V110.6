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
 *   mddbg.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Modem debugging related implementation
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __SST_MDDBG__
#define __SST_MDDBG__

#include "mddbg_public.h"

#if !defined(DISABLE_MDDBG_FUNCTION)
#include "kal_public_api.h"
#include "ex_item.h"
#endif 


#if defined(__MIPS_IA__) 
#define IRQ_MDDBG_CODE IRQ_SW_LISR22_CODE
#define MAX_CONFIG_VPE_NUM CONFIG_MAX_VPE
#define MAX_BP_NUM 2
#define MAX_WP_NUM 1
#define WATCH3_NUM 1
#endif 

#if !defined(DISABLE_MDDBG_FUNCTION)
/* MDDBG Flags */
#define MDDBG_CTRL_BY_ICE          (1UL<< 0)
#define MDDBG_CTRL_BY_TARGET       (1UL<< 1)
#define MDDBG_CTRL_INIT_VAL        (1UL<<30)
#define MDDBG_MODE_M2H             (1UL<<29)
#define MDDBG_MODE_COND_CHECK      (1UL<<28)
#define MDDBG_MODE_LOG_ONLY        (1UL<<27)
#define MDDBG_MODE_TASK_INIT_SET   (1UL<<26)


enum mddbg_def_db{
    MDDBG_VAR_COUNT=16U,
    MDDBG_CONDITION_BUFFER=128U,
    MDDBG_BP_MASK_OFFSET=0U,
    MDDBG_WP_MASK_OFFSET=8U,
    /* ILM Comands, bit15-0 are reserved for BP/WP */
    MDDBG_CMD_SETBP   = 1U<<31,
    MDDBG_CMD_SETWP   = 1U<<30,
    MDDBG_CMD_REMOVEBP = 1U<<29,
    MDDBG_CMD_REMOVEWP = 1U<<28,
    MDDBG_CMD_MONITOR = 1U<<27,
    MDDBG_CMD_M2H     = 1U<<26,
    MDDBG_CMD_LOG     = 1U<<25, /* Output log, the MONITOR must be 1 */
    MDDBG_CMD_QUERY   = 1U<<24, /* Query Status */
    
    CHIP_BP_CNT=MAX_BP_NUM,
    CHIP_WP_CNT=MAX_WP_NUM,

   
    CHIP_CORE_CNT = CONFIG_MAX_VPE,  /*VPE Num*/
 
};


typedef struct mddbg_req{
    kal_uint8  ref_count;
    kal_uint16 msg_len;
    kal_uint32 cmd;        //setting flags, which kinds of parameter is enabled, enable/disable/query
    kal_uint32 proc_idx;
    kal_uint32 bpAddr[CHIP_BP_CNT];
    kal_uint32 bpMask[CHIP_BP_CNT];
    kal_uint32 wpAddr[CHIP_WP_CNT];
    kal_uint32 wpMask[CHIP_WP_CNT];
    kal_uint32 wpType[CHIP_WP_CNT];
    kal_uint32 var[MDDBG_VAR_COUNT];
}mddbg_req_struct;

typedef struct mddbg_response{
    kal_uint8  ref_count;
    kal_uint16 msg_len;
    kal_uint32 cmd;        //setting flags, which kinds of parameter is enabled, enable/disable/query
    kal_uint32 proc_idx;
    kal_uint32 bpAddr[CHIP_BP_CNT];
    kal_uint32 bpMask[CHIP_BP_CNT];
    kal_uint32 wpAddr[CHIP_WP_CNT];
    kal_uint32 wpMask[CHIP_WP_CNT];
    kal_uint32 wpType[CHIP_WP_CNT];
    kal_uint32 var[MDDBG_VAR_COUNT];
}mddbg_response_struct;

extern void mddbg_backup(void);
extern void mddbg_restore(void);
extern void mddbg_init(void);

#endif /* !DISABLE_MDDBG_FUNCTION */

typedef struct mddbg_bp_config_t{
    kal_uint32 addr;
    kal_uint32 addr_mask;
}mddbg_bp_config_t;

typedef struct mddbg_wp_config_t{
    kal_uint32 addr;
    kal_uint32 addr_mask;
    kal_uint32 type;
}mddbg_wp_config_t;


void mddbg_isr_lisr(void);


#endif /* __SST_MDDBG__ */

