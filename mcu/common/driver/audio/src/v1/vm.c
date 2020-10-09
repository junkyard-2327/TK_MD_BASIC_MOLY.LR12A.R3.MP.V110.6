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

/*******************************************************************************
 *
 * Filename:
 * ---------
 * vm.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   VM recording/playback
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *==============================================================================
 *******************************************************************************/

#include "kal_public_api.h"
#include "kal_general_types.h"
#include "string.h"
#include "reg_base.h"
#include "kal_trace.h"

#include "speech_def.h"
#include "l1aud_common_def.h"
#include "l1audio.h"
#include "l1audio_trace.h"
#include "sp_drv.h"
#include "am.h"
#include "media.h"
#include "afe.h"
#include "l1sp_trc.h"
#include "l1audio_sph_trc.h"
#include "sal_exp.h"
#include "sal_def.h"
#include "vm.h"
#include "gmss_public.h"

// #define TK6291_FAKE_COMPILE

// #define VM_LOG_DEBUG

// #define VM_CTRL_UL         1
// #define VM_CTRL_DL         1

// #define VM_CTRL_SC_START   3
// #define VM_CTRL_SD_START   6

#define VM_STATE_RECORD       0x1
#define VM_STATE_STOP         0x10 
#define VM_STATE_RECORD_STOP  0x20 // entering vmStop

#define VM_BASIC_VM_DATA_SIZE    37 //SyncWord(1), header(1), vm.control(1), counter(1), counter(1), 16*2
#define VM_2G_CTRL_DL_DEBUG_SIZE 44

#define VM_4WAYPCM_DEBUG_SIZE    1282 //640 + 640 + 2
#define VM_REFMICPCM_DEBUG_SIZE  644 //640 + 2 + 2
#define VM_ECHOREF_PCM_DEBUG_SIZE 642 //640 + 2
#define VM_THIRDMIC_PCM_DEBUG_SIZE 642 //640 + 2

#define VM_3G_DSP_DEBUG_SIZE     22 //DSP 15 + L1_info 2 + crc_result|DCH_On/Off 1 + s_value 1 + tpc_SIR_lta 1 + dpdch_SIR_lta 1 + TFCI_max_corr 1
#define VM_3G_MCU_DEBUG_SIZE     37 //buffer status 1 + UL 17 + DL 19
#define VM_3G_DEBUG_SIZE         ( VM_3G_DSP_DEBUG_SIZE + VM_3G_MCU_DEBUG_SIZE )
#define VM_3G324M_DSP_DEBUG_SIZE 22 //DSP 15 + L1_info 2 + crc_result|DCH_On/Off 1 + s_value 1 + tpc_SIR_lta 1 + dpdch_SIR_lta 1 + TFCI_max_corr 1
#define VM_3G324M_MCU_DEBUG_SIZE 37 //buffer status 1 + UL 17 + DL 19
#define VM_3G324M_DEBUG_SIZE     ( VM_3G324M_DSP_DEBUG_SIZE + VM_3G324M_MCU_DEBUG_SIZE )
#define VM_MAXIMUM_SAVE_SIZE     91 //VM_3G_MCU_DEBUG_SIZE + VM_BASIC_VM_DATA_SIZE

#define SEVEN_PCM_SAVE_SIZE            ((VM_4WAYPCM_DEBUG_SIZE*2) + VM_REFMICPCM_DEBUG_SIZE + VM_ECHOREF_PCM_DEBUG_SIZE + VM_THIRDMIC_PCM_DEBUG_SIZE)
#define SIX_PCM_SAVE_SIZE            ((VM_4WAYPCM_DEBUG_SIZE*2) + VM_REFMICPCM_DEBUG_SIZE + VM_ECHOREF_PCM_DEBUG_SIZE)
#define FIVE_PCM_SAVE_SIZE           ((VM_4WAYPCM_DEBUG_SIZE*2) + VM_ECHOREF_PCM_DEBUG_SIZE)


// VM_MAGIC_HEADER(1), header(2), vm_lost & pcm_Lost(1),vm_counter(1), PCM (2*2*160)
#define VM_BUFFER_SIZE           (513 + 3000)//#### the expected number of frame within 40ms UL,and that within 40ms DL


#define VM_MAGIC_HEADER 0xBB00



/* ------------------------------------------------------------------------------ */
static struct{
   kal_spinlockid lockId;

   uint16         control_1;//new vm format from MT6280
   uint16         control_2;//new vm format from MT6280
   uint16         control_3;
   uint16         control_4;
   uint16         control_5;
   
   int16          *vmBuf;    /* point to buffer for VM                              */   
   int16          *pcmBuf;   /* point to buffer for 1st set UL-DL PCM data         */   
   uint16         debug_info; /* 0  : vm (speech codec data) only                   */
                              /* b1 : record 1st set of UL-DL PCM buffer for SPE    */
                              /* b2 : record 2nd set of UL-DL PCM buffer for SPE    */ 
   uint8          state; // record DSP  runnning status (including 2 hisr)
   uint8          vm_lost; 
   uint8          vm_lost_count;
   uint8          pcm_lost_count;                                                                  
   uint8          sc_mode;
   uint8          sd_mode;
   uint8          evs_cur_sd_mode;
   uint32         pcm_save_size;

	
	void (*vm_hdlr)(void); // callback function for vm logging
	bool isVocOn; // only use under call AM_IsSpeechOn()
	bool isVmLOn; // only use under call AM_IsSpeechOn()
	bool isMosaic;

	// related to 'vmRecOutputBuf', which is cycular buffer use to buffer formatted vm data from dsp
	uint16 pOutputBufWrite; 
	uint16 pOutputBufRead;
	uint16 outputBufSize;

	uint16 audId;
} vm;

// #if defined( VM_LOG_DEBUG )
uint8   vm_counter;
// #endif

#define VM_PCM_1ST_SET_RECORD_FLAG  0x0001 
#define VM_PCM_2ND_SET_RECORD_FLAG  0x0002
#define VM_VM_RECORD_FLAG           0x0004
#define VM_PCM_REFMIC_RECORD_FLAG   0x0008
#define VM_PCM_ECHO_REF_RECORD_FLAG 0x0010
#define VM_PCM_THIRDMIC_RECORD_FLAG 0x0020
#define VM_EPL_NB  0
#define VM_EPL_WB  1
#define VM_EPL_SWB 2
#define VM_EPL_FB  3

#define VM_EPL_NB_LEN  160
#define VM_EPL_WB_LEN  320
#define VM_EPL_SWB_LEN 640
#define VM_EPL_FB_LEN  960

#define VM_EPL_UL0_SHIFT 0 
#define VM_EPL_UL1_SHIFT 2
#define VM_EPL_DL0_SHIFT 4
#define VM_EPL_DL1_SHIFT 6
#define VM_EPL_UL2_SHIFT 8
#define VM_EPL_UL3_SHIFT 12
#define VM_EPL_UL4_SHIFT 10
#define VM_PCM_BAND_FLAG_UL_PRE		0x0010
#define VM_PCM_BAND_FLAG_UL_POS		0x0020
#define VM_PCM_BAND_FLAG_DL_PRE		0x0040
#define VM_PCM_BAND_FLAG_DL_POS		0x0080
#define VM_PCM_BAND_FLAG_UL2_POS	0x0100

#define TCH_VM_INT_FLAG             0x1 
#define TCH_PCM_INT_FLAG            0x2 

#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
#define G_CODEC_UL_INFO_HEADER_MAGIC_NUMBER (0x6666)
#define G_CODEC_DL_INFO_HEADER_MAGIC_NUMBER (0x6667)
//G.722 bitstream 20ms 160byte
//G.711 bitstream 10ms  80byte
//store max 4frame
#define G_CODEC_MAX_FRAME_NUMBER (4)
//stream_size+stream
#define G_CODEC_BITSTREAM_BUFFER_BYTE_SIZE (1*2+80)
//lost_info + system_time + codec + codec_parameters
#define G_CODEC_UL_INFO_BYTE_SIZE (4*2)
//lost_info + system_time + codec + codec_parameters + DL_PCM_buffer_size
#define G_CODEC_DL_INFO_BYTE_SIZE (5*2)
//header_magic_number+info_size+info_struct
#define G_CODEC_UL_INFO_TOTAL_BYTE_SIZE (2*2+G_CODEC_UL_INFO_BYTE_SIZE)
//header_magic_number+info_size+info_struct
#define G_CODEC_DL_INFO_TOTAL_BYTE_SIZE (2*2+G_CODEC_DL_INFO_BYTE_SIZE)
//total byte size
#define G_CODEC_UL_BITSTREAM_TOTAL_BYTE_SIZE ((G_CODEC_UL_INFO_TOTAL_BYTE_SIZE+G_CODEC_BITSTREAM_BUFFER_BYTE_SIZE)*G_CODEC_MAX_FRAME_NUMBER)
#define G_CODEC_DL_BITSTREAM_TOTAL_BYTE_SIZE ((G_CODEC_DL_INFO_TOTAL_BYTE_SIZE+G_CODEC_BITSTREAM_BUFFER_BYTE_SIZE)*G_CODEC_MAX_FRAME_NUMBER)
#endif //#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)

#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
#define VMREC_OUTPUT_BUF_SIZE (5120+2000+((G_CODEC_UL_BITSTREAM_TOTAL_BYTE_SIZE+1)>>1)+((G_CODEC_DL_BITSTREAM_TOTAL_BYTE_SIZE+1)>>1))	//####
#else //#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
#define VMREC_OUTPUT_BUF_SIZE (5120+2000)	//####
#endif //#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
static kal_uint16 vmRecOutputBuf[VMREC_OUTPUT_BUF_SIZE];
static kal_int16 eplInputBuf[SEVEN_PCM_SAVE_SIZE];
static kal_int16 vmBuffer[VM_BUFFER_SIZE];

#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
static kal_uint32 vmGCodecULBitstreamBuf[(G_CODEC_UL_BITSTREAM_TOTAL_BYTE_SIZE+3)/sizeof(kal_uint32)];
static kal_uint32 vmGCodecDLBitstreamBuf[(G_CODEC_DL_BITSTREAM_TOTAL_BYTE_SIZE+3)/sizeof(kal_uint32)];
static kal_uint32 vmGCodecULBufWritePos;
static kal_uint32 vmGCodecDLBufWritePos;
static kal_uint32 vmGCodecULBufLastHeaderPos;
static kal_uint32 vmGCodecDLBufLastHeaderPos;
static kal_uint16 *p16vmGCodecULBitstreamBuf;
static kal_uint16 *p16vmGCodecDLBitstreamBuf;
#endif //#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
#define VM_4G_G_SERIAL_DEBUG

#define VM_3G_NETWORK_INFO_LEN 7
uint16 vm3GNetworkInfo[VM_3G_NETWORK_INFO_LEN];

#if 0 // #ifndef TK6291_FAKE_COMPILE
/* under construction !*/
#endif //#ifndef TK6291_FAKE_COMPILE


#define GET_VM_LENGTH(vmctrl_1, vmctrl_2) AM_GetSpeechPatternLength((vmctrl_1>> 1) & 0x3F) \
+ ((vmctrl_2 & 1)?(AM_GetSpeechPatternLength((vmctrl_2 >> 1) & 0x3F)):0) + 11

                                

#if defined( __UMTS_RAT__ ) 
#define _EXTRA_LOG_FOR_BIT_TRUE_
#endif

#if defined(_EXTRA_LOG_FOR_BIT_TRUE_)
extern kal_bool g_bNeedExtraLog;
#endif

bool VM_CodIsAMR(uint16 codec_mode)
{
    if((codec_mode <= VM_SPH_AMR475 && codec_mode >= VM_SPH_AMR122) ||
       (codec_mode >= VM_SPH_AWB660 && codec_mode <= VM_SPH_AWB2385))
    {
        return true;
	}
        return false;
}
bool VM_CodIsEVS(uint16 codec_mode)
{
    if((codec_mode >= VM_SPH_EVS_RATE_MIN && codec_mode <= VM_SPH_EVS_RATE_MAX))
    {
        return true;
	}
        return false;
}

