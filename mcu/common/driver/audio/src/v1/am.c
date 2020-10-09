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
 * am.c
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   Audio Manager(AM) for Audio Mode Changes
 *
 * Author:
 * -------
 * -------
 *
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
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
 *
 *******************************************************************************/
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "reg_base.h"
#include "md2g_drv.h"
#include "string.h"
#include "sync_data.h"

#include "media.h"
#include "l1audio_trace.h"
#include "audio_ringbuf.h" // "audio_def.h" 
#include "l1audio.h"
#include "afe.h"
#include "ddload.h"
#include "am.h"
#include "l1aud_common_def.h"
#include "speech_def.h"
#include "afe_def.h"

#include "sp_daca.h"
#include "pcm4way.h"
#include "sp_enhance.h"

#include "sal_def.h"
#include "sal_exp.h"
#include "sp_cc.h"
#include "extcodec.h"

#include "us_timer.h"
#include "DVFS_drv_md_public.h"

#include "sp_drv.h"
#include "spc_drv.h"
#include "sp_dsptone_drv.h"


//#define TK6291_FAKE_COMPILE


#define AM_2G_RESYNC_THRESHOLD  1083
/* ========================================================================= */

/* ========================================================================= */
#define  AM_STATE_KEYTONE  (1<<L1SP_KEYTONE  )
#define  AM_STATE_TONE     (1<<L1SP_TONE     )
#define  AM_STATE_SPEECH   (1<<L1SP_SPEECH   )
#define  AM_STATE_VOIP   (1<<(L1SP_MAX_AUDIO+0)   )
#define  AM_STATE_VOICE    (1<<L1SP_VOICE    )
// #define  AM_STATE_DAI      (1<<L1SP_DAI      )
// #define  AM_STATE_AUDIO    (1<<L1SP_AUDIO  )
#define  AM_STATE_SND_EFFECT  (1<<L1SP_SND_EFFECT)
// #define  AM_STATE_AvBT     (1 << (L1SP_MAX_AUDIO + 1))
// #define  AM_STATE_AVSYNC   (1 << (L1SP_MAX_AUDIO + 2))
#define  AM_STATE_DACA     (1 << (L1SP_MAX_AUDIO + 3))

#define AM_CONFLICT_STATE (AM_STATE_SPEECH + AM_STATE_VOIP + AM_STATE_VOICE ) //  + AM_STATE_AUDIO)  // no audio state exist

/*========  Speech State : record features in dedicated-mode speech  ========= */
#define SP_STATE_VMR          (1 << 0)
#define SP_STATE_PCM8K_REC    (1 << 1)
#define SP_STATE_PCMNWAY      (1 << 2)
#define SP_STATE_DACA         (1 << 3)
#define SP_STATE_VMR_EPL      (1 << 4)  // VM record with EPL

/*========  VoIP State ======================================= */    
#define VOIP_STATE_VMR          (1 << 0)

#define VOIP_STATE_REC_ONLY_CAL (1 << 1)
#define VOIP_STATE_REC_PLAY_CAL (1 << 2)


/*=============  DSP&AFE IO types  ============================ */
#define NORMAL_MODE        0
// #define DAI_MODE           1
// #define BT_CORDLESS_MODE   2
#define BT_EARPHONE_MODE   3
// #define PCM_MODE           4

/*============= low byte flags of *DP_AUDIO_PAR ============================ */
// #define VOICE_INPUT_FILTER_FLAG     0x1
// #define VOICE_OUTPUT_FILTER_FLAG    0x2
// #define VOICE_WB_AMR_FLAG           0x8
// #define VOICE_16K_SWITCH_FLAG       0x10
// #define VOICE_MIC_MUTE_FLAG         0x20
// #define VOICE_SIDETONE_FILTER_FLAG  0


/* ========================================================================= */

/* To work around the bug of DSP when handover in short time,
   Do not set handover flag to DSP, but VBI_Reset and other setting remain */
#define NOT_HANDOVER_IN_SHORT_TIME

#define  VBI_Reset()          { ASSERT(0); }
#define  VBI_End()            { ASSERT(0); }
#if defined(__C2K_SPEECH_SUPPORT__)
void AM_DSP_TurnOffC2KSDSP(uint32 data , uint32 extraInfo);
#endif
/* =========== Block Filter Switch Between old/New Usage===================== */
volatile kal_uint16 *g_Compen_Blk_Flt;
extern ps_conf_test_mode_enum query_ps_conf_test_mode(void);
typedef struct {
   void     (*code)(uint32, uint32);
   uint32   data;
	uint32   data2;
} AM_QFunction;

static struct {
#if defined( NOT_HANDOVER_IN_SHORT_TIME )
   uint32    l1FN_HO;
#endif
   uint16   state;
   uint16  pre_speech_mode;
   uint8    is_reset_enh;
   uint16   speech_mode;
   uint16   ul_speech_mode; //behavior is the same as 3/4G
   // int16    speech_off_delay;
   int8     sub_channel;
   int8     ul_sub_channel; //behavior is the same as 3/4G

	// uint16  audioDigitalGain;
	uint16  speechDigitalGain;
	uint16  speechUplinkSwAgcGain;
	uint16  speechDlEnhRefDigtalGain;

   // uint16  bt_digital_gain; // temporary value for keeping origial dl volume in other mode
   // uint16  bt_mic_gain; // temporary value for keeping origial up volume in other mode
   // uint16  bt_dlEnhRef_digital_gain; // temporary  value for keeping origial dl enhancement reference volum in the other mode


   RINGBUFFER_T(AM_QFunction,8) qfunc;
#if __SP3G_PLATFORM__
   RINGBUFFER_T(AM_QFunction,8) qfunc2;   // modem-unrelated
#endif

   uint8    speech_state;
   // uint8	voip_state; 
   uint8    io_type;
	
   // bool     fLoopBack;
   // kal_bool pre_isWBLink;
	bool     isFirCoeffSet; 
	bool     isIirCoeffSet; 
   int16    in_coeff_tmp[90];
   int16    out_coeff_tmp[90];
   int16    IIR_in_coeff_tmp[42];
   int16    IIR_out_coeff_tmp[42];
   int16    MIC1_IIR_coeff_tmp[20];
   int16    MIC2_IIR_coeff_tmp[20];
	int16    wb_in_coeff_tmp[90];
	int16    wb_out_coeff_tmp[90];
   int16    wb_IIR_in_coeff_tmp[42];
   int16    wb_IIR_out_coeff_tmp[42];
   int16    wb_MIC1_IIR_coeff_tmp[20];
   int16    wb_MIC2_IIR_coeff_tmp[20];
   int16    swb_in_coeff_tmp[90];
   int16    swb_out_coeff_tmp[90];
   int16    swb_IIR_in_coeff_tmp[42];
   int16    swb_IIR_out_coeff_tmp[42];
   int16    swb_MIC1_IIR_coeff_tmp[20];
   int16    swb_MIC2_IIR_coeff_tmp[20];

   // bool     toneLoopbackRec;
   bool     sp3g_flag;

#if defined(__C2K_SPEECH_SUPPORT__)   
   bool     spc2k_flag;
   bool 	  c2k_flag;   
#endif      
#if defined(__VOLTE_SUPPORT__)
   bool     sp4g_flag;
   int      codec_4g;
#endif
   
   AM_RECORD_FORMAT record_format;
   bool     dsp_2g_reset;
} am;
			
#if defined(__C2K_SPEECH_SUPPORT__)			
#if defined(__VOLTE_SUPPORT__)
#define IsWBLink(speech_codec) ((SP4G_CODEC_G722 == speech_codec ) || ((speech_codec >= 0x20) && (speech_codec <= 0x28))  || (SPH_CODEC_C2K_SO73WB == speech_codec))
#else
#define IsWBLink(speech_codec) (((speech_codec) >= 0x20) || (SPH_CODEC_C2K_SO73WB == (speech_codec)))
#endif
#else
#if defined(__VOLTE_SUPPORT__)
#define IsWBLink(speech_codec) ((SP4G_CODEC_G722 == speech_codec ) || ((speech_codec >= 0x20) && (speech_codec <= 0x28)))
#else
#define IsWBLink(speech_codec) ((speech_codec) >= 0x20)
#endif
#endif




/* --------------------------------------------------------------------------*/
void SP4G_Call_Close(void);
void SP4G_Call_Open(uint16 codec, uint32 is_4G_handover);
kal_uint32 SP4G_GetCodecMode(void);
bool is_EVS_codec(uint8 codec);
bool is_g_codec(uint8 codec);
int get_sp4g_fake_EVS_IO(void);

static void AM_ReloadDSPCoefficient( void );


static void AM_Enqueue( void (*code)(uint32, uint32), uint32 data, uint32 data2, bool isCritical )
{
   /* For 65nm process, MCU has to reload DSP coefficient at each wake-up */
   if (am.state == 0){      
      AM_ReloadDSPCoefficient();
    }

  code( data , data2 );
}



const signed short Sph_Mic1_IIR_In[20] =
{
-7815, 16002, 7900, -15800, 7900, -8033, 16219, 8192,-16384, 8192, /* UL SWB HP-IIR-137Hz (20ms task)*/
    0,     0, 8192,      0,    0,     0,     0, 8192,     0,    0 /* not used */
};
const signed short Sph_Mic2_IIR_In[20] =
{
-7972, 16162, 8000, -16000, 8000, -8095, 16285, 8192,-16384, 8192, /* UL SWB HP-IIR-75Hz (20ms task)*/
    0,     0, 8192,      0,    0,     0,     0, 8192,     0,    0 /*not used*/
};
const signed short Speech_All_Pass_IIR_Coeff[42] =
{ /* All pass filter */
		 0x14, 0x400,	  0,	 0, 	0,
			0,	   0,	  0,	 0, 	0,
			0,	   0,	  0,	 0, 	0,
			0,	   0,	  0,	 0, 	0,
			0,	   0,	  0,	 0, 	0,
			0,	   0,	  0,	 0, 	0,
			0,	   0,	  0,	 0, 	0,
			0,	   0,	  0,	 0, 	0,
			0,	   0
};
const int16 Speech_All_Pass_FIR_Coeff[45] =
   { /* All pass filter */
    32767,     0,     0,     0,     0,
        0,     0,     0,     0,     0,
        0,     0,     0,     0,     0,
        0,     0,     0,     0,     0,
        0,     0,     0,     0,     0,
        0,     0,     0,     0,     0,
        0,     0,     0,     0,     0,
        0,     0,     0,     0,     0,
        0,     0,     0,     0,     0
   };




const  uint16  DSP_PCM_IDLE_DELAY_TABLE[7][3] =
{
   { 0x20, 0x20 , 0x4B+(16<<10)+(2<<8)}, // for AMR codec
   { 0x20, 0x20 , 0x96+(16<<10)+(2<<8)}, // for speech codec except AMR
   { 0x0A, 0x0A , 0x4F+(16<<10)+(2<<8)}, // for PCM8K_Playback.....
   { 0x0A, 0x0A , 0x28+(16<<10)+(2<<8)}, // for PCM16K
   { 0x0A, 0x0A , 0x9F+(16<<10)+(2<<8)},  // for Keytone/Tone/
   { 0x0A, 0x0A , 0x96+(16<<10)+(2<<8)}, // for PCM8K_Playback/VoIP
   //{ 0x10, 0x100, 0x96+(16<<10)+(2<<8)}  // for 3G Speech
   { 27*8, 14*8, 0x20+(16<<10)+(2<<8)}  // for 3G Speech
};



/* Note: The speech pattern length for amr-wb can be calculated from
lenSpeechBitsAMR_WB in amr_table.h; therefore, remove them out.
Those for amr might be removed if vm.c does not handle amr any more. */
static const uint8 SpeechPatternLength[] = {
   (uint8)((260 + 15) / 16),           /*  FR       */
   (uint8)((112 + 15) / 16),           /*  HR       */
   (uint8)((244 + 15) / 16),           /* EFR       */
   (uint8)((244 + 15) / 16),           /* AMR 12.2K */
   (uint8)((204 + 15) / 16),           /* AMR 10.2K */
   (uint8)((159 + 15) / 16),           /* AMR 7.95K */
   (uint8)((148 + 15) / 16),           /* AMR 7.4K  */
   (uint8)((134 + 15) / 16),           /* AMR 6.7K  */
   (uint8)((118 + 15) / 16),           /* AMR 5.9K  */
   (uint8)((103 + 15) / 16),           /* AMR 5.15K */
   (uint8)(( 95 + 15) / 16),           /* AMR 4.75K */

   (uint8)((132 + 15) / 16),           /* AMR-WB 6.60  */
   (uint8)((177 + 15) / 16),           /* AMR-WB 8.85  */
   (uint8)((253 + 15) / 16),           /* AMR-WB 12.65 */
   (uint8)((285 + 15) / 16),           /* AMR-WB 14.25 */
   (uint8)((317 + 15) / 16),           /* AMR-WB 15.85 */
   (uint8)((365 + 15) / 16),           /* AMR-WB 18.25 */
   (uint8)((397 + 15) / 16),           /* AMR-WB 19.85 */
   (uint8)((461 + 15) / 16),           /* AMR-WB 23.05 */
   (uint8)((477 + 15) / 16),           /* AMR-WB 23.85 */

   (uint8)(1),           /*  QCELP8K (Not supported)*/ //return 1 to prevent vm codec length check
   (uint8)(17),          /*  QCELP13K  */
   (uint8)(11),          /*  EVRCA     */
   (uint8)(11),          /*  EVRCB     */
   
   (uint8)(9+2),                       /* EVS_AWB660   */
   (uint8)(12+2),                      /* EVS_AWB885   */
   (uint8)(16+2),                      /* EVS_AWB1265  */
   (uint8)(18+2),                      /* EVS_AWB1425  */
   (uint8)(20+2),                      /* EVS_AWB1585  */
   (uint8)(23+2),                      /* EVS_AWB1825  */
   (uint8)(25+2),                      /* EVS_AWB1985  */
   (uint8)(29+2),                      /* EVS_AWB2305  */
   (uint8)(30+2),                      /* EVS_AWB2385  */
   (uint8)(10+2),                      /* EVS_PRI590   */
   (uint8)(9+2),                       /* EVS_PRI720   */
   (uint8)(10+2),                      /* EVS_PRI800   */
   (uint8)(12+2),                      /* EVS_PRI960   */
   (uint8)(17+2),                      /* EVS_PRI1320  */
   (uint8)(21+2),                      /* EVS_PRI1640  */
   (uint8)(31+2),                      /* EVS_PRI2440  */
   (uint8)(40+2),                      /* EVS_PRI3200  */
   (uint8)(60+2),                      /* EVS_PRI4800  */
   (uint8)(80+2),                      /* EVS_PRI6400  */
   (uint8)(120+2),                     /* EVS_PRI9600  */
   (uint8)(160+2)                      /* EVS_PRI12800 */
};

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
#endif 

uint16 AM_GetSpeechPatternLength( uint8 speech_mode )
{
   if((speech_mode >= 11) && (speech_mode <= 31)) //EVS
   {
      speech_mode = speech_mode - 11 + 24;
   }
   else if( speech_mode >= 0x30) // c2k related 
      speech_mode = speech_mode - 0x30 + 0x14;
   else if( speech_mode >= 0x20 )
      speech_mode = speech_mode - 0x20 + 0x0B;
   if( speech_mode<(sizeof(SpeechPatternLength)/sizeof(SpeechPatternLength[0])))
      return (uint16)SpeechPatternLength[speech_mode];
   else
      return 1; //return 1 to prevent vm codec length check
}
//Need to add new pattern for MT6280

