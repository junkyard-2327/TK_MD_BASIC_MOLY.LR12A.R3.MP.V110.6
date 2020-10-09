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
 *   intrCtrl_ELBRUS.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   Definition for chipset interrupt table
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

#ifndef __INTRCTRL_ELBRUS_H__
#define __INTRCTRL_ELBRUS_H__


#include "reg_base.h"
#include "irqid.h"
//#include "drv_features_gpt.h"
//#include "drv_mdcirq.h"
#include "kal_public_api.h"
#include "isrentry.h"
#include "hisr_config.h"

/*CIRQ Interrupt Sources*/

#define NUM_IRQ_SOURCES          (256)

#define	IRQ_OST_CODE          	                         MD_IRQID_OST          
#define	IRQ_MDINFRA_BUSMON_CODE                          MD_IRQID_MDINFRA_BUSMON_MATCH_STS
#define	IRQ_LMAC_RAR_CODE                       	 MD_IRQID_LMAC_RAR     
#define	IRQ_LMAC_EAR_CODE     	                         MD_IRQID_LMAC_EAR     
#define	IRQ_MDWDT_CODE        	                         MD_IRQID_MDWDT        
//#define	IRQ_NFI_CODE          	                         MD_IRQID_NFI          
#define	IRQ_L2COPRO_CODE      	                         MD_IRQID_L2COPRO      
#define	IRQ_GPTM1_CODE        	                         MD_IRQID_GPTM1        
#define	IRQ_GPTM2_CODE        	                         MD_IRQID_GPTM2        
#define	IRQ_GPTM3_CODE        	                         MD_IRQID_GPTM3        
#define	IRQ_GPTM4_CODE        	                         MD_IRQID_GPTM4        
#define	IRQ_GPTM5_CODE       	                         MD_IRQID_GPTM5       
#define	IRQ_GPTM6_CODE       	                         MD_IRQID_GPTM6       
#define	IRQ_UART_MD0_CODE    	                         MD_IRQID_UART_MD0    
#define	IRQ_UART_MD1_CODE    	                         MD_IRQID_UART_MD1    
#define	IRQ_MDMCU_BUSMON_CODE	                         MD_IRQID_MDMCU_BUSMON_MATCH_STS
#define	IRQ_I2C_0_CODE       	                         MD_IRQID_I2C_0       
#define	IRQ_USIM0_CODE       	                         MD_IRQID_USIM0       
#define	IRQ_USIM1_CODE       	                         MD_IRQID_USIM1       
#define	IRQ_UART_MD2_CODE    	                         MD_IRQID_UART_MD2    
#define	IRQ_MDGDMA0_CODE     	                         MD_IRQID_MDGDMA0     
#define	IRQ_MDGDMA1_CODE     	                         MD_IRQID_MDGDMA1     
#define	IRQ_MDGDMA2_CODE     	                         MD_IRQID_MDGDMA2     
#define	IRQ_MDGDMA3_CODE     	                         MD_IRQID_MDGDMA3     
#define	IRQ_EINT0_CODE       	                         MD_IRQID_EINT0       
#define	IRQ_EINT1_CODE       	                         MD_IRQID_EINT1       
#define	IRQ_EINT2_CODE       	                         MD_IRQID_EINT2       
#define	IRQ_EINT3_CODE       	                         MD_IRQID_EINT3       
#define	IRQ_EINT_SHARE_CODE  	                         MD_IRQID_EINT_SHARE  
#define	IRQ_BUS_ERR_CODE     	                         MD_IRQID_BUS_ERR     
#define	IRQ_TOPSM_CODE       	                         MD_IRQID_TOPSM       
#define	IRQ_DEM_TRIG_PS_CODE	                         MD_IRQID_DEM_TRIG_PS_INT_LE
#define	IRQ_C2K_ST_SLOT_CODE	                         MD_IRQID_C2K_ST_SLOT_INT
#define	IRQ_C2K_ST_HALF_SLOT_CODE	                 MD_IRQID_C2K_ST_HALF_SLOT_INT
#define	IRQ_C2K_MPDU_CODE	                         MD_IRQID_C2K_MPDU_INT
#define	IRQ_C2K_M2C_DAT_WRDY_CODE	                 MD_IRQID_C2K_M2C_DAT_WRDY_INT
#define	IRQ_C2K_M2C_CTL_WRDY_CODE	                 MD_IRQID_C2K_M2C_CTL_WRDY_INT
#define	IRQ_C2K_M2C_FST_WRDY_CODE	                 MD_IRQID_C2K_M2C_FST_WRDY_INT
#define	IRQ_C2K_NIRQ_CODE	                         MD_IRQID_C2K_NIRQ
//#define	IRQ_PMU_CODE          	                         MD_IRQID_PMU          
#define	IRQ_ECT_CODE          	                         MD_IRQID_ECT          
//#define	IRQ_PS_L1_WDT_CODE    	                         MD_IRQID_PS_L1_WDT_INT    
#define	IRQ_PTP_THERM_CODE	                         MD_IRQID_PTP_THERM_INT_INT
#define	IRQ_CLDMA_CODE        	                         MD_IRQID_CLDMA        
#define	IRQ_MDINFRA_ABM_CODE	                         MD_IRQID_MDINFRA_ABM_INT
#define	IRQ_MDLITE_GPTM_CODE	                         MD_IRQID_MDLITE_GPTM_INT
#define	IRQ_AP2MD_PCCIF_CODE	                         MD_IRQID_AP2MD_PCCIF_IRQ
#define	IRQ_PCCIF_AP_MD_CODE	                         MD_IRQID_PCCIF_AP_MD
#define	IRQ_CCIF2_MD_CODE	                         MD_IRQID_CCIF2_MD_IRQ
#define	IRQ_CCIF2_MD_EVENT_CODE	                         MD_IRQID_CCIF2_MD_EVENT
//#define	IRQ_SPI_CODE         	                         MD_IRQID_SPI         
#define	IRQ_MDINFRA_ABM_ERROR_CODE	                 MD_IRQID_MDINFRA_ABM_ERROR_INT
#define	IRQ_USB3_CODE        	                         MD_IRQID_USB3        
//#define	IRQ_SDIO_CODE        	                         MD_IRQID_SDIO        
#define	IRQ_MSDC0_CODE       	                         MD_IRQID_MSDC0       
#define	IRQ_EHPI0_CODE       	                         MD_IRQID_EHPI0       
//#define	IRQ_RTC_CODE         	                         MD_IRQID_RTC         
//#define	IRQ_SOE_CODE         	                         MD_IRQID_SOE         
#define	IRQ_MSDC1_CODE       	                         MD_IRQID_MSDC1       
//#define	IRQ_PFC_LV_CODE  	                         MD_IRQID_PFC_INT_LV  
//#define	IRQ_AUXACD_CODE      	                         MD_IRQID_AUXACD      
//#define	IRQ_LED_CODE         	                         MD_IRQID_LED         
#define	IRQ_BT_CVSD_CODE       	                         MD_IRQID_BT_CVSD       
#define	IRQ_ELMTOP_IOCU_CODE	                         MD_IRQID_ELMTOP_IOCU_IRQ
#define	IRQ_ELMTOP_EMI_CODE	                         MD_IRQID_ELMTOP_EMI_IRQ
#define	IRQ_ULSR_CODE	                                 MD_IRQID_ULS_INTR
#define	IRQ_SHARE_D12MINT1_CODE	                         MD_IRQID_SHARE_D12MINT1
#define	IRQ_SHARE_D12MINT2_CODE           	         MD_IRQID_SHARE_D12MINT2           
#define	IRQ_SHARE_D12MINT3_CODE           	         MD_IRQID_SHARE_D12MINT3           
//#define	IRQ_LTE_TIMER_EMAC_SF_TICK_CODE   	         MD_IRQID_LTE_TIMER_EMAC_SF_TICK   
#define	IRQ_IRDBG_MCU_CODE	                         MD_IRQID_IRDBG_MCU_INT
#define	IRQ_LTE_MODEMSYS_TRACE_CODE	                 MD_IRQID_LTE_MODEMSYS_TRACE_IRQ
#define	IRQ_SI_CM_ERR_CODE	                         MD_IRQID_SI_CM_ERR
#define	IRQ_L1SYS_SLV_DECERR_LEVEL_CODE	             MD_IRQ_ID_L1SYS_SLV_DECERR_IRQ_LEVEL
#define	IRQ_ABM_CODE	                                 MD_IRQID_ABM_INT
#define	IRQ_ABM_ERROR_CODE	                         MD_IRQID_ABM_ERROR_INT
#define	IRQ_MO_WERR_CODE	                         MD_IRQID_MO_WERR_INT
#define	IRQ_BC_CODE	                                 MD_IRQID_BC_IRQ
#define	IRQ_UEA_UIA_CODE	                         MD_IRQID_UEA_UIA_IRQ
#define	IRQ_UPA_ACC_CODE	                         MD_IRQID_UPA_ACC_IRQ
#define	IRQ_DPA_ACC_CODE	                         MD_IRQID_DPA_ACC_IRQ
#define	IRQ_C2K_MD_0_CODE	                         MD_IRQID_C2K_MD_INT_0
#define	IRQ_C2K_MD_1_CODE	                         MD_IRQID_C2K_MD_INT_1
#define	IRQ_C2K_MD_2_CODE	                         MD_IRQID_C2K_MD_INT_2
#define	IRQ_C2K_MD_3_CODE	                         MD_IRQID_C2K_MD_INT_3
#define	IRQ_C2K_L1_0_CODE	                         MD_IRQID_C2K_L1_INT_0
#define	IRQ_C2K_L1_1_CODE	                         MD_IRQID_C2K_L1_INT_1
#define	IRQ_C2K_L1_2_CODE	                         MD_IRQID_C2K_L1_INT_2
#define	IRQ_C2K_L1_3_CODE	                         MD_IRQID_C2K_L1_INT_3
#define	IRQ_C2K_L1_4_CODE	                         MD_IRQID_C2K_L1_INT_4
#define	IRQ_C2K_L1_5_CODE	                         MD_IRQID_C2K_L1_INT_5
#define	IRQ_C2K_L1_6_CODE	                         MD_IRQID_C2K_L1_INT_6
#define	IRQ_C2K_L1_7_CODE	                         MD_IRQID_C2K_L1_INT_7
#define	IRQ_PB0_PM_CNTRSAT_0_CODE	                 MD_IRQID_PB0_PM_CNTRSAT_INT_0
#define	IRQ_PB0_PM_CNTRSAT_1_CODE	                 MD_IRQID_PB0_PM_CNTRSAT_INT_1
#define	IRQ_PB1_PM_CNTRSAT_0_CODE	                 MD_IRQID_PB1_PM_CNTRSAT_INT_0
#define	IRQ_PB1_PM_CNTRSAT_1_CODE	                 MD_IRQID_PB1_PM_CNTRSAT_INT_1
#define	IRQ_PB2_PM_CNTRSAT_0_CODE	                 MD_IRQID_PB2_PM_CNTRSAT_INT_0
#define	IRQ_PB2_PM_CNTRSAT_1_CODE	                 MD_IRQID_PB2_PM_CNTRSAT_INT_1
#define	IRQ_PB3_PM_CNTRSAT_0_CODE	                 MD_IRQID_PB3_PM_CNTRSAT_INT_0
#define	IRQ_PB3_PM_CNTRSAT_1_CODE	                 MD_IRQID_PB3_PM_CNTRSAT_INT_1
#define	IRQ_PTP_FSM_CODE	                         MD_IRQID_PTP_FSM_INT
#define	IRQ_PTP_SLPCTL_EVENT_CODE	                 MD_IRQID_PTP_SLPCTL_EVENT
#define	IRQ_PCCIF_MDMCU0_CODE	                         MD_IRQID_PCCIF_MDMCU0_IRQ
#define	IRQ_PCCIF_MDMCU1_CODE	                         MD_IRQID_PCCIF_MDMCU1_IRQ
#define	IRQ_ELM_DMA_CODE	                         MD_IRQID_ELM_DMA_IRQ
#define	IRQ_ELM_L1_CODE	                                 MD_IRQID_ELM_L1_IRQ
#define	IRQ_MDCIRQ_LV_CODE	                         MD_IRQID_MDCIRQ_IRQ_LV
#define	IRQ_LOGGDMA0_LV_CODE	                         MD_IRQID_LOGGDMA_IRQ0_LV
#define	IRQ_SOE_LV_CODE	                                 MD_IRQID_SOE_INT_LV
#define	IRQ_TRACE_CODE	                                 MD_IRQID_TRACE_INT
#define	IRQ_SPM2MD_DVFS_MDPERISYS_CODE	                 MD_IRQID_SPM2MD_DVFS_MDPERISYS
#define	IRQ_SI_CM_PCINT_CODE	                         MD_IRQID_SI_CM_PCINT
#define	IRQ_MDMCU_MACRO_BUS_CODE	                 MD_IRQID_MDMCU_MACRO_BUS_INT
#define	IRQ_MDMCU_PERI_BUS_CODE	                         MD_IRQID_MDMCU_PERI_BUS_INT
#define	IRQ_MM_WERR_CODE	                         MD_IRQID_MM_WERR_INT
#define	IRQ_PLL_GEARHP_RDY_CODE	                         MD_IRQID_PLL_GEARHP_RDY
#define	IRQ_DCXO_RDY_WO_ACK_CODE	                 MD_IRQID_DCXO_RDY_WO_ACK_IRQ
#define	IRQ_PLL_REQ_WO_DCXO_CODE	                 MD_IRQID_PLL_REQ_WO_DCXO_IRQ
#define	IRQ_TOP_PLL_DSNS_CODE	                         MD_IRQID_TOP_PLL_DSNS_IRQ
#define	IRQ_BRP_BRP_CMIF_M2C_0_CODE	                 MD_IRQID_BRP_BRP_CMIF_M2C_IRQ_0
#define	IRQ_BRP_BRP_CMIF_M2C_1_CODE	                 MD_IRQID_BRP_BRP_CMIF_M2C_IRQ_1
#define	IRQ_BRP_BRP_CMIF_M2C_2_CODE	                 MD_IRQID_BRP_BRP_CMIF_M2C_IRQ_2
#define	IRQ_CMP_CMTDB_CODE	                         MD_IRQID_CMP_CMTDB_IRQ
#define	IRQ_CS_SRAM_CTRL_CODE	                         MD_IRQID_CS_SRAM_CTRL_IRQ
#define	IRQ_CSTXB_FDD_CS_CODE	                         MD_IRQID_CSTXB_FDD_CS_IRQ
#define	IRQ_CSTXB_TDD_CS_CODE	                         MD_IRQID_CSTXB_TDD_CS_IRQ
#define	IRQ_DFE0_CMIF_M2C_0_CODE	                 MD_IRQID_DFE0_CMIF_M2C_IRQ_0
#define	IRQ_DFE0_CMIF_M2C_1_CODE	                 MD_IRQID_DFE0_CMIF_M2C_IRQ_1
#define	IRQ_DFE0_CMIF_M2C_2_CODE	                 MD_IRQID_DFE0_CMIF_M2C_IRQ_2
#define	IRQ_DFE0_PCC_TOP_0_FULL_CODE	                 MD_IRQID_DFE0_PCC_TOP_0_FULL_IRQ
#define	IRQ_DFE0_PCC_TOP_1_FULL_CODE	                 MD_IRQID_DFE0_PCC_TOP_1_FULL_IRQ
#define	IRQ_DFE0_RXDFEIF_L_CODE	                         MD_IRQID_DFE0_RXDFEIF_L_IRQ
#define	IRQ_DFE0_TCU_L1D_1_CODE	                         MD_IRQID_DFE0_TCU_L1D_1_IRQ
#define	IRQ_DFE0_TCU_L1D_2_CODE	                         MD_IRQID_DFE0_TCU_L1D_2_IRQ
#define	IRQ_DFE1_CMIF_M2C_0_CODE	                 MD_IRQID_DFE1_CMIF_M2C_IRQ_0
#define	IRQ_DFE1_CMIF_M2C_1_CODE	                 MD_IRQID_DFE1_CMIF_M2C_IRQ_1
#define	IRQ_DFE1_CMIF_M2C_2_CODE	                 MD_IRQID_DFE1_CMIF_M2C_IRQ_2
#define	IRQ_DFE1_PCC_TOP_0_FULL_CODE	                 MD_IRQID_DFE1_PCC_TOP_0_FULL_IRQ
#define	IRQ_DFE1_PCC_TOP_1_FULL_CODE	                 MD_IRQID_DFE1_PCC_TOP_1_FULL_IRQ
#define	IRQ_DFE1_RXDFEIF_L_CODE	                         MD_IRQID_DFE1_RXDFEIF_L_IRQ
#define	IRQ_L1GDMA_CODE	                                 MD_IRQID_GDMA_IRQ
#define	IRQ_ICC_DSP_0_CODE	                         MD_IRQID_ICC_DSP_IRQ_0
#define	IRQ_ICC_DSP_1_CODE	                         MD_IRQID_ICC_DSP_IRQ_1
#define	IRQ_ICC_SRAM_CTRL_CODE	                         MD_IRQID_ICC_SRAM_CTRL_IRQ
#define	IRQ_IDC_PM_CODE	                                 MD_IRQID_IDC_PM_INT
#define	IRQ_IDC_UART_CODE	                         MD_IRQID_IDC_UART_IRQ
#define	IRQ_IMC_DSP_0_CODE	                         MD_IRQID_IMC_DSP_IRQ_0
#define	IRQ_IMC_DSP_1_CODE	                         MD_IRQID_IMC_DSP_IRQ_1
#define	IRQ_IMC_MMU_0_CODE	                         MD_IRQID_IMC_MMU_IRQ_0
#define	IRQ_IMC_MMU_1_CODE	                         MD_IRQID_IMC_MMU_IRQ_1
#define	IRQ_IMC_RXDMP_CODE	                         MD_IRQID_IMC_RXDMP_IRQ
#define	IRQ_IMC_RXTDB_CODE	                         MD_IRQID_IMC_RXTDB_IRQ
#define	IRQ_IMC_SRAM_CTRL_CODE	                         MD_IRQID_IMC_SRAM_CTRL_IRQ
#define	IRQ_INR_RAKE_CMIF_M2C_0_CODE	                 MD_IRQID_INR_RAKE_CMIF_M2C_IRQ_0
#define	IRQ_INR_RAKE_CMIF_M2C_1_CODE	                 MD_IRQID_INR_RAKE_CMIF_M2C_IRQ_1
#define	IRQ_INR_TD1_BRP_DMA_CODE	                 MD_IRQID_INR_TD1_BRP_DMA_IRQ
#define	IRQ_INR_TD1_CSCE_CODE	                         MD_IRQID_INR_TD1_CSCE_IRQ
#define	IRQ_INR_TD1_DFE_BRG_CODE	                 MD_IRQID_INR_TD1_DFE_BRG_IRQ
#define	IRQ_INR_TD1_JDA_CODE	                         MD_IRQID_INR_TD1_JDA_IRQ
#define	IRQ_INR_TD1_PP_CODE	                         MD_IRQID_INR_TD1_PP_IRQ
#define	IRQ_INR_TD2_BRP_DMA_CODE	                 MD_IRQID_INR_TD2_BRP_DMA_IRQ
#define	IRQ_INR_TD2_CSCE_CODE	                         MD_IRQID_INR_TD2_CSCE_IRQ
#define	IRQ_INR_TD2_DFE_BRG_CODE	                 MD_IRQID_INR_TD2_DFE_BRG_IRQ
#define	IRQ_INR_TD2_JDA_CODE	                         MD_IRQID_INR_TD2_JDA_IRQ
#define	IRQ_TD2_PP_CODE	                                 MD_IRQID_TD2_PP_IRQ
#define	IRQ_L1_LTE_SLEEP_CODE	                         MD_IRQID_L1_LTE_SLEEP_IRQ
#define	IRQ_L1M_PHY_LTMR_INFORM_DONE0_CODE	         MD_IRQID_L1M_PHY_LTMR_INFORM_DONE_IRQ0
#define	IRQ_L1M_PHY_LTMR_INFORM_DONE1_CODE	         MD_IRQID_L1M_PHY_LTMR_INFORM_DONE_IRQ1
#define	IRQ_L1M_PHY_LTMR_0_CODE	                         MD_IRQID_L1M_PHY_LTMR_IRQ_0
#define	IRQ_L1M_PHY_LTMR_1_CODE	                         MD_IRQID_L1M_PHY_LTMR_IRQ_1
#define	IRQ_L1M_PHY_LTMR_2_CODE	                         MD_IRQID_L1M_PHY_LTMR_IRQ_2
#define	IRQ_L1M_PHY_LTMR_3_CODE	                         MD_IRQID_L1M_PHY_LTMR_IRQ_3
#define	IRQ_L1M_PHY_LTMR_4_CODE	                         MD_IRQID_L1M_PHY_LTMR_IRQ_4
#define	IRQ_L1M_PHY_LTMR_5_CODE	                         MD_IRQID_L1M_PHY_LTMR_IRQ_5
#define	IRQ_L1M_PHY_LTMR_6_CODE	                         MD_IRQID_L1M_PHY_LTMR_IRQ_6
#define	IRQ_L1M_PHY_LTMR_7_CODE	                         MD_IRQID_L1M_PHY_LTMR_IRQ_7
#define	IRQ_LTEL1_CS_CODE	                         MD_IRQID_LTEL1_CS_IRQ
#define	IRQ_LTXB0_BSI_L_AB_CODE	                         MD_IRQID_LTXB0_BSI_L_AB_IRQ
#define	IRQ_LTXB0_BSI_L_C_CODE	                         MD_IRQID_LTXB0_BSI_L_C_IRQ
#define	IRQ_LTXB0_BSI_L_D_CODE	                         MD_IRQID_LTXB0_BSI_L_D_IRQ
#define	IRQ_LTXB0_TXENC_ERROR_CODE	                 MD_IRQID_LTXB0_TXENC_ERROR_IRQ
#define	IRQ_LTXB1_BSI_L_AB_CODE	                         MD_IRQID_LTXB1_BSI_L_AB_IRQ
#define	IRQ_LTXB1_BSI_L_C_CODE	                         MD_IRQID_LTXB1_BSI_L_C_IRQ
#define	IRQ_LTXB1_BSI_L_D_CODE	                         MD_IRQID_LTXB1_BSI_L_D_IRQ
#define	IRQ_LTXB1_TXENC_ERROR_CODE	                 MD_IRQID_LTXB1_TXENC_ERROR_IRQ
#define	IRQ_MMU_SRAM_CTRL_CODE	                         MD_IRQID_MMU_SRAM_CTRL_IRQ
#define	IRQ_MPC_DSP_0_CODE	                         MD_IRQID_MPC_DSP_IRQ_0
#define	IRQ_MPC_DSP_1_CODE	                         MD_IRQID_MPC_DSP_IRQ_1
#define	IRQ_MPC_SRAM_CTRL_CODE	                         MD_IRQID_MPC_SRAM_CTRL_IRQ
#define	IRQ_TDMA_CTIRQ1_CODE	                         MD_IRQID_TDMA_CTIRQ1
#define	IRQ_TDMA_CTIRQ2_CODE	                         MD_IRQID_TDMA_CTIRQ2
#define	IRQ_TDMA_CTIRQ3_CODE	                         MD_IRQID_TDMA_CTIRQ3
#define	IRQ_L1_LTE_WAKEUP_CODE	                         MD_IRQID_L1_LTE_WAKEUP_IRQ
#define	IRQ_FREQM_CODE	                                 MD_IRQID_FREQM_IRQ
#define	IRQ_MDL1_TOPSM_CODE	                         MD_IRQID_MDL1_TOPSM_IRQ
#define	IRQ_RTR_FRAME_CODE	                         MD_IRQID_RTR_FRAME_IRQ
#define	IRQ_RTR_SLT_CODE	                         MD_IRQID_RTR_SLT_IRQ
#define	IRQ_WTIMER_CODE	                                 MD_IRQID_WTIMER_IRQ
#define	IRQ_TDD_WAKEUP_CODE	                         MD_IRQID_TDD_WAKEUP_IRQ
#define	IRQ_TDMA_WAKEUP_CODE	                         MD_IRQID_TDMA_WAKEUP_IRQ
#define	IRQ_MODEML1_DVFS_CODE	                         MD_IRQID_MODEML1_DVFS_IRQ
#define	IRQ_MODEML1_DVFS_MIPS_DVS_CODE	                 MD_IRQID_MODEML1_DVFS_MIPS_DVS_IRQ
#define	IRQ_SW_LISR1_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_0
#define	IRQ_SW_LISR2_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_1
#define	IRQ_SW_LISR3_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_2
#define	IRQ_SW_LISR4_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_3
#define	IRQ_SW_LISR5_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_4
#define	IRQ_SW_LISR6_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_5
#define	IRQ_SW_LISR7_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_6
#define	IRQ_SW_LISR8_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_7
#define	IRQ_SW_LISR9_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_8
#define	IRQ_SW_LISR10_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_9
#define	IRQ_SW_LISR11_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_10
#define	IRQ_SW_LISR12_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_11
#define	IRQ_SW_LISR13_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_12
#define	IRQ_SW_LISR14_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_13
#define	IRQ_SW_LISR15_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_14
#define	IRQ_SW_LISR16_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_15
#define	IRQ_SW_LISR17_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_16
#define	IRQ_SW_LISR18_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_17
#define	IRQ_SW_LISR19_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_18
#define	IRQ_SW_LISR20_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_19
#define	IRQ_SW_LISR21_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_20
#define	IRQ_SW_LISR22_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_21
#define	IRQ_SW_LISR23_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_22
#define	IRQ_SW_LISR24_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_23
#define	IRQ_SW_LISR25_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_24
#define	IRQ_SW_LISR26_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_25
#define	IRQ_SW_LISR27_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_26
#define	IRQ_SW_LISR28_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_27
#define	IRQ_SW_LISR29_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_28
#define	IRQ_SW_LISR30_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_29
#define	IRQ_SW_LISR31_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_30
#define	IRQ_SW_LISR32_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_31
#define	IRQ_SW_LISR33_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_32
#define	IRQ_SW_LISR34_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_33
#define	IRQ_SW_LISR35_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_34
#define	IRQ_SW_LISR36_CODE	                         MD_IRQID_SW_TRIGGER_RESERVED_35
#define	IRQ_RESERVED_FOR_CC_IRQ_0_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_0
#define	IRQ_RESERVED_FOR_CC_IRQ_1_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_1
#define	IRQ_RESERVED_FOR_CC_IRQ_2_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_2
#define	IRQ_RESERVED_FOR_CC_IRQ_3_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_3
#define	IRQ_RESERVED_FOR_CC_IRQ_4_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_4
#define	IRQ_RESERVED_FOR_CC_IRQ_5_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_5
#define	IRQ_RESERVED_FOR_CC_IRQ_6_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_6
#define	IRQ_RESERVED_FOR_CC_IRQ_7_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_7
#define	IRQ_RESERVED_FOR_CC_IRQ_8_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_8
#define	IRQ_RESERVED_FOR_CC_IRQ_9_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_9
#define	IRQ_RESERVED_FOR_CC_IRQ_10_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_10
#define	IRQ_RESERVED_FOR_CC_IRQ_11_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_11
#define	IRQ_RESERVED_FOR_CC_IRQ_12_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_12
#define	IRQ_RESERVED_FOR_CC_IRQ_13_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_13
#define	IRQ_RESERVED_FOR_CC_IRQ_14_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_14
#define	IRQ_RESERVED_FOR_CC_IRQ_15_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_15
#define	IRQ_RESERVED_FOR_CC_IRQ_16_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_16
#define	IRQ_RESERVED_FOR_CC_IRQ_17_CODE	                 MD_IRQID_RESERVED_FOR_CC_IRQ_17
#define	IRQ_L1_GPTM1_CODE	                         MD_IRQID_L1_GPTM1
#define	IRQ_L1_GPTM2_CODE	                         MD_IRQID_L1_GPTM2
#define	IRQ_L1_GPTM3_CODE	                         MD_IRQID_L1_GPTM3
#define	IRQ_L1_GPTM4_CODE	                         MD_IRQID_L1_GPTM4
#define	IRQ_L1_GPTM5_CODE	                         MD_IRQID_L1_GPTM5
#define	IRQ_L1_GPTM6_CODE	                         MD_IRQID_L1_GPTM6
#define	IRQ_L1LITE_GPTM_CODE	                         MD_IRQID_L1LITE_GPTM_INT
#define	IRQ_PPC_CIRQ_CODE	                         MD_IRQID_PPC_CIRQ