#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
void vmInitGCodecULBuf(void)
{
   //memset(vmGCodecULBitstreamBuf, 0, sizeof(vmGCodecULBitstreamBuf));
   p16vmGCodecULBitstreamBuf = (kal_uint16 *)vmGCodecULBitstreamBuf;
   vmGCodecULBufWritePos = 0;
   vmGCodecULBufLastHeaderPos = 0;
}

void vmInitGCodecDLBuf(void)
{
   //memset(vmGCodecDLBitstreamBuf, 0, sizeof(vmGCodecDLBitstreamBuf));
   p16vmGCodecDLBitstreamBuf = (kal_uint16 *)vmGCodecDLBitstreamBuf;
   vmGCodecDLBufWritePos = 0;
   vmGCodecDLBufLastHeaderPos = 0;
}
/*
uint16 vmGCodecBufferedSize(kal_uint16 *pu16StreamData)
{
   uint16 u16BufferedSize = 0;
   uint16 u16SeekPos = 0;
   uint32 u32ULfinish = 0;

   while(1)
   {
      if(pu16StreamData[u16SeekPos] == G_CODEC_UL_INFO_HEADER_MAGIC_NUMBER)
      {
         if(u32ULfinish != 0)
         {
            break;
         }
      }
      else if(pu16StreamData[u16SeekPos] == G_CODEC_DL_INFO_HEADER_MAGIC_NUMBER)
      {
         u32ULfinish = 1;
      }
      else
      {
         break;
      }

      u16SeekPos++;
      u16SeekPos = u16SeekPos + pu16StreamData[u16SeekPos];
      u16SeekPos++;
      u16SeekPos = u16SeekPos + ((pu16StreamData[u16SeekPos]+1)>>1);
      u16SeekPos++;
      if(u16SeekPos < ((G_CODEC_UL_BITSTREAM_TOTAL_BYTE_SIZE+G_CODEC_DL_BITSTREAM_TOTAL_BYTE_SIZE)>>1))
      {
         u16BufferedSize = u16SeekPos;
      }
      else
      {
         break;
      }
   }

   return(u16BufferedSize);
}
*/

void vmFormatter_gseries(uint16 *vmBuf)
{
   volatile uint16 *addr;
   uint16 I;//, sc_mode, sd_mode, sc_len, sd_len;
   uint32 J;
   Sal_VM_Frame vmfrm_t;
   uint16 *vmBuf_temp;
   //uint32 savedMask;
   /*I = DP_3G_DL_RX_MODE_REPORT >> 8;
   sd_mode = I & 0x1F;
   I = DP_3G_UL_TX_MODE_REPORT >> 8;
   sc_mode = I & 0x1F;*/
   SAL_VM_GetFrame3G(&vmfrm_t);
   //sd_mode = vmfrm_t.dec_mode;
   //sc_mode = vmfrm_t.enc_mode;

   //ASSERT_REBOOT( (sc_len = AM_GetSpeechPatternLength(sc_mode)) > 0 );
   //ASSERT_REBOOT( (sd_len = AM_GetSpeechPatternLength(sd_mode)) > 0 );

   //I = vmfrm_t.enc_hdr;
   //I = I & 0x03;
   //vm.control_1 = I << 7 | (sc_mode << 1) | (vm.control_1 & 1);
   //if(SAL_3G_Mode())
   //   vm.control_1 = vm.control_1 | 0x1000;


   //I = vmfrm_t.dec_hdr;
   //I = I & 0x0e;
   //vm.control_2 = I << 6 | (sd_mode << 1) | (vm.control_2 & 1);


   *vmBuf++ = VM_MAGIC_HEADER;
   J = L1SP_GetState();
   I = (uint16)( ( (SAL_VM_DBGINFO_LEN + SAL_VM_ENH_DBGINFO_LEN + SAL_VM_DRV_DBGINFO_LEN)<< 3 ) | J);
   *vmBuf++ = I;
   *vmBuf++ = VM_VM_RECORD_FLAG ;           //VM
   *vmBuf++ = 0;  //reset EPL band
   J =  fma_get_glb_ts() & 0xFFFFFFFF;
#if defined(_EXTRA_LOG_FOR_BIT_TRUE_)
   if( g_bNeedExtraLog )
        kal_dev_trace( TRACE_INFO, VM_SP3G_VM_L1T, J );
#endif
   I = (uint16)(J & 0xFFFF);
   *vmBuf++ = I;
   I = (uint16)(J >> 16);
   *vmBuf++ = I;
   vm_counter++;

   // record vm control value  
   #ifdef VM_4G_G_SERIAL_DEBUG
   kal_trace( TRACE_FUNC, VM_GFORM_INFO1, (vmGCodecULBufWritePos & 0x0FFF) | 0x2000);
   #endif //#ifdef VM_4G_G_SERIAL_DEBUG
   *vmBuf++ = (vmGCodecULBufWritePos & 0x0FFF) | 0x2000;//vm.control_1;
   vmBuf_temp = vmBuf;
   *vmBuf++ = 0;//fake vm.control_2;
   *vmBuf++ = 0;//fake vm.control_3;
   *vmBuf++ = 0;//fake vm.control_4;
   *vmBuf++ = 0;//fake vm.control_5;
   // record UL data   
   //addr = vmfrm_t.enc_hb_addr;
   for( I = 0; I < (vmGCodecULBufWritePos&0x0FFF); I++ )
   {
      *vmBuf++ = p16vmGCodecULBitstreamBuf[I];
   }
   vmInitGCodecULBuf();

   // record vm control value  
   //addr = vmfrm_t.dec_hb_addr;
   *vmBuf_temp = vmGCodecDLBufWritePos & 0x0FFF;//vm.control_2;
   #ifdef VM_4G_G_SERIAL_DEBUG
   kal_trace( TRACE_FUNC,VM_GFORM_INFO2, *vmBuf_temp);
   #endif //#ifdef VM_4G_G_SERIAL_DEBUG
   // record DL data   
   for( I = 0; I < (vmGCodecDLBufWritePos&0x0FFF); I++ )
      *vmBuf++ = p16vmGCodecDLBitstreamBuf[I];
   vmInitGCodecDLBuf();

   addr = vmfrm_t.dbgInfo_addr;  
   for( I = 0; I < SAL_VM_DBGINFO_LEN; I++ )
      *vmBuf++ = *addr++;

   addr = vmfrm_t.enh_dbgInfo_addr;  
   for( I = 0; I < SAL_VM_ENH_DBGINFO_LEN; I++ )
      *vmBuf++ = *addr++;

   for(I = 0; I < SAL_VM_DRV_DBGINFO_LEN; I++)
   {
      if(I < VM_3G_NETWORK_INFO_LEN)
         *vmBuf++ = vm3GNetworkInfo[I];
      else
         *vmBuf++ = 0;
   }

}


#endif //#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)


void vmStoreGCodecULStream(vmGCodecULInfo *pstvmGCodecULInfo, kal_uint16 u16StreamSize, kal_uint8 *pu8StreamData)
{
#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
   kal_uint32 u32TotalBufferSize = sizeof(vmGCodecULBitstreamBuf) >> 1;
   //bytesize: G_CODEC_UL_INFO_TOTAL_BYTE_SIZE + stream_size + stream_data[]
   //>>1 => 2byte size
   kal_uint32 u32NeedSize = (G_CODEC_UL_INFO_TOTAL_BYTE_SIZE + 2 + u16StreamSize + 1) >> 1;
   kal_uint32 i, j;
   kal_uint16 u16tempData;

   #ifdef VM_4G_G_SERIAL_DEBUG
   kal_trace( TRACE_FUNC,VM_GFORM_ULSTREAM_ENTER);
   #endif //#ifdef VM_4G_G_SERIAL_DEBUG

   // dsp status check
   if(vm.state != VM_STATE_RECORD)
   {
      return;
   }

   // application status check
   if( (false == vm.isVocOn) && (false == vm.isVmLOn)) // (false == vm.isIdleVmOn) && 
   {
      return;
   }

   #ifdef VM_4G_G_SERIAL_DEBUG
   kal_trace( TRACE_FUNC,VM_GFORM_ULSTREAM_INFO1, u32TotalBufferSize, vmGCodecULBufWritePos, ((u16StreamSize+1)>>1), u16StreamSize);
   #endif //#ifdef VM_4G_G_SERIAL_DEBUG

   if( (u32TotalBufferSize-vmGCodecULBufWritePos) >= u32NeedSize )
   {
      vmGCodecULBufLastHeaderPos = vmGCodecULBufWritePos;

      p16vmGCodecULBitstreamBuf[vmGCodecULBufWritePos] = G_CODEC_UL_INFO_HEADER_MAGIC_NUMBER;
      vmGCodecULBufWritePos++;
      p16vmGCodecULBitstreamBuf[vmGCodecULBufWritePos] = G_CODEC_UL_INFO_BYTE_SIZE >> 1;
      vmGCodecULBufWritePos++;
      p16vmGCodecULBitstreamBuf[vmGCodecULBufWritePos] = pstvmGCodecULInfo->drop_info;
      vmGCodecULBufWritePos++;
      p16vmGCodecULBitstreamBuf[vmGCodecULBufWritePos] = (kal_uint16)(ust_get_current_time()/1000);//ust_get_current_time(): unit is micro second (us) => ust_get_current_time()/1000: unit is ms
                                                         //(kal_uint16)L1I_GetTimeStamp();//pstvmGCodecULInfo->system_time;
      vmGCodecULBufWritePos++;
      p16vmGCodecULBitstreamBuf[vmGCodecULBufWritePos] = pstvmGCodecULInfo->codec;
      vmGCodecULBufWritePos++;
      p16vmGCodecULBitstreamBuf[vmGCodecULBufWritePos] = pstvmGCodecULInfo->codec_parameters;
      vmGCodecULBufWritePos++;
      p16vmGCodecULBitstreamBuf[vmGCodecULBufWritePos] = u16StreamSize;
      vmGCodecULBufWritePos++;
      j = 0;
      for(i=0; i<(u16StreamSize>>1); i++)
      {
         u16tempData = pu8StreamData[j];
         j++;
         u16tempData = (u16tempData<<8) | pu8StreamData[j];
         j++;
         p16vmGCodecULBitstreamBuf[vmGCodecULBufWritePos] = u16tempData;
         vmGCodecULBufWritePos++;
      }
      if(u16StreamSize&0x01)
      {
         u16tempData = pu8StreamData[j];
         u16tempData = (u16tempData<<8) | u16tempData;
         p16vmGCodecULBitstreamBuf[vmGCodecULBufWritePos] = u16tempData;
         vmGCodecULBufWritePos++;
      }
   }
   else
   {
      kal_trace( TRACE_FUNC,VM_GFORM_ULSTREAM_INFO2, u32NeedSize, u32TotalBufferSize-vmGCodecULBufWritePos);
      if(vmGCodecULBufWritePos != 0)
      {
         p16vmGCodecULBitstreamBuf[vmGCodecULBufLastHeaderPos+2] += 0x0100;
      }
      else
      {
         kal_trace( TRACE_FUNC,VM_GFORM_ULSTREAM_INFO3, u32NeedSize, u32TotalBufferSize);
      }
   }

   #ifdef VM_4G_G_SERIAL_DEBUG
   kal_trace( TRACE_FUNC,VM_GFORM_ULSTREAM_EXIT);
   #endif //#ifdef VM_4G_G_SERIAL_DEBUG
#endif //#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
}


