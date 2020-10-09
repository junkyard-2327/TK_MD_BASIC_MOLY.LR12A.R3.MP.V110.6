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
/*****************************************************************************
*
* FILE NAME  : do_defs.h
*
* DESCRIPTION: This file contains defines for DO.
*
* ATTENTION  : 
*
* HISTORY    : See Log at end of file
*
*****************************************************************************/

#ifndef _DO_DEFS_H
#define _DO_DEFS_H

#include "sysdefs.h"

/*************************************************************************
   DO state traces map to DoStateID enum, with offset, as shown below
   list here for information purpose
Enum {
DSA_STATE_SPY_ID = MON_CP_DO_AUTO_STATE_LOG_SPYID_START, 
DPA_RLP_STATE_SPY_ID,
DPA_LOC_STATE_SPY_ID,

} DoStateAutoSpyIDT;
*/

typedef enum {
    DSA_STATE_ID,
    DPA_RLP_STATE_ID,
    DPA_LOC_STATE_ID,
    IDSP_STATE_ID,
    INSP_STATE_ID,
    FCP_TASK_STATE_ID,
    FTM_TASK_STATE_ID,
    RCP_TASK_STATE_ID,
	ACM_CONTROL_FSM_ID,
	ACM_RADIO_BURST_FSM_ID,
    /* put this at the end */
    DO_STATE_MAX_NUM
}DoStateIdT;





extern kal_uint8 DoStateVar[DO_STATE_MAX_NUM];  /* Holds all DoState variables */

extern void ChangeDoState(kal_uint8 StateID, kal_uint8 NewState);


/*Access the State, macro */
#define GetDoState(StateID)  DoStateVar[StateID];          






#endif /* _DO_DEFS_H */

/*****************************************************************************
* End of File
*****************************************************************************/

