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
 *   ccci_tty_if.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   Move enum/struct to interface folder
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 09 19 2019 viney.kaushik
 * [MOLY00441703] network latency optimization 3 arrows porting- MD CCCI
 * 	
 * 	add screen touch/disp channel.
 *
 * 05 29 2019 viney.kaushik
 * [MOLY00409700] ??patch??MT6768?????modem?????????CCM-driver
 * 	
 * 	add new TTY device for MIPI. add system message.
 *
 * 03 01 2019 viney.kaushik
 * [MOLY00387502] ?Bingo?SCP???????
 * 	
 * 	add new SCP channel for CC state.
 *
 * 01 10 2019 viney.kaushik
 * [MOLY00378182] [MT6293] UDC feature patch back to R3
 * 	
 * 	add UDC feature ID and tty channel / replace ccci spinlock with HWITC.
 *
 ****************************************************************************/
#ifndef _CCCI_TTY_IF_H
#define _CCCI_TTY_IF_H

/*!
 *  @brief CCCI_TTY_DEV_CNT defines the total number of CCCI_TTY devices
 */
typedef enum _cccitty_device_id {
    CCCI_TTY_DEV_MIN           = 0,
    CCCI_TTY_DEV_DHL           = 0,  //4 <ccci ch> CCCI_DHL_CHANNEL
    CCCI_TTY_DEV_TST           = 1,  //4 <ccci ch> CCCI_TST_CHANNEL
    CCCI_TTY_DEV_AT            = 2,  //4 <ccci ch> CCCI_AT_CHANNEL_TX
    CCCI_TTY_DEV_GPD           = 3,  //4 <ccci ch> CCCI_GPS_CHANNEL_TX
    CCCI_TTY_DEV_SIM           = 4,  //4 <ccci ch> CCCI_SIM_CHANNEL_TX
    CCCI_TTY_DEV_DHL2          = 5,  //4 <ccci ch> CCCI_DHL2_CHANNEL
    CCCI_TTY_DEV_ATCP          = 6,
    CCCI_TTY_DEV_C2K_PPP       = 7,
    CCCI_TTY_DEV_C2K_AGPS      = 8,
    CCCI_TTY_DEV_CELLINFO      = 9,  //  <ccci ch> CCCI_CELLINFO_CHANNEL
    CCCI_TTY_DEV_IMSM          = 10,  //  <ccci ch> CCCI_IMSM_CHANNEL
    CCCI_TTY_DEV_WOA           = 11,  //  <ccci ch> CCCI_WOA_CHANNEL
    CCCI_TTY_DEV_XUI           = 12,  //  <ccci ch> CCCI_XUI_CHANNEL
    CCCI_TTY_DEV_BIP           = 13,  //  <ccci ch> CCCI_BIP_CHANNEL
    CCCI_TTY_DEV_UDC           = 14,  //  <ccci ch> CCCI_UDC_CHANNEL
    CCCI_TTY_DEV_CC_STATE      = 15,  //  <ccci ch> CCCI_CC_STATE_CHANNEL
    CCCI_TTY_DEV_MIPI          = 16,  //  <ccci ch> CCCI_MIPI_CHANNEL
    CCCI_TTY_DEV_NLOPT         = 17, // <ccci ch> CCCI_NLOPT_CHANNEL
    CCCI_TTY_DEV_NLOPP         = 18, // <ccci ch> CCCI_NLOPP_CHANNEL
    CCCI_TTY_DEV_CNT           = 19
}cccitty_device_id;

#endif //#ifndef _CCCI_TTY_IF_H
