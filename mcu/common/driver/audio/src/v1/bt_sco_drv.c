/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *  BT_SCO_drv.c
 *
 * Project:
 * --------
 *  Maui_sw
 *
 * Description:
 * ------------
 *  BT SCO driver
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#if defined(__CVSD_CODEC_SUPPORT__) 

#include "kal_public_defs.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_trace.h"
#include "l1audio.h"
#include "speech_def.h"
#include "media.h"
#include "audio_enum.h"
#include "l1sp_trc.h"
#include "bt_sco_drv.h"
#include "cvsd_codec_exp.h"
#include "sp_daca.h"
#include "intrCtrl.h"
#include "audio_dsp_d2c_def.h"
#include "dcl.h"
#include "msbc_codec_exp.h"
#include "afe.h"
#include "us_timer.h"

/* for SP_LOG */
#include "audio_msgid.h"
#include "speech_service.h"
//#define DISABLE_BTCVSD_FOR_CHIPBACK_BOOTUP 1
//#define DELAY_UNMASK_INTERRUPT 1

extern void L1Audio_TrigD2CHisr(uint16 magicNo);

#define SCO_CVSD_BUFFER_SIZE 30000//24004//(13296)
static kal_uint8 SCO_CVSD_BUFFER[SCO_CVSD_BUFFER_SIZE];

#if defined(DELAY_UNMASK_INTERRUPT)
static kal_uint32 uCVSDGPT;
#endif

static const kal_uint32 btsco_PacketValidMask[6][6] = {{0x1   , 0x1<<1, 0x1<<2, 0x1<<3, 0x1<<4 , 0x1<<5 },  //30
                                                       {0x1   , 0x1   , 0x2   , 0x2   , 0x4    , 0x4    },  //60
                                                       {0x1   , 0x1   , 0x1   , 0x2   , 0x2    , 0x2    },  //90
                                                       {0x1   , 0x1   , 0x1   , 0x1   , 0      , 0      },  //120
                                                       {0x7   , 0x7<<3, 0x7<<6, 0x7<<9, 0x7<<12, 0x7<<15},  //10
                                                       {0x3   , 0x3<<1, 0x3<<3, 0x3<<4, 0x3<<6 , 0x3<<7 }}; //20

static const kal_uint8 btsco_PacketInfo[6][6] = {{ 30, 6, BT_SCO_PACKET_180/SCO_TX_ENCODE_SIZE, BT_SCO_PACKET_180/SCO_RX_PLC_SIZE},  // 30, 6, 3, 6
                                                 { 60, 3, BT_SCO_PACKET_180/SCO_TX_ENCODE_SIZE, BT_SCO_PACKET_180/SCO_RX_PLC_SIZE},  // 60, 3, 3, 6
                                                 { 90, 2, BT_SCO_PACKET_180/SCO_TX_ENCODE_SIZE, BT_SCO_PACKET_180/SCO_RX_PLC_SIZE},  // 90, 2, 3, 6
                                                 {120, 1, BT_SCO_PACKET_120/SCO_TX_ENCODE_SIZE, BT_SCO_PACKET_120/SCO_RX_PLC_SIZE},  //120, 1, 2, 4
                                                 { 10,18, BT_SCO_PACKET_180/SCO_TX_ENCODE_SIZE, BT_SCO_PACKET_180/SCO_RX_PLC_SIZE},  // 10,18, 3, 6
                                                 { 20, 9, BT_SCO_PACKET_180/SCO_TX_ENCODE_SIZE, BT_SCO_PACKET_180/SCO_RX_PLC_SIZE}}; // 20, 9, 3, 6

static const kal_uint8 btsco_MsbcHeader[4] = {0x08, 0x38, 0xc8, 0xf8};

static const kal_uint8 table_msbc_silence[180] = {
    0x01, 0x38, 0xad, 0x00, 0x00, 0xc5, 0x00, 0x00, 0x00, 0x00,
        0x77, 0x6d, 0xb6, 0xdd, 0xdb, 0x6d, 0xb7, 0x76, 0xdb, 0x6d,
        0xdd, 0xb6, 0xdb, 0x77, 0x6d, 0xb6, 0xdd, 0xdb, 0x6d, 0xb7,
        0x76, 0xdb, 0x6d, 0xdd, 0xb6, 0xdb, 0x77, 0x6d, 0xb6, 0xdd,
        0xdb, 0x6d, 0xb7, 0x76, 0xdb, 0x6d, 0xdd, 0xb6, 0xdb, 0x77,
        0x6d, 0xb6, 0xdd, 0xdb, 0x6d, 0xb7, 0x76, 0xdb, 0x6c, 0x00,
        0x01, 0xc8, 0xad, 0x00, 0x00, 0xc5, 0x00, 0x00, 0x00, 0x00,
        0x77, 0x6d, 0xb6, 0xdd, 0xdb, 0x6d, 0xb7, 0x76, 0xdb, 0x6d,
        0xdd, 0xb6, 0xdb, 0x77, 0x6d, 0xb6, 0xdd, 0xdb, 0x6d, 0xb7,
        0x76, 0xdb, 0x6d, 0xdd, 0xb6, 0xdb, 0x77, 0x6d, 0xb6, 0xdd,
        0xdb, 0x6d, 0xb7, 0x76, 0xdb, 0x6d, 0xdd, 0xb6, 0xdb, 0x77,
        0x6d, 0xb6, 0xdd, 0xdb, 0x6d, 0xb7, 0x76, 0xdb, 0x6c, 0x00,
        0x01, 0xf8, 0xad, 0x00, 0x00, 0xc5, 0x00, 0x00, 0x00, 0x00,
        0x77, 0x6d, 0xb6, 0xdd, 0xdb, 0x6d, 0xb7, 0x76, 0xdb, 0x6d,
        0xdd, 0xb6, 0xdb, 0x77, 0x6d, 0xb6, 0xdd, 0xdb, 0x6d, 0xb7,
        0x76, 0xdb, 0x6d, 0xdd, 0xb6, 0xdb, 0x77, 0x6d, 0xb6, 0xdd,
        0xdb, 0x6d, 0xb7, 0x76, 0xdb, 0x6d, 0xdd, 0xb6, 0xdb, 0x77,
        0x6d, 0xb6, 0xdd, 0xdb, 0x6d, 0xb7, 0x76, 0xdb, 0x6c, 0x00
};

kal_spinlockid bt_lockId;
kal_enhmutexid bt_mutex;

static struct{
   BT_SCO_TX *pTX;
   BT_SCO_RX *pRX;
   kal_uint8 *pTempPacketBuf;
   kal_uint8 *pSpeechData;
   kal_uint16 uAudId;
   BT_SCO_STATE uState;
   BT_SCO_MODE uMode;
   bool fBtError;
   bool fWideBand;
}btsco;

void BT_SCO_LISR(void);

//=============================================================================================
//    BT SCO Buffer control interface
//=============================================================================================

static void BT_SCO_GetReadBuffer_RX(kal_uint8 **pBuf, kal_uint32 *pLen)
{
   ASSERT(btsco.pRX->RingBuffer.rb_base);
   rbGetReadBuffer(&btsco.pRX->RingBuffer, pBuf, pLen);
}

static void BT_SCO_ReadDataDone_RX(kal_uint32 uLen)
{
   ASSERT(btsco.pRX->RingBuffer.rb_base);
   rbReadDataDone(&btsco.pRX->RingBuffer, uLen);
}

static kal_int32 BT_SCO_GetDataCount_RX()
{
   ASSERT(btsco.pRX->RingBuffer.rb_base);
   return rbGetDataCount(&btsco.pRX->RingBuffer);
}

static void BT_SCO_GetWriteBuffer_TX(kal_uint8 **pBuf, kal_uint32 *pLen)
{
   ASSERT(btsco.pTX->RingBuffer.rb_base);
   rbGetWriteBuffer(&btsco.pTX->RingBuffer, pBuf, pLen);
}

static void BT_SCO_WriteDataDone_TX(kal_uint32 uLen)
{
   ASSERT(btsco.pTX->RingBuffer.rb_base);
   rbWriteDataDone(&btsco.pTX->RingBuffer, uLen);
}