void vmStoreGCodecDLStream(vmGCodecDLInfo *pstvmGCodecDLInfo, kal_uint16 u16StreamSize, kal_uint8 *pu8StreamData)
{
#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
   kal_uint32 u32TotalBufferSize = sizeof(vmGCodecDLBitstreamBuf) >> 1;
   //bytesize: G_CODEC_DL_INFO_TOTAL_BYTE_SIZE + stream_size + stream_data[]
   //>>1 => 2byte size
   kal_uint32 u32NeedSize = (G_CODEC_DL_INFO_TOTAL_BYTE_SIZE + 2 + u16StreamSize + 1) >> 1;
   kal_uint32 i, j;
   kal_uint16 u16tempData;

   #ifdef VM_4G_G_SERIAL_DEBUG
   kal_trace( TRACE_FUNC,VM_GFORM_DLSTREAM_ENTER);
   #endif //#ifdef VM_4G_G_SERIAL_DEBUG

   // dsp status check
   if(vm.state != VM_STATE_RECORD)
   {
      return;
   }

   // application status check
   if(  (false == vm.isVocOn) && (false == vm.isVmLOn)) // (false == vm.isIdleVmOn) &&
   {
      return;
   }

   #ifdef VM_4G_G_SERIAL_DEBUG
   kal_trace( TRACE_FUNC,VM_GFORM_DLSTREAM_INFO1, u32TotalBufferSize, vmGCodecDLBufWritePos, ((u16StreamSize+1)>>1), u16StreamSize);
   #endif //#ifdef VM_4G_G_SERIAL_DEBUG

   if( (u32TotalBufferSize-vmGCodecDLBufWritePos) >= u32NeedSize )
   {
      vmGCodecDLBufLastHeaderPos = vmGCodecDLBufWritePos;

      p16vmGCodecDLBitstreamBuf[vmGCodecDLBufWritePos] = G_CODEC_DL_INFO_HEADER_MAGIC_NUMBER;
      vmGCodecDLBufWritePos++;
      p16vmGCodecDLBitstreamBuf[vmGCodecDLBufWritePos] = G_CODEC_DL_INFO_BYTE_SIZE >> 1;
      vmGCodecDLBufWritePos++;
      p16vmGCodecDLBitstreamBuf[vmGCodecDLBufWritePos] = pstvmGCodecDLInfo->drop_info;
      vmGCodecDLBufWritePos++;
      p16vmGCodecDLBitstreamBuf[vmGCodecDLBufWritePos] = (kal_uint16)(ust_get_current_time()/1000);//ust_get_current_time(): unit is micro second (us) => ust_get_current_time()/1000: unit is ms
                                                         //(kal_uint16)L1I_GetTimeStamp();//pstvmGCodecDLInfo->system_time;
      vmGCodecDLBufWritePos++;
      p16vmGCodecDLBitstreamBuf[vmGCodecDLBufWritePos] = pstvmGCodecDLInfo->codec;
      vmGCodecDLBufWritePos++;
      p16vmGCodecDLBitstreamBuf[vmGCodecDLBufWritePos] = pstvmGCodecDLInfo->codec_parameters;
      vmGCodecDLBufWritePos++;
      p16vmGCodecDLBitstreamBuf[vmGCodecDLBufWritePos] = pstvmGCodecDLInfo->DL_PCM_size;
      vmGCodecDLBufWritePos++;
      p16vmGCodecDLBitstreamBuf[vmGCodecDLBufWritePos] = u16StreamSize;
      vmGCodecDLBufWritePos++;
      j = 0;
      for(i=0; i<(u16StreamSize>>1); i++)
      {
         u16tempData = pu8StreamData[j];
         j++;
         u16tempData = (u16tempData<<8) | pu8StreamData[j];
         j++;
         p16vmGCodecDLBitstreamBuf[vmGCodecDLBufWritePos] = u16tempData;
         vmGCodecDLBufWritePos++;
      }
      if(u16StreamSize&0x01)
      {
         u16tempData = pu8StreamData[j];
         u16tempData = (u16tempData<<8) | u16tempData;
         p16vmGCodecDLBitstreamBuf[vmGCodecDLBufWritePos] = u16tempData;
         vmGCodecDLBufWritePos++;
      }
   }
   else
   {
      kal_trace( TRACE_FUNC,VM_GFORM_DLSTREAM_INFO2, u32NeedSize, u32TotalBufferSize-vmGCodecDLBufWritePos);
      if(vmGCodecDLBufWritePos != 0)
      {
         p16vmGCodecDLBitstreamBuf[vmGCodecDLBufLastHeaderPos+2] += 0x0100;
      }
      else
      {
         kal_trace( TRACE_FUNC,VM_GFORM_DLSTREAM_INFO3, u32NeedSize, u32TotalBufferSize);
      }
   }

   #ifdef VM_4G_G_SERIAL_DEBUG
   kal_trace( TRACE_FUNC,VM_GFORM_DLSTREAM_EXIT);
   #endif //#ifdef VM_4G_G_SERIAL_DEBUG
#endif //#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
}


//use this function instead of Media_WriteDataDone to avoid media.waiting false usage
int32 vmRec_queryOutputBufFreeSpace( void )
{
   int32 count;

   count = vm.pOutputBufRead + vm.outputBufSize - vm.pOutputBufWrite -1; 

   if( count >= vm.outputBufSize )
      count -= vm.outputBufSize;
   return count;
}

void vmRec_getWriteBuffer( uint16 **buffer, uint32 *bufLen )
{
   int32 count;

	if( vm.pOutputBufRead > vm.pOutputBufWrite )
      count = vm.pOutputBufRead  - vm.pOutputBufWrite - 1;
   else if( vm.pOutputBufRead == 0 )
      count = vm.outputBufSize - vm.pOutputBufWrite - 1;
   else
      count = vm.outputBufSize - vm.pOutputBufWrite;

   *buffer = &vmRecOutputBuf[vm.pOutputBufWrite];
   *bufLen = (uint32)count;
}

static void vmRec_writeDataDone( uint32 len )
{
	vm.pOutputBufWrite += len;
   if( vm.pOutputBufWrite >= vm.outputBufSize)
      vm.pOutputBufWrite = vm.pOutputBufWrite-vm.outputBufSize;
}

static void vmRec_writeVmToOutputBuf( uint16 vmLen, uint16 *vmBuf ) // a frame of VM must be written to MB
{
	uint16 *toPtr;
	uint32 segment, I;

   vmRec_getWriteBuffer( &toPtr, &segment );

   if(segment > vmLen)      
      segment = vmLen;

   for( I = segment ; I > 0 ; I-- ){
		*toPtr++ = *vmBuf++;		
   }
   
   vmRec_writeDataDone( segment );

	// second segment
   vmLen -= segment;	// unprocess length
   if(vmLen > 0 )
   {
      vmRec_getWriteBuffer( &toPtr, &segment );

		if(segment > vmLen)      
      	segment = vmLen;
		
		for( I = segment ; I > 0 ; I-- ){
			*toPtr++ = *vmBuf++;
		}
      vmRec_writeDataDone( segment );
   }
   return;
}

/**
	@buf1: pointer to pcm buf1, 
	@len1:length of buf1, unit is word(2byte)
	@buf2:pointer to pcm buf2
	@len2: length of buf2. unit is word(2byte)
*/
void VmRec_GetReadBufs(kal_uint32 *add1, kal_uint16 *len1, kal_uint32 *add2, kal_uint16 *len2)
{

	if(vm.pOutputBufWrite >= vm.pOutputBufRead){ // write > read, 1 buf segment
	
		*add1 = (kal_uint32)(&vmRecOutputBuf[vm.pOutputBufRead]);		
		*len1 = (vm.pOutputBufWrite - vm.pOutputBufRead);		
		*add2 = 0;
		*len2 = 0;
	
	} else { //write < read, 2 buf segment
		*add1 = (kal_uint32)(&vmRecOutputBuf[vm.pOutputBufRead]);
		*len1 = (vm.outputBufSize - vm.pOutputBufRead);
		*add2 = (kal_uint32)(vmRecOutputBuf);
		*len2 = (vm.pOutputBufWrite);		
	}		
	//pcmRec.bufReadFrame = curWriteFrame;
}

/**
	@len: unit is word
*/
void VmRec_ReadDataDone(uint16 len)
{
	vm.pOutputBufRead += len;
   if( vm.pOutputBufRead >= vm.outputBufSize)
      vm.pOutputBufRead = vm.pOutputBufRead-vm.outputBufSize;
}

static void vocWriteVocToCatcher( uint32 vmLen, uint16 *vmBuf )
{
   uint32 len = vmLen*2;
   uint16 *buf = vmBuf;
   
   kal_dev_trace(TRACE_GROUP_VM, RECORD_LENGTH, len);
   while(len > 1000)
   {
      tst_vc_response(TVCI_VM_LOGGING, (const kal_uint8*)buf, 1000);
	  buf += 500;
	  len -= 1000;
   }
   tst_vc_response(TVCI_VM_LOGGING, (const kal_uint8*)buf, len);
}

void vmFormatter_vm(int16 *vmBuf)
{	
   volatile uint16   *addr;
   uint16   I, sc_mode, sd_mode, sc_len, sd_len;	
   uint32   vmLen = 0;
	Sal_VM_Frame vmfrm_t;
	
	SAL_VM_GetFrame2G(&vmfrm_t);
	
	sc_mode = vmfrm_t.enc_mode;
	sd_mode = vmfrm_t.dec_mode;

// #if defined( VM_LOG_DEBUG )
	/*for catcher log codec information*/
	if( vm.sc_mode != sc_mode || vm.sd_mode != sd_mode ){
		L1Audio_Msg_SPEECH_CODEC( L1SP_Speech_Codec_Mode(sc_mode), L1SP_Speech_Codec_Mode(sd_mode) );
		vm.sc_mode = sc_mode;
		vm.sd_mode = sd_mode;
	}
// #endif
	sc_len = AM_GetSpeechPatternLength(sc_mode);
	ASSERT_REBOOT( sc_len > 0 );
	sd_len = AM_GetSpeechPatternLength(sd_mode);
	ASSERT_REBOOT( sd_len > 0 );

	vm.control_1 = (sc_mode << 1) | (vm.control_1 & 1);
	vm.control_2 = (sd_mode << 1) | (vm.control_2 & 1);

	if(sc_mode > 2){
	I = vmfrm_t.enc_hdr & 3;//bit0, bit1
	vm.control_1 = vm.control_1 | (I << 7); //Tx
	}
	else{
	I = (vmfrm_t.enc_hdr & 2);//sp_flag
	vm.control_1 = vm.control_1 | (I << 10); 
	//add 3G_Mode here, where is dsp's 3g mode indicator
	}

	if(sd_mode > 2){
	I = (vmfrm_t.dec_hdr & 14) >> 1;//bit1, bit2, bit3
	vm.control_2 = vm.control_2 | (I << 7);	// Rx
	}
	else{
	I = (vmfrm_t.dec_hdr & 0x3E);
	vm.control_2 = vm.control_2 | (I << 10);
	}

		{	
#if 0 // #ifndef TK6291_FAKE_COMPILE
/* under construction !*/
#endif //#ifndef TK6291_FAKE_COMPILE
		uint32 J;

		*vmBuf++ = VM_MAGIC_HEADER;
		J = L1SP_GetState();
		I = (uint16)( ( (SAL_VM_DBGINFO_LEN + SAL_VM_ENH_DBGINFO_LEN + SAL_VM_DRV_DBGINFO_LEN) << 3 ) | J);				  
		*vmBuf++ = I;
		*vmBuf++ = VM_VM_RECORD_FLAG;
		*vmBuf++ = 0;  //reset EPL band
    J =  fma_get_glb_ts() & 0xFFFFFFFF;
		I = (uint16)(J & 0xFFFF);
		*vmBuf++ = I;
		I = (uint16)(J >> 16);
		*vmBuf++ = I;
		vm_counter++;
		}

    //Chip ID
    vm.control_3 = VM_CHIP_ID;

	*vmBuf++ = vm.control_1;
	*vmBuf++ = vm.control_2;
	*vmBuf++ = vm.control_3;
	*vmBuf++ = vm.control_4;
	*vmBuf++ = vm.control_5;
	vmLen+=2;


	if( vm.control_1 & 1 ) {
		addr = vmfrm_t.enc_hb_addr;
		vmLen += sc_len;
		for( I = 0; I < sc_len; I++ )
		{
			*vmBuf++ = *addr++;
			if(L1SP_GetState() == L1SP_STATE_2G_SPEECH_ON)		
                addr++;
		}
	}

	if( vm.control_2 & 1 ) {
		addr = vmfrm_t.dec_hb_addr;
		vmLen += sc_len;
		for( I = 0; I < sd_len; I++ )
		{
			*vmBuf++ = *addr++;
			if(L1SP_GetState() == L1SP_STATE_2G_SPEECH_ON)		
                addr++;
		}

	 addr = vmfrm_t.dbgInfo_addr;  
	 for( I = 0; I < SAL_VM_DBGINFO_LEN; I++ )
				*vmBuf++ = *addr++;

	 addr = vmfrm_t.enh_dbgInfo_addr;  
	 for( I = 0; I < SAL_VM_ENH_DBGINFO_LEN; I++ )
				*vmBuf++ = *addr++;

	 for(I = 0; I < SAL_VM_DRV_DBGINFO_LEN; I++){
			    *vmBuf++ = 0;
		}

	}
}


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
#if defined(__MA_L1__)
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
#endif
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
#endif 

