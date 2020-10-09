/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.
*
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
*
* Copyright (c) 2002-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef _HLPCUSTOM_H_
#define _HLPCUSTOM_H_

/****************************************************************************
 *
 * Module:    hlpcustom.h
 *
 * Purpose:   Default/Customized values for the HLP parameters
 *
 * HISTORY     :
 *
***************************************************************************/

#define HLP_DEFAULT_DNS_PRI_IP_ADDR         HLP_DEFAULT_IP_ADDR
#define HLP_DEFAULT_DNS_SEC_IP_ADDR         HLP_DEFAULT_IP_ADDR

#define HLP_DEFAULT_AAA_AUTH_ALGORITHM      MD5_AUTH_ALGO
#define HLP_DEFAULT_MN_AUTHENTICATOR        0x07B201 /* byte reversed */

#define HLP_DEFAULT_DDTM_MODE_ENABLED       KAL_FALSE


/*****************************************************************************
* End of File
*****************************************************************************/
#endif  /* _CUSTOM_H_ */

/**Log information: \main\CBP80\cbp80_xding_scbp10176\1 2012-08-30 06:35:56 GMT xding
** add an PRI item under HSPD menu for retry time on KDDI 2-19**/
/**Log information: \main\SMART\1 2013-04-28 05:01:20 GMT jzwang
** HREF#0000: Add smartfren compile option**/
/**Log information: \main\SMART\2 2013-04-28 05:13:00 GMT jzwang
** HREF#0000: Add smartfren compile option**/
/**Log information: \main\Trophy\Trophy_xding_href22316\1 2013-11-27 06:00:43 GMT xding
** HREF#22316,RDUD feature **/
/**Log information: \main\Trophy\2 2013-11-27 06:04:14 GMT jzwang
** href#22316**/

