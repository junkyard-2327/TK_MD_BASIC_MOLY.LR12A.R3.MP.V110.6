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
* Copyright (c) 2006-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************
* 
* FILE NAME   : do_slapi.h
*
* DESCRIPTION : API definition for Security Layer.
*
* HISTORY     :
*****************************************************************************/

#ifndef _DO_SLAPI_H_
#define _DO_SLAPI_H_

/*----------------------------------------------------------------------------
Include Files
----------------------------------------------------------------------------*/
#include "do_rcpapi.h"
#include "do_fcpapi.h"
#include "slc_nvram.h"

/*Mac Layer Packet*/
typedef struct macpkt
{
    kal_uint8 MacPktLength;   /* Length of the MAC packet*/
    kal_bool FormatB;          /* [0 == FormatA ; 1 == FormatB ]*/
    kal_bool Encrypted;        /* [0 == No ; 1 == Yes ]*/
    CpBufferT* BufPtr;      /* Points to the beginning of the 640 Byte DMA Buffer*/
    kal_uint16 OffsetWithIn640ByteBuffer;
    kal_uint32 SystemTimeInSlots; /* Indicates the time at which the Mac-Packet was received*/
    kal_uint8 endpoint; /* Satya: Need to discuss this*/
    struct macpkt* next;
} MacPktT;	/* This structure is declared in Mac Layer, may be*/

/*********************************************************************/
extern kal_bool bEncOrAutR;

#define KEY_LENGTH_BYTES      20      /* 160 bits*/
#define SHA1_HASH_SIZE        20      /* 160 bits*/
#define SHA1_HASH_WORDS       5

/* AUT_KEP_RPCAUTHKEY_MSG */
typedef  struct
{
  kal_uint8 bits;
  kal_uint8 RPCAuthKey[KEY_LENGTH_BYTES];
} AuthKepRPCAuthKeyMsgT;

/* AUT_OMP_SECTORID_MSG */
typedef  struct
{
    kal_uint8 SectorID[SECTORID_LENGTH_BYTES];
} AuthOmpSectorIDMsgT;

typedef  struct
{
  kal_uint8   g_size;
  kal_uint8*  g_data;
  kal_uint8   expsize;
  kal_uint8*  exp;
  kal_uint8   p_size;
  kal_uint8*  p_data;
}DHKepCalReqMsgT;

typedef  struct
{
  kal_uint8 size;
  kal_uint8 data[128];
}DHKepCalRspMsgT;

/*----------------------------------------------------------------------------
Global Function Prototypes
----------------------------------------------------------------------------*/
/* For RCP */
void SlProcessPktR(DatapktlistGT *pktList);

/* For FCP*/
void SlProcessPktF(MacPktT *pktList);
#endif

