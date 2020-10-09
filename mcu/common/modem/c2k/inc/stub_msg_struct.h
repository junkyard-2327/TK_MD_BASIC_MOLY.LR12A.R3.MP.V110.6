/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2017
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
* FILE NAME   :stub_msg_struct.h 
*
* DESCRIPTION :This module defines the Layer 1 ILM messgae struct for L1 STUB module
*
*
* HISTORY     :
*     1.File Create by Hairong.Wang, 2017,02,20
*
*****************************************************************************/

#ifndef _STUB_MSG_STRUCT_H
#define _STUB_MSG_STRUCT_H

#ifdef MTK_DEV_C2K_SRLTE_BASE
/**********************************************STUB Interface Related*********************************/
/* The  rat status enmu. */
typedef enum
{
    CBS_LL1STUB_RAT_FLIGHT,
    CBS_LL1STUB_RAT_STANDBY,
    CBS_LL1STUB_RAT_ACTIVE
}CbsLl1stubRatStatusE;

/* The  mode status enmu. */
typedef enum
{
    CBS_LL1STUB_NULL_MODE,
    CBS_LL1STUB_IDLE_MODE,
    CBS_LL1STUB_CONNECT_MODE
}CbsLl1stubModeStatusE;

/* The  RAT enmu. */
typedef enum
{
    INVALID_RAT,
    STUB_LTE,    
    STUB_GSM,
    STUB_TDS
    
}RatE;

/* RAT_MODE_T */
typedef struct
{
   LOCAL_PARA_HDR
   RatE                        Rat;             /* LTE/GSM  */
   CbsLl1stubRatStatusE        RatStatus;       /* Flight/Standby/Active. */
   CbsLl1stubModeStatusE       ModeStatus;      /* NULL/IDLE/CONNECTED. */
}cbs_rat_mode_status_ind_struct,
el1_rat_mode_status_ind_struct;


/* The  Operation enmu. */
typedef enum
{
    MD1_STUB_INVALID_OP,
    MD1_STUB_OP_ADD,
    MD1_STUB_OP_DELETE,
    MD1_STUB_OP_CHANGE
}StubOperationE;