static kal_int32 BT_SCO_GetFreeSpace_TX()
{
   ASSERT(btsco.pTX->RingBuffer.rb_base);
   return rbGetFreeSpace(&btsco.pTX->RingBuffer);
}

static void btsco_GetReadBuffer_TX(kal_uint8 **pBuf, kal_uint32 *pLen)
{
   ASSERT(btsco.pTX->RingBuffer.rb_base);
   rbGetReadBuffer(&btsco.pTX->RingBuffer, pBuf, pLen);
}

static void btsco_ReadDataDone_TX(kal_uint32 uLen)
{
   ASSERT(btsco.pTX->RingBuffer.rb_base);
   rbReadDataDone(&btsco.pTX->RingBuffer, uLen);
}

static kal_uint32 btsco_GetDataCount_TX()
{
   ASSERT(btsco.pTX->RingBuffer.rb_base);
   return rbGetDataCount(&btsco.pTX->RingBuffer);
}

static kal_int32 btsco_GetFreeSpace_RX()
{
   ASSERT(btsco.pRX->RingBuffer.rb_base);
   return rbGetFreeSpace(&btsco.pRX->RingBuffer);
}

static void btsco_GetWriteBuffer_RX(kal_uint8 **pBuf, kal_uint32 *pLen)
{
   ASSERT(btsco.pRX->RingBuffer.rb_base);
   rbGetWriteBuffer(&btsco.pRX->RingBuffer, pBuf, pLen);
}

static void btsco_WriteDataDone_RX(kal_uint32 uLen)
{
   ASSERT(btsco.pRX->RingBuffer.rb_base);
   rbWriteDataDone(&btsco.pRX->RingBuffer, uLen);
}

//=============================================================================================
//    BT SCO Internal Function
//=============================================================================================

static void btsco_DataTransfer(BT_SCO_DIRECT uDir, kal_uint8 *pSrc, kal_uint8 *pDst, kal_uint32 uBlockSize, kal_uint32 uBlockNum  )
{
   kal_int32 i, j;
   if(uBlockSize == 60 || uBlockSize == 120 || uBlockSize == 20)
   {
      kal_uint32 *pSrc32 = (kal_uint32*)pSrc;
      kal_uint32 *pDst32 = (kal_uint32*)pDst;
      for(i=0 ; i<(uBlockSize*uBlockNum/4) ; i++)
      {
         *pDst32++ = *pSrc32++;
         if(uDir == BT_SCO_DIRECT_ARM2BT && i%3==0)
         {
            AFE_DELAY(15);
         }
      }
   }
   else
   {
      kal_uint16 *pSrc16 = (kal_uint16*)pSrc;
      kal_uint16 *pDst16 = (kal_uint16*)pDst;
      for(j=0 ; j< uBlockNum ; j++)
      {
         for(i=0 ; i<(uBlockSize/2) ; i++)
         {
            *pDst16++ = *pSrc16++;
            if(uDir == BT_SCO_DIRECT_ARM2BT && i%3==0)
            {
               AFE_DELAY(15);
            }
         }
         if(uDir == BT_SCO_DIRECT_BT2ARM)
         {
            pSrc16++;
         }
         else
         {
            pDst16++;
         }         
      }
   }
}


static void btsco_ReadFromBT(BT_SCO_PACKET_LEN uLen, kal_uint32 uPacketLength, kal_uint32 uPacketNumber, kal_uint32 uBlockSize, kal_uint32 uControl)
{
   kal_int32 i;
   #if defined(MT6765) || defined(MT6761) || defined(MT6768)|| defined(MT2731)
   kal_uint8 *pSrc = (kal_uint8 *)(BTSRAM_base + ((*BT_SCO_HW_REG_PACKET_R & 0xFFFF)));
   #else
   kal_uint8 *pSrc = (kal_uint8 *)(BTSRAM_base + ((((*BT_SCO_HW_REG_PACKET_R & 0x00F00000)>>4)-0x00010000) | (*BT_SCO_HW_REG_PACKET_R & 0xFFFF)));
   #endif
     if(*BT_SCO_HW_REG_PACKET_W == 0 || *BT_SCO_HW_REG_PACKET_R == 0 ||*BT_SCO_HW_REG_PACKET_W == 0xDEADFEED ||*BT_SCO_HW_REG_PACKET_R == 0xDEADFEED
	 	||(*BT_SCO_HW_REG_PACKET_R & 0xFFFF)==0xFEED) 
     {   
		kal_dev_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_CONTROL, 0x0, 0x0, *BT_SCO_HW_REG_PACKET_W, *BT_SCO_HW_REG_PACKET_R);
		 btsco.fBtError = KAL_TRUE;
		 return;
      }
	    
   btsco_DataTransfer(BT_SCO_DIRECT_BT2ARM, pSrc, btsco.pTempPacketBuf, uPacketLength, uPacketNumber );
   SPLog_LogData(MSG_ID_AUDIO_LOGGING_BT_RX, (kal_uint32)(uPacketLength*uPacketNumber), btsco.pTempPacketBuf);
   if(btsco.uState ==  BT_SCO_STATE_ENDING)
   {
#if defined(__MSBC_CODEC_SUPPORT__)
      if(btsco.fWideBand)
      {
         memset(btsco.pTempPacketBuf,	0, uPacketLength*uPacketNumber*sizeof(kal_uint8));
      }
      else
#endif
      {
         memset(btsco.pTempPacketBuf, 0x55, uPacketLength*uPacketNumber*sizeof(kal_uint8));
      }
   }
   for(i=0;i<uBlockSize;i++)
   {
      memcpy(btsco.pRX->PacketBuf[btsco.pRX->iPacket_w & SCO_RX_PACKET_MASK], btsco.pTempPacketBuf+(SCO_RX_PLC_SIZE*i), SCO_RX_PLC_SIZE);
      if( (uControl & btsco_PacketValidMask[uLen][i]) == btsco_PacketValidMask[uLen][i])
      {
         btsco.pRX->PacketValid[btsco.pRX->iPacket_w & SCO_RX_PACKET_MASK] = 1 ; //packet valid
      }
      else
      {
         btsco.pRX->PacketValid[btsco.pRX->iPacket_w & SCO_RX_PACKET_MASK] = 0 ; //packet invalid
	  }
      btsco.pRX->iPacket_w++;
   }
}

static void btsco_WriteToBT(BT_SCO_PACKET_LEN uLen, kal_uint32 uPacketLength, kal_uint32 uPacketNumber, kal_uint32 uBlockSize, kal_bool fFillSilence)
{
   kal_int32 i;
   #if defined(MT6765) || defined(MT6761) || defined(MT6768)|| defined(MT2731)
   kal_uint8 *pDst = (kal_uint8 *)(BTSRAM_base + ((*BT_SCO_HW_REG_PACKET_W & 0xFFFF)));  
   #else
   kal_uint8 *pDst = (kal_uint8 *)(BTSRAM_base + ((((*BT_SCO_HW_REG_PACKET_W & 0x00F00000)>>4)-0x00010000) | (*BT_SCO_HW_REG_PACKET_W & 0xFFFF)));
   #endif
     if(*BT_SCO_HW_REG_PACKET_W == 0 || *BT_SCO_HW_REG_PACKET_R == 0 ||*BT_SCO_HW_REG_PACKET_W == 0xDEADFEED ||*BT_SCO_HW_REG_PACKET_R == 0xDEADFEED 
	 	||(*BT_SCO_HW_REG_PACKET_W & 0xFFFF) ==0xFEED) 
     {   
		kal_dev_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_CONTROL, 0x02, 0x02, *BT_SCO_HW_REG_PACKET_W, *BT_SCO_HW_REG_PACKET_R);
		 btsco.fBtError = KAL_TRUE;
		 return;
      }
   if(fFillSilence == KAL_TRUE)
   {
#if defined(__MSBC_CODEC_SUPPORT__)
	  if(btsco.fWideBand)
	  {
         //memset(btsco.pTempPacketBuf,    0, uPacketLength*uPacketNumber*sizeof(kal_uint8));
         ASSERT( 180 == (uPacketLength*uPacketNumber));
         memcpy(btsco.pTempPacketBuf, table_msbc_silence, uPacketLength*uPacketNumber*sizeof(kal_uint8));
      }
      else
#endif
      {
         memset(btsco.pTempPacketBuf, 0x55, uPacketLength*uPacketNumber*sizeof(kal_uint8));
      }
   }
   else
   {
      for(i=0;i<uBlockSize;i++)
      { 
         memcpy(btsco.pTempPacketBuf+(SCO_TX_ENCODE_SIZE*i), btsco.pTX->PacketBuf[btsco.pTX->iPacket_r & SCO_TX_PACKET_MASK], SCO_TX_ENCODE_SIZE);
         btsco.pTX->iPacket_r++;
      }
   }
   btsco_DataTransfer(BT_SCO_DIRECT_ARM2BT, btsco.pTempPacketBuf, pDst, uPacketLength, uPacketNumber );
   SPLog_LogData(MSG_ID_AUDIO_LOGGING_BT_TX, (kal_uint32)(uPacketLength*uPacketNumber), btsco.pTempPacketBuf);
}