/*                          
 * Define IRQ selection register assignment
 */                         
#define IRQSel()
//#define INVALID_ISR_ID           (0xFF)

#define INTERRUPT_PRIORITY_LIST \
/*  0 ~  7 */ 127,   6, 127,  11, 127,   7, 127, 127, \
/*  8 ~ 15 */ 127, 127, 127, 127, 127, 127, 127,   6, \
/* 16 ~ 23 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/* 24 ~ 31 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/* 32 ~ 39 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/* 40 ~ 47 */ 127,   7,   7,   6, 127,   7, 127, 127, \
/* 48 ~ 55 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/* 56 ~ 63 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/* 64 ~ 71 */ 127, 127, 127, 127, 127, 127,  73, 127, \
/* 72 ~ 79 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/* 80 ~ 87 */  81,  80,  83,  82, 127, 127, 127, 127, \
/* 88 ~ 95 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/* 96 ~103 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/*104 ~111 */  79,   7, 127, 127, 127, 127, 127, 127, \
/*112 ~119 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/*120 ~127 */ 127, 127, 127,  76,  58,  29,  60,   6, \
/*128 ~135 */  38,  32,  62,  62,  62, 127, 127, 127, \
/*136 ~143 */  33,  33,  62,  62,  62, 127, 127, 127, \
/*144 ~151 */ 127,  40,   6,   6, 127, 127,  36,   6, \
/*152 ~159 */ 127, 127,  56,  60,   6,  75,  34,  43, \
/*160 ~167 */  34,  38,  44,  59,  43,  34,  38,  44, \
/*168 ~175 */  59,  54,  52,  53,  37,  37,  50,  46, \
/*176 ~183 */  48,  49,  50,  29,  57,  76,  77, 127, \
/*184 ~191 */  61,  76, 127, 127,  61,   6,  42,   6, \
/*192 ~199 */   6,  66,  67,  65,  28,  72,  71,  74, \
/*200 ~207 */  31,  26,  27,  63,  25,   7,  69,  68, \
/*208 ~215 */  70,  14,  15,  55,  69,  70, 127,  11, \
/*216 ~223 */ 127, 127, 127, 127, 127, 127, 127, 127, \
/*224 ~231 */ 127,  53,  68,   6, 127, 127,  78,  64, \
/*232 ~239 */  78,  78,  68,  32,  47,  30,  13,  71, \
/*240 ~247 */  65,  65,  12,  11,  10,  25, 127, 127, \
/*248 ~255 */ 127, 127, 127, 127, 127, 127, 127, 127,