/* ------------------------------------------------------------------------------ */

static void vmRefMic_AGC_PcmRecord( bool isToVoc, volatile uint16 *addr, uint16 len )
{
   uint32 I, tmp = 0;
   uint16 *buf, *mBuf;
   uint16 logsize;

   logsize = len + 2 + 2;
   
   buf = (uint16 *)vm.pcmBuf; 
   *buf++ = (vm.vm_lost_count << 8) + vm.pcm_lost_count;
   *buf++ = vm_counter ;   
   
   {//RefMic
      EMI_ReadFromDSP((uint16*)buf, addr, len);
      buf += len;
	  *buf++ = SAL_AGC_GetSWGain(0);
	  *buf = SAL_AGC_GetSWGain(1);
   }

   buf = (uint16 *)vm.pcmBuf;

	if(isToVoc){
		vocWriteVocToCatcher(logsize, buf);   
		
	} else { // normal vm process
	
	   vmRec_getWriteBuffer( &mBuf, &tmp );
	   if( tmp > logsize )
	      tmp = logsize;
	   kal_mem_cpy(mBuf, buf, tmp<<1);
	   buf += tmp;
	   mBuf+=tmp;
		
	   vmRec_writeDataDone(tmp);
	   tmp = logsize - tmp;
	   if( (int32)tmp > 0 ){
	      vmRec_getWriteBuffer( &mBuf, &I );
	   if(I>=tmp){
	   	   kal_mem_cpy(mBuf, buf, tmp<<1);
		     buf+=tmp;
	       mBuf+=tmp;
	       vmRec_writeDataDone(tmp);
	   }
	   else {
	      kal_dev_trace(TRACE_INFO, VM_REC_HISR_PCM_DATA_LOST, 0);
	   }
	 }
	}
}

static void vmEchoRefPcmRecord( bool isToVoc, volatile uint16 *addr, uint16 len )
{
   uint32 I, tmp = 0;
   uint16 *buf, *mBuf;
   uint16 logsize;

	// kal_prompt_trace(MOD_L1SP, "vmRefMic_AGC_PcmRecord");
	
   logsize = len + 2;
   
   buf = (uint16 *)vm.pcmBuf;
   *buf++ = (vm.vm_lost_count << 8) + vm.pcm_lost_count;
   *buf++ = vm_counter ;
   
   EMI_ReadFromDSP((uint16*)buf, addr, len);
   buf = (uint16 *)vm.pcmBuf;
   
	if(isToVoc){
		vocWriteVocToCatcher(logsize, buf);   
		
	} else { // normal vm process
	
	   vmRec_getWriteBuffer( &mBuf, &tmp );
	   if( tmp > logsize )
	      tmp = logsize;
	   kal_mem_cpy(mBuf, buf, tmp<<1);
     buf+=tmp;
     mBuf+=tmp;
		
	   vmRec_writeDataDone(tmp);
	   tmp = logsize - tmp;
	   if( (int32)tmp > 0 ){
	      vmRec_getWriteBuffer( &mBuf, &I );
	      if(I>=tmp){
		  	    kal_mem_cpy(mBuf, buf, tmp<<1);
		        buf+=tmp;
	          mBuf+=tmp;
	          vmRec_writeDataDone(tmp);
	      }
	      else {
			      kal_dev_trace(TRACE_INFO, VM_REC_HISR_PCM_DATA_LOST, 0);
		    }
	   }
	}
}

static void vm4WayPcmRecord(volatile uint16 *ul_addr, uint16 ul_len, volatile uint16 *dl_addr, uint16 dl_len)
{
   uint32 I;
	uint32 tmp = 0;
   uint16 *buf, *mBuf;
   uint16 logsize;
	
   logsize = ul_len + dl_len + 2;
	
   buf = (uint16 *)vm.pcmBuf; 
   // header for record 1st set of UL-DL PCM data 
   *buf++ = (vm.vm_lost_count << 8) + vm.pcm_lost_count;
   *buf++ = vm_counter ;
   
   // Uplink
   EMI_ReadFromDSP((uint16*)buf, ul_addr, ul_len);
   buf+= ul_len;
   
   // Downlink 
   EMI_ReadFromDSP((uint16*)buf, dl_addr, dl_len);
   
   buf = (uint16 *)vm.pcmBuf;
   vmRec_getWriteBuffer( &mBuf, &tmp );
   if( tmp > logsize )
      tmp = logsize;
   //for( I = tmp ; I > 0 ; I-- ) {
   //   *mBuf++ = *buf++;		
   //}
   kal_mem_cpy(mBuf, buf, tmp<<1);
   buf += tmp;
   mBuf += tmp; 
   
   vmRec_writeDataDone(tmp);
	
   tmp = logsize - tmp; // tmp is size did not write to Buffer
   if( (int32)tmp > 0 ){
      vmRec_getWriteBuffer( &mBuf, &I );

		if(I>=tmp){
   	   //for( I = tmp ; I > 0 ; I--) {
       //	  *mBuf++ = *buf++;      	   
   	   //}
		    kal_mem_cpy(mBuf, buf, tmp<<1);
	      buf += tmp;
	      mBuf += tmp; 
		    
      	vmRec_writeDataDone( tmp );
		} else {
			kal_dev_trace(TRACE_INFO, VM_REC_HISR_PCM_DATA_LOST, 0);
		}
   }
}

static void voc4WayPcmRecord( volatile uint16* ul_addr, uint16 ul_len, volatile uint16* dl_addr, uint16 dl_len)
{
   uint16 *buf;

   buf = (uint16 *)vm.pcmBuf; 
   // header for record 1st set of UL-DL PCM data 
   *buf++ = (vm.vm_lost_count << 8) + vm.pcm_lost_count;
   *buf++ = vm_counter ;

	// make it interleave	
   // Uplink
   EMI_ReadFromDSP((uint16*)buf, ul_addr, ul_len);
   buf+= ul_len;
   
   // Downlink 
   EMI_ReadFromDSP((uint16*)buf, dl_addr, dl_len);
   
   buf = (uint16 *)vm.pcmBuf;

   vocWriteVocToCatcher(ul_len + dl_len + 2, buf);
}

static uint16 vmEPLBandSet(uint16 u2EPLBufLen, uint16 u2EPLBufShift)
{
    uint16 u2vmEPLBand = 0;
    if(u2EPLBufLen == VM_EPL_NB_LEN)
    {
        u2vmEPLBand = VM_EPL_NB;
    }
    else if(u2EPLBufLen == VM_EPL_WB_LEN)
    {
        u2vmEPLBand = VM_EPL_WB;
    }
    else if(u2EPLBufLen == VM_EPL_SWB_LEN)
    {
        u2vmEPLBand = VM_EPL_SWB;
    }
    else if(u2EPLBufLen == VM_EPL_FB_LEN)
    {
        u2vmEPLBand = VM_EPL_FB;
    }
    else
    {
        ASSERT(0);
    }
    return u2vmEPLBand << u2EPLBufShift;
}
void vmTchPcmRecordHisr(void *param)
{
   uint32 I, tmp = 0;
   // uint16 dummy;
   uint16 *buf; //, *mBuf;
   Sal_EPL_Frame eplfrm_t;
   uint16 pcmsize;

   if (KAL_SPINLOCK_NOT_AVAILABLE == kal_take_spinlock(vm.lockId, KAL_NO_WAIT)) {
		kal_trace(TRACE_INFO, VM_HISR_LOCK_NOT_AVALIABLE, 2);
		goto leaveEplHisr;  
	}
   
   // dsp status check
   if( vm.state != VM_STATE_RECORD ) {
		goto leaveEplProc;
   	}

	// application status check
	if( (false == vm.isVocOn) && (false == vm.isVmLOn)) { // (false == vm.isIdleVmOn) && 
		goto leaveEplProc;
	}

   SAL_EPL_GetFrame(&eplfrm_t);

   pcmsize = 0;
   if(vm.debug_info & VM_PCM_1ST_SET_RECORD_FLAG)
   		pcmsize += eplfrm_t.ul_pre_len + eplfrm_t.dl_pre_len;
   if(vm.debug_info & VM_PCM_2ND_SET_RECORD_FLAG)
   		pcmsize += eplfrm_t.ul_pos_len + eplfrm_t.dl_pos_len;
   if(vm.debug_info & VM_PCM_REFMIC_RECORD_FLAG)
   		pcmsize += eplfrm_t.ul2_pos_len;
   if(vm.debug_info & VM_PCM_ECHO_REF_RECORD_FLAG)
   	  pcmsize += eplfrm_t.ul4_pos_len;
   if(vm.debug_info & VM_PCM_THIRDMIC_RECORD_FLAG)
   	  pcmsize += eplfrm_t.ul3_pos_len;

	
   // handing the total size I (vm + pcm buffer) in word(2byte)
   buf = (uint16 *)vm.vmBuf;
   if( buf[0] == VM_MAGIC_HEADER ){//already buffer VM, (normal case)
      tmp = ( buf[1] >> 3 ) + pcmsize; // debug size (vm buf + pcm buf)
//#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
      //if(L1SP_STATE_4G_SPEECH_ON == L1SP_GetState() && SP4G_IsGCodecMode()){
//      if( (buf[5]&0x3000) == 0x2000 ){
//         kal_trace( TRACE_FUNC,VM_TCHPCMHISR_G_CODEC);
//         I =   tmp
//             + ( buf[5] & 0x0FFF )
//             + ( buf[6] & 0x0FFF )
//             + 7;
//      }else
//#endif         
      {
         I = tmp + GET_VM_LENGTH(vm.control_1, vm.control_2);
      }      
   } else { // case when previous vmbufer is missing! Save the pcm data with empty vm 
      tmp = pcmsize;  //debug size(only PCM)
      I = pcmsize + 4 + 2 ;// plus sync-word, len,  format,  bend,  and 2 timestamps

	  
   }

    buf[3] |= vmEPLBandSet(eplfrm_t.ul_pre_len, VM_EPL_UL0_SHIFT);
    buf[3] |= vmEPLBandSet(eplfrm_t.ul_pos_len, VM_EPL_UL1_SHIFT);
    buf[3] |= vmEPLBandSet(eplfrm_t.dl_pre_len, VM_EPL_DL0_SHIFT);
    buf[3] |= vmEPLBandSet(eplfrm_t.dl_pos_len, VM_EPL_DL1_SHIFT);
    buf[3] |= vmEPLBandSet(eplfrm_t.ul2_pos_len, VM_EPL_UL2_SHIFT);
    buf[3] |= vmEPLBandSet(eplfrm_t.ul3_pos_len, VM_EPL_UL3_SHIFT);
    buf[3] |= vmEPLBandSet(eplfrm_t.ul4_pos_len, VM_EPL_UL4_SHIFT);
  
  kal_prompt_trace(MOD_L1SP, "UL_PRE %d, UL_POS %d, DL_PRE %d, DL_POS %d, UL2 %d, UL3 %d, UL4 %d", eplfrm_t.ul_pre_len, eplfrm_t.ul_pos_len, eplfrm_t.dl_pre_len, eplfrm_t.dl_pos_len, eplfrm_t.ul2_pos_len, eplfrm_t.ul3_pos_len, eplfrm_t.ul4_pos_len);
	kal_prompt_trace(MOD_L1SP, "Band %x", buf[3]);
	//when vm logging and VOC are both on, only send the data to vm logging to reduce log size
	if(vm.isVmLOn ) { // Vm Logging  or idle VM record // || vm.isIdleVmOn
		
		if( vmRec_queryOutputBufFreeSpace() < I )
		{ // drop this log and add counter
	      vm.pcm_lost_count++; 
			kal_dev_trace(TRACE_INFO, VM_REC_HISR_VM_DATA_LOST, vm.vm_lost_count, 1);
			goto leaveEplProc;
            // if(vm.vm_hdlr) {
            // vm.vm_hdlr();
            // }
	        // return;       
		} else {
			uint32 timestamp; 
			buf[0] = VM_MAGIC_HEADER;
			buf[1] = (uint16)(tmp << 3) | ( L1SP_GetState()) ;	               
			buf[2] |= ( vm.debug_info & (VM_PCM_REFMIC_RECORD_FLAG + VM_PCM_1ST_SET_RECORD_FLAG + VM_PCM_2ND_SET_RECORD_FLAG + VM_PCM_ECHO_REF_RECORD_FLAG + VM_PCM_THIRDMIC_RECORD_FLAG) );              
			// buf[3] is set in previous
			timestamp =  fma_get_glb_ts() & 0xFFFFFFFF;
			buf[4] = (uint16)(timestamp & 0xFFFF); // Lo
			buf[5] = (uint16)(timestamp >> 16); // High
		}
		
		// vm buf 
		I -= pcmsize; // I is vm buffer size, 
		vmRec_writeVmToOutputBuf(I, buf );

		//pcm bufs
	   if(vm.debug_info & VM_PCM_1ST_SET_RECORD_FLAG)
	   {
	      vm4WayPcmRecord(eplfrm_t.ul_pre_buf, eplfrm_t.ul_pre_len, eplfrm_t.dl_pre_buf, eplfrm_t.dl_pre_len);			
	   }  

	   if(vm.debug_info & VM_PCM_2ND_SET_RECORD_FLAG)
	   {      
	      vm4WayPcmRecord(eplfrm_t.ul_pos_buf, eplfrm_t.ul_pos_len, eplfrm_t.dl_pos_buf, eplfrm_t.dl_pos_len);			
	   }     
	       
	   if(vm.debug_info & VM_PCM_REFMIC_RECORD_FLAG)
	   {
	      vmRefMic_AGC_PcmRecord(false, eplfrm_t.ul2_pos_buf, eplfrm_t.ul2_pos_len);
	   }
		
       if(vm.debug_info & VM_PCM_ECHO_REF_RECORD_FLAG)
	   {      
	      vmEchoRefPcmRecord(false, eplfrm_t.ul4_pos_buf, eplfrm_t.ul4_pos_len);			
	   }

	   if(vm.debug_info & VM_PCM_THIRDMIC_RECORD_FLAG)
	   {      
	      vmEchoRefPcmRecord(false, eplfrm_t.ul3_pos_buf, eplfrm_t.ul3_pos_len);			
	   }
	   
       // if(vm.vm_hdlr) {
       //   vm.vm_hdlr();
       // }
	} else { // VOC,
		// fill vm buffer header 
		buf[0] = VM_MAGIC_HEADER;
		buf[1] = (uint16)(tmp << 3) | ( L1SP_GetState()) ;								
		buf[2] |= ( vm.debug_info & (VM_PCM_REFMIC_RECORD_FLAG + VM_PCM_1ST_SET_RECORD_FLAG + VM_PCM_2ND_SET_RECORD_FLAG + VM_PCM_ECHO_REF_RECORD_FLAG + VM_PCM_THIRDMIC_RECORD_FLAG) ); 				 

		I -= pcmsize;
		vocWriteVocToCatcher(I, buf);
		if(vm.debug_info & VM_PCM_1ST_SET_RECORD_FLAG) {
			voc4WayPcmRecord(eplfrm_t.ul_pre_buf, eplfrm_t.ul_pre_len, eplfrm_t.dl_pre_buf, eplfrm_t.dl_pre_len);
		}

		if(vm.debug_info & VM_PCM_2ND_SET_RECORD_FLAG) {
			voc4WayPcmRecord(eplfrm_t.ul_pos_buf, eplfrm_t.ul_pos_len, eplfrm_t.dl_pos_buf, eplfrm_t.dl_pos_len);			
		}

		if(vm.debug_info & VM_PCM_REFMIC_RECORD_FLAG)
		{
      	vmRefMic_AGC_PcmRecord(true, eplfrm_t.ul2_pos_buf, eplfrm_t.ul2_pos_len);
		}

		if(vm.debug_info & VM_PCM_ECHO_REF_RECORD_FLAG)
		{
      	vmEchoRefPcmRecord(true, eplfrm_t.ul4_pos_buf, eplfrm_t.ul4_pos_len);
		}

		if(vm.debug_info & VM_PCM_THIRDMIC_RECORD_FLAG)
	    {      
	    vmEchoRefPcmRecord(true, eplfrm_t.ul3_pos_buf, eplfrm_t.ul3_pos_len);			
	    }
		
	}

	*(int32 *)vm.vmBuf = 0;//reset
	vm.pcm_lost_count = 0;
	buf[2] = 0;
	buf[3] = 0;

leaveEplProc: 
	kal_give_spinlock(vm.lockId);

	if(vm.vm_hdlr) {
		vm.vm_hdlr();
	}
leaveEplHisr:
	return;
}

