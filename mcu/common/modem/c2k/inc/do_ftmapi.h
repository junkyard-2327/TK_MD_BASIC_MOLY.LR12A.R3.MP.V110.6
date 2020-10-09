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
* FILE NAME   : do_ftmapi.h
*
* DESCRIPTION : API definition for FTM (Forward Traffic Channel MAC).
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_FTMAPI_H_
#define _DO_FTMAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "do_fcpapi.h"


/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/

typedef enum {
    FTM_INACTIVE_STATE,
    FTM_ACTIVE_STATE,
    FTM_PENDING_STATE,
    FTM_STATE_END
}FtmStateT;

/******************************************************************************
    Prototypes
******************************************************************************/

/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/


#if defined (MTK_DEV_OPTIMIZE_EVL1)
/* NST: used in NST */
extern void  FtmEnhanceCreateInConfigInstance(kal_bool resetToDefault);
extern void  FtmEnhanceCommitHandler(void);
extern void  FtmDefaultCreateInConfigInstance(kal_bool resetToDefault);
extern void  FtmDefaultCommitHandler(void);
#endif

#ifdef MTK_PLT_ON_PC_UT
extern void FtmSetAttrib(UtFcpFtmSetAttribMsgT *pFtmSetAttrib);
extern void FtmGetAttrib(kal_uint16 attr_id);
#endif

/*****************************************************************************
* End of File
*****************************************************************************/
#endif