#define INTERRUPT_GROUP_LIST \
	/*	0 ~  7 */  0, 14,  4,  5, 14,  0,  4, 10, \
	/*	8 ~ 15 */ 10, 10, 10, 10, 10, 10, 10, 14, \
	/* 16 ~ 23 */ 10, 10, 10, 16, 10, 10, 10,  0, \
	/* 24 ~ 31 */  7, 10, 10, 10, 10, 10,  0,  0, \
	/* 32 ~ 39 */ 10, 10, 10, 10, 10, 10, 10, 10, \
	/* 40 ~ 47 */ 10,  2,  4, 14, 10,  0, 10,  0, \
	/* 48 ~ 55 */ 10, 10, 10, 10, 10, 10,  0, 10, \
	/* 56 ~ 63 */ 10, 10, 10, 10, 10, 10, 10, 10, \
	/* 64 ~ 71 */ 10,  0, 10, 10, 10,  1,  0, 12, \
	/* 72 ~ 79 */ 10, 10, 10, 10, 10,  0,  0, 10, \
	/* 80 ~ 87 */  4,  4,  4,  4,  0,  0, 10, 10, \
	/* 88 ~ 95 */ 10, 10, 10, 10, 10, 10, 10, 10, \
	/* 96 ~103 */ 10, 10, 10, 10, 10, 10, 10, 10, \
	/*104 ~111 */  0,  0, 10,  7, 10, 10, 10, 10, \
	/*112 ~119 */ 10,  0, 10, 10, 10, 10, 10, 13, \
	/*120 ~127 */ 10, 10, 10,  1,  1, 10, 10, 14, \
	/*128 ~135 */  1, 10,  1,  0,  0,  0,  0, 10, \
	/*136 ~143 */ 10, 10,  1,  0,  0,  0,  0, 10, \
	/*144 ~151 */ 10,  3, 14, 14, 10, 10,  3, 14, \
	/*152 ~159 */ 10, 10, 10, 10, 14,  1,  1, 10, \
	/*160 ~167 */ 10, 10, 10, 10, 10, 10, 10, 10, \
	/*168 ~175 */ 10,  3,  1,  3,  1,  1,  3,  5, \
	/*176 ~183 */  1,  1,  3,  1,  0, 10, 10, 10, \
	/*184 ~191 */  1, 10, 10, 10,  1, 14,  1, 14, \
	/*192 ~199 */ 14,  1,  1,  1,  3,  0,  0,  1, \
	/*200 ~207 */  1,  1, 10,  1,  0,  1,  1,  1, \
	/*208 ~215 */  1,  5,  5,  1,  1,  1, 10,  5, \
	/*216 ~223 */  0,  1,  2,  3,  4,  5,  6,  6, \
	/*224 ~231 */  7, 15,  1, 13,  1, 13,  0,  0, \
	/*232 ~239 */  0,  0,  1,  1,  1,  1,  4,  4, \
	/*240 ~247 */  5,  5,  5,  5,  5,  4, 10, 10, \
	/*248 ~255 */  7,  7, 10, 10, 10, 10, 10,  0, 