static void btsco_hisr_internal()
{
   kal_uint32 curr_frc, latest_us;	
   kal_uint32 uPacketType, uPacketNumber, uPacketLength, uBufferCount_TX, uBufferCount_RX, uControl;
   if((btsco.uState != BT_SCO_STATE_RUNNING) && (btsco.uState !=  BT_SCO_STATE_ENDING))
   {
   	  kal_give_spinlock(bt_lockId);
      return;
   }
   uControl = *BT_SCO_HW_REG_CONTROL;
   uPacketType = (uControl >> 18) & 0x7;
   kal_dev_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_CONTROL, uControl, uPacketType, *BT_SCO_HW_REG_PACKET_W, *BT_SCO_HW_REG_PACKET_R);

   btsco.fBtError = KAL_FALSE;
   if(*BT_SCO_HW_REG_PACKET_W == 0 || *BT_SCO_HW_REG_PACKET_R == 0 || uControl == 0) 
   {   
      kal_trace( TRACE_FUNC, CVSD_BTSCO_HISR_ADDRESS, BT_SCO_HW_REG_PACKET_W, BT_SCO_HW_REG_PACKET_R, BT_SCO_HW_REG_CONTROL);
      btsco.fBtError = KAL_TRUE;
      kal_give_spinlock(bt_lockId);
      return;
   }
   // consys in sleep will return 0xDEADFEED (DE(Congliang Liao))
   //1. connsys in sleep
   //2. connsys mcu enter FW exception
   if(*BT_SCO_HW_REG_PACKET_W == 0xDEADFEED || *BT_SCO_HW_REG_PACKET_R == 0xDEADFEED || uControl == 0xDEADFEED) 
   {   
      kal_trace( TRACE_FUNC, CVSD_BTSCO_HISR_ADDRESS, BT_SCO_HW_REG_PACKET_W, BT_SCO_HW_REG_PACKET_R, BT_SCO_HW_REG_CONTROL);
      btsco.fBtError = KAL_TRUE;
      kal_give_spinlock(bt_lockId);
      return;
   }
   
   
   if( ((uControl>>31) & 1) == 0)
   {
   	  kal_give_spinlock(bt_lockId);
      return;
   }
   ASSERT(uPacketType < BT_SCO_CVSD_MAX);
   uPacketLength   = (kal_uint32)btsco_PacketInfo[uPacketType][0];
   uPacketNumber   = (kal_uint32)btsco_PacketInfo[uPacketType][1];
   uBufferCount_TX = (kal_uint32)btsco_PacketInfo[uPacketType][2];
   uBufferCount_RX = (kal_uint32)btsco_PacketInfo[uPacketType][3];

   if(btsco.uMode == BT_SCO_MODE_LOOPBACK_WITHOUT_CODEC) // read data from BT and write back directly
   {
      kal_uint8 *pDst, *pSrc;
      pDst = (kal_uint8 *)(BTSRAM_base + ((((*BT_SCO_HW_REG_PACKET_W & 0x00F00000)>>4)-0x00010000) | (*BT_SCO_HW_REG_PACKET_W & 0xFFFF)));
      pSrc = (kal_uint8 *)(BTSRAM_base + ((((*BT_SCO_HW_REG_PACKET_R & 0x00F00000)>>4)-0x00010000) | (*BT_SCO_HW_REG_PACKET_R & 0xFFFF)));
      if(*BT_SCO_HW_REG_PACKET_W == 0 || *BT_SCO_HW_REG_PACKET_R == 0 || uControl == 0) 
     {   
		 kal_trace( TRACE_FUNC, CVSD_BTSCO_HISR_ADDRESS, BT_SCO_HW_REG_PACKET_W, BT_SCO_HW_REG_PACKET_R, BT_SCO_HW_REG_CONTROL);
		 btsco.fBtError = KAL_TRUE;
		 kal_give_spinlock(bt_lockId);
		 return;
      }
	 
     if(*BT_SCO_HW_REG_PACKET_W == 0xDEADFEED || *BT_SCO_HW_REG_PACKET_R == 0xDEADFEED || uControl == 0xDEADFEED) 
     {   
	          kal_trace( TRACE_FUNC, CVSD_BTSCO_HISR_ADDRESS, BT_SCO_HW_REG_PACKET_W, BT_SCO_HW_REG_PACKET_R, BT_SCO_HW_REG_CONTROL);
		 btsco.fBtError = KAL_TRUE;
		 kal_give_spinlock(bt_lockId);
		 return;
     }
      btsco_DataTransfer(BT_SCO_DIRECT_BT2ARM, pSrc, btsco.pTempPacketBuf, uPacketLength, uPacketNumber );
      btsco_DataTransfer(BT_SCO_DIRECT_ARM2BT, btsco.pTempPacketBuf, pDst, uPacketLength, uPacketNumber );
      kal_give_spinlock(bt_lockId);
      return;
   }
   curr_frc = ust_get_current_time();
   if(btsco.pRX)
   {
      kal_dev_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_COPY_RX, btsco.pRX->fOverflow, btsco.pRX->iPacket_w, btsco.pRX->iPacket_r, uBufferCount_RX);
      if(btsco.pRX->fOverflow)
      {
         if(btsco.pRX->iPacket_w - btsco.pRX->iPacket_r <= SCO_RX_PACKER_BUF_NUM - 2*uBufferCount_RX) 
         {
            //free space is larger then twice interrupt rx data size
            btsco.pRX->fOverflow = KAL_FALSE;
         }  
      }
      if(!btsco.pRX->fOverflow && (btsco.pRX->iPacket_w - btsco.pRX->iPacket_r <= SCO_RX_PACKER_BUF_NUM - uBufferCount_RX))
      {
         btsco_ReadFromBT(uPacketType, uPacketLength, uPacketNumber, uBufferCount_RX, uControl);
      }
      else
      {
         btsco.pRX->fOverflow = KAL_TRUE;
      }
   }
   latest_us = ust_get_current_time();
   kal_trace( TRACE_FUNC, L1AUDIO_BTSCO_HISR_TX_PERIOD, ust_us_duration(curr_frc, latest_us));
   curr_frc = ust_get_current_time();
   if(btsco.pTX)
   {
      kal_dev_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_COPY_TX, btsco.pTX->fUnderflow, btsco.pTX->iPacket_w, btsco.pTX->iPacket_r, uBufferCount_TX);
      if(btsco.pTX->fUnderflow)
      {
         //prepared data is larger then twice interrupt tx data size
         if(btsco.pTX->iPacket_w - btsco.pTX->iPacket_r >= 2*uBufferCount_TX)
         {
            btsco.pTX->fUnderflow = KAL_FALSE;
         }         
      }
      if(btsco.pTX->iPacket_w - btsco.pTX->iPacket_r < uBufferCount_TX)
      {
            btsco.pTX->fUnderflow = KAL_TRUE;
      }
	    kal_give_spinlock(bt_lockId);
	    if(btsco.pTX->fUnderflow || btsco.uState == BT_SCO_STATE_ENDING)
	    {  //silence
	       btsco_WriteToBT(uPacketType, uPacketLength, uPacketNumber, uBufferCount_TX, KAL_TRUE);
	    }
	    else
	    {  //cvsd packet
	       btsco_WriteToBT(uPacketType, uPacketLength, uPacketNumber, uBufferCount_TX, KAL_FALSE);
	    }
   }
   else{
      kal_give_spinlock(bt_lockId);
   }
   latest_us = ust_get_current_time();
   kal_trace( TRACE_FUNC, L1AUDIO_BTSCO_HISR_RX_PERIOD, ust_us_duration(curr_frc, latest_us));
}

