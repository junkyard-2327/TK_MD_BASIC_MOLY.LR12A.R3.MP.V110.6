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
 *     dcl_pmic6337_init.c
 *
 * Project:
 * --------
 *     MOLY Software
 *
 * Description:
 * ------------
 *     This file is for PMIC 6337
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
 *
 * removed!
 * removed!
 *
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

#include "init.h"
#include "dcl.h"

extern DCL_UINT32 DRV_Read_PMIC_Data(DCL_UINT32 pmic_addr);
extern void DRV_Write_PMIC_Data(DCL_UINT32 pmic_addr, DCL_UINT32 value);

static void PMIC_DRV_SetData(DCL_UINT32 addr, DCL_UINT32 bitmask, DCL_UINT16 value, DCL_UINT32 bank)
{
   DCL_UINT32 temp;
   addr |= (bank << 31);
   temp = (~(bitmask)) & DRV_Read_PMIC_Data(addr);
   temp |= ((value) & (bitmask));
   DRV_Write_PMIC_Data(addr,temp);
}

void dcl_pmic6337_modem_only_init(void)
{
	// RG_SRCLKEN_IN0_HW_MODE[4:4] = 0x1 => Joseph/ OSC CLK wi SRCLKEN
	PMIC_DRV_SetData(0x8006    , 0x10      , 0x10      , 0x0);

	// RG_VOWEN_HW_MODE[5:5] = 0x1 => Joseph/ OSC CLK wi SRCLKEN
	PMIC_DRV_SetData(0x8006    , 0x20      , 0x20      , 0x0);

	// RG_OSC_SEL_HW_MODE[6:6] = 0x1 => Joseph/ OSC CLK wi SRCLKEN
	PMIC_DRV_SetData(0x8006    , 0x40      , 0x40      , 0x0);

	// RG_TRIM_75K_CK_PDN[4:4] = 0x1 => Joseph/power down (FT trim use)
	PMIC_DRV_SetData(0x8200    , 0x10      , 0x10      , 0x0);

	// RG_AUDIF_CK_PDN[11:11] = 0x1 => Joseph/power down
	PMIC_DRV_SetData(0x8200    , 0x800     , 0x800     , 0x0);

	// RG_INTRP_PRE_OC_CK_PDN[3:3] = 0x1 => Joseph/power down (37 no use)
	PMIC_DRV_SetData(0x8206    , 0x8       , 0x8       , 0x0);

	// RG_LDO_CALI_75K_CK_PDN[8:8] = 0x1 => Joseph/power down (37 no use)
	PMIC_DRV_SetData(0x8206    , 0x100     , 0x100     , 0x0);

	// RG_ACCDET_CK_PDN[11:11] = 0x0 => Joseph/power on (ACCDET use)
	PMIC_DRV_SetData(0x8206    , 0x800     , 0x0       , 0x0);

	// RG_REG_CK_PDN_HWEN[7:7] = 0x1 => Joseph/RG CLK HW
	PMIC_DRV_SetData(0x8218    , 0x80      , 0x80      , 0x0);

#if 0
/* under construction !*/
/* under construction !*/
#endif
	// RG_VA18_HW0_OP_EN[1:1] = 0x1 => Joseph/LDO LP wi SRCLKEN
	PMIC_DRV_SetData(0x9008    , 0x2       , 0x2       , 0x0);

	// RG_VA18_HW0_OP_CFG[1:1] = 0x1 => Joseph/LDO LP wi SRCLKEN
	PMIC_DRV_SetData(0x900E    , 0x2       , 0x2       , 0x0);

	// AUXADC_AVG_NUM_LARGE[5:3] = 0x7 => Jyun-Jia/256 average
	PMIC_DRV_SetData(0x943A    , 0x38      , 0x38      , 0x0);

	// AUXADC_TRIM_CH3_SEL[7:6] = 0x0 => Jyun-Jia/ efuse ch0
	PMIC_DRV_SetData(0x9444    , 0xC0      , 0x0       , 0x0);

	// AUXADC_TRIM_CH4_SEL[9:8] = 0x1 => Jyun-Jia/ efuse ch4
	PMIC_DRV_SetData(0x9444    , 0x300     , 0x100     , 0x0);

	// AUXADC_TRIM_CH5_SEL[11:10] = 0x2 => Jyun-Jia/ efuse ch7
	PMIC_DRV_SetData(0x9444    , 0xC00     , 0x800     , 0x0);

	// AUXADC_TRIM_CH6_SEL[13:12] = 0x0 => Jyun-Jia/ efuse ch0
	PMIC_DRV_SetData(0x9444    , 0x3000    , 0x0       , 0x0);

	// AUXADC_TRIM_CH7_SEL[15:14] = 0x2 => Jyun-Jia/ efuse ch7
	PMIC_DRV_SetData(0x9444    , 0xC000    , 0x8000    , 0x0);

	// AUXADC_TRIM_CH9_SEL[3:2] = 0x2 => Jyun-Jia/ efuse ch7
	PMIC_DRV_SetData(0x9446    , 0xC       , 0x8       , 0x0);

	// AUXADC_TRIM_CH12_SEL[9:8] = 0x2 => Jyun-Jia/ efuse ch7
	PMIC_DRV_SetData(0x9446    , 0x300     , 0x200     , 0x0);

	// GPIO_PULLEN0[10:0] = 0x0 => Joseph/ no pull
	PMIC_DRV_SetData(0x9C06    , 0x7FF     , 0x0       , 0x0);

	// GPIO8_MODE[11:9] = 0x1 => Joseph/ MTKIF
	PMIC_DRV_SetData(0x9C28    , 0xE00     , 0x200     , 0x0);

	// GPIO9_MODE[14:12] = 0x1 => Joseph/ MTKIF
	PMIC_DRV_SetData(0x9C28    , 0x7000    , 0x1000    , 0x0);

}
