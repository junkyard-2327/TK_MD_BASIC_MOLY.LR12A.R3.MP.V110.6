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
 *   ccismcore_scp_if.c
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   CCISM Core MD<->SCP APIs
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 *
 ****************************************************************************/
#ifndef _CCISMCORE_SCP_IF_H_
#define _CCISMCORE_SCP_IF_H_

#include "qmu_bm.h"
#include "hif_ior.h"
#include "hif_common.h"
#include "ccci_if.h"

#if defined(ATEST_SYS_CCISMC_SCP)
#define __CCISMCORE_SCP_UT__
#endif	// ATEST_SYS_CCISMC

#define CCISMC_SCP_ULQ_NUM (1)
#define CCISMC_SCP_DLQ_NUM (1)

/*!
 *  @brief UPLINK queue index CCISMC_SCP_RXQ
 */
typedef enum{
        CCISMC_SCP_RXQ_Q0 = 0,   
        CCISMC_SCP_RXQ_NUM = CCISMC_SCP_ULQ_NUM,
        CCISMC_SCP_RXQ_INVALID = 0xFF
} CCISMC_SCP_RXQ_TYPE;

/*!
 *  @brief DOWNLINK queue index CCISMC_SCP_TXQ
 */
typedef enum{
        CCISMC_SCP_TXQ_Q0 = 0 ,       
        CCISMC_SCP_TXQ_NUM = CCISMC_SCP_DLQ_NUM,
        CCISMC_SCP_TXQ_INVALID = 0xFF
} CCISMC_SCP_TXQ_TYPE;

#define CCISMQ_SCP_TYPE_TX HIFQ_TYPE_TX
#define CCISMQ_SCP_TYPE_RX HIFQ_TYPE_RX
#define CCISMQ_SCP_TYPE_TX_NO_FLUSH HIFQ_TYPE_TX_NO_FLUSH

void ccismc_scp_hif_init(void);
void ccismc_scp_init_phase2(void);

/*!
 *  @brief API for CCCI channel attaching CCISM QUEUE
 */
kal_bool ccismc_scp_q_attach(kal_uint8 queue_type, kal_uint8 queue_no, CCCI_CHANNEL_T channel, HIF_CCCI_GPD_CALLBACK funp);
/*!
 *  @brief API for CCCI channel detaching ccif queue
 */
kal_bool ccismc_scp_q_detach(kal_uint8 queue_type, kal_uint8 queue_no, CCCI_CHANNEL_T channel);
/*!
 *  @brief API for CCCI channel to submit io request
 */
kal_bool ccismc_scp_submit_ior(kal_uint8 queue_type , kal_uint8 queue_no, void* ior);
 /*!
 *  @brief API for CCCI setup shared data address
 */
kal_bool ccismc_scp_setup_shared_data(kal_uint8 *addr, kal_uint32 size);

#endif // _CCISMCORE_SCP_IF_H_