#if defined(DELAY_UNMASK_INTERRUPT)
static void btsco_DelayInterruptUnMask( void *data )
{
   if( btsco.uState != BT_SCO_STATE_IDLE )
   {
        IRQUnmask(IRQ_BT_CVSD_CODE);
   }
}
#endif

static void btsco_hisr(void *pData)
{
   kal_uint32 curr_frc, latest_us;
   kal_dev_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_HISR, btsco.uState);
   curr_frc = ust_get_current_time();//unit: micro second (us)
   kal_take_spinlock(bt_lockId, KAL_INFINITE_WAIT);
   if( btsco.uState == BT_SCO_STATE_IDLE )
   {
   	  kal_give_spinlock(bt_lockId);
      return;
   }
   btsco_hisr_internal();
   *BT_SCO_HW_REG_CONTROL &= ~BT_CVSD_CLEAR;
   Data_Sync_Barrier();
#if !defined(DISABLE_BTCVSD_FOR_CHIPBACK_BOOTUP)   
   if( btsco.uState != BT_SCO_STATE_IDLE )
   {
#if defined(DELAY_UNMASK_INTERRUPT)
      kal_trace( TRACE_GROUP_SCO,L1AUDIO_BTSCO_HISR_GPT, btsco.fBtError, uCVSDGPT);  
      if(btsco.fBtError == KAL_TRUE && uCVSDGPT)
      {
  	     #define CVSD_DELAY_INTERRUPT 1000 //msec
  	     SGPT_CTRL_START_T start;
         start.u2Tick = (CVSD_DELAY_INTERRUPT / 10);
         start.pfCallback = btsco_DelayInterruptUnMask;
         start.vPara = NULL;
         DclSGPT_Control( uCVSDGPT, SGPT_CMD_START,(DCL_CTRL_DATA_T*)&start);
      }
      else
#endif
      {
            IRQUnmask(IRQ_BT_CVSD_CODE);
      }
   }
#endif
   //kal_give_spinlock(bt_lockId);
   latest_us = ust_get_current_time();
   kal_trace( TRACE_FUNC, L1AUDIO_BTSCO_HISR_PERIOD, ust_us_duration(curr_frc, latest_us));
   L1Audio_SetEvent( btsco.uAudId, NULL );
}  

static kal_uint32 btsco_GetMemorySize_4ByteAlign(BT_SCO_MODULE uModule)
{
   kal_uint32 uSize=0;
   switch(uModule)
   {
      case BT_SCO_MOD_CVSD_ENCODE: 
         uSize = (kal_uint32)CVSD_ENC_GetBufferSize();
         break;
      case BT_SCO_MOD_CVSD_DECODE: 
         uSize = (kal_uint32)CVSD_DEC_GetBufferSize();
         break;
	  case BT_SCO_MOD_PLC_NB:
	  case BT_SCO_MOD_PLC_WB:
		 uSize = (kal_uint32)g711plc_GetMemorySize_v2();
         break;
      case BT_SCO_MOD_CVSD_TX_SRC:
         uSize = CVSD_UpSample_GetMemory();
         break;
      case BT_SCO_MOD_CVSD_RX_SRC:
         uSize = CVSD_DownSample_GetMemory();
         break;
      case BT_SCO_MOD_PCM_RINGBUF_TX:
         uSize = SCO_TX_RINGBUFFER_SIZE;
         break;
      case BT_SCO_MOD_PCM_RINGBUF_RX:
         uSize = SCO_RX_RINGBUFFER_SIZE;
         break;
#if defined(__CVSD_CODEC_SUPPORT__)
	  case BT_SCO_MOD_MSBC_ENCODE: 
		 uSize = (kal_uint32)MSBC_ENC_GetBufferSize();
		 break;
	  case BT_SCO_MOD_MSBC_DECODE: 
		 uSize = (kal_uint32)MSBC_DEC_GetBufferSize();
		 break;
#endif
      default:
         ASSERT(0);
   }
   uSize = (uSize+3) & ~3 ;
   kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_GET_MEM, uModule, uSize);
   return uSize;
}

static void btsco_InitialModule(BT_SCO_MODULE uModule, kal_uint8 *pBuf)
{
   ASSERT(pBuf);
   switch(uModule)
   {
      case BT_SCO_MOD_CVSD_ENCODE: 
         btsco.pTX->pEncHandle = CVSD_ENC_Init((char*)pBuf);
         break;
      case BT_SCO_MOD_CVSD_DECODE: 
         btsco.pRX->pDecHandle = CVSD_DEC_Init((char*)pBuf);
         break;
      case BT_SCO_MOD_PLC_NB:
         g711plc_construct_v2((void *)pBuf, 8000);
         btsco.pRX->pPLCHandle = (void*)pBuf;
         break;
      case BT_SCO_MOD_CVSD_TX_SRC:
         btsco.pTX->pSRCHandle = CVSD_UpSample_Init((char*)pBuf);
         break;
      case BT_SCO_MOD_CVSD_RX_SRC:
         btsco.pRX->pSRCHandle = CVSD_DownSample_Init((char*)pBuf);
         break;
      case BT_SCO_MOD_PCM_RINGBUF_TX:
         btsco.pTX->RingBuffer.rb_base = pBuf;
         btsco.pTX->RingBuffer.rb_size = SCO_TX_RINGBUFFER_SIZE;
         break;
      case BT_SCO_MOD_PCM_RINGBUF_RX:
         btsco.pRX->RingBuffer.rb_base = pBuf;
         btsco.pRX->RingBuffer.rb_size = SCO_RX_RINGBUFFER_SIZE;
         break;
#if defined(__MSBC_CODEC_SUPPORT__)
      case BT_SCO_MOD_MSBC_ENCODE: 
         btsco.pTX->pEncHandle = MSBC_ENC_Init((char*)pBuf);
         break;
      case BT_SCO_MOD_MSBC_DECODE: 
         btsco.pRX->pDecHandle = MSBC_DEC_Init((char*)pBuf);
         break;
      case BT_SCO_MOD_PLC_WB:
         g711plc_construct_v2((void *)pBuf, 16000);
         btsco.pRX->pPLCHandle = (void*)pBuf;
         break;
#endif
      default:
         ASSERT(0);
   }
}

static void btsco_AllocMemory_CVSD()
{
   kal_uint32 uTotalMemory = 0, uTxMemSize = 0, uRxMemSize = 0, uSpeechBufferSize=0;
   kal_uint8 *pBuf = SCO_CVSD_BUFFER;
   uTxMemSize = (sizeof(BT_SCO_TX)+3)& ~0x3;
   uRxMemSize = (sizeof(BT_SCO_RX)+3)& ~0x3;
   uSpeechBufferSize = (NB_SPEECH_FRAME_SIZE+3)& ~0x3;  
   uTotalMemory = uTxMemSize+uRxMemSize+uSpeechBufferSize+BT_SCO_PACKET_180;
   uTotalMemory += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_PCM_RINGBUF_TX);
   uTotalMemory += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_CVSD_ENCODE);
   uTotalMemory += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_CVSD_TX_SRC);
   uTotalMemory += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_PCM_RINGBUF_RX);
   uTotalMemory += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_CVSD_DECODE);
   uTotalMemory += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_CVSD_RX_SRC);
   uTotalMemory += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_PLC_NB);

   kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_ALLOC_MEM, uTotalMemory, pBuf);
   ASSERT(SCO_CVSD_BUFFER_SIZE >= uTotalMemory);	   //double check 
   memset(SCO_CVSD_BUFFER, 0, SCO_CVSD_BUFFER_SIZE);  

   btsco.pTX = (BT_SCO_TX*)pBuf;
   pBuf += uTxMemSize;
   btsco.pRX = (BT_SCO_RX*)pBuf;
   pBuf += uRxMemSize;
   btsco.pSpeechData = (kal_uint8 *)pBuf;
   pBuf += uSpeechBufferSize;
   btsco.pTempPacketBuf = (kal_uint8 *)pBuf;
   pBuf += BT_SCO_PACKET_180;
   btsco_InitialModule(BT_SCO_MOD_CVSD_ENCODE, pBuf);
   pBuf += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_CVSD_ENCODE);
   btsco_InitialModule(BT_SCO_MOD_CVSD_TX_SRC, pBuf);
   pBuf += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_CVSD_TX_SRC);
   btsco_InitialModule(BT_SCO_MOD_PCM_RINGBUF_TX, pBuf);
   pBuf += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_PCM_RINGBUF_TX);
   btsco_InitialModule(BT_SCO_MOD_CVSD_DECODE, pBuf);
   pBuf += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_CVSD_DECODE);
   btsco_InitialModule(BT_SCO_MOD_CVSD_RX_SRC, pBuf);
   pBuf += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_CVSD_RX_SRC);
   btsco_InitialModule(BT_SCO_MOD_PCM_RINGBUF_RX, pBuf);
   pBuf += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_PCM_RINGBUF_RX);
   btsco_InitialModule(BT_SCO_MOD_PLC_NB, pBuf);
   pBuf += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_PLC_NB);

   kal_trace( TRACE_FUNC, CVSD_BT_SCO_ALLOC_CVSD_MEMORY, uTotalMemory);
}

