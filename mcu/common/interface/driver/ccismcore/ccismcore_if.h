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
 *   ccismcore_if.c
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   CCISM core APIs
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 11 18 2016 chien-hui.lu
 * [MOLY00201881] [CCISM] CCISM support in UMOLYA
 * [CCISM] add CCISM exception mode share memory.
 *
 * 09 07 2016 chien-hui.lu
 * [MOLY00201881] [CCISM] CCISM support in UMOLYA
 * [CCISM] CCISM support CCCI control path.
 *
 * 09 15 2015 chien-hui.lu
 * [MOLY00139463] [CCISM] add CCISM Core
 * add copyright comment.
 *
 ****************************************************************************/
#ifndef _CCISMCORE_IF_H_
#define _CCISMCORE_IF_H_

#include "qmu_bm.h"
#include "hif_ior.h"
#include "hif_common.h"
#include "ccci_if.h"
#include "ccismcore_except_if.h"

#if defined(ATEST_SYS_CCISMC)
#define __CCISMCORE_UT__
#endif	// ATEST_SYS_CCISMC

#define CCISMC_ULQ_NUM (8)
#define CCISMC_DLQ_NUM (8)

/*!
 *  @brief UPLINK queue index CCISMC_RXQ
 */
typedef enum{
        CCISMC_RXQ_Q0 = 0,   
        CCISMC_RXQ_Q1,   
        CCISMC_RXQ_Q2,   
        CCISMC_RXQ_Q3,   
        CCISMC_RXQ_Q4,   
        CCISMC_RXQ_Q5,   
        CCISMC_RXQ_Q6,   
        CCISMC_RXQ_Q7,   
        CCISMC_RXQ_NUM = CCISMC_ULQ_NUM,
        CCISMC_RXQ_INVALID = 0xFF
} CCISMC_RXQ_TYPE;

/*!
 *  @brief DOWNLINK queue index CCISMC_TXQ
 */
typedef enum{
        CCISMC_TXQ_Q0 = 0 ,       
        CCISMC_TXQ_Q1,       
        CCISMC_TXQ_Q2,       
        CCISMC_TXQ_Q3,       
        CCISMC_TXQ_Q4,       
        CCISMC_TXQ_Q5,       
        CCISMC_TXQ_Q6,
        CCISMC_TXQ_Q7,
        CCISMC_TXQ_NUM = CCISMC_DLQ_NUM,
        CCISMC_TXQ_INVALID = 0xFF
} CCISMC_TXQ_TYPE;

#define CCISMQ_TYPE_TX HIFQ_TYPE_TX
#define CCISMQ_TYPE_RX HIFQ_TYPE_RX
#define CCISMQ_TYPE_TX_NO_FLUSH HIFQ_TYPE_TX_NO_FLUSH

void ccismc_hif_init(void);
void ccismc_init_phase2(void);

/*!
 *  @brief API for CCCI channel attaching CCISM QUEUE
 */
kal_bool ccismc_q_attach(kal_uint8 queue_type, kal_uint8 queue_no, CCCI_CHANNEL_T channel, HIF_CCCI_GPD_CALLBACK funp);
/*!
 *  @brief API for CCCI channel detaching ccif queue
 */
kal_bool ccismc_q_detach(kal_uint8 queue_type, kal_uint8 queue_no, CCCI_CHANNEL_T channel);
/*!
 *  @brief API for CCCI channel to submit io request
 */
kal_bool ccismc_submit_ior(kal_uint8 queue_type , kal_uint8 queue_no, void* ior);
 /*!
 *  @brief API for CCCI setup shared data address
 */
kal_bool ccismc_setup_shared_data(kal_uint8 *addr, kal_uint32 size);
 /*!
 *  @brief API for CCCI setup exception shared data address
 */
kal_bool ccismc_setup_except_shared_data(kal_uint8 *addr, kal_uint32 size);
/*!
 *  @brief API for CCCI channel to submit one gpd in polling mode
 */
kal_bool ccismc_polling_submit_one_gpd(kal_uint8 queue_no, qbm_gpd *pgpd, kal_bool istx);

#endif // _CCISMCORE_IF_H_

