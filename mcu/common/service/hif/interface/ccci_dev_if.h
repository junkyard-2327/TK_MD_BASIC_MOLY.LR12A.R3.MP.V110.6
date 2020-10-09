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
 *   ccci_dev_if.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Defines CCCI devices APIs
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 06 2015 cs.huang
 * [MOLY00135464] [CCCI] New CCCI handshake flow
 * [CCCI] New CCCI handshake flow
 *
 * 08 06 2015 cs.huang
 * [MOLY00135464] [CCCI] New CCCI handshake flow
 * [CCCI] New CCCI handshake flow
 *
 * 06 14 2013 i-wei.tsai
 * [MOLY00026128] [CCCI SYS MSG] CCCI system message service first check in
 * .
 *
 * 02 04 2013 ian.cheng
 * [MOLY00009874] [CCCI_SDIO] MT6290 Rename
 * MT6290 Rename CCCI Services
 *
 * 01 08 2013 i-wei.tsai
 * [MOLY00008347] [MT6290] [CCCI] CCCI re-Architecture
 * sync latest version of new features
 *
 * 12 06 2012 ian.cheng
 * [MOLY00007169] [CCCI_SDIO] MOLY phase in
 * [MOLY][CCCI_SDIO] 1st version of MT6290 CCCI feature
 ****************************************************************************/
#ifndef _CCCI_DEV_IF_H
#define _CCCI_DEV_IF_H

/*!
 * @function        [MOLY CCCI INIT] ccci_fs_svc_init
 * @brief           Initialize ccci_fs_internal data structures
 *                  Execute in Drv_Init_Phase1 --> ccci_hal_init
 * @param void      
 *
 * @return          void
 *                  ASSERT if fail
 */
kal_bool ccci_fs_svc_init(void);

/*!
 * @function        [MOLY CCCI INIT] ccci_sys_msg_init
 * @brief           Initialize ccci_system_message channels
 *                  Execute in Drv_Init_Phase1 --> ccci_hal_init
 * @param void      
 *
 * @return          void
 *                  ASSERT if fail
 */
kal_bool ccci_sys_msg_svc_init(void);


#endif //_CCCI_DEV_IF_H
