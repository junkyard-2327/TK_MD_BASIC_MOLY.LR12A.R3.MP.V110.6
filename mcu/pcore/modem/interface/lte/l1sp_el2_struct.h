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
 * Filename:
 * ---------
 *   l1sp_el2_struct.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   message and common structure definition between LTM and EL2 modules.
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 24 2017 jia-shi.lin
 * [MOLY00273519] [MT6763] volte data prediction design change
 * volte data prediction design change
 *
 * 07 26 2017 jia-shi.lin
 * [MOLY00266995] [MT6763] add normal mode for AAM report
 * add normal mode for AAM report
 *
 * 05 23 2017 fu-shing.ju
 * [MOLY00241210] [6293][Speech Driver]EVS Speech Driver
 * EVS speech driver.
 *
 * 10 28 2016 jia-shi.lin
 * [MOLY00194987] [MT6293][UMOLYA/PS DEV] EMAC maintenance
 * emac timing report for volte dsp
 *
 * 10 28 2016 fu-shing.ju
 * [MOLY00210308] [93MD]early porting.
 * Modify AAM interface.
 *
 * 06 10 2015 fu-shing.ju
 * [MOLY00091627] TK6291 development
 * Add time information in l1sp_emac_volte_timing_info_struct.
 ****************************************************************************/


#ifndef  _L1SP_EL2_STRUCT_H_
#define  _L1SP_EL2_STRUCT_H_

/*
2017/03/14 Add comment to clarify interface
 
1. drx_period
This field is same with long cycle period defined in 3GPP spec.
The value means how often UE need to wake-up, 0 = no DRX configuration, possible value are 10,20,32,40,64,80,128,160,256,320,512,640,1024,1280,2048,2560.

2. sr_period
The value means how often UE can send SR, possible value are 1,2,5,10,20,40,80.
This field value will be modified when this change will reduce UE power-consumption.
When VSR is trigger, sr_period will possibly change into 20/40 ms in silence mode and 20ms in talking mode.
When EVSR is trigger, sr_period will possibly change into 40ms in talking mode.

    a. VSR
    If DRX cycle < 20 ms  || DRX cycle < SR period
        Do not trigger VSR. use original SR period.
    If DRX cycle < 40ms
        If SR period >= 20 then use SR period, otherwise set period=20
    If DRX cycle >= 40ms
        Silence: if SR period >= 40 then use SR period, otherwise set period=40
        Talking: if SR period >= 20 then use SR period, otherwise set period=20
    b. eVSR
        b.1  Base condition
             CDRX cycle length == 40ms && SR periodicity < 40ms
        b.2  Dynamic start condition
             UL grant received in on duration && UL grant TBS > threshold for consecutive NSTART times
        b.3  Dynamic stop condition
             Data exists in VoLTE RB > 30ms 
               
        If (b.1 && b.2 && !b.3)
        Talking mode will also set SR period = 40.

3. time_to_next_on
Define as the time duration between current time and next DRX on duration (wake-up).

4. time_to_trigger_sr
Define as the time duration between current time and next SR.

5. current_time_us
Define as current time that use ust_get_current_time to get.
*/
#include "kal_public_api.h"

typedef enum{
   SP4G_AAMPLUS_STA_SILENCE = 0,
   SP4G_AAMPLUS_STA_TALK,
   SP4G_AAMPLUS_STA_SID_FIRST
}SP4G_AAMPlus_State_t;

typedef enum{
   L1SP_EMAC_REPORT_MODE_SR_0_AFTER_HO = 0,
   L1SP_EMAC_REPORT_MODE_NORMAL = 1
}l1sp_emac_report_mode_e;

typedef struct{
    LOCAL_PARA_HDR
    //raw information from speech driver
    SP4G_AAMPlus_State_t silence_talk;
    kal_uint32 notify_to_data_ms;
    kal_uint32 issue_time;
}l1sp_emac_volte_notify_mode_change_struct;


typedef struct{
   LOCAL_PARA_HDR
   //raw information from eMAC
   kal_uint32 RX_period;   //ms
   kal_uint32 TX_period;   //ms
   kal_uint32 time2nextRX; //ms
   kal_uint32 time2nextTX; //ms
   kal_uint32 issueTime;   //ms
}l1sp_emac_resync_info_struct;


typedef struct{
    kal_uint32 drx_period;
    kal_uint32 sr_period;
    kal_uint32 time_to_next_on;
    kal_uint32 time_to_trig_sr;
    kal_uint32 current_time_us;
}l1sp_emac_volte_timing_info_struct;

#endif   /* ----- #ifndef _L1SP_EL2_STRUCT_H_ ----- */

