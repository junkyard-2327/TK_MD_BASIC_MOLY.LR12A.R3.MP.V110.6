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
 * l1ctm.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   L1Ctm interface  
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
 * removed!
 * removed!
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
  
#ifdef __CTM_SUPPORT__

int dsp_tch_bfi; // temp solution
#include "kal_public_api.h"
#include "kal_trace.h"
#include "reg_base.h"
#include "sync_data.h"

#include "l1audio.h"    
#include "speech_def.h"
#include "pcm4way.h"
#include "l1sp_trc.h"
#include "am.h"
#include "ctm_drv.h"
#include "ctm_params.h"
#include "ctm_modem.h"
#include "afe_def.h"

#include "sal_def.h"
#include "sal_exp.h"

#include "bli_exp.h"
#include "sp_enhance.h"

#include "sp_drv.h"
#include "audio_msgid.h"
#include "drv_sap.h"
#include "audio_ringbuf.h" // "audio_def.h" // for ring buffer
#include "media.h"
#include "spc_io.h"

// Catcher trace  
#define L1CTM_TRACE_FUNC(X) kal_trace(TRACE_FUNC, X)
#define L1CTM_TRACE_STATE(X) kal_trace(TRACE_STATE, X)
#define L1CTM_TRACE_INFO(X,Y) kal_trace(TRACE_INFO, X, Y)

//4g TTY 
#define TTY_QUEUE_SIZE 512
#define NUM_DELAY_FRAME 10
#define NUM_UL_SEND_FRAME 10

int ctm_hco_vco_state = 0;		// 0 - disable; 1 - HCO enable; 2 - VCO enable;

__attribute__((aligned(4)))
static uint16 zero_dl_pcm[160] = 
{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};  


#define MORE_ENQUIRY 8  
static uint32 more_enquiry_times; 
static int16 cprm_debug_flag = 0;

#ifdef __SMART_PHONE_MODEM__

#define UL_IN_PCM_RECORD_MD
#define UL_OUT_PCM_RECORD_MD
#define DL_IN_PCM_RECORD_MD
#define DL_OUT_PCM_RECORD_MD

#endif // __SMART_PHONE_MODEM__

  
#define UL_TTY_BUF_LEN 64 
#define UL_CTM_BUF_LEN 256
#define DL_TTY_BUF_LEN 1024 
#define DL_CTM_BUF_LEN 256 

#define PCM_FIFO_LEN 2   // could be 1 ~ N   
#define CTM_SWB_BUF_LEN 640 // 32k*20ms = 640
#define CTM_WB_BUF_LEN  320 // 16k*20ms = 320
#define CTM_NB_BUF_LEN  160 //  8k*20ms = 160

#define BLI_SRC_BUFFER_SIZE 2184 // fixed value
typedef struct{
   void (*callback_handler)(L1Ctm_Event event, void *data);
#if defined(__SMART_PHONE_MODEM__)	
	void (*debugCallback)(uint16 pos, uint16 *buffer, uint16 len, bool isDone);
#endif
   // speech-channel PCM  buffer
   uint16 ul_pcm_fifo[PCM_FIFO_LEN][CTM_NB_BUF_LEN];   // input buffer size = 160
   uint16 dl_pcm_fifo[PCM_FIFO_LEN][CTM_NB_BUF_LEN];             
   uint16 ul_pcm_input[PCM_FIFO_LEN][CTM_SWB_BUF_LEN]; // input buffer size = 640
   uint16 dl_pcm_input[PCM_FIFO_LEN][CTM_SWB_BUF_LEN];
   
   uint16 ul_pcm_input2[PCM_FIFO_LEN][CTM_SWB_BUF_LEN]; // input buffer size = 640
   uint16 ul_pcm_output2[PCM_FIFO_LEN][CTM_SWB_BUF_LEN]; // output buffer size = 640
   
   uint16 ul_pcm_output[PCM_FIFO_LEN][CTM_NB_BUF_LEN];   //160
   uint16 ul_pcm_output_wb[PCM_FIFO_LEN][CTM_WB_BUF_LEN];   //320
   uint16 ul_pcm_output_swb[PCM_FIFO_LEN][CTM_SWB_BUF_LEN]; //640
   
   uint16 dl_pcm_output[PCM_FIFO_LEN][CTM_NB_BUF_LEN];   //160
   uint16 dl_pcm_output_wb[PCM_FIFO_LEN][CTM_WB_BUF_LEN];   //320
   uint16 dl_pcm_output_swb[PCM_FIFO_LEN][CTM_SWB_BUF_LEN]; //640
   
   uint16 ul_pcm_input_len[PCM_FIFO_LEN];
   uint16 dl_pcm_input_len[PCM_FIFO_LEN];
   
   uint8 internal_buf_ul_in[2184]; // internal buffer for src
   uint8 internal_buf_ul_out[2184]; // internal buffer for src
   uint8 internal_buf_dl_in[2184]; // internal buffer for src
   uint8 internal_buf_dl_out[2184]; // internal buffer for src
   
   uint8 internal_buf_ul_in2[2184]; // internal buffer for src
   uint8 internal_buf_ul_out2[2184]; // internal buffer for src
   uint8 internal_buf_dl_in2[2184]; // internal buffer for src
   uint8 internal_buf_dl_out2[2184]; // internal buffer for src
   
   BLI_HANDLE * ul_downsample_16_8;
   BLI_HANDLE * dl_downsample_16_8;   
   BLI_HANDLE * ul_downsample_32_8;
   BLI_HANDLE * dl_downsample_32_8; 
   BLI_HANDLE * ul_upsample_8_16;
   BLI_HANDLE * dl_upsample_8_16;
   BLI_HANDLE * ul_upsample_8_32;
   BLI_HANDLE * dl_upsample_8_32;

   
   // text buffer 
   uint8 ul_tty_buf[UL_TTY_BUF_LEN];
   uint8 ul_ctm_buf[UL_CTM_BUF_LEN];
   uint8 dl_tty_buf[DL_TTY_BUF_LEN];
   uint8 dl_ctm_buf[DL_CTM_BUF_LEN];
   // buffer read write pointer      
   uint16 ul_tty_buf_read;  // buf_read == buf_write , means buffer empty 
   uint16 ul_tty_buf_write; // buffer could be filled at most (BUF_LEN - 1) data 
   uint16 ul_ctm_buf_read;
   uint16 ul_ctm_buf_write;
   uint16 dl_tty_buf_read;
   uint16 dl_tty_buf_write;
   uint16 dl_ctm_buf_read;
   uint16 dl_ctm_buf_write;   
   // control relative
   uint16 next_to_process; 
   uint16 pcm_fifo_write;
   uint16 pcm_fifo_read; 
   uint16 aud_id;
   uint16 FLAGS;
   uint16 ul_mute_flags;
   uint16 dl_mute_flags;
   uint8 bfi_info[PCM_FIFO_LEN];
   uint8 l1d_bfi_info[PCM_FIFO_LEN];
   uint8 interface;
   uint8 state;   
   uint8 next_ack_timeout; 
   int8 enquiry_count;
   uint8 enquiry_timeout1;
   uint8 enquiry_timeout2;
   uint8 transition_mute;
   uint8 debug_function;
   
   // 2g/3g TTY variables
   bool dl_isTTY;
   bool ul_isTTY;
   bool ul_isSending;
   uint16 ul_send_count;

   // 4g TTY variables
   uint16 dl_put_count;
   
   kal_spinlockid lockId;
   bool skip_hisr;
   bool stop;
   
}L1Ctm_Module; 

static L1Ctm_Module *l1ctm;
static RTT_Module rtt;

//extern UNSIGNED TMD_System_Clock;


//***** UTF8 special character 
#define ENQUIRY_CHAR 0x5
#define IDLE_CHAR 0x16 
#define NON_UTF8_CHAR 0xFF 
#define NO_CHAR 0xFF

//***** LCF : L1CTM Control Flag 
// CTM Negotiation relative 
#define LCF_NEGOTIATION_REQ   0x1
#define LCF_NEGOTIATION       0x2
#define LCF_SEND_ENQUIRY      0x4
#define LCF_SEND_ACK          0x8
#define LCF_FAR_END_DETECTED  0x10
// speech-channel output relative
#define LCF_UL_CTM_TRANSMITTING  0x20
#define LCF_UL_MUTE           0x40  
#define LCF_DL_CTM_RECEIVING  0x80
#define LCF_DL_BAUDOT_TRANSMITTING  0x100 
#define LCF_DL_MUTE  0x200
#define LCF_ACKING   0x400
#define LCF_DL_ACKING 0x800

//***** time-out setting 
#define ENQUIRY_TIMEOUT1 21 // 20 (400 ms) + 1 
#define ENQUIRY_TIMEOUT2 67 // 66 (1320 ms) + 1  
#define NEXT_ACK_TIMEOUT 26 // 25 (500 ms) + 1 
#define DL_TRANSITION_MUTE_TIMEOUT  2 // 40 ms 

//***** L1CTM state 
#define L1CTM_READY_STATE 0xAB 
#define L1CTM_CONNECTED_STATE 0xCD
 
//***** text buffer operation used in l1ctm_in_task

#define  UL_TTY_BUF_CHAR_READY() (l1ctm->ul_tty_buf_read != l1ctm->ul_tty_buf_write)

#define  UL_TTY_BUF_GET_CHAR(tty_code)    {  \
            tty_code = l1ctm->ul_tty_buf[l1ctm->ul_tty_buf_read ++];  \
            l1ctm->ul_tty_buf_read &= (UL_TTY_BUF_LEN-1);                \
         }