#if defined(__ESL_SINGLE_CORE__)
#define INTERRUPT_GROUP_M2V_LIST \
        0xFD, 0xFD ,0xFD, 0xFD, 0xFD, 0xFD ,0xFD, 0xFD, \
        0xFD, 0xFD ,0xFD, 0xFD, 0xFD, 0xFD ,0xFD, 0xFD, \
        0xFD, 0xFD ,0xFD, 0xFD, 0xFD, 0xFD ,0xFD, 0xFD, \
        0xFD, 0xFD ,0xFD, 0xFD, 0xFD, 0xFD ,0xFD, 0xFD,
#else
#define INTERRUPT_GROUP_M2V_LIST \
	/* Group0(0) */                0xFE, \
	/* Group1(1) */                0xFD, \
	/* Group2(2) */                0xFB, \
	/* Group3(3) */                0xF7, \
	/* Group4(4) */                0xEF, \
	/* Group5(5) */                0xDF, \
	/* Group6(6) */                0xBF, \
	/* Group7(7) */                0x7F, \
	/* Group8(0,2) */              0xFA, \
	/* Group9(0,2,4) */            0xEA, \
	/* Group10(0,2,4,6) */         0xAA, \
	/* Group11(0,4) */             0xEE, \
	/* Group12(0,6) */             0xBE, \
	/* Group13(0,1,2,3,4,5,6) */   0x80, \
	/* Group14(0,1,2,3,4,5,6,7)*/  0x00, \
	/* Group15(1,3) */             0xF5, \
	/* Group16(0,2,4,6,7) */       0x2A, \
	/* Group17 */ 0xFF, \
	/* Group18 */ 0xFF, \
	/* Group19 */ 0xFF, \
	/* Group20 */ 0xFF, \
	/* Group21 */ 0xFF, \
	/* Group22 */ 0xFF, \
	/* Group23 */ 0xFF, \
	/* Group24 */ 0xFF, \
	/* Group25 */ 0xFF, \
	/* Group26 */ 0xFF, \
	/* Group27 */ 0xFF, \
	/* Group28 */ 0xFF, \
	/* Group29 */ 0xFF, \
	/* Group30 */ 0xFF, \
	/* Group31 */ 0xFF,
