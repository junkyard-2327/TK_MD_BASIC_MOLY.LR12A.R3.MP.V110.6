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

/*******************************************************************************
 * Filename:
 * ---------
 *   drv_lpm.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   LPM driver
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 *
 *
 ****************************************************************************/

#ifndef __DRV_LPM_H__
#define __DRV_LPM_H__

#include <reg_base.h>
#include "drv_comm.h"
#include "dcm_sw.h"
#include "drv_dcm.h"

#define IA_LPM_SELECT (BASE_MADDR_MCUSYS_IA_DEL_CFG+0x10)

/* L1 LPM: Low Power Monitor for SM/DCM */
#define L1DCM_LPM_CTRL           (MDGLOBAL_DCM_BASE + 0x0080UL)
#define L1DCM_LPM_STS0           (MDGLOBAL_DCM_BASE + 0x0088UL)
#define L1DCM_LPM_STS1           (MDGLOBAL_DCM_BASE + 0x008CUL)
#define L1DCM_LPM_STS2           (MDGLOBAL_DCM_BASE + 0x0090UL)
#define L1DCM_LPM_STS3           (MDGLOBAL_DCM_BASE + 0x0094UL)
#define L1DCM_LPM_STS4           (MDGLOBAL_DCM_BASE + 0x0098UL)
#define L1DCM_LPM_STS5           (MDGLOBAL_DCM_BASE + 0x009CUL)

#define MAX_SRC_PER_MUX    (16)

/* Important Notes: If the monitored signal are high when start to monitor, the L2H count+1 at the start time */
//LV1 DCM MON_SRC_IN_MUX0
enum {
    LV1_DCM_MON_SRC_IN_MUX0 = 0,
    LV1_DCM_MON_SRC_IN_MUX1,
    LV1_DCM_MON_SRC_IN_MUX2,
    LV1_DCM_MON_SRC_IN_MUX3,
    LV1_DCM_MON_SRC_IN_MUX4,
    LV1_DCM_MON_SRC_IN_MUX5,
    LV1_DCM_MON_SRC_IN_MUX6,
    LV1_DCM_MON_SRC_IN_MUX7,
    LV1_DCM_MON_SRC_IN_MUX_END,
};

enum {/* LV1_DCM_MON_SRC_IN_MUX0 */
    LV1_MUX0_START = 0,
    LV1_MUX0_TX_TXSYS_CK_IDLE_DBG = 0,
    LV1_MUX0_TX_TXSYS_CK_IDLE_DIV = 1,
    LV1_MUX0_RAKE_CK_IDLE_DBG = 2,	
    LV1_MUX0_RAKE_CK_IDLE_DIV = 3,	
    LV1_MUX0_BRAM_BRP_CK_IDLE_DBG = 4,    
    LV1_MUX0_BRAM_BRP_CK_IDLE_DIV = 5,    
    LV1_MUX0_BRAM_VDSP_CK_IDLE_DBG = 6,
    LV1_MUX0_BRAM_VDSP_CK_IDLE_DIV = 7,
    LV1_MUX0_MDCORE_CK_IDLE_GATED_ALL = 9,/* Mdcore_mdcore_ck_idle_gated[0] & Mdcore_mdcore_ck_idle_gated[1] */    
    LV1_MUX0_MDSYS_BUS2X_CK_IDLE_DBG = 10,
    LV1_MUX0_MDSYS_BUS2X_CK_IDLE_DIV = 11,
    LV1_MUX0_MDCORE_CK_IDLE_DBG_BIT0 = 12,
    LV1_MUX0_MDCORE_CK_IDLE_DBG_BIT1 = 13,
    LV1_MUX0_MDCORE_CK_IDLE_GATED_IA = 14,/* Mdcore_mdcore_ck_idle_gated[0] */
    LV1_MUX0_MDCORE_CK_IDLE_GATED_uSIP = 15,/* Mdcore_mdcore_ck_idle_gated[1] */
    LV1_MUX0_END,
};

enum {/* LV1_DCM_MON_SRC_IN_MUX1 */
    LV1_MUX1_START = 11,    
    LV1_MUX1_IA_SLEEP_LPM_DBG = 11, 
    LV1_MUX1_MDL1AO_MAS_BUS_IDLE_DBG = 12,
    LV1_MUX1_MDL1AO_MAS_BUS_IDLE_DIV = 13,    
    LV1_MUX1_CS_CSSYS_CK_IDLE_DEBUG = 14,
    LV1_MUX1_CS_CSSYS_CK_IDLE_DIV = 15,
    LV1_MUX1_END,
};