#define UL_TTY_BUF_PUT_CHAR(tty_code) \
        { \
          l1ctm->ul_tty_buf[l1ctm->ul_tty_buf_write ++] = tty_code; \
          l1ctm->ul_tty_buf_write &= (UL_TTY_BUF_LEN-1);                  \
          if(l1ctm->ul_tty_buf_write == l1ctm->ul_tty_buf_read)       \
            {                                                           \
               l1ctm->ul_tty_buf_read ++;                               \
               l1ctm->ul_tty_buf_read &= (UL_TTY_BUF_LEN-1);                \
            }                                                           \
        }   
         
                      
#define  DL_TTY_BUF_CHAR_READY() (l1ctm->dl_tty_buf_read != l1ctm->dl_tty_buf_write)

#define  DL_TTY_BUF_GET_CHAR(tty_code)    {  \
            tty_code = l1ctm->dl_tty_buf[l1ctm->dl_tty_buf_read++];  \
            l1ctm->dl_tty_buf_read &= (DL_TTY_BUF_LEN-1);                \
         }

#define DL_TTY_BUF_PUT_CHAR(tty_code) \
        { \
          l1ctm->dl_tty_buf[l1ctm->dl_tty_buf_write ++] = tty_code; \
          l1ctm->dl_tty_buf_write &= (DL_TTY_BUF_LEN-1);                  \
          if(l1ctm->dl_tty_buf_write == l1ctm->dl_tty_buf_read)       \
            {                                                           \
               l1ctm->dl_tty_buf_read ++;                               \
               l1ctm->dl_tty_buf_read &= (DL_TTY_BUF_LEN-1);                \
            }                                                           \
        }   


#define  UL_CTM_BUF_CHAR_READY() (l1ctm->ul_ctm_buf_read != l1ctm->ul_ctm_buf_write)

#define  UL_CTM_BUF_GET_CHAR(ctm_code)    {  \
            ctm_code = l1ctm->ul_ctm_buf[l1ctm->ul_ctm_buf_read++];  \
            l1ctm->ul_ctm_buf_read &= (UL_CTM_BUF_LEN - 1);                \
         }  


#define  DL_CTM_BUF_PUT_CHAR(ctm_code)    {  \
            l1ctm->dl_ctm_buf[l1ctm->dl_ctm_buf_write++] = ctm_code;  \
            l1ctm->dl_ctm_buf_write &= (DL_CTM_BUF_LEN - 1);                \
            ASSERT(l1ctm->dl_ctm_buf_write != l1ctm->dl_ctm_buf_read);\
         } 
 
/*==============================================================================*/

/*==== begin of 4G TTY Queue====*/

RINGBUFFER_T(kal_uint8, TTY_QUEUE_SIZE) ul_tty_queue;
RINGBUFFER_T(kal_uint8, TTY_QUEUE_SIZE) dl_tty_queue;

RINGBUFFER_T(kal_uint8, TTY_QUEUE_SIZE) ul_rtt_queue[8]; // cid: 0~7
RINGBUFFER_T(kal_uint8, TTY_QUEUE_SIZE) dl_rtt_queue[8]; // cid: 0~7

void ctm_init(void)
{
	int i;
	
	for(i = 0; i < 8; i++){
		 RB_INIT(ul_rtt_queue[i]);
		 RB_INIT(dl_rtt_queue[i]);
	}
	
	rtt.isRttOn = false;
}


/* TTY Queue*/

void TTY_LTE_PSR_UL_Queue_Init(void)
{ 
    RB_INIT(ul_tty_queue);
}

kal_uint8 TTY_LTE_PSR_UL_Get(void)
{ 
    kal_uint8 tty_char;
    RB_GET(ul_tty_queue, tty_char);
    
    L1CTM_TRACE_INFO(L1CTM_TTY_LTE_UL_GET, tty_char);

    return tty_char;
}

kal_uint16 TTY_LTE_PSR_UL_GetChar(kal_uint8 call_id, kal_uint8 *buf){
	uint8 ch;
	kal_prompt_trace(MOD_L1SP, "[TTY_LTE_PSR_UL_GetChar] Enter");
	if(getRttStatus()==true){
		if(!RB_EMPTY(ul_rtt_queue[call_id])){
			RB_GET(ul_rtt_queue[call_id], ch);
			*buf = ch;
			kal_prompt_trace(MOD_L1SP, "[TTY_LTE_PSR_UL_GetChar] ch = %x", ch);
			return 1;
		}
	}
	else{
		if(!TTY_LTE_PSR_UL_isEmpty()){
			*buf = TTY_LTE_PSR_UL_Get();
			kal_prompt_trace(MOD_L1SP, "[TTY_LTE_PSR_UL_GetChar] ch = %x", *buf);
			return 1;
		}
	}
	return 0;
	
}


kal_uint16 TTY_LTE_PSR_UL_GetString(kal_uint8 call_id, kal_uint8 *buf, kal_uint16 *length)
{ 
	return 0;
}


void TTY_LTE_PSR_UL_Put(kal_uint8 tty_char)
{ 
    RB_PUT(ul_tty_queue, tty_char);
    L1CTM_TRACE_INFO(L1CTM_TTY_LTE_UL_PUT, tty_char);
}

kal_bool TTY_LTE_PSR_UL_isEmpty(void)
{ 
    return RB_EMPTY(ul_tty_queue);
}

kal_bool TTY_LTE_PSR_UL_isFull(void)
{ 
    return RB_FULL(ul_tty_queue);
}

kal_uint16 TTY_LTE_PSR_UL_Queue_Size(void)
{
    kal_uint16 size = RB_COUNT(ul_tty_queue);
    L1CTM_TRACE_INFO(L1CTM_TTY_LTE_UL_QUEUE_SIZE, size);
    return size;
}


void TTY_LTE_PSR_DL_Queue_Init(void)
{
    RB_INIT(dl_tty_queue);
}

void TTY_LTE_PSR_DL_Put(kal_uint8 tty_char)
{
    RB_PUT(dl_tty_queue, tty_char);
    L1CTM_TRACE_INFO(L1CTM_TTY_LTE_DL_PUT, tty_char);

}

void TTY_LTE_PSR_DL_PutString(kal_uint8 call_id, kal_uint8 string[256], kal_uint16 length)
{
	int i;
	
	if(getRttStatus()==true){
		for(i = 0; i < length; i++){
			if(!RB_FULL(dl_rtt_queue[call_id])){
				RB_PUT(dl_rtt_queue[call_id], string[i]);
				
				kal_prompt_trace(MOD_L1SP, "[TTY_LTE_PSR_DL_PutString] cid = %d, ch = %x", call_id, string[i]);
			}
			else{
				break;
			}
		}

		SP_L4C_SendERTTSTR(call_id);
	}
	else{
		for(i = 0; i < length; i++){
			if(!TTY_LTE_PSR_DL_isFull()){
				TTY_LTE_PSR_DL_Put(string[i]);
			}
			else{
				break;
			}
		}
	}
	kal_prompt_trace(MOD_L1SP, "[TTY_LTE_PSR_DL_PutString] call_id= %d, length = %d", call_id, length);
}


kal_uint8 TTY_LTE_PSR_DL_Get()
{
    kal_uint8 tty_char;
    RB_GET(dl_tty_queue, tty_char);
    
    L1CTM_TRACE_INFO(L1CTM_TTY_LTE_DL_GET, tty_char);

    return tty_char;
}

kal_uint16 TTY_LTE_PSR_DL_Queue_Size(void)
{
    kal_uint16 size = RB_COUNT(dl_tty_queue);
    L1CTM_TRACE_INFO(L1CTM_TTY_LTE_DL_QUEUE_SIZE, size);
    return size;

}

kal_bool TTY_LTE_PSR_DL_isEmpty(void)
{  
    return RB_EMPTY(dl_tty_queue);
}

kal_bool TTY_LTE_PSR_DL_isFull(void)
{  
    return RB_FULL(dl_tty_queue);
}

/*=====end of 4G TTY queue=====*/


void SP_L4C_SetERTTSTR(kal_uint8 call_id, kal_uint8 string[256], kal_uint16 length){
	int i;
	for(i = 0; i < length; i++){
		if(!RB_FULL(ul_rtt_queue[call_id])){
			RB_PUT(ul_rtt_queue[call_id], string[i]);
			kal_prompt_trace(MOD_L1SP, "[SP_L4C_SetERTTSTR] call_id = %d, char = %x ", call_id, string[i]);
		}
	}

	kal_prompt_trace(MOD_L1SP, "[SP_L4C_SetERTTSTR] call_id = %d, length = %d ", call_id, length);
	
}

void SP_L4C_SendERTTSTR(uint8 call_id){
	
	ilm_L4C_ERTT_STRING_t *local_para;

	int i;
	uint8 ch;
	uint16 len =  RB_COUNT(dl_rtt_queue[call_id]);

	local_para = (ilm_L4C_ERTT_STRING_t *) construct_local_para( sizeof(ilm_L4C_ERTT_STRING_t), TD_CTRL);
	local_para -> call_id = call_id;
	local_para -> length = len;
	
	for(i = 0; i < len; i++){
		if(!RB_EMPTY(dl_rtt_queue[call_id])){
			RB_GET(dl_rtt_queue[call_id], ch);
			local_para -> string[i] = ch;
			
			kal_prompt_trace(MOD_L1SP, "[SP_L4C_SendERTTSTR] cid = %d, ch = %x", call_id, ch);
		}
		
	}

	msg_send6(MOD_MED, MOD_L4C, AUDIO_SAP, MSG_ID_AUDIO_L4C_ERTTSTR, (local_para_struct *)local_para, NULL);
	
	kal_prompt_trace(MOD_L1SP, "[SP_L4C_SendERTTSTR] cid = %d, length = %d", call_id, local_para -> length);
	
}


