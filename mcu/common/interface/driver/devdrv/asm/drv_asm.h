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
 * drv_asm.h
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
 *   This file defines ASM drivers interface
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------

 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DRV_ASM_H__
#define __DRV_ASM_H__

#include "kal_general_types.h"

typedef enum {
	ASM_SW_SWLA_MODE = 0,
	ASM_SW_SWTR_MODE,
	ASM_HW_SWLA_STRAM_MODE,
	ASM_HW_SWLA_WRAP_MODE, 
	ASM_HW_SWTR_STRAM_MODE, 
	ASM_HW_SWTR_WRAP_MODE, 
	ASM_MODE_END
}ASM_MODE;



typedef enum 
{
    ASM_CORE0_INT = 0,
    ASM_CORE1_INT,
}ASM_INT_CORE_NUM;


typedef enum 
{
    ASM_CORE0 = 0,
    ASM_CORE1,
    ASM_NUM
}ASM_MCU_CORE;



typedef enum 
{
	ASM_TC_ID_CORE_ID_EN = 0,
	ASM_PC_EN,
	ASM_MCU_PMC0_EN,
	ASM_MCU_PMC1_EN,
	ASM_MCU_ELM_CNT0_EN,
	ASM_MCU_ELM_CNT1_EN,
	ASM_MCU_ELM_CNT2_EN,
	ASM_MCU_ELM_CNT3_EN,
	ASM_ADDON_INFO0_EN,
	ASM_ADDON_INFO1_EN,
	ASM_ADDON_INFO2_EN,
	ASM_ADDON_INFO3_EN,
	ASM_PROFILE_END,
}ASM_PROFILE_OPTION;



typedef enum 
{
    ASM_THRESHOLD_INT = 0,
    ASM_AGGRESSIVE_TRIG_INT,
    ASM_APB_WR_GCR_ILLEGAL_INT,
    ASM_ILLEGAL_DISABLE_INT,
    ASM_PDI_INT,
}ASM_INT_TYPE;



typedef enum 
{
    ASM_ERROR_CODE_NO_ERROR = 0,                  // NO error
    ASM_ERROR_CODE_BUFFER_TOO_SMALL,              // Buffer size is less than 1KB
    ASM_ERROR_CODE_BUFFER_TOO_LARGE,              // Buffer size is over limitation
    ASM_ERROR_CODE_WRONG_MODE,                    // ASM mode is not defined
    ASM_ERROR_CODE_WAIT_IDLE_FAIL,                // wait idle timeout
    ASM_ERROR_CODE_OVER_ADDON_INDEX,              // start index is not druing addon range
    ASM_ERROR_CODE_OVER_ADDON_SIZE,               // addon size over 8
    ASM_ERROR_CODE_INVALID_SAMPLE_RATE,           // sampeling = 0
    ASM_ERROR_CODE_INVALID_RW_POINTER,            // invalid r/w pointer
    
}ASM_ERROR_CODE;

//////////////////ASM API/////////////////////////////

//#define ASM_SendTriggerCmd(core,tc) {kal_uint32 val;ASM_SET_SWLA_TRIG(core,tc);ASM_GET_SWLA_TRIG(core,val);}

void ASM_GetBufferInfor(kal_uint32 core,kal_uint32* addr,kal_uint32* size, kal_uint32* read_addr, kal_uint32* write_addr);
ASM_ERROR_CODE ASM_GetBufReadWriteAddress(kal_uint32 core,kal_uint32* rd_addr, kal_uint32* wr_addr,kal_uint32 *remain_size);
void ASM_UpdateBufReadAddress(kal_uint32 core,kal_uint32 addr);

void ASM_GetBufReadWritePtr(kal_uint32 core,kal_uint32* rd_ptr, kal_uint32* wr_ptr);
kal_uint32 ASM_GetBufferSettingSize(kal_uint32 core);
kal_bool ASM_BufferIsWrap(kal_uint32 core);
void ASM_UpdateBufReadPtr(kal_uint32 core,kal_uint32 addr);


ASM_ERROR_CODE ASM_InitSetting(kal_uint32 core,kal_uint32 mode, kal_uint32 *buffer,kal_uint32 buffer_size,kal_uint32 option_en,kal_uint32 sampling_rate);
ASM_ERROR_CODE ASM_Start(kal_uint32 core);
ASM_ERROR_CODE ASM_Stop(kal_uint32 core);
void ASM_StopWithoutWaitIdle(kal_uint32 core);
void ASM_SetSwtrTc(kal_uint32 core,kal_uint32 value);
ASM_ERROR_CODE ASM_SetMcuSwtrAuto(kal_uint32 core);

void ASM_McuIntRegsterLISR(void* reg_lisr);
void ASM_McuIntIRQUnMask(void);
void ASM_McuIntIRQMask(void);
void ASM_McuCoreIntIRQMask(kal_uint32 core);
void ASM_McuCoreIntIRQUnMask(kal_uint32 core);
void ASM_McuCoreIntIRQAck(kal_uint32 core);
void ASM_GetMcuIntStatusAndMask(kal_uint32* status,kal_uint32* mask);

void Asm_InitInforAllCore(void);
ASM_ERROR_CODE ASM_SetAddon(kal_uint32 core,kal_uint32 tc,kal_uint32* addon_infor,kal_uint32 size,kal_uint32 start_index ) DECLARE_MIPS16;
kal_uint32 ASM_GetBufferWrapCnt(kal_uint32 core);
void ASM_EnableApbWrite(kal_uint32 core);
void ASM_DisableApbWrite(kal_uint32 core);
void ASM_SendTrigger(kal_uint32 core,kal_uint32 tc) DECLARE_MIPS16;

//extern ASM_STRUCT Asm_Infor[];
//void ASM_SendTrigger(kal_uint32 core, kal_uint32 tc);
//#define ASM_SendTrigger(core,tc) {Asm_Infor[core].trigger_cnt++; ASM_SET_GCR_SWLA_TRIG(core,tc);}
//#define ASM_SendTrigger(core,tc) {Asm_Infor[core].trigger_cnt++; ASM_SET_SWLA_TRIG(core,tc);}
#define ASM_SendAPBTrigger(core,tc)  ASM_SET_SWLA_TRIG(core,tc)
#define ASM_SendGCRTrigger(core,tc)  ASM_SET_GCR_SWLA_TRIG(core,tc)

kal_uint32 ASM_GetPDICnt(kal_uint32 core);

void ASM_SaveConfigForSPM_AllCore(void);
void ASM_SaveCoreConfigForSPM(void);
void ASM_SaveConfigForSPM(kal_uint32 core);
void ASM_RestoreConfigforSPM_AllCore(void);
void ASM_RestoreCoreConfigforSPM(void);
void ASM_RestoreConfigforSPM(kal_uint32 core);

void ASM_SetTCContextID(kal_uint32 core, kal_uint32 tc,kal_uint32 id) DECLARE_MIPS16;
kal_uint32 ASM_GetTcContextId(kal_uint32 core,kal_uint32 tc);

kal_uint32 ASM_GetSRAMWaterLevel(kal_uint32 core);
void ASM_SetDumpRegion(void);



#endif  //__DRV_ASM_H__
