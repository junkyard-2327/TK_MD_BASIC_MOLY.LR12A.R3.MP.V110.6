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

  FILE NAME:  iopapi.h

  DESCRIPTION:

    This file contains all the constants, mail message definition and
    function prototypes exported by the IOP unit.

*****************************************************************************/

#ifndef IOPAPI_H
#define IOPAPI_H

#include "cpbuf.h"


/*------------------------------------------------------------------------
 *	Message IDs for _CMD mailbox
 *-----------------------------------------------------------------------*/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef SYS_OPTION_LTEDO_UART
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#endif

typedef enum
{
   IOP_ACK      = 0,
   IOP_SET_BAUD
} IopBaudCmdT;

typedef PACKED_PREFIX struct
{
   ExeRspMsgT   RspInfo;
   IopBaudCmdT  Cmd;
   kal_uint8        Delay;
} PACKED_POSTFIX  IopSetBaudMsgT;


	/* IOP_SETBAUD_DATA_MSG */
typedef PACKED_PREFIX struct
{
   ExeRspMsgT   RspInfo;
   kal_uint8        UartNum;
} PACKED_POSTFIX  IopSetDataBaudMsgT;

	/* IOP_USB_ETS_CTRL_MSG */
typedef PACKED_PREFIX struct
{
   kal_bool Open;
} PACKED_POSTFIX  IopUsbEtsCtrlMsgT;

	/* IOP_CNG_UART_MSG */
typedef enum {
	NO_UART,
	ETS_UART,
	GPS_UART,
	GPS_UART_VASCO
#if ((defined BLUETOOTH_CSR) || (defined BLUETOOTH_BCM2046))
    ,
    BT_UART
#endif

#ifdef SYS_OPTION_IOPHAL_UART
    ,
    AT_UART,
    DATA_UART,
    IOPHAL_UART
#endif
#ifdef SYS_OPTION_LTEDO_UART
  ,
  LTEDO_UART
#endif
}UartTypeT;



typedef enum
{
    IOP_HAL_SER_DEV,
    IOP_HAL_USB_DEV,
    IOP_HAL_DPRAM_DEV,
    IOP_HAL_SDIO_SLAVE_DEV,
    IOP_HAL_SDIO_MASTER_DEV,
    IOP_HAL_ESPI_DEV,
	IOP_HAL_MUX_DEV,
    IOP_HAL_CCIF_DEV,
    IOP_HAL_DEV_NUM,        /* Always last in this list */
    IOP_HAL_INVALID_DEV=0xff
}IOP_HAL_DEVICE;

typedef IOP_HAL_DEVICE IopDeviceHalT;
typedef	IOP_HAL_DEVICE IopDeviceInfoT;
typedef	IOP_HAL_DEVICE IopDeviceDataT;

typedef IOP_HAL_DEVICE CPTranDevT;

typedef PACKED_PREFIX struct {
	CPTranDevT	InfoDev;
} PACKED_POSTFIX  IopCpTxDevMsgT;

typedef PACKED_PREFIX struct {
	IopDeviceInfoT	InfoDev;
	IopDeviceDataT	DataDev;
} PACKED_POSTFIX  IopSetDevMsgT;

typedef PACKED_PREFIX struct {
    ExeRspMsgT   RspInfo;
	kal_uint8  Channel;
	kal_uint8  Device;
} PACKED_POSTFIX  IopChanSwitchMsgT;
#define SIZEOF_CH_SWITCH_RSP_MSG 2

typedef PACKED_PREFIX struct {
    ExeRspMsgT   RspInfo;
	kal_uint8  Channel;
} PACKED_POSTFIX  IopChanQueryMsgT;
#define SIZEOF_CH_QUERY_RSP_MSG 3