/* The  ChannelType enmu. */
typedef enum
{
    /* C2K channel types define*/
    StubCTimerNone = 0,                                /*00*/
    StubCTimerXL1IcsPilot,                             /*01*/
    StubCTimerXL1IcsSync,                              /*02*/
    StubCTimerXL1NsltPchOvhd,                          /*03*/
    StubCTimerXL1NsltInterMeas,                        /*04*/
    StubCTimerXL1AfltMeas,                             /*05*/
    StubCTimerXL1SltCci,                               /*06*/
    StubCTimerXL1SltQpch_1,                            /*07*/
    StubCTimerXL1SltQpch_2,                            /*08*/
    StubCTimerXL1SltPch,                               /*09*/
    StubCTimerXL1SltPchLostDet,                        /*10*/
    StubCTimerXL1SltnterMeas,                          /*11*/
    StubCTimerXL1ConnectPsRx,                          /*12*/
    StubCTimerXL1ConnectInterMeas,                     /*13*/
    StubCTimerXL1ConnectAfltMeas,                      /*14*/
    StubCTimerEvL1IcsPilot,                            /*15*/
    StubCTimerEvL1IcsSync,                             /*16*/
    StubCTimerEvL1NsltCC,                              /*17*/
    StubCTimerEvL1SltPch,                              /*18*/
    StubCTimerEvL1InterMeas,                           /*19*/
    StubCTimerEvL1ConnectRx,                           /*20*/
    StubCTimerEvL1ConnectInterMeas,                    /*21*/
    StubCTimerEvStdbyMeas,                             /*22*/
    StubCTimerEvStdbySync,                             /*23*/
    StubCTimerEvStdbyCgi,                              /*24*/
    StubCTimerEnd,                                     /*25*/
    /* LTE channel types define */
    Stub4GTimerMacDrxsch,                              /*26*/
    Stub4GTimerRach,                                   /*27*/
    Stub4GTimerIntraFreqCsMeas,                        /*28*/
    Stub4GTimerInterFreqCsMeas,                        /*29*/
    Stub4GTimerInterFreqGapCsMeas,                     /*30*/
    Stub4GTimerDlSync,                                 /*31*/
    Stub4GTimerNbrBcchHigh,                            /*32*/
    Stub4GTimerNbrBcchCsHigh,                          /*33*/
    Stub4GTimerPaging,                                 /*34*/
    Stub4GTimerPagingDump,                             /*35*/
    Stub4GTimerServBcch,                               /*36*/
    Stub4GTimerSrvBcch,                                /*37*/
    Stub4GTimerSrvBcchCs,                              /*38*/
    Stub4GTimerNbrBcchMiddle,                          /*39*/
    Stub4GTimerNbrBcchCsMiddle,                        /*40*/
    Stub4GTimerNbrBcchLow,                             /*41*/
    Stub4GTimerNbrBcchCsLow,                           /*42*/
    Stub4GTimerCsr,                                    /*43*/

    /* GSM channel types define */
    Stub2GTimerBcch,                                   /*44*/
    Stub2GTimerNBcch,                                  /*45*/
    Stub2GTimerPdtch,                                  /*46*/
    Stub2GTimerPacch,                                  /*47*/
    Stub2GTimerPtcch,                                  /*48*/
    Stub2GTimerServingSB,                              /*49*/
    Stub2GTimerPollingResp,                            /*50*/
    Stub2GTimerSingleDl,                               /*51*/
    Stub2GTimerPollResp,                               /*52*/
    Stub2GTimerPch,                                    /*53*/
    Stub2GTimerSB,                                     /*54*/
    Stub2GTimerFCBSearch,                              /*55*/
    Stub2GTimerFullScan,                               /*56*/
    Stub2GTimerSingleUlTwoPhase,                       /*57*/
    Stub2GTimerAgch,                                   /*58*/
    Stub2GTimerCbch,                                   /*59*/
    Stub2GTimerPtcchUp,                                /*60*/
    Stub2GTimerPtcchDown,                              /*61*/
    Stub2GTimerFcchT,                                  /*62*/
    Stub2GTimerSchT,                                   /*63*/
    Stub2GTimerIM,                                     /*64*/
    Stub2GTimerPdch,                                   /*65*/    
    StubTdsTimerBchHigh,                               /*66*/
    StubTdsTimerBchMed,                                /*67*/
    StubTdsTimerBchLow,                                /*68*/
    StubTdsTimerPich,                                  /*69*/
    StubTdsTimerPch3G,                                 /*70*/
    StubTdsTimerRxtx,                                  /*71*/
    StubTdsTimerMeas,                                  /*72*/
    StubTdsTimerSCS,                                   /*73*/
    StubTdsTimerRa,                                    /*74*/
    
    StubTotalTimerNum                                  /*75*/
}ChannelTypeE;

#define C2K_CHANNEL_START  StubCTimerNone
#define C2K_CHANNEL_END    StubCTimerEnd
#define LTE_CHANNEL_START  Stub4GTimerMacDrxsch
#define LTE_CHANNEL_END    Stub4GTimerCsr
#define GSM_CHANNEL_START  Stub2GTimerBcch
#define GSM_CHANNEL_END    Stub2GTimerPdch
#define TDS_CHANNEL_START  StubTdsTimerBchHigh
#define TDS_CHANNEL_END    StubTdsTimerRa


/* SCRIPT_CHANNEL_INFO_T */
typedef struct
{
   LOCAL_PARA_HDR
   RatE                 Rat;               /* LTE/GSM  */
   StubOperationE       Operation;         /* add/delete/change. */
   ChannelTypeE         ChannelType;       /* LTE/GSM channel type */
   kal_uint32           ChannelOffset;     /* channel offset base on FRCtime(0),unit:us */
   kal_uint32           ChannelLength;     /* channel length, unit:us */
   kal_uint32           Period;            /* channel period. for PCH channel, period means DRXCycle;"0"means for continuous receive channel; 0xFFFFFFFF for unperiodic channel;uint:us */
}cbs_channel_config_ind_struct;

