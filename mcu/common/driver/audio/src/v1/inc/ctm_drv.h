/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *	   l1ctm.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
 
// l1ctm.h
#ifndef __L1CTM_H
#define __L1CTM_H
#include "l1aud_common_def.h"

typedef enum{
   DIRECT_MODE,
   FULL_MODE = 1,
   VCO_MODE = 2,
   HCO_MODE = 4
} L1Ctm_Interface; 

typedef enum{
   CTM_MO_SUCCESS,
   CTM_MO_FAIL, 
   CTM_MT_DETECTED, 
   CTM_CHAR_SENT, 
   CTM_CHAR_RECEIVED,
   CTM_TX_BURST_START,
   CTM_TX_BURST_END   
} L1Ctm_Event; 

// Msg_Info Debug Message 
#define OPEN_CTM_REQUEST 1
#define CLOSE_CTM_REQUEST 2
#define UL_READ_PCM_FILE_REQUEST 3
#define DL_READ_PCM_FILE_REQUEST 4
#define DL_READ_BFI_FILE_REQUEST 5   
#define UL_IN_WRITE_FILE_REQUEST 6
#define DL_IN_WRITE_FILE_REQUEST 7
#define UL_OUT_WRITE_FILE_REQUEST 8
#define DL_OUT_WRITE_FILE_REQUEST 9   
#define GENERAL_WRITE_FILE_REQUEST 10
#define PUT_TEXT_TO_UL_CTM_BUF_REQUEST 11
#define UL_CTM_BUF_DUMMY_READ_REQUEST 12

#define DSP_REC_RX_BUF0_REQUEST 13
#define DSP_REC_NB_RESULT0_REQUEST 14
#define DSP_REC_FN_REQUEST 15
#define DSP_REC_EQ_SO0_REQUEST 16

#define START_NEGOTIATION_REQUEST 17

#define DONE_WRITE_FILE_REQUEST 18


// need to define CTM_Param 
typedef struct
{
    kal_int16   cprm_tone_demod_down_samp;                  // 1 (0, 1)   
} CTM_Param;

typedef struct{
	bool isRttOn;
}RTT_Module;

typedef void (*L1Ctm_Callback)(L1Ctm_Event , void*); 
typedef void (*L1Ctm_DebugCallback)(uint16 pos, uint16 *buffer, uint16 len, bool isDone);

uint32 L1Ctm_GetMemReq(void);
void L1Ctm_Open(L1Ctm_Interface a, L1Ctm_Callback handler, uint8 *buf, uint32 buf_len, L1Ctm_DebugCallback debugCallback);
void L1Ctm_Close(void);
void L1Ctm_Stop(void);
uint32 L1Ctm_TxPutText(const uint8 *text, uint32 len, uint32 *left_space);
uint32 L1Ctm_RxGetText(uint8 *text, uint32 len, uint32 *left_count);

void RTT_UL_LEN_Queue_Init(void);
void RTT_UL_LEN_Queue_Put(kal_uint16 len);
kal_uint16 RTT_UL_LEN_Queue_Get(void);
kal_bool RTT_UL_LEN_Queue_isEmpty(void);
kal_bool RTT_UL_LEN_Queue_isFull(void);
kal_uint16 RTT_UL_LEN_Queue_Size(void);
void RTT_DL_LEN_Queue_Init(void);
void RTT_DL_LEN_Queue_Put(kal_uint16 len);
kal_uint16 RTT_DL_LEN_Queue_Get(void);
kal_bool RTT_DL_LEN_Queue_isEmpty(void);
kal_bool RTT_DL_LEN_Queue_isFull(void);
kal_uint16 RTT_DL_LEN_Queue_Size(void);


void RTT_UL_ID_Queue_Init(void);
void RTT_UL_ID_Queue_Put(kal_uint8 id);
kal_uint8 RTT_UL_ID_Queue_Get(void);
kal_bool RTT_UL_ID_Queue_isEmpty(void);
kal_bool RTT_UL_ID_Queue_isFull(void);
kal_uint16 RTT_UL_ID_Queue_Size(void);
void RTT_DL_ID_Queue_Init(void);
void RTT_DL_ID_Queue_Put(kal_uint8 id);
kal_uint8 RTT_DL_ID_Queue_Get(void);
kal_bool RTT_DL_ID_Queue_isEmpty(void);
kal_bool RTT_DL_ID_Queue_isFull(void);
kal_uint16 RTT_DL_ID_Queue_Size(void);


void TTY_LTE_PSR_UL_Queue_Init(void);
kal_uint8 TTY_LTE_PSR_UL_Get(void);
void TTY_LTE_PSR_UL_Put(kal_uint8 tty_char);
kal_bool TTY_LTE_PSR_UL_isEmpty(void);
kal_bool TTY_LTE_PSR_UL_isFull(void);
kal_uint16 TTY_LTE_PSR_UL_Queue_Size(void);
void TTY_LTE_PSR_DL_Queue_Init(void);
void TTY_LTE_PSR_DL_Put(kal_uint8 tty_char);
kal_uint8 TTY_LTE_PSR_DL_Get();
kal_uint16 TTY_LTE_PSR_DL_Queue_Size(void);
kal_bool TTY_LTE_PSR_DL_isEmpty(void);
kal_bool TTY_LTE_PSR_DL_isFull(void);
void TTY_LTE_PSR_DL_PutString(kal_uint8 call_id, kal_uint8 string[256], kal_uint16 length);
kal_uint16 TTY_LTE_PSR_UL_GetString(kal_uint8 call_id, kal_uint8 *buf, kal_uint16 *length);
kal_uint16 TTY_LTE_PSR_UL_GetChar(kal_uint8 call_id, kal_uint8 *buf);
void SP_L4C_SetERTTSTR(kal_uint8 call_id, kal_uint8 string[256], kal_uint16 length);
void SP_L4C_SendERTTSTR(kal_uint8 call_id);


void L1Ctm_RTTOpen();
void L1Ctm_RTTClose();
bool getRttStatus();
#endif 