typedef PACKED_PREFIX struct {
    ExeRspMsgT   RspInfo;
	kal_uint8  Channel;
	kal_bool   state;
} PACKED_POSTFIX  IopChanOnOffMsgT;
#define SIZEOF_CH_ONOFF_RSP_MSG 2

	/* IOP_AIW_C109_IND_MSG */
typedef PACKED_PREFIX struct {
	kal_bool	C109On;	/* status of C109, active high */
	kal_uint8 chan;
} PACKED_POSTFIX  IopValC109IndMsgT;

   /* IOP_USB_C108_IND_MSG */
typedef PACKED_PREFIX struct {
	kal_bool	C108On;	/* status of C108 as reported by USB windriver, active high */
    kal_bool    CableUnplugged;    /* KAL_TRUE if this IND sent because cable unplugged */
} PACKED_POSTFIX  IopUsbC108IndMsgT;

	/* IOP_AIW_MODEM_ALIVE_MSG */
typedef PACKED_PREFIX struct {
	kal_bool	IsAlive;	/* KAL_TRUE == modem task is ready to accept AT cmds */
} PACKED_POSTFIX  IopValModemAliveMsgT;

	/* IOP_SET_DATA_THR */
typedef PACKED_PREFIX struct {
	kal_uint16	HighThr;	/* high threshold for data cache */
} PACKED_POSTFIX  IopSetDataThrMsgT;

#ifdef MTK_DEV_LOG_FILTER_NVRAM
typedef PACKED_PREFIX struct {
	kal_bool  NvramStartupLogFlag;
	kal_bool  NvramFilterUpdateFlag;
} PACKED_POSTFIX  IopNvramCtlMsgT;
#endif

typedef struct
{
    kal_uint8   mode;
    kal_uint8   frameType;
    kal_uint8   portSpeed;
    kal_uint16  N1;
    kal_uint8   T1;
    kal_uint8   N2;
    kal_uint8   T2;
    kal_uint8   T3;
    kal_uint8   K;
}IopMuxSysParaT;

/*------------------------------------------------------------------------
 *	Message IDs for _DATA mailbox
 *-----------------------------------------------------------------------*/

/*#ifdef BLUETOOTH_BC4*/
typedef struct
{
   kal_uint8       *Data;
   kal_uint16       DataLen;
}IopBTRxMsgT;

/*#endif*/

//don't modify following Enum, brew has referred to it
typedef enum {
  IOP_FWD_TX_REQ_MSG,        /* This command is used to send data to IOP */
  IOP_DATA_TX_ACK_MSG,       /* This command is used to acknowledge the receipt of data from IOP */
   IOP_BT_RX_REQ_MSG, /*BT Protocol stack send data to BC4*/
   IOP_BT_TX_ACK_MSG  /*BT Protocol stack  send ACK to CBP when it receive data*/
} IopDataMsgIdT;


/* Iop channels are now fixed regardless of build options for better maintainance.
   0-15 is reserved for CBP7 internal usage only and should not be used by third party */
typedef enum {
    IopControlChannel      = 0,
    IopEtsChannel          = 1,
    IopDataChannelPPP      = 2,
    IopDataChannelLBS      = 3,
    IopDataChannelVoice    = 4,
    IopDataChannelATCmds_1 = 5,
    IopDataChannelATCmds_2 = 6,
    IopEtsChannel_1        = 7,
#ifdef SYS_OPTION_ATCMD_CH_3
    IopDataChannelATCmds_3 = 8,
#ifdef SYS_OPTION_ATCMD_CH_4
    IopDataChannelATCmds_4 = 11,
#ifdef SYS_OPTION_MORE_AT_CHANNEL
    IopDataChannelATCmds_5 = 12,
    IopDataChannelATCmds_6 = 13,
    IopDataChannelATCmds_7 = 14,
    IopDataChannelATCmds_8 = 15,    
#endif /* SYS_OPTION_MORE_AT_CHANNEL */
#endif /* SYS_OPTION_ATCMD_CH_4 */
#endif /* SYS_OPTION_ATCMD_CH_3 */
#ifdef IOP_DEBUG_OPTION_DATA_LOOPBACK
    IopDataChannelLoopBack = 15,
#endif

    /* user extended channel should start from 16 */
    IopUserExtChannel      = 16,
#ifdef SYS_FLASH_LESS_SUPPORT
    IopDataChannelRfs      = 17,
#endif
    
    IopSysChannelNum,
    IopAllChanNum=IopSysChannelNum
} IopDataChannel;

