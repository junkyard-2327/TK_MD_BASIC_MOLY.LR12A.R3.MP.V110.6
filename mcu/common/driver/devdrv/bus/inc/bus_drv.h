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
 * -----------
 *   bus_drv.h
 *
 * Project:
 * -----------
 *   MOLY
 *
 * Description:
 * ------------
 *   Bus Related Driver Code
 *   (Refer to WR8's Bus Driver API Interface, But Not Include Prefetch Buffer API)
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 04 13 2017 shin-chieh.tsai
 * [MOLY00241230] [BIANCO][BUS][System Service]User polling API in exception for AP-MD deadlock HW issue
 * .
 *
 * 03 14 2016 wellken.chen
 * [MOLY00168763] [Elbrus][Bus] Disable MDMCU backdoor access other cores path, and bus_err with ASSERT
 *
 * 03 11 2016 wellken.chen
 * [MOLY00168763] [Elbrus][Bus] Disable MDMCU backdoor access other cores path, and bus_err with ASSERT
 *
 * 03 11 2016 wellken.chen
 * [MOLY00168284] [Bus] Bus driver code refine
 *
 * 07 14 2015 wellken.chen
 * [MOLY00128710] [Jade][SPV] Refine SPV API realted code
 *
 * 04 08 2015 wellken.chen
 * [MOLY00106212] [SPV][TK6291] Update SPV related API
 *
 * 04 07 2015 wellken.chen
 * [MOLY00106212] [SPV][TK6291] Update SPV related API
 *
 * 04 07 2015 wellken.chen
 * [MOLY00099511] [TK6291] Update SMI realted setting
 *
 * 02 09 2015 wellken.chen
 * [MOLY00092944] [Bus][TK6291] Disable l1 system post write buffer function in bus driver init
 *
 * 07 31 2014 wellken.chen
 * [MOLY00074124] [SystemService][DebuggingSuite][TK6291] Support multi-core exception
 *
 ****************************************************************************/
 
#ifndef __BUS_DRV_H__
#define __BUS_DRV_H__

#include "kal_general_types.h"


kal_bool BusDrv_Init(void);
kal_bool BusDrv_SetSMI(void);

kal_bool BusDrv_Config_DormantEnter(void);
kal_bool BusDrv_Config_DormantLeave(void);

kal_bool BusDrv_Enable_MCU2Backdoor(kal_bool enable);
kal_bool BusDrv_Enable_BackdoorHighPri(kal_bool enable);


kal_bool BusDrv_GetDumpInfo(void **ppstart, kal_uint32 *pu32Len);

typedef enum {
	MD_Not_Allow = 0x777, 
	MD_Allow_Access = 0xFFF, 
} bus_APMDaccess; 

bus_APMDaccess BusDrv_GetAP2MDStatus(void);

#endif  /* !__BUS_DRV_H__ */