void vmFormatter_amr(int16 *vmBuf)
{	
   volatile uint16 *addr;
   uint16 I, sc_mode, sd_mode, sc_len, sd_len ; 	
   uint32 J;
   Sal_VM_Frame vmfrm_t;
	/*I = DP_3G_DL_RX_MODE_REPORT >> 8;
	sd_mode = I & 0x1F;
	I = DP_3G_UL_TX_MODE_REPORT >> 8;
	sc_mode = I & 0x1F;*/
	SAL_VM_GetFrame3G(&vmfrm_t);
	sd_mode = vmfrm_t.dec_mode;
	sc_mode = vmfrm_t.enc_mode;
	
    
	if((VM_CodIsAMR(sc_mode))==false)
	{
	    sc_mode = sd_mode;
	    vmfrm_t.enc_hdr |= 0x0; //NO_DATA
	}
	
	
	
  sc_len = AM_GetSpeechPatternLength(sc_mode);
	ASSERT_REBOOT( sc_len > 0 );
	sd_len = AM_GetSpeechPatternLength(sd_mode);
	ASSERT_REBOOT( sd_len > 0 );

	I = vmfrm_t.enc_hdr;
	I = I & 0x03;
	vm.control_1 = I << 7 | (sc_mode << 1) | (vm.control_1 & 1);
	
	if(L1SP_GetState() == L1SP_STATE_4G_SPEECH_ON)
	    vm.control_1 = vm.control_1 | 0x3000;
	else if(SAL_3G_Mode())
		vm.control_1 = vm.control_1 | 0x1000;


	I = vmfrm_t.dec_hdr;
	I = I & 0x0e;
	vm.control_2 = I << 6 | (sd_mode << 1) | (vm.control_2 & 1);
		
	*vmBuf++ = VM_MAGIC_HEADER;
	J = L1SP_GetState();
	I = (uint16)( ( (SAL_VM_DBGINFO_LEN + SAL_VM_ENH_DBGINFO_LEN + SAL_VM_DRV_DBGINFO_LEN)<< 3 ) | J);
	*vmBuf++ = I;
	*vmBuf++ = VM_VM_RECORD_FLAG ;			 //VM
	*vmBuf++ = 0;  //reset EPL band
  J =  fma_get_glb_ts() & 0xFFFFFFFF;
#if defined(_EXTRA_LOG_FOR_BIT_TRUE_)
	if( g_bNeedExtraLog )
		  kal_dev_trace( TRACE_INFO, VM_SP3G_VM_L1T, J );
#endif
	I = (uint16)(J & 0xFFFF);
	*vmBuf++ = I;
	I = (uint16)(J >> 16);
	*vmBuf++ = I;
	vm_counter++;

    //Chip ID
    vm.control_3 = VM_CHIP_ID;

	// record vm control value 	
	*vmBuf++ = vm.control_1;
	*vmBuf++ = vm.control_2;
	*vmBuf++ = vm.control_3;
	*vmBuf++ = vm.control_4;
	*vmBuf++ = vm.control_5;

	// record UL data 	
	addr = vmfrm_t.enc_hb_addr;
	for( I = 0; I < sc_len; I++ )
	{
		*vmBuf++ = *addr++;
        if(L1SP_GetState() == L1SP_STATE_2G_SPEECH_ON)		
            addr++;
	}
		
	// record DL data 	
	addr = vmfrm_t.dec_hb_addr;
	for( I = 0; I < sd_len; I++ )
	{
		*vmBuf++ = *addr++;
		if(L1SP_GetState() == L1SP_STATE_2G_SPEECH_ON)		
            addr++;
	}

	addr = vmfrm_t.dbgInfo_addr;  
	 for( I = 0; I < SAL_VM_DBGINFO_LEN; I++ )
		*vmBuf++ = *addr++;

	addr = vmfrm_t.enh_dbgInfo_addr;  
	 for( I = 0; I < SAL_VM_ENH_DBGINFO_LEN; I++ )
		*vmBuf++ = *addr++;

	for(I = 0; I < SAL_VM_DRV_DBGINFO_LEN; I++){
		if(I < VM_3G_NETWORK_INFO_LEN)
		*vmBuf++ = vm3GNetworkInfo[I];
		else
		*vmBuf++ = 0;
		}
	 
}