//don't modify following Struct, brew has referred to it
typedef PACKED_PREFIX struct {
   ExeRspMsgT   RspInfo;
   kal_uint8       *Data;
   kal_uint16       DataLen;
   kal_uint8        chan;
} PACKED_POSTFIX  IopValFwdTxMsgT;

typedef PACKED_PREFIX struct {
   ExeRspMsgT  RevDestInfo;
   IopDataChannel Channel;
} PACKED_POSTFIX  IopSetRevDataPathMsgT;

/*------------------------------------------------------------------------
 *	Message IDs for _GPS mailbox
 *-----------------------------------------------------------------------*/
typedef enum {
  IOP_GPS7560_TX_DATA_MSG       /* Data from external GPS */
} IopGpsMsgIdT;

typedef struct
{
	kal_uint16  DataLen;
	kal_uint8   Data[2];  /* This is just place holder.  We make it 2 bytes for alignment */
} IopGps7560TxDataMsgT;

/*------------------------------------------------------------------------
 *	Definitions and exported functions for handling data with CpBuffers
 *-----------------------------------------------------------------------*/
#define PPP_CHANNEL_FWD_QDEPTH   450
#define PPP_CHANNEL_REV_QDEPTH   300

typedef enum {
    IopDataChRetOK,
    IopDataChRetNA,    /*Channel not available */
    IopDataChRetFull,    /* Buffer Q full */
    IopDataChRetOK_Empty,    /* Buffer Q empty after read successfully */
    IopDataChRetErr    /* Error occurred. */
} IopDataChRetStatus;

typedef  struct {
   CpBufferT   *bufPtr;
   kal_uint16      offset;
   kal_uint16      dataLen;
   kal_uint8       nRLPFlow;
   kal_uint8       streamType;

   kal_uint16 tcpTag;
   kal_uint32 tcpPort;
   kal_uint32 srcIpAddr;
   kal_uint32 dstIpAddr;

#ifdef CBP7_EHRPD
   kal_uint16 FrameType;   /* distinguish Ipv4/Ipv6 and PDN-ID */
#endif

   kal_uint8  BearerId;
} IopDataCpBuffDescT;

#define IOP_DEBUG_RX_INFO_IDX     (30)
#define IOP_DEBUG_TX_INFO_IDX     (60)

/* store the 4-line information */
typedef struct
{
    kal_uint32 header;

	/*Rx device type and the Rxstatus of this device*/
	kal_uint8 RxDevStatus;
	kal_uint8 RxLastDevStatus;

	/*Tx device type and the Txstatus of this device*/
	kal_uint8 TxDevStatus;
	kal_uint8 TxLastDevStatus;

	/* the GPIO value for 4-line */
	kal_uint8  CpWkApGpio;
	kal_uint8  CpRdyGpio;
	kal_uint8  ApWkCpGpio;
	kal_uint8  ApRdyGpio;

    /* store the log information */
    kal_uint16              TxLogBuffIdx;
	kal_uint16              RxLogBuffIdx;
	kal_uint16              TxLogBuff[IOP_DEBUG_TX_INFO_IDX];
	kal_uint16              RxLogBuff[IOP_DEBUG_RX_INFO_IDX];

	kal_uint32 footer;
}IopStatusInfoT;


