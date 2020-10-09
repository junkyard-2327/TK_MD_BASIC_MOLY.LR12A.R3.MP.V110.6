/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 *   drv_lpm.c
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This file implements the LowPowerMonitor(LPM) and DCM relative debug function
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "drv_lpm.h"

#if defined(__MTK_INTERNAL__) && defined (DCM_LPM_ENABLE)

#include "kal_public_api.h"
#include "drvpdn.h"
#include "pll.h"
#include "kal_debug.h"
#include "us_timer.h"

#define DCM_REG_AOR(regval, aval, oval) ((DRV_Reg32(regval)&(aval))|(oval))
#define reg_or(regval, oval) ((regval) | (oval))
#define reg_and(regval, aval) ((regval) & (aval))
#define reg_aor(regval, aval, oval) (reg_and(regval, aval) | (oval))

#define LPM_SOFT_RESET           (0)
#define LPM_RESET                (1)
#define LPM_START_MONITOR        (1 << 2)

#define LPM_CNT_RESET            (2)

#define LPM_F32K_CK_SEL_OFFSET   (1)
#define LPM_EDGE_SEL_OFFSET      (3)
#define LPM_SRC_SEL_OFFSET       (4)
#define LPM_EXT_SRC_SEL_OFFSET   (8)
#define LPM_GOOD_DUR_OFFSET     (16)

char* LPM_EDGE[2] = {"H2L","L2H"};
char* IA_SIGNAL[4] = {"GIC0_Sleep","GIC1_Sleep","wfi_ia_ck_ctrl_out_ck_gating","wfi_ia_ck_ctrl_wfi_in"};