#if defined(__EVS_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
EVS_VM_ID VM_EVS_Get_Codec_ID(SP4G_Codec EVSCod)
{
	EVS_VM_ID VM_Codec_ID = 0;
	switch(EVSCod)
	{		
		case SP4G_CODEC_EVS_08K_005_9:
		case SP4G_CODEC_EVS_16K_005_9:
		case SP4G_CODEC_EVS_32K_005_9:
		case SP4G_CODEC_EVS_48K_005_9:
			VM_Codec_ID = EVS_PRI590;
			break;
			
		case SP4G_CODEC_EVS_AWB_06_60:
			VM_Codec_ID = EVS_AWB660;
			break;
			
		case SP4G_CODEC_EVS_08K_007_2:
		case SP4G_CODEC_EVS_16K_007_2:
		case SP4G_CODEC_EVS_32K_007_2:
		case SP4G_CODEC_EVS_48K_007_2:
			VM_Codec_ID = EVS_PRI720;
			break;
		
		case SP4G_CODEC_EVS_08K_008_0:
		case SP4G_CODEC_EVS_16K_008_0:
		case SP4G_CODEC_EVS_32K_008_0:
		case SP4G_CODEC_EVS_48K_008_0:
			VM_Codec_ID = EVS_PRI800;
			break;
			
		case SP4G_CODEC_EVS_AWB_08_85:
			VM_Codec_ID = EVS_AWB885;
			break;			
		
		case SP4G_CODEC_EVS_08K_009_6:
		case SP4G_CODEC_EVS_16K_009_6:
		case SP4G_CODEC_EVS_32K_009_6:
		case SP4G_CODEC_EVS_48K_009_6:
			VM_Codec_ID = EVS_PRI960;
			break;
		
		case SP4G_CODEC_EVS_AWB_12_65:
			VM_Codec_ID = EVS_AWB1265;
			break;			
		
		case SP4G_CODEC_EVS_08K_013_2:
		case SP4G_CODEC_EVS_16K_013_2:
		case SP4G_CODEC_EVS_32K_013_2:
		case SP4G_CODEC_EVS_48K_013_2:
			VM_Codec_ID = EVS_PRI1320;
			break;

		case SP4G_CODEC_EVS_AWB_14_25:
			VM_Codec_ID = EVS_AWB1425;
			break;

		case SP4G_CODEC_EVS_AWB_15_85:
			VM_Codec_ID = EVS_AWB1585;
			break;

		case SP4G_CODEC_EVS_08K_016_4:
		case SP4G_CODEC_EVS_16K_016_4:
		case SP4G_CODEC_EVS_32K_016_4:
		case SP4G_CODEC_EVS_48K_016_4:
			VM_Codec_ID = EVS_PRI1640;
			break;

		case SP4G_CODEC_EVS_AWB_18_25:
			VM_Codec_ID = EVS_AWB1825;
			break;

		case SP4G_CODEC_EVS_AWB_19_85:
			VM_Codec_ID = EVS_AWB1985;
			break;

		case SP4G_CODEC_EVS_AWB_23_05:
			VM_Codec_ID = EVS_AWB2305;
			break;

		case SP4G_CODEC_EVS_AWB_23_85:
			VM_Codec_ID = EVS_AWB2385;
			break;
		
		case SP4G_CODEC_EVS_08K_024_4:
		case SP4G_CODEC_EVS_16K_024_4:
		case SP4G_CODEC_EVS_32K_024_4:
		case SP4G_CODEC_EVS_48K_024_4:
			VM_Codec_ID = EVS_PRI2440;
			break;
			
		case SP4G_CODEC_EVS_08K_032_0:
		case SP4G_CODEC_EVS_16K_032_0:
		case SP4G_CODEC_EVS_32K_032_0:
		case SP4G_CODEC_EVS_48K_032_0:
			VM_Codec_ID = EVS_PRI3200;
			break;
			
		case SP4G_CODEC_EVS_08K_048_0:
		case SP4G_CODEC_EVS_16K_048_0:
		case SP4G_CODEC_EVS_32K_048_0:
		case SP4G_CODEC_EVS_48K_048_0:
			VM_Codec_ID = EVS_PRI4800;
			break;
			
		case SP4G_CODEC_EVS_08K_064_0:
		case SP4G_CODEC_EVS_16K_064_0:
		case SP4G_CODEC_EVS_32K_064_0:
		case SP4G_CODEC_EVS_48K_064_0:
			VM_Codec_ID = EVS_PRI6400;
			break;
		
		case SP4G_CODEC_EVS_08K_096_0:
		case SP4G_CODEC_EVS_16K_096_0:
		case SP4G_CODEC_EVS_32K_096_0:
		case SP4G_CODEC_EVS_48K_096_0:
			VM_Codec_ID = EVS_PRI9600;
			break;
		
		case SP4G_CODEC_EVS_08K_128_0:
		case SP4G_CODEC_EVS_16K_128_0:
		case SP4G_CODEC_EVS_32K_128_0:
		case SP4G_CODEC_EVS_48K_128_0:
			VM_Codec_ID = EVS_PRI12800;
			break;
		
		case SP4G_CODEC_EVS_08K_002_4_SID:
		case SP4G_CODEC_EVS_08K_000_0_REV:	
		case SP4G_CODEC_EVS_08K_000_0_LOST:
		case SP4G_CODEC_EVS_08K_000_0_NODATA:
		
		case SP4G_CODEC_EVS_16K_002_4_SID:
		case SP4G_CODEC_EVS_16K_000_0_REV:    
		case SP4G_CODEC_EVS_16K_000_0_LOST:
		case SP4G_CODEC_EVS_16K_000_0_NODATA:
		
		case SP4G_CODEC_EVS_32K_002_4_SID:
		case SP4G_CODEC_EVS_32K_000_0_REV:
		case SP4G_CODEC_EVS_32K_000_0_LOST:
		case SP4G_CODEC_EVS_32K_000_0_NODATA:
		    
		case SP4G_CODEC_EVS_48K_002_4_SID:
		case SP4G_CODEC_EVS_48K_000_0_REV:
		case SP4G_CODEC_EVS_48K_000_0_LOST:
		case SP4G_CODEC_EVS_48K_000_0_NODATA:
		
		case SP4G_CODEC_EVS_AWB_02_00_SID:
		case SP4G_CODEC_EVS_AWB_00_00_REV0:
		case SP4G_CODEC_EVS_AWB_00_00_REV1:
		case SP4G_CODEC_EVS_AWB_00_00_REV2:
		case SP4G_CODEC_EVS_AWB_00_00_REV3:    
		case SP4G_CODEC_EVS_AWB_00_00_LOST:
		case SP4G_CODEC_EVS_AWB_00_00_NODATA:
			VM_Codec_ID = EVS_SID_LOST_NODATA;
			break;

		default:
		    VM_Codec_ID = EVS_UNDEF;
			break;
	}
	return VM_Codec_ID;
}

void vmFormatter_evs(uint16 *vmBuf)
{	
   volatile uint16 *addr;
   uint16 I, sc_mode, sd_mode, sc_len, sd_len ; 	
   uint32 J;
   Sal_VM_Frame vmfrm_t;
   uint16 sd_mode_invalid = 0, sc_mode_invalid = 0;
	/*I = DP_3G_DL_RX_MODE_REPORT >> 8;
	sd_mode = I & 0x1F;
	I = DP_3G_UL_TX_MODE_REPORT >> 8;
	sc_mode = I & 0x1F;*/
//	if( ! (gEVS_DrvPar.bEncInitDone && gEVS_DrvPar.bDecInitDone) )
//	{
//		return;
//	}
	SAL_VM_GetFrame3G(&vmfrm_t);
	

	
	sd_mode = VM_EVS_Get_Codec_ID(SAL_EVS_Get_Codec_Mode(SAL_EVS_RX_CODEC_MODE));	
	
	if(sd_mode == EVS_SID_LOST_NODATA)
	{
	    if(vm.evs_cur_sd_mode == EVS_UNDEF)
	        sd_mode = VM_EVS_Get_Codec_ID(SAL_Get_DL_CodecMode());//Codec mode of call open	
	    else
	        sd_mode = vm.evs_cur_sd_mode;
    }
	
	if(sd_mode == EVS_UNDEF)
	{
	    sd_mode_invalid = 1;
	    sd_mode = EVS_PRI1640;
	}	    
	
	vm.evs_cur_sd_mode = sd_mode;
	
	sc_mode = VM_EVS_Get_Codec_ID(SAL_EVS_Get_Codec_Mode(SAL_EVS_TX_CODEC_MODE));
	
	if(sc_mode == EVS_UNDEF)
	{
	    sc_mode_invalid = 1;
	    sc_mode = EVS_PRI1640;
	}
	
    sc_len = AM_GetSpeechPatternLength(sc_mode);
	ASSERT_REBOOT( sc_len > 0 );
	
	sd_len = AM_GetSpeechPatternLength(sd_mode);
	ASSERT_REBOOT( sd_len > 0 );

	I = vmfrm_t.enc_hdr;
	I = I & 0x03;
	vm.control_1 = I << 7 | (sc_mode << 1) | (vm.control_1 & 1);
	
	if(L1SP_GetState() == L1SP_STATE_4G_SPEECH_ON)
	    vm.control_1 = vm.control_1 | 0x3000;


	I = vmfrm_t.dec_hdr;
	I = I & 0x0e;
	vm.control_2 = I << 6 | (sd_mode << 1) | (vm.control_2 & 1);
	if(SAL_EVS_SPEECH_GOOD_FRAME == SAL_EVS_Get_Dec_BFI())
	{
		vm.control_2 &= 0x7FFF;
	}
	else
	{
		vm.control_2 |= 0x8000;
	}

	//kal_dev_trace( TRACE_INFO, VM_CONTROL, vm.control );
	// record syn_word for VM_LOG_DEBUG 
	kal_prompt_trace(MOD_L1SP, "vmBuf head %x",vmBuf);
	*vmBuf++ = VM_MAGIC_HEADER;
	J = L1SP_GetState();
	I = (uint16)( ( (SAL_VM_DBGINFO_LEN + SAL_VM_ENH_DBGINFO_LEN + SAL_VM_DRV_DBGINFO_LEN)<< 3 ) | J);
	*vmBuf++ = I;
	*vmBuf++ = VM_VM_RECORD_FLAG ;			 //VM
  *vmBuf++ = 0;  //reset EPL band
  J =  fma_get_glb_ts() & 0xFFFFFFFF;
#if defined(_EXTRA_LOG_FOR_BIT_TRUE_)
	if( g_bNeedExtraLog )
		  kal_dev_trace( TRACE_INFO, VM_SP3G_VM_L1T, J );
#endif
	I = (uint16)(J & 0xFFFF);
	*vmBuf++ = I;
	I = (uint16)(J >> 16);
	*vmBuf++ = I;
	vm_counter++;

    //Chip ID
    vm.control_3 = VM_CHIP_ID;
    
	// record vm control value 	
	*vmBuf++ = vm.control_1;
	*vmBuf++ = vm.control_2;
	*vmBuf++ = vm.control_3;
	*vmBuf++ = vm.control_4;
	*vmBuf++ = vm.control_5;

	// record UL data
	if(sc_mode_invalid)
	{
	    *vmBuf++ = SAL_EVS_SPEECH_GOOD_FRAME;
	    *vmBuf++ = 328;    //EVS 16.4 HB Len
	}
	else
	{	
	    *vmBuf++ = SAL_EVS_Get_Enc_BFI();
	    *vmBuf++ = SAL_EVS_Get_Enc_HBLen();	
	}
	addr = vmfrm_t.enc_hb_addr;
	for( I = 0; I < (sc_len - 2); I++ )
	{
	    if(sc_mode_invalid)	    
	        *vmBuf++ = 0;
	    else
		    *vmBuf++ = *addr++;
		    
	}
		
	// record DL data
	
	if(sd_mode_invalid)
	{
	    *vmBuf++ = SAL_EVS_SPEECH_GOOD_FRAME;
	    *vmBuf++ = 328;    //EVS 16.4 HB Len
	}
	else
	{
	*vmBuf++ = SAL_EVS_Get_Dec_BFI();
	*vmBuf++ = SAL_EVS_Get_Dec_HBLen();	
	}
	addr = vmfrm_t.dec_hb_addr;
	for( I = 0; I < (sd_len - 2); I++ )
	{
	    if(sd_mode_invalid)
	        *vmBuf++ = 0;
	    else
		    *vmBuf++ = *addr++;
    }
	
	// Debug info 0
	addr = vmfrm_t.dbgInfo_addr;  
	*vmBuf = (*addr) & 0xE8;
	*vmBuf = *vmBuf | (SAL_EVS_SPEECH_BAD_FRAME == SAL_EVS_Get_Enc_BFI()) | ((SAL_EVS_IsDTXOn()) << 1) | ((SAL_EVS_SPEECH_BAD_FRAME == SAL_EVS_Get_Dec_BFI()) << 2);
	vmBuf++;
	
	// Debug info 1
	*vmBuf = 0;
	*vmBuf = (SAL_EVS_Get_PCMBW()) | ((SAL_EVS_Get_PCMBW()) << 2) | ((SAL_EVS_Get_Enc_MaxRate()) << 4) | ((SAL_EVS_Get_Enc_CA_Enable()) << 6);
	*vmBuf = *vmBuf | ((SAL_EVS_Get_Enc_CA_RF_FEC_Indicator()) << 7) | ((SAL_EVS_Get_Enc_CA_RF_FEC_Offset()) << 8) | ((SAL_EVS_Get_Dec_CA_FrmMode()) << 11);
	vmBuf++;
	
	// Debug info 2
	*vmBuf++ = SAL_EVS_Get_Enc_HBLen();
	
	// Debug info 3
	*vmBuf++ = SAL_EVS_Get_Dec_HBLen();
	
	// Debug info reserved
	addr = vmfrm_t.dbgInfo_addr + 4;  
#if 0 //#ifdef __READ_WRITE_DSP_BY_GDMA__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else //#ifdef __READ_WRITE_DSP_BY_GDMA__
	for( I = 0; I < (SAL_VM_DBGINFO_LEN - 4); I++ )
		*vmBuf++ = *addr++;	
#endif //#ifdef __READ_WRITE_DSP_BY_GDMA__
	
	addr = vmfrm_t.enh_dbgInfo_addr;
#if 0 //#ifdef __READ_WRITE_DSP_BY_GDMA__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else //#ifdef __READ_WRITE_DSP_BY_GDMA__
	for( I = 0; I < SAL_VM_ENH_DBGINFO_LEN; I++ )
		*vmBuf++ = *addr++;
#endif //#ifdef __READ_WRITE_DSP_BY_GDMA__

	for(I = 0; I < SAL_VM_DRV_DBGINFO_LEN; I++){
		if(I < VM_3G_NETWORK_INFO_LEN)
		*vmBuf++ = vm3GNetworkInfo[I];
		else
		*vmBuf++ = 0;
		}
	 kal_prompt_trace(MOD_L1SP, "vmBuf tail %x",vmBuf);
}
#endif