/* Frame type in IopDataCpBuffDescT structure, the lower 8 bit is PDN-ID */
#define IOP_DATA_EIPV4_TYPE	0xA000  /* EHRPD IPv4 with PDN-ID (0xA0xx) */
#define IOP_DATA_EIPV6_TYPE	0xA100  /* EHRPD IPv6 with PDN-ID (0xA1xx) */
#define IOP_DATA_IPV4_TYPE	IOP_DATA_EIPV4_TYPE  /* IPv4 for 1x/DO is fixed to 0xA000 */
#define IOP_DATA_IPV6_TYPE	IOP_DATA_EIPV6_TYPE  /* IPv6 for 1x/DO is fixed to 0xA100 */
#define IOP_DATA_NULL_TYPE  0       /* No info in IPC Data frame */
#ifdef  SYS_OPTION_IOP_CCIF
#define IOP_DATA_PDNID_MASK 0x007F  /* mask for PDN ID */
#define CCMNI_CHANNEL_HEADER_FALG    (1U << 7)
#define CCMNI_CHANNEL_NUM            8
#else
#define IOP_DATA_PDNID_MASK 0x00FF  /* mask for PDN ID */
#endif
/*  Flags for IopWrite/IopRead functions
  */
#define IOP_WRITE_FLAG_SND_ACK  (1<<0)
#ifdef IOP_DEV_CH_LOOP_TEST
typedef enum {
    OPT_LOOPBACK_NON   = 0,
	OPT_LOOPBACK_OPEN  = 1,
	OPT_LOOPBACK_CLOSE = 2,
	OPT_LOOPBACK_QUERY = 3,
	OPT_LOOPBACK_NUM
}IOP_OPT_LOOPBACK;

typedef enum {
	RSLT_LOOPBACK_SUCCESS  = 0,
	RSLT_LOOPBACK_WORK = 1,
	RSLT_LOOPBACK_CLOSED = 2,
	RSLT_LOOPBACK_INVALID = 3,
	RSLT_LOOPBACK_FAIL = 4,
	RSLT_LOOPBACK_NUM
}IOP_RSLT_LOOPBACK;

typedef struct {
	IopDeviceInfoT Dev;
	IOP_OPT_LOOPBACK  Operation;
	kal_uint8         Lchan;
	kal_uint8         Reserv;
}IopCtrlLoopbackMsg;

typedef struct {
	IopDeviceInfoT Dev;
	IOP_OPT_LOOPBACK  Operation;
	kal_uint8         Lchan;
	IOP_RSLT_LOOPBACK Result;
}IopAckLoopbackMsg;
#endif

/* CCIF dev  */
#ifdef SYS_OPTION_IOP_CCIF
/* IOP channel */
typedef enum
{
#ifndef SYS_OPTION_CCIF_LOOPTEST
    IOP_CCIF_CTRL_CHANNEL,
    IOP_CCIF_VOICE_CHANNEL,  /* voice with high priority */
    IOP_CCIF_PPP_CHANNEL,
    IOP_CCIF_ETS_CTRL_CHANNEL,
#if (SYS_OPTION_IPC_DEV == SYS_IPC_DEV_CCIF)
    IOP_CCIF_RFS_CHANNEL,
#endif
    IOP_CCIF_AT_1_CHANNEL,
    IOP_CCIF_LBS_CHANNEL,
#ifdef SYS_OPTION_ATCMD_CH_2
    IOP_CCIF_AT_2_CHANNEL,
#endif
#ifdef SYS_OPTION_ATCMD_CH_3
    IOP_CCIF_AT_3_CHANNEL,
#endif
    IOP_CCIF_ETS_CHANNEL,
#ifdef SYS_OPTION_ATCMD_CH_4
    IOP_CCIF_AT_4_CHANNEL,
#endif
    IOP_CCIF_CCMNI_0_CHANNEL = 12,
    IOP_CCIF_CCMNI_1_CHANNEL = 13,
    IOP_CCIF_CCMNI_2_CHANNEL = 14,
    IOP_CCIF_CCMNI_3_CHANNEL = 15,
    IOP_CCIF_CCMNI_4_CHANNEL = 16,
    IOP_CCIF_CCMNI_5_CHANNEL = 17,
    IOP_CCIF_CCMNI_6_CHANNEL = 18,
    IOP_CCIF_CCMNI_7_CHANNEL = 19,
#ifdef SYS_OPTION_MORE_AT_CHANNEL
    IOP_CCIF_AT_5_CHANNEL    = 20,
    IOP_CCIF_AT_6_CHANNEL    = 21,
    IOP_CCIF_AT_7_CHANNEL    = 22,
    IOP_CCIF_AT_8_CHANNEL    = 23,
#endif /* SYS_OPTION_NEW_ADD_AT_CHANNEL */


#else
    IOP_CCIF_TEST0_CHANNEL,
    IOP_CCIF_TEST1_CHANNEL,
    IOP_CCIF_TEST2_CHANNEL,
#endif
    IOP_CCIF_NUM_CHANNELS

}IopCcifChannelT;