char* LV1_LPM_NAME[LV1_DCM_MON_SRC_IN_MUX_END][MAX_SRC_PER_MUX] = 
{
    //MUX0
    {
       	"LV1_MUX0_TX_TXSYS_CK_IDLE_DBG" ,/* 0 */
       	"LV1_MUX0_TX_TXSYS_CK_IDLE_DIV",/* 1 */
       	"LV1_MUX0_RAKE_CK_IDLE_DBG",/* 2 */
       	"LV1_MUX0_RAKE_CK_IDLE_DIV",/* 3 */
       	"LV1_MUX0_BRAM_BRP_CK_IDLE_DBG",/* 4 */
        "LV1_MUX0_BRAM_BRP_CK_IDLE_DIV",/* 5 */
        "LV1_MUX0_BRAM_VDSP_CK_IDLE_DBG",/* 6 */
        "LV1_MUX0_BRAM_VDSP_CK_IDLE_DIV",/* 7 */
        "LV1_MUX0_8_NULL",/* 8 */	
        "LV1_MUX0_MDCORE_CK_IDLE_GATED_ALL",/* 9 */
        "LV1_MUX0_MDSYS_BUS2X_CK_IDLE_DBG",/* 10 */
        "LV1_MUX0_MDSYS_BUS2X_CK_IDLE_DIV",/* 11 */
        "LV1_MUX0_MDCORE_CK_IDLE_DBG_BIT0",/* 12 */	    
        "LV1_MUX0_MDCORE_CK_IDLE_DBG_BIT1",/* 13 */
        "LV1_MUX0_MDCORE_CK_IDLE_GATED_IA",/* 14 */
        "LV1_MUX0_MDCORE_CK_IDLE_GATED_uSIP",/* 15 */    
    },
    
    //MUX1
    {
        "LV1_MUX1_0_NULL" ,/* 0 */
        "LV1_MUX1_1_NULL",/* 1 */
        "LV1_MUX1_2_NULL",/* 2 */
        "LV1_MUX1_3_NULL",/* 3 */
        "LV1_MUX1_4_NULL",/* 4 */
        "LV1_MUX1_5_NULL",/* 5 */
        "LV1_MUX1_6_NULL",/* 6 */
        "LV1_MUX1_7_NULL",/* 7 */
        "LV1_MUX1_8_NULL",/* 8 */	
        "LV1_MUX1_9_NULL",/* 9 */
        "LV1_MUX1_10_NULL",/* 10 */
        "LV1_MUX1_IA_SLEEP_LPM_DBG",/* 11 */
        "LV1_MUX1_MDL1AO_MAS_BUS_IDLE_DBG",/* 12 */	    
        "LV1_MUX1_MDL1AO_MAS_BUS_IDLE_DIV",/* 13 */
        "LV1_MUX1_CS_CSSYS_CK_IDLE_DEBUG",/* 14 */
        "LV1_MUX1_CS_CSSYS_CK_IDLE_DIV",/* 15 */
	},

    //MUX2
    {
        "LV1_MUX2_0_NULL" ,/* 0 */
        "LV1_MUX2_1_NULL",/* 1 */
        "LV1_MUX2_2_NULL",/* 2 */
        "LV1_MUX2_3_NULL",/* 3 */
        "LV1_MUX2_4_NULL",/* 4 */
        "LV1_MUX2_5_NULL",/* 5 */
        "LV1_MUX2_6_NULL",/* 6 */
        "LV1_MUX2_7_NULL",/* 7 */
        "LV1_MUX2_8_NULL",/* 8 */	
        "LV1_MUX2_9_NULL",/* 9 */
        "LV1_MUX2_10_NULL",/* 10 */
        "LV1_MUX2_11_NULL",/* 11 */
        "LV1_MUX2_12_NULL",/* 12 */	    
        "LV1_MUX2_13_NULL",/* 13 */
        "LV1_MUX2_14_NULL",/* 14 */
        "LV1_MUX2_DDR_ON_LPM_DBG",/* 15 */
	},
	
    //MUX3
    {
        "LV1_MUX3_0_NULL" ,/* 0 */
        "LV1_MUX3_1_NULL",/* 1 */
        "LV1_MUX3_2_NULL",/* 2 */
        "LV1_MUX3_3_NULL",/* 3 */
        "LV1_MUX3_4_NULL",/* 4 */
        "LV1_MUX3_5_NULL",/* 5 */
        "LV1_MUX3_6_NULL",/* 6 */
        "LV1_MUX3_7_NULL",/* 7 */
        "LV1_MUX3_8_NULL",/* 8 */	
        "LV1_MUX3_9_NULL",/* 9 */
        "LV1_MUX3_10_NULL",/* 10 */
        "LV1_MUX3_11_NULL",/* 11 */
        "LV1_MUX3_12_NULL",/* 12 */	    
        "LV1_MUX3_13_NULL",/* 13 */
        "LV1_MUX3_14_NULL",/* 14 */
        "LV1_MUX3_15_NULL",/* 15 */
	},

    //MUX4
    {
        "LV1_MUX4_0_NULL" ,/* 0 */
        "LV1_MUX4_1_NULL",/* 1 */
        "LV1_MUX4_2_NULL",/* 2 */
        "LV1_MUX4_3_NULL",/* 3 */
        "LV1_MUX4_4_NULL",/* 4 */
        "LV1_MUX4_5_NULL",/* 5 */
        "LV1_MUX4_6_NULL",/* 6 */
        "LV1_MUX4_7_NULL",/* 7 */
        "LV1_MUX4_8_NULL",/* 8 */	
        "LV1_MUX4_9_NULL",/* 9 */
        "LV1_MUX4_10_NULL",/* 10 */
        "LV1_MUX4_11_NULL",/* 11 */
        "LV1_MUX4_12_NULL",/* 12 */	    
        "LV1_MUX4_13_NULL",/* 13 */
        "LV1_MUX4_14_NULL",/* 14 */
        "LV1_MUX4_15_NULL",/* 15 */
	},

    //MUX5
    {
        "LV1_MUX5_0_NULL" ,/* 0 */
        "LV1_MUX5_1_NULL",/* 1 */
        "LV1_MUX5_2_NULL",/* 2 */
        "LV1_MUX5_3_NULL",/* 3 */
        "LV1_MUX5_4_NULL",/* 4 */
        "LV1_MUX5_5_NULL",/* 5 */
        "LV1_MUX5_6_NULL",/* 6 */
        "LV1_MUX5_7_NULL",/* 7 */
        "LV1_MUX5_8_NULL",/* 8 */	
        "LV1_MUX5_9_NULL",/* 9 */
        "LV1_MUX5_10_NULL",/* 10 */
        "LV1_MUX5_11_NULL",/* 11 */
        "LV1_MUX5_12_NULL",/* 12 */	    
        "LV1_MUX5_13_NULL",/* 13 */
        "LV1_MUX5_14_NULL",/* 14 */
        "LV1_MUX5_15_NULL",/* 15 */
    },
           
    //MUX6
    {
        "LV1_MUX6_0_NULL" ,/* 0 */
        "LV1_MUX6_1_NULL",/* 1 */
        "LV1_MUX6_2_NULL",/* 2 */
        "LV1_MUX6_3_NULL",/* 3 */
        "LV1_MUX6_4_NULL",/* 4 */
        "LV1_MUX6_5_NULL",/* 5 */
        "LV1_MUX6_6_NULL",/* 6 */
        "LV1_MUX6_7_NULL",/* 7 */
        "LV1_MUX6_8_NULL",/* 8 */	
        "LV1_MUX6_9_NULL",/* 9 */
        "LV1_MUX6_10_NULL",/* 10 */
        "LV1_MUX6_11_NULL",/* 11 */
        "LV1_MUX6_12_NULL",/* 12 */	    
        "LV1_MUX6_13_NULL",/* 13 */
        "LV1_MUX6_14_NULL",/* 14 */
        "LV1_MUX6_15_NULL",/* 15 */
    },
    //MUX7
    {
        "LV1_MUX7_ALL_DCM_CK_OFF" ,/* 0 */
        "LV1_MUX7_1_NULL",/* 1 */
        "LV1_MUX7_2_NULL",/* 2 */
        "LV1_MUX7_MDSYS_BUS_CK_REQ_OFF",/* 3 */
        "LV1_MUX7_4_NULL",/* 4 */
        "LV1_MUX7_MDMCU_BUS_CK_REQ_OFF",/* 5 */
        "LV1_MUX7_6_NULL",/* 6 */
        "LV1_MUX7_7_NULL",/* 7 */
        "LV1_MUX7_NO_SRCLKENA",/* 8 */	
        "LV1_MUX7_MD_SRCLKENA_ACK",/* 9 */
        "LV1_MUX7_SRCLKENA_WO_ACK",/* 10 */
        "LV1_MUX7_11_NULL",/* 11 */
        "LV1_MUX7_12_NULL",/* 12 */	    
        "LV1_MUX7_13_NULL",/* 13 */
        "LV1_MUX7_L1TOPSM_SRCCLK_REQ_WO_RDY",/* 14 */
        "LV1_MUX7_MDTOPSM_SRCCLK_REQ_WO_RDY",/* 15 */
    },

};