#endif

#define NMI_GROUP_M2V_LIST \
	/* Group0(0) */                0x00, \
	/* Group1(1) */                0xFF, \
	/* Group2(2) */                0xFF, \
	/* Group3(3) */                0xFF, 

#define INTERRUPT_BROADCAST_TYPE \
	/*  0-31 */                0xE180807F, \
	/* 32-63 */                0x0040AE00, \
	/* 64-95 */                0x003FF0E2, \
	/* 96-127 */               0x98760B00, \
	/* 128-159 */              0x70CE7C7D, \
	/* 160-191 */              0xF11FFE00, \
	/* 192-223 */              0xFFBFFBFF, \
	/* 224-255 */              0x833FFFFF, 

#define INTERRUPT_TYPE \
	/*  0-31 */                0x00000000, \
	/* 32-63 */                0x00000000, \
	/* 64-95 */                0x00000000, \
	/* 96-127 */               0x00000000, \
	/* 128-159 */              0x00000000, \
	/* 160-191 */              0x00000000, \
	/* 192-223 */              0x00000000, \
	/* 224-255 */              0x00000000, 

#define INTERRUPT_HRT_MT \
	/*  0-31 */                0x00000000, \
	/* 32-63 */                0x00000000, \
	/* 64-95 */                0x00000000, \
	/* 96-127 */               0x00000000, \
	/* 128-159 */              0x00000000, \
	/* 160-191 */              0x00063000, \
	/* 192-223 */              0x00000000, \
	/* 224-255 */              0x00000000, 


#define INTERRUPT_TIMING_THRESHOLD \
	/*	VPE0 */  60,\
	/*	VPE1 */  60,\
	/*	VPE2 */  60,\
	/*	VPE3 */  60,\
	/*	VPE4 */  60,\
	/*	VPE5 */  60,\
	/*	VPE6 */  60,\
	/*	VPE7 */  60,


/*******************************************************************************
 * Special for display on SWDBG - MCU profiling
 *******************************************************************************/
#if (MDCIRQ_MAX_ISR_NUM<=256)
#define __CIRQ_MASK_REG_NR_8_NEW__
#else
    #error "Unsupport mask number"
#endif

#define __ENABLE_SW_TRIGGER_INTERRUPT__
#define __ENABLE_SWGIC_TRIGGER_INTERRUPT__

//#define EINT_TOTAL_CHANNEL 16

#define IRQ_MASK0              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x0000))
#define IRQ_MASK1              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x0004))
#define IRQ_MASK2              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x0008))
#define IRQ_MASK3              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x000C))
#define IRQ_MASK4              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x00010))
#define IRQ_MASK5              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x00014))
#define IRQ_MASK6              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x00018))
#define IRQ_MASK7              ((volatile UINT32P)(MDCIRQ_IMKR_BASE+0x0001C))


/*********************************************************************
                         GIC configuration
**********************************************************************/
#define NUM_GIC_SOURCES          (64)

#define GIC_OS_priority 0
#define GIC_DUMMY_priority 1 
#define GIC_INT_priority 3
#define GIC_INT_EX_priority 4
#define GIC_NONE_priority 64

#define GIC_IRQ_TYPE 0 
#define GIC_NMI_TYPE 1
#define GIC_YQ_TYPE 2
#define GIC_UNDEF_TYPE 3


#define VPE0_NMI_CODE MD_GICID_VPE0NMI 
#define VPE1_NMI_CODE MD_GICID_VPE1NMI 
#define VPE2_NMI_CODE MD_GICID_VPE2NMI 
#define VPE3_NMI_CODE MD_GICID_VPE3NMI 
#define VPE4_NMI_CODE MD_GICID_VPE4NMI 
#define VPE5_NMI_CODE MD_GICID_VPE5NMI 
#define VPE6_NMI_CODE MD_GICID_VPE6NMI 
#define VPE7_NMI_CODE MD_GICID_VPE7NMI 

#define VPE0_OS_IPI_CODE MD_GICID_VPE0WEDGE 
#define VPE1_OS_IPI_CODE MD_GICID_VPE1WEDGE 
#define VPE2_OS_IPI_CODE MD_GICID_VPE2WEDGE 
#define VPE3_OS_IPI_CODE MD_GICID_VPE3WEDGE 
#define VPE4_OS_IPI_CODE MD_GICID_VPE4WEDGE 
#define VPE5_OS_IPI_CODE MD_GICID_VPE5WEDGE 
#define VPE6_OS_IPI_CODE MD_GICID_VPE6WEDGE 
#define VPE7_OS_IPI_CODE MD_GICID_VPE7WEDGE

#define GICID_RESERVED0_CODE  MD_GICID_RESERVED0 
#define GICID_RESERVED1_CODE  MD_GICID_RESERVED1 
#define GICID_RESERVED2_CODE  MD_GICID_RESERVED2 
#define GICID_RESERVED3_CODE  MD_GICID_RESERVED3 
#define GICID_RESERVED4_CODE  MD_GICID_RESERVED4 
#define GICID_RESERVED5_CODE  MD_GICID_RESERVED5
#define GICID_RESERVED6_CODE  MD_GICID_RESERVED6 
#define GICID_RESERVED7_CODE  MD_GICID_RESERVED7 


#define GIC_PRIORITY_LIST \
/*  0 ~  7 */  3,  3,  3,  3,  3,  3,  3,  3, \
/*  8 ~ 15 */  4,  4,  4,  4,  4,  4,  4,  4, \
/* 16 ~ 23 */  0,  0,  0,  0,  0,  0,  0,  0, \
/* 24 ~ 31 */  0,  1,  2,  3,  8,  9, 10, 11, \
/* 32 ~ 39 */  0,  1,  2,  3,  8,  9, 10, 11, \
/* 40 ~ 47 */  0,  1,  2,  3,  8,  9, 10, 11, \
/* 48 ~ 55 */  0,  1,  2,  3,  8,  9, 10, 11, \
/* 56 ~ 63 */  1,  1 , 1, 64, 64, 64, 64, 64, \

#define GIC_TYPE_LIST \
/*	0 ~  7 */  0,  0,  0,  0,  0,  0,  0,  0, \
/*	8 ~ 15 */  0,  0,  0,  0,  0,  0,  0,  0, \
/* 16 ~ 23 */  0,  0,  0,  0,  0,  0,  0,  0, \
/* 24 ~ 31 */  2,  2,  2,  2,  2,  2,  2,  2, \
/* 32 ~ 39 */  2,  2,  2,  2,  2,  2,  2,  2, \
/* 40 ~ 47 */  2,  2,  2,  2,  2,  2,  2,  2, \
/* 48 ~ 55 */  2,  2,  2,  2,  2,  2,  2,  2, \
/* 56 ~ 63 */  0 , 0,  0,  3,  3,  3,  3,  3, \