/* CCIF ringbuffer software header */
typedef struct
{
    kal_uint32           Data[2];
    kal_uint32           Channel;
    kal_uint32           Reserved;
} IopBuffT;


typedef enum
{
    IOP_CCIF_PQ_0,   /* priority queue 0 , the most high  priority */
    IOP_CCIF_PQ_1,
    IOP_CCIF_PQ_2,
    IOP_CCIF_PQ_3,
    IOP_CCIF_PQ_4,
    IOP_CCIF_PQ_5,
    IOP_CCIF_PQ_6,
    IOP_CCIF_PQ_7,
    IOP_CCIF_PQ_MAX
}IopCcifPriQueT;

/*!
 *  @brief  CONTROL_CHANNEL_MSG
 *             CCCI Message ID Passing Through CONTROL_CHANNEL and SYSTEM_CHANNEL
 *             NOTICE: Negotiations With AP Owner Before Modification
 */
typedef enum
{
    CCMSG_ID_START_BOOT        = 0x00000000,
    CCMSG_ID_NORMAL_BOOT_READY = 0x00000001,
    CCMSG_ID_META_BOOT_READY   = 0x00000002,
    CCMSG_ID_RESET             = 0x00000003,
    CCMSG_ID_EXCEPTION_CHECK   = 0x00000004,
    CCMSG_ID_DRV_VERSION_ERR   = 0x00000005,
    CCMSG_ID_EXCEPTION_REC_OK  = 0x00000006,
    CCMSG_ID_EXCEPTION_PASS    = 0x00000008,
    /* System Channel */
    CCMSG_ID_MD_L4_MOD         = 0x0000000E,//add for RIL (AP task) and L4C (MD task) communication message
    CCMSG_ID_MD_L4_MAX_TX_PWR_RED_REQ = 0x0000000F,

    CCMSG_ID_MD_LEGACY_END     = 0x000000FF,
    CCMSG_ID_SYSMSGSVC_MASK    = 0x00000100,
    CCMSG_ID_SYSMSGSVC_START   = 0x00000100,
    CCMSG_ID_SYSMSGSVC_DUMMY   = 0x000000FF,
    //- section 0x100 ~ 0x1FF : reserved for system message service used

    CCMSG_ID_SYSMSGSVC_END,

    CCMSG_ID_MD_WDT_FLAG       = 0x00001000, //- for MT6577/MT6589, AP cannot receive MD WDT interrupt issue. k2 md2 6589, for resolving wdt build error

}CONTROL_CHANNEL_MSG;
#endif

#ifdef SYS_OPTION_CCISM_2SCP

typedef struct
{
    kal_uint8*  Buffp;
    kal_uint32  Len;
}IopCcismBufDescT;

typedef enum
{
    IOP_CCISM_AUDIO_CHANNEL,
    IOP_CCISM_GEOFENCE_CHANNEL,
    IOP_CCISM_MAX_CHANNEL
}IopCcismChT;