static const uint16 SpeechSilencePattern[][31] = {
   {  0x4820,0xD617,0x0284,0x2480,0x9249,0x8924,0x8002,0x4924,       /* FR       */
      0x2492,0x0289,0x2480,0x9249,0x8924,0x8002,0x4924,0x2492,
      0x0009                                                   },
   {  0x4E20,0x875E,0x5473,0x8482,0x00E9,0x0000,0x0000         },    /* HR       */
   {  0x7A10,0x092D,0xB55F,0x7C06,0x185C,0xDE06,0x4230,0x0103,       /* EFR      */
      0xA012,0x001A,0x0000,0x0000,0x0D6C,0x0000,0x0000,0x0000  },
   {  0x00e2,0x5dfc,0xf095,0xcd4e,0x24da,0x0e04,0xf0fb,0x4f2e,       /* AMR12.2  */
      0x4430,0x9fa8,0x0319,0x56c0,0xc144,0x0278,0x70ea,0x0004  },
   {  0xe00a,0xf2e7,0x516b,0x19a1,0xc10d,0x145a,0x4c96,0x25e0,       /* AMR10.2  */
      0x5ce6,0x17b9,0x0982,0x225d,0x00c4                       },
   {  0x033c,0xe5cd,0xd9fb,0x387f,0x420c,0x8c99,0x58d7,0x1156,       /* AMR7.95  */
      0x397f,0x1074                                            },
   {  0xe00a,0xf2e7,0x9ac5,0x4433,0x185b,0x3e05,0xdc64,0xc886,       /* AMR7.4   */
      0xcd2e,0x0000                                            },
   {  0xe00a,0xf2e7,0x7761,0x0486,0x0dd5,0xf47c,0x21b0,0xf547,       /* AMR6.7   */
      0x0002                                                   },
   {  0xe00a,0xf2e7,0xb196,0xa8ae,0xbcb7,0x6fb9,0x0193,0x002e  },    /* AMR5.9   */
   {  0x3c0a,0x7e51,0x652c,0x5e91,0xd023,0xea5a,0x005b         },    /* AMR5.15  */
   {  0x3c0a,0x3e51,0x6529,0x3a49,0x977f,0x3565                },    /* AMR4.75  */
   {  0x1480,0x02ee,0xd706,0x09f4,0x4e01,0x2ada,0x59ef,0x2a20,0x0001  },    /* AMR-WB 6.60  */
   {  0x1290,0x0460,0x78f1,0xae42,0x2330,0x98c8,0x0120,0x57f8,0xa4b5,0xa681,0x25a0,0x0000  },     /* AMR-WB 8.85  */
   {  0x1290,0x0460,0x78f1,0x4142,0xc702,0x3f49,0xd446,0x7295,0x55c0,0x1028,0x7159,0xe315,0x96cf,0x8328,0x06a7,0x1f2c },     /* AMR-WB 12.65  */
   {  0x1290,0x0460,0x78f1,0x1542,0x8839,0x8c07,0x462d,0x59f4,0x3069,0x55c3,0x6028,0xa539,0x1724,0x2ebb,0xa182,0x92da,0xd156,0x1e06 },     /* AMR-WB 14.25  */
   {  0x1290,0x0460,0x78f1,0x1542,0x00b8,0xc095,0x381e,0xf446,0x6959,0x6870,0x5f5c,0xe028,0xb886,0x2724,0xcbb3,0x820b,0xcaa0,0x5692,0x6053,0x1c05 },     /* AMR-WB 15.85  */
   {  0x1290,0x0460,0x78f1,0xff42,0x0604,0xd0c8,0x8460,0x63e0,0x7b44,0xce75,0x3c14,0xea27,0x285d,0xf790,0x13eb,0xec97,0x5f93,0x28bb,0x2648,0x3b81,0x2de6,0x1529,0x1529 },     /* AMR-WB 18.25  */
   {  0x1290,0x0460,0x78f1,0x3942,0xf104,0x2b51,0x40cb,0xd864,0xc463,0x75ce,0x5d7d,0x3c8f,0xfa23,0x285d,0xd690,0xfa27,0xc515,0x93ea,0xbb5f,0x1e28,0xc5ea,0xfa2f,0x2c8c,0x45d8,0x1529 },     /* AMR-WB 19.85  */
   {  0x1290,0x0460,0x78f1,0x1742,0x2098,0xaa41,0x4330,0xb286,0xd023,0xc463,0x5ce6,0x6e55,0xe3d7,0x14ef,0xb10f,0x2017,0xf1e0,0xf68f,0x8735,0x1c66,0x5b22,0x3765,0xc86c,0xdb41,0x84d3,0x522a,0x8696,0xc4b6,0x1c2a },     /* AMR-WB 23.05  */
   {  0x1290,0x0460,0x78f1,0x1742,0x2098,0xaa41,0x4330,0xb286,0xd023,0x4f63,0xce6c,0x0555,0x5926,0x4c7e,0x1af1,0xc5df,0xe01e,0x2daf,0xdc74,0x56be,0xe4c0,0xf38a,0xa07a,0x5585,0x41fb,0x784d,0x932d,0x4798,0x914b,0x0f52 }     /* AMR-WB 27.85  */   
};


#if defined(DVFS_ENABLE)
void AM_DVFS_Setting(uint32 codec)
{
	 L1Audio_Msg_AM_DVFS_Setting(codec);
	 if(SP4G_CODEC_NONE == codec){
	 	  DVFS_md_MIPS_setScenario(DVFS_MD_MIPS_USER_SPEECH, DVFS_MD_MIPS_SCENARIO_DEFAULT );	    
	 } else if( 0 == codec){
      DVFS_md_MIPS_setScenario(DVFS_MD_MIPS_USER_SPEECH, DVFS_MD_MIPS_SCENARIO_FR );	
   } else if( 1 == codec){
   	  DVFS_md_MIPS_setScenario(DVFS_MD_MIPS_USER_SPEECH, DVFS_MD_MIPS_SCENARIO_HR );	
   } else if( 2 == codec){
   	  DVFS_md_MIPS_setScenario(DVFS_MD_MIPS_USER_SPEECH, DVFS_MD_MIPS_SCENARIO_EFR );	
   } else if( 0x3 <= codec && codec <= 0xA){
   	  DVFS_md_MIPS_setScenario(DVFS_MD_MIPS_USER_SPEECH, DVFS_MD_MIPS_SCENARIO_AMR );	
   } else if( 0x20 <= codec && codec <= 0x28){
   	  DVFS_md_MIPS_setScenario(DVFS_MD_MIPS_USER_SPEECH, DVFS_MD_MIPS_SCENARIO_AWB );	
   } else if( 0x32 == codec){ //SAL_C2K_COD_EVRCA
   	  DVFS_md_MIPS_setScenario(DVFS_MD_MIPS_USER_SPEECH, DVFS_MD_MIPS_SCENARIO_EVRCA );	
   } else if( 0x33 == codec){//SAL_C2K_COD_EVRCB
   	  DVFS_md_MIPS_setScenario(DVFS_MD_MIPS_USER_SPEECH, DVFS_MD_MIPS_SCENARIO_EVRCB );	
   } else if( (SP4G_CODEC_EVS_08K_005_9 <= codec) && (SP4G_CODEC_EVS_08K_128_0 >= codec) ){
   	  DVFS_md_MIPS_setScenario(DVFS_MD_MIPS_USER_SPEECH, DVFS_MD_MIPS_SCENARIO_EVS_NB );
   }else if( ((SP4G_CODEC_EVS_AWB_06_60 <= codec) && (SP4G_CODEC_EVS_AWB_23_85 >= codec)) || 
   	         ((SP4G_CODEC_EVS_16K_005_9 <= codec) && (SP4G_CODEC_EVS_16K_128_0 >= codec))){
      DVFS_md_MIPS_setScenario(DVFS_MD_MIPS_USER_SPEECH, DVFS_MD_MIPS_SCENARIO_EVS_WB );
   }else if( (SP4G_CODEC_EVS_32K_005_9 <= codec) && (SP4G_CODEC_EVS_32K_128_0 >= codec) ){
      DVFS_md_MIPS_setScenario(DVFS_MD_MIPS_USER_SPEECH, DVFS_MD_MIPS_SCENARIO_EVS_SWB );
   }else if( (SP4G_CODEC_EVS_48K_005_9 <= codec) && (SP4G_CODEC_EVS_48K_128_0 >= codec) ){
      DVFS_md_MIPS_setScenario(DVFS_MD_MIPS_USER_SPEECH, DVFS_MD_MIPS_SCENARIO_EVS_FB );
   }
}   
#endif 

void AM_Reset_Enh(uint32 codec)
{
	kal_bool preIsSWB;
	kal_bool afterIsSWB;
	
         Set_Reset_Enh_Status(false);
	if( (SP4G_CODEC_EVS_32K_005_9 <= codec) && (SP4G_CODEC_EVS_32K_128_0 >= codec) ){
		afterIsSWB = true;
	}else{
		afterIsSWB = false;
	}

	if( (SP4G_CODEC_EVS_32K_005_9 <= am.pre_speech_mode) && (SP4G_CODEC_EVS_32K_128_0 >=  am.pre_speech_mode) ){
		preIsSWB = true;
	}else{
		preIsSWB = false;
	}
    kal_prompt_trace(MOD_L1SP, "AM_Reset_Enh,preIsSWB=%x,afterIsSWB=%x,codec=%x,am.pre_speech_mode=%x", preIsSWB,afterIsSWB,codec,am.pre_speech_mode);
	if(preIsSWB != afterIsSWB ){
		//SetSpeechEnhancement(false);
		//SetSpeechEnhancement(true);
		Set_Reset_Enh_Status(true);
	}	
	am.pre_speech_mode = codec;
}

void  Set_Reset_Enh_Status(uint8 status)
{
	am.is_reset_enh = status;
}


uint8 Get_Reset_Enh_Status(void)
{
	return am.is_reset_enh;
}

void AM_FillSilencePattern( volatile uint16 *addr, uint16 info, uint16 speech_mode )
{
#ifndef  L1D_TEST
   const uint16 *pat_info;
   uint32 I, len;
   if( speech_mode >= 0x20 )
      speech_mode = speech_mode - 0x20 + 0x0B;

   if( speech_mode >= (sizeof(SpeechPatternLength)/sizeof(SpeechPatternLength[0])) )
      return;

   pat_info = SpeechSilencePattern[speech_mode];
   len = (uint16)SpeechPatternLength[speech_mode];

   *addr++ = info;
   for( I = 0; I < len; I++ )
      *addr++ = *pat_info++;

   Data_Sync_Barrier();
#endif
}

void AM_FillSilencePatternInBuffer( uint16 *buffer, uint16 speech_mode )
{
#ifndef  L1D_TEST
   const uint16 *pat_info;
   uint32 I, len;
   if( speech_mode >= 0x20 )
      speech_mode = speech_mode - 0x20 + 0x0B;

   if( speech_mode >= (sizeof(SpeechPatternLength)/sizeof(SpeechPatternLength[0])) )
      return;

   pat_info = SpeechSilencePattern[speech_mode];
   len = (uint16)SpeechPatternLength[speech_mode];

   for( I = 0; I < len; I++ )
      *buffer++ = *pat_info++;
#endif
}

/* -------------------------------------------------------------------------- */
extern uint32 L1I_GetTimeStamp( void );

void AM_SetDSP2GReset(bool v)
{
	 am.dsp_2g_reset = v;
}

void AM_Set2GCodecInfo(uint16 speech_mode, int8 sub_channel)//
{
    am.ul_speech_mode = speech_mode;
    am.ul_sub_channel = sub_channel;
}

void AM_Get2GCodecInfo(uint16 *speech_mode, int8 *sub_channel)//
{
    *speech_mode = am.ul_speech_mode;
    *sub_channel = am.ul_sub_channel;
}

void AM_FlushQFunction( void )
{
#ifndef  L1D_TEST
   while( !RB_EMPTY(am.qfunc) )
      kal_sleep_task( AUD_1TICK(1) );
#endif
}

/* ========================================================================= */
/*   Interface Functions                                                     */
/* ========================================================================= */

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
#endif 

static void AM_WriteSpeechCompensationFilter( const int16 in_coeff[90], const int16 out_coeff[90] )
{
   int i;
   volatile uint16* dsp_ptr;

   kal_trace( TRACE_FUNC,SPE_DSP_CHECK_NB_FIR_PAR,in_coeff[0],in_coeff[1],out_coeff[0],out_coeff[1]);
   /* Write audio FIR filter coeficients */
   dsp_ptr = SAL_BKF_GetFltCoefAddr_NB_UL(); 

   for( i=0; i<SAL_FLTCOEFLEN_BKF_NB; i++ )
#if 1 // ndef __HQA_AUDIO__
      *dsp_ptr ++ = *in_coeff++;
#else
/* under construction !*/
#endif

   dsp_ptr = SAL_BKF_GetFltCoefAddr_NB_DL(); 

   for( i=0; i<SAL_FLTCOEFLEN_BKF_NB; i++ )
#if 1 // ndef  __HQA_AUDIO__
      *dsp_ptr ++ = *out_coeff++;
#else
/* under construction !*/
#endif
   
   
   Data_Sync_Barrier();
}
static void AM_WriteSpeechIIRCompensationFilter( const int16 in_coeff[42], const int16 out_coeff[42],const int16 Mic1_coeff[20],const int16 Mic2_coeff[20] )
{
   int i;
   volatile uint16* dsp_ptr;
   /* Write audio IIR filter coeficients */
   dsp_ptr = SAL_IIR_Coef_GetBuf(SAL_ENH_IIR_COEF_UL_NB);

   for( i=0; i<SAL_FLTCOEFLEN_ENH_IIR; i++ )
   {
		*dsp_ptr ++ = *in_coeff++;
   }

   
   dsp_ptr = SAL_IIR_Coef_GetBuf(SAL_ENH_IIR_COEF_DL_NB);
   for( i=0; i<SAL_FLTCOEFLEN_ENH_IIR; i++ )
   {
		*dsp_ptr ++ = *out_coeff++;
   } 

   dsp_ptr = SAL_IIR_Coef_GetBuf(SAL_MIC1_IIR_COEF_UL_NB);
   for( i=0; i<SAL_FLTCOEFLEN_MIC_IIR; i++ )
   {
		*dsp_ptr ++ = *Mic1_coeff++;
   } 

   dsp_ptr = SAL_IIR_Coef_GetBuf(SAL_MIC2_IIR_COEF_UL_NB);
   for( i=0; i<SAL_FLTCOEFLEN_MIC_IIR; i++ )
   {
		*dsp_ptr ++ = *Mic2_coeff++;
   }
   Data_Sync_Barrier();

  
}
void AM_WriteFirCoeffs( const int16 in_coeff[90], const int16 out_coeff[90] )
{


   memcpy(am.in_coeff_tmp, in_coeff, 90*sizeof(int16));
   memcpy(am.out_coeff_tmp, out_coeff, 90*sizeof(int16));


   am.isFirCoeffSet= true;

   /* Write audio FIR filter coeficients */
   AM_WriteSpeechCompensationFilter(in_coeff, out_coeff);

 

}