static void btsco_process_TX_CVSD()
{
   kal_int32 iCount=0;
   while(1)
   {
      for(iCount = 0 ; iCount < 2 ; iCount++)
      {  //downsample
         kal_uint8 *pInBuf;
         kal_uint32 uInByte=0, uOutByte=0, uConsumeByte=0;
         if(SCO_TX_PCM64K_BUF_SIZE != btsco.pTX->uPcmBuf_w)
         {
            btsco_GetReadBuffer_TX(&pInBuf, &uInByte);
            kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_PROC_TX_RAW, uInByte, btsco.pTX->uPcmBuf_w);
            uInByte = uInByte & 0xFFFFFFFE;
            if(uInByte<2)
            {
               return;
            }
            uOutByte = SCO_TX_PCM64K_BUF_SIZE - btsco.pTX->uPcmBuf_w;
            {
               kal_uint32 uSrcInSample, uSrcOutSample;
               uSrcInSample = uInByte >> 1;
               uSrcOutSample = uOutByte >> 1;
               if((uSrcInSample) > (uSrcOutSample>>3))
               {
                  uSrcInSample = uSrcOutSample>>3;
               }
               CVSD_UpSample_Process(btsco.pTX->pSRCHandle, (kal_int16 *)pInBuf, (kal_int16 *)(&btsco.pTX->PcmBuf_64k[btsco.pTX->uPcmBuf_w]), (kal_int16 *)btsco.pTX->PcmBuf_Temp, uSrcInSample);
               uConsumeByte = uSrcInSample<<1;
               uOutByte = uSrcInSample<<4;
            }
            kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_PROC_TX_SRC, uConsumeByte, uOutByte);
            btsco.pTX->uPcmBuf_w += uOutByte;
            btsco_ReadDataDone_TX(uConsumeByte);
         }
      }
      if(SCO_TX_PCM64K_BUF_SIZE == btsco.pTX->uPcmBuf_w) 
      {
         if(btsco.pTX->iPacket_w - btsco.pTX->iPacket_r < SCO_TX_PACKER_BUF_NUM)
         {
            kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_PROC_TX_CVSD, btsco.pTX->iPacket_w, btsco.pTX->iPacket_r, 0);
            {  //encode
               kal_int32 iInSample = SCO_TX_PCM64K_BUF_SIZE>>1;
               kal_int32 iOutByte = SCO_TX_ENCODE_SIZE;
               CVSD_ENC_Process(btsco.pTX->pEncHandle, (kal_int16*)btsco.pTX->PcmBuf_64k, &iInSample, (char*)&btsco.pTX->PacketBuf[btsco.pTX->iPacket_w & SCO_TX_PACKET_MASK][0], &iOutByte);
               btsco.pTX->uPcmBuf_w = 0;
               btsco.pTX->iPacket_w++;
            }
         }
         else
         {
            return;
         }
      }
   }
}

static void btsco_process_RX_CVSD()
{
   kal_int32 iCount=0;
   while(1)
   {
      if(SCO_RX_PCM8K_BUF_SIZE == btsco.pRX->uPcmBuf_r)
      {
         //decode 30 byte cvsd
         if(btsco.pRX->iPacket_w != btsco.pRX->iPacket_r)
         {
            kal_int32 iOutSample=0, iInByte=0;
            iInByte=SCO_RX_PLC_SIZE;
            iOutSample=SCO_RX_PCM64K_BUF_SIZE>>1;
            kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_PROC_RX_CVSD, btsco.pRX->iPacket_w, btsco.pRX->iPacket_r, 0, 1);
            CVSD_DEC_Process(btsco.pRX->pDecHandle, (char*)&btsco.pRX->PacketBuf[btsco.pRX->iPacket_r & SCO_RX_PACKET_MASK][0], &iInByte, (kal_int16*)btsco.pRX->PcmBuf_64k, &iOutSample);
            {
               kal_uint32 uConsumeByte=0;
               CVSD_DownSample_Process(btsco.pRX->pSRCHandle, (kal_int16 *)btsco.pRX->PcmBuf_64k, (kal_int16 *)btsco.pRX->PcmBuf_8k, (kal_int16 *)btsco.pRX->PcmBuf_Temp, SCO_RX_PCM64K_BUF_SIZE>>1);
               uConsumeByte = SCO_RX_PCM64K_BUF_SIZE;
               ASSERT(uConsumeByte == SCO_RX_PCM64K_BUF_SIZE);
            }
            if(btsco.uMode == BT_SCO_MODE_SPEECH)//do PLC
            {  
               kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_PROC_RX_PLC);
               if(btsco.pRX->PacketValid[btsco.pRX->iPacket_r & SCO_RX_PACKET_MASK])
               {  //packet not lost
                  g711plc_addtohistory_v2(btsco.pRX->pPLCHandle, (short *)btsco.pRX->PcmBuf_8k, 0);
                  kal_trace( TRACE_FUNC, CVSD_G711PLC_ADDTOHISTORY_COPY, btsco.pRX->iPacket_r);
               }
               else
               {  //packet lost
                  g711plc_dofe_v2(btsco.pRX->pPLCHandle, (short *)btsco.pRX->PcmBuf_8k, 0);
                  kal_trace( TRACE_FUNC, CVSD_G711PLC_DOFE_COPY, btsco.pRX->iPacket_r);
               }
            }
            btsco.pRX->iPacket_r++;
            btsco.pRX->uPcmBuf_r=0;
         }
         else
         {  //cvsd buffer empty
            return;
         }

      }
      for(iCount = 0 ; iCount < 2 ; iCount++)
      {
         kal_uint32 uOutByte=0, uConsumeByte=0, uTotalSpace=0;
         kal_uint8 *pOutBuf;
         btsco_GetWriteBuffer_RX(&pOutBuf, &uOutByte);
         uTotalSpace = btsco_GetFreeSpace_RX();
         kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_PROC_RX_RAW, uOutByte, uTotalSpace, btsco.pRX->uPcmBuf_r);
         uOutByte = uOutByte & 0xFFFFFFFE;;
         if(uOutByte<2)
         {  //output buffer is empty
            return;
         }
         {  //output is 8k mono
            uConsumeByte = SCO_RX_PCM8K_BUF_SIZE - btsco.pRX->uPcmBuf_r;    
            if(uConsumeByte>uOutByte)
            {
               uConsumeByte = uOutByte;
            }
            memcpy(pOutBuf, (btsco.pRX->PcmBuf_8k + btsco.pRX->uPcmBuf_r), uConsumeByte);
            uOutByte = uConsumeByte;
         }
         btsco.pRX->uPcmBuf_r += uConsumeByte;
         btsco_WriteDataDone_RX(uOutByte);
         if(SCO_RX_PCM8K_BUF_SIZE == btsco.pRX->uPcmBuf_r)
         {
            break;
         }
      }
   }
}

#if defined(__MSBC_CODEC_SUPPORT__) 

