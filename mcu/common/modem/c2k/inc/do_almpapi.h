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
* FILE NAME   : do_almpapi.h
*
* DESCRIPTION : API definition for ALMP (Air Link Management Protocol) component.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_ALMPAPI_H_
#define _DO_ALMPAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "do_clcapi.h"
#include "do_rupapi.h"


/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
typedef enum
{
   VALIDATE_FAIL,
	MPSS_TMR_EXP,
	RESELECTION,
	ASSOCIATION_BROKEN,
	REINIT,
	SYS_ACQ_NONE
} SysAcqReasonT;

/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/

typedef struct
{
   kal_uint32    attribute;           /* Timer attribute*/

} AlmpTimerTimeoutMsgT;    /* typedef for the message */

/* ALMP_INSP_NTWK_ACQD_MSG */
typedef  struct
{
   ChanRecGT system;
   kal_uint16 PilotPN;
}AlmpInspNtwkAcqdMsgT;

/*ALMP_IDP_CONN_FAILED_MSG */
typedef  struct
{
   kal_uint8 nFailedReason;
}AlmpIdpConnFailedMsgT;

/*ALMP_OMP_AN_REDIRECT_MSG */
typedef  struct
{
   kal_uint32 ChannelCount;
}AlmpOmpAnRedirectMsgT;

typedef  struct
{
   kal_uint8 SectorId[16];
   kal_uint32 Latitude;
   kal_uint32 Longitude;
}AlmpOmpUpdateMsgT;

/* ALMP_CSS_SYS_ACQ_REQ_MSG */
typedef struct
{
   SysAcqReasonT reason;
} AlmpCssSysAcqReqMsgT;

/*------------------*/
/* Global Functions */
/*------------------*/
typedef enum
{
   ALMP_INIT_STATE,
   ALMP_IDLE_STATE,
   ALMP_CONN_SETUP_STATE,
   ALMP_CONNECTED_STATE
} AlmpStateT;

extern AlmpStateT GetAlmpState(void);
extern void SetAlmpState(AlmpStateT state);
#ifdef MTK_DEV_C2K_IRAT
extern void IRATSetAlmpState(AlmpStateT state);
#endif /* MTK_DEV_C2K_IRAT */

typedef enum
{
  AT_INIT_CONN,
  AN_INIT_CONN,
  AT_INIT_CONN_AFTER_1X_PREMPT = 0x0c,
  AN_INIT_CONN_AFTER_1X_PREMPT,
  SIP_REG_CONN_AFTER_1X_PREMPT,
  SIP_PERIODIC_REG_CONN
} AlmpConnReasonT;

#ifdef LGT_EXTENSIONS
typedef enum
{
  SIP_NULL,
  SIP_REGISTRATION,
  SIP_PERIODIC_REG,
}SIPRegModeT;

void AlmpClearConnRelevantInfo(void);
void AlmpSetSipRegMode(kal_uint8 Mode);
#endif
/*****************************************************************************
* End of File
*****************************************************************************/
#endif