void AM_WriteIirCoeffs( const int16 in_coeff[42], const int16 out_coeff[42],const int16 Mic1_coeff[20],const int16 Mic2_coeff[20] )
{
   memcpy(am.IIR_in_coeff_tmp, in_coeff, 42*sizeof(int16));
   memcpy(am.IIR_out_coeff_tmp, out_coeff, 42*sizeof(int16));
   memcpy(am.MIC1_IIR_coeff_tmp, Mic1_coeff, 20*sizeof(int16));
   memcpy(am.MIC2_IIR_coeff_tmp, Mic2_coeff, 20*sizeof(int16));
   am.isIirCoeffSet= true;
   /* Write audio IIR filter coeficients */
   AM_WriteSpeechIIRCompensationFilter(in_coeff, out_coeff,Mic1_coeff,Mic2_coeff);

  

}
static void AM_WriteWbSpeechCompensationFilter( const int16 wb_in_coeff[90], const int16 wb_out_coeff[90] )
{
		int i;
		volatile uint16* dsp_ptr;
		kal_trace( TRACE_FUNC,SPE_DSP_CHECK_WB_FIR_PAR,wb_in_coeff[0],wb_in_coeff[1],wb_out_coeff[0],wb_out_coeff[1]);
	   /* Write audio FIR filter coeficients */
	   dsp_ptr = SAL_BKF_GetFltCoefAddr_WB_UL(); 

	   for( i=0; i<SAL_FLTCOEFLEN_BKF_WB; i++ ){
#if 1 // ndef __HQA_AUDIO__
	      *dsp_ptr ++ = *wb_in_coeff++;
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
	   }
	   dsp_ptr = SAL_BKF_GetFltCoefAddr_WB_DL(); 

	   for( i=0; i<SAL_FLTCOEFLEN_BKF_WB; i++ ){
#if 1 // ndef  __HQA_AUDIO__
	      *dsp_ptr ++ = *wb_out_coeff++;
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
	   	}

   Data_Sync_Barrier();
}
static void AM_WriteWbSpeechIIRCompensationFilter( const int16 wb_in_coeff[42], const int16 wb_out_coeff[42],const int16 wb_Mic1_coeff[20],const int16 wb_Mic2_coeff[20] )
{
	int i;
	volatile uint16* dsp_ptr;
   dsp_ptr = SAL_IIR_Coef_GetBuf(SAL_ENH_IIR_COEF_UL_WB);
   for( i=0; i<SAL_FLTCOEFLEN_ENH_IIR; i++ )
   {
		*dsp_ptr ++ = *wb_in_coeff++;
   }
   dsp_ptr = SAL_IIR_Coef_GetBuf(SAL_ENH_IIR_COEF_DL_WB);
   for( i=0; i<SAL_FLTCOEFLEN_ENH_IIR; i++ )
   {
		*dsp_ptr ++ = *wb_out_coeff++;
   } 
   dsp_ptr = SAL_IIR_Coef_GetBuf(SAL_MIC1_IIR_COEF_UL_WB);
   for( i=0; i<SAL_FLTCOEFLEN_MIC_IIR; i++ )
   {
		*dsp_ptr ++ = *wb_Mic1_coeff++;
   } 

   dsp_ptr = SAL_IIR_Coef_GetBuf(SAL_MIC2_IIR_COEF_UL_WB);
   for( i=0; i<SAL_FLTCOEFLEN_MIC_IIR; i++ )
   {
		*dsp_ptr ++ = *wb_Mic2_coeff++;
   }
   Data_Sync_Barrier();	
		
	   

   
}
static void AM_WriteSWbSpeechCompensationFilter( const int16 swb_in_coeff[90], const int16 swb_out_coeff[90] )
{
		int i;
		volatile uint16* dsp_ptr;
		kal_trace( TRACE_FUNC,SPE_DSP_CHECK_SWB_FIR_PAR,swb_in_coeff[0],swb_in_coeff[1],swb_out_coeff[0],swb_out_coeff[1]);
	   /* Write audio FIR filter coeficients */
	   dsp_ptr = SAL_BKF_GetFltCoefAddr_SWB_UL(); 

	   for( i=0; i<SAL_FLTCOEFLEN_BKF_SWB; i++ ){
#if 1 // ndef  __HQA_AUDIO__
	      *dsp_ptr ++ = *swb_in_coeff++;
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
	   }
	   dsp_ptr = SAL_BKF_GetFltCoefAddr_SWB_DL(); 

	   for( i=0; i<SAL_FLTCOEFLEN_BKF_SWB; i++ ){
#if 1 // ndef  __HQA_AUDIO__
	      *dsp_ptr ++ = *swb_out_coeff++;
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}
   Data_Sync_Barrier();
}
static void AM_WriteSWbSpeechIIRCompensationFilter( const int16 swb_in_coeff[42], const int16 swb_out_coeff[42],const int16 swb_Mic1_coeff[20],const int16 swb_Mic2_coeff[20] )
{
   volatile uint16* dsp_ptr;
   int i;
   dsp_ptr = SAL_IIR_Coef_GetBuf(SAL_ENH_IIR_COEF_UL_SWB);
   for( i=0; i<SAL_FLTCOEFLEN_ENH_IIR; i++ )
   {
		*dsp_ptr ++ = *swb_in_coeff++;
   }

   dsp_ptr = SAL_IIR_Coef_GetBuf(SAL_ENH_IIR_COEF_DL_SWB);
   for( i=0; i<SAL_FLTCOEFLEN_ENH_IIR; i++ )
   {
		*dsp_ptr ++ = *swb_out_coeff++;
   } 

   dsp_ptr = SAL_IIR_Coef_GetBuf(SAL_MIC1_IIR_COEF_UL_SWB);
   for( i=0; i<SAL_FLTCOEFLEN_MIC_IIR; i++ )
   {
		*dsp_ptr ++ = *swb_Mic1_coeff++;
   } 

   dsp_ptr = SAL_IIR_Coef_GetBuf(SAL_MIC2_IIR_COEF_UL_SWB);
   for( i=0; i<SAL_FLTCOEFLEN_MIC_IIR; i++ )
   {
		*dsp_ptr ++ = *swb_Mic2_coeff++;
   }
   MO_Sync();//Data_Sync_Barrier();
	
}
void AM_WriteWbFirCoeffs( const int16 wb_in_coeff[90], const int16 wb_out_coeff[90] )
{
	

	memcpy(am.wb_in_coeff_tmp, wb_in_coeff, 90*sizeof(int16));
    memcpy(am.wb_out_coeff_tmp, wb_out_coeff, 90*sizeof(int16));


	//write FIR coefiicient when some application is running. 
	// Otherwise, the coefficient will be reloaed under AM_Enqueue()
	if(am.state !=0) {
		AM_WriteWbSpeechCompensationFilter(am.wb_in_coeff_tmp, am.wb_out_coeff_tmp);
	}
}
void AM_WriteWbIirCoeffs( const int16 wb_in_coeff[42], const int16 wb_out_coeff[42],const int16 wb_Mic1_coeff[20],const int16 wb_Mic2_coeff[20] )
{
// #if __RELOAD_DSP_COEFF__	
   memcpy(am.wb_IIR_in_coeff_tmp, wb_in_coeff, 42*sizeof(int16));
   memcpy(am.wb_IIR_out_coeff_tmp, wb_out_coeff, 42*sizeof(int16));
   memcpy(am.wb_MIC1_IIR_coeff_tmp, wb_Mic1_coeff, 20*sizeof(int16));
   memcpy(am.wb_MIC2_IIR_coeff_tmp, wb_Mic2_coeff, 20*sizeof(int16));
// #endif
	if(am.state !=0) {
		AM_WriteWbSpeechIIRCompensationFilter(am.wb_IIR_in_coeff_tmp, am.wb_IIR_out_coeff_tmp,am.wb_MIC1_IIR_coeff_tmp,am.wb_MIC2_IIR_coeff_tmp);
	}
}
void AM_WriteSWbFirCoeffs( const int16 swb_in_coeff[90], const int16 swb_out_coeff[90] )
{
	

	memcpy(am.swb_in_coeff_tmp, swb_in_coeff, 90*sizeof(int16));
    memcpy(am.swb_out_coeff_tmp, swb_out_coeff, 90*sizeof(int16));


	//write FIR coefiicient when some application is running. 
	// Otherwise, the coefficient will be reloaed under AM_Enqueue()
	if(am.state !=0) {
		AM_WriteSWbSpeechCompensationFilter(am.swb_in_coeff_tmp, am.swb_out_coeff_tmp);
	}
}
void AM_WriteSWbIirCoeffs( const int16 swb_in_coeff[42], const int16 swb_out_coeff[42],const int16 swb_Mic1_coeff[20],const int16 swb_Mic2_coeff[20] )
{
	
// #if __RELOAD_DSP_COEFF__	
    memcpy(am.swb_IIR_in_coeff_tmp, swb_in_coeff, 42*sizeof(int16));
    memcpy(am.swb_IIR_out_coeff_tmp, swb_out_coeff, 42*sizeof(int16));
    memcpy(am.swb_MIC1_IIR_coeff_tmp, swb_Mic1_coeff, 20*sizeof(int16));
    memcpy(am.swb_MIC2_IIR_coeff_tmp, swb_Mic2_coeff, 20*sizeof(int16));
// #endif

	//writeIIR coefiicient when some application is running. 
	// Otherwise, the coefficient will be reloaed under AM_Enqueue()
	if(am.state !=0) {
		AM_WriteSWbSpeechIIRCompensationFilter(am.swb_IIR_in_coeff_tmp, am.swb_IIR_out_coeff_tmp,am.swb_MIC1_IIR_coeff_tmp,am.swb_MIC2_IIR_coeff_tmp);
	}
}

// SRC coefiicient using in DSP
const signed short Audio_Flt_Coeff[82] =
{
     0,    96,   162,   -92,  -488,  -302,   408,   372,  -660,  -780,
   782,  1272,  -958, -2094,  1088,  3458, -1200, -6426,  1266, 20318,
 30834, 20318,  1266, -6426, -1200,  3458,  1088, -2094,  -958,  1272,
   782,  -780,  -660,   372,   408,  -302,  -488,   -92,   162,    96,
     0,  /* SRC Up-Sampling */
     0,     0,   -36,  -175,  -262,   -51,   277,   146,  -376,  -317,
   489,   595,  -597, -1034,   689,  1777,  -744, -3351,   727, 10500,
 15852, 10500,   727, -3351,  -744,  1777,   689, -1034,  -597,   595,
   489,  -317,  -376,   146,   277,   -51,  -262,  -175,   -36,     0,
     0  /* SRC Down-Sampling */
};

const signed short Sph_SRCPlus_Flt_Coeff[148] =
{
 50, 163, 186, 27, -141, -49, 157, 87, -185, -143, 211,
218, -233, -313, 243, 431, -239, -573, 214, 743, -160, -945,
68, 1188, 76,-1486, -297, 1867, 639,-2392,-1199, 3213, 2245,
-4839,-4904,10502,28344,28344,10502,-4904,-4839, 2245, 3213,-1199,
-2392, 639, 1867, -297,-1486, 76, 1188, 68, -945, -160, 743,
214, -573, -239, 431, 243, -313, -233, 218, 211, -143, -185,
87, 157, -49, -141, 27, 186, 163, 50, /* SRC Up-Sampling */
 25, 82, 93, 14, -71, -25, 79, 44, -93, -72, 106,
 109, -117, -157, 122, 216, -120, -287, 107, 372, -80, -473,
 34, 594, 38, -743, -149, 934, 320, -1196, -600, 1607, 1123,
 -2420, -2452, 5251, 14172, 14172, 5251, -2452, -2420, 1123, 1607, -600,
 -1196, 320, 934, -149, -743, 38, 594, 34, -473, -80, 372,
 107, -287, -120, 216, 122, -157, -117, 109, 106, -72, -93, 
 44, 79, -25, -71, 14, 93, 82, 25    /* SRC Down-Sampling */
 
/*  -12,    16,    48,   -98,  -312,  -234,   100,   180,  -130,  -238,   136,   312,  -134,  -404,   122,   512,   -94,  -640,
   46,   792,    28,  -970,  -134,  1188,   286, -1458,  -510,  1818,   852, -2336, -1464,  3052,  2446, -4652, -5070, 10232,
28264, 28264, 10232, -5070, -4652,  2446,  3052, -1464, -2336,   852,  1818,  -510, -1458,   286,  1188,  -134,  -970,    28,
   92,    46,  -640,   -94,   512,   122,  -404,  -134,   312,   136,  -238,  -130,   180,   100,  -234,  -312,   -98,    48,
   16,   -12,     0   // SRC Up-Sampling */
};

const signed short Sph_SRCPlus_Flt_SWB_Coeff[296] =
{
25, 82, 130, 185, 199, 166, 81, -27, -117, -146, -99, 7, 119, 177, 141, 20, -128, -222, -202, -64, 
128, 272, 279, 127, -117, -325, -372, -212, 89, 376, 482, 324, -38, -421, -607, -466, -42, 456, 748, 645,
158, -475, -907, -867, -323, 471, 1086, 1147, 552, -435, -1291, -1506, -873, 351, 1535, 1986, 1339, -191, -1845, -2678,
-2063, -106, 2295, 3811, 3351, 711, -3116, -6193, -6400, -2401, 5617, 15802, 25197, 30823, 30823, 25197, 15802, 5617, -2401, -6400,
-6193, -3116, 711, 3351, 3811, 2295, -106, -2063, -2678, -1845, -191, 1339, 1986, 1535, 351, -873, -1506, -1291, -435, 552, 
1147, 1086, 471, -323, -867, -907, -475, 158, 645, 748, 456, -42, -466, -607, -421, -38, 324, 482, 376, 89, 
-212, -372, -325, -117, 127, 279, 272, 128, -64, -202, -222, -128, 20, 141, 177, 119, 7, -99, -146, -117, 
-27, 81, 166, 199, 185, 130, 82, 25, /* SRC Up-Sampling */
6, 21, 33, 46, 50, 42, 20, -7, -29, -37, -25, 2, 30, 44, 35, 5, -32, -56, -51, -16, 
32, 68, 70, 32, -29, -81, -93, -53, 22, 94, 121, 81, -10, -105, -152, -117, -11, 114, 187, 161, 
40, -119, -227, -217, -81, 118, 272, 287, 138, -109, -323, -377, -218, 88, 384, 497, 335, -48, -461, -670, 
-516, -27, 574, 953, 838, 178, -779, -1548, -1600, -600, 1404, 3951, 6299, 7706, 7706, 6299, 3951, 1404, -600, -1600, 
-1548, -779, 178, 838, 953, 574, -27, -516, -670, -461, -48, 335, 497, 384, 88, -218, -377, -323, -109, 138, 
287, 272, 118, -81, -217, -227, -119, 40, 161, 187, 114, -11, -117, -152, -105, -10, 81, 121, 94, 22, 
-53, -93, -81, -29, 32, 70, 68, 32, -16, -51, -56, -32, 5, 35, 44, 30, 2, -25, -37, -29, 
-7, 20, 42, 50, 46, 33, 21, 6        /* SRC Down-Sampling */
};

const signed short Sph_SRC_IIR_Flt_Coeff[12] =
{
29909, 35641, 17819, 28766, 5421, 21716, 24199, 32394, 11027, 24904, 10224, 32768
};

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
#endif 

signed short Sph_Notch_Filter_Param[SAL_PARAMETERLEN_NOTCH] = {
	-7708, 15853, 7980, -15929, 7980, 
	-7788, 15937, 8180, -16330, 8180,
	-7948, 16103, 8190, -16346, 8190
};

void AM_SetNotchFilterParam(int16 *param)
{
	memcpy(Sph_Notch_Filter_Param, param, SAL_PARAMETERLEN_NOTCH*sizeof(int16));
}

/**
	This function should used when DSP is turn on
*/
void AM_DSP_WriteNotchFilterParam( void )
{
	int I;
	volatile uint16* toPtr = SAL_Notch_GetFltCoefAddr();	
	int16 *fromPtr = Sph_Notch_Filter_Param;
	
	for( I = SAL_PARAMETERLEN_NOTCH; --I >= 0 ; )
      *toPtr++ = *fromPtr++;

	Data_Sync_Barrier();
}



/* For 65nm process, MCU has to reload DSP coefficient at each wake-up */
static void AM_ReloadDSPCoefficient( void )
{
    // AM_WriteSidetoneFIR(); // 93 not dsp sidetone so remove it

   // if(!am.toneLoopbackRec) lagency 
      AM_WriteSpeechCompensationFilter(am.in_coeff_tmp, am.out_coeff_tmp);
   AM_WriteSpeechIIRCompensationFilter(am.IIR_in_coeff_tmp, am.IIR_out_coeff_tmp,am.MIC1_IIR_coeff_tmp,am.MIC2_IIR_coeff_tmp);
	AM_WriteWbSpeechCompensationFilter(am.wb_in_coeff_tmp, am.wb_out_coeff_tmp);
   AM_WriteWbSpeechIIRCompensationFilter(am.wb_IIR_in_coeff_tmp, am.wb_IIR_out_coeff_tmp,am.wb_MIC1_IIR_coeff_tmp,am.wb_MIC2_IIR_coeff_tmp);
	AM_WriteSWbSpeechCompensationFilter(am.swb_in_coeff_tmp, am.swb_out_coeff_tmp);
   AM_WriteWbSpeechIIRCompensationFilter(am.swb_IIR_in_coeff_tmp, am.swb_IIR_out_coeff_tmp,am.swb_MIC1_IIR_coeff_tmp,am.swb_MIC2_IIR_coeff_tmp);

    // AM_WriteAntiAliasFilter();
    // L1SP_Reload_MagiClarity_Para();

    if ( !(am.state & AM_STATE_SPEECH) )
        L1SP_Reload_SPE_Para();
}


/* ========================================================================= */
/*   internal function Functions                                                     */
/* ========================================================================= */

/**
	This function should call "after AFE_Turnoff8K" and "before AFE_TurnOn8K".
	No user, so phase it out. The AFE_SetVoice8KMode is set directly by AP 
*/

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
// static void AM_DSP_VMRecordOff( uint32 data , uint32 extraInfo);

