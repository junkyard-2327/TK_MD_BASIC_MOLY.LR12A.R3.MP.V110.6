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
 *  l1edps_NOCH_CSR_06.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *  Parameters define value between SS and UE
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 06 09 2015 david.tang
 * [MOLY00112427] [MT6291][E1EVB][EL1S] Update l1edps files from CBr4
 * .[l1edps] update l1edps from cbr
 *
 * 10 01 2013 vend_ali.su
 * [MOLY00032458] [MT6290E1][EL1S][L1EDPS COMMON] Refine L1S test procedure - 3
 * .
 *
 * 05 24 2013 vend_david.tang
 * [MOLY00022765] Merge FirstCall L1S codes to MOLY
 * modify L1S header files
 *
 * 05 23 2013 shao-kai.hsu
 * [MOLY00014022] [MT6290 PO admit]  Checkin  MT6290 SM L1S build relative codes
 * L1S Integration change.
 *
 * 05 23 2013 shao-kai.hsu
 * [MOLY00014022] [MT6290 PO admit]  Checkin  MT6290 SM L1S build relative codes
 * .
 *
 * 05 22 2013 jerry.ho
 * [MOLY00014022] [MT6290 PO admit]  Checkin  MT6290 SM L1S build relative codes
 * .
 *
 * 11 05 2012 jerry.ho
 * [MOLY00005322] TATAKA merge to MOLY
 * add LTE l1edps common header files
 ****************************************************************************/



#ifndef _L1EDPS_NOCH_CSR_06_H
#define _L1EDPS_NOCH_CSR_06_H

#include "l1edps_common_parameters.h"


#undef DL_EARFCN_BTS1
#undef PWR1 
#undef DL_EARFCN_BTS2
#undef PWR2

#define DL_EARFCN_BTS1 5
#define PWR1 -55

#define DL_EARFCN_BTS2 3625
#define PWR2 -70


#endif

