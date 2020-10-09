/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2011
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
 * afe_6291.c
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 *  TK6291 chip dependent afe driver
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
#if defined(MT6765)

#include "afe.h"
#include "sync_data.h"

//=============================================================================================
//                  AFE Loop back
//=============================================================================================

/// Caller: Task
void AFE_TurnOnLoopback( void )
{   
   *AFE_PCM_CON0 |= 0x20000000;
   Data_Sync_Barrier();
   afe.loopback = KAL_TRUE;
   kal_brief_trace(TRACE_STATE, AFE_SWITCH_LOOPBACK, '+');
}

void AFE_TurnOffLoopback( void )
{	 
   *AFE_PCM_CON0 &= ~0x20000000;
   Data_Sync_Barrier();
   afe.loopback = KAL_FALSE;

   kal_brief_trace(TRACE_STATE, AFE_SWITCH_LOOPBACK, '-');
}

//=============================================================================================
//                  Audio/8K Clock Related
//=============================================================================================

void AFE_TurnOn8K( void )
{
#ifdef L1D_TEST
 extern  int  PollLoopbackMode(void);
   if( PollLoopbackMode() !=1 )
#endif
   {
      
      // turn on clock gate
      *USIP_CLK_ENABLE =  0x4;
      Data_Sync_Barrier();

      // 0. code in origianl init
	  // *AFE_VMCU_CON      = 0;
      // *AFE_VMCU_CON1     = 0;
      *AFE_AMCU_CON0     = 0;
      *AFE_AMCU_CON1     = 0;
      // *AFE_MCU_CON0      = 0;
      // *AFE_MCU_CON1      = 0x88; // default using 32k mode
      // *AFE_IRQ_CON1      = 0x05; // default using DSP voice IRQ
	  // *AFE_PCM_CON0      = 0x8400800A; // default using 32k mode, 16 pin
      // *AFE_CONN0         = 0x54321076;

      // 1. config MDAFE_MCU_CON1, DSP DL/UL data rate       
      if( afe.voice8kMode == 0 )       //                narrow band,  4k mode,   8k sampling rate
         *AFE_MCU_CON1 = 0x00;
      else if ( afe.voice8kMode == 1 ) //                    wide bank,  8k mode, 16k sampling rate
         *AFE_MCU_CON1 = 0x44;
      else if ( afe.voice8kMode == 3 ) //                      full bank, 24k mode, 48k sampling rate
         *AFE_MCU_CON1 = 0xAA;
      else //if ( afe.voice8kMode == 2 )          //default, super wide bank, 16k mode, 32k sampling rate
         *AFE_MCU_CON1 = 0x88;
      Data_Sync_Barrier();
         
      // 2. config MDAFE_VMCU_CON1
      *AFE_VMCU_CON1 = 0; // Fix value, may set it on init
      Data_Sync_Barrier();
      
      // 3. config MDAFE_PCM_CON0, not turn on pcm 
      if( afe.voice8kMode == 0 )      //                  narrow band,   4k mode,   8k sampling rate
         *AFE_PCM_CON0 = 0x8400000A; // not turn on pcm 
      else if ( afe.voice8kMode == 1 )//                      wide bank,   8k mode, 16k sampling rate
         *AFE_PCM_CON0 = 0x8400400A;
      else if ( afe.voice8kMode == 3 )//                        full bank, 24k mode, 48k sampling rate
         *AFE_PCM_CON0 = 0x8400A00A;
      else //if ( afe.voice8kMode == 2 )          //default, super wide bank, 16k mode, 32k sampling rate
         *AFE_PCM_CON0 = 0x8400800A;
      Data_Sync_Barrier();
      	
      // 4. config MDAFE_IRQ_CON1 for irq setting
      *AFE_IRQ_CON1 = 0x05; // Fix value, may set it on init
      Data_Sync_Barrier();
      
      // 5. config MDAFE_CONN0 for inteconnection
#if defined(__MODEM_ONLY__) && (defined(ELBRUS) || defined(MT6763)|| defined(MT6739) || defined(MT6765))
      // For ELBRUS, MD-AFE loopback
      // MD: DL ( dsp_dl_data_ch0 / i06 )  -->  UL( dsp_ul_data_ch0 / o02 )
      // AP: UL ( pcmrx_d0 / i00 )  -->  DL ( pcmrx_d0 / o00)
      *AFE_CONN0 = 0x54327610;
#else
      *AFE_CONN0 = 0x54321076; // Fix value, may set it on init
      *AFE_CONN0 = afeRG.afe_conn0; 
#endif      
       
      Data_Sync_Barrier();
      
      // 6. config MDAFE_VMCU_CON0 = 0x00000001 to open Voice IRQ
      *AFE_VMCU_CON = 0x1; 
      Data_Sync_Barrier();
      
      // 7. config MDAFE_MCU_CON0 = 0x00000001 to open whole AFE
      *AFE_MCU_CON0 = 0x1;
      Data_Sync_Barrier();
      
      // 8. config MDAFE_PCM_CON0 = MDAFE_PCM_CON0 | 0x00000001 open PCM interface
      *AFE_PCM_CON0 |= 0x1; 
      Data_Sync_Barrier();
      
      // AFE_SetRefVol(KAL_TRUE);

      ////L1Audio_Msg_AFE_Switch( L1AUDIO_Str_onoff(1), AFE_Switch_Name(0) );
   }
}


void AFE_TurnOff8K( void )
{

   // i.	close PCM interface
   *AFE_PCM_CON0 &= ~0x1;
   Data_Sync_Barrier();

   AFE_DELAY(135);
	
   // ii.close 8k IRQ
   *AFE_VMCU_CON = 0x0;
   Data_Sync_Barrier();
   
   // iii.	close whole AFE
   *AFE_MCU_CON0  = 0;   
   Data_Sync_Barrier();

   *USIP_CLK_DISABLE = 0x4;
   Data_Sync_Barrier();
   
	////L1Audio_Msg_AFE_Switch( L1AUDIO_Str_onoff(0), AFE_Switch_Name(0) );
}

#if 0
/* under construction !*/
/* under construction !*/
#if __RELOAD_HW_COEFF__
/* under construction !*/
/* under construction !*/
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
#if __RELOAD_HW_COEFF__
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
#endif

//=============================================================================================
//                  Chip Specific AFE Init
//=============================================================================================
void AFE_Chip_Init( void )
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(__MODEM_ONLY__) && (defined(ELBRUS) || defined(MT6763) || defined(MT6739)|| defined(MT6765))
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif //#if defined(__MODEM_ONLY__) && defined(ELBRUS)
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
   AFE_SetConn0(0x54321076);
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
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
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
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#endif


/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        AFE Feature or Chip Sepcific Functions
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/

/**
	@return: 0 == narrow band, 4k mode; 1 == wide band, 8k mode; 2 == extra wide band, 16k mode;
*/
kal_uint8 AFE_GetVoice8KMode(void)
{
	return afe.voice8kMode;
}


/**
	@mode: 0 == narrow band, 4k mode; 1 == wide band, 8k mode; 2 == extra wide band, 16k mode;
*/
void AFE_SetVoice8KMode(kal_uint8 mode)
{
   afe.voice8kMode = mode;
}

#endif //#if defined(MT6765)
