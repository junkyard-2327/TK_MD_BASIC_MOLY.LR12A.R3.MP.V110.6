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
 * -----------
 *   spv_api.h
 *
 * Project:
 * -----------
 *   UMOLY
 *
 * Description:
 * ------------
 *   SPV Related API Code
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 09 07 2017 yen-chun.liu
 * [MOLY00274402] [Gen93] SPV profiling utility
 * BW/latency profiling code v2.
 *
 * 09 07 2017 yen-chun.liu
 * [MOLY00274402] [Gen93] SPV profiling utility
 * BW/latency runtime profiling.
 *
 * 07 24 2017 wellken.chen
 * [MOLY00265986] [SPVSVC] Add spv service 1st version related
 *
 * 06 02 2017 linson.du
 * [MOLY00254730] [Gen93]: ELM driver update for EMI latency issue
 * ELM driver update for SPV usage.
 *
 * 07 14 2015 wellken.chen
 * [MOLY00128710] [Jade][SPV] Refine SPV API realted code
 *
 *
 *
 *
 *
 ****************************************************************************/


#ifndef __SPV_UTILITY_H_
#define __SPV_UTILITY_H_

#include "reg_base.h"
#include "kal_general_types.h"
#include "elm.h"

#if defined(__FORCE_EMI_LATENCY_ENABLE__)
#if defined(MT6763)		//use AP EMI

#define SPV_MADDR_MEMAPB			(0xC0219000)
	
#define EMI_DRCT					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x78)
#define EMI_ARBD					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x118)
#define EMI_SLCT					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x158)
#define EMI_CONM					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x60)
#define EMI_TESTB					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0xE8)
	
#define EMI_BMEN					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x400)
#define EMI_BCNT					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x408)
	
#define EMI_TSCT					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x418)
#define EMI_WSCT					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x428)
#define EMI_BACT					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x430)
#define EMI_BSCT					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x438)
#define EMI_MSEL					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x440)
#define EMI_TSCT2					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x448)
#define EMI_WSCT2					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x458)
#define EMI_BMEN2					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x4E8)
	
	
#define EMI_TTYPE1					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x500)
#define EMI_TTYPE2					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x508)
#define EMI_TTYPE3					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x510)
#define EMI_TTYPE4					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x518)
#define EMI_TTYPE5					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x520)
#define EMI_TTYPE6					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x528)
#define EMI_TTYPE7					(volatile kal_uint32 *)(SPV_MADDR_MEMAPB + 0x53C)


//psmcu ultra
#define SPV_PSMCU_QOS_CTL				((volatile kal_uint32 *)(BASE_MADDR_MDPERIMISC + 0xF0))

#define EMI_FORCE_LATENCY(r, w) \
    do {\
        while (*SPV_PSMCU_QOS_CTL & 0x11) {*SPV_PSMCU_QOS_CTL &= ~(0x11);}\
        *EMI_DRCT = 0x23110000;\
        *EMI_ARBD = 0x00003000 | (r<<16) | (w<<24);\
        *EMI_SLCT = 0x1F011700;\
        *EMI_CONM = 0xff000500;\
    } while (0)


#define EMI_FORCE_DISABLE_DRAMC_WRITE_EARLY_RESPONSE() \
	do {\
		*EMI_TESTB |= (1<<11);\
	} while(0)


#endif	//defined(MT6763)
#endif  //__FORCE_EMI_LATENCY_ENABLE__


//for spv_service.c
typedef struct _ELM_BW_LOG_T
{
	kal_uint32 m3_r_word_count;
	kal_uint32 m3_w_word_count;
	kal_uint32 m4_r_word_count;
	kal_uint32 m4_w_word_count;
} ELM_BW_LOG_T;

typedef struct __SPVSVC_MON {
	kal_uint32      apb_Reliable;
	kal_uint32      apb_CurIsWorst;
	kal_uint32      apb_Duration;
	kal_uint32      apb_Avg_RLat;
	kal_uint32      apb_Avg_WLat;
	kal_uint32      apb_Worst_AvgRLat;
	kal_uint32      apb_Worst_AvgWLat;
	kal_uint32      apb_Total_RCnt;
	kal_uint32      apb_Total_WCnt;
	kal_uint32      apb_Dummy0;

	kal_uint32		cm2_Reliable;
	kal_uint32		cm2_CurIsWorst;
	kal_uint32		cm2_Duration;
	kal_uint32		cm2_Avg_UC_RW;
	kal_uint32		cm2_Avg_L2Cache_RW;
	kal_uint32		cm2_Worst_AvgUC_RW;
	kal_uint32		cm2_Worst_AvgL2Cache_RW;
	kal_uint32		cm2_Total_UC_RW;
	kal_uint32		cm2_Total_L2Cache_RW;
	kal_uint32		cm2_Dummy0;

	//might use union?
	kal_uint32		elm_Reliable;
	kal_uint32		elm_CurIsWorst;
	kal_uint32		elm_Duration;
	kal_uint32		elm_Avg_RLat;
	kal_uint32		elm_Avg_WLat;
	kal_uint32		elm_Worst_AvgRLat;
	kal_uint32		elm_Worst_AvgWLat;
	kal_uint32		elm_Total_RCnt;
	kal_uint32		elm_Total_WCnt;
	kal_uint32		elm_Dummy0;

} SPVSVC_MON;

