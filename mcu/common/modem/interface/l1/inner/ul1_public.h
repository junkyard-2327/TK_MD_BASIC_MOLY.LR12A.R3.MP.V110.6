/*******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/


/*****************************************************************************
 *
 * Filename:
 * ---------
 * ul1_public.h
 *
 * Project:
 * --------
 *   MT6276 Project
 *
 * Description:
 * ------------
 *  UL1 exports functions which are used by other Layer 1 modules, such as L1, RTB, DM.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#ifndef UL1_PUBLIC_H
#define UL1_PUBLIC_H

#if 0
#if defined(__UL1_GEMINI__) || defined ( __GEMINI_GSM__ )
/* under construction !*/
#endif
#endif
//#include "kal_general_types.h"
#include "ul1_def.h"

#define MS_PER_FRAME                   10
#define CHIP_COUNT_PER_FRAME           38400
#define CHIP_COUNT_PER_SLOT            2560
#define CHIP_COUNT_PER_SYMBOL          256
#define ECHIP_COUNT_PER_CHIP           8
#define ECHIP_COUNT_PER_FRAME          ( CHIP_COUNT_PER_FRAME*ECHIP_COUNT_PER_CHIP )
#define ECHIP_COUNT_PER_SLOT           ( CHIP_COUNT_PER_SLOT*ECHIP_COUNT_PER_CHIP )
#define SLOTS_PER_FRAME                15
#define SUBFRAMES_PER_FRAME            5
#define SLOTS_PER_SUBFRAME             3
#define ECHIP_2_SLOT( len )            ( (len) / ECHIP_COUNT_PER_SLOT )
#define ECHIP_2_FRAME( len )           ( (len) / ECHIP_COUNT_PER_FRAME )
#define MAX_SFN                        4096
#define MAX_CFN                        256
#define FIND_TIMER_ALL_SFN_RANGE       (MAX_SFN - 1)
#define FIND_TIMER_ALL_CFN_RANGE       (MAX_CFN - 1)

#define TIMER_PRIORITY_INTRABCH_LOW    0x00000001   /* SIB, SIB7, SFN, SFN meas. */
#define TIMER_PRIORITY_INTRABCH_MED    0x00000002   /* SIB, SIB7, SFN, SFN meas. */
#define TIMER_PRIORITY_INTRABCH_HIGH   0x00000004   /* SIB, SIB7, SFN, SFN meas. */
#define TIMER_PRIORITY_INTERBCH_LOW    0x00000010   /* SIB, SIB7, SFN, SFN meas. */
#define TIMER_PRIORITY_INTERBCH_MED    0x00000020   /* SIB, SIB7, SFN, SFN meas. */
#define TIMER_PRIORITY_INTERBCH_HIGH   0x00000040   /* SIB, SIB7, SFN, SFN meas. */
#define TIMER_PRIORITY_MAINCH          0x00000080   /* PICH(PCH), FACH, DLDCH, ULDCH. */
#define TIMER_TRIORITY_PHASE2_PCH      0x00020000   /* Phase 2 PCH */
#define TIMER_PRIORITY_SUBCH           0x00000100   /* CTCH, RACH. */
#define TIMER_PRIORITY_TGPS            0x00000200   
#define TIMER_PRIORITY_CCM             0x00000400   /* Channel configuration start/stop. */
#define TIMER_PRIORITY_BCHSTOP         0x00000800   
#define TIMER_PRIORITY_STOP_ALL        0x00002000   /* Stop all CH, CM, CS */
#define TIMER_PRIORITY_CS_LOW          0x00001000   /* FS or CS, depending on L1 state. */
#define TIMER_PRIORITY_CS_HIGH         0x00004000   /* SCS. */
#define TIMER_PRIORITY_DCH_CONTROL     0x00008000
#define TIMER_PRIORITY_HSDSCH_CONTROL  0x00000008   /* HSDSCH control */
#define TIMER_PRIORITY_EDCH_CONTROL    0x00002000   /* EDCH control */
#define TIMER_PRIORITY_EFACH_DRX_MEAS  0x10000000   /* Inter-F and inter-RAT CM for EFACH DRX */
#define TIMER_PRIORITY_EM              0x00010000   /* EM usage*/

#define UL1_FRAME          ( 10000 )
#define UL1_FRAME2RTB( x ) ( (x)*UL1_FRAME )
#define UL1_ECHIP2RTB( x ) ( ((x)*25)/(2*384) )
#define RTB2UL1_ECHIP( x ) ( ((x)*2*384)/25 )

