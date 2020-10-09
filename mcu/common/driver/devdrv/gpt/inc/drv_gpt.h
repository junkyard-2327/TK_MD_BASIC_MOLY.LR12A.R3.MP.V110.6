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
 *   drv_gpt.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   Low level GPT driver
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 05 04 2017 way.chen
 * [MOLY00246761] [UMOLYA] Replace PDN API with OF API, Request by PDN owner(Devin )
 * Remove 26M on/off API.
 *
 * 08 08 2016 way.chen
 * [MOLY00185478] [UMOLYA] Check in 93 serial GPT driver
 * Check in DSP 1us resolution driver(support for multiple user).
 *
 * 07 06 2016 way.chen
 * [MOLY00185478] [UMOLYA] Check in 93 serial GPT driver
 * Modify PDN operation.
 *
 * 06 20 2016 way.chen
 * [MOLY00185478] [UMOLYA] Check in 93 serial GPT driver
 * Check in 93 GPT driver.
 *
 * 01 06 2016 way.chen
 * [MOLY00156138] [UMOLY] Patch GPT driver for U4G FPGA
 * Patch GPT Driver for U4G FPGA, the FPGA Start Version is 20151231_u4g_ltel2_elbrus_vivado_2015.
 *
 * 12 10 2013 chin-chieh.hung
 * [MOLY00049464] [Driver][GPT] Add debug GPT, request by MS Lin
 * Add Debug GPT APIs
 ****************************************************************************/
#ifndef __DRV_GPT_H__
#define __DRV_GPT_H__

#include "drv_features_gpt.h"
#include "gpt_reg.h"

#define MDPERI_CKEN_SET (BASE_MADDR_CLK_CTRL + 0x10)
#define MDPERI_CKEN_CLR (BASE_MADDR_CLK_CTRL + 0x14)
#define MDPERI_CKEN (BASE_MADDR_CLK_CTRL + 0x18)
#define MDGPTM_26M_CKEN (1<<15)


/*Test Low Power IT Define*/
//#define GPT_LP_TEST 1

/*****************************************************************************
 *						 function declaration                                *
 *****************************************************************************/
void drv_gpt_reset(void);
void drv_gpt_set_timer(kal_uint32 num, kal_uint32 time, kal_uint32 mode);
void drv_gpt_start_timer(kal_uint32 num);
void drv_gpt_stop_timer(kal_uint32 num);
kal_uint32 drv_gpt_get_version(void);
kal_uint32 drv_gpt_get_data(kal_uint32 num);
void drv_gpt_set_data(kal_uint32 num, kal_uint32 time);


#endif /* end of __DRV_GPT_H__ */
