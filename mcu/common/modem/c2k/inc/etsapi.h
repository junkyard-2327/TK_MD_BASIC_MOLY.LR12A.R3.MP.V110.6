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
* Copyright (c) 1998-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************
 
  FILE NAME:  etsapi.h

  DESCRIPTION:

    This file contains all the constants, mail message definition and
    function prototypes exported by the ets unit.

*****************************************************************************/

#ifndef ETSAPI_H
#define ETSAPI_H

#include "monapi.h"
#include "sysdefs.h"
#include "sysapi.h"

/*------------------------------------------------------------------------
 *	Constants
 *------------------------------------------------------------------------*/

	/* msg size constants */
#define ETS_MSG_ID_LEN         2
#define ETS_CHECKSUM_LEN       1
#define ETS_MAX_MSG_BUFF_LEN   EXE_MAX_ETS_MSG_SIZE
#define ETS_MAX_MSG_LEN        (ETS_MAX_MSG_BUFF_LEN + ETS_MSG_ID_LEN)
#define ETS_MAX_PACKET_LEN     (ETS_MAX_MSG_LEN + ETS_CHECKSUM_LEN)

	/* msg framing chars */
#define ETS_SER_ESC_CHAR       0xFD 
#define ETS_SER_SYNC_CHAR      0xFE
#define ETS_SER_MOD_CHAR       0xFF

/* USB and SS_LTE_DO DPRAM interface use same ETS msg format definitions */
#define ETS_USB_SYNC	0x98BADCFE		/* SYNCH field, reversed to fit a kal_uint32 format */
#define	ETS_USB_SYNC_SZ	sizeof(kal_uint32)	/* size of SYNCH field */
#define	ETS_USB_PAD		0xFE			/* to pad ETS msgs to 4 bytes */
 
typedef PACKED_PREFIX struct {
	kal_uint32	Synch;		/* synch signature */
	kal_uint16	MsgLen;		/* msg size, including msg id */
	kal_uint16	MsgId;		/* ETS message id */
} PACKED_POSTFIX  EtsMsgHeaderT;


	/* ETS display size for MMI */	
#define ETS_MAX_DISPLAY_COLS      16
#define ETS_MAX_DISPLAY_ROWS      2

/*------------------------------------------------------------------------
 *	Mailbox, signal amd message IDs exported byETS
 *-----------------------------------------------------------------------*/




/*------------------------------------------------------------------------
 *	Mailbox, signal amd message IDs exported by ETS task
 *-----------------------------------------------------------------------*/

#define ETS_MAILBOX_ETS                 EXE_MAILBOX_1_ID  /* ETS (MonFault/trace/spy/mailbox */
#define ETS_MAILBOX_ETS_EVENT                 EXE_MESSAGE_MBOX_1  

#define ETS_MAILBOX_CMD      EXE_MAILBOX_2_ID  /* Command mailbox */
#define ETS_MAILBOX_CMD_EVENT      EXE_MESSAGE_MBOX_2  

#define ETS_QUEUE_FULL_SIGNAL       EXE_SIGNAL_1	/* used by EXE */
#define ETS_USB_RX_MSG_SIGNAL	    EXE_SIGNAL_2	/* data received */
#define ETS_USB_TX_MSG_SIGNAL	    EXE_SIGNAL_3	/* data sent */
#define ETS_UART_RX_ETS_MSG_SIGNAL  EXE_SIGNAL_4
#define ETS_STARTUP_SIGNAL          EXE_SIGNAL_5
#ifdef MTK_DEV_LOG_SPLM
#define ETS_RX_SPLM_MSG_SIGNAL	    EXE_SIGNAL_6
#endif

/* TBD: Change to ETS_R/TX_MSG_SIGNAL */
#define ETS_RX_ETS_MSG_SIGNAL		ETS_USB_RX_MSG_SIGNAL
#define ETS_TX_ETS_MSG_SIGNAL		ETS_USB_TX_MSG_SIGNAL

	/* grouping of USB data signals */
#define	ETS_USB_ALL_SIGNAL		    (ETS_USB_RX_MSG_SIGNAL | ETS_USB_TX_MSG_SIGNAL)

/*------------------------------------------------------------------------
 *	Message IDs for _ETS mailbox
 *-----------------------------------------------------------------------*/

	/* enum for ETS message IDs is in iopets.h */

	/* IOP_CP_DISPLAY_ETS */
typedef enum
{
   ETS_ROW_1 = 0,
   ETS_ROW_2 = 1
} EtsRowIdT;

typedef PACKED_PREFIX struct 
{
   kal_uint8          Row;
   kal_uint8          Column;
   kal_uint8          Text[ETS_MAX_DISPLAY_COLS + 1];
} PACKED_POSTFIX  EtsDispTextMsgT;

/* IOP_DSPM_PEEK_ETS */
/* IOP_DSPV_PEEK_ETS */
typedef PACKED_PREFIX struct 
{
   kal_uint16       StartAddr;
   kal_uint16       NumWords;
   kal_uint16       Data[1];
} PACKED_POSTFIX  EtsDspPeekRspMsgT;

/* IOP_GENERIC_ACK_ETS */
typedef PACKED_PREFIX struct 
{
   kal_uint16        MsgId;
} PACKED_POSTFIX  EtsGenericAckT;

/* IOP_ENABLE_GENERIC_ACK_MSG */
typedef PACKED_PREFIX struct
{
    ExeRspMsgT   RspInfo;    
    kal_uint16       Enable;
} PACKED_POSTFIX  EtsEnableGenericAckMsgT;

/* ETS_DEFERRED_HALT_MSG */
typedef PACKED_PREFIX struct 
{
    MonFaultUnitT UnitNum;
    kal_uint32        FaultCode1;
    kal_uint32        FaultCode2;
} PACKED_POSTFIX  EtsDeferredHaltMsgT;

/*------------------------------------------------------------------------
 *	Message IDs for _CMD mailbox
 *-----------------------------------------------------------------------*/

typedef enum
{
   ETS_ENABLE_GENERIC_ACK_MSG,
   ETS_SET_CHANNEL_DEVICE_MSG,
   ETS_DEFERRED_HALT_MSG,
#ifdef SYS_OPTION_DUAL_CARDS
   UIM_ETS_SET_ACCESS_SLOT_MSG,
#endif  
#ifdef MTK_DEV_LOG_FILTER_NVRAM
   ETS_NVRAM_LOG_FILTER_UPDATE_ACK_MSG,
   ETS_LOG_FILTER_UPDATE_MSG,
#endif
   ETS_CMD_MSG_NUM
} EtsMsgIdT;

/*------------------------------------------------------------------------
 *	Exported ETS  functions
 *-----------------------------------------------------------------------*/

extern void EtsTxCriticalFault(MonFaultUnitT UnitNum, kal_uint32 FaultCode1, kal_uint32 FaultCode2);

extern void	 EtsTxCriticalMsg( kal_uint32 MsgId, void *MsgDataP, kal_uint32 MsgDataSize );

extern void EtsTxFaultFileInfo(char *FilenameBuffer);

#if (defined(MTK_DEV_BUG_FIX_SS) && defined(BOARD_CBP80_FLASH)) || defined(MTK_PLT_MODEM_ONLY)
extern void EtsUartTxCriticalMsg( kal_uint32 MsgId, void* MsgDataP, kal_uint32 MsgDataSize ) ;
#endif

#ifdef MTK_DEV_OPTIMIZE_LOGGING
extern void MonLogOptUartTxEts (void);
#endif

#endif	/* ETSAPI_H */