void l1ctm_init(void)
{
   l1ctm = (L1Ctm_Module*) 0;   
}  


#define PCM_BFI_SHIFT 1 
void l1ctm_in_hisr()
{
   kal_trace(TRACE_INFO, L1CTM_IN_HISR_ENTER);
   
   if(l1ctm->skip_hisr)
	   return;
   uint16 buf_idx, bfi_data, bfi_rec, bfi_store_idx;   
   
   buf_idx = l1ctm->pcm_fifo_read;
   if(buf_idx >= PCM_FIFO_LEN) 
      buf_idx -= PCM_FIFO_LEN;
   
   bfi_store_idx = buf_idx + PCM_BFI_SHIFT;
   if(bfi_store_idx >= PCM_FIFO_LEN)
      bfi_store_idx -= PCM_FIFO_LEN;
      

   if(l1ctm->pcm_fifo_read == l1ctm->next_to_process){
      kal_dev_trace(TRACE_STATE, L1CTM_BUF_OVFLOW);
      if(l1ctm->stop){
         l1ctm->skip_hisr = true;
         SpcIO_MsgQueuePut(SPC_ID_AUDIO_CONTROL_CTM_CLOSE, 0, 0, SPC_MSG_FROM_AUDHISR);
      }
      return;
   }
   
   // uplink-path                                       
   if(l1ctm->ul_mute_flags & (1 << l1ctm->pcm_fifo_read))
      PCM4WAY_FillSE(0);
   else
   {
      uint16 bufLen = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_M2D_UL1);
      PCM4WAY_PutToSE2((const uint16*)(l1ctm->ul_pcm_output2[buf_idx]));
	  
	  if(CTM_NB_BUF_LEN == bufLen){
		 PCM4WAY_PutToSE((const uint16*)(l1ctm->ul_pcm_output[buf_idx]));
	  }
	  else if(CTM_WB_BUF_LEN == bufLen){
	     PCM4WAY_PutToSE((const uint16*)(l1ctm->ul_pcm_output_wb[buf_idx]));
	  }
	  else{
		 PCM4WAY_PutToSE((const uint16*)(l1ctm->ul_pcm_output_swb[buf_idx]));
	  }
   }
      
   l1ctm->ul_pcm_input_len[buf_idx] = PCM4WAY_GetFromMic((uint16*)(l1ctm->ul_pcm_input[buf_idx]));   
   PCM4WAY_GetFromMic2((uint16*)(l1ctm->ul_pcm_input2[buf_idx]));   
   kal_prompt_trace(MOD_L1SP, "l1ctm->ul_pcm_input_len[buf_idx] = %d", l1ctm->ul_pcm_input_len[buf_idx]);
    
   // downlink-path                
   if(l1ctm->dl_mute_flags & (1 << l1ctm->pcm_fifo_read))
      PCM4WAY_FillSpk(0); 	
   else{
	  uint16 bufLen = SAL_PcmEx_GetBufLen(SAL_PCMEX_PNW_BUF_M2D_DL1);
	  if(CTM_NB_BUF_LEN == bufLen){
		 PCM4WAY_PutToSpk((const uint16*)(l1ctm->dl_pcm_output[buf_idx]));
	  }
	  else if(CTM_WB_BUF_LEN == bufLen){
	     PCM4WAY_PutToSpk((const uint16*)(l1ctm->dl_pcm_output_wb[buf_idx]));
	  }
	  else{
		 PCM4WAY_PutToSpk((const uint16*)(l1ctm->dl_pcm_output_swb[buf_idx])); 
	  }
	  
   }

   l1ctm->dl_pcm_input_len[buf_idx] = PCM4WAY_GetFromSD((uint16*)(l1ctm->dl_pcm_input[buf_idx]));  
   
   
   bfi_data = SAL_CTM_GetValue(SAL_CTM_VALUE_TYPE_FACCH_REPORT);

   bfi_rec = (bfi_data&0x1)|(((bfi_data&0x10)>>4)<<1)|(((bfi_data&0x100)>>8)<<2)|(((bfi_data&0x1000)>>12)<<3)|(((bfi_data&0x4000)>>14)<<4);

   
   l1ctm->bfi_info[buf_idx] = bfi_rec;
   
   if(dsp_tch_bfi > 0)
      l1ctm->l1d_bfi_info[bfi_store_idx] = 1;
   else
      l1ctm->l1d_bfi_info[bfi_store_idx] = 0;     

   l1ctm->pcm_fifo_write++;
   if(l1ctm->pcm_fifo_write == 2 * PCM_FIFO_LEN)
      l1ctm->pcm_fifo_write = 0;
   l1ctm->pcm_fifo_read++; 
   if(l1ctm->pcm_fifo_read == 2 * PCM_FIFO_LEN)
      l1ctm->pcm_fifo_read = 0;
   
   if(l1ctm->stop){
	   l1ctm->skip_hisr = true;
	   SpcIO_MsgQueuePut(SPC_ID_AUDIO_CONTROL_CTM_CLOSE, 0, 0, SPC_MSG_FROM_AUDHISR);
	 
   }
   else{
		L1Audio_SetEvent(l1ctm->aud_id, (void*)0); // involve L1Audio task to run CTM modem   
   }
    kal_trace(TRACE_INFO, L1CTM_IN_HISR_LEAVE);
}

//uint8 A[20]={'A','B', 'C','D','E','F','G','H','I','J','1','2','3','4','5','6','7','8','9','0'};
//uint8 B[20]={'1','2', '3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','8','9','0'};
int ind = 0;
int indA = 0;
int indB = 0;
int wc = 0;
int sz = 0;