/* From SSDVT */
void lpm_reset(lpm_ctrl *ctrl)
{/* Reset LPM, reset all counters */
#if 0/* We can't reset LPM counter in official load due to the sync time is too long. */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif	
}

void lpm_set(lpm_ctrl *ctrl)
{/* Reset and then config for L1_LPM */

    //Enable 104M for LPM monitor. setting LPM clock source (if use 104MHz for LPM clock source)
    if(ctrl->lpm_src_clk == SRC_CLK_104M)
    {
        *REG_MDTOP_CLKSW_CLKON_CTL = *REG_MDTOP_CLKSW_CLKON_CTL | 0x20;
    }
    else if(ctrl->lpm_src_clk == SRC_CLK_32K)/* 32K */
    {
        *REG_MDTOP_CLKSW_CLKON_CTL = *REG_MDTOP_CLKSW_CLKON_CTL & (~0x20);
    }
    else
    {
        EXT_ASSERT(0, ctrl->lpm_src_clk, 0, 0);       
    }

    lpm_reset(ctrl);/* Reset LPM, reset all counters */
	
    DRV_WriteReg32(L1DCM_LPM_CTRL, DCM_REG_AOR(L1DCM_LPM_CTRL, 0x0,\
    ((ctrl->good_duration<<LPM_GOOD_DUR_OFFSET)|(ctrl->ext_src_sel<<LPM_EXT_SRC_SEL_OFFSET)|\
    (ctrl->src_sel<<LPM_SRC_SEL_OFFSET)|LPM_RESET|(ctrl->lpm_src_clk<<LPM_F32K_CK_SEL_OFFSET)|(ctrl->lpm_edge_sel<<LPM_EDGE_SEL_OFFSET))));

    MO_Sync();

}