extern kal_uint32 SP3G_GetCodecMode(void);
#if defined(__C2K_SPEECH_SUPPORT__)
void AM_DSP_TurnOnC2KSDSP(int codec, uint32 extraInfo );
void AM_TurnOffC2KSDSP(void);
#endif
static void AM_DSP_SpeechOn( uint32 rat_mode, uint32 extraInfo )
{
   ASSERT_REBOOT( !(am.state & AM_CONFLICT_STATE) );
   L1Audio_Msg_AM_Switch( AM_Switch_Name(5), L1AUDIO_Str_onoff(1) );

	AFE_TurnOn8K();//SAL user need to handle this for DSP Speech

   if(rat_mode == RAT_2G_MODE)
   {
#if defined(__VOLTE_SUPPORT__)      
      am.sp4g_flag = false;
#endif        	
      am.sp3g_flag = false;
   	  if(L1SP_TCH_State()){ 	
         AM_Get2GCodecInfo(&am.speech_mode, &am.sub_channel);   	
      }else{
         am.speech_mode = 0;
         am.sub_channel = 0;
      }
#if defined(DVFS_ENABLE)
      AM_DVFS_Setting(am.speech_mode); 
#endif          
#if defined(__SMART_PHONE_MODEM__)      
      if(spc_isAcLoopback()){
         if(L1SP_TCH_State() == KAL_FALSE) {
#if defined(DVFS_ENABLE)
            AM_DVFS_Setting(0x3);
#endif
            cc_Standby_Call_Open(0x3);
         }
         else {
            cc_2G_Call_Open(0, 0, am.sub_channel);
         }
      }
      else
#endif // __SMART_PHONE_MODEM__
      {
         if(L1SP_TCH_State() == KAL_FALSE) {
#if defined(DVFS_ENABLE)
            AM_DVFS_Setting(0x3);
#endif
            cc_Standby_Call_Open(0x3);
         }
         else {
            cc_2G_Call_Open(am.speech_mode, am.speech_mode, am.sub_channel);
         }
      }

   }
      
#if defined( __UMTS_RAT__ )
   else if(rat_mode == RAT_3G_MODE
#ifdef __VIDEO_CALL_SUPPORT__
       || rat_mode == RAT_3G324M_MODE
#endif
   ){
   	kal_uint16 delayR, delayW;
    kal_uint32 u32CurTime64us;
		
		am.speech_mode = SP3G_GetCodecMode();
      am.sp3g_flag = true;
#if defined(__VOLTE_SUPPORT__)            
      am.sp4g_flag = false;
#endif
		// only use Bit[0] to inidicate the resync require
		if((extraInfo&1)!=0) {
			
			SP3G_GetSyncDelayRW( &delayR, &delayW, &u32CurTime64us);
		} else {
			u32CurTime64us = fma_get_glb_ts();
      	delayR = DSP_PCM_IDLE_DELAY_TABLE[6][0];
			delayW = DSP_PCM_IDLE_DELAY_TABLE[6][1];
		}
#if defined(DVFS_ENABLE)
    AM_DVFS_Setting(am.speech_mode); 
#endif         
     	   
		cc_3G_Call_Open(am.speech_mode, am.speech_mode, SP3G_IsDTXOn(), delayR, delayW, DSP_PCM_IDLE_DELAY_TABLE[6][2], u32CurTime64us);
   }
#endif
#if defined(__VOLTE_SUPPORT__)
   else if(rat_mode == RAT_4G_MODE){
      am.speech_mode = SP4G_GetCodecMode();      
      am.sp3g_flag = false;           
      am.sp4g_flag = true;
      //get InitCodec
      //SAL_4G_Call_Open(am.speech_mode);
#if defined(DVFS_ENABLE)
      AM_DVFS_Setting(am.speech_mode); 
#endif   
      SP4G_Call_Open(am.speech_mode, 0);
   }
#endif
#if defined(__C2K_SPEECH_SUPPORT__)
   else if(rat_mode == RAT_C2K_MODE){
      am.sp3g_flag = false;     
#if defined(__VOLTE_SUPPORT__)
      am.sp4g_flag = false;   
#endif 
      am.spc2k_flag = true;        
#if defined(DVFS_ENABLE)
      AM_DVFS_Setting(am.speech_mode); 
#endif 
      AM_DSP_TurnOnC2KSDSP(L1SP_GetC2KSO_Codec(), 0);
   }
#endif
   am.state |= AM_STATE_SPEECH;
   am.pre_speech_mode = am.speech_mode;

   l1sp_NetworkStatusNotification(); 
   // l1sp_CodecStatusNotification(am.speech_mode);      
}

uint32 AM_GetNetworkRate()
{
    switch(L1SP_GetState()){
    case L1SP_STATE_2G_SPEECH_ON:
    	 return RAT_2G_MODE; 
#if defined( __UMTS_RAT__ )    	 
    case L1SP_STATE_3G_SPEECH_ON:
    case L1SP_STATE_3G_SPEECH_CLOSING:
    	 return RAT_3G_MODE;		   
#ifdef __VIDEO_CALL_SUPPORT__    	 
    case L1SP_STATE_3G324M_SPEECH_ON:    	  	 
    	 return RAT_3G324M_MODE;
#endif    	 
#endif    	 
#if defined(__VOLTE_SUPPORT__)      	 
    case L1SP_STATE_4G_SPEECH_ON:
    case L1SP_STATE_4G_SPEECH_CLOSING:
    	 return RAT_4G_MODE;
#endif    	 
#if defined(__C2K_SPEECH_SUPPORT__)
    case L1SP_STATE_C2K_SPEECH_ON:
    	 return RAT_C2K_MODE;
#endif    	 
    default:	
       return RAT_NONE_MODE;
    }
}

/**
	@rat_mode: indicat the 2g/3g call status
	@extraInfo: bit[0]: need to resync or not
*/
void AM_SpeechOn(uint32 rat_mode, uint32 extraInfo)
{

   L1Audio_Msg_AM_Speech(1);   
   AM_Enqueue( AM_DSP_SpeechOn, rat_mode, extraInfo, (rat_mode == RAT_2G_MODE) && L1SP_TCH_State() );

   if(rat_mode == RAT_2G_MODE)
      AM_FlushQFunction();
}


static void AM_DSP_SpeechOff( uint32 data , uint32 extraInfo)
{
   (void)data;

   L1Audio_Msg_AM_Switch( AM_Switch_Name(5), L1AUDIO_Str_onoff(0) );
   // am.speech_off_delay = 10;
   //fix BIANCO
   //DP_KT_ATT = 0x0; // avoid SD buffer repeating if tone/keytone continues
   
   Data_Sync_Barrier();
//   cc_set_VBI_for_FSM(1);   
   /*
   if( am.speech_state & SP_STATE_VMR )            // call drop while conversation recording 
      AM_DSP_VMRecordOff( 0 , 0 );
	*/

   am.state &= ~AM_STATE_SPEECH;	 
   
#if defined(__VOLTE_SUPPORT__)
   if(am.sp4g_flag){
      SP4G_Call_Close();
      am.sp4g_flag = false;
   }else
#endif
#if defined( __UMTS_RAT__ )
   if( am.sp3g_flag ){
   	  cc_3G_Call_Close(true);
    
      am.sp3g_flag = false;
   }
   else
#endif
#if defined(__C2K_SPEECH_SUPPORT__)
   if( am.spc2k_flag ){
      
      AM_TurnOffC2KSDSP();
      
      am.spc2k_flag = false;
   } else
#endif   	
   cc_2G_Call_Close(true );
   //am.speech_mode = SAL_C2K_COD_MODE_UNDEF; 
	if( (am.state == 0)  || ((data&1)!=0)) // ((am.state & ~AM_STATE_AUDIO) == 0) || ((data&1)!=0)) // no audio state exist
      AFE_TurnOff8K();
      
//  cc_set_VBI_for_FSM(2);   
#if defined(DVFS_ENABLE)
  AM_DVFS_Setting(SP4G_CODEC_NONE); 
#endif  
}


/**
	@info: bit[0]: need to force dsp8k off or not; 1 for force, 0 for not
*/
void AM_SpeechOff( uint32 info )
{
   SP_DSPTone_ForceEnd();

   L1Audio_Msg_AM_Speech(0);
   AM_Enqueue( AM_DSP_SpeechOff, info, 0, false );

   AM_FlushQFunction();
}

bool AM_IsSpeechOn( void )
{
   return( (bool)((am.state & AM_STATE_SPEECH) != 0) );
}

bool AM_IsDataCardOn( void )
{
   return( (bool)((am.speech_state &= SP_STATE_DACA) != 0) );  
}

bool AM_IsAmInSpeechState( void )
{
	if ((am.state & (AM_STATE_SPEECH | AM_STATE_VOICE | AM_STATE_VOIP )) != 0)
		return true;
	else 
		return false;
}

void AM_SetSpeechMode( uint16 speech_mode, int8 sub_channel )
{
   am.speech_mode = speech_mode;
   am.sub_channel = sub_channel;
}

uint16 AM_GetSpeechMode(void)
{
	return am.speech_mode; 
}

kal_bool AM_IsSpeechWB( void )
{      
   return IsWBLink(am.speech_mode);
}

#if defined( __UMTS_RAT__ )
void AM_DSP_RAT_sub_2G( uint32 data , uint32 extraInfo)
{
   (void)data;
   if(L1SP_TCH_State()){ 	
       AM_Get2GCodecInfo(&am.speech_mode, &am.sub_channel);   	
   }else{
       am.speech_mode = 0;
       am.sub_channel = 0;
   }   
   if( !(am.state & AM_STATE_SPEECH) )
      return;
   //VBI_End();   //When DSP in NB-AMR, driver set SC,SD mode as WB-AMR, and DSP will assert, and vice versa 
   if(extraInfo == SAL_APP_TYPE_2GCall){        
      cc_2G_Call_Close(true);
   }
   else	if(extraInfo == SAL_APP_TYPE_3GCall){	   
   	  cc_3G_Call_Close(true);
      am.sp3g_flag = false;
   }
#if defined(__C2K_SPEECH_SUPPORT__)    
   else if(extraInfo == SAL_APP_TYPE_C2KCall){
      AM_DSP_TurnOffC2KSDSP(0, 0);
   }    
#endif   
#if defined(__VOLTE_SUPPORT__)      
	else if(extraInfo == SAL_APP_TYPE_4GCall){
   	  SP4G_Call_Close();
      am.sp4g_flag = false;	   
	}
#endif
#if defined(DVFS_ENABLE)
   AM_DVFS_Setting(am.speech_mode); 
#endif     
   cc_2G_Call_Open(am.speech_mode, am.speech_mode, am.sub_channel);   
   AM_Reset_Enh(am.speech_mode);
   l1sp_NetworkStatusNotification();
   // l1sp_CodecStatusNotification(am.speech_mode);      
}

void AM_DSP_InterRAT_3G_to_2G( uint32 codec , uint32 extraInfo)
{
   AM_DSP_RAT_sub_2G(0, SAL_APP_TYPE_3GCall);
   L1Audio_Msg_INTERRAT_3G_TO_2G(am.speech_mode);
}
#if defined(__C2K_SPEECH_SUPPORT__)
void AM_DSP_InterRAT_C2K_to_2G( uint32 codec , uint32 extraInfo)
{
   AM_DSP_RAT_sub_2G(0, SAL_APP_TYPE_C2KCall);
   L1Audio_Msg_INTERRAT_C2K_TO_2G(am.speech_mode);
}
#endif
#if defined(__VOLTE_SUPPORT__) 
void AM_DSP_InterRAT_4G_to_2G( uint32 codec , uint32 extraInfo)
{
   AM_DSP_RAT_sub_2G(0, SAL_APP_TYPE_4GCall);
   L1Audio_Msg_INTERRAT_4G_TO_2G(am.speech_mode);
}
#endif
void AM_DSP_InterRAT_Standby_to_2G( uint32 codec , uint32 extraInfo)
{
   AM_DSP_RAT_sub_2G(0, SAL_APP_TYPE_2GCall);
   L1Audio_Msg_INTERRAT_STANDBY_TO_2G(am.speech_mode);
}

void AM_InterRAT_3G_to_2G()
{
   AM_Enqueue( AM_DSP_InterRAT_3G_to_2G, 0, 0, false );
   AM_FlushQFunction();
}
#if defined(__C2K_SPEECH_SUPPORT__)
void AM_InterRAT_C2K_to_2G()
{
   AM_Enqueue( AM_DSP_InterRAT_C2K_to_2G, 0, 0, false );
   AM_FlushQFunction();
}
#endif
#if defined(__VOLTE_SUPPORT__) 
void AM_InterRAT_4G_to_2G()
{   
   AM_Enqueue( AM_DSP_InterRAT_4G_to_2G, 0, 0, false );
   AM_FlushQFunction();   
}
#endif 
void AM_InterRAT_Standby_to_2G()
{
   AM_Enqueue( AM_DSP_InterRAT_Standby_to_2G, 0, 0, false );
   AM_FlushQFunction();
}

void AM_DSP_RAT_sub_3G(uint32 codec , uint32 extraInfo)
{
   kal_uint16 u16DelayR, u16DelayW;
   kal_uint32 u32CurTime64us;
	am.speech_mode = codec;
   if( !(am.state & AM_STATE_SPEECH) )
      return;
   if(extraInfo == SAL_APP_TYPE_2GCall){        
      cc_2G_Call_Close(true);
   }else if(extraInfo == SAL_APP_TYPE_3GCall){   
      cc_3G_Call_Close(true);
   }
#if defined(__C2K_SPEECH_SUPPORT__)    
   else if(extraInfo == SAL_APP_TYPE_C2KCall){
      AM_DSP_TurnOffC2KSDSP(0, 0);
   }   
#endif   
#if defined(__VOLTE_SUPPORT__)      
   else if(extraInfo == SAL_APP_TYPE_4GCall){
      SP4G_Call_Close();
      am.sp4g_flag = false;
   } 
#endif
   
   SP3G_GetSyncDelayRW( &u16DelayR, &u16DelayW, &u32CurTime64us);
   SAL_3G_Upd_Enc_Cod(codec);//for 3g codec internal, MT6280
   SAL_3G_Upd_Dec_Cod(codec);//for 3g codec internal, MT6280
#if defined(DVFS_ENABLE)
   AM_DVFS_Setting(codec); 
#endif     
#if defined(_MODEM_RESYNC_3G_)	
		L1Audio_Msg_AM_3G_Reset_Time_Drift();
#if defined( __UMTS_RAT__ ) 
    switch(L1SP_GetSIMStatus()){
       case SP_3G_SIM_FDD_ACTIVE:	
       	   UL1D_Speech_Resync_Reset_Time_Offset();
       	   break;
#if defined(__UMTS_TDD128_MODE__)         	   
       case SP_3G_SIM_TDD_ACTIVE:
       	   TL1C_Reset_Time_Drift();
       	   break;
#endif
       default:
       	   ASSERT(0);	
    }	    
#endif		
#endif

#if defined( __UMTS_RAT__ ) && !defined(__L1_STANDALONE__)
    switch(L1SP_GetSIMStatus()){
       case SP_3G_SIM_FDD_ACTIVE:	
       	   if(query_ps_conf_test_mode()==PS_CONF_TEST_FTA)
              SP3G_SetDTX(false);
           else
              SP3G_SetDTX(true);       	   
       	   break;
       case SP_3G_SIM_TDD_ACTIVE:       	   
       	   break;
       default:
       	   ASSERT(0);	
    }	               
#endif          
   cc_3G_Call_Open(codec, codec, SP3G_IsDTXOn(), u16DelayR, u16DelayW, DSP_PCM_IDLE_DELAY_TABLE[6][2], u32CurTime64us);
   L1Audio_Msg_SP3G_FORCE_RESYNC( codec, codec, u16DelayR, u16DelayW);
   am.sp3g_flag = true;
   AM_Reset_Enh(codec);
   l1sp_NetworkStatusNotification();     
   // l1sp_CodecStatusNotification(am.speech_mode);      
}

void AM_DSP_InterRAT_2G_to_3G( uint32 codec , uint32 extraInfo)
{
   AM_DSP_RAT_sub_3G(codec, SAL_APP_TYPE_2GCall);
   L1Audio_Msg_INTERRAT_2G_TO_3G(codec);
}

void AM_DSP_3G_INTRARAT (uint32 codec, uint32 extraInfo)
{
   AM_DSP_RAT_sub_3G(codec, SAL_APP_TYPE_3GCall);
   L1Audio_Msg_3G_INTRARAT(codec);   
}

#if defined(__C2K_SPEECH_SUPPORT__)
void AM_DSP_InterRAT_C2K_to_3G( uint32 codec , uint32 extraInfo)
{
   AM_DSP_RAT_sub_3G(codec, SAL_APP_TYPE_C2KCall);
   L1Audio_Msg_INTERRAT_C2K_TO_3G(codec);
}
#endif 

#if defined(__VOLTE_SUPPORT__) 
void AM_DSP_InterRAT_4G_to_3G( uint32 codec , uint32 extraInfo)
{
   AM_DSP_RAT_sub_3G(codec, SAL_APP_TYPE_4GCall);
   L1Audio_Msg_INTERRAT_4G_TO_3G(codec);
}
#endif

void AM_InterRAT_2G_to_3G(uint32 codec)
{
   AM_Enqueue( AM_DSP_InterRAT_2G_to_3G, codec, 0, false );
   AM_FlushQFunction();
}

void AM_3G_INTRARAT(uint32 codec)
{
   AM_Enqueue( AM_DSP_3G_INTRARAT, codec, 0, false );
   AM_FlushQFunction();
}

#if defined(__C2K_SPEECH_SUPPORT__)
void AM_InterRAT_C2K_to_3G(uint32 codec)
{
   AM_Enqueue( AM_DSP_InterRAT_C2K_to_3G, codec, 0, false );
   AM_FlushQFunction();
}
#endif 