void l1ctm_in_task_2g_3g()
{  
   uint16 l1ctmFlags, ctmFlags, interface, buf_idx; 

   
   uint32 ul_ds_inLen, ul_ds_outLen, dl_ds_inLen, dl_ds_outLen;
   uint32 ul_us_inLen, ul_us_outLen, dl_us_inLen, dl_us_outLen;
   
   uint16 *p_ul_ds_inBuf, *p_ul_ds_outBuf;
   uint16 *p_dl_ds_inBuf, *p_dl_ds_outBuf;
   
   uint16 *p_ul_us_inBuf, *p_ul_us_outBuf;
   uint16 *p_dl_us_inBuf, *p_dl_us_outBuf;
   uint8 utf8_code;        
   kal_bool bfi_flag;   

   
   if(l1ctm == (L1Ctm_Module*) 0)
      return;

   while(l1ctm->next_to_process != l1ctm->pcm_fifo_write)
   {  
      buf_idx = l1ctm->next_to_process;
      if(buf_idx >= PCM_FIFO_LEN)
         buf_idx -= PCM_FIFO_LEN;
      
      /******************************************************
      *  ul_pcm_input  -> ul_pcm_fifo    -> ul_pcm_output   *
      *     32k               8k            32k             *
      *                [BAUDOT] -> [CTM]                    * 
      ******************************************************/

      
      /*[CTM blisrc] UL downsample start*/
 
      
       
      p_ul_ds_inBuf = l1ctm->ul_pcm_input[buf_idx];
      p_ul_ds_outBuf = l1ctm->ul_pcm_fifo[buf_idx];
     
	  if(CTM_WB_BUF_LEN == l1ctm->ul_pcm_input_len[buf_idx]){
		ul_ds_inLen  = CTM_WB_BUF_LEN << 1;  
        ul_ds_outLen = CTM_NB_BUF_LEN << 1;  
	    BLI_Convert(l1ctm->ul_downsample_16_8, (short *)p_ul_ds_inBuf, &ul_ds_inLen, (short *)p_ul_ds_outBuf, &ul_ds_outLen);
	  }
	  else if(CTM_SWB_BUF_LEN ==l1ctm->ul_pcm_input_len[buf_idx]){
		ul_ds_inLen  = CTM_SWB_BUF_LEN << 1;  
        ul_ds_outLen = CTM_NB_BUF_LEN << 1;  
	    BLI_Convert(l1ctm->ul_downsample_32_8, (short *)p_ul_ds_inBuf, &ul_ds_inLen, (short *)p_ul_ds_outBuf, &ul_ds_outLen);
	  }
	  else{
		memcpy(p_ul_ds_outBuf, p_ul_ds_inBuf, CTM_NB_BUF_LEN << 1);
	  }

      /*[CTM blisrc] UL downsample end*/
      
      
      /*[CTM blisrc] DL downsample start*/
      
      
      p_dl_ds_inBuf = l1ctm->dl_pcm_input[buf_idx];
      p_dl_ds_outBuf = l1ctm->dl_pcm_fifo[buf_idx];
      
      if(CTM_WB_BUF_LEN == l1ctm->dl_pcm_input_len[buf_idx]){
		 dl_ds_inLen  = CTM_WB_BUF_LEN << 1;  
         dl_ds_outLen = CTM_NB_BUF_LEN << 1; 
	     BLI_Convert(l1ctm->dl_downsample_16_8, (short *)p_dl_ds_inBuf, &dl_ds_inLen, (short *)p_dl_ds_outBuf, &dl_ds_outLen);
	  }
	  else if(CTM_SWB_BUF_LEN ==l1ctm->dl_pcm_input_len[buf_idx]){
		 dl_ds_inLen  = CTM_SWB_BUF_LEN << 1;  
         dl_ds_outLen = CTM_NB_BUF_LEN << 1; 
	     BLI_Convert(l1ctm->dl_downsample_32_8, (short *)p_dl_ds_inBuf, &dl_ds_inLen, (short *)p_dl_ds_outBuf, &dl_ds_outLen);
	  }
	  else{
	     memcpy(p_dl_ds_outBuf, p_dl_ds_inBuf, CTM_NB_BUF_LEN << 1);
	  }
	  

      /*[CTM blisrc] DL downsample end*/
      

      bfi_flag = (kal_bool)(l1ctm->l1d_bfi_info[buf_idx]);    
          
      
      #ifdef UL_IN_PCM_RECORD_MD
	      if( l1ctm->debugCallback != NULL ){
				l1ctm->debugCallback(UL_IN_WRITE_FILE_REQUEST, l1ctm->ul_pcm_fifo[buf_idx], CTM_NB_BUF_LEN, false);
	
	      }
      #endif
      
      #ifdef DL_IN_PCM_RECORD_MD
	      if( l1ctm->debugCallback != NULL ){
				l1ctm->debugCallback(DL_IN_WRITE_FILE_REQUEST, l1ctm->dl_pcm_fifo[buf_idx], CTM_NB_BUF_LEN, false);
	      }
      #endif

               
      l1ctmFlags = l1ctm->FLAGS; 
      interface = l1ctm->interface;
      
      ctmFlags = ctm_modem_get_flags();
      
            
      // up-link path input : Baudot Demodulator 
      if(interface != DIRECT_MODE)
      {
      #if !defined(DUPLEX_BAUDOT)         
         if(ctmFlags & CMF_BAUDOT_OUT_BITS_READY && l1ctm->enquiry_count != -2)
            l1ctmFlags |= LCF_UL_MUTE;
         else
      #endif    
         { 
            baudot_demod((const uint16*)l1ctm->ul_pcm_fifo[buf_idx],&ctmFlags, &utf8_code); 
         
            if(ctmFlags & CMF_BAUDOT_IN_DETECTED && l1ctm->enquiry_count != -2)
               l1ctmFlags |= LCF_UL_MUTE;                                 
            else if(ctmFlags & CMF_BAUDOT_IN_CHAR)
            {
               UL_TTY_BUF_PUT_CHAR(utf8_code);
               L1CTM_TRACE_INFO( L1CTM_UL_GET_DECODED_TTY_CHAR , utf8_code );
            }   
         }
      }
      
      // down-link path input : CTM receiver 
      if( l1ctm->interface != DIRECT_MODE ) // Half-duplex CTM for BAUDOT_MODE //mtk01407, 2006-05-22
      {	
         if(    (!(ctmFlags & CMF_CTM_TX_BITS_READY))  ||  (l1ctmFlags & (LCF_NEGOTIATION | LCF_ACKING)) )
         { ctm_receiver((const uint16*)l1ctm->dl_pcm_fifo[buf_idx], bfi_flag, &ctmFlags, &utf8_code);  }
         else
         {	// If CTM is transmitting, dump zero patter to CTM receiver that means disable receiving function of CTM
            // Set bfi = 0 to avoid const zero_dl_pcm[] being modified      //mtk01407, 2006-05-17
            ctm_receiver((const uint16*)zero_dl_pcm,  0, &ctmFlags, &utf8_code);
         }  
        	
      }else	// Full-duplex CTM for DIRECT_MODE
      {
         ctm_receiver((const uint16*)l1ctm->dl_pcm_fifo[buf_idx], bfi_flag, &ctmFlags, &utf8_code);  	      	
      }
   
      if(ctmFlags & CMF_CTM_RX_DETECTED)
      {
         if(!(l1ctmFlags & LCF_DL_CTM_RECEIVING))
         {             
            l1ctmFlags |= LCF_DL_CTM_RECEIVING; 

            L1CTM_TRACE_STATE( L1CTM_DL_DETECT_CTM_SYNC ); 

            SAL_CTM_Switch(true);
            l1ctm->dl_isTTY = 1;
             
            if(!(l1ctmFlags & LCF_FAR_END_DETECTED))
            {           
               l1ctmFlags |= LCF_FAR_END_DETECTED;
               L1CTM_TRACE_STATE( L1CTM_FAR_END_CTM_DETECTED );
               l1ctm->state = L1CTM_CONNECTED_STATE;
               // first detect far-end CTM    
               if(l1ctmFlags & LCF_NEGOTIATION)
               {
                  L1CTM_TRACE_STATE( L1CTM_NEGOTIATION_SUCCESS );
                  l1ctmFlags &= ~LCF_NEGOTIATION;
                  l1ctmFlags |= LCF_DL_ACKING;
                  l1ctm->enquiry_timeout1 = 0;
                  l1ctm->enquiry_timeout2 = 0;
                  if(interface != DIRECT_MODE)
                     l1ctm->enquiry_count = -1; //0;                                    
                  else if(interface == DIRECT_MODE)
                  {
                     l1ctm->callback_handler(CTM_MO_SUCCESS, (void*) 0);                                  
                     l1ctm->enquiry_count = 3;
                  }
               }
               else 
               {
                  L1CTM_TRACE_STATE( L1CTM_DEMAND_CTM_ACK );
                  l1ctmFlags |= LCF_SEND_ACK;
                  l1ctm->next_ack_timeout = NEXT_ACK_TIMEOUT;   
                  if(interface == DIRECT_MODE)
                     l1ctm->callback_handler(CTM_MT_DETECTED, (void*) 0);            
               }                  
            }
         } // end of if(!(l1ctmFlags & LCF_DL_CTM_RECEIVING))     
         
         if(ctmFlags & CMF_CTM_RX_CHAR)   
         { 
            L1CTM_TRACE_INFO( L1CTM_DL_GET_RECEIVED_CTM_CHAR , utf8_code );   
            if(l1ctmFlags & LCF_DL_ACKING)      
            {
            }
            else if(utf8_code == ENQUIRY_CHAR)
            {
               if(l1ctm->next_ack_timeout == 0)
               {
                  l1ctmFlags |= LCF_SEND_ACK;
                  l1ctm->next_ack_timeout = NEXT_ACK_TIMEOUT;              
               }   
            }
            else // receive a normal character  
            {
               
               if(interface !=DIRECT_MODE)
               {
                  DL_TTY_BUF_PUT_CHAR(utf8_code);               
               }
               else if(interface == DIRECT_MODE)
               {
                  DL_CTM_BUF_PUT_CHAR(utf8_code);            
                  l1ctm->callback_handler(CTM_CHAR_RECEIVED, (void *)(uint32)utf8_code);            
               }         
            }                
         } // end of if(ctmFlags & CMF_CTM_RX_CHAR)
      }        
      else 
      {
         if(l1ctmFlags & LCF_DL_CTM_RECEIVING)
         { 
            L1CTM_TRACE_STATE( L1CTM_DL_CTM_BURST_END );            
       
            l1ctmFlags &= ~LCF_DL_CTM_RECEIVING;
            l1ctmFlags &= ~LCF_DL_ACKING;
       
                        
            // command DSP to change to normal speech codec 
            SAL_CTM_Switch(false);
            l1ctm->dl_isTTY = 0;
                   
            l1ctm->transition_mute = DL_TRANSITION_MUTE_TIMEOUT;               
         }   
      }
      

      // judge RX mute case               
      if(ctmFlags & CMF_CTM_RX_EARLY_MUTE || l1ctmFlags & LCF_DL_CTM_RECEIVING)
         l1ctmFlags |= LCF_DL_MUTE;        
   
      if(SAL_CTM_IsOff())
         l1ctmFlags |= LCF_DL_MUTE; 
   
      if(SAL_CTM_IsIdle() && l1ctm->transition_mute > 0)
      {
         l1ctm->transition_mute --;
         l1ctmFlags |= LCF_DL_MUTE;   
      }   
                                                                        
  
      // down-link path output    
      if(interface !=DIRECT_MODE)
      {
         if(ctmFlags & CMF_BAUDOT_OUT_BITS_READY)
         {
            utf8_code = NON_UTF8_CHAR;
         
            if(ctmFlags & CMF_BAUDOT_OUT_NEAR_EMPTY)         
               if(DL_TTY_BUF_CHAR_READY())
               {
                  DL_TTY_BUF_GET_CHAR(utf8_code);                             
                  L1CTM_TRACE_INFO( L1CTM_DL_SEND_TTY_CHAR , utf8_code );  
               }   
                                 
            baudot_mod(utf8_code, l1ctm->dl_pcm_fifo[buf_idx], &ctmFlags);                                
         }
         else 
         {
            if(l1ctmFlags & LCF_DL_BAUDOT_TRANSMITTING)
               l1ctmFlags &= ~LCF_DL_BAUDOT_TRANSMITTING;      
            
            if(DL_TTY_BUF_CHAR_READY())
            {
               DL_TTY_BUF_GET_CHAR(utf8_code); 
               L1CTM_TRACE_INFO( L1CTM_DL_SEND_TTY_CHAR , utf8_code );              
               baudot_mod(utf8_code, l1ctm->dl_pcm_fifo[buf_idx], &ctmFlags);
            #if !defined(DUPLEX_BAUDOT)   
               baudot_demod_reset();
               l1ctmFlags |= LCF_UL_MUTE; // mute for baudot_out is modulating 
            #endif    
               l1ctmFlags |= LCF_DL_BAUDOT_TRANSMITTING;
            }                                
         }         
      }
                                                                                          
      // up-link path output       
      if(ctmFlags & CMF_CTM_TX_BITS_READY)
      {
         utf8_code = NON_UTF8_CHAR;
      
         l1ctmFlags &= ~LCF_SEND_ACK;
      
         if(ctmFlags & CMF_CTM_TX_NEAR_EMPTY)
         {
            utf8_code = IDLE_CHAR;
                  
            if(l1ctmFlags & LCF_NEGOTIATION)
            {
               // Yuan comment out to test the ul nego fail problem in LA.
               //if(interface !=DIRECT_MODE && l1ctm->enquiry_timeout1 > 0)   
               //   if(UL_TTY_BUF_CHAR_READY())
               //      UL_TTY_BUF_GET_CHAR(utf8_code);            
               //if(interface !=DIRECT_MODE && l1ctm->enquiry_timeout1 > 0)   
                  //utf8_code = ENQUIRY_CHAR;
            }
            else 
            {
               if(interface !=DIRECT_MODE && UL_TTY_BUF_CHAR_READY())
               {
                  UL_TTY_BUF_GET_CHAR(utf8_code);
               }
               else if(interface == DIRECT_MODE && UL_CTM_BUF_CHAR_READY())
               {
                  UL_CTM_BUF_GET_CHAR(utf8_code);   
                  l1ctm->callback_handler(CTM_CHAR_SENT, (void *)(uint32)utf8_code);
               }
            } 
            L1CTM_TRACE_INFO( L1CTM_UL_SEND_CTM_CHAR , utf8_code );                                              
            l1ctm->ul_send_count = NUM_UL_SEND_FRAME;
            l1ctm->ul_isSending = 1;                                            
         }      
         ctm_transmitter(utf8_code, l1ctm->ul_pcm_fifo[buf_idx], &ctmFlags); 
      }
      else 
      {
         if(l1ctmFlags & LCF_UL_CTM_TRANSMITTING)
         {
            l1ctmFlags &= ~LCF_UL_CTM_TRANSMITTING;
            if(l1ctmFlags & LCF_ACKING){
                l1ctmFlags &= ~LCF_ACKING; 
                l1ctm->ul_isTTY = 0;
            }
         
            if(interface == DIRECT_MODE)
               l1ctm->callback_handler(CTM_TX_BURST_END, (void*) 0);                                                               
         }
      
         if(l1ctm->enquiry_timeout2 == 0 && l1ctm->enquiry_count == 0)
         {
            l1ctmFlags &= ~LCF_NEGOTIATION;
         
            L1CTM_TRACE_STATE( L1CTM_NEGOTIATION_FAIL );  
            if(interface == DIRECT_MODE)
            {
               l1ctm->callback_handler(CTM_MO_FAIL, (void*)0);
               l1ctm->enquiry_count = 3; // reset enquiry_count to allow next negotiation            
            }
            else // BAUDOT_MODE
               l1ctm->enquiry_count = -2;  
                     
         }           
                  
         // judge if has character to send
         if(l1ctmFlags & LCF_FAR_END_DETECTED)
         {
            utf8_code = NO_CHAR;
         
            if(interface !=DIRECT_MODE && UL_TTY_BUF_CHAR_READY())
            {
               UL_TTY_BUF_GET_CHAR(utf8_code);
            }
            else if(interface == DIRECT_MODE && UL_CTM_BUF_CHAR_READY())
            {
               UL_CTM_BUF_GET_CHAR(utf8_code);
               l1ctm->callback_handler(CTM_CHAR_SENT, (void *)(uint32)utf8_code);
            }
            else if(l1ctmFlags & LCF_SEND_ACK)
            {
               L1CTM_TRACE_STATE( L1CTM_UL_SEND_IDLE_AS_ACK );
               utf8_code = IDLE_CHAR;
            }
                                   
            if(utf8_code != NO_CHAR)
            {
               if(l1ctmFlags & LCF_SEND_ACK)
               {	
                  l1ctmFlags &= ~LCF_SEND_ACK;
                  l1ctmFlags |= LCF_ACKING;
               } 
               L1CTM_TRACE_INFO( L1CTM_UL_SEND_CTM_CHAR , utf8_code );
               ctm_transmitter(utf8_code, l1ctm->ul_pcm_fifo[buf_idx], &ctmFlags);               
               l1ctmFlags |= LCF_UL_CTM_TRANSMITTING;      
               l1ctm->ul_send_count = NUM_UL_SEND_FRAME;
               l1ctm->ul_isSending = 1;
            }
         }
         else 
         {
            if(l1ctm->enquiry_count > 0)
            {
               //if(l1ctm->enquiry_count == 3) // Adam : mark for more enquiry 
               if(l1ctm->enquiry_count == more_enquiry_times)
               {
                  if((interface !=DIRECT_MODE && UL_TTY_BUF_CHAR_READY()) ||
                      (interface == DIRECT_MODE && (l1ctmFlags & LCF_NEGOTIATION_REQ)))                
                     l1ctmFlags |= (LCF_SEND_ENQUIRY + LCF_NEGOTIATION);                              
               }            
               else  
               {
                  if(l1ctm->enquiry_timeout2 == 0)
                     l1ctmFlags |= LCF_SEND_ENQUIRY;
               }
            
               if(l1ctmFlags & LCF_SEND_ENQUIRY)
               {
                  l1ctm->enquiry_count --; 
                  l1ctm->enquiry_timeout1 = ENQUIRY_TIMEOUT1;   
                  l1ctm->enquiry_timeout2 = ENQUIRY_TIMEOUT2; 
                  L1CTM_TRACE_INFO( L1CTM_UL_SEND_ENQUIRY_CHAR , 3 - l1ctm->enquiry_count );              
                  ctm_transmitter(ENQUIRY_CHAR, l1ctm->ul_pcm_fifo[buf_idx], &ctmFlags);
                  l1ctmFlags |= LCF_UL_CTM_TRANSMITTING;    
                  l1ctmFlags &= ~(LCF_SEND_ENQUIRY + LCF_NEGOTIATION_REQ);   
               }            
            }            
         }      
      }         
   
      // calculate time out
      if(l1ctm->next_ack_timeout > 0)
         l1ctm->next_ack_timeout --;
      if(l1ctm->enquiry_timeout1 > 0)
         l1ctm->enquiry_timeout1 --;  
      if(l1ctm->enquiry_timeout2 > 0)
         l1ctm->enquiry_timeout2 --;          
                                                             
                                                             
      // process output for MUTE case       
      if(!(l1ctmFlags & LCF_UL_CTM_TRANSMITTING) && (l1ctmFlags & LCF_UL_MUTE))
         l1ctm->ul_mute_flags |= 1 << l1ctm->next_to_process;
      else 
         l1ctm->ul_mute_flags &= ~(1 << l1ctm->next_to_process);         
      
      
      if(!(l1ctmFlags & LCF_DL_BAUDOT_TRANSMITTING) && (l1ctmFlags & LCF_DL_MUTE))
         l1ctm->dl_mute_flags |= 1 << l1ctm->next_to_process;
      else 
         l1ctm->dl_mute_flags &= ~(1 << l1ctm->next_to_process);   
      
      l1ctmFlags &= ~(LCF_UL_MUTE + LCF_DL_MUTE);
      l1ctm->FLAGS = l1ctmFlags;
             
           

     #ifdef UL_OUT_PCM_RECORD_MD
	     if( l1ctm->debugCallback != NULL ){
	        if(l1ctm->ul_mute_flags & (1 << l1ctm->next_to_process)) {
	            l1ctm->debugCallback(UL_OUT_WRITE_FILE_REQUEST, zero_dl_pcm, CTM_NB_BUF_LEN, false);
	        } else {         
	            l1ctm->debugCallback(UL_OUT_WRITE_FILE_REQUEST, l1ctm->ul_pcm_fifo[buf_idx], CTM_NB_BUF_LEN, false);
	        }
	     }
     #endif
      
     #ifdef DL_OUT_PCM_RECORD_MD
	     if( l1ctm->debugCallback != NULL ){
	        if(l1ctm->dl_mute_flags & (1 << l1ctm->next_to_process)) { 
	            l1ctm->debugCallback(DL_OUT_WRITE_FILE_REQUEST, zero_dl_pcm, CTM_NB_BUF_LEN, false);
	        } else {
	            l1ctm->debugCallback(DL_OUT_WRITE_FILE_REQUEST, l1ctm->dl_pcm_fifo[buf_idx], CTM_NB_BUF_LEN, false);
	        }
	     }
     #endif


#if defined(UL_IN_PCM_RECORD_MD) || defined(DL_IN_PCM_RECORD_MD) || defined(UL_OUT_PCM_RECORD_MD) || defined(DL_OUT_PCM_RECORD_MD)
	{
		if( l1ctm->debugCallback != NULL ){
			l1ctm->debugCallback(0, NULL, 0, true);
      }
	}
#endif 

      l1ctm->next_to_process ++;
      if(l1ctm->next_to_process == 2 * PCM_FIFO_LEN)
         l1ctm->next_to_process = 0;   
      
      /*****************************************************
      *  dl_pcm_output  <- dl_pcm_fifo  <- dl_pcm_input    *
      *     32k               8k            32k            *
      *                 [CTM] <- [BAUDOT]                  *
      *****************************************************/
      
      
      /*[CTM blisrc] UL up sampling start*/

      p_ul_us_inBuf = l1ctm->ul_pcm_fifo[buf_idx];
      p_ul_us_outBuf = l1ctm->ul_pcm_output[buf_idx];
      
	  memcpy(p_ul_us_outBuf, p_ul_us_inBuf, CTM_NB_BUF_LEN << 1);
	  
	  ul_us_inLen = CTM_NB_BUF_LEN << 1; 
      ul_us_outLen = CTM_WB_BUF_LEN << 1;
	  p_ul_us_outBuf = l1ctm->ul_pcm_output_wb[buf_idx];
      BLI_Convert(l1ctm -> ul_upsample_8_16, (short *)p_ul_us_inBuf, &ul_us_inLen, (short *)p_ul_us_outBuf, &ul_us_outLen);
      
	  ul_us_inLen = CTM_NB_BUF_LEN << 1; 
      ul_us_outLen = CTM_SWB_BUF_LEN << 1;
	  p_ul_us_outBuf = l1ctm->ul_pcm_output_swb[buf_idx];
	  BLI_Convert(l1ctm -> ul_upsample_8_32, (short *)p_ul_us_inBuf, &ul_us_inLen, (short *)p_ul_us_outBuf, &ul_us_outLen);
      

      /*[CTM blisrc] UL up sampling end*/
      
      
      
      /*[CTM blisrc] DL up sampling start*/
      
      
      p_dl_us_inBuf = l1ctm->dl_pcm_fifo[buf_idx];
      p_dl_us_outBuf = l1ctm->dl_pcm_output[buf_idx];

     
	  memcpy(p_dl_us_outBuf, p_dl_us_inBuf, CTM_NB_BUF_LEN << 1);
	  
	  dl_us_inLen = CTM_NB_BUF_LEN << 1; 
      dl_us_outLen = CTM_WB_BUF_LEN << 1;
	  p_dl_us_outBuf = l1ctm->dl_pcm_output_wb[buf_idx];
      BLI_Convert(l1ctm -> dl_upsample_8_16, (short *)p_dl_us_inBuf, &dl_us_inLen, (short *)p_dl_us_outBuf, &dl_us_outLen);
      
	  dl_us_inLen = CTM_NB_BUF_LEN << 1; 
      dl_us_outLen = CTM_SWB_BUF_LEN << 1;
	  p_dl_us_outBuf = l1ctm->dl_pcm_output_swb[buf_idx];
	  BLI_Convert(l1ctm -> dl_upsample_8_32, (short *)p_dl_us_inBuf, &dl_us_inLen, (short *)p_dl_us_outBuf, &dl_us_outLen);
      
      /*[CTM blisrc] DL up sampling end*/
   
      if(l1ctm->ul_isSending){
      	 l1ctm->ul_isTTY = 1;
      	 l1ctm->ul_send_count --;
      }     
      
      if(l1ctm->ul_send_count == 0){
      	l1ctm->ul_isTTY = 0;
      	l1ctm->ul_isSending = 0;
      } 
      uint16 *ptrSrc; 
      uint16 *ptrDest; 
      if(VCO_MODE == l1ctm->interface && (!l1ctm->ul_isTTY)){
          ptrSrc = l1ctm->ul_pcm_input[buf_idx];
		  if(CTM_SWB_BUF_LEN == l1ctm->ul_pcm_input_len[buf_idx]){
			ptrDest = l1ctm->ul_pcm_output_swb[buf_idx];
		  }
		  else if(CTM_WB_BUF_LEN == l1ctm->ul_pcm_input_len[buf_idx]){
			ptrDest = l1ctm->ul_pcm_output_wb[buf_idx];
		  }
		  else{
			ptrDest = l1ctm->ul_pcm_output[buf_idx];
		  }
          
		  memcpy(ptrDest, ptrSrc, l1ctm->ul_pcm_input_len[buf_idx] * sizeof(uint16));
      }
      if(HCO_MODE == l1ctm->interface && (!l1ctm->dl_isTTY)){
        ptrSrc = l1ctm->dl_pcm_input[buf_idx];
		if(CTM_SWB_BUF_LEN == l1ctm->dl_pcm_input_len[buf_idx]){
		   ptrDest = l1ctm->dl_pcm_output_swb[buf_idx];
		}
		else if(CTM_WB_BUF_LEN == l1ctm->dl_pcm_input_len[buf_idx]){
		   ptrDest = l1ctm->dl_pcm_output_wb[buf_idx];
		}
		else{
		   ptrDest = l1ctm->dl_pcm_output[buf_idx];
		}
        
		memcpy(ptrDest, ptrSrc, l1ctm->dl_pcm_input_len[buf_idx] * sizeof(uint16));
      }
         
      //copy 2nd mic data directly
      ptrSrc = l1ctm->ul_pcm_input2[buf_idx];
      ptrDest = l1ctm->ul_pcm_output2[buf_idx];
      memcpy(ptrDest, ptrSrc, l1ctm->ul_pcm_input_len[buf_idx] * sizeof(uint16));
      
   } 
   
}

