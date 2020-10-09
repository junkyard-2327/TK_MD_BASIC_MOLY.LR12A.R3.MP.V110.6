/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *   elm.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Header file for ELM.
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
 ****************************************************************************/
#if !defined(__ELM_H__)
#define __ELM_H__
/* ==================== */
/*	CONFIGURATIONS		*/
/* ==================== */
/* ==================== */
/*	INCLUDES			*/
/* ==================== */
#include "reg_base.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "sync_data.h"
#include "boot.h"

#include "drv_comm.h"
/*******************************************************************************
 * Feature Option
 *******************************************************************************/
#define ELM_GCR
#define __ELM_RUNTIME_PROFILE__
//#define ELM_AMIF_ENABLE 


/* ==================== */
/*	DEFINITIONS			*/
/* ==================== */

/* ==================== */
/*	ELM CONTROL API		*/
/* ==================== */
 
//#define REG_ELM_CLK					    (BASE_ADDR_MCUSYS_EMI_ELM + 0x0004)	
#define REG_ELM_CTRL					(BASE_ADDR_MCUSYS_ELM_EMI + 0x0008)
#ifdef ELM_GCR
#define REG_ELM_STAT					(GCR_CUSTOM_ADDR + 0x00B0)
#define REG_INFRA_ELM_STAT					(GCR_CUSTOM_ADDR + 0x0060)
#else
#define REG_ELM_STAT					(BASE_ADDR_MCUSYS_ELM_EMI + 0x0050)
#define REG_INFRA_ELM_STAT					(BASE_ADDR_MDINFRA_ELM + 0x0050)
#endif
#define REG_ELM_STAT_APB					(BASE_ADDR_MCUSYS_ELM_EMI + 0x0050)






// ELM init
extern void ELM_INIT(void);
extern void ELM_Config_DormantLeave(void);
extern kal_bool Set_EMI_ELM_ExceptionType(kal_uint8 exception_type);
extern kal_bool Set_EMI_ELM_Threshold(kal_uint8 info, kal_uint32 threshold);

#if	0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
// ELM clear
#define ELM_CLR()	\
		do {\
		} while(0)

// ELM Start
#define ELM_START() \
		do {\
		} while(0)

// ELM Pause
#define ELM_PAUSE() \
		do {\
		} while(0)

// ELM Counter Selection
enum {	
	ELM_RD = 0,
	ELM_WR = 1
};

enum {
	ELM_TYPE_TRANS = 0,
	ELM_TYPE_LATENCY = 1
};


#define ELM_GET_CNT(rw, type, idx, p_cnt) \
	do {\
		*p_cnt = DRV_Reg32(REG_ELM_STAT + (((rw ) + (type<< 1)) << 2));\
	} while(0)

#define ELM_INFRA_GET_CNT(rw, type, idx, p_cnt) \
		do {\
			*p_cnt = DRV_Reg32(REG_INFRA_ELM_STAT + (((rw ) + (type<< 1)) << 2));\
		} while(0)


#define ELM_GET_CNT_APB(rw, type, idx, p_cnt) \
		do {\
			*p_cnt = DRV_Reg32(REG_ELM_STAT_APB+ (((rw ) + (type<< 1)) << 2));\
		} while(0)


typedef struct _ELM_LOG_T
{
	kal_uint32 w_trans;
	kal_uint32 w_latency;
	kal_uint32 r_trans;
	kal_uint32 r_latency;
} ELM_LOG_T;

typedef struct _ELM_FULL_LOG_T
{
	kal_uint32 fma_stamp;
	kal_uint32 w_trans;
	kal_uint32 w_latency;
	kal_uint32 r_trans;
	kal_uint32 r_latency;
	kal_uint32 r_lat_thr; // read latency criteria
	kal_uint32 w_lat_thr; // write latency criteria
} ELM_FULL_LOG_T;

typedef struct _ELM_M4PORT_FULL_LOG_T
{
	kal_uint32 infra_w_trans;
	kal_uint32 infra_w_latency;
	kal_uint32 infra_r_trans;
	kal_uint32 infra_r_latency;
} ELM_M4PORT_FULL_LOG_T;


// for spv compatibility
#define ELM_GET_LOG(c, l) do { \
			ELM_GET_CNT(ELM_WR, ELM_TYPE_TRANS, (c), &((l).w_trans));\
			ELM_GET_CNT(ELM_WR, ELM_TYPE_LATENCY, (c), &((l).w_latency));\
			ELM_GET_CNT(ELM_RD, ELM_TYPE_TRANS, (c), &((l).r_trans));\
			ELM_GET_CNT(ELM_RD, ELM_TYPE_LATENCY, (c), &((l).r_latency));\
		} while (0)

#define ELM_GET_M4PORT_ALL_LOG(c, l) do { \
			ELM_INFRA_GET_CNT(ELM_WR, ELM_TYPE_TRANS, (c), &((l).infra_w_trans));\
			ELM_INFRA_GET_CNT(ELM_WR, ELM_TYPE_LATENCY, (c), &((l).infra_w_latency));\
			ELM_INFRA_GET_CNT(ELM_RD, ELM_TYPE_TRANS, (c), &((l).infra_r_trans));\
			ELM_INFRA_GET_CNT(ELM_RD, ELM_TYPE_LATENCY, (c), &((l).infra_r_latency));\
		} while (0)


void ELM_GET_FULL_LOG(ELM_FULL_LOG_T* data);

// for profiling ELM log	
typedef enum
{
	//When ELM irq happend
	ELM_NONE = 0,		//show trace only
	ELM_ASSERT,			//trigger assert
	ELM_ASSERT_AT_2nd,  //show trace first, twice in 500us then assert
} elm_exception_type;

typedef struct _ELM_RUNTIME_PROFILE_LAT_T
{
    kal_int32 cur_frc;
    kal_uint32 int_status; //0x64 (read or write) or (level 1 or level2) trigger interrupt
    kal_uint32 r_trans; //0x80 average worst case read transaction count
    kal_uint32 w_trans; //0x84 average worst case write transaction count    
    kal_uint32 r_alat;	//0x70 read worst average latency
    kal_uint32 w_alat;	//0x78 write worst average latency
    kal_uint32 r_l2_tot_lat;	//0x74 Level 2 read worst total latency
    kal_uint32 w_l2_tot_lat;	//0x7C Level 2 write worst total latency
    kal_uint32 ap_dvfs_tick;
    kal_uint32 txzq_dvfs_tick;
    kal_uint32 ddren_tick;
    kal_uint32 md_tick;
} ELM_RUNTIME_PROFILE_LAT_T;

void ELM_MCU_threshold_change(kal_uint32 read_avg_lat_ns, kal_uint32 write_avg_lat_ns, kal_uint32 dur_us);

#endif  /* !__ELM_H__ */