#if defined(__VOLTE_SUPPORT__) 
void AM_InterRAT_4G_to_3G(uint32 codec)
{   
   AM_Enqueue( AM_DSP_InterRAT_4G_to_3G, codec, 0, false );
   AM_FlushQFunction();
}
#endif
#endif

#if defined(__C2K_SPEECH_SUPPORT__)
void AM_DSP_TurnOnC2KSDSP(int codec, uint32 extraInfo ){
   
   uint16 DelR, DelW, DelM;
   
   kal_trace( TRACE_INFO, C2K_AM_DSP_TurnOnC2KSDSP, am.speech_mode, codec);
   
   SPC2K_GetSyncDelayRW( &DelR, &DelW, &DelM);
   if((am.speech_mode != codec) && (!am.c2k_flag)) {  
      cc_C2K_Call_Open (codec, _C2K_DTX_SUPPORT_, DelR, DelW, DelM); //VBIRest();
 
	    am.speech_mode = codec;
	    am.c2k_flag = true;       // ys
   }else{
      cc_C2K_Call_Open (codec, _C2K_DTX_SUPPORT_, DelR, DelW, DelM);//check by daniel//VBIRest();
   }
}
void AM_DSP_TurnOffC2KSDSP(uint32 data , uint32 extraInfo)
{   
   kal_trace( TRACE_INFO, C2K_AM_DSP_TurnOffC2KSDSP);   

   cc_C2K_Call_Close(true);       

   //am.speech_mode = SAL_C2K_COD_MODE_UNDEF; 
   am.c2k_flag = false;
}

void AM_TurnOffC2KSDSP(void)
{
   //TO , move c2kflag here for symmetry
	AM_Enqueue( AM_DSP_TurnOffC2KSDSP, 0, 0, false );
	AM_FlushQFunction();
}

void AM_DSP_RAT_sub_C2K(uint32 codec , uint32 extraInfo)
{
   if( !(am.state & AM_STATE_SPEECH) )
      return;
   if(extraInfo == SAL_APP_TYPE_2GCall){          
      cc_2G_Call_Close(true);
   } else if(extraInfo == SAL_APP_TYPE_3GCall){   
      cc_3G_Call_Close(true);
      am.sp3g_flag = false;
   }
#if defined(__VOLTE_SUPPORT__)      
   else if(extraInfo == SAL_APP_TYPE_4GCall){
      SP4G_Call_Close();
      am.sp4g_flag = false;
   } 
#endif
#if defined(__C2K_SPEECH_SUPPORT__) 
   else if(extraInfo == SAL_APP_TYPE_C2KCall){
      AM_DSP_TurnOffC2KSDSP(0, 0);
   }
#endif   
#if defined(DVFS_ENABLE)
   AM_DVFS_Setting(codec); 
#endif    
   AM_DSP_TurnOnC2KSDSP(codec, 0);
   am.spc2k_flag = true;      
   AM_Reset_Enh(codec);
   l1sp_NetworkStatusNotification();
}

void AM_DSP_InterRAT_2G_to_C2K( uint32 codec , uint32 extraInfo)
{
   AM_DSP_RAT_sub_C2K(codec, SAL_APP_TYPE_2GCall);
   L1Audio_Msg_INTERRAT_2G_TO_C2K(codec);
}

void AM_DSP_C2K_IntraRAT (uint32 codec, uint32 extraInfo)
{
   AM_DSP_RAT_sub_C2K(codec, SAL_APP_TYPE_C2KCall);
   L1Audio_Msg_C2K_INTRARAT(codec);
}

#if defined( __UMTS_RAT__ )
void AM_DSP_InterRAT_3G_to_C2K( uint32 codec , uint32 extraInfo)
{
   AM_DSP_RAT_sub_C2K(codec, SAL_APP_TYPE_3GCall);
   L1Audio_Msg_INTERRAT_3G_TO_C2K(codec);
}
#endif
#if defined(__VOLTE_SUPPORT__) 
void AM_DSP_InterRAT_4G_to_C2K( uint32 codec , uint32 extraInfo)
{
   AM_DSP_RAT_sub_C2K(codec, SAL_APP_TYPE_4GCall);
   L1Audio_Msg_INTERRAT_4G_TO_C2K(codec);
}
#endif

void AM_InterRAT_2G_to_C2K(uint32 codec)
{
   AM_Enqueue( AM_DSP_InterRAT_2G_to_C2K, codec, 0, false );
   AM_FlushQFunction();
}

void AM_C2K_IntraRAT(uint32 codec)
{
   AM_Enqueue( AM_DSP_C2K_IntraRAT, codec, 0, false );
   AM_FlushQFunction();
}
#if defined( __UMTS_RAT__ )
void AM_InterRAT_3G_to_C2K(uint32 codec)
{
   AM_Enqueue( AM_DSP_InterRAT_3G_to_C2K, codec, 0, false );
   AM_FlushQFunction();
}
#endif
#if defined(__VOLTE_SUPPORT__) 
void AM_InterRAT_4G_to_C2K(uint32 codec)
{   
   AM_Enqueue( AM_DSP_InterRAT_4G_to_C2K, codec, 0, false );
   AM_FlushQFunction();
}
#endif
#endif

#if defined(__VOLTE_SUPPORT__)      
void AM_DSP_RAT_sub_4G(uint32 codec , uint32 extraInfo, uint32 is_4G_handover)
{
   //kal_uint16 u16DelayR, u16DelayW; //unused
	am.speech_mode = codec;
   if( !(am.state & AM_STATE_SPEECH) )
      return;

   if(is_4G_handover == 0)
   {
      if(extraInfo == SAL_APP_TYPE_2GCall){
         cc_2G_Call_Close(true);
      } else if(extraInfo == SAL_APP_TYPE_3GCall){
         cc_3G_Call_Close(true);
         am.sp3g_flag = false;
      } 
#if defined(__C2K_SPEECH_SUPPORT__)    
      else if(extraInfo == SAL_APP_TYPE_C2KCall){
         AM_DSP_TurnOffC2KSDSP(0, 0);
      }
#endif   
      else if(extraInfo == SAL_APP_TYPE_4GCall){
         SP4G_Call_Close();
      }
   }

   //SP3G_GetSyncDelayRW( &u16DelayR, &u16DelayW);//????
   //SAL_4G_Upd_Enc_Cod(codec);//for 3g codec internal, MT6280
   //SAL_4G_Upd_Dec_Cod(codec);//for 3g codec internal, MT6280
   
   //SAL_4G_Call_Open(codec);
#if defined(DVFS_ENABLE)
   AM_DVFS_Setting(codec); 
#endif   
   SP4G_Call_Open(codec, is_4G_handover);
   AM_Reset_Enh(codec);
   l1sp_NetworkStatusNotification();  
   // l1sp_CodecStatusNotification(am.speech_mode);      
   am.sp4g_flag = true;
}

void AM_DSP_InterRAT_2G_to_4G( uint32 codec , uint32 extraInfo)
{
   //ASSERT(codec < SP4G_CODEC_G711 || codec > SP4G_CODEC_G729);//context is under task level, so g-series cannot be used
   AM_DSP_RAT_sub_4G(codec, SAL_APP_TYPE_2GCall, 0);
   L1Audio_Msg_INTERRAT_2G_TO_4G(codec);
}
#if defined( __UMTS_RAT__ )
void AM_DSP_InterRAT_3G_to_4G( uint32 codec , uint32 extraInfo)
{
   //ASSERT(codec < SP4G_CODEC_G711 || codec > SP4G_CODEC_G729);//context is under task level, so g-series cannot be used
   AM_DSP_RAT_sub_4G(codec, SAL_APP_TYPE_3GCall, 0);
   L1Audio_Msg_INTERRAT_3G_TO_4G(codec);
}
#endif
#if defined(__C2K_SPEECH_SUPPORT__)
void AM_DSP_InterRAT_C2K_to_4G( uint32 codec , uint32 extraInfo)
{
   AM_DSP_RAT_sub_4G(codec, SAL_APP_TYPE_C2KCall, 0);
   L1Audio_Msg_INTERRAT_C2K_TO_4G(codec);
}
#endif 

void AM_DSP_4G_INTRARAT (uint32 codec, uint32 is_4G_handover)
{
   //ASSERT(codec < SP4G_CODEC_G711 || codec > SP4G_CODEC_G729); context is under task level, so g-series can be used
   AM_DSP_RAT_sub_4G(codec, SAL_APP_TYPE_4GCall, is_4G_handover);
   L1Audio_Msg_4G_INTRARAT(codec);   
}

void AM_InterRAT_2G_to_4G(uint32 codec)
{
   AM_Enqueue( AM_DSP_InterRAT_2G_to_4G, codec, 0, false );
   AM_FlushQFunction();
}
#if defined( __UMTS_RAT__ )
void AM_InterRAT_3G_to_4G(uint32 codec)
{   
   AM_Enqueue( AM_DSP_InterRAT_3G_to_4G, codec, 0, false );
   AM_FlushQFunction();
}
#endif
#if defined(__C2K_SPEECH_SUPPORT__)
void AM_InterRAT_C2K_to_4G(uint32 codec)
{   
   AM_Enqueue( AM_DSP_InterRAT_C2K_to_4G, codec, 0, false );
   AM_FlushQFunction();
}
#endif
void AM_4G_INTRARAT(uint32 codec, uint32 is_4G_handover)
{
   AM_Enqueue( AM_DSP_4G_INTRARAT, codec, is_4G_handover, false );
   AM_FlushQFunction();
}

void SAL_4G_AMRCall_Open(int codec, kal_bool isDTX, kal_uint16 u16DelayR, kal_uint16 u16DelayW, const uint16 idle_delay, kal_uint32 u32CurTime64us, kal_uint32 is_4G_handover);
void SAL_4G_AMRCall_Close();
#if defined(__G_CODEC_SUPPORT__)
void SAL_4G_GSeriesCall_Open(int codec, kal_uint16 u16DelayR, kal_uint16 u16DelayW, const uint16 idle_delay, kal_uint32 u32CurTime64us);
void SAL_4G_GSeriesCall_Close(int codec);
#endif
#if defined(__EVS_CODEC_SUPPORT__)
void SAL_4G_EVSCall_Open(int codec, kal_bool isDTX, kal_uint16 u16DelayR, kal_uint16 u16DelayW, const uint16 idle_delay, kal_uint32 u32CurTime64us, kal_uint32 is_4G_handover);
void SAL_4G_EVSCall_Close(void);
#endif //#if defined(__EVS_CODEC_SUPPORT__)

void SP4G_Call_Open(uint16 codec, uint32 is_4G_handover)
{
   kal_uint16 delayR, delayW;
   kal_uint32 u32CurTime64us;

   if(is_4G_handover == 0)
   {
      ASSERT(am.codec_4g == -1);
   }
   SAL_Set_AWBPlusFlag(0);
   am.codec_4g = codec;
   SP4G_GetSyncDelayRW( &delayR, &delayW, &u32CurTime64us);
#if defined(__G_CODEC_SUPPORT__)   
   if((codec >= SP4G_CODEC_G711) && (codec <= SP4G_CODEC_G729)){      
      SAL_4G_GSeriesCall_Open(codec, delayR, delayW, DSP_PCM_IDLE_DELAY_TABLE[6][2], u32CurTime64us);      
   }else
#endif
   {
#if defined(__EVS_CODEC_SUPPORT__)
      if(is_EVS_codec((uint8)codec)){
         if( get_sp4g_fake_EVS_IO() )
         {
            SAL_Set_AWBPlusFlag(1);
         }
         SAL_4G_EVSCall_Open((kal_uint32)codec, (kal_uint32)SP4G_IsDTXOn(), (kal_uint32)delayR, (kal_uint32)delayW, (kal_uint32)DSP_PCM_IDLE_DELAY_TABLE[6][2], (kal_uint32)u32CurTime64us, is_4G_handover);
      }else
#endif //#if defined(__EVS_CODEC_SUPPORT__)
      {
         SAL_4G_AMRCall_Open(codec, SP4G_IsDTXOn(), delayR, delayW, DSP_PCM_IDLE_DELAY_TABLE[6][2], u32CurTime64us, is_4G_handover);
      }
   }
}

void SP4G_Call_Close(void){
   ASSERT(am.codec_4g != -1);
   SAL_Set_AWBPlusFlag(0);
#if defined(__G_CODEC_SUPPORT__)     
   if( is_g_codec(am.codec_4g) ){
      SAL_4G_GSeriesCall_Close(SAL_PCM_NARROWBAND);
   }else
#endif    
   {
#if defined(__EVS_CODEC_SUPPORT__)
      if(is_EVS_codec(am.codec_4g)){
         SAL_4G_EVSCall_Close();
      }else
#endif //#if defined(__EVS_CODEC_SUPPORT__)
      {
         SAL_4G_AMRCall_Close();
      }
   }
   am.codec_4g = -1;
}
//extern void SAL_Set4G(bool b);
void SAL_4G_AMRCall_Open(int codec, kal_bool isDTX, kal_uint16 u16DelayR, kal_uint16 u16DelayW, const uint16 idle_delay, kal_uint32 u32CurTime64us, kal_uint32 is_4G_handover)
{
   //SP4G_GetSyncDelayRW( &u16DelayR, &u16DelayW);
   SAL_3G_Upd_Enc_Cod(codec);
   SAL_3G_Upd_Dec_Cod(codec);
   //cc_3G_Call_Open(codec, codec, SP4G_IsDTXOn(), u16DelayR, u16DelayW, DSP_PCM_IDLE_DELAY_TABLE[6][2]);
   //SAL_Set4G(true);
   cc_4G_Call_Open_temp(codec, codec, isDTX, u16DelayR, u16DelayW, idle_delay, u32CurTime64us, is_4G_handover);
   L1Audio_Msg_SP4G_FORCE_RESYNC( codec, codec, u16DelayR, u16DelayW);
};

void SAL_4G_AMRCall_Close()
{
   cc_4G_Call_Close_temp(true);  
   //SAL_Set4G(false); 
}


void SAL_4G_GSeriesCall_Open(int codec, kal_uint16 u16DelayR, kal_uint16 u16DelayW, const uint16 idle_delay, kal_uint32 u32CurTime64us){   
   int band_mod = SAL_NB;
   if(SP4G_CODEC_G722 == codec )
			band_mod = SAL_WB;

   //SAL_Set4G(true);
   //memset(&cfg, 0, sizeof(Sal_PCMEx_Config_t));
   //cfg.idle = false;//true;
   //cfg.swi  = SAL_PCMEX_SWITCH_ON;
   //cfg.type = SAL_PCMEX_TYPE_VOLTE;	
   //cfg.band = band;//SAL_PCM_NARROWBAND
   //SAL_PcmEx_Config(&cfg);

   /*if(band == SAL_PCM_WIDEBAND)
   {
      AMR_codec_temp = SP4G_CODEC_WBAMR_12_65;
   }
   else
   {
      AMR_codec_temp = SP4G_CODEC_AMR_12_2;
   }
   SAL_3G_Upd_Enc_Cod(AMR_codec_temp);
   SAL_3G_Upd_Dec_Cod(AMR_codec_temp);*/
   cc_4G_G_Codec_Call_Open(band_mod, u16DelayR, u16DelayW, idle_delay, u32CurTime64us);   
  
   {
      void GSeries_Encode_Init(SP4G_Codec codec);
      void GSeries_Decode_Init(SP4G_Codec codec);
      GSeries_Encode_Init(codec);
      GSeries_Decode_Init(codec);
      //SP4G_SetCodec(codec);//fix
   } 
   Extcodec_Call_Open();
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else /*#if 0*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /*#if 0*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifndef L1D_TEST
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#endif         
   kal_prompt_trace(MOD_L1SP, "[SAL_4G_GSeriesCall_Open] SAL_PcmEx_CheckState OK");

  
}


void SAL_4G_GSeriesCall_Close(int codec){
 	 Extcodec_Call_Close();
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
#endif
   ////SAL_Set4G(false); 
   {
      void GSeries_Encode_DeInit();
      void GSeries_Decode_DeInit();
   }   

   //fsju
   cc_4G_G_Codec_Call_Close(true);
} 


#if defined(__EVS_CODEC_SUPPORT__)
void SP4G_EVS_CallOpenSetPar(void);
#endif //#if defined(__EVS_CODEC_SUPPORT__)
void SAL_4G_EVSCall_Open(int codec, kal_bool isDTX, kal_uint16 u16DelayR, kal_uint16 u16DelayW, const uint16 idle_delay, kal_uint32 u32CurTime64us, uint32 is_4G_handover)
{
#if defined(__EVS_CODEC_SUPPORT__)
   SP4G_EVS_CallOpenSetPar();
#endif //#if defined(__EVS_CODEC_SUPPORT__)

   //cc_4G_EVS_Codec_Call_Open(codec, codec, 0/*isDTX*/, u16DelayR, u16DelayW, idle_delay, u32CurTime64us);
   cc_4G_EVS_Codec_Call_Open((kal_uint32)codec, (kal_uint32)isDTX, (kal_uint32)u16DelayR, (kal_uint32)u16DelayW, (kal_uint32)idle_delay, (kal_uint32)u32CurTime64us, (kal_uint32)is_4G_handover);

   //kal_prompt_trace(MOD_L1SP, "[SAL_4G_EVSCall_Open] SAL_PcmEx_CheckState OK");
   L1Audio_Msg_SP4G_EVSSeriesCall_Open_OK();
}