void l1ctm_in_task_4g()
{  
   uint16 l1ctmFlags, ctmFlags, interface, buf_idx; 
   
   
   uint32 ul_ds_inLen, ul_ds_outLen, dl_ds_inLen, dl_ds_outLen;
   uint32 ul_us_inLen, ul_us_outLen, dl_us_inLen, dl_us_outLen;
   
   uint16 *p_ul_ds_inBuf, *p_ul_ds_outBuf;
   uint16 *p_dl_ds_inBuf, *p_dl_ds_outBuf;
   
   uint16 *p_ul_us_inBuf, *p_ul_us_outBuf;
   uint16 *p_dl_us_inBuf, *p_dl_us_outBuf;
   
   uint8 utf8_code;        

   
   if(l1ctm == (L1Ctm_Module*) 0)
      return;

   while(l1ctm->next_to_process != l1ctm->pcm_fifo_write)
   {  
      buf_idx = l1ctm->next_to_process;
      if(buf_idx >= PCM_FIFO_LEN)
         buf_idx -= PCM_FIFO_LEN;
      
      
      /******************************************************
      *  ul_pcm_input  -> ul_pcm_fifo    -> ul_pcm_output   *
      *     32k               8k            32k             *
      *                [BAUDOT] -> [CTM]                    * 
      ******************************************************/
      

      
      /*[CTM blisrc] UL downsample start*/
 
      p_ul_ds_inBuf = l1ctm->ul_pcm_input[buf_idx];
      p_ul_ds_outBuf = l1ctm->ul_pcm_fifo[buf_idx];
     
	  if(CTM_WB_BUF_LEN == l1ctm->ul_pcm_input_len[buf_idx]){
		ul_ds_inLen  = CTM_WB_BUF_LEN << 1;  
        ul_ds_outLen = CTM_NB_BUF_LEN << 1;  
	    BLI_Convert(l1ctm->ul_downsample_16_8, (short *)p_ul_ds_inBuf, &ul_ds_inLen, (short *)p_ul_ds_outBuf, &ul_ds_outLen);
	  }
	  else if(CTM_SWB_BUF_LEN ==l1ctm->ul_pcm_input_len[buf_idx]){
		ul_ds_inLen  = CTM_SWB_BUF_LEN << 1;  
        ul_ds_outLen = CTM_NB_BUF_LEN << 1;  
	    BLI_Convert(l1ctm->ul_downsample_32_8, (short *)p_ul_ds_inBuf, &ul_ds_inLen, (short *)p_ul_ds_outBuf, &ul_ds_outLen);
	  }
	  else{
		memcpy(p_ul_ds_outBuf, p_ul_ds_inBuf, CTM_NB_BUF_LEN << 1);
	  }
	  
      /*[CTM blisrc] UL downsample end*/
      
      
      /*[CTM blisrc] DL downsample start*/
      
      p_dl_ds_inBuf = l1ctm->dl_pcm_input[buf_idx];
      p_dl_ds_outBuf = l1ctm->dl_pcm_fifo[buf_idx];
      

      if(CTM_WB_BUF_LEN == l1ctm->dl_pcm_input_len[buf_idx]){
		 dl_ds_inLen  = CTM_WB_BUF_LEN << 1;  
         dl_ds_outLen = CTM_NB_BUF_LEN << 1; 
	     BLI_Convert(l1ctm->dl_downsample_16_8, (short *)p_dl_ds_inBuf, &dl_ds_inLen, (short *)p_dl_ds_outBuf, &dl_ds_outLen);
	  }
	  else if(CTM_SWB_BUF_LEN ==l1ctm->dl_pcm_input_len[buf_idx]){
		 dl_ds_inLen  = CTM_SWB_BUF_LEN << 1;  
         dl_ds_outLen = CTM_NB_BUF_LEN << 1; 
	     BLI_Convert(l1ctm->dl_downsample_32_8, (short *)p_dl_ds_inBuf, &dl_ds_inLen, (short *)p_dl_ds_outBuf, &dl_ds_outLen);
	  }
	  else{
	    memcpy(p_dl_ds_outBuf, p_dl_ds_inBuf, CTM_NB_BUF_LEN << 1);
	  }
      /*[CTM blisrc] DL downsample end*/
     

      l1ctmFlags = l1ctm->FLAGS; 
      interface = l1ctm->interface;
    
      ctmFlags = ctm_modem_get_flags();
      
            
      // up-link path input : Baudot Demodulator 
      if(interface != DIRECT_MODE)
      {
      #if !defined(DUPLEX_BAUDOT)         
         if(ctmFlags & CMF_BAUDOT_OUT_BITS_READY && l1ctm->enquiry_count != -2){
            l1ctmFlags |= LCF_UL_MUTE;
             
         }
         else
      #endif    
         { 
            baudot_demod((const uint16*)l1ctm->ul_pcm_fifo[buf_idx],&ctmFlags, &utf8_code); 
            
            if(ctmFlags & CMF_BAUDOT_IN_DETECTED && l1ctm->enquiry_count != -2)
               l1ctmFlags |= LCF_UL_MUTE;                                 
            else if(ctmFlags & CMF_BAUDOT_IN_CHAR)
            {
               //UL_TTY_BUF_PUT_CHAR(utf8_code);
               
               if(!TTY_LTE_PSR_UL_isFull())
               	  TTY_LTE_PSR_UL_Put(utf8_code);

               L1CTM_TRACE_INFO( L1CTM_4G_PUT_UL , utf8_code );
               L1CTM_TRACE_INFO( L1CTM_UL_GET_DECODED_TTY_CHAR , utf8_code );
              
            
            }   
         }
      }
      
      if(l1ctm->dl_put_count == 0){
            if(!TTY_LTE_PSR_DL_isEmpty()){
                uint8 ch = TTY_LTE_PSR_DL_Get();
                DL_TTY_BUF_PUT_CHAR(ch);
                
                L1CTM_TRACE_INFO( L1CTM_4G_GET_DL , ch );

        }     
        l1ctm->dl_put_count = NUM_DELAY_FRAME;
      }
      l1ctm->dl_put_count--;       
      
  
      // down-link path output    
      if(interface !=DIRECT_MODE)
      {
         if(ctmFlags & CMF_BAUDOT_OUT_BITS_READY)
         {
            utf8_code = NON_UTF8_CHAR;
         
            if(ctmFlags & CMF_BAUDOT_OUT_NEAR_EMPTY)         
               if(DL_TTY_BUF_CHAR_READY())
               {
                  DL_TTY_BUF_GET_CHAR(utf8_code);                             
                  L1CTM_TRACE_INFO( L1CTM_DL_SEND_TTY_CHAR , utf8_code );  
               }   
                                 
            baudot_mod(utf8_code, l1ctm->dl_pcm_fifo[buf_idx], &ctmFlags);                                
         }
         else 
         {
            if(l1ctmFlags & LCF_DL_BAUDOT_TRANSMITTING)
               l1ctmFlags &= ~LCF_DL_BAUDOT_TRANSMITTING;      
            
            if(DL_TTY_BUF_CHAR_READY())
            {
               DL_TTY_BUF_GET_CHAR(utf8_code); 
               L1CTM_TRACE_INFO( L1CTM_DL_SEND_TTY_CHAR , utf8_code );              
               baudot_mod(utf8_code, l1ctm->dl_pcm_fifo[buf_idx], &ctmFlags);
            #if !defined(DUPLEX_BAUDOT)   
               baudot_demod_reset();
               l1ctmFlags |= LCF_UL_MUTE; // mute for baudot_out is modulating 
            #endif    
               l1ctmFlags |= LCF_DL_BAUDOT_TRANSMITTING;
            }                                
         }         
      }
                                                                                          
   
      // calculate time out
      if(l1ctm->next_ack_timeout > 0)
         l1ctm->next_ack_timeout --;
      if(l1ctm->enquiry_timeout1 > 0)
         l1ctm->enquiry_timeout1 --;  
      if(l1ctm->enquiry_timeout2 > 0)
         l1ctm->enquiry_timeout2 --;          
                                                                             
      // process output for MUTE case       
      if(!(l1ctmFlags & LCF_UL_CTM_TRANSMITTING) && (l1ctmFlags & LCF_UL_MUTE))
         l1ctm->ul_mute_flags |= 1 << l1ctm->next_to_process;
      else 
         l1ctm->ul_mute_flags &= ~(1 << l1ctm->next_to_process);         
      
      
      if(!(l1ctmFlags & LCF_DL_BAUDOT_TRANSMITTING) && (l1ctmFlags & LCF_DL_MUTE))
         l1ctm->dl_mute_flags |= 1 << l1ctm->next_to_process;
      else 
         l1ctm->dl_mute_flags &= ~(1 << l1ctm->next_to_process);   
      
      l1ctmFlags &= ~(LCF_UL_MUTE + LCF_DL_MUTE);
      l1ctm->FLAGS = l1ctmFlags;
             

      l1ctm->next_to_process ++;
      if(l1ctm->next_to_process == 2 * PCM_FIFO_LEN)
         l1ctm->next_to_process = 0;   
      
      
      /*****************************************************
      *  dl_pcm_output  <- dl_pcm_fifo  <- dl_pcm_input    *
      *     32k               8k            32k            *
      *                 [CTM] <- [BAUDOT]                  *
      *****************************************************/
      
      
      /*[CTM blisrc] UL up sampling start*/
	  
      p_ul_us_inBuf = l1ctm->ul_pcm_fifo[buf_idx];
      p_ul_us_outBuf = l1ctm->ul_pcm_output[buf_idx];

      
	  memcpy(p_ul_us_outBuf, p_ul_us_inBuf, 160 << 1);
	  
	  ul_us_inLen = CTM_NB_BUF_LEN << 1; 
      ul_us_outLen = CTM_WB_BUF_LEN << 1;
	  p_ul_us_outBuf = l1ctm->ul_pcm_output_wb[buf_idx];
      BLI_Convert(l1ctm -> ul_upsample_8_16, (short *)p_ul_us_inBuf, &ul_us_inLen, (short *)p_ul_us_outBuf, &ul_us_outLen);
      
	  ul_us_inLen = CTM_NB_BUF_LEN << 1; 
      ul_us_outLen = CTM_SWB_BUF_LEN << 1;
	  p_ul_us_outBuf = l1ctm->ul_pcm_output_swb[buf_idx];
	  BLI_Convert(l1ctm -> ul_upsample_8_32, (short *)p_ul_us_inBuf, &ul_us_inLen, (short *)p_ul_us_outBuf, &ul_us_outLen);
      
      /*[CTM blisrc] UL up sampling end*/
      
      
      
      /*[CTM blisrc] DL up sampling start*/
      
	  p_dl_us_inBuf = l1ctm->dl_pcm_fifo[buf_idx];
      p_dl_us_outBuf = l1ctm->dl_pcm_output[buf_idx];

      
	  memcpy(p_dl_us_outBuf, p_dl_us_inBuf, 160 << 1);
	  
	  dl_us_inLen = CTM_NB_BUF_LEN << 1; 
      dl_us_outLen = CTM_WB_BUF_LEN << 1;
	  p_dl_us_outBuf = l1ctm->dl_pcm_output_wb[buf_idx];
      BLI_Convert(l1ctm -> dl_upsample_8_16, (short *)p_dl_us_inBuf, &dl_us_inLen, (short *)p_dl_us_outBuf, &dl_us_outLen);
      
	  dl_us_inLen = CTM_NB_BUF_LEN << 1; 
      dl_us_outLen = CTM_SWB_BUF_LEN << 1;
	  p_dl_us_outBuf = l1ctm->dl_pcm_output_swb[buf_idx];
	  BLI_Convert(l1ctm -> dl_upsample_8_32, (short *)p_dl_us_inBuf, &dl_us_inLen, (short *)p_dl_us_outBuf, &dl_us_outLen);
      
      
      /*[CTM blisrc] DL up sampling end*/
      
	   uint16 *ptrSrc; 
       uint16 *ptrDest; 
       if(VCO_MODE == l1ctm->interface){
	       ptrSrc = l1ctm->ul_pcm_input[buf_idx];
		   
		   if(CTM_SWB_BUF_LEN == l1ctm->ul_pcm_input_len[buf_idx]){
		       ptrDest = l1ctm->ul_pcm_output_swb[buf_idx];
		   }
		   else if(CTM_WB_BUF_LEN == l1ctm->ul_pcm_input_len[buf_idx]){
		       ptrDest = l1ctm->ul_pcm_output_wb[buf_idx];
		   }
		   else{
               ptrDest = l1ctm->ul_pcm_output[buf_idx];
		   }
		   memcpy(ptrDest, ptrSrc, l1ctm->ul_pcm_input_len[buf_idx] * sizeof(uint16)); 
            
       }
       else if(HCO_MODE == l1ctm->interface){
           ptrSrc = l1ctm->dl_pcm_input[buf_idx];
         
	       if(CTM_SWB_BUF_LEN == l1ctm->dl_pcm_input_len[buf_idx]){
	           ptrDest = l1ctm->dl_pcm_output_swb[buf_idx];
	       }
	       else if(CTM_WB_BUF_LEN == l1ctm->dl_pcm_input_len[buf_idx]){
	           ptrDest = l1ctm->dl_pcm_output_wb[buf_idx];
	       }
           else{
	           ptrDest = l1ctm->dl_pcm_output[buf_idx];
	       }
        
           memcpy(ptrDest, ptrSrc, l1ctm->dl_pcm_input_len[buf_idx] * sizeof(uint16));
       }
       else{
           memset(l1ctm->ul_pcm_output[buf_idx], 0, CTM_NB_BUF_LEN << 1);
           memset(l1ctm->ul_pcm_output_wb[buf_idx], 0, CTM_WB_BUF_LEN << 1);
           memset(l1ctm->ul_pcm_output_swb[buf_idx], 0, CTM_SWB_BUF_LEN << 1);
       }
   } 
}

