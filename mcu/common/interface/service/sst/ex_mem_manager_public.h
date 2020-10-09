/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ex_mem_manager_public.h
 *
 * Project:
 * --------
 *   Moly
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 *  
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __EX_MEM_MANAGER_PUBLIC_H__
#define __EX_MEM_MANAGER_PUBLIC_H__

#if !defined(__OFFLINE_EX_LOG_PARSER__)
#include "kal_public_defs.h"
#endif /* __OFFLINE_EX_LOG_PARSER__ */

typedef enum{    
//EPOF : 0
    EMM_EPOF_ENTER = 0,
//EPON : 1
    EMM_EPON,
//SLP: if supporting : 2
    EMM_FLIGHT_MODE_SUPPORT,
//offending exception enter count : 3
    EMM_INT_EXCEPTION_COUNT,
//WDT: enable caller/timestamp : 4~7
    EMM_WDT1_EN_CALLER,
    EMM_WDT1_EN_TIME,
    EMM_WDT2_EN_CALLER,
    EMM_WDT2_EN_TIME,
//WDT: disable caller/timestamp : 8~11
    EMM_WDT1_DIS_CALLER,
    EMM_WDT1_DIS_TIME,
    EMM_WDT2_DIS_CALLER,
    EMM_WDT2_DIS_TIME,
//WDT: DRV/ABN caller/timestamp : 12~15
    EMM_WDT_DRV_RST_CALLER,
    EMM_WDT_DRV_RST_TIME,
    EMM_WDT_ABN_RST_CALLER,
    EMM_WDT_ABN_RST_TIME,
//WDT: Set Check bit caller/callervpe/timestamp per VPE : 16~27
    EMM_VPE0_WDT_SET_CHK_CALLER,
    EMM_VPE0_WDT_SET_CHK_CALLERVPE,
    EMM_VPE0_WDT_SET_CHK_TIME,
    EMM_VPE1_WDT_SET_CHK_CALLER,
    EMM_VPE1_WDT_SET_CHK_CALLERVPE,
    EMM_VPE1_WDT_SET_CHK_TIME,
    EMM_VPE2_WDT_SET_CHK_CALLER,
    EMM_VPE2_WDT_SET_CHK_CALLERVPE,
    EMM_VPE2_WDT_SET_CHK_TIME,
    EMM_VPE3_WDT_SET_CHK_CALLER,
    EMM_VPE3_WDT_SET_CHK_CALLERVPE,
    EMM_VPE3_WDT_SET_CHK_TIME,
//WDT: Clear Check bit caller/callervpe/timestamp per VPE : 28~39
    EMM_VPE0_WDT_CLR_CHK_CALLER,
    EMM_VPE0_WDT_CLR_CHK_CALLERVPE,
    EMM_VPE0_WDT_CLR_CHK_TIME,
    EMM_VPE1_WDT_CLR_CHK_CALLER,
    EMM_VPE1_WDT_CLR_CHK_CALLERVPE,
    EMM_VPE1_WDT_CLR_CHK_TIME,
    EMM_VPE2_WDT_CLR_CHK_CALLER,
    EMM_VPE2_WDT_CLR_CHK_CALLERVPE,
    EMM_VPE2_WDT_CLR_CHK_TIME,
    EMM_VPE3_WDT_CLR_CHK_CALLER,
    EMM_VPE3_WDT_CLR_CHK_CALLERVPE,
    EMM_VPE3_WDT_CLR_CHK_TIME,
//Reserved : 40~43
    EMM_Reserved1,
    EMM_Reserved2,
    EMM_Reserved3,
    EMM_Reserved4,
    
    EMM_INDEX_MAX, //44
}EMM_LOG_INDEX;

typedef enum {
    EMM_EXCEPTION_RECORD = 0x0,
    EMM_DBG_INFO,
    EMM_BOOTUP_TRACE,
} EMM_BUF_TYPE;

typedef enum
{
    EMM_DIRECT_WRITE_IDLETASK,
    EMM_DIRECT_WRITE_SLP,
    EMM_DIRECT_WRITE_DORMANT,
    EMM_DIRECT_WRITE_ELM,
    EMM_DIRECT_WRITE_BUS,
    EMM_DIRECT_WRITE_SWLA,
    EMM_DIRECT_WRITE_MAX,
} EMM_DIRECT_WRITE_SM_INDEX;

extern const kal_uint32 g_EMM_BOOTTRC_INDEX_ADDR;

extern kal_bool EMM_Init(void);
extern kal_bool EMM_WriteBootupTrace(kal_uint32 block_idx, kal_uint32 index, kal_uint32 value);
extern kal_bool EMM_WriteDbgInfo(kal_uint32 index, void* addr);
extern kal_bool EMM_ClearDbgInfo(void);
extern kal_bool EMM_GetBufInfo(kal_uint32 *pAddr, kal_uint32 *pSize, EMM_BUF_TYPE type);
extern kal_bool EMM_DirInfo_Query(kal_uint32 index, kal_uint32 *addr, kal_uint32 *size);
extern kal_bool EMM_Write_ExceptRecord(void);
extern kal_bool EMM_Write_Ex_Steplogging(kal_uint32 vpeid);
extern kal_bool EMM_Write_Ex_Count(kal_uint32 vpeid);
extern kal_bool EMM_Write_Offending_Pcmon(void);

#endif //__EX_MEM_MANAGER_PUBLIC_H__

