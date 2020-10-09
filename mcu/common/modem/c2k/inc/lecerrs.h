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
#ifndef LECERRS_H
#define LECERRS_H
/*****************************************************************************
 
  FILE NAME:  lecerrs.h

  DESCRIPTION:

    This file contains the fault ids for the LEC software unit.

*****************************************************************************/

/*------------------------------------------------------------------------
*  The following definitions are fault ids for MonFault.
*-----------------------------------------------------------------------*/

typedef enum 
{
   LEC_GPS_RESET_ERR                      = 0x00,
   LEC_ERR_MBOX_SHOULD_NOT_BE_EMPTY       = 0x01,
   LEC_VERSION_MISMATCH                   = 0x02,
   LEC_ERR_ALLOCATING_MEM                 = 0x03,
   LEC_ERR_WRONG_GPS_STATE_MSG            = 0x04,
   LEC_ERR_QUEUE_FULL_MSG                 = 0x05,
   LEC_ERR_QUEUE_UNDERFLOW_MSG            = 0x06,
   LEC_ERR_GPS_NV_READ_ERR_MSG            = 0x07,
   LEC_ERR_GPS_NV_WRITE_ERR_MSG           = 0x08,
   LEC_ERR_UNDEFINED_TIMER_ID_MSG         = 0x09,
   LEC_ERR_IOP_MSG_ERR_MSG                = 0x0A,
   LEC_ERR_GPS_RESET_ERR_MSG              = 0x0B,
   LEC_ERR_WRITE_GNB_GET_BUFF_ERR_MSG     = 0x0C,
   LEC_ERR_MBOX_UNKNOWN_MSG_ID_ERR        = 0x0D,
   LEC_ERR_UNKNOWN_API_COMMAND_MSG_ID     = 0x0E,
   LEC_ERR_NOT_SUPPORT_RF_BAND            = 0x0F,
   LEC_ERR_NOT_1XRTT_MODE                 = 0x10,
   LEC_ERR_INVALID_GPS_CALIB_NV_DATA_MSG  = 0x11,
   LEC_ERR_PGPS_GET_EE_WRONG_PRN          = 0x12,
   LEC_ERR_PGPS_SET_EE_WRONG_PRN          = 0x13,
   LEC_ERR_PGPS_BAD_RXN_EE_DATA           = 0x14,
   LEC_ERR_PGPS_BAD_EE_MORE_10SEC         = 0x15,
   LEC_ERR_GPS_DATA_WRONG

} LecErrsT;

/*****************************************************************************
* Initial revision
*****************************************************************************/

#endif