void l1ctm_in_task(void *data){
	if(L1SP_STATE_4G_SPEECH_ON == L1SP_GetState()){
		l1ctm_in_task_4g();
    }
    else{
        l1ctm_in_task_2g_3g();
    }
}

/*============================== L1Ctm APIs ====================================*/

uint32 L1Ctm_GetMemReq(void)
{
   uint32 mem_size = 0;   

   mem_size = sizeof(L1Ctm_Module) + ctm_modem_mem_req();
     
   return mem_size;      
}
                                 

void L1Ctm_Open(L1Ctm_Interface a, L1Ctm_Callback handler, uint8 *buf, uint32 buf_len, L1Ctm_DebugCallback debugCallback)
{   
   uint8 *buf_ptr;

   CTM_Param *ctm_param, CTM_param;
   #if defined(__DSP_FCORE4__)
   CTM_param.cprm_tone_demod_down_samp = 0x7D;
   #else
   CTM_param.cprm_tone_demod_down_samp = 0x05;
   #endif
   ctm_param = &CTM_param;
   
   L1CTM_TRACE_FUNC( L1CTM_OPEN );  
            
   ASSERT(buf_len >= L1Ctm_GetMemReq()); 
   
 
   // allocate memory to L1CTM and CTM modem , and init CTM modem       
   l1ctm = (L1Ctm_Module*) buf;
   buf_ptr = buf + sizeof(L1Ctm_Module);
   buf_len -= sizeof(L1Ctm_Module);  

   ctm_modem_init(buf_ptr, buf_len, ctm_param);   

   if(ctm_param != NULL)
   {
      cprm_debug_flag = ctm_param->cprm_tone_demod_down_samp;
      kal_trace(TRACE_STATE, L1CTM_OPEN_PARAM, cprm_debug_flag);
   }
   else
   {   
      cprm_debug_flag = CPRM_MASK_DOWN_SAMP | CPRM_MASK_REC_DL_PCM_IN | CPRM_MASK_REC_DL_PCM_OUT | CPRM_MASK_REC_UL_PCM_IN | CPRM_MASK_REC_UL_PCM_OUT;
   }
   

   l1ctm->interface = a;       
   

   {
   uint16 bit;
	for(bit=0; bit<PCM_FIFO_LEN; bit++) {
		l1ctm->ul_mute_flags |= (1<<bit); 
      l1ctm->dl_mute_flags |= (1<<bit);
	}
   }
       
   // open BLI Src for ctm
   l1ctm -> ul_downsample_32_8 =  BLI_Open( 32000, 1, 8000, 1, (signed char*)l1ctm -> internal_buf_ul_in, 0); // open UL down sampling src
   l1ctm -> dl_downsample_32_8 =  BLI_Open( 32000, 1, 8000, 1, (signed char*)l1ctm -> internal_buf_dl_in, 0); // open DL down sampling src
   l1ctm -> ul_upsample_8_32 =  BLI_Open( 8000, 1, 32000, 1, (signed char*)l1ctm -> internal_buf_ul_out, 0); // open UL up sampling src
   l1ctm -> dl_upsample_8_32 =  BLI_Open( 8000, 1, 32000, 1, (signed char*)l1ctm -> internal_buf_dl_out, 0); // open DL up sampling src
   
   
   l1ctm -> ul_downsample_16_8 =  BLI_Open( 16000, 1, 8000, 1, (signed char*)l1ctm -> internal_buf_ul_in2, 0); // open UL down sampling src
   l1ctm -> dl_downsample_16_8 =  BLI_Open( 16000, 1, 8000, 1, (signed char*)l1ctm -> internal_buf_dl_in2, 0); // open DL down sampling src
   l1ctm -> ul_upsample_8_16 =  BLI_Open( 8000, 1, 16000, 1, (signed char*)l1ctm -> internal_buf_ul_out2, 0); // open UL up sampling src
   l1ctm -> dl_upsample_8_16 =  BLI_Open( 8000, 1, 16000, 1, (signed char*)l1ctm -> internal_buf_dl_out2, 0); // open DL up sampling src
   // init l1ctm variables

   l1ctm -> aud_id = L1Audio_GetAudioID();
   
   // init 2g_3g tty variables
   l1ctm->ul_isTTY = 0;
   l1ctm->dl_isTTY = 0;
   l1ctm->ul_isSending = 0;
   l1ctm->ul_send_count = NUM_UL_SEND_FRAME;
   
   // init 4g tty variables
   TTY_LTE_PSR_UL_Queue_Init();
   TTY_LTE_PSR_DL_Queue_Init();


   l1ctm->dl_put_count = NUM_DELAY_FRAME;

   L1Audio_SetEventHandler(l1ctm->aud_id , l1ctm_in_task);
   L1Audio_SetFlag(l1ctm->aud_id);

   l1ctm->callback_handler = handler; 
#if defined(__SMART_PHONE_MODEM__)
	l1ctm->debugCallback = debugCallback;
#endif
   l1ctm->next_to_process = PCM_FIFO_LEN;
   l1ctm->pcm_fifo_write = PCM_FIFO_LEN;
   l1ctm->pcm_fifo_read = 0;                 
   l1ctm->ul_tty_buf_read = 0;  
   l1ctm->ul_tty_buf_write = 0;
   l1ctm->ul_ctm_buf_read = 0;
   l1ctm->ul_ctm_buf_write = 0;
   l1ctm->dl_tty_buf_read = 0;
   l1ctm->dl_tty_buf_write = 0;
   l1ctm->dl_ctm_buf_read = 0;
   l1ctm->dl_ctm_buf_write = 0;  
   l1ctm->FLAGS = 0;
   l1ctm->state = L1CTM_READY_STATE;    
   l1ctm->next_ack_timeout = 0;
   l1ctm->enquiry_count = 3;
   l1ctm->debug_function = 0;
   

   if(cprm_debug_flag & CPRM_MASK_MORE_ENQUIRY) // Adam : for more enquiry 
   {
      l1ctm->enquiry_count = MORE_ENQUIRY; 					
      more_enquiry_times = MORE_ENQUIRY; 	
   }
   else 
      more_enquiry_times = 3; // the same setting as Spec 
   
   if(cprm_debug_flag & CPRM_MASK_ALWAYS_NEGO_SUC) // Adam : for non-Negotiation test 
   {
      l1ctm->FLAGS = LCF_FAR_END_DETECTED; 
      if(l1ctm->interface !=DIRECT_MODE)
         l1ctm->enquiry_count = -1; 	
   }  
   	      
   l1ctm->enquiry_timeout1 = 0;
   l1ctm->enquiry_timeout2 = 0;
   l1ctm->transition_mute = 0;
   
   l1ctm->l1d_bfi_info[0] = 0;
   

   SAL_CTM_Switch(false);
   l1ctm->dl_isTTY = 0;
   SAL_CTM_SetGain(CPRM_CODEBOOK_GAIN_THRESHOLD, CPRM_CODEBOOK_GAIN_VALUE);


   l1ctm->interface = a;
   
   if(VCO_MODE == l1ctm->interface){
      l1sp_setCtmSpeStatus(1);
	  SetSPEnhancePath(SpeechEnh_UL);
   }
   else if(HCO_MODE == l1ctm->interface){
      l1sp_setCtmSpeStatus(1);
	  SetSPEnhancePath(SpeechEnh_DL); 
   }
   else{
      l1sp_setCtmSpeStatus(1);   
      SetSpeechEnhancement(false);
	  l1sp_setCtmSpeStatus(0);
   }
   kal_trace( TRACE_FUNC, L1CTM_TTY_MODE,  (int)l1ctm->interface);

   
   if(DIRECT_MODE != l1ctm->interface)
       PCM4WAY_Start(l1ctm_in_hisr, P4W_APP_CTM); 

   l1ctm->skip_hisr = false;
   l1ctm->stop = false;
} // End of L1Ctm_open(~)