static void btsco_AllocMemory_MSBC()
{
   kal_uint32 uTotalMemory = 0, uTxMemSize = 0, uRxMemSize = 0, uSpeechBufferSize=0;
   kal_uint8 *pBuf = SCO_CVSD_BUFFER;
   uTxMemSize = (sizeof(BT_SCO_TX)+3)& ~0x3;
   uRxMemSize = (sizeof(BT_SCO_RX)+3)& ~0x3;
   uSpeechBufferSize = (WB_SPEECH_FRAME_SIZE+3)& ~0x3;  
   uTotalMemory = uTxMemSize+uRxMemSize+uSpeechBufferSize+BT_SCO_PACKET_180;
   uTotalMemory += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_PCM_RINGBUF_TX);
   uTotalMemory += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_MSBC_ENCODE);
   uTotalMemory += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_PCM_RINGBUF_RX);
   uTotalMemory += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_MSBC_DECODE);
   uTotalMemory += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_PLC_WB);

   kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_ALLOC_MEM, uTotalMemory, pBuf);
   ASSERT(SCO_CVSD_BUFFER_SIZE >= uTotalMemory);	   //double check 
   memset(SCO_CVSD_BUFFER, 0, SCO_CVSD_BUFFER_SIZE);  

   btsco.pTX = (BT_SCO_TX*)pBuf;
   pBuf += uTxMemSize;
   btsco.pRX = (BT_SCO_RX*)pBuf;
   pBuf += uRxMemSize;
   btsco.pSpeechData = (kal_uint8 *)pBuf;
   pBuf += uSpeechBufferSize;
   btsco.pTempPacketBuf = (kal_uint8 *)pBuf;
   pBuf += BT_SCO_PACKET_180;
   btsco_InitialModule(BT_SCO_MOD_PCM_RINGBUF_TX, pBuf);
   pBuf += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_PCM_RINGBUF_TX);
   btsco_InitialModule(BT_SCO_MOD_MSBC_ENCODE, pBuf);
   pBuf += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_MSBC_ENCODE);
   btsco_InitialModule(BT_SCO_MOD_PCM_RINGBUF_RX, pBuf);
   pBuf += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_PCM_RINGBUF_RX);
   btsco_InitialModule(BT_SCO_MOD_MSBC_DECODE, pBuf);
   pBuf += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_MSBC_DECODE);
   btsco_InitialModule(BT_SCO_MOD_PLC_WB, pBuf);
   pBuf += btsco_GetMemorySize_4ByteAlign(BT_SCO_MOD_PLC_WB);

   kal_trace( TRACE_FUNC, CVSD_BT_SCO_ALLOC_MSBC_MEMORY, uTotalMemory);
}

static void btsco_process_TX_MSBC()
{
   kal_uint32 iInByte1=0, iInByte2;
   kal_int32 iOutByte=0, iInSample=0, index=0;
   kal_uint8 *pSrcBuf;
   while(1)
   {
      if(btsco_GetDataCount_TX() < MSBC_PCM_FRAME_BYTE)
      {
         break; // source pcm not enough one frame
      }
	  if(btsco.pTX->iPacket_w - btsco.pTX->iPacket_r >= SCO_TX_PACKER_BUF_NUM)
	  {
         break; // bitstream buffer full
	  }
      btsco_GetReadBuffer_TX(&pSrcBuf, &iInByte1);
      if(iInByte1 > MSBC_PCM_FRAME_BYTE)
      {
         memcpy(btsco.pTX->PcmBuf_64k, pSrcBuf, MSBC_PCM_FRAME_BYTE);
         btsco_ReadDataDone_TX(MSBC_PCM_FRAME_BYTE);
      }
      else
      {
         memcpy(btsco.pTX->PcmBuf_64k, pSrcBuf, iInByte1);
         btsco_ReadDataDone_TX(iInByte1);
         btsco_GetReadBuffer_TX(&pSrcBuf, &iInByte2);
		 memcpy(btsco.pTX->PcmBuf_64k + iInByte1, pSrcBuf, MSBC_PCM_FRAME_BYTE-iInByte1);
         btsco_ReadDataDone_TX(MSBC_PCM_FRAME_BYTE-iInByte1);
      }
	  iInSample = MSBC_PCM_FRAME_BYTE >> 1;
	  iOutByte = MSBC_BTSTREAM_FRAME_BYTE;
      index = btsco.pTX->iPacket_w & SCO_TX_PACKET_MASK;
      MSBC_ENC_Process(btsco.pTX->pEncHandle, (short *)btsco.pTX->PcmBuf_64k, &iInSample, (char *)&btsco.pTX->PacketBuf[index][2], &iOutByte); //out 57 bytes
	  btsco.pTX->PacketBuf[index][0 ] = 0x01; //header
	  btsco.pTX->PacketBuf[index][1 ] = btsco_MsbcHeader[index&0x3]; //header
	  btsco.pTX->PacketBuf[index][59] = 0; //header
      btsco.pTX->iPacket_w++;
   }
}

static void btsco_process_RX_MSBC()
{
   kal_int32 index1=0, index2=0, index3=0, iInByte=0, iOutSample=0, status=-1, dwBtEv3HalfBad=0;
   kal_uint32 iOutByte1=0, iOutByte2=0, i=0;
   kal_uint8 *pDstBuf;
   while(1)
   {
      if(btsco_GetFreeSpace_RX() < MSBC_PCM_FRAME_BYTE)
      {
         break; // pcm buffer full
      }
      if(btsco.pRX->iPacket_w - btsco.pRX->iPacket_r < 2 ) //use two block (2*30) each time
      { 
         break; // bitstream not enough
      }
      index1 =  btsco.pRX->iPacket_r    & SCO_RX_PACKET_MASK;
      index2 = (btsco.pRX->iPacket_r+1) & SCO_RX_PACKET_MASK;
      index3 = (btsco.pRX->iPacket_r+2) & SCO_RX_PACKET_MASK;
	    btsco.pRX->iPacket_r++;
	    kal_trace( TRACE_FUNC, MSBC_INFO,btsco.pRX->PacketBuf[index1][0],btsco.pRX->PacketBuf[index1][1], index1, btsco.pRX->PacketValid[index1]);
      if( (btsco.pRX->PacketBuf[index1][0] == 0x01) && ((btsco.pRX->PacketBuf[index1][1]&0x0F) == 0x08) )//correct header
      {
      	 kal_trace(TRACE_FUNC, L1AUDIO_BTSCO_MSBC_CORRECT_HEADER);
         memcpy(btsco.pRX->PcmBuf_8k   , &btsco.pRX->PacketBuf[index1][2], 28);
         memcpy(btsco.pRX->PcmBuf_8k+28, &btsco.pRX->PacketBuf[index2][0], 29); // total 57
         iInByte = MSBC_BTSTREAM_FRAME_BYTE; 
         iOutSample = MSBC_PCM_FRAME_BYTE >> 1;
         status = MSBC_DEC_Process(btsco.pRX->pDecHandle, (char *)&btsco.pRX->PcmBuf_8k, &iInByte, (kal_int16*)btsco.pRX->PcmBuf_64k, &iOutSample);
		     kal_trace( TRACE_FUNC, MSBC_STATUS,status);
         btsco.pRX->iPacket_r++;
      }
      else if(btsco.pRX->PacketValid[index1]==1)
      {//wrong header, but packet not lost, sync to next 30 byte block (should only happenes on packetsize 30)
         kal_trace(TRACE_FUNC, L1AUDIO_BTSCO_MSBC_WRONG_HEADER);
         status = -1;
         for(i = 0; i < 29; i++) 
         {
             if((btsco.pRX->PacketBuf[index1][i] == 0x01) && ((btsco.pRX->PacketBuf[index1][i+1]&0x0F) == 0x08))//search the first packet (30 byte)
             {
                 memcpy(btsco.pRX->PcmBuf_8k   , &btsco.pRX->PacketBuf[index1][i+2], 28-i);
                 memcpy(btsco.pRX->PcmBuf_8k+28-i   , &btsco.pRX->PacketBuf[index2][0], 30);
                 memcpy(btsco.pRX->PcmBuf_8k+58-i   , &btsco.pRX->PacketBuf[index3][0], i-1);
                 iInByte = MSBC_BTSTREAM_FRAME_BYTE; 
                 iOutSample = MSBC_PCM_FRAME_BYTE >> 1;
                 status = MSBC_DEC_Process(btsco.pRX->pDecHandle, (char *)&btsco.pRX->PcmBuf_8k, &iInByte, (kal_int16*)btsco.pRX->PcmBuf_64k, &iOutSample);
		             kal_trace( TRACE_FUNC, MSBC_STATUS,status);
                 btsco.pRX->iPacket_r++;
                 break;
             }             
         }
         if(status == -1)
         {
            kal_trace(TRACE_FUNC, L1AUDIO_BTSCO_MSBC_PACKET_NOT_FOUND);
         }
      }
	    else
	    {//packet lost at first frame, fail to decode
	    	kal_trace(TRACE_FUNC, L1AUDIO_BTSCO_MSBC_DATA_PACKET_NOT_FOUND);
		    status = -1;
		    btsco.pRX->iPacket_r++;
      }
      if(status==MSBC_BTSTREAM_FRAME_BYTE)
      {
         if(btsco.pRX->PacketValid[index1]==1 && btsco.pRX->PacketValid[index2]==0)
         {
            dwBtEv3HalfBad = 1;
         }
         else
         {
            dwBtEv3HalfBad = 0;
         }
      }
      if(status==MSBC_BTSTREAM_FRAME_BYTE && btsco.pRX->PacketValid[index1]==1 && btsco.pRX->PacketValid[index2]==1)
      {
         g711plc_addtohistory_v2(btsco.pRX->pPLCHandle, (short *)btsco.pRX->PcmBuf_64k, 0);
      }
      else
      {
         g711plc_dofe_v2(btsco.pRX->pPLCHandle, (short *)btsco.pRX->PcmBuf_64k, dwBtEv3HalfBad);
      }
      btsco_GetWriteBuffer_RX(&pDstBuf, &iOutByte1);
      if(iOutByte1 > MSBC_PCM_FRAME_BYTE)
      {
         memcpy(pDstBuf, btsco.pRX->PcmBuf_64k, MSBC_PCM_FRAME_BYTE);
         btsco_WriteDataDone_RX(MSBC_PCM_FRAME_BYTE);
      }
      else
      {
         memcpy(pDstBuf, btsco.pRX->PcmBuf_64k, iOutByte1);
         btsco_WriteDataDone_RX(iOutByte1);
         btsco_GetWriteBuffer_RX(&pDstBuf, &iOutByte2);
         memcpy(pDstBuf, btsco.pRX->PcmBuf_64k + iOutByte1, MSBC_PCM_FRAME_BYTE-iOutByte1);
         btsco_WriteDataDone_RX(MSBC_PCM_FRAME_BYTE-iOutByte1);
      }
   }
}

