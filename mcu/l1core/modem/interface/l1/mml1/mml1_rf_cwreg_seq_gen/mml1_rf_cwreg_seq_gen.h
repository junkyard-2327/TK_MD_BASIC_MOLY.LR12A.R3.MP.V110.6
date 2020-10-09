/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
 *   mml1_rf_cwreg_seq_gen.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   Multi-Mode RF CW register and sequence gen including path
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
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
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __MML1_RF_CWREG_SEQ_GEN_H__
#define __MML1_RF_CWREG_SEQ_GEN_H__

/*******************************************************************************
 * #include
 ******************************************************************************/
#include "kal_general_types.h"
#include "mml1_rf_interface.h"

#if defined(MT6177L_RF) 
#include "mt6177l/mml1_rf_cwreg_gen_mt6177l.h"
#include "mt6177l/mml1_rf_cwreg_gen_mt6177l_e4.h"
#include "mt6177l/mml1_rf_seq_gen_lte_rx_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_lte_rfc_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_lte_trx_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_lte_tx_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_c2k_rx_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_c2k_tx_mt6177l.h"
#include "mt6177l/mml1_rf_por_gen_mt6177l.h"
#include "mt6177l/mml1_rf_por_gen_mt6177l_e4.h"
#include "mt6177l/mml1_rf_seq_gen_3g_tdd_trx_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_3g_tdd_rx_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_3g_tdd_tx_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_3g_fdd_tx_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_3g_fdd_rx_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_3g_fdd_rfc_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_2g_rx_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_2g_tx_mt6177l.h"
#include "mt6177l/mml1_rf_seq_gen_2g_rfc_mt6177l.h"
#elif defined(MT6177M_RF)
#include "mt6177m/mml1_rf_cwreg_gen_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_lte_rx_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_lte_rfc_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_lte_trx_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_lte_tx_mt6177m.h"
#include "mt6177m/mml1_rf_por_gen_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_c2k_rx_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_c2k_tx_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_2g_rfc_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_2g_rx_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_2g_tx_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_3g_fdd_rx_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_3g_fdd_tx_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_3g_fdd_rfc_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_3g_tdd_trx_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_3g_tdd_rx_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_3g_tdd_tx_mt6177m.h"
#include "mt6177m/mml1_rf_seq_gen_3g_tdd_rfc_mt6177m.h"
#else
#error "unsupported RF chip"
#endif
 
#endif /*__MML1_RF_CWREG_SEQ_GEN_H__*/