enum {/* LV1_DCM_MON_SRC_IN_MUX2 */
    LV1_MUX2_START = 15,
    LV1_MUX2_DDR_ON_LPM_DBG = 15,        
    LV1_MUX2_END,
};

enum {/* LV1_DCM_MON_SRC_IN_MUX3 */
    LV1_MUX3_START = 0,
    LV1_MUX3_END = 0,
};

enum {/* LV1_DCM_MON_SRC_IN_MUX4 */
    LV1_MUX4_START = 0,
    LV1_MUX4_END = 0,
};

enum {/* LV1_DCM_MON_SRC_IN_MUX5 */
    LV1_MUX5_START = 0,
    LV1_MUX5_END = 0,
};

enum {/* LV1_DCM_MON_SRC_IN_MUX6 */
    LV1_MUX6_START = 0,
    LV1_MUX6_END = 0,
};


enum {/* LV1_DCM_MON_SRC_IN_MUX7 */
    LV1_MUX7_START = 0,
    LV1_MUX7_ALL_DCM_CK_OFF = 0,
    LV1_MUX7_MDSYS_BUS_CK_REQ_OFF = 3,
    LV1_MUX7_MDMCU_BUS_CK_REQ_OFF = 5,
    LV1_MUX7_NO_SRCLKENA = 8,
    LV1_MUX7_MD_SRCLKENA_ACK = 9,
    LV1_MUX7_SRCLKENA_WO_ACK = 10,
    LV1_MUX7_L1TOPSM_SRCCLK_REQ_WO_RDY = 14,
    LV1_MUX7_MDTOPSM_SRCCLK_REQ_WO_RDY = 15,
    LV1_MUX7_END,
};

/* signal for IA DCM */
enum {
    IA_SIGNAL_START = 0,
    GIC0_SLEEP = 0,
    GIC1_SLEEP = 1,
    WFI_IA_CK_CTRL_OUT_CK_GATING = 2,
    WFI_IA_CK_CTRL_SFI_IN = 3,
    IA_SIGNAL_END,	
};

typedef enum {
   SRC_CLK_104M = 0,    
   SRC_CLK_32K = 1,
} LPM_SRC_CLK_T;

typedef enum {
   H2L = 0,    
   L2H = 1,
} LPM_EDGE_T;

typedef struct{
    /* LPM's configuration */
    kal_uint32 ext_src_sel; //MUX selection
    kal_uint32 src_sel; // signal bit select
    kal_uint32 good_duration;
    LPM_SRC_CLK_T lpm_src_clk;
    LPM_EDGE_T lpm_edge_sel;  

    kal_uint32 us_time;

    /* LPM's result */
    kal_uint32 status[6];  // 6 status   
}lpm_ctrl;

typedef struct{
    kal_uint32 mux_num;// all MUX 
    kal_uint32* signal_start;// Signal start index   
    kal_uint32* signal_end;// Signal end index 
}lpm_infor;/* List all LPM signals which we could measure */

typedef enum {
   UT_DCM_CHK_IGNORE,
   UT_DCM_CHK_EQUAL,
   UT_DCM_CHK_GREATER_EQUAL,
   UT_DCM_CHK_GREATER,
} ut_dcm_chk_cond_t;

typedef struct {
   //"Low to High" or "High to Low" counters 
   kal_uint32 cond;/* The check condition: UT_DCM_CHK_IGNORE, UT_DCM_CHK_EQUAL, UT_DCM_CHK_GREATER_EQUAL, UT_DCM_CHK_GREATER */
   kal_uint32 val;/* the expect(check) value */

   //"Total High/Low duration" counters
   kal_uint32 high_dur_cond;/* The check condition: UT_DCM_CHK_IGNORE, UT_DCM_CHK_EQUAL, UT_DCM_CHK_GREATER_EQUAL, UT_DCM_CHK_GREATER */
   kal_uint32 high_dur_val;/* the expect(check) value */   
} ut_dcm_chk_t;


#if defined (DCM_LPM_ENABLE) /* Note: All these functions are tested only, it is not supported in official load!! */
extern void lpm_set(lpm_ctrl *ctrl);
extern void lpm_start(lpm_ctrl *ctrl);
extern void lpm_stop(lpm_ctrl *ctrl);
extern void lpm_trace(lpm_ctrl *ctrl);
#endif

#endif /* end of __UT_DCM_H__ */