kal_bool SPVSVC_Monitor_Get(SPVSVC_MON *pCnts) DECLARE_MIPS16;
extern kal_bool SPVSVC_Monitor_LogClear(void);

#if defined(__BW_RUNTIME_PF__)

typedef struct _ELM_PROFILING_LOG_T
{
	kal_uint32 m3_r_transaction;
	kal_uint32 m3_r_word_count;
	kal_uint32 m3_r_latency;
	kal_uint32 m3_w_word_count;
	kal_uint32 m4_r_transaction;
	kal_uint32 m4_r_word_count;
	kal_uint32 m4_r_latency;
	kal_uint32 m4_w_word_count;
} ELM_PROFILING_LOG_T;

#define WRAP_MAX         0xFFFFFFFF
#define DIFF_WRAP_TYPE(start, end)   (((end) >= (start))? (((end) - (start))): ((WRAP_MAX - (start) + (end) + 1)))

#define ELM_GET_M3_BW_LOG(c, l) do { \
                ELM_GET_CNT(ELM_WR, ELM_TYPE_TRANS, (c), &((l).m3_r_word_count));\
                ELM_GET_CNT(ELM_WR, ELM_TYPE_LATENCY, (c), &((l).m3_w_word_count));\
            } while (0)
    
#define ELM_GET_M4_BW_LOG(c, l) do { \
                ELM_INFRA_GET_CNT(ELM_WR, ELM_TYPE_TRANS, (c), &((l).m4_r_word_count));\
                ELM_INFRA_GET_CNT(ELM_WR, ELM_TYPE_LATENCY, (c), &((l).m4_w_word_count));\
            } while (0)

#define ELM_GET_M3_LATENCY_LOG(c, l) do { \
                ELM_GET_CNT(ELM_RD, ELM_TYPE_TRANS, (c), &((l).m3_r_transaction));\
                ELM_GET_CNT(ELM_RD, ELM_TYPE_LATENCY, (c), &((l).m3_r_latency));\
            } while (0)
    
#define ELM_GET_M4_LATENCY_LOG(c, l) do { \
                ELM_INFRA_GET_CNT(ELM_RD, ELM_TYPE_TRANS, (c), &((l).m4_r_transaction));\
                ELM_INFRA_GET_CNT(ELM_RD, ELM_TYPE_LATENCY, (c), &((l).m4_r_latency));\
            } while (0)

kal_bool SPVSVC_BW_PF(kal_uint32 core_id);
void SPVSVC_BW_Max_Print(void);
void SPVSVC_BW_Max_Clear(void);
void SPVSVC_BW_Threshold_Print(void);

extern volatile kal_uint32 BW_index;
extern kal_uint32 BW_Cor_Duration[10] ;
extern kal_uint32 BW_Cor_Duration_Low[10] ;
extern kal_uint32 BW_Cor_Duration_High[10] ;

extern volatile kal_uint32 BW_Cor_Duration_core[] ;

extern volatile kal_uint32 BW_Cor_Enable;

extern volatile kal_uint32 BW_M3_Worst_core[];
extern volatile kal_uint32 BW_M3_Worst_Dur_core[];
extern volatile kal_uint32 BW_M4_Worst_core[] ;
extern volatile kal_uint32 BW_M4_Worst_Dur_core[];
extern volatile kal_uint32 BW_M3M4_Worst_core[];
extern volatile kal_uint32 BW_M3M4_Worst_Dur_core[];


extern volatile kal_uint32 BW_Dur_Low_core[] ;
extern volatile kal_uint32 BW_Dur_High_core[];

extern volatile kal_uint32 BW_Cor_Raw_Data_Print_Enable;

extern volatile kal_uint32 BW_Transaction_Low_core[];

extern volatile kal_uint32 BW_M3_Assertion_core[];
extern volatile kal_uint32 BW_M4_Assertion_core[];
extern volatile kal_uint32 BW_M3M4_Assertion_core[];
extern volatile kal_uint32 Latency_M3_Read_Assertion_core[];
extern volatile kal_uint32 Latency_M4_Read_Assertion_core[];

extern void SPV_IdleTask( task_entry_struct * task_entry_ptr );
extern void SPV_IdleTask2( task_entry_struct * task_entry_ptr );
#endif

#endif	//__SPV_UTILITY_H_

