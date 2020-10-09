/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2010
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
 *      ebc_internal.h
 *
 * Project:
 * --------
 *      UMOLY
 *
 * Description:
 * ------------
 *      This module defines internal variables and functions of the EBC driver
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
 *============================================================================
 *****************************************************************************/

#ifndef EBC_INTERNEL_H_
#define EBC_INTERNEL_H_

#include "ebc_reg.h"
#include "mdl_reg.h"
#include "mdp_reg.h"
#include "mtol_reg.h"
#include "kal_general_types.h"

#define CH_ID_SHIFT_OFFSET (2)

#define EBC_OPT_NO_UNMASK_IRQ	0x01

#ifdef DRV_DEBUG
typedef struct {
	kal_uint32 hisr_number;
	kal_uint32 buf_full_irq;
} EBC_HISR_INFO;
#endif // DRV_DEBUG

// ================== Handle Record ===================
typedef struct {
    kal_uint32 buf_sz;
    kal_uint32 base_addr;
    kal_uint32 start_addr;
    kal_bool   IsWrapped;
} EBC_HANDLE_CH_RECORD;

typedef struct {
    kal_bool                IsEn;
    EBC_HANDLE_CH_RECORD    ChRecord[EBC_CH_NUM];
} EBC_HANDLE_RECORD;

// ================== Error Code ======================
typedef enum {
	EBC_NO_ERROR = 0,
	EBC_FLASH_TIMEOUT = 0x01,
	EBC_ABORT_TIMEOUT = 0x02,
	EBC_WRONG_START_ADDR_EX = 0x04,
	EBC_DBG_MODE_EN_FAIL = 0x08,
	EBC_HANDLE_POWER_DOWN_DATA_FAIL = 0x10
}EBC_ERR;

// ===== Debug API for driver test or exception ======

/* @brief EBC driver flush logger for exception debug and
 * blocking thread until flush ending or time out
 * @param timeout_tick: the tick number of time out */
kal_int32 ebc_drv_flush_logger_ex(kal_uint32 timeout_tick);

/* @brief EBC driver get active channel for exception debug
 * @param channel buffer: one bit one channel */
kal_uint32 ebc_drv_get_active_ch_ex();

/* @brief EBC driver get base address for exception debug
 * @param channel id: indicate return channel */
kal_uint32 EBC_get_ch_base_addr_ex(kal_int32 ChID);

/* @brief EBC driver get start address for exception debug
 * @param channel id: indicate return channel */
kal_uint32 EBC_get_ch_start_addr_ex(kal_int32 ChID);

/* @brief EBC driver flush for exception debug and
 * auto test mode*/
kal_uint32 ebc_drv_get_flush_abort_state(void);

/* @brief EBC driver flush for exception debug and
 * auto test mode*/
void ebc_drv_flush_ex(void);

/* @brief EBC driver abort for exception debug and
 * auto test mode*/
void ebc_drv_abort_ex(void);

/* @brief EBC driver handle buffer full for exception debug
 * and auto test mode*/
kal_int32 ebc_drv_handle_buffer_full_ex();

/* @brief EBC driver handle remaining date for exception debug
 * and auto test mode*/
kal_int32 ebc_drv_handle_remaining_data_ex();

/* @brief EBC driver open coresonic & md32 debug mode
 * for exception*/
kal_int32 ebc_drv_debug_mdoe_en_ex();

#endif /* EBC_DRV_H_ */