/* CHANNEL_INFO_T */
typedef struct
{
   kal_bool                 valid;             /* indicate the channel is valid or not */
   kal_uint32               Offset;            /* channel offset base on FRCtime(0),unit:us */
   kal_uint32               Length;            /* channel length, unit:us */
   kal_uint32               Period;            /* channel period. for PCH channel, period means DRXCycle;"0"means for continuous receive channel; 0xFFFFFFFF for unperiodic channel;uint:us */
}CBS_CHANNEL_DATA_T;

/* CBS LTE/GSM STATE enum */
typedef enum
{
    FLIGHT,
    LTE_SUSPEND,
    LTE_STANDBY,
    LTE_IDLE,
    LTE_PS,
    GSM_IDLE,
    GSM_V_IDLE,    
    GSM_PS,
    TDS_IDLE,
    TDS_PS,
    TDS_STANDBY,
    TDS_V_IDLE
    
}CbsRtbModeStateE;

/* CbsRatStatusT */
typedef struct
{
   CbsRtbModeStateE        LteState;           /* indicate LTE state */
   CbsRtbModeStateE        GsmState;           /* indicate GSM state */   
   CbsRtbModeStateE        TdsState;           /* indicate TDS state */
}CBS_RTB_MODE_STATE_T;


/* Ll1stubCbsChannelNotifyT */
typedef struct
{
   ChannelTypeE            ChannelType;       /* LTE's inter_freq number */
   StubOperationE          Operation;         /* add/delete/change. */

}LL1STUB_CBS_CHANNEL_NOTIFY_T;

typedef struct
{
   LOCAL_PARA_HDR
   LL1STUB_CBS_CHANNEL_NOTIFY_T    msg;
}ll1stub_cbs_channel_notify_ind_struct;

/* EL1_ACTIVE_MEASURE_INFO_T */
typedef struct
{
   LOCAL_PARA_HDR
   kal_uint16            FreqNum;       /* only for LTE channel type */
}el1_active_measure_info_ind_struct;

typedef enum
{
    NULL_MEAS,
    MEAS_ON,
    MEAS_OFF,
    CARRIER_SERACH_ON,
    CARRIER_SERACH_OFF,
    BCCH_ON,
    BCCH_OFF
}MeasPurposeE;

/* EL1_STANDBY_MEASURE_REQ_T */
typedef struct
{
   LOCAL_PARA_HDR
   MeasPurposeE            MeasPurpose;
}el1_standby_measure_req_struct;

/* EL1_AUTO_GAP_AVAILABLE_IND_T */
typedef struct
{
   LOCAL_PARA_HDR
   kal_bool            available;
}el1_auto_gap_available_ind_struct;


typedef struct {
    LOCAL_PARA_HDR
    kal_uint16    LTE_scan_active_duration_1xRTT;  /* unit in milisecond, value range [1..10000], 0xFFFF means invalid (feature off) */
    kal_uint16    LTE_scan_active_duration_DO;     /* unit in milisecond, value range [1..1000], 0xFFFF means invalid (feature off) */
    kal_bool      IsStopGapAdv;                    /* to indicate special case that need stop LTE MMO standby measure in gap range */
    kal_bool      IsDoSigProtectInGap;             /* to indicate special case that need send Do protect signal start in gap range */
    kal_bool      IsRttSigProtectInGap;            /* to indicate special case that need send RTT protect signal start in gap range */
}
ll1a_script_lte_scan_c2k_active_params_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool         IsProtect;     /* to indicate ps signal need protect or not */
}
ll1a_script_ps_mmo_signal_protect_ind_struct;

typedef enum
{
    STUB_RSVAS_SUSPEND,
    STUB_RSVAS_RESUME
} ScriptRsvasSupendResumeT;

typedef struct {
    LOCAL_PARA_HDR
    ScriptRsvasSupendResumeT         RsvasCmdType;     /* to indicate rsvas cmd type to ll1stub */
}
ll1stub_script_rsvas_suspend_resume_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
}rsvas_cl1_ll1_resume_ind_struct, rsvas_cl1_ll1_suspend_ind_struct; /* for send msg to LL1A */


typedef struct {
    LOCAL_PARA_HDR
}el1_stop_gap_ind_struct;


#endif
#endif
