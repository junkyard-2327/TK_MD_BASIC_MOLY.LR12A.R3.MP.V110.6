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
 *   us_excep_hdlr.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This file provides typedefs and definiton for PS index trace.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
#ifndef __US_EXCEP_HDLR_H__
#define __US_EXCEP_HDLR_H__

#include "usip_ex_common_def.h"
#include "scq16_ex_common_def.h"
#include "us_excep_hdlr_format.h"

#include "kal_general_types.h"
/*******************************************************************************
 * Definition 
 *******************************************************************************/
#define USIP_SCQ16_EX_SYNC_TIMEOUT  0x200000
#define USIP_SCQ16_EX_INIT_PATTERN  0x62935566
#define USIP_SCQ16_SECTION_BUFFER_SIZE  256
#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
    #define USIP0_APB_BASE                    0xA0084000
    #define USIP1_APB_BASE                    0xA0085000
    #define USIP_APB_DBG_EN_OFFSET            0x0
    #define USIP_APB_MODE_SEL_OFFSET          0x4
    #define USIP_APB_DBG_INST_OFFSET          0x10
    #define USIP_APB_DBG_EXECUTE_OFFSET       0x14
    #define USIP_APB_DBG_WRITE_ADDR_OFFSET    0x18
    #define USIP_APB_DBG_WRITE_OFFSET         0x1c
    #define USIP_APB_DBG_STATUS_OFFSET        0x20

    #define USIP_APB_DBG_ATTACH_INST          0x900
    #define USIP_APB_DBG_REQ_INST             0x811
    #define USIP_APB_DBG_STATUS_INST          0x803
    #define USIP_APB_DBG_ADDR_INST            0x801
    #define USIP_APB_DBG_PM_LOAD_INST         0x840
    #define USIP_APB_DBG_INSTR_INST           0x802
    #define USIP_APB_DBG_RESUME_INST          0x812

    #define USIP_CACHE_ALIGN                  0x20
#elif defined(MT6295M)

#else
    #error "undefined platform"
#endif 

typedef enum
{
    EX_STATUS_USIP0_0,
    EX_STATUS_USIP0_1,
    EX_STATUS_USIP1_0,
    EX_STATUS_USIP1_1,
    EX_STATUS_SCQ16_0,
    EX_STATUS_SCQ16_1,
    EX_STATUS_USIP_SCQ16_CORE_NUM,
    EX_STATUS_USIP_SCQ16_CORE_END = 0x6293beef
} USIP_SCQ16_EX_STATUS_CORE_TYPE;


typedef enum
{
	USIP0_0_FAIL_BIT_MASK = (1<<0),
	USIP0_1_FAIL_BIT_MASK = (1<<1),
	USIP1_0_FAIL_BIT_MASK = (1<<2),
	USIP1_1_FAIL_BIT_MASK = (1<<3),
	SCQ0_FAIL_BIT_MASK = (1<<4),
	SCQ1_FAIL_BIT_MASK = (1<<5),
} USIP_SCQ16_EX_CORE_BIT_MASK_TYPE;

// ----------------- function declaration -------------------

extern kal_bool INT_SyncUsipScqExceptionInfo(void);

extern void INT_GetUsipScqExceptionRecord(USIP_SCQ_EXCEPTION_RECORD_T *record);

extern kal_uint32 INT_GetUsipScqFailCore(void); //0~3: Usip, 4~5: Scq

extern void INT_DumpUsipScqExceptionInfo(kal_uint32 trace_type/*0=cadefa*/, kal_char* sys_info_str, kal_uint32 len);

extern kal_char* INT_GetUsipScqCoreName(kal_uint32 core_index); //0~3: Usip, 4~5: Scq

extern kal_uint32 INT_GetUsipScqFailCoreIndex(void);

extern void INT_GetUsipScq16ExceptionHandshakeInit(void);

extern void INT_GetUsipScq16BBMemoryInfo(void);

#endif /* __US_EXCEP_HDLR_H__ */