#endif 

static void btsco_process_loopback()
{
   kal_uint8 *pInBuf, *pOutBuf; 
   kal_uint32 uInLen, uOutLen, i;
   for(i=0;i<4;i++)
   {
      BT_SCO_GetReadBuffer_RX(&pInBuf, &uInLen);  
      BT_SCO_GetWriteBuffer_TX(&pOutBuf, &uOutLen);  
	    kal_trace( TRACE_FUNC, CVSD_BTSCO_PROCESS_LOOPBACK, uInLen, uOutLen);
      uInLen  &= 0xFFFFFFFE;
      uOutLen &= 0xFFFFFFFE;
      if(uInLen < uOutLen)
      {
         uOutLen = uInLen;
      }
      memcpy( pOutBuf, pInBuf, uOutLen );
      BT_SCO_WriteDataDone_TX(uOutLen);  
      BT_SCO_ReadDataDone_RX(uOutLen);  
   }
}

static void btsco_process(void *pData)
{
   kal_take_enh_mutex( bt_mutex);
   kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_PROCESS, btsco.uState, btsco.pRX, btsco.pTX);
   kal_take_spinlock(bt_lockId, KAL_INFINITE_WAIT);
   if(btsco.uState != BT_SCO_STATE_RUNNING)
   {
      kal_give_spinlock(bt_lockId);
      kal_give_enh_mutex( bt_mutex);
      return;
   }
   kal_give_spinlock(bt_lockId);
#if defined(__MSBC_CODEC_SUPPORT__) 
   if(btsco.fWideBand)
   {
      btsco_process_RX_MSBC();
   }
   else
#endif
   {
      btsco_process_RX_CVSD();
   }
   if(btsco.uMode == BT_SCO_MODE_LOOPBACK_WITH_CODEC)
   {
      btsco_process_loopback();
   }
#if defined(__MSBC_CODEC_SUPPORT__) 
   if(btsco.fWideBand)
   {
      btsco_process_TX_MSBC();
   }
   else
#endif
   {
      btsco_process_TX_CVSD();
   }
   kal_give_enh_mutex( bt_mutex);

}

static void BT_SCO_Start(BT_SCO_MODE uMode, kal_bool fIsWideBand)
{
   kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_START, btsco.uState, fIsWideBand); 
   kal_take_enh_mutex( bt_mutex); 
   if(fIsWideBand)
   {
#if defined(__MSBC_CODEC_SUPPORT__) 
      btsco_AllocMemory_MSBC();
#else
      ASSERT(0);
#endif
   }
   else
   {
      btsco_AllocMemory_CVSD();
   }
   btsco.uMode = uMode;
   btsco.fWideBand = fIsWideBand; 
   kal_take_spinlock(bt_lockId, KAL_INFINITE_WAIT);
   btsco.uState = BT_SCO_STATE_RUNNING;
   kal_give_spinlock(bt_lockId);   
#if defined(DELAY_UNMASK_INTERRUPT)
   if(uCVSDGPT == 0)
   {
      uCVSDGPT = DclSGPT_Open( DCL_GPT_CB ,0 );
   }  
#endif
#if !defined(DISABLE_BTCVSD_FOR_CHIPBACK_BOOTUP)   
    IRQUnmask(IRQ_BT_CVSD_CODE);
#endif

    kal_give_enh_mutex( bt_mutex );

}

static void BT_SCO_Stop()
{
   kal_take_enh_mutex( bt_mutex);
   kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_STOP, btsco.uState);
   kal_take_spinlock(bt_lockId, KAL_INFINITE_WAIT);
   ASSERT(btsco.uState != BT_SCO_STATE_IDLE);
   btsco.uState = BT_SCO_STATE_ENDING; 
   kal_give_spinlock(bt_lockId);
   kal_sleep_task( AUD_1TICK(10) ); //flush zero (22.5*2 msec)      
   kal_take_spinlock(bt_lockId, KAL_INFINITE_WAIT);
   btsco.uState = BT_SCO_STATE_IDLE;
   // memset(&btsco, 0, sizeof(btsco)); 
   kal_give_spinlock(bt_lockId);
   
#if !defined(DISABLE_BTCVSD_FOR_CHIPBACK_BOOTUP)   
   IRQMask(IRQ_BT_CVSD_CODE);
#endif
   kal_give_enh_mutex( bt_mutex );
}

void BT_SCO_LISR(void)
{
#if !defined(DISABLE_BTCVSD_FOR_CHIPBACK_BOOTUP)   

   IRQMask(IRQ_BT_CVSD_CODE);
   L1Audio_TrigD2CHisr(BT_CVSD_HISR_MAGIC_NO);
   
#endif
}

void BT_SCO_Init()
{
#if !defined(DISABLE_BTCVSD_FOR_CHIPBACK_BOOTUP)   
   IRQMask(IRQ_BT_CVSD_CODE);
   // [Jade] different from k2 || Denali
   L1Audio_HookHisrHandler( BT_CVSD_HISR_MAGIC_NO, btsco_hisr, NULL );
   IRQ_Register_LISR(IRQ_BT_CVSD_CODE, BT_SCO_LISR/*BT_SCO_LISR*/, "CVSD ISR");
   IRQSensitivity(IRQ_BT_CVSD_CODE, LEVEL_SENSITIVE);
   IRQMask(IRQ_BT_CVSD_CODE);
   bt_lockId = kal_create_spinlock("BT_LOCK");
   bt_mutex= kal_create_enh_mutex( "BT_MUTEX" );


   btsco.uAudId = L1Audio_GetAudioID();
   L1Audio_SetEventHandler( btsco.uAudId, btsco_process );
#endif
}

