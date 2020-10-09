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
 * Filename:
 * ---------
 *	sim_drv_trc.h
 *
 * Project:
 * --------
 *   general
 *
 * Description:
 * ------------
 *   This file is trace map definition.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#ifndef _SIM_DRV_TRC_H
#define _SIM_DRV_TRC_H

#ifndef GEN_FOR_PC
#include "stack_config.h"
#endif /* GEN_FOR_PC */

#include "kal_trace.h"

#if !defined(GEN_FOR_PC)
#if defined(__TST_MODULE__) || defined(__CUSTOM_RELEASE__)
    #include "sim_drv_trc_gen.h"
#endif /* TST Trace Defintion */
#endif

BEGIN_TRACE_MAP(MOD_SIM_DRV)

    TRC_MSG(LOG_SIM_DRV, "%s")
    TRC_MSG(LOG_SIM_DRV_1, "%s")
    TRC_MSG(LOG_SIM_DRV_2, "%s")
    TRC_MSG(LOG_SIM_DRV_3, "%s")
    TRC_MSG(LOG_SIM_DRV_4, "%s")

    TRC_MSG(LOG_SIM_DRV_ATR, "%s")
    TRC_MSG(LOG_SIM_DRV_BASIC_SIM_INFO, "[SIM_DRV:%d]L1usim_Reset OK voltage:%d, T:%d, app:%d, speed:%d")
    TRC_MSG(LOG_SIM_DRV_ICCID, "[SIM_DRV:%d]SIM ICCID= %s")
    TRC_MSG(LOG_SIM_DRV_ABNORMAL_CARD, "[SIM_DRV:%d]Reset with abnormal Card")
    TRC_MSG(LOG_SIM_DRV_AVG_CMD_TIME, "[SIM_DRV:%d] %d : %d, %d, %d, %d, %d")
    TRC_MSG(LOG_SIM_DRV_AVG_AUTH_TIME, "[SIM_DRV:%d] %d :SIM auth time: %d") // SIM task
    TRC_MSG(LOG_SIM_DRV_AVG_STATUS_TIME, "[SIM_DRV:%d] %d :SIM status time: %d,%d") 

    TRC_MSG(LOG_SIM_DRV_HISR, "[SIM_DRV:%d]SIM HISR int:%x, IRQEN:%x")

    TRC_MSG(LOG_SIM_DRV_ERR, "[SIM_DRV:%d][ERR]%s")

    TRC_MSG(LOG_SIM_DRV_NULL_TOUT, "[SIM_DRV:%d] : null timeout %d")
    TRC_MSG(LOG_SIM_DRV_NON_NULL_TOUT, "[SIM_DRV:%d] : non-null timeout %d")

    TRC_MSG(LOG_SIM_DRV_REMOVE_SIM, "[SIM_CUS_DRV:%d]Remove SIM : %x, %x, %x, %x, %x, %x, %x")
    TRC_MSG(LOG_SIM_DRV_INSERT_SIM, "[SIM_CUS_DRV:%d]Insert SIM : %x, %x, %x, %x, %x, %x, %x")

    TRC_MSG(LOG_SIM_DRV_EINT, "[EINT] : %x, %x, %x, %x")
    TRC_MSG(LOG_SIM_DRV_SIM_PINS, "[SIM_DRV][PINS] : %x, %x, %x, %x, %x, %x")

END_TRACE_MAP(MOD_SIM_DRV)    

#endif /* _SIM_DRV_TRC_H */ 

//
