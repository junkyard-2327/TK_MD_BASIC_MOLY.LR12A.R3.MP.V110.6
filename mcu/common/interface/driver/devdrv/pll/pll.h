/*******************************************************************************
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
 ******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   pll.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   PLL Related Functions
 *
 * Author:
 * -------
 * -------
 *
 * ============================================================================
 * $Log$
 *
 * 01 22 2018 jun-ying.huang
 * [MOLY00303289] [Merlot call for check-in][PLL][DCM]Add Macro for MT6761(=Merlot)
 * .
 *
 * 10 25 2017 jun-ying.huang
 * [MOLY00285159] [PLL][DCM]Add Macro for MT6765(=Cervino)
 * .
 *
 * 09 01 2017 jun-ying.huang
 * [MOLY00275084] [6293]Add PLL_SEC Module related code to get SW version.
 * .
 *
 * 08 21 2017 jun-ying.huang
 * [MOLY00272509] [Sylvia][PLL]Add MT6771 Macro for PLL due to Sylvia MT6771 Call for check in
 * .
 *
 * 06 09 2017 jun-ying.huang
 * [MOLY00244484] [Zion]Add compile option for ZION in PLL.
 * Add compile option for ZION and Workaround for CIRQ APB sync issue- Let BUS2x clock use MDBPIPLL_0/6 = 101 MHz
 *
 * 10 24 2016 jun-ying.huang
 * [MOLY00209150] [System Service][PLL]Remove redundant files from UMOLYA PLL
 * Remove redundant files from PLL
 *
 * 06 24 2016 alan-tl.lin
 * [MOLY00173527] [PLL] Driver porting
 * Fix build error
 *
 * 06 15 2016 alan-tl.lin
 * [MOLY00173527] [PLL] Driver porting
 * [PLL] PLL init first porting
 *
 *
 ****************************************************************************/

#ifndef __PLL_H__
#define __PLL_H__

/*******************************************************************************
 * Locally Used Options
 ******************************************************************************/

/*******************************************************************************
 * Include header files
 ******************************************************************************/
#include "kal_general_types.h"
#include "reg_base.h"
#include "pll_gen93m17.h"

/*******************************************************************************
 * Define exported macro
 ******************************************************************************/
#define __SECTION__(S) __attribute__((__section__(#S)))
#define __PLL_CODE_IN_BOOT__ __SECTION__(NONCACHED_ROCODE)

/*******************************************************************************
 * Define data structure
 ******************************************************************************/

/*******************************************************************************
 * Define exported function prototype
 ******************************************************************************/
extern void INT_SetPLL(void);

#endif  /* !__PLL_H__ */