static void BT_SCO_Speech_TX_HISR()
{

   kal_uint8 *pDst, *pSrc;
   kal_uint32 uOutByte, uFreeSpace, uRemainByte, uSpeechFrameSize;
   kal_take_spinlock(bt_lockId, KAL_INFINITE_WAIT);

   if(btsco.uState != BT_SCO_STATE_RUNNING)
   {
	  kal_give_spinlock(bt_lockId);
      return;
   }
#if defined(__MSBC_CODEC_SUPPORT__) 
   if(btsco.fWideBand)
   {
      uSpeechFrameSize = WB_SPEECH_FRAME_SIZE;
   }
   else
#endif
   {
      uSpeechFrameSize = NB_SPEECH_FRAME_SIZE;
   }
   BT_SCO_GetWriteBuffer_TX(&pDst, &uOutByte);
   uFreeSpace = BT_SCO_GetFreeSpace_TX();
   kal_dev_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_AP_SPEECH_TX_DATA, uOutByte, uFreeSpace);
   uOutByte = uOutByte & 0xFFFFFFFE;
   uFreeSpace = uFreeSpace & 0xFFFFFFFE;
   if(uOutByte >= uSpeechFrameSize)
   {
      pSrc = pDst;
   }
   else if(uFreeSpace >= uSpeechFrameSize)
   {
      pSrc = btsco.pSpeechData;
   }
   else
   { 
      kal_dev_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_AP_SPEECH_TX_OF, uFreeSpace);
      kal_give_spinlock(bt_lockId);
      return;
   }
   DACA_GetFromSD((kal_uint16*)pSrc);
   if(uOutByte >= uSpeechFrameSize)
   {
      BT_SCO_WriteDataDone_TX(uSpeechFrameSize);
   }
   else
   {//put to temp buffer first
      memcpy(pDst, pSrc, uOutByte);
      BT_SCO_WriteDataDone_TX(uOutByte);
      pSrc += uOutByte;
      uRemainByte = uSpeechFrameSize - uOutByte;
      BT_SCO_GetWriteBuffer_TX(&pDst, &uOutByte);
      uOutByte = uOutByte & 0xFFFFFFFE;
      ASSERT(uOutByte>=uRemainByte);
      memcpy(pDst, pSrc, uRemainByte);
      BT_SCO_WriteDataDone_TX(uRemainByte); 
   }
   kal_give_spinlock(bt_lockId);

}

static void BT_SCO_Speech_RX_HISR()
{
   kal_uint8 *pSrc, *pDst;
   kal_uint32 uInByte, uDataCount, uRemainByte, uDirectCopy=0, uSpeechFrameSize=0;
   kal_take_spinlock(bt_lockId, KAL_INFINITE_WAIT);   
   if(btsco.uState != BT_SCO_STATE_RUNNING)
   {
      kal_give_spinlock(bt_lockId);
      return;
   }
#if defined(__MSBC_CODEC_SUPPORT__) 
  if(btsco.fWideBand)
   {
      uSpeechFrameSize = WB_SPEECH_FRAME_SIZE;
   }
   else
#endif
   {
      uSpeechFrameSize = NB_SPEECH_FRAME_SIZE;
   }
   BT_SCO_GetReadBuffer_RX(&pSrc, &uInByte);
   uDataCount = BT_SCO_GetDataCount_RX();
   kal_dev_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_AP_SPEECH_RX_DATA, uInByte, uDataCount);
   uInByte = uInByte & 0xFFFFFFFE;
   uDataCount = uDataCount & 0xFFFFFFFE;
   if(uInByte >= uSpeechFrameSize)
   {
      uDirectCopy = 1;
   }
   else if(uDataCount >= uSpeechFrameSize)
   {
      pDst = btsco.pSpeechData;
      memcpy(pDst, pSrc, uInByte);
      pDst += uInByte;
      uRemainByte = uSpeechFrameSize - uInByte;
      BT_SCO_ReadDataDone_RX(uInByte);
      BT_SCO_GetReadBuffer_RX(&pSrc, &uInByte);
      ASSERT(uInByte>=uRemainByte);
      memcpy(pDst, pSrc, uRemainByte);
      BT_SCO_ReadDataDone_RX(uRemainByte);
      pSrc = btsco.pSpeechData;
   }
   else
   { 
      kal_dev_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_AP_SPEECH_RX_UF, uDataCount);
	  DACA_FillSE(0);
      kal_give_spinlock(bt_lockId);
	  return;
   }
   DACA_PutToSE((const kal_uint16*)pSrc);
   if(uDirectCopy)
   {
      BT_SCO_ReadDataDone_RX(uSpeechFrameSize);
   }
   kal_give_spinlock(bt_lockId);
}

void BT_SCO_SPEECH_ON(kal_bool fWideBand)
{
   DACA_APP_TYPE uType = DACA_APP_TYPE_ACTIVE_UL_DL_NB;
#if !defined(DISABLE_BTCVSD_FOR_CHIPBACK_BOOTUP)   
   kal_trace( TRACE_FUNC, CVSD_BT_SCO_SPEECH_ON, btsco.uState, fWideBand);
   //kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_SP_ON, btsco.uState);
   ASSERT(btsco.uState == BT_SCO_STATE_IDLE);
#if defined(__MSBC_CODEC_SUPPORT__) 
   if(fWideBand)
   {
      uType = DACA_APP_TYPE_ACTIVE_UL_DL_WB;
   }
#endif
   SPLog_LogDbgInfo(MSG_ID_AUDIO_LOGGING_BT_TX, 0, (void *)fWideBand);
   SPLog_LogDbgInfo(MSG_ID_AUDIO_LOGGING_BT_RX, 0, (void *)fWideBand);
   DACA_Start(BT_SCO_Speech_TX_HISR, BT_SCO_Speech_RX_HISR, uType);
   BT_SCO_Start( BT_SCO_MODE_SPEECH, fWideBand);
#endif
}

void BT_SCO_SPEECH_OFF()
{
   DACA_APP_TYPE uType = DACA_APP_TYPE_ACTIVE_UL_DL_NB;
#if !defined(DISABLE_BTCVSD_FOR_CHIPBACK_BOOTUP)   
#if defined(__MSBC_CODEC_SUPPORT__) 
   if(btsco.fWideBand)
   {
      uType = DACA_APP_TYPE_ACTIVE_UL_DL_WB;
   }
#endif
   kal_trace( TRACE_FUNC, CVSD_BT_SCO_SPEECH_OFF, btsco.uState);
   SPLog_LogDbgInfo(MSG_ID_AUDIO_LOGGING_BT_TX, 2, (void *)btsco.fWideBand);
   SPLog_LogDbgInfo(MSG_ID_AUDIO_LOGGING_BT_RX, 2, (void *)btsco.fWideBand);
   //kal_trace( TRACE_GROUP_SCO, L1AUDIO_BTSCO_SP_OFF, btsco.uState);
   ASSERT(btsco.uState != BT_SCO_STATE_IDLE);
   BT_SCO_Stop();
   DACA_Stop(uType);
#endif
}

kal_bool BT_SCO_IS_SPEECH_ON()
{
   if(btsco.uState == BT_SCO_STATE_IDLE)
   {
      return KAL_FALSE;
   }
   return KAL_TRUE;
}

void BT_SCO_Loopback_ON(kal_bool fDisableCodec, kal_bool fWideBand)
{
   kal_trace( TRACE_FUNC, CVSD_BT_SCO_LOOPBACK_ON, fDisableCodec, btsco.uState);
   ASSERT(btsco.uState == BT_SCO_STATE_IDLE);
   if(fDisableCodec)
   {
      BT_SCO_Start( BT_SCO_MODE_LOOPBACK_WITHOUT_CODEC, fWideBand );
   }
   else
   {
      BT_SCO_Start( BT_SCO_MODE_LOOPBACK_WITH_CODEC, fWideBand );
   }
}

void BT_SCO_Loopback_OFF()
{
   kal_trace( TRACE_FUNC, CVSD_BT_SCO_LOOPBACK_OFF, btsco.uState);
   ASSERT(btsco.uState != BT_SCO_STATE_IDLE);
   BT_SCO_Stop();
}

#endif //__CVSD_CODEC_SUPPORT__