void SAL_4G_EVSCall_Close(void)
{
   cc_4G_EVS_Codec_Call_Close(1);
}


#endif

kal_bool AM_Is_4G()
{
#if defined(__VOLTE_SUPPORT__)  	
   return am.sp4g_flag;   
#else
   return KAL_FALSE;
#endif
}



/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
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
#endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
static void AM_DSP_VMRecordOn( uint32 speech_mode , uint32 extraInfo)
{
	Sal_VM_Config_t cfg_t;
	memset(&cfg_t, 0, sizeof(Sal_VM_Config_t));

	cfg_t.swi = SAL_VM_SWITCH_ON;

   if( am.state & (AM_STATE_SPEECH |AM_STATE_VOIP |AM_STATE_VOICE) ) {       /* Conversation Recording */
      ASSERT(!(am.speech_state & SP_STATE_VMR));
	  cfg_t.idle = false;
      am.speech_state |= SP_STATE_VMR;
      L1Audio_Msg_AM_SetSpeech( AM_Speech_Feature_Name(0) , L1AUDIO_Str_onoff(1) );
   }
   else {                                    /* VM in idle mode */
#if 0   	
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(AMRWB_ENCODE) // not define in samrt phone
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif//#if defined(AMRWB_ENCODE)
/* under construction !*/
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
   }

   SAL_VM_Config(&cfg_t);

}

void AM_VMRecordOn( void )
{
   AM_Enqueue( AM_DSP_VMRecordOn, 0, 0, false );

   AM_FlushQFunction();
}


static void AM_DSP_VMRecordOff( uint32 data , uint32 extraInfo)
{
   (void)data;
   Sal_VM_Config_t cfg_t;
	memset(&cfg_t, 0, sizeof(Sal_VM_Config_t));

   cfg_t.swi = SAL_VM_SWITCH_OFF;
   cfg_t.idle = false;

   if(am.speech_state & SP_STATE_VMR) /* Conversation Recording */
   {
      am.speech_state &= ~SP_STATE_VMR;
      L1Audio_Msg_AM_SetSpeech( AM_Speech_Feature_Name(0) , L1AUDIO_Str_onoff(0) );
	  SAL_VM_Config(&cfg_t);
   }
   else  /* VM in idle mode */
   {
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
#endif	  
   }
}

