/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSKAL_TRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
#ifndef _CL1TST_EM_EVL1_H_
#define _CL1TST_EM_EVL1_H_

/***********************************************************************************
* 
* FILE NAME   :     cl1tst_em_evl1.h.
*
* DESCRIPTION :   evl1 EM design Msgid and funtion declaration
*
*
************************************************************************************/
/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/   
#ifdef __MODEM_EM_MODE__
#define __EVL1_EM_MODE__
#include "em_public_struct_evl1.h"

/*----------------------------------------------------------------------------
 Global Typedefs
----------------------------------------------------------------------------*/

typedef struct
{
    em_info_enum                     em_info;
    em_evl1_cell_switch_info_struct  Msg;
} em_evl1_cell_switch_info_temp_struct;


/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/



/*----------------------------------------------------------------------------
 Global Variables
----------------------------------------------------------------------------*/
/* EM_ID Switch for EVL1 */
#define  EVL1_EM_ID_NUM  (EM_EVL1_INFO_END - EM_EVL1_INFO_BEGIN + 1)
extern kal_bool evl1_em_on_s[EVL1_EM_ID_NUM] ;
extern kal_uint8 TxAcEmFrameNum ;
extern em_evl1_acc_data_rate_info_struct TxAcEvl1EmMsg;



/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/
void Evl1EmUpdateReqMsg(local_para_struct *local_para_ptr);
void EvlSendEmProcGeneralInfoInd(em_evl1_general_info_struct *EmMsgPtr);
void Evl1SendEmProcTxagcPwrInfoInd(void);
void Evl1SendEmProcCellSwitchInfoInd(void);
void Evl1SendEmProcRxagcInfoInd(void);
void Evl1SendEmProcAfcInfoInd(void);
void Evl1SendEmProcMbpSectorInfoInd(void);
void Evl1SendEmProcFmpFingerInfoInd(void);
void Evl1SendEmProcFmpSectorInfoInd(void);
void Evl1SendEmProcTimingTrackStatusInd(void);
void Evl1SendEmProcSchStatusInd(void);
void Evl1SendEmProcSchPilotUpdateInfoInd(void);
void Evl1SendEmProcSchResultInfoInd(void);
void Evl1SendEmProcAccDataRateInfoInd(void);
void Evl1SendEmProcTrafficRriValueInfoInd(void);
void Evl1SendEmTxAgcPwrMsgToCl1tst(void *EmPwrP, kal_uint16 EmRepCtrl);
void Evl1SendEmTimingTrackStatusMsgToCl1tst(kal_int16 EmStAdjDir);
void Evl1EmGeneralInfoCollectAndReport(void);
void Evl1SendEmTxAccDataRateMsgToCl1tst(kal_uint16 EmTxAcDataRate);
void Evl1SendEmTxTrafficRriInfoMsgToCl1tst(kal_uint16 EmTxRriDataAck, kal_uint16 EmTxRriDataNak, kal_uint16 EmSubtype);
void Evl1EmGeneralInfoUpdateSet(void);

#endif

#endif

/*****************************************************************************
* End of File
*****************************************************************************/