void L1Ctm_Stop(void){
	kal_trace(TRACE_INFO, L1CTM_STOP_ENTER);
	l1ctm-> stop = true;
	kal_trace(TRACE_INFO, L1CTM_STOP_LEAVE);
}

void L1Ctm_Close(void)
{
   L1CTM_TRACE_FUNC( L1CTM_CLOSE );
   
   ASSERT(l1ctm != (L1Ctm_Module*) 0);   
   PCM4WAY_Stop(0); 
  

   L1Audio_ClearFlag(l1ctm->aud_id); 
   L1Audio_FreeAudioID(l1ctm->aud_id);
   
   l1sp_setCtmSpeStatus(1);  
   SetSPEnhancePath(SpeechEnh_All); // remember to turn on SPE while TTY off
   
   BLI_Close( l1ctm->ul_downsample_16_8, 0); // Close UL down sampling src
   BLI_Close( l1ctm->dl_downsample_16_8, 0); // Close DL down sampling src
   BLI_Close( l1ctm->ul_downsample_32_8, 0); // Close UL down sampling src
   BLI_Close( l1ctm->dl_downsample_32_8, 0); // Close DL down sampling src
   BLI_Close( l1ctm->ul_upsample_8_16, 0); // Close UL up sampling src
   BLI_Close( l1ctm->dl_upsample_8_16, 0); // Close DL up sampling src
   BLI_Close( l1ctm->ul_upsample_8_32, 0); // Close UL up sampling src
   BLI_Close( l1ctm->dl_upsample_8_32, 0); // Close DL up sampling src
   l1ctm = (L1Ctm_Module*) 0;  

}  // end of L1Ctm_Close(~)

void L1Ctm_RTTOpen(){
   kal_prompt_trace(MOD_L1SP, "[L1Ctm_RTTOpen] Enter");
  
   TTY_LTE_PSR_UL_Queue_Init();
   TTY_LTE_PSR_DL_Queue_Init();
   
   rtt.isRttOn = true;
   
   kal_prompt_trace(MOD_L1SP, "[L1Ctm_RTTOpen] Leave");
}

void L1Ctm_RTTClose(){
	
	if(rtt.isRttOn) {
		ctm_init();
	}
}

bool getRttStatus(){
	return rtt.isRttOn;
}


/*===========================MED_L1Audio_Integrate_Handler===========================================*/


#else                                                                    
char dummy_l1ctm_c;    /* define a dummy variable to avoid warning message */
#endif // __CTM_SUPPORT__