typedef enum
{
    IOP_CCISM_PQ_0,   /* priority queue 0 , the most high  priority */
    IOP_CCISM_PQ_1,
    IOP_CCISM_PQ_MAX
}IopCcismPriQueT;

#endif
/*------------------------------------------------------------------------
 *	The following IOP functions shared by USB, DPRAM. SDIO etc.
 *-----------------------------------------------------------------------*/
extern IopDataChRetStatus IopWrite(IopDataCpBuffDescT * Buff, IopDataChannel channel, kal_uint32 flags);
extern IopDataChRetStatus IopRead(IopDataCpBuffDescT* Buff, IopDataChannel channel, kal_uint32 flags);
extern kal_uint16 IopCheckRxReadyStatus(IopDataChannel channel);
extern kal_uint16 IopCheckTxReadyStatus(IopDataChannel channel);
extern void IopCleanUpRevQue (void);
extern void IopDisableRevFlowCtl(void);
extern void IopSetRevPathAtPPPChannel(IopSetRevDataPathMsgT*);
extern void IopGetRevPathAtPPPChannel(IopSetRevDataPathMsgT*);
extern kal_uint8 IopGetC108Status(void);

/*------------------------------------------------------------------------
 *	Exported IOP functions
 *-----------------------------------------------------------------------*/

//extern void IopSetBaudRate(IopBaudT BaudRate, kal_uint8 UartNum);
extern void IopUpdateDataUartSettings(void);
extern kal_uint8 IopUartNumGet(UartTypeT UartType);
#if (SYS_OPTION_USB != SYS_USB_NONE)
extern void IopUsbSetDevice(void);
#endif
extern void IopSerSetDevice(void);
#ifdef IOP_DEV_CH_LOOP_TEST
extern IOP_RSLT_LOOPBACK RfsLoopTstCmdHandler(IopDeviceInfoT Dev, IOP_OPT_LOOPBACK Operation);
extern IOP_RSLT_LOOPBACK IopEtsLoopTstCmdHandler(IopDeviceInfoT Dev, IOP_OPT_LOOPBACK Operation);
#endif
#endif	/* IOPAPI_H */

/*****************************************************************************
  End of File
******************************************************************************/

/**Log information: \main\Trophy_0.3.X\1 2013-03-29 09:00:13 GMT fwu
** HREF#008278, Support uart to be the AT communication channel between AP and CP.**/
/**Log information: \main\Trophy\Trophy_fwu_href22082\1 2013-04-03 02:26:29 GMT fwu
** HREF#22082, Modified to support UART1 to be the AT channel between AP and CP.**/
/**Log information: \main\Trophy\1 2013-04-03 02:57:01 GMT hzhang
** HREF#22082 to merge code.**/
/**Log information: \main\Trophy\Trophy_xding_href22331\1 2013-12-10 07:17:49 GMT xding
** HREF#22331, 合并MMC相关功能到Trophy baseline上**/
/**Log information: \main\Trophy\2 2013-12-10 08:33:18 GMT jzwang
** href#22331:Merge MMC latest implementation from Qilian branch.**/
/**Log information: \main\Trophy\Trophy_fwu_href22333\1 2013-12-17 04:59:22 GMT fwu
** HREF#22333. Trophy cbp82c_flashless_sdio_mmc version will crash when LTEDO_UART is enabled.**/
/**Log information: \main\Trophy\3 2013-12-17 05:29:19 GMT hzhang
** HREF#22333 to modify IOP_LTEDOUART_RX_SIGNAL definition **/
/**Log information: \main\Trophy\Trophy_fwu_href22348\1 2014-01-08 06:17:22 GMT fwu
** HREF#22348. Merge ESPI related source code.**/
/**Log information: \main\Trophy\4 2014-01-09 06:34:40 GMT zlin
** HREF#22348, merge code.**/

