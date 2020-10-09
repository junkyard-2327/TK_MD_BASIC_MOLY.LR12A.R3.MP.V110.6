/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
 *     dcl_pmic6351_init.c
 *
 * Project:
 * --------
 *     MOLY Software
 *
 * Description:
 * ------------
 *     This file is for PMIC 6351
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 * HISTORY
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
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "init.h"
#include "dcl.h"

extern DCL_UINT32 DRV_Read_PMIC_Data(DCL_UINT32 pmic_addr);
extern void DRV_Write_PMIC_Data(DCL_UINT32 pmic_addr, DCL_UINT32 value);

void PMIC_DRV_SetData(DCL_UINT32 addr, DCL_UINT32 bitmask, DCL_UINT16 value, DCL_UINT32 bank)
{
   DCL_UINT32 temp;
   addr |= (bank << 31);
   temp = (~(bitmask)) & DRV_Read_PMIC_Data(addr);
   temp |= ((value) & (bitmask));
   DRV_Write_PMIC_Data(addr,temp);
}
#if  defined(MT6797)
void dcl_pmic6351_modem_only_init(void)
{
	// DDUVLO_DEB_EN[0:0] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x8       , 0x1       , 0x1       , 0x0);

	// RG_STRUP_VUSB33_PG_H2L_EN[1:1] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x2       , 0x2       , 0x0);

	// RG_STRUP_VGPU_PG_H2L_EN[2:2] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x4       , 0x4       , 0x0);

	// RG_STRUP_VDRAM_PG_H2L_EN[3:3] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x8       , 0x8       , 0x0);

	// RG_STRUP_VSRAM_PROC_PG_H2L_EN[4:4] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x10      , 0x10      , 0x0);

	// RG_STRUP_VSRAM_MD_PG_H2L_EN[5:5] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x20      , 0x20      , 0x0);

	// RG_STRUP_VA10_PG_H2L_EN[7:7] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x80      , 0x80      , 0x0);

	// RG_STRUP_VEMC_PG_H2L_EN[8:8] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x100     , 0x100     , 0x0);

	// RG_STRUP_VS2_PG_H2L_EN[10:10] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x400     , 0x400     , 0x0);

	// RG_STRUP_VMODEM_PG_H2L_EN[11:11] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x800     , 0x800     , 0x0);

	// RG_STRUP_VMD1_PG_H2L_EN[12:12] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x1000    , 0x1000    , 0x0);

	// RG_STRUP_VCORE_PG_H2L_EN[13:13] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x2000    , 0x2000    , 0x0);

	// RG_STRUP_VA18_PG_H2L_EN[14:14] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x4000    , 0x4000    , 0x0);

	// RG_STRUP_VS1_PG_H2L_EN[15:15] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x8000    , 0x8000    , 0x0);

	// UVLO_L2H_DEB_EN[5:5] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x18      , 0x20      , 0x20      , 0x0);

	// STRUP_AUXADC_RSTB_SEL[7:7] = 0x1 => 6/2,Dennis
	PMIC_DRV_SetData(0x1C      , 0x80      , 0x80      , 0x0);

	// STRUP_PWROFF_SEQ_EN[0:0] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x1E      , 0x1       , 0x1       , 0x0);

	// STRUP_PWROFF_PREOFF_EN[1:1] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x1E      , 0x2       , 0x2       , 0x0);

	// RG_STRUP_ENVTEM_CTRL[15:15] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x2C      , 0x8000    , 0x8000    , 0x0);

	// RG_EN_DRVSEL[2:2] = 0x1 => 6/1,Seven, PMU EN Driver Ability
	PMIC_DRV_SetData(0x32      , 0x4       , 0x4       , 0x0);

	// RG_RST_DRVSEL[3:3] = 0x1 => 6/1,Seven, RESETB Driver Ability
	PMIC_DRV_SetData(0x32      , 0x8       , 0x8       , 0x0);

	// RG_SRCLKEN_IN0_HW_MODE[4:4] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x204     , 0x10      , 0x10      , 0x0);

	// RG_SRCLKEN_IN1_HW_MODE[5:5] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x204     , 0x20      , 0x20      , 0x0);

	// RG_OSC_SEL_HW_MODE[6:6] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x204     , 0x40      , 0x40      , 0x0);

	// RG_SMT_WDTRSTB_IN[0:0] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x226     , 0x1       , 0x1       , 0x0);

	// RG_SMT_SPI_CLK[0:0] = 0x1 => 6/1,Check with Juinn-Ting
	PMIC_DRV_SetData(0x228     , 0x1       , 0x1       , 0x0);

	// RG_SMT_SPI_CSN[1:1] = 0x1 => 6/1,Check with Juinn-Ting
	PMIC_DRV_SetData(0x228     , 0x2       , 0x2       , 0x0);

	// RG_SMT_SPI_MOSI[2:2] = 0x1 => 6/1,Check with Juinn-Ting
	PMIC_DRV_SetData(0x228     , 0x4       , 0x4       , 0x0);

	// RG_SMT_SPI_MISO[3:3] = 0x1 => 6/1,Check with Juinn-Ting
	PMIC_DRV_SetData(0x228     , 0x8       , 0x8       , 0x0);

	// RG_AUXADC_SMPS_CK_PDN[9:9] = 0x0 => 9/7 Peter SW,for AUXADC need always on
	PMIC_DRV_SetData(0x23A     , 0x200     , 0x0       , 0x0);

	// RG_AUXADC_26M_CK_PDN[11:11] = 0x1
	PMIC_DRV_SetData(0x23A     , 0x800     , 0x800     , 0x0);

	// RG_RTC_75K_CK_PDN[2:2] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x240     , 0x4       , 0x4       , 0x0);

	// RG_RTCDET_CK_PDN[3:3] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x240     , 0x8       , 0x8       , 0x0);

	// RG_AUXADC_CK_PDN[10:10] = 0x0
	PMIC_DRV_SetData(0x240     , 0x400     , 0x0       , 0x0);

	// RG_RTC_EOSC32_CK_PDN[13:13] = 0x1 => Juinn-Ting(if 32 less keep default Value)
	PMIC_DRV_SetData(0x246     , 0x2000    , 0x2000    , 0x0);

	// RG_TRIM_75K_CK_PDN[14:14] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x246     , 0x4000    , 0x4000    , 0x0);

	// RG_EFUSE_CK_PDN[2:2] = 0x0
	PMIC_DRV_SetData(0x24C     , 0x4       , 0x0       , 0x0);

	// RG_BUCK_VSRAM_MD_9M_CK_PDN[5:5] = 0x0
	PMIC_DRV_SetData(0x258     , 0x20      , 0x0       , 0x0);

	// RG_AUD18M_CK_PDN[8:8] = 0x1
	PMIC_DRV_SetData(0x258     , 0x100     , 0x100     , 0x0);

	// RG_BUCK_AUD_1M_CK_PDN[14:14] = 0x0
	PMIC_DRV_SetData(0x258     , 0x4000    , 0x0       , 0x0);

	// RG_75K_32K_SEL[9:9] = 0x1 => Angela
	PMIC_DRV_SetData(0x25E     , 0x200     , 0x200     , 0x0);

	// RG_AUXADC_CK_CKSEL[10:10] = 0x0
	PMIC_DRV_SetData(0x25E     , 0x400     , 0x0       , 0x0);

	// RG_AUXADC_CK_PDN_HWEN[3:3] = 0x0
	PMIC_DRV_SetData(0x282     , 0x8       , 0x0       , 0x0);

	// RG_AUXADC_SMPS_CK_PDN_HWEN[4:4] = 0x0 => 9/7,Peter SW,For Auxadc need always on
	PMIC_DRV_SetData(0x282     , 0x10      , 0x0       , 0x0);

	// RG_AUXADC_26M_CK_PDN_HWEN[10:10] = 0x0 => ZF
	PMIC_DRV_SetData(0x282     , 0x400     , 0x0       , 0x0);

	// RG_AUXADC_CK_CKSEL_HWEN[11:11] = 0x0 => ZF
	PMIC_DRV_SetData(0x282     , 0x800     , 0x0       , 0x0);

	// RG_AUD18M_CK_PDN_HWEN[4:4] = 0x0
	PMIC_DRV_SetData(0x28E     , 0x10      , 0x0       , 0x0);

	// BUCK_VPA_VOSEL_DLC001[13:8] = 0x8 => 6/24,Paul
	PMIC_DRV_SetData(0x410     , 0x3F00    , 0x800     , 0x0);

	// BUCK_VPA_DVS_TRANS_CTRL[5:4] = 0x3 => 6/24,Paul
	PMIC_DRV_SetData(0x414     , 0x30      , 0x30      , 0x0);
	
	//BUCK_VPA_EN_OC_SDN_SEL[7:7] = 0x1 => 9/14,Stephen PA OC Shutdown by Filed Test need disable
	PMIC_DRV_SetData(0x422     , 0x80      , 0x80      , 0x0);

	// BUCK_VPA_OC_WND[3:2] = 0x0 => 6/1 Paul OC Shutdiwn debounce Time 16us to 128us
	PMIC_DRV_SetData(0x436     , 0xC       , 0x0       , 0x0);

	// RG_VGPU_VSLEEP_SEL[11:10] = 0x2 => 9/1,Julian v2v setting same as 1.22V
	PMIC_DRV_SetData(0x44A     , 0xC00     , 0x800     , 0x0);

	// RG_VCORE_CSL[14:11] = 0xF => 6/1,Tim,OC Level Adjust
	PMIC_DRV_SetData(0x450     , 0x7800    , 0x7800    , 0x0);

	// RG_VCORE_ADRC_FEN[3:3] = 0x1 => 6/1,Tim,Bandwidth Extend
	PMIC_DRV_SetData(0x452     , 0x8       , 0x8       , 0x0);

	// RG_VCORE_NLIM_GATING[7:7] = 0x1 => 8/17,Tim
	PMIC_DRV_SetData(0x456     , 0x80      , 0x80      , 0x0);

	// RG_VCORE_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1,Tim,Ultra Low Iq
	PMIC_DRV_SetData(0x45C     , 0x2       , 0x2       , 0x0);

	// RG_VCORE_RSV[15:0] = 0x400 => 6/1,Tim,Enable Pre-OC
	PMIC_DRV_SetData(0x45E     , 0xFFFF    , 0x400     , 0x0);

	// RG_VGPU_RZSEL0[2:0] = 0x0 => 9/10,Tim,for 44uF Cout Adjust
	PMIC_DRV_SetData(0x464     , 0x7       , 0x0       , 0x0);

	// RG_VGPU_CSL[14:11] = 0xF => 6/1,Tim,OC Level Adjust
	PMIC_DRV_SetData(0x464     , 0x7800    , 0x7800    , 0x0);

	// RG_VGPU_ADRC_FEN[3:3] = 0x1 => 6/1,Tim,Bandwidth Extend
	PMIC_DRV_SetData(0x466     , 0x8       , 0x8       , 0x0);

	// RG_VGPU_PFMOC[11:9] = 0x5 => 8/24,Tim PFM OC Adjust for DVS Performance
	PMIC_DRV_SetData(0x466     , 0xE00     , 0xA00     , 0x0);

	// RG_VGPU_NLIM_GATING[7:7] = 0x1 => 8/17,Tim
	PMIC_DRV_SetData(0x46A     , 0x80      , 0x80      , 0x0);

	// RG_VGPU_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1,Tim,Ultra Low Iq
	PMIC_DRV_SetData(0x470     , 0x2       , 0x2       , 0x0);

	// RG_VGPU_RSV[15:0] = 0x400 => 6/1,Tim,Enable Pre-OC
	PMIC_DRV_SetData(0x472     , 0xFFFF    , 0x400     , 0x0);

	// RG_VSRAM_MD_CSL[14:11] = 0xF => 6/1, Johnson, OC performance fine tune
	PMIC_DRV_SetData(0x478     , 0x7800    , 0x7800    , 0x0);

	// RG_VSRAM_MD_PFMOC[8:6] = 0x2 => 6/1, Johnson, PFM ripple performance fine tune
	PMIC_DRV_SetData(0x47A     , 0x1C0     , 0x80      , 0x0);

	// RG_VSRAM_MD_NLIM_GATING[1:1] = 0x1 => 6/24,Johnson,for transient mode transition Vo ringing, performance concern.
	PMIC_DRV_SetData(0x47E     , 0x2       , 0x2       , 0x0);

	// RG_VSRAM_MD_PFM_RIP[6:4] = 0x1 => 6/1, Johnson, performance fine tune.(PFM ripple)
	PMIC_DRV_SetData(0x480     , 0x70      , 0x10      , 0x0);

	// RG_VSRAM_MD_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1, Johnson, performance improvement. (iq, mode transition and pfm ripple H/L
	PMIC_DRV_SetData(0x484     , 0x2       , 0x2       , 0x0);

	// RG_VMODEM_CSL[14:11] = 0xF => 6/1, Johnson, OC performance fine tune
	PMIC_DRV_SetData(0x48C     , 0x7800    , 0x7800    , 0x0);

	// RG_VMODEM_PFMOC[8:6] = 0x2 => 6/1, Johnson, PFM ripple performance fine tune
	PMIC_DRV_SetData(0x48E     , 0x1C0     , 0x80      , 0x0);

	// RG_VMODEM_NLIM_GATING[1:1] = 0x1 => 6/24,Johnson,for transient mode transition Vo ringing, performance concern.
	PMIC_DRV_SetData(0x492     , 0x2       , 0x2       , 0x0);

	// RG_VMODEM_PFM_RIP[6:4] = 0x1 => 6/1, Johnson, performance fine tune.(PFM ripple)
	PMIC_DRV_SetData(0x494     , 0x70      , 0x10      , 0x0);

	// RG_VMODEM_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1, Johnson, performance improvement. (iq, mode transition and pfm ripple H/L
	PMIC_DRV_SetData(0x498     , 0x2       , 0x2       , 0x0);

	// RG_VMD1_CSL[14:11] = 0xF => 6/1, Johnson, OC performance fine tune
	PMIC_DRV_SetData(0x4A0     , 0x7800    , 0x7800    , 0x0);

	// RG_VMD1_PFMOC[8:6] = 0x2 => 6/1, Johnson, PFM ripple performance fine tune
	PMIC_DRV_SetData(0x4A2     , 0x1C0     , 0x80      , 0x0);

	// RG_VMD1_NLIM_GATING[1:1] = 0x1 => 6/24,Johnson,for transient mode transition Vo ringing, performance concern.
	PMIC_DRV_SetData(0x4A6     , 0x2       , 0x2       , 0x0);

	// RG_VMD1_PFM_RIP[6:4] = 0x1 => 6/1, Johnson, performance fine tune.(PFM ripple)
	PMIC_DRV_SetData(0x4A8     , 0x70      , 0x10      , 0x0);

	// RG_VMD1_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1, Johnson, performance improvement. (iq, mode transition and pfm ripple H/L
	PMIC_DRV_SetData(0x4AC     , 0x2       , 0x2       , 0x0);

	// RG_VS1_PFMOC[8:6] = 0x6 => 7/15,Lan improve ZXOS Detect
	PMIC_DRV_SetData(0x4B6     , 0x1C0     , 0x180     , 0x0);

	// RG_VS1_RSV[15:0] = 0x10 => 6/2, Hung Mu Chou, OC Level Adjust
	PMIC_DRV_SetData(0x4C2     , 0xFFFF    , 0x10      , 0x0);

	// RG_VS2_CSL[14:11] = 0xF => 7/15,Lan improve ZXOS Detect
	PMIC_DRV_SetData(0x4C8     , 0x7800    , 0x7800    , 0x0);

	// RG_VS2_PFMOC[8:6] = 0x5 => 7/15,Lan improve ZXOS Detect
	PMIC_DRV_SetData(0x4CA     , 0x1C0     , 0x140     , 0x0);

	// RG_VS2_NLIM_GATING[1:1] = 0x1 => 6/1 Lan NLIM_Gating Enable
	PMIC_DRV_SetData(0x4CE     , 0x2       , 0x2       , 0x0);

	// RG_VS2_PFM_RIP[6:4] = 0x1 => 6/1 Lan PWM/PFM Output accuracy adjust
	PMIC_DRV_SetData(0x4D0     , 0x70      , 0x10      , 0x0);

	// RG_VPA_CC[1:0] = 0x3 => 6/24 Paul VPA compensation C adjust
	PMIC_DRV_SetData(0x4DC     , 0x3       , 0x3       , 0x0);

	// RG_VPA_CSMIR[5:4] = 0x2 => 8/27,Paul reduce 20% Current sensing ratio
	PMIC_DRV_SetData(0x4DC     , 0x30      , 0x20      , 0x0);

	// RG_VPA_AZC_EN[10:10] = 0x0 => 6/3,Paul
	PMIC_DRV_SetData(0x4DC     , 0x400     , 0x0       , 0x0);

	// RG_VPA_RZSEL[15:14] = 0x1 => 8/27,Paul Compensation resistance 310k>210K
	PMIC_DRV_SetData(0x4DC     , 0xC000    , 0x4000    , 0x0);

	// RG_VPA_MIN_PK[15:14] = 0x0 => 6/1 Paul MIN Peak Current 250mA to 100mA
	PMIC_DRV_SetData(0x4E0     , 0xC000    , 0x0       , 0x0);

	// RG_VPA_RSV2[15:8] = 0x88 => 8/10,Paul, Auto Change Slope compensation
	PMIC_DRV_SetData(0x4E2     , 0xFF00    , 0x8800    , 0x0);

	// BUCK_VCORE_VOSEL_CTRL[1:1] = 0x1 => 6/1,Tim,Sleep mode by HW Control
	PMIC_DRV_SetData(0x600     , 0x2       , 0x2       , 0x0);

	// BUCK_VCORE_SFCHG_FRATE[6:0] = 0x11 => 6/1,Tim,DVS Falling Slew Rate
	PMIC_DRV_SetData(0x606     , 0x7F      , 0x11      , 0x0);

	// BUCK_VCORE_SFCHG_RRATE[14:8] = 0x4 => 6/1,Tim,DVS Rising Slew Rate
	PMIC_DRV_SetData(0x606     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VCORE_VOSEL_SLEEP[6:0] = 0x10 => 6/1,Tim Sleep mode voltage for JADE(0.7V)
	PMIC_DRV_SetData(0x60C     , 0x7F      , 0x10      , 0x0);

	// BUCK_VCORE_TRANS_TD[1:0] = 0x3 => 6/1,Tim
	PMIC_DRV_SetData(0x612     , 0x3       , 0x3       , 0x0);

	// BUCK_VCORE_TRANS_CTRL[5:4] = 0x1 => 8/17,Tim
	PMIC_DRV_SetData(0x612     , 0x30      , 0x10      , 0x0);

	// BUCK_VCORE_VSLEEP_EN[8:8] = 0x1 => 6/1,Tim,Sleep mode by HW Control
	PMIC_DRV_SetData(0x612     , 0x100     , 0x100     , 0x0);

	// BUCK_VGPU_SFCHG_FRATE[6:0] = 0x11 => 6/1,Tim,DVS Falling Slew Rate
	PMIC_DRV_SetData(0x61A     , 0x7F      , 0x11      , 0x0);

	// BUCK_VGPU_SFCHG_RRATE[14:8] = 0x4 => 6/1,Tim,DVS Rising Slew Rate
	PMIC_DRV_SetData(0x61A     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VGPU_VOSEL_ON[6:0] = 0x64 => 9/1,Julian for Everest DRAM application 1.22V
	PMIC_DRV_SetData(0x61E     , 0x7F      , 0x64      , 0x0);

	// BUCK_VGPU_VOSEL_SLEEP[6:0] = 0x64 => 9/1,Julian for Everest DRAM application 1.22V
	PMIC_DRV_SetData(0x620     , 0x7F      , 0x64      , 0x0);

	// BUCK_VGPU_TRANS_TD[1:0] = 0x3 => 6/1,Tim
	PMIC_DRV_SetData(0x626     , 0x3       , 0x3       , 0x0);

	// BUCK_VGPU_TRANS_CTRL[5:4] = 0x1 => 8/17,Tim
	PMIC_DRV_SetData(0x626     , 0x30      , 0x10      , 0x0);

	// BUCK_VGPU_VSLEEP_EN[8:8] = 0x1 => 6/1,Tim,Sleep mode by HW Control 7/27,Remove Sleep mode by HW Control
	PMIC_DRV_SetData(0x626     , 0x100     , 0x100     , 0x0);

	// BUCK_VMODEM_SFCHG_FRATE[6:0] = 0x11 => 6/1, Johnson,softchange for DVS/DVFS slew rate falling 2.0us/step
	PMIC_DRV_SetData(0x62E     , 0x7F      , 0x11      , 0x0);

	// BUCK_VMODEM_SFCHG_RRATE[14:8] = 0x4 => 6/1, Johnson,softchange for DVS/DVFS slew rate rising 0.5us/step
	PMIC_DRV_SetData(0x62E     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VMODEM_VOSEL_SLEEP[6:0] = 0x10 => 6/1, Johnson SRCLKEN sleep V is 0.7V
	PMIC_DRV_SetData(0x634     , 0x7F      , 0x10      , 0x0);

	// BUCK_VMODEM_TRANS_TD[1:0] = 0x3 => 6/1, Johnson, falling for DVFS/DVS discharge extension time control
	PMIC_DRV_SetData(0x63A     , 0x3       , 0x3       , 0x0);

	// BUCK_VMODEM_TRANS_CTRL[5:4] = 0x1 => 6/1, Johnson, falling for DVFS/DVS discharge slew rate control
	PMIC_DRV_SetData(0x63A     , 0x30      , 0x10      , 0x0);

	// BUCK_VMODEM_VSLEEP_EN[8:8] = 0x1 => 6/1, Johnson, r2r power down with srclken sleep hw mode
	PMIC_DRV_SetData(0x63A     , 0x100     , 0x100     , 0x0);

	// BUCK_VMD1_SFCHG_FRATE[6:0] = 0x11 => 6/1, Johnson,softchange for DVS/DVFS slew rate falling 2.0us/step
	PMIC_DRV_SetData(0x642     , 0x7F      , 0x11      , 0x0);

	// BUCK_VMD1_SFCHG_RRATE[14:8] = 0x4 => 6/1, Johnson,softchange for DVS/DVFS slew rate rising 0.5us/step
	PMIC_DRV_SetData(0x642     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VMD1_VOSEL_ON[6:0] = 0x30 => 6/1, Johnson SRCLKEN normal v is 0.9V
	PMIC_DRV_SetData(0x646     , 0x7F      , 0x30      , 0x0);

	// BUCK_VMD1_VOSEL_SLEEP[6:0] = 0x10 => 6/1, Johnson SRCLKEN sleep V is 0.7V
	PMIC_DRV_SetData(0x648     , 0x7F      , 0x10      , 0x0);

	// BUCK_VMD1_TRANS_TD[1:0] = 0x3 => 6/1, Johnson, falling for DVFS/DVS discharge extension time control
	PMIC_DRV_SetData(0x64E     , 0x3       , 0x3       , 0x0);

	// BUCK_VMD1_TRANS_CTRL[5:4] = 0x1 => 6/1, Johnson, falling for DVFS/DVS discharge slew rate control
	PMIC_DRV_SetData(0x64E     , 0x30      , 0x10      , 0x0);

	// BUCK_VMD1_VSLEEP_EN[8:8] = 0x1 => 6/1, Johnson, r2r power down with srclken sleep hw mode, after vo sel
	PMIC_DRV_SetData(0x64E     , 0x100     , 0x100     , 0x0);

	// BUCK_VSRAM_MD_SFCHG_FRATE[6:0] = 0x11 => 6/1, Johnson,softchange for DVS/DVFS slew rate falling 2.0us/step
	PMIC_DRV_SetData(0x656     , 0x7F      , 0x11      , 0x0);

	// BUCK_VSRAM_MD_SFCHG_RRATE[14:8] = 0x4 => 6/1, Johnson,softchange for DVS/DVFS slew rate rising 0.5us/step
	PMIC_DRV_SetData(0x656     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VSRAM_MD_VOSEL_SLEEP[6:0] = 0x10 => 6/1, Johnson SRCLKEN sleep V is 0.7V
	PMIC_DRV_SetData(0x65C     , 0x7F      , 0x10      , 0x0);

	// BUCK_VSRAM_MD_TRANS_TD[1:0] = 0x3 => 6/1, Johnson, falling for DVFS/DVS discharge extension time control
	PMIC_DRV_SetData(0x662     , 0x3       , 0x3       , 0x0);

	// BUCK_VSRAM_MD_TRANS_CTRL[5:4] = 0x1 => 6/1, Johnson, falling for DVFS/DVS discharge slew rate control
	PMIC_DRV_SetData(0x662     , 0x30      , 0x10      , 0x0);

	// BUCK_VSRAM_MD_VSLEEP_EN[8:8] = 0x1 => 6/1, Johnson, r2r power down with srclken sleep hw mode, after vo sel
	PMIC_DRV_SetData(0x662     , 0x100     , 0x100     , 0x0);

	// BUCK_VS1_VSLEEP_EN[8:8] = 0x1 => 6/1,Lan,r2r power down with srclken sleep hw mode
	PMIC_DRV_SetData(0x676     , 0x100     , 0x100     , 0x0);

	// BUCK_VS2_VSLEEP_EN[8:8] = 0x1 => 6/1,Lan,r2r power down with srclken sleep hw mode
	PMIC_DRV_SetData(0x68A     , 0x100     , 0x100     , 0x0);

	// BUCK_VPA_SFCHG_FRATE[6:0] = 0x0 => 6/3,Paul
	PMIC_DRV_SetData(0x692     , 0x7F      , 0x0       , 0x0);

	// BUCK_VPA_SFCHG_RRATE[14:8] = 0x1 => 6/3,Paul
	PMIC_DRV_SetData(0x692     , 0x7F00    , 0x100     , 0x0);

	// BUCK_VPA_TRANS_TD[1:0] = 0x0 => 624,Paul
	PMIC_DRV_SetData(0x69E     , 0x3       , 0x0       , 0x0);

	// BUCK_VSRAM_PROC_VOSEL_CTRL[1:1] = 0x1 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6A0     , 0x2       , 0x2       , 0x0);

	// BUCK_VSRAM_PROC_SFCHG_FRATE[6:0] = 0x11 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6A6     , 0x7F      , 0x11      , 0x0);

	// BUCK_VSRAM_PROC_SFCHG_RRATE[14:8] = 0x4 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6A6     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VSRAM_PROC_VOSEL_SLEEP[6:0] = 0x20 => 9/1,Julian,for VCORE SRAM Sleep mode voltage 0.8V)
	PMIC_DRV_SetData(0x6AC     , 0x7F      , 0x20      , 0x0);

	// BUCK_VSRAM_PROC_TRANS_TD[1:0] = 0x3 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6B2     , 0x3       , 0x3       , 0x0);

	// BUCK_VSRAM_PROC_TRANS_CTRL[5:4] = 0x1 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6B2     , 0x30      , 0x10      , 0x0);

	// BUCK_VSRAM_PROC_VSLEEP_EN[8:8] = 0x0 => 7/15,Chia Lin
	PMIC_DRV_SetData(0x6B2     , 0x100     , 0x0       , 0x0);

	// RG_VA18_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA00     , 0x4       , 0x4       , 0x0);

	// RG_VA18_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA00     , 0xE0      , 0x0       , 0x0);

	// RG_VA18_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA02     , 0x200     , 0x200     , 0x0);

	// RG_VTCXO24_ON_CTRL[3:3] = 0x1 => 6/2,CW
	//PMIC_DRV_SetData(0xA04     , 0x8       , 0x8       , 0x0);

	// RG_VTCXO24_SRCLK_EN_SEL[13:11] = 0x0 => 6/2,CW,RF Power Control request
	//PMIC_DRV_SetData(0xA04     , 0x3800    , 0x0       , 0x0);

	// RG_VTCXO24_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA06     , 0x200     , 0x200     , 0x0);

	// RG_VTCXO28_ON_CTRL[3:3] = 0x1 => 6/2,CW
	PMIC_DRV_SetData(0xA08     , 0x8       , 0x8       , 0x0);

	// RG_VTCXO28_SRCLK_EN_SEL[13:11] = 0x1 => 6/2,CW,RF Power Control request
	PMIC_DRV_SetData(0xA08     , 0x3800    , 0x800     , 0x0);

	// RG_VTCXO28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA0A     , 0x200     , 0x200     , 0x0);

	// RG_VCN28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA0E     , 0x200     , 0x200     , 0x0);

	// RG_VCAMA_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA14     , 0x200     , 0x200     , 0x0);

	// RG_VUSB33_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA16     , 0x4       , 0x4       , 0x0);

	// RG_VUSB33_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA16     , 0xE0      , 0x0       , 0x0);

	// RG_VUSB33_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA18     , 0x200     , 0x200     , 0x0);

	// RG_VSIM1_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA1E     , 0x200     , 0x200     , 0x0);

	// RG_VSIM2_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA24     , 0x200     , 0x200     , 0x0);

	// RG_VEMC_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA2A     , 0x200     , 0x200     , 0x0);

	// RG_VMCH_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA30     , 0x200     , 0x200     , 0x0);

	// RG_VIO28_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA34     , 0x4       , 0x4       , 0x0);

	// RG_VIO28_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA34     , 0xE0      , 0x0       , 0x0);

	// RG_VIO28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA36     , 0x200     , 0x200     , 0x0);

	// RG_VIBR_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA3C     , 0x200     , 0x200     , 0x0);

	// RG_VRF18_ON_CTRL[3:3] = 0x1 => 6/2,CW
	PMIC_DRV_SetData(0xA46     , 0x8       , 0x8       , 0x0);

	// RG_VRF18_SRCLK_EN_SEL[13:11] = 0x1 => 6/2,CW,RF Power Control request
	PMIC_DRV_SetData(0xA46     , 0x3800    , 0x800     , 0x0);

	// RG_VRF18_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA48     , 0x200     , 0x200     , 0x0);

	// RG_VIO18_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA4C     , 0x4       , 0x4       , 0x0);

	// RG_VIO18_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA4C     , 0xE0      , 0x0       , 0x0);

	// RG_VIO18_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA4E     , 0x200     , 0x200     , 0x0);

	// RG_VCN18_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA54     , 0x200     , 0x200     , 0x0);

	// RG_VCAMIO_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA5A     , 0x200     , 0x200     , 0x0);

	// RG_VXO22_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA66     , 0x200     , 0x200     , 0x0);

	// RG_VRF12_ON_CTRL[3:3] = 0x1 => 6/2,CW
	PMIC_DRV_SetData(0xA68     , 0x8       , 0x8       , 0x0);

	// RG_VRF12_SRCLK_EN_SEL[13:11] = 0x1 => 6/2,CW,RF Power Control request
	PMIC_DRV_SetData(0xA68     , 0x3800    , 0x800     , 0x0);

	// RG_VA10_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA6E     , 0x4       , 0x4       , 0x0);

	// RG_VA10_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA6E     , 0xE0      , 0x0       , 0x0);

	// RG_VDRAM_EN[1:1] = 0x1 => 6/5,Chia Lin Same as Fly suspend mode
	PMIC_DRV_SetData(0xA74     , 0x2       , 0x2       , 0x0);

	// RG_VDRAM_MODE_CTRL[2:2] = 0x1 => 6/5,Chia Lin Same as Fly suspend mode
	PMIC_DRV_SetData(0xA74     , 0x4       , 0x4       , 0x0);

	// RG_VDRAM_ON_CTRL[3:3] = 0x0 => 6/5,Chia Lin Same as Fly suspend mode
	PMIC_DRV_SetData(0xA74     , 0x8       , 0x0       , 0x0);

	// RG_VDRAM_SRCLK_MODE_SEL[7:5] = 0x0 => 6/5,Chia Lin Same as Fly suspend mode
	PMIC_DRV_SetData(0xA74     , 0xE0      , 0x0       , 0x0);

	// RG_VMIPI_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA7C     , 0x200     , 0x200     , 0x0);

	// RG_VGP3_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA82     , 0x200     , 0x200     , 0x0);

	// RG_VBIF28_ON_CTRL[3:3] = 0x0 => 6/1,Seven,
	PMIC_DRV_SetData(0xA86     , 0x8       , 0x0       , 0x0);

	// RG_VBIF28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA88     , 0x200     , 0x200     , 0x0);

	// RG_VEFUSE_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA8E     , 0x200     , 0x200     , 0x0);

	// RG_VCN33_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA94     , 0x200     , 0x200     , 0x0);

	// RG_VLDO28_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA9C     , 0x4       , 0x4       , 0x0);

	// RG_VLDO28_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA9C     , 0xE0      , 0x0       , 0x0);

	// RG_VLDO28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA9E     , 0x200     , 0x200     , 0x0);

	// RG_VMC_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xAAC     , 0x200     , 0x200     , 0x0);

	// RG_VA10_VOSEL[10:8] = 0x2 => 6/8,KH for JADE VA10=1V
	PMIC_DRV_SetData(0xB10     , 0x700     , 0x200     , 0x0);

	// RG_VDRAM_RSV[9:2] = 0xF0 => 6/1 Fandy improve Fast Transient
	PMIC_DRV_SetData(0xB24     , 0x3FC     , 0x3C0     , 0x0);

	// FG_SLP_EN[8:8] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xCC4     , 0x100     , 0x100     , 0x0);

	// FG_ZCV_DET_EN[9:9] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xCC4     , 0x200     , 0x200     , 0x0);

	// FG_SLP_CUR_TH[15:0] = 0x1F => 6/1,Filby
	PMIC_DRV_SetData(0xCC8     , 0xFFFF    , 0x1F      , 0x0);

	// FG_SLP_TIME[7:0] = 0x14 => 6/1,Filby
	PMIC_DRV_SetData(0xCCA     , 0xFF      , 0x14      , 0x0);

	// FG_DET_TIME[15:8] = 0xFF => 6/1,Filby
	PMIC_DRV_SetData(0xCCC     , 0xFF00    , 0xFF00    , 0x0);

	// FG_ZCV_CAR_TH_33_19[14:0] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xCE2     , 0x7FFF    , 0x1       , 0x0);

	// FG_ZCV_CAR_TH_18_03[15:0] = 0xBCAC => 6/1,Filby
	PMIC_DRV_SetData(0xCE4     , 0xFFFF    , 0xBCAC    , 0x0);

	// AUXADC_CK_AON_GPS[13:13] = 0x0 => Check with Peter
	PMIC_DRV_SetData(0xEA2     , 0x2000    , 0x0       , 0x0);

	// AUXADC_CK_AON_MD[14:14] = 0x0 => Check with Peter
	PMIC_DRV_SetData(0xEA2     , 0x4000    , 0x0       , 0x0);

	// AUXADC_CK_AON[15:15] = 0x0 => Check with Peter
	PMIC_DRV_SetData(0xEA2     , 0x8000    , 0x0       , 0x0);

	// AUXADC_AVG_NUM_SEL[11:0] = 0x83 => 6/1,Filby,Resolution Adjust
	PMIC_DRV_SetData(0xEAA     , 0xFFF     , 0x83      , 0x0);

	// AUXADC_AVG_NUM_SEL_LBAT[13:13] = 0x0 => 8/3,Filby,Resolution Adjust
	PMIC_DRV_SetData(0xEAA     , 0x2000    , 0x0       , 0x0);

	// AUXADC_AVG_NUM_SEL_WAKEUP[15:15] = 0x1 => 6/1,Filby,Resolution Adjust
	PMIC_DRV_SetData(0xEAA     , 0x8000    , 0x8000    , 0x0);

	// AUXADC_TRIM_CH2_SEL[5:4] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0x30      , 0x10      , 0x0);

	// AUXADC_TRIM_CH3_SEL[7:6] = 0x3 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0xC0      , 0xC0      , 0x0);

	// AUXADC_TRIM_CH4_SEL[9:8] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0x300     , 0x100     , 0x0);

	// AUXADC_TRIM_CH5_SEL[11:10] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0xC00     , 0x400     , 0x0);

	// AUXADC_TRIM_CH6_SEL[13:12] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0x3000    , 0x1000    , 0x0);

	// AUXADC_TRIM_CH7_SEL[15:14] = 0x2 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0xC000    , 0x8000    , 0x0);

	// AUXADC_TRIM_CH8_SEL[1:0] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB4     , 0x3       , 0x1       , 0x0);

	// AUXADC_TRIM_CH9_SEL[3:2] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB4     , 0xC       , 0x4       , 0x0);

	// AUXADC_TRIM_CH10_SEL[5:4] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB4     , 0x30      , 0x10      , 0x0);

	// AUXADC_TRIM_CH11_SEL[7:6] = 0x3 => 6/1,Filby
	PMIC_DRV_SetData(0xEB4     , 0xC0      , 0xC0      , 0x0);

	// AUXADC_START_SHADE_EN[14:14] = 0x1 => TBD(Wei-Lin)
	PMIC_DRV_SetData(0xEC6     , 0x4000    , 0x4000    , 0x0);

	// AUXADC_MDBG_DET_PRD[9:0] = 0x40 => 6/2,Dennis
	PMIC_DRV_SetData(0xF16     , 0x3FF     , 0x40      , 0x0);

	// AUXADC_MDBG_DET_EN[15:15] = 0x1 => 6/2,Dennis
	PMIC_DRV_SetData(0xF16     , 0x8000    , 0x8000    , 0x0);

	// AUXADC_MDRT_DET_PRD[9:0] = 0x40 => 6/2,Dennis
	PMIC_DRV_SetData(0xF1C     , 0x3FF     , 0x40      , 0x0);

	// AUXADC_MDRT_DET_EN[15:15] = 0x1 => 6/2,Dennis
	PMIC_DRV_SetData(0xF1C     , 0x8000    , 0x8000    , 0x0);

	// AUXADC_MDRT_DET_WKUP_EN[2:2] = 0x1 => 6/2,Dennis
	PMIC_DRV_SetData(0xF20     , 0x4       , 0x4       , 0x0);

	// RG_VCDT_HV_VTH[7:4] = 0xB => Zax: VCDT_HV_th=7V (customized setting for VBUS OVP)
	PMIC_DRV_SetData(0xF7A     , 0xF0      , 0xB0      , 0x0);

	// RG_VBAT_OV_VTH[4:1] = 0x4 => Zax: 4.45V for 4.35v battery (customized setting based on CV_VTH, shall set OV_VTH=CV_VTH+100mV)

	PMIC_DRV_SetData(0xF84     , 0x1E      , 0x8       , 0x0);

	// RG_CHRWDT_TD[3:0] = 0x3 => Zax:WDT=32s
	PMIC_DRV_SetData(0xF92     , 0xF       , 0x3       , 0x0);

	// RG_BC11_RST[1:1] = 0x1 => Zax:Disable BC1.1 timer
	PMIC_DRV_SetData(0xFA0     , 0x2       , 0x2       , 0x0);

	// RG_CSDAC_STP_DEC[6:4] = 0x0 => Zax:Reduce ICHG current ripple
	PMIC_DRV_SetData(0xFA4     , 0x70      , 0x0       , 0x0);

	// RG_CSDAC_MODE[2:2] = 0x1 => Zax:Align 6323
	PMIC_DRV_SetData(0xFAA     , 0x4       , 0x4       , 0x0);

	// RG_HWCV_EN[6:6] = 0x1 => Zax:Align 6323
	PMIC_DRV_SetData(0xFAA     , 0x40      , 0x40      , 0x0);

	// RG_ULC_DET_EN[7:7] = 0x1 => Zax: need to enable for supporting bad TA
	PMIC_DRV_SetData(0xFAA     , 0x80      , 0x80      , 0x0);

}
#elif defined(MT6757)
void dcl_pmic6351_modem_only_init(void)
{
	// DDUVLO_DEB_EN[0:0] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x8       , 0x1       , 0x1       , 0x0);

	// RG_STRUP_VUSB33_PG_H2L_EN[1:1] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x2       , 0x2       , 0x0);

	// RG_STRUP_VGPU_PG_H2L_EN[2:2] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x4       , 0x4       , 0x0);

	// RG_STRUP_VDRAM_PG_H2L_EN[3:3] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x8       , 0x8       , 0x0);

	// RG_STRUP_VSRAM_PROC_PG_H2L_EN[4:4] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x10      , 0x10      , 0x0);

	// RG_STRUP_VSRAM_MD_PG_H2L_EN[5:5] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x20      , 0x20      , 0x0);

	// RG_STRUP_VA10_PG_H2L_EN[7:7] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x80      , 0x80      , 0x0);

	// RG_STRUP_VEMC_PG_H2L_EN[8:8] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x100     , 0x100     , 0x0);

	// RG_STRUP_VS2_PG_H2L_EN[10:10] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x400     , 0x400     , 0x0);

	// RG_STRUP_VMODEM_PG_H2L_EN[11:11] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x800     , 0x800     , 0x0);

	// RG_STRUP_VMD1_PG_H2L_EN[12:12] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x1000    , 0x1000    , 0x0);

	// RG_STRUP_VCORE_PG_H2L_EN[13:13] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x2000    , 0x2000    , 0x0);

	// RG_STRUP_VA18_PG_H2L_EN[14:14] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x4000    , 0x4000    , 0x0);

	// RG_STRUP_VS1_PG_H2L_EN[15:15] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x8000    , 0x8000    , 0x0);

	// RG_STRUP_VGPU_OC_ENB[9:9] = 0x1 => 1/6, Stephen disable VGPU OC Shutdown
	PMIC_DRV_SetData(0x12      , 0x200     , 0x200     , 0x0);

	// RG_STRUP_VSRAM_MD_OC_ENB[10:10] = 0x1 => 12/16, Stephen disable VSRAM_MD OC Shutdown
	PMIC_DRV_SetData(0x12      , 0x400     , 0x400     , 0x0);

	// RG_STRUP_VMODEM_OC_ENB[12:12] = 0x1 => 12/14, Stephen disable VMODEM OC Shutdown
	PMIC_DRV_SetData(0x12      , 0x1000    , 0x1000    , 0x0);

	// RG_STRUP_VMD1_OC_ENB[13:13] = 0x1 => 12/16, Stephen disable VMD1 OC Shutdown
	PMIC_DRV_SetData(0x12      , 0x2000    , 0x2000    , 0x0);

	// RG_STRUP_VCORE_OC_ENB[14:14] = 0x1 => 12/16, Stephen disable VCORE OC Shutdown
	PMIC_DRV_SetData(0x12      , 0x4000    , 0x4000    , 0x0);

	// UVLO_L2H_DEB_EN[5:5] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x18      , 0x20      , 0x20      , 0x0);

	// STRUP_AUXADC_RSTB_SEL[7:7] = 0x1 => 6/2,Dennis
	PMIC_DRV_SetData(0x1C      , 0x80      , 0x80      , 0x0);

	// STRUP_PWROFF_SEQ_EN[0:0] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x1E      , 0x1       , 0x1       , 0x0);

	// STRUP_PWROFF_PREOFF_EN[1:1] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x1E      , 0x2       , 0x2       , 0x0);

	// RG_STRUP_ENVTEM_CTRL[15:15] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x2C      , 0x8000    , 0x8000    , 0x0);

	// RG_EN_DRVSEL[2:2] = 0x1 => 6/1,Seven,PMU EN Driver Ability
	PMIC_DRV_SetData(0x32      , 0x4       , 0x4       , 0x0);

	// RG_RST_DRVSEL[3:3] = 0x1 => 6/1,Seven,RESETB Driver Ability
	PMIC_DRV_SetData(0x32      , 0x8       , 0x8       , 0x0);

	// RG_SRCLKEN_IN0_HW_MODE[4:4] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x204     , 0x10      , 0x10      , 0x0);

	// RG_SRCLKEN_IN1_HW_MODE[5:5] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x204     , 0x20      , 0x20      , 0x0);

	// RG_OSC_SEL_HW_MODE[6:6] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x204     , 0x40      , 0x40      , 0x0);

	// RG_SMT_WDTRSTB_IN[0:0] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x226     , 0x1       , 0x1       , 0x0);

	// RG_SMT_SPI_CLK[0:0] = 0x1 => 6/1,Check with Juinn-Ting
	PMIC_DRV_SetData(0x228     , 0x1       , 0x1       , 0x0);

	// RG_SMT_SPI_CSN[1:1] = 0x1 => 6/1,Check with Juinn-Ting
	PMIC_DRV_SetData(0x228     , 0x2       , 0x2       , 0x0);

	// RG_SMT_SPI_MOSI[2:2] = 0x1 => 6/1,Check with Juinn-Ting
	PMIC_DRV_SetData(0x228     , 0x4       , 0x4       , 0x0);

	// RG_SMT_SPI_MISO[3:3] = 0x1 => 6/1,Check with Juinn-Ting
	PMIC_DRV_SetData(0x228     , 0x8       , 0x8       , 0x0);

	// RG_AUXADC_SMPS_CK_PDN[9:9] = 0x0 => 9/7 Peter SW,for AUXADC need always on
	PMIC_DRV_SetData(0x23A     , 0x200     , 0x0       , 0x0);

	// RG_AUXADC_26M_CK_PDN[11:11] = 0x1
	PMIC_DRV_SetData(0x23A     , 0x800     , 0x800     , 0x0);

	// RG_RTC_75K_CK_PDN[2:2] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x240     , 0x4       , 0x4       , 0x0);

	// RG_RTCDET_CK_PDN[3:3] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x240     , 0x8       , 0x8       , 0x0);

	// RG_AUXADC_CK_PDN[10:10] = 0x0
	PMIC_DRV_SetData(0x240     , 0x400     , 0x0       , 0x0);

	// RG_RTC_EOSC32_CK_PDN[13:13] = 0x1 => Juinn-Ting(if 32 less keep default Value)
	PMIC_DRV_SetData(0x246     , 0x2000    , 0x2000    , 0x0);

	// RG_TRIM_75K_CK_PDN[14:14] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x246     , 0x4000    , 0x4000    , 0x0);

	// RG_EFUSE_CK_PDN[2:2] = 0x0
	PMIC_DRV_SetData(0x24C     , 0x4       , 0x0       , 0x0);

	// RG_BUCK_VSRAM_MD_9M_CK_PDN[5:5] = 0x0
	PMIC_DRV_SetData(0x258     , 0x20      , 0x0       , 0x0);

	// RG_AUD18M_CK_PDN[8:8] = 0x1
	PMIC_DRV_SetData(0x258     , 0x100     , 0x100     , 0x0);

	// RG_BUCK_AUD_1M_CK_PDN[14:14] = 0x0
	PMIC_DRV_SetData(0x258     , 0x4000    , 0x0       , 0x0);

	// RG_75K_32K_SEL[9:9] = 0x1 => Angela
	PMIC_DRV_SetData(0x25E     , 0x200     , 0x200     , 0x0);

	// RG_AUXADC_CK_CKSEL[10:10] = 0x0
	PMIC_DRV_SetData(0x25E     , 0x400     , 0x0       , 0x0);

	// RG_AUXADC_CK_PDN_HWEN[3:3] = 0x0 => 9/7,Peter SW,For Auxadc need always on
	PMIC_DRV_SetData(0x282     , 0x8       , 0x0       , 0x0);

	// RG_AUXADC_SMPS_CK_PDN_HWEN[4:4] = 0x0 => 9/7,Peter SW,For Auxadc need always on
	PMIC_DRV_SetData(0x282     , 0x10      , 0x0       , 0x0);

	// RG_AUXADC_26M_CK_PDN_HWEN[10:10] = 0x0 => ZF
	PMIC_DRV_SetData(0x282     , 0x400     , 0x0       , 0x0);

	// RG_AUXADC_CK_CKSEL_HWEN[11:11] = 0x0 => ZF
	PMIC_DRV_SetData(0x282     , 0x800     , 0x0       , 0x0);

	// RG_AUD18M_CK_PDN_HWEN[4:4] = 0x0
	PMIC_DRV_SetData(0x28E     , 0x10      , 0x0       , 0x0);

	// BUCK_VPA_VOSEL_DLC001[13:8] = 0x8 => 6/24,Paul
	PMIC_DRV_SetData(0x410     , 0x3F00    , 0x800     , 0x0);

	// BUCK_VPA_DVS_TRANS_CTRL[5:4] = 0x3 => 6/24,Paul
	PMIC_DRV_SetData(0x414     , 0x30      , 0x30      , 0x0);

	// BUCK_VCORE_EN_OC_SDN_SEL[0:0] = 0x1 => 12/16,Stephen VCORE OC Shutdown by test issue need disable
	PMIC_DRV_SetData(0x422     , 0x1       , 0x1       , 0x0);

	// BUCK_VGPU_EN_OC_SDN_SEL[1:1] = 0x1 => 1/6,Stephen VGPU OC Shutdown by test issue need disable
	PMIC_DRV_SetData(0x422     , 0x2       , 0x2       , 0x0);

	// BUCK_VMODEM_EN_OC_SDN_SEL[2:2] = 0x1 => 12/9,Stephen VMODEM OC Shutdown by test issue need disable
	PMIC_DRV_SetData(0x422     , 0x4       , 0x4       , 0x0);

	// BUCK_VMD1_EN_OC_SDN_SEL[3:3] = 0x1 => 12/16,Stephen VMD1 OC Shutdown by test issue need disable
	PMIC_DRV_SetData(0x422     , 0x8       , 0x8       , 0x0);

	// BUCK_VSRAM_MD_EN_OC_SDN_SEL[4:4] = 0x1 => 12/16,Stephen VSRAM_MD OC Shutdown by test issue need disable
	PMIC_DRV_SetData(0x422     , 0x10      , 0x10      , 0x0);

	// BUCK_VPA_EN_OC_SDN_SEL[7:7] = 0x1 => 9/14,Stephen PA OC Shutdown by Filed Test need disable
	PMIC_DRV_SetData(0x422     , 0x80      , 0x80      , 0x0);

	// BUCK_VPA_OC_WND[3:2] = 0x0 => 6/1 Paul OC Shutdiwn debounce Time 16us to 128us
	PMIC_DRV_SetData(0x436     , 0xC       , 0x0       , 0x0);

	// RG_VCORE_VSLEEP_SEL[9:8] = 0x2 => 3/21,TzuHeng Sleep mode voltage 0.65V
	PMIC_DRV_SetData(0x44A     , 0x300     , 0x200     , 0x0);

	// RG_VGPU_VSLEEP_SEL[11:10] = 0x3 => 3/21,TzuHeng Sleep mode voltage 0.6V
	PMIC_DRV_SetData(0x44A     , 0xC00     , 0xC00     , 0x0);

	// RG_VSRAM_MD_VSLEEP_SEL[13:12] = 0x3 => 3/21,TzuHeng Sleep mode voltage 0.6V
	PMIC_DRV_SetData(0x44A     , 0x3000    , 0x3000    , 0x0);

	// RG_VMODEM_VSLEEP_SEL[15:14] = 0x3 => 3/21,TzuHeng Sleep mode voltage 0.6V
	PMIC_DRV_SetData(0x44A     , 0xC000    , 0xC000    , 0x0);

	// RG_VMD1_VSLEEP_SEL[1:0] = 0x3 => 3/21,TzuHeng Sleep mode voltage 0.6V
	PMIC_DRV_SetData(0x44C     , 0x3       , 0x3       , 0x0);

	// RG_VCORE_CSL[14:11] = 0xF => 6/1,Tim,OC Level Adjust
	PMIC_DRV_SetData(0x450     , 0x7800    , 0x7800    , 0x0);

	// RG_VCORE_NLIM_GATING[7:7] = 0x1 => 8/17,Tim
	PMIC_DRV_SetData(0x456     , 0x80      , 0x80      , 0x0);

	// RG_VCORE_PFM_RIP[6:4] = 0x1 => 4/26,TzuHeng 4LSB change to 1LSB reduce PFM Ripple
	PMIC_DRV_SetData(0x458     , 0x70      , 0x10      , 0x0);

	// RG_VCORE_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1,Tim,Ultra Low Iq
	PMIC_DRV_SetData(0x45C     , 0x2       , 0x2       , 0x0);

	// RG_VCORE_RSV[15:0] = 0x400 => 6/1,Tim,Enable Pre-OC
	PMIC_DRV_SetData(0x45E     , 0xFFFF    , 0x400     , 0x0);

	// RG_VGPU_CSL[14:11] = 0xF => 6/1,Tim,OC Level Adjust
	PMIC_DRV_SetData(0x464     , 0x7800    , 0x7800    , 0x0);

	// RG_VGPU_PFMOC[11:9] = 0x5 => 8/24,Tim PFM OC Adjust for DVS Performance
	PMIC_DRV_SetData(0x466     , 0xE00     , 0xA00     , 0x0);

	// RG_VGPU_NLIM_GATING[7:7] = 0x1 => 8/17,Tim
	PMIC_DRV_SetData(0x46A     , 0x80      , 0x80      , 0x0);

	// RG_VGPU_PFM_RIP[6:4] = 0x1 => 4/26,TzuHeng 4LSB change to 1LSB reduce PFM Ripple
	PMIC_DRV_SetData(0x46C     , 0x70      , 0x10      , 0x0);

	// RG_VGPU_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1,Tim,Ultra Low Iq
	PMIC_DRV_SetData(0x470     , 0x2       , 0x2       , 0x0);

	// RG_VGPU_RSV[15:0] = 0x400 => 6/1,Tim,Enable Pre-OC
	PMIC_DRV_SetData(0x472     , 0xFFFF    , 0x400     , 0x0);

	// RG_VSRAM_MD_RZSEL0[2:0] = 0x0 => 2/5,Johnson Load Transient performance fine tune
	PMIC_DRV_SetData(0x478     , 0x7       , 0x0       , 0x0);

	// RG_VSRAM_MD_CSL[14:11] = 0xF => 6/1, Johnson, OC performance fine tune
	PMIC_DRV_SetData(0x478     , 0x7800    , 0x7800    , 0x0);

	// RG_VSRAM_MD_PFMOC[8:6] = 0x2 => 6/1, Johnson, PFM ripple performance fine tune
	PMIC_DRV_SetData(0x47A     , 0x1C0     , 0x80      , 0x0);

	// RG_VSRAM_MD_NLIM_GATING[1:1] = 0x1 => 6/24,Johnson,for transient mode transition Vo ringing, performance concern.
	PMIC_DRV_SetData(0x47E     , 0x2       , 0x2       , 0x0);

	// RG_VSRAM_MD_PFM_RIP[6:4] = 0x1 => 6/1, Johnson, performance fine tune.(PFM ripple)
	PMIC_DRV_SetData(0x480     , 0x70      , 0x10      , 0x0);

	// RG_VSRAM_MD_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1, Johnson, performance improvement. (iq, mode transition and pfm ripple H/L
	PMIC_DRV_SetData(0x484     , 0x2       , 0x2       , 0x0);

	// RG_VMODEM_RZSEL0[2:0] = 0x0 => 2/5,Johnson Load Transient performance fine tune
	PMIC_DRV_SetData(0x48C     , 0x7       , 0x0       , 0x0);

	// RG_VMODEM_CSL[14:11] = 0xF => 6/1, Johnson, OC performance fine tune
	PMIC_DRV_SetData(0x48C     , 0x7800    , 0x7800    , 0x0);

	// RG_VMODEM_PFMOC[8:6] = 0x2 => 6/1, Johnson, PFM ripple performance fine tune
	PMIC_DRV_SetData(0x48E     , 0x1C0     , 0x80      , 0x0);

	// RG_VMODEM_NLIM_GATING[1:1] = 0x1 => 6/24,Johnson,for transient mode transition Vo ringing, performance concern.
	PMIC_DRV_SetData(0x492     , 0x2       , 0x2       , 0x0);

	// RG_VMODEM_PFM_RIP[6:4] = 0x1 => 6/1, Johnson, performance fine tune.(PFM ripple)
	PMIC_DRV_SetData(0x494     , 0x70      , 0x10      , 0x0);

	// RG_VMODEM_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1, Johnson, performance improvement. (iq, mode transition and pfm ripple H/L
	PMIC_DRV_SetData(0x498     , 0x2       , 0x2       , 0x0);

	// RG_VMD1_RZSEL0[2:0] = 0x0 => 2/5,Johnson Load Transient performance fine tune
	PMIC_DRV_SetData(0x4A0     , 0x7       , 0x0       , 0x0);

	// RG_VMD1_CSL[14:11] = 0xF => 6/1, Johnson, OC performance fine tune
	PMIC_DRV_SetData(0x4A0     , 0x7800    , 0x7800    , 0x0);

	// RG_VMD1_PFMOC[8:6] = 0x2 => 6/1, Johnson, PFM ripple performance fine tune
	PMIC_DRV_SetData(0x4A2     , 0x1C0     , 0x80      , 0x0);

	// RG_VMD1_NLIM_GATING[1:1] = 0x1 => 6/24,Johnson,for transient mode transition Vo ringing, performance concern.
	PMIC_DRV_SetData(0x4A6     , 0x2       , 0x2       , 0x0);

	// RG_VMD1_PFM_RIP[6:4] = 0x1 => 6/1, Johnson, performance fine tune.(PFM ripple)
	PMIC_DRV_SetData(0x4A8     , 0x70      , 0x10      , 0x0);

	// RG_VMD1_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1, Johnson, performance improvement. (iq, mode transition and pfm ripple H/L
	PMIC_DRV_SetData(0x4AC     , 0x2       , 0x2       , 0x0);

	// RG_VS1_PFMOC[8:6] = 0x6 => 7/15,Lan improve ZXOS Detect
	PMIC_DRV_SetData(0x4B6     , 0x1C0     , 0x180     , 0x0);

	// RG_VS1_RSV[15:0] = 0x10 => 6/2, Hung Mu Chou,OC Level Adjust
	PMIC_DRV_SetData(0x4C2     , 0xFFFF    , 0x10      , 0x0);

	// RG_VS2_CSL[14:11] = 0xF => 7/15,Lan improve ZXOS Detect
	PMIC_DRV_SetData(0x4C8     , 0x7800    , 0x7800    , 0x0);

	// RG_VS2_PFMOC[8:6] = 0x5 => 7/15,Lan improve ZXOS Detect
	PMIC_DRV_SetData(0x4CA     , 0x1C0     , 0x140     , 0x0);

	// RG_VS2_NLIM_GATING[1:1] = 0x1 => 6/1 Lan NLIM_Gating Enable
	PMIC_DRV_SetData(0x4CE     , 0x2       , 0x2       , 0x0);

	// RG_VS2_PFM_RIP[6:4] = 0x1 => 6/1 Lan PWM/PFM Output accuracy adjust
	PMIC_DRV_SetData(0x4D0     , 0x70      , 0x10      , 0x0);

	// RG_VPA_CC[1:0] = 0x3 => 6/24 Paul VPA compensation C adjust
	PMIC_DRV_SetData(0x4DC     , 0x3       , 0x3       , 0x0);

	// RG_VPA_CSMIR[5:4] = 0x2 => 8/27,Paul reduce 20% Current sensing ratio
	PMIC_DRV_SetData(0x4DC     , 0x30      , 0x20      , 0x0);

	// RG_VPA_AZC_EN[10:10] = 0x0 => 6/3,Paul
	PMIC_DRV_SetData(0x4DC     , 0x400     , 0x0       , 0x0);

	// RG_VPA_RZSEL[15:14] = 0x1 => 8/27,Paul Compensation resistance 310k>210K
	PMIC_DRV_SetData(0x4DC     , 0xC000    , 0x4000    , 0x0);

	// RG_VPA_MIN_PK[15:14] = 0x0 => 6/1 Paul MIN Peak Current 250mA to 100mA
	PMIC_DRV_SetData(0x4E0     , 0xC000    , 0x0       , 0x0);

	// RG_VPA_RSV2[15:8] = 0x88 => 8/10,Paul, Auto Change Slope compensation
	PMIC_DRV_SetData(0x4E2     , 0xFF00    , 0x8800    , 0x0);

	// BUCK_VCORE_VOSEL_CTRL[1:1] = 0x1 => 6/1,Tim,Sleep mode by HW Control
	PMIC_DRV_SetData(0x600     , 0x2       , 0x2       , 0x0);

	// BUCK_VCORE_SFCHG_FRATE[6:0] = 0x11 => 6/1,Tim,DVS Falling Slew Rate
	PMIC_DRV_SetData(0x606     , 0x7F      , 0x11      , 0x0);

	// BUCK_VCORE_SFCHG_RRATE[14:8] = 0xB => 16 2/26,Evan Wang,for Olympus DRAM Request
	PMIC_DRV_SetData(0x606     , 0x7F00    , 0xB00     , 0x0);

	// BUCK_VCORE_VOSEL_SLEEP[6:0] = 0x8 => 1/6,Tzu Heng Sleep mode voltage for Olympus(0.65V)
	PMIC_DRV_SetData(0x60C     , 0x7F      , 0x8       , 0x0);

	// BUCK_VCORE_TRANS_TD[1:0] = 0x3 => 6/1,Tim
	PMIC_DRV_SetData(0x612     , 0x3       , 0x3       , 0x0);

	// BUCK_VCORE_VSLEEP_EN[8:8] = 0x1 => 6/1,Tim,Sleep mode by HW Control
	PMIC_DRV_SetData(0x612     , 0x100     , 0x100     , 0x0);

	// BUCK_VGPU_SFCHG_FRATE[6:0] = 0x11 => 6/1,Tim,DVS Falling Slew Rate
	PMIC_DRV_SetData(0x61A     , 0x7F      , 0x11      , 0x0);

	// BUCK_VGPU_SFCHG_RRATE[14:8] = 0x4 => 6/1,Tim,DVS Rising Slew Rate
	PMIC_DRV_SetData(0x61A     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VGPU_VOSEL_ON[6:0] = 0x20 => 3/28,Tzu Heng Normal mode voltage for Olympus(0.8V)
	PMIC_DRV_SetData(0x61E     , 0x7F      , 0x20      , 0x0);

	// BUCK_VGPU_VOSEL_SLEEP[6:0] = 0x0 => 1/6,Tzu Heng Sleep mode voltage for Olympus(0.6V)
	PMIC_DRV_SetData(0x620     , 0x7F      , 0x0       , 0x0);

	// BUCK_VGPU_TRANS_TD[1:0] = 0x3 => 6/1,Tim
	PMIC_DRV_SetData(0x626     , 0x3       , 0x3       , 0x0);

	// BUCK_VGPU_TRANS_CTRL[5:4] = 0x1 => 8/17,Tim
	PMIC_DRV_SetData(0x626     , 0x30      , 0x10      , 0x0);

	// BUCK_VMODEM_SFCHG_FRATE[6:0] = 0x11 => 6/1, Johnson,softchange for DVS/DVFS slew rate falling 2.0us/step
	PMIC_DRV_SetData(0x62E     , 0x7F      , 0x11      , 0x0);

	// BUCK_VMODEM_SFCHG_RRATE[14:8] = 0x4 => 6/1, Johnson,softchange for DVS/DVFS slew rate rising 0.5us/step
	PMIC_DRV_SetData(0x62E     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VMODEM_VOSEL_SLEEP[6:0] = 0x0 => 1/6,Tzu Heng Sleep mode voltage for Olympus(0.6V)
	PMIC_DRV_SetData(0x634     , 0x7F      , 0x0       , 0x0);

	// BUCK_VMODEM_TRANS_TD[1:0] = 0x3 => 6/1, Johnson, falling for DVFS/DVS discharge extension time control
	PMIC_DRV_SetData(0x63A     , 0x3       , 0x3       , 0x0);

	// BUCK_VMODEM_TRANS_CTRL[5:4] = 0x1 => 6/1, Johnson, falling for DVFS/DVS discharge slew rate control
	PMIC_DRV_SetData(0x63A     , 0x30      , 0x10      , 0x0);

	// BUCK_VMODEM_VSLEEP_EN[8:8] = 0x1 => 6/1, Johnson, r2r power down with srclken sleep hw mode
	PMIC_DRV_SetData(0x63A     , 0x100     , 0x100     , 0x0);

	// BUCK_VMD1_SFCHG_FRATE[6:0] = 0x11 => 6/1, Johnson,softchange for DVS/DVFS slew rate falling 2.0us/step
	PMIC_DRV_SetData(0x642     , 0x7F      , 0x11      , 0x0);

	// BUCK_VMD1_SFCHG_RRATE[14:8] = 0x4 => 6/1, Johnson,softchange for DVS/DVFS slew rate rising 0.5us/step
	PMIC_DRV_SetData(0x642     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VMD1_VOSEL_SLEEP[6:0] = 0x0 => 1/6,Tzu Heng Sleep mode voltage for Olympus(0.6V)
	PMIC_DRV_SetData(0x648     , 0x7F      , 0x0       , 0x0);

	// BUCK_VMD1_TRANS_TD[1:0] = 0x3 => 6/1, Johnson, falling for DVFS/DVS discharge extension time control
	PMIC_DRV_SetData(0x64E     , 0x3       , 0x3       , 0x0);

	// BUCK_VMD1_TRANS_CTRL[5:4] = 0x1 => 6/1, Johnson, falling for DVFS/DVS discharge slew rate control
	PMIC_DRV_SetData(0x64E     , 0x30      , 0x10      , 0x0);

	// BUCK_VMD1_VSLEEP_EN[8:8] = 0x1 => 6/1, Johnson, r2r power down with srclken sleep hw mode, after vo sel
	PMIC_DRV_SetData(0x64E     , 0x100     , 0x100     , 0x0);

	// BUCK_VSRAM_MD_SFCHG_FRATE[6:0] = 0x11 => 6/1, Johnson,softchange for DVS/DVFS slew rate falling 2.0us/step
	PMIC_DRV_SetData(0x656     , 0x7F      , 0x11      , 0x0);

	// BUCK_VSRAM_MD_SFCHG_RRATE[14:8] = 0x4 => 6/1, Johnson,softchange for DVS/DVFS slew rate rising 0.5us/step
	PMIC_DRV_SetData(0x656     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VSRAM_MD_VOSEL_ON[6:0] = 0x30 => 1/6,Tzu Heng Normal mode voltage for Olympus(0.9V)
	PMIC_DRV_SetData(0x65A     , 0x7F      , 0x30      , 0x0);

	// BUCK_VSRAM_MD_VOSEL_SLEEP[6:0] = 0x0 => 1/6,Tzu Heng Sleep mode voltage for Olympus(0.6V)
	PMIC_DRV_SetData(0x65C     , 0x7F      , 0x0       , 0x0);

	// BUCK_VSRAM_MD_TRANS_TD[1:0] = 0x3 => 6/1, Johnson, falling for DVFS/DVS discharge extension time control
	PMIC_DRV_SetData(0x662     , 0x3       , 0x3       , 0x0);

	// BUCK_VSRAM_MD_TRANS_CTRL[5:4] = 0x1 => 6/1, Johnson, falling for DVFS/DVS discharge slew rate control
	PMIC_DRV_SetData(0x662     , 0x30      , 0x10      , 0x0);

	// BUCK_VSRAM_MD_VSLEEP_EN[8:8] = 0x1 => 6/1, Johnson, r2r power down with srclken sleep hw mode, after vo sel
	PMIC_DRV_SetData(0x662     , 0x100     , 0x100     , 0x0);

	// BUCK_VS1_VSLEEP_EN[8:8] = 0x1 => 6/1,Lan,r2r power down with srclken sleep hw mode
	PMIC_DRV_SetData(0x676     , 0x100     , 0x100     , 0x0);

	// BUCK_VS2_VSLEEP_EN[8:8] = 0x1 => 6/1,Lan,r2r power down with srclken sleep hw mode
	PMIC_DRV_SetData(0x68A     , 0x100     , 0x100     , 0x0);

	// BUCK_VPA_SFCHG_FRATE[6:0] = 0x0 => 6/3,Paul
	PMIC_DRV_SetData(0x692     , 0x7F      , 0x0       , 0x0);

	// BUCK_VPA_SFCHG_RRATE[14:8] = 0x1 => 6/3,Paul
	PMIC_DRV_SetData(0x692     , 0x7F00    , 0x100     , 0x0);

	// BUCK_VPA_TRANS_TD[1:0] = 0x0 => 624,Paul
	PMIC_DRV_SetData(0x69E     , 0x3       , 0x0       , 0x0);

	// BUCK_VSRAM_PROC_VOSEL_CTRL[1:1] = 0x1 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6A0     , 0x2       , 0x2       , 0x0);

	// BUCK_VSRAM_PROC_SFCHG_FRATE[6:0] = 0x11 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6A6     , 0x7F      , 0x11      , 0x0);

	// BUCK_VSRAM_PROC_SFCHG_RRATE[14:8] = 0x4 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6A6     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VSRAM_PROC_VOSEL_SLEEP[6:0] = 0x0 => 1/6,Tzu Heng Sleep mode voltage for Olympus(0.6V)
	PMIC_DRV_SetData(0x6AC     , 0x7F      , 0x0       , 0x0);

	// BUCK_VSRAM_PROC_TRANS_TD[1:0] = 0x3 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6B2     , 0x3       , 0x3       , 0x0);

	// BUCK_VSRAM_PROC_TRANS_CTRL[5:4] = 0x1 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6B2     , 0x30      , 0x10      , 0x0);

	// RG_VA18_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA00     , 0x4       , 0x4       , 0x0);

	// RG_VA18_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA00     , 0xE0      , 0x0       , 0x0);

	// RG_VA18_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA02     , 0x200     , 0x200     , 0x0);

	// RG_VTCXO24_ON_CTRL[3:3] = 0x1 => 6/2,CW
	PMIC_DRV_SetData(0xA04     , 0x8       , 0x8       , 0x0);

	// RG_VTCXO24_SRCLK_EN_SEL[13:11] = 0x0 => 6/2,CW,RF Power Control request
	PMIC_DRV_SetData(0xA04     , 0x3800    , 0x0       , 0x0);

	// RG_VTCXO24_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA06     , 0x200     , 0x200     , 0x0);

	// RG_VTCXO28_ON_CTRL[3:3] = 0x1 => 6/2,CW
	PMIC_DRV_SetData(0xA08     , 0x8       , 0x8       , 0x0);

	// RG_VTCXO28_SRCLK_EN_SEL[13:11] = 0x1 => 6/2,CW,RF Power Control request
	PMIC_DRV_SetData(0xA08     , 0x3800    , 0x800     , 0x0);

	// RG_VTCXO28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA0A     , 0x200     , 0x200     , 0x0);

	// RG_VCN28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA0E     , 0x200     , 0x200     , 0x0);

	// RG_VCAMA_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA14     , 0x200     , 0x200     , 0x0);

	// RG_VUSB33_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA16     , 0x4       , 0x4       , 0x0);

	// RG_VUSB33_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA16     , 0xE0      , 0x0       , 0x0);

	// RG_VUSB33_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA18     , 0x200     , 0x200     , 0x0);

	// RG_VSIM1_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA1E     , 0x200     , 0x200     , 0x0);

	// RG_VSIM2_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA24     , 0x200     , 0x200     , 0x0);

	// RG_VEMC_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA2A     , 0x200     , 0x200     , 0x0);

	// RG_VMCH_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA30     , 0x200     , 0x200     , 0x0);

	// RG_VIO28_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA34     , 0x4       , 0x4       , 0x0);

	// RG_VIO28_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA34     , 0xE0      , 0x0       , 0x0);

	// RG_VIO28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA36     , 0x200     , 0x200     , 0x0);

	// RG_VIBR_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA3C     , 0x200     , 0x200     , 0x0);

	// RG_VRF18_ON_CTRL[3:3] = 0x1 => 6/2,CW
	PMIC_DRV_SetData(0xA46     , 0x8       , 0x8       , 0x0);

	// RG_VRF18_SRCLK_EN_SEL[13:11] = 0x1 => 6/2,CW,RF Power Control request
	PMIC_DRV_SetData(0xA46     , 0x3800    , 0x800     , 0x0);

	// RG_VRF18_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA48     , 0x200     , 0x200     , 0x0);

	// RG_VIO18_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA4C     , 0x4       , 0x4       , 0x0);

	// RG_VIO18_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA4C     , 0xE0      , 0x0       , 0x0);

	// RG_VIO18_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA4E     , 0x200     , 0x200     , 0x0);

	// RG_VCN18_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA54     , 0x200     , 0x200     , 0x0);

	// RG_VCAMIO_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA5A     , 0x200     , 0x200     , 0x0);

	// RG_VXO22_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA66     , 0x200     , 0x200     , 0x0);

	// RG_VRF12_ON_CTRL[3:3] = 0x1 => 6/2,CW
	PMIC_DRV_SetData(0xA68     , 0x8       , 0x8       , 0x0);

	// RG_VRF12_SRCLK_EN_SEL[13:11] = 0x1 => 6/2,CW,RF Power Control request
	PMIC_DRV_SetData(0xA68     , 0x3800    , 0x800     , 0x0);

	// RG_VA10_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA6E     , 0x4       , 0x4       , 0x0);

	// RG_VA10_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA6E     , 0xE0      , 0x0       , 0x0);

	// RG_VDRAM_EN[1:1] = 0x1 => 6/5,Chia Lin Same as Fly suspend mode
	PMIC_DRV_SetData(0xA74     , 0x2       , 0x2       , 0x0);

	// RG_VDRAM_MODE_CTRL[2:2] = 0x1 => 6/5,Chia Lin Same as Fly suspend mode
	PMIC_DRV_SetData(0xA74     , 0x4       , 0x4       , 0x0);

	// RG_VDRAM_ON_CTRL[3:3] = 0x0 => 6/5,Chia Lin Same as Fly suspend mode
	PMIC_DRV_SetData(0xA74     , 0x8       , 0x0       , 0x0);

	// RG_VDRAM_SRCLK_MODE_SEL[7:5] = 0x0 => 6/5,Chia Lin Same as Fly suspend mode
	PMIC_DRV_SetData(0xA74     , 0xE0      , 0x0       , 0x0);

	// RG_VMIPI_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA7C     , 0x200     , 0x200     , 0x0);

	// RG_VGP3_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA82     , 0x200     , 0x200     , 0x0);

	// RG_VBIF28_ON_CTRL[3:3] = 0x0 => 6/1,Seven,
	PMIC_DRV_SetData(0xA86     , 0x8       , 0x0       , 0x0);

	// RG_VBIF28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA88     , 0x200     , 0x200     , 0x0);

	// RG_VEFUSE_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA8E     , 0x200     , 0x200     , 0x0);

	// RG_VCN33_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA94     , 0x200     , 0x200     , 0x0);

	// RG_VLDO28_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA9C     , 0x4       , 0x4       , 0x0);

	// RG_VLDO28_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
	PMIC_DRV_SetData(0xA9C     , 0xE0      , 0x0       , 0x0);

	// RG_VLDO28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA9E     , 0x200     , 0x200     , 0x0);

	// RG_VMC_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xAAC     , 0x200     , 0x200     , 0x0);

	// RG_VA10_VOSEL[10:8] = 0x2 => 6/8,KH for JADE VA10=1V
	PMIC_DRV_SetData(0xB10     , 0x700     , 0x200     , 0x0);

	// FG_SLP_EN[8:8] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xCC4     , 0x100     , 0x100     , 0x0);

	// FG_ZCV_DET_EN[9:9] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xCC4     , 0x200     , 0x200     , 0x0);

	// FG_SLP_CUR_TH[15:0] = 0x1F => 6/1,Filby
	PMIC_DRV_SetData(0xCC8     , 0xFFFF    , 0x1F      , 0x0);

	// FG_SLP_TIME[7:0] = 0x14 => 6/1,Filby
	PMIC_DRV_SetData(0xCCA     , 0xFF      , 0x14      , 0x0);

	// FG_DET_TIME[15:8] = 0xFF => 6/1,Filby
	PMIC_DRV_SetData(0xCCC     , 0xFF00    , 0xFF00    , 0x0);

	// FG_ZCV_CAR_TH_33_19[14:0] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xCE2     , 0x7FFF    , 0x1       , 0x0);

	// FG_ZCV_CAR_TH_18_03[15:0] = 0xBCAC => 6/1,Filby
	PMIC_DRV_SetData(0xCE4     , 0xFFFF    , 0xBCAC    , 0x0);

	// AUXADC_CK_AON_GPS[13:13] = 0x0 => Check with Peter
	PMIC_DRV_SetData(0xEA2     , 0x2000    , 0x0       , 0x0);

	// AUXADC_CK_AON_MD[14:14] = 0x0 => Check with Peter
	PMIC_DRV_SetData(0xEA2     , 0x4000    , 0x0       , 0x0);

	// AUXADC_CK_AON[15:15] = 0x0 => Check with Peter
	PMIC_DRV_SetData(0xEA2     , 0x8000    , 0x0       , 0x0);

	// AUXADC_AVG_NUM_SEL[11:0] = 0x83 => 6/1,Filby,Resolution Adjust
	PMIC_DRV_SetData(0xEAA     , 0xFFF     , 0x83      , 0x0);

	// AUXADC_AVG_NUM_SEL_LBAT[13:13] = 0x0 => 8/3,Filby,Resolution Adjust
	PMIC_DRV_SetData(0xEAA     , 0x2000    , 0x0       , 0x0);

	// AUXADC_AVG_NUM_SEL_WAKEUP[15:15] = 0x1 => 6/1,Filby,Resolution Adjust
	PMIC_DRV_SetData(0xEAA     , 0x8000    , 0x8000    , 0x0);

	// AUXADC_TRIM_CH2_SEL[5:4] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0x30      , 0x10      , 0x0);

	// AUXADC_TRIM_CH3_SEL[7:6] = 0x3 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0xC0      , 0xC0      , 0x0);

	// AUXADC_TRIM_CH4_SEL[9:8] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0x300     , 0x100     , 0x0);

	// AUXADC_TRIM_CH5_SEL[11:10] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0xC00     , 0x400     , 0x0);

	// AUXADC_TRIM_CH6_SEL[13:12] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0x3000    , 0x1000    , 0x0);

	// AUXADC_TRIM_CH7_SEL[15:14] = 0x2 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0xC000    , 0x8000    , 0x0);

	// AUXADC_TRIM_CH8_SEL[1:0] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB4     , 0x3       , 0x1       , 0x0);

	// AUXADC_TRIM_CH9_SEL[3:2] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB4     , 0xC       , 0x4       , 0x0);

	// AUXADC_TRIM_CH10_SEL[5:4] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB4     , 0x30      , 0x10      , 0x0);

	// AUXADC_TRIM_CH11_SEL[7:6] = 0x3 => 6/1,Filby
	PMIC_DRV_SetData(0xEB4     , 0xC0      , 0xC0      , 0x0);

	// AUXADC_START_SHADE_EN[14:14] = 0x1 => TBD(Wei-Lin)
	PMIC_DRV_SetData(0xEC6     , 0x4000    , 0x4000    , 0x0);

	// AUXADC_MDBG_DET_PRD[9:0] = 0xC => 10/30, sw.huang
	PMIC_DRV_SetData(0xF16     , 0x3FF     , 0xC       , 0x0);

	// AUXADC_MDBG_DET_EN[15:15] = 0x0 => 10/30, sw.huang
	PMIC_DRV_SetData(0xF16     , 0x8000    , 0x0       , 0x0);

	// AUXADC_MDRT_DET_PRD[9:0] = 0xC => 10/30, sw.huang
	PMIC_DRV_SetData(0xF1C     , 0x3FF     , 0xC       , 0x0);

	// AUXADC_MDRT_DET_EN[15:15] = 0x1 => 10/30, sw.huang
	PMIC_DRV_SetData(0xF1C     , 0x8000    , 0x8000    , 0x0);

	// AUXADC_MDRT_DET_WKUP_EN[2:2] = 0x1 => 6/2,Dennis
	PMIC_DRV_SetData(0xF20     , 0x4       , 0x4       , 0x0);

	// RG_VCDT_HV_VTH[7:4] = 0xB => Zax: VCDT_HV_th=7V (customized setting for VBUS OVP)
	PMIC_DRV_SetData(0xF7A     , 0xF0      , 0xB0      , 0x0);

	// RG_VBAT_OV_VTH[4:1] = 0x4 => Zax: 4.45V for 4.35v battery (customized setting based on CV_VTH, shall set OV_VTH=CV_VTH+100mV)
	PMIC_DRV_SetData(0xF84     , 0x1E      , 0x8       , 0x0);

	// RG_CHRWDT_TD[3:0] = 0x3 => Zax:WDT=32s
	PMIC_DRV_SetData(0xF92     , 0xF       , 0x3       , 0x0);

	// RG_BC11_RST[1:1] = 0x1 => Zax:Disable BC1.1 timer
	PMIC_DRV_SetData(0xFA0     , 0x2       , 0x2       , 0x0);

	// RG_CSDAC_STP_DEC[6:4] = 0x0 => Zax:Reduce ICHG current ripple
	PMIC_DRV_SetData(0xFA4     , 0x70      , 0x0       , 0x0);

	// RG_CSDAC_MODE[2:2] = 0x1 => Zax:Align 6323
	PMIC_DRV_SetData(0xFAA     , 0x4       , 0x4       , 0x0);

	// RG_HWCV_EN[6:6] = 0x1 => Zax:Align 6323
	PMIC_DRV_SetData(0xFAA     , 0x40      , 0x40      , 0x0);

	// RG_ULC_DET_EN[7:7] = 0x1 => Zax: need to enable for supporting bad TA
	PMIC_DRV_SetData(0xFAA     , 0x80      , 0x80      , 0x0);

}
#else
// MT6351 ECO_E1
void dcl_pmic6351_modem_only_init(void)
{
	// DDUVLO_DEB_EN[0:0] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x8       , 0x1       , 0x1       , 0x0);

	// RG_STRUP_VUSB33_PG_H2L_EN[1:1] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x2       , 0x2       , 0x0);

	// RG_STRUP_VGPU_PG_H2L_EN[2:2] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x4       , 0x4       , 0x0);

	// RG_STRUP_VDRAM_PG_H2L_EN[3:3] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x8       , 0x8       , 0x0);

	// RG_STRUP_VSRAM_PROC_PG_H2L_EN[4:4] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x10      , 0x10      , 0x0);

	// RG_STRUP_VSRAM_MD_PG_H2L_EN[5:5] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x20      , 0x20      , 0x0);

	// RG_STRUP_VA10_PG_H2L_EN[7:7] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x80      , 0x80      , 0x0);

	// RG_STRUP_VEMC_PG_H2L_EN[8:8] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x100     , 0x100     , 0x0);

	// RG_STRUP_VS2_PG_H2L_EN[10:10] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x400     , 0x400     , 0x0);

	// RG_STRUP_VMODEM_PG_H2L_EN[11:11] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x800     , 0x800     , 0x0);

	// RG_STRUP_VMD1_PG_H2L_EN[12:12] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x1000    , 0x1000    , 0x0);

	// RG_STRUP_VCORE_PG_H2L_EN[13:13] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x2000    , 0x2000    , 0x0);

	// RG_STRUP_VA18_PG_H2L_EN[14:14] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x4000    , 0x4000    , 0x0);

	// RG_STRUP_VS1_PG_H2L_EN[15:15] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0xA       , 0x8000    , 0x8000    , 0x0);

	// UVLO_L2H_DEB_EN[5:5] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x18      , 0x20      , 0x20      , 0x0);

	// STRUP_AUXADC_RSTB_SEL[7:7] = 0x1 => 6/2,Dennis
	PMIC_DRV_SetData(0x1C      , 0x80      , 0x80      , 0x0);

	// STRUP_PWROFF_SEQ_EN[0:0] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x1E      , 0x1       , 0x1       , 0x0);

	// STRUP_PWROFF_PREOFF_EN[1:1] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x1E      , 0x2       , 0x2       , 0x0);

	// RG_STRUP_ENVTEM_CTRL[15:15] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x2C      , 0x8000    , 0x8000    , 0x0);

	// RG_EN_DRVSEL[2:2] = 0x1 => 6/1,Seven,PMU EN Driver Ability
	PMIC_DRV_SetData(0x32      , 0x4       , 0x4       , 0x0);

	// RG_RST_DRVSEL[3:3] = 0x1 => 6/1,Seven,RESETB Driver Ability
	PMIC_DRV_SetData(0x32      , 0x8       , 0x8       , 0x0);

	// RG_SRCLKEN_IN0_HW_MODE[4:4] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x204     , 0x10      , 0x10      , 0x0);

	// RG_SRCLKEN_IN1_HW_MODE[5:5] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x204     , 0x20      , 0x20      , 0x0);

	// RG_OSC_SEL_HW_MODE[6:6] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x204     , 0x40      , 0x40      , 0x0);

	// RG_SMT_WDTRSTB_IN[0:0] = 0x1 => 6/1,Seven
	PMIC_DRV_SetData(0x226     , 0x1       , 0x1       , 0x0);

	// RG_SMT_SPI_CLK[0:0] = 0x1 => 6/1,Check with Juinn-Ting
	PMIC_DRV_SetData(0x228     , 0x1       , 0x1       , 0x0);

	// RG_SMT_SPI_CSN[1:1] = 0x1 => 6/1,Check with Juinn-Ting
	PMIC_DRV_SetData(0x228     , 0x2       , 0x2       , 0x0);

	// RG_SMT_SPI_MOSI[2:2] = 0x1 => 6/1,Check with Juinn-Ting
	PMIC_DRV_SetData(0x228     , 0x4       , 0x4       , 0x0);

	// RG_SMT_SPI_MISO[3:3] = 0x1 => 6/1,Check with Juinn-Ting
	PMIC_DRV_SetData(0x228     , 0x8       , 0x8       , 0x0);
	
	// RG_AUXADC_SMPS_CK_PDN[9:9] = 0x0 => 9/7 Peter SW,for AUXADC need always on
    PMIC_DRV_SetData(0x23A     , 0x200     , 0x0       , 0x0);
 
    // RG_AUXADC_26M_CK_PDN[11:11] = 0x1
    PMIC_DRV_SetData(0x23A     , 0x800     , 0x800     , 0x0);

	// RG_RTC_75K_CK_PDN[2:2] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x240     , 0x4       , 0x4       , 0x0);

	// RG_RTCDET_CK_PDN[3:3] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x240     , 0x8       , 0x8       , 0x0);
	
	// RG_AUXADC_CK_PDN[10:10] = 0x0
    PMIC_DRV_SetData(0x240     , 0x400     , 0x0       , 0x0);

	// RG_RTC_EOSC32_CK_PDN[13:13] = 0x1 => Juinn-Ting(if 32 less keep default Value)
	PMIC_DRV_SetData(0x246     , 0x2000    , 0x2000    , 0x0);

	// RG_TRIM_75K_CK_PDN[14:14] = 0x1 => Juinn-Ting
	PMIC_DRV_SetData(0x246     , 0x4000    , 0x4000    , 0x0);
	
	// RG_EFUSE_CK_PDN[2:2] = 0x0
    PMIC_DRV_SetData(0x24C     , 0x4       , 0x0       , 0x0);
 
    // RG_BUCK_VSRAM_MD_9M_CK_PDN[5:5] = 0x0
    PMIC_DRV_SetData(0x258     , 0x20      , 0x0       , 0x0);
 
    // RG_AUD18M_CK_PDN[8:8] = 0x1
    PMIC_DRV_SetData(0x258     , 0x100     , 0x100     , 0x0);
 
    // RG_BUCK_AUD_1M_CK_PDN[14:14] = 0x0
    PMIC_DRV_SetData(0x258     , 0x4000    , 0x0       , 0x0);

	// RG_75K_32K_SEL[9:9] = 0x1 => Angela
	PMIC_DRV_SetData(0x25E     , 0x200     , 0x200     , 0x0);
	
	// RG_AUXADC_CK_CKSEL[10:10] = 0x0
    PMIC_DRV_SetData(0x25E     , 0x400     , 0x0       , 0x0);
 
    // RG_AUXADC_CK_PDN_HWEN[3:3] = 0x0
    PMIC_DRV_SetData(0x282     , 0x8       , 0x0       , 0x0);
 
    // RG_AUXADC_SMPS_CK_PDN_HWEN[4:4] = 0x0 => 9/7,Peter SW,For Auxadc need always on
    PMIC_DRV_SetData(0x282     , 0x10      , 0x0       , 0x0);

	// RG_AUXADC_26M_CK_PDN_HWEN[10:10] = 0x0 => ZF
	PMIC_DRV_SetData(0x282     , 0x400     , 0x0       , 0x0);

	// RG_AUXADC_CK_CKSEL_HWEN[11:11] = 0x0 => ZF
	PMIC_DRV_SetData(0x282     , 0x800     , 0x0       , 0x0);
	
	// RG_AUD18M_CK_PDN_HWEN[4:4] = 0x0
    PMIC_DRV_SetData(0x28E     , 0x10      , 0x0       , 0x0);
 
	// BUCK_VPA_VOSEL_DLC001[13:8] = 0x8 => 6/24,Paul
	PMIC_DRV_SetData(0x410     , 0x3F00    , 0x800     , 0x0);

	// BUCK_VPA_DVS_TRANS_CTRL[5:4] = 0x3 => 6/24,Paul
	PMIC_DRV_SetData(0x414     , 0x30      , 0x30      , 0x0);

    // BUCK_VPA_EN_OC_SDN_SEL[7:7] = 0x1 => 9/14,Stephen PA OC Shutdown by Filed Test need disable
	PMIC_DRV_SetData(0x422     , 0x80      , 0x80      , 0x0);

	// BUCK_VPA_OC_WND[3:2] = 0x0 => 6/1 Paul OC Shutdiwn debounce Time 16us to 128us
	PMIC_DRV_SetData(0x436     , 0xC       , 0x0       , 0x0);

	// RG_VCORE_CSL[14:11] = 0xF => 6/1,Tim,OC Level Adjust
	PMIC_DRV_SetData(0x450     , 0x7800    , 0x7800    , 0x0);

	// RG_VCORE_ADRC_FEN[3:3] = 0x1 => 6/1,Tim,Bandwidth Extend
	PMIC_DRV_SetData(0x452     , 0x8       , 0x8       , 0x0);
	
	// RG_VCORE_NLIM_GATING[7:7] = 0x1 => 8/17,Tim
    PMIC_DRV_SetData(0x456     , 0x80      , 0x80      , 0x0);

	// RG_VCORE_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1,Tim,Ultra Low Iq
	PMIC_DRV_SetData(0x45C     , 0x2       , 0x2       , 0x0);

	// RG_VCORE_RSV[15:0] = 0x400 => 6/1,Tim,Enable Pre-OC
	PMIC_DRV_SetData(0x45E     , 0xFFFF    , 0x400     , 0x0);

	// RG_VGPU_CSL[14:11] = 0xF => 6/1,Tim,OC Level Adjust
	PMIC_DRV_SetData(0x464     , 0x7800    , 0x7800    , 0x0);

	// RG_VGPU_ADRC_FEN[3:3] = 0x1 => 6/1,Tim,Bandwidth Extend
	PMIC_DRV_SetData(0x466     , 0x8       , 0x8       , 0x0);
	
	// RG_VGPU_PFMOC[11:9] = 0x5 => 8/24,Tim PFM OC Adjust for DVS Performance
    PMIC_DRV_SetData(0x466     , 0xE00     , 0xA00     , 0x0);
 
    // RG_VGPU_NLIM_GATING[7:7] = 0x1 => 8/17,Tim
    PMIC_DRV_SetData(0x46A     , 0x80      , 0x80      , 0x0);

	// RG_VGPU_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1,Tim,Ultra Low Iq
	PMIC_DRV_SetData(0x470     , 0x2       , 0x2       , 0x0);

	// RG_VGPU_RSV[15:0] = 0x400 => 6/1,Tim,Enable Pre-OC
	PMIC_DRV_SetData(0x472     , 0xFFFF    , 0x400     , 0x0);

	// RG_VSRAM_MD_CSL[14:11] = 0xF => 6/1, Johnson, OC performance fine tune
	PMIC_DRV_SetData(0x478     , 0x7800    , 0x7800    , 0x0);

	// RG_VSRAM_MD_PFMOC[8:6] = 0x2 => 6/1, Johnson, PFM ripple performance fine tune
	PMIC_DRV_SetData(0x47A     , 0x1C0     , 0x80      , 0x0);

	// RG_VSRAM_MD_NLIM_GATING[1:1] = 0x1 => 6/24,Johnson,for transient mode transition Vo ringing, performance concern.
	PMIC_DRV_SetData(0x47E     , 0x2       , 0x2       , 0x0);

	// RG_VSRAM_MD_PFM_RIP[6:4] = 0x1 => 6/1, Johnson, performance fine tune.(PFM ripple)
	PMIC_DRV_SetData(0x480     , 0x70      , 0x10      , 0x0);

	// RG_VSRAM_MD_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1, Johnson, performance improvement. (iq, mode transition and pfm ripple H/L
	PMIC_DRV_SetData(0x484     , 0x2       , 0x2       , 0x0);

	// RG_VMODEM_CSL[14:11] = 0xF => 6/1, Johnson, OC performance fine tune
	PMIC_DRV_SetData(0x48C     , 0x7800    , 0x7800    , 0x0);

	// RG_VMODEM_PFMOC[8:6] = 0x2 => 6/1, Johnson, PFM ripple performance fine tune
	PMIC_DRV_SetData(0x48E     , 0x1C0     , 0x80      , 0x0);

	// RG_VMODEM_NLIM_GATING[1:1] = 0x1 => 6/24,Johnson,for transient mode transition Vo ringing, performance concern.
	PMIC_DRV_SetData(0x492     , 0x2       , 0x2       , 0x0);

	// RG_VMODEM_PFM_RIP[6:4] = 0x1 => 6/1, Johnson, performance fine tune.(PFM ripple)
	PMIC_DRV_SetData(0x494     , 0x70      , 0x10      , 0x0);

	// RG_VMODEM_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1, Johnson, performance improvement. (iq, mode transition and pfm ripple H/L
	PMIC_DRV_SetData(0x498     , 0x2       , 0x2       , 0x0);

	// RG_VMD1_CSL[14:11] = 0xF => 6/1, Johnson, OC performance fine tune
	PMIC_DRV_SetData(0x4A0     , 0x7800    , 0x7800    , 0x0);

	// RG_VMD1_PFMOC[8:6] = 0x2 => 6/1, Johnson, PFM ripple performance fine tune
	PMIC_DRV_SetData(0x4A2     , 0x1C0     , 0x80      , 0x0);

	// RG_VMD1_NLIM_GATING[1:1] = 0x1 => 6/24,Johnson,for transient mode transition Vo ringing, performance concern.
	PMIC_DRV_SetData(0x4A6     , 0x2       , 0x2       , 0x0);

	// RG_VMD1_PFM_RIP[6:4] = 0x1 => 6/1, Johnson, performance fine tune.(PFM ripple)
	PMIC_DRV_SetData(0x4A8     , 0x70      , 0x10      , 0x0);

	// RG_VMD1_VDIFF_ENLOWIQ[1:1] = 0x1 => 6/1, Johnson, performance improvement. (iq, mode transition and pfm ripple H/L
	PMIC_DRV_SetData(0x4AC     , 0x2       , 0x2       , 0x0);
	
	// RG_VS1_PFMOC[8:6] = 0x6 => 7/15,Lan improve ZXOS Detect
    PMIC_DRV_SetData(0x4B6     , 0x1C0     , 0x180     , 0x0);

	// RG_VS1_RSV[15:0] = 0x10 => 6/2, Hung Mu Chou, OC Level Adjust
	PMIC_DRV_SetData(0x4C2     , 0xFFFF    , 0x10      , 0x0);
	
	// RG_VS2_CSL[14:11] = 0xF => 7/15,Lan improve ZXOS Detect
    PMIC_DRV_SetData(0x4C8     , 0x7800    , 0x7800    , 0x0);
 
    // RG_VS2_PFMOC[8:6] = 0x5 => 7/15,Lan improve ZXOS Detect
    PMIC_DRV_SetData(0x4CA     , 0x1C0     , 0x140     , 0x0);

	// RG_VS2_NLIM_GATING[1:1] = 0x1 => 6/1 Lan NLIM_Gating Enable
	PMIC_DRV_SetData(0x4CE     , 0x2       , 0x2       , 0x0);

	// RG_VS2_PFM_RIP[6:4] = 0x1 => 6/1 Lan PWM/PFM Output accuracy adjust
	PMIC_DRV_SetData(0x4D0     , 0x70      , 0x10      , 0x0);

	// RG_VPA_CC[1:0] = 0x3 => 6/24 Paul VPA compensation C adjust
	PMIC_DRV_SetData(0x4DC     , 0x3       , 0x3       , 0x0);

	// RG_VPA_CSMIR[5:4] = 0x2 => 8/27,Paul reduce 20% Current sensing ratio
    PMIC_DRV_SetData(0x4DC     , 0x30      , 0x20      , 0x0);
 
    // RG_VPA_AZC_EN[10:10] = 0x0 => 6/3,Paul
    PMIC_DRV_SetData(0x4DC     , 0x400     , 0x0       , 0x0);
 
    // RG_VPA_RZSEL[15:14] = 0x1 => 8/27,Paul Compensation resistance 310k>210K
    PMIC_DRV_SetData(0x4DC     , 0xC000    , 0x4000    , 0x0);

	// RG_VPA_MIN_PK[15:14] = 0x0 => 6/1 Paul MIN Peak Current 250mA to 100mA
	PMIC_DRV_SetData(0x4E0     , 0xC000    , 0x0       , 0x0);

	// RG_VPA_RSV2[15:8] = 0x88 => 8/10,Paul, Auto Change Slope compensation
    PMIC_DRV_SetData(0x4E2     , 0xFF00    , 0x8800    , 0x0);

	// BUCK_VCORE_VOSEL_CTRL[1:1] = 0x1 => 6/1,Tim,Sleep mode by HW Control
	PMIC_DRV_SetData(0x600     , 0x2       , 0x2       , 0x0);

	// BUCK_VCORE_SFCHG_FRATE[6:0] = 0x11 => 6/1,Tim,DVS Falling Slew Rate
	PMIC_DRV_SetData(0x606     , 0x7F      , 0x11      , 0x0);

	// BUCK_VCORE_SFCHG_RRATE[14:8] = 0x4 => 6/1,Tim,DVS Rising Slew Rate
	PMIC_DRV_SetData(0x606     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VCORE_VOSEL_SLEEP[6:0] = 0x10 => 6/1,Tim Sleep mode voltage for JADE(0.7V)
	PMIC_DRV_SetData(0x60C     , 0x7F      , 0x10      , 0x0);

	// BUCK_VCORE_TRANS_TD[1:0] = 0x3 => 6/1,Tim
	PMIC_DRV_SetData(0x612     , 0x3       , 0x3       , 0x0);

	// BUCK_VCORE_TRANS_CTRL[5:4] = 0x1 => 8/17,Tim
    PMIC_DRV_SetData(0x612     , 0x30      , 0x10      , 0x0);
 
    // BUCK_VCORE_VSLEEP_EN[8:8] = 0x1 => 6/1,Tim,Sleep mode by HW Control
    PMIC_DRV_SetData(0x612     , 0x100     , 0x100     , 0x0);

	// BUCK_VGPU_SFCHG_FRATE[6:0] = 0x11 => 6/1,Tim,DVS Falling Slew Rate
	PMIC_DRV_SetData(0x61A     , 0x7F      , 0x11      , 0x0);

	// BUCK_VGPU_SFCHG_RRATE[14:8] = 0x4 => 6/1,Tim,DVS Rising Slew Rate
	PMIC_DRV_SetData(0x61A     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VGPU_VOSEL_SLEEP[6:0] = 0x10 => 6/1,Tim Sleep mode voltage for JADE(0.7V)
	PMIC_DRV_SetData(0x620     , 0x7F      , 0x10      , 0x0);

	// BUCK_VGPU_TRANS_TD[1:0] = 0x3 => 6/1,Tim
	PMIC_DRV_SetData(0x626     , 0x3       , 0x3       , 0x0);

	// BUCK_VGPU_TRANS_CTRL[5:4] = 0x1 => 8/17,Tim
    PMIC_DRV_SetData(0x626     , 0x30      , 0x10      , 0x0);
 
	// BUCK_VMODEM_SFCHG_FRATE[6:0] = 0x11 => 6/1, Johnson,softchange for DVS/DVFS slew rate falling 2.0us/step
	PMIC_DRV_SetData(0x62E     , 0x7F      , 0x11      , 0x0);

	// BUCK_VMODEM_SFCHG_RRATE[14:8] = 0x4 => 6/1, Johnson,softchange for DVS/DVFS slew rate rising 0.5us/step
	PMIC_DRV_SetData(0x62E     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VMODEM_VOSEL_SLEEP[6:0] = 0x10 => 6/1, Johnson SRCLKEN sleep V is 0.7V
	PMIC_DRV_SetData(0x634     , 0x7F      , 0x10      , 0x0);

	// BUCK_VMODEM_TRANS_TD[1:0] = 0x3 => 6/1, Johnson, falling for DVFS/DVS discharge extension time control
	PMIC_DRV_SetData(0x63A     , 0x3       , 0x3       , 0x0);

	// BUCK_VMODEM_TRANS_CTRL[5:4] = 0x1 => 6/1, Johnson, falling for DVFS/DVS discharge slew rate control
	PMIC_DRV_SetData(0x63A     , 0x30      , 0x10      , 0x0);

	// BUCK_VMODEM_VSLEEP_EN[8:8] = 0x1 => 6/1, Johnson, r2r power down with srclken sleep hw mode
	PMIC_DRV_SetData(0x63A     , 0x100     , 0x100     , 0x0);

	// BUCK_VMD1_SFCHG_FRATE[6:0] = 0x11 => 6/1, Johnson,softchange for DVS/DVFS slew rate falling 2.0us/step
	PMIC_DRV_SetData(0x642     , 0x7F      , 0x11      , 0x0);

	// BUCK_VMD1_SFCHG_RRATE[14:8] = 0x4 => 6/1, Johnson,softchange for DVS/DVFS slew rate rising 0.5us/step
	PMIC_DRV_SetData(0x642     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VMD1_VOSEL_ON[6:0] = 0x30 => 6/1, Johnson SRCLKEN normal v is 0.9V
	PMIC_DRV_SetData(0x646     , 0x7F      , 0x30      , 0x0);

	// BUCK_VMD1_VOSEL_SLEEP[6:0] = 0x10 => 6/1, Johnson SRCLKEN sleep V is 0.7V
	PMIC_DRV_SetData(0x648     , 0x7F      , 0x10      , 0x0);

	// BUCK_VMD1_TRANS_TD[1:0] = 0x3 => 6/1, Johnson, falling for DVFS/DVS discharge extension time control
	PMIC_DRV_SetData(0x64E     , 0x3       , 0x3       , 0x0);

	// BUCK_VMD1_TRANS_CTRL[5:4] = 0x1 => 6/1, Johnson, falling for DVFS/DVS discharge slew rate control
	PMIC_DRV_SetData(0x64E     , 0x30      , 0x10      , 0x0);

	// BUCK_VMD1_VSLEEP_EN[8:8] = 0x1 => 6/1, Johnson, r2r power down with srclken sleep hw mode, after vo sel
	PMIC_DRV_SetData(0x64E     , 0x100     , 0x100     , 0x0);

	// BUCK_VSRAM_MD_SFCHG_FRATE[6:0] = 0x11 => 6/1, Johnson,softchange for DVS/DVFS slew rate falling 2.0us/step
	PMIC_DRV_SetData(0x656     , 0x7F      , 0x11      , 0x0);

	// BUCK_VSRAM_MD_SFCHG_RRATE[14:8] = 0x4 => 6/1, Johnson,softchange for DVS/DVFS slew rate rising 0.5us/step
	PMIC_DRV_SetData(0x656     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VSRAM_MD_VOSEL_SLEEP[6:0] = 0x10 => 6/1, Johnson SRCLKEN sleep V is 0.7V
	PMIC_DRV_SetData(0x65C     , 0x7F      , 0x10      , 0x0);

	// BUCK_VSRAM_MD_TRANS_TD[1:0] = 0x3 => 6/1, Johnson, falling for DVFS/DVS discharge extension time control
	PMIC_DRV_SetData(0x662     , 0x3       , 0x3       , 0x0);

	// BUCK_VSRAM_MD_TRANS_CTRL[5:4] = 0x1 => 6/1, Johnson, falling for DVFS/DVS discharge slew rate control
	PMIC_DRV_SetData(0x662     , 0x30      , 0x10      , 0x0);

	// BUCK_VSRAM_MD_VSLEEP_EN[8:8] = 0x1 => 6/1, Johnson, r2r power down with srclken sleep hw mode, after vo sel
	PMIC_DRV_SetData(0x662     , 0x100     , 0x100     , 0x0);

	// BUCK_VS1_VSLEEP_EN[8:8] = 0x1 => 6/1,Lan,r2r power down with srclken sleep hw mode
	PMIC_DRV_SetData(0x676     , 0x100     , 0x100     , 0x0);

	// BUCK_VS2_VSLEEP_EN[8:8] = 0x1 => 6/1,Lan,r2r power down with srclken sleep hw mode
	PMIC_DRV_SetData(0x68A     , 0x100     , 0x100     , 0x0);

	// BUCK_VPA_SFCHG_FRATE[6:0] = 0x0 => 6/3,Paul
	PMIC_DRV_SetData(0x692     , 0x7F      , 0x0       , 0x0);

	// BUCK_VPA_SFCHG_RRATE[14:8] = 0x1 => 6/3,Paul
	PMIC_DRV_SetData(0x692     , 0x7F00    , 0x100     , 0x0);

	// BUCK_VPA_TRANS_TD[1:0] = 0x0 => 624,Paul
	PMIC_DRV_SetData(0x69E     , 0x3       , 0x0       , 0x0);

	// BUCK_VSRAM_PROC_VOSEL_CTRL[1:1] = 0x1 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6A0     , 0x2       , 0x2       , 0x0);

	// BUCK_VSRAM_PROC_SFCHG_FRATE[6:0] = 0x11 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6A6     , 0x7F      , 0x11      , 0x0);

	// BUCK_VSRAM_PROC_SFCHG_RRATE[14:8] = 0x4 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6A6     , 0x7F00    , 0x400     , 0x0);

	// BUCK_VSRAM_PROC_VOSEL_SLEEP[6:0] = 0x35 => 6/5,Chia Lin(Sleep mode voltage 0.93125V)
	PMIC_DRV_SetData(0x6AC     , 0x7F      , 0x35      , 0x0);

	// BUCK_VSRAM_PROC_TRANS_TD[1:0] = 0x3 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6B2     , 0x3       , 0x3       , 0x0);

	// BUCK_VSRAM_PROC_TRANS_CTRL[5:4] = 0x1 => 6/5,Chia Lin
	PMIC_DRV_SetData(0x6B2     , 0x30      , 0x10      , 0x0);

	 // BUCK_VSRAM_PROC_VSLEEP_EN[8:8] = 0x0 => 7/15,Chia Lin
    PMIC_DRV_SetData(0x6B2     , 0x100     , 0x0       , 0x0);
 
    // RG_VA18_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
    PMIC_DRV_SetData(0xA00     , 0x4       , 0x4       , 0x0);
 
    // RG_VA18_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
    PMIC_DRV_SetData(0xA00     , 0xE0      , 0x0       , 0x0);

	// RG_VA18_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA02     , 0x200     , 0x200     , 0x0);

	// RG_VTCXO24_ON_CTRL[3:3] = 0x1 => 6/2,CW
	//PMIC_DRV_SetData(0xA04     , 0x8       , 0x8       , 0x0);

	// RG_VTCXO24_SRCLK_EN_SEL[13:11] = 0x0 => 6/2,CW,RF Power Control request
	//PMIC_DRV_SetData(0xA04     , 0x3800    , 0x0       , 0x0);

	// RG_VTCXO24_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA06     , 0x200     , 0x200     , 0x0);

	// RG_VTCXO28_ON_CTRL[3:3] = 0x1 => 6/2,CW
	PMIC_DRV_SetData(0xA08     , 0x8       , 0x8       , 0x0);

	// RG_VTCXO28_SRCLK_EN_SEL[13:11] = 0x1 => 6/2,CW,RF Power Control request
	PMIC_DRV_SetData(0xA08     , 0x3800    , 0x800     , 0x0);

	// RG_VTCXO28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA0A     , 0x200     , 0x200     , 0x0);

	// RG_VCN28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA0E     , 0x200     , 0x200     , 0x0);

	 // RG_VCAMA_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
    PMIC_DRV_SetData(0xA14     , 0x200     , 0x200     , 0x0);
 
    // RG_VUSB33_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
    PMIC_DRV_SetData(0xA16     , 0x4       , 0x4       , 0x0);
 
    // RG_VUSB33_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
    PMIC_DRV_SetData(0xA16     , 0xE0      , 0x0       , 0x0);

	// RG_VUSB33_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA18     , 0x200     , 0x200     , 0x0);

	// RG_VSIM1_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA1E     , 0x200     , 0x200     , 0x0);

	// RG_VSIM2_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA24     , 0x200     , 0x200     , 0x0);

	// RG_VEMC_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA2A     , 0x200     , 0x200     , 0x0);

	// RG_VMCH_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA30     , 0x200     , 0x200     , 0x0);
	
	// RG_VIO28_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
    PMIC_DRV_SetData(0xA34     , 0x4       , 0x4       , 0x0);
 
    // RG_VIO28_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
    PMIC_DRV_SetData(0xA34     , 0xE0      , 0x0       , 0x0);

	// RG_VIO28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA36     , 0x200     , 0x200     , 0x0);

	// RG_VIBR_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA3C     , 0x200     , 0x200     , 0x0);

	// RG_VRF18_ON_CTRL[3:3] = 0x1 => 6/2,CW
	PMIC_DRV_SetData(0xA46     , 0x8       , 0x8       , 0x0);

	// RG_VRF18_SRCLK_EN_SEL[13:11] = 0x1 => 6/2,CW,RF Power Control request
	PMIC_DRV_SetData(0xA46     , 0x3800    , 0x800     , 0x0);

	// RG_VRF18_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA48     , 0x200     , 0x200     , 0x0);
	
	// RG_VIO18_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
    PMIC_DRV_SetData(0xA4C     , 0x4       , 0x4       , 0x0);
 
    // RG_VIO18_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
    PMIC_DRV_SetData(0xA4C     , 0xE0      , 0x0       , 0x0);

	// RG_VIO18_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA4E     , 0x200     , 0x200     , 0x0);

	// RG_VCN18_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA54     , 0x200     , 0x200     , 0x0);

	// RG_VCAMIO_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA5A     , 0x200     , 0x200     , 0x0);

	// RG_VXO22_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA66     , 0x200     , 0x200     , 0x0);

	// RG_VRF12_ON_CTRL[3:3] = 0x1 => 6/2,CW
	PMIC_DRV_SetData(0xA68     , 0x8       , 0x8       , 0x0);

	// RG_VRF12_SRCLK_EN_SEL[13:11] = 0x1 => 6/2,CW,RF Power Control request
	PMIC_DRV_SetData(0xA68     , 0x3800    , 0x800     , 0x0);

	// RG_VA10_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
    PMIC_DRV_SetData(0xA6E     , 0x4       , 0x4       , 0x0);
 
    // RG_VA10_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
    PMIC_DRV_SetData(0xA6E     , 0xE0      , 0x0       , 0x0);

	// RG_VDRAM_EN[1:1] = 0x1 => 6/5,Chia Lin Same as Fly suspend mode
	PMIC_DRV_SetData(0xA74     , 0x2       , 0x2       , 0x0);

	// RG_VDRAM_MODE_CTRL[2:2] = 0x1 => 6/5,Chia Lin Same as Fly suspend mode
	PMIC_DRV_SetData(0xA74     , 0x4       , 0x4       , 0x0);

	// RG_VDRAM_ON_CTRL[3:3] = 0x0 => 6/5,Chia Lin Same as Fly suspend mode
	PMIC_DRV_SetData(0xA74     , 0x8       , 0x0       , 0x0);

	// RG_VDRAM_SRCLK_MODE_SEL[7:5] = 0x0 => 6/5,Chia Lin Same as Fly suspend mode
	PMIC_DRV_SetData(0xA74     , 0xE0      , 0x0       , 0x0);

	// RG_VMIPI_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA7C     , 0x200     , 0x200     , 0x0);

	// RG_VGP3_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA82     , 0x200     , 0x200     , 0x0);

	// RG_VBIF28_ON_CTRL[3:3] = 0x0 => 6/1,Seven,
	PMIC_DRV_SetData(0xA86     , 0x8       , 0x0       , 0x0);

	// RG_VBIF28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA88     , 0x200     , 0x200     , 0x0);

	// RG_VEFUSE_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA8E     , 0x200     , 0x200     , 0x0);

	// RG_VCN33_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA94     , 0x200     , 0x200     , 0x0);
	
	// RG_VLDO28_MODE_CTRL[2:2] = 0x1 => 7/28 Chia Lin
    PMIC_DRV_SetData(0xA9C     , 0x4       , 0x4       , 0x0);
 
    // RG_VLDO28_SRCLK_MODE_SEL[7:5] = 0x0 => 7/28 Chia Lin
    PMIC_DRV_SetData(0xA9C     , 0xE0      , 0x0       , 0x0);

	// RG_VLDO28_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xA9E     , 0x200     , 0x200     , 0x0);

	// RG_VMC_OCFB_EN[9:9] = 0x1 => 6/1 Fandy Enable OCFB
	PMIC_DRV_SetData(0xAAC     , 0x200     , 0x200     , 0x0);

	// RG_VA10_VOSEL[10:8] = 0x2 => 6/8,KH for JADE VA10=1V
	PMIC_DRV_SetData(0xB10     , 0x700     , 0x200     , 0x0);

	// RG_VDRAM_RSV[9:2] = 0xF0 => 6/1 Fandy  improve Fast Transient
	PMIC_DRV_SetData(0xB24     , 0x3FC     , 0x3C0     , 0x0);

	// FG_SLP_EN[8:8] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xCC4     , 0x100     , 0x100     , 0x0);

	// FG_ZCV_DET_EN[9:9] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xCC4     , 0x200     , 0x200     , 0x0);

	// FG_SLP_CUR_TH[15:0] = 0x1F => 6/1,Filby
	PMIC_DRV_SetData(0xCC8     , 0xFFFF    , 0x1F      , 0x0);

	// FG_SLP_TIME[7:0] = 0x14 => 6/1,Filby
	PMIC_DRV_SetData(0xCCA     , 0xFF      , 0x14      , 0x0);

	// FG_DET_TIME[15:8] = 0xFF => 6/1,Filby
	PMIC_DRV_SetData(0xCCC     , 0xFF00    , 0xFF00    , 0x0);

	// FG_ZCV_CAR_TH_33_19[14:0] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xCE2     , 0x7FFF    , 0x1       , 0x0);

	// FG_ZCV_CAR_TH_18_03[15:0] = 0xBCAC => 6/1,Filby
	PMIC_DRV_SetData(0xCE4     , 0xFFFF    , 0xBCAC    , 0x0);

	// AUXADC_CK_AON_GPS[13:13] = 0x0 => Check with Peter
	PMIC_DRV_SetData(0xEA2     , 0x2000    , 0x0       , 0x0);

	// AUXADC_CK_AON_MD[14:14] = 0x0 => Check with Peter
	PMIC_DRV_SetData(0xEA2     , 0x4000    , 0x0       , 0x0);

	// AUXADC_CK_AON[15:15] = 0x0 => Check with Peter
	PMIC_DRV_SetData(0xEA2     , 0x8000    , 0x0       , 0x0);

	// AUXADC_AVG_NUM_SEL[11:0] = 0x83 => 6/1,Filby,Resolution Adjust
	PMIC_DRV_SetData(0xEAA     , 0xFFF     , 0x83      , 0x0);

	// AUXADC_AVG_NUM_SEL_LBAT[13:13] = 0x0 => 8/3,Filby,Resolution Adjust
    PMIC_DRV_SetData(0xEAA     , 0x2000    , 0x0       , 0x0);

	// AUXADC_AVG_NUM_SEL_WAKEUP[15:15] = 0x1 => 6/1,Filby,Resolution Adjust
	PMIC_DRV_SetData(0xEAA     , 0x8000    , 0x8000    , 0x0);

	// AUXADC_TRIM_CH2_SEL[5:4] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0x30      , 0x10      , 0x0);

	// AUXADC_TRIM_CH3_SEL[7:6] = 0x3 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0xC0      , 0xC0      , 0x0);

	// AUXADC_TRIM_CH4_SEL[9:8] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0x300     , 0x100     , 0x0);

	// AUXADC_TRIM_CH5_SEL[11:10] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0xC00     , 0x400     , 0x0);

	// AUXADC_TRIM_CH6_SEL[13:12] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0x3000    , 0x1000    , 0x0);

	// AUXADC_TRIM_CH7_SEL[15:14] = 0x2 => 6/1,Filby
	PMIC_DRV_SetData(0xEB2     , 0xC000    , 0x8000    , 0x0);

	// AUXADC_TRIM_CH8_SEL[1:0] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB4     , 0x3       , 0x1       , 0x0);

	// AUXADC_TRIM_CH9_SEL[3:2] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB4     , 0xC       , 0x4       , 0x0);

	// AUXADC_TRIM_CH10_SEL[5:4] = 0x1 => 6/1,Filby
	PMIC_DRV_SetData(0xEB4     , 0x30      , 0x10      , 0x0);

	// AUXADC_TRIM_CH11_SEL[7:6] = 0x3 => 6/1,Filby
	PMIC_DRV_SetData(0xEB4     , 0xC0      , 0xC0      , 0x0);

	// AUXADC_START_SHADE_EN[14:14] = 0x1 => TBD(Wei-Lin)
	PMIC_DRV_SetData(0xEC6     , 0x4000    , 0x4000    , 0x0);

	// AUXADC_MDBG_DET_PRD[9:0] = 0x40 => 6/2,Dennis
	PMIC_DRV_SetData(0xF16     , 0x3FF     , 0x40      , 0x0);

	// AUXADC_MDBG_DET_EN[15:15] = 0x1 => 6/2,Dennis
	PMIC_DRV_SetData(0xF16     , 0x8000    , 0x8000    , 0x0);

	// AUXADC_MDRT_DET_PRD[9:0] = 0x40 => 6/2,Dennis
	PMIC_DRV_SetData(0xF1C     , 0x3FF     , 0x40      , 0x0);

	// AUXADC_MDRT_DET_EN[15:15] = 0x1 => 6/2,Dennis
	PMIC_DRV_SetData(0xF1C     , 0x8000    , 0x8000    , 0x0);

	// AUXADC_MDRT_DET_WKUP_EN[2:2] = 0x1 => 6/2,Dennis
	PMIC_DRV_SetData(0xF20     , 0x4       , 0x4       , 0x0);

	// RG_VCDT_HV_VTH[7:4] = 0xB => Zax: VCDT_HV_th=7V (customized setting for VBUS OVP)
	PMIC_DRV_SetData(0xF7A     , 0xF0      , 0xB0      , 0x0);

	// RG_VBAT_OV_VTH[4:1] = 0x4 => Zax: 4.45V for 4.35v battery (customized setting based on CV_VTH, shall set OV_VTH=CV_VTH+100mV)

	PMIC_DRV_SetData(0xF84     , 0x1E      , 0x8       , 0x0);

	// RG_CHRWDT_TD[3:0] = 0x3 => Zax:WDT=32s
	PMIC_DRV_SetData(0xF92     , 0xF       , 0x3       , 0x0);

	// RG_BC11_RST[1:1] = 0x1 => Zax:Disable BC1.1 timer
	PMIC_DRV_SetData(0xFA0     , 0x2       , 0x2       , 0x0);

	// RG_CSDAC_STP_DEC[6:4] = 0x0 => Zax:Reduce ICHG current ripple
	PMIC_DRV_SetData(0xFA4     , 0x70      , 0x0       , 0x0);

	// RG_CSDAC_MODE[2:2] = 0x1 => Zax:Align 6323
	PMIC_DRV_SetData(0xFAA     , 0x4       , 0x4       , 0x0);

	// RG_HWCV_EN[6:6] = 0x1 => Zax:Align 6323
	PMIC_DRV_SetData(0xFAA     , 0x40      , 0x40      , 0x0);

	// RG_ULC_DET_EN[7:7] = 0x1 => Zax: need to enable for supporting bad TA
	PMIC_DRV_SetData(0xFAA     , 0x80      , 0x80      , 0x0);

}
#endif