void AM_VMRecordOff( void )
{
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 
   AM_Enqueue( AM_DSP_VMRecordOff, 0, 0, false );
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
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
#endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
static void AM_DSP_KeyToneOn( uint32 data , uint32 extraInfo)
{
   (void)data;
   ASSERT(!(am.state & AM_STATE_KEYTONE));
   L1Audio_Msg_AM_Switch( AM_Switch_Name(0), L1AUDIO_Str_onoff(1) );
   
   if ( am.state == 0 ) { // ( (am.state & ~AM_STATE_AVSYNC) == 0 ) {
      AFE_TurnOn8K();
      // AM_Write_Idle_Delay(4); // driver dost not support idle playback function, remove 
      VBI_Reset();
   }
   am.state |= AM_STATE_KEYTONE;
}

void AM_KeyToneOn( void )
{
   AM_Enqueue( AM_DSP_KeyToneOn, 0, 0, false );
}

static void AM_DSP_KeyToneOff( uint32 data , uint32 extraInfo)
{
   (void)data;
   L1Audio_Msg_AM_Switch( AM_Switch_Name(0), L1AUDIO_Str_onoff(0) );
   am.state &= ~AM_STATE_KEYTONE;

   if(am.state == 0)
      VBI_End();

   if( am.state == 0 ) // (am.state & ~AM_STATE_AUDIO) == 0 ) // no audio state exist
      AFE_TurnOff8K();
}

void AM_KeyToneOff( void )
{
   AM_Enqueue( AM_DSP_KeyToneOff, 0, 0, false );
}

bool AM_IsKeyToneOn( void )
{
   if (am.state & AM_STATE_KEYTONE)
      return true;
   return false;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
static void AM_DSP_ToneOn( uint32 data , uint32 extraInfo)
{
   (void)data;
   ASSERT(!(am.state & AM_STATE_TONE));
   L1Audio_Msg_AM_Switch( AM_Switch_Name(1), L1AUDIO_Str_onoff(1) );
   
   if( am.state == 0 ) { // ( (am.state & ~AM_STATE_AVSYNC) == 0) {
      AFE_TurnOn8K();
      // AM_Write_Idle_Delay(4); // driver not support idle playback function, so remove
      VBI_Reset();
   }
   am.state |= AM_STATE_TONE;
}

void AM_ToneOn( void )
{
   AM_Enqueue( AM_DSP_ToneOn, 0, 0, false );


}

static void AM_DSP_ToneOff( uint32 data , uint32 extraInfo)
{
   (void)data;
   L1Audio_Msg_AM_Switch( AM_Switch_Name(1), L1AUDIO_Str_onoff(0) );
   am.state &= ~AM_STATE_TONE;

   if( am.state == 0 )
      VBI_End();

   if( am.state == 0 ) //  (am.state & ~AM_STATE_AUDIO) == 0 ) // no audio state exist
      AFE_TurnOff8K();
}

void AM_ToneOff( void )
{
   AM_Enqueue( AM_DSP_ToneOff, 0, 0, false );
}

bool AM_IsToneOn( void )
{
   if (am.state & AM_STATE_TONE)
      return true;
   return false;
}


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

static void AM_DSP_PCM8K_PlaybackOn( uint32 data , uint32 extraInfo)
{
   (void)data;

   if( am.state == 0 ) {
   	AFE_TurnOn8K();
   	SAL_App_Open(DSP_PCM_IDLE_DELAY_TABLE[2][0], DSP_PCM_IDLE_DELAY_TABLE[2][1], DSP_PCM_IDLE_DELAY_TABLE[2][2]);
   }
// #if defined(BGSND_ENABLE) || defined(__SMART_PHONE_MODEM__)
   if ( data == 1 )
   {
      ASSERT(!(am.state & AM_STATE_SND_EFFECT));
      am.state |= AM_STATE_SND_EFFECT;
      L1Audio_Msg_AM_Switch( AM_Switch_Name(9), L1AUDIO_Str_onoff(1) );
   }
   else
// #endif // #if defined(BGSND_ENABLE) || defined(__SMART_PHONE_MODEM__)
   {
      ASSERT_REBOOT( !(am.state & AM_CONFLICT_STATE) );
      am.state |= AM_STATE_VOICE;
      L1Audio_Msg_AM_Switch( AM_Switch_Name(2), L1AUDIO_Str_onoff(1) );
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
#endif 

static void AM_DSP_PCM8K_PlaybackOff( uint32 data , uint32 extraInfo)
{
   (void)data;

// #if defined(BGSND_ENABLE) || defined(__SMART_PHONE_MODEM__)
   if( data == 1 )
   {
      am.state &= ~AM_STATE_SND_EFFECT;
      L1Audio_Msg_AM_Switch( AM_Switch_Name(9), L1AUDIO_Str_onoff(0) );
   }
   else
// #endif // #if defined(BGSND_ENABLE) || defined(__SMART_PHONE_MODEM__)
   {
      am.state &= ~AM_STATE_VOICE;
      L1Audio_Msg_AM_Switch( AM_Switch_Name(2), L1AUDIO_Str_onoff(0) );
   }
      SAL_App_Close(am.state == 0);

   if( am.state == 0 ) // (am.state & ~AM_STATE_AUDIO) == 0 ) // no audio state exist
      AFE_TurnOff8K();
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
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
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

uint32 AM_GetRecordFormat()
{
   return am.record_format;
}

/**
	@data: bit[0:3] DL position 
*/
static void AM_DSP_PCM16K_RecordOn( uint32 data , uint32 extraInfo)
{
	(void)extraInfo;
	Sal_PCMEx_Config_t cfg_t;
	memset(&cfg_t, 0, sizeof(Sal_PCMEx_Config_t));

   ASSERT_REBOOT( !(am.state & AM_CONFLICT_STATE) );
   am.record_format = AM_RECORD_16K;

	
	cfg_t.idle = true;
	cfg_t.band = SAL_PCM_WIDEBAND;
	cfg_t.type = SAL_PCMEX_TYPE_REC_NML;
	cfg_t.swi = SAL_PCMEX_SWITCH_ON;
	cfg_t.PCMRec_DL_Pos = (data&0xF);
	cfg_t.delR = DSP_PCM_IDLE_DELAY_TABLE[3][0];
	cfg_t.delW = DSP_PCM_IDLE_DELAY_TABLE[3][1];
	cfg_t.delM = DSP_PCM_IDLE_DELAY_TABLE[3][2];

	//config related digital device(nb/wb), 
	// am_SetDevice();
	
   AFE_TurnOn8K();

	SAL_PcmEx_Config(&cfg_t);

   am.state |= AM_STATE_VOICE;
   L1Audio_Msg_AM_Switch( AM_Switch_Name(10), L1AUDIO_Str_onoff(1) );
}

void AM_PCM16K_RecordOn( uint8 dlPos )
{
	ASSERT( !( am.state & AM_STATE_SPEECH ) );

#if 0	
/* under construction !*/
/* under construction !*/
#endif 	

   AM_Enqueue( AM_DSP_PCM16K_RecordOn, dlPos, 0, false );
   AM_FlushQFunction();


	// enable enhancment

	if(!(am.state & AM_STATE_SPEECH))
	{
      if(!AM_IsBTCordlessMode())
      {
			SetSpeechEnhancement(true);
      }
	}

}

static void AM_DSP_PCM16K_RecordOff( uint32 data , uint32 extraInfo)
{
   (void)data;
	(void)extraInfo; 
	Sal_PCMEx_Config_t cfg_t;
	memset(&cfg_t, 0, sizeof(Sal_PCMEx_Config_t));

   cfg_t.swi = SAL_PCMEX_SWITCH_OFF;	
   am.state &= ~AM_STATE_VOICE;
   am.record_format = AM_RECORD_NONE;
   cfg_t.idle = false;
   L1Audio_Msg_AM_Switch( AM_Switch_Name(10), L1AUDIO_Str_onoff(0) );
	
   if( am.state == 0 ) {
   	cfg_t.idle = true;
   }
   cfg_t.type = SAL_PCMEX_TYPE_REC_NML;
 
   SAL_PcmEx_Config(&cfg_t);

   if( am.state == 0 ) {
      AFE_TurnOff8K();
   }
}

void AM_PCM16K_RecordOff( bool wait )
{
   ASSERT( !( am.state & AM_STATE_SPEECH ) );

	// turn off speech enhancment
   if(!(am.state & AM_STATE_SPEECH))
   {
      if(!AM_IsBTCordlessMode())
      {
			//SPE_SetULNR(false);        
      	SetSpeechEnhancement(false);
      }
   }

   AM_Enqueue( AM_DSP_PCM16K_RecordOff, 0, 0, false );

   if( wait )
      AM_FlushQFunction();
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/**
	@extraInfo: bit[0:3] DL position when appType is AM_PCM8KREC_APP_TYPE_PCMREC
*/
static void AM_DSP_PCM8K_RecordOn( uint32 appType , uint32 extraInfo)
{
	(void)extraInfo;

	Sal_PCMEx_Config_t cfg_t;
	memset(&cfg_t, 0, sizeof(Sal_PCMEx_Config_t));

	cfg_t.idle = false;
	cfg_t.swi = SAL_PCMEX_SWITCH_ON;

   am.record_format = AM_RECORD_8K;

   if( am.state & (AM_STATE_SPEECH | AM_STATE_VOIP)) { 
		// REMIND: Call record and VM EPL can work in the same time, 
		// but they use same interrupt and setting. 
		
		if (AM_PCM8KREC_APP_TYPE_PCMREC == appType) { // Conversation Recording 
	      ASSERT(!(am.speech_state & SP_STATE_PCM8K_REC));
			cfg_t.type = SAL_PCMEX_TYPE_REC_NML;
			cfg_t.PCMRec_DL_Pos = (extraInfo&0xF);
			am.speech_state |= SP_STATE_PCM8K_REC;

			L1Audio_Msg_AM_SetSpeech( AM_Speech_Feature_Name(1) , L1AUDIO_Str_onoff(1) );
		} else if(AM_PCM8KREC_APP_TYPE_VMEPL == appType) { // VM EPL
			ASSERT(!(am.speech_state & SP_STATE_VMR_EPL));
			//cfg_t.epl_comPar0 = 6;//wayne come back;
			cfg_t.type = SAL_PCMEX_TYPE_REC_EPL;
			am.speech_state |= SP_STATE_VMR_EPL;
			L1Audio_Msg_AM_SetSpeech( AM_Speech_Feature_Name(4) , L1AUDIO_Str_onoff(1) );
		} else {
			ASSERT(0); // unknown application type
		}      
      
   }else{
   	if(AM_PCM8KREC_APP_TYPE_VMEPL == appType) { // idle epl
			ASSERT_REBOOT((am.state & AM_STATE_VOICE));
			ASSERT_REBOOT(!(am.speech_state & SP_STATE_VMR_EPL));
			am.speech_state |= SP_STATE_VMR_EPL;
		
			cfg_t.idle = false;
			cfg_t.type = SAL_PCMEX_TYPE_REC_EPL;
			
   	} else { // idle record
   		ASSERT_REBOOT( !(am.state & AM_CONFLICT_STATE) );
			am.state |= AM_STATE_VOICE;
			
			cfg_t.idle = true;			
			cfg_t.type = SAL_PCMEX_TYPE_REC_NML;
			cfg_t.band = SAL_PCM_NARROWBAND;
			cfg_t.PCMRec_DL_Pos = (extraInfo&0xF);
			cfg_t.delR = DSP_PCM_IDLE_DELAY_TABLE[2][0];
			cfg_t.delW = DSP_PCM_IDLE_DELAY_TABLE[2][1];
			cfg_t.delM = DSP_PCM_IDLE_DELAY_TABLE[2][2];
   	}
      L1Audio_Msg_AM_Switch( AM_Switch_Name(4), L1AUDIO_Str_onoff(1) );       
       
	}
   if(cfg_t.idle)
   	AFE_TurnOn8K();
   SAL_PcmEx_Config(&cfg_t);
}

void AM_PCM8K_RecordOn( AM_PCM8KREC_APP_TYPE appType, uint8 dlPos )
{

   AM_Enqueue( AM_DSP_PCM8K_RecordOn, (uint32)appType, dlPos, false );
   AM_FlushQFunction();

   if(!(am.state & (AM_STATE_SPEECH | AM_STATE_VOIP)))
   {
      if(!AM_IsBTCordlessMode())
      {
			SetSpeechEnhancement(true);
      }
   }
}

static void AM_DSP_PCM8K_RecordOff( uint32 appType , uint32 extraInfo)
{
	Sal_PCMEx_Config_t cfg_t;
	memset(&cfg_t, 0, sizeof(Sal_PCMEx_Config_t));

   am.record_format = AM_RECORD_NONE;
   cfg_t.swi = SAL_PCMEX_SWITCH_OFF;
   cfg_t.idle = false;

   if(AM_PCM8KREC_APP_TYPE_PCMREC == appType)
		cfg_t.type = SAL_PCMEX_TYPE_REC_NML;
   if(AM_PCM8KREC_APP_TYPE_VMEPL == appType)
		cfg_t.type = SAL_PCMEX_TYPE_REC_EPL;

   if(am.speech_state & (SP_STATE_PCM8K_REC|SP_STATE_VMR_EPL) ) // under call
   {
   	if(AM_PCM8KREC_APP_TYPE_PCMREC == appType) {
	      am.speech_state &= ~SP_STATE_PCM8K_REC;
   	} else if(AM_PCM8KREC_APP_TYPE_VMEPL == appType){
   		am.speech_state &= ~SP_STATE_VMR_EPL;
   	} else {
   		ASSERT(0); // unknow application type
   	}


		if(AM_PCM8KREC_APP_TYPE_PCMREC == appType) {
	      L1Audio_Msg_AM_SetSpeech( AM_Speech_Feature_Name(1) , L1AUDIO_Str_onoff(0) );
   	} else if(AM_PCM8KREC_APP_TYPE_VMEPL == appType){
   		L1Audio_Msg_AM_SetSpeech( AM_Speech_Feature_Name(4) , L1AUDIO_Str_onoff(0) );
   	} 
      
   }
   else
   {
   	if(AM_PCM8KREC_APP_TYPE_VMEPL == appType) { // idle VM epl
   		am.speech_state &= ~SP_STATE_VMR_EPL;
   	} else { // idle record   		
   		am.state &= ~AM_STATE_VOICE;
   	}
      
      L1Audio_Msg_AM_Switch( AM_Switch_Name(4), L1AUDIO_Str_onoff(0) );
   }
   if( am.state == 0 ) {
   	cfg_t.idle = true;
   }
   
   SAL_PcmEx_Config(&cfg_t);
   if( am.state == 0 ) // (am.state & ~AM_STATE_AUDIO) == 0 ) // no audio state exist
      AFE_TurnOff8K();
   
}

void AM_PCM8K_RecordOff( bool wait , AM_PCM8KREC_APP_TYPE appType)
{
   if(!(am.state & (AM_STATE_SPEECH | AM_STATE_VOIP)))
   {
      if(!AM_IsBTCordlessMode())

      {     
        SetSpeechEnhancement(false);
      }
   }
   
   AM_Enqueue( AM_DSP_PCM8K_RecordOff, (uint32)appType, 0, false );

   if( wait )
      AM_FlushQFunction();
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
int16 AM_IsAudioPlaybackOn( void )
{
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
   return -1;
}

int16 AM_IsIdleState( void )
{
   if( am.state == 0 )
      return true;
   return false;
}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

bool AM_IsVoiceOn( void )
{
   if(am.state !=0 ) // ( am.state & ~AM_STATE_AUDIO) // no audio state exist
      return true;
   return false;
}

/* ==========================================================================*/
void AM_Mute_UL_EnhResult_Speech(bool mute)
{
	kal_trace(TRACE_INFO, L1SP_MUTE_DSP_UL_ENH_RESULT_CONTROL, mute);	
	SAL_Mute_Ctrl(SAL_MUTE_UL_IN_EN, mute); // in the enhancement end point, which is set -60db to the result. 
}

void AM_Mute_UL_Source_Speech(bool mute)
{
	// kal_trace(TRACE_INFO, L1SP_MUTE_DSP_UL_SOURCE_CONTROL, mute);	
	// SAL_Mute_Ctrl(SAL_MUTE_UL_PRE_EN, mute); // in the enhancement entry point, when use this, please do not use the 

	Sal_Ramp_State_t preState = SAL_Ramp_GetState(SAL_RAMP_UL_PRE_EN);
	kal_trace(TRACE_INFO, L1SP_MUTE_DSP_RAMP_CONTROL, 0, SAL_RAMP_UL_PRE_EN, preState, mute, am.state);
	if(AM_IsAmInSpeechState())
	{
		if(mute) {
			if( SAL_RAMP_DOWN_DONE == preState){
				// already, nothing to do 
				
			} else {			
				int i; 
				SAL_RampDown_SetInit(SAL_RAMP_UL_PRE_EN); 	// SAL_Mute_With_Ramp(SAL_RAMP_DL_PRE_DACA);
				for(i=0; i<14; i++) {	
					kal_prompt_trace(MOD_L1SP, "mute waiting i = %d", i);
					if(SAL_RampDown_IsDone(SAL_RAMP_UL_PRE_EN)) {
						break;
					} else {
						// ASSERT(i < 10);
						kal_sleep_task(10);
					}
				}
				if(14 == i) {
					kal_prompt_trace(MOD_L1SP, "[AM_Mute_UL_Source_Speech] force mute, may pop!");
					SAL_Ramp_SetFinal(SAL_RAMP_UL_PRE_EN);
					SAL_Ramp_SetMute(SAL_RAMP_UL_PRE_EN);					
				}
			}
		}
		else { // unmute
			if(SAL_RAMP_DOWN_DONE == preState){ // no sound, so ramp up	
				int i;
				SAL_RampUp_SetInit(SAL_RAMP_UL_PRE_EN);
				for(i=0; i<14; i++) {				
					kal_prompt_trace(MOD_L1SP, "unmute waiting i = %d", i);
					if(SAL_RampUp_IsDone(SAL_RAMP_UL_PRE_EN)) {
						break;
					} else {
						// ASSERT(i < 10);
						kal_sleep_task(10);
					}
				}
				if(14 == i) {
					kal_prompt_trace(MOD_L1SP, "[AM_Mute_UL_Source_Speech] force Unmute, may pop!");
				}
				SAL_Ramp_SetFinal(SAL_RAMP_UL_PRE_EN);
			} else {
				// already, nothing to do
			}
		}
	} else {

		if(mute) {
			SAL_Ramp_SetMute(SAL_RAMP_UL_PRE_EN); 	
		} else {
			SAL_Ramp_SetUnMute(SAL_RAMP_UL_PRE_EN);
		}
	}
	kal_trace(TRACE_INFO, L1SP_MUTE_DSP_RAMP_CONTROL, 1, SAL_RAMP_UL_PRE_EN, SAL_Ramp_GetState(SAL_RAMP_UL_PRE_EN),mute,am.state);
}	

void AM_Mute_UL_Codec_Speech( bool mute )
{
	kal_trace(TRACE_INFO, L1SP_MUTE_DSP_UL_CODEC_CONTROL, mute);
	SAL_Mute_Ctrl(SAL_MUTE_UL_PRE_EXTCOD, mute); // need to under this position, or background sound won't be mute. 
}

void AM_Mute_UL_POS_EN_Speech( bool mute )
{
	// kal_trace(TRACE_INFO, L1SP_MUTE_DSP_UL_POS_EN_CONTROL, mute);
	// SAL_Mute_Ctrl(SAL_MUTE_UL_POS_EN, mute); // need to under this position, or background sound won't be mute. 

	Sal_Ramp_State_t preState = SAL_Ramp_GetState(SAL_RAMP_UL_POS_EN);
	kal_trace(TRACE_INFO, L1SP_MUTE_DSP_RAMP_CONTROL, 0, SAL_RAMP_UL_POS_EN, preState, mute, am.state);
	if(AM_IsAmInSpeechState())
	{
		if(mute) {
			if( SAL_RAMP_DOWN_DONE == preState){
				// already, nothing to do 
				
			} else {			
				int i; 
				SAL_RampDown_SetInit(SAL_RAMP_UL_POS_EN); 	// SAL_Mute_With_Ramp(SAL_RAMP_DL_PRE_DACA);
				for(i=0; i<14; i++) {	
					kal_prompt_trace(MOD_L1SP, "mute waiting i = %d", i);
					if(SAL_RampDown_IsDone(SAL_RAMP_UL_POS_EN)) {
						break;
					} else {
						// ASSERT(i < 10);
						kal_sleep_task(10);
					}
				}
				if(14 == i) {
					kal_prompt_trace(MOD_L1SP, "[AM_Mute_UL_POS_EN_Speech] force mute, may pop!");
					SAL_Ramp_SetFinal(SAL_RAMP_UL_POS_EN);
					SAL_Ramp_SetMute(SAL_RAMP_UL_POS_EN);					
				}
			}
		}
		else { // unmute
			if(SAL_RAMP_DOWN_DONE == preState){ // no sound, so ramp up	
				int i;
				SAL_RampUp_SetInit(SAL_RAMP_UL_POS_EN);
				for(i=0; i<14; i++) {				
					kal_prompt_trace(MOD_L1SP, "unmute waiting i = %d", i);
					if(SAL_RampUp_IsDone(SAL_RAMP_UL_POS_EN)) {
						break;
					} else {
						// ASSERT(i < 10);
						kal_sleep_task(10);
					}
				}
				if(14 == i) {
					kal_prompt_trace(MOD_L1SP, "[AM_Mute_UL_POS_EN_Speech] force Unmute, may pop!");
				}
				SAL_Ramp_SetFinal(SAL_RAMP_UL_POS_EN);
			} else {
				// already, nothing to do
			}
		}
	} else {

		if(mute) {
			SAL_Ramp_SetMute(SAL_RAMP_UL_POS_EN); 	
		} else {
			SAL_Ramp_SetUnMute(SAL_RAMP_UL_POS_EN);
		}
	}
	kal_trace(TRACE_INFO, L1SP_MUTE_DSP_RAMP_CONTROL, 1, SAL_RAMP_UL_POS_EN, SAL_Ramp_GetState(SAL_RAMP_UL_POS_EN),mute,am.state);
}


void AM_Mute_DL_8K_Speech( bool mute )
{
	// kal_trace(TRACE_INFO, L1SP_MUTE_DSP_DL_8K_CONTROL, mute);
	// SAL_Mute_Ctrl(SAL_MUTE_DL_8K, mute);

	Sal_Ramp_State_t preState = SAL_Ramp_GetState(SAL_RAMP_DL_PRE_DACA);
	kal_trace(TRACE_INFO, L1SP_MUTE_DSP_RAMP_CONTROL, 0, SAL_RAMP_DL_PRE_DACA, preState, mute, am.state);
	if(AM_IsAmInSpeechState())
	{
		if(mute) {
			if( SAL_RAMP_DOWN_DONE == preState){
				// already, nothing to do 
				
			} else {			
				int i; 
				SAL_RampDown_SetInit(SAL_RAMP_DL_PRE_DACA);		// SAL_Mute_With_Ramp(SAL_RAMP_DL_PRE_DACA);
				for(i=0; i<14; i++) {				
					kal_prompt_trace(MOD_L1SP, "mute waiting i = %d", i);
					if(SAL_RampDown_IsDone(SAL_RAMP_DL_PRE_DACA)) {
						break;
					} else {
						// ASSERT(i < 10);
    	    			kal_sleep_task(10);
					}
    			}
				if(14 == i) {
					kal_prompt_trace(MOD_L1SP, "[AM_Mute_DL_8K_Speech] force mute, may pop!");
					SAL_Ramp_SetFinal(SAL_RAMP_DL_PRE_DACA);
					SAL_Ramp_SetMute(SAL_RAMP_DL_PRE_DACA);					
				}
			}
		}
		else { // unmute
			if(SAL_RAMP_DOWN_DONE == preState){		
				int i;
				SAL_RampUp_SetInit(SAL_RAMP_DL_PRE_DACA);
				for(i=0; i<14; i++) {				
					kal_prompt_trace(MOD_L1SP, "unmute waiting i = %d", i);
					if(SAL_RampUp_IsDone(SAL_RAMP_DL_PRE_DACA)) {
						break;
					} else {
						// ASSERT(i < 10);
	        			kal_sleep_task(10);
					}
    			}
				if(14 == i) {
					kal_prompt_trace(MOD_L1SP, "[AM_Mute_DL_8K_Speech] force Unmute, may pop!");
				}
			    SAL_Ramp_SetFinal(SAL_RAMP_DL_PRE_DACA);
			} else {
				// already, nothing to do
			}
		}
	} else {

		if(mute) {
			SAL_Ramp_SetMute(SAL_RAMP_DL_PRE_DACA);		
		} else {
			SAL_Ramp_SetUnMute(SAL_RAMP_DL_PRE_DACA);
		}
	}
	kal_trace(TRACE_INFO, L1SP_MUTE_DSP_RAMP_CONTROL, 1, SAL_RAMP_DL_PRE_DACA, SAL_Ramp_GetState(SAL_RAMP_DL_PRE_DACA),mute,am.state);

	// check the SHERIF STATE after right
	//ASSERT(mute == SAL_Mute_Check(SAL_MUTE_DL_8K));	
}

void AM_Mute_DL_Speech_Traffic( bool mute )
{
	kal_trace(TRACE_INFO, L1SP_MUTE_DSP_DL_TRAFFIC_CONTROL, mute);
	SAL_Mute_Ctrl(SAL_MUTE_DL_POS_EXTCOD, mute); //considering the VT case using P2W, so mute data at this point , not at SAL_MUTE_DL_PRE_SD

	// check the SHERIF STATE after right
	ASSERT(mute == SAL_Mute_Check(SAL_MUTE_DL_POS_EXTCOD));	
}




void AM_Init( void )
{
    am.dsp_2g_reset = false;
	
    am.record_format = AM_RECORD_NONE;
    RB_INIT( am.qfunc );
    am.state = 0;
    am.speech_mode = 0;
   am.pre_speech_mode = 0;
    am.sub_channel = 0;
    am.is_reset_enh = 0;
    // am.speech_off_delay = 0;
    // am.pre_isWBLink = KAL_FALSE;

    am.isFirCoeffSet = false;

   SAL_Dsp_Sph_Init();


    // AM_WriteSidetoneFIR(); // 93 not dsp sidetone, so remove

   if( am.isFirCoeffSet == KAL_FALSE ) {
      AM_WriteWbFirCoeffs( WB_Speech_Input_FIR_Coeff[0], WB_Speech_Output_FIR_Coeff[0] );
      AM_WriteFirCoeffs( WB_Speech_Input_FIR_Coeff[0], WB_Speech_Output_FIR_Coeff[0] );
   }
   // AM_WriteAntiAliasFilter();
   
   am.io_type = NORMAL_MODE;
   am.speech_state = 0;
   // am.voip_state = 0;   
   // am.fLoopBack = false;
   am.sp3g_flag = false;
#if defined(__C2K_SPEECH_SUPPORT__)            
   am.spc2k_flag = false;
   am.c2k_flag   = false;   
#endif   
#if defined(__VOLTE_SUPPORT__)         
   am.sp4g_flag = false;
   am.codec_4g  = -1;
#endif   
   
	// AM_DSP_SetSpeechDigitalGain(DG_DL_Speech); // replace by spGain_Init()
	// AM_DSP_SetSpeechEnhRefDigitalGain(DG_DL_Speech); //am.speechDlEnhRefDigtalGain init // replace by spGain_Init
}

/* ========================================================================= */
/*   Bluetooth control Functions                                             */
/* ========================================================================= */


static void AM_DSP_BluetoothOn( uint32 data , uint32 extraInfo)
{
	Sal_BT_Config cfg_t;
	memset(&cfg_t, 0, sizeof(Sal_BT_Config));
	cfg_t.feed_cfg = true;


   // leave the gain control to AP. do not do any backup now
   // am.bt_digital_gain = AM_DSP_GetSpeechDigitalGain(); //*DP_VOL_OUT_PCM;
   // am.bt_dlEnhRef_digital_gain = AM_GetSpeechEnhRefDigitalGain(); // use am.speechDlEnhRefDigtalGain

   // Zero-pending
   cfg_t.linear_ctrl = SAL_BT_LINEAR_GAIN_CONFIG_ZPAD;
   cfg_t.mode = SAL_BT_MODE_LINEAR;
   // MSB first
   cfg_t.linear_reverse = false;
   
   //set mode and uplink gain
   cfg_t.linear_ul_gain = 1;

   // leave the gain control to AP. do not do any backup now
   // AM_DSP_SetSpeechDigitalGain(default_bt_pcm_out_vol); // *DP_VOL_OUT_PCM = 0x1000;
   // AM_DSP_SetSpeechUplinkSwAgcGain(0); // AGC set to 0 db
   // AM_DSP_SetSpeechEnhRefDigitalGain(default_bt_pcm_out_enh_ref_vol); // 0db 


	SAL_BT_Config(&cfg_t);  
   
   am.io_type = BT_EARPHONE_MODE;
	L1Audio_Msg_AM_IO_Switch( AM_IO_Name(am.io_type) );
}

static void AM_DSP_BluetoothOff( uint32 data , uint32 extraInfo)
{
	Sal_BT_Config cfg_t;
	memset(&cfg_t, 0, sizeof(Sal_BT_Config));
	
   cfg_t.feed_cfg = false;
   
   // AFE_SetBtFlag(KAL_FALSE);

	// leave the gain control to AP. do not do restore the value to default now
    // AM_DSP_SetSpeechDigitalGain(am.bt_digital_gain); 
    // AM_DSP_SetSpeechUplinkSwAgcGain(am.speechUplinkSwAgcGain);
	// AM_DSP_SetSpeechEnhRefDigitalGain(am.speechDlEnhRefDigtalGain);

   SAL_BT_Config(&cfg_t);

   am.io_type = NORMAL_MODE;
   L1Audio_Msg_AM_IO_Switch( AM_IO_Name(am.io_type) );
}

//*******************************************************************//
//*   bt_mode:        1 for cordless mode, 2 for earphone mode      *//
//*   bt_sync_type:   0 for short sync, 1 for long sync             *//
//*   bt_sync_length: range from 1 to 8                             *//
//*******************************************************************//
#if 0 // [FIXME] useless?? 
/* under construction !*/
/* under construction !*/
#endif

void AM_BluetoothOn( uint8 bt_mode )
{
	ASSERT(bt_mode == 2); // expected earphone mode only
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
#endif 

   AM_Enqueue( AM_DSP_BluetoothOn, 0, 0, false );

   AM_FlushQFunction();
}

void AM_BluetoothOff( void )
{
   SP_DSPTone_ForceEnd();

   AM_Enqueue( AM_DSP_BluetoothOff, 0, 0, false );
   AM_FlushQFunction();
}

bool AM_IsBluetoothOn( void )
{
   return SAL_BT_IsEnable();
}

bool AM_IsBTCordlessMode( void )
{
   return false;//( (*DP_AUDIO_PAR&0x1000)!=0 );
}


/* ========================================================================= */


void AM_SND_PlaybackOn( void )
{
   AM_Enqueue( AM_DSP_PCM8K_PlaybackOn, 1, 0, false );	

   AM_FlushQFunction();
}

void AM_SND_PlaybackOff( bool wait )
{

   AM_Enqueue( AM_DSP_PCM8K_PlaybackOff, 1, 0, false );

   if( wait )
      AM_FlushQFunction();
}
// #endif // defined(BGSND_ENABLE) || defined(__SMART_PHONE_MODEM__)

/* ========================================================================= */
/*   PCM_EX control Functions                                            */
/* ========================================================================= */

void AM_DSP_PCM_EX_On(uint32 type, uint32 data)
{
   kal_bool flag; 
   // uint8 voip_state = 0;  
	
   Sal_PCMEx_Config_t cfg;
	memset(&cfg, 0, sizeof(Sal_PCMEx_Config_t));

	
	flag = true;     //this flag is used to choose one among multiple options 	
   switch(type)
   {
      case AM_PCMEX_TYPE_DACA_DEDICATION: // 100:  //DACA ACTIVE
      	if(flag){
			   L1Audio_Msg_AM_SetSpeech( AM_Speech_Feature_Name(3) , L1AUDIO_Str_onoff(1) );
	         ASSERT(!(am.speech_state & SP_STATE_DACA)); 	         
	         am.speech_state |= SP_STATE_DACA;         
				
			   cfg.idle = false;
				
				flag=false;
      	}
      case AM_PCMEX_TYPE_DACA_IDLE_WO_ENH: //101:  //DACA IDLE
			if(flag){
			   ASSERT_REBOOT( !(am.state & AM_STATE_DACA) ); 	        	
	        	ASSERT(am.state == 0);
	         am.state |= AM_STATE_DACA;
	
	        	cfg.idle = true;
				
				flag=false;
	      }
			cfg.swi  = SAL_PCMEX_SWITCH_ON;
			cfg.type = SAL_PCMEX_TYPE_DACA;	
			{
				_DACA_EX_T *dacaExData = (_DACA_EX_T *)data;
				kal_uint32 app_type = dacaExData->app_type;
				//cfg.band = (dacaExData->app_type & DACA_USE_NB) ? SAL_PCM_NARROWBAND : SAL_PCM_WIDEBAND;
				if(app_type & DACA_USE_NB){
					cfg.band = SAL_PCM_NARROWBAND;
				}else if(app_type & DACA_USE_WB){
					cfg.band = SAL_PCM_WIDEBAND;
				}else if(app_type & DACA_USE_SWB){
					cfg.band = SAL_PCM_SUPERWIDEBAND;
				}else if(app_type & DACA_USE_FB){
					cfg.band = SAL_PCM_FULLBAND;
				}else{
					ASSERT(0);
				}         
			}
      
         break;         	      
		// ======================================================================
      case AM_PCMEX_TYPE_DEDICATION: // 0:  //PCM4WAY CTM
	      if(flag){
	         L1Audio_Msg_AM_SetSpeech( AM_Speech_Feature_Name(2) , L1AUDIO_Str_onoff(1) );
	         ASSERT(!(am.speech_state & SP_STATE_PCMNWAY)); 
	         
	         am.speech_state |= SP_STATE_PCMNWAY;
				
			   cfg.idle = false;         
				
				flag=false;
	      } 
		/*
      case AM_PCMEX_TYPE_IDLE_WO_ENH: // 1:  //PCM2WAY Voice
	      if(flag){
	         ASSERT_REBOOT( !(am.state & AM_CONFLICT_STATE) ); 
	        	ASSERT(am.state == 0);
				am.state |= AM_STATE_VOICE;         
				
	        	cfg.idle = true;
				
				flag = false;
	      } 
		*/
      case AM_PCMEX_TYPE_IDLE: //2: PCM2WAY VoIP
	      if(flag){
	         ASSERT_REBOOT( !(am.state & AM_CONFLICT_STATE) );          
	        	ASSERT(am.state == 0);			
	         am.state |= AM_STATE_VOIP;    
				
	        	cfg.idle = true;
				flag = false;
	      }
			
			cfg.swi  = SAL_PCMEX_SWITCH_ON;
			cfg.type = SAL_PCMEX_TYPE_PNW;	    
			
			{
			
			_PCMEX_T *pcmExData = (_PCMEX_T *)data;

			cfg.D2M_ul1 = (0!=(pcmExData->cfgUL1 & USE_D2M_PATH));
			cfg.M2D_ul1 = (0!=(pcmExData->cfgUL1 & USE_M2D_PATH));
			cfg.afterEnh_ul1 = (0!=(pcmExData->cfgUL1 & DATA_SELECT_AFTER_ENH));

			cfg.D2M_ul2 = (0!=(pcmExData->cfgUL2 & USE_D2M_PATH));
			cfg.M2D_ul2 = (0!=(pcmExData->cfgUL2 & USE_M2D_PATH));
			cfg.afterEnh_ul2 = (0!=(pcmExData->cfgUL2 & DATA_SELECT_AFTER_ENH));

			cfg.D2M_ul3 = (0!=(pcmExData->cfgUL3 & USE_D2M_PATH));
			cfg.M2D_ul3 = (0!=(pcmExData->cfgUL3 & USE_M2D_PATH));
			cfg.afterEnh_ul3 = (0!=(pcmExData->cfgUL3 & DATA_SELECT_AFTER_ENH));

			cfg.D2M_ul4 = (0!=(pcmExData->cfgUL4 & USE_D2M_PATH));
			cfg.M2D_ul4 = (0!=(pcmExData->cfgUL4 & USE_M2D_PATH));
			cfg.afterEnh_ul4 = (0!=(pcmExData->cfgUL4 & DATA_SELECT_AFTER_ENH));
			
			cfg.D2M_dl = (0!=(pcmExData->cfgDL & USE_D2M_PATH));
			cfg.M2D_dl = (0!=(pcmExData->cfgDL & USE_M2D_PATH));
			cfg.afterEnh_dl = (0!=(pcmExData->cfgDL & DATA_SELECT_AFTER_ENH));
			

			if(cfg.idle){
				if(pcmExData->bandInfo == PCMEX_BAND_WB){
					cfg.band = SAL_PCM_WIDEBAND;			 
				}else if (pcmExData->bandInfo == PCMEX_BAND_NB){
					cfg.band = SAL_PCM_NARROWBAND;			 
				}else if (pcmExData->bandInfo == PCMEX_BAND_SWB){
					cfg.band = SAL_PCM_SUPERWIDEBAND;			 
				}else if (pcmExData->bandInfo == PCMEX_BAND_FB){
					cfg.band = SAL_PCM_FULLBAND;			 
				}else{ // should never been here
					ASSERT(0);  				
				}
			} else {
				cfg.band = SAL_PCM_DYNAMIC;
			} 
			
			}
			
         break;
      default:
         ASSERT(0); break;                 
   }

   if(cfg.idle == true){
      cfg.delR = DSP_PCM_IDLE_DELAY_TABLE[5][0];
      cfg.delW = DSP_PCM_IDLE_DELAY_TABLE[5][1];
      cfg.delM = DSP_PCM_IDLE_DELAY_TABLE[5][2];
      AFE_TurnOn8K();
	}

	SAL_PcmEx_Config(&cfg);
}


void AM_DSP_PCM_EX_Off(uint32 type, uint32 data)
{
   kal_bool flag;   
   // uint8 voip_state = 0;     
	
   Sal_PCMEx_Config_t cfg;
	memset(&cfg, 0, sizeof(Sal_PCMEx_Config_t));

	flag = true;     //this flag is used to choose one among multiple options       
   switch(type)
   {
      case AM_PCMEX_TYPE_DACA_DEDICATION:  //100: DACA ACTIVE
      	if(flag ){
         	am.speech_state &= ~SP_STATE_DACA;
	         L1Audio_Msg_AM_SetSpeech( AM_Speech_Feature_Name(3) , L1AUDIO_Str_onoff(0) );    
				
         	cfg.idle = false;

				flag = false;
      	}     
      case AM_PCMEX_TYPE_DACA_IDLE_WO_ENH:  //101: DACA IDLE
      	if(flag ){
	         am.state &= ~AM_STATE_DACA;        	
	        	ASSERT(am.state == 0);
				
	        	cfg.idle = true;

				flag =false;
      	}

			cfg.swi = SAL_PCMEX_SWITCH_OFF;
			cfg.type = SAL_PCMEX_TYPE_DACA;
			
         break;                  	            			
		// ======================================================================
      case AM_PCMEX_TYPE_DEDICATION:  //PCM4WAY CTM
      	if(flag ){
	         am.speech_state &= ~SP_STATE_PCMNWAY;
      	   L1Audio_Msg_AM_SetSpeech( AM_Speech_Feature_Name(2) , L1AUDIO_Str_onoff(0) );                   
				
   	      cfg.idle = false;

				flag = false;
      	}
		/*
      case AM_PCMEX_TYPE_IDLE_WO_ENH:  //PCM2WAY Voice
      	if(flag ){
      	   am.state &= ~AM_STATE_VOICE;
   	     	ASSERT(am.state == 0);
				
	        	cfg.idle = true;
				
     			flag = false;
      	} 
      	*/
      case AM_PCMEX_TYPE_IDLE:  //PCM2WAY VoIP
      	if(flag ){
	         am.state &= ~AM_STATE_VOIP;         
   	     	ASSERT(am.state == 0);
				
      	  	cfg.idle = true;

				flag = false;
      	}

			cfg.swi = SAL_PCMEX_SWITCH_OFF;
			cfg.type = SAL_PCMEX_TYPE_PNW;
			
         break;
      default:
         ASSERT(0);
         break;                  
   }    


	SAL_PcmEx_Config(&cfg);
   if(cfg.idle == true){
	   AFE_TurnOff8K();
   }   
}

/**
	@type: AM_PCMEX_TYPE, indicate the PCM EX type
	@p2exData: Addess of "glable variable" like pcmEx, dacaEx
*/
void  AM_PCM_EX_On( AM_PCMEX_TYPE type, uint32 p2exData)
{
	// kal_uint8 aud_func;
   if(type == AM_PCMEX_TYPE_IDLE 
#if 0   	
/* under construction !*/
/* under construction !*/
#endif		
		|| type == AM_PCMEX_TYPE_DACA_IDLE )
   {	
		

		// aud_func = L1SP_SPEECH;
   }	
/* 
   else 
	{
      // aud_func = L1SP_VOICE;
   } 
*/
   

   AM_Enqueue( AM_DSP_PCM_EX_On, type, p2exData, false );

   AM_FlushQFunction();
}


void  AM_PCM_EX_Off( AM_PCMEX_TYPE type, uint32 p2exData)
{
/*
	// find out the aud_func
   kal_uint8 aud_func = L1SP_MAX_AUDIO;

   if( type == AM_PCMEX_TYPE_IDLE 
#if 0   	
		|| type == AM_PCMEX_TYPE_REC_ONLY_CAL 
		|| type == AM_PCMEX_TYPE_REC_PLAY_CAL
#endif		
		|| type == AM_PCMEX_TYPE_DACA_IDLE ) {
      aud_func = L1SP_SPEECH;
   } else {
      aud_func = L1SP_VOICE;
   }
*/

   AM_Enqueue(AM_DSP_PCM_EX_Off, type, p2exData, false );
   AM_FlushQFunction();
}

bool AM_IsVoIPOn( void )
{
   return( (bool)((am.state & AM_STATE_VOIP) != 0) );
}

/* ========================================================================= */

uint16 AM_Status( void )
{
   return am.state;
}

/* phase out. lagency
void AM_EnableToneLoopBackFlag( kal_bool param )
{
   if(param)
      am.toneLoopbackRec = KAL_TRUE;
   else
      am.toneLoopbackRec = KAL_FALSE;
}
*/
/* ========================================================================= */
/*   Functions for DSP PCM Router                                            */
/* ========================================================================= */
#define PCM_ROUTER_DELAY_READ 0
#define PCM_ROUTER_DELAY_WRITE 0xF0
#define PCM_ROUTER_DELAY_DL 0x38
#define PCM_ROUTER_DELAY_UL 0x118

void AM_DSP_PcmRouter_On( uint32 voiceMode, uint32 extraInfo )
{
	
	Sal_PCM_Router_t pcmrt; 

   ASSERT_REBOOT( !(am.state & AM_CONFLICT_STATE) );
	L1Audio_Msg_AM_Switch( AM_Switch_Name(11), L1AUDIO_Str_onoff(1) );

	// setting
	memset(&pcmrt, 0 , sizeof(Sal_PCM_Router_t));
	
	pcmrt.cod_band = 0; //voiceMode; 
	pcmrt.dev_band = voiceMode;
	pcmrt.delR = PCM_ROUTER_DELAY_READ;
	pcmrt.delW = PCM_ROUTER_DELAY_WRITE;
	pcmrt.delM_DL = PCM_ROUTER_DELAY_DL;
	pcmrt.delM_UL = PCM_ROUTER_DELAY_UL;	

	// turn on 8k
	AFE_TurnOn8K();	
	
	SAL_PCM_Router_Open(&pcmrt);
	
	am.state |= AM_STATE_VOIP; 
}



void AM_PcmRouter_On(void)
{
	kal_uint8 voiceMode;

	// the following chips did not provide the function 
#if defined(MT6280) || defined(MT6589) || defined(MT6572) || defined(MT6582) || defined(MT6571) || defined(MT6592) || defined(MT6290)
	ASSERT(0);
#endif
	
	voiceMode = AFE_GetVoice8KMode();
	
	AM_Enqueue( AM_DSP_PcmRouter_On, voiceMode, 0, false );
	
	AM_FlushQFunction();

}

void AM_DSP_PcmRouter_Off( uint32 info, uint32 extraInfo )
{
	L1Audio_Msg_AM_Switch( AM_Switch_Name(11), L1AUDIO_Str_onoff(0) );

	SAL_PCM_Router_Close(true);

	AFE_TurnOff8K();

	am.state &= (~AM_STATE_VOIP);
}


void AM_PcmRouter_Off(void)
{

   AM_Enqueue( AM_DSP_PcmRouter_Off, 0, 0, false );

   AM_FlushQFunction();
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

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
#endif 

bool AM_IsConflictState( void )
{
   if( am.state & AM_CONFLICT_STATE )
      return true;
   else
      return false;
}


kal_uint32 AM_Get2GResyncThreshold(void)
{
   return AM_2G_RESYNC_THRESHOLD;
}

//=============================================================================
// sw digital gain related
//=============================================================================

void AM_DSP_SetSpeechDigitalGain(kal_uint16 digitalVol)
{
	am.speechDigitalGain = digitalVol;
	SAL_DGain_Set_DL(digitalVol);

	L1Audio_Msg_AM_DSP_GAIN(AM_Gain_Name(1), digitalVol);
}

kal_uint16 AM_DSP_GetSpeechDigitalGain(void)
{
	return SAL_DGain_Get_DL();
}


void AM_DSP_SetSpeechUplinkSwAgcGain(kal_uint16 digitalVol)
{
	am.speechUplinkSwAgcGain = digitalVol;
	SAL_AGC_SetGain(digitalVol);

	L1Audio_Msg_AM_DSP_GAIN(AM_Gain_Name(3), digitalVol);
}

kal_uint16 AM_GetSpeechEnhRefDigitalGain(void)
{
	return am.speechDlEnhRefDigtalGain;
}

void AM_DSP_SetSpeechEnhRefDigitalGain(kal_uint16 digitalVol)
{
	am.speechDlEnhRefDigtalGain = digitalVol;
	SAL_ENH_Gain_Set_DL(digitalVol);

	L1Audio_Msg_AM_DSP_GAIN(AM_Gain_Name(4), digitalVol);
}