void lpm_start(lpm_ctrl *ctrl)
{
    /* Start LPM */
    DRV_WriteReg32(L1DCM_LPM_CTRL, DRV_Reg32(L1DCM_LPM_CTRL)|LPM_RESET|(LPM_START_MONITOR));//CNT
    MO_Sync();
    ctrl->us_time = ust_get_current_time();
}

void lpm_stop(lpm_ctrl *ctrl)
{/* Stop LPM and read 6 status counters */
    
    // wait for 50 T more, otherwise get nothing periphal ==> Don't ckeck in official load
    //while ((DRV_Reg32(L1DCM_LPM_CTRL) & LPM_START_MONITOR) && (DRV_Reg32(L1DCM_LPM_STS0)<50))
    {
        //MSG(MSG_INFO, "L1DCM_LPM_CTRL=0x%x L1DCM_LPM_STS0=0x%x \r\n", DRV_Reg32(L1DCM_LPM_CTRL), DRV_Reg32(L1DCM_LPM_STS0));
    }
    
    DRV_WriteReg32(L1DCM_LPM_CTRL, DCM_REG_AOR(L1DCM_LPM_CTRL, ~LPM_START_MONITOR, 0));
    MO_Sync();
	
    ctrl->status[0] = DRV_Reg32(L1DCM_LPM_STS0);
    ctrl->status[1] = DRV_Reg32(L1DCM_LPM_STS1);
    ctrl->status[2] = DRV_Reg32(L1DCM_LPM_STS2);
    ctrl->status[3] = DRV_Reg32(L1DCM_LPM_STS3);
    ctrl->status[4] = DRV_Reg32(L1DCM_LPM_STS4);
    ctrl->status[5] = DRV_Reg32(L1DCM_LPM_STS5);

}

void lpm_trace(lpm_ctrl *ctrl)
{/* Print the LPM counter */
    kal_uint32 lpm_ctl;
    kal_uint32 lpm_32k;
    char* src_str;
    char* edge_str;
    kal_uint32 src, mux;
    kal_uint32 ia_signal = 5;
    kal_char buff[150];
    
    lpm_ctl = DRV_Reg32(L1DCM_LPM_CTRL);
    lpm_32k = (lpm_ctl&0x2)>>1;
    
    edge_str = ( (lpm_ctl&(1<<LPM_EDGE_SEL_OFFSET)) == 0) ? LPM_EDGE[0]:LPM_EDGE[1];

    src = (lpm_ctl&0xF0)>>4;
    mux = (lpm_ctl&0xFF00)>>8;
    src_str = LV1_LPM_NAME[mux][src];

    if(mux==1&&src==11)/*LV1_MUX1_IA_SLEEP_LPM_DBG*/
    {
        /* Read Reg to know the real signal */
        ia_signal = (DRV_Reg32(IA_LPM_SELECT)&0x3000000)>>24;
    }       

    snprintf (buff, sizeof(buff), " L1DCM_LPM_CTRL= 0x%X, LPM-%s", lpm_ctl, (lpm_32k)?"32K":"104M");
    system_print(buff);
    snprintf (buff, sizeof(buff), " %s- %s \r\n( TOTAL_T,  %s_edge_T, HighDur,   LongDur, GoodDur, OverFlow start_us_time)", \
                                    src_str, (ia_signal<5)?IA_SIGNAL[ia_signal]:"", edge_str);
    system_print(buff);
    snprintf (buff, sizeof(buff), "                               0x%08X,    0x%04X, 0x%08X, 0x%04X, 0x%04X, 0x%08X %u\n\r", \
    ctrl->status[0],\
    ctrl->status[1],\
    ctrl->status[2],\
    ctrl->status[3],\
    ctrl->status[4],\
    ctrl->status[5], ctrl->us_time);
    system_print(buff);

}

#endif /* __MTK_INTERNAL__ && DCM_LPM_ENABLE */