#define GIC_MAP2VPE_LIST \
/*	0 ~  7 */  0,  1,  2,  3,  4,  5,  6,  7, \
/*	8 ~ 15 */  0,  1,  2,  3,  4,  5,  6,  7, \
/* 16 ~ 23 */  0,  1,  2,  3,  4,  5,  6,  7, \
/* 24 ~ 31 */  0,  0,  0,  0,  1,  1,  1,  1, \
/* 32 ~ 39 */  2,  2,  2,  2,  3,  3,  3,  3, \
/* 40 ~ 47 */  4,  4,  4,  4,  5,  5,  5,  5, \
/* 48 ~ 55 */  6,  6,  6,  6,  7,  7,  7,  7, \
/* 56 ~ 63 */  0,  2,  4,  8,  8,  8,  8,  8, \


typedef enum
{
   VPE_STATUS_TASK_L     = 0,
   VPE_STATUS_TASK_H     = 1,
   VPE_STATUS_HISR       = 2, 
   VPE_STATUS_LISR       = 3,
} VPE_STATUS;

#if (MAX_GIC_NUM<=64)
#define __MIPSGIC_MASK_REG_NR_2_NEW__
#else
    #error "Unsupport mask number"
#endif


enum CIRQ_Code_Def_MET_Enum
{
    IRQ_OST = IRQ_OST_CODE,          
    IRQ_MDINFRA_BUSMON = IRQ_MDINFRA_BUSMON_CODE,
    IRQ_LMAC_RAR = IRQ_LMAC_RAR_CODE,     
    IRQ_LMAC_EAR = IRQ_LMAC_EAR_CODE,     
    IRQ_MDWDT = IRQ_MDWDT_CODE,        
    IRQ_L2COPRO = IRQ_L2COPRO_CODE,      
    IRQ_GPTM1 = IRQ_GPTM1_CODE,        
    IRQ_GPTM2 = IRQ_GPTM2_CODE,        
    IRQ_GPTM3 = IRQ_GPTM3_CODE,        
    IRQ_GPTM4 = IRQ_GPTM4_CODE,        
    IRQ_GPTM5 = IRQ_GPTM5_CODE,       
    IRQ_GPTM6 = IRQ_GPTM6_CODE,       
    IRQ_UART_MD0 = IRQ_UART_MD0_CODE,    
    IRQ_UART_MD1 = IRQ_UART_MD1_CODE,    
    IRQ_MDMCU_BUSMON = IRQ_MDMCU_BUSMON_CODE,
    IRQ_I2C_0 = IRQ_I2C_0_CODE,       
    IRQ_USIM0 = IRQ_USIM0_CODE,       
    IRQ_USIM1 = IRQ_USIM1_CODE,       
    IRQ_UART_MD2 = IRQ_UART_MD2_CODE,    
    IRQ_MDGDMA0 = IRQ_MDGDMA0_CODE,     
    IRQ_MDGDMA1 = IRQ_MDGDMA1_CODE,     
    IRQ_MDGDMA2 = IRQ_MDGDMA2_CODE,     
    IRQ_MDGDMA3 = IRQ_MDGDMA3_CODE,     
    IRQ_EINT0 = IRQ_EINT0_CODE,       
    IRQ_EINT1 = IRQ_EINT1_CODE,       
    IRQ_EINT2 = IRQ_EINT2_CODE,       
    IRQ_EINT3 = IRQ_EINT3_CODE,       
    IRQ_EINT_SHARE = IRQ_EINT_SHARE_CODE,  
    IRQ_BUS_ERR = IRQ_BUS_ERR_CODE,     
    IRQ_TOPSM = IRQ_TOPSM_CODE,       
    IRQ_DEM_TRIG_PS = IRQ_DEM_TRIG_PS_CODE,
    IRQ_C2K_ST_SLOT = IRQ_C2K_ST_SLOT_CODE,
    IRQ_C2K_ST_HALF_SLOT = IRQ_C2K_ST_HALF_SLOT_CODE,
    IRQ_C2K_MPDU = IRQ_C2K_MPDU_CODE,
    IRQ_C2K_M2C_DAT_WRDY = IRQ_C2K_M2C_DAT_WRDY_CODE,
    IRQ_C2K_M2C_CTL_WRDY = IRQ_C2K_M2C_CTL_WRDY_CODE,
    IRQ_C2K_M2C_FST_WRDY = IRQ_C2K_M2C_FST_WRDY_CODE,
    IRQ_C2K_NIRQ = IRQ_C2K_NIRQ_CODE,
    IRQ_ECT = IRQ_ECT_CODE,    
    IRQ_PTP_THERM = IRQ_PTP_THERM_CODE,
    IRQ_CLDMA = IRQ_CLDMA_CODE,        
    IRQ_MDINFRA_ABM = IRQ_MDINFRA_ABM_CODE,
    IRQ_MDLITE_GPTM = IRQ_MDLITE_GPTM_CODE,
    IRQ_AP2MD_PCCIF = IRQ_AP2MD_PCCIF_CODE,
    IRQ_PCCIF_AP_MD = IRQ_PCCIF_AP_MD_CODE,
    IRQ_CCIF2_MD = IRQ_CCIF2_MD_CODE,
    IRQ_CCIF2_MD_EVENT = IRQ_CCIF2_MD_EVENT_CODE,      
    IRQ_MDINFRA_ABM_ERROR = IRQ_MDINFRA_ABM_ERROR_CODE,
    IRQ_USB3 = IRQ_USB3_CODE,     
    IRQ_MSDC0 = IRQ_MSDC0_CODE,       
    IRQ_EHPI0 = IRQ_EHPI0_CODE,       
    IRQ_MSDC1 = IRQ_MSDC1_CODE,  
    IRQ_BT_CVSD = IRQ_BT_CVSD_CODE,       
    IRQ_ELMTOP_IOCU = IRQ_ELMTOP_IOCU_CODE,
    IRQ_ELMTOP_EMI = IRQ_ELMTOP_EMI_CODE,
    IRQ_ULSR = IRQ_ULSR_CODE,
    IRQ_SHARE_D12MINT1 = IRQ_SHARE_D12MINT1_CODE,
    IRQ_SHARE_D12MINT2 = IRQ_SHARE_D12MINT2_CODE,           
    IRQ_SHARE_D12MINT3 = IRQ_SHARE_D12MINT3_CODE,
    IRQ_IRDBG_MCU = IRQ_IRDBG_MCU_CODE,
    IRQ_LTE_MODEMSYS_TRACE = IRQ_LTE_MODEMSYS_TRACE_CODE,
    IRQ_SI_CM_ERR = IRQ_SI_CM_ERR_CODE,
    IRQ_L1SYS_SLV_DECERR_LEVEL = IRQ_L1SYS_SLV_DECERR_LEVEL_CODE,
    IRQ_ABM = IRQ_ABM_CODE,
    IRQ_ABM_ERROR = IRQ_ABM_ERROR_CODE,
    IRQ_MO_WERR = IRQ_MO_WERR_CODE,
    IRQ_BC = IRQ_BC_CODE,
    IRQ_UEA_UIA = IRQ_UEA_UIA_CODE,
    IRQ_UPA_ACC = IRQ_UPA_ACC_CODE,
    IRQ_DPA_ACC = IRQ_DPA_ACC_CODE,
    IRQ_C2K_MD_0 = IRQ_C2K_MD_0_CODE,
    IRQ_C2K_MD_1 = IRQ_C2K_MD_1_CODE,
    IRQ_C2K_MD_2 = IRQ_C2K_MD_2_CODE,
    IRQ_C2K_MD_3 = IRQ_C2K_MD_3_CODE,
    IRQ_C2K_L1_0 = IRQ_C2K_L1_0_CODE,
    IRQ_C2K_L1_1 = IRQ_C2K_L1_1_CODE,
    IRQ_C2K_L1_2 = IRQ_C2K_L1_2_CODE,
    IRQ_C2K_L1_3 = IRQ_C2K_L1_3_CODE,
    IRQ_C2K_L1_4 = IRQ_C2K_L1_4_CODE,
    IRQ_C2K_L1_5 = IRQ_C2K_L1_5_CODE,
    IRQ_C2K_L1_6 = IRQ_C2K_L1_6_CODE,
    IRQ_C2K_L1_7 = IRQ_C2K_L1_7_CODE,
    IRQ_PB0_PM_CNTRSAT_0 = IRQ_PB0_PM_CNTRSAT_0_CODE,
    IRQ_PB0_PM_CNTRSAT_1 = IRQ_PB0_PM_CNTRSAT_1_CODE,
    IRQ_PB1_PM_CNTRSAT_0 = IRQ_PB1_PM_CNTRSAT_0_CODE,
    IRQ_PB1_PM_CNTRSAT_1 = IRQ_PB1_PM_CNTRSAT_1_CODE,
    IRQ_PB2_PM_CNTRSAT_0 = IRQ_PB2_PM_CNTRSAT_0_CODE,
    IRQ_PB2_PM_CNTRSAT_1 = IRQ_PB2_PM_CNTRSAT_1_CODE,
    IRQ_PB3_PM_CNTRSAT_0 = IRQ_PB3_PM_CNTRSAT_0_CODE,
    IRQ_PB3_PM_CNTRSAT_1 = IRQ_PB3_PM_CNTRSAT_1_CODE,
    IRQ_PTP_FSM = IRQ_PTP_FSM_CODE,
    IRQ_PTP_SLPCTL_EVENT = IRQ_PTP_SLPCTL_EVENT_CODE,
    IRQ_PCCIF_MDMCU0 = IRQ_PCCIF_MDMCU0_CODE,
    IRQ_PCCIF_MDMCU1 = IRQ_PCCIF_MDMCU1_CODE,
    IRQ_ELM_DMA = IRQ_ELM_DMA_CODE,
    IRQ_ELM_L1 = IRQ_ELM_L1_CODE,
    IRQ_MDCIRQ_LV = IRQ_MDCIRQ_LV_CODE,
    IRQ_LOGGDMA0_LV = IRQ_LOGGDMA0_LV_CODE,
    IRQ_SOE_LV = IRQ_SOE_LV_CODE,
    IRQ_TRACE = IRQ_TRACE_CODE,
    IRQ_SPM2MD_DVFS_MDPERISYS = IRQ_SPM2MD_DVFS_MDPERISYS_CODE,
    IRQ_SI_CM_PCINT = IRQ_SI_CM_PCINT_CODE,
    IRQ_MDMCU_MACRO_BUS = IRQ_MDMCU_MACRO_BUS_CODE,
    IRQ_MDMCU_PERI_BUS = IRQ_MDMCU_PERI_BUS_CODE,
    IRQ_MM_WERR = IRQ_MM_WERR_CODE,
    IRQ_PLL_GEARHP_RDY = IRQ_PLL_GEARHP_RDY_CODE,
    IRQ_DCXO_RDY_WO_ACK = IRQ_DCXO_RDY_WO_ACK_CODE,
    IRQ_PLL_REQ_WO_DCXO = IRQ_PLL_REQ_WO_DCXO_CODE,
    IRQ_TOP_PLL_DSNS = IRQ_TOP_PLL_DSNS_CODE,
    IRQ_BRP_BRP_CMIF_M2C_0 = IRQ_BRP_BRP_CMIF_M2C_0_CODE,
    IRQ_BRP_BRP_CMIF_M2C_1 = IRQ_BRP_BRP_CMIF_M2C_1_CODE,
    IRQ_BRP_BRP_CMIF_M2C_2 = IRQ_BRP_BRP_CMIF_M2C_2_CODE,
    IRQ_CMP_CMTDB = IRQ_CMP_CMTDB_CODE,
    IRQ_CS_SRAM_CTRL = IRQ_CS_SRAM_CTRL_CODE,
    IRQ_CSTXB_FDD_CS = IRQ_CSTXB_FDD_CS_CODE,
    IRQ_CSTXB_TDD_CS = IRQ_CSTXB_TDD_CS_CODE,
    IRQ_DFE0_CMIF_M2C_0 = IRQ_DFE0_CMIF_M2C_0_CODE,
    IRQ_DFE0_CMIF_M2C_1 = IRQ_DFE0_CMIF_M2C_1_CODE,
    IRQ_DFE0_CMIF_M2C_2 = IRQ_DFE0_CMIF_M2C_2_CODE,
    IRQ_DFE0_PCC_TOP_0_FULL = IRQ_DFE0_PCC_TOP_0_FULL_CODE,
    IRQ_DFE0_PCC_TOP_1_FULL = IRQ_DFE0_PCC_TOP_1_FULL_CODE,
    IRQ_DFE0_RXDFEIF_L = IRQ_DFE0_RXDFEIF_L_CODE,
    IRQ_DFE0_TCU_L1D_1 = IRQ_DFE0_TCU_L1D_1_CODE,
    IRQ_DFE0_TCU_L1D_2 = IRQ_DFE0_TCU_L1D_2_CODE,
    IRQ_DFE1_CMIF_M2C_0 = IRQ_DFE1_CMIF_M2C_0_CODE,
    IRQ_DFE1_CMIF_M2C_1 = IRQ_DFE1_CMIF_M2C_1_CODE,
    IRQ_DFE1_CMIF_M2C_2 = IRQ_DFE1_CMIF_M2C_2_CODE,
    IRQ_DFE1_PCC_TOP_0_FULL = IRQ_DFE1_PCC_TOP_0_FULL_CODE,
    IRQ_DFE1_PCC_TOP_1_FULL = IRQ_DFE1_PCC_TOP_1_FULL_CODE,
    IRQ_DFE1_RXDFEIF_L = IRQ_DFE1_RXDFEIF_L_CODE,
    IRQ_L1GDMA = IRQ_L1GDMA_CODE,
    IRQ_ICC_DSP_0 = IRQ_ICC_DSP_0_CODE,
    IRQ_ICC_DSP_1 = IRQ_ICC_DSP_1_CODE,
    IRQ_ICC_SRAM_CTRL = IRQ_ICC_SRAM_CTRL_CODE,
    IRQ_IDC_PM = IRQ_IDC_PM_CODE,
    IRQ_IDC_UART = IRQ_IDC_UART_CODE,
    IRQ_IMC_DSP_0 = IRQ_IMC_DSP_0_CODE,
    IRQ_IMC_DSP_1 = IRQ_IMC_DSP_1_CODE,
    IRQ_IMC_MMU_0 = IRQ_IMC_MMU_0_CODE,
    IRQ_IMC_MMU_1 = IRQ_IMC_MMU_1_CODE,
    IRQ_IMC_RXDMP = IRQ_IMC_RXDMP_CODE,
    IRQ_IMC_RXTDB = IRQ_IMC_RXTDB_CODE,
    IRQ_IMC_SRAM_CTRL = IRQ_IMC_SRAM_CTRL_CODE,
    IRQ_INR_RAKE_CMIF_M2C_0 = IRQ_INR_RAKE_CMIF_M2C_0_CODE,
    IRQ_INR_RAKE_CMIF_M2C_1 = IRQ_INR_RAKE_CMIF_M2C_1_CODE,
    IRQ_INR_TD1_BRP_DMA = IRQ_INR_TD1_BRP_DMA_CODE,
    IRQ_INR_TD1_CSCE = IRQ_INR_TD1_CSCE_CODE,
    IRQ_INR_TD1_DFE_BRG = IRQ_INR_TD1_DFE_BRG_CODE,
    IRQ_INR_TD1_JDA = IRQ_INR_TD1_JDA_CODE,
    IRQ_INR_TD1_PP = IRQ_INR_TD1_PP_CODE,
    IRQ_INR_TD2_BRP_DMA = IRQ_INR_TD2_BRP_DMA_CODE,
    IRQ_INR_TD2_CSCE = IRQ_INR_TD2_CSCE_CODE,
    IRQ_INR_TD2_DFE_BRG = IRQ_INR_TD2_DFE_BRG_CODE,
    IRQ_INR_TD2_JDA = IRQ_INR_TD2_JDA_CODE,
    IRQ_TD2_PP = IRQ_TD2_PP_CODE,
    IRQ_L1_LTE_SLEEP = IRQ_L1_LTE_SLEEP_CODE,
    IRQ_L1M_PHY_LTMR_INFORM_DONE0 = IRQ_L1M_PHY_LTMR_INFORM_DONE0_CODE,
    IRQ_L1M_PHY_LTMR_INFORM_DONE1 = IRQ_L1M_PHY_LTMR_INFORM_DONE1_CODE,
    IRQ_L1M_PHY_LTMR_0 = IRQ_L1M_PHY_LTMR_0_CODE,
    IRQ_L1M_PHY_LTMR_1 = IRQ_L1M_PHY_LTMR_1_CODE,
    IRQ_L1M_PHY_LTMR_2 = IRQ_L1M_PHY_LTMR_2_CODE,
    IRQ_L1M_PHY_LTMR_3 = IRQ_L1M_PHY_LTMR_3_CODE,
    IRQ_L1M_PHY_LTMR_4 = IRQ_L1M_PHY_LTMR_4_CODE,
    IRQ_L1M_PHY_LTMR_5 = IRQ_L1M_PHY_LTMR_5_CODE,
    IRQ_L1M_PHY_LTMR_6 = IRQ_L1M_PHY_LTMR_6_CODE,
    IRQ_L1M_PHY_LTMR_7 = IRQ_L1M_PHY_LTMR_7_CODE,
    IRQ_LTEL1_CS = IRQ_LTEL1_CS_CODE,
    IRQ_LTXB0_BSI_L_AB = IRQ_LTXB0_BSI_L_AB_CODE,
    IRQ_LTXB0_BSI_L_C = IRQ_LTXB0_BSI_L_C_CODE,
    IRQ_LTXB0_BSI_L_D = IRQ_LTXB0_BSI_L_D_CODE,
    IRQ_LTXB0_TXENC_ERROR = IRQ_LTXB0_TXENC_ERROR_CODE,
    IRQ_LTXB1_BSI_L_AB = IRQ_LTXB1_BSI_L_AB_CODE,
    IRQ_LTXB1_BSI_L_C = IRQ_LTXB1_BSI_L_C_CODE,
    IRQ_LTXB1_BSI_L_D = IRQ_LTXB1_BSI_L_D_CODE,
    IRQ_LTXB1_TXENC_ERROR = IRQ_LTXB1_TXENC_ERROR_CODE,
    IRQ_MMU_SRAM_CTRL = IRQ_MMU_SRAM_CTRL_CODE,
    IRQ_MPC_DSP_0 = IRQ_MPC_DSP_0_CODE,
    IRQ_MPC_DSP_1 = IRQ_MPC_DSP_1_CODE,
    IRQ_MPC_SRAM_CTRL = IRQ_MPC_SRAM_CTRL_CODE,
    IRQ_TDMA_CTIRQ1 = IRQ_TDMA_CTIRQ1_CODE,
    IRQ_TDMA_CTIRQ2 = IRQ_TDMA_CTIRQ2_CODE,
    IRQ_TDMA_CTIRQ3 = IRQ_TDMA_CTIRQ3_CODE,
    IRQ_L1_LTE_WAKEUP = IRQ_L1_LTE_WAKEUP_CODE,
    IRQ_FREQM = IRQ_FREQM_CODE,
    IRQ_MDL1_TOPSM = IRQ_MDL1_TOPSM_CODE,
    IRQ_RTR_FRAME = IRQ_RTR_FRAME_CODE,
    IRQ_RTR_SLT = IRQ_RTR_SLT_CODE,
    IRQ_WTIMER = IRQ_WTIMER_CODE,
    IRQ_TDD_WAKEUP = IRQ_TDD_WAKEUP_CODE,
    IRQ_TDMA_WAKEUP = IRQ_TDMA_WAKEUP_CODE,
    IRQ_MODEML1_DVFS = IRQ_MODEML1_DVFS_CODE,
    IRQ_MODEML1_DVFS_MIPS_DVS = IRQ_MODEML1_DVFS_MIPS_DVS_CODE,
    IRQ_SW_LISR1 = IRQ_SW_LISR1_CODE,
    IRQ_SW_LISR2 = IRQ_SW_LISR2_CODE,
    IRQ_SW_LISR3 = IRQ_SW_LISR3_CODE,
    IRQ_SW_LISR4 = IRQ_SW_LISR4_CODE,
    IRQ_SW_LISR5 = IRQ_SW_LISR5_CODE,
    IRQ_SW_LISR6 = IRQ_SW_LISR6_CODE,
    IRQ_SW_LISR7 = IRQ_SW_LISR7_CODE,
    IRQ_SW_LISR8 = IRQ_SW_LISR8_CODE,
    IRQ_SW_LISR9 = IRQ_SW_LISR9_CODE,
    IRQ_SW_LISR10 = IRQ_SW_LISR10_CODE,
    IRQ_SW_LISR11 = IRQ_SW_LISR11_CODE,
    IRQ_SW_LISR12 = IRQ_SW_LISR12_CODE,
    IRQ_SW_LISR13 = IRQ_SW_LISR13_CODE,
    IRQ_SW_LISR14 = IRQ_SW_LISR14_CODE,
    IRQ_SW_LISR15 = IRQ_SW_LISR15_CODE,
    IRQ_SW_LISR16 = IRQ_SW_LISR16_CODE,
    IRQ_SW_LISR17 = IRQ_SW_LISR17_CODE,
    IRQ_SW_LISR18 = IRQ_SW_LISR18_CODE,
    IRQ_SW_LISR19 = IRQ_SW_LISR19_CODE,
    IRQ_SW_LISR20 = IRQ_SW_LISR20_CODE,
    IRQ_SW_LISR21 = IRQ_SW_LISR21_CODE,
    IRQ_SW_LISR22 = IRQ_SW_LISR22_CODE,
    IRQ_SW_LISR23 = IRQ_SW_LISR23_CODE,
    IRQ_SW_LISR24 = IRQ_SW_LISR24_CODE,
    IRQ_SW_LISR25 = IRQ_SW_LISR25_CODE,
    IRQ_SW_LISR26 = IRQ_SW_LISR26_CODE,
    IRQ_SW_LISR27 = IRQ_SW_LISR27_CODE,
    IRQ_SW_LISR28 = IRQ_SW_LISR28_CODE,
    IRQ_SW_LISR29 = IRQ_SW_LISR29_CODE,
    IRQ_SW_LISR30 = IRQ_SW_LISR30_CODE,
    IRQ_SW_LISR31 = IRQ_SW_LISR31_CODE,
    IRQ_SW_LISR32 = IRQ_SW_LISR32_CODE,
    IRQ_SW_LISR33 = IRQ_SW_LISR33_CODE,
    IRQ_SW_LISR34 = IRQ_SW_LISR34_CODE,
    IRQ_SW_LISR35 = IRQ_SW_LISR35_CODE,
    IRQ_SW_LISR36 = IRQ_SW_LISR36_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_0 = IRQ_RESERVED_FOR_CC_IRQ_0_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_1 = IRQ_RESERVED_FOR_CC_IRQ_1_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_2 = IRQ_RESERVED_FOR_CC_IRQ_2_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_3 = IRQ_RESERVED_FOR_CC_IRQ_3_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_4 = IRQ_RESERVED_FOR_CC_IRQ_4_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_5 = IRQ_RESERVED_FOR_CC_IRQ_5_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_6 = IRQ_RESERVED_FOR_CC_IRQ_6_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_7 = IRQ_RESERVED_FOR_CC_IRQ_7_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_8 = IRQ_RESERVED_FOR_CC_IRQ_8_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_9 = IRQ_RESERVED_FOR_CC_IRQ_9_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_10 = IRQ_RESERVED_FOR_CC_IRQ_10_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_11 = IRQ_RESERVED_FOR_CC_IRQ_11_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_12 = IRQ_RESERVED_FOR_CC_IRQ_12_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_13 = IRQ_RESERVED_FOR_CC_IRQ_13_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_14 = IRQ_RESERVED_FOR_CC_IRQ_14_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_15 = IRQ_RESERVED_FOR_CC_IRQ_15_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_16 = IRQ_RESERVED_FOR_CC_IRQ_16_CODE,
    IRQ_RESERVED_FOR_CC_IRQ_17 = IRQ_RESERVED_FOR_CC_IRQ_17_CODE,
    IRQ_L1_GPTM1 = IRQ_L1_GPTM1_CODE,
    IRQ_L1_GPTM2 = IRQ_L1_GPTM2_CODE,
    IRQ_L1_GPTM3 = IRQ_L1_GPTM3_CODE,
    IRQ_L1_GPTM4 = IRQ_L1_GPTM4_CODE,
    IRQ_L1_GPTM5 = IRQ_L1_GPTM5_CODE,
    IRQ_L1_GPTM6 = IRQ_L1_GPTM6_CODE,
    IRQ_L1LITE_GPTM = IRQ_L1LITE_GPTM_CODE,
    IRQ_PPC_CIRQ = IRQ_PPC_CIRQ_CODE,
};

enum GIC_Code_Def_MET_Enum
{
    GIC_OS = GIC_OS_priority,
    GIC_DUMMY = GIC_DUMMY_priority,
    GIC_INT = GIC_INT_priority,
    GIC_INT_EX = GIC_INT_EX_priority,
};


#endif /* end of __INTRCTRL_ELBRUS_H__ */

    