kal_uint32 SP4G_GetCodecMode(void);
void vmFormatter_4g(int16 *vmBuf)
{
    Sal_VM_Frame vmfrm_t;    
    SAL_VM_GetFrame3G(&vmfrm_t);
   #if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__) 
      if( SP4G_IsGCodecMode() )  {
         //vmFormatter_gseries((uint16 *)vmBuf);
      }
      else{
   #endif //#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__) 
   #if defined(__EVS_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
         //if( SP4G_IsEVSCodecMode() )  { 
         if(VM_CodIsEVS(vmfrm_t.dec_mode)==true){   
            vmFormatter_evs((uint16 *)vmBuf);
         }
         else {
   #endif //#if defined(__EVS_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
            vmFormatter_amr((int16 *)vmBuf);
   #if defined(__EVS_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
         }
   #endif //#if defined(__EVS_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
   #if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__) 
      }
   #endif //#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)    
}
void vmFormatter_c2k(int16 *vmBuf)
{
   volatile uint16 *addr;
   uint16 I, sc_mode, sd_mode, sc_len, sd_len ; 	
   uint32 J;
   Sal_VM_Frame vmfrm_t;
//   MonSysTimeT    SysTime;
	/*I = DP_3G_DL_RX_MODE_REPORT >> 8;
	sd_mode = I & 0x1F;
	I = DP_3G_UL_TX_MODE_REPORT >> 8;
	sc_mode = I & 0x1F;*/
	SAL_VM_GetFrameC2K(&vmfrm_t);
	sd_mode = vmfrm_t.dec_mode;
	sc_mode = vmfrm_t.enc_mode;

//	ASSERT( (sc_len = AM_GetSpeechPatternLength(sc_mode)) > 0, HWDSPH_ERR_FORCE_ASSERT, 0 );
//	ASSERT( (sd_len = AM_GetSpeechPatternLength(sd_mode)) > 0, HWDSPH_ERR_FORCE_ASSERT, 0 );
	sc_len = AM_GetSpeechPatternLength(sc_mode);
	ASSERT_REBOOT( sc_len > 0 );
	sd_len = AM_GetSpeechPatternLength(sd_mode);
	ASSERT_REBOOT( sd_len > 0 );

	I = vmfrm_t.enc_hdr; //Enc Rate
	//I = I & 0x03; 
	vm.control_1 = I << 7 | (sc_mode << 1) | (vm.control_1 & 1);
	//if(SAL_3G_Mode())
		vm.control_1 = vm.control_1 | 0x2000; //Call Mode: C2K


	I = vmfrm_t.dec_hdr; //Dec Rate
	//I = I & 0x0e;
	vm.control_2 = I << 7 | (sd_mode << 1) | (vm.control_2 & 1);

	//kal_dev_trace( TRACE_INFO, VM_CONTROL, vm.control );
	// record syn_word for VM_LOG_DEBUG 
		
	*vmBuf++ = VM_MAGIC_HEADER;
	J = L1SP_GetState();
	I = (uint16)( ( (SAL_VM_DBGINFO_LEN + SAL_VM_ENH_DBGINFO_LEN + SAL_VM_DRV_DBGINFO_LEN)<< 3 ) | J);
	*vmBuf++ = I;
	*vmBuf++ = VM_VM_RECORD_FLAG ;			 //VM

    *vmBuf++ = 0;  //reset EPL band
	//J = 0; // TODO: L1I_GetTimeStamp();
//	SysFrameCountGet(&SysTime);
	
//	J = ((uint32)SysTime.SysTime[0]) & 0x00FFFFFF; // index 0 for system time 1x, sysdefs.h 
    J =  fma_get_glb_ts() & 0xFFFFFFFF;
#if defined(_EXTRA_LOG_FOR_BIT_TRUE_)
	if( g_bNeedExtraLog ){
		// TODO: c2k [trace]
		 ; // kal_dev_trace( TRACE_INFO, VM_SP3G_VM_L1T, J );
	}
#endif
	I = (uint16)(J & 0xFFFF);
	*vmBuf++ = I;
	//I = (uint16)((J >> 16) + ((uint32)vm_counter << 8));
	I = (uint16)(J >> 16);
	*vmBuf++ = I;
	vm_counter++;

    //Chip ID
    vm.control_3 = VM_CHIP_ID;

	// record vm control value 	
	*vmBuf++ = vm.control_1;
	*vmBuf++ = vm.control_2;
	*vmBuf++ = vm.control_3;
	*vmBuf++ = vm.control_4;
	*vmBuf++ = vm.control_5;


	// record UL data 	
	addr = vmfrm_t.enc_hb_addr;
	for( I = 0; I < sc_len; I++ )
		*vmBuf++ = *addr++;
		
	// record DL data 	
	addr = vmfrm_t.dec_hb_addr;
	for( I = 0; I < sd_len; I++ )
		*vmBuf++ = *addr++;

	addr = vmfrm_t.dbgInfo_addr;  
	 for( I = 0; I < SAL_VM_DBGINFO_LEN; I++ )
		*vmBuf++ = *addr++;

	addr = vmfrm_t.enh_dbgInfo_addr;  
	 for( I = 0; I < SAL_VM_ENH_DBGINFO_LEN; I++ )
		*vmBuf++ = *addr++;

	for(I = 0; I < SAL_VM_DRV_DBGINFO_LEN; I++){
		if(I < VM_3G_NETWORK_INFO_LEN)
		*vmBuf++ = vm3GNetworkInfo[I];
		else
		*vmBuf++ = 0;
		}
	 

    
}
void vmFormatter_standby(int16 *vmBuf)
{
   volatile uint16 *addr;
   uint16 I, sc_mode, sd_mode, sc_len, sd_len ; 	
   uint32 J;
   Sal_VM_Frame vmfrm_t;
	/*I = DP_3G_DL_RX_MODE_REPORT >> 8;
	sd_mode = I & 0x1F;
	I = DP_3G_UL_TX_MODE_REPORT >> 8;
	sc_mode = I & 0x1F;*/
	SAL_VM_GetFrame3G(&vmfrm_t);
	sd_mode = vmfrm_t.dec_mode;
	sc_mode = vmfrm_t.enc_mode;
	
   
	if((VM_CodIsAMR(sc_mode))==false)
	{
	    sc_mode = sd_mode;
	    vmfrm_t.enc_hdr |= 0x0; //NO_DATA
	}

	
	
  sc_len = AM_GetSpeechPatternLength(sc_mode);
	ASSERT_REBOOT( sc_len > 0 );
	sd_len = AM_GetSpeechPatternLength(sd_mode);
	ASSERT_REBOOT( sd_len > 0 );

	I = vmfrm_t.enc_hdr;
	I = I & 0x03;
	vm.control_1 = I << 7 | (sc_mode << 1) | (vm.control_1 & 1);
	
	
	//vm.control_1 = vm.control_1 | 0x7000;
	vm.control_1 = vm.control_1 | 0x1000;


	I = vmfrm_t.dec_hdr;
	I = I & 0x0e;
	vm.control_2 = I << 6 | (sd_mode << 1) | (vm.control_2 & 1);
		
	*vmBuf++ = VM_MAGIC_HEADER;
	J = L1SP_GetState();
	I = (uint16)( ( (SAL_VM_DBGINFO_LEN + SAL_VM_ENH_DBGINFO_LEN + SAL_VM_DRV_DBGINFO_LEN)<< 3 ) | J);
	*vmBuf++ = I;
	*vmBuf++ = VM_VM_RECORD_FLAG ;			 //VM
	*vmBuf++ = 0;  //reset EPL band
  J =  fma_get_glb_ts() & 0xFFFFFFFF;
#if defined(_EXTRA_LOG_FOR_BIT_TRUE_)
	if( g_bNeedExtraLog )
		  kal_dev_trace( TRACE_INFO, VM_SP3G_VM_L1T, J );
#endif
	I = (uint16)(J & 0xFFFF);
	*vmBuf++ = I;
	I = (uint16)(J >> 16);
	*vmBuf++ = I;
	vm_counter++;

    //Chip ID
    vm.control_3 = VM_CHIP_ID;

	// record vm control value 	
	*vmBuf++ = vm.control_1;
	*vmBuf++ = vm.control_2;
	*vmBuf++ = vm.control_3;
	*vmBuf++ = vm.control_4;
	*vmBuf++ = vm.control_5;

	// record UL data 	
	addr = vmfrm_t.enc_hb_addr;
	for( I = 0; I < sc_len; I++ )
	{
		*vmBuf++ = *addr++;
	}
		
	// record DL data 	
	addr = vmfrm_t.dec_hb_addr;
	for( I = 0; I < sd_len; I++ )
	{
		*vmBuf++ = *addr++;
	}

	addr = vmfrm_t.dbgInfo_addr;  
	 for( I = 0; I < SAL_VM_DBGINFO_LEN; I++ )
		*vmBuf++ = *addr++;

	addr = vmfrm_t.enh_dbgInfo_addr;  
	 for( I = 0; I < SAL_VM_ENH_DBGINFO_LEN; I++ )
		*vmBuf++ = *addr++;

	for(I = 0; I < SAL_VM_DRV_DBGINFO_LEN; I++){
		if(I < VM_3G_NETWORK_INFO_LEN)
		*vmBuf++ = vm3GNetworkInfo[I];
		else
		*vmBuf++ = 0;
		}    
}

void vmTchRecordHisr(void *param)
{

    uint8    sp_state = L1SP_GetState();	
    uint16   *vmBuf;

	if (KAL_SPINLOCK_NOT_AVAILABLE == kal_take_spinlock(vm.lockId, KAL_NO_WAIT)) {
		kal_trace(TRACE_INFO, VM_HISR_LOCK_NOT_AVALIABLE, 1);
		goto leaveHisr;  
	}

	// check dsp status	
	if( vm.state != VM_STATE_RECORD ) {
		goto leaveProc;
	}

	// check application status
	if( (false == vm.isVocOn) && (false == vm.isVmLOn)) { // (false == vm.isIdleVmOn) && 
		goto leaveProc;
	}

	
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if 1 // defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__)	
/* under construction !*/
#else //#if defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__)	
/* under construction !*/
#endif //#if defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__)	
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
	

	// just logging
#if defined(__MA_L1__)
	if(!(L1SP_GetState() == L1SP_STATE_3G_SPEECH_ON || L1SP_GetState() == L1SP_STATE_3G324M_SPEECH_ON)) {
		uint8 rx_type, tx_type, BFI;
		uint16 rx_debug;
		rx_debug = *DSP_RX_TCH_S(0,0);
		tx_type = *DSP_RX_TCH_S(0,0) & 0x3;
		rx_type = (rx_debug >> 1) & 0x7;
		BFI = (rx_debug >> 5) & 0x1;	 //speechBFI
		if( rx_type < 3 )//non-amr
			rx_type = 8 + (rx_type << 1) + BFI;
		BFI = (rx_debug >> 8) & 0xFF;  //BER
		L1Audio_Msg_SPEECH_FRAME( L1SP_Speech_TX_Type(tx_type), L1SP_Speech_RX_Type(rx_type), BFI);
		L1Audio_Msg_VM_DEBUG( DP2_3G_debug_info0, DP2_3G_debug_info1, DP2_3G_debug_info7 );
	}
#endif

	// process previous buffer
	vmBuf = (uint16 *)vm.vmBuf;
   if( vmBuf[0] == VM_MAGIC_HEADER ){//already buffer VM
		uint16 I;

    	I = (uint16)( vmBuf[1] >> 3 ) + AM_GetSpeechPatternLength((vmBuf[6]>> 1) & 0x3F) 
           + ((vm.control_2 & 1)?(AM_GetSpeechPatternLength((vmBuf[7] >> 1) & 0x3F)):0) 
           + 11; //####

		//write data
		if( vmRec_queryOutputBufFreeSpace() < I ){
			vm.vm_lost = 1;
			vm.vm_lost_count++;
			kal_dev_trace(TRACE_INFO, VM_REC_HISR_VM_DATA_LOST, vm.vm_lost_count, 2);
			goto leaveProc;

         // if(vm.vm_hdlr) {
         //    vm.vm_hdlr();
         // }
         // return;
		}
		else{
			//when vm logging and VOC are both on, only send the data to vm logging to reduce log size   
			if(vm.isVmLOn){				
				vmRec_writeVmToOutputBuf(I, vmBuf );
	            // if(vm.vm_hdlr) {
				//	vm.vm_hdlr();
				// }
			} else {
				vocWriteVocToCatcher( (uint32)I, vmBuf );
			}
			
			vm.vm_lost_count = 0;
			*(uint32 *)vm.vmBuf = 0;
			vmBuf[2] = 0;
			vmBuf[3] = 0;
		}
		
   }

	// formatting!!!
	switch(sp_state){
	case L1SP_STATE_4G_SPEECH_ON:
	   vmFormatter_4g(vm.vmBuf);
	   break;
	case L1SP_STATE_3G_SPEECH_ON:   
	case L1SP_STATE_3G324M_SPEECH_ON:   
	   vmFormatter_amr(vm.vmBuf);
	   break;
	case L1SP_STATE_C2K_SPEECH_ON:
		vmFormatter_c2k(vm.vmBuf);
		break;
	default:
	    if(L1SP_Get_isStandByMode())
	        vmFormatter_standby(vm.vmBuf);
	    else
	        vmFormatter_vm(vm.vmBuf);
	   break;      
	}
	
leaveProc: 
	kal_give_spinlock(vm.lockId);
	
	if(vm.vm_hdlr) {
		vm.vm_hdlr();
	}
	
leaveHisr: 
	SP_updateEmCodecEvent();
	return;
	
}


