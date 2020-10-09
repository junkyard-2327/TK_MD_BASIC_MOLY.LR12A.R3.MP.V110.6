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
 *   drvpdn_inline.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   PDN Driver (C Inline Implementation)
 *      - PDN_SET(), PDN_CLR() is for Bus Clock Gating/Ungating
 *      
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 12 27 2018 devin.yang
 * [MOLY00374929] [Talbot SB call for check-in] [DPN] Fix PDN driver build error.
 * Merge code to LR12A.R3.MP.
 *
 * 01 23 2018 devin.yang
 * [MOLY00303868] [Build Error][System Service][PDN Driver] Add MT6761 compile option for Merlot.
 * .
 *
 * 10 30 2017 devin.yang
 * [MOLY00286061] [System Service][PDN][Gen93] Update PDN driver for Cervino.
 * .
 *
 * 08 25 2017 devin.yang
 * [MOLY00273777] [System Service][PDN][Gen93][MT6771][UMOLYA][LR12A.R2.MP] Update PDN driver for Sylvia.
 * .
 *
 * 06 09 2017 devin.yang
 * [MOLY00256219] [System Service][MT6739][PDN] Update PDN driver for MT6739.
 * .
 *
 * 11 23 2016 devin.yang
 * [MOLY00204129] [System Service][PDN] Porting PDN drivers for MT6293.
 * Update MT6293 PDN driver.
 *
 * 09 20 2016 devin.yang
 * [MOLY00204129] [System Service][PDN] Porting PDN drivers for MT6293.
 * .
 *
 * 03 30 2016 alan-tl.lin
 * [MOLY00171849] [GEN93] Fix build error
 * [PLL/PDN] Add compile option for GEN93
 *
 *
 ****************************************************************************/

#ifndef __DRVPDN_INLINE_H__
#define __DRVPDN_INLINE_H__

#if defined(__MD93__)
    #include "drvpdn_inline_mt6293.h"
    #include "drvpdn_inline_username.h"
#else
    #error "Unsupported Chip Target in PDN Module"
#endif

#endif /* !__DRVPDN_INLINE_H__ */
