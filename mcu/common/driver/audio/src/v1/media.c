/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * media.c
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * Audio Playback/Record general interface
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "reg_base.h"
#include "fs_type.h"
#include "kal_trace.h"
#include "string.h"
#include "fsal.h"
#include "audcoeff_default.h"

#include "ddload.h"
#include "l1audio.h"
// #include "audio_def.h"
#include "speech_def.h"
#include "am.h"
#include "media.h"
#include "afe.h"
#include "audio_enum.h"
#include "l1sp_trc.h"
#include "fs_errcode.h"

#if defined(__AUDIO_COMPONENT_SUPPORT__)
#include "AudComUtil.h"
#endif

#if VERIFY_DATA_TO_DSP
extern void VERIFY_DATA_TO_DSP_START( void );
extern void VERIFY_DATA_TO_DSP_RESUME( void );
extern void VERIFY_DATA_TO_DSP_STOP( void );
#endif




/* Functions for Ring Buffer Access */
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
/*  Media File Playback/Recording Interface                                       */
/* ------------------------------------------------------------------------------ */
// extern void AudioPP_Loudness_Registry( void );


/* ------------------------------------------------------------------------------ */

#ifdef PCM_EX_UNIT_TEST
#include "pcm4way.h"
static uint32 pcm_ex_test_on = 0;
static uint16 PCM_BUF[160];
static uint16 PCM_UL_BUF[8][160];
static uint16 PCM_DL_BUF[8][160];
static uint32 pcm_buf_rw;

void pcm4way_hisrHdl()
{
   uint32 I;
   int16 *buf1, *buf2;

   buf1 = (int16*)PCM_UL_BUF[pcm_buf_rw];
   buf2 = (int16*)PCM_BUF;
   for(I = 160; I > 0 ; I--)
      *buf2++ = (*buf1++) >> 2;
   PCM4WAY_GetFromMic((uint16*)PCM_UL_BUF[pcm_buf_rw]);
   buf1 = (int16*)PCM_UL_BUF[pcm_buf_rw];
   buf2 = (int16*)PCM_BUF;
   for(I = 160; I > 0 ; I--)
      (*buf2++) += (*buf1++) >> 2 * 3;
   PCM4WAY_PutToSE((const uint16*)PCM_BUF);

   buf1 = (int16*)PCM_DL_BUF[pcm_buf_rw];
   buf2 = (int16*)PCM_BUF;
   for(I = 160; I > 0 ; I--)
      *buf2++ = (*buf1++) >> 2;
   PCM4WAY_GetFromSD((uint16*)PCM_DL_BUF[pcm_buf_rw]);
   buf1 = (int16*)PCM_DL_BUF[pcm_buf_rw];
   buf2 = (int16*)PCM_BUF;
   for(I = 160; I > 0 ; I--)
      (*buf2++) += (*buf1++) >> 2 * 3;
   PCM4WAY_PutToSpk((const uint16*)PCM_BUF);

   pcm_buf_rw ++;
   pcm_buf_rw &= 0x7;
}

void pcm2way_hisrHdl()
{
   uint32 I;
   int16 *buf1, *buf2;

   buf1 = (int16*)PCM_UL_BUF[pcm_buf_rw];
   buf2 = (int16*)PCM_BUF;
   for(I = 160; I > 0 ; I--)
      *buf2++ = (*buf1++) >> 2;
   PCM2WAY_GetFromMic((uint16*)PCM_UL_BUF[pcm_buf_rw]);
   buf1 = (int16*)PCM_UL_BUF[pcm_buf_rw];
   buf2 = (int16*)PCM_BUF;
   for(I = 160; I > 0 ; I--)
      (*buf2++) += (*buf1++) >> 2 * 3;
   PCM2WAY_PutToSpk((const uint16*)PCM_BUF);

   pcm_buf_rw ++;
   pcm_buf_rw &= 0x7;
}

#endif

/*
void Media_MuteSpeaker( bool mute )
{
//    AFE_MuteSpeaker( L1SP_AUDIO, mute );
//    AFE_MuteSpeaker( L1SP_VOICE, mute );
}
*/

/* ------------------------------------------------------------------------------ */

#ifndef __L1_STANDALONE__ // avoid link error

//interface for audiohdl
void rbGetWriteBuffer( AUD_RB_INFO *rb, kal_uint8 **buffer, kal_uint32 *buf_len )// in bytes
{
   int32 count;
   int32 temp_read = rb->read;
   int32 temp_write = rb->write;
   if( temp_read > temp_write )
      count = temp_read - temp_write - 1;
   else if( temp_read == 0 )
      count = rb->rb_size - temp_write - 1;
   else
      count = rb->rb_size - temp_write;

   ASSERT( count>=0 );
   *buffer = (uint8 *)&rb->rb_base[temp_write];
   *buf_len = count;
}

void rbGetReadBuffer( AUD_RB_INFO *rb, kal_uint8 **buffer, kal_uint32 *buf_len )// in bytes
{
   int32 count;
   int32 temp_write = rb->write;
   int32 temp_read = rb->read;
   if( temp_write >= temp_read )
      count = temp_write - temp_read;
   else
      count = rb->rb_size - temp_read;

   ASSERT( count>=0 );
   *buffer = (uint8 *)&rb->rb_base[temp_read];
   *buf_len = count;
}

void rbReadDataDone( AUD_RB_INFO *rb, kal_uint32 len ) // in bytes
{
   int32 temp_read = rb->read;
   temp_read+= len;

   ASSERT(temp_read <= rb->rb_size);
   if( temp_read == rb->rb_size )
   {
      temp_read = 0;
   }
   rb->read = temp_read;

   kal_brief_trace( TRACE_GROUP_AUD_PROCESS, L1AUDIO_READ_BYTE, len );
}


void rbWriteDataDone( AUD_RB_INFO *rb, kal_uint32 len ) // in bytes
{
   int32 temp_write = rb->write;
   temp_write += len;

   ASSERT(temp_write <= rb->rb_size);
   if( temp_write == rb->rb_size )
   {
      temp_write = 0;
   }
   rb->write = temp_write;
}

int32 rbGetFreeSpace( AUD_RB_INFO *rb )
{
   int32 count;

   count = rb->read - rb->write - 1;
   if( count < 0 )
      count += rb->rb_size;
   return count; // free size in byte
}

int32 rbGetDataCount( AUD_RB_INFO *rb )
{
   return rb->rb_size - rbGetFreeSpace(rb) - 1;
}
//interface for audiohdl end


#endif // #ifndef __L1_STANDALONE__