typedef kal_int16    ACT_TIME;   /* -1 ~ 255 */
typedef kal_int16    CFN;        /* 0 ~ 255 */
typedef kal_int16    SFN;        /* 0 ~ 4095 */
typedef kal_uint32   UTimeStamp;
typedef kal_uint8    UTID;
typedef kal_uint16   UARFCN;

/* UTimer structures and API. */
#define UL1_TIMER_TYPE(x) x
typedef enum
{
   #include "ul1_timertype.h"
} UTimerType;
#undef UL1_TIMER_TYPE

typedef struct
{
   kal_int16      fn; 
   kal_int32      echips;
} UTime;

/* L1S use only!
  * It is used for calculating DL TPC CER(Command Error Rate). */
#ifdef __L1_STANDALONE__
typedef struct
{
   LOCAL_PARA_HDR
   FDD_edch_scell_E     carrier;
   kal_uint8            cfn; 
   kal_uint8            dl_tpc_result[15]; /* DL TPC result for each slot. 
                                             - dl_tpc_result[0]: slot 0, dl_tpc_result[1]: slot 1, dl_tpc_result[2]: slot 2,...
                                             - dl_tpc_result[]: 1 -> UP; 3 -> DOWN; 0 -> HOLD */
} ul1d_dl_tpc_result_ind_struct;
#endif

void UL1_SFNTimeAdd_Frames( UTime* time, kal_uint16 fn );
void UL1_SFNTimeSub_Frames( UTime* time, kal_int16 fn );
void UL1_SFNTimeAdd_EChips( UTime* time, kal_int32 tm );
void UL1_SFNTimeSub_EChips( UTime* time, kal_int32 tm );
void UL1_SFNTimeAdd( UTime* time, kal_int16 fn, kal_int32 tm );
void UL1_SFNTimeSub( UTime* time, kal_int16 fn, kal_int32 tm );
kal_int32 UL1_SFNTimeDiff( UTime timeA, UTime timeB);
void UL1_CFNTimeAdd_EChips( UTime* time, kal_int32 tm );
void UL1_CFNTimeSub_EChips( UTime* time, kal_int32 tm );
void UL1_CFNTimeAdd( UTime* time, kal_int16 fn, kal_int32 tm );
void UL1_CFNTimeSub( UTime* time, kal_int16 fn, kal_int32 tm );
kal_int32 UL1_CFNTimeDiff( UTime timeA, UTime timeB);
//Riley add
void UL1_TimeAdd(UTime * time,kal_int32 fn,kal_int32 tm);
void UL1_TimeSub( UTime* time, kal_int16 fn, kal_int32 tm, kal_int16 max_sfn_add );
//Riley add end
/* End of Time arithmetic. */
void UL1_TimeAdd_EChips( UTime* time, kal_int32 tm, kal_int32* max_sfn_add );
#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )
kal_int16 UL1I_GetTimeStamp_2G( kal_int32* tsChips );
#endif

/* Frame numbers arithmetic. */
SFN UL1_SFNAdd( SFN a, SFN b );
SFN UL1_SFNAdd_For_Sib( SFN a, SFN b );
SFN UL1_SFNSub( SFN a, SFN b );
kal_int16 UL1_SFNDiff( SFN a, SFN b );
CFN UL1_CFNAdd( CFN a, CFN b );
CFN UL1_CFNSub( CFN a, CFN b );
kal_int16 UL1_CFNDiff( CFN a, CFN b );
CFN UL1_GetCFN( SFN sfn );
/* End of Frame numbers arithmetic. */

/* L1I queue function. */
void UL1I_QueueFunction( void ( *code )( void ) );
void UL1I_RemoveQueueFunction( void ( *code )( void ) );
/* End of L1I queue function. */

kal_int16 UL1I_Calc_Delay_To_Next_PICH( void );
#if defined(__UL1_GEMINI__) || defined ( __GEMINI_GSM__ )
void* UL1I_Get_PICHUTimerAddress( void );
#endif

kal_bool UL1C_Is3GDedicated( void );
kal_bool UL1C_CheckSleep( kal_uint32* sn );
#ifdef MTK_SLEEP_ENABLE
void UL1C_RecoverTime( kal_uint16 fn );
#endif

/*Speech-Modem Resycn API*/
void UL1D_Speech_Resync_Reset_Time_Offset(void);
kal_int16 UL1D_Speech_Resync_Get_Time_Offset(void);
void UL1D_Speech_Resync_Update_Time_Offset(kal_bool direction);

#endif