#if 0 // #ifndef TK6291_FAKE_COMPILE
/* under construction !*/
#endif //#ifndef TK6291_FAKE_COMPILE
void vmSet3GNetworkInfo( uint32 *l1_info, uint16 crc_result, uint16 buf_status, uint8 dl_count )
{
	  kal_int16 tpc_SIR_lta, dpdch_SIR_lta, TFCI_max_corr, I;
      uint32 l1Info, s_value;
      if( l1_info == NULL ){
         l1Info = 0;
         tpc_SIR_lta = 0;
         dpdch_SIR_lta = 0;
         TFCI_max_corr = 0;
         s_value = 0;
      }else{
         l1Info = l1_info[1];
         tpc_SIR_lta = l1_info[4];
         dpdch_SIR_lta = l1_info[5];
         TFCI_max_corr = l1_info[6];
         s_value = l1_info[3];
      }
      I = (uint16)(l1Info & 0xFFFF);
      vm3GNetworkInfo[4] = I;
	  
      I = (uint16)(l1Info >> 16);
	  vm3GNetworkInfo[5] = I;

	  vm3GNetworkInfo[3] = crc_result;

      
      vm3GNetworkInfo[6] = (uint16)((s_value >= 32767)? 32767 : s_value);//s_value
#if defined( __MTK_UL1_FDD__ )// only MTK 3G has this function
      if(dl_count == 0){
#if 0 // #ifndef TK6291_FAKE_COMPILE
/* under construction !*/
#endif //#ifndef TK6291_FAKE_COMPILE
      }
#endif
      vm3GNetworkInfo[0] = (uint16)tpc_SIR_lta;
      vm3GNetworkInfo[1] = (uint16)dpdch_SIR_lta;
      vm3GNetworkInfo[2] = (uint16)TFCI_max_corr;
}



void VMREC_ConfigEpl(void)
{
	// only support phone call VM record dynamic change from AP side
	if( vm.isVocOn || vm.isVmLOn ){
		kal_uint16 debugInfo = L1Audio_GetDebugInfo(VM_DEBUG_INFO);
		kal_uint32 module_id = MOD_L1AUDIO_SPH_SRV;
#if defined(__ENABLE_SPEECH_DVT__)
		debugInfo = 3; 
#endif // defined(__ENABLE_SPEECH_DVT__)
		kal_trace(TRACE_INFO, VM_REC_DEBUG_INFO, debugInfo);
			
		// SP1's request, use inject string to enable EPL.
		if(!tst_trace_check_ps_filter_off(TRACE_GROUP_EPL, &module_id, 0x2)) 			
		{
			debugInfo |= (VM_PCM_1ST_SET_RECORD_FLAG + VM_PCM_2ND_SET_RECORD_FLAG);
		}

        if(!tst_trace_check_ps_filter_off(TRACE_GROUP_REFMIC, &module_id, 0x2))	
		{
			debugInfo |= VM_PCM_REFMIC_RECORD_FLAG;
		}
		
		if(!tst_trace_check_ps_filter_off(TRACE_GROUP_ECHOREF, &module_id, 0x2))	
	    {
			debugInfo |= VM_PCM_ECHO_REF_RECORD_FLAG;
		}

		if(!tst_trace_check_ps_filter_off(TRACE_GROUP_THIRDMIC, &module_id, 0x2))	
	    {
			debugInfo |= VM_PCM_THIRDMIC_RECORD_FLAG;
		}
		
		if( ((debugInfo & (VM_PCM_1ST_SET_RECORD_FLAG + VM_PCM_2ND_SET_RECORD_FLAG))!=0) // config to open
			&& (vm.debug_info & (VM_PCM_1ST_SET_RECORD_FLAG + VM_PCM_2ND_SET_RECORD_FLAG))==0) // did not open yet
		{//EPL open
		
			debugInfo |= VM_PCM_ECHO_REF_RECORD_FLAG;
			debugInfo |= VM_PCM_REFMIC_RECORD_FLAG;
			debugInfo |= VM_PCM_THIRDMIC_RECORD_FLAG;
			/*
            if(debugInfo & VM_PCM_REFMIC_RECORD_FLAG){
	            vm.pcm_save_size = SIX_PCM_SAVE_SIZE;
	        } else
            {
	            vm.pcm_save_size = FIVE_PCM_SAVE_SIZE;
            }
            */

			vm.pcm_save_size = SEVEN_PCM_SAVE_SIZE;

			// enable EPL
			memset(eplInputBuf, 0 , sizeof(int16)*vm.pcm_save_size);
			vm.pcmBuf = eplInputBuf; //(int16*)get_ctrl_buffer( vm.pcm_save_size*sizeof(uint16) );
			vm.pcm_lost_count = 0; 
			vm.vm_lost  = 1; // to force save VM first 
			vm.vm_lost_count = 0;
			L1Audio_HookHisrHandler( DP_D2C_VMEPL_REC_INT, (L1Audio_EventHandler)vmTchPcmRecordHisr, 0 ); //
	        AM_PCM8K_RecordOn(AM_PCM8KREC_APP_TYPE_VMEPL, 0);
			vm.debug_info = debugInfo;
		}
	}
		
}

/**
	@vm_hdlr: handler
	@type: using in Idle VM record, phase out 
	@isVoc: is call from vm over catcher.
*/
// void vmRecord( mediaControl *ctrl, uint16 type )
void VMREC_Start(void (*vm_hdlr)(void), bool isVoc)
{

   if( AM_IsAmInSpeechState() ) {
		
		//decide the open
	   bool isAlreadyOn = (vm.isVocOn || vm.isVmLOn);
		
		if(isVoc){
			ASSERT(!vm.isVocOn); // prevent re-entry
			vm.isVocOn = true;
		} else { // normal vm 
			ASSERT(!vm.isVmLOn); // prevent re-entry
			vm.vm_hdlr = vm_hdlr; 
			vm.isVmLOn = true;			
		}

#ifdef __SENSITIVE_DATA_MOSAIC__
	{
		kal_uint32 module_id = MOD_SENSITIVE_CTRL;
		
		if(tst_trace_check_ps_filter_off(TRACE_GROUP_1, &module_id, 0x3)) {
			vm.isMosaic = true;
			return;
		} else {
			vm.isMosaic = false;
		}
	}
#endif
		//already on		
	   if(isAlreadyOn){		
			VMREC_ConfigEpl();
			return;
	   } else {

			// Initials
			// lock sleep mode
			vm.evs_cur_sd_mode = EVS_UNDEF;
			vm.audId = L1Audio_GetAudioID();
			L1Audio_SetFlag( vm.audId );/*Be careful.Before Locking SleepMode, to access DSP sherrif tasks much time. So access DSP must be after SetFlag*/
		   
			//vm buffer initital
		    //vm.vmBuf = (int16 *)get_ctrl_buffer( VM_BUFFER_SIZE ); //####
		    vm.vmBuf = vmBuffer;
		    memset( vm.vmBuf, 0, VM_BUFFER_SIZE );

			// output buffer initial 
			vm.pOutputBufWrite = 0;
			vm.pOutputBufRead = 0;
			vm.outputBufSize = VMREC_OUTPUT_BUF_SIZE; 
			memset( vmRecOutputBuf, 0, VMREC_OUTPUT_BUF_SIZE*sizeof(uint16) );		

#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
            //G-serial codec buffer initial
            {
               vmInitGCodecULBuf();
               vmInitGCodecDLBuf();
            }
#endif //#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
				
			// control setup
			vm.control_1 = 0x0001;
			vm.control_2 = 0x0001;
			// control_3 ~ control_5 are reserved
			//Chip ID
            vm.control_3 = VM_CHIP_ID;
			//vm.control_3 = 0;
			vm.control_4 = 0;
			vm.control_5 = 0;

			VMREC_ConfigEpl();
			
		  
#if defined(__UMTS_RAT__) 

#if defined(_EXTRA_LOG_FOR_BIT_TRUE_) 
	//TDD load need to reduce trace
	    if(SP_3G_SIM_FDD_ACTIVE==L1SP_GetSIMStatus()){
	      g_bNeedExtraLog = KAL_TRUE;
	    }
#endif
#endif
			L1Audio_HookHisrHandler( DP_D2C_VM_REC_INT, (L1Audio_EventHandler)vmTchRecordHisr, 0 ); 
			
			// enalbe normal VM record
	        AM_VMRecordOn(); 
			
			vm.state = VM_STATE_RECORD;

	   }
   }
    else { // idle mode, phase out
        return; 
    }
}



/**
	@isVoc: is call from voice over cater. true is yes; false is no.
*/
void VMREC_Stop( bool isVoc)
{
	// check voc & vm are both closed. 
	if(AM_IsAmInSpeechState()){	
		if(isVoc){
			ASSERT(vm.isVocOn == true);
			kal_take_spinlock(vm.lockId, KAL_INFINITE_WAIT);  
			vm.isVocOn = false; 
			kal_give_spinlock(vm.lockId);
			if(vm.isVmLOn){ //still another need vm 				
				return;
			}
		} else { //record vm from media
			ASSERT(vm.isVmLOn == true);
			
			kal_take_spinlock(vm.lockId, KAL_INFINITE_WAIT);  
			vm.isVmLOn = false;
			vm.vm_hdlr = NULL;
			kal_give_spinlock(vm.lockId);
			
			if(vm.isVocOn){ //still another need vm			
				return;
			}
		}

#ifdef __SENSITIVE_DATA_MOSAIC__
		if(vm.isMosaic) {
			return;
		}
#endif

   }else { // idle record end, phase out. 
      return;
   }
   
	if(VM_STATE_RECORD == vm.state)
    {
    
      kal_take_spinlock(vm.lockId, KAL_INFINITE_WAIT);  
      vm.state = VM_STATE_RECORD_STOP;
	  kal_give_spinlock(vm.lockId);
	  
      if(vm.debug_info & (VM_PCM_1ST_SET_RECORD_FLAG + VM_PCM_2ND_SET_RECORD_FLAG))  
      {    
         AM_PCM8K_RecordOff(false, AM_PCM8KREC_APP_TYPE_VMEPL);
         L1Audio_UnhookHisrHandler( DP_D2C_VMEPL_REC_INT );
         vm.pcmBuf = NULL; // free_ctrl_buffer(vm.pcmBuf);
         
      }
      L1Audio_UnhookHisrHandler(DP_D2C_VM_REC_INT); // vm record unhook

    } else {
   	    return;
	}

	AM_VMRecordOff();
	if( vm.vmBuf != NULL ){
//      free_ctrl_buffer( vm.vmBuf );
      vm.vmBuf = NULL;
   }

   vm.state = VM_STATE_STOP;

	vm.debug_info = 0;
	// output buffer clean 
	vm.pOutputBufWrite = 0;
	vm.pOutputBufRead = 0;
	vm.outputBufSize = 0; 
	memset( vmRecOutputBuf, 0, VMREC_OUTPUT_BUF_SIZE*sizeof(uint16) );	

#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
   //G-serial codec buffer initial
   {
      vmInitGCodecULBuf();
      vmInitGCodecDLBuf();
   }
#endif //#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)

	// release sleep mode
   L1Audio_ClearFlag( vm.audId );
   L1Audio_FreeAudioID( vm.audId );
   
}


void VM_Init(void)  
{
	vm.lockId = kal_create_spinlock("VM_LOCK");
}

