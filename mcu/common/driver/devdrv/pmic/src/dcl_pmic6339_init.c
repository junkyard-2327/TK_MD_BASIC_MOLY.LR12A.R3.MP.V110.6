/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2006
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
 *   pmu_init.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file provide for pmu initial setting
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
#include "init.h"
#include "dcl.h"
#include "drv_bsi.h"

//#define PMIC_INIT_FOR_DRVTEST

static void PMIC_DRV_SetData(DCL_UINT32 addr, DCL_UINT32 bitmask, DCL_UINT16 value, DCL_UINT32 bank)
{
	DCL_UINT32 temp;
	temp = (~(bitmask)) & drv_bsi_pmic6339_reg_read(addr);
	temp |= ((value) & (bitmask));
	drv_bsi_pmic6339_reg_write(addr,temp);
}

//MT6339_E1_20130722_I_phone_initial_setting_LPG.txt
void dcl_pmic_internal_init(void)
{
#if defined(PMIC_INIT_PHONE)
//debug_MT6339 Register Mapping E1 20130724_I_phone_initial_setting_LPG.txt
	{
	//<ECO_E1>
	//address,mask,value,ap shift,ap mask,ap value,    bank
		PMIC_DRV_SetData(0x0010,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0015,0x3,0x2,0x0); // UVLO 2.6V
		PMIC_DRV_SetData(0x0021,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0024,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0024,0x20,0x0,0x0);
		PMIC_DRV_SetData(0x0029,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x002A,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x002B,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0032,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0038,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x003B,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0044,0x40,0x40,0x0);
		PMIC_DRV_SetData(0x0044,0x80,0x0,0x0);
		PMIC_DRV_SetData(0x0048,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0049,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004B,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004C,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004E,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0056,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0057,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0066,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0066,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x0066,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x0066,0x8,0x0,0x0);
		PMIC_DRV_SetData(0x0066,0x10,0x0,0x0);
		PMIC_DRV_SetData(0x0067,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0067,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x006C,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x007C,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x4,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x10,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x20,0x0,0x0);
		PMIC_DRV_SetData(0x007D,0x40,0x0,0x0);
		PMIC_DRV_SetData(0x007D,0x80,0x0,0x0);
		PMIC_DRV_SetData(0x0081,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0081,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0081,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x0081,0x8,0x8,0x0);
		PMIC_DRV_SetData(0x0081,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0090,0x100,0x0,0x0);
		PMIC_DRV_SetData(0x0090,0x200,0x200,0x0);
		PMIC_DRV_SetData(0x0090,0x4000,0x4000,0x0);
		PMIC_DRV_SetData(0x0090,0x8000,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0095,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x80,0x80,0x0);
		PMIC_DRV_SetData(0x0095,0x100,0x100,0x0);
		PMIC_DRV_SetData(0x0095,0x200,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x8000,0x8000,0x0);
		PMIC_DRV_SetData(0x009C,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x00AA,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x00C0,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x00C0,0x40,0x40,0x0);
		PMIC_DRV_SetData(0x00C0,0x1000,0x1000,0x0);
		PMIC_DRV_SetData(0x00C0,0x4000,0x0,0x0);
		PMIC_DRV_SetData(0x00C2,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x00C2,0x100,0x100,0x0);
		PMIC_DRV_SetData(0x00C2,0x400,0x400,0x0);
		PMIC_DRV_SetData(0x00C2,0x4000,0x4000,0x0);
		PMIC_DRV_SetData(0x00C8,0x20,0x20,0x0);
		PMIC_DRV_SetData(0x00D6,0x10,0x10,0x0);
	}
#elif defined(PMIC_INIT_DONGLE)
//debug_MT6339 Register Mapping E1 20130724_I_dongle_intial_setting_LPG.txt
	{
	//<ECO_E1>
	//address,mask,value,ap shift,ap mask,ap value,    bank
		PMIC_DRV_SetData(0x0010,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0021,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0024,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0024,0x20,0x0,0x0);
		PMIC_DRV_SetData(0x0029,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x002A,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x002B,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x003B,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0044,0x40,0x40,0x0);
		PMIC_DRV_SetData(0x0044,0x80,0x0,0x0);
		PMIC_DRV_SetData(0x0048,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0049,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004B,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004C,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004E,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0054,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0056,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0057,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0066,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0066,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0066,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x0066,0x8,0x8,0x0);
		PMIC_DRV_SetData(0x0066,0x10,0x0,0x0);
		PMIC_DRV_SetData(0x0067,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0067,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x006C,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x0090,0x100,0x0,0x0);
		PMIC_DRV_SetData(0x0090,0x200,0x200,0x0);
		PMIC_DRV_SetData(0x0090,0x4000,0x4000,0x0);
		PMIC_DRV_SetData(0x0090,0x8000,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0095,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x80,0x80,0x0);
		PMIC_DRV_SetData(0x0095,0x100,0x100,0x0);
		PMIC_DRV_SetData(0x0095,0x200,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x8000,0x8000,0x0);
		PMIC_DRV_SetData(0x009C,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x00AA,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x00C0,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x00C0,0x40,0x40,0x0);
		PMIC_DRV_SetData(0x00C0,0x1000,0x1000,0x0);
		PMIC_DRV_SetData(0x00C0,0x4000,0x0,0x0);
		PMIC_DRV_SetData(0x00C2,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x00C2,0x100,0x100,0x0);
		PMIC_DRV_SetData(0x00C2,0x400,0x400,0x0);
		PMIC_DRV_SetData(0x00C2,0x4000,0x4000,0x0);
		PMIC_DRV_SetData(0x00C8,0x20,0x20,0x0);
		PMIC_DRV_SetData(0x00D6,0x10,0x10,0x0);
	}
#elif defined(PMIC_INIT_DONGLE_ON_EVB)
//debug_MT6339 Register Mapping E1 20130724_I_EVB_dongle_initial_setting_LPG.txt
	{
	//<ECO_E1>
	//address,mask,value,ap shift,ap mask,ap value,    bank
		PMIC_DRV_SetData(0x0010,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0021,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0024,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0024,0x20,0x0,0x0);
		PMIC_DRV_SetData(0x0029,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x002A,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x002B,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x003B,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0044,0x40,0x40,0x0);
		PMIC_DRV_SetData(0x0044,0x80,0x0,0x0);
		PMIC_DRV_SetData(0x0048,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0049,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004B,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004C,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004E,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0056,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0057,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0065,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0065,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x0065,0x4,0x0,0x0);
		PMIC_DRV_SetData(0x0065,0x8,0x8,0x0);
		PMIC_DRV_SetData(0x0065,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0066,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0066,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0066,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x0066,0x8,0x8,0x0);
		PMIC_DRV_SetData(0x0066,0x10,0x0,0x0);
		PMIC_DRV_SetData(0x0067,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0067,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x006C,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x007C,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x4,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x10,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x20,0x0,0x0);
		PMIC_DRV_SetData(0x007D,0x40,0x0,0x0);
		PMIC_DRV_SetData(0x007D,0x80,0x0,0x0);
		PMIC_DRV_SetData(0x0081,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0081,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0081,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x0081,0x8,0x8,0x0);
		PMIC_DRV_SetData(0x0081,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0090,0x100,0x0,0x0);
		PMIC_DRV_SetData(0x0090,0x200,0x200,0x0);
		PMIC_DRV_SetData(0x0090,0x4000,0x4000,0x0);
		PMIC_DRV_SetData(0x0090,0x8000,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0095,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x80,0x80,0x0);
		PMIC_DRV_SetData(0x0095,0x100,0x100,0x0);
		PMIC_DRV_SetData(0x0095,0x200,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x8000,0x8000,0x0);
		PMIC_DRV_SetData(0x009C,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x00AA,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x00C0,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x00C0,0x40,0x40,0x0);
		PMIC_DRV_SetData(0x00C0,0x1000,0x1000,0x0);
		PMIC_DRV_SetData(0x00C0,0x4000,0x0,0x0);
		PMIC_DRV_SetData(0x00C2,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x00C2,0x100,0x100,0x0);
		PMIC_DRV_SetData(0x00C2,0x400,0x400,0x0);
		PMIC_DRV_SetData(0x00C2,0x4000,0x4000,0x0);
		PMIC_DRV_SetData(0x00C8,0x20,0x20,0x0);
		PMIC_DRV_SetData(0x00D6,0x10,0x10,0x0);
	}
#elif defined(PMIC_INIT_ROUTER_ON_EVB)
//debug_MT6339 Register Mapping E1 20130724_I_EVB_hotspot_initial_setting_LPG.txt
	{
	//<ECO_E1>
	//address,mask,value,ap shift,ap mask,ap value,    bank
		PMIC_DRV_SetData(0x0010,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0021,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0024,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0024,0x20,0x0,0x0);
		PMIC_DRV_SetData(0x0029,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x002A,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x002B,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x003B,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0044,0x40,0x40,0x0);
		PMIC_DRV_SetData(0x0044,0x80,0x0,0x0);
		PMIC_DRV_SetData(0x0048,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0049,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004B,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004C,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004E,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0056,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0057,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0065,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0065,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x0065,0x4,0x0,0x0);
		PMIC_DRV_SetData(0x0065,0x8,0x8,0x0);
		PMIC_DRV_SetData(0x0065,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0066,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0066,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0066,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x0066,0x8,0x8,0x0);
		PMIC_DRV_SetData(0x0066,0x10,0x0,0x0);
		PMIC_DRV_SetData(0x0067,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0067,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x006C,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x007C,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x4,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x10,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x20,0x0,0x0);
		PMIC_DRV_SetData(0x007D,0x40,0x0,0x0);
		PMIC_DRV_SetData(0x007D,0x80,0x0,0x0);
		PMIC_DRV_SetData(0x0081,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0081,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0081,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x0081,0x8,0x8,0x0);
		PMIC_DRV_SetData(0x0081,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0090,0x100,0x0,0x0);
		PMIC_DRV_SetData(0x0090,0x200,0x200,0x0);
		PMIC_DRV_SetData(0x0090,0x4000,0x4000,0x0);
		PMIC_DRV_SetData(0x0090,0x8000,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0095,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x80,0x80,0x0);
		PMIC_DRV_SetData(0x0095,0x100,0x100,0x0);
		PMIC_DRV_SetData(0x0095,0x200,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x8000,0x8000,0x0);
		PMIC_DRV_SetData(0x009C,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x00AA,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x00C0,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x00C0,0x40,0x40,0x0);
		PMIC_DRV_SetData(0x00C0,0x1000,0x1000,0x0);
		PMIC_DRV_SetData(0x00C0,0x4000,0x0,0x0);
		PMIC_DRV_SetData(0x00C2,0x100,0x100,0x0);
		PMIC_DRV_SetData(0x00C2,0x400,0x400,0x0);
		PMIC_DRV_SetData(0x00C2,0x4000,0x4000,0x0);
		PMIC_DRV_SetData(0x00C8,0x20,0x20,0x0);
		PMIC_DRV_SetData(0x00D6,0x10,0x10,0x0);
	}
#elif defined(PMIC_INIT_PHONE_ON_EVB)
//debug_MT6339 Register Mapping E1 20130724_I_EVB_phone_initial_setting_LPG.txt
	{
	//<ECO_E1>
	//address,mask,value,ap shift,ap mask,ap value,    bank
		PMIC_DRV_SetData(0x0010,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0021,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0024,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0024,0x20,0x0,0x0);
		PMIC_DRV_SetData(0x0029,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x002A,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x002B,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x003B,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0044,0x40,0x40,0x0);
		PMIC_DRV_SetData(0x0044,0x80,0x0,0x0);
		PMIC_DRV_SetData(0x0048,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0049,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004B,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004C,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004E,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0056,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0057,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0065,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0065,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x0065,0x4,0x0,0x0);
		PMIC_DRV_SetData(0x0065,0x8,0x8,0x0);
		PMIC_DRV_SetData(0x0065,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0066,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0066,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x0066,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x0066,0x8,0x8,0x0);
		PMIC_DRV_SetData(0x0066,0x10,0x0,0x0);
		PMIC_DRV_SetData(0x0067,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0067,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x006C,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x007C,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x4,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x10,0x0,0x0);
		PMIC_DRV_SetData(0x007C,0x20,0x0,0x0);
		PMIC_DRV_SetData(0x007D,0x40,0x0,0x0);
		PMIC_DRV_SetData(0x007D,0x80,0x0,0x0);
		PMIC_DRV_SetData(0x0081,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0081,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0081,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x0081,0x8,0x8,0x0);
		PMIC_DRV_SetData(0x0081,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0090,0x100,0x0,0x0);
		PMIC_DRV_SetData(0x0090,0x200,0x200,0x0);
		PMIC_DRV_SetData(0x0090,0x4000,0x4000,0x0);
		PMIC_DRV_SetData(0x0090,0x8000,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0095,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x80,0x80,0x0);
		PMIC_DRV_SetData(0x0095,0x100,0x100,0x0);
		PMIC_DRV_SetData(0x0095,0x200,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x8000,0x8000,0x0);
		PMIC_DRV_SetData(0x009C,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x00AA,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x00C0,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x00C0,0x40,0x40,0x0);
		PMIC_DRV_SetData(0x00C0,0x1000,0x1000,0x0);
		PMIC_DRV_SetData(0x00C0,0x4000,0x0,0x0);
		PMIC_DRV_SetData(0x00C2,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x00C2,0x100,0x100,0x0);
		PMIC_DRV_SetData(0x00C2,0x400,0x400,0x0);
		PMIC_DRV_SetData(0x00C2,0x4000,0x4000,0x0);
		PMIC_DRV_SetData(0x00C8,0x20,0x20,0x0);
		PMIC_DRV_SetData(0x00D6,0x10,0x10,0x0);
	}
#elif defined(PMIC_INIT_ROUTER)
//debug_MT6339 Register Mapping E1 20130724_I_hotspot_initial_setting_LPG.txt
	{
	//<ECO_E1>
	//address,mask,value,ap shift,ap mask,ap value,    bank
		PMIC_DRV_SetData(0x0010,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0021,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0024,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x0024,0x20,0x0,0x0);
		PMIC_DRV_SetData(0x0029,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x002A,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x002B,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x003B,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0044,0x40,0x40,0x0);
		PMIC_DRV_SetData(0x0044,0x80,0x0,0x0);
		PMIC_DRV_SetData(0x0048,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0049,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004B,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004C,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x004E,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0054,0x1,0x0,0x0);
		PMIC_DRV_SetData(0x0056,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0057,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0066,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0066,0x2,0x2,0x0);
		PMIC_DRV_SetData(0x0066,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x0066,0x8,0x8,0x0);
		PMIC_DRV_SetData(0x0066,0x10,0x0,0x0);
		PMIC_DRV_SetData(0x0067,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0067,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x006C,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x0090,0x100,0x0,0x0);
		PMIC_DRV_SetData(0x0090,0x200,0x200,0x0);
		PMIC_DRV_SetData(0x0090,0x4000,0x4000,0x0);
		PMIC_DRV_SetData(0x0090,0x8000,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x0095,0x2,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x80,0x80,0x0);
		PMIC_DRV_SetData(0x0095,0x100,0x100,0x0);
		PMIC_DRV_SetData(0x0095,0x200,0x0,0x0);
		PMIC_DRV_SetData(0x0095,0x8000,0x8000,0x0);
		PMIC_DRV_SetData(0x009C,0x1,0x1,0x0);
		PMIC_DRV_SetData(0x00AA,0x4,0x4,0x0);
		PMIC_DRV_SetData(0x00C0,0x10,0x10,0x0);
		PMIC_DRV_SetData(0x00C0,0x40,0x40,0x0);
		PMIC_DRV_SetData(0x00C0,0x1000,0x1000,0x0);
		PMIC_DRV_SetData(0x00C0,0x4000,0x0,0x0);
		PMIC_DRV_SetData(0x00C2,0x100,0x100,0x0);
		PMIC_DRV_SetData(0x00C2,0x400,0x400,0x0);
		PMIC_DRV_SetData(0x00C2,0x4000,0x4000,0x0);
		PMIC_DRV_SetData(0x00C8,0x20,0x20,0x0);
		PMIC_DRV_SetData(0x00D6,0x10,0x10,0x0);
	}
#elif defined(PMIC_INIT_ALL_ON_EVB)
#elif defined(PMIC_INIT_NONE)
#endif
#if defined(__DUAL_TALK_SUPPORT__) || defined(MT6290M_SP_BB) || defined(MT6290ME2_SP)
        // For Dual Talk
        PMIC_DRV_SetData(0x0024,0x2,0x2,0x0);
#endif
}
	
